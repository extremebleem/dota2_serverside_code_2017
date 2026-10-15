
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ToAbilityBotScriptHandle  (line 16, @0x000000000244dcf0, libserver.so)  // inlines: GetClassScriptDesc
// calls: DOTACommander, CDOTA_Commander::GetActiveScriptVM, GetScriptDesc<CDOTABaseAbility_BotScript>
// callers: CDOTA_Bot_Script::Action_UseAbility, CDOTA_Bot_Script::Action_UseAbilityOnLocation, CDOTA_Bot_Script::Action_UseAbilityOnTree, CDOTA_Bot_Script::Action_SellItem, CDOTA_Bot_Script::Action_DisassembleItem, CDOTA_Bot_Script::Action_DropItem, CDOTA_Bot_Script::Action_PickUpItem, CDOTA_Bot_Script::Action_SetItemCombineLock, CDOTA_Bot_Script::Action_UseAbilityOnEntity
CDOTABaseAbility_BotScript *__fastcall ToAbilityBotScriptHandle(HSCRIPT hAbilityBotScriptHandle)
{
  CDOTA_Commander *v2; // rax
  IScriptVM *ActiveScriptVM; // rbx
  CDOTABaseAbility_BotScript *(__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax

  v2 = DOTACommander();
  ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v2);
  v4 = *(*ActiveScriptVM + 208LL);
  Script = GetScriptDesc<CDOTABaseAbility_BotScript>(0);
  return v4(ActiveScriptVM, hAbilityBotScriptHandle, Script);
}


// CDOTABaseAbility_BotScript::CDOTABaseAbility_BotScript  (line 53, @0x000000000242b4a0, libserver.so)
void __fastcall CDOTABaseAbility_BotScript::CDOTABaseAbility_BotScript(
        CDOTABaseAbility_BotScript *const this,
        CDOTABaseAbility *pBaseAbility)
{
  __int64 v2; // rax

  this->_vptr_CDOTABaseAbility_BotScript = &off_40D90E0;
  v2 = 0;
  this->m_pAbility = pBaseAbility;
  do
    this->m_hScriptHandle[v2++] = 0;
  while ( v2 != 14 );
}


// CDOTABaseAbility_BotScript::GetScriptHandle  (line 65, @0x000000000242b4d0, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_Commander::GetActiveScriptVM
// callers: CDOTA_Bot_Script::GetAbilityByName, CDOTA_Bot_Script::GetItemInSlot, CDOTA_Bot_Script::GetCurrentActiveAbility, Script_GetDroppedItemList
HSCRIPT __fastcall CDOTABaseAbility_BotScript::GetScriptHandle(CDOTABaseAbility_BotScript *const this)
{
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax
  int (***v4)(...); // r12
  HSCRIPT result; // rax
  CDOTA_Commander *v6; // rax
  IScriptVM *ActiveScriptVM; // r13
  __int64 (__fastcall *v8)(IScriptVM *, __int64, CDOTABaseAbility_BotScript *const); // r14
  __int64 v9; // rax

  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  if ( TeamRunningScript == DOTATeam_t::DOTA_TEAM_NOTEAM )
    return 0;
  v4 = &this->_vptr_CDOTABaseAbility_BotScript + TeamRunningScript;
  result = v4[2];
  if ( result == 0 )
  {
    v6 = DOTACommander();
    ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v6);
    v8 = *(*ActiveScriptVM + 184LL);
    v9 = (*this->_vptr_CDOTABaseAbility_BotScript)(this);
    result = v8(ActiveScriptVM, v9, this);
    v4[2] = result;
  }
  return result;
}


// CDOTABaseAbility_BotScript::IsMyScript  (line 81, @0x000000000242b550, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: DOTACommander, CDOTA_Commander::GetBotRunningScript
// callers: CDOTABaseAbility_BotScript::ToggleAutoCast
bool __fastcall CDOTABaseAbility_BotScript::IsMyScript(const CDOTABaseAbility_BotScript *const this)
{
  CDOTA_Commander *v2; // rax
  CDOTA_Bot *BotRunningScript; // rax
  bool v4; // dl
  CDOTA_Commander *v5; // rax
  CDOTA_Bot *v6; // rax
  CDOTABaseAbility *m_pAbility; // rdx
  uint32 v8; // esi
  unsigned __int16 v9; // cx
  int v10; // edi
  __int16 v11; // dx
  uint32 v12; // ecx
  CEntityInstance *m_pInstance; // rsi
  int v14; // edx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  __int16 v18; // [rsp+0h] [rbp-20h]

  v2 = DOTACommander();
  BotRunningScript = CDOTA_Commander::GetBotRunningScript(v2);
  v4 = 0;
  if ( BotRunningScript != 0 )
  {
    v5 = DOTACommander();
    v6 = CDOTA_Commander::GetBotRunningScript(v5);
    m_pAbility = this->m_pAbility;
    v8 = m_pAbility->m_hOwnerEntity.m_Value.m_Index >> 15;
    if ( m_pAbility->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v9 = 0x7FFF;
      v10 = 0x7FFF;
    }
    else
    {
      v9 = m_pAbility->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v10 = v9;
    }
    v11 = v9 | v18 & 0x8000;
    v12 = v8;
    m_pInstance = 0;
    v14 = (v12 << 15) | v11 & 0x7FFF;
    if ( (v14 + 2) > 1 )
    {
      v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
      if ( v15 != 0 )
      {
        v16 = &v15[v10 & 0x1FF];
        if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
          m_pInstance = v16->m_pInstance;
      }
    }
    return v6 == *&m_pInstance[45].m_worldGroupId.m_nHashCode;
  }
  return v4;
}


// CDOTABaseAbility_BotScript::IsMyScriptTeam  (line 86, @0x000000000242b6b0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
// callers: CDOTABaseAbility_BotScript::GetAbilityDamage, CDOTABaseAbility_BotScript::IsCooldownReady, CDOTABaseAbility_BotScript::GetCooldownTimeRemaining, CDOTABaseAbility_BotScript::CanBeSeen
bool __fastcall CDOTABaseAbility_BotScript::IsMyScriptTeam(const CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rax
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // esi
  __int16 v5; // ax
  uint32 v6; // edx
  CEntityInstance *m_pInstance; // rcx
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  __int64 v11; // rbx
  CDOTA_Commander *v12; // rax
  CDOTA_Commander *v13; // rax
  __int16 v15; // [rsp+0h] [rbp-20h]

  m_pAbility = this->m_pAbility;
  v2 = m_pAbility->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( m_pAbility->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = m_pAbility->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = v3 | v15 & 0x8000;
  v6 = v2;
  m_pInstance = 0;
  v8 = (v6 << 15) | v5 & 0x7FFF;
  if ( (v8 + 2) > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v4 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  v11 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
  if ( v11 == 0 )
    return 0;
  v12 = DOTACommander();
  if ( CDOTA_Commander::GetTeamRunningScript(v12) == DOTATeam_t::DOTA_TEAM_NOTEAM )
    return 0;
  v13 = DOTACommander();
  return CDOTA_Commander::GetTeamRunningScript(v13) == *(*(v11 + 160) + 832LL);
}


// CDOTABaseAbility_BotScript::CanBeSeen  (line 93, @0x000000000242b8f0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTABaseAbility_BotScript::IsMyScriptTeam, CBaseModelEntity::CanBeSeenByTeam
// callers: CDOTABaseAbility_BotScript::GetCastRange, CDOTABaseAbility_BotScript::GetChannelTime, CDOTABaseAbility_BotScript::GetCastPoint, CDOTABaseAbility_BotScript::GetManaCost, CDOTABaseAbility_BotScript::GetChannelledManaCostPerSecond, CDOTABaseAbility_BotScript::IsChanneling, CDOTABaseAbility_BotScript::CanBeDisassembled, CDOTABaseAbility_BotScript::GetPowerTreadsStat, CDOTABaseAbility_BotScript::GetLevel, CDOTABaseAbility_BotScript::IsTrained, CDOTABaseAbility_BotScript::IsHidden, CDOTABaseAbility_BotScript::IsActivated (24 total)
bool __fastcall CDOTABaseAbility_BotScript::CanBeSeen(const CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rax
  uint32 v3; // ecx
  unsigned __int16 v4; // dx
  int v5; // esi
  __int16 v6; // ax
  uint32 v7; // edx
  CEntityInstance *m_pInstance; // rcx
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  __int64 v12; // r13
  CDOTABaseAbility *v14; // rax
  unsigned __int16 v15; // dx
  int v16; // r8d
  CBaseModelEntity *v17; // rdi
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  __int16 v21; // [rsp+0h] [rbp-30h]

  m_pAbility = this->m_pAbility;
  v3 = m_pAbility->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( m_pAbility->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = m_pAbility->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = v4 | v21 & 0x8000;
  v7 = v3;
  m_pInstance = 0;
  v9 = (v7 << 15) | v6 & 0x7FFF;
  if ( (v9 + 2) > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v10 != 0 )
    {
      v11 = &v10[v5 & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  v12 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
  if ( v12 == 0 )
    return 0;
  if ( CDOTABaseAbility_BotScript::IsMyScriptTeam(this) )
    return 1;
  v14 = this->m_pAbility;
  if ( v14->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v15 = 0x7FFF;
    v16 = 0x7FFF;
  }
  else
  {
    v15 = v14->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v16 = v15;
  }
  v17 = 0;
  v18 = (v14->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
  if ( (v18 + 2) > 1 )
  {
    v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
    if ( v19 != 0 )
    {
      v20 = &v19[v16 & 0x1FF];
      if ( v20 != 0 && v18 == v20->m_EHandle.m_Index )
        v17 = v20->m_pInstance;
    }
  }
  return CBaseModelEntity::CanBeSeenByTeam(v17, *(*(v12 + 160) + 832LL));
}


// CDOTABaseAbility_BotScript::GetName  (line 102, @0x000000000241f420, libserver.so)  // inlines: GetAbilityName
// strings: "<NoAbilityName>"
const char *__fastcall CDOTABaseAbility_BotScript::GetName(CDOTABaseAbility_BotScript *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *result; // rax
  const char *m_pszAbilityName; // rdx

  m_pAbilityData = this->m_pAbility->m_pAbilityData;
  result = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      return m_pszAbilityName;
  }
  return result;
}


// CDOTABaseAbility_BotScript::GetCaster  (line 109, @0x0000000002421530, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_Bot_Script::GetScriptHandle
HSCRIPT __fastcall CDOTABaseAbility_BotScript::GetCaster(CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rax
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // esi
  __int16 v5; // ax
  uint32 v6; // edx
  CEntityInstance *m_pInstance; // rcx
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  __int16 v12; // [rsp+0h] [rbp-10h]

  m_pAbility = this->m_pAbility;
  v2 = m_pAbility->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( m_pAbility->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = m_pAbility->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = v3 | v12 & 0x8000;
  v6 = v2;
  m_pInstance = 0;
  v8 = (v6 << 15) | v5 & 0x7FFF;
  if ( (v8 + 2) > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v4 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  return CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
}


// CDOTABaseAbility_BotScript::GetLevel  (line 114, @0x000000000242be40, libserver.so)  // inlines: GetLevel
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetLevel", "'%s' called on an entity that cannot be seen!\n"
int __fastcall CDOTABaseAbility_BotScript::GetLevel(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_iLevel.m_Value;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetLevel");
  return -1;
}


// CDOTABaseAbility_BotScript::IsTrained  (line 121, @0x000000000242be90, libserver.so)  // inlines: GetEffectiveLevel, GetLevel, IsTrained
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "IsTrained", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsTrained(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_iLevel.m_Value > 0;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "IsTrained");
  return 0;
}


// CDOTABaseAbility_BotScript::CanAbilityBeUpgraded  (line 128, @0x000000000242ed60, libserver.so)
// calls: CDOTABaseAbility_BotScript::CanBeSeen, CDOTABaseAbility::CanAbilityBeUpgraded, DevWarning(char const*,...)
// strings: "CanAbilityBeUpgraded", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::CanAbilityBeUpgraded(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return CDOTABaseAbility::CanAbilityBeUpgraded(this->m_pAbility) == AbilityLearnResult_t::ABILITY_CAN_BE_UPGRADED;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "CanAbilityBeUpgraded");
  return 0;
}


// CDOTABaseAbility_BotScript::GetHeroLevelRequiredToUpgrade  (line 135, @0x000000000242ec30, libserver.so)
// calls: CDOTABaseAbility_BotScript::CanBeSeen, CDOTABaseAbility::GetHeroLevelRequiredToUpgrade, DevWarning(char const*,...)
// strings: "GetHeroLevelRequiredToUpgrade", "'%s' called on an entity that cannot be seen!\n"
int __fastcall CDOTABaseAbility_BotScript::GetHeroLevelRequiredToUpgrade(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return CDOTABaseAbility::GetHeroLevelRequiredToUpgrade(this->m_pAbility);
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetHeroLevelRequiredToUpgrade");
  return -1;
}


// CDOTABaseAbility_BotScript::GetMaxLevel  (line 142, @0x000000000242e220, libserver.so)  // inlines: GetAbilityData, GetMaxLevel
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility_BotScript::GetMaxLevel(const CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbility = this->m_pAbility;
  m_pAbilityData = m_pAbility->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iMaxLevel;
  CDOTABaseAbility::LoadAbilityData(this->m_pAbility, 0);
  return m_pAbility->m_pAbilityData->m_iMaxLevel;
}


// CDOTABaseAbility_BotScript::GetCastRange  (line 147, @0x000000000242bac0, libserver.so)
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetCastRange", "'%s' called on an entity that cannot be seen!\n"
int __fastcall CDOTABaseAbility_BotScript::GetCastRange(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetCastRange");
  return -1;
}


// CDOTABaseAbility_BotScript::GetChannelTime  (line 154, @0x000000000242bb20, libserver.so)
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetChannelTime", "'%s' called on an entity that cannot be seen!\n"
float __fastcall CDOTABaseAbility_BotScript::GetChannelTime(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return (*(this->m_pAbility->_vptr_IHandleEntity + 225))(this->m_pAbility);
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetChannelTime");
  return -1.0;
}


// CDOTABaseAbility_BotScript::GetCastPoint  (line 161, @0x000000000242bb80, libserver.so)
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetCastPoint", "'%s' called on an entity that cannot be seen!\n"
float __fastcall CDOTABaseAbility_BotScript::GetCastPoint(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetCastPoint");
  return -1.0;
}


// CDOTABaseAbility_BotScript::IsTalent  (line 168, @0x000000000241f450, libserver.so)
bool __fastcall CDOTABaseAbility_BotScript::IsTalent(const CDOTABaseAbility_BotScript *const this)
{
  return (*(this->m_pAbility->_vptr_IHandleEntity + 238))(this->m_pAbility);
}


// CDOTABaseAbility_BotScript::IsUltimate  (line 173, @0x000000000241f470, libserver.so)
bool __fastcall CDOTABaseAbility_BotScript::IsUltimate(const CDOTABaseAbility_BotScript *const this)
{
  return (*(this->m_pAbility->_vptr_IHandleEntity + 214))(this->m_pAbility) == 1;
}


// CDOTABaseAbility_BotScript::GetSpecialValueInt  (line 178, @0x0000000002438d20, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Get, GetCaster, GetEffectiveLevel, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetInt, GetLevelSpecialValueFor<int>, GetOwnerEntity, GetSerialNumber, HasAbilityTuningValueFilter, HasScriptFilter, IndexToIdentity, Init, IsConsideredHero, IsValid, LookupEntity, RunAbilityTuningValueFilter, entindex, operator float, operator int
// calls: CDOTABaseAbility::GetSpecialAbility, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityHandle::GetHandleEntity, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat, VScriptFilter::RunScriptFilter, KeyValues::GetInt (16 total)
// strings: "AbilityValueData", "entindex_caster_const", "entindex_ability_const", "value_name_const"
int __fastcall CDOTABaseAbility_BotScript::GetSpecialValueInt(
        const CDOTABaseAbility_BotScript *const this,
        const char *pszKey)
{
  CDOTABaseAbility *m_pAbility; // rbx
  int m_Value; // eax
  int v4; // r15d
  DOTASpecialAbility_t *SpecialAbility; // r12
  uint32 m_Index; // edx
  uint32 v8; // esi
  unsigned __int16 v9; // cx
  int v10; // r8d
  int v11; // eax
  CEntityIdentity *v12; // rdi
  CEntityIdentity *v13; // rdi
  CEntitySystem *v14; // rdi
  uint32 v15; // ecx
  int m_nCount; // eax
  fieldtype_t m_FieldType; // edx
  int Int; // r14d
  unsigned __int16 v19; // cx
  int v20; // r8d
  CEntityIdentity *v21; // rcx
  CEntityIdentity *v22; // rcx
  int result; // eax
  fieldtype_t *v24; // r15
  __int16 v25; // ax
  int v26; // r14d
  fieldtype_t *v27; // r15
  float v28; // xmm0_4
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v31; // r15
  const CEntityInstance *HandleEntity; // rax
  CEntityIndex v33; // eax
  CEntityIndex v34; // eax
  float v35; // xmm1_4
  float v36; // xmm1_4
  fieldtype_t v37; // eax
  KeyValues *v38; // rbx
  KeyValues *pMem; // [rsp+0h] [rbp-60h]
  float Float; // [rsp+Ch] [rbp-54h]
  float pflMultiply; // [rsp+18h] [rbp-48h] BYREF
  float pflAdd; // [rsp+1Ch] [rbp-44h] BYREF
  KeyValues *pFilterKV; // [rsp+20h] [rbp-40h] BYREF

  m_pAbility = this->m_pAbility;
  m_Value = m_pAbility->m_iLevel.m_Value;
  v4 = m_Value - 1;
  if ( m_Value == 0 )
    return 0;
  SpecialAbility = CDOTABaseAbility::GetSpecialAbility(this->m_pAbility, pszKey);
  if ( SpecialAbility == 0 )
    return 0;
  m_Index = m_pAbility->m_hOwnerEntity.m_Value.m_Index;
  pflMultiply = 1.0;
  pflAdd = 0.0;
  v8 = m_Index >> 15;
  if ( m_Index == -1 )
  {
    v9 = 0x7FFF;
    v10 = 0x7FFF;
  }
  else
  {
    v9 = m_pAbility->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v10 = v9;
  }
  v11 = (v8 << 15) | v9 & 0x7FFF;
  LODWORD(pFilterKV) = v11;
  if ( (v11 + 2) > 1
    && (v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9]) != 0
    && (v13 = &v12[v10 & 0x1FF]) != 0
    && v11 == v13->m_EHandle.m_Index
    && (m_pInstance = v13->m_pInstance) != 0 )
  {
    CDOTA_BaseNPC::GetAbilityModifierValues(m_pInstance, pszKey, &pflMultiply, &pflAdd);
    v15 = m_pAbility->m_hOwnerEntity.m_Value.m_Index;
    v14 = g_pEntitySystem;
    v8 = v15 >> 15;
  }
  else
  {
    v14 = g_pEntitySystem;
    v15 = m_Index;
  }
  m_nCount = SpecialAbility->m_nCount;
  if ( v4 >= m_nCount )
    v4 = m_nCount - 1;
  m_FieldType = SpecialAbility->m_FieldType;
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
  {
    v27 = &SpecialAbility->m_FieldType + 4 * v4;
    if ( *(v27 + 8) == 34 )
      v28 = *(v27 + 1);
    else
      v28 = *(v27 + 2);
    Int = 0;
    Float = (v28 * pflMultiply) + pflAdd;
  }
  else
  {
    if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
    {
      v24 = &SpecialAbility->m_FieldType + 4 * v4;
      v25 = *(v24 + 8);
      if ( v25 == 1 )
      {
        v26 = *(v24 + 2);
      }
      else if ( v25 == 34 )
      {
        v26 = *(v24 + 1);
      }
      else
      {
        v26 = *(v24 + 2);
      }
      Float = 0.0;
      Int = ((v26 * pflMultiply) + pflAdd);
      if ( v15 != -1 )
        goto LABEL_16;
      goto LABEL_30;
    }
    Int = 0;
    Float = 0.0;
  }
  if ( v15 != -1 )
  {
LABEL_16:
    v19 = m_pAbility->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v20 = v19;
    goto LABEL_17;
  }
LABEL_30:
  v19 = 0x7FFF;
  v20 = 0x7FFF;
LABEL_17:
  LOWORD(pFilterKV) = v19 | pFilterKV & 0x8000;
  LODWORD(pFilterKV) = (v8 << 15) | pFilterKV & 0x7FFF;
  if ( (pFilterKV + 2) > 1 )
  {
    v21 = v14->m_EntityList.m_pIdentityChunks[v20 >> 9];
    if ( v21 != 0 )
    {
      v22 = &v21[v20 & 0x1FF];
      if ( v22 != 0
        && pFilterKV == v22->m_EHandle.m_Index
        && v22->m_pInstance != 0
        && (v22->m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0
        && g_pGameRules != 0 )
      {
        GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
        v31 = GameModeEntity;
        if ( GameModeEntity != 0
          && GameModeEntity->m_AbilityTuningValueFilter.m_hFunction != 0
          && GameModeEntity->m_AbilityTuningValueFilter.m_hContext != 0 )
        {
          pMem = KeyValues::operator new(0x14u);
          KeyValues::KeyValues(pMem, "AbilityValueData");
          pFilterKV = pMem;
          HandleEntity = CEntityHandle::GetHandleEntity(&m_pAbility->m_hOwnerEntity.m_Value);
          if ( HandleEntity != 0 )
          {
            v33.m_Data = CEntityInstance::GetEntityIndex(HandleEntity).m_Data;
            KeyValues::SetInt(pFilterKV, "entindex_caster_const", v33.m_Data);
          }
          v34.m_Data = CEntityInstance::GetEntityIndex(m_pAbility).m_Data;
          KeyValues::SetInt(pFilterKV, "entindex_ability_const", v34.m_Data);
          KeyValues::SetString(pFilterKV, "value_name_const", pszKey);
          KeyValues::SetFloat(pFilterKV, "value", v35);
          if ( VScriptFilter::RunScriptFilter(v31 + 63, &pFilterKV) )
          {
            v37 = SpecialAbility->m_FieldType;
            if ( v37 == fieldtype_t::FIELD_FLOAT )
            {
              Float = KeyValues::GetFloat(pFilterKV, "value", v36);
            }
            else if ( v37 == fieldtype_t::FIELD_INTEGER )
            {
              Int = KeyValues::GetInt(pFilterKV, "value", Int);
            }
          }
          v38 = pFilterKV;
          if ( pFilterKV != 0 )
          {
            KeyValues::~KeyValues(pFilterKV);
            KeyValues::operator delete(v38);
          }
        }
        m_FieldType = SpecialAbility->m_FieldType;
      }
    }
  }
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
    return Float;
  result = 0;
  if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
    return Int;
  return result;
}


// CDOTABaseAbility_BotScript::GetSpecialValueFloat  (line 183, @0x00000000024391a0, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Get, GetCaster, GetEffectiveLevel, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetInt, GetLevelSpecialValueFor<float>, GetOwnerEntity, GetSerialNumber, HasAbilityTuningValueFilter, HasScriptFilter, IndexToIdentity, Init, IsConsideredHero, IsValid, LookupEntity, RunAbilityTuningValueFilter, entindex, operator float, operator int
// calls: CDOTABaseAbility::GetSpecialAbility, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityHandle::GetHandleEntity, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat, VScriptFilter::RunScriptFilter, KeyValues::GetInt, KeyValues::~KeyValues (16 total)
// strings: "AbilityValueData", "entindex_caster_const", "entindex_ability_const", "value_name_const"
float __fastcall CDOTABaseAbility_BotScript::GetSpecialValueFloat(
        const CDOTABaseAbility_BotScript *const this,
        const char *pszKey)
{
  CDOTABaseAbility *m_pAbility; // rbx
  int m_Value; // eax
  int v4; // r15d
  DOTASpecialAbility_t *SpecialAbility; // r12
  uint32 m_Index; // edx
  uint32 v8; // esi
  unsigned __int16 v9; // cx
  int v10; // r8d
  int v11; // eax
  CEntityIdentity *v12; // rdi
  CEntityIdentity *v13; // rdi
  CEntitySystem *v14; // rdi
  uint32 v15; // ecx
  int m_nCount; // eax
  fieldtype_t m_FieldType; // edx
  int Int; // r15d
  unsigned __int16 v19; // cx
  int v20; // r8d
  CEntityIdentity *v21; // rcx
  CEntityIdentity *v22; // rcx
  float result; // xmm0_4
  fieldtype_t *v24; // r15
  __int16 v25; // ax
  int v26; // r15d
  fieldtype_t *v27; // r15
  float v28; // xmm0_4
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v30; // r14
  const CEntityInstance *HandleEntity; // rax
  CEntityIndex v32; // eax
  CEntityIndex v33; // eax
  float v34; // xmm1_4
  float v35; // xmm1_4
  fieldtype_t v36; // eax
  KeyValues *v37; // rbx
  CDOTA_BaseNPC *m_pInstance; // rdi
  KeyValues *pMem; // [rsp+0h] [rbp-60h]
  float Float; // [rsp+Ch] [rbp-54h]
  float pflMultiply; // [rsp+18h] [rbp-48h] BYREF
  float pflAdd; // [rsp+1Ch] [rbp-44h] BYREF
  KeyValues *pFilterKV; // [rsp+20h] [rbp-40h] BYREF

  m_pAbility = this->m_pAbility;
  m_Value = m_pAbility->m_iLevel.m_Value;
  v4 = m_Value - 1;
  if ( m_Value == 0 )
    return 0.0;
  SpecialAbility = CDOTABaseAbility::GetSpecialAbility(this->m_pAbility, pszKey);
  if ( SpecialAbility == 0 )
    return 0.0;
  m_Index = m_pAbility->m_hOwnerEntity.m_Value.m_Index;
  pflMultiply = 1.0;
  pflAdd = 0.0;
  v8 = m_Index >> 15;
  if ( m_Index == -1 )
  {
    v9 = 0x7FFF;
    v10 = 0x7FFF;
  }
  else
  {
    v9 = m_pAbility->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v10 = v9;
  }
  v11 = (v8 << 15) | v9 & 0x7FFF;
  LODWORD(pFilterKV) = v11;
  if ( (v11 + 2) > 1
    && (v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9]) != 0
    && (v13 = &v12[v10 & 0x1FF]) != 0
    && v11 == v13->m_EHandle.m_Index
    && (m_pInstance = v13->m_pInstance) != 0 )
  {
    CDOTA_BaseNPC::GetAbilityModifierValues(m_pInstance, pszKey, &pflMultiply, &pflAdd);
    v15 = m_pAbility->m_hOwnerEntity.m_Value.m_Index;
    v14 = g_pEntitySystem;
    v8 = v15 >> 15;
  }
  else
  {
    v14 = g_pEntitySystem;
    v15 = m_Index;
  }
  m_nCount = SpecialAbility->m_nCount;
  if ( v4 >= m_nCount )
    v4 = m_nCount - 1;
  m_FieldType = SpecialAbility->m_FieldType;
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
  {
    v27 = &SpecialAbility->m_FieldType + 4 * v4;
    if ( *(v27 + 8) == 34 )
      v28 = *(v27 + 1);
    else
      v28 = *(v27 + 2);
    Int = 0;
    Float = (v28 * pflMultiply) + pflAdd;
  }
  else
  {
    if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
    {
      v24 = &SpecialAbility->m_FieldType + 4 * v4;
      v25 = *(v24 + 8);
      if ( v25 == 1 )
      {
        v26 = *(v24 + 2);
      }
      else if ( v25 == 34 )
      {
        v26 = *(v24 + 1);
      }
      else
      {
        v26 = *(v24 + 2);
      }
      Float = 0.0;
      Int = ((v26 * pflMultiply) + pflAdd);
      if ( v15 != -1 )
        goto LABEL_16;
LABEL_30:
      v19 = 0x7FFF;
      v20 = 0x7FFF;
      goto LABEL_17;
    }
    Int = 0;
    Float = 0.0;
  }
  if ( v15 == -1 )
    goto LABEL_30;
LABEL_16:
  v19 = m_pAbility->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
  v20 = v19;
LABEL_17:
  LOWORD(pFilterKV) = v19 | pFilterKV & 0x8000;
  LODWORD(pFilterKV) = (v8 << 15) | pFilterKV & 0x7FFF;
  if ( (pFilterKV + 2) > 1 )
  {
    v21 = v14->m_EntityList.m_pIdentityChunks[v20 >> 9];
    if ( v21 != 0 )
    {
      v22 = &v21[v20 & 0x1FF];
      if ( v22 != 0
        && pFilterKV == v22->m_EHandle.m_Index
        && v22->m_pInstance != 0
        && (v22->m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0
        && g_pGameRules != 0 )
      {
        GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
        v30 = GameModeEntity;
        if ( GameModeEntity != 0
          && GameModeEntity->m_AbilityTuningValueFilter.m_hFunction != 0
          && GameModeEntity->m_AbilityTuningValueFilter.m_hContext != 0 )
        {
          pMem = KeyValues::operator new(0x14u);
          KeyValues::KeyValues(pMem, "AbilityValueData");
          pFilterKV = pMem;
          HandleEntity = CEntityHandle::GetHandleEntity(&m_pAbility->m_hOwnerEntity.m_Value);
          if ( HandleEntity != 0 )
          {
            v32.m_Data = CEntityInstance::GetEntityIndex(HandleEntity).m_Data;
            KeyValues::SetInt(pFilterKV, "entindex_caster_const", v32.m_Data);
          }
          v33.m_Data = CEntityInstance::GetEntityIndex(m_pAbility).m_Data;
          KeyValues::SetInt(pFilterKV, "entindex_ability_const", v33.m_Data);
          KeyValues::SetString(pFilterKV, "value_name_const", pszKey);
          KeyValues::SetFloat(pFilterKV, "value", v34);
          if ( VScriptFilter::RunScriptFilter(v30 + 63, &pFilterKV) )
          {
            v36 = SpecialAbility->m_FieldType;
            if ( v36 == fieldtype_t::FIELD_FLOAT )
            {
              Float = KeyValues::GetFloat(pFilterKV, "value", v35);
            }
            else if ( v36 == fieldtype_t::FIELD_INTEGER )
            {
              Int = KeyValues::GetInt(pFilterKV, "value", Int);
            }
          }
          v37 = pFilterKV;
          if ( pFilterKV != 0 )
          {
            KeyValues::~KeyValues(pFilterKV);
            KeyValues::operator delete(v37);
          }
        }
        m_FieldType = SpecialAbility->m_FieldType;
      }
    }
  }
  result = Float;
  if ( m_FieldType != fieldtype_t::FIELD_FLOAT )
  {
    if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
      return Int;
    return 0.0;
  }
  return result;
}


// CDOTABaseAbility_BotScript::GetBehavior  (line 188, @0x000000000241f490, libserver.so)
int __fastcall CDOTABaseAbility_BotScript::GetBehavior(const CDOTABaseAbility_BotScript *const this)
{
  return (*(this->m_pAbility->_vptr_IHandleEntity + 251))(this->m_pAbility);
}


// CDOTABaseAbility_BotScript::GetTargetTeam  (line 193, @0x000000000242e630, libserver.so)  // inlines: GetAbilityData, GetAbilityTargetTeam
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility_BotScript::GetTargetTeam(const CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbility = this->m_pAbility;
  m_pAbilityData = m_pAbility->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityTargetTeam;
  CDOTABaseAbility::LoadAbilityData(this->m_pAbility, 0);
  return m_pAbility->m_pAbilityData->m_iAbilityTargetTeam;
}


// CDOTABaseAbility_BotScript::GetTargetType  (line 198, @0x000000000241f4b0, libserver.so)
int __fastcall CDOTABaseAbility_BotScript::GetTargetType(const CDOTABaseAbility_BotScript *const this)
{
  return (*(this->m_pAbility->_vptr_IHandleEntity + 252))(this->m_pAbility);
}


// CDOTABaseAbility_BotScript::GetTargetFlags  (line 203, @0x000000000242e5e0, libserver.so)  // inlines: GetAbilityData, GetAbilityTargetFlags
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility_BotScript::GetTargetFlags(const CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbility = this->m_pAbility;
  m_pAbilityData = m_pAbility->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityTargetFlags;
  CDOTABaseAbility::LoadAbilityData(this->m_pAbility, 0);
  return m_pAbility->m_pAbilityData->m_iAbilityTargetFlags;
}


// CDOTABaseAbility_BotScript::GetAbilityDamage  (line 208, @0x000000000242b7c0, libserver.so)
// calls: CDOTABaseAbility_BotScript::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "GetAbilityDamage", "'%s' called on an entity that is not a teammate!\n"
int __fastcall CDOTABaseAbility_BotScript::GetAbilityDamage(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::IsMyScriptTeam(this) )
    return (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  DevWarning("'%s' called on an entity that is not a teammate!\n", "GetAbilityDamage");
  return -1;
}


// CDOTABaseAbility_BotScript::GetDamageType  (line 215, @0x000000000242e1d0, libserver.so)  // inlines: GetAbilityDamageType, GetAbilityData
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility_BotScript::GetDamageType(const CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_pAbility = this->m_pAbility;
  m_pAbilityData = m_pAbility->m_pAbilityData;
  if ( m_pAbilityData != 0 )
    return m_pAbilityData->m_iAbilityDamageType;
  CDOTABaseAbility::LoadAbilityData(this->m_pAbility, 0);
  return m_pAbility->m_pAbilityData->m_iAbilityDamageType;
}


// CDOTABaseAbility_BotScript::GetManaCost  (line 220, @0x000000000242bbe0, libserver.so)
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetManaCost", "'%s' called on an entity that cannot be seen!\n"
int __fastcall CDOTABaseAbility_BotScript::GetManaCost(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetManaCost");
  return -1;
}


// CDOTABaseAbility_BotScript::GetChannelledManaCostPerSecond  (line 227, @0x000000000242bc40, libserver.so)
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetChannelledManaCostPerSecond", "'%s' called on an entity that cannot be seen!\n"
int __fastcall CDOTABaseAbility_BotScript::GetChannelledManaCostPerSecond(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return (*(this->m_pAbility->_vptr_IHandleEntity + 275))(this->m_pAbility, 0xFFFFFFFFLL);
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetChannelledManaCostPerSecond");
  return -1;
}


// CDOTABaseAbility_BotScript::ProcsMagicStick  (line 234, @0x000000000241f4d0, libserver.so)
bool __fastcall CDOTABaseAbility_BotScript::ProcsMagicStick(const CDOTABaseAbility_BotScript *const this)
{
  return (*(this->m_pAbility->_vptr_IHandleEntity + 239))(this->m_pAbility);
}


// CDOTABaseAbility_BotScript::IsPassive  (line 239, @0x000000000241f4f0, libserver.so)  // inlines: IsPassive
bool __fastcall CDOTABaseAbility_BotScript::IsPassive(const CDOTABaseAbility_BotScript *const this)
{
  return ((*(this->m_pAbility->_vptr_IHandleEntity + 251))(this->m_pAbility) & 2) != 0;
}


// CDOTABaseAbility_BotScript::IsToggle  (line 244, @0x000000000241f510, libserver.so)  // inlines: IsToggle
bool __fastcall CDOTABaseAbility_BotScript::IsToggle(const CDOTABaseAbility_BotScript *const this)
{
  return ((*(this->m_pAbility->_vptr_IHandleEntity + 251))(this->m_pAbility) & 0x200) != 0;
}


// CDOTABaseAbility_BotScript::IsHidden  (line 249, @0x000000000242bee0, libserver.so)  // inlines: IsHidden
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "IsHidden", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsHidden(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_bHidden.m_Value;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "IsHidden");
  return 0;
}


// CDOTABaseAbility_BotScript::IsActivated  (line 256, @0x000000000242bf30, libserver.so)  // inlines: IsActivated
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "IsActivated", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsActivated(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_bActivated.m_Value;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "IsActivated");
  return 0;
}


// CDOTABaseAbility_BotScript::IsItem  (line 263, @0x000000000241f530, libserver.so)
bool __fastcall CDOTABaseAbility_BotScript::IsItem(const CDOTABaseAbility_BotScript *const this)
{
  return (*(this->m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility);
}


// CDOTABaseAbility_BotScript::IsCooldownReady  (line 268, @0x000000000242b820, libserver.so)
// calls: CDOTABaseAbility_BotScript::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "IsCooldownReady", "'%s' called on an entity that is not a teammate!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsCooldownReady(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::IsMyScriptTeam(this) )
    return (*(this->m_pAbility->_vptr_IHandleEntity + 245))(this->m_pAbility);
  DevWarning("'%s' called on an entity that is not a teammate!\n", "IsCooldownReady");
  return 0;
}


// CDOTABaseAbility_BotScript::IsOwnersManaEnough  (line 275, @0x000000000242c390, libserver.so)
// calls: CDOTABaseAbility_BotScript::CanBeSeen, CDOTABaseAbility::IsOwnersManaEnough, DevWarning(char const*,...)
// strings: "IsOwnersManaEnough", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsOwnersManaEnough(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return CDOTABaseAbility::IsOwnersManaEnough(this->m_pAbility);
  DevWarning("'%s' called on an entity that cannot be seen!\n", "IsOwnersManaEnough");
  return 0;
}


// CDOTABaseAbility_BotScript::IsFullyCastable  (line 282, @0x000000000242c310, libserver.so)  // inlines: IsFullyCastable
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...), CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// strings: "IsFullyCastable", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsFullyCastable(const CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx

  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
  {
    m_pAbility = this->m_pAbility;
    return m_pAbility->m_iLevel.m_Value > 0
        && (*(m_pAbility->_vptr_IHandleEntity + 245))(m_pAbility) != 0
        && CDOTABaseAbility::IsOwnersManaEnough(m_pAbility)
        && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbility, -1);
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsFullyCastable");
    return 0;
  }
}


// CDOTABaseAbility_BotScript::GetAutoCastState  (line 289, @0x000000000242bf80, libserver.so)  // inlines: GetAutoCastState
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetAutoCastState", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::GetAutoCastState(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_bAutoCastState.m_Value;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetAutoCastState");
  return 0;
}


// CDOTABaseAbility_BotScript::ToggleAutoCast  (line 296, @0x000000000242b640, libserver.so)  // inlines: NetworkStateChanged, Set, ToggleAutoCast, operator=<bool>
// calls: CDOTABaseAbility_BotScript::IsMyScript, DevWarning(char const*,...)
// strings: "ToggleAutoCast", "'%s' called on an entity that isn't itself!\n"
void __fastcall CDOTABaseAbility_BotScript::ToggleAutoCast(CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx
  bool v3; // r12

  if ( CDOTABaseAbility_BotScript::IsMyScript(this) )
  {
    m_pAbility = this->m_pAbility;
    v3 = !m_pAbility->m_bAutoCastState.m_Value;
    if ( m_pAbility->m_bAutoCastState.m_Value != v3 )
    {
      (*(m_pAbility->_vptr_IHandleEntity + 22))(m_pAbility, 836, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_pAbility->m_bAutoCastState.m_Value = v3;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that isn't itself!\n", "ToggleAutoCast");
  }
}


// CDOTABaseAbility_BotScript::GetCooldownTimeRemaining  (line 303, @0x000000000242b870, libserver.so)  // inlines: GetCooldownTimeRemaining
// calls: CDOTABaseAbility_BotScript::IsMyScriptTeam, DevWarning(char const*,...)
// strings: "GetCooldownTimeRemaining", "'%s' called on an entity that is not a teammate!\n"
float __fastcall CDOTABaseAbility_BotScript::GetCooldownTimeRemaining(const CDOTABaseAbility_BotScript *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx
  char v3; // al
  float result; // xmm0_4

  if ( CDOTABaseAbility_BotScript::IsMyScriptTeam(this) )
  {
    m_pAbility = this->m_pAbility;
    v3 = (*(m_pAbility->_vptr_IHandleEntity + 245))(m_pAbility);
    result = 0.0;
    if ( v3 == 0 )
      return m_pAbility->m_fCooldown.m_Value;
  }
  else
  {
    DevWarning("'%s' called on an entity that is not a teammate!\n", "GetCooldownTimeRemaining");
    return -1.0;
  }
  return result;
}


// CDOTABaseAbility_BotScript::GetToggleState  (line 310, @0x000000000242bfd0, libserver.so)  // inlines: GetToggleState
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetToggleState", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::GetToggleState(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_bToggleState.m_Value;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "GetToggleState");
  return 0;
}


// CDOTABaseAbility_BotScript::IsInAbilityPhase  (line 317, @0x000000000242c020, libserver.so)  // inlines: IsInAbilityPhase
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "IsInAbilityPhase", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsInAbilityPhase(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_bInAbilityPhase.m_Value;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "IsInAbilityPhase");
  return 0;
}


// CDOTABaseAbility_BotScript::IsChanneling  (line 324, @0x000000000242bca0, libserver.so)  // inlines: IsChanneling
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "IsChanneling", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsChanneling(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_bChanneling;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "IsChanneling");
  return 0;
}


// CDOTABaseAbility_BotScript::IsStealable  (line 331, @0x000000000241f550, libserver.so)
bool __fastcall CDOTABaseAbility_BotScript::IsStealable(const CDOTABaseAbility_BotScript *const this)
{
  return (*(this->m_pAbility->_vptr_IHandleEntity + 305))(this->m_pAbility);
}


// CDOTABaseAbility_BotScript::IsStolen  (line 336, @0x000000000242c070, libserver.so)  // inlines: IsStolen
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "IsStolen", "'%s' called on an entity that cannot be seen!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsStolen(const CDOTABaseAbility_BotScript *const this)
{
  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
    return this->m_pAbility->m_bStolen.m_Value;
  DevWarning("'%s' called on an entity that cannot be seen!\n", "IsStolen");
  return 0;
}


// CDOTABaseAbility_BotScript::GetInitialCharges  (line 345, @0x000000000242c0c0, libserver.so)  // inlines: GetInitialCharges, IsItem, ToDOTAItem
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetInitialCharges", "'%s' called on an entity that cannot be seen!\n", "'%s' called on an entity that isn't an item!\n"
int __fastcall CDOTABaseAbility_BotScript::GetInitialCharges(const CDOTABaseAbility_BotScript *const this)
{
  int *m_pAbility; // rbx

  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
  {
    if ( (*(this->m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    {
      m_pAbility = this->m_pAbility;
      if ( m_pAbility == 0 || (*(*m_pAbility + 1784LL))(m_pAbility) == 0 )
        m_pAbility = 0;
      return m_pAbility[235];
    }
    else
    {
      DevWarning("'%s' called on an entity that isn't an item!\n", "GetInitialCharges");
      return -1;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetInitialCharges");
    return -1;
  }
}


// CDOTABaseAbility_BotScript::GetCurrentCharges  (line 355, @0x000000000242c150, libserver.so)  // inlines: GetCurrentCharges, IsItem, ToDOTAItem
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetCurrentCharges", "'%s' called on an entity that cannot be seen!\n", "'%s' called on an entity that isn't an item!\n"
int __fastcall CDOTABaseAbility_BotScript::GetCurrentCharges(const CDOTABaseAbility_BotScript *const this)
{
  int *m_pAbility; // rbx

  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
  {
    if ( (*(this->m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    {
      m_pAbility = this->m_pAbility;
      if ( m_pAbility == 0 || (*(*m_pAbility + 1784LL))(m_pAbility) == 0 )
        m_pAbility = 0;
      return m_pAbility[243];
    }
    else
    {
      DevWarning("'%s' called on an entity that isn't an item!\n", "GetCurrentCharges");
      return -1;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetCurrentCharges");
    return -1;
  }
}


// CDOTABaseAbility_BotScript::GetSecondaryCharges  (line 365, @0x000000000242c1e0, libserver.so)  // inlines: GetSecondaryCharges, IsItem, ToDOTAItem
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "GetSecondaryCharges", "'%s' called on an entity that cannot be seen!\n", "'%s' called on an entity that isn't an item!\n"
int __fastcall CDOTABaseAbility_BotScript::GetSecondaryCharges(const CDOTABaseAbility_BotScript *const this)
{
  int *m_pAbility; // rbx

  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
  {
    if ( (*(this->m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    {
      m_pAbility = this->m_pAbility;
      if ( m_pAbility == 0 || (*(*m_pAbility + 1784LL))(m_pAbility) == 0 )
        m_pAbility = 0;
      return m_pAbility[244];
    }
    else
    {
      DevWarning("'%s' called on an entity that isn't an item!\n", "GetSecondaryCharges");
      return -1;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetSecondaryCharges");
    return -1;
  }
}


// CDOTABaseAbility_BotScript::CanBeDisassembled  (line 377, @0x000000000242bcf0, libserver.so)  // inlines: IsItem, ToDOTAItem
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...), CDOTA_Item::GetDisassembleRule, CDOTA_Item::IsInFreeDisassembleTime
// strings: "CanBeDisassembled", "'%s' called on an entity that cannot be seen!\n", "'%s' called on an entity that isn't an item!\n"
bool __fastcall CDOTABaseAbility_BotScript::CanBeDisassembled(const CDOTABaseAbility_BotScript *const this)
{
  CDOTA_Item *m_pAbility; // r12
  char v3; // bl

  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
  {
    if ( (*(this->m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    {
      m_pAbility = this->m_pAbility;
      if ( m_pAbility == 0 )
        return 0;
      v3 = (*(m_pAbility->_vptr_IHandleEntity + 223))(m_pAbility);
      if ( v3 == 0 )
        return 0;
      if ( CDOTA_Item::GetDisassembleRule(m_pAbility) == EItemDisassembleRule::ITEM_DISASSEMBLE_ALWAYS )
        return v3;
      return CDOTA_Item::IsInFreeDisassembleTime(m_pAbility);
    }
    else
    {
      DevWarning("'%s' called on an entity that isn't an item!\n", "CanBeDisassembled");
      return 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "CanBeDisassembled");
    return 0;
  }
}


// CDOTABaseAbility_BotScript::IsCombineLocked  (line 391, @0x000000000242c270, libserver.so)  // inlines: IsCombineLocked, IsItem, ToDOTAItem
// calls: CDOTABaseAbility_BotScript::CanBeSeen, DevWarning(char const*,...)
// strings: "IsCombineLocked", "'%s' called on an entity that cannot be seen!\n", "'%s' called on an entity that isn't an item!\n"
bool __fastcall CDOTABaseAbility_BotScript::IsCombineLocked(const CDOTABaseAbility_BotScript *const this)
{
  bool *m_pAbility; // rbx

  if ( CDOTABaseAbility_BotScript::CanBeSeen(this) )
  {
    if ( (*(this->m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    {
      m_pAbility = this->m_pAbility;
      return m_pAbility != 0 && (*(*m_pAbility + 1784LL))(this->m_pAbility) != 0 && m_pAbility[980];
    }
    else
    {
      DevWarning("'%s' called on an entity that isn't an item!\n", "IsCombineLocked");
      return 0;
    }
  }
  else
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "IsCombineLocked");
    return 0;
  }
}


// CDOTABaseAbility_BotScript::GetPowerTreadsStat  (line 405, @0x000000000242bda0, libserver.so)  // inlines: IsItem, ToDOTAItem
// calls: CDOTABaseAbility_BotScript::CanBeSeen, GetPowerTreadsStat, DevWarning(char const*,...)
// strings: "GetPowerTreadsStat", "'%s' called on an entity that cannot be seen!\n", "'%s' called on an entity that isn't an item!\n"
int __fastcall CDOTABaseAbility_BotScript::GetPowerTreadsStat(const CDOTABaseAbility_BotScript *const this)
{
  CDOTA_Item *m_pAbility; // rbx

  if ( !CDOTABaseAbility_BotScript::CanBeSeen(this) )
  {
    DevWarning("'%s' called on an entity that cannot be seen!\n", "GetPowerTreadsStat");
    return -1;
  }
  if ( (*(this->m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
  {
    DevWarning("'%s' called on an entity that isn't an item!\n", "GetPowerTreadsStat");
    return -1;
  }
  m_pAbility = this->m_pAbility;
  if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(m_pAbility) != 0 )
    return GetPowerTreadsStat(m_pAbility);
  else
    return GetPowerTreadsStat(0);
}


