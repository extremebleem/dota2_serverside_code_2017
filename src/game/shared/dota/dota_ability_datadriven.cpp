// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_ability_datadriven.cpp:12
class C_CDOTA_Ability_DataDriven_MapInstall {
	C_CDOTA_Ability_DataDriven_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_DataDriven::YouForgotToImplementOrDeclareServerClass  (line 12, @0x000000000241f310, libserver.so)
int __fastcall CDOTA_Ability_DataDriven::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_DataDriven *const this)
{
  return 0;
}


// CDOTA_Ability_DataDriven::GetServerClass  (line 12, @0x0000000002422fb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DataDriven::GetServerClass(CDOTA_Ability_DataDriven *const this)
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


// CDOTA_Ability_DataDriven::CDOTA_Ability_DataDriven  (line 20, @0x0000000002430450, libserver.so)  // inlines: CDOTA_ActionRunner, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::CDOTABaseAbility
// callers: CDOTA_Ability_DataDriven::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Ability_DataDriven::CDOTA_Ability_DataDriven(CDOTA_Ability_DataDriven *const this)
{
  CDOTABaseAbility::CDOTABaseAbility(this);
  this->m_pCaster = 0;
  this->m_bProcsMagicStick = 0;
  this->m_CastAnimation = -1;
  this->m_ModifierKVDescriptions.m_Size = 0;
  this->m_pEventContext = &CModifierParams::s_Default;
  this->_vptr_IHandleEntity = &off_40D54B0;
  this->_vptr_CDOTA_ActionRunner = &off_40D5F50;
  this->m_ModifierKVDescriptions.m_Memory.m_pMemory = 0;
  this->m_ModifierKVDescriptions.m_Memory.m_nAllocationCount = 0;
  this->m_ModifierKVDescriptions.m_Memory.m_nGrowSize = 0;
  this->m_pOnChannelFinishKV = 0;
  this->m_pOnOwnerSpawnedKV = 0;
  this->m_pOnOwnerDiedKV = 0;
  this->m_pOnSpellStartKV = 0;
  this->m_pOnAbilityPhaseStartKV = 0;
  this->m_pOnAbilityPhaseInterruptedKV = 0;
  this->m_pOnToggleOnKV = 0;
  this->m_pOnToggleOffKV = 0;
  this->m_pOnCreatedKV = 0;
}


// CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven  (line 36, @0x00000000024303a0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_ActionRunner, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_ActionDelayer::RemoveDelayedActions, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<KeyValues*, int>::Purge
// callers: CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven
// globals: g_DOTA_ActionDelayer
void __fastcall CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven(CDOTA_Ability_DataDriven *const this)
{
  bool v2; // zf
  CUtlVectorBase<KeyValues*,CUtlMemory<KeyValues*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_ModifierKVDescriptions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40D54B0;
  this->_vptr_CDOTA_ActionRunner = &off_40D5F50;
  this->m_ModifierKVDescriptions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_ModifierKVDescriptions.m_Memory;
    CUtlMemory<KeyValues *,int>::Purge(&this->m_ModifierKVDescriptions.m_Memory);
    if ( (this->m_ModifierKVDescriptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<KeyValues *,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_ActionRunner = &off_40D6D30;
  CDOTA_ActionDelayer::RemoveDelayedActions(&g_DOTA_ActionDelayer, &this->CDOTA_ActionRunner);
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven  (line 36, @0x0000000002430430, libserver.so)
// calls: CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven(CDOTA_Ability_DataDriven *const this)
{
  CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DataDriven::GetModifierDataByIndex  (line 41, @0x00000000024251b0, libserver.so)  // inlines: operator[]
// callers: CDOTA_Orb_DataDriven::OnOrbImpact, CDOTA_Orb_DataDriven::OnOrbFire
KeyValues *__fastcall CDOTA_Ability_DataDriven::GetModifierDataByIndex(
        CDOTA_Ability_DataDriven *const this,
        int iIndex)
{
  KeyValues *result; // rax

  result = 0;
  if ( iIndex >= 0 && iIndex < this->m_ModifierKVDescriptions.m_Size )
    return this->m_ModifierKVDescriptions.m_Memory.m_pMemory[iIndex];
  return result;
}


// CDOTA_Ability_DataDriven::GetModifierDataIndexByName  (line 49, @0x00000000024251e0, libserver.so)
// calls: KeyValuesSystem, KeyValues::GetNameSymbol
// callers: CDOTA_Ability_DataDriven::LookupModifierCreateParameters, CDOTA_Modifier_DataDriven::ReadKeyValues_Aura
int __fastcall CDOTA_Ability_DataDriven::GetModifierDataIndexByName(
        CDOTA_Ability_DataDriven *const this,
        const char *pszName)
{
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // rbx

  if ( pszName == 0 )
    return -1;
  v4 = KeyValuesSystem();
  v5 = (*(*v4 + 16LL))(v4, pszName, 1);
  if ( this->m_ModifierKVDescriptions.m_Size <= 0 )
    return -1;
  v6 = 0;
  while ( KeyValues::GetNameSymbol(this->m_ModifierKVDescriptions.m_Memory.m_pMemory[v6]).nIndex != v5 )
  {
    if ( this->m_ModifierKVDescriptions.m_Size <= ++v6 )
      return -1;
  }
  return v6;
}


// CDOTA_Ability_DataDriven::GetChannelTime  (line 65, @0x00000000024375e0, libserver.so)  // inlines: Float, GetAbilityData, GetAbilityKeyValues, operator float, ~CVariantBase
// calls: KeyValues::FindKey, KeyValues::GetString, CDOTABaseAbility::GetChannelTime, CVariantBase<CVariantDefaultAllocator>::Free, CDOTABaseAbility::LoadAbilityData
// strings: "AbilityChannelTime"
float __fastcall CDOTA_Ability_DataDriven::GetChannelTime(CDOTA_Ability_DataDriven *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  KeyValues *m_pKVData; // rbx
  const char *String; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  float m_float; // xmm0_4
  float v9; // [rsp+Ch] [rbp-24h]
  ScriptVariant_t symbolValue; // [rsp+10h] [rbp-20h] BYREF

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
      return CDOTABaseAbility::GetChannelTime(this);
  }
  m_pKVData = m_pAbilityData->m_pKVData;
  if ( m_pKVData == 0 )
    return CDOTABaseAbility::GetChannelTime(this);
  if ( KeyValues::FindKey(m_pAbilityData->m_pKVData, "AbilityChannelTime", 0) == 0 )
    return CDOTABaseAbility::GetChannelTime(this);
  String = KeyValues::GetString(m_pKVData, "AbilityChannelTime", "0", 0, 0);
  if ( String == 0 || *String != 37 )
    return CDOTABaseAbility::GetChannelTime(this);
  (*(this->_vptr_IHandleEntity + 333))(&symbolValue, this, String + 1);
  v6 = (symbolValue.m_type - 1);
  if ( v6 > 0x24 || (v7 = 0x1302000051LL, !_bittest64(&v7, v6)) )
  {
    CVariantBase<CVariantDefaultAllocator>::Free(&symbolValue);
    return CDOTABaseAbility::GetChannelTime(this);
  }
  m_float = symbolValue.m_float;
  if ( symbolValue.m_type == 34 )
    m_float = symbolValue.m_float64;
  v9 = m_float;
  CVariantBase<CVariantDefaultAllocator>::Free(&symbolValue);
  return v9;
}


// CDOTA_Ability_DataDriven::CastFilterResult  (line 83, @0x000000000242e7d0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Ability_DataDriven::CastFilterResult(CDOTA_Ability_DataDriven *const this, CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  unsigned __int16 v5; // dx
  int v6; // esi
  CDOTA_BaseNPC *m_pInstance; // rcx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( !this->m_bCastFilterRejectCaster )
      return 0;
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v6 = v5;
    }
    m_pInstance = 0;
    v8 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
    if ( v8 + 2 > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v6 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    result = 23;
    if ( pTarget != m_pInstance )
      return 0;
  }
  return result;
}


// CDOTA_Ability_DataDriven::GetCustomCastError  (line 95, @0x00000000024215f0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// strings: "#dota_hud_error_cant_cast_on_self", "CUSTOM ERROR"
const char *__fastcall CDOTA_Ability_DataDriven::GetCustomCastError(
        CDOTA_Ability_DataDriven *const this,
        CDOTA_BaseNPC *pTarget)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // edi
  __int16 v5; // ax
  uint32 v6; // edx
  CDOTA_BaseNPC *m_pInstance; // rcx
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const char *result; // rax
  __int64 v12; // [rsp-8h] [rbp-8h]

  if ( !this->m_bCastFilterRejectCaster )
    return "CUSTOM ERROR";
  v2 = this->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = v3 | *(&v12 - 2) & 0x8000;
  v6 = v2;
  m_pInstance = 0;
  *(&v12 - 8) = v5;
  v8 = (v6 << 15) | *(&v12 - 2) & 0x7FFF;
  *(&v12 - 4) = v8;
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
  result = "#dota_hud_error_cant_cast_on_self";
  if ( pTarget != m_pInstance )
    return "CUSTOM ERROR";
  return result;
}


// CDOTA_Ability_DataDriven::GetCastRange  (line 106, @0x00000000024374a0, libserver.so)  // inlines: GetAbilityData, GetAbilityKeyValues, Int, operator int, ~CVariantBase
// calls: KeyValues::FindKey, KeyValues::GetString, CDOTABaseAbility::GetCastRange, CVariantBase<CVariantDefaultAllocator>::Free, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_DataDriven::GetCastRange(
        CDOTA_Ability_DataDriven *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  KeyValues *m_pKVData; // rbx
  const char *String; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  int m_float; // eax
  int v13; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t symbolValue; // [rsp+10h] [rbp-30h] BYREF

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
      return CDOTABaseAbility::GetCastRange(this, vLocation, pTarget);
  }
  m_pKVData = m_pAbilityData->m_pKVData;
  if ( m_pKVData == 0 )
    return CDOTABaseAbility::GetCastRange(this, vLocation, pTarget);
  if ( KeyValues::FindKey(m_pAbilityData->m_pKVData, "AbilityCastRange", 0) == 0 )
    return CDOTABaseAbility::GetCastRange(this, vLocation, pTarget);
  String = KeyValues::GetString(m_pKVData, "AbilityCastRange", "0", 0, 0);
  if ( String == 0 || *String != 37 )
    return CDOTABaseAbility::GetCastRange(this, vLocation, pTarget);
  (*(this->_vptr_IHandleEntity + 333))(&symbolValue, this, String + 1);
  v10 = (symbolValue.m_type - 1);
  if ( v10 > 0x24 || (v11 = 0x1302000051LL, !_bittest64(&v11, v10)) )
  {
    CVariantBase<CVariantDefaultAllocator>::Free(&symbolValue);
    return CDOTABaseAbility::GetCastRange(this, vLocation, pTarget);
  }
  if ( symbolValue.m_type == 1 )
  {
    m_float = symbolValue.m_float;
  }
  else
  {
    m_float = symbolValue.m_int;
    if ( symbolValue.m_type == 34 )
      m_float = symbolValue.m_float64;
  }
  v13 = m_float;
  CVariantBase<CVariantDefaultAllocator>::Free(&symbolValue);
  return v13;
}


// CDOTA_Ability_DataDriven::Precache  (line 125, @0x0000000002455210, libserver.so)
// calls: CDOTABaseAbility::Precache, CDOTA_Ability_DataDriven::ReadKeyValues, CDOTA_ActionRunner::PrecacheActions, CDOTA_Modifier_DataDriven::Precache
void __fastcall CDOTA_Ability_DataDriven::Precache(
        CDOTA_Ability_DataDriven *const this,
        const CEntityPrecacheContext *pContext)
{
  __int64 v4; // rbx

  v4 = 0;
  CDOTABaseAbility::Precache(this, pContext);
  CDOTA_Ability_DataDriven::ReadKeyValues(this);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnChannelFinishKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnChannelSucceededKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnChannelInterruptedKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnOwnerDiedKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnOwnerSpawnedKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnSpellStartKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnAbilityPhaseStartKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnAbilityPhaseInterruptedKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnToggleOnKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnToggleOffKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnAbilityPhaseStartKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnUpgradeKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnProjectileHitUnitKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnProjectileFinishKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnCreatedKV, pContext);
  if ( this->m_ModifierKVDescriptions.m_Size > 0 )
  {
    do
      CDOTA_Modifier_DataDriven::Precache(this->m_ModifierKVDescriptions.m_Memory.m_pMemory[v4++], pContext);
    while ( v4 < this->m_ModifierKVDescriptions.m_Size );
  }
}


// CDOTA_Ability_DataDriven::Spawn  (line 154, @0x00000000024518a0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, PerformActions
// calls: CDOTABaseAbility::Spawn, CDOTA_ActionRunner::PerformActions_Core
void __fastcall CDOTA_Ability_DataDriven::Spawn(
        CDOTA_Ability_DataDriven *const this,
        const CEntityKeyValues *pKeyValues)
{
  unsigned __int16 v3; // dx
  int v4; // esi
  CDOTA_BaseNPC *m_pInstance; // rcx
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12
  KeyValues *m_pOnCreatedKV; // rsi

  CDOTABaseAbility::Spawn(this, pKeyValues);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  m_pInstance = 0;
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v4 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  m_pEventContext = this->m_pEventContext;
  m_pCaster = this->m_pCaster;
  this->m_pCaster = m_pInstance;
  m_pOnCreatedKV = this->m_pOnCreatedKV;
  this->m_pEventContext = &CModifierParams::s_Default;
  CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnCreatedKV);
  this->m_pEventContext = m_pEventContext;
  this->m_pCaster = m_pCaster;
}


// CDOTA_Ability_DataDriven::ReadKeyValues  (line 193, @0x000000000244dd40, libserver.so)  // inlines: ActivityList_IndexForName, AddToTail, CopyConstruct<KeyValues*>, Element, GetAbilityData, GetAbilityKeyValues, GetBool, GrowMemory, operator[]
// calls: KeyValues::GetInt, KeyValues::GetFloat, KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, CUtlMemory<KeyValues*, int>::Grow, KeyValues::GetString, CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_DataDriven::Precache
// strings: "AbilityProcsMagicStick", "AbilitySharedWithTeammates", "OnChannelSucceeded", "OnChannelInterrupted", "OnToggleOn", "OnToggleOff" (10 total)
void __fastcall CDOTA_Ability_DataDriven::ReadKeyValues(CDOTA_Ability_DataDriven *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  KeyValues *m_pKVData; // r13
  float v4; // xmm1_4
  KeyValues *Key; // rax
  KeyValues *i; // rax
  KeyValues **v7; // rdx
  __int64 m_Size; // r12
  int v9; // edx
  const char *String; // rsi
  Activity v11; // eax
  KeyValues *pSubkey; // [rsp+8h] [rbp-28h]

  this->m_bProcsMagicStick = 0;
  m_pAbilityData = this->m_pAbilityData;
  this->m_pOnChannelFinishKV = 0;
  this->m_pOnChannelSucceededKV = 0;
  this->m_pOnChannelInterruptedKV = 0;
  this->m_pOnOwnerDiedKV = 0;
  this->m_pOnOwnerSpawnedKV = 0;
  this->m_pOnSpellStartKV = 0;
  this->m_pOnAbilityPhaseStartKV = 0;
  this->m_pOnAbilityPhaseInterruptedKV = 0;
  this->m_pOnToggleOnKV = 0;
  this->m_pOnToggleOffKV = 0;
  this->m_pOnUpgradeKV = 0;
  this->m_pOnProjectileHitUnitKV = 0;
  this->m_pOnProjectileFinishKV = 0;
  this->m_pOnCreatedKV = 0;
  this->m_fAnimationPlaybackRate = 1.0;
  this->m_fAOERadius = 0.0;
  if ( m_pAbilityData != 0 || (CDOTABaseAbility::LoadAbilityData(this, 0), (m_pAbilityData = this->m_pAbilityData) != 0) )
  {
    m_pKVData = m_pAbilityData->m_pKVData;
    if ( m_pKVData != 0 )
    {
      this->m_bProcsMagicStick = KeyValues::GetInt(m_pAbilityData->m_pKVData, "AbilityProcsMagicStick", 0) != 0;
      this->m_bIsSharedWithTeammates = KeyValues::GetInt(m_pKVData, "AbilitySharedWithTeammates", 0) != 0;
      this->m_bCastFilterRejectCaster = KeyValues::GetInt(m_pKVData, "CastFilterRejectCaster", 0) != 0;
      this->m_fAnimationPlaybackRate = KeyValues::GetFloat(m_pKVData, "AnimationPlaybackRate", v4);
      Key = KeyValues::FindKey(m_pKVData, "Modifiers", 0);
      if ( Key != 0 )
      {
        for ( i = KeyValues::GetFirstTrueSubKey(Key); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
        {
          m_Size = this->m_ModifierKVDescriptions.m_Size;
          v9 = this->m_ModifierKVDescriptions.m_Size;
          if ( m_Size == this->m_ModifierKVDescriptions.m_Memory.m_nAllocationCount )
          {
            pSubkey = i;
            CUtlMemory<KeyValues *,int>::Grow(&this->m_ModifierKVDescriptions.m_Memory, 1);
            v9 = this->m_ModifierKVDescriptions.m_Size;
            i = pSubkey;
          }
          this->m_ModifierKVDescriptions.m_Size = v9 + 1;
          v7 = &this->m_ModifierKVDescriptions.m_Memory.m_pMemory[m_Size];
          if ( v7 != 0 )
            *v7 = i;
        }
      }
      this->m_pOnChannelFinishKV = KeyValues::FindKey(m_pKVData, "OnChannelFinish", 0);
      this->m_pOnChannelSucceededKV = KeyValues::FindKey(m_pKVData, "OnChannelSucceeded", 0);
      this->m_pOnChannelInterruptedKV = KeyValues::FindKey(m_pKVData, "OnChannelInterrupted", 0);
      this->m_pOnToggleOnKV = KeyValues::FindKey(m_pKVData, "OnToggleOn", 0);
      this->m_pOnToggleOffKV = KeyValues::FindKey(m_pKVData, "OnToggleOff", 0);
      this->m_pOnSpellStartKV = KeyValues::FindKey(m_pKVData, "OnSpellStart", 0);
      this->m_pOnAbilityPhaseStartKV = KeyValues::FindKey(m_pKVData, "OnAbilityPhaseStart", 0);
      this->m_pOnAbilityPhaseInterruptedKV = KeyValues::FindKey(m_pKVData, "OnAbilityPhaseInterrupted", 0);
      this->m_pOnOwnerDiedKV = KeyValues::FindKey(m_pKVData, "OnOwnerDied", 0);
      this->m_pOnOwnerSpawnedKV = KeyValues::FindKey(m_pKVData, "OnOwnerSpawned", 0);
      this->m_pOnUpgradeKV = KeyValues::FindKey(m_pKVData, "OnUpgrade", 0);
      this->m_pOnProjectileHitUnitKV = KeyValues::FindKey(m_pKVData, "OnProjectileHitUnit", 0);
      this->m_pOnProjectileFinishKV = KeyValues::FindKey(m_pKVData, "OnProjectileFinish", 0);
      this->m_pOnCreatedKV = KeyValues::FindKey(m_pKVData, "OnCreated", 0);
      String = KeyValues::GetString(m_pKVData, "AbilityCastAnimation", "", 0, 0);
      if ( String != 0 )
      {
        v11 = -1;
        if ( g_pAnimationSystem != 0 )
          v11 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, String);
        this->m_CastAnimation = v11;
      }
    }
  }
}


// CDOTA_Ability_DataDriven::LookupValueSymbol  (line 256, @0x000000000243a5b0, libserver.so)  // inlines: CEntityHandle, CVariantBase, DOTAGameRules, FStrEq, Free, Get, GetCaster, GetEffectiveLevel, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetInt, GetLevelSpecialValueFor<CVariantBase<CVariantDefaultAllocator> >, GetOwnerEntity, GetSerialNumber, HasAbilityTuningValueFilter, HasScriptFilter, IndexToIdentity, Init, IsConsideredHero, IsValid, LookupEntity, RunAbilityTuningValueFilter, _V_strcmp, entindex, operator float, operator int, strchr, ~CVariantBase
// calls: CDOTA_ActionRunner::LookupValueSymbol, strchr, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetDuration, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityHandle::GetHandleEntity, CEntityInstance::GetEntityIndex, KeyValues::SetInt (21 total)
// strings: "AbilityDuration", "AbilityGoldCost", "AbilityManaCost", "AbilityValueData", "entindex_caster_const", "entindex_ability_const" (7 total)
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Ability_DataDriven::LookupValueSymbol(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Ability_DataDriven *const this,
        const char *pszValue)
{
  CDOTA_ActionRunner *v3; // r15
  const char *v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  const char *v11; // rsi
  char *v12; // rdi
  bool v13; // zf
  __int64 v14; // rcx
  int m_Value; // eax
  int v16; // r15d
  uint32 m_Index; // edx
  uint32 v18; // esi
  unsigned __int16 v19; // cx
  int v20; // edi
  int v21; // eax
  CEntityIdentity *v22; // r8
  CEntityIdentity *v23; // rdi
  CEntitySystem *v24; // rdi
  uint32 v25; // eax
  int m_nCount; // edx
  int v27; // ecx
  bool v28; // cc
  fieldtype_t m_FieldType; // edx
  fieldtype_t *v30; // rcx
  __int16 v31; // r8
  int v32; // ecx
  int Int; // r15d
  unsigned __int16 v34; // cx
  int v35; // r8d
  CEntityIdentity *v36; // rsi
  CEntityIdentity *v37; // rcx
  int v38; // eax
  float Duration; // xmm0_4
  fieldtype_t *v40; // rcx
  float v41; // xmm0_4
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseGameMode *GameModeEntity; // rax
  const CEntityInstance *HandleEntity; // rax
  CEntityIndex v45; // eax
  CEntityIndex v46; // eax
  float v47; // xmm1_4
  float v48; // xmm1_4
  fieldtype_t v49; // eax
  KeyValues *v50; // r12
  KeyValues *pMem; // [rsp+0h] [rbp-80h]
  VScriptFilter *v52; // [rsp+8h] [rbp-78h]
  float Float; // [rsp+14h] [rbp-6Ch]
  DOTASpecialAbility_t *SpecialAbility; // [rsp+18h] [rbp-68h]
  float pflMultiply; // [rsp+28h] [rbp-58h] BYREF
  float pflAdd; // [rsp+2Ch] [rbp-54h] BYREF
  KeyValues *pFilterKV; // [rsp+30h] [rbp-50h] BYREF
  ScriptVariant_t v58; // [rsp+40h] [rbp-40h] BYREF

  v3 = &this->CDOTA_ActionRunner;
  CDOTA_ActionRunner::LookupValueSymbol(&v58, &this->CDOTA_ActionRunner, pszValue);
  if ( v58.m_type != 0 )
  {
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v58, a1);
    goto LABEL_5;
  }
  if ( pszValue == 0 )
  {
    a1->m_uint64 = 0;
    a1->m_type = 0;
    a1->m_flags = 0;
    goto LABEL_5;
  }
  if ( strchr(pszValue, 46) != 0 )
  {
    (*(this->_vptr_CDOTA_ActionRunner + 4))(a1, v3, pszValue);
    goto LABEL_5;
  }
  if ( pszValue == "AbilityDamage" || strcmp(pszValue, "AbilityDamage") == 0 )
  {
    v38 = (*(this->_vptr_IHandleEntity + 247))(this);
LABEL_53:
    a1->m_int = v38;
    a1->m_type = 5;
    a1->m_flags = 0;
    goto LABEL_5;
  }
  v8 = "AbilityDuration";
  v9 = pszValue == "AbilityDuration";
  if ( pszValue != "AbilityDuration" )
  {
    v10 = 16;
    v11 = pszValue;
    do
    {
      if ( v10 == 0 )
        break;
      v9 = *v11++ == *v8++;
      --v10;
    }
    while ( v9 );
    if ( !v9 )
    {
      v12 = "GetChannelTime";
      v13 = pszValue == "GetChannelTime";
      if ( pszValue != "GetChannelTime" )
      {
        v14 = 15;
        v11 = pszValue;
        do
        {
          if ( v14 == 0 )
            break;
          v13 = *v11++ == *v12++;
          --v14;
        }
        while ( v13 );
        if ( !v13 )
        {
          if ( pszValue == "AbilityGoldCost" || strcmp(pszValue, "AbilityGoldCost") == 0 )
          {
            v38 = (*(this->_vptr_IHandleEntity + 276))(this, 0xFFFFFFFFLL);
            goto LABEL_53;
          }
          if ( pszValue == "AbilityManaCost" || strcmp(pszValue, "AbilityManaCost") == 0 )
          {
            v38 = (*(this->_vptr_IHandleEntity + 273))(this, 0xFFFFFFFFLL);
            goto LABEL_53;
          }
          m_Value = this->m_iLevel.m_Value;
          v16 = m_Value - 1;
          if ( m_Value == 0 || (SpecialAbility = CDOTABaseAbility::GetSpecialAbility(this, pszValue)) == 0 )
          {
LABEL_59:
            a1->m_int = 0;
            a1->m_type = 5;
            a1->m_flags = 0;
            goto LABEL_5;
          }
          m_Index = this->m_hOwnerEntity.m_Value.m_Index;
          pflMultiply = 1.0;
          pflAdd = 0.0;
          v18 = m_Index >> 15;
          if ( m_Index == -1 )
          {
            v19 = 0x7FFF;
            v20 = 0x7FFF;
          }
          else
          {
            v19 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
            v20 = v19;
          }
          v21 = (v18 << 15) | v19 & 0x7FFF;
          LODWORD(pFilterKV) = v21;
          if ( (v21 + 2) > 1
            && (v22 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v20 >> 9]) != 0
            && (v23 = &v22[v20 & 0x1FF]) != 0
            && v21 == v23->m_EHandle.m_Index
            && (m_pInstance = v23->m_pInstance) != 0 )
          {
            CDOTA_BaseNPC::GetAbilityModifierValues(m_pInstance, pszValue, &pflMultiply, &pflAdd);
            v25 = this->m_hOwnerEntity.m_Value.m_Index;
            v18 = v25 >> 15;
            v24 = g_pEntitySystem;
          }
          else
          {
            v24 = g_pEntitySystem;
            v25 = m_Index;
          }
          m_nCount = SpecialAbility->m_nCount;
          v27 = m_nCount - 1;
          v28 = v16 < m_nCount;
          m_FieldType = SpecialAbility->m_FieldType;
          if ( !v28 )
            v16 = v27;
          if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
          {
            v40 = &SpecialAbility->m_FieldType + 4 * v16;
            if ( *(v40 + 8) == 34 )
              v41 = *(v40 + 1);
            else
              v41 = *(v40 + 2);
            Int = 0;
            Float = (v41 * pflMultiply) + pflAdd;
          }
          else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
          {
            v30 = &SpecialAbility->m_FieldType + 4 * v16;
            v31 = *(v30 + 8);
            if ( v31 == 1 )
            {
              v32 = *(v30 + 2);
            }
            else if ( v31 == 34 )
            {
              v32 = *(v30 + 1);
            }
            else
            {
              v32 = *(v30 + 2);
            }
            Float = 0.0;
            Int = ((v32 * pflMultiply) + pflAdd);
          }
          else
          {
            Int = 0;
            Float = 0.0;
          }
          if ( v25 == -1 )
          {
            v34 = 0x7FFF;
            v35 = 0x7FFF;
          }
          else
          {
            v34 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
            v35 = v34;
          }
          LOWORD(pFilterKV) = v34 | pFilterKV & 0x8000;
          LODWORD(pFilterKV) = (v18 << 15) | pFilterKV & 0x7FFF;
          if ( (pFilterKV + 2) > 1 )
          {
            v36 = v24->m_EntityList.m_pIdentityChunks[v35 >> 9];
            if ( v36 != 0 )
            {
              v37 = &v36[v35 & 0x1FF];
              if ( v37 != 0
                && pFilterKV == v37->m_EHandle.m_Index
                && v37->m_pInstance != 0
                && (v37->m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0
                && g_pGameRules != 0 )
              {
                GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
                v52 = GameModeEntity;
                if ( GameModeEntity != 0
                  && GameModeEntity->m_AbilityTuningValueFilter.m_hFunction != 0
                  && GameModeEntity->m_AbilityTuningValueFilter.m_hContext != 0 )
                {
                  pMem = KeyValues::operator new(0x14u);
                  KeyValues::KeyValues(pMem, "AbilityValueData");
                  pFilterKV = pMem;
                  HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
                  if ( HandleEntity != 0 )
                  {
                    v45.m_Data = CEntityInstance::GetEntityIndex(HandleEntity).m_Data;
                    KeyValues::SetInt(pFilterKV, "entindex_caster_const", v45.m_Data);
                  }
                  v46.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
                  KeyValues::SetInt(pFilterKV, "entindex_ability_const", v46.m_Data);
                  KeyValues::SetString(pFilterKV, "value_name_const", pszValue);
                  KeyValues::SetFloat(pFilterKV, "value", v47);
                  if ( VScriptFilter::RunScriptFilter(v52 + 63, &pFilterKV) )
                  {
                    v49 = SpecialAbility->m_FieldType;
                    if ( v49 == fieldtype_t::FIELD_FLOAT )
                    {
                      Float = KeyValues::GetFloat(pFilterKV, "value", v48);
                    }
                    else if ( v49 == fieldtype_t::FIELD_INTEGER )
                    {
                      Int = KeyValues::GetInt(pFilterKV, "value", Int);
                    }
                  }
                  v50 = pFilterKV;
                  if ( pFilterKV != 0 )
                  {
                    KeyValues::~KeyValues(pFilterKV);
                    KeyValues::operator delete(v50);
                  }
                }
                m_FieldType = SpecialAbility->m_FieldType;
              }
            }
          }
          if ( m_FieldType != fieldtype_t::FIELD_FLOAT )
          {
            if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
            {
              a1->m_int = Int;
              a1->m_type = 5;
              a1->m_flags = 0;
              goto LABEL_5;
            }
            goto LABEL_59;
          }
          a1->m_type = 1;
          a1->m_flags = 0;
          a1->m_float = Float;
LABEL_5:
          if ( (v58.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v58.m_uint64);
          return a1;
        }
      }
      (*(this->_vptr_IHandleEntity + 225))(this, v11);
      goto LABEL_56;
    }
  }
  Duration = CDOTABaseAbility::GetDuration(this);
LABEL_56:
  a1->m_float = Duration;
  a1->m_type = 1;
  a1->m_flags = 0;
  goto LABEL_5;
}


// CDOTA_Ability_DataDriven::FindNamedTarget  (line 299, @0x00000000024291e0, libserver.so)  // inlines: FStrEq, ToDOTABaseNPC, _V_strcmp
// calls: CDOTA_ActionRunner::FindNamedTarget, CDOTABaseAbility::GetCursorTarget
// strings: "CURSOR_TARGET"
CDOTA_BaseNPC *__fastcall CDOTA_Ability_DataDriven::FindNamedTarget(
        CDOTA_Ability_DataDriven *const this,
        const char *pszTargetName)
{
  CDOTA_BaseNPC *result; // rax

  if ( pszTargetName != "CURSOR_TARGET" && strcmp(pszTargetName, "CURSOR_TARGET") != 0 )
    return CDOTA_ActionRunner::FindNamedTarget(&this->CDOTA_ActionRunner, pszTargetName);
  result = CDOTABaseAbility::GetCursorTarget(this);
  if ( result == 0 || !result->m_bIsDOTANPC )
    return 0;
  return result;
}


// CDOTA_Ability_DataDriven::LookupModifierCreateParameters  (line 308, @0x0000000002425270, libserver.so)  // inlines: GetAbilityName
// calls: CDOTA_Ability_DataDriven::GetModifierDataIndexByName, KeyValues::SetString, DOTAGameManager, CDOTAGameManager::GetAbilityIndex, KeyValues::SetInt, KeyValues::GetString, KeyValues::SetFloat, CDOTA_ActionRunner::LookupModifierCreateParameters
// strings: "modifier_datadriven", "<NoAbilityName>", "dd_ability_index", "dd_index"
bool __fastcall CDOTA_Ability_DataDriven::LookupModifierCreateParameters(
        CDOTA_Ability_DataDriven *const this,
        KeyValues *pKV,
        const char *pszModifierName)
{
  int ModifierDataIndexByName; // eax
  __int64 v7; // r13
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v9; // r14
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v11; // rax
  unsigned __int16 AbilityIndex; // ax
  const char *String; // rax
  float v14; // xmm1_4

  ModifierDataIndexByName = CDOTA_Ability_DataDriven::GetModifierDataIndexByName(this, pszModifierName);
  v7 = ModifierDataIndexByName;
  if ( ModifierDataIndexByName < 0 )
    return CDOTA_ActionRunner::LookupModifierCreateParameters(&this->CDOTA_ActionRunner, pKV, pszModifierName);
  KeyValues::SetString(pKV, "BaseClass", "modifier_datadriven");
  m_pAbilityData = this->m_pAbilityData;
  v9 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v9 = m_pszAbilityName;
  }
  v11 = DOTAGameManager();
  AbilityIndex = CDOTAGameManager::GetAbilityIndex(v11, v9);
  KeyValues::SetInt(pKV, "dd_ability_index", AbilityIndex);
  KeyValues::SetInt(pKV, "dd_index", v7);
  String = KeyValues::GetString(this->m_ModifierKVDescriptions.m_Memory.m_pMemory[v7], "Duration", 0, 0, 0);
  if ( String != 0 )
  {
    (*(this->_vptr_CDOTA_ActionRunner + 2))(&this->CDOTA_ActionRunner, String, 0.0);
    KeyValues::SetFloat(pKV, "duration", v14);
  }
  return 1;
}


// CDOTA_Ability_DataDriven::RefreshIntrinsicModifier  (line 331, @0x0000000002420da0, libserver.so)  // inlines: GetBool, GetParent, SetAttributes, ToDOTABaseNPC
// calls: CDOTABaseAbility::RefreshIntrinsicModifier, CGameSceneNode::GetOwnerEntity, KeyValues::GetInt, KeyValues::GetName, KeyValues::KeyValues, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume, __stack_chk_fail
// strings: "modifier_datadriven"
CDOTA_Buff *__fastcall CDOTA_Ability_DataDriven::RefreshIntrinsicModifier(CDOTA_Ability_DataDriven *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  __int64 v4; // r13
  int v5; // r12d
  KeyValues **m_pMemory; // rax
  const KeyValues *v7; // rbx
  const char *Name; // rax
  const char *v9; // rdx
  const char *v10; // rax
  CDOTA_Buff *v11; // rax
  CDOTA_Buff *pResult; // [rsp+8h] [rbp-68h]
  CDOTA_BaseNPC *pCaster; // [rsp+10h] [rbp-60h]
  void (__fastcall *v15)(CDOTA_Ability_DataDriven *const, KeyValues *, const char *); // [rsp+18h] [rbp-58h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  pResult = CDOTABaseAbility::RefreshIntrinsicModifier(this);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    pCaster = OwnerEntity;
    if ( OwnerEntity != 0
      && OwnerEntity->m_bIsDOTANPC
      && this->m_iLevel.m_Value > 0
      && this->m_ModifierKVDescriptions.m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        m_pMemory = this->m_ModifierKVDescriptions.m_Memory.m_pMemory;
        v7 = m_pMemory[v4];
        if ( v7 != 0 && KeyValues::GetInt(m_pMemory[v4], "Passive", 0) != 0 )
        {
          Name = KeyValues::GetName(v7);
          KeyValues::KeyValues(&kv, Name);
          KeyValues::SetString(&kv, "BaseClass", "modifier_datadriven");
          v15 = *(this->_vptr_IHandleEntity + 336);
          v9 = KeyValues::GetName(v7);
          v15(this, &kv, v9);
          v10 = KeyValues::GetName(&kv);
          v11 = CDOTA_BaseNPC::AddNewModifier(pCaster, pCaster, this, v10, &kv, 0);
          if ( v11 != 0 )
            v11->m_iAttributes |= (*(v11->_vptr_CDOTA_Buff + 7))(v11) | 1;
          KeyValues::~KeyValues(&kv);
        }
        ++v5;
        ++v4;
      }
      while ( this->m_ModifierKVDescriptions.m_Size > v5 );
    }
  }
  return pResult;
}


// CDOTA_Ability_DataDriven::Script_ApplyDataDrivenModifier  (line 357, @0x0000000002434010, libserver.so)  // inlines: AssignTo, CVariantBase, HScriptToEntity<CBaseEntity>, SetBool, TempString, ToDOTABaseNPC, ToEnt, ToString, operator const Vector&, operator float, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, KeyValues::KeyValues, DevMsg(char const*,...), KeyValues::~KeyValues, Warning, CDOTA_BaseNPC::AddNewModifier, ToHScript, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::SetInt, KeyValues::SetFloat, UTIL_VarArgs, KeyValues::SetString (16 total)
// strings: "ApplyModifier", "%s - invalid modifier name specified.\n", "HSCRIPT argument unsupported in Script_ApplyDataDrivenModifier table\n", "Unsupported KeyValue type for key %s (type %s)\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n" (9 total)
// globals: jpt_243423F, jpt_24343FB, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_243468B
HSCRIPT __fastcall CDOTA_Ability_DataDriven::Script_ApplyDataDrivenModifier(
        CDOTA_Ability_DataDriven *const this,
        HSCRIPT hCaster,
        HSCRIPT hTarget,
        const char *pszModifierName,
        HSCRIPT hModifierTable)
{
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v11; // rax
  __int64 v12; // rax
  HSCRIPT v13; // rbx
  int v15; // ebx
  unsigned int v16; // r14d
  float v17; // xmm1_4
  const char *m_uint64; // r15
  CDOTA_Buff *v19; // rax
  const Vector *v20; // rax
  char *v21; // rax
  const char *v22; // r15
  const char *v23; // rsi
  const char *v24; // rax
  double m_float; // xmm0_8
  const char *v26; // rcx
  const char *v27; // rax
  double m_float64; // xmm0_8
  const char *v29; // rcx
  CDOTA_BaseNPC *v30; // [rsp+10h] [rbp-B0h]
  CBaseEntity *pCaster; // [rsp+18h] [rbp-A8h]
  int num_entries; // [rsp+3Ch] [rbp-84h]
  ScriptVariant_t vKey; // [rsp+50h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+60h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  if ( hCaster != 0
    && (v7 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v9 = v7(g_pScriptVM, hCaster, Script)) != 0)
    && *(v9 + 339) != 0 )
  {
    pCaster = v9;
  }
  else
  {
    pCaster = 0;
  }
  if ( hTarget == 0 )
    return 0;
  v10 = *(*g_pScriptVM + 208LL);
  v11 = GetScriptDesc<CEntityInstance>(0);
  v12 = v10(g_pScriptVM, hTarget, v11);
  v30 = v12;
  if ( v12 == 0 || *(v12 + 339) == 0 || pCaster == 0 || pszModifierName == 0 )
    return 0;
  KeyValues::KeyValues(&kv, "ApplyModifier");
  if ( (*(this->_vptr_IHandleEntity + 336))(this, &kv, pszModifierName) != 0 )
  {
    num_entries = (*(*g_pScriptVM + 280LL))(g_pScriptVM, hModifierTable);
    vKey.m_type = 0;
    vKey.m_flags = 0;
    vKey.m_uint64 = 0;
    vValue.m_type = 0;
    vValue.m_flags = 0;
    vValue.m_uint64 = 0;
    if ( num_entries > 0 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        v16 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hModifierTable, v16, &vKey, &vValue);
        if ( vKey.m_type == 30 )
        {
          m_uint64 = vKey.m_uint64;
        }
        else
        {
          switch ( vKey.m_type )
          {
            case 0:
              goto LABEL_39;
            case 1:
              m_float = vKey.m_float;
              goto LABEL_41;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8),
                *(vKey.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
              break;
            case 6:
              v26 = "true";
              if ( vKey.m_char == 0 )
                v26 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v26);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vKey.m_char,
                BYTE1(vKey.m_int),
                BYTE2(vKey.m_uint),
                HIBYTE(vKey.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vKey.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vKey.m_uint64);
              break;
            case 0x22:
              m_float = vKey.m_float64;
LABEL_41:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v24 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v24);
LABEL_39:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        switch ( vValue.m_type )
        {
          case 1:
          case 0x22:
            KeyValues::SetFloat(&kv, m_uint64, v17);
            break;
          case 3:
            v20 = vValue.m_uint64;
            if ( vValue.m_uint64 == 0 )
              v20 = &vec3_origin;
            v21 = UTIL_VarArgs("%f %f %f", v20->x, v20->y, v20->z);
            KeyValues::SetString(&kv, m_uint64, v21);
            break;
          case 5:
            KeyValues::SetInt(&kv, m_uint64, vValue.m_int);
            break;
          case 6:
            KeyValues::SetInt(&kv, m_uint64, vValue.m_char);
            break;
          case 0x1E:
            KeyValues::SetString(&kv, m_uint64, vValue.m_pszString);
            break;
          case 0x1F:
            Warning("HSCRIPT argument unsupported in Script_ApplyDataDrivenModifier table\n");
            break;
          default:
            v22 = VariantFieldTypeName(vValue.m_type);
            if ( vKey.m_type == 30 )
            {
              v23 = vKey.m_uint64;
            }
            else
            {
              switch ( vKey.m_type )
              {
                case 0:
                  goto LABEL_58;
                case 1:
                  m_float64 = vKey.m_float;
                  goto LABEL_60;
                case 3:
                case 0x27:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%g %g %g",
                    *vKey.m_pszString,
                    *(vKey.m_uint64 + 4),
                    *(vKey.m_uint64 + 8));
                  break;
                case 4:
                case 0x1B:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%g %g %g %g",
                    *vKey.m_pszString,
                    *(vKey.m_uint64 + 4),
                    *(vKey.m_uint64 + 8),
                    *(vKey.m_uint64 + 12));
                  break;
                case 5:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
                  break;
                case 6:
                  v29 = "true";
                  if ( vKey.m_char == 0 )
                    v29 = "false";
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v29);
                  break;
                case 8:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%c",
                    vKey.m_char);
                  break;
                case 9:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%d %d %d %d",
                    vKey.m_char,
                    BYTE1(vKey.m_int),
                    BYTE2(vKey.m_uint),
                    HIBYTE(vKey.m_float));
                  break;
                case 0x19:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%g %g",
                    *vKey.m_pszString,
                    *(vKey.m_uint64 + 4));
                  break;
                case 0x1A:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%lld",
                    vKey.m_uint64);
                  break;
                case 0x21:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%llu",
                    vKey.m_uint64);
                  break;
                case 0x22:
                  m_float64 = vKey.m_float64;
LABEL_60:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                  break;
                case 0x25:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                  break;
                default:
                  v27 = VariantFieldTypeName(vKey.m_type);
                  Warning("No conversion from %s to string at the moment!\n", v27);
LABEL_58:
                  CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                  break;
              }
              v23 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            Warning("Unsupported KeyValue type for key %s (type %s)\n", v23, v22);
            break;
        }
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
        ++v15;
      }
      while ( v15 != num_entries );
    }
    v19 = CDOTA_BaseNPC::AddNewModifier(v30, pCaster, this, pszModifierName, &kv, 0);
    v13 = ToHScript(v19);
    CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
    CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  }
  else
  {
    DevMsg("%s - invalid modifier name specified.\n", pszModifierName);
    v13 = 0;
  }
  KeyValues::~KeyValues(&kv);
  return v13;
}


// CDOTA_Ability_DataDriven::Script_ApplyDataDrivenThinker  (line 415, @0x0000000002434920, libserver.so)  // inlines: AsHScript, AssignTo, CVariantBase, EntityToHScript, GetTeamNumber, HScriptToEntity<CBaseEntity>, SetBool, TempString, ToDOTABaseNPC, ToEnt, ToHScript, ToString, operator const Vector&, operator float, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, KeyValues::KeyValues, DevMsg(char const*,...), KeyValues::~KeyValues, Warning, Thinker_Create, CEntityInstance::GetPublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::SetInt, KeyValues::SetFloat, UTIL_VarArgs, KeyValues::SetString (16 total)
// strings: "ApplyModifier", "%s - invalid modifier name specified.\n", "HSCRIPT argument unsupported in Script_ApplyDataDrivenThinker table\n", "Unsupported KeyValue type for key %s (type %s)\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n" (9 total)
// globals: jpt_2434B04, jpt_2434CEB, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_2434F7B
HSCRIPT __fastcall CDOTA_Ability_DataDriven::Script_ApplyDataDrivenThinker(
        CDOTA_Ability_DataDriven *const this,
        HSCRIPT hCaster,
        const char *pszModifierName,
        HSCRIPT hModifierTable,
        double a5,
        vec_t a6)
{
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v9; // rax
  HSCRIPT m_hScope; // rbx
  int v12; // r12d
  unsigned int v13; // r14d
  float v14; // xmm1_4
  const char *m_uint64; // r15
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // rax
  double z; // xmm2_8
  double y; // xmm1_8
  char *v20; // rax
  const char *v21; // r15
  const char *v22; // rsi
  const char *v23; // rax
  double m_float; // xmm0_8
  const char *v25; // rcx
  const char *v26; // rax
  double m_float64; // xmm0_8
  const char *v28; // rcx
  CBaseEntity *pEntity; // [rsp+18h] [rbp-B8h]
  int num_entries; // [rsp+3Ch] [rbp-94h]
  Vector vLocationa; // [rsp+50h] [rbp-80h]
  ScriptVariant_t vKey; // [rsp+60h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+70h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+98h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  *&vLocationa.x = a5;
  vLocationa.z = a6;
  if ( hCaster == 0 )
    return 0;
  v7 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  v9 = v7(g_pScriptVM, hCaster, Script);
  pEntity = v9;
  if ( v9 == 0 || *(v9 + 339) == 0 || pszModifierName == 0 )
    return 0;
  KeyValues::KeyValues(&kv, "ApplyModifier");
  if ( (*(this->_vptr_IHandleEntity + 336))(this, &kv, pszModifierName) != 0 )
  {
    num_entries = (*(*g_pScriptVM + 280LL))(g_pScriptVM, hModifierTable);
    vKey.m_type = 0;
    vKey.m_flags = 0;
    vKey.m_uint64 = 0;
    vValue.m_type = 0;
    vValue.m_flags = 0;
    vValue.m_uint64 = 0;
    if ( num_entries > 0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v13 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hModifierTable, v13, &vKey, &vValue);
        if ( vKey.m_type == 30 )
        {
          m_uint64 = vKey.m_uint64;
        }
        else
        {
          switch ( vKey.m_type )
          {
            case 0:
              goto LABEL_35;
            case 1:
              m_float = vKey.m_float;
              goto LABEL_37;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8),
                *(vKey.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
              break;
            case 6:
              v25 = "true";
              if ( vKey.m_char == 0 )
                v25 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v25);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vKey.m_char,
                BYTE1(vKey.m_int),
                BYTE2(vKey.m_uint),
                HIBYTE(vKey.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vKey.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vKey.m_uint64);
              break;
            case 0x22:
              m_float = vKey.m_float64;
LABEL_37:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v23 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v23);
LABEL_35:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        switch ( vValue.m_type )
        {
          case 1:
          case 0x22:
            KeyValues::SetFloat(&kv, m_uint64, v14);
            break;
          case 3:
            v17 = vValue.m_uint64;
            if ( vValue.m_uint64 != 0 )
            {
              z = *(vValue.m_uint64 + 8);
              y = *(vValue.m_uint64 + 4);
            }
            else
            {
              v17 = &vec3_origin;
              z = vec3_origin.z;
              y = vec3_origin.y;
            }
            v20 = UTIL_VarArgs("%f %f %f", v17->x, y, z);
            KeyValues::SetString(&kv, m_uint64, v20);
            break;
          case 5:
            KeyValues::SetInt(&kv, m_uint64, vValue.m_int);
            break;
          case 6:
            KeyValues::SetInt(&kv, m_uint64, vValue.m_char);
            break;
          case 0x1E:
            KeyValues::SetString(&kv, m_uint64, vValue.m_pszString);
            break;
          case 0x1F:
            Warning("HSCRIPT argument unsupported in Script_ApplyDataDrivenThinker table\n");
            break;
          default:
            v21 = VariantFieldTypeName(vValue.m_type);
            if ( vKey.m_type == 30 )
            {
              v22 = vKey.m_uint64;
            }
            else
            {
              switch ( vKey.m_type )
              {
                case 0:
                  goto LABEL_55;
                case 1:
                  m_float64 = vKey.m_float;
                  goto LABEL_59;
                case 3:
                case 0x27:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%g %g %g",
                    *vKey.m_pszString,
                    *(vKey.m_uint64 + 4),
                    *(vKey.m_uint64 + 8));
                  break;
                case 4:
                case 0x1B:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%g %g %g %g",
                    *vKey.m_pszString,
                    *(vKey.m_uint64 + 4),
                    *(vKey.m_uint64 + 8),
                    *(vKey.m_uint64 + 12));
                  break;
                case 5:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
                  break;
                case 6:
                  v28 = "true";
                  if ( vKey.m_char == 0 )
                    v28 = "false";
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v28);
                  break;
                case 8:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%c",
                    vKey.m_char);
                  break;
                case 9:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%d %d %d %d",
                    vKey.m_char,
                    BYTE1(vKey.m_int),
                    BYTE2(vKey.m_uint),
                    HIBYTE(vKey.m_float));
                  break;
                case 0x19:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%g %g",
                    *vKey.m_pszString,
                    *(vKey.m_uint64 + 4));
                  break;
                case 0x1A:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%lld",
                    vKey.m_uint64);
                  break;
                case 0x21:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%llu",
                    vKey.m_uint64);
                  break;
                case 0x22:
                  m_float64 = vKey.m_float64;
LABEL_59:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                  break;
                case 0x25:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                  break;
                default:
                  v26 = VariantFieldTypeName(vKey.m_type);
                  Warning("No conversion from %s to string at the moment!\n", v26);
LABEL_55:
                  CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                  break;
              }
              v22 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            Warning("Unsupported KeyValue type for key %s (type %s)\n", v22, v21);
            break;
        }
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
        ++v12;
      }
      while ( v12 != num_entries );
    }
    v16 = Thinker_Create(pEntity, this, pszModifierName, &kv, vLocationa, pEntity->m_iTeamNum.m_Value, 0, 1, 0);
    if ( v16 != 0 )
      m_hScope = CEntityInstance::GetPublicScriptScope(v16, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
    else
      m_hScope = 0;
    CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
    CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  }
  else
  {
    DevMsg("%s - invalid modifier name specified.\n", pszModifierName);
    m_hScope = 0;
  }
  KeyValues::~KeyValues(&kv);
  return m_hScope;
}


// CDOTA_Ability_DataDriven::OnToggle  (line 470, @0x00000000024519b0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, PerformActions
// calls: CDOTABaseAbility::OnToggle, CDOTA_ActionRunner::PerformActions_Core
void __fastcall CDOTA_Ability_DataDriven::OnToggle(CDOTA_Ability_DataDriven *const this)
{
  uint32 m_Index; // ecx
  uint32 v3; // ecx
  unsigned __int16 v4; // dx
  int v5; // esi
  __int16 v6; // ax
  uint32 v7; // edx
  CDOTA_BaseNPC *m_pInstance; // rcx
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  KeyValues *m_pOnToggleOnKV; // rsi
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12
  uint32 v15; // ecx
  unsigned __int16 v16; // dx
  int v17; // esi
  __int16 v18; // ax
  uint32 v19; // edx
  int v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  __int16 v23; // [rsp+0h] [rbp-30h]

  CDOTABaseAbility::OnToggle(this);
  m_Index = this->m_hOwnerEntity.m_Value.m_Index;
  if ( this->m_bToggleState.m_Value )
  {
    v15 = m_Index >> 15;
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v16 = 0x7FFF;
      v17 = 0x7FFF;
    }
    else
    {
      v16 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v17 = v16;
    }
    v18 = v16 | v23 & 0x8000;
    v19 = v15;
    m_pInstance = 0;
    v20 = (v19 << 15) | v18 & 0x7FFF;
    if ( (v20 + 2) > 1 )
    {
      v21 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9];
      if ( v21 != 0 )
      {
        v22 = &v21[v17 & 0x1FF];
        if ( v22 != 0 && v20 == v22->m_EHandle.m_Index )
          m_pInstance = v22->m_pInstance;
      }
    }
    m_pOnToggleOnKV = this->m_pOnToggleOnKV;
  }
  else
  {
    v3 = m_Index >> 15;
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = v4 | v23 & 0x8000;
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
    m_pOnToggleOnKV = this->m_pOnToggleOffKV;
  }
  m_pEventContext = this->m_pEventContext;
  m_pCaster = this->m_pCaster;
  this->m_pCaster = m_pInstance;
  this->m_pEventContext = &CModifierParams::s_Default;
  CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnToggleOnKV);
  this->m_pEventContext = m_pEventContext;
  this->m_pCaster = m_pCaster;
}


// CDOTA_Ability_DataDriven::OnOwnerSpawned  (line 484, @0x0000000002451b70, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, OnOwnerSpawned, PerformActions
// calls: CDOTA_ActionRunner::PerformActions_Core
void __fastcall CDOTA_Ability_DataDriven::OnOwnerSpawned(CDOTA_Ability_DataDriven *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  CDOTA_BaseNPC *m_pInstance; // rcx
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12
  KeyValues *m_pOnOwnerSpawnedKV; // rsi

  (*(this->_vptr_IHandleEntity + 262))(this);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  m_pInstance = 0;
  v5 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v5 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v3 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  m_pEventContext = this->m_pEventContext;
  m_pCaster = this->m_pCaster;
  this->m_pCaster = m_pInstance;
  m_pOnOwnerSpawnedKV = this->m_pOnOwnerSpawnedKV;
  this->m_pEventContext = &CModifierParams::s_Default;
  CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnOwnerSpawnedKV);
  this->m_pEventContext = m_pEventContext;
  this->m_pCaster = m_pCaster;
}


// CDOTA_Ability_DataDriven::OnUpgrade  (line 491, @0x0000000002451c80, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, PerformActions
// calls: CDOTABaseAbility::OnUpgrade, CDOTA_ActionRunner::PerformActions_Core
void __fastcall CDOTA_Ability_DataDriven::OnUpgrade(CDOTA_Ability_DataDriven *const this)
{
  KeyValues *m_pOnUpgradeKV; // rsi
  unsigned __int16 v3; // dx
  int v4; // edi
  CDOTA_BaseNPC *m_pInstance; // rcx
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12

  CDOTABaseAbility::OnUpgrade(this);
  m_pOnUpgradeKV = this->m_pOnUpgradeKV;
  if ( m_pOnUpgradeKV != 0 )
  {
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    m_pInstance = 0;
    v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    if ( v6 + 2 > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v4 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
          m_pInstance = v8->m_pInstance;
      }
    }
    m_pEventContext = this->m_pEventContext;
    m_pCaster = this->m_pCaster;
    this->m_pCaster = m_pInstance;
    this->m_pEventContext = &CModifierParams::s_Default;
    CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnUpgradeKV);
    this->m_pEventContext = m_pEventContext;
    this->m_pCaster = m_pCaster;
  }
}


// CDOTA_Ability_DataDriven::GetCastAnimation  (line 501, @0x00000000024238c0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseAnimating::SelectWeightedSequence, CEntityHandle::GetHandleEntity
Activity __fastcall CDOTA_Ability_DataDriven::GetCastAnimation(CDOTA_Ability_DataDriven *const this)
{
  Activity result; // eax
  int v3; // r14d
  int v4; // esi
  Activity v5; // ebx
  Activity v6; // r15d
  unsigned __int16 v7; // dx
  int v8; // r9d
  const CBaseAnimating *m_pInstance; // rdi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const CBaseAnimating *HandleEntity; // rax

  if ( (*(this->_vptr_IHandleEntity + 251))(this) < 0 )
    return -1;
  result = this->m_CastAnimation;
  if ( result == -1 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = (v3 + this->m_iAbilityIndex) % 6;
      v5 = v4 + 1510;
      v6 = v4 + 1516;
      if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v7 = 0x7FFF;
        v8 = 0x7FFF;
      }
      else
      {
        v7 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v8 = v7;
      }
      m_pInstance = 0;
      v10 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
      if ( v10 + 2 > 1 )
      {
        v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
        if ( v11 != 0 )
        {
          v12 = &v11[v8 & 0x1FF];
          if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
            m_pInstance = v12->m_pInstance;
        }
      }
      if ( CBaseAnimating::SelectWeightedSequence(m_pInstance, v5).m_Data != -1 )
        break;
      if ( v6 <= 1519 )
      {
        HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        if ( CBaseAnimating::SelectWeightedSequence(HandleEntity, v6).m_Data != -1 )
          return v6;
      }
      if ( ++v3 == 6 )
        return -1;
    }
    return v5;
  }
  return result;
}


// CDOTA_Ability_DataDriven::GetChannelAnimation  (line 527, @0x0000000002423a50, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseAnimating::SelectWeightedSequence, CEntityHandle::GetHandleEntity
Activity __fastcall CDOTA_Ability_DataDriven::GetChannelAnimation(CDOTA_Ability_DataDriven *const this)
{
  Activity m_CastAnimation; // r12d
  Activity result; // eax
  int v4; // r15d
  int v5; // r13d
  unsigned __int16 v6; // si
  int v7; // r9d
  const CBaseAnimating *m_pInstance; // rdi
  uint32 v9; // eax
  CEntityIdentity *v10; // rsi
  CEntityIdentity *v11; // rsi
  const CBaseAnimating *v12; // rax
  HSequence v13; // edx
  const CBaseAnimating *HandleEntity; // rax
  CNetworkHandleBase<CBaseEntity,CBaseEntity::NetworkVar_m_hOwnerEntity> *p_m_hOwnerEntity; // [rsp+8h] [rbp-48h]

  if ( (*(this->_vptr_IHandleEntity + 251))(this) >= 0 )
    return -1;
  m_CastAnimation = this->m_CastAnimation;
  result = m_CastAnimation;
  if ( m_CastAnimation == -1 )
  {
    v4 = 0;
    p_m_hOwnerEntity = &this->m_hOwnerEntity;
    do
    {
      v5 = (v4 + this->m_iAbilityIndex) % 6;
      if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v6 = 0x7FFF;
        v7 = 0x7FFF;
      }
      else
      {
        v6 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v7 = v6;
      }
      m_pInstance = 0;
      v9 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
      if ( v9 + 2 > 1 )
      {
        v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
        if ( v10 != 0 )
        {
          v11 = &v10[v7 & 0x1FF];
          if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      if ( CBaseAnimating::SelectWeightedSequence(m_pInstance, v5 + 1520).m_Data != -1 )
        return v5 + 1520;
      if ( m_CastAnimation == -1 )
      {
        HandleEntity = CEntityHandle::GetHandleEntity(&p_m_hOwnerEntity->m_Value);
        if ( CBaseAnimating::SelectWeightedSequence(HandleEntity, v5 + 1510).m_Data != -1 )
          m_CastAnimation = v5 + 1510;
      }
      ++v4;
    }
    while ( v4 != 6 );
    v12 = CEntityHandle::GetHandleEntity(&p_m_hOwnerEntity->m_Value);
    v13.m_Data = CBaseAnimating::SelectWeightedSequence(v12, 1600).m_Data;
    result = 1600;
    if ( v13.m_Data == -1 )
      return m_CastAnimation;
  }
  return result;
}


// CDOTA_Ability_DataDriven::OnOwnerDied  (line 558, @0x0000000002451da0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, PerformActions
// calls: CDOTABaseAbility::OnOwnerDied, CDOTA_ActionRunner::PerformActions_Core
void __fastcall CDOTA_Ability_DataDriven::OnOwnerDied(CDOTA_Ability_DataDriven *const this)
{
  KeyValues *m_pOnOwnerDiedKV; // rsi
  unsigned __int16 v3; // dx
  int v4; // edi
  CDOTA_BaseNPC *m_pInstance; // rcx
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12

  CDOTABaseAbility::OnOwnerDied(this);
  m_pOnOwnerDiedKV = this->m_pOnOwnerDiedKV;
  if ( m_pOnOwnerDiedKV != 0 )
  {
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    m_pInstance = 0;
    v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    if ( v6 + 2 > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v4 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
          m_pInstance = v8->m_pInstance;
      }
    }
    m_pEventContext = this->m_pEventContext;
    m_pCaster = this->m_pCaster;
    this->m_pCaster = m_pInstance;
    this->m_pEventContext = &CModifierParams::s_Default;
    CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnOwnerDiedKV);
    this->m_pEventContext = m_pEventContext;
    this->m_pCaster = m_pCaster;
  }
}


// CDOTA_Ability_DataDriven::OnSpellStart  (line 568, @0x0000000002451ec0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetEHandle, GetEntryIndex, GetOwnerEntity, GetSerialNumber, PerformActions, Set, SetAttacker, SetTarget, SetUnit, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CEntityHandle::GetHandleEntity, CBaseEntity::GetAbsOrigin, CDOTA_ActionRunner::PerformActions_Core, CDOTABaseAbility::GetCursorPosition
void __fastcall CDOTA_Ability_DataDriven::OnSpellStart(CDOTA_Ability_DataDriven *const this)
{
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  IHandleEntity *HandleEntity; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  __int16 v7; // cx
  IHandleEntity *v8; // rax
  int (**v9)(...); // rdx
  __int16 v10; // cx
  CBaseEntity *v11; // rax
  CDOTA_Ability_DataDriven *v12; // rdi
  CBaseEntity *v13; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12
  KeyValues *m_pOnSpellStartKV; // rsi
  CBaseEntity *v22; // rax
  CModifierParams context; // [rsp+10h] [rbp-B0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  if ( this->m_pOnSpellStartKV != 0 )
  {
    context.ability.m_Index = -1;
    context.fDamage = 0.0;
    context.fOriginalDamage = 0.0;
    context.nActivity = -1;
    context.bTooltip = 0;
    context.nTooltipParam = 0;
    context.bIgnoreInvis = 0;
    context.bNoCooldown = 0;
    context.bReincarnate = 0;
    context.bDoNotConsume = 0;
    context.fDistance = 0.0;
    context.inflictor.m_Index = -1;
    context.nDamageflags = 0;
    context.nDamageCategory = 0;
    memset(&context.pOrb, 0, 24);
    context.bCraniumBasherTested = 0;
    context.bHeartRegenApplied = 0;
    context.bDiffusalApplied = 0;
    context.bChainLightningConsidered = 0;
    context.bSuppressDamage = 0;
    context.bRangedAttack = 0;
    context.nPlayerids_stick = 0;
    context.hattacker.m_Index = -1;
    context.htarget.m_Index = -1;
    context.hunit.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget != 0 && (m_pEntity = CursorTarget->m_pEntity) != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      context.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
    else
    {
      context.htarget.m_Index = -1;
    }
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity != 0 && (vptr_IHandleEntity = HandleEntity[1]._vptr_IHandleEntity) != 0 )
    {
      v7 = 0x7FFF;
      if ( *(vptr_IHandleEntity + 4) != -1 )
        v7 = vptr_IHandleEntity[2] & 0x7FFF;
      context.hattacker.m_Index = (((*(vptr_IHandleEntity + 4) >> 15) - (vptr_IHandleEntity[6] & 1)) << 15)
                                | v7 & 0x7FFF;
    }
    else
    {
      context.hattacker.m_Index = -1;
    }
    v8 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( v8 != 0 && (v9 = v8[1]._vptr_IHandleEntity) != 0 )
    {
      v10 = 0x7FFF;
      if ( *(v9 + 4) != -1 )
        v10 = v9[2] & 0x7FFF;
      context.hunit.m_Index = (((*(v9 + 4) >> 15) - (v9[6] & 1)) << 15) | v10 & 0x7FFF;
      v11 = CDOTABaseAbility::GetCursorTarget(this);
      v12 = this;
      if ( v11 != 0 )
        goto LABEL_17;
    }
    else
    {
      context.hunit.m_Index = -1;
      v22 = CDOTABaseAbility::GetCursorTarget(this);
      v12 = this;
      if ( v22 != 0 )
      {
LABEL_17:
        v13 = CDOTABaseAbility::GetCursorTarget(v12);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        z = AbsOrigin->z;
LABEL_18:
        context.vNewLoc.x = x;
        context.vNewLoc.y = y;
        context.vNewLoc.z = z;
        v18 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        m_pEventContext = this->m_pEventContext;
        m_pCaster = this->m_pCaster;
        this->m_pEventContext = &context;
        m_pOnSpellStartKV = this->m_pOnSpellStartKV;
        this->m_pCaster = v18;
        CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnSpellStartKV);
        this->m_pEventContext = m_pEventContext;
        this->m_pCaster = m_pCaster;
        return;
      }
    }
    CursorPosition = CDOTABaseAbility::GetCursorPosition(v12);
    z = CursorPosition.z;
    x = CursorPosition.x;
    y = CursorPosition.y;
    goto LABEL_18;
  }
}


// CDOTA_Ability_DataDriven::OnAbilityPhaseStart  (line 583, @0x00000000024521e0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetEHandle, GetEntryIndex, GetOwnerEntity, GetSerialNumber, PerformActions, Set, SetAttacker, SetTarget, SetUnit, operator=
// calls: CDOTABaseAbility::OnAbilityPhaseStart, CDOTABaseAbility::GetCursorTarget, CEntityHandle::GetHandleEntity, CBaseEntity::GetAbsOrigin, CDOTA_ActionRunner::PerformActions_Core, CDOTABaseAbility::GetCursorPosition
bool __fastcall CDOTA_Ability_DataDriven::OnAbilityPhaseStart(CDOTA_Ability_DataDriven *const this)
{
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  IHandleEntity *HandleEntity; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  __int16 v7; // cx
  IHandleEntity *v8; // rax
  int (**v9)(...); // rdx
  __int16 v10; // cx
  CBaseEntity *v11; // rax
  CDOTA_Ability_DataDriven *v12; // rdi
  CBaseEntity *v13; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12
  KeyValues *m_pOnAbilityPhaseStartKV; // rsi
  CBaseEntity *v23; // rax
  CModifierParams context; // [rsp+10h] [rbp-B0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  CDOTABaseAbility::OnAbilityPhaseStart(this);
  if ( this->m_pOnAbilityPhaseStartKV != 0 )
  {
    context.bCraniumBasherTested = 0;
    context.ability.m_Index = -1;
    context.fDamage = 0.0;
    context.fOriginalDamage = 0.0;
    context.nActivity = -1;
    context.bTooltip = 0;
    context.nTooltipParam = 0;
    context.bIgnoreInvis = 0;
    context.bNoCooldown = 0;
    context.bReincarnate = 0;
    context.bDoNotConsume = 0;
    context.fDistance = 0.0;
    context.inflictor.m_Index = -1;
    context.nDamageflags = 0;
    context.nDamageCategory = 0;
    memset(&context.pOrb, 0, 24);
    context.bHeartRegenApplied = 0;
    context.bDiffusalApplied = 0;
    context.bChainLightningConsidered = 0;
    context.bSuppressDamage = 0;
    context.bRangedAttack = 0;
    context.nPlayerids_stick = 0;
    context.hattacker.m_Index = -1;
    context.htarget.m_Index = -1;
    context.hunit.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget != 0 && (m_pEntity = CursorTarget->m_pEntity) != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      context.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
    else
    {
      context.htarget.m_Index = -1;
    }
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity != 0 && (vptr_IHandleEntity = HandleEntity[1]._vptr_IHandleEntity) != 0 )
    {
      v7 = 0x7FFF;
      if ( *(vptr_IHandleEntity + 4) != -1 )
        v7 = vptr_IHandleEntity[2] & 0x7FFF;
      context.hattacker.m_Index = (((*(vptr_IHandleEntity + 4) >> 15) - (vptr_IHandleEntity[6] & 1)) << 15)
                                | v7 & 0x7FFF;
    }
    else
    {
      context.hattacker.m_Index = -1;
    }
    v8 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( v8 != 0 && (v9 = v8[1]._vptr_IHandleEntity) != 0 )
    {
      v10 = 0x7FFF;
      if ( *(v9 + 4) != -1 )
        v10 = v9[2] & 0x7FFF;
      context.hunit.m_Index = (((*(v9 + 4) >> 15) - (v9[6] & 1)) << 15) | v10 & 0x7FFF;
      v11 = CDOTABaseAbility::GetCursorTarget(this);
      v12 = this;
      if ( v11 != 0 )
        goto LABEL_17;
    }
    else
    {
      context.hunit.m_Index = -1;
      v23 = CDOTABaseAbility::GetCursorTarget(this);
      v12 = this;
      if ( v23 != 0 )
      {
LABEL_17:
        v13 = CDOTABaseAbility::GetCursorTarget(v12);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        z = AbsOrigin->z;
LABEL_18:
        context.vNewLoc.x = x;
        context.vNewLoc.y = y;
        context.vNewLoc.z = z;
        v18 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        m_pEventContext = this->m_pEventContext;
        m_pCaster = this->m_pCaster;
        this->m_pEventContext = &context;
        m_pOnAbilityPhaseStartKV = this->m_pOnAbilityPhaseStartKV;
        this->m_pCaster = v18;
        CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnAbilityPhaseStartKV);
        this->m_pEventContext = m_pEventContext;
        this->m_pCaster = m_pCaster;
        return 1;
      }
    }
    CursorPosition = CDOTABaseAbility::GetCursorPosition(v12);
    z = CursorPosition.z;
    x = CursorPosition.x;
    y = CursorPosition.y;
    goto LABEL_18;
  }
  return 1;
}


// CDOTA_Ability_DataDriven::OnAbilityPhaseInterrupted  (line 598, @0x0000000002452510, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetEHandle, GetEntryIndex, GetOwnerEntity, GetSerialNumber, PerformActions, Set, SetAttacker, SetTarget, SetUnit, operator=
// calls: CDOTABaseAbility::OnAbilityPhaseInterrupted, CDOTABaseAbility::GetCursorTarget, CEntityHandle::GetHandleEntity, CBaseEntity::GetAbsOrigin, CDOTA_ActionRunner::PerformActions_Core, CDOTABaseAbility::GetCursorPosition
void __fastcall CDOTA_Ability_DataDriven::OnAbilityPhaseInterrupted(CDOTA_Ability_DataDriven *const this)
{
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  IHandleEntity *HandleEntity; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  __int16 v7; // cx
  IHandleEntity *v8; // rax
  int (**v9)(...); // rdx
  __int16 v10; // cx
  CBaseEntity *v11; // rax
  CDOTA_Ability_DataDriven *v12; // rdi
  CBaseEntity *v13; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12
  KeyValues *m_pOnAbilityPhaseInterruptedKV; // rsi
  CBaseEntity *v22; // rax
  CModifierParams context; // [rsp+10h] [rbp-B0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  CDOTABaseAbility::OnAbilityPhaseInterrupted(this);
  if ( this->m_pOnAbilityPhaseInterruptedKV != 0 )
  {
    context.bCraniumBasherTested = 0;
    context.ability.m_Index = -1;
    context.fDamage = 0.0;
    context.fOriginalDamage = 0.0;
    context.nActivity = -1;
    context.bTooltip = 0;
    context.nTooltipParam = 0;
    context.bIgnoreInvis = 0;
    context.bNoCooldown = 0;
    context.bReincarnate = 0;
    context.bDoNotConsume = 0;
    context.fDistance = 0.0;
    context.inflictor.m_Index = -1;
    context.nDamageflags = 0;
    context.nDamageCategory = 0;
    memset(&context.pOrb, 0, 24);
    context.bHeartRegenApplied = 0;
    context.bDiffusalApplied = 0;
    context.bChainLightningConsidered = 0;
    context.bSuppressDamage = 0;
    context.bRangedAttack = 0;
    context.nPlayerids_stick = 0;
    context.hattacker.m_Index = -1;
    context.htarget.m_Index = -1;
    context.hunit.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget != 0 && (m_pEntity = CursorTarget->m_pEntity) != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      context.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
    else
    {
      context.htarget.m_Index = -1;
    }
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity != 0 && (vptr_IHandleEntity = HandleEntity[1]._vptr_IHandleEntity) != 0 )
    {
      v7 = 0x7FFF;
      if ( *(vptr_IHandleEntity + 4) != -1 )
        v7 = vptr_IHandleEntity[2] & 0x7FFF;
      context.hattacker.m_Index = (((*(vptr_IHandleEntity + 4) >> 15) - (vptr_IHandleEntity[6] & 1)) << 15)
                                | v7 & 0x7FFF;
    }
    else
    {
      context.hattacker.m_Index = -1;
    }
    v8 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( v8 != 0 && (v9 = v8[1]._vptr_IHandleEntity) != 0 )
    {
      v10 = 0x7FFF;
      if ( *(v9 + 4) != -1 )
        v10 = v9[2] & 0x7FFF;
      context.hunit.m_Index = (((*(v9 + 4) >> 15) - (v9[6] & 1)) << 15) | v10 & 0x7FFF;
      v11 = CDOTABaseAbility::GetCursorTarget(this);
      v12 = this;
      if ( v11 != 0 )
        goto LABEL_17;
    }
    else
    {
      context.hunit.m_Index = -1;
      v22 = CDOTABaseAbility::GetCursorTarget(this);
      v12 = this;
      if ( v22 != 0 )
      {
LABEL_17:
        v13 = CDOTABaseAbility::GetCursorTarget(v12);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        z = AbsOrigin->z;
LABEL_18:
        context.vNewLoc.x = x;
        context.vNewLoc.y = y;
        context.vNewLoc.z = z;
        v18 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        m_pEventContext = this->m_pEventContext;
        m_pCaster = this->m_pCaster;
        this->m_pEventContext = &context;
        m_pOnAbilityPhaseInterruptedKV = this->m_pOnAbilityPhaseInterruptedKV;
        this->m_pCaster = v18;
        CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnAbilityPhaseInterruptedKV);
        this->m_pEventContext = m_pEventContext;
        this->m_pCaster = m_pCaster;
        return;
      }
    }
    CursorPosition = CDOTABaseAbility::GetCursorPosition(v12);
    z = CursorPosition.z;
    x = CursorPosition.x;
    y = CursorPosition.y;
    goto LABEL_18;
  }
}


// CDOTA_Ability_DataDriven::OnChannelFinish  (line 613, @0x0000000002452830, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetEHandle, GetEntryIndex, GetOwnerEntity, GetSerialNumber, PerformActions, Set, SetAttacker, SetTarget, SetUnit, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CEntityHandle::GetHandleEntity, CBaseEntity::GetAbsOrigin, CDOTA_ActionRunner::PerformActions_Core, CDOTABaseAbility::GetCursorPosition
void __fastcall CDOTA_Ability_DataDriven::OnChannelFinish(CDOTA_Ability_DataDriven *const this, bool bInterrupted)
{
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  IHandleEntity *HandleEntity; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  __int16 v9; // cx
  IHandleEntity *v10; // rax
  int (**v11)(...); // rdx
  __int16 v12; // cx
  CBaseEntity *v13; // rax
  CDOTA_Ability_DataDriven *v14; // rdi
  CBaseEntity *v15; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  KeyValues *m_pOnChannelFinishKV; // r14
  CDOTA_BaseNPC *v21; // rax
  const CModifierParams *m_pEventContext; // rdx
  CDOTA_BaseNPC *m_pCaster; // r15
  KeyValues *m_pOnChannelSucceededKV; // r14
  CDOTA_BaseNPC *v25; // rax
  const CModifierParams *v26; // r13
  CDOTA_BaseNPC *v27; // r12
  CBaseEntity *v28; // rax
  const CModifierParams *v29; // [rsp+8h] [rbp-D8h]
  CModifierParams context; // [rsp+20h] [rbp-C0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  if ( this->m_pOnChannelFinishKV != 0 || this->m_pOnChannelSucceededKV != 0 || this->m_pOnChannelInterruptedKV != 0 )
  {
    context.bCraniumBasherTested = 0;
    context.ability.m_Index = -1;
    context.fDamage = 0.0;
    context.fOriginalDamage = 0.0;
    context.nActivity = -1;
    context.bTooltip = 0;
    context.nTooltipParam = 0;
    context.bIgnoreInvis = 0;
    context.bNoCooldown = 0;
    context.bReincarnate = 0;
    context.bDoNotConsume = 0;
    context.fDistance = 0.0;
    context.inflictor.m_Index = -1;
    context.nDamageflags = 0;
    context.nDamageCategory = 0;
    memset(&context.pOrb, 0, 24);
    context.bHeartRegenApplied = 0;
    context.bDiffusalApplied = 0;
    context.bChainLightningConsidered = 0;
    context.bSuppressDamage = 0;
    context.bRangedAttack = 0;
    context.nPlayerids_stick = 0;
    context.hattacker.m_Index = -1;
    context.htarget.m_Index = -1;
    context.hunit.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget != 0 && (m_pEntity = CursorTarget->m_pEntity) != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      context.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
    else
    {
      context.htarget.m_Index = -1;
    }
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity != 0 && (vptr_IHandleEntity = HandleEntity[1]._vptr_IHandleEntity) != 0 )
    {
      v9 = 0x7FFF;
      if ( *(vptr_IHandleEntity + 4) != -1 )
        v9 = vptr_IHandleEntity[2] & 0x7FFF;
      context.hattacker.m_Index = (((*(vptr_IHandleEntity + 4) >> 15) - (vptr_IHandleEntity[6] & 1)) << 15)
                                | v9 & 0x7FFF;
      v10 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      if ( v10 == 0 )
        goto LABEL_31;
    }
    else
    {
      context.hattacker.m_Index = -1;
      v10 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      if ( v10 == 0 )
        goto LABEL_31;
    }
    v11 = v10[1]._vptr_IHandleEntity;
    if ( v11 != 0 )
    {
      v12 = 0x7FFF;
      if ( *(v11 + 4) != -1 )
        v12 = v11[2] & 0x7FFF;
      context.hunit.m_Index = (((*(v11 + 4) >> 15) - (v11[6] & 1)) << 15) | v12 & 0x7FFF;
      v13 = CDOTABaseAbility::GetCursorTarget(this);
      v14 = this;
      if ( v13 != 0 )
        goto LABEL_16;
      goto LABEL_32;
    }
LABEL_31:
    context.hunit.m_Index = -1;
    v28 = CDOTABaseAbility::GetCursorTarget(this);
    v14 = this;
    if ( v28 != 0 )
    {
LABEL_16:
      v15 = CDOTABaseAbility::GetCursorTarget(v14);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
      x = AbsOrigin->x;
      y = AbsOrigin->y;
      z = AbsOrigin->z;
      goto LABEL_17;
    }
LABEL_32:
    CursorPosition = CDOTABaseAbility::GetCursorPosition(v14);
    z = CursorPosition.z;
    x = CursorPosition.x;
    y = CursorPosition.y;
LABEL_17:
    m_pOnChannelFinishKV = this->m_pOnChannelFinishKV;
    context.vNewLoc.x = x;
    context.vNewLoc.y = y;
    context.vNewLoc.z = z;
    if ( m_pOnChannelFinishKV != 0 )
    {
      v21 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      m_pEventContext = this->m_pEventContext;
      m_pCaster = this->m_pCaster;
      this->m_pCaster = v21;
      this->m_pEventContext = &context;
      v29 = m_pEventContext;
      CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnChannelFinishKV);
      this->m_pCaster = m_pCaster;
      this->m_pEventContext = v29;
    }
    m_pOnChannelSucceededKV = this->m_pOnChannelSucceededKV;
    if ( m_pOnChannelSucceededKV != 0 )
    {
      if ( bInterrupted )
      {
        m_pOnChannelSucceededKV = this->m_pOnChannelInterruptedKV;
        if ( m_pOnChannelSucceededKV == 0 )
          return;
      }
    }
    else
    {
      m_pOnChannelSucceededKV = this->m_pOnChannelInterruptedKV;
      if ( m_pOnChannelSucceededKV == 0 || !bInterrupted )
        return;
    }
    v25 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    v26 = this->m_pEventContext;
    v27 = this->m_pCaster;
    this->m_pCaster = v25;
    this->m_pEventContext = &context;
    CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnChannelSucceededKV);
    this->m_pEventContext = v26;
    this->m_pCaster = v27;
  }
}


// CDOTA_Ability_DataDriven::OnProjectileHit  (line 642, @0x0000000002452c30, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetBool, GetCaster, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, PerformActions, Set, SetTarget, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_ActionRunner::PerformActions_Core, KeyValues::GetInt
// strings: "DeleteOnHit"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_DataDriven::OnProjectileHit(
        CDOTA_Ability_DataDriven *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // ecx
  unsigned int v5; // edi
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  KeyValues *m_pOnProjectileHitUnitKV; // r12
  bool result; // al
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  unsigned __int16 v15; // dx
  int v16; // esi
  CDOTA_BaseNPC *v17; // rcx
  uint32 v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  const CModifierParams *m_pEventContext; // r14
  CDOTA_BaseNPC *m_pCaster; // r13
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v25; // cx
  CModifierParams prmContext; // [rsp+10h] [rbp-B0h] BYREF

  v4 = *hTarget;
  v5 = *hTarget + 2;
  if ( v5 > 1
    && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0
    && (v7 = &v6[*hTarget & 0x1FF]) != 0
    && v4 == v7->m_EHandle.m_Index
    && v7->m_pInstance != 0 )
  {
    m_pOnProjectileHitUnitKV = this->m_pOnProjectileHitUnitKV;
  }
  else
  {
    m_pOnProjectileHitUnitKV = this->m_pOnProjectileFinishKV;
  }
  result = 1;
  if ( m_pOnProjectileHitUnitKV != 0 )
  {
    x = vLocation->x;
    prmContext.bTooltip = 0;
    y = vLocation->y;
    prmContext.bCraniumBasherTested = 0;
    z = vLocation->z;
    prmContext.bHeartRegenApplied = 0;
    prmContext.ability.m_Index = -1;
    prmContext.fDamage = 0.0;
    prmContext.fOriginalDamage = 0.0;
    prmContext.nActivity = -1;
    prmContext.nTooltipParam = 0;
    prmContext.bIgnoreInvis = 0;
    prmContext.bNoCooldown = 0;
    prmContext.bReincarnate = 0;
    prmContext.bDoNotConsume = 0;
    prmContext.fDistance = 0.0;
    prmContext.inflictor.m_Index = -1;
    prmContext.nDamageflags = 0;
    prmContext.nDamageCategory = 0;
    memset(&prmContext.pOrb, 0, 24);
    prmContext.bDiffusalApplied = 0;
    prmContext.bChainLightningConsidered = 0;
    prmContext.bSuppressDamage = 0;
    prmContext.bRangedAttack = 0;
    prmContext.nPlayerids_stick = 0;
    prmContext.hattacker.m_Index = -1;
    prmContext.htarget.m_Index = -1;
    prmContext.hunit.m_Index = -1;
    prmContext.vOldLoc.x = x;
    prmContext.vOldLoc.y = y;
    prmContext.vOldLoc.z = z;
    prmContext.vNewLoc.x = x;
    prmContext.vNewLoc.y = y;
    prmContext.vNewLoc.z = z;
    if ( v5 > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[*hTarget & 0x1FF];
        if ( v14 != 0 && v4 == v14->m_EHandle.m_Index )
        {
          m_pInstance = v14->m_pInstance;
          if ( m_pInstance != 0 )
          {
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v25 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              prmContext.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                         | v25 & 0x7FFF;
            }
          }
        }
      }
    }
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v15 = 0x7FFF;
      v16 = 0x7FFF;
    }
    else
    {
      v15 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v16 = v15;
    }
    v17 = 0;
    v18 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
    if ( v18 + 2 > 1 )
    {
      v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
      if ( v19 != 0 )
      {
        v20 = &v19[v16 & 0x1FF];
        if ( v20 != 0 && v18 == v20->m_EHandle.m_Index )
          v17 = v20->m_pInstance;
      }
    }
    m_pEventContext = this->m_pEventContext;
    m_pCaster = this->m_pCaster;
    this->m_pCaster = v17;
    this->m_pEventContext = &prmContext;
    CDOTA_ActionRunner::PerformActions_Core(&this->CDOTA_ActionRunner, m_pOnProjectileHitUnitKV);
    this->m_pEventContext = m_pEventContext;
    this->m_pCaster = m_pCaster;
    return KeyValues::GetInt(m_pOnProjectileHitUnitKV, "DeleteOnHit", 1) != 0;
  }
  return result;
}


// GetUnitTargetTeamsFromString  (line 668, @0x0000000002430650, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, Purge, PurgeAndDeleteElements, RemoveAll, _V_strcmp, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlMemory<char*, int>::Purge, DevMsg(char const*,...), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_ActionRunner::SelectActionTargets, CDOTA_ActionRunner::PerformAction_LinearProjectile, CDOTA_Modifier_DataDriven::ReadKeyValues_Aura
// strings: "DOTA_UNIT_TARGET_TEAM_FRIENDLY", "DOTA_UNIT_TARGET_TEAM_ENEMY", "DOTA_UNIT_TARGET_TEAM_CUSTOM", "DOTA_UNIT_TARGET_TEAM_BOTH", "DOTA_UNIT_TARGET_TEAM_NONE", "%s is not a target team flag.\n"
int __fastcall GetUnitTargetTeamsFromString(const char *pszTargetTeamTypes)
{
  __int64 v1; // r12
  int v2; // ebx
  int v3; // r13d
  int m_Size; // eax
  char *v5; // rax
  __int64 v6; // r12
  int v7; // ebx
  char *v8; // rsi
  CUtlStringList szValues; // [rsp+10h] [rbp-50h] BYREF

  if ( pszTargetTeamTypes == 0 )
    return 0;
  szValues.m_Size = 0;
  szValues.m_Memory.m_pMemory = 0;
  szValues.m_Memory.m_nAllocationCount = 0;
  szValues.m_Memory.m_nGrowSize = 0;
  V_SplitString(pszTargetTeamTypes, " | ", &szValues);
  if ( szValues.m_Size <= 0 )
  {
    v3 = 0;
    goto LABEL_14;
  }
  v1 = 0;
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v5 = szValues.m_Memory.m_pMemory[v1];
      if ( v5 != "DOTA_UNIT_TARGET_TEAM_FRIENDLY"
        && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_TEAM_FRIENDLY") != 0 )
      {
        break;
      }
      v3 |= 1u;
LABEL_5:
      m_Size = szValues.m_Size;
      ++v2;
      ++v1;
      if ( szValues.m_Size <= v2 )
        goto LABEL_11;
    }
    if ( v5 != "DOTA_UNIT_TARGET_TEAM_ENEMY"
      && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_TEAM_ENEMY") != 0 )
    {
      if ( v5 == "DOTA_UNIT_TARGET_TEAM_CUSTOM"
        || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_TEAM_CUSTOM") == 0 )
      {
        v3 |= 4u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_TEAM_BOTH"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_TEAM_BOTH") == 0 )
      {
        v3 |= 3u;
      }
      else if ( v5 != "DOTA_UNIT_TARGET_TEAM_NONE"
             && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_TEAM_NONE") != 0 )
      {
        DevMsg("%s is not a target team flag.\n", szValues.m_Memory.m_pMemory[v1]);
      }
      goto LABEL_5;
    }
    m_Size = szValues.m_Size;
    ++v2;
    v3 |= 2u;
    ++v1;
  }
  while ( szValues.m_Size > v2 );
LABEL_11:
  if ( m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = szValues.m_Memory.m_pMemory[v6++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < szValues.m_Size );
  }
LABEL_14:
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
    if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  }
  return v3;
}


// GetUnitTargetTypesFromString  (line 692, @0x0000000002430860, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, Purge, PurgeAndDeleteElements, RemoveAll, _V_strcmp, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlMemory<char*, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume, DevMsg(char const*,...)
// callers: CDOTA_ActionRunner::SelectActionTargets, CDOTA_ActionRunner::PerformAction_LinearProjectile, CDOTA_Modifier_DataDriven::ReadKeyValues_Aura
// strings: "DOTA_UNIT_TARGET_HERO", "DOTA_UNIT_TARGET_CREEP", "DOTA_UNIT_TARGET_BUILDING", "DOTA_UNIT_TARGET_COURIER", "DOTA_UNIT_TARGET_OTHER", "DOTA_UNIT_TARGET_TREE" (11 total)
int __fastcall GetUnitTargetTypesFromString(const char *pszTargetTypes)
{
  __int64 v1; // r12
  int v2; // ebx
  int v3; // r13d
  int m_Size; // eax
  char *v5; // rax
  __int64 v6; // r12
  int v7; // ebx
  char *v8; // rsi
  CUtlStringList szValues; // [rsp+10h] [rbp-50h] BYREF

  if ( pszTargetTypes == 0 )
    return 0;
  szValues.m_Size = 0;
  szValues.m_Memory.m_pMemory = 0;
  szValues.m_Memory.m_nAllocationCount = 0;
  szValues.m_Memory.m_nGrowSize = 0;
  V_SplitString(pszTargetTypes, " | ", &szValues);
  if ( szValues.m_Size <= 0 )
  {
    v3 = 0;
    goto LABEL_14;
  }
  v1 = 0;
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v5 = szValues.m_Memory.m_pMemory[v1];
      if ( v5 != "DOTA_UNIT_TARGET_HERO" && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_HERO") != 0 )
        break;
      v3 |= 1u;
LABEL_5:
      m_Size = szValues.m_Size;
      ++v2;
      ++v1;
      if ( szValues.m_Size <= v2 )
        goto LABEL_11;
    }
    if ( v5 != "DOTA_UNIT_TARGET_CREEP" && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_CREEP") != 0 )
    {
      if ( v5 == "DOTA_UNIT_TARGET_BUILDING"
        || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_BUILDING") == 0 )
      {
        v3 |= 4u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_COURIER"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_COURIER") == 0 )
      {
        v3 |= 0x10u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_OTHER" || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_OTHER") == 0 )
      {
        v3 |= 0x20u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_TREE" || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_TREE") == 0 )
      {
        v3 |= 0x40u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_CUSTOM"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_CUSTOM") == 0 )
      {
        LOBYTE(v3) = v3 | 0x80;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_BASIC" || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_BASIC") == 0 )
      {
        v3 |= 0x12u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_ALL" || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_ALL") == 0 )
      {
        v3 |= 0x37u;
      }
      else if ( v5 != "DOTA_UNIT_TARGET_NONE" && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_NONE") != 0 )
      {
        DevMsg("%s is not a target type flag.\n", szValues.m_Memory.m_pMemory[v1]);
      }
      goto LABEL_5;
    }
    m_Size = szValues.m_Size;
    ++v2;
    v3 |= 2u;
    ++v1;
  }
  while ( szValues.m_Size > v2 );
LABEL_11:
  if ( m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = szValues.m_Memory.m_pMemory[v6++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < szValues.m_Size );
  }
LABEL_14:
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
    if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  }
  return v3;
}


// GetUnitTargetFlagsFromString  (line 722, @0x0000000002430b10, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, Purge, PurgeAndDeleteElements, RemoveAll, _V_strcmp, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlMemory<char*, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume, DevMsg(char const*,...)
// callers: CDOTA_ActionRunner::SelectActionTargets, CDOTA_ActionRunner::PerformAction_LinearProjectile, CDOTA_Modifier_DataDriven::ReadKeyValues_Aura
// strings: "DOTA_UNIT_TARGET_FLAG_RANGED_ONLY", "DOTA_UNIT_TARGET_FLAG_MELEE_ONLY", "DOTA_UNIT_TARGET_FLAG_DEAD", "DOTA_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES", "DOTA_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES", "DOTA_UNIT_TARGET_FLAG_INVULNERABLE" (21 total)
int __fastcall GetUnitTargetFlagsFromString(const char *pszTargetFlags)
{
  __int64 v1; // r12
  int v2; // ebx
  int v3; // r13d
  int m_Size; // eax
  char *v5; // rax
  __int64 v6; // r12
  int v7; // ebx
  char *v8; // rsi
  CUtlStringList szValues; // [rsp+10h] [rbp-50h] BYREF

  if ( pszTargetFlags == 0 )
    return 0;
  szValues.m_Size = 0;
  szValues.m_Memory.m_pMemory = 0;
  szValues.m_Memory.m_nAllocationCount = 0;
  szValues.m_Memory.m_nGrowSize = 0;
  V_SplitString(pszTargetFlags, " | ", &szValues);
  if ( szValues.m_Size <= 0 )
  {
    v3 = 0;
    goto LABEL_14;
  }
  v1 = 0;
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v5 = szValues.m_Memory.m_pMemory[v1];
      if ( v5 != "DOTA_UNIT_TARGET_FLAG_RANGED_ONLY"
        && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_RANGED_ONLY") != 0 )
      {
        break;
      }
      v3 |= 2u;
LABEL_5:
      m_Size = szValues.m_Size;
      ++v2;
      ++v1;
      if ( szValues.m_Size <= v2 )
        goto LABEL_11;
    }
    if ( v5 != "DOTA_UNIT_TARGET_FLAG_MELEE_ONLY"
      && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_MELEE_ONLY") != 0 )
    {
      if ( v5 == "DOTA_UNIT_TARGET_FLAG_DEAD"
        || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_DEAD") == 0 )
      {
        v3 |= 8u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES") == 0 )
      {
        v3 |= 0x10u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES") == 0 )
      {
        v3 |= 0x20u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_INVULNERABLE"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_INVULNERABLE") == 0 )
      {
        v3 |= 0x40u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_FOW_VISIBLE"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_FOW_VISIBLE") == 0 )
      {
        LOBYTE(v3) = v3 | 0x80;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NO_INVIS"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NO_INVIS") == 0 )
      {
        v3 |= 0x100u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS") == 0 )
      {
        v3 |= 0x200u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_PLAYER_CONTROLLED"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_PLAYER_CONTROLLED") == 0 )
      {
        v3 |= 0x400u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NOT_DOMINATED"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NOT_DOMINATED") == 0 )
      {
        v3 |= 0x800u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NOT_SUMMONED"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NOT_SUMMONED") == 0 )
      {
        v3 |= 0x1000u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NOT_ILLUSIONS"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NOT_ILLUSIONS") == 0 )
      {
        v3 |= 0x2000u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NOT_ATTACK_IMMUNE"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NOT_ATTACK_IMMUNE") == 0 )
      {
        v3 |= 0x4000u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_MANA_ONLY"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_MANA_ONLY") == 0 )
      {
        v3 |= 0x8000u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_CHECK_DISABLE_HELP"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_CHECK_DISABLE_HELP") == 0 )
      {
        v3 |= 0x10000u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NOT_CREEP_HERO"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NOT_CREEP_HERO") == 0 )
      {
        v3 |= 0x20000u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_OUT_OF_WORLD"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_OUT_OF_WORLD") == 0 )
      {
        v3 |= 0x40000u;
      }
      else if ( v5 == "DOTA_UNIT_TARGET_FLAG_NOT_NIGHTMARED"
             || strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NOT_NIGHTMARED") == 0 )
      {
        v3 |= 0x80000u;
      }
      else if ( v5 != "DOTA_UNIT_TARGET_FLAG_NONE"
             && strcmp(szValues.m_Memory.m_pMemory[v1], "DOTA_UNIT_TARGET_FLAG_NONE") != 0 )
      {
        DevMsg("%s is not a unit target flag.\n", szValues.m_Memory.m_pMemory[v1]);
      }
      goto LABEL_5;
    }
    m_Size = szValues.m_Size;
    ++v2;
    v3 |= 4u;
    ++v1;
  }
  while ( szValues.m_Size > v2 );
LABEL_11:
  if ( m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = szValues.m_Memory.m_pMemory[v6++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < szValues.m_Size );
  }
LABEL_14:
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
    if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  }
  return v3;
}


