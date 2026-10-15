// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_item_datadriven.cpp:12
class C_CDOTA_Item_DataDriven_MapInstall {
	C_CDOTA_Item_DataDriven_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_DataDriven::YouForgotToImplementOrDeclareServerClass  (line 12, @0x00000000025937b0, libserver.so)
int __fastcall CDOTA_Item_DataDriven::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_DataDriven *const this)
{
  return 0;
}


// CDOTA_Item_DataDriven::GetServerClass  (line 12, @0x0000000002599990, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_DataDriven::GetServerClass(CDOTA_Item_DataDriven *const this)
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


// CDOTA_Item_DataDriven::CDOTA_Item_DataDriven  (line 19, @0x00000000025a7af0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ~CDOTA_Item
// calls: CDOTA_Item::CDOTA_Item, CDOTA_ActionRunner::CDOTA_ActionRunner, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
// callers: CDOTA_Item_DataDriven::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Item_DataDriven::CDOTA_Item_DataDriven(CDOTA_Item_DataDriven *const this)
{
  CDOTA_Item::CDOTA_Item(this);
  CDOTA_ActionRunner::CDOTA_ActionRunner(&this->CDOTA_ActionRunner);
  this->m_bProcsMagicStick = 0;
  this->_vptr_IHandleEntity = &off_410EDF0;
  this->_vptr_CDOTA_ActionRunner = &off_410F988;
  this->m_CastAnimation = -1;
  this->m_ModifierKVDescriptions.m_Size = 0;
  this->m_ModifierKVDescriptions.m_Memory.m_pMemory = 0;
  this->m_ModifierKVDescriptions.m_Memory.m_nAllocationCount = 0;
  this->m_ModifierKVDescriptions.m_Memory.m_nGrowSize = 0;
  this->m_pOnChannelFinishKV = 0;
  this->m_pOnOwnerSpawnedKV = 0;
  this->m_pOnOwnerDiedKV = 0;
  this->m_pOnSpellStartKV = 0;
  this->m_pOnAbilityPhaseStartKV = 0;
  this->m_pOnToggleOnKV = 0;
  this->m_pOnToggleOffKV = 0;
  this->m_pOnEquipKV = 0;
  this->m_pOnUnequipKV = 0;
}


// CDOTA_Item_DataDriven::~CDOTA_Item_DataDriven  (line 35, @0x0000000002596890, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Item, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_ActionRunner::~CDOTA_ActionRunner, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<KeyValues*, int>::Purge
// callers: CDOTA_Item_DataDriven::~CDOTA_Item_DataDriven
void __fastcall CDOTA_Item_DataDriven::~CDOTA_Item_DataDriven(CDOTA_Item_DataDriven *const this)
{
  bool v2; // zf
  CUtlVectorBase<KeyValues*,CUtlMemory<KeyValues*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_ModifierKVDescriptions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_410EDF0;
  this->_vptr_CDOTA_ActionRunner = &off_410F988;
  this->m_ModifierKVDescriptions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_ModifierKVDescriptions.m_Memory;
    CUtlMemory<KeyValues *,int>::Purge(&this->m_ModifierKVDescriptions.m_Memory);
    if ( (this->m_ModifierKVDescriptions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<KeyValues *,int>::Purge(p_m_Memory);
  }
  CDOTA_ActionRunner::~CDOTA_ActionRunner(&this->CDOTA_ActionRunner);
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Item_DataDriven::~CDOTA_Item_DataDriven  (line 35, @0x0000000002596920, libserver.so)
// calls: CDOTA_Item_DataDriven::~CDOTA_Item_DataDriven, CBaseEntity::operator delete
void __fastcall CDOTA_Item_DataDriven::~CDOTA_Item_DataDriven(CDOTA_Item_DataDriven *const this)
{
  CDOTA_Item_DataDriven::~CDOTA_Item_DataDriven(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_DataDriven::GetModifierDataByIndex  (line 40, @0x00000000025a7bf0, libserver.so)  // inlines: operator[]
// callers: CDOTA_Orb_DataDriven::OnOrbImpact, CDOTA_Orb_DataDriven::OnOrbFire
KeyValues *__fastcall CDOTA_Item_DataDriven::GetModifierDataByIndex(CDOTA_Item_DataDriven *const this, int iIndex)
{
  KeyValues *result; // rax

  result = 0;
  if ( iIndex >= 0 && iIndex < this->m_ModifierKVDescriptions.m_Size )
    return this->m_ModifierKVDescriptions.m_Memory.m_pMemory[iIndex];
  return result;
}


// CDOTA_Item_DataDriven::GetModifierDataIndexByName  (line 48, @0x00000000025a7c20, libserver.so)
// calls: KeyValuesSystem, KeyValues::GetNameSymbol
// callers: CDOTA_Item_DataDriven::LookupModifierCreateParameters, CDOTA_Modifier_DataDriven::ReadKeyValues_Aura
int __fastcall CDOTA_Item_DataDriven::GetModifierDataIndexByName(
        CDOTA_Item_DataDriven *const this,
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


// CDOTA_Item_DataDriven::GetChannelTime  (line 64, @0x00000000025aa420, libserver.so)  // inlines: Float, GetAbilityData, GetAbilityKeyValues, operator float, ~CVariantBase
// calls: KeyValues::FindKey, KeyValues::GetString, CDOTABaseAbility::GetChannelTime, CVariantBase<CVariantDefaultAllocator>::Free, CDOTABaseAbility::LoadAbilityData
// strings: "AbilityChannelTime"
float __fastcall CDOTA_Item_DataDriven::GetChannelTime(CDOTA_Item_DataDriven *const this)
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
  (*(this->_vptr_IHandleEntity + 364))(&symbolValue, this, String + 1);
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


// CDOTA_Item_DataDriven::CastFilterResult  (line 82, @0x0000000002597a10, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_DataDriven::CastFilterResult(CDOTA_Item_DataDriven *const this, CDOTA_BaseNPC *pTarget)
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


// CDOTA_Item_DataDriven::GetCustomCastError  (line 94, @0x0000000002597640, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// strings: "#dota_hud_error_cant_cast_on_self", "CUSTOM ERROR"
const char *__fastcall CDOTA_Item_DataDriven::GetCustomCastError(
        CDOTA_Item_DataDriven *const this,
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


// CDOTA_Item_DataDriven::Precache  (line 103, @0x00000000025bcf90, libserver.so)  // inlines: GetAbilityData, GetAbilityKeyValues
// calls: CDOTA_Item::Precache, CDOTABaseAbility::LoadAbilityData, CDOTA_Item_DataDriven::ReadKeyValues, CDOTA_ActionRunner::PrecacheActions, CDOTA_Modifier_DataDriven::Precache, KeyValues::FindKey, CDOTAGamerules::PrecacheResourcesFromKeys
// strings: "precache"
void __fastcall CDOTA_Item_DataDriven::Precache(
        CDOTA_Item_DataDriven *const this,
        const CEntityPrecacheContext *pContext)
{
  __int64 v4; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  KeyValues *m_pKVData; // rdi
  KeyValues *Key; // rax

  v4 = 0;
  CDOTA_Item::Precache(this, pContext);
  CDOTABaseAbility::LoadAbilityData(this, 1);
  CDOTA_Item_DataDriven::ReadKeyValues(this);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnChannelFinishKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnChannelSucceededKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnChannelInterruptedKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnOwnerDiedKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnOwnerSpawnedKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnSpellStartKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnAbilityPhaseStartKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnToggleOnKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnToggleOffKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnAbilityPhaseStartKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnEquipKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnUnequipKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnProjectileHitUnitKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnProjectileFinishKV, pContext);
  CDOTA_ActionRunner::PrecacheActions(this->m_pOnCreatedKV, pContext);
  if ( this->m_ModifierKVDescriptions.m_Size > 0 )
  {
    do
      CDOTA_Modifier_DataDriven::Precache(this->m_ModifierKVDescriptions.m_Memory.m_pMemory[v4++], pContext);
    while ( v4 < this->m_ModifierKVDescriptions.m_Size );
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 || (CDOTABaseAbility::LoadAbilityData(this, 0), (m_pAbilityData = this->m_pAbilityData) != 0) )
  {
    m_pKVData = m_pAbilityData->m_pKVData;
    if ( m_pKVData != 0 )
    {
      Key = KeyValues::FindKey(m_pKVData, "precache", 0);
      if ( Key != 0 )
        CDOTAGamerules::PrecacheResourcesFromKeys(Key, pContext->m_pManifest);
    }
  }
}


// CDOTA_Item_DataDriven::Spawn  (line 142, @0x00000000025aa3e0, libserver.so)
// calls: CDOTA_Item::Spawn, CDOTABaseAbility::GetCaster, CDOTA_ActionRunner::PerformActions
void __fastcall CDOTA_Item_DataDriven::Spawn(CDOTA_Item_DataDriven *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTA_Item::Spawn(this, pKeyValues);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_ActionRunner::PerformActions(
    &this->CDOTA_ActionRunner,
    this->m_pOnCreatedKV,
    Caster,
    &CModifierParams::s_Default);
}


// CDOTA_Item_DataDriven::ReadKeyValues  (line 184, @0x00000000025bcc10, libserver.so)  // inlines: ActivityList_IndexForName, AddToTail, CopyConstruct<KeyValues*>, Element, GetAbilityData, GetAbilityKeyValues, GetBool, GrowMemory, operator[]
// calls: KeyValues::GetInt, KeyValues::GetFloat, KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, CUtlMemory<KeyValues*, int>::Grow, KeyValues::GetString, CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Item_DataDriven::Precache
// strings: "AbilityProcsMagicStick", "AbilitySharedWithTeammates", "OnChannelSucceeded", "OnChannelInterrupted", "OnToggleOn", "OnToggleOff" (10 total)
void __fastcall CDOTA_Item_DataDriven::ReadKeyValues(CDOTA_Item_DataDriven *const this)
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
  this->m_pOnOwnerDiedKV = 0;
  this->m_pOnOwnerSpawnedKV = 0;
  this->m_pOnEquipKV = 0;
  this->m_pOnUnequipKV = 0;
  this->m_pOnSpellStartKV = 0;
  this->m_pOnAbilityPhaseStartKV = 0;
  this->m_pOnToggleOnKV = 0;
  this->m_pOnToggleOffKV = 0;
  this->m_pOnCreatedKV = 0;
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
      this->m_pOnOwnerDiedKV = KeyValues::FindKey(m_pKVData, "OnOwnerDied", 0);
      this->m_pOnOwnerSpawnedKV = KeyValues::FindKey(m_pKVData, "OnOwnerSpawned", 0);
      this->m_pOnEquipKV = KeyValues::FindKey(m_pKVData, "OnEquip", 0);
      this->m_pOnUnequipKV = KeyValues::FindKey(m_pKVData, "OnUnequip", 0);
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


// CDOTA_Item_DataDriven::LookupValueSymbol  (line 242, @0x00000000025aee70, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, DOTAGameRules, FStrEq, GetFloat, GetInt, GetLevelSpecialValueFor<CVariantBase<CVariantDefaultAllocator> >, HasAbilityTuningValueFilter, HasScriptFilter, IsConsideredHero, RunAbilityTuningValueFilter, RunScriptFilter, _V_strcmp, entindex, operator float, operator int, strchr, ~CVariantBase
// calls: strchr, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat (21 total)
// strings: "AbilityDuration", "AbilityValueData", "entindex_caster_const", "entindex_ability_const", "value_name_const"
__int64 __fastcall CDOTA_Item_DataDriven::LookupValueSymbol(
        __int64 a1,
        CDOTA_Item_DataDriven *const this,
        const char *pszValue)
{
  const char *v7; // rdi
  bool v8; // zf
  __int64 v9; // rcx
  const char *v10; // rsi
  char *v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  int EffectiveLevel; // r15d
  DOTASpecialAbility_t *SpecialAbility; // r14
  CDOTA_BaseNPC *Caster; // rax
  int m_nCount; // eax
  int v18; // edx
  bool v19; // cc
  fieldtype_t m_FieldType; // eax
  fieldtype_t *v21; // r15
  __int16 v22; // ax
  int v23; // eax
  CDOTABaseGameMode *GameModeEntity; // rax
  CDOTABaseGameMode *v25; // r15
  CDOTA_BaseNPC *v26; // rax
  CEntityIndex v27; // eax
  CEntityIndex v28; // eax
  float v29; // xmm1_4
  float v30; // xmm1_4
  IScriptVM *v31; // rbx
  HSCRIPT m_hContext; // r9
  char v33; // bl
  fieldtype_t v34; // eax
  float v35; // xmm0_4
  int v36; // eax
  float Duration; // xmm0_4
  fieldtype_t *v38; // r15
  float v39; // xmm0_4
  fieldtype_t v40; // eax
  __int64 (__fastcall *v41)(IScriptVM *, uint64, const char *, _QWORD, _QWORD); // rbx
  const char *Name; // rax
  __int64 v43; // rbx
  KeyValues *pKeyValues; // [rsp+10h] [rbp-70h]
  int defaultValue; // [rsp+18h] [rbp-68h]
  float Float; // [rsp+1Ch] [rbp-64h]
  float pflMultiply; // [rsp+28h] [rbp-58h] BYREF
  float pflAdd; // [rsp+2Ch] [rbp-54h] BYREF
  CVariantBase<CVariantDefaultAllocator> v49; // [rsp+30h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v50[4]; // [rsp+40h] [rbp-40h] BYREF

  if ( pszValue != 0 )
  {
    if ( strchr(pszValue, 46) != 0 )
    {
      (*(this->_vptr_CDOTA_ActionRunner + 4))(a1, &this->CDOTA_ActionRunner, pszValue);
    }
    else if ( pszValue == "AbilityDamage" || strcmp(pszValue, "AbilityDamage") == 0 )
    {
      v36 = (*(this->_vptr_IHandleEntity + 247))(this);
      *(a1 + 8) = 5;
      *(a1 + 10) = 0;
      *a1 = v36;
    }
    else
    {
      v7 = "AbilityDuration";
      v8 = pszValue == "AbilityDuration";
      if ( pszValue == "AbilityDuration" )
        goto LABEL_53;
      v9 = 16;
      v10 = pszValue;
      do
      {
        if ( v9 == 0 )
          break;
        v8 = *v10++ == *v7++;
        --v9;
      }
      while ( v8 );
      if ( v8 )
      {
LABEL_53:
        Duration = CDOTABaseAbility::GetDuration(this);
        *(a1 + 8) = 1;
        *(a1 + 10) = 0;
        *a1 = Duration;
      }
      else
      {
        v11 = "GetChannelTime";
        v12 = pszValue == "GetChannelTime";
        if ( pszValue == "GetChannelTime" )
          goto LABEL_48;
        v13 = 15;
        v10 = pszValue;
        do
        {
          if ( v13 == 0 )
            break;
          v12 = *v10++ == *v11++;
          --v13;
        }
        while ( v12 );
        if ( v12 )
        {
LABEL_48:
          v35 = (*(this->_vptr_IHandleEntity + 225))(this, v10);
          *(a1 + 8) = 1;
          *(a1 + 10) = 0;
          *a1 = v35;
        }
        else
        {
          EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
          if ( EffectiveLevel == -1 )
          {
            EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
            if ( EffectiveLevel == -1 )
              goto LABEL_50;
          }
          SpecialAbility = CDOTABaseAbility::GetSpecialAbility(this, pszValue);
          if ( SpecialAbility == 0 )
            goto LABEL_50;
          pflMultiply = 1.0;
          pflAdd = 0.0;
          if ( CDOTABaseAbility::GetCaster(this) != 0 )
          {
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::GetAbilityModifierValues(Caster, pszValue, &pflMultiply, &pflAdd);
          }
          m_nCount = SpecialAbility->m_nCount;
          v18 = m_nCount - 1;
          v19 = m_nCount <= EffectiveLevel;
          m_FieldType = SpecialAbility->m_FieldType;
          if ( v19 )
            EffectiveLevel = v18;
          if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
          {
            v38 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
            if ( *(v38 + 8) == 34 )
              v39 = *(v38 + 1);
            else
              v39 = *(v38 + 2);
            defaultValue = 0;
            Float = (v39 * pflMultiply) + pflAdd;
          }
          else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
          {
            v21 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
            v22 = *(v21 + 8);
            if ( v22 == 1 )
            {
              v23 = *(v21 + 2);
            }
            else if ( v22 == 34 )
            {
              v23 = *(v21 + 1);
            }
            else
            {
              v23 = *(v21 + 2);
            }
            Float = 0.0;
            defaultValue = ((v23 * pflMultiply) + pflAdd);
          }
          else
          {
            defaultValue = 0;
            Float = 0.0;
          }
          if ( CDOTABaseAbility::GetCaster(this) != 0
            && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 3) != 0
            && g_pGameRules != 0 )
          {
            GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
            v25 = GameModeEntity;
            if ( GameModeEntity != 0
              && GameModeEntity->m_AbilityTuningValueFilter.m_hFunction != 0
              && GameModeEntity->m_AbilityTuningValueFilter.m_hContext != 0 )
            {
              pKeyValues = KeyValues::operator new(0x14u);
              KeyValues::KeyValues(pKeyValues, "AbilityValueData");
              if ( CDOTABaseAbility::GetCaster(this) != 0 )
              {
                v26 = CDOTABaseAbility::GetCaster(this);
                v27.m_Data = CEntityInstance::GetEntityIndex(v26).m_Data;
                KeyValues::SetInt(pKeyValues, "entindex_caster_const", v27.m_Data);
              }
              v28.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
              KeyValues::SetInt(pKeyValues, "entindex_ability_const", v28.m_Data);
              KeyValues::SetString(pKeyValues, "value_name_const", pszValue);
              KeyValues::SetFloat(pKeyValues, "value", v29);
              if ( v25->m_AbilityTuningValueFilter.m_hFunction != 0
                && v25->m_AbilityTuningValueFilter.m_hContext != 0
                && pKeyValues != 0 )
              {
                v49.m_uint64 = 0;
                v49.m_type = 0;
                v49.m_flags = 0;
                v31 = g_pScriptVM;
                (*(*g_pScriptVM + 264LL))(g_pScriptVM, &v49);
                if ( v49.m_uint64 != 0 )
                  Recursive_ConvertKeyValuesToTable(pKeyValues, v31, v49.m_hScript);
                v50[0].m_uint64 = 0;
                v50[0].m_type = 0;
                m_hContext = v25->m_AbilityTuningValueFilter.m_hContext;
                v50[0].m_flags = 0;
                (*(*g_pScriptVM + 160LL))(
                  g_pScriptVM,
                  v25->m_AbilityTuningValueFilter.m_hFunction,
                  &v49,
                  1,
                  v50,
                  m_hContext,
                  1);
                v33 = 0;
                if ( v50[0].m_type == 6 && v50[0].m_char != 0 )
                {
                  v41 = *(*g_pScriptVM + 304LL);
                  Name = KeyValues::GetName(pKeyValues);
                  v43 = v41(g_pScriptVM, v49.m_uint64, Name, 0, 0);
                  if ( v43 != 0 )
                  {
                    KeyValues::~KeyValues(pKeyValues);
                    KeyValues::operator delete(pKeyValues);
                    pKeyValues = v43;
                  }
                  v33 = 1;
                }
                (*(*g_pScriptVM + 344LL))(g_pScriptVM, &v49);
                CVariantBase<CVariantDefaultAllocator>::Free(v50);
                CVariantBase<CVariantDefaultAllocator>::Free(&v49);
                if ( v33 == 0 )
                  goto LABEL_44;
              }
              v40 = SpecialAbility->m_FieldType;
              if ( v40 == fieldtype_t::FIELD_FLOAT )
              {
                Float = KeyValues::GetFloat(pKeyValues, "value", v30);
              }
              else if ( v40 == fieldtype_t::FIELD_INTEGER )
              {
                defaultValue = KeyValues::GetInt(pKeyValues, "value", defaultValue);
              }
              if ( pKeyValues != 0 )
              {
LABEL_44:
                KeyValues::~KeyValues(pKeyValues);
                KeyValues::operator delete(pKeyValues);
              }
            }
          }
          v34 = SpecialAbility->m_FieldType;
          if ( v34 == fieldtype_t::FIELD_FLOAT )
          {
            *(a1 + 8) = 1;
            *(a1 + 10) = 0;
            *a1 = Float;
            return a1;
          }
          if ( v34 != fieldtype_t::FIELD_INTEGER )
          {
LABEL_50:
            *a1 = 0;
            *(a1 + 8) = 5;
            *(a1 + 10) = 0;
          }
          else
          {
            *(a1 + 8) = 5;
            *(a1 + 10) = 0;
            *a1 = defaultValue;
          }
        }
      }
    }
  }
  else
  {
    *(a1 + 8) = 0;
    *(a1 + 10) = 0;
    *a1 = 0;
  }
  return a1;
}


// CDOTA_Item_DataDriven::FindNamedTarget  (line 271, @0x00000000025c47a0, libserver.so)  // inlines: FStrEq, ToDOTABaseNPC, _V_strcmp
// calls: CDOTA_ActionRunner::FindNamedTarget, CDOTABaseAbility::GetCursorTarget
// strings: "CURSOR_TARGET"
CDOTA_BaseNPC *__fastcall CDOTA_Item_DataDriven::FindNamedTarget(
        CDOTA_Item_DataDriven *const this,
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


// CDOTA_Item_DataDriven::LookupModifierCreateParameters  (line 280, @0x00000000025c4810, libserver.so)  // inlines: GetAbilityName
// calls: CDOTA_Item_DataDriven::GetModifierDataIndexByName, KeyValues::SetString, DOTAGameManager, CDOTAGameManager::GetAbilityIndex, KeyValues::SetInt, KeyValues::GetString, KeyValues::SetFloat, CDOTA_ActionRunner::LookupModifierCreateParameters
// strings: "modifier_datadriven", "<NoAbilityName>", "dd_ability_index", "dd_index"
bool __fastcall CDOTA_Item_DataDriven::LookupModifierCreateParameters(
        CDOTA_Item_DataDriven *const this,
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

  ModifierDataIndexByName = CDOTA_Item_DataDriven::GetModifierDataIndexByName(this, pszModifierName);
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


// CDOTA_Item_DataDriven::RefreshIntrinsicModifier  (line 303, @0x00000000025a9580, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetBool, GetParent, Purge, RemoveAll, SetAttributes, ToDOTABaseNPC, end, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Item::RefreshIntrinsicModifier, CGameSceneNode::GetOwnerEntity, KeyValues::GetInt, KeyValues::GetName, CDOTA_ModifierManager::FindModifiersOfName, CDOTA_Buff::GetAbility, KeyValues::KeyValues, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlMemory<CDOTA_Buff*, int>::Purge, CUtlVectorBase<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> >::~CUtlVectorBase (14 total)
// strings: "modifier_datadriven"
CDOTA_Buff *__fastcall CDOTA_Item_DataDriven::RefreshIntrinsicModifier(CDOTA_Item_DataDriven *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  KeyValues *v4; // rax
  const char *Name; // rax
  CDOTA_Buff **m_pMemory; // rbx
  char v7; // r12
  CDOTA_Buff **v8; // r14
  const char *v9; // rax
  void (__fastcall *v10)(CDOTA_Item_DataDriven *const, KeyValues *, const char *); // rbx
  const char *v11; // rax
  const char *v12; // rax
  CDOTA_Buff *v13; // rax
  CDOTA_Buff *pResult; // [rsp+0h] [rbp-B0h]
  CDOTA_BaseNPC *pCaster; // [rsp+8h] [rbp-A8h]
  CDOTA_ModifierManager *v17; // [rsp+10h] [rbp-A0h]
  KeyValues *pModifierKV; // [rsp+28h] [rbp-88h]
  int nModifierIndex; // [rsp+34h] [rbp-7Ch]
  __int64 v20; // [rsp+38h] [rbp-78h]
  CUtlVector<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> > vecExistingBuffs; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  pResult = CDOTA_Item::RefreshIntrinsicModifier(this);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    pCaster = OwnerEntity;
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC && this->m_ModifierKVDescriptions.m_Size > 0 )
    {
      v20 = 0;
      nModifierIndex = 0;
      v17 = &OwnerEntity[4];
      do
      {
        v4 = this->m_ModifierKVDescriptions.m_Memory.m_pMemory[v20];
        pModifierKV = v4;
        if ( v4 != 0 && KeyValues::GetInt(v4, "Passive", 0) != 0 )
        {
          vecExistingBuffs.m_Size = 0;
          vecExistingBuffs.m_Memory.m_pMemory = 0;
          vecExistingBuffs.m_Memory.m_nAllocationCount = 0;
          vecExistingBuffs.m_Memory.m_nGrowSize = 0;
          Name = KeyValues::GetName(pModifierKV);
          CDOTA_ModifierManager::FindModifiersOfName(v17, Name, &vecExistingBuffs);
          m_pMemory = vecExistingBuffs.m_Memory.m_pMemory;
          v7 = 0;
          v8 = &vecExistingBuffs.m_Memory.m_pMemory[vecExistingBuffs.m_Size];
          if ( vecExistingBuffs.m_Memory.m_pMemory == v8 )
            goto LABEL_14;
          do
          {
            if ( *m_pMemory != 0 && this == CDOTA_Buff::GetAbility(*m_pMemory) )
              v7 = 1;
            ++m_pMemory;
          }
          while ( v8 != m_pMemory );
          if ( v7 == 0 )
          {
LABEL_14:
            v9 = KeyValues::GetName(pModifierKV);
            KeyValues::KeyValues(&kv, v9);
            KeyValues::SetString(&kv, "BaseClass", "modifier_datadriven");
            v10 = *(this->_vptr_IHandleEntity + 367);
            v11 = KeyValues::GetName(pModifierKV);
            v10(this, &kv, v11);
            v12 = KeyValues::GetName(&kv);
            v13 = CDOTA_BaseNPC::AddNewModifier(pCaster, pCaster, this, v12, &kv, 0);
            if ( v13 != 0 )
              v13->m_iAttributes |= (*(v13->_vptr_CDOTA_Buff + 7))(v13) | 1;
            KeyValues::~KeyValues(&kv);
          }
          vecExistingBuffs.m_Size = 0;
          if ( (vecExistingBuffs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CDOTA_Buff *,int>::Purge(&vecExistingBuffs.m_Memory);
            if ( (vecExistingBuffs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CDOTA_Buff *,int>::Purge(&vecExistingBuffs.m_Memory);
          }
        }
        ++nModifierIndex;
        ++v20;
      }
      while ( this->m_ModifierKVDescriptions.m_Size > nModifierIndex );
    }
  }
  return pResult;
}


// CDOTA_Item_DataDriven::Script_ApplyDataDrivenModifier  (line 343, @0x00000000025abab0, libserver.so)  // inlines: AssignTo, CVariantBase, HScriptToEntity<CBaseEntity>, SetBool, TempString, ToDOTABaseNPC, ToEnt, ToString, operator const Vector&, operator float, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, Warning, KeyValues::SetInt, UTIL_VarArgs, KeyValues::SetString, KeyValues::SetFloat, VariantFieldTypeName, DevMsg(char const*,...) (15 total)
// strings: "ApplyModifier", "HSCRIPT argument unsupported in Script_ApplyDataDrivenModifier table\n", "Unsupported KeyValue type for key %s (type %s)\n", "%s - invalid modifier name specified.\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n" (9 total)
// globals: jpt_25ABC7E, jpt_25ABEA3, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_25AC133
void __fastcall CDOTA_Item_DataDriven::Script_ApplyDataDrivenModifier(
        CDOTA_Item_DataDriven *const this,
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
  int v13; // r12d
  unsigned int v14; // r14d
  float v15; // xmm1_4
  const char *m_uint64; // r15
  const Vector *v17; // rax
  char *v18; // rax
  const char *v19; // r15
  const char *v20; // rsi
  const char *v21; // rax
  double m_float; // xmm0_8
  const char *v23; // rcx
  const char *v24; // rax
  double m_float64; // xmm0_8
  const char *v26; // rcx
  CDOTA_BaseNPC *v27; // [rsp+10h] [rbp-B0h]
  CBaseEntity *pCaster; // [rsp+20h] [rbp-A0h]
  int num_entries; // [rsp+3Ch] [rbp-84h]
  ScriptVariant_t vKey; // [rsp+50h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+60h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-38h]

  v36 = __readfsqword(0x28u);
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
  if ( hTarget != 0 )
  {
    v10 = *(*g_pScriptVM + 208LL);
    v11 = GetScriptDesc<CEntityInstance>(0);
    v12 = v10(g_pScriptVM, hTarget, v11);
    v27 = v12;
    if ( v12 != 0 && *(v12 + 339) != 0 && pCaster != 0 && pszModifierName != 0 )
    {
      KeyValues::KeyValues(&kv, "ApplyModifier");
      if ( (*(this->_vptr_IHandleEntity + 367))(this, &kv, pszModifierName) != 0 )
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
          v13 = 0;
          v14 = 0;
          do
          {
            v14 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hModifierTable, v14, &vKey, &vValue);
            if ( vKey.m_type == 30 )
            {
              m_uint64 = vKey.m_uint64;
            }
            else
            {
              switch ( vKey.m_type )
              {
                case 0:
                  goto LABEL_38;
                case 1:
                  m_float = vKey.m_float;
                  goto LABEL_42;
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
                  v23 = "true";
                  if ( vKey.m_char == 0 )
                    v23 = "false";
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v23);
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
                  m_float = vKey.m_float64;
LABEL_42:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
                  break;
                case 0x25:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                  break;
                default:
                  v21 = VariantFieldTypeName(vKey.m_type);
                  Warning("No conversion from %s to string at the moment!\n", v21);
LABEL_38:
                  CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                  break;
              }
              m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            switch ( vValue.m_type )
            {
              case 1:
              case 0x22:
                KeyValues::SetFloat(&kv, m_uint64, v15);
                break;
              case 3:
                v17 = vValue.m_uint64;
                if ( vValue.m_uint64 == 0 )
                  v17 = &vec3_origin;
                v18 = UTIL_VarArgs("%f %f %f", v17->x, v17->y, v17->z);
                KeyValues::SetString(&kv, m_uint64, v18);
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
                v19 = VariantFieldTypeName(vValue.m_type);
                if ( vKey.m_type == 30 )
                {
                  v20 = vKey.m_uint64;
                }
                else
                {
                  switch ( vKey.m_type )
                  {
                    case 0:
                      goto LABEL_57;
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
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%d",
                        vKey.m_int);
                      break;
                    case 6:
                      v26 = "true";
                      if ( vKey.m_char == 0 )
                        v26 = "false";
                      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v26);
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
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%g",
                        m_float64);
                      break;
                    case 0x25:
                      V_snprintf(
                        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                        512,
                        "%u",
                        vKey.m_int);
                      break;
                    default:
                      v24 = VariantFieldTypeName(vKey.m_type);
                      Warning("No conversion from %s to string at the moment!\n", v24);
LABEL_57:
                      CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                      break;
                  }
                  v20 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
                }
                Warning("Unsupported KeyValue type for key %s (type %s)\n", v20, v19);
                break;
            }
            (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
            (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
            ++v13;
          }
          while ( v13 != num_entries );
        }
        CDOTA_BaseNPC::AddNewModifier(v27, pCaster, this, pszModifierName, &kv, 0);
        CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
        CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
        KeyValues::~KeyValues(&kv);
      }
      else
      {
        DevMsg("%s - invalid modifier name specified.\n", pszModifierName);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Item_DataDriven::Script_ApplyDataDrivenThinker  (line 400, @0x00000000025ac3c0, libserver.so)  // inlines: AssignTo, CVariantBase, EntityToHScript, Get, GetPublicScriptScope, GetTeamNumber, HScriptToEntity<CBaseEntity>, SetBool, TempString, ToDOTABaseNPC, ToEnt, ToHScript, ToString, operator const Vector&, operator float, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, KeyValues::KeyValues, DevMsg(char const*,...), KeyValues::~KeyValues, Warning, Thinker_Create, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::SetInt, KeyValues::SetFloat, UTIL_VarArgs, KeyValues::SetString, VariantFieldTypeName (16 total)
// strings: "ApplyModifier", "%s - invalid modifier name specified.\n", "HSCRIPT argument unsupported in Script_ApplyDataDrivenThinker table\n", "Unsupported KeyValue type for key %s (type %s)\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n" (9 total)
// globals: jpt_25AC5A4, jpt_25AC78B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_25ACA1B
HSCRIPT __fastcall CDOTA_Item_DataDriven::Script_ApplyDataDrivenThinker(
        CDOTA_Item_DataDriven *const this,
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
  CDOTA_BaseNPC *v17; // r12
  const Vector *v18; // rax
  char *v19; // rax
  const char *v20; // r15
  const char *v21; // rsi
  const char *v22; // rax
  double m_float; // xmm0_8
  const char *v24; // rcx
  const char *v25; // rax
  double m_float64; // xmm0_8
  const char *v27; // rcx
  CBaseEntity *pEntity; // [rsp+18h] [rbp-B8h]
  int num_entries; // [rsp+3Ch] [rbp-94h]
  Vector vLocationa; // [rsp+50h] [rbp-80h]
  ScriptVariant_t vKey; // [rsp+60h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+70h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+98h] [rbp-38h]

  v37 = __readfsqword(0x28u);
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
  if ( (*(this->_vptr_IHandleEntity + 367))(this, &kv, pszModifierName) != 0 )
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
              goto LABEL_36;
            case 1:
              m_float = vKey.m_float;
              goto LABEL_38;
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
              v24 = "true";
              if ( vKey.m_char == 0 )
                v24 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v24);
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
LABEL_38:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v22 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v22);
LABEL_36:
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
            v18 = vValue.m_uint64;
            if ( vValue.m_uint64 == 0 )
              v18 = &vec3_origin;
            v19 = UTIL_VarArgs("%f %f %f", v18->x, v18->y, v18->z);
            KeyValues::SetString(&kv, m_uint64, v19);
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
            v20 = VariantFieldTypeName(vValue.m_type);
            if ( vKey.m_type == 30 )
            {
              v21 = vKey.m_uint64;
            }
            else
            {
              switch ( vKey.m_type )
              {
                case 0:
                  goto LABEL_55;
                case 1:
                  m_float64 = vKey.m_float;
                  goto LABEL_57;
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
                  v27 = "true";
                  if ( vKey.m_char == 0 )
                    v27 = "false";
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v27);
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
LABEL_57:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                  break;
                case 0x25:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                  break;
                default:
                  v25 = VariantFieldTypeName(vKey.m_type);
                  Warning("No conversion from %s to string at the moment!\n", v25);
LABEL_55:
                  CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                  break;
              }
              v21 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            Warning("Unsupported KeyValue type for key %s (type %s)\n", v21, v20);
            break;
        }
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
        ++v12;
      }
      while ( v12 != num_entries );
    }
    v16 = Thinker_Create(pEntity, this, pszModifierName, &kv, vLocationa, pEntity->m_iTeamNum.m_Value, 0, 1, 0);
    v17 = v16;
    if ( v16 != 0 )
    {
      m_hScope = v16->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(v16, 0);
        m_hScope = v17->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      m_hScope = 0;
    }
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


// CDOTA_Item_DataDriven::GetCastRange  (line 455, @0x00000000025aa530, libserver.so)  // inlines: GetAbilityData, GetAbilityKeyValues, Int, operator int, ~CVariantBase
// calls: KeyValues::FindKey, KeyValues::GetString, CDOTABaseAbility::GetCastRange, CVariantBase<CVariantDefaultAllocator>::Free, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Item_DataDriven::GetCastRange(
        CDOTA_Item_DataDriven *const this,
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
  (*(this->_vptr_IHandleEntity + 364))(&symbolValue, this, String + 1);
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


// CDOTA_Item_DataDriven::OnToggle  (line 473, @0x0000000002594340, libserver.so)
// calls: CDOTABaseAbility::OnToggle, CDOTABaseAbility::GetCaster, CDOTA_ActionRunner::PerformActions
void __fastcall CDOTA_Item_DataDriven::OnToggle(CDOTA_Item_DataDriven *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  KeyValues *m_pOnToggleOnKV; // rsi

  CDOTABaseAbility::OnToggle(this);
  if ( this->m_bToggleState.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    m_pOnToggleOnKV = this->m_pOnToggleOnKV;
  }
  else
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    m_pOnToggleOnKV = this->m_pOnToggleOffKV;
  }
  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnToggleOnKV, Caster, &CModifierParams::s_Default);
}


// CDOTA_Item_DataDriven::OnOwnerSpawned  (line 487, @0x00000000025943a0, libserver.so)
// calls: CDOTABaseAbility::OnOwnerSpawned, CDOTABaseAbility::GetCaster, CDOTA_ActionRunner::PerformActions
void __fastcall CDOTA_Item_DataDriven::OnOwnerSpawned(CDOTA_Item_DataDriven *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnOwnerSpawned(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_ActionRunner::PerformActions(
    &this->CDOTA_ActionRunner,
    this->m_pOnOwnerSpawnedKV,
    Caster,
    &CModifierParams::s_Default);
}


// CDOTA_Item_DataDriven::OnUpgrade  (line 494, @0x00000000025943e0, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Item_DataDriven::OnUpgrade(CDOTA_Item_DataDriven *const this)
{
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Item_DataDriven::OnEquip  (line 499, @0x00000000025961e0, libserver.so)
// calls: CDOTA_Item::OnEquip, CDOTABaseAbility::GetCaster, CDOTA_ActionRunner::PerformActions
void __fastcall CDOTA_Item_DataDriven::OnEquip(CDOTA_Item_DataDriven *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTA_Item::OnEquip(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, this->m_pOnEquipKV, Caster, &CModifierParams::s_Default);
}


// CDOTA_Item_DataDriven::OnUnequip  (line 505, @0x00000000025a9850, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetBool, Purge, RemoveAll, end, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetInt, CDOTABaseAbility::GetCaster, KeyValues::GetName, CDOTA_ModifierManager::FindModifiersOfName, CDOTA_Buff::GetAbility, CDOTA_Buff::Destroy, CDOTA_Item::OnUnequip, CDOTA_ActionRunner::PerformActions, CUtlMemory<CDOTA_Buff*, int>::Purge, CUtlVectorBase<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTA_Item_DataDriven::OnUnequip(CDOTA_Item_DataDriven *const this)
{
  __int64 v2; // r15
  KeyValues **m_pMemory; // rax
  const KeyValues *v4; // rbx
  const char *Name; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff **v7; // rbx
  CDOTA_Buff **v8; // r14
  CDOTA_Buff *v9; // r12
  CDOTA_BaseNPC *v10; // rax
  CUtlVector<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> > vecBuffs; // [rsp+10h] [rbp-50h] BYREF

  if ( this->m_ModifierKVDescriptions.m_Size > 0 )
  {
    v2 = 0;
    do
    {
      m_pMemory = this->m_ModifierKVDescriptions.m_Memory.m_pMemory;
      v4 = m_pMemory[v2];
      if ( v4 != 0 && KeyValues::GetInt(m_pMemory[v2], "Passive", 0) != 0 && CDOTABaseAbility::GetCaster(this) != 0 )
      {
        vecBuffs.m_Size = 0;
        vecBuffs.m_Memory.m_pMemory = 0;
        vecBuffs.m_Memory.m_nAllocationCount = 0;
        vecBuffs.m_Memory.m_nGrowSize = 0;
        Name = KeyValues::GetName(v4);
        Caster = CDOTABaseAbility::GetCaster(this);
        CDOTA_ModifierManager::FindModifiersOfName(&Caster->m_ModifierManager, Name, &vecBuffs);
        v7 = vecBuffs.m_Memory.m_pMemory;
        v8 = &vecBuffs.m_Memory.m_pMemory[vecBuffs.m_Size];
        if ( vecBuffs.m_Memory.m_pMemory != v8 )
        {
          do
          {
            while ( 1 )
            {
              v9 = *v7;
              if ( *v7 != 0 && CDOTA_Buff::GetAbility(*v7) == this )
                break;
              if ( v8 == ++v7 )
                goto LABEL_12;
            }
            CDOTA_Buff::Destroy(v9, 0, 0, 0);
            ++v7;
          }
          while ( v8 != v7 );
        }
LABEL_12:
        vecBuffs.m_Size = 0;
        if ( (vecBuffs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CDOTA_Buff *,int>::Purge(&vecBuffs.m_Memory);
          if ( (vecBuffs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CDOTA_Buff *,int>::Purge(&vecBuffs.m_Memory);
        }
      }
      ++v2;
    }
    while ( v2 < this->m_ModifierKVDescriptions.m_Size );
  }
  CDOTA_Item::OnUnequip(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, this->m_pOnUnequipKV, v10, &CModifierParams::s_Default);
}


// CDOTA_Item_DataDriven::GetCastAnimation  (line 532, @0x0000000002594120, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CBaseAnimating::SelectWeightedSequence
Activity __fastcall CDOTA_Item_DataDriven::GetCastAnimation(CDOTA_Item_DataDriven *const this)
{
  Activity result; // eax
  int v3; // r12d
  int v4; // edx
  Activity v5; // r14d
  Activity v6; // r15d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax

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
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( CBaseAnimating::SelectWeightedSequence(Caster, v5).m_Data != -1 )
        break;
      if ( v6 <= 1519 )
      {
        v8 = CDOTABaseAbility::GetCaster(this);
        if ( CBaseAnimating::SelectWeightedSequence(v8, v6).m_Data != -1 )
          return v6;
      }
      if ( ++v3 == 6 )
        return -1;
    }
    return v5;
  }
  return result;
}


// CDOTA_Item_DataDriven::GetChannelAnimation  (line 558, @0x0000000002594210, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CBaseAnimating::SelectWeightedSequence
Activity __fastcall CDOTA_Item_DataDriven::GetChannelAnimation(CDOTA_Item_DataDriven *const this)
{
  Activity m_CastAnimation; // r14d
  Activity result; // eax
  int i; // r15d
  int v5; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  HSequence v8; // edx
  Activity v9; // ebx
  CDOTA_BaseNPC *v10; // rax

  if ( (*(this->_vptr_IHandleEntity + 251))(this) >= 0 )
    return -1;
  m_CastAnimation = this->m_CastAnimation;
  result = m_CastAnimation;
  if ( m_CastAnimation == -1 )
  {
    for ( i = 0; i != 6; ++i )
    {
      v5 = (i + this->m_iAbilityIndex) % 6;
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( CBaseAnimating::SelectWeightedSequence(Caster, v5 + 1520).m_Data != -1 )
        return v5 + 1520;
      if ( m_CastAnimation == -1 )
      {
        v9 = v5 + 1510;
        v10 = CDOTABaseAbility::GetCaster(this);
        if ( CBaseAnimating::SelectWeightedSequence(v10, v9).m_Data != -1 )
          m_CastAnimation = v9;
      }
    }
    v7 = CDOTABaseAbility::GetCaster(this);
    v8.m_Data = CBaseAnimating::SelectWeightedSequence(v7, 1600).m_Data;
    result = 1600;
    if ( v8.m_Data == -1 )
      return m_CastAnimation;
  }
  return result;
}


// CDOTA_Item_DataDriven::OnOwnerDied  (line 589, @0x00000000025a4a60, libserver.so)
// calls: CDOTA_Item::OnOwnerDied, CDOTABaseAbility::GetCaster, CDOTA_ActionRunner::PerformActions
void __fastcall CDOTA_Item_DataDriven::OnOwnerDied(CDOTA_Item_DataDriven *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTA_Item::OnOwnerDied(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_ActionRunner::PerformActions(
    &this->CDOTA_ActionRunner,
    this->m_pOnOwnerDiedKV,
    Caster,
    &CModifierParams::s_Default);
}


// CDOTA_Item_DataDriven::OnSpellStart  (line 596, @0x00000000025969c0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, SetTarget, SetUnit, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ActionRunner::PerformActions, CDOTABaseAbility::GetCursorPosition
void __fastcall CDOTA_Item_DataDriven::OnSpellStart(CDOTA_Item_DataDriven *const this)
{
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v6; // rdx
  __int16 v7; // cx
  CDOTA_BaseNPC *v8; // rax
  CEntityIdentity *v9; // rdx
  __int16 v10; // cx
  CBaseEntity *v11; // rax
  CDOTA_Item_DataDriven *v12; // rdi
  CBaseEntity *v13; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  CBaseEntity *v19; // rax
  CModifierParams context; // [rsp+10h] [rbp-A0h] BYREF
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
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster == 0 )
        goto LABEL_22;
    }
    else
    {
      context.htarget.m_Index = -1;
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster == 0 )
        goto LABEL_22;
    }
    v6 = Caster->m_pEntity;
    if ( v6 != 0 )
    {
      v7 = 0x7FFF;
      if ( v6->m_EHandle.m_Index != -1 )
        v7 = v6->m_EHandle.m_Index & 0x7FFF;
      context.hattacker.m_Index = (((v6->m_EHandle.m_Index >> 15) - (v6->m_flags & 1)) << 15) | v7 & 0x7FFF;
LABEL_11:
      v8 = CDOTABaseAbility::GetCaster(this);
      if ( v8 != 0 && (v9 = v8->m_pEntity) != 0 )
      {
        v10 = 0x7FFF;
        if ( v9->m_EHandle.m_Index != -1 )
          v10 = v9->m_EHandle.m_Index & 0x7FFF;
        context.hunit.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
        v11 = CDOTABaseAbility::GetCursorTarget(this);
        v12 = this;
        if ( v11 != 0 )
          goto LABEL_16;
      }
      else
      {
        context.hunit.m_Index = -1;
        v19 = CDOTABaseAbility::GetCursorTarget(this);
        v12 = this;
        if ( v19 != 0 )
        {
LABEL_16:
          v13 = CDOTABaseAbility::GetCursorTarget(v12);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
          x = AbsOrigin->x;
          y = AbsOrigin->y;
          z = AbsOrigin->z;
LABEL_17:
          context.vNewLoc.x = x;
          context.vNewLoc.y = y;
          context.vNewLoc.z = z;
          v18 = CDOTABaseAbility::GetCaster(this);
          CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, this->m_pOnSpellStartKV, v18, &context);
          return;
        }
      }
      CursorPosition = CDOTABaseAbility::GetCursorPosition(v12);
      z = CursorPosition.z;
      x = CursorPosition.x;
      y = CursorPosition.y;
      goto LABEL_17;
    }
LABEL_22:
    context.hattacker.m_Index = -1;
    goto LABEL_11;
  }
}


// CDOTA_Item_DataDriven::OnAbilityPhaseStart  (line 611, @0x0000000002596ca0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, SetTarget, SetUnit, operator=
// calls: CDOTABaseAbility::OnAbilityPhaseStart, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ActionRunner::PerformActions, CDOTABaseAbility::GetCursorPosition
bool __fastcall CDOTA_Item_DataDriven::OnAbilityPhaseStart(CDOTA_Item_DataDriven *const this)
{
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v6; // rdx
  __int16 v7; // cx
  CDOTA_BaseNPC *v8; // rax
  CEntityIdentity *v9; // rdx
  __int16 v10; // cx
  CBaseEntity *v11; // rax
  CDOTA_Item_DataDriven *v12; // rdi
  CBaseEntity *v13; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  CBaseEntity *v20; // rax
  CModifierParams context; // [rsp+10h] [rbp-A0h] BYREF
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
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster == 0 )
        goto LABEL_22;
    }
    else
    {
      context.htarget.m_Index = -1;
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster == 0 )
        goto LABEL_22;
    }
    v6 = Caster->m_pEntity;
    if ( v6 != 0 )
    {
      v7 = 0x7FFF;
      if ( v6->m_EHandle.m_Index != -1 )
        v7 = v6->m_EHandle.m_Index & 0x7FFF;
      context.hattacker.m_Index = (((v6->m_EHandle.m_Index >> 15) - (v6->m_flags & 1)) << 15) | v7 & 0x7FFF;
LABEL_11:
      v8 = CDOTABaseAbility::GetCaster(this);
      if ( v8 != 0 && (v9 = v8->m_pEntity) != 0 )
      {
        v10 = 0x7FFF;
        if ( v9->m_EHandle.m_Index != -1 )
          v10 = v9->m_EHandle.m_Index & 0x7FFF;
        context.hunit.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
        v11 = CDOTABaseAbility::GetCursorTarget(this);
        v12 = this;
        if ( v11 != 0 )
          goto LABEL_16;
      }
      else
      {
        context.hunit.m_Index = -1;
        v20 = CDOTABaseAbility::GetCursorTarget(this);
        v12 = this;
        if ( v20 != 0 )
        {
LABEL_16:
          v13 = CDOTABaseAbility::GetCursorTarget(v12);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
          x = AbsOrigin->x;
          y = AbsOrigin->y;
          z = AbsOrigin->z;
LABEL_17:
          context.vNewLoc.x = x;
          context.vNewLoc.y = y;
          context.vNewLoc.z = z;
          v18 = CDOTABaseAbility::GetCaster(this);
          CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, this->m_pOnAbilityPhaseStartKV, v18, &context);
          return 1;
        }
      }
      CursorPosition = CDOTABaseAbility::GetCursorPosition(v12);
      z = CursorPosition.z;
      x = CursorPosition.x;
      y = CursorPosition.y;
      goto LABEL_17;
    }
LABEL_22:
    context.hattacker.m_Index = -1;
    goto LABEL_11;
  }
  return 1;
}


// CDOTA_Item_DataDriven::OnChannelFinish  (line 627, @0x0000000002596f90, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, SetTarget, SetUnit, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ActionRunner::PerformActions, CDOTABaseAbility::GetCursorPosition
void __fastcall CDOTA_Item_DataDriven::OnChannelFinish(CDOTA_Item_DataDriven *const this, bool bInterrupted)
{
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  CEntityIdentity *v11; // rdx
  __int16 v12; // cx
  CBaseEntity *v13; // rax
  CDOTA_Item_DataDriven *v14; // rdi
  CBaseEntity *v15; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  bool v20; // zf
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CBaseEntity *v24; // rax
  CModifierParams context; // [rsp+10h] [rbp-A0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  if ( this->m_pOnChannelFinishKV == 0 && this->m_pOnChannelSucceededKV == 0 && this->m_pOnChannelInterruptedKV == 0 )
    return;
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
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (v8 = Caster->m_pEntity) != 0 )
  {
    v9 = 0x7FFF;
    if ( v8->m_EHandle.m_Index != -1 )
      v9 = v8->m_EHandle.m_Index & 0x7FFF;
    context.hattacker.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
    v10 = CDOTABaseAbility::GetCaster(this);
    if ( v10 == 0 )
      goto LABEL_32;
  }
  else
  {
    context.hattacker.m_Index = -1;
    v10 = CDOTABaseAbility::GetCaster(this);
    if ( v10 == 0 )
      goto LABEL_32;
  }
  v11 = v10->m_pEntity;
  if ( v11 != 0 )
  {
    v12 = 0x7FFF;
    if ( v11->m_EHandle.m_Index != -1 )
      v12 = v11->m_EHandle.m_Index & 0x7FFF;
    context.hunit.m_Index = (((v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1)) << 15) | v12 & 0x7FFF;
    v13 = CDOTABaseAbility::GetCursorTarget(this);
    v14 = this;
    if ( v13 != 0 )
      goto LABEL_16;
    goto LABEL_33;
  }
LABEL_32:
  context.hunit.m_Index = -1;
  v24 = CDOTABaseAbility::GetCursorTarget(this);
  v14 = this;
  if ( v24 != 0 )
  {
LABEL_16:
    v15 = CDOTABaseAbility::GetCursorTarget(v14);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
    goto LABEL_17;
  }
LABEL_33:
  CursorPosition = CDOTABaseAbility::GetCursorPosition(v14);
  z = CursorPosition.z;
  x = CursorPosition.x;
  y = CursorPosition.y;
LABEL_17:
  v20 = this->m_pOnChannelFinishKV == 0;
  context.vNewLoc.x = x;
  context.vNewLoc.y = y;
  context.vNewLoc.z = z;
  if ( !v20 )
  {
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, this->m_pOnChannelFinishKV, v21, &context);
  }
  if ( this->m_pOnChannelSucceededKV == 0 )
  {
    if ( this->m_pOnChannelInterruptedKV == 0 || !bInterrupted )
      return;
LABEL_22:
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, this->m_pOnChannelInterruptedKV, v22, &context);
    return;
  }
  if ( !bInterrupted )
  {
    v23 = CDOTABaseAbility::GetCaster(this);
    CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, this->m_pOnChannelSucceededKV, v23, &context);
    return;
  }
  if ( this->m_pOnChannelInterruptedKV != 0 )
    goto LABEL_22;
}


// CDOTA_Item_DataDriven::OnProjectileHit  (line 656, @0x0000000002598940, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTA_ActionRunner::PerformActions, KeyValues::GetInt
// strings: "DeleteOnHit"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Item_DataDriven::OnProjectileHit(
        CDOTA_Item_DataDriven *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // ecx
  unsigned int v5; // edi
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  KeyValues *m_pOnProjectileHitUnitKV; // rbx
  bool result; // al
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v18; // cx
  CModifierParams prmContext; // [rsp+0h] [rbp-A0h] BYREF

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
              v18 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              prmContext.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                         | v18 & 0x7FFF;
            }
          }
        }
      }
    }
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnProjectileHitUnitKV, Caster, &prmContext);
    return KeyValues::GetInt(m_pOnProjectileHitUnitKV, "DeleteOnHit", 1) != 0;
  }
  return result;
}


