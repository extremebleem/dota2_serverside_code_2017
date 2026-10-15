
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ToBotScript  (line 20, @0x0000000002855fb0, libserver.so)  // inlines: GetClassScriptDesc
// calls: GetScriptDesc<CDOTA_Bot_Script>, DOTACommander, CDOTA_Commander::GetActiveScriptVM
// callers: CDOTA_Bot_Script::Action_MoveToUnit, CDOTA_Bot_Script::Action_AttackUnit, CDOTA_Bot_Script::Action_UseAbilityOnEntity, CDOTA_Bot_Script::WasRecentlyDamagedByHero, CDOTA_Bot_Script::TimeSinceDamagedByHero, CDOTA_Bot_Script::SetTarget, CDOTA_Bot_Script::GetEstimatedDamageToTarget, Script_GetCourierState, Script_UnitToUnitDistance, Script_UnitToLocationDistance, Script_GetUnitPotentialValue, Script_GetShrineCooldown (16 total)
CDOTA_Bot_Script *__fastcall ToBotScript(HSCRIPT hBotScriptHandle, IScriptVM *pVM)
{
  IScriptVM *ActiveScriptVM; // rbx
  CDOTA_Bot_Script *(__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CDOTA_Commander *v7; // rax

  ActiveScriptVM = pVM;
  if ( pVM == 0 )
  {
    v7 = DOTACommander();
    ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v7);
  }
  v4 = *(*ActiveScriptVM + 208LL);
  Script = GetScriptDesc<CDOTA_Bot_Script>(0);
  return v4(ActiveScriptVM, hBotScriptHandle, Script);
}


// BuildLocationList  (line 75, @0x000000000284ea50, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<Vector2D>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, LookupEntity, ToDOTABaseNPC, Vector2D, VectorAdd, VectorMultiply, end, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator[]
// calls: __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, FindUnitsInRadius, CBaseEntity::GetHealth, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, __cxa_guard_release, __cxa_atexit, CUtlMemory<Vector2D, int>::Grow
// callers: CDOTA_Bot_Script::FindAoELocation
// globals: `guard variable for'BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets, BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets, CEntityHandle::gm_pEntityList, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
void __fastcall BuildLocationList(
        int iTeamNumber,
        int iTargetType,
        int iTargetRelationship,
        const Vector *const vBaseLocation,
        int nRangeFromBase,
        int nRadius,
        float fTimeInFuture,
        CUtlVector<Vector2D,CUtlMemory<Vector2D,int> > *const vLocations,
        int nMaxHealth)
{
  CHandle<CBaseEntity> *m_pMemory; // r13
  CHandle<CBaseEntity> *v13; // r14
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const CBaseEntity *m_pInstance; // r15
  CDOTALocomotor *v17; // rax
  float v18; // xmm1_4
  const Vector *AbsOrigin; // rax
  int m_Size; // r15d
  float v21; // xmm0_4
  float v22; // xmm1_4
  int v23; // edx
  Vector2D *v24; // rax
  float vBaseLocationb; // [rsp+20h] [rbp-60h]
  float iTeamNumberb; // [rsp+2Ch] [rbp-54h]
  EHANDLE hTarget; // [rsp+30h] [rbp-50h]
  unsigned __int64 v32; // [rsp+40h] [rbp-40h]

  if ( `guard variable for'BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets == 0
    && __cxa_guard_acquire(&`guard variable for'BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets) != 0 )
  {
    BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets.m_Size = 0;
    BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets.m_Memory.m_pMemory = 0;
    BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets.m_Memory.m_nAllocationCount = 0;
    BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets);
    __cxa_atexit(
      CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
      &BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets,
      &_dso_handle);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets);
  FindUnitsInRadius(
    iTeamNumber,
    vBaseLocation,
    0,
    ((fTimeInFuture + 400.0) + nRadius + nRangeFromBase),
    &BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets,
    iTargetRelationship,
    iTargetType,
    128,
    0,
    0);
  m_pMemory = BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets.m_Memory.m_pMemory;
  v13 = &BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets.m_Memory.m_pMemory[BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets.m_Size];
  if ( BuildLocationList(int,int,int,Vector const&,int,int,CUtlVector<Vector2D,CUtlMemory<Vector2D,int>> &,float,int)::vecTargets.m_Memory.m_pMemory != v13 )
  {
    do
    {
      while ( 1 )
      {
        hTarget.m_Index = m_pMemory->m_Index;
        if ( m_pMemory->m_Index + 2 > 1 )
        {
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[hTarget.m_Index & 0x1FF];
            if ( v15 != 0 && m_pMemory->m_Index == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (nMaxHealth <= 0 || nMaxHealth >= CBaseEntity::GetHealth(v15->m_pInstance)) )
              {
                v17 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
                v32 = CDOTALocomotor::GetAverageVelocityOverTime(v17, 2.0, v18).m128i_u64[0];
                AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                m_Size = vLocations->m_Size;
                v21 = (*&v32 * fTimeInFuture) + AbsOrigin->x;
                v22 = (*(&v32 + 1) * fTimeInFuture) + AbsOrigin->y;
                if ( vLocations->m_Size == vLocations->m_Memory.m_nAllocationCount )
                {
                  vBaseLocationb = (*(&v32 + 1) * fTimeInFuture) + AbsOrigin->y;
                  iTeamNumberb = (*&v32 * fTimeInFuture) + AbsOrigin->x;
                  CUtlMemory<Vector2D,int>::Grow(&vLocations->m_Memory, 1);
                  v23 = vLocations->m_Size;
                  v22 = vBaseLocationb;
                  v21 = iTeamNumberb;
                }
                else
                {
                  v23 = vLocations->m_Size;
                }
                vLocations->m_Size = v23 + 1;
                v24 = &vLocations->m_Memory.m_pMemory[m_Size];
                if ( v24 != 0 )
                  break;
              }
            }
          }
        }
        if ( v13 == ++m_pMemory )
          return;
      }
      ++m_pMemory;
      v24->x = v21;
      v24->y = v22;
    }
    while ( v13 != m_pMemory );
  }
}


// FindOptimalTargetLocation  (line 97, @0x000000000282bbb0, libserver.so)  // inlines: FastSqrt, Length, LengthSqr, NormalizeInPlace, Vector2DAdd, Vector2DDivide, Vector2DLength, Vector2DMultiply, Vector2DNormalize, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator/, operator/=, operator=, operator[]
// calls: sqrtf
// callers: CDOTA_Bot_Script::FindAoELocation
// globals: ._1057
void __fastcall FindOptimalTargetLocation(
        CUtlVector<Vector2D,CUtlMemory<Vector2D,int> > *const vecLocations,
        float fRadius,
        Vector2D *pTargetLoc,
        int *pTargetCount,
        float fBuffer,
        __m128 a6)
{
  float v6; // xmm10_4
  int m_Size; // r8d
  float v8; // xmm9_4
  float v9; // xmm7_4
  __int64 v10; // r15
  int v11; // ebx
  __int64 v12; // r14
  __int64 v13; // r12
  Vector2D *m_pMemory; // rsi
  float *v15; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  Vector2D *v22; // rcx
  __m128 y_low; // xmm13
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm12_4
  __m128 v27; // xmm14
  Vector2D *v28; // rcx
  int v29; // r10d
  float v30; // xmm12_4
  float *v31; // r9
  Vector2D *v32; // rax

  m_Size = vecLocations->m_Size;
  if ( vecLocations->m_Size == 1 )
  {
    *pTargetLoc = *vecLocations->m_Memory.m_pMemory;
    *pTargetCount = 1;
  }
  else
  {
    v8 = fRadius * fRadius;
    v9 = (fRadius - fBuffer) * (fRadius - fBuffer);
    if ( m_Size <= 0 )
    {
      *pTargetLoc = vec2_origin;
      *pTargetCount = 0;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = v10;
        v13 = 0;
        do
        {
          if ( v10 != v13 )
          {
            m_pMemory = vecLocations->m_Memory.m_pMemory;
            v15 = &m_pMemory[v13];
            x = m_pMemory[v10].x;
            y = m_pMemory[v12].y;
            v18 = (*v15 + x) * 0.5;
            v19 = (v15[1] + y) * 0.5;
            v20 = ((v18 - x) * (v18 - x)) + ((v19 - y) * (v19 - y));
            if ( v20 <= v9 )
            {
              v21 = fsqrt(v9 - v20);
              v22 = &m_pMemory[v13];
              y_low = LODWORD(v22->y);
              y_low.m128_f32[0] = y_low.m128_f32[0] - m_pMemory[v12].y;
              v24 = -(v22->x - m_pMemory[v10].x);
              v25 = fsqrt((y_low.m128_f32[0] * y_low.m128_f32[0]) + (v24 * v24));
              if ( v25 == 0.0 )
              {
                v26 = 0.0;
                y_low = 0;
              }
              else
              {
                y_low.m128_f32[0] = y_low.m128_f32[0] * (1.0 / v25);
                v26 = (1.0 / v25) * v24;
              }
              y_low.m128_f32[0] = y_low.m128_f32[0] * v21;
              v27 = a6;
              v28 = &m_pMemory[m_Size];
              v29 = v11;
              v30 = v26 * v21;
              v31 = &_1057;
              while ( 1 )
              {
                a6 = y_low;
                a6.m128_f32[0] = (y_low.m128_f32[0] * *v31) + v18;
                if ( m_pMemory == v28 )
                  goto LABEL_20;
                v32 = vecLocations->m_Memory.m_pMemory;
                v11 = 0;
                do
                {
                  if ( (v8 + 0.001) > (((v32->x - a6.m128_f32[0]) * (v32->x - a6.m128_f32[0]))
                                     + ((v32->y - ((*v31 * v30) + v19)) * (v32->y - ((*v31 * v30) + v19)))) )
                    ++v11;
                  ++v32;
                }
                while ( v28 != v32 );
                if ( v11 <= v29 )
                {
LABEL_20:
                  a6 = v27;
                  v11 = v29;
                }
                else
                {
                  v6 = (*v31 * v30) + v19;
                }
                if ( ++v31 == &unk_33FE3C8 )
                  break;
                v27 = a6;
                v29 = v11;
              }
            }
          }
          ++v13;
        }
        while ( v13 < m_Size );
        ++v10;
      }
      while ( v10 < m_Size );
      if ( v11 != 0 )
      {
        LODWORD(pTargetLoc->x) = a6.m128_i32[0];
        pTargetLoc->y = v6;
        *pTargetCount = v11;
      }
      else
      {
        *pTargetLoc = *vecLocations->m_Memory.m_pMemory;
        *pTargetCount = 1;
      }
    }
  }
}


// CDOTA_Bot_Script::CDOTA_Bot_Script  (line 175, @0x000000000282bf50, libserver.so)  // inlines: CEntityHandle, CHandle
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_Bot_Script::CDOTA_Bot_Script(CDOTA_Bot_Script *const this)
{
  __int64 v1; // rax

  this->_vptr_CDOTA_Bot_Script = &off_42B90A0;
  v1 = 0;
  this->m_hBaseNPC.m_Index = -1;
  this->m_pBot = 0;
  this->m_hBotBaseScriptScope = 0;
  this->m_hBotItemPurchaseScriptScope = 0;
  this->m_hBotItemAbilityUsageScriptScope = 0;
  do
  {
    *(this->m_hScriptHandle + v1) = 0;
    v1 += 8;
  }
  while ( v1 != 112 );
  LOBYTE(v1) = 0;
  do
  {
    *(this->m_hBotModeScriptScope + v1) = 0;
    v1 += 8;
  }
  while ( v1 != 208 );
  this->m_nNextItemPurchaseValue = 0;
}


// CDOTA_Bot_Script::SetBaseNPC  (line 194, @0x000000000282bfd0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CDOTA_BaseNPC::Activate
void __fastcall CDOTA_Bot_Script::SetBaseNPC(CDOTA_Bot_Script *const this, CDOTA_BaseNPC *pBaseNPC)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( pBaseNPC != 0 && (m_pEntity = pBaseNPC->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v4 = 0x7FFF;
    else
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hBaseNPC.m_Index) = v4 | this->m_hBaseNPC.m_Index & 0x8000;
    this->m_hBaseNPC.m_Index = (v3 << 15) | this->m_hBaseNPC.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hBaseNPC.m_Index = -1;
  }
}


// CDOTA_Bot_Script::SetBot  (line 199, @0x00000000028405a0, libserver.so)  // inlines: GetScriptDirectory, IsUsingBotScript, Length, String, V_strlen
// calls: strlen, CUtlString::Get, CDOTA_Bot_Script::InitScripts
// callers: CDOTA_BaseNPC::SetBot
void __fastcall CDOTA_Bot_Script::SetBot(CDOTA_Bot_Script *const this, CDOTA_Bot *pBot)
{
  CDOTA_TeamCommander *m_pTeamCommander; // r12
  const char *m_pString; // rdi
  const char *v5; // rax

  this->m_pBot = pBot;
  if ( pBot != 0 )
  {
    m_pTeamCommander = pBot->m_pTeamCommander;
    m_pString = m_pTeamCommander->m_sScriptDirectory.m_pString;
    if ( m_pString != 0 && strlen(m_pString) > 0 )
    {
      v5 = CUtlString::Get(&m_pTeamCommander->m_sScriptDirectory);
      CDOTA_Bot_Script::InitScripts(this, v5, 0);
    }
  }
}


// CDOTA_Bot_Script::GetScriptHandle  (line 211, @0x000000000282c040, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_Commander::GetActiveScriptVM
// callers: CDOTABaseAbility_BotScript::GetCaster, Script_GetTower, Script_GetBarracks, Script_GetShrine, Script_GetAncient, Script_GetBot, CDOTA_Bot_Script::GetTarget, Script_GetTeamMember, Script_GetRoamTarget, Script_GetCourier, CDOTA_Bot_Script::GetAttackTarget, CDOTA_Bot_Script::DoBotScriptMinionThink (18 total)
HSCRIPT __fastcall CDOTA_Bot_Script::GetScriptHandle(CDOTA_Bot_Script *const this)
{
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax
  int (***v4)(...); // r12
  HSCRIPT result; // rax
  CDOTA_Commander *v6; // rax
  CDOTA_Commander *v7; // rax
  IScriptVM *ActiveScriptVM; // r13
  __int64 (__fastcall *v9)(IScriptVM *, __int64, CDOTA_Bot_Script *const); // r14
  __int64 v10; // rax

  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  if ( TeamRunningScript == DOTATeam_t::DOTA_TEAM_NOTEAM )
    return 0;
  v4 = &this->_vptr_CDOTA_Bot_Script + TeamRunningScript;
  result = v4[3];
  if ( result == 0 )
  {
    v6 = DOTACommander();
    if ( CDOTA_Commander::GetActiveScriptVM(v6) != 0 )
    {
      v7 = DOTACommander();
      ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v7);
      v9 = *(*ActiveScriptVM + 184LL);
      v10 = (*this->_vptr_CDOTA_Bot_Script)(this);
      result = v9(ActiveScriptVM, v10, this);
      v4[3] = result;
    }
    else
    {
      return v4[3];
    }
  }
  return result;
}


// CDOTA_Bot_Script::LoadScript  (line 227, @0x000000000282c5a0, libserver.so)  // inlines: Get, GetBot, GetInstance, SetBotRunningScript, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, DOTACommander, Warning
// callers: CDOTA_Bot_Script::LoadSpecificOrGenericScript
// strings: "Failed to run script '%s'!\n", "Failed to compile script '%s'!\n", "Attempt to set bot script prior to bot VM being created!\n"
bool __fastcall CDOTA_Bot_Script::LoadScript(
        CDOTA_Bot_Script *const this,
        const char *pszScriptFile,
        const char *pszScopeName,
        HSCRIPT *pScriptScope,
        bool bRecreateScope)
{
  bool result; // al
  CEntityInstance *v10; // rax
  CDOTA_Bot *m_pBot; // rax
  IScriptVM *m_pBotScriptVM; // r15
  CDOTA_Commander *v13; // rax
  HSCRIPT v14; // rsi
  bool v15; // r12
  HSCRIPT hScript[7]; // [rsp+18h] [rbp-38h] BYREF

  result = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
             &g_pFullFileSystem->IBaseFileSystem,
             pszScriptFile,
             "GAME");
  if ( !result )
    return result;
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    m_pBot = this->m_pBot;
  else
    m_pBot = 0;
  m_pBotScriptVM = m_pBot->m_pTeamCommander->m_pBotScriptVM;
  if ( m_pBotScriptVM == 0 )
  {
    Warning("Attempt to set bot script prior to bot VM being created!\n");
    return 0;
  }
  if ( (*(*m_pBotScriptVM + 464LL))(m_pBotScriptVM, pszScriptFile, "GAME", hScript) != 0 )
  {
    Warning("Failed to compile script '%s'!\n", pszScriptFile);
    return 0;
  }
  if ( bRecreateScope )
  {
    if ( *pScriptScope != 0 )
    {
      (*(*m_pBotScriptVM + 136LL))(m_pBotScriptVM);
      *pScriptScope = 0;
    }
  }
  else if ( *pScriptScope != 0 )
  {
    goto LABEL_12;
  }
  *pScriptScope = (*(*m_pBotScriptVM + 120LL))(m_pBotScriptVM, pszScopeName, 0);
LABEL_12:
  v13 = DOTACommander();
  v14 = hScript[0];
  v13->m_pBotScript = this;
  v15 = (*(*m_pBotScriptVM + 104LL))(m_pBotScriptVM, v14, *pScriptScope, 1) != -1;
  (*(*m_pBotScriptVM + 96LL))(m_pBotScriptVM, hScript[0]);
  if ( !v15 )
  {
    (*(*m_pBotScriptVM + 136LL))(m_pBotScriptVM, *pScriptScope);
    Warning("Failed to run script '%s'!\n", pszScriptFile);
  }
  DOTACommander()->m_pBotScript = 0;
  return v15;
}


// CDOTA_Bot_Script::InitScripts  (line 277, @0x0000000002840300, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, V_strcpy_safe<128ul>, operator CBaseEntity*, operator CEntityInstance*
// calls: CFmtStrN<256, false>::CFmtStrN, CDOTA_Bot_Script::LoadSpecificOrGenericScript, _V_strncpy, V_strlower_fast, __stack_chk_fail
// callers: CDOTA_Bot_Script::InitScripts
// strings: "%s\\bot_%%s.lua", "BotBaseScriptScope", "%s\\item_purchase_%%s.lua", "BotItemPurchaseScriptScope", "%s\\ability_item_usage_%%s.lua", "BotItemAbilityUsageScriptScope" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::InitScripts(
        CDOTA_Bot_Script *const this,
        const char *pszScriptDirectory,
        bool bReload)
{
  bool v6; // r8
  __int64 v7; // r15
  HSCRIPT__ **m_hBotModeScriptScope; // r12
  uint32 m_Index; // eax
  CDOTA_Bot *m_pBot; // rcx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  char pszModeName[128]; // [rsp+20h] [rbp-1D0h] BYREF
  CFmtStrN<256,false> v16; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v17; // [rsp+1B8h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  CFmtStrN<256,false>::CFmtStrN(&v16, "%s\\bot_%%s.lua", pszScriptDirectory);
  CDOTA_Bot_Script::LoadSpecificOrGenericScript(
    this,
    v16.m_szBuf,
    "BotBaseScriptScope",
    &this->m_hBotBaseScriptScope,
    bReload);
  CFmtStrN<256,false>::CFmtStrN(&v16, "%s\\item_purchase_%%s.lua", pszScriptDirectory);
  CDOTA_Bot_Script::LoadSpecificOrGenericScript(
    this,
    v16.m_szBuf,
    "BotItemPurchaseScriptScope",
    &this->m_hBotItemPurchaseScriptScope,
    bReload);
  CFmtStrN<256,false>::CFmtStrN(&v16, "%s\\ability_item_usage_%%s.lua", pszScriptDirectory);
  v6 = bReload;
  v7 = 0;
  CDOTA_Bot_Script::LoadSpecificOrGenericScript(
    this,
    v16.m_szBuf,
    "BotItemAbilityUsageScriptScope",
    &this->m_hBotItemAbilityUsageScriptScope,
    v6);
  m_hBotModeScriptScope = this->m_hBotModeScriptScope;
  do
  {
    m_Index = this->m_hBaseNPC.m_Index;
    m_pBot = 0;
    if ( m_Index + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v12 != 0
          && m_Index == v12->m_EHandle.m_Index
          && v12->m_pInstance != 0
          && BYTE3(v12->m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pBot = this->m_pBot;
        }
      }
    }
    if ( m_pBot->m_pBotModes[v7] != 0 )
    {
      _V_strncpy(pszModeName, pszBotModeStrings[v7], 128);
      V_strlower_fast(pszModeName);
      CFmtStrN<256,false>::CFmtStrN(&v16, "%s\\mode_%s_%%s.lua", pszScriptDirectory, pszModeName);
      CDOTA_Bot_Script::LoadSpecificOrGenericScript(
        this,
        v16.m_szBuf,
        "BotModeScriptScope",
        m_hBotModeScriptScope,
        bReload);
    }
    ++v7;
    ++m_hBotModeScriptScope;
  }
  while ( v7 != 26 );
}


// CDOTA_Bot_Script::InitScripts  (line 277, @0x0000000002840520, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::InitScripts
// callers: CDOTA_Bot_Script::SetBot, CDOTA_Bot_Script::ReloadScripts
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::InitScripts(
        CDOTA_Bot_Script *const this,
        const char *pszScriptDirectory,
        bool bReload)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CDOTA_Bot *m_pBot; // rax

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
        if ( m_pBot != 0 && !m_pBot->m_bHuman )
          CDOTA_Bot_Script::InitScripts(this, pszScriptDirectory, bReload);
      }
    }
  }
}


// CDOTA_Bot_Script::LoadSpecificOrGenericScript  (line 303, @0x0000000002840140, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, _V_strstr, operator CBaseEntity*, operator CEntityInstance*, strstr
// calls: strstr, CFmtStrN<256, false>::CFmtStrN, CDOTA_Bot_Script::LoadScript, __stack_chk_fail
// callers: CDOTA_Bot_Script::InitScripts
// strings: "npc_dota_hero_", "BotBaseScriptScope"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::LoadSpecificOrGenericScript(
        CDOTA_Bot_Script *const this,
        const char *pszScriptFileBase,
        const char *pszScopeName,
        HSCRIPT *pScriptScope,
        bool bRecreateScope)
{
  HSCRIPT *v5; // r14
  uint32 m_Index; // edx
  CEntityIdentity *v8; // rax
  HSCRIPT v9; // r12
  __int64 v10; // rcx
  bool v11; // zf
  HSCRIPT v12; // rax
  const char *v14; // rdx
  const char *v15; // r15
  bool result; // al
  CFmtStrN<256,false> v19; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v20; // [rsp+128h] [rbp-38h]

  v5 = pScriptScope;
  v20 = __readfsqword(0x28u);
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (pScriptScope = LOWORD(this->m_hBaseNPC.m_Index),
        (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(pScriptScope >> 9) & 0x3F]) != 0) )
  {
    v9 = 0;
    v10 = pScriptScope & 0x1FF;
    v11 = &v8[v10] == 0;
    pScriptScope = &v8[v10];
    v12 = 0;
    if ( !v11 && m_Index == *(pScriptScope + 4) )
    {
      v9 = *pScriptScope;
      if ( *pScriptScope != 0 && *(v9 + 339) != 0 )
        v12 = *pScriptScope;
    }
  }
  else
  {
    v9 = 0;
    v12 = 0;
  }
  if ( *(v12 + 423) == 0 || (v15 = *(v12 + 423)) != strstr(v15, "npc_dota_hero_") || (v14 = v15 + 14, v15 == -14LL) )
  {
    if ( v9 == 0 || *(v9 + 339) == 0 )
      v9 = 0;
    v14 = "";
    if ( *(v9 + 423) != 0 )
      v14 = *(v9 + 423);
  }
  CFmtStrN<256,false>::CFmtStrN(&v19, pszScriptFileBase, v14, pScriptScope);
  result = CDOTA_Bot_Script::LoadScript(this, v19.m_szBuf, pszScopeName, v5, bRecreateScope);
  if ( !result )
  {
    CFmtStrN<256,false>::CFmtStrN(&v19, pszScriptFileBase, "generic");
    return CDOTA_Bot_Script::LoadScript(this, v19.m_szBuf, "BotBaseScriptScope", v5, bRecreateScope);
  }
  return result;
}


// CDOTA_Bot_Script::ReloadScripts  (line 322, @0x0000000002840600, libserver.so)
// calls: CDOTA_Bot_Script::InitScripts
// callers: CDOTA_Bot::ReloadScripts
void __fastcall CDOTA_Bot_Script::ReloadScripts(CDOTA_Bot_Script *const this, const char *pszScriptDirectory)
{
  CDOTA_Bot_Script::InitScripts(this, pszScriptDirectory, 1);
}


// CDOTA_Bot_Script::RunScriptFunction  (line 329, @0x000000000282c9f0, libserver.so)
// calls: CDOTA_Bot_Script::RunScriptFunctionParam
// callers: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::DoScriptOnEnd, CDOTA_BotMode::DoScriptThink, CDOTA_BotMode::GetScriptDesire
bool __fastcall CDOTA_Bot_Script::RunScriptFunction(
        CDOTA_Bot_Script *const this,
        const char *pszFunctionName,
        HSCRIPT hScriptScope,
        ScriptVariant_t *pResult)
{
  return CDOTA_Bot_Script::RunScriptFunctionParam(this, pszFunctionName, hScriptScope, 0, pResult);
}


// CDOTA_Bot_Script::RunScriptFunctionParam  (line 334, @0x000000000282c760, libserver.so)  // inlines: CVProfScope, Get, GetBaseNPC, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsEnabled, IsValid, LookupEntity, SetBotRunningScript, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CVProfScope
// calls: DOTACommander, Plat_FloatTime, CEntityHandle::operator CEntityInstance*, Msg, CVProfile::ExitScope, CVProfile::EnterScope, _Unwind_Resume
// callers: CDOTA_Bot_Script::RunScriptFunction, CDOTA_Bot_Script::DoBotScriptBaseThink, CDOTA_Bot_Script::DoBotScriptItemPurchaseThink, CDOTA_Bot_Script::DoBotScriptItemUsageThink, CDOTA_Bot_Script::DoBotScriptAbilityUsageThink, CDOTA_Bot_Script::DoBotScriptAbilityLevelUpThink, CDOTA_Bot_Script::DoBotScriptCourierUsageThink, CDOTA_Bot_Script::DoBotScriptBuybackUsageThink, CDOTA_Bot_Script::DoBotScriptMinionThink
// strings: "Script function '%s' on bot %s took %2.3fms\n", "CDOTA_Bot_Script::RunScriptFunction"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::RunScriptFunctionParam(
        CDOTA_Bot_Script *const this,
        const char *pszFunctionName,
        HSCRIPT hScriptScope,
        ScriptVariant_t *pParam,
        ScriptVariant_t *pResult)
{
  int m_enabled; // r11d
  bool v9; // r14
  uint32 m_Index; // eax
  CDOTA_Bot *m_pBot; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  IScriptVM *m_pBotScriptVM; // rbx
  __int64 v15; // r13
  __m128d v16; // xmm0
  float v17; // xmm3_4
  __m128d v18; // xmm0
  float v19; // xmm2_4
  CEntityInstance *v20; // rax
  const char *m_pAsString; // rdx
  bool result; // al
  float fStart; // [rsp+Ch] [rbp-44h]
  float fDurationMSa; // [rsp+10h] [rbp-40h]
  bool pszFunctionNameb; // [rsp+18h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v9 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot_Script::RunScriptFunction", 0, "Bots", 0, 4);
  if ( hScriptScope != 0 )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    m_pBot = 0;
    if ( m_Index + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v13 != 0
          && m_Index == v13->m_EHandle.m_Index
          && v13->m_pInstance != 0
          && BYTE3(v13->m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pBot = this->m_pBot;
        }
      }
    }
    m_pBotScriptVM = m_pBot->m_pTeamCommander->m_pBotScriptVM;
    if ( m_pBotScriptVM != 0 )
    {
      v15 = (*(*m_pBotScriptVM + 144LL))(m_pBotScriptVM, pszFunctionName, hScriptScope, 0);
      if ( v15 != 0 )
      {
        DOTACommander()->m_pBotScript = this;
        v16.m128d_f64[0] = Plat_FloatTime();
        v17 = _mm_movedup_pd(v16).m128d_f64[0];
        fStart = v17;
        (*(*m_pBotScriptVM + 160LL))(m_pBotScriptVM, v15, pParam, pParam != 0, pResult, 0, 1);
        (*(*m_pBotScriptVM + 152LL))(m_pBotScriptVM, v15);
        v18.m128d_f64[0] = (Plat_FloatTime() - fStart) * 1000.0;
        v19 = _mm_movedup_pd(v18).m128d_f64[0];
        fDurationMSa = v19;
        DOTACommander()->m_pBotScript = 0;
        if ( fDurationMSa > 2.0 )
        {
          v20 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
          if ( v20 == 0 || BYTE3(v20[7]._vptr_IHandleEntity) == 0 )
            v20 = 0;
          m_pAsString = "";
          if ( v20[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = v20[70].m_iszPrivateVScripts.u.m_pAsString;
          Msg("Script function '%s' on bot %s took %2.3fms\n", pszFunctionName, m_pAsString, fDurationMSa);
        }
        result = 1;
        if ( v9 )
          goto LABEL_19;
        return result;
      }
    }
  }
  result = 0;
  if ( !v9 )
    return result;
LABEL_19:
  pszFunctionNameb = result;
  CVProfile::ExitScope(&g_VProfCurrentProfile);
  return pszFunctionNameb;
}


// CDOTA_Bot_Script::DoBotScriptBaseThink  (line 370, @0x000000000282ca00, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, RunScriptFunction, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_Bot_Script::RunScriptFunctionParam, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::DoBotScriptBaseThink
// strings: "CDOTA_BaseNPC::DoBotScriptBaseThink"
bool __fastcall CDOTA_Bot_Script::DoBotScriptBaseThink(CDOTA_Bot_Script *const this)
{
  bool v2; // r13
  bool result; // al
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v5; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v8; // rax
  bool v9; // [rsp+Ch] [rbp-34h]

  v2 = g_VProfCurrentProfile.m_enabled != 0;
  if ( g_VProfCurrentProfile.m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v5 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BaseNPC::DoBotScriptBaseThink" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BaseNPC::DoBotScriptBaseThink",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v8 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v8->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v5 + __rdtsc();
  }
  result = CDOTA_Bot_Script::RunScriptFunctionParam(this, "Think", this->m_hBotBaseScriptScope, 0, 0);
  if ( v2 )
  {
    v9 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v9;
  }
  return result;
}


// CDOTA_Bot_Script::DoBotScriptItemPurchaseThink  (line 379, @0x000000000282cb70, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, RunScriptFunction, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_Bot_Script::RunScriptFunctionParam, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::DoBotScriptItemPurchaseThink
// strings: "ItemPurchaseThink", "CDOTA_BaseNPC::DoBotScriptItemPurchaseThink"
bool __fastcall CDOTA_Bot_Script::DoBotScriptItemPurchaseThink(CDOTA_Bot_Script *const this)
{
  int m_enabled; // r14d
  bool v3; // r13
  bool result; // al
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  bool v10; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BaseNPC::DoBotScriptItemPurchaseThink" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BaseNPC::DoBotScriptItemPurchaseThink",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v9 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v9->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_Bot_Script::RunScriptFunctionParam(
             this,
             "ItemPurchaseThink",
             this->m_hBotItemPurchaseScriptScope,
             0,
             0);
  if ( v3 )
  {
    v10 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v10;
  }
  return result;
}


// CDOTA_Bot_Script::DoBotScriptItemUsageThink  (line 388, @0x000000000282cce0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, RunScriptFunction, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_Bot_Script::RunScriptFunctionParam, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::DoBotScriptItemUsageThink
// strings: "ItemUsageThink", "CDOTA_BaseNPC::DoBotScriptItemUsageThink"
bool __fastcall CDOTA_Bot_Script::DoBotScriptItemUsageThink(CDOTA_Bot_Script *const this)
{
  int m_enabled; // r15d
  bool v3; // r13
  bool result; // al
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  bool v10; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BaseNPC::DoBotScriptItemUsageThink" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BaseNPC::DoBotScriptItemUsageThink",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v9 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v9->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_Bot_Script::RunScriptFunctionParam(
             this,
             "ItemUsageThink",
             this->m_hBotItemAbilityUsageScriptScope,
             0,
             0);
  if ( v3 )
  {
    v10 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v10;
  }
  return result;
}


// CDOTA_Bot_Script::DoBotScriptAbilityUsageThink  (line 397, @0x000000000282ce50, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, RunScriptFunction, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_Bot_Script::RunScriptFunctionParam, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::DoBotScriptAbilityUsageThink
// strings: "AbilityUsageThink", "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink"
bool __fastcall CDOTA_Bot_Script::DoBotScriptAbilityUsageThink(CDOTA_Bot_Script *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  bool result; // al
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  bool v10; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v9 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v9->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_Bot_Script::RunScriptFunctionParam(
             this,
             "AbilityUsageThink",
             this->m_hBotItemAbilityUsageScriptScope,
             0,
             0);
  if ( v3 )
  {
    v10 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v10;
  }
  return result;
}


// CDOTA_Bot_Script::DoBotScriptAbilityLevelUpThink  (line 406, @0x000000000282cfc0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, RunScriptFunction, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_Bot_Script::RunScriptFunctionParam, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::DoBotScriptLevelUpAbilitiesThink
// strings: "AbilityLevelUpThink", "CDOTA_BaseNPC::DoBotScriptAbilityLevelUpThink"
bool __fastcall CDOTA_Bot_Script::DoBotScriptAbilityLevelUpThink(CDOTA_Bot_Script *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  bool result; // al
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  bool v10; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BaseNPC::DoBotScriptAbilityLevelUpThink" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BaseNPC::DoBotScriptAbilityLevelUpThink",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v9 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v9->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_Bot_Script::RunScriptFunctionParam(
             this,
             "AbilityLevelUpThink",
             this->m_hBotItemAbilityUsageScriptScope,
             0,
             0);
  if ( v3 )
  {
    v10 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v10;
  }
  return result;
}


// CDOTA_Bot_Script::DoBotScriptCourierUsageThink  (line 415, @0x000000000282d130, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, RunScriptFunction, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_Bot_Script::RunScriptFunctionParam, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::DoBotScriptCourierUsageThink
// strings: "CourierUsageThink", "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink"
bool __fastcall CDOTA_Bot_Script::DoBotScriptCourierUsageThink(CDOTA_Bot_Script *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  bool result; // al
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  bool v10; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v9 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v9->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_Bot_Script::RunScriptFunctionParam(
             this,
             "CourierUsageThink",
             this->m_hBotItemAbilityUsageScriptScope,
             0,
             0);
  if ( v3 )
  {
    v10 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v10;
  }
  return result;
}


// CDOTA_Bot_Script::DoBotScriptBuybackUsageThink  (line 424, @0x000000000282d2a0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, RunScriptFunction, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_Bot_Script::RunScriptFunctionParam, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::DoBotScriptBuybackUsageThink
// strings: "BuybackUsageThink", "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink"
bool __fastcall CDOTA_Bot_Script::DoBotScriptBuybackUsageThink(CDOTA_Bot_Script *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  bool result; // al
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  bool v10; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v9 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v9->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_Bot_Script::RunScriptFunctionParam(
             this,
             "BuybackUsageThink",
             this->m_hBotItemAbilityUsageScriptScope,
             0,
             0);
  if ( v3 )
  {
    v10 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v10;
  }
  return result;
}


// CDOTA_Bot_Script::DoBotScriptMinionThink  (line 431, @0x0000000002841dd0, libserver.so)  // inlines: CVProfScope, CVariantBase, Free, IsEnabled, SetBotRunningScript, ~CVProfScope, ~CVariantBase
// calls: DOTACommander, CDOTA_Bot_Script::GetScriptHandle, CDOTA_Bot_Script::RunScriptFunctionParam, CVProfile::ExitScope, CVProfile::EnterScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_Bot::DoBotScriptMinionThink
// strings: "MinionThink", "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink"
bool __fastcall CDOTA_Bot_Script::DoBotScriptMinionThink(CDOTA_Bot_Script *const this, CDOTA_BaseNPC *pMinion)
{
  bool v4; // r13
  HSCRIPT ScriptHandle; // rax
  HSCRIPT m_hBotBaseScriptScope; // rdx
  bool result; // al
  bool v8; // [rsp+Ch] [rbp-34h]
  bool v9; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t scriptVar; // [rsp+10h] [rbp-30h] BYREF

  v4 = g_VProfCurrentProfile.m_enabled != 0;
  if ( g_VProfCurrentProfile.m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BaseNPC::DoBotScriptAbilityUsageThink", 0, "Bots", 0, 4);
  DOTACommander()->m_pBotScript = this;
  ScriptHandle = CDOTA_Bot_Script::GetScriptHandle(pMinion->m_pBotScript);
  m_hBotBaseScriptScope = this->m_hBotBaseScriptScope;
  scriptVar.m_type = 31;
  scriptVar.m_flags = 0;
  scriptVar.m_uint64 = ScriptHandle;
  result = CDOTA_Bot_Script::RunScriptFunctionParam(this, "MinionThink", m_hBotBaseScriptScope, &scriptVar, 0);
  if ( (scriptVar.m_flags & 1) != 0 )
  {
    v8 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, scriptVar.m_uint64);
    result = v8;
    scriptVar.m_flags &= ~1u;
  }
  scriptVar.m_uint64 = 0;
  scriptVar.m_type = 0;
  if ( v4 )
  {
    v9 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v9;
  }
  return result;
}


// CDOTA_Bot_Script::IsMyScriptBot  (line 443, @0x000000000282d410, libserver.so)  // inlines: Get, GetBaseNPC, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: DOTACommander, CDOTA_Commander::GetBotRunningScript, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::IsMyMinion
// callers: CDOTA_Bot_Script::Action_ClearActions, CDOTA_Bot_Script::Action_AttackMove, CDOTA_Bot_Script::Action_UseAbility, CDOTA_Bot_Script::Action_UseAbilityOnLocation, CDOTA_Bot_Script::Action_UseAbilityOnTree, CDOTA_Bot_Script::HasQueuedAction, CDOTA_Bot_Script::Action_SellItem, CDOTA_Bot_Script::Action_DisassembleItem, CDOTA_Bot_Script::Action_Buyback, CDOTA_Bot_Script::Action_Ping, CDOTA_Bot_Script::Action_PurchaseItem, CDOTA_Bot_Script::Action_PickUpRune (27 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsMyScriptBot(CDOTA_Bot_Script *const this)
{
  char v2; // bl
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_Commander *v7; // rax
  CDOTA_Bot *BotRunningScript; // r13
  CEntityInstance *v9; // rax
  CDOTA_Bot *m_pBot; // r12
  CDOTA_Commander *v11; // rax
  CDOTA_Bot *v12; // rax

  v2 = 0;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1 )
    return v2;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return v2;
  v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v5 == 0 )
    return v2;
  if ( m_Index != v5->m_EHandle.m_Index )
    return v2;
  if ( v5->m_pInstance == 0 )
    return v2;
  v2 = BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity);
  if ( v2 == 0 )
    return v2;
  if ( this->m_pBot == 0 )
    return 0;
  v7 = DOTACommander();
  BotRunningScript = CDOTA_Commander::GetBotRunningScript(v7);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    m_pBot = this->m_pBot;
  else
    m_pBot = 0;
  if ( BotRunningScript == m_pBot )
    return v2;
  v11 = DOTACommander();
  v12 = CDOTA_Commander::GetBotRunningScript(v11);
  if ( !CDOTA_Bot::IsMyMinion(v12, m_pBot) )
    return 0;
  return v2;
}


// CDOTA_Bot_Script::IsMyScriptTeam  (line 456, @0x000000000282eac0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
// callers: CDOTA_Bot_Script::GetActiveMode, CDOTA_Bot_Script::GetActiveModeDesire, CDOTA_Bot_Script::GetStashValue, CDOTA_Bot_Script::GetCourierValue, CDOTA_Bot_Script::WasRecentlyDamagedByAnyHero, CDOTA_Bot_Script::TimeSinceDamagedByAnyHero, CDOTA_Bot_Script::GetAssignedLane, CDOTA_Bot_Script::GetOffensivePower, CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetStunDuration, CDOTA_Bot_Script::GetSlowDuration, CDOTA_Bot_Script::HasBlink (29 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsMyScriptTeam(CDOTA_Bot_Script *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CDOTA_Commander *v6; // rax
  DOTATeam_t TeamRunningScript; // eax
  uint32 v8; // esi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rdx

  result = 0;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        v6 = DOTACommander();
        TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v6);
        v8 = this->m_hBaseNPC.m_Index;
        if ( v8 + 2 <= 1
          || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
          || (v10 = &v9[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
          || v8 != v10->m_EHandle.m_Index
          || (m_pInstance = v10->m_pInstance) == 0
          || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
        {
          m_pInstance = 0;
        }
        return TeamRunningScript == HIBYTE(m_pInstance[7].m_CScriptComponent);
      }
    }
  }
  return result;
}


// CDOTA_Bot_Script::IsOpposingScriptTeam  (line 461, @0x00000000028331d0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_BaseNPC::GetOpposingTeamNumber
// callers: CDOTA_Bot_Script::GetLastSeenLocation, CDOTA_Bot_Script::GetTimeSinceLastSeen
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsOpposingScriptTeam(CDOTA_Bot_Script *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CDOTA_Commander *v6; // rax
  DOTATeam_t TeamRunningScript; // eax
  uint32 v8; // ecx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  result = 0;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        v6 = DOTACommander();
        TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v6);
        v8 = this->m_hBaseNPC.m_Index;
        if ( v8 + 2 <= 1
          || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
          || (v10 = &v9[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
          || v8 != v10->m_EHandle.m_Index
          || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        return TeamRunningScript == CDOTA_BaseNPC::GetOpposingTeamNumber(m_pInstance);
      }
    }
  }
  return result;
}


// CDOTA_Bot_Script::GetDifficulty  (line 468, @0x00000000028291d0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetDifficulty(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // edx
  int result; // eax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CDOTA_Bot *m_pBot; // rdx

  m_Index = this->m_hBaseNPC.m_Index;
  result = 5;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v4 != 0
        && m_Index == v4->m_EHandle.m_Index
        && v4->m_pInstance != 0
        && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
        if ( m_pBot != 0 )
          return m_pBot->m_iDifficulty;
      }
    }
  }
  return result;
}


// CDOTA_Bot_Script::GetUnitName  (line 473, @0x0000000002829050, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_Bot_Script::GetUnitName(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax
  const char *m_pAsString; // rdx
  const char *result; // rax

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1
    || (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
    || (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
    || m_Index != v3->m_EHandle.m_Index
    || (m_pInstance = v3->m_pInstance, v3->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
  result = "";
  if ( m_pAsString != 0 )
    return m_pAsString;
  return result;
}


// CDOTA_Bot_Script::GetPlayerID  (line 478, @0x0000000002829650, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetPlayerID(CDOTA_Bot_Script *const this)
{
  CConcreteEntityList *v1; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi

  v1 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = this->m_hBaseNPC.m_Index & 0x1FF, v1 = (8 * v4), (v5 = &v3[v4]) != 0)
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


// CDOTA_Bot_Script::IsHero  (line 483, @0x0000000002828ed0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsHero, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsHero(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  _BOOL4 v4; // eax
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1;
  }
  else
  {
    LOBYTE(v4) = 0;
  }
  return v4;
}


// CDOTA_Bot_Script::IsCreep  (line 488, @0x00000000028290d0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsCreep, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsCreep(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  bool result; // al
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hBaseNPC.m_Index;
  result = m_Index + 2 > 1
        && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v3->m_EHandle.m_Index
        && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x80) != 0;
  return result;
}


// CDOTA_Bot_Script::IsTower  (line 493, @0x0000000002829150, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsTower, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsTower(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  bool result; // al
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hBaseNPC.m_Index;
  result = m_Index + 2 > 1
        && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v3->m_EHandle.m_Index
        && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 4) != 0;
  return result;
}


// CDOTA_Bot_Script::IsBuilding  (line 498, @0x0000000002828f50, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsBuilding, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsBuilding(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  bool result; // al
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hBaseNPC.m_Index;
  result = m_Index + 2 > 1
        && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v3->m_EHandle.m_Index
        && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0;
  return result;
}


// CDOTA_Bot_Script::IsFort  (line 503, @0x0000000002828fd0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsFort, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsFort(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  bool result; // al
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hBaseNPC.m_Index;
  result = m_Index + 2 > 1
        && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v3->m_EHandle.m_Index
        && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x20) != 0;
  return result;
}


// CDOTA_Bot_Script::IsIllusion  (line 508, @0x0000000002832ab0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsIllusion, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "IsIllusion", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsIllusion(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return m_pInstance[71].m_pEntity;
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "IsIllusion");
    return 0;
  }
}


// CDOTA_Bot_Script::IsBot  (line 515, @0x00000000028297f0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::IsFakeClient
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsBot(CDOTA_Bot_Script *const this)
{
  CConcreteEntityList *v1; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v7; // eax

  v1 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = this->m_hBaseNPC.m_Index & 0x1FF, v1 = (8 * v4), (v5 = &v3[v4]) == 0)
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance, v1);
  return CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v7);
}


// CDOTA_Bot_Script::Action_ClearActions  (line 522, @0x000000000282d510, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, CDOTA_Bot::ClearActions, DevWarning(char const*,...)
// strings: "Action_ClearActions", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_ClearActions(CDOTA_Bot_Script *const this, bool bStop)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v6 = &v5[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v6->m_EHandle.m_Index
      && v6->m_pInstance != 0
      && BYTE3(v6->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      CDOTA_Bot::ClearActions(this->m_pBot, 1, bStop);
    }
    else
    {
      CDOTA_Bot::ClearActions(0, 1, bStop);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_ClearActions");
  }
}


// CDOTA_Bot_Script::Action_MoveToLocation  (line 529, @0x000000000282e7f0, libserver.so)  // inlines: Element, FastSqrt, Get, GetAction, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, ToDOTABotActionMoveTo, Top, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[]
// calls: CDOTA_Bot_Script::IsMyScriptBot, CDOTA_Bot_Script::GetBot, operator new, CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo, CDOTA_Bot::SetAction, DevWarning(char const*,...), CDOTA_BotAction_MoveTo::UpdateLocation, operator delete, _Unwind_Resume
// strings: "Action_MoveToLocation", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_MoveToLocation(CDOTA_Bot_Script *const this, const Vector *const location)
{
  uint32 m_Index; // edx
  CDOTA_Bot *m_pBot; // rax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  int m_Size; // edx
  CDOTA_BotAction_MoveTo *v9; // r12
  CDOTA_Bot *Bot; // r14
  CDOTA_BotAction_MoveTo *v11; // r12
  CDOTA_Bot *v12; // rax

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    m_pBot = 0;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v7 != 0
          && m_Index == v7->m_EHandle.m_Index
          && v7->m_pInstance != 0
          && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pBot = this->m_pBot;
        }
      }
    }
    m_Size = m_pBot->m_ActionStack.m_Size;
    if ( m_Size > 0
      && (v9 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1]) != 0
      && (*(v9->_vptr_CDOTA_BotAction + 2))(v9) == 2 )
    {
      if ( fsqrt(
             ((location->x - v9->m_vDestination.x) * (location->x - v9->m_vDestination.x))
           + ((location->y - v9->m_vDestination.y) * (location->y - v9->m_vDestination.y))) > 10.0 )
        CDOTA_BotAction_MoveTo::UpdateLocation(v9, location);
    }
    else
    {
      Bot = CDOTA_Bot_Script::GetBot(this);
      v11 = operator new(0x78u);
      CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo(v11, Bot, location, 1);
      v12 = CDOTA_Bot_Script::GetBot(this);
      CDOTA_Bot::SetAction(v12, v11);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_MoveToLocation");
  }
}


// CDOTA_Bot_Script::Action_MoveToUnit  (line 544, @0x0000000002856010, libserver.so)  // inlines: Get, GetBaseNPC, GetBot, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToBotScript, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_MoveToUnit", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_MoveToUnit(CDOTA_Bot_Script *const this, HSCRIPT hTarget)
{
  CDOTA_Bot_Script *v4; // r12
  CEntityInstance *v5; // rax
  CDOTA_Bot *m_pBot; // r14
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // r15
  CDOTA_BotAction_MoveTo *v9; // r12
  CEntityInstance *v10; // rax
  CDOTA_Bot *v11; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v4 = ToBotScript(hTarget, 0);
    if ( v4 != 0 )
    {
      v5 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
        m_pBot = this->m_pBot;
      else
        m_pBot = 0;
      v7 = CEntityHandle::operator CEntityInstance *(&v4->m_hBaseNPC);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        v8 = v7;
      else
        v8 = 0;
      v9 = operator new(0x78u);
      CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo(v9, m_pBot, v8);
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
        v11 = this->m_pBot;
      else
        v11 = 0;
      CDOTA_Bot::SetAction(v11, v9);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_MoveToUnit");
  }
}


// CDOTA_Bot_Script::Action_AttackUnit  (line 555, @0x0000000002856150, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetBaseNPC, GetBot, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Set, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToBotScript, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_Attack::CDOTA_BotAction_Attack, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_AttackUnit", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_AttackUnit(CDOTA_Bot_Script *const this, HSCRIPT hTarget, bool bOnce)
{
  CDOTA_Bot_Script *v6; // r15
  CEntityInstance *v7; // rax
  CDOTA_Bot *m_pBot; // r14
  CEntityInstance *v9; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // cx
  CDOTA_BotAction_Attack *v12; // r15
  CEntityInstance *v13; // rax
  CDOTA_Bot *v14; // rdi
  EHANDLE v15; // [rsp+0h] [rbp-40h] BYREF

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v6 = ToBotScript(hTarget, 0);
    if ( v6 != 0 )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        m_pBot = this->m_pBot;
      else
        m_pBot = 0;
      v9 = CEntityHandle::operator CEntityInstance *(&v6->m_hBaseNPC);
      if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      {
        m_pEntity = v9->m_pEntity;
        v15.m_Index = -1;
        if ( m_pEntity != 0 )
        {
          v11 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v15.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
        }
      }
      else
      {
        v15.m_Index = -1;
      }
      v12 = operator new(0xB0u);
      CDOTA_BotAction_Attack::CDOTA_BotAction_Attack(v12, m_pBot, &v15, bOnce);
      v13 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        v14 = this->m_pBot;
      else
        v14 = 0;
      CDOTA_Bot::SetAction(v14, v12);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_AttackUnit");
  }
}


// CDOTA_Bot_Script::Action_AttackMove  (line 566, @0x000000000282d5d0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, operator new, CDOTA_BotAction_AttackMove::CDOTA_BotAction_AttackMove, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_AttackMove", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_AttackMove(CDOTA_Bot_Script *const this, const Vector *const location)
{
  uint32 m_Index; // eax
  CDOTA_Bot *m_pBot; // r14
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BotAction_AttackMove *v8; // r12
  CEntityInstance *v9; // rax

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    m_pBot = 0;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v7 != 0
          && m_Index == v7->m_EHandle.m_Index
          && v7->m_pInstance != 0
          && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pBot = this->m_pBot;
        }
      }
    }
    v8 = operator new(0x20u);
    CDOTA_BotAction_AttackMove::CDOTA_BotAction_AttackMove(v8, m_pBot, location);
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      CDOTA_Bot::SetAction(this->m_pBot, v8);
    else
      CDOTA_Bot::SetAction(0, v8);
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_AttackMove");
  }
}


// CDOTA_Bot_Script::Action_UseAbility  (line 573, @0x000000000282d6f0, libserver.so)  // inlines: Get, GetBot, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_UseAbility", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_UseAbility(CDOTA_Bot_Script *const this, HSCRIPT hAbility)
{
  CDOTABaseAbility_BotScript *v4; // r12
  CEntityInstance *v5; // rax
  CDOTA_Bot *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v8; // r12
  CEntityInstance *v9; // rax
  CDOTA_Bot *v10; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v4 = ToAbilityBotScriptHandle(hAbility);
    if ( v4 != 0 )
    {
      v5 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
        m_pBot = this->m_pBot;
      else
        m_pBot = 0;
      m_pAbility = v4->m_pAbility;
      v8 = operator new(0xC0u);
      CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility);
      v9 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
        v10 = this->m_pBot;
      else
        v10 = 0;
      CDOTA_Bot::SetAction(v10, v8);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_UseAbility");
  }
}


// CDOTA_Bot_Script::Action_UseAbilityOnEntity  (line 584, @0x00000000028562e0, libserver.so)  // inlines: Get, GetBaseNPC, GetBot, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, ToBotScript, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_UseAbilityOnEntity", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_UseAbilityOnEntity(
        CDOTA_Bot_Script *const this,
        HSCRIPT hAbility,
        HSCRIPT hTarget)
{
  CDOTABaseAbility_BotScript *v6; // r13
  CDOTA_Bot_Script *v7; // r12
  CEntityInstance *v8; // rax
  CDOTA_Bot *m_pBot; // r15
  CDOTABaseAbility *m_pAbility; // r13
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rcx
  CDOTA_BotAction_UseAbility *v13; // r12
  CEntityInstance *v14; // rax
  CDOTA_Bot *v15; // rdi
  CDOTA_BaseNPC *pTarget; // [rsp+8h] [rbp-38h]

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v6 = ToAbilityBotScriptHandle(hAbility);
    v7 = ToBotScript(hTarget, 0);
    if ( v7 != 0 && v6 != 0 )
    {
      v8 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
        m_pBot = this->m_pBot;
      else
        m_pBot = 0;
      m_pAbility = v6->m_pAbility;
      v11 = CEntityHandle::operator CEntityInstance *(&v7->m_hBaseNPC);
      if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
        v12 = v11;
      else
        v12 = 0;
      pTarget = v12;
      v13 = operator new(0xC0u);
      CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v13, m_pBot, m_pAbility, pTarget);
      v14 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
        v15 = this->m_pBot;
      else
        v15 = 0;
      CDOTA_Bot::SetAction(v15, v13);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_UseAbilityOnEntity");
  }
}


// CDOTA_Bot_Script::Action_UseAbilityOnLocation  (line 596, @0x000000000282d810, libserver.so)  // inlines: Get, GetBot, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_UseAbilityOnLocation", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_UseAbilityOnLocation(
        CDOTA_Bot_Script *const this,
        HSCRIPT hAbility,
        const Vector *const location)
{
  CDOTABaseAbility_BotScript *v6; // r12
  CEntityInstance *v7; // rax
  CDOTA_Bot *m_pBot; // r15
  CDOTA_BotAction_UseAbility *v9; // r12
  CEntityInstance *v10; // rax
  CDOTA_Bot *v11; // rdi
  CDOTABaseAbility *pAbility; // [rsp+8h] [rbp-38h]

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v6 = ToAbilityBotScriptHandle(hAbility);
    if ( v6 != 0 )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        m_pBot = this->m_pBot;
      else
        m_pBot = 0;
      pAbility = v6->m_pAbility;
      v9 = operator new(0xC0u);
      CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v9, m_pBot, pAbility, location);
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
        v11 = this->m_pBot;
      else
        v11 = 0;
      CDOTA_Bot::SetAction(v11, v9);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_UseAbilityOnLocation");
  }
}


// CDOTA_Bot_Script::Action_UseAbilityOnTree  (line 607, @0x000000000282d940, libserver.so)  // inlines: Get, GetBot, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_UseAbilityOnTree", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_UseAbilityOnTree(CDOTA_Bot_Script *const this, HSCRIPT hAbility, int iTree)
{
  CDOTABaseAbility_BotScript *v6; // r12
  CEntityInstance *v7; // rax
  CDOTA_Bot *m_pBot; // r15
  CDOTA_BotAction_UseAbility *v9; // r12
  CEntityInstance *v10; // rax
  CDOTA_Bot *v11; // rdi
  CDOTABaseAbility *pAbility; // [rsp+8h] [rbp-38h]

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v6 = ToAbilityBotScriptHandle(hAbility);
    if ( v6 != 0 )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        m_pBot = this->m_pBot;
      else
        m_pBot = 0;
      pAbility = v6->m_pAbility;
      v9 = operator new(0xC0u);
      CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v9, m_pBot, pAbility, iTree);
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
        v11 = this->m_pBot;
      else
        v11 = 0;
      CDOTA_Bot::SetAction(v11, v9);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_UseAbilityOnTree");
  }
}


// CDOTA_Bot_Script::Action_PickUpRune  (line 618, @0x000000000282e160, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetBot, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetRuneStatus, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, CDOTAGamerules::GetActiveRune_Bounty, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_PickUpRune::CDOTA_BotAction_PickUpRune, CDOTA_Bot::SetAction, DevWarning(char const*,...), CDOTAGamerules::GetActiveRune_Powerup, operator delete, _Unwind_Resume
// strings: "Action_PickUpRune", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_PickUpRune(CDOTA_Bot_Script *const this, int nRune)
{
  uint32 m_Index; // eax
  CDOTA_Bot *m_pBot; // rcx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CBaseEntity *v8; // r14
  CEntityInstance *v9; // rax
  CDOTA_Bot *v10; // r13
  CEntityIdentity *m_pEntity; // rax
  __int16 v12; // cx
  CDOTA_BotAction_PickUpRune *v13; // r14
  CEntityInstance *v14; // rax
  CDOTA_Bot *v15; // rdi
  EHANDLE hTarget; // [rsp+0h] [rbp-30h] BYREF

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    m_pBot = 0;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v7 != 0
          && m_Index == v7->m_EHandle.m_Index
          && v7->m_pInstance != 0
          && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pBot = this->m_pBot;
        }
      }
    }
    if ( m_pBot->m_pTeamCommander->m_iRuneStatus.m_Memory[nRune] == DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_AVAILABLE )
    {
      v8 = nRune <= 1
         ? CDOTAGamerules::GetActiveRune_Powerup(g_pGameRules)
         : CDOTAGamerules::GetActiveRune_Bounty(g_pGameRules, nRune - 2);
      if ( v8 != 0 )
      {
        v9 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
        if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
          v10 = this->m_pBot;
        else
          v10 = 0;
        m_pEntity = v8->m_pEntity;
        hTarget.m_Index = -1;
        if ( m_pEntity != 0 )
        {
          v12 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
        }
        v13 = operator new(0x18u);
        CDOTA_BotAction_PickUpRune::CDOTA_BotAction_PickUpRune(v13, v10, &hTarget);
        v14 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
        if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
          v15 = this->m_pBot;
        else
          v15 = 0;
        CDOTA_Bot::SetAction(v15, v13);
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_PickUpRune");
  }
}


// CDOTA_Bot_Script::Action_PickUpItem  (line 632, @0x000000000282e4d0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetBaseNPC, GetContainedItem, GetDroppedItem, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CDOTA_Item*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CDOTAFogOfWarSystem::IsLocationVisible, CDOTA_Bot_Script::GetBot, operator new, CDOTA_BotAction_PickUpItem::CDOTA_BotAction_PickUpItem, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_PickUpItem", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_PickUpItem(CDOTA_Bot_Script *const this, HSCRIPT hItem)
{
  CDOTABaseAbility *m_pAbility; // rax
  __int64 v5; // r12
  int v6; // ebx
  CGameRules *i; // rax
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // r15
  uint32 m_nHashCode; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rax
  CDOTA_Bot *Bot; // rax
  Vector *v17; // rsi
  CEntityIdentity *m_pEntity; // rax
  int v19; // edx
  __int16 v20; // cx
  CDOTA_BotAction_PickUpItem *v21; // r15
  CDOTA_Bot *v22; // rax
  CDOTA_Item *pItem; // [rsp+0h] [rbp-60h]
  Vector *vLocation; // [rsp+18h] [rbp-48h]
  Vector *vLocationa; // [rsp+18h] [rbp-48h]
  int v26; // [rsp+20h] [rbp-40h] BYREF

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_pAbility = ToAbilityBotScriptHandle(hItem)->m_pAbility;
    pItem = m_pAbility;
    if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(m_pAbility) != 0 )
    {
      v5 = 0;
      v6 = 0;
      for ( i = g_pGameRules; v6 < *&g_pGameRules[55].m_szQuestName[80]; v5 += 4 )
      {
        v8 = *(*&i[55].m_szQuestName[88] + v5);
        v26 = v8;
        if ( (v8 + 2) > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v26 >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v26 & 0x1FF];
            if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0 )
              {
                m_nHashCode = m_pInstance[25].m_worldGroupId.m_nHashCode;
                if ( m_nHashCode + 2 > 1 )
                {
                  v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pInstance[25].m_worldGroupId.m_nHashCode) >> 9)
                                                                       & 0x3F];
                  if ( v13 != 0 )
                  {
                    v14 = &v13[m_pInstance[25].m_worldGroupId.m_nHashCode & 0x1FF];
                    if ( v14 != 0 && m_nHashCode == v14->m_EHandle.m_Index && pItem == v14->m_pInstance )
                    {
                      vLocation = CBaseEntity::GetAbsOrigin(m_pInstance);
                      v15 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
                      if ( v15 == 0 || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
                        v15 = 0;
                      if ( CDOTAFogOfWarSystem::IsLocationVisible(
                             &g_DOTAFogOfWarSystem,
                             HIBYTE(v15[7].m_CScriptComponent),
                             vLocation,
                             0.0) )
                      {
                        Bot = CDOTA_Bot_Script::GetBot(this);
                        v26 = -1;
                        v17 = Bot;
                        m_pEntity = m_pInstance->m_pEntity;
                        if ( m_pEntity != 0 )
                        {
                          v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                          v20 = 0x7FFF;
                          if ( m_pEntity->m_EHandle.m_Index != -1 )
                            v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                          LOWORD(v26) = v20 | v26 & 0x8000;
                          v26 = (v19 << 15) | v26 & 0x7FFF;
                        }
                        vLocationa = v17;
                        v21 = operator new(0x18u);
                        CDOTA_BotAction_PickUpItem::CDOTA_BotAction_PickUpItem(v21, vLocationa, &v26);
                        v22 = CDOTA_Bot_Script::GetBot(this);
                        CDOTA_Bot::SetAction(v22, v21);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        i = g_pGameRules;
        ++v6;
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_PickUpItem");
  }
}


// CDOTA_Bot_Script::Action_DropItem  (line 658, @0x000000000282e370, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetBot, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Set, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_DropItem::CDOTA_BotAction_DropItem, CDOTA_Bot::SetAction, DevWarning(char const*,...), operator delete, _Unwind_Resume
// strings: "Action_DropItem", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_DropItem(
        CDOTA_Bot_Script *const this,
        HSCRIPT hItem,
        const Vector *const location)
{
  CDOTABaseAbility_BotScript *v6; // r15
  CEntityInstance *v7; // rax
  CDOTA_Bot *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // cx
  CDOTA_BotAction_DropItem *v12; // r15
  CEntityInstance *v13; // rax
  CDOTA_Bot *v14; // rdi
  EHANDLE hTarget; // [rsp+0h] [rbp-40h] BYREF

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v6 = ToAbilityBotScriptHandle(hItem);
    if ( v6 != 0 )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        m_pBot = this->m_pBot;
      else
        m_pBot = 0;
      m_pAbility = v6->m_pAbility;
      hTarget.m_Index = -1;
      if ( m_pAbility != 0 )
      {
        m_pEntity = m_pAbility->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v11 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
        }
      }
      v12 = operator new(0x28u);
      CDOTA_BotAction_DropItem::CDOTA_BotAction_DropItem(v12, m_pBot, &hTarget, location);
      v13 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        v14 = this->m_pBot;
      else
        v14 = 0;
      CDOTA_Bot::SetAction(v14, v12);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_DropItem");
  }
}


// CDOTA_Bot_Script::Action_PurchaseItem  (line 669, @0x000000000282de50, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::AttemptToPurchaseItem, DevWarning(char const*,...)
// strings: "%s attempted to purchase %s when not in range of the Secret Shop.", "Action_PurchaseItem", "'%s' called on an entity that isn't itself!\n", "%s attempted to purchase %s, which is out of stock.", "%s attempted to purchase %s, which is disallowed.", "%s attempted to purchase %s with insufficient gold." (7 total)
// globals: CEntityHandle::gm_pEntityList, jpt_282DF0A
DOTA_INVALID_ORDERS __fastcall CDOTA_Bot_Script::Action_PurchaseItem(
        CDOTA_Bot_Script *const this,
        const char *pszItemName)
{
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // rdi
  int v6; // eax
  uint32 m_Index; // ecx
  CEntityIdentity *v8; // rsi
  CEntityIdentity *v9; // rsi
  CDOTA_BaseNPC *m_pInstance; // rdi
  DOTA_INVALID_ORDERS result; // eax
  CEntityInstance *v12; // rax
  const char *v13; // rsi
  CEntityInstance *v14; // rax
  const char *v15; // rsi
  CEntityInstance *v16; // rax
  const char *v17; // rsi
  CEntityInstance *v18; // rax
  const char *v19; // rsi
  CEntityInstance *v20; // rax
  const char *m_pAsString; // rsi

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
    if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
      v5 = v4;
    else
      v5 = 0;
    v6 = (*(v5->_vptr_IHandleEntity + 414))(v5);
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v9 = &v8[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v9->m_EHandle.m_Index
      || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    result = CDOTA_BaseNPC::AttemptToPurchaseItem(m_pInstance, pszItemName, v6, 0);
    switch ( result )
    {
      case DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM:
        v20 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
        if ( v20 == 0 || BYTE3(v20[7]._vptr_IHandleEntity) == 0 )
          v20 = 0;
        m_pAsString = "";
        if ( v20[70].m_iszPrivateVScripts.u.m_Id != 0 )
          m_pAsString = v20[70].m_iszPrivateVScripts.u.m_pAsString;
        DevWarning("%s attempted to purchase %s, which is not a valid item.", m_pAsString, pszItemName);
        result = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM;
        break;
      case DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_SECRET_SHOP_NOT_IN_RANGE:
        v12 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
        if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
          v12 = 0;
        v13 = "";
        if ( v12[70].m_iszPrivateVScripts.u.m_Id != 0 )
          v13 = v12[70].m_iszPrivateVScripts.u.m_pAsString;
        DevWarning("%s attempted to purchase %s when not in range of the Secret Shop.", v13, pszItemName);
        result = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_SECRET_SHOP_NOT_IN_RANGE;
        break;
      case DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_NOT_ENOUGH_GOLD:
        v18 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
        if ( v18 == 0 || BYTE3(v18[7]._vptr_IHandleEntity) == 0 )
          v18 = 0;
        v19 = "";
        if ( v18[70].m_iszPrivateVScripts.u.m_Id != 0 )
          v19 = v18[70].m_iszPrivateVScripts.u.m_pAsString;
        DevWarning("%s attempted to purchase %s with insufficient gold.", v19, pszItemName);
        result = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_NOT_ENOUGH_GOLD;
        break;
      case DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PURCHASE_DISALLOWED_ITEM:
        v16 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
        if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
          v16 = 0;
        v17 = "";
        if ( v16[70].m_iszPrivateVScripts.u.m_Id != 0 )
          v17 = v16[70].m_iszPrivateVScripts.u.m_pAsString;
        DevWarning("%s attempted to purchase %s, which is disallowed.", v17, pszItemName);
        result = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PURCHASE_DISALLOWED_ITEM;
        break;
      case DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_ITEM_OUT_OF_STOCK:
        v14 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
        if ( v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
          v14 = 0;
        v15 = "";
        if ( v14[70].m_iszPrivateVScripts.u.m_Id != 0 )
          v15 = v14[70].m_iszPrivateVScripts.u.m_pAsString;
        DevWarning("%s attempted to purchase %s, which is out of stock.", v15, pszItemName);
        result = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_ITEM_OUT_OF_STOCK;
        break;
      default:
        return result;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_PurchaseItem");
    return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_NOT_CONTROLLABLE_BY_PLAYER;
  }
  return result;
}


// CDOTA_Bot_Script::Action_SellItem  (line 688, @0x000000000282db20, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, CDOTA_BaseNPC::SellItem, DevWarning(char const*,...)
// strings: "Action_SellItem", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_SellItem(CDOTA_Bot_Script *const this, HSCRIPT hItem)
{
  CDOTA_Item *m_pAbility; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_pAbility = ToAbilityBotScriptHandle(hItem)->m_pAbility;
    if ( m_pAbility != 0 )
    {
      m_Index = this->m_hBaseNPC.m_Index;
      if ( m_Index + 2 > 1
        && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v7 = &v6[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v7->m_EHandle.m_Index
        && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
        && m_pInstance->m_bIsDOTANPC )
      {
        CDOTA_BaseNPC::SellItem(m_pInstance, m_pAbility);
      }
      else
      {
        CDOTA_BaseNPC::SellItem(0, m_pAbility);
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_SellItem");
  }
}


// CDOTA_Bot_Script::Action_DisassembleItem  (line 699, @0x000000000282dbe0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, CDOTA_BaseNPC::DisassembleItem, DevWarning(char const*,...)
// strings: "Action_DisassembleItem", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_DisassembleItem(CDOTA_Bot_Script *const this, HSCRIPT hItem)
{
  CDOTA_Item *m_pAbility; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_pAbility = ToAbilityBotScriptHandle(hItem)->m_pAbility;
    if ( m_pAbility != 0 )
    {
      m_Index = this->m_hBaseNPC.m_Index;
      if ( m_Index + 2 > 1
        && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v7 = &v6[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v7->m_EHandle.m_Index
        && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
        && m_pInstance->m_bIsDOTANPC )
      {
        CDOTA_BaseNPC::DisassembleItem(m_pInstance, m_pAbility);
      }
      else
      {
        CDOTA_BaseNPC::DisassembleItem(0, m_pAbility);
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_DisassembleItem");
  }
}


// CDOTA_Bot_Script::Action_SetItemCombineLock  (line 710, @0x000000000282e770, libserver.so)  // inlines: NetworkStateChanged, Set, SetCombineLocked, operator=<bool>
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToAbilityBotScriptHandle, DevWarning(char const*,...)
// strings: "Action_SetItemCombineLock", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_SetItemCombineLock(CDOTA_Bot_Script *const this, HSCRIPT hItem, bool bLocked)
{
  CDOTABaseAbility *m_pAbility; // rbx

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_pAbility = ToAbilityBotScriptHandle(hItem)->m_pAbility;
    if ( m_pAbility != 0 && bLocked != BYTE4(m_pAbility[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback) )
    {
      (*(m_pAbility->_vptr_IHandleEntity + 22))(m_pAbility, 980, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      BYTE4(m_pAbility[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback) = bLocked;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_SetItemCombineLock");
  }
}


// CDOTA_Bot_Script::Action_SwapItems  (line 723, @0x000000000284f800, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetBaseNPC, GetInstance, GrowMemory, Purge, RemoveAll, Reset, SetRaw, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot_Script::IsMyScriptBot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, DevWarning(char const*,...), CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Action_SwapItems", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_SwapItems(CDOTA_Bot_Script *const this, int nSlot1, int nSlot2)
{
  EHANDLE *p_m_hBaseNPC; // rbx
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r14
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  CDOTA_UnitInventory *v15; // rax
  CDOTA_Item *v16; // rax
  vec_t y; // xmm0_4
  CEntityInstance *v18; // rax
  CEntityInstance *v19; // rdi
  CEntityInstance *v20; // rax
  const CEntityInstance *v21; // rdi
  __int64 m_Size; // rbx
  CEntityIndex v23; // r15d
  CEntityIndex *v24; // rax
  CUnitOrders newOrders; // [rsp+0h] [rbp-70h] BYREF

  if ( !CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_SwapItems");
    return;
  }
  p_m_hBaseNPC = &this->m_hBaseNPC;
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  if ( CDOTA_BaseNPC::GetInventory(v8) != 0 )
  {
    v9 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      v10 = v9;
    else
      v10 = 0;
    Inventory = CDOTA_BaseNPC::GetInventory(v10);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, nSlot1);
    v13 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
      v14 = v13;
    else
      v14 = 0;
    v15 = CDOTA_BaseNPC::GetInventory(v14);
    v16 = CDOTA_UnitInventory::GetItemInSlot(v15, nSlot2);
    if ( ItemInSlot == 0 )
    {
      if ( v16 == 0 )
        return;
      nSlot2 = nSlot1;
      ItemInSlot = v16;
    }
    newOrders.m_bQueue = 0;
    newOrders.m_nUnits.m_Size = 0;
    memset(&newOrders.m_nUnits.m_Memory, 0, 28);
    newOrders.m_nOrderSequenceNumber = 0;
    newOrders.m_vPosition.x = vec3_origin.x;
    y = vec3_origin.y;
    newOrders.m_nIssuerPlayerIndex = -1;
    newOrders.m_vPosition.y = y;
    newOrders.m_vPosition.z = vec3_origin.z;
    v18 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
    if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
      v19 = v18;
    else
      v19 = 0;
    newOrders.m_nIssuerPlayerIndex = (*(v19->_vptr_IHandleEntity + 414))(v19);
    v20 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
    if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
      v21 = v20;
    else
      v21 = 0;
    m_Size = newOrders.m_nUnits.m_Size;
    v23.m_Data = CEntityInstance::GetEntityIndex(v21).m_Data;
    CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
    ++newOrders.m_nUnits.m_Size;
    v24 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
    if ( v24 != 0 )
      v24->m_Data = v23.m_Data;
    newOrders.m_nOrderType = 19;
    newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(ItemInSlot);
    newOrders.m_nTargetIndex.m_Data = nSlot2;
    newOrders.m_bQueue = 0;
    DOTA_ExecuteOrders(&newOrders, 1, 0, 0);
    newOrders.m_nUnits.m_Size = 0;
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
      if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    }
  }
}


// CDOTA_Bot_Script::Action_UseShrine  (line 766, @0x0000000002857f80, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetBaseNPC, GetInstance, GrowMemory, Purge, RemoveAll, Reset, ToDOTABaseNPC, ToDOTABuilding, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToBotScript, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, DevWarning(char const*,...), CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Action_UseShrine", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_UseShrine(CDOTA_Bot_Script *const this, HSCRIPT hShrine)
{
  const CEntityInstance *v4; // r13
  CDOTA_Bot_Script *v5; // rax
  CEntityInstance *v6; // rax
  vec_t y; // xmm0_4
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // rdi
  CEntityInstance *v10; // rax
  const CEntityInstance *v11; // rdi
  __int64 m_Size; // r12
  CEntityIndex v13; // r14d
  CEntityIndex *v14; // rdx
  CUnitOrders newOrders; // [rsp+0h] [rbp-60h] BYREF

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    v4 = 0;
    v5 = ToBotScript(hShrine, 0);
    v6 = CEntityHandle::operator CEntityInstance *(&v5->m_hBaseNPC);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 && (v6[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0 )
      v4 = v6;
    newOrders.m_bQueue = 0;
    newOrders.m_nUnits.m_Size = 0;
    memset(&newOrders.m_nUnits.m_Memory, 0, 28);
    newOrders.m_nOrderSequenceNumber = 0;
    newOrders.m_vPosition.x = vec3_origin.x;
    y = vec3_origin.y;
    newOrders.m_nIssuerPlayerIndex = -1;
    newOrders.m_vPosition.y = y;
    newOrders.m_vPosition.z = vec3_origin.z;
    v8 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
    if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
      v9 = v8;
    else
      v9 = 0;
    newOrders.m_nIssuerPlayerIndex = (*(v9->_vptr_IHandleEntity + 414))(v9);
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
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
    newOrders.m_nOrderType = 2;
    newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(v4);
    newOrders.m_bQueue = 0;
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
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_UseShrine");
  }
}


// CDOTA_Bot_Script::Action_Courier  (line 786, @0x00000000028581b0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetBaseNPC, GetInstance, GetTeamNumber, GrowMemory, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToBotScript, CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::GetNumCouriersForTeam, __dynamic_cast, CDOTA_BaseNPC::FindAbilityByName, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, CUtlMemory<CEntityIndex, int>::Purge, DevWarning(char const*,...), CDOTA_PlayerResource::GetNthCourierForTeam, CUtlMemory<CEntityIndex, int>::Grow (14 total)
// strings: "courier_return_to_base", "courier_go_to_secretshop", "courier_return_stash_items", "courier_take_stash_items", "courier_transfer_items", "courier_take_stash_and_transfer_items" (8 total)
bool __fastcall CDOTA_Bot_Script::Action_Courier(CDOTA_Bot_Script *const this, HSCRIPT hCourier, int eAction)
{
  bool IsMyScriptBot; // r12
  CDOTA_Bot_Script *v6; // rax
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // rbx
  EHANDLE *p_m_hBaseNPC; // r14
  CEntityInstance *v10; // rax
  int NumCouriersForTeam; // r15d
  CDOTA_BaseNPC *v12; // rbx
  CDOTABaseAbility *AbilityByName; // r15
  vec_t y; // xmm0_4
  CEntityInstance *v15; // rax
  CEntityInstance *v16; // rdi
  CEntityIndex v17; // eax
  __int64 m_Size; // rbx
  int32 m_Data; // r14d
  int v20; // eax
  CEntityIndex *v21; // rax
  int v23; // r13d
  CEntityInstance *v24; // rax
  CDOTA_Unit_Courier *NthCourierForTeam; // rax
  const char *pszAbilityNames[7]; // [rsp+10h] [rbp-B0h]
  CUnitOrders newOrders; // [rsp+50h] [rbp-70h] BYREF

  IsMyScriptBot = CDOTA_Bot_Script::IsMyScriptBot(this);
  if ( !IsMyScriptBot )
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_Courier");
    return IsMyScriptBot;
  }
  v6 = ToBotScript(hCourier, 0);
  v7 = CEntityHandle::operator CEntityInstance *(&v6->m_hBaseNPC);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  p_m_hBaseNPC = &this->m_hBaseNPC;
  v10 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
  if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
    v10 = 0;
  NumCouriersForTeam = CDOTA_PlayerResource::GetNumCouriersForTeam(
                         g_pDOTAPlayerResource,
                         HIBYTE(v10[7].m_CScriptComponent));
  if ( v8 == 0 || (v12 = __dynamic_cast(v8, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Courier, 0)) == 0 )
  {
    v23 = 0;
    if ( NumCouriersForTeam <= 0 )
      return 0;
    while ( 1 )
    {
      v24 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
      if ( v24 == 0 || BYTE3(v24[7]._vptr_IHandleEntity) == 0 )
        v24 = 0;
      NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(
                            g_pDOTAPlayerResource,
                            v23,
                            HIBYTE(v24[7].m_CScriptComponent));
      v12 = NthCourierForTeam;
      if ( NthCourierForTeam != 0 && NthCourierForTeam->m_nCourierState.m_Value == CourierState_t::COURIER_STATE_IDLE )
        break;
      if ( ++v23 == NumCouriersForTeam )
        return 0;
    }
  }
  pszAbilityNames[0] = "courier_return_to_base";
  pszAbilityNames[1] = "courier_go_to_secretshop";
  pszAbilityNames[2] = "courier_return_stash_items";
  pszAbilityNames[3] = "courier_take_stash_items";
  pszAbilityNames[4] = "courier_transfer_items";
  pszAbilityNames[5] = "courier_burst";
  pszAbilityNames[6] = "courier_take_stash_and_transfer_items";
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v12, pszAbilityNames[eAction], 0);
  if ( AbilityByName == 0 )
    return 0;
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition.x = vec3_origin.x;
  y = vec3_origin.y;
  newOrders.m_nIssuerPlayerIndex = -1;
  newOrders.m_vPosition.y = y;
  newOrders.m_vPosition.z = vec3_origin.z;
  v15 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
    v16 = v15;
  else
    v16 = 0;
  newOrders.m_nIssuerPlayerIndex = (*(v16->_vptr_IHandleEntity + 414))(v16);
  v17.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
  m_Size = newOrders.m_nUnits.m_Size;
  m_Data = v17.m_Data;
  v20 = newOrders.m_nUnits.m_Size;
  if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
    v20 = newOrders.m_nUnits.m_Size;
  }
  newOrders.m_nUnits.m_Size = v20 + 1;
  v21 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v21 != 0 )
    v21->m_Data = m_Data;
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
  return IsMyScriptBot;
}


// CDOTA_Bot_Script::Action_Buyback  (line 844, @0x000000000282dca0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, DevWarning(char const*,...), CDOTA_BaseNPC_Hero::Buyback
// strings: "Action_Buyback", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_Buyback(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            CDOTA_BaseNPC_Hero::Buyback(m_pInstance);
          }
        }
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_Buyback");
  }
}


// CDOTA_Bot_Script::Action_Glyph  (line 857, @0x00000000028334d0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, CDOTAGamerules::Glyph, DevWarning(char const*,...)
// strings: "Action_Glyph", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_Glyph(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    CDOTAGamerules::Glyph(g_pGameRules, HIBYTE(m_pInstance[7].m_CScriptComponent));
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_Glyph");
  }
}


// CDOTA_Bot_Script::Action_LevelAbility  (line 866, @0x000000000284f5c0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetBaseNPC, GetInstance, GrowMemory, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot_Script::IsMyScriptBot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, CUtlMemory<CEntityIndex, int>::Purge, DevWarning(char const*,...), CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Action_LevelAbility", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTA_Bot_Script::Action_LevelAbility(CDOTA_Bot_Script *const this, const char *pszAbilityName)
{
  EHANDLE *p_m_hBaseNPC; // r12
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CDOTABaseAbility *AbilityByName; // r13
  vec_t y; // xmm0_4
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rdi
  CEntityInstance *v11; // rax
  const CEntityInstance *v12; // rdi
  __int64 m_Size; // r12
  CEntityIndex v14; // r14d
  CEntityIndex *v15; // rdx
  CUnitOrders newOrders; // [rsp+0h] [rbp-60h] BYREF

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    p_m_hBaseNPC = &this->m_hBaseNPC;
    v5 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v6, pszAbilityName, 0);
    if ( AbilityByName != 0 )
    {
      newOrders.m_bQueue = 0;
      newOrders.m_nUnits.m_Size = 0;
      memset(&newOrders.m_nUnits.m_Memory, 0, 28);
      newOrders.m_nOrderSequenceNumber = 0;
      newOrders.m_vPosition.x = vec3_origin.x;
      y = vec3_origin.y;
      newOrders.m_nIssuerPlayerIndex = -1;
      newOrders.m_vPosition.y = y;
      newOrders.m_vPosition.z = vec3_origin.z;
      v9 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
      if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
        v10 = v9;
      else
        v10 = 0;
      newOrders.m_nIssuerPlayerIndex = (*(v10->_vptr_IHandleEntity + 414))(v10);
      v11 = CEntityHandle::operator CEntityInstance *(p_m_hBaseNPC);
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
      newOrders.m_nOrderType = 11;
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
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_LevelAbility");
  }
}


// CDOTA_Bot_Script::Action_Chat  (line 889, @0x0000000002866f90, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_BotChat_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_BotChat_t>, FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>, Get, GetBaseNPC, GetInstance, PostEvent<CDOTAUserMsg_BotChat_t>, SendUserMessage<CDOTAUserMsg_BotChat_t>, ToDOTABaseNPC, assign, length, operator CBaseEntity*, set_has_message, set_has_player_id, set_message, set_player_id, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_BotChat_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CDOTA_Bot_Script::IsMyScriptBot, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetTeam, CRecipientFilter::RemoveRecipientsNotOnTeam, CDOTAUserMsg_BotChat::CDOTAUserMsg_BotChat, strlen, std::string::assign(char const*,ulong), CDOTAUserMsg_BotChat::~CDOTAUserMsg_BotChat, CRecipientFilter::~CRecipientFilter (15 total)
// strings: "Action_Chat", "'%s' called on an entity that isn't itself!\n"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent
void __fastcall CDOTA_Bot_Script::Action_Chat(CDOTA_Bot_Script *const this, const char *pszMessage, bool bAllChat)
{
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  CTeam *Team; // rax
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rdi
  size_t v11; // rax
  __int64 v12; // r14
  IGameEventSystem *v13; // r12
  void (__fastcall *v14)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v15[2]; // [rsp+10h] [rbp-1A0h] BYREF
  int v16; // [rsp+20h] [rbp-190h]
  std::string *v17; // [rsp+28h] [rbp-188h]
  int v18; // [rsp+30h] [rbp-180h]
  bool v19; // [rsp+34h] [rbp-17Ch]
  CReliableBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+178h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    if ( !bAllChat )
    {
      v6 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
        v7 = v6;
      else
        v7 = 0;
      Team = CBaseEntity::GetTeam(v7);
      CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
    }
    CDOTAUserMsg_BotChat::CDOTAUserMsg_BotChat(v15);
    v15[0] = off_42B8D70;
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      v10 = v9;
    else
      v10 = 0;
    v18 = (*(v10->_vptr_IHandleEntity + 414))(v10);
    v19 = !bAllChat;
    v16 |= 0xBu;
    v11 = strlen(pszMessage);
    std::string::assign(v17, pszMessage, v11);
    v12 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent;
    v13 = g_pGameEventSystem;
    v14 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent);
    v14(v13, 0, 0, &filter, v12, v15, 48);
    v15[0] = &off_42B8BF0;
    CDOTAUserMsg_BotChat::~CDOTAUserMsg_BotChat(v15);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_Chat");
  }
}


// CDOTA_Bot_Script::Action_Ping  (line 908, @0x000000000282dd50, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, CDOTAGamerules::ExecutePing, DevWarning(char const*,...)
// strings: "Action_Ping", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Script::Action_Ping(
        CDOTA_Bot_Script *const this,
        float a2,
        vec_t x,
        float y,
        bool bNormalPing)
{
  bool IsMyScriptBot; // al
  float v8; // xmm0_4
  uint32 m_Index; // eax
  _BOOL4 v10; // r12d
  CConcreteEntityList *v11; // rsi
  CEntityIdentity *v12; // rdx
  __int64 v13; // rcx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTAPlayer *v16; // rax
  vec_t xb; // [rsp+8h] [rbp-18h]
  vec_t yb; // [rsp+Ch] [rbp-14h]

  IsMyScriptBot = CDOTA_Bot_Script::IsMyScriptBot(this);
  v8 = a2;
  if ( IsMyScriptBot )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v10 = !bNormalPing;
    v11 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v13 = this->m_hBaseNPC.m_Index & 0x1FF, v11 = (8 * v13), (v14 = &v12[v13]) == 0)
      || m_Index != v14->m_EHandle.m_Index
      || (m_pInstance = v14->m_pInstance, v14->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    xb = x;
    yb = v8;
    v16 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance, v11);
    CDOTAGamerules::ExecutePing(g_pGameRules, v16, yb, xb, -1, 1, v10);
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "Action_Ping");
  }
}


// CDOTA_Bot_Script::GetCurrentActionType  (line 917, @0x0000000002829750, libserver.so)  // inlines: Element, Get, GetAction, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Top, operator CBaseEntity*, operator CEntityInstance*, operator[]
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetCurrentActionType(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_Bot *m_pBot; // rdx
  int m_Size; // eax
  CDOTA_BotAction *v7; // rdi

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( m_Index != v3->m_EHandle.m_Index )
    return 0;
  if ( v3->m_pInstance == 0 )
    return 0;
  if ( BYTE3(v3->m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 0;
  m_pBot = this->m_pBot;
  if ( m_pBot == 0 )
    return 0;
  m_Size = m_pBot->m_ActionStack.m_Size;
  v7 = 0;
  if ( m_Size > 0 )
    v7 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  return (*(v7->_vptr_CDOTA_BotAction + 2))(v7);
}


// CDOTA_Bot_Script::GetMostRecentPing  (line 927, @0x0000000002843050, libserver.so)  // inlines: CVariantBase, CopyData<Vector>, Get, GetBaseNPC, GetInstance, Max<float>, TakeOwnership, ToDOTABaseNPC, Vector, Vector2D, operator CBaseEntity*, ~CVariantBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTAGamerules::GetPlayerCommunicationSummary, DOTACommander, CDOTA_Commander::GetActiveScriptVM, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, _Unwind_Resume
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Bot_Script::GetMostRecentPing(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Bot_Script *const this)
{
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // rdi
  int v5; // eax
  const PlayerCommunicationStats_t *PlayerCommunicationSummary; // rax
  __m128i fMostRecentTime_low; // xmm1
  __m128i v8; // xmm0
  int v9; // ebx
  CDOTA_Commander *v10; // rax
  IScriptVM *ActiveScriptVM; // rax
  uint64 m_uint64; // r14
  CDOTA_Commander *v13; // rax
  IScriptVM *v14; // rax
  void (__fastcall *v15)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r8
  CDOTA_Commander *v16; // rax
  IScriptVM *v17; // r15
  __int64 v18; // rax
  void (__fastcall *v19)(IScriptVM *, uint64, __int64, CVariantBase<CVariantDefaultAllocator> *); // rax
  CDOTA_Commander *v20; // rax
  IScriptVM *v21; // rax
  void (__fastcall *v22)(IScriptVM *, uint64, __int64, CVariantBase<CVariantDefaultAllocator> *); // r8
  vec_t y; // [rsp+Ch] [rbp-74h]
  void (__fastcall *v25)(IScriptVM *, uint64, __int64, CVariantBase<CVariantDefaultAllocator> *); // [rsp+10h] [rbp-70h]
  vec_t x; // [rsp+18h] [rbp-68h]
  char bMostRecentNormal; // [rsp+1Fh] [rbp-61h]
  _DWORD v28[4]; // [rsp+20h] [rbp-60h] BYREF
  ScriptVariant_t varTable; // [rsp+30h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v30; // [rsp+40h] [rbp-40h] BYREF

  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  v5 = (*(v4->_vptr_IHandleEntity + 414))(v4);
  PlayerCommunicationSummary = CDOTAGamerules::GetPlayerCommunicationSummary(g_pGameRules, v5);
  if ( PlayerCommunicationSummary != 0 )
  {
    fMostRecentTime_low = LODWORD(PlayerCommunicationSummary->pings.fMostRecentTime);
    v8 = LODWORD(PlayerCommunicationSummary->teammatePings.fMostRecentTime);
    if ( *fMostRecentTime_low.m128i_i32 > *v8.m128i_i32 )
    {
      v9 = _mm_cvtsi128_si32(fMostRecentTime_low);
      x = PlayerCommunicationSummary->pings.vMostRecentLocation.x;
      y = PlayerCommunicationSummary->pings.vMostRecentLocation.y;
      bMostRecentNormal = PlayerCommunicationSummary->pings.bMostRecentNormal;
    }
    else
    {
      x = PlayerCommunicationSummary->teammatePings.vMostRecentLocation.x;
      y = PlayerCommunicationSummary->teammatePings.vMostRecentLocation.y;
      v9 = _mm_cvtsi128_si32(v8);
      bMostRecentNormal = PlayerCommunicationSummary->teammatePings.bMostRecentNormal;
    }
    varTable.m_uint64 = 0;
    varTable.m_flags = 0;
    varTable.m_type = 0;
    v10 = DOTACommander();
    ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v10);
    (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, &varTable);
    m_uint64 = varTable.m_uint64;
    v13 = DOTACommander();
    v14 = CDOTA_Commander::GetActiveScriptVM(v13);
    v15 = *(*v14 + 248LL);
    v30.m_int = v9;
    v30.m_type = 1;
    v30.m_flags = 0;
    v15(v14, m_uint64, 0, &v30);
    CVariantBase<CVariantDefaultAllocator>::Free(&v30);
    v16 = DOTACommander();
    v17 = CDOTA_Commander::GetActiveScriptVM(v16);
    v18 = *v17;
    v28[2] = 0;
    *v28 = x;
    v19 = *(v18 + 248);
    v30.m_type = 0;
    *&v28[1] = y;
    v30.m_flags = 0;
    v25 = v19;
    CVariantBase<CVariantDefaultAllocator>::Free(&v30);
    v30.m_uint64 = v28;
    v30.m_type = 3;
    v25(v17, m_uint64, 1, &v30);
    CVariantBase<CVariantDefaultAllocator>::Free(&v30);
    v20 = DOTACommander();
    v21 = CDOTA_Commander::GetActiveScriptVM(v20);
    v22 = *(*v21 + 248LL);
    v30.m_flags = 0;
    v30.m_type = 6;
    v30.m_char = bMostRecentNormal;
    v22(v21, m_uint64, 2, &v30);
    CVariantBase<CVariantDefaultAllocator>::Free(&v30);
    if ( varTable.m_type == 31 )
      varTable.m_type = 36;
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, a1);
    CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
  }
  else
  {
    a1->m_uint64 = 0;
    a1->m_type = 0;
    a1->m_flags = 0;
  }
  return a1;
}


// CDOTA_Bot_Script::CanBeSeen  (line 951, @0x000000000282f1c0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, CDOTA_BaseNPC::GetOpposingTeamNumber, CBaseModelEntity::CanBeSeenByTeam
// callers: CDOTA_Bot_Script::GetRawOffensivePower, CDOTA_Bot_Script::HasMinistunOnAttack, CDOTA_Bot_Script::UsingItemBreaksInvisibility, CDOTA_Bot_Script::GetHealth, CDOTA_Bot_Script::GetMaxHealth, CDOTA_Bot_Script::GetHealthRegen, CDOTA_Bot_Script::GetManaRegen, CDOTA_Bot_Script::GetBaseMovementSpeed, CDOTA_Bot_Script::GetCurrentMovementSpeed, CDOTA_Bot_Script::GetBoundingRadius, CDOTA_Bot_Script::GetBaseDamage, CDOTA_Bot_Script::GetBaseDamageVariance (72 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::CanBeSeen(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  int OpposingTeamNumber; // eax
  uint32 v7; // edx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CBaseModelEntity *v11; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
    return 1;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(m_pInstance);
  v7 = this->m_hBaseNPC.m_Index;
  if ( v7 + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
    && v7 == v9->m_EHandle.m_Index
    && (v11 = v9->m_pInstance, v9->m_pInstance != 0)
    && v11->m_bIsDOTANPC )
  {
    return CBaseModelEntity::CanBeSeenByTeam(v11, OpposingTeamNumber);
  }
  else
  {
    return CBaseModelEntity::CanBeSeenByTeam(0, OpposingTeamNumber);
  }
}


// CDOTA_Bot_Script::GetActiveMode  (line 958, @0x000000000282ebb0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "GetActiveMode", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetActiveMode(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // rax

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && v4->m_pInstance != 0
      && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pBot = this->m_pBot) != 0 )
    {
      return (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetActiveMode");
    return 0;
  }
}


// CDOTA_Bot_Script::GetActiveModeDesire  (line 968, @0x000000000282ec70, libserver.so)  // inlines: Get, GetActiveModeDesire, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "GetActiveModeDesire", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetActiveModeDesire(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  float result; // xmm0_4
  CEntityIdentity *v5; // rdx
  CDOTA_Bot *m_pBot; // rbx

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v5 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
        if ( m_pBot != 0 )
          return m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(
                                          m_pBot->m_pActiveBotMode,
                                          -1.0)];
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetActiveModeDesire");
    return -1.0;
  }
  return result;
}


// CDOTA_Bot_Script::GetHealth  (line 978, @0x000000000282f510, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CBaseEntity::GetHealth, DevWarning(char const*,...)
// strings: "GetHealth", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetHealth(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      return CBaseEntity::GetHealth(m_pInstance);
    }
    else
    {
      return CBaseEntity::GetHealth(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetHealth");
    return -1;
  }
}


// CDOTA_Bot_Script::GetMaxHealth  (line 985, @0x000000000282f5d0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetMaxHealth", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetMaxHealth(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance, v3);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetMaxHealth");
    return -1;
  }
}


// CDOTA_Bot_Script::GetHealthRegen  (line 992, @0x000000000282f680, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetHealthRegen", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetHealthRegen(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (*(m_pInstance->_vptr_IHandleEntity + 430))(m_pInstance, v3);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetHealthRegen");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetMana  (line 999, @0x00000000028313a0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetMana", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetMana(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetMana");
    return -1;
  }
}


// CDOTA_Bot_Script::GetMaxMana  (line 1006, @0x0000000002831450, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetMaxMana", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetMaxMana(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return *&m_pInstance[44].m_worldGroupId.m_nHashCode;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetMaxMana");
    return -1;
  }
}


// CDOTA_Bot_Script::GetManaRegen  (line 1013, @0x000000000282f730, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetManaRegen", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetManaRegen(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (*(m_pInstance->_vptr_IHandleEntity + 432))(m_pInstance, v3);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetManaRegen");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetBaseMovementSpeed  (line 1022, @0x000000000282f7e0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetBaseMovementSpeed", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetBaseMovementSpeed(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (*(m_pInstance->_vptr_IHandleEntity + 433))(m_pInstance, v3);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetBaseMovementSpeed");
    return -1;
  }
}


// CDOTA_Bot_Script::GetCurrentMovementSpeed  (line 1029, @0x000000000282f890, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetCurrentMovementSpeed", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetCurrentMovementSpeed(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (*(m_pInstance->_vptr_IHandleEntity + 386))(m_pInstance, v3);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetCurrentMovementSpeed");
    return -1;
  }
}


// CDOTA_Bot_Script::IsAlive  (line 1038, @0x00000000028296d0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsAlive(CDOTA_Bot_Script *const this)
{
  CConcreteEntityList *v1; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi

  v1 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = this->m_hBaseNPC.m_Index & 0x1FF, v1 = (8 * v4), (v5 = &v3[v4]) != 0)
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance);
  }
  else
  {
    return (*(loc_0 + 3264LL))(0, v1);
  }
}


// CDOTA_Bot_Script::GetRespawnTime  (line 1043, @0x0000000002829380, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC_Hero::GetRespawnTime
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetRespawnTime(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  float result; // xmm0_4
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdi

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1 )
    return -1.0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v2 == 0 )
    return -1.0;
  result = -1.0;
  v4 = &v2[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
  {
    m_pInstance = v4->m_pInstance;
    if ( v4->m_pInstance != 0
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      return CDOTA_BaseNPC_Hero::GetRespawnTime(m_pInstance);
    }
  }
  return result;
}


// CDOTA_Bot_Script::HasBuyback  (line 1049, @0x0000000002832cf0, libserver.so)  // inlines: DOTAGameRules, Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_BaseNPC_Hero::GetBuybackCost
// strings: "HasBuyback", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::HasBuyback(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  bool m_bIsDOTANPC; // bl
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r12
  float v8; // xmm0_4
  int v9; // ebx

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    m_bIsDOTANPC = 0;
    if ( m_Index + 2 <= 1 )
      return m_bIsDOTANPC;
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v4 == 0 )
      return m_bIsDOTANPC;
    v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF];
    if ( v5 == 0 )
      return m_bIsDOTANPC;
    if ( m_Index != v5->m_EHandle.m_Index )
      return m_bIsDOTANPC;
    m_pInstance = v5->m_pInstance;
    if ( v5->m_pInstance == 0 )
      return m_bIsDOTANPC;
    m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
    if ( !m_bIsDOTANPC )
      return m_bIsDOTANPC;
    m_bIsDOTANPC = 0;
    if ( (m_pInstance->m_iUnitType & 1) == 0 )
      return m_bIsDOTANPC;
    v8 = 0.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    m_bIsDOTANPC = 0;
    if ( m_pInstance->m_fBuybackCooldown > v8 )
    {
      v9 = (*(m_pInstance->_vptr_IHandleEntity + 397))(v5->m_pInstance);
      return v9 > CDOTA_BaseNPC_Hero::GetBuybackCost(m_pInstance);
    }
    else
    {
      return m_bIsDOTANPC;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "HasBuyback");
    return 0;
  }
}


// CDOTA_Bot_Script::GetBuybackCost  (line 1057, @0x0000000002832750, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_BaseNPC_Hero::GetBuybackCost
// strings: "GetBuybackCost", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetBuybackCost(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rax
  __int64 v4; // rcx
  bool v5; // zf
  CEntityIdentity *v6; // rcx
  int result; // eax
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      v4 = this->m_hBaseNPC.m_Index & 0x1FF;
      v5 = &v3[v4] == 0;
      v6 = &v3[v4];
      result = -1;
      if ( !v5 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          return CDOTA_BaseNPC_Hero::GetBuybackCost(m_pInstance);
        }
      }
    }
    else
    {
      return -1;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetBuybackCost");
    return 0;
  }
  return result;
}


// CDOTA_Bot_Script::GetBuybackCooldown  (line 1068, @0x0000000002832820, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "GetBuybackCooldown", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetBuybackCooldown(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  float result; // xmm0_4
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v5 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          return *(&m_pInstance[97].m_iszPrivateVScripts.u.m_pAsString + 1);
        }
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetBuybackCooldown");
    return 0.0;
  }
  return result;
}


// CDOTA_Bot_Script::GetAbilityPoints  (line 1081, @0x0000000002832b60, libserver.so)  // inlines: Get, GetAbilityPoints, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "GetAbilityPoints", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetAbilityPoints(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // edx
  int result; // eax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityInstance *m_pInstance; // rdx

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    result = 0;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( v5->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            return HIDWORD(m_pInstance[99].m_hPrivateScope.m_hScope);
          }
        }
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetAbilityPoints");
    return -1;
  }
  return result;
}


// CDOTA_Bot_Script::GetBoundingRadius  (line 1094, @0x000000000282f940, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetBoundingRadius", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetBoundingRadius(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return *(&m_pInstance[48]._vptr_IHandleEntity + 1);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetBoundingRadius");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetBaseDamage  (line 1103, @0x000000000282f9f0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// callers: CDOTA_Bot_Script::GetAttackDamage
// strings: "GetBaseDamage", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetBaseDamage(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v8; // eax
  uint32 v9; // edx
  int v10; // r12d
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v8 = (*(m_pInstance->_vptr_IHandleEntity + 417))(m_pInstance, v3);
    v9 = this->m_hBaseNPC.m_Index;
    v10 = v8;
    if ( v9 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || v9 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    return ((*(v13->_vptr_IHandleEntity + 416))(v13) + v10) * 0.5;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetBaseDamage");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetBaseDamageVariance  (line 1110, @0x000000000282fb30, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetBaseDamageVariance", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetBaseDamageVariance(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v8; // eax
  uint32 v9; // edx
  int v10; // r12d
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v8 = (*(m_pInstance->_vptr_IHandleEntity + 417))(m_pInstance, v3);
    v9 = this->m_hBaseNPC.m_Index;
    v10 = v8;
    if ( v9 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || v9 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    return (v10 - (*(v13->_vptr_IHandleEntity + 416))(v13)) * 0.5;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetBaseDamageVariance");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetAttackDamage  (line 1117, @0x000000000282fc70, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetBaseDamage, CDOTA_BaseNPC::GetDamageBonus, DevWarning(char const*,...)
// strings: "GetAttackDamage", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetAttackDamage(CDOTA_Bot_Script *const this)
{
  float BaseDamage; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    BaseDamage = CDOTA_Bot_Script::GetBaseDamage(this);
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v5->m_EHandle.m_Index
      || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    return CDOTA_BaseNPC::GetDamageBonus(m_pInstance) + BaseDamage;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetAttackDamage");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetAttackRange  (line 1126, @0x0000000002830df0, libserver.so)  // inlines: Get, GetAttackRange, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, DevWarning(char const*,...)
// strings: "GetAttackRange", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetAttackRange(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v8; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v11; // rax
  float v12; // xmm3_4
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rax
  float v18; // xmm1_4
  float v19; // xmm0_4
  int result; // eax
  __int64 v21; // rdx
  float v22; // [rsp+8h] [rbp-18h]
  float v23; // [rsp+8h] [rbp-18h]
  float v24; // [rsp+Ch] [rbp-14h]
  float v25; // [rsp+Ch] [rbp-14h]
  float v26; // [rsp+Ch] [rbp-14h]
  float v27; // [rsp+Ch] [rbp-14h]

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    m_hScope_high = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
    Modifier_Constant_Highest_Internal = 0.0;
    if ( m_hScope_high != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             &m_pInstance[64].m_worldGroupId,
                                             modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                             &CModifierParams::s_Default);
    v8 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = 0.0;
    m_hScope_low = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
    if ( v8 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v8) > 0 )
    {
      v22 = Modifier_Constant_Highest_Internal;
      v24 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &m_pInstance[64].m_worldGroupId,
                                              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                              &CModifierParams::s_Default);
      Modifier_Constant_Highest_Internal = v22;
      m_hScope_low = v24;
    }
    v11 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
    v12 = m_hScope_low + Modifier_Constant_Additive_Internal;
    v13 = 0.0;
    if ( v11 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v11) > 0 )
    {
      v23 = Modifier_Constant_Highest_Internal;
      v25 = v12;
      v13 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &m_pInstance[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      Modifier_Constant_Highest_Internal = v23;
      v12 = v25;
    }
    if ( Modifier_Constant_Highest_Internal > (v12 + v13) )
    {
      v21 = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
      result = 0;
      if ( v21 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v21) > 0 )
        return CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                 &m_pInstance[64].m_worldGroupId,
                 modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                 &CModifierParams::s_Default);
    }
    else
    {
      v14 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
      v15 = 0.0;
      v16 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
      if ( v14 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v14) > 0 )
      {
        v26 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
        v15 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                &m_pInstance[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                &CModifierParams::s_Default);
        v16 = v26;
      }
      v17 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
      v18 = v16 + v15;
      v19 = 0.0;
      if ( v17 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v17) > 0 )
      {
        v27 = v18;
        v19 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &m_pInstance[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                &CModifierParams::s_Default);
        v18 = v27;
      }
      return (v19 + v18);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetAttackRange");
    return -1;
  }
  return result;
}


// CDOTA_Bot_Script::GetAttackSpeed  (line 1133, @0x000000000282fd30, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::GetAttackSpeed, DevWarning(char const*,...)
// strings: "GetAttackSpeed", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetAttackSpeed(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      return CDOTA_BaseNPC::GetAttackSpeed(m_pInstance);
    }
    else
    {
      return CDOTA_BaseNPC::GetAttackSpeed(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetAttackSpeed");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetSecondsPerAttack  (line 1140, @0x000000000282fde0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::GetSecondsPerAttack, DevWarning(char const*,...)
// strings: "GetSecondsPerAttack", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetSecondsPerAttack(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      return CDOTA_BaseNPC::GetSecondsPerAttack(m_pInstance);
    }
    else
    {
      return CDOTA_BaseNPC::GetSecondsPerAttack(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetSecondsPerAttack");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetAttackPoint  (line 1147, @0x000000000282fe90, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::GetAttackAnimationPoint, DevWarning(char const*,...)
// strings: "GetAttackPoint", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetAttackPoint(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      return CDOTA_BaseNPC::GetAttackAnimationPoint(m_pInstance);
    }
    else
    {
      return CDOTA_BaseNPC::GetAttackAnimationPoint(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetAttackPoint");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetLastAttackTime  (line 1154, @0x000000000282ff40, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetLastAttackTime", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetLastAttackTime(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return *&m_pInstance[57].m_CScriptComponent;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetLastAttackTime");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetSpellAmp  (line 1163, @0x0000000002831080, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Percentage_Additive, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal
// strings: "GetSpellAmp", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetSpellAmp(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  float result; // xmm0_4
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v7; // xmm0_4
  __int64 m_pAsString_high; // rax
  float v9; // xmm1_4
  float v10; // xmm0_4
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  float fSpellAmp; // [rsp+Ch] [rbp-14h]

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v5 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v7 = (*(m_pInstance->_vptr_IHandleEntity + 498))(v5->m_pInstance, -1.0);
          m_pAsString_high = HIBYTE(m_pInstance[66].m_iszPrivateVScripts.u.m_pAsString);
          v9 = 0.0625 * v7;
          if ( m_pAsString_high == 0xFF || *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * m_pAsString_high) <= 0 )
          {
            v10 = 0.0;
          }
          else
          {
            fSpellAmp = 0.0625 * v7;
            Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                                      &m_pInstance[64].m_worldGroupId,
                                                      modifierfunction::MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE,
                                                      &CModifierParams::s_Default);
            v9 = fSpellAmp;
            v10 = (Modifier_Percentage_Additive_Internal - 1.0) * 100.0;
          }
          return (v10 + v9) / 100.0;
        }
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetSpellAmp");
    return -1.0;
  }
  return result;
}


// CDOTA_Bot_Script::GetArmor  (line 1177, @0x000000000282fff0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::GetArmorForDamageType, DevWarning(char const*,...)
// strings: "GetArmor", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetArmor(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      return CDOTA_BaseNPC::GetArmorForDamageType(m_pInstance, 1);
    }
    else
    {
      return CDOTA_BaseNPC::GetArmorForDamageType(0, 1);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetArmor");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetMagicResist  (line 1184, @0x00000000028300b0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::GetArmorForDamageType, DevWarning(char const*,...)
// strings: "GetMagicResist", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetMagicResist(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      return CDOTA_BaseNPC::GetArmorForDamageType(m_pInstance, 2);
    }
    else
    {
      return CDOTA_BaseNPC::GetArmorForDamageType(0, 2);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetMagicResist");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetEvasion  (line 1191, @0x00000000028311d0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Highest, GetModifier_Percentage_Multiplicative, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, DevWarning(char const*,...)
// strings: "GetEvasion", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetEvasion(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // edx
  CConcreteEntityList *v3; // rsi
  unsigned int v4; // eax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityInstance *m_pInstance; // rdi
  __int64 m_CScriptComponent_low; // rcx
  float v9; // xmm0_4
  float v10; // xmm1_4
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rdi
  __int64 v14; // rax
  float Modifier_Constant_Highest_Internal; // xmm0_4
  float fEvasion; // [rsp+Ch] [rbp-14h]

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    v4 = m_Index + 2;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    m_CScriptComponent_low = LOBYTE(m_pInstance[66].m_CScriptComponent);
    if ( m_CScriptComponent_low == 0xFF
      || *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * m_CScriptComponent_low) <= 0 )
    {
      v10 = 0.0;
    }
    else
    {
      v9 = CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal(
             &m_pInstance[64].m_worldGroupId,
             modifierfunction::MODIFIER_PROPERTY_EVASION_CONSTANT,
             &CModifierParams::s_Default);
      m_Index = this->m_hBaseNPC.m_Index;
      v3 = CEntityHandle::gm_pEntityList;
      v10 = v9 - 1.0;
      v4 = m_Index + 2;
    }
    if ( v4 <= 1
      || (v11 = v3->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    v14 = BYTE1(v13[66].m_CScriptComponent);
    Modifier_Constant_Highest_Internal = 0.0;
    if ( v14 != 0xFF && *(*&v13[65].m_worldGroupId.m_nHashCode + 24 * v14) > 0 )
    {
      fEvasion = v10;
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             &v13[64].m_worldGroupId,
                                             modifierfunction::MODIFIER_PROPERTY_NEGATIVE_EVASION_CONSTANT,
                                             &CModifierParams::s_Default);
      v10 = fEvasion;
    }
    return v10 - Modifier_Constant_Highest_Internal;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetEvasion");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetPrimaryAttribute  (line 1203, @0x0000000002829250, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetPrimaryAttribute, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetPrimaryAttribute(CDOTA_Bot_Script *const this)
{
  int result; // eax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rdx

  result = -1;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          return HIDWORD(m_pInstance[97]._vptr_IHandleEntity);
        }
      }
    }
  }
  return result;
}


// CDOTA_Bot_Script::GetAttributeValue  (line 1212, @0x0000000002830170, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetAttributeValue", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetAttributeValue(CDOTA_Bot_Script *const this, int nAttribute)
{
  uint32 m_Index; // edx
  int result; // eax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    result = -1;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( nAttribute == 1 )
            {
              return (*(m_pInstance->_vptr_IHandleEntity + 497))(m_pInstance);
            }
            else if ( nAttribute == 2 )
            {
              return (*(m_pInstance->_vptr_IHandleEntity + 498))(m_pInstance);
            }
            else
            {
              result = -1;
              if ( nAttribute == 0 )
                return (*(m_pInstance->_vptr_IHandleEntity + 496))(m_pInstance);
            }
          }
        }
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetAttributeValue");
    return -1;
  }
  return result;
}


// CDOTA_Bot_Script::GetLevel  (line 1232, @0x0000000002828e60, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Bot_Script::GetXPNeededToLevel
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetLevel(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return HIDWORD(m_pInstance[44].m_hPrivateScope.m_hScope);
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot_Script::GetXPNeededToLevel  (line 1238, @0x0000000002832c20, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_Bot_Script::GetLevel, GetXPNeededToReachNextLevel
// strings: "GetXPNeededToLevel", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetXPNeededToLevel(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // edx
  int result; // eax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityInstance *m_pInstance; // r12
  int Level; // eax

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    result = -1;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( v5->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            Level = CDOTA_Bot_Script::GetLevel(this);
            return GetXPNeededToReachNextLevel(Level) - LODWORD(m_pInstance[99].m_iszPrivateVScripts.u.m_Id);
          }
        }
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetXPNeededToLevel");
    return -1;
  }
  return result;
}


// CDOTA_Bot_Script::GetBountyXP  (line 1251, @0x00000000028295d0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetBountyXP(CDOTA_Bot_Script *const this)
{
  CConcreteEntityList *v1; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi

  v1 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = this->m_hBaseNPC.m_Index & 0x1FF, v1 = (8 * v4), (v5 = &v3[v4]) != 0)
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return (*(m_pInstance->_vptr_IHandleEntity + 409))(m_pInstance);
  }
  else
  {
    return (*(loc_0 + 3272LL))(0, v1);
  }
}


// CDOTA_Bot_Script::GetBountyGoldMin  (line 1256, @0x0000000002829410, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetBountyGoldMin(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rdi

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      return (*(m_pInstance->_vptr_IHandleEntity + 410))(m_pInstance);
  }
  else
  {
    m_pInstance = 0;
  }
  return m_pInstance[51].m_pEntity;
}


// CDOTA_Bot_Script::GetBountyGoldMax  (line 1261, @0x00000000028294a0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetBountyGoldMax(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rdi

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      return (*(m_pInstance->_vptr_IHandleEntity + 410))(m_pInstance);
  }
  else
  {
    m_pInstance = 0;
  }
  return HIDWORD(m_pInstance[51].m_pEntity);
}


// CDOTA_Bot_Script::GetGold  (line 1268, @0x00000000028328f0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "GetGold", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetGold(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (*(m_pInstance->_vptr_IHandleEntity + 397))(m_pInstance, v3);
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetGold");
    return -1;
  }
}


// CDOTA_Bot_Script::GetStashValue  (line 1275, @0x000000000282ed50, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_Bot::GetStashValue
// strings: "GetStashValue", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetStashValue(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // rdi

  if ( !CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetStashValue");
    return -1;
  }
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1 )
    return -1;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return -1;
  v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v4 == 0 )
    return -1;
  if ( m_Index != v4->m_EHandle.m_Index )
    return -1;
  if ( v4->m_pInstance == 0 )
    return -1;
  if ( BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return -1;
  m_pBot = this->m_pBot;
  if ( m_pBot == 0 )
    return -1;
  return CDOTA_Bot::GetStashValue(m_pBot, 0);
}


// CDOTA_Bot_Script::GetCourierValue  (line 1283, @0x000000000282ee00, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_Bot::GetCourierValue
// strings: "GetCourierValue", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetCourierValue(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // rdi

  if ( !CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetCourierValue");
    return -1;
  }
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1 )
    return -1;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return -1;
  v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v4 == 0 )
    return -1;
  if ( m_Index != v4->m_EHandle.m_Index )
    return -1;
  if ( v4->m_pInstance == 0 )
    return -1;
  if ( BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return -1;
  m_pBot = this->m_pBot;
  if ( m_pBot == 0 )
    return -1;
  return CDOTA_Bot::GetCourierValue(m_pBot);
}


// CDOTA_Bot_Script::GetItemSlotType  (line 1293, @0x0000000002829530, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsItemSlotBackpack, IsItemSlotStash, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetInventory
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetItemSlotType(CDOTA_Bot_Script *const this, int nSlot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  int result; // eax

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_BaseNPC::GetInventory(m_pInstance) == 0 )
    return -1;
  result = 0;
  if ( nSlot > 5 )
  {
    LOBYTE(result) = 1;
    if ( (nSlot - 6) > 2 )
      return (nSlot - 9) < 6 ? 2 : -1;
  }
  return result;
}


// CDOTA_Bot_Script::GetLocation  (line 1313, @0x0000000002830270, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "GetLocation", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_Bot_Script::GetLocation(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rcx
  unsigned int v4; // edx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v6; // rsi
  CEntityIdentity *v7; // rsi
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseEntity *v11; // rdi
  const Vector v14; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_hBaseNPC.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  v4 = m_Index + 2;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(this->m_hBaseNPC.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance) == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
  {
    if ( !CDOTA_Bot_Script::CanBeSeen(this) )
    {
      DevWarning("'%s' called on an entity that cannot be seen!\n", "GetLocation");
      v14 = vec3_origin;
      goto LABEL_13;
    }
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    v4 = m_Index + 2;
  }
  if ( v4 <= 1
    || (v9 = v3->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
    || v10->m_EHandle.m_Index != m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || !v11->m_bIsDOTANPC )
  {
    v11 = 0;
  }
  v14 = *CBaseEntity::GetAbsOrigin(v11);
LABEL_13:
  *&result.x = *&v14.x;
  result.z = v14.z;
  return result;
}


// CDOTA_Bot_Script::GetFacing  (line 1323, @0x00000000028303e0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CBaseEntity::GetAbsAngles, DevWarning(char const*,...)
// strings: "GetFacing", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetFacing(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    return CBaseEntity::GetAbsAngles(m_pInstance)->y;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetFacing");
    return -1;
  }
}


// CDOTA_Bot_Script::GetGroundHeight  (line 1330, @0x00000000028461b0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CBaseEntity::GetAbsOrigin, GetGroundHeight, DevWarning(char const*,...)
// strings: "GetGroundHeight", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetGroundHeight(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CDOTA_BaseNPC *m_pInstance; // rbx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const Vector *AbsOrigin; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hBaseNPC.m_Index & 0x1FF];
        if ( v5 != 0
          && m_Index == v5->m_EHandle.m_Index
          && v5->m_pInstance != 0
          && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pInstance = v5->m_pInstance;
        }
      }
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    return GetGroundHeight(AbsOrigin, m_pInstance);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetGroundHeight");
    return -1;
  }
}


// CDOTA_Bot_Script::GetAbilityByName  (line 1339, @0x0000000002830490, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetBotScript, CDOTABaseAbility_BotScript::GetScriptHandle, DevWarning(char const*,...)
// strings: "GetAbilityByName", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Bot_Script::GetAbilityByName(CDOTA_Bot_Script *const this, const char *pszAbilityName)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility_BotScript *BotScript; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, pszAbilityName, 0);
    if ( AbilityByName != 0 )
    {
      BotScript = CDOTABaseAbility::GetBotScript(AbilityByName);
      return CDOTABaseAbility_BotScript::GetScriptHandle(BotScript);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetAbilityByName");
  }
  return 0;
}


// CDOTA_Bot_Script::GetItemInSlot  (line 1347, @0x0000000002830550, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTABaseAbility::GetBotScript, CDOTABaseAbility_BotScript::GetScriptHandle, DevWarning(char const*,...)
// strings: "GetItemInSlot", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Bot_Script::GetItemInSlot(CDOTA_Bot_Script *const this, int nSlot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTABaseAbility_BotScript *BotScript; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, nSlot);
    if ( ItemInSlot != 0 )
    {
      BotScript = CDOTABaseAbility::GetBotScript(ItemInSlot);
      return CDOTABaseAbility_BotScript::GetScriptHandle(BotScript);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetItemInSlot");
  }
  return 0;
}


// CDOTA_Bot_Script::FindItemSlot  (line 1355, @0x0000000002830620, libserver.so)  // inlines: FStrEq, Get, GetAbilityName, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, strcmp, DevWarning(char const*,...)
// strings: "<NoAbilityName>", "FindItemSlot", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::FindItemSlot(CDOTA_Bot_Script *const this, const char *pszItemName)
{
  int v4; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *v12; // rdi
  const char *m_pszAbilityName; // rdx

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    v4 = 0;
    while ( 1 )
    {
      m_Index = this->m_hBaseNPC.m_Index;
      if ( m_Index + 2 <= 1
        || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
        || (v7 = &v6[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
        || m_Index != v7->m_EHandle.m_Index
        || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v4);
      if ( ItemInSlot != 0 )
      {
        m_pAbilityData = ItemInSlot->m_pAbilityData;
        v12 = "<NoAbilityName>";
        if ( m_pAbilityData != 0 )
        {
          m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
          if ( m_pszAbilityName != 0 )
            v12 = m_pszAbilityName;
        }
        if ( pszItemName == v12 || strcmp(v12, pszItemName) == 0 )
          break;
      }
      if ( ++v4 == 17 )
        return -1;
    }
    return v4;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "FindItemSlot");
    return -1;
  }
}


// CDOTA_Bot_Script::IsChanneling  (line 1371, @0x0000000002830740, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::IsChanneling, DevWarning(char const*,...)
// strings: "IsChanneling", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsChanneling(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      return CDOTA_BaseNPC::IsChanneling(m_pInstance);
    }
    else
    {
      return CDOTA_BaseNPC::IsChanneling(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsChanneling");
    return 0;
  }
}


// CDOTA_Bot_Script::IsUsingAbility  (line 1378, @0x000000000282e9a0, libserver.so)  // inlines: Element, Get, GetAction, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Top, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Bot_Script::IsMyScriptBot, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::HasQueuedActionType, DevWarning(char const*,...)
// strings: "IsUsingAbility", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsUsingAbility(CDOTA_Bot_Script *const this)
{
  bool IsMyScriptBot; // r12
  uint32 m_Index; // edx
  CDOTA_Bot *m_pBot; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  int m_Size; // edx
  CDOTA_BotAction *v8; // rdi
  CEntityInstance *v9; // rax

  IsMyScriptBot = CDOTA_Bot_Script::IsMyScriptBot(this);
  if ( !IsMyScriptBot )
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "IsUsingAbility");
    return IsMyScriptBot;
  }
  m_Index = this->m_hBaseNPC.m_Index;
  m_pBot = 0;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v6 != 0
        && m_Index == v6->m_EHandle.m_Index
        && v6->m_pInstance != 0
        && BYTE3(v6->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
      }
    }
  }
  m_Size = m_pBot->m_ActionStack.m_Size;
  v8 = 0;
  if ( m_Size > 0 )
    v8 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  if ( (*(v8->_vptr_CDOTA_BotAction + 2))(v8) == 5 )
    return IsMyScriptBot;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    return CDOTA_Bot::HasQueuedActionType(this->m_pBot, 5);
  else
    return CDOTA_Bot::HasQueuedActionType(0, 5);
}


// CDOTA_Bot_Script::HasQueuedAction  (line 1385, @0x000000000282da70, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptBot, CDOTA_Bot::HasQueuedAction, DevWarning(char const*,...)
// strings: "HasQueuedAction", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::HasQueuedAction(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  if ( CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && v4->m_pInstance != 0
      && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      return CDOTA_Bot::HasQueuedAction(this->m_pBot);
    }
    else
    {
      return CDOTA_Bot::HasQueuedAction(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "HasQueuedAction");
    return 0;
  }
}


// CDOTA_Bot_Script::GetCurrentActiveAbility  (line 1392, @0x00000000028307f0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTABaseAbility::GetBotScript, CDOTABaseAbility_BotScript::GetScriptHandle
// strings: "GetCurrentActiveAbility", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Bot_Script::GetCurrentActiveAbility(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *CurrentActiveAbility; // rax
  CDOTABaseAbility_BotScript *BotScript; // rax

  if ( !CDOTA_Bot_Script::CanBeSeen(this) )
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetCurrentActiveAbility");
    return 0;
  }
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0;
  v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 0;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 0;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 0;
  if ( !m_pInstance->m_bIsDOTANPC )
    return 0;
  if ( this->m_pBot == 0 )
    return 0;
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance);
  if ( CurrentActiveAbility == 0 )
    return 0;
  BotScript = CDOTABaseAbility::GetBotScript(CurrentActiveAbility);
  return CDOTABaseAbility_BotScript::GetScriptHandle(BotScript);
}


// CDOTA_Bot_Script::GetVelocity  (line 1406, @0x000000000283c8b0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTALocomotor::GetAverageVelocityOverTime, DevWarning(char const*,...)
// strings: "GetVelocity", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_Bot_Script::GetVelocity(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTALocomotor *v8; // rax
  float v9; // xmm1_4
  vec_t v10; // xmm1_4
  const Vector v13; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v8 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance, v3);
    *&v13.x = CDOTALocomotor::GetAverageVelocityOverTime(v8, 2.0, v9).m128i_u64[0];
    v13.z = v10;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetVelocity");
    v13 = vec3_origin;
  }
  *&result.x = *&v13.x;
  result.z = v13.z;
  return result;
}


// CDOTA_Bot_Script::GetAttackTarget  (line 1415, @0x00000000028329a0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetNPCAttackTarget, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_Bot_Script::GetScriptHandle
// strings: "GetAttackTarget", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Bot_Script::GetAttackTarget(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  int m_pAsString_high; // edx
  unsigned __int16 v7; // si
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CEntityInstance *v11; // rax

  if ( !CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetAttackTarget");
    return 0;
  }
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  m_pAsString_high = HIDWORD(m_pInstance[59].m_iszPrivateVScripts.u.m_pAsString);
  if ( (m_pAsString_high + 2) <= 1 )
    return 0;
  v7 = WORD2(m_pInstance[59].m_iszPrivateVScripts.u.m_pAsString);
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F];
  if ( v8 == 0 )
    return 0;
  v9 = &v8[v7 & 0x1FF];
  if ( v9 == 0 )
    return 0;
  if ( m_pAsString_high != v9->m_EHandle.m_Index )
    return 0;
  v11 = v9->m_pInstance;
  if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
    return 0;
  return CDOTA_Bot_Script::GetScriptHandle(v11[45].m_CScriptComponent);
}


// CDOTA_Bot_Script::GetLastSeenLocation  (line 1426, @0x00000000028332c0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, GetLastSeenLocation, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsOpposingScriptTeam, DevWarning(char const*,...)
// strings: "GetLastSeenLocation", "'%s' called on an entity that is not a opponent!\n"
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_Bot_Script::GetLastSeenLocation(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // rax
  Vector m_vLastSeenLoc; // 0:^10.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( CDOTA_Bot_Script::IsOpposingScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && v4->m_pInstance != 0
      && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pBot = this->m_pBot) != 0 )
    {
      m_vLastSeenLoc = m_pBot->m_vLastSeenLoc;
    }
    else
    {
      m_vLastSeenLoc = vec3_origin;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a opponent!\n", "GetLastSeenLocation");
    m_vLastSeenLoc = vec3_origin;
  }
  *&result.x = *&m_vLastSeenLoc.x;
  result.z = m_vLastSeenLoc.z;
  return result;
}


// CDOTA_Bot_Script::GetTimeSinceLastSeen  (line 1436, @0x00000000028333e0, libserver.so)  // inlines: DOTAGameRules, Get, GetBot, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTimeSinceLastSeen, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsOpposingScriptTeam, DevWarning(char const*,...)
// strings: "GetTimeSinceLastSeen", "'%s' called on an entity that is not a opponent!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetTimeSinceLastSeen(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  float result; // xmm0_4
  CEntityIdentity *v5; // rdx
  CDOTA_Bot *m_pBot; // rax
  float v7; // xmm0_4

  if ( CDOTA_Bot_Script::IsOpposingScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v5 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
        if ( m_pBot != 0 )
        {
          v7 = 0.0;
          if ( g_pGameRules != 0 )
            v7 = *&g_pGameRules[18].m_szQuestName[20];
          return v7 - m_pBot->m_fLastSeen;
        }
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a opponent!\n", "GetTimeSinceLastSeen");
    return -1.0;
  }
  return result;
}


// CDOTA_Bot_Script::IsRooted  (line 1446, @0x0000000002831500, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsRooted, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsRooted", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsRooted(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  _BOOL4 v6; // eax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return m_pInstance[58]._vptr_IHandleEntity & 1;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsRooted");
    LOBYTE(v6) = 0;
  }
  return v6;
}


// CDOTA_Bot_Script::IsDisarmed  (line 1453, @0x00000000028315b0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsDisarmed, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsDisarmed", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsDisarmed(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 2) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsDisarmed");
    return 0;
  }
}


// CDOTA_Bot_Script::IsAttackImmune  (line 1460, @0x0000000002831660, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsAttackImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsAttackImmune", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsAttackImmune(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 4) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsAttackImmune");
    return 0;
  }
}


// CDOTA_Bot_Script::IsSilenced  (line 1467, @0x0000000002831710, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsSilenced, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsSilenced", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsSilenced(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 8) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsSilenced");
    return 0;
  }
}


// CDOTA_Bot_Script::IsMuted  (line 1474, @0x00000000028317c0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsMuted, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsMuted", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsMuted(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x10) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsMuted");
    return 0;
  }
}


// CDOTA_Bot_Script::IsStunned  (line 1481, @0x0000000002831870, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsStunned, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsStunned", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsStunned(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x20) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsStunned");
    return 0;
  }
}


// CDOTA_Bot_Script::IsHexed  (line 1488, @0x0000000002831920, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsHexed, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsHexed", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsHexed(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x40) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsHexed");
    return 0;
  }
}


// CDOTA_Bot_Script::IsInvulnerable  (line 1495, @0x00000000028319d0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, IsWaitingToSpawn, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsInvulnerable", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsInvulnerable(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0 )
      return m_pInstance[71]._vptr_IHandleEntity;
    else
      return (m_pInstance[58]._vptr_IHandleEntity & 0x100) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsInvulnerable");
    return 0;
  }
}


// CDOTA_Bot_Script::IsInvisible  (line 1502, @0x0000000002831aa0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvisible, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsInvisible", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsInvisible(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x80) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsInvisible");
    return 0;
  }
}


// CDOTA_Bot_Script::IsMagicImmune  (line 1509, @0x0000000002831b50, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsMagicImmune", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsMagicImmune(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x200) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsMagicImmune");
    return 0;
  }
}


// CDOTA_Bot_Script::IsNightmared  (line 1516, @0x0000000002831c00, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsNightmared, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsNightmared", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsNightmared(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x800) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsNightmared");
    return 0;
  }
}


// CDOTA_Bot_Script::IsBlockDisabled  (line 1523, @0x0000000002831cb0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsBlockDisabled, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsBlockDisabled", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsBlockDisabled(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x1000) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsBlockDisabled");
    return 0;
  }
}


// CDOTA_Bot_Script::IsEvadeDisabled  (line 1530, @0x0000000002831d60, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsEvadeDisabled, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsEvadeDisabled", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsEvadeDisabled(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x2000) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsEvadeDisabled");
    return 0;
  }
}


// CDOTA_Bot_Script::IsUnableToMiss  (line 1537, @0x0000000002831e10, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsUnableToMiss, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsUnableToMiss", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsUnableToMiss(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x10000) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsUnableToMiss");
    return 0;
  }
}


// CDOTA_Bot_Script::IsSpeciallyDeniable  (line 1544, @0x0000000002831ec0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsSpeciallyDeniable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsSpeciallyDeniable", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsSpeciallyDeniable(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x20000) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsSpeciallyDeniable");
    return 0;
  }
}


// CDOTA_Bot_Script::IsDominated  (line 1551, @0x0000000002831f70, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsDominated, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsDominated", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsDominated(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    return (m_pInstance[58]._vptr_IHandleEntity & 0x20000000) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsDominated");
    return 0;
  }
}


// CDOTA_Bot_Script::IsBlind  (line 1558, @0x0000000002832020, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsBlind, IsValid, IsWaitingToSpawn, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...)
// strings: "IsBlind", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::IsBlind(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0 )
      return m_pInstance[71]._vptr_IHandleEntity;
    else
      return (m_pInstance[58]._vptr_IHandleEntity & 0x40000000) != 0;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsBlind");
    return 0;
  }
}


// CDOTA_Bot_Script::HasScepter  (line 1565, @0x00000000028308b0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::HasScepter, DevWarning(char const*,...)
// strings: "HasScepter", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::HasScepter(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      return CDOTA_BaseNPC::HasScepter(m_pInstance);
    }
    else
    {
      return CDOTA_BaseNPC::HasScepter(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "HasScepter");
    return 0;
  }
}


// CDOTA_Bot_Script::WasRecentlyDamagedByAnyHero  (line 1574, @0x000000000282eeb0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_Bot::WasRecentlyHitByHero
// strings: "WasRecentlyDamagedByAnyHero", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::WasRecentlyDamagedByAnyHero(CDOTA_Bot_Script *const this, float a2, float fTime)
{
  float v4; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_Bot *m_pBot; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    return m_Index + 2 > 1
        && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v7 = &v6[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v7->m_EHandle.m_Index
        && v7->m_pInstance != 0
        && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pBot = this->m_pBot) != 0
        && CDOTA_Bot::WasRecentlyHitByHero(m_pBot, a2, v4);
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "WasRecentlyDamagedByAnyHero");
    return 0;
  }
}


// CDOTA_Bot_Script::WasRecentlyDamagedByHero  (line 1582, @0x0000000002856440, libserver.so)  // inlines: Get, GetBaseNPC, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), ToBotScript, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::WasRecentlyHitBySpecificHero
// strings: "WasRecentlyDamagedByHero", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::WasRecentlyDamagedByHero(
        CDOTA_Bot_Script *const this,
        HSCRIPT hHero,
        __m128i a3,
        float fTime)
{
  float v4; // r14d
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_Bot_Script *v11; // rax
  CEntityInstance *v12; // rax
  unsigned int v13; // r12d
  CEntityInstance *v14; // rax
  float v15; // xmm1_4
  CDOTA_Bot *m_pBot; // rdi

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v9 = &v8[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v9->m_EHandle.m_Index
      && v9->m_pInstance != 0
      && BYTE3(v9->m_pInstance[7]._vptr_IHandleEntity) != 0
      && this->m_pBot != 0
      && (v11 = ToBotScript(hHero, 0)) != 0
      && (v12 = CEntityHandle::operator CEntityInstance *(&v11->m_hBaseNPC)) != 0
      && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    {
      v13 = (*(v12->_vptr_IHandleEntity + 414))(v12);
      v14 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
      if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
        m_pBot = this->m_pBot;
      else
        m_pBot = 0;
      return CDOTA_Bot::WasRecentlyHitBySpecificHero(m_pBot, v13, v4, v15);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "WasRecentlyDamagedByHero");
    return 0;
  }
}


// CDOTA_Bot_Script::TimeSinceDamagedByAnyHero  (line 1594, @0x000000000282ef70, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_Bot::TimeSinceHitByHero
// strings: "TimeSinceDamagedByAnyHero", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::TimeSinceDamagedByAnyHero(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  float result; // xmm0_4
  CEntityIdentity *v5; // rdx
  CDOTA_Bot *m_pBot; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v5 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
        if ( m_pBot != 0 )
          return CDOTA_Bot::TimeSinceHitByHero(m_pBot);
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "TimeSinceDamagedByAnyHero");
    return -1.0;
  }
  return result;
}


// CDOTA_Bot_Script::TimeSinceDamagedByHero  (line 1602, @0x0000000002856570, libserver.so)  // inlines: Get, GetBaseNPC, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), ToBotScript, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::TimeSinceHitBySpecificHero
// strings: "TimeSinceDamagedByHero", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::TimeSinceDamagedByHero(CDOTA_Bot_Script *const this, HSCRIPT hHero)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  float result; // xmm0_4
  CEntityIdentity *v7; // rdx
  CDOTA_Bot_Script *v8; // rax
  CEntityInstance *v9; // rax
  int v10; // r12d
  CEntityInstance *v11; // rax

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v7 = &v5[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v7 != 0
        && m_Index == v7->m_EHandle.m_Index
        && v7->m_pInstance != 0
        && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0
        && this->m_pBot != 0 )
      {
        v8 = ToBotScript(hHero, 0);
        if ( v8 != 0
          && (v9 = CEntityHandle::operator CEntityInstance *(&v8->m_hBaseNPC)) != 0
          && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
        {
          v10 = (*(v9->_vptr_IHandleEntity + 414))(v9);
          v11 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
          if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
            return CDOTA_Bot::TimeSinceHitBySpecificHero(this->m_pBot, v10);
          else
            return CDOTA_Bot::TimeSinceHitBySpecificHero(0, v10);
        }
        else
        {
          return 0.0;
        }
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "TimeSinceDamagedByHero");
    return 1.0;
  }
  return result;
}


// CDOTA_Bot_Script::WasRecentlyDamagedByTower  (line 1614, @0x0000000002832df0, libserver.so)  // inlines: DOTAGameRules, Get, GetBot, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, WasRecentlyHitByTower, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "WasRecentlyDamagedByTower", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_Script::WasRecentlyDamagedByTower(CDOTA_Bot_Script *const this, float a2, float fTime)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  uint32 m_Index; // eax
  unsigned int v7; // ebx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_Bot *m_pBot; // rax
  float v12; // xmm0_4

  LOBYTE(v4) = CDOTA_Bot_Script::IsMyScriptTeam(this);
  v5 = v4;
  if ( v4 == 0 )
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "WasRecentlyDamagedByTower");
    return v5;
  }
  m_Index = this->m_hBaseNPC.m_Index;
  v7 = 0;
  if ( m_Index + 2 <= 1 )
    return v7;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    return v7;
  v9 = &v8[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v9 == 0 )
    return v7;
  if ( m_Index != v9->m_EHandle.m_Index )
    return v7;
  if ( v9->m_pInstance == 0 )
    return v7;
  v7 = BYTE3(v9->m_pInstance[7]._vptr_IHandleEntity);
  if ( v7 == 0 )
    return v7;
  m_pBot = this->m_pBot;
  if ( m_pBot == 0 )
    return 0;
  v12 = 0.0;
  if ( g_pGameRules != 0 )
    v12 = *&g_pGameRules[18].m_szQuestName[20];
  LOBYTE(v7) = m_pBot->m_HitByTowerTime > (v12 - a2);
  return v7;
}


// CDOTA_Bot_Script::TimeSinceDamagedByTower  (line 1622, @0x0000000002832ef0, libserver.so)  // inlines: DOTAGameRules, Get, GetBot, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, TimeSinceHitByTower, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "TimeSinceDamagedByTower", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::TimeSinceDamagedByTower(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  float result; // xmm0_4
  CEntityIdentity *v5; // rdx
  CDOTA_Bot *m_pBot; // rax
  float v7; // xmm0_4

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v5 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
        if ( m_pBot != 0 )
        {
          v7 = 0.0;
          if ( g_pGameRules != 0 )
            v7 = *&g_pGameRules[18].m_szQuestName[20];
          return v7 - m_pBot->m_HitByTowerTime;
        }
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "TimeSinceDamagedByTower");
    return 1.0;
  }
  return result;
}


// CDOTA_Bot_Script::WasRecentlyDamagedByCreep  (line 1630, @0x0000000002832fe0, libserver.so)  // inlines: DOTAGameRules, Get, GetBot, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, WasRecentlyHitByCreep, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "WasRecentlyDamagedByCreep", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_Script::WasRecentlyDamagedByCreep(CDOTA_Bot_Script *const this, float a2, float fTime)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  uint32 m_Index; // eax
  unsigned int v7; // ebx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_Bot *m_pBot; // rax
  float v12; // xmm0_4

  LOBYTE(v4) = CDOTA_Bot_Script::IsMyScriptTeam(this);
  v5 = v4;
  if ( v4 == 0 )
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "WasRecentlyDamagedByCreep");
    return v5;
  }
  m_Index = this->m_hBaseNPC.m_Index;
  v7 = 0;
  if ( m_Index + 2 <= 1 )
    return v7;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    return v7;
  v9 = &v8[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v9 == 0 )
    return v7;
  if ( m_Index != v9->m_EHandle.m_Index )
    return v7;
  if ( v9->m_pInstance == 0 )
    return v7;
  v7 = BYTE3(v9->m_pInstance[7]._vptr_IHandleEntity);
  if ( v7 == 0 )
    return v7;
  m_pBot = this->m_pBot;
  if ( m_pBot == 0 )
    return 0;
  v12 = 0.0;
  if ( g_pGameRules != 0 )
    v12 = *&g_pGameRules[18].m_szQuestName[20];
  LOBYTE(v7) = m_pBot->m_HitByCreepTime > (v12 - a2);
  return v7;
}


// CDOTA_Bot_Script::TimeSinceDamagedByCreep  (line 1638, @0x00000000028330e0, libserver.so)  // inlines: DOTAGameRules, Get, GetBot, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, TimeSinceHitByCreep, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "TimeSinceDamagedByCreep", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::TimeSinceDamagedByCreep(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  float result; // xmm0_4
  CEntityIdentity *v5; // rdx
  CDOTA_Bot *m_pBot; // rax
  float v7; // xmm0_4

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v5 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
        if ( m_pBot != 0 )
        {
          v7 = 0.0;
          if ( g_pGameRules != 0 )
            v7 = *&g_pGameRules[18].m_szQuestName[20];
          return v7 - m_pBot->m_HitByCreepTime;
        }
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "TimeSinceDamagedByCreep");
    return 1.0;
  }
  return result;
}


// CDOTA_Bot_Script::DistanceFromFountain  (line 1648, @0x0000000002830960, libserver.so)  // inlines: FastSqrt, Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTAGamerules::GetFountain, CBaseEntity::GetAbsOrigin, DevWarning(char const*,...)
// strings: "DistanceFromFountain", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::DistanceFromFountain(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  CDOTA_BaseNPC *Fountain; // rax
  const Vector *AbsOrigin; // r12
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseEntity *v11; // rdi
  const Vector *v12; // rax
  int result; // eax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    Fountain = CDOTAGamerules::GetFountain(g_pGameRules, HIBYTE(m_pInstance[7].m_CScriptComponent));
    if ( Fountain != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(Fountain);
      v8 = this->m_hBaseNPC.m_Index;
      if ( v8 + 2 <= 1
        || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
        || (v10 = &v9[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
        || v8 != v10->m_EHandle.m_Index
        || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
        || !v11->m_bIsDOTANPC )
      {
        v11 = 0;
      }
      v12 = CBaseEntity::GetAbsOrigin(v11);
      result = fsqrt(
                 ((v12->x - AbsOrigin->x) * (v12->x - AbsOrigin->x))
               + ((v12->y - AbsOrigin->y) * (v12->y - AbsOrigin->y)))
             - 1150;
      if ( result < 0 )
        return 0;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "DistanceFromFountain");
    return -1;
  }
  return result;
}


// CDOTA_Bot_Script::DistanceFromSideShop  (line 1660, @0x0000000002829a50, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::IsInRangeOfShop, CDOTAGamerules::GetRangeToShop
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::DistanceFromSideShop(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  bool v6; // al
  int v7; // edx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rsi

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = CDOTA_BaseNPC::IsInRangeOfShop(m_pInstance, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0);
  v7 = 0;
  if ( !v6 )
  {
    v8 = this->m_hBaseNPC.m_Index;
    if ( v8 + 2 <= 1
      || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v10 = &v9[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || v8 != v10->m_EHandle.m_Index
      || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
      || !v11->m_bIsDOTANPC )
    {
      v11 = 0;
    }
    return CDOTAGamerules::GetRangeToShop(g_pGameRules, v11, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0);
  }
  return v7;
}


// CDOTA_Bot_Script::DistanceFromSecretShop  (line 1665, @0x0000000002829b60, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::IsInRangeOfShop, CDOTAGamerules::GetRangeToShop
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::DistanceFromSecretShop(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  bool v6; // al
  int v7; // edx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rsi

  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = CDOTA_BaseNPC::IsInRangeOfShop(m_pInstance, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0);
  v7 = 0;
  if ( !v6 )
  {
    v8 = this->m_hBaseNPC.m_Index;
    if ( v8 + 2 <= 1
      || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v10 = &v9[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || v8 != v10->m_EHandle.m_Index
      || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
      || !v11->m_bIsDOTANPC )
    {
      v11 = 0;
    }
    return CDOTAGamerules::GetRangeToShop(g_pGameRules, v11, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0);
  }
  return v7;
}


// CDOTA_Bot_Script::SetTarget  (line 1672, @0x00000000028566b0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetBaseNPC, GetBot, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Bot_Script::IsMyScriptBot, ToBotScript, DevWarning(char const*,...)
// strings: "SetTarget", "'%s' called on an entity that isn't itself!\n"
// globals: CEntityHandle::gm_pEntityList
// write access to const memory has been detected, the output may be wrong!
void __fastcall CDOTA_Bot_Script::SetTarget(CDOTA_Bot_Script *const this, HSCRIPT hTarget)
{
  CDOTA_Bot_Script *v4; // rax
  uint32 v5; // ecx
  uint32 m_Index; // edx
  unsigned __int16 v7; // di
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx

  if ( !CDOTA_Bot_Script::IsMyScriptBot(this) )
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "SetTarget");
    return;
  }
  v4 = ToBotScript(hTarget, 0);
  v5 = -1;
  m_Index = v4->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1
    && (v7 = v4->m_hBaseNPC.m_Index, (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F]) != 0)
    && (v9 = &v8[v7 & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (m_pInstance = v9->m_pInstance) != 0
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pEntity = m_pInstance->m_pEntity) != 0 )
  {
    v15 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v5 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    v10 = this->m_hBaseNPC.m_Index;
    if ( v10 + 2 <= 1 )
      goto LABEL_10;
  }
  else
  {
    v10 = this->m_hBaseNPC.m_Index;
    if ( v10 + 2 <= 1 )
    {
LABEL_10:
      LODWORD(stru_10.m_pEntityIdChunks[21]) = v5;
      return;
    }
  }
  v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
  if ( v11 == 0 )
    goto LABEL_10;
  v12 = &v11[this->m_hBaseNPC.m_Index & 0x1FF];
  if ( v12 == 0
    || v10 != v12->m_EHandle.m_Index
    || v12->m_pInstance == 0
    || BYTE3(v12->m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    goto LABEL_10;
  }
  this->m_pBot->m_hTarget.m_Index = v5;
}


// CDOTA_Bot_Script::GetTarget  (line 1681, @0x000000000282c290, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::GetScriptHandle
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_Bot_Script::GetTarget(CDOTA_Bot_Script *const this)
{
  CDOTA_Bot *m_pBot; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  uint32 v5; // edx
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CEntityInstance *m_pInstance; // rax

  m_pBot = 0;
  m_Index = this->m_hBaseNPC.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v4 != 0
        && m_Index == v4->m_EHandle.m_Index
        && v4->m_pInstance != 0
        && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
      }
    }
  }
  v5 = m_pBot->m_hTarget.m_Index;
  if ( v5 + 2 > 1
    && (v6 = m_pBot->m_hTarget.m_Index, (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) != 0)
    && (v8 = &v7[v6 & 0x1FF]) != 0
    && v5 == v8->m_EHandle.m_Index
    && (m_pInstance = v8->m_pInstance) != 0
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot_Script::SetNextItemPurchaseValue  (line 1693, @0x0000000002827710, libserver.so)
void __fastcall CDOTA_Bot_Script::SetNextItemPurchaseValue(CDOTA_Bot_Script *const this, int nGold)
{
  this->m_nNextItemPurchaseValue = nGold;
}


// CDOTA_Bot_Script::GetNextItemPurchaseValue  (line 1698, @0x0000000002827720, libserver.so)
int __fastcall CDOTA_Bot_Script::GetNextItemPurchaseValue(CDOTA_Bot_Script *const this)
{
  return this->m_nNextItemPurchaseValue;
}


// CDOTA_Bot_Script::GetAssignedLane  (line 1706, @0x000000000282f040, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, DevWarning(char const*,...), CDOTA_Bot::GetAssignedLane
// strings: "GetAssignedLane", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetAssignedLane(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // rdi

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && v4->m_pInstance != 0
      && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pBot = this->m_pBot) != 0 )
    {
      return CDOTA_Bot::GetAssignedLane(m_pBot);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetAssignedLane");
    return 0;
  }
}


// CDOTA_Bot_Script::GetOffensivePower  (line 1716, @0x000000000282f100, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::IsMyScriptTeam, CDOTA_Bot::GetOffensivePower, DevWarning(char const*,...)
// strings: "GetOffensivePower", "'%s' called on an entity that is not a teammate!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetOffensivePower(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && v4->m_pInstance != 0
      && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      return CDOTA_Bot::GetOffensivePower(this->m_pBot);
    }
    else
    {
      return CDOTA_Bot::GetOffensivePower(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetOffensivePower");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetRawOffensivePower  (line 1723, @0x000000000282f2d0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot::GetRawOffensivePower, DevWarning(char const*,...)
// strings: "GetRawOffensivePower", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetRawOffensivePower(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v4->m_EHandle.m_Index
      && v4->m_pInstance != 0
      && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      return CDOTA_Bot::GetRawOffensivePower(this->m_pBot);
    }
    else
    {
      return CDOTA_Bot::GetRawOffensivePower(0);
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetRawOffensivePower");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetEstimatedDamageToTarget  (line 1732, @0x0000000002856860, libserver.so)  // inlines: Get, GetBaseNPC, GetBot, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot_Script::CanBeSeen, ToBotScript, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_Script::IsMyScriptTeam, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_BaseNPC::GetSecondsPerAttack, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType, DevWarning(char const*,...)
// strings: "GetEstimatedDamageToTarget", "'%s' called on an entity that cannot be seen!\n"
__int64 __fastcall CDOTA_Bot_Script::GetEstimatedDamageToTarget(
        CDOTA_Bot_Script *const this,
        bool bCurrentlyAvailable,
        HSCRIPT hTarget,
        float fDuration,
        int nDamageTypes)
{
  CDOTA_Bot_Script *v8; // rax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CEntityInstance *v11; // rax
  CDOTA_Bot_Script *v12; // rax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // r14
  bool v15; // r13
  CEntityInstance *v16; // rax
  CDOTA_Bot *m_pBot; // rdi
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdi
  int AverageTrueAttackDamage; // eax
  float v23; // xmm2_4
  float ArmorReductionForDamageType; // xmm0_4
  float v25; // xmm1_4
  float nDamageTypesb; // [rsp+8h] [rbp-38h]
  float fAttacksa; // [rsp+Ch] [rbp-34h]

  if ( !CDOTA_Bot_Script::CanBeSeen(this) )
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetEstimatedDamageToTarget");
    return 0xFFFFFFFFLL;
  }
  v8 = ToBotScript(hTarget, 0);
  v9 = CEntityHandle::operator CEntityInstance *(&v8->m_hBaseNPC);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
  if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
  {
    v19 = 0;
    goto LABEL_18;
  }
  if ( this->m_pBot == 0 )
  {
    v19 = v11;
LABEL_18:
    fAttacksa = fDuration / CDOTA_BaseNPC::GetSecondsPerAttack(v19);
    v20 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
    if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
      v21 = v20;
    else
      v21 = 0;
    AverageTrueAttackDamage = CDOTA_BaseNPC::GetAverageTrueAttackDamage(v21, v10);
    v23 = AverageTrueAttackDamage;
    if ( v10 != 0 )
    {
      nDamageTypesb = AverageTrueAttackDamage;
      ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v10, 1);
      v23 = nDamageTypesb;
      v25 = 1.0 - ArmorReductionForDamageType;
    }
    else
    {
      v25 = 1.0;
    }
    return (((v25 * v23) * fAttacksa) + 0.0);
  }
  v12 = ToBotScript(hTarget, 0);
  v13 = CEntityHandle::operator CEntityInstance *(&v12->m_hBaseNPC);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  v15 = 0;
  if ( CDOTA_Bot_Script::IsMyScriptTeam(this) )
    v15 = bCurrentlyAvailable;
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    m_pBot = this->m_pBot;
  else
    m_pBot = 0;
  return CDOTA_Bot::GetEstimatedDamageToTarget(m_pBot, v15, v14, fDuration, nDamageTypes);
}


// CDOTA_Bot_Script::GetStunDuration  (line 1755, @0x00000000028320f0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_Bot_Script::IsMyScriptTeam, CDOTA_Bot::GetStunDuration
// strings: "GetStunDuration", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetStunDuration(CDOTA_Bot_Script *const this, bool bCurrentlyAvailable)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  float result; // xmm0_4
  CEntityIdentity *v7; // rdx
  bool IsMyScriptTeam; // al
  bool v9; // si
  bool v10; // zf
  uint32 v11; // eax
  CDOTA_Bot *m_pBot; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v7 = &v5[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v7 != 0
        && m_Index == v7->m_EHandle.m_Index
        && v7->m_pInstance != 0
        && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0
        && this->m_pBot != 0 )
      {
        IsMyScriptTeam = CDOTA_Bot_Script::IsMyScriptTeam(this);
        v9 = 0;
        v10 = !IsMyScriptTeam;
        v11 = this->m_hBaseNPC.m_Index;
        if ( !v10 )
          v9 = bCurrentlyAvailable;
        m_pBot = 0;
        if ( v11 + 2 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            m_pBot = 0;
            v14 = &v13[this->m_hBaseNPC.m_Index & 0x1FF];
            if ( v14 != 0
              && v11 == v14->m_EHandle.m_Index
              && v14->m_pInstance != 0
              && BYTE3(v14->m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              m_pBot = this->m_pBot;
            }
          }
          else
          {
            m_pBot = 0;
          }
        }
        return CDOTA_Bot::GetStunDuration(m_pBot, v9);
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetStunDuration");
    return -1.0;
  }
  return result;
}


// CDOTA_Bot_Script::GetSlowDuration  (line 1763, @0x0000000002832240, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_Bot_Script::IsMyScriptTeam, CDOTA_Bot::GetSlowDuration
// strings: "GetSlowDuration", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetSlowDuration(CDOTA_Bot_Script *const this, bool bCurrentlyAvailable)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  float result; // xmm0_4
  CEntityIdentity *v7; // rdx
  bool IsMyScriptTeam; // al
  bool v9; // si
  bool v10; // zf
  uint32 v11; // eax
  CDOTA_Bot *m_pBot; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0 )
    {
      result = -1.0;
      v7 = &v5[this->m_hBaseNPC.m_Index & 0x1FF];
      if ( v7 != 0
        && m_Index == v7->m_EHandle.m_Index
        && v7->m_pInstance != 0
        && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0
        && this->m_pBot != 0 )
      {
        IsMyScriptTeam = CDOTA_Bot_Script::IsMyScriptTeam(this);
        v9 = 0;
        v10 = !IsMyScriptTeam;
        v11 = this->m_hBaseNPC.m_Index;
        if ( !v10 )
          v9 = bCurrentlyAvailable;
        m_pBot = 0;
        if ( v11 + 2 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            m_pBot = 0;
            v14 = &v13[this->m_hBaseNPC.m_Index & 0x1FF];
            if ( v14 != 0
              && v11 == v14->m_EHandle.m_Index
              && v14->m_pInstance != 0
              && BYTE3(v14->m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              m_pBot = this->m_pBot;
            }
          }
          else
          {
            m_pBot = 0;
          }
        }
        return CDOTA_Bot::GetSlowDuration(m_pBot, v9);
      }
    }
    else
    {
      return -1.0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetSlowDuration");
    return -1.0;
  }
  return result;
}


// CDOTA_Bot_Script::HasBlink  (line 1771, @0x0000000002832390, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_Bot_Script::IsMyScriptTeam, CDOTA_Bot::HasBlink
// strings: "HasBlink", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::HasBlink(CDOTA_Bot_Script *const this, bool bCurrentlyAvailable)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  bool IsMyScriptTeam; // al
  bool v9; // si
  bool v10; // zf
  uint32 v11; // eax
  CDOTA_Bot *m_pBot; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v6 = &v5[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v6->m_EHandle.m_Index
      && v6->m_pInstance != 0
      && BYTE3(v6->m_pInstance[7]._vptr_IHandleEntity) != 0
      && this->m_pBot != 0 )
    {
      IsMyScriptTeam = CDOTA_Bot_Script::IsMyScriptTeam(this);
      v9 = 0;
      v10 = !IsMyScriptTeam;
      v11 = this->m_hBaseNPC.m_Index;
      if ( !v10 )
        v9 = bCurrentlyAvailable;
      m_pBot = 0;
      if ( v11 + 2 > 1 )
      {
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          m_pBot = 0;
          v14 = &v13[this->m_hBaseNPC.m_Index & 0x1FF];
          if ( v14 != 0
            && v11 == v14->m_EHandle.m_Index
            && v14->m_pInstance != 0
            && BYTE3(v14->m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            m_pBot = this->m_pBot;
          }
        }
        else
        {
          m_pBot = 0;
        }
      }
      return CDOTA_Bot::HasBlink(m_pBot, v9);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "HasBlink");
    return 0;
  }
}


// CDOTA_Bot_Script::HasMinistunOnAttack  (line 1779, @0x000000000282f390, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_Bot::HasMinistunOnAttack
// strings: "HasMinistunOnAttack", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::HasMinistunOnAttack(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    return m_Index + 2 > 1
        && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v4->m_EHandle.m_Index
        && v4->m_pInstance != 0
        && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pBot = this->m_pBot) != 0
        && CDOTA_Bot::HasMinistunOnAttack(m_pBot);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "HasMinistunOnAttack");
    return 0;
  }
}


// CDOTA_Bot_Script::HasSilence  (line 1787, @0x00000000028324d0, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_Bot_Script::IsMyScriptTeam, CDOTA_Bot::HasSilence
// strings: "HasSilence", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::HasSilence(CDOTA_Bot_Script *const this, bool bCurrentlyAvailable)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  bool IsMyScriptTeam; // al
  bool v9; // si
  bool v10; // zf
  uint32 v11; // eax
  CDOTA_Bot *m_pBot; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v6 = &v5[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v6->m_EHandle.m_Index
      && v6->m_pInstance != 0
      && BYTE3(v6->m_pInstance[7]._vptr_IHandleEntity) != 0
      && this->m_pBot != 0 )
    {
      IsMyScriptTeam = CDOTA_Bot_Script::IsMyScriptTeam(this);
      v9 = 0;
      v10 = !IsMyScriptTeam;
      v11 = this->m_hBaseNPC.m_Index;
      if ( !v10 )
        v9 = bCurrentlyAvailable;
      m_pBot = 0;
      if ( v11 + 2 > 1 )
      {
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          m_pBot = 0;
          v14 = &v13[this->m_hBaseNPC.m_Index & 0x1FF];
          if ( v14 != 0
            && v11 == v14->m_EHandle.m_Index
            && v14->m_pInstance != 0
            && BYTE3(v14->m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            m_pBot = this->m_pBot;
          }
        }
        else
        {
          m_pBot = 0;
        }
      }
      return CDOTA_Bot::HasSilence(m_pBot, v9);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "HasSilence");
    return 0;
  }
}


// CDOTA_Bot_Script::HasInvisibility  (line 1795, @0x0000000002832610, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_Bot_Script::IsMyScriptTeam, CDOTA_Bot::HasInvisibility
// strings: "HasInvisibility", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::HasInvisibility(CDOTA_Bot_Script *const this, bool bCurrentlyAvailable)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  bool IsMyScriptTeam; // al
  bool v9; // si
  bool v10; // zf
  uint32 v11; // eax
  CDOTA_Bot *m_pBot; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
      && (v6 = &v5[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
      && m_Index == v6->m_EHandle.m_Index
      && v6->m_pInstance != 0
      && BYTE3(v6->m_pInstance[7]._vptr_IHandleEntity) != 0
      && this->m_pBot != 0 )
    {
      IsMyScriptTeam = CDOTA_Bot_Script::IsMyScriptTeam(this);
      v9 = 0;
      v10 = !IsMyScriptTeam;
      v11 = this->m_hBaseNPC.m_Index;
      if ( !v10 )
        v9 = bCurrentlyAvailable;
      m_pBot = 0;
      if ( v11 + 2 > 1 )
      {
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          m_pBot = 0;
          v14 = &v13[this->m_hBaseNPC.m_Index & 0x1FF];
          if ( v14 != 0
            && v11 == v14->m_EHandle.m_Index
            && v14->m_pInstance != 0
            && BYTE3(v14->m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            m_pBot = this->m_pBot;
          }
        }
        else
        {
          m_pBot = 0;
        }
      }
      return CDOTA_Bot::HasInvisibility(m_pBot, v9);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "HasInvisibility");
    return 0;
  }
}


// CDOTA_Bot_Script::UsingItemBreaksInvisibility  (line 1803, @0x000000000282f450, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, DevWarning(char const*,...), CDOTA_Bot::UsingItemBreaksInvisibility
// strings: "UsingItemBreaksInvisibility", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Script::UsingItemBreaksInvisibility(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    return m_Index + 2 > 1
        && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) != 0
        && (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) != 0
        && m_Index == v4->m_EHandle.m_Index
        && v4->m_pInstance != 0
        && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pBot = this->m_pBot) != 0
        && CDOTA_Bot::UsingItemBreaksInvisibility(m_pBot);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "UsingItemBreaksInvisibility");
    return 0;
  }
}


// CDOTA_Bot_Script::GetNearbyHeroes  (line 1813, @0x0000000002843d00, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, TakeOwnership, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetBot, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyHeroes, DOTACommander, CDOTA_Commander::GetActiveScriptVM, CDOTA_Bot_Script::GetScriptHandle, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit (14 total)
// strings: "GetNearbyHeroes", "'%s' called on an entity that cannot be seen!\n"
// globals: `guard variable for'CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities, CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities, CEntityHandle::gm_pEntityList, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Bot_Script::GetNearbyHeroes(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Bot_Script *const this,
        int nRadius,
        bool bEnemies,
        int eBotMode)
{
  CDOTA_Bot *Bot; // rax
  CDOTA_Commander *v9; // rax
  IScriptVM *ActiveScriptVM; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  unsigned int v12; // r13d
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // r12
  __int64 v16; // rax
  CDOTA_Commander *v17; // rax
  IScriptVM *v18; // r14
  void (__fastcall *v19)(IScriptVM *, _QWORD, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r15
  HSCRIPT ScriptHandle; // rax
  CHandle<CBaseEntity> *__for_end; // [rsp+28h] [rbp-68h]
  EHANDLE hEntity; // [rsp+30h] [rbp-60h]
  ScriptVariant_t varTable; // [rsp+40h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v27[4]; // [rsp+50h] [rbp-40h] BYREF

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    if ( CDOTA_Bot_Script::GetBot(this) != 0 )
    {
      if ( `guard variable for'CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities) != 0 )
      {
        CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities.m_Size = 0;
        CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities.m_Memory.m_pMemory = 0;
        CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities.m_Memory.m_nAllocationCount = 0;
        CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities.m_Memory.m_nGrowSize = 0;
        __cxa_guard_release(&`guard variable for'CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities);
        __cxa_atexit(
          CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
          &CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities,
          &_dso_handle);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities);
      Bot = CDOTA_Bot_Script::GetBot(this);
      CDOTA_Bot::GetNearbyHeroes(
        Bot,
        (2 - !bEnemies),
        &CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities,
        nRadius);
      varTable.m_type = 0;
      varTable.m_flags = 0;
      varTable.m_uint64 = 0;
      v9 = DOTACommander();
      ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v9);
      (*(*ActiveScriptVM + 360LL))(ActiveScriptVM);
      m_pMemory = CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities.m_Memory.m_pMemory;
      __for_end = &CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities.m_Memory.m_pMemory[CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities.m_Size];
      if ( CDOTA_Bot_Script::GetNearbyHeroes(int,bool,int)::vecEntities.m_Memory.m_pMemory != __for_end )
      {
        v12 = 0;
        do
        {
          while ( 1 )
          {
            hEntity.m_Index = m_pMemory->m_Index;
            if ( m_pMemory->m_Index + 2 > 1 )
            {
              v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEntity.m_Index) >> 9) & 0x3F];
              if ( v13 != 0 )
              {
                v14 = &v13[hEntity.m_Index & 0x1FF];
                if ( v14 != 0 && m_pMemory->m_Index == v14->m_EHandle.m_Index )
                {
                  m_pInstance = v14->m_pInstance;
                  if ( v14->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  {
                    if ( eBotMode == 0 )
                      break;
                    v16 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
                    if ( v16 != 0 && (*(**(v16 + 34056) + 16LL))(*(v16 + 34056)) == eBotMode )
                      break;
                  }
                }
              }
            }
            if ( __for_end == ++m_pMemory )
              goto LABEL_17;
          }
          v17 = DOTACommander();
          v18 = CDOTA_Commander::GetActiveScriptVM(v17);
          v19 = *(*v18 + 248LL);
          ScriptHandle = CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
          v27[0].m_type = 31;
          v27[0].m_flags = 0;
          v27[0].m_uint64 = ScriptHandle;
          v19(v18, 0, v12, v27);
          ++m_pMemory;
          ++v12;
          CVariantBase<CVariantDefaultAllocator>::Free(v27);
        }
        while ( __for_end != m_pMemory );
      }
LABEL_17:
      a1->m_type = 0;
      a1->m_flags = 0;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, a1);
      CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
    }
    else
    {
      a1->m_type = 0;
      a1->m_flags = 0;
      a1->m_uint64 = 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetNearbyHeroes");
    a1->m_type = 0;
    a1->m_flags = 0;
    a1->m_uint64 = 0;
  }
  return a1;
}


// CDOTA_Bot_Script::GetNearbyCreeps  (line 1850, @0x0000000002844070, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, TakeOwnership, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetBot, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyCreeps, DOTACommander, CDOTA_Commander::GetActiveScriptVM, CDOTA_Bot_Script::GetScriptHandle, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit (14 total)
// strings: "GetNearbyCreeps", "'%s' called on an entity that cannot be seen!\n"
// globals: `guard variable for'CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities, CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities, CEntityHandle::gm_pEntityList, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Bot_Script::GetNearbyCreeps(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Bot_Script *const this,
        int nRadius,
        bool bEnemies)
{
  CDOTA_Bot *Bot; // rax
  CDOTA_Commander *v8; // rax
  IScriptVM *ActiveScriptVM; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  unsigned int v11; // r12d
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_Commander *v15; // rax
  IScriptVM *v16; // r13
  void (__fastcall *v17)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r15
  HSCRIPT ScriptHandle; // rax
  uint64 m_uint64; // [rsp+20h] [rbp-70h]
  CHandle<CBaseEntity> *__for_end; // [rsp+28h] [rbp-68h]
  EHANDLE hEntity; // [rsp+30h] [rbp-60h]
  ScriptVariant_t varTable; // [rsp+40h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v25[4]; // [rsp+50h] [rbp-40h] BYREF

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    if ( CDOTA_Bot_Script::GetBot(this) != 0 )
    {
      if ( `guard variable for'CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities) != 0 )
      {
        CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities.m_Size = 0;
        CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities.m_Memory.m_pMemory = 0;
        CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities.m_Memory.m_nAllocationCount = 0;
        CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities.m_Memory.m_nGrowSize = 0;
        __cxa_guard_release(&`guard variable for'CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities);
        __cxa_atexit(
          CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
          &CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities,
          &_dso_handle);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities);
      Bot = CDOTA_Bot_Script::GetBot(this);
      CDOTA_Bot::GetNearbyCreeps(
        Bot,
        (2 - !bEnemies),
        &CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities,
        nRadius);
      varTable.m_type = 0;
      varTable.m_flags = 0;
      varTable.m_uint64 = 0;
      v8 = DOTACommander();
      ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v8);
      (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, &varTable);
      m_pMemory = CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities.m_Memory.m_pMemory;
      m_uint64 = varTable.m_uint64;
      __for_end = &CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities.m_Memory.m_pMemory[CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities.m_Size];
      if ( CDOTA_Bot_Script::GetNearbyCreeps(int,bool)::vecEntities.m_Memory.m_pMemory != __for_end )
      {
        v11 = 0;
        do
        {
          while ( 1 )
          {
            hEntity.m_Index = m_pMemory->m_Index;
            if ( m_pMemory->m_Index + 2 > 1 )
            {
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEntity.m_Index) >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[hEntity.m_Index & 0x1FF];
                if ( v13 != 0 && m_pMemory->m_Index == v13->m_EHandle.m_Index )
                {
                  m_pInstance = v13->m_pInstance;
                  if ( v13->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                    break;
                }
              }
            }
            if ( __for_end == ++m_pMemory )
              goto LABEL_14;
          }
          v15 = DOTACommander();
          v16 = CDOTA_Commander::GetActiveScriptVM(v15);
          v17 = *(*v16 + 248LL);
          ScriptHandle = CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
          v25[0].m_type = 31;
          v25[0].m_flags = 0;
          v25[0].m_uint64 = ScriptHandle;
          v17(v16, m_uint64, v11, v25);
          ++m_pMemory;
          ++v11;
          CVariantBase<CVariantDefaultAllocator>::Free(v25);
        }
        while ( __for_end != m_pMemory );
      }
LABEL_14:
      if ( varTable.m_type == 31 )
        varTable.m_type = 36;
      a1->m_type = 0;
      a1->m_flags = 0;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, a1);
      CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
    }
    else
    {
      a1->m_type = 0;
      a1->m_flags = 0;
      a1->m_uint64 = 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetNearbyCreeps");
    a1->m_type = 0;
    a1->m_flags = 0;
    a1->m_uint64 = 0;
  }
  return a1;
}


// CDOTA_Bot_Script::GetNearbyTowers  (line 1881, @0x00000000028443a0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, TakeOwnership, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetBot, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyTowers, DOTACommander, CDOTA_Commander::GetActiveScriptVM, CDOTA_Bot_Script::GetScriptHandle, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit (14 total)
// strings: "GetNearbyTowers", "'%s' called on an entity that cannot be seen!\n"
// globals: `guard variable for'CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities, CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities, CEntityHandle::gm_pEntityList, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Bot_Script::GetNearbyTowers(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Bot_Script *const this,
        int nRadius,
        bool bEnemies)
{
  CDOTA_Bot *Bot; // rax
  CDOTA_Commander *v8; // rax
  IScriptVM *ActiveScriptVM; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  unsigned int v11; // r12d
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_Commander *v15; // rax
  IScriptVM *v16; // r13
  void (__fastcall *v17)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r15
  HSCRIPT ScriptHandle; // rax
  uint64 m_uint64; // [rsp+20h] [rbp-70h]
  CHandle<CBaseEntity> *__for_end; // [rsp+28h] [rbp-68h]
  EHANDLE hEntity; // [rsp+30h] [rbp-60h]
  ScriptVariant_t varTable; // [rsp+40h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v25[4]; // [rsp+50h] [rbp-40h] BYREF

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    if ( CDOTA_Bot_Script::GetBot(this) != 0 )
    {
      if ( `guard variable for'CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities) != 0 )
      {
        CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities.m_Size = 0;
        CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities.m_Memory.m_pMemory = 0;
        CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities.m_Memory.m_nAllocationCount = 0;
        CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities.m_Memory.m_nGrowSize = 0;
        __cxa_guard_release(&`guard variable for'CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities);
        __cxa_atexit(
          CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
          &CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities,
          &_dso_handle);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities);
      Bot = CDOTA_Bot_Script::GetBot(this);
      CDOTA_Bot::GetNearbyTowers(
        Bot,
        (2 - !bEnemies),
        &CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities,
        nRadius);
      varTable.m_type = 0;
      varTable.m_flags = 0;
      varTable.m_uint64 = 0;
      v8 = DOTACommander();
      ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v8);
      (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, &varTable);
      m_pMemory = CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities.m_Memory.m_pMemory;
      m_uint64 = varTable.m_uint64;
      __for_end = &CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities.m_Memory.m_pMemory[CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities.m_Size];
      if ( CDOTA_Bot_Script::GetNearbyTowers(int,bool)::vecEntities.m_Memory.m_pMemory != __for_end )
      {
        v11 = 0;
        do
        {
          while ( 1 )
          {
            hEntity.m_Index = m_pMemory->m_Index;
            if ( m_pMemory->m_Index + 2 > 1 )
            {
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEntity.m_Index) >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[hEntity.m_Index & 0x1FF];
                if ( v13 != 0 && m_pMemory->m_Index == v13->m_EHandle.m_Index )
                {
                  m_pInstance = v13->m_pInstance;
                  if ( v13->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                    break;
                }
              }
            }
            if ( __for_end == ++m_pMemory )
              goto LABEL_14;
          }
          v15 = DOTACommander();
          v16 = CDOTA_Commander::GetActiveScriptVM(v15);
          v17 = *(*v16 + 248LL);
          ScriptHandle = CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
          v25[0].m_type = 31;
          v25[0].m_flags = 0;
          v25[0].m_uint64 = ScriptHandle;
          v17(v16, m_uint64, v11, v25);
          ++m_pMemory;
          ++v11;
          CVariantBase<CVariantDefaultAllocator>::Free(v25);
        }
        while ( __for_end != m_pMemory );
      }
LABEL_14:
      if ( varTable.m_type == 31 )
        varTable.m_type = 36;
      a1->m_type = 0;
      a1->m_flags = 0;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, a1);
      CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
    }
    else
    {
      a1->m_type = 0;
      a1->m_flags = 0;
      a1->m_uint64 = 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetNearbyTowers");
    a1->m_type = 0;
    a1->m_flags = 0;
    a1->m_uint64 = 0;
  }
  return a1;
}


// CDOTA_Bot_Script::GetNearbyBarracks  (line 1913, @0x00000000028446d0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, TakeOwnership, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetBot, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyBarracks, DOTACommander, CDOTA_Commander::GetActiveScriptVM, CDOTA_Bot_Script::GetScriptHandle, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit (14 total)
// strings: "GetNearbyBarracks", "'%s' called on an entity that cannot be seen!\n"
// globals: `guard variable for'CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities, CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities, CEntityHandle::gm_pEntityList, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Bot_Script::GetNearbyBarracks(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Bot_Script *const this,
        int nRadius,
        bool bEnemies)
{
  CDOTA_Bot *Bot; // rax
  CDOTA_Commander *v8; // rax
  IScriptVM *ActiveScriptVM; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  unsigned int v11; // r12d
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_Commander *v15; // rax
  IScriptVM *v16; // r13
  void (__fastcall *v17)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r15
  HSCRIPT ScriptHandle; // rax
  uint64 m_uint64; // [rsp+20h] [rbp-70h]
  CHandle<CBaseEntity> *__for_end; // [rsp+28h] [rbp-68h]
  EHANDLE hEntity; // [rsp+30h] [rbp-60h]
  ScriptVariant_t varTable; // [rsp+40h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v25[4]; // [rsp+50h] [rbp-40h] BYREF

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    if ( CDOTA_Bot_Script::GetBot(this) != 0 )
    {
      if ( `guard variable for'CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities) != 0 )
      {
        CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities.m_Size = 0;
        CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities.m_Memory.m_pMemory = 0;
        CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities.m_Memory.m_nAllocationCount = 0;
        CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities.m_Memory.m_nGrowSize = 0;
        __cxa_guard_release(&`guard variable for'CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities);
        __cxa_atexit(
          CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
          &CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities,
          &_dso_handle);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities);
      Bot = CDOTA_Bot_Script::GetBot(this);
      CDOTA_Bot::GetNearbyBarracks(
        Bot,
        (2 - !bEnemies),
        &CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities,
        nRadius);
      varTable.m_type = 0;
      varTable.m_flags = 0;
      varTable.m_uint64 = 0;
      v8 = DOTACommander();
      ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v8);
      (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, &varTable);
      m_pMemory = CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities.m_Memory.m_pMemory;
      m_uint64 = varTable.m_uint64;
      __for_end = &CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities.m_Memory.m_pMemory[CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities.m_Size];
      if ( CDOTA_Bot_Script::GetNearbyBarracks(int,bool)::vecEntities.m_Memory.m_pMemory != __for_end )
      {
        v11 = 0;
        do
        {
          while ( 1 )
          {
            hEntity.m_Index = m_pMemory->m_Index;
            if ( m_pMemory->m_Index + 2 > 1 )
            {
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEntity.m_Index) >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[hEntity.m_Index & 0x1FF];
                if ( v13 != 0 && m_pMemory->m_Index == v13->m_EHandle.m_Index )
                {
                  m_pInstance = v13->m_pInstance;
                  if ( v13->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                    break;
                }
              }
            }
            if ( __for_end == ++m_pMemory )
              goto LABEL_14;
          }
          v15 = DOTACommander();
          v16 = CDOTA_Commander::GetActiveScriptVM(v15);
          v17 = *(*v16 + 248LL);
          ScriptHandle = CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
          v25[0].m_type = 31;
          v25[0].m_flags = 0;
          v25[0].m_uint64 = ScriptHandle;
          v17(v16, m_uint64, v11, v25);
          ++m_pMemory;
          ++v11;
          CVariantBase<CVariantDefaultAllocator>::Free(v25);
        }
        while ( __for_end != m_pMemory );
      }
LABEL_14:
      if ( varTable.m_type == 31 )
        varTable.m_type = 36;
      a1->m_flags = 0;
      a1->m_type = 0;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, a1);
      CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
    }
    else
    {
      a1->m_type = 0;
      a1->m_flags = 0;
      a1->m_uint64 = 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetNearbyBarracks");
    a1->m_type = 0;
    a1->m_flags = 0;
    a1->m_uint64 = 0;
  }
  return a1;
}


// CDOTA_Bot_Script::GetNearbyShrines  (line 1944, @0x0000000002844a00, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, TakeOwnership, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetBot, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyShrines, DOTACommander, CDOTA_Commander::GetActiveScriptVM, CDOTA_Bot_Script::GetScriptHandle, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit (14 total)
// strings: "GetNearbyShrines", "'%s' called on an entity that cannot be seen!\n"
// globals: `guard variable for'CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities, CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities, CEntityHandle::gm_pEntityList, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Bot_Script::GetNearbyShrines(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Bot_Script *const this,
        int nRadius,
        bool bEnemies)
{
  CDOTA_Bot *Bot; // rax
  CDOTA_Commander *v8; // rax
  IScriptVM *ActiveScriptVM; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  unsigned int v11; // r12d
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_Commander *v15; // rax
  IScriptVM *v16; // r13
  void (__fastcall *v17)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r15
  HSCRIPT ScriptHandle; // rax
  uint64 m_uint64; // [rsp+20h] [rbp-70h]
  CHandle<CBaseEntity> *__for_end; // [rsp+28h] [rbp-68h]
  EHANDLE hEntity; // [rsp+30h] [rbp-60h]
  ScriptVariant_t varTable; // [rsp+40h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v25[4]; // [rsp+50h] [rbp-40h] BYREF

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    if ( CDOTA_Bot_Script::GetBot(this) != 0 )
    {
      if ( `guard variable for'CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities) != 0 )
      {
        CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities.m_Size = 0;
        CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities.m_Memory.m_pMemory = 0;
        CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities.m_Memory.m_nAllocationCount = 0;
        CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities.m_Memory.m_nGrowSize = 0;
        __cxa_guard_release(&`guard variable for'CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities);
        __cxa_atexit(
          CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
          &CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities,
          &_dso_handle);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities);
      Bot = CDOTA_Bot_Script::GetBot(this);
      CDOTA_Bot::GetNearbyShrines(
        Bot,
        (2 - !bEnemies),
        &CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities,
        nRadius);
      varTable.m_type = 0;
      varTable.m_flags = 0;
      varTable.m_uint64 = 0;
      v8 = DOTACommander();
      ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v8);
      (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, &varTable);
      m_pMemory = CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities.m_Memory.m_pMemory;
      m_uint64 = varTable.m_uint64;
      __for_end = &CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities.m_Memory.m_pMemory[CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities.m_Size];
      if ( CDOTA_Bot_Script::GetNearbyShrines(int,bool)::vecEntities.m_Memory.m_pMemory != __for_end )
      {
        v11 = 0;
        do
        {
          while ( 1 )
          {
            hEntity.m_Index = m_pMemory->m_Index;
            if ( m_pMemory->m_Index + 2 > 1 )
            {
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEntity.m_Index) >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[hEntity.m_Index & 0x1FF];
                if ( v13 != 0 && m_pMemory->m_Index == v13->m_EHandle.m_Index )
                {
                  m_pInstance = v13->m_pInstance;
                  if ( v13->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                    break;
                }
              }
            }
            if ( __for_end == ++m_pMemory )
              goto LABEL_14;
          }
          v15 = DOTACommander();
          v16 = CDOTA_Commander::GetActiveScriptVM(v15);
          v17 = *(*v16 + 248LL);
          ScriptHandle = CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
          v25[0].m_type = 31;
          v25[0].m_flags = 0;
          v25[0].m_uint64 = ScriptHandle;
          v17(v16, m_uint64, v11, v25);
          ++m_pMemory;
          ++v11;
          CVariantBase<CVariantDefaultAllocator>::Free(v25);
        }
        while ( __for_end != m_pMemory );
      }
LABEL_14:
      if ( varTable.m_type == 31 )
        varTable.m_type = 36;
      a1->m_flags = 0;
      a1->m_type = 0;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, a1);
      CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
    }
    else
    {
      a1->m_type = 0;
      a1->m_flags = 0;
      a1->m_uint64 = 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetNearbyShrines");
    a1->m_type = 0;
    a1->m_flags = 0;
    a1->m_uint64 = 0;
  }
  return a1;
}


// CDOTA_Bot_Script::GetNearbyTrees  (line 1975, @0x0000000002843320, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Free, RemoveAll, TakeOwnership, ~CVariantBase
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetBot, CDOTA_Bot::GetNearbyTrees, DOTACommander, CDOTA_Commander::GetActiveScriptVM, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, DevWarning(char const*,...), _Unwind_Resume
// strings: "GetNearbyTrees", "'%s' called on an entity that cannot be seen!\n"
// globals: `guard variable for'CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees, CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees, __dso_handle, CUtlVector<int,CUtlMemory<int,int>>::~CUtlVector()
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Bot_Script::GetNearbyTrees(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Bot_Script *const this,
        int nRadius)
{
  CDOTA_Bot *Bot; // rax
  float v7; // xmm1_4
  CDOTA_Commander *v8; // rax
  IScriptVM *ActiveScriptVM; // rax
  __int64 v10; // r12
  int v11; // ebx
  uint64 i; // r14
  CDOTA_Commander *v13; // rax
  IScriptVM *v14; // rax
  void (__fastcall *v15)(IScriptVM *, uint64, _QWORD, __int64 *); // r8
  int v16; // edx
  ScriptVariant_t varTable; // [rsp+10h] [rbp-50h] BYREF
  __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  __int16 v20; // [rsp+28h] [rbp-38h]
  __int16 v21; // [rsp+2Ah] [rbp-36h]

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    if ( CDOTA_Bot_Script::GetBot(this) != 0 )
    {
      if ( `guard variable for'CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees) != 0 )
      {
        CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees.m_Size = 0;
        CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees.m_Memory.m_pMemory = 0;
        CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees.m_Memory.m_nAllocationCount = 0;
        CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees.m_Memory.m_nGrowSize = 0;
        __cxa_guard_release(&`guard variable for'CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees);
        __cxa_atexit(
          CUtlVector<int,CUtlMemory<int,int>>::~CUtlVector,
          &CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees,
          &_dso_handle);
      }
      CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees.m_Size = 0;
      Bot = CDOTA_Bot_Script::GetBot(this);
      CDOTA_Bot::GetNearbyTrees(Bot, &CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees, nRadius, v7);
      varTable.m_type = 0;
      varTable.m_flags = 0;
      varTable.m_uint64 = 0;
      v8 = DOTACommander();
      ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v8);
      (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, &varTable);
      v10 = 0;
      v11 = 0;
      for ( i = varTable.m_uint64; CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees.m_Size > v11; ++v10 )
      {
        v13 = DOTACommander();
        v14 = CDOTA_Commander::GetActiveScriptVM(v13);
        v15 = *(*v14 + 248LL);
        v16 = CDOTA_Bot_Script::GetNearbyTrees(int)::vecTrees.m_Memory.m_pMemory[v10];
        v20 = 5;
        v21 = 0;
        LODWORD(v19) = v16;
        v15(v14, i, v11, &v19);
        if ( (v21 & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19);
        ++v11;
      }
      if ( varTable.m_type == 31 )
        varTable.m_type = 36;
      a1->m_type = 0;
      a1->m_flags = 0;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, a1);
      CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
    }
    else
    {
      a1->m_uint64 = 0;
      a1->m_type = 0;
      a1->m_flags = 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetNearbyTrees");
    a1->m_type = 0;
    a1->m_flags = 0;
    a1->m_uint64 = 0;
  }
  return a1;
}


// CDOTA_Bot_Script::FindAoELocation  (line 2001, @0x000000000284ece0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, CopyData<Vector>, Get, GetBaseNPC, GetInstance, GetTeamNumber, TakeOwnership, ToDOTABaseNPC, Vector, operator CBaseEntity*, ~CVariantBase
// calls: DOTACommander, CDOTA_Commander::GetActiveScriptVM, CEntityHandle::operator CEntityInstance*, __cxa_guard_acquire, CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::RemoveAll, BuildLocationList, FindOptimalTargetLocation, CVariantBase<CVariantDefaultAllocator>::Free, __cxa_guard_release, __cxa_atexit, _Unwind_Resume
// strings: "targetloc"
// globals: `guard variable for'CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations, CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations, __dso_handle, CUtlVector<Vector2D,CUtlMemory<Vector2D,int>>::~CUtlVector()
CDOTA_Bot_Script *__fastcall CDOTA_Bot_Script::FindAoELocation(
        CDOTA_Bot_Script *const this,
        const CEntityHandle *bEnemies,
        bool bHeroes,
        const Vector *const vBaseLocation,
        const Vector *nMaxDistanceFromBase,
        int nRadius,
        float fTimeInFuture,
        int nMaxHealth,
        int nMaxHealtha)
{
  char v11; // r13
  CDOTA_Commander *v13; // rax
  IScriptVM *ActiveScriptVM; // rax
  int (**vptr_CDOTA_Bot_Script)(...); // r12
  CEntityInstance *v16; // rax
  int v17; // r13d
  __m128 v18; // xmm2
  CDOTA_Commander *v19; // rax
  IScriptVM *v20; // rax
  void (__fastcall *v21)(IScriptVM *, int (**)(...), const char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  CDOTA_Commander *v22; // rax
  IScriptVM *v23; // r14
  __int64 v24; // rax
  void (__fastcall *v25)(IScriptVM *, int (**)(...), const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  int nTeamNumber; // [rsp+2Ch] [rbp-74h]
  int nCount; // [rsp+3Ch] [rbp-64h] BYREF
  Vector2D vTarget; // [rsp+40h] [rbp-60h] BYREF
  Vector2D v33; // [rsp+50h] [rbp-50h] BYREF
  int v34; // [rsp+58h] [rbp-48h]
  CVariantBase<CVariantDefaultAllocator> v35; // [rsp+60h] [rbp-40h] BYREF

  v11 = vBaseLocation;
  this->m_hBaseNPC.m_Index = 0;
  this->_vptr_CDOTA_Bot_Script = 0;
  v13 = DOTACommander();
  ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v13);
  (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, this);
  vptr_CDOTA_Bot_Script = this->_vptr_CDOTA_Bot_Script;
  v16 = CEntityHandle::operator CEntityInstance *(bEnemies + 2);
  if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
    v16 = 0;
  v17 = 2 - (v11 != 0);
  nTeamNumber = HIBYTE(v16[7].m_CScriptComponent);
  if ( `guard variable for'CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations) != 0 )
  {
    CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations.m_Size = 0;
    CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations.m_Memory.m_pMemory = 0;
    CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations.m_Memory.m_nAllocationCount = 0;
    CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations);
    __cxa_atexit(
      CUtlVector<Vector2D,CUtlMemory<Vector2D,int>>::~CUtlVector,
      &CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations,
      &_dso_handle);
  }
  CUtlVectorBase<Vector2D,CUtlMemory<Vector2D,int>>::RemoveAll(&CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations);
  BuildLocationList(
    nTeamNumber,
    v17,
    2 - !bHeroes,
    nMaxDistanceFromBase,
    nRadius,
    nMaxHealth,
    fTimeInFuture,
    &CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations,
    nMaxHealtha);
  FindOptimalTargetLocation(
    &CDOTA_Bot_Script::FindAoELocation(bool,bool,Vector const&,int,int,float,int)::vecLocations,
    nMaxHealth,
    &vTarget,
    &nCount,
    100.0,
    v18);
  v19 = DOTACommander();
  v20 = CDOTA_Commander::GetActiveScriptVM(v19);
  v21 = *(*v20 + 240LL);
  v35.m_type = 5;
  v35.m_flags = 0;
  v35.m_int = nCount;
  v21(v20, vptr_CDOTA_Bot_Script, "count", &v35);
  CVariantBase<CVariantDefaultAllocator>::Free(&v35);
  v22 = DOTACommander();
  v23 = CDOTA_Commander::GetActiveScriptVM(v22);
  v24 = *v23;
  v33 = vTarget;
  v34 = 0;
  v25 = *(v24 + 240);
  v35.m_type = 0;
  v35.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v35);
  v35.m_type = 3;
  v35.m_uint64 = &v33;
  v25(v23, vptr_CDOTA_Bot_Script, "targetloc", &v35);
  CVariantBase<CVariantDefaultAllocator>::Free(&v35);
  if ( LOWORD(this->m_hBaseNPC.m_Index) == 31 )
    LOWORD(this->m_hBaseNPC.m_Index) = 36;
  return this;
}


// CDOTA_Bot_Script::GetExtrapolatedLocation  (line 2029, @0x000000000283c9b0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, DevWarning(char const*,...)
// strings: "GetExtrapolatedLocation", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
__m128i __fastcall CDOTA_Bot_Script::GetExtrapolatedLocation(CDOTA_Bot_Script *const this, float a2, float fDelay)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rsi
  CEntityIdentity *v6; // rdx
  __int64 v7; // rcx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTALocomotor *v10; // rax
  float v11; // xmm1_4
  unsigned __int64 v12; // xmm0_8
  uint32 v13; // eax
  float v14; // xmm1_4
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  const CBaseEntity *v17; // rdi
  const Vector *AbsOrigin; // rax
  __int32 v19; // xmm0_4
  float v20; // xmm2_4
  vec_t z; // eax
  unsigned __int64 v24; // [rsp+20h] [rbp-30h]
  float v25; // [rsp+28h] [rbp-28h]
  __m128i v26; // [rsp+30h] [rbp-20h] BYREF

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v5 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = this->m_hBaseNPC.m_Index & 0x1FF, v5 = (8 * v7), (v8 = &v6[v7]) == 0)
      || m_Index != v8->m_EHandle.m_Index
      || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v10 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance, v5);
    v12 = CDOTALocomotor::GetAverageVelocityOverTime(v10, a2, v11).m128i_u64[0];
    v13 = this->m_hBaseNPC.m_Index;
    v24 = v12;
    v25 = v14;
    if ( v13 + 2 <= 1
      || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v16 = &v15[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || v13 != v16->m_EHandle.m_Index
      || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
      || !v17->m_bIsDOTANPC )
    {
      v17 = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
    *&v19 = AbsOrigin->z + v25;
    v20 = AbsOrigin->x + *&v24;
    *&v26.m128i_i32[1] = AbsOrigin->y + *(&v24 + 1);
    v26.m128i_i32[2] = v19;
    *v26.m128i_i32 = v20;
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetExtrapolatedLocation");
    z = vec3_origin.z;
    v26.m128i_i64[0] = *&vec3_origin.x;
    *&v26.m128i_i32[2] = z;
  }
  return _mm_loadl_epi64(&v26);
}


// CDOTA_Bot_Script::GetMovementDirectionStability  (line 2038, @0x000000000283ce80, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTALocomotor::GetAverageVelocityStability, DevWarning(char const*,...)
// strings: "GetMovementDirectionStability", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Script::GetMovementDirectionStability(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTALocomotor *v8; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hBaseNPC.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v8 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance, v3);
    return CDOTALocomotor::GetAverageVelocityStability(v8);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetMovementDirectionStability");
    return -1.0;
  }
}


// CDOTA_Bot_Script::GetActualDamage  (line 2047, @0x0000000002830af0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_BaseNPC::GetArmorReductionForDamageType, DevWarning(char const*,...)
// strings: "GetActualDamage", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::GetActualDamage(CDOTA_Bot_Script *const this, int nDamage, int eDamageType)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v8 = &v7[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v8->m_EHandle.m_Index
      || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(m_pInstance, eDamageType)) * nDamage);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetActualDamage");
    return -1;
  }
}


// CDOTA_Bot_Script::HasModifier  (line 2056, @0x0000000002830bd0, libserver.so)  // inlines: FStrEq, Get, GetBaseNPC, GetInstance, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*
// calls: CDOTA_Bot_Script::CanBeSeen, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetName, strcmp, DevWarning(char const*,...)
// strings: "HasModifier", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTA_Bot_Script::HasModifier(CDOTA_Bot_Script *const this, const char *pszModifierName)
{
  CEntityInstance *v4; // rax
  CDOTA_ModifierManager *p_m_worldGroupId; // r13
  int vptr_IHandleEntity; // r12d
  int v7; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v9; // r15
  const char *Name; // rax
  bool CanBeSeen; // [rsp+Fh] [rbp-31h]

  CanBeSeen = CDOTA_Bot_Script::CanBeSeen(this);
  if ( CanBeSeen )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
    if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
      v4 = 0;
    p_m_worldGroupId = &v4[64].m_worldGroupId;
    if ( v4 == -3104LL )
      return 0;
    vptr_IHandleEntity = v4[65]._vptr_IHandleEntity;
    if ( vptr_IHandleEntity <= 0 )
    {
      return 0;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_worldGroupId, v7, 0);
        v9 = BuffByIndex;
        if ( BuffByIndex != 0 && (*(BuffByIndex->_vptr_CDOTA_Buff + 11))(BuffByIndex) == 0 )
        {
          Name = CDOTA_Buff::GetName(v9);
          if ( Name == pszModifierName || strcmp(Name, pszModifierName) == 0 )
            break;
        }
        if ( ++v7 == vptr_IHandleEntity )
          return 0;
      }
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "HasModifier");
  }
  return CanBeSeen;
}


// CDOTA_Bot_Script::NumModifiers  (line 2079, @0x0000000002830cd0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_ModifierManager::GetBuffByIndex, DevWarning(char const*,...)
// strings: "NumModifiers", "'%s' called on an entity that cannot be seen!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_Script::NumModifiers(CDOTA_Bot_Script *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r13
  int v6; // ebx
  int v7; // r12d
  CDOTA_Buff *BuffByIndex; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    m_Index = this->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hBaseNPC.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    if ( m_pInstance == -3104LL || SLODWORD(m_pInstance[65]._vptr_IHandleEntity) <= 0 )
    {
      return 0;
    }
    else
    {
      v6 = 0;
      v7 = 0;
      do
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&m_pInstance[64].m_worldGroupId, v6, 0);
        if ( BuffByIndex != 0 )
          v7 += (*(BuffByIndex->_vptr_CDOTA_Buff + 11))(BuffByIndex) == 0;
        ++v6;
      }
      while ( v6 < SLODWORD(m_pInstance[65]._vptr_IHandleEntity) );
      return v7;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "NumModifiers");
    return -1;
  }
}


// CDOTA_Bot_Script::GetModifierNum  (line 2105, @0x0000000002833580, libserver.so)  // inlines: Get, GetBaseNPC, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetBuffByIndex
// callers: CDOTA_Bot_Script::GetModifierName, CDOTA_Bot_Script::GetModifierStackCount
CDOTA_Buff *__fastcall CDOTA_Bot_Script::GetModifierNum(CDOTA_Bot_Script *const this, int nModifier)
{
  CEntityInstance *v2; // rax
  CEntityInstance *v3; // r12
  int v4; // ebx
  int v5; // r13d
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v7; // r15

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hBaseNPC);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  if ( v3 == -3104LL || SLODWORD(v3[65]._vptr_IHandleEntity) <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&v3[64].m_worldGroupId, v4, 0);
    v7 = BuffByIndex;
    if ( BuffByIndex != 0 && (*(BuffByIndex->_vptr_CDOTA_Buff + 11))(BuffByIndex) == 0 )
    {
      if ( v5 == nModifier )
        break;
      ++v5;
    }
    if ( ++v4 >= SLODWORD(v3[65]._vptr_IHandleEntity) )
      return 0;
  }
  return v7;
}


// CDOTA_Bot_Script::GetModifierName  (line 2133, @0x0000000002833640, libserver.so)
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetModifierNum, CDOTA_Buff::GetName, DevWarning(char const*,...)
// strings: "GetModifierName", "'%s' called on an entity that cannot be seen!\n"
const char *__fastcall CDOTA_Bot_Script::GetModifierName(CDOTA_Bot_Script *const this, int nModifier)
{
  CDOTA_Buff *ModifierNum; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    ModifierNum = CDOTA_Bot_Script::GetModifierNum(this, nModifier);
    if ( ModifierNum != 0 )
      return CDOTA_Buff::GetName(ModifierNum);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetModifierName");
  }
  return "";
}


// CDOTA_Bot_Script::GetModifierStackCount  (line 2145, @0x00000000028336a0, libserver.so)
// calls: CDOTA_Bot_Script::CanBeSeen, CDOTA_Bot_Script::GetModifierNum, DevWarning(char const*,...)
// strings: "GetModifierStackCount", "'%s' called on an entity that cannot be seen!\n"
int __fastcall CDOTA_Bot_Script::GetModifierStackCount(CDOTA_Bot_Script *const this, int nModifier)
{
  CDOTA_Buff *ModifierNum; // rax

  if ( CDOTA_Bot_Script::CanBeSeen(this) )
  {
    ModifierNum = CDOTA_Bot_Script::GetModifierNum(this, nModifier);
    if ( ModifierNum != 0 )
      return (*(ModifierNum->_vptr_CDOTA_Buff + 27))(ModifierNum);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetModifierStackCount");
  }
  return -1;
}


