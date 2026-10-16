
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CompileTimeAssertBotModeStrings  (line 49, @0x00000000027f4e40, libserver.so)
void __cdecl CompileTimeAssertBotModeStrings()
{
  ;
}


// CDOTA_BotMode::CDOTA_BotMode  (line 56, @0x00000000027f4e50, libserver.so)  // inlines: operator=
// callers: CDOTA_BotMode_EvasiveManeuvers::CDOTA_BotMode_EvasiveManeuvers, CDOTA_BotMode_Item::CDOTA_BotMode_Item, CDOTA_BotMode_Laning::CDOTA_BotMode_Laning, CDOTA_BotMode_PushTower::CDOTA_BotMode_PushTower, CDOTA_BotMode_PushTower_Human::CDOTA_BotMode_PushTower_Human, CDOTA_BotMode_Retreat::CDOTA_BotMode_Retreat, CDOTA_BotMode_Roam::CDOTA_BotMode_Roam, CDOTA_BotMode_Roshan::CDOTA_BotMode_Roshan, CDOTA_BotMode_Roshan_Human::CDOTA_BotMode_Roshan_Human, CDOTA_BotMode_Rune::CDOTA_BotMode_Rune, CDOTA_BotMode_SecretShop::CDOTA_BotMode_SecretShop, CDOTA_BotMode_Farm::CDOTA_BotMode_Farm (17 total)
void __fastcall CDOTA_BotMode::CDOTA_BotMode(CDOTA_BotMode *const this, CDOTA_Bot *pBot)
{
  vec_t x; // xmm0_4

  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  this->m_pBot = pBot;
  this->m_iDesireLocationFrame = 0;
  this->m_DebugStringBuffer[0] = 0;
  x = vec3_origin.x;
  this->m_DebugValueBuffer[0] = 0;
  this->m_vDesiredLocation.x = x;
  this->m_vDesiredLocation.y = vec3_origin.y;
  this->m_vDesiredLocation.z = vec3_origin.z;
}


// CDOTA_BotMode::GetUnit  (line 68, @0x00000000027f4eb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_BotMode_Attack_Human::OnDidDamage, CDOTA_BotMode_Attack_Human::OnAbilityExecuted, CDOTA_BotMode_Attack_Human::GetDesire, CDOTA_BotMode_DefendAlly_Human::Think, CDOTA_BotMode_Assemble::OnStart, CDOTA_BotMode_AssembleWithHumans::OnStart, CDOTA_BotMode_Attack::OnStart, CDOTA_BotMode_Companion::OnStart, CDOTA_BotMode_Attack::FindPotentialAttackTarget, CDOTA_BotMode_Companion::UpdateCompanionPositionOffsets, CDOTA_BotMode_Assemble::GetDesire (122 total)
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_BotMode::GetUnit(CDOTA_BotMode *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v3; // cx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *result; // rax

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v3 = m_pBot->m_hUnit.m_Index;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v3 & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 0;
  result = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || !result->m_bIsDOTANPC )
    return 0;
  return result;
}


// CDOTA_BotMode::GetOwningHero  (line 75, @0x00000000027f5bc0, libserver.so)
// calls: CDOTA_Bot::GetOwningHero
// callers: CDOTA_BotMode_Farm::GetFarmDesire
CDOTA_BaseNPC_Hero *__fastcall CDOTA_BotMode::GetOwningHero(CDOTA_BotMode *const this)
{
  return CDOTA_Bot::GetOwningHero(this->m_pBot);
}


// CDOTA_BotMode::GetTeamCommander  (line 82, @0x00000000027f5be0, libserver.so)
// callers: CDOTA_BotMode_Laning_Human::GetDesire, CDOTA_BotMode_Rune::OnEnd, CDOTA_BotMode_Roam::OnEnd, CDOTA_BotMode_EvasiveManeuvers::CalculateDesiredLocation, CDOTA_BotMode_Rune::OnStart, CDOTA_BotMode_PushTower_Human::GetDesire, CDOTA_BotMode_Retreat::OnStart, CDOTA_BotMode_Farm_Human::GetDesire, CDOTA_BotMode_Roshan::OnEnd, CDOTA_BotMode_Roam::CalculateDesiredLocation, CDOTA_BotMode_Farm::CalculateDesiredLocation, CDOTA_BotMode_Laning::GetDesire (44 total)
CDOTA_TeamCommander *__fastcall CDOTA_BotMode::GetTeamCommander(CDOTA_BotMode *const this)
{
  return this->m_pBot->m_pTeamCommander;
}


// CDOTA_BotMode::GetOpposingTeamCommander  (line 89, @0x00000000027f5c00, libserver.so)
// calls: CDOTA_TeamCommander::GetOpposingTeamCommander
// callers: CDOTA_BotMode_PushTower_Human::GetDesire, CDOTA_BotMode_Roam::CalculateDesiredLocation, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Retreat::OnTakeDamage, CDOTA_BotMode_Roam_Human::GetDesire, CDOTA_BotMode_Farm::GetFarmDesire, CDOTA_BotMode_Farm::GetDesire, CDOTA_BotMode_Retreat::TimeSinceLastHitBy, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_PushTower::GetDesire (13 total)
CDOTA_TeamCommander *__fastcall CDOTA_BotMode::GetOpposingTeamCommander(CDOTA_BotMode *const this)
{
  return CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
}


// CDOTA_BotMode::GetDesiredLocation  (line 96, @0x00000000027e04b0, libserver.so)  // inlines: operator=
Vector __fastcall CDOTA_BotMode::GetDesiredLocation(CDOTA_BotMode *const this)
{
  int framecount; // eax
  double v3; // xmm0_8
  vec_t v4; // xmm1_4
  Vector m_vDesiredLocation; // 0:^10.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  framecount = gpGlobals->framecount;
  if ( this->m_iDesireLocationFrame == framecount )
  {
    m_vDesiredLocation = this->m_vDesiredLocation;
  }
  else
  {
    this->m_iDesireLocationFrame = framecount;
    v3 = (*(this->_vptr_CDOTA_BotMode + 15))(this);
    this->m_vDesiredLocation.z = v4;
    *&this->m_vDesiredLocation.x = v3;
    m_vDesiredLocation = this->m_vDesiredLocation;
  }
  *&result.x = *&m_vDesiredLocation.x;
  result.z = m_vDesiredLocation.z;
  return result;
}


// CDOTA_BotMode::FormatDebugString  (line 109, @0x00000000027f5c20, libserver.so)  // inlines: V_vsprintf_safe<128ul>
// calls: V_vsnprintf
// callers: CDOTA_BotMode_DefendTower::GetDebugString, CDOTA_BotMode_DefendTower_Human::GetDebugString, CDOTA_BotMode_PushTower::GetDebugString, CDOTA_BotMode_PushTower_Human::GetDebugString, CDOTA_BotMode_Rune::GetDebugString
const char *CDOTA_BotMode::FormatDebugString(CDOTA_BotMode *const this, const char *pszFormat, ...)
{
  char *m_DebugStringBuffer; // rbx
  va_list args; // [rsp+8h] [rbp-D8h] BYREF

  va_start(args, pszFormat);
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_vsnprintf(this->m_DebugStringBuffer, 128, pszFormat, args);
  return m_DebugStringBuffer;
}


// CDOTA_BotMode::FormatDebugValue  (line 121, @0x00000000027f5cd0, libserver.so)  // inlines: V_vsprintf_safe<64ul>
// calls: V_vsnprintf
// callers: CDOTA_BotMode_DefendAlly::GetDebugValue, CDOTA_BotMode_Farm::GetDebugValue, CDOTA_BotMode_Roshan::GetDebugValue, CDOTA_BotMode_Rune::GetDebugValue, CDOTA_BotMode_SecretShop::GetDebugValue, CDOTA_BotMode_TeamRoam::GetDebugValue
const char *CDOTA_BotMode::FormatDebugValue(CDOTA_BotMode *const this, const char *pszFormat, ...)
{
  char *m_DebugValueBuffer; // rbx
  va_list args; // [rsp+8h] [rbp-D8h] BYREF

  va_start(args, pszFormat);
  m_DebugValueBuffer = this->m_DebugValueBuffer;
  V_vsnprintf(this->m_DebugValueBuffer, 64, pszFormat, args);
  return m_DebugValueBuffer;
}


// CDOTA_BotMode::IsBotTargetStatusValid  (line 133, @0x00000000027f5d80, libserver.so)  // inlines: GetBotTargetStatusCore, IsBotTargetStatusValidCore
// calls: GetBotTargetStatusCore
// callers: CDOTA_BotMode_Roam::IsValidRoamTarget, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_Attack_Juggernaut::GetDesire, CDOTA_BotMode_Attack_Juggernaut::CalculateDesiredLocation, CDOTA_BotMode_Attack_WarlockGolem::Think, CDOTA_BotMode_Attack_WitchDoctor_DeathWard::Think, CDOTA_BotMode_GenericMinion::Think
bool __fastcall CDOTA_BotMode::IsBotTargetStatusValid(
        CDOTA_BotMode *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pAttacker,
        int flags,
        float fMaxRange)
{
  int BotTargetStatusCore; // eax

  BotTargetStatusCore = 128;
  if ( pTarget != 0 )
    BotTargetStatusCore = GetBotTargetStatusCore(pTarget, pAttacker, fMaxRange, 0);
  return (flags & BotTargetStatusCore) == 0;
}


// CDOTA_BotMode::GetBotTargetStatus  (line 140, @0x00000000027f5db0, libserver.so)  // inlines: GetBotTargetStatusCore
// calls: GetBotTargetStatusCore
// callers: CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Attack_Sven::GetDesire, CDOTA_BotMode_Attack_Tiny::GetDesire
__int64 __fastcall CDOTA_BotMode::GetBotTargetStatus(
        CDOTA_BotMode *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pAttacker,
        float fMaxRange)
{
  if ( pTarget != 0 )
    return GetBotTargetStatusCore(pTarget, pAttacker, fMaxRange, 0);
  else
    return 128;
}


// CDOTA_BotMode::DoScriptOnStart  (line 147, @0x00000000027f5de0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModeScriptScope, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::RunScriptFunction
// callers: CDOTA_BotMode_DefendTower::OnStart, CDOTA_BotMode_DefendAlly::OnStart, CDOTA_BotMode_Assemble::OnStart, CDOTA_BotMode_AssembleWithHumans::OnStart, CDOTA_BotMode_Attack::OnStart, CDOTA_BotMode_Companion::OnStart, CDOTA_BotMode_Laning::OnStart, CDOTA_BotMode_Farm::OnStart, CDOTA_BotMode_Item::OnStart, CDOTA_BotMode_EvasiveManeuvers::OnStart, CDOTA_BotMode_SecretShop::OnStart, CDOTA_BotMode_Rune::OnStart (20 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotMode::DoScriptOnStart(CDOTA_BotMode *const this)
{
  int v2; // eax
  CDOTA_Bot *m_pBot; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CDOTA_Bot_Script *m_CScriptComponent; // rdi
  HSCRIPT v9; // rdx
  CEntityInstance *m_pInstance; // rdx

  v2 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = m_pBot->m_hUnit.m_Index, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0)
    && (v7 = &v6[v5 & 0x1FF]) != 0
    && m_Index == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    m_CScriptComponent = m_pInstance[45].m_CScriptComponent;
    v9 = m_CScriptComponent->m_hBotModeScriptScope[v2];
  }
  else
  {
    m_CScriptComponent = 0;
    v9 = stru_10.m_pIdentityChunks[v2 + 17];
  }
  return CDOTA_Bot_Script::RunScriptFunction(m_CScriptComponent, "OnStart", v9, 0);
}


// CDOTA_BotMode::DoScriptOnEnd  (line 154, @0x00000000027f63e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModeScriptScope, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::RunScriptFunction
// callers: CDOTA_BotMode_Assemble::OnEnd, CDOTA_BotMode_Companion::OnEnd, CDOTA_BotMode_DefendTower::OnEnd, CDOTA_BotMode_AssembleWithHumans::OnEnd, CDOTA_BotMode_Attack::OnEnd, CDOTA_BotMode_DefendAlly::OnEnd, CDOTA_BotMode_EvasiveManeuvers::OnEnd, CDOTA_BotMode_Laning::OnEnd, CDOTA_BotMode_Retreat::OnEnd, CDOTA_BotMode_SecretShop::OnEnd, CDOTA_BotMode_Item::OnEnd, CDOTA_BotMode_PushTower::OnEnd (20 total)
// strings: "OnEnd"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotMode::DoScriptOnEnd(CDOTA_BotMode *const this)
{
  int v2; // eax
  CDOTA_Bot *m_pBot; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CDOTA_Bot_Script *m_CScriptComponent; // rdi
  HSCRIPT v9; // rdx
  CEntityInstance *m_pInstance; // rdx

  v2 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = m_pBot->m_hUnit.m_Index, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0)
    && (v7 = &v6[v5 & 0x1FF]) != 0
    && m_Index == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    m_CScriptComponent = m_pInstance[45].m_CScriptComponent;
    v9 = m_CScriptComponent->m_hBotModeScriptScope[v2];
  }
  else
  {
    m_CScriptComponent = 0;
    v9 = stru_10.m_pIdentityChunks[v2 + 17];
  }
  return CDOTA_Bot_Script::RunScriptFunction(m_CScriptComponent, "OnEnd", v9, 0);
}


// CDOTA_BotMode::DoScriptThink  (line 161, @0x00000000027f6580, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModeScriptScope, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::RunScriptFunction
// callers: CDOTA_BotMode_Assemble::Think, CDOTA_BotMode_AssembleWithHumans::Think, CDOTA_BotMode_Attack::Think, CDOTA_BotMode_DefendAlly::Think, CDOTA_BotMode_Companion::Think, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_SecretShop::Think, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Roam::Think, CDOTA_BotMode_Item::Think, CDOTA_BotMode_EvasiveManeuvers::Think, CDOTA_BotMode_Farm::Think (20 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotMode::DoScriptThink(CDOTA_BotMode *const this)
{
  int v2; // eax
  CDOTA_Bot *m_pBot; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CDOTA_Bot_Script *m_CScriptComponent; // rdi
  HSCRIPT v9; // rdx
  CEntityInstance *m_pInstance; // rdx

  v2 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = m_pBot->m_hUnit.m_Index, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0)
    && (v7 = &v6[v5 & 0x1FF]) != 0
    && m_Index == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    m_CScriptComponent = m_pInstance[45].m_CScriptComponent;
    v9 = m_CScriptComponent->m_hBotModeScriptScope[v2];
  }
  else
  {
    m_CScriptComponent = 0;
    v9 = stru_10.m_pIdentityChunks[v2 + 17];
  }
  return CDOTA_Bot_Script::RunScriptFunction(m_CScriptComponent, "Think", v9, 0);
}


// CDOTA_BotMode::GetScriptDesire  (line 168, @0x00000000027fcb10, libserver.so)  // inlines: CVariantBase, Float, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModeScriptScope, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator float, ~CVariantBase
// calls: CDOTA_Bot_Script::RunScriptFunction, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_BotMode_Assemble::GetDesire, CDOTA_BotMode_AssembleWithHumans::GetDesire, CDOTA_BotMode_DefendTower::GetDesire, CDOTA_BotMode_DefendAlly::GetDesire, CDOTA_BotMode_Attack::GetDesire, CDOTA_BotMode_Laning::GetDesire, CDOTA_BotMode_Item::GetDesire, CDOTA_BotMode_Roshan::GetDesire, CDOTA_BotMode_SecretShop::GetDesire, CDOTA_BotMode_Roam::GetDesire, CDOTA_BotMode_EvasiveManeuvers::GetDesire, CDOTA_BotMode_Farm::GetDesire (18 total)
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode::GetScriptDesire(CDOTA_BotMode *const this)
{
  int (**vptr_CDOTA_BotMode)(...); // rax
  int v3; // eax
  CDOTA_Bot *m_pBot; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v6; // si
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CDOTA_Bot_Script *m_CScriptComponent; // rdi
  HSCRIPT v10; // rdx
  float result; // xmm0_4
  CEntityInstance *m_pInstance; // rdx
  float v13; // [rsp+Ch] [rbp-24h]
  ScriptVariant_t v14; // [rsp+10h] [rbp-20h] BYREF

  v14.m_type = 0;
  vptr_CDOTA_BotMode = this->_vptr_CDOTA_BotMode;
  v14.m_flags = 0;
  v14.m_uint64 = 0;
  v3 = vptr_CDOTA_BotMode[2](this);
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v6 = m_pBot->m_hUnit.m_Index, (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) != 0)
    && (v8 = &v7[v6 & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    m_CScriptComponent = m_pInstance[45].m_CScriptComponent;
    v10 = m_CScriptComponent->m_hBotModeScriptScope[v3];
  }
  else
  {
    m_CScriptComponent = 0;
    v10 = stru_10.m_pIdentityChunks[v3 + 17];
  }
  if ( CDOTA_Bot_Script::RunScriptFunction(m_CScriptComponent, "GetDesire", v10, &v14) )
  {
    result = v14.m_float;
    if ( v14.m_type == 34 )
      result = v14.m_float64;
  }
  else
  {
    result = -1.0;
  }
  if ( (v14.m_flags & 1) != 0 )
  {
    v13 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14.m_uint64);
    return v13;
  }
  return result;
}


