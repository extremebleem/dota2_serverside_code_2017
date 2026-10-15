// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_modifier_datadriven.cpp:1452
class CDOTA_Orb_DataDriven : public CDOTA_Orb {
public:

private:

	int m_nOrbLabel;  // +0x18
	int m_nModifierIndexInAbility;  // +0x1c
	const char * m_pszProjectileName;  // +0x20
	CDOTA_Orb_DataDriven(CDOTA_Orb_DataDriven &);
	CDOTA_Orb_DataDriven(const CDOTA_Orb_DataDriven &);
	CDOTA_Orb_DataDriven(CDOTA_Modifier_DataDriven *, CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual int GetOrbLabel();
	virtual void OnOrbImpact(const CModifierParams &);
	virtual void OnOrbFire(const CModifierParams &);
	virtual ~CDOTA_Orb_DataDriven();

	// vtable[3] GetProjectileName
	// vtable[4] GetOrbLabel
	// vtable[8] OnOrbImpact
	// vtable[6] OnOrbFire
	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Modifier_DataDriven::CDOTA_Modifier_DataDriven  (line 31, @0x0000000002621ad0, libserver.so)  // inlines: ModifierVariant_t
// calls: CDOTA_Buff::CDOTA_Buff, CDOTA_ActionRunner::CDOTA_ActionRunner, CDOTA_Buff::~CDOTA_Buff, _Unwind_Resume
// callers: CModifierFactory<CDOTA_Modifier_DataDriven>::Create
void __fastcall CDOTA_Modifier_DataDriven::CDOTA_Modifier_DataDriven(CDOTA_Modifier_DataDriven *const this)
{
  CDOTA_Modifier_DataDriven *m_ModifierPropertyValues; // rax

  CDOTA_Buff::CDOTA_Buff(this);
  CDOTA_ActionRunner::CDOTA_ActionRunner(&this->CDOTA_ActionRunner);
  this->m_nAbilityIndex = -1;
  this->_vptr_CDOTA_Buff = &off_412BBF0;
  this->_vptr_CDOTA_ActionRunner = &off_412BEF8;
  this->m_bRemoveOnDeath = 1;
  m_ModifierPropertyValues = this->m_ModifierPropertyValues;
  this->m_nIndexInAbility = -1;
  this->m_pszAuraModifier = 0;
  this->m_nAuraModifierIndex = -1;
  this->m_bAuraApplyToCaster = 1;
  this->m_bAuraApplyToParent = 1;
  this->m_pszEffectName = 0;
  this->m_nEffectAttachType = -1;
  this->m_nPriority = 1;
  this->m_pszStatusEffectName = 0;
  this->m_nStatusEffectPriority = -1;
  this->m_nOverrideAnimation = -1;
  this->m_nOrbPriority = 0;
  this->m_nOrbLabel = 0;
  this->m_bOrbIsCastAttack = 0;
  this->m_flThinkInterval = 0.0;
  this->m_bNeedsReParseIfRefreshed = 0;
  this->m_pszModelName = 0;
  do
  {
    LODWORD(m_ModifierPropertyValues->_vptr_CDOTA_Buff) = 0;
    m_ModifierPropertyValues = (m_ModifierPropertyValues + 16);
    HIDWORD(m_ModifierPropertyValues[-1].m_pOnHealReceived) = 0;
    m_ModifierPropertyValues[-1].m_pOnAttackFinished = 0;
  }
  while ( m_ModifierPropertyValues != &this->m_nModifierStatesEnabled );
  this->m_pOnCreated = 0;
  this->m_pOnIntervalThink = 0;
  this->m_pOnAttackLanded = 0;
  this->m_pOnAbilityExecuted = 0;
  this->m_pOnTakeDamage = 0;
  this->m_pOnDealDamage = 0;
  this->m_pOnAttacked = 0;
  this->m_pOnDeath = 0;
  this->m_pOnKill = 0;
  this->m_pOnManaGained = 0;
  this->m_pOnHeroKilled = 0;
  this->m_pOnHealReceived = 0;
  this->m_pOnAttackFinished = 0;
}


// CDOTA_Modifier_DataDriven::AddCustomTransmiterData  (line 69, @0x00000000025defd0, libserver.so)  // inlines: set_dd_ability_index, set_dd_modifier_index, set_has_dd_ability_index, set_has_dd_modifier_index
void __fastcall CDOTA_Modifier_DataDriven::AddCustomTransmiterData(
        CDOTA_Modifier_DataDriven *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int v2; // ecx
  int m_nIndexInAbility; // edx

  v2 = *(entry + 4);
  *(entry + 44) = this->m_nAbilityIndex;
  *(entry + 4) = v2 | 0x8000000;
  m_nIndexInAbility = this->m_nIndexInAbility;
  *(entry + 4) = v2 | 0xC000000;
  *(entry + 37) = m_nIndexInAbility;
}


// CDOTA_Modifier_DataDriven::GetAbilityKeyValues  (line 92, @0x00000000025eec00, libserver.so)
// calls: DOTAGameManager, CDOTAGameManager::GetAbilityDataByIndex
// callers: CDOTA_Modifier_DataDriven::GetModifierKeyValues, CDOTA_Modifier_DataDriven::LookupModifierCreateParameters, CDOTA_Modifier_DataDriven::LookupValueSymbol
KeyValues *__fastcall CDOTA_Modifier_DataDriven::GetAbilityKeyValues(CDOTA_Modifier_DataDriven *const this)
{
  int m_nAbilityIndex; // ebx
  CDOTAGameManager *v2; // rax
  DOTAAbilityData_t *AbilityDataByIndex; // rax

  m_nAbilityIndex = this->m_nAbilityIndex;
  if ( m_nAbilityIndex >= 0
    && (v2 = DOTAGameManager(), (AbilityDataByIndex = CDOTAGameManager::GetAbilityDataByIndex(v2, m_nAbilityIndex)) != 0) )
  {
    return AbilityDataByIndex->m_pKVData;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Modifier_DataDriven::GetModifierKeyValues  (line 104, @0x00000000025eec50, libserver.so)
// calls: CDOTA_Modifier_DataDriven::GetAbilityKeyValues, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey
// callers: CDOTA_Modifier_DataDriven::GetTexture, CDOTA_Modifier_DataDriven::OnRefresh, CDOTA_Modifier_DataDriven::ReadKeyValues
KeyValues *__fastcall CDOTA_Modifier_DataDriven::GetModifierKeyValues(CDOTA_Modifier_DataDriven *const this)
{
  KeyValues *AbilityKeyValues; // rax
  KeyValues *Key; // rax
  KeyValues *result; // rax
  int v5; // ebx

  if ( this->m_nAbilityIndex < 0 )
    return 0;
  if ( this->m_nIndexInAbility < 0 )
    return 0;
  AbilityKeyValues = CDOTA_Modifier_DataDriven::GetAbilityKeyValues(this);
  if ( AbilityKeyValues == 0 )
    return 0;
  Key = KeyValues::FindKey(AbilityKeyValues, "Modifiers", 0);
  if ( Key == 0 )
    return 0;
  result = KeyValues::GetFirstSubKey(Key);
  if ( this->m_nIndexInAbility <= 0 )
    return result;
  if ( result == 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    ++v5;
    result = KeyValues::GetNextKey(result);
    if ( this->m_nIndexInAbility <= v5 )
      break;
    if ( result == 0 )
      return 0;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetTexture  (line 124, @0x00000000025eece0, libserver.so)
// calls: CDOTA_Modifier_DataDriven::GetModifierKeyValues, KeyValues::GetString
const char *__fastcall CDOTA_Modifier_DataDriven::GetTexture(CDOTA_Modifier_DataDriven *const this)
{
  const char *v1; // rbx
  KeyValues *ModifierKeyValues; // rax
  const char *String; // rax

  v1 = "";
  ModifierKeyValues = CDOTA_Modifier_DataDriven::GetModifierKeyValues(this);
  if ( ModifierKeyValues != 0 )
  {
    String = KeyValues::GetString(ModifierKeyValues, "TextureName", 0, 0, 0);
    if ( String != 0 )
      return String;
  }
  return v1;
}


// CDOTA_Modifier_DataDriven::GetOrbPriority  (line 141, @0x00000000025eb440, libserver.so)  // inlines: Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Modifier_DataDriven::GetOrbPriority(
        CDOTA_Modifier_DataDriven *const this,
        CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  CEntityInstance *v8; // rax
  int v9; // r14d
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bOrbIsCastAttack )
    return this->m_nOrbPriority;
  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[pRecord->m_hTarget.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 0;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 0;
  if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) != 0 )
    return 0;
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  if ( v8 == 0 || !pRecord->m_bUseCastAttackOrb && BYTE4(v8[17].m_hPrivateScope.m_hScope) == 0 )
    return 0;
  v9 = (*(v8->_vptr_IHandleEntity + 274))(v8, 0xFFFFFFFFLL);
  if ( v9 <= *&CEntityHandle::operator CEntityInstance *(&this->m_hParent)[44].m_iszPrivateVScripts.u.m_Id
    && (v10 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility),
        (*(v10->_vptr_IHandleEntity + 256))(v10, m_pInstance) == 0)
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
    && (Caster = CDOTA_Buff::GetCaster(this), HIBYTE(m_pInstance[7].m_CScriptComponent) != Caster->m_iTeamNum.m_Value)
    && (Caster->m_nUnitState64.m_Value & 8) == 0 )
  {
    return this->m_nOrbPriority;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Modifier_DataDriven::LookupModifierCreateParameters  (line 179, @0x0000000002623420, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: CDOTA_Modifier_DataDriven::GetAbilityKeyValues, KeyValues::FindKey, KeyValues::GetFirstSubKey, strcmp, KeyValues::GetNextKey, KeyValues::GetName, KeyValues::SetString, KeyValues::SetInt, KeyValues::GetString, KeyValues::SetFloat, CDOTA_ActionRunner::LookupModifierCreateParameters
// strings: "modifier_datadriven", "dd_ability_index", "dd_index"
bool __fastcall CDOTA_Modifier_DataDriven::LookupModifierCreateParameters(
        CDOTA_Modifier_DataDriven *const this,
        KeyValues *pKV,
        const char *pszModifierName)
{
  KeyValues *AbilityKeyValues; // rax
  KeyValues *Key; // rax
  KeyValues *FirstSubKey; // rbx
  int i; // r13d
  const char *Name; // rax
  const char *String; // rsi
  float v12; // xmm1_4

  AbilityKeyValues = CDOTA_Modifier_DataDriven::GetAbilityKeyValues(this);
  if ( AbilityKeyValues == 0 )
    return CDOTA_ActionRunner::LookupModifierCreateParameters(&this->CDOTA_ActionRunner, pKV, pszModifierName);
  Key = KeyValues::FindKey(AbilityKeyValues, "Modifiers", 0);
  if ( Key == 0 )
    return CDOTA_ActionRunner::LookupModifierCreateParameters(&this->CDOTA_ActionRunner, pKV, pszModifierName);
  FirstSubKey = KeyValues::GetFirstSubKey(Key);
  if ( FirstSubKey == 0 )
    return CDOTA_ActionRunner::LookupModifierCreateParameters(&this->CDOTA_ActionRunner, pKV, pszModifierName);
  for ( i = 0; ; ++i )
  {
    Name = KeyValues::GetName(FirstSubKey);
    if ( Name == pszModifierName || strcmp(Name, pszModifierName) == 0 )
      break;
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    if ( FirstSubKey == 0 )
      return CDOTA_ActionRunner::LookupModifierCreateParameters(&this->CDOTA_ActionRunner, pKV, pszModifierName);
  }
  KeyValues::SetString(pKV, "BaseClass", "modifier_datadriven");
  KeyValues::SetInt(pKV, "dd_ability_index", this->m_nAbilityIndex);
  KeyValues::SetInt(pKV, "dd_index", i);
  String = KeyValues::GetString(FirstSubKey, "Duration", 0, 0, 0);
  if ( String != 0 )
  {
    (*(this->_vptr_CDOTA_ActionRunner + 2))(&this->CDOTA_ActionRunner, String, 0.0);
    KeyValues::SetFloat(pKV, "duration", v12);
  }
  return 1;
}


// CDOTA_Modifier_DataDriven::CreateParticle  (line 224, @0x0000000002623580, libserver.so)
// calls: CDOTA_ActionRunner::CreateParticle, CDOTA_Buff::AddParticle
int __fastcall CDOTA_Modifier_DataDriven::CreateParticle(
        CDOTA_Modifier_DataDriven *const this,
        const char *pParticleName,
        int iAttachType,
        CBaseEntity *pEntity)
{
  int Particle; // r12d

  Particle = CDOTA_ActionRunner::CreateParticle(&this->CDOTA_ActionRunner, pParticleName, iAttachType, pEntity);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  return Particle;
}


// CDOTA_Modifier_DataDriven::DoCreate  (line 233, @0x0000000002602770, libserver.so)  // inlines: StartIntervalThink
// calls: CDOTA_Buff::DoCreate, KeyValues::GetInt, CDOTA_Modifier_DataDriven::ReadKeyValues
// strings: "dd_ability_index", "dd_index"
void __fastcall CDOTA_Modifier_DataDriven::DoCreate(CDOTA_Modifier_DataDriven *const this, KeyValues *pKV)
{
  int Int; // eax
  int v5; // eax
  float m_flThinkInterval; // xmm1_4

  CDOTA_Buff::DoCreate(this, pKV);
  Int = KeyValues::GetInt(pKV, "dd_ability_index", -1);
  if ( Int != -1 )
    this->m_nAbilityIndex = Int;
  v5 = KeyValues::GetInt(pKV, "dd_index", -1);
  if ( v5 != -1 )
    this->m_nIndexInAbility = v5;
  CDOTA_Modifier_DataDriven::ReadKeyValues(this);
  m_flThinkInterval = this->m_flThinkInterval;
  if ( m_flThinkInterval > 0.0 )
  {
    this->CDOTA_Buff::m_flThinkInterval = m_flThinkInterval;
    this->m_flThinkTimeAccumulator = 0.0;
  }
}


// CDOTA_Modifier_DataDriven::GetModifierAura  (line 254, @0x00000000025e1ff0, libserver.so)  // inlines: GetModifierAura, String, ToCStr
const char *__fastcall CDOTA_Modifier_DataDriven::GetModifierAura(CDOTA_Modifier_DataDriven *const this)
{
  const char *result; // rax

  result = this->m_pszAuraModifier;
  if ( result == 0 )
  {
    result = "";
    if ( this->m_szModifierAura.u.m_Id != 0 )
      return this->m_szModifierAura.u.m_pAsString;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetAuraEntityReject  (line 265, @0x00000000025eb5a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Modifier_DataDriven::GetAuraEntityReject(
        CDOTA_Modifier_DataDriven *const this,
        CDOTA_BaseNPC *pNPC)
{
  CDOTA_BaseNPC *Caster; // rax
  uint32 m_Index; // eax
  CDOTA_BaseNPC *m_pInstance; // rcx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  Caster = CDOTA_Buff::GetCaster(this);
  if ( !this->m_bAuraApplyToCaster && Caster == pNPC )
    return 1;
  if ( this->m_bAuraApplyToParent )
    return 0;
  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hParent.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  return pNPC == m_pInstance;
}


// CDOTA_Modifier_DataDriven::SetAuraCreateData  (line 276, @0x00000000025e10d0, libserver.so)
// calls: KeyValues::SetInt, KeyValues::SetString
// strings: "dd_ability_index", "dd_index", "modifier_datadriven"
void __fastcall CDOTA_Modifier_DataDriven::SetAuraCreateData(CDOTA_Modifier_DataDriven *const this, KeyValues *pKV)
{
  KeyValues::SetInt(pKV, "dd_ability_index", this->m_nAbilityIndex);
  KeyValues::SetInt(pKV, "dd_index", this->m_nAuraModifierIndex);
  KeyValues::SetString(pKV, "BaseClass", "modifier_datadriven");
}


// CDOTA_Modifier_DataDriven::CheckState  (line 285, @0x00000000025df010, libserver.so)
void __fastcall CDOTA_Modifier_DataDriven::CheckState(
        CDOTA_Modifier_DataDriven *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= this->m_nModifierStatesEnabled;
  buffState->m_nDisabledStateMask |= this->m_nModifierStatesDisabled;
}


// CDOTA_Modifier_DataDriven::GetEffectName  (line 293, @0x00000000025df030, libserver.so)
const char *__fastcall CDOTA_Modifier_DataDriven::GetEffectName(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_pszEffectName;
}


// CDOTA_Modifier_DataDriven::GetEffectAttachType  (line 301, @0x00000000025df040, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::GetEffectAttachType(CDOTA_Modifier_DataDriven *const this)
{
  int result; // eax

  result = this->m_nEffectAttachType;
  if ( result < 0 )
    return 1;
  return result;
}


// CDOTA_Modifier_DataDriven::GetOverrideAnimation  (line 309, @0x00000000025df060, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetOverrideAnimation(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nOverrideAnimation;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DataDriven::GetModifierModelChange  (line 314, @0x00000000025df080, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetModifierModelChange(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = (*(this->_vptr_CDOTA_Buff + 89))(this, params);
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_DataDriven::ShouldStorePropertyAsString  (line 319, @0x00000000025eed30, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::ShouldStorePropertyAsString(
        CDOTA_Modifier_DataDriven *const this,
        modifierfunction property)
{
  bool result; // al

  if ( property == modifierfunction::MODIFIER_PROPERTY_TRANSLATE_ACTIVITY_MODIFIERS )
    return 1;
  result = 0;
  if ( property == modifierfunction::MODIFIER_PROPERTY_CHANGE_ABILITY_VALUE )
    return 1;
  return result;
}


// CDOTA_Modifier_DataDriven::OnRefresh  (line 330, @0x00000000026020b0, libserver.so)
// calls: CDOTA_Modifier_DataDriven::GetModifierKeyValues, KeyValues::FindKey, CDOTA_Modifier_DataDriven::ReadKeyValues_Properties
void __fastcall CDOTA_Modifier_DataDriven::OnRefresh(CDOTA_Modifier_DataDriven *const this, KeyValues *pKV)
{
  KeyValues *ModifierKeyValues; // rax
  KeyValues *Key; // rax

  if ( this->m_bNeedsReParseIfRefreshed )
  {
    ModifierKeyValues = CDOTA_Modifier_DataDriven::GetModifierKeyValues(this);
    if ( ModifierKeyValues != 0 )
    {
      Key = KeyValues::FindKey(ModifierKeyValues, "Properties", 0);
      CDOTA_Modifier_DataDriven::ReadKeyValues_Properties(this, Key);
    }
  }
}


// CDOTA_Modifier_DataDriven::OnCreated  (line 347, @0x00000000025edd10, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DataDriven::OnCreated(CDOTA_Modifier_DataDriven *const this, KeyValues *pKV)
{
  KeyValues *m_pOnCreated; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CModifierParams params; // [rsp+0h] [rbp-A0h] BYREF

  m_pOnCreated = this->m_pOnCreated;
  if ( m_pOnCreated != 0 )
  {
    m_Index = this->m_hParent.m_Index;
    params.bCraniumBasherTested = 0;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.fOriginalDamage = 0.0;
    params.bTooltip = 0;
    params.bHeartRegenApplied = 0;
    params.nActivity = -1;
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
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hParent.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        {
          m_pEntity = v6->m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v9 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            params.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                   | v9 & 0x7FFF;
          }
        }
      }
    }
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnCreated, Caster, &params);
  }
}


// CDOTA_Modifier_DataDriven::DuplicateForIllusion  (line 358, @0x00000000025e91c0, libserver.so)  // inlines: Get, GetAbility, GetClass, GetInstance, GetName, String, ToCStr, operator==<CBaseEntity>
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "dd_ability_index", "dd_index"
CDOTA_Buff *__fastcall CDOTA_Modifier_DataDriven::DuplicateForIllusion(
        CDOTA_Modifier_DataDriven *const this,
        CDOTA_BaseNPC *pIllusion)
{
  const char *m_pAsString; // rsi
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  const char *v8; // r14
  CDOTABaseAbility *v9; // rax
  CDOTA_Buff *v10; // rbx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  m_pAsString = "";
  v13 = __readfsqword(0x28u);
  if ( this->m_name.u.m_Id != 0 )
    m_pAsString = this->m_name.u.m_pAsString;
  KeyValues::KeyValues(&kv, m_pAsString);
  (*(this->_vptr_CDOTA_Buff + 31))(this);
  KeyValues::SetFloat(&kv, "duration", v5);
  KeyValues::SetFloat(&kv, "dd_ability_index", v6);
  KeyValues::SetFloat(&kv, "dd_index", v7);
  v8 = "";
  if ( this->m_class.u.m_Id != 0 )
    v8 = this->m_class.u.m_pAsString;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  v10 = CDOTA_BaseNPC::AddNewModifier(pIllusion, pIllusion, v9, v8, &kv, 0);
  KeyValues::~KeyValues(&kv);
  return v10;
}


// CDOTA_Modifier_DataDriven::ReadKeyValues  (line 368, @0x0000000002602100, libserver.so)  // inlines: ActivityList_IndexForName, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, ClearFunction, FStrEq, GetBool, GetModifierAttributesFromString, Purge, PurgeAndDeleteElements, RemoveAll, SetFunction, String, ToCStr, _V_strcmp, operator=, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Modifier_DataDriven::GetModifierKeyValues, KeyValues::GetName, AllocPooledString, KeyValues::GetInt, KeyValues::GetString, GetAttachTypeFromString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CDOTA_Modifier_DataDriven::ReadKeyValues_Aura, KeyValues::FindKey, CDOTA_Modifier_DataDriven::ReadKeyValues_OrbData, CDOTA_Modifier_DataDriven::ReadKeyValues_Properties, CDOTA_Modifier_DataDriven::ReadKeyValues_States (17 total)
// callers: CDOTA_Modifier_DataDriven::DoCreate
// strings: "MODIFIER_PRIORITY_NORMAL", "MODIFIER_ATTRIBUTE_PERMANENT", "MODIFIER_ATTRIBUTE_MULTIPLE", "MODIFIER_ATTRIBUTE_IGNORE_INVULNERABLE", "MODIFIER_PRIORITY_LOW", "MODIFIER_PRIORITY_HIGH" (9 total)
// globals: CDOTA_Modifier_DataDriven::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_DataDriven::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_DataDriven::ReadKeyValues(CDOTA_Modifier_DataDriven *const this)
{
  KeyValues *ModifierKeyValues; // rax
  KeyValues *v3; // r15
  const char *Name; // rax
  const char *String; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  int v10; // eax
  const char *v11; // rax
  float (__fastcall *v12)(CDOTA_ActionRunner *, const char *, double); // r12
  const char *v13; // rax
  float v14; // xmm0_4
  int (**vptr_CDOTA_ActionRunner)(...); // rax
  int (*v16)(...); // r12
  const char *v17; // rax
  const char *v18; // rax
  __int64 v19; // r12
  int v20; // r13d
  int v21; // ebx
  int v22; // eax
  char *v23; // rax
  __int64 v24; // r12
  int v25; // ebx
  char *v26; // rsi
  KeyValues *Key; // rax
  KeyValues *v28; // rax
  KeyValues *v29; // rax
  UtlSymLargeId_t v30; // [rsp+10h] [rbp-50h] BYREF
  CUtlMemory<char*,int> v31[4]; // [rsp+18h] [rbp-48h] BYREF

  ModifierKeyValues = CDOTA_Modifier_DataDriven::GetModifierKeyValues(this);
  v3 = ModifierKeyValues;
  if ( ModifierKeyValues == 0 )
    return;
  Name = KeyValues::GetName(ModifierKeyValues);
  AllocPooledString(&v30, Name);
  this->m_name.u.m_Id = v30;
  this->m_bIsDebuff = KeyValues::GetInt(v3, "IsDebuff", 0) != 0;
  this->m_bIsPurgable = KeyValues::GetInt(v3, "IsPurgable", 0) != 0;
  this->m_bIsStunDebuff = KeyValues::GetInt(v3, "IsStunDebuff", 0) != 0;
  this->m_bIsHidden = KeyValues::GetInt(v3, "IsHidden", 0) != 0;
  this->m_bRemoveOnDeath = KeyValues::GetInt(v3, "RemoveOnDeath", 1) != 0;
  this->m_bAllowIllusionDuplicate = KeyValues::GetInt(v3, "AllowIllusionDuplicate", 0) != 0;
  String = KeyValues::GetString(v3, "EffectName", 0, 0, 0);
  this->m_pszEffectName = String;
  if ( String != 0 )
  {
    AllocPooledString(&v30, String);
    v6 = "";
    if ( v30 != 0 )
      v6 = v30;
    this->m_pszEffectName = v6;
  }
  v7 = KeyValues::GetString(v3, "EffectAttachType", 0, 0, 0);
  this->m_nEffectAttachType = -1;
  if ( v7 != 0 )
    this->m_nEffectAttachType = GetAttachTypeFromString(v7);
  this->m_pszStatusEffectName = KeyValues::GetString(v3, "StatusEffectName", 0, 0, 0);
  this->m_nStatusEffectPriority = KeyValues::GetInt(v3, "StatusEffectPriority", -1);
  v8 = KeyValues::GetString(v3, "ModelName", 0, 0, 0);
  this->m_pszModelName = v8;
  if ( v8 != 0 )
  {
    this->m_Functions[152].__delta = 0;
    this->m_Functions[152].__pfn = CDOTA_Modifier_DataDriven::GetModifierModelChange;
  }
  this->m_nOverrideAnimation = -1;
  v9 = KeyValues::GetString(v3, "OverrideAnimation", 0, 0, 0);
  this->m_Functions[90].__pfn = 0;
  this->m_Functions[90].__delta = 0;
  if ( v9 != 0 && g_pAnimationSystem != 0 )
  {
    v10 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, v9);
    if ( v10 != -1 )
    {
      this->m_nOverrideAnimation = v10;
      this->m_Functions[90].__pfn = CDOTA_Modifier_DataDriven::GetOverrideAnimation;
      this->m_Functions[90].__delta = 0;
    }
  }
  v11 = KeyValues::GetString(v3, "Priority", 0, 0, 0);
  if ( v11 != 0 )
  {
    if ( strcmp(v11, "MODIFIER_PRIORITY_NORMAL") == 0 )
    {
      this->m_nPriority = 1;
    }
    else if ( strcmp(v11, "MODIFIER_PRIORITY_LOW") == 0 )
    {
      this->m_nPriority = 0;
    }
    else if ( strcmp(v11, "MODIFIER_PRIORITY_HIGH") == 0 )
    {
      this->m_nPriority = 2;
    }
    else if ( strcmp(v11, "MODIFIER_PRIORITY_ULTRA") == 0 )
    {
      this->m_nPriority = 3;
    }
    else
    {
      this->m_nPriority = V_atoi(v11);
    }
  }
  v12 = *(this->_vptr_CDOTA_ActionRunner + 2);
  v13 = KeyValues::GetString(v3, "ThinkInterval", 0, 0, 0);
  v14 = v12(&this->CDOTA_ActionRunner, v13, 0.0);
  vptr_CDOTA_ActionRunner = this->_vptr_CDOTA_ActionRunner;
  this->m_flThinkInterval = v14;
  v16 = vptr_CDOTA_ActionRunner[2];
  v17 = KeyValues::GetString(v3, "Duration", 0, 0, 0);
  if ( (v16)(&this->CDOTA_ActionRunner, v17, 0.0) > 0.0 )
    (*(this->_vptr_CDOTA_Buff + 63))(this, 1);
  v18 = KeyValues::GetString(v3, "Attributes", 0, 0, 0);
  if ( v18 == 0 )
  {
    v20 = 0;
    goto LABEL_33;
  }
  LODWORD(v30) = 0;
  v31[0].m_pMemory = 0;
  v31[0].m_nAllocationCount = 0;
  v31[0].m_nGrowSize = 0;
  V_SplitString(v18, " | ", &v30);
  if ( v30 <= 0 )
  {
    v20 = 0;
    goto LABEL_32;
  }
  v19 = 0;
  v20 = 0;
  v21 = 0;
  do
  {
    while ( 1 )
    {
      v23 = v31[0].m_pMemory[v19];
      if ( v23 != "MODIFIER_ATTRIBUTE_PERMANENT" && strcmp(v31[0].m_pMemory[v19], "MODIFIER_ATTRIBUTE_PERMANENT") != 0 )
        break;
      v20 |= 1u;
LABEL_23:
      v22 = v30;
      ++v21;
      ++v19;
      if ( v21 >= v30 )
        goto LABEL_29;
    }
    if ( v23 != "MODIFIER_ATTRIBUTE_MULTIPLE" && strcmp(v31[0].m_pMemory[v19], "MODIFIER_ATTRIBUTE_MULTIPLE") != 0 )
    {
      if ( v23 == "MODIFIER_ATTRIBUTE_IGNORE_INVULNERABLE"
        || strcmp(v31[0].m_pMemory[v19], "MODIFIER_ATTRIBUTE_IGNORE_INVULNERABLE") == 0 )
      {
        v20 |= 4u;
      }
      else if ( v23 != "MODIFIER_ATTRIBUTE_NONE" && strcmp(v31[0].m_pMemory[v19], "MODIFIER_ATTRIBUTE_NONE") != 0 )
      {
        DevMsg("%s is not a modifier attribute flag.\n", v31[0].m_pMemory[v19]);
      }
      goto LABEL_23;
    }
    v22 = v30;
    ++v21;
    v20 |= 2u;
    ++v19;
  }
  while ( v21 < v30 );
LABEL_29:
  if ( v22 > 0 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      ++v25;
      v26 = v31[0].m_pMemory[v24++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v26);
    }
    while ( v25 < v30 );
  }
LABEL_32:
  LODWORD(v30) = 0;
  if ( (v31[0].m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(v31);
    if ( (v31[0].m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(v31);
  }
LABEL_33:
  this->m_nAttributes = v20;
  CDOTA_Modifier_DataDriven::ReadKeyValues_Aura(this, v3);
  Key = KeyValues::FindKey(v3, "Orb", 0);
  CDOTA_Modifier_DataDriven::ReadKeyValues_OrbData(this, Key);
  v28 = KeyValues::FindKey(v3, "Properties", 0);
  CDOTA_Modifier_DataDriven::ReadKeyValues_Properties(this, v28);
  v29 = KeyValues::FindKey(v3, "States", 0);
  CDOTA_Modifier_DataDriven::ReadKeyValues_States(this, v29);
  CDOTA_Modifier_DataDriven::ReadKeyValues_Events(this, v3);
}


// CDOTA_Modifier_DataDriven::ReadKeyValues_Aura  (line 460, @0x00000000025eed60, libserver.so)  // inlines: Get, GetAbility, GetInstance, operator==<CBaseEntity>
// calls: KeyValues::GetString, CEntityHandle::operator CEntityInstance*, CDOTA_Ability_DataDriven::GetModifierDataIndexByName, GetUnitTargetTeamsFromString, GetUnitTargetTypesFromString, GetUnitTargetFlagsFromString, CDOTA_Item_DataDriven::GetModifierDataIndexByName
// callers: CDOTA_Modifier_DataDriven::ReadKeyValues
// strings: "Aura_Radius", "Aura_Teams", "Aura_Types", "Aura_Flags", "Aura_ApplyToCaster", "Aura_ApplyToParent"
void __fastcall CDOTA_Modifier_DataDriven::ReadKeyValues_Aura(CDOTA_Modifier_DataDriven *const this, KeyValues *pKV)
{
  const char *String; // rax
  CEntityInstance *v5; // r13
  char v6; // al
  const char *m_pszAuraModifier; // rsi
  CDOTA_Item_DataDriven *v8; // rdi
  CEntityInstance *v9; // r13
  __int64 (__fastcall *v10)(CEntityInstance *, const char *, _QWORD); // r14
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  unsigned int (__fastcall *v15)(CEntityInstance *, const char *, __int64); // r14
  const char *v16; // rax
  unsigned int (__fastcall *v17)(CEntityInstance *, const char *, __int64); // r14
  const char *v18; // rax

  String = KeyValues::GetString(pKV, "Aura", 0, 0, 0);
  this->m_pszAuraModifier = String;
  if ( String != 0 )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    v6 = (*(v5->_vptr_IHandleEntity + 223))(v5);
    m_pszAuraModifier = this->m_pszAuraModifier;
    v8 = v5;
    if ( v6 != 0 )
    {
      v9 = (v5 + 1000);
      this->m_nAuraModifierIndex = CDOTA_Item_DataDriven::GetModifierDataIndexByName(v8, m_pszAuraModifier);
    }
    else
    {
      v9 = v5 + 19;
      this->m_nAuraModifierIndex = CDOTA_Ability_DataDriven::GetModifierDataIndexByName(v8, m_pszAuraModifier);
    }
    v10 = *(v9->_vptr_IHandleEntity + 1);
    v11 = KeyValues::GetString(pKV, "Aura_Radius", 0, 0, 0);
    this->m_nAuraRadius = v10(v9, v11, 0);
    v12 = KeyValues::GetString(pKV, "Aura_Teams", 0, 0, 0);
    this->m_nAuraSearchTeam = GetUnitTargetTeamsFromString(v12);
    v13 = KeyValues::GetString(pKV, "Aura_Types", 0, 0, 0);
    this->m_nAuraSearchType = GetUnitTargetTypesFromString(v13);
    v14 = KeyValues::GetString(pKV, "Aura_Flags", 0, 0, 0);
    this->m_nAuraSearchFlags = GetUnitTargetFlagsFromString(v14);
    v15 = *(v9->_vptr_IHandleEntity + 1);
    v16 = KeyValues::GetString(pKV, "Aura_ApplyToCaster", 0, 0, 0);
    this->m_bAuraApplyToCaster = v15(v9, v16, 1) != 0;
    v17 = *(v9->_vptr_IHandleEntity + 1);
    v18 = KeyValues::GetString(pKV, "Aura_ApplyToParent", 0, 0, 0);
    this->m_bAuraApplyToParent = v17(v9, v18, 1) != 0;
  }
  else
  {
    this->m_nAuraModifierIndex = -1;
    this->m_nAuraRadius = 0;
    this->m_nAuraSearchTeam = 0;
    this->m_nAuraSearchType = 0;
    this->m_nAuraSearchFlags = 0;
    this->m_bAuraApplyToCaster = 0;
    this->m_bAuraApplyToParent = 0;
  }
}


// CDOTA_Modifier_DataDriven::ReadKeyValues_OrbData  (line 499, @0x00000000025eef50, libserver.so)  // inlines: FStrEq, GetBool, GetOrbLabelFromString, GetOrbPriorityFromString, _V_strcmp
// calls: KeyValues::GetString, KeyValues::GetInt, DevMsg(char const*,...)
// callers: CDOTA_Modifier_DataDriven::ReadKeyValues
// strings: "DOTA_ORB_PRIORITY_DEFAULT", "DOTA_ORB_PRIORITY_ITEM", "DOTA_ORB_LABEL_EXCEPTION", "DOTA_ORB_LABEL_DEFAULT", "DOTA_ORB_LABEL_SKADI", "DOTA_ORB_LABEL_NONE" (11 total)
void __fastcall CDOTA_Modifier_DataDriven::ReadKeyValues_OrbData(CDOTA_Modifier_DataDriven *const this, KeyValues *pKV)
{
  char *String; // rax
  int v5; // edx
  char *v6; // rax
  int v7; // edx
  bool v8; // zf

  this->m_nOrbLabel = 0;
  this->m_nOrbPriority = 0;
  if ( pKV != 0 )
  {
    String = KeyValues::GetString(pKV, "Priority", 0, 0, 0);
    if ( String != 0 )
    {
      if ( String == "DOTA_ORB_PRIORITY_DEFAULT" )
      {
        v5 = 1;
        goto LABEL_7;
      }
      v5 = 1;
      if ( strcmp(String, "DOTA_ORB_PRIORITY_DEFAULT") == 0 )
        goto LABEL_7;
      if ( String == "DOTA_ORB_PRIORITY_ITEM" )
      {
        v5 = 2;
        goto LABEL_7;
      }
      LOBYTE(v5) = 2;
      if ( strcmp(String, "DOTA_ORB_PRIORITY_ITEM") == 0 )
        goto LABEL_7;
      if ( String == "DOTA_ORB_PRIORITY_ABILITY" )
      {
        v5 = 3;
        goto LABEL_7;
      }
      LOBYTE(v5) = 3;
      if ( strcmp(String, "DOTA_ORB_PRIORITY_ABILITY") == 0 )
        goto LABEL_7;
      if ( String == "DOTA_ORB_PRIORITY_ITEM_PROC" )
      {
        v5 = 4;
        goto LABEL_7;
      }
      LOBYTE(v5) = 4;
      if ( strcmp(String, "DOTA_ORB_PRIORITY_ITEM_PROC") == 0 )
        goto LABEL_7;
      if ( String != "DOTA_ORB_PRIORITY_NONE" )
      {
        v8 = strcmp(String, "DOTA_ORB_PRIORITY_NONE") == 0;
        v5 = !v8;
        if ( !v8 )
        {
          DevMsg("%s is not an orb priority.\n", String);
          v5 = 0;
        }
LABEL_7:
        this->m_nOrbPriority = v5;
        v6 = KeyValues::GetString(pKV, "Label", 0, 0, 0);
        if ( v6 != 0 )
        {
          if ( v6 == "DOTA_ORB_LABEL_EXCEPTION" )
          {
            v7 = 2;
          }
          else
          {
            v7 = 2;
            if ( strcmp(v6, "DOTA_ORB_LABEL_EXCEPTION") != 0 )
            {
              if ( v6 == "DOTA_ORB_LABEL_DEFAULT" )
              {
                v7 = 1;
                goto LABEL_10;
              }
              LOBYTE(v7) = 1;
              if ( strcmp(v6, "DOTA_ORB_LABEL_DEFAULT") != 0 )
              {
                if ( v6 == "DOTA_ORB_LABEL_SKADI" )
                {
                  v7 = 3;
                  goto LABEL_10;
                }
                LOBYTE(v7) = 3;
                if ( strcmp(v6, "DOTA_ORB_LABEL_SKADI") != 0 )
                {
                  if ( v6 != "DOTA_ORB_LABEL_NONE" )
                  {
                    v8 = strcmp(v6, "DOTA_ORB_LABEL_NONE") == 0;
                    v7 = !v8;
                    if ( !v8 )
                    {
                      DevMsg("%s is not an orb label.\n", v6);
                      v7 = 0;
                    }
                    goto LABEL_10;
                  }
                  goto LABEL_28;
                }
              }
            }
          }
LABEL_10:
          this->m_nOrbLabel = v7;
          this->m_pszOrbProjectileName = KeyValues::GetString(pKV, "ProjectileName", 0, 0, 0);
          this->m_bOrbIsCastAttack = KeyValues::GetInt(pKV, "CastAttack", 0) != 0;
          return;
        }
LABEL_28:
        v7 = 0;
        goto LABEL_10;
      }
    }
    v5 = 0;
    goto LABEL_7;
  }
}


// CDOTA_Modifier_DataDriven::ReadKeyValues_Properties  (line 515, @0x0000000002601e70, libserver.so)  // inlines: FStrEq, ModifierVariant_t, ShouldStorePropertyAsString, _V_strcmp, atof, operator float, ~CVariantBase
// calls: KeyValues::GetFirstSubKey, KeyValues::GetName, KeyValues::GetString, strcmp, strtod, CDOTA_Modifier_DataDriven::LinkEffect, KeyValues::GetNextKey, CVariantBase<CVariantDefaultAllocator>::Free, DevMsg(char const*,...)
// callers: CDOTA_Modifier_DataDriven::OnRefresh, CDOTA_Modifier_DataDriven::ReadKeyValues
// strings: "%s is not a modifier property.\n"
// globals: g_ModifierNames
void __fastcall CDOTA_Modifier_DataDriven::ReadKeyValues_Properties(
        CDOTA_Modifier_DataDriven *const this,
        KeyValues *pPropertiesKey)
{
  __int64 i; // rax
  KeyValues *FirstSubKey; // r13
  const char *Name; // r12
  const char *v6; // rdi
  __int64 v7; // r14
  modifierfunction v8; // r15d
  modifierfunction v9; // r14d
  modifierfunction v10; // r12d
  double v11; // xmm0_8
  int v12; // edx
  float v13; // xmm0_4
  ModifierVariant_t *v14; // rax
  float v15; // xmm0_4
  float v16; // [rsp+Ch] [rbp-54h]
  ScriptVariant_t interpolatedValue; // [rsp+18h] [rbp-48h] BYREF
  __int16 v18; // [rsp+28h] [rbp-38h]

  for ( i = 0; i != 173; ++i )
  {
    this->m_ModifierPropertyValues[i].m_eType = ModifierVariant_t::VariantType_t::Variant_Float;
    this->m_ModifierPropertyValues[i].m_flVal = 0.0;
    this->m_ModifierPropertyValues[i].m_szVal = 0;
  }
  if ( pPropertiesKey != 0 )
  {
    FirstSubKey = KeyValues::GetFirstSubKey(pPropertiesKey);
    if ( FirstSubKey != 0 )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(FirstSubKey);
        interpolatedValue.m_uint64 = KeyValues::GetString(FirstSubKey, 0, 0, 0, 0);
        if ( interpolatedValue.m_uint64 == 0 || Name == 0 )
          goto LABEL_19;
        v6 = g_ModifierNames[0];
        if ( g_ModifierNames[0] == 0 )
        {
LABEL_26:
          DevMsg("%s is not a modifier property.\n", Name);
          goto LABEL_19;
        }
        if ( Name == g_ModifierNames[0] )
          break;
        v7 = 0;
        do
        {
          v8 = v7;
          if ( strcmp(v6, Name) == 0 )
            break;
          v6 = g_ModifierNames[v7 + 1];
          v8 = v7 + 1;
          if ( v6 == 0 )
            goto LABEL_26;
          ++v7;
        }
        while ( Name != v6 );
        v9 = v8;
        if ( v8 == modifierfunction::MODIFIER_FUNCTION_LAST )
          goto LABEL_26;
        if ( v8 != modifierfunction::MODIFIER_PROPERTY_TRANSLATE_ACTIVITY_MODIFIERS )
        {
          v10 = v8;
          if ( v8 != modifierfunction::MODIFIER_PROPERTY_CHANGE_ABILITY_VALUE )
            goto LABEL_16;
        }
        v10 = v8;
        v13 = 0.0;
        v12 = 2;
LABEL_18:
        v14 = &this->m_ModifierPropertyValues[v10];
        v14->m_eType = v12;
        v14->m_flVal = v13;
        v14->m_szVal = interpolatedValue.m_uint64;
        CDOTA_Modifier_DataDriven::LinkEffect(this, v9);
LABEL_19:
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          return;
      }
      v9 = modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE;
      v10 = modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE;
LABEL_16:
      if ( *interpolatedValue.m_pszString == 37 )
      {
        this->m_bNeedsReParseIfRefreshed = 1;
        (*(this->_vptr_CDOTA_Buff + 94))(&interpolatedValue.m_type, this, interpolatedValue.m_uint64 + 1);
        v15 = *&interpolatedValue.m_type;
        if ( v18 != 1 )
        {
          if ( v18 != 5 )
          {
            CVariantBase<CVariantDefaultAllocator>::Free(&interpolatedValue.m_type);
            goto LABEL_19;
          }
          v15 = *&interpolatedValue.m_type;
        }
        v16 = v15;
        CVariantBase<CVariantDefaultAllocator>::Free(&interpolatedValue.m_type);
        v12 = 1;
        v13 = v16;
        interpolatedValue.m_uint64 = 0;
      }
      else
      {
        v11 = strtod(interpolatedValue.m_pszString, 0);
        interpolatedValue.m_uint64 = 0;
        v12 = 1;
        v13 = v11;
      }
      goto LABEL_18;
    }
  }
}


// CDOTA_Modifier_DataDriven::ReadKeyValues_States  (line 581, @0x00000000025ef250, libserver.so)  // inlines: FStrEq, GetModifierStateFromString, GetModifierStateValueFromString, _V_strcmp
// calls: KeyValues::GetFirstSubKey, KeyValues::GetName, strcmp, KeyValues::GetString, KeyValues::GetNextKey, DevMsg(char const*,...)
// callers: CDOTA_Modifier_DataDriven::ReadKeyValues
// strings: "MODIFIER_STATE_ROOTED", "MODIFIER_STATE_VALUE_NO_ACTION", "MODIFIER_STATE_VALUE_ENABLED", "MODIFIER_STATE_VALUE_DISABLED", "MODIFIER_STATE_SOFT_DISARMED", "MODIFIER_STATE_HARD_DISARMED" (9 total)
// globals: s_MODIFIER_STATE_NAME_TABLE
void __fastcall CDOTA_Modifier_DataDriven::ReadKeyValues_States(
        CDOTA_Modifier_DataDriven *const this,
        KeyValues *pStatesKey)
{
  KeyValues *FirstSubKey; // r12
  int v4; // r15d
  const char *Name; // rbx
  __int64 v6; // r13
  const char *v7; // rsi
  char *String; // rax
  bool v9; // zf
  int v10; // edx
  __int64 v11; // rax

  this->m_nModifierStatesEnabled = 0;
  this->m_nModifierStatesDisabled = 0;
  if ( pStatesKey != 0 )
  {
    FirstSubKey = KeyValues::GetFirstSubKey(pStatesKey);
    if ( FirstSubKey != 0 )
    {
      while ( 1 )
      {
        v4 = 35;
        Name = KeyValues::GetName(FirstSubKey);
        if ( Name != 0 )
        {
          if ( Name == "MODIFIER_STATE_ROOTED" )
          {
            v4 = 0;
          }
          else
          {
            v6 = 0;
            v7 = "MODIFIER_STATE_ROOTED";
            while ( 1 )
            {
              if ( strcmp(Name, v7) == 0 )
              {
                v4 = v6;
                goto LABEL_9;
              }
              v4 = v6 + 1;
              if ( v6 == 34 )
                break;
              v7 = s_MODIFIER_STATE_NAME_TABLE[++v6];
              if ( Name == v7 )
                goto LABEL_9;
            }
            if ( Name == "MODIFIER_STATE_SOFT_DISARMED"
              || strcmp(Name, "MODIFIER_STATE_SOFT_DISARMED") == 0
              || Name == "MODIFIER_STATE_HARD_DISARMED"
              || strcmp(Name, "MODIFIER_STATE_HARD_DISARMED") == 0 )
            {
              v4 = 1;
              DevMsg("%s has been replaced by MODIFIER_STATE_DISARMED.\n", Name);
            }
            else
            {
              v4 = 35;
              DevMsg("%s is not a modifier state.\n", Name);
            }
          }
        }
LABEL_9:
        String = KeyValues::GetString(FirstSubKey, 0, 0, 0, 0);
        if ( String == 0 )
          goto LABEL_20;
        if ( String == "MODIFIER_STATE_VALUE_NO_ACTION" || strcmp(String, "MODIFIER_STATE_VALUE_NO_ACTION") == 0 )
          break;
        if ( String == "MODIFIER_STATE_VALUE_ENABLED" || strcmp(String, "MODIFIER_STATE_VALUE_ENABLED") == 0 )
        {
          v10 = 1;
          goto LABEL_16;
        }
        if ( String == "MODIFIER_STATE_VALUE_DISABLED" )
        {
          v10 = 0;
LABEL_16:
          if ( v4 != 35 )
          {
            v11 = 1LL << v4;
            if ( v10 == 1 )
            {
              this->m_nModifierStatesEnabled |= v11;
              this->m_nModifierStatesDisabled &= ~v11;
            }
            else if ( v10 == 0 )
            {
              this->m_nModifierStatesDisabled |= v11;
              this->m_nModifierStatesEnabled &= ~v11;
            }
          }
          goto LABEL_20;
        }
        v9 = strcmp(String, "MODIFIER_STATE_VALUE_DISABLED") == 0;
        v10 = !v9;
        if ( v9 )
          goto LABEL_16;
        DevMsg("%s is not a modifier state value.\n", String);
LABEL_20:
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          return;
      }
      v10 = -1;
      goto LABEL_16;
    }
  }
}


// CDOTA_Modifier_DataDriven::ReadKeyValues_Events  (line 611, @0x00000000025ef4c0, libserver.so)  // inlines: ClearFunction, SetFunction
// calls: KeyValues::FindKey
// callers: CDOTA_Modifier_DataDriven::ReadKeyValues
// strings: "OnAttackStart", "OnAttackLanded", "OnAttackFailed", "OnAttackAllied", "OnAttackFinished", "OnProjectileDodge" (20 total)
// globals: CDOTA_Modifier_DataDriven::OnAttackStart(CModifierParams const&), CDOTA_Modifier_DataDriven::OnAttack(CModifierParams const&), CDOTA_Modifier_DataDriven::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_DataDriven::OnAttackFailed(CModifierParams const&), CDOTA_Modifier_DataDriven::OnAttackAllied(CModifierParams const&), CDOTA_Modifier_DataDriven::OnAttackFinished(CModifierParams const&), CDOTA_Modifier_DataDriven::OnProjectileDodge(CModifierParams const&), CDOTA_Modifier_DataDriven::OnOrder(CModifierParams const&) (24 total)
void __fastcall CDOTA_Modifier_DataDriven::ReadKeyValues_Events(CDOTA_Modifier_DataDriven *const this, KeyValues *pKV)
{
  KeyValues *Key; // rax
  KeyValues *v5; // rax
  KeyValues *v6; // rax
  KeyValues *v7; // rax
  KeyValues *v8; // rax
  KeyValues *v9; // rax
  KeyValues *v10; // rax
  KeyValues *v11; // rax
  KeyValues *v12; // rax
  KeyValues *v13; // rax
  KeyValues *v14; // rax
  KeyValues *v15; // rax
  KeyValues *v16; // rax
  bool v17; // zf
  KeyValues *v18; // rax
  KeyValues *v19; // rax
  KeyValues *v20; // rax
  KeyValues *v21; // rax
  KeyValues *v22; // rax
  KeyValues *v23; // rax
  KeyValues *v24; // rax
  KeyValues *v25; // rax
  KeyValues *v26; // rax
  KeyValues *v27; // rax
  KeyValues *v28; // rax

  this->m_pOnCreated = KeyValues::FindKey(pKV, "OnCreated", 0);
  this->m_pOnIntervalThink = KeyValues::FindKey(pKV, "OnIntervalThink", 0);
  this->m_pOnDestroy = KeyValues::FindKey(pKV, "OnDestroy", 0);
  Key = KeyValues::FindKey(pKV, "OnAttackStart", 0);
  this->m_Functions[119].__pfn = 0;
  this->m_pOnAttackStart = Key;
  this->m_Functions[119].__delta = 0;
  if ( Key != 0 )
    this->m_Functions[119].__pfn = CDOTA_Modifier_DataDriven::OnAttackStart;
  v5 = KeyValues::FindKey(pKV, "OnAttack", 0);
  this->m_Functions[120].__pfn = 0;
  this->m_pOnAttack = v5;
  this->m_Functions[120].__delta = 0;
  if ( v5 != 0 )
    this->m_Functions[120].__pfn = CDOTA_Modifier_DataDriven::OnAttack;
  v6 = KeyValues::FindKey(pKV, "OnAttackLanded", 0);
  this->m_Functions[121].__pfn = 0;
  this->m_pOnAttackLanded = v6;
  this->m_Functions[121].__delta = 0;
  if ( v6 != 0 )
    this->m_Functions[121].__pfn = CDOTA_Modifier_DataDriven::OnAttackLanded;
  v7 = KeyValues::FindKey(pKV, "OnAttackFailed", 0);
  this->m_Functions[122].__pfn = 0;
  this->m_pOnAttackFailed = v7;
  this->m_Functions[122].__delta = 0;
  if ( v7 != 0 )
    this->m_Functions[122].__pfn = CDOTA_Modifier_DataDriven::OnAttackFailed;
  v8 = KeyValues::FindKey(pKV, "OnAttackAllied", 0);
  this->m_Functions[123].__pfn = 0;
  this->m_pOnAttackAllied = v8;
  this->m_Functions[123].__delta = 0;
  if ( v8 != 0 )
    this->m_Functions[123].__pfn = CDOTA_Modifier_DataDriven::OnAttackAllied;
  v9 = KeyValues::FindKey(pKV, "OnAttackFinished", 0);
  this->m_Functions[168].__pfn = 0;
  this->m_pOnAttackFinished = v9;
  this->m_Functions[168].__delta = 0;
  if ( v9 != 0 )
    this->m_Functions[168].__pfn = CDOTA_Modifier_DataDriven::OnAttackFinished;
  v10 = KeyValues::FindKey(pKV, "OnProjectileDodge", 0);
  this->m_Functions[124].__pfn = 0;
  this->m_pOnProjectileDodge = v10;
  this->m_Functions[124].__delta = 0;
  if ( v10 != 0 )
    this->m_Functions[124].__pfn = CDOTA_Modifier_DataDriven::OnProjectileDodge;
  v11 = KeyValues::FindKey(pKV, "OnOrder", 0);
  this->m_Functions[125].__pfn = 0;
  this->m_pOnOrder = v11;
  this->m_Functions[125].__delta = 0;
  if ( v11 != 0 )
    this->m_Functions[125].__pfn = CDOTA_Modifier_DataDriven::OnOrder;
  v12 = KeyValues::FindKey(pKV, "OnUnitMoved", 0);
  this->m_Functions[126].__pfn = 0;
  this->m_pOnUnitMoved = v12;
  this->m_Functions[126].__delta = 0;
  if ( v12 != 0 )
    this->m_Functions[126].__pfn = CDOTA_Modifier_DataDriven::OnUnitMoved;
  v13 = KeyValues::FindKey(pKV, "OnUnitMoved", 0);
  this->m_Functions[127].__pfn = 0;
  this->m_pOnAbilityStart = v13;
  this->m_Functions[127].__delta = 0;
  if ( v13 != 0 )
    this->m_Functions[127].__pfn = CDOTA_Modifier_DataDriven::OnAbilityStart;
  v14 = KeyValues::FindKey(pKV, "OnAbilityExecuted", 0);
  this->m_Functions[128].__pfn = 0;
  this->m_pOnAbilityExecuted = v14;
  this->m_Functions[128].__delta = 0;
  if ( v14 != 0 )
    this->m_Functions[128].__pfn = CDOTA_Modifier_DataDriven::OnAbilityExecuted;
  v15 = KeyValues::FindKey(pKV, "OnAbilityEndChannel", 0);
  this->m_Functions[131].__pfn = 0;
  this->m_pOnAbilityEndChannel = v15;
  this->m_Functions[131].__delta = 0;
  if ( v15 != 0 )
    this->m_Functions[131].__pfn = CDOTA_Modifier_DataDriven::OnAbilityEndChannel;
  this->m_pOnTakeDamage = KeyValues::FindKey(pKV, "OnTakeDamage", 0);
  v16 = KeyValues::FindKey(pKV, "OnDealDamage", 0);
  v17 = this->m_pOnTakeDamage == 0;
  this->m_Functions[134].__pfn = 0;
  this->m_pOnDealDamage = v16;
  this->m_Functions[134].__delta = 0;
  if ( !v17 || v16 != 0 )
    this->m_Functions[134].__pfn = CDOTA_Modifier_DataDriven::OnTakeDamage;
  v18 = KeyValues::FindKey(pKV, "OnStateChanged", 0);
  this->m_Functions[135].__pfn = 0;
  this->m_pOnStateChanged = v18;
  this->m_Functions[135].__delta = 0;
  if ( v18 != 0 )
    this->m_Functions[135].__pfn = CDOTA_Modifier_DataDriven::OnStateChanged;
  v19 = KeyValues::FindKey(pKV, "OnAttacked", 0);
  this->m_Functions[137].__pfn = 0;
  this->m_pOnAttacked = v19;
  this->m_Functions[137].__delta = 0;
  if ( v19 != 0 )
    this->m_Functions[137].__pfn = CDOTA_Modifier_DataDriven::OnAttacked;
  this->m_pOnDeath = KeyValues::FindKey(pKV, "OnDeath", 0);
  v20 = KeyValues::FindKey(pKV, "OnKill", 0);
  v17 = this->m_pOnDeath == 0;
  this->m_Functions[138].__pfn = 0;
  this->m_pOnKill = v20;
  this->m_Functions[138].__delta = 0;
  if ( !v17 || v20 != 0 )
    this->m_Functions[138].__pfn = CDOTA_Modifier_DataDriven::OnDeath;
  v21 = KeyValues::FindKey(pKV, "OnRespawn", 0);
  this->m_Functions[139].__pfn = 0;
  this->m_pOnRespawn = v21;
  this->m_Functions[139].__delta = 0;
  if ( v21 != 0 )
    this->m_Functions[139].__pfn = CDOTA_Modifier_DataDriven::OnRespawn;
  v22 = KeyValues::FindKey(pKV, "OnSpentMana", 0);
  this->m_Functions[140].__pfn = 0;
  this->m_pOnSpentMana = v22;
  this->m_Functions[140].__delta = 0;
  if ( v22 != 0 )
    this->m_Functions[140].__pfn = CDOTA_Modifier_DataDriven::OnSpentMana;
  v23 = KeyValues::FindKey(pKV, "OnTeleporting", 0);
  this->m_Functions[141].__pfn = 0;
  this->m_pOnTeleporting = v23;
  this->m_Functions[141].__delta = 0;
  if ( v23 != 0 )
    this->m_Functions[141].__pfn = CDOTA_Modifier_DataDriven::OnTeleporting;
  v24 = KeyValues::FindKey(pKV, "OnTeleported", 0);
  this->m_Functions[142].__pfn = 0;
  this->m_pOnTeleported = v24;
  this->m_Functions[142].__delta = 0;
  if ( v24 != 0 )
    this->m_Functions[142].__pfn = CDOTA_Modifier_DataDriven::OnTeleported;
  v25 = KeyValues::FindKey(pKV, "OnHealthGained", 0);
  this->m_Functions[144].__pfn = 0;
  this->m_pOnHealthGained = v25;
  this->m_Functions[144].__delta = 0;
  if ( v25 != 0 )
    this->m_Functions[144].__pfn = CDOTA_Modifier_DataDriven::OnHealthGained;
  v26 = KeyValues::FindKey(pKV, "OnManaGained", 0);
  this->m_Functions[145].__pfn = 0;
  this->m_pOnManaGained = v26;
  this->m_Functions[145].__delta = 0;
  if ( v26 != 0 )
    this->m_Functions[145].__pfn = CDOTA_Modifier_DataDriven::OnManaGained;
  v27 = KeyValues::FindKey(pKV, "OnHeroKilled", 0);
  this->m_Functions[147].__pfn = 0;
  this->m_pOnHeroKilled = v27;
  this->m_Functions[147].__delta = 0;
  if ( v27 != 0 )
    this->m_Functions[147].__pfn = CDOTA_Modifier_DataDriven::OnHeroKilled;
  v28 = KeyValues::FindKey(pKV, "OnHealReceived", 0);
  this->m_Functions[148].__pfn = 0;
  this->m_pOnHealReceived = v28;
  this->m_Functions[148].__delta = 0;
  if ( v28 != 0 )
    this->m_Functions[148].__pfn = CDOTA_Modifier_DataDriven::OnHealReceived;
}


// CDOTA_Modifier_DataDriven::Precache  (line 790, @0x00000000025efbb0, libserver.so)
// calls: KeyValues::GetString, KeyValues::FindKey, PrecacheParticleSystem, CDOTA_ActionRunner::PrecacheActions
// callers: CDOTA_Ability_DataDriven::Precache, CDOTA_Item_DataDriven::Precache
// strings: "OnAttackStart", "OnAttackLanded", "OnAttackFailed", "OnAttackAllied", "OnProjectileDodge", "OnOrder" (23 total)
void __fastcall CDOTA_Modifier_DataDriven::Precache(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  const char *String; // rax
  KeyValues *Key; // rax
  const char *v6; // rax
  KeyValues *v7; // rax
  KeyValues *v8; // rax
  KeyValues *v9; // rax
  KeyValues *v10; // rax
  KeyValues *v11; // rax
  KeyValues *v12; // rax
  KeyValues *v13; // rax
  KeyValues *v14; // rax
  KeyValues *v15; // rax
  KeyValues *v16; // rax
  KeyValues *v17; // rax
  KeyValues *v18; // rax
  KeyValues *v19; // rax
  KeyValues *v20; // rax
  KeyValues *v21; // rax
  KeyValues *v22; // rax
  KeyValues *v23; // rax
  KeyValues *v24; // rax
  KeyValues *v25; // rax
  KeyValues *v26; // rax
  KeyValues *v27; // rax
  KeyValues *v28; // rax
  KeyValues *v29; // rax
  KeyValues *v30; // rax
  KeyValues *v31; // rax
  KeyValues *v32; // rax
  KeyValues *v33; // rax
  KeyValues *v34; // rax
  KeyValues *v35; // rax
  KeyValues *v36; // rax
  KeyValues *v37; // rax

  String = KeyValues::GetString(pKV, "EffectName", 0, 0, 0);
  if ( String != 0 && *String != 0 )
    PrecacheParticleSystem(String, pContext);
  Key = KeyValues::FindKey(pKV, "Orb", 0);
  if ( Key != 0 )
  {
    v6 = KeyValues::GetString(Key, "ProjectileName", 0, 0, 0);
    if ( v6 != 0 )
      PrecacheParticleSystem(v6, pContext);
  }
  v7 = KeyValues::FindKey(pKV, "OnCreated", 0);
  CDOTA_ActionRunner::PrecacheActions(v7, pContext);
  v8 = KeyValues::FindKey(pKV, "OnIntervalThink", 0);
  CDOTA_ActionRunner::PrecacheActions(v8, pContext);
  v9 = KeyValues::FindKey(pKV, "OnDestroy", 0);
  CDOTA_ActionRunner::PrecacheActions(v9, pContext);
  v10 = KeyValues::FindKey(pKV, "OnAttackStart", 0);
  CDOTA_ActionRunner::PrecacheActions(v10, pContext);
  v11 = KeyValues::FindKey(pKV, "OnAttack", 0);
  CDOTA_ActionRunner::PrecacheActions(v11, pContext);
  v12 = KeyValues::FindKey(pKV, "OnAttackLanded", 0);
  CDOTA_ActionRunner::PrecacheActions(v12, pContext);
  v13 = KeyValues::FindKey(pKV, "OnAttackFailed", 0);
  CDOTA_ActionRunner::PrecacheActions(v13, pContext);
  v14 = KeyValues::FindKey(pKV, "OnAttackAllied", 0);
  CDOTA_ActionRunner::PrecacheActions(v14, pContext);
  v15 = KeyValues::FindKey(pKV, "OnProjectileDodge", 0);
  CDOTA_ActionRunner::PrecacheActions(v15, pContext);
  v16 = KeyValues::FindKey(pKV, "OnOrder", 0);
  CDOTA_ActionRunner::PrecacheActions(v16, pContext);
  v17 = KeyValues::FindKey(pKV, "OnUnitMoved", 0);
  CDOTA_ActionRunner::PrecacheActions(v17, pContext);
  v18 = KeyValues::FindKey(pKV, "OnAbilityStart", 0);
  CDOTA_ActionRunner::PrecacheActions(v18, pContext);
  v19 = KeyValues::FindKey(pKV, "OnAbilityExecuted", 0);
  CDOTA_ActionRunner::PrecacheActions(v19, pContext);
  v20 = KeyValues::FindKey(pKV, "OnAbilityEndChannel", 0);
  CDOTA_ActionRunner::PrecacheActions(v20, pContext);
  v21 = KeyValues::FindKey(pKV, "OnTakeDamage", 0);
  CDOTA_ActionRunner::PrecacheActions(v21, pContext);
  v22 = KeyValues::FindKey(pKV, "OnDealDamage", 0);
  CDOTA_ActionRunner::PrecacheActions(v22, pContext);
  v23 = KeyValues::FindKey(pKV, "OnStateChanged", 0);
  CDOTA_ActionRunner::PrecacheActions(v23, pContext);
  v24 = KeyValues::FindKey(pKV, "OnAttacked", 0);
  CDOTA_ActionRunner::PrecacheActions(v24, pContext);
  v25 = KeyValues::FindKey(pKV, "OnDeath", 0);
  CDOTA_ActionRunner::PrecacheActions(v25, pContext);
  v26 = KeyValues::FindKey(pKV, "OnKill", 0);
  CDOTA_ActionRunner::PrecacheActions(v26, pContext);
  v27 = KeyValues::FindKey(pKV, "OnRespawn", 0);
  CDOTA_ActionRunner::PrecacheActions(v27, pContext);
  v28 = KeyValues::FindKey(pKV, "OnSpentMana", 0);
  CDOTA_ActionRunner::PrecacheActions(v28, pContext);
  v29 = KeyValues::FindKey(pKV, "OnTeleporting", 0);
  CDOTA_ActionRunner::PrecacheActions(v29, pContext);
  v30 = KeyValues::FindKey(pKV, "OnTeleported", 0);
  CDOTA_ActionRunner::PrecacheActions(v30, pContext);
  v31 = KeyValues::FindKey(pKV, "OnHealthGained", 0);
  CDOTA_ActionRunner::PrecacheActions(v31, pContext);
  v32 = KeyValues::FindKey(pKV, "OnManaGained", 0);
  CDOTA_ActionRunner::PrecacheActions(v32, pContext);
  v33 = KeyValues::FindKey(pKV, "OnHeroKilled", 0);
  CDOTA_ActionRunner::PrecacheActions(v33, pContext);
  v34 = KeyValues::FindKey(pKV, "OnHealReceived", 0);
  CDOTA_ActionRunner::PrecacheActions(v34, pContext);
  v35 = KeyValues::FindKey(pKV, "OnOrbImpact", 0);
  CDOTA_ActionRunner::PrecacheActions(v35, pContext);
  v36 = KeyValues::FindKey(pKV, "OnOrbFire", 0);
  CDOTA_ActionRunner::PrecacheActions(v36, pContext);
  v37 = KeyValues::FindKey(pKV, "OnAttackFinished", 0);
  CDOTA_ActionRunner::PrecacheActions(v37, pContext);
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)0u>  (line 840, @0x0000000002628d10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)0>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[0].m_eType;
  m_szVal = this->m_ModifierPropertyValues[0].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[0].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[0].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[0].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)3u>  (line 840, @0x0000000002628db0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)3>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[3].m_eType;
  m_szVal = this->m_ModifierPropertyValues[3].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[3].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[3].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[3].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)10u>  (line 840, @0x0000000002628e50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)10>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[10].m_eType;
  m_szVal = this->m_ModifierPropertyValues[10].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[10].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[10].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[10].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)11u>  (line 840, @0x0000000002628ef0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)11>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[11].m_eType;
  m_szVal = this->m_ModifierPropertyValues[11].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[11].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[11].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[11].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)12u>  (line 840, @0x0000000002628f90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)12>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[12].m_eType;
  m_szVal = this->m_ModifierPropertyValues[12].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[12].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[12].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[12].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)13u>  (line 840, @0x0000000002629030, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)13>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[13].m_eType;
  m_szVal = this->m_ModifierPropertyValues[13].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[13].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[13].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[13].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)14u>  (line 840, @0x00000000026290d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)14>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[14].m_eType;
  m_szVal = this->m_ModifierPropertyValues[14].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[14].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[14].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[14].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)16u>  (line 840, @0x0000000002629170, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)16>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[16].m_eType;
  m_szVal = this->m_ModifierPropertyValues[16].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[16].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[16].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[16].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)18u>  (line 840, @0x0000000002629210, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)18>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[18].m_eType;
  m_szVal = this->m_ModifierPropertyValues[18].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[18].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[18].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[18].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)24u>  (line 840, @0x00000000026292b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)24>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[24].m_eType;
  m_szVal = this->m_ModifierPropertyValues[24].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[24].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[24].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[24].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)22u>  (line 840, @0x0000000002629350, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)22>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[22].m_eType;
  m_szVal = this->m_ModifierPropertyValues[22].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[22].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[22].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[22].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)26u>  (line 840, @0x00000000026293f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)26>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[26].m_eType;
  m_szVal = this->m_ModifierPropertyValues[26].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[26].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[26].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[26].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)77u>  (line 840, @0x0000000002629490, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)77>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[77].m_eType;
  m_szVal = this->m_ModifierPropertyValues[77].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[77].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[77].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[77].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)25u>  (line 840, @0x0000000002629530, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)25>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[25].m_eType;
  m_szVal = this->m_ModifierPropertyValues[25].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[25].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[25].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[25].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)28u>  (line 840, @0x00000000026295d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)28>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[28].m_eType;
  m_szVal = this->m_ModifierPropertyValues[28].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[28].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[28].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[28].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)29u>  (line 840, @0x0000000002629670, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)29>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[29].m_eType;
  m_szVal = this->m_ModifierPropertyValues[29].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[29].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[29].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[29].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)34u>  (line 840, @0x0000000002629710, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)34>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[34].m_eType;
  m_szVal = this->m_ModifierPropertyValues[34].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[34].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[34].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[34].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)36u>  (line 840, @0x00000000026297b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)36>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[36].m_eType;
  m_szVal = this->m_ModifierPropertyValues[36].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[36].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[36].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[36].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)37u>  (line 840, @0x0000000002629850, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)37>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[37].m_eType;
  m_szVal = this->m_ModifierPropertyValues[37].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[37].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[37].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[37].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)39u>  (line 840, @0x00000000026298f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)39>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[39].m_eType;
  m_szVal = this->m_ModifierPropertyValues[39].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[39].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[39].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[39].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)31u>  (line 840, @0x0000000002629990, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)31>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[31].m_eType;
  m_szVal = this->m_ModifierPropertyValues[31].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[31].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[31].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[31].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)32u>  (line 840, @0x0000000002629a30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)32>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[32].m_eType;
  m_szVal = this->m_ModifierPropertyValues[32].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[32].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[32].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[32].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)81u>  (line 840, @0x0000000002629ad0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)81>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[81].m_eType;
  m_szVal = this->m_ModifierPropertyValues[81].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[81].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[81].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[81].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)82u>  (line 840, @0x0000000002629b70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)82>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[82].m_eType;
  m_szVal = this->m_ModifierPropertyValues[82].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[82].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[82].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[82].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)115u>  (line 840, @0x0000000002629c10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)115>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[115].m_eType;
  m_szVal = this->m_ModifierPropertyValues[115].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[115].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[115].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[115].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)116u>  (line 840, @0x0000000002629cb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)116>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[116].m_eType;
  m_szVal = this->m_ModifierPropertyValues[116].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[116].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[116].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[116].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)80u>  (line 840, @0x0000000002629d50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)80>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[80].m_eType;
  m_szVal = this->m_ModifierPropertyValues[80].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[80].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[80].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[80].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)79u>  (line 840, @0x0000000002629df0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)79>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[79].m_eType;
  m_szVal = this->m_ModifierPropertyValues[79].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[79].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[79].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[79].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)40u>  (line 840, @0x0000000002629e90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)40>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[40].m_eType;
  m_szVal = this->m_ModifierPropertyValues[40].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[40].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[40].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[40].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)42u>  (line 840, @0x0000000002629f30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)42>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[42].m_eType;
  m_szVal = this->m_ModifierPropertyValues[42].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[42].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[42].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[42].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)43u>  (line 840, @0x0000000002629fd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)43>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[43].m_eType;
  m_szVal = this->m_ModifierPropertyValues[43].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[43].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[43].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[43].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)44u>  (line 840, @0x000000000262a070, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)44>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[44].m_eType;
  m_szVal = this->m_ModifierPropertyValues[44].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[44].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[44].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[44].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)45u>  (line 840, @0x000000000262a110, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)45>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[45].m_eType;
  m_szVal = this->m_ModifierPropertyValues[45].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[45].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[45].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[45].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)46u>  (line 840, @0x000000000262a1b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)46>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[46].m_eType;
  m_szVal = this->m_ModifierPropertyValues[46].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[46].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[46].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[46].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)47u>  (line 840, @0x000000000262a250, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)47>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[47].m_eType;
  m_szVal = this->m_ModifierPropertyValues[47].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[47].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[47].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[47].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)49u>  (line 840, @0x000000000262a2f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)49>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[49].m_eType;
  m_szVal = this->m_ModifierPropertyValues[49].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[49].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[49].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[49].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)50u>  (line 840, @0x000000000262a390, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)50>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[50].m_eType;
  m_szVal = this->m_ModifierPropertyValues[50].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[50].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[50].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[50].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)51u>  (line 840, @0x000000000262a430, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)51>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[51].m_eType;
  m_szVal = this->m_ModifierPropertyValues[51].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[51].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[51].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[51].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)52u>  (line 840, @0x000000000262a4d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)52>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[52].m_eType;
  m_szVal = this->m_ModifierPropertyValues[52].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[52].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[52].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[52].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)53u>  (line 840, @0x000000000262a570, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)53>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[53].m_eType;
  m_szVal = this->m_ModifierPropertyValues[53].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[53].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[53].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[53].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)54u>  (line 840, @0x000000000262a610, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)54>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[54].m_eType;
  m_szVal = this->m_ModifierPropertyValues[54].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[54].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[54].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[54].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)55u>  (line 840, @0x000000000262a6b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)55>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[55].m_eType;
  m_szVal = this->m_ModifierPropertyValues[55].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[55].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[55].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[55].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)56u>  (line 840, @0x000000000262a750, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)56>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[56].m_eType;
  m_szVal = this->m_ModifierPropertyValues[56].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[56].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[56].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[56].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)57u>  (line 840, @0x000000000262a7f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)57>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[57].m_eType;
  m_szVal = this->m_ModifierPropertyValues[57].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[57].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[57].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[57].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)58u>  (line 840, @0x000000000262a890, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)58>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[58].m_eType;
  m_szVal = this->m_ModifierPropertyValues[58].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[58].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[58].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[58].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)59u>  (line 840, @0x000000000262a930, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)59>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[59].m_eType;
  m_szVal = this->m_ModifierPropertyValues[59].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[59].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[59].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[59].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)64u>  (line 840, @0x000000000262a9d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)64>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[64].m_eType;
  m_szVal = this->m_ModifierPropertyValues[64].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[64].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[64].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[64].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)65u>  (line 840, @0x000000000262aa70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)65>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[65].m_eType;
  m_szVal = this->m_ModifierPropertyValues[65].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[65].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[65].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[65].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)66u>  (line 840, @0x000000000262ab10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)66>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[66].m_eType;
  m_szVal = this->m_ModifierPropertyValues[66].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[66].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[66].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[66].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)69u>  (line 840, @0x000000000262abb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)69>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[69].m_eType;
  m_szVal = this->m_ModifierPropertyValues[69].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[69].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[69].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[69].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)74u>  (line 840, @0x000000000262ac50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)74>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[74].m_eType;
  m_szVal = this->m_ModifierPropertyValues[74].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[74].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[74].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[74].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)83u>  (line 840, @0x000000000262acf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)83>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[83].m_eType;
  m_szVal = this->m_ModifierPropertyValues[83].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[83].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[83].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[83].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)86u>  (line 840, @0x000000000262ad90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)86>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[86].m_eType;
  m_szVal = this->m_ModifierPropertyValues[86].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[86].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[86].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[86].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)88u>  (line 840, @0x000000000262ae30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)88>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[88].m_eType;
  m_szVal = this->m_ModifierPropertyValues[88].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[88].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[88].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[88].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)89u>  (line 840, @0x000000000262aed0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)89>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[89].m_eType;
  m_szVal = this->m_ModifierPropertyValues[89].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[89].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[89].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[89].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)90u>  (line 840, @0x000000000262af70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)90>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[90].m_eType;
  m_szVal = this->m_ModifierPropertyValues[90].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[90].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[90].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[90].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)91u>  (line 840, @0x000000000262b010, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)91>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[91].m_eType;
  m_szVal = this->m_ModifierPropertyValues[91].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[91].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[91].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[91].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)92u>  (line 840, @0x000000000262b0b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)92>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[92].m_eType;
  m_szVal = this->m_ModifierPropertyValues[92].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[92].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[92].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[92].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)95u>  (line 840, @0x000000000262b150, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)95>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[95].m_eType;
  m_szVal = this->m_ModifierPropertyValues[95].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[95].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[95].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[95].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)96u>  (line 840, @0x000000000262b1f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)96>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[96].m_eType;
  m_szVal = this->m_ModifierPropertyValues[96].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[96].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[96].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[96].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)97u>  (line 840, @0x000000000262b290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)97>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[97].m_eType;
  m_szVal = this->m_ModifierPropertyValues[97].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[97].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[97].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[97].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)100u>  (line 840, @0x000000000262b330, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)100>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[100].m_eType;
  m_szVal = this->m_ModifierPropertyValues[100].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[100].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[100].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[100].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)101u>  (line 840, @0x000000000262b3d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)101>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[101].m_eType;
  m_szVal = this->m_ModifierPropertyValues[101].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[101].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[101].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[101].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)102u>  (line 840, @0x000000000262b470, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)102>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[102].m_eType;
  m_szVal = this->m_ModifierPropertyValues[102].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[102].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[102].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[102].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)103u>  (line 840, @0x000000000262b510, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)103>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[103].m_eType;
  m_szVal = this->m_ModifierPropertyValues[103].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[103].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[103].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[103].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)104u>  (line 840, @0x000000000262b5b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)104>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[104].m_eType;
  m_szVal = this->m_ModifierPropertyValues[104].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[104].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[104].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[104].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)105u>  (line 840, @0x000000000262b650, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)105>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[105].m_eType;
  m_szVal = this->m_ModifierPropertyValues[105].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[105].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[105].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[105].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)106u>  (line 840, @0x000000000262b6f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)106>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[106].m_eType;
  m_szVal = this->m_ModifierPropertyValues[106].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[106].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[106].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[106].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)107u>  (line 840, @0x000000000262b790, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)107>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[107].m_eType;
  m_szVal = this->m_ModifierPropertyValues[107].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[107].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[107].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[107].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)110u>  (line 840, @0x000000000262b830, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)110>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[110].m_eType;
  m_szVal = this->m_ModifierPropertyValues[110].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[110].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[110].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[110].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)111u>  (line 840, @0x000000000262b8d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)111>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[111].m_eType;
  m_szVal = this->m_ModifierPropertyValues[111].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[111].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[111].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[111].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)155u>  (line 840, @0x000000000262b970, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)155>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[155].m_eType;
  m_szVal = this->m_ModifierPropertyValues[155].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[155].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[155].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[155].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)163u>  (line 840, @0x000000000262ba10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)163>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[163].m_eType;
  m_szVal = this->m_ModifierPropertyValues[163].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[163].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[163].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[163].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)164u>  (line 840, @0x000000000262bab0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)164>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[164].m_eType;
  m_szVal = this->m_ModifierPropertyValues[164].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[164].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[164].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[164].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)158u>  (line 840, @0x000000000262bb50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)158>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[158].m_eType;
  m_szVal = this->m_ModifierPropertyValues[158].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[158].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[158].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[158].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)160u>  (line 840, @0x000000000262bbf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)160>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[160].m_eType;
  m_szVal = this->m_ModifierPropertyValues[160].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[160].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[160].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[160].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)161u>  (line 840, @0x000000000262bc90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)161>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[161].m_eType;
  m_szVal = this->m_ModifierPropertyValues[161].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[161].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[161].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[161].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)162u>  (line 840, @0x000000000262bd30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)162>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[162].m_eType;
  m_szVal = this->m_ModifierPropertyValues[162].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[162].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[162].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[162].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)170u>  (line 840, @0x000000000262bdd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)170>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[170].m_eType;
  m_szVal = this->m_ModifierPropertyValues[170].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[170].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[170].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[170].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)171u>  (line 840, @0x000000000262be70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)171>(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  __int64 m_eType; // rax
  const char *m_szVal; // rbx
  int v5; // eax
  __int64 v6; // xmm0_8
  float baseValue; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  m_eType = this->m_ModifierPropertyValues[171].m_eType;
  m_szVal = this->m_ModifierPropertyValues[171].m_szVal;
  if ( m_eType == 1 )
  {
    baseValue = this->m_ModifierPropertyValues[171].m_flVal;
    v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
    v6 = LODWORD(baseValue);
    if ( v5 <= 1 )
    {
      result.m_szVal = m_szVal;
      *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(baseValue)) << 32) | 1;
    }
    else
    {
      result.m_szVal = 0;
      *&v6 = baseValue * v5;
      *&result.m_eType = (v6 << 32) | 1;
    }
  }
  else
  {
    result.m_szVal = this->m_ModifierPropertyValues[171].m_szVal;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(this->m_ModifierPropertyValues[171].m_flVal)) << 32) | m_eType;
  }
  return result;
}


// CDOTA_Modifier_DataDriven::LinkEffect  (line 868, @0x00000000025effa0, libserver.so)  // inlines: ClearFunction, LinkSimpleModifier<(modifierfunction)0u>, LinkSimpleModifier<(modifierfunction)100u>, LinkSimpleModifier<(modifierfunction)101u>, LinkSimpleModifier<(modifierfunction)102u>, LinkSimpleModifier<(modifierfunction)103u>, LinkSimpleModifier<(modifierfunction)104u>, LinkSimpleModifier<(modifierfunction)105u>, LinkSimpleModifier<(modifierfunction)106u>, LinkSimpleModifier<(modifierfunction)107u>, LinkSimpleModifier<(modifierfunction)10u>, LinkSimpleModifier<(modifierfunction)110u>, LinkSimpleModifier<(modifierfunction)111u>, LinkSimpleModifier<(modifierfunction)115u>, LinkSimpleModifier<(modifierfunction)116u>, LinkSimpleModifier<(modifierfunction)11u>, LinkSimpleModifier<(modifierfunction)12u>, LinkSimpleModifier<(modifierfunction)13u>, LinkSimpleModifier<(modifierfunction)14u>, LinkSimpleModifier<(modifierfunction)155u>, LinkSimpleModifier<(modifierfunction)158u>, LinkSimpleModifier<(modifierfunction)160u>, LinkSimpleModifier<(modifierfunction)161u>, LinkSimpleModifier<(modifierfunction)162u>, LinkSimpleModifier<(modifierfunction)163u>, LinkSimpleModifier<(modifierfunction)164u>, LinkSimpleModifier<(modifierfunction)16u>, LinkSimpleModifier<(modifierfunction)170u>, LinkSimpleModifier<(modifierfunction)171u>, LinkSimpleModifier<(modifierfunction)18u>, LinkSimpleModifier<(modifierfunction)22u>, LinkSimpleModifier<(modifierfunction)24u>, LinkSimpleModifier<(modifierfunction)25u>, LinkSimpleModifier<(modifierfunction)26u>, LinkSimpleModifier<(modifierfunction)28u>, LinkSimpleModifier<(modifierfunction)29u>, LinkSimpleModifier<(modifierfunction)31u>, LinkSimpleModifier<(modifierfunction)32u>, LinkSimpleModifier<(modifierfunction)34u>, LinkSimpleModifier<(modifierfunction)36u>, LinkSimpleModifier<(modifierfunction)37u>, LinkSimpleModifier<(modifierfunction)39u>, LinkSimpleModifier<(modifierfunction)3u>, LinkSimpleModifier<(modifierfunction)40u>, LinkSimpleModifier<(modifierfunction)42u>, LinkSimpleModifier<(modifierfunction)43u>, LinkSimpleModifier<(modifierfunction)44u>, LinkSimpleModifier<(modifierfunction)45u>, LinkSimpleModifier<(modifierfunction)46u>, LinkSimpleModifier<(modifierfunction)47u>, LinkSimpleModifier<(modifierfunction)49u>, LinkSimpleModifier<(modifierfunction)50u>, LinkSimpleModifier<(modifierfunction)51u>, LinkSimpleModifier<(modifierfunction)52u>, LinkSimpleModifier<(modifierfunction)53u>, LinkSimpleModifier<(modifierfunction)54u>, LinkSimpleModifier<(modifierfunction)55u>, LinkSimpleModifier<(modifierfunction)56u>, LinkSimpleModifier<(modifierfunction)57u>, LinkSimpleModifier<(modifierfunction)58u>, LinkSimpleModifier<(modifierfunction)59u>, LinkSimpleModifier<(modifierfunction)64u>, LinkSimpleModifier<(modifierfunction)65u>, LinkSimpleModifier<(modifierfunction)66u>, LinkSimpleModifier<(modifierfunction)69u>, LinkSimpleModifier<(modifierfunction)74u>, LinkSimpleModifier<(modifierfunction)77u>, LinkSimpleModifier<(modifierfunction)79u>, LinkSimpleModifier<(modifierfunction)80u>, LinkSimpleModifier<(modifierfunction)81u>, LinkSimpleModifier<(modifierfunction)82u>, LinkSimpleModifier<(modifierfunction)83u>, LinkSimpleModifier<(modifierfunction)86u>, LinkSimpleModifier<(modifierfunction)88u>, LinkSimpleModifier<(modifierfunction)89u>, LinkSimpleModifier<(modifierfunction)90u>, LinkSimpleModifier<(modifierfunction)91u>, LinkSimpleModifier<(modifierfunction)92u>, LinkSimpleModifier<(modifierfunction)95u>, LinkSimpleModifier<(modifierfunction)96u>, LinkSimpleModifier<(modifierfunction)97u>, SetFunction
// calls: DevMsg(char const*,...)
// callers: CDOTA_Modifier_DataDriven::ReadKeyValues_Properties
// strings: "Unhandled data-driven modifier function %s.\n"
// globals: jpt_25EFFC0, CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)171>(CModifierParams const&), CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)170>(CModifierParams const&), CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)164>(CModifierParams const&), CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)163>(CModifierParams const&), CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)162>(CModifierParams const&), CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)161>(CModifierParams const&), CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)160>(CModifierParams const&) (40 total)
void __fastcall CDOTA_Modifier_DataDriven::LinkEffect(CDOTA_Modifier_DataDriven *const this, modifierfunction fn)
{
  switch ( fn )
  {
    case modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE:
      this->m_Functions[0].__delta = 0;
      this->m_Functions[0].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)0>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE:
      this->m_Functions[3].__delta = 0;
      this->m_Functions[3].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)3>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PERSISTENT_INVISIBILITY:
      this->m_Functions[10].__delta = 0;
      this->m_Functions[10].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)10>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT:
      this->m_Functions[11].__delta = 0;
      this->m_Functions[11].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)11>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BASE_OVERRIDE:
      this->m_Functions[12].__delta = 0;
      this->m_Functions[12].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)12>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE:
      this->m_Functions[13].__delta = 0;
      this->m_Functions[13].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)13>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE_UNIQUE:
      this->m_Functions[14].__delta = 0;
      this->m_Functions[14].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)14>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE:
      this->m_Functions[16].__delta = 0;
      this->m_Functions[16].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)16>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE:
      this->m_Functions[18].__delta = 0;
      this->m_Functions[18].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)18>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ATTACKSPEED_BASE_OVERRIDE:
      this->m_Functions[22].__delta = 0;
      this->m_Functions[22].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)22>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ATTACKSPEED_BONUS_CONSTANT:
      this->m_Functions[24].__delta = 0;
      this->m_Functions[24].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)24>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_COOLDOWN_REDUCTION_CONSTANT:
      this->m_Functions[25].__delta = 0;
      this->m_Functions[25].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)25>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT:
      this->m_Functions[26].__delta = 0;
      this->m_Functions[26].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)26>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE:
      this->m_Functions[28].__delta = 0;
      this->m_Functions[28].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)28>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION:
      this->m_Functions[29].__delta = 0;
      this->m_Functions[29].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)29>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE:
      this->m_Functions[31].__delta = 0;
      this->m_Functions[31].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)31>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE:
      this->m_Functions[32].__delta = 0;
      this->m_Functions[32].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)32>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE:
      this->m_Functions[34].__delta = 0;
      this->m_Functions[34].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)34>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_INCOMING_DAMAGE_PERCENTAGE:
      this->m_Functions[36].__delta = 0;
      this->m_Functions[36].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)36>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_PERCENTAGE:
      this->m_Functions[37].__delta = 0;
      this->m_Functions[37].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)37>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_INCOMING_SPELL_DAMAGE_CONSTANT:
      this->m_Functions[39].__delta = 0;
      this->m_Functions[39].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)39>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_EVASION_CONSTANT:
      this->m_Functions[40].__delta = 0;
      this->m_Functions[40].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)40>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_AVOID_DAMAGE:
      this->m_Functions[42].__delta = 0;
      this->m_Functions[42].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)42>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_AVOID_SPELL:
      this->m_Functions[43].__delta = 0;
      this->m_Functions[43].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)43>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MISS_PERCENTAGE:
      this->m_Functions[44].__delta = 0;
      this->m_Functions[44].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)44>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS:
      this->m_Functions[45].__delta = 0;
      this->m_Functions[45].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)45>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE:
      this->m_Functions[46].__delta = 0;
      this->m_Functions[46].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)46>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE_ACTIVE:
      this->m_Functions[47].__delta = 0;
      this->m_Functions[47].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)47>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS:
      this->m_Functions[49].__delta = 0;
      this->m_Functions[49].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)49>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DECREPIFY_UNIQUE:
      this->m_Functions[50].__delta = 0;
      this->m_Functions[50].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)50>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BASE_MANA_REGEN:
      this->m_Functions[51].__delta = 0;
      this->m_Functions[51].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)51>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_CONSTANT:
      this->m_Functions[52].__delta = 0;
      this->m_Functions[52].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)52>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_CONSTANT_UNIQUE:
      this->m_Functions[53].__delta = 0;
      this->m_Functions[53].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)53>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_PERCENTAGE:
      this->m_Functions[54].__delta = 0;
      this->m_Functions[54].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)54>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_TOTAL_PERCENTAGE:
      this->m_Functions[55].__delta = 0;
      this->m_Functions[55].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)55>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_HEALTH_REGEN_CONSTANT:
      this->m_Functions[56].__delta = 0;
      this->m_Functions[56].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)56>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE:
      this->m_Functions[57].__delta = 0;
      this->m_Functions[57].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)57>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_HEALTH_BONUS:
      this->m_Functions[58].__delta = 0;
      this->m_Functions[58].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)58>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_BONUS:
      this->m_Functions[59].__delta = 0;
      this->m_Functions[59].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)59>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_STATS_STRENGTH_BONUS:
      this->m_Functions[64].__delta = 0;
      this->m_Functions[64].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)64>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_STATS_AGILITY_BONUS:
      this->m_Functions[65].__delta = 0;
      this->m_Functions[65].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)65>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_STATS_INTELLECT_BONUS:
      this->m_Functions[66].__delta = 0;
      this->m_Functions[66].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)66>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS:
      this->m_Functions[69].__delta = 0;
      this->m_Functions[69].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)69>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_RESPAWNTIME:
      this->m_Functions[74].__delta = 0;
      this->m_Functions[74].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)74>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE:
      this->m_Functions[77].__delta = 0;
      this->m_Functions[77].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)77>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_CASTTIME_PERCENTAGE:
      this->m_Functions[79].__delta = 0;
      this->m_Functions[79].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)79>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANACOST_PERCENTAGE:
      this->m_Functions[80].__delta = 0;
      this->m_Functions[80].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)80>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DEATHGOLDCOST:
      this->m_Functions[81].__delta = 0;
      this->m_Functions[81].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)81>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_EXP_RATE_BOOST:
      this->m_Functions[82].__delta = 0;
      this->m_Functions[82].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)82>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PREATTACK_CRITICALSTRIKE:
      this->m_Functions[83].__delta = 0;
      this->m_Functions[83].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)83>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK:
      this->m_Functions[86].__delta = 0;
      this->m_Functions[86].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)86>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_UNAVOIDABLE_PRE_ARMOR:
      this->m_Functions[88].__delta = 0;
      this->m_Functions[88].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)88>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK:
      this->m_Functions[89].__delta = 0;
      this->m_Functions[89].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)89>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ANIMATION:
      this->m_Functions[90].__delta = 0;
      this->m_Functions[90].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)90>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ANIMATION_WEIGHT:
      this->m_Functions[91].__delta = 0;
      this->m_Functions[91].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)91>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ANIMATION_RATE:
      this->m_Functions[92].__delta = 0;
      this->m_Functions[92].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)92>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DISABLE_AUTOATTACK:
      this->m_Functions[95].__delta = 0;
      this->m_Functions[95].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)95>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BONUS_DAY_VISION:
      this->m_Functions[96].__delta = 0;
      this->m_Functions[96].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)96>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BONUS_NIGHT_VISION:
      this->m_Functions[97].__delta = 0;
      this->m_Functions[97].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)97>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_FIXED_DAY_VISION:
      this->m_Functions[100].__delta = 0;
      this->m_Functions[100].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)100>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_FIXED_NIGHT_VISION:
      this->m_Functions[101].__delta = 0;
      this->m_Functions[101].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)101>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MIN_HEALTH:
      this->m_Functions[102].__delta = 0;
      this->m_Functions[102].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)102>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PHYSICAL:
      this->m_Functions[103].__delta = 0;
      this->m_Functions[103].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)103>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_MAGICAL:
      this->m_Functions[104].__delta = 0;
      this->m_Functions[104].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)104>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PURE:
      this->m_Functions[105].__delta = 0;
      this->m_Functions[105].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)105>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_IS_ILLUSION:
      this->m_Functions[106].__delta = 0;
      this->m_Functions[106].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)106>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ILLUSION_LABEL:
      this->m_Functions[107].__delta = 0;
      this->m_Functions[107].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)107>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TURN_RATE_PERCENTAGE:
      this->m_Functions[110].__delta = 0;
      this->m_Functions[110].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)110>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DISABLE_HEALING:
      this->m_Functions[111].__delta = 0;
      this->m_Functions[111].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)111>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BOUNTY_CREEP_MULTIPLIER:
      this->m_Functions[115].__delta = 0;
      this->m_Functions[115].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)115>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BOUNTY_OTHER_MULTIPLIER:
      this->m_Functions[116].__delta = 0;
      this->m_Functions[116].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)116>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TRANSLATE_ACTIVITY_MODIFIERS:
      this->m_Functions[155].__delta = 0;
      this->m_Functions[155].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)155>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PROVIDES_FOW_POSITION:
      this->m_Functions[158].__delta = 0;
      this->m_Functions[158].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)158>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_FORCE_DRAW_MINIMAP:
      this->m_Functions[160].__delta = 0;
      this->m_Functions[160].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)160>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DISABLE_TURNING:
      this->m_Functions[161].__delta = 0;
      this->m_Functions[161].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)161>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_IGNORE_CAST_ANGLE:
      this->m_Functions[162].__delta = 0;
      this->m_Functions[162].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)162>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_CHANGE_ABILITY_VALUE:
      this->m_Functions[163].__delta = 0;
      this->m_Functions[163].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)163>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABILITY_LAYOUT:
      this->m_Functions[164].__delta = 0;
      this->m_Functions[164].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)164>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_CAN_ATTACK_TREES:
      this->m_Functions[170].__delta = 0;
      this->m_Functions[170].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)170>;
      break;
    case modifierfunction::MODIFIER_PROPERTY_VISUAL_Z_DELTA:
      this->m_Functions[171].__delta = 0;
      this->m_Functions[171].__pfn = CDOTA_Modifier_DataDriven::GetSimpleModifier<(modifierfunction)171>;
      break;
    default:
      DevMsg("Unhandled data-driven modifier function %s.\n", g_ModifierNames[fn]);
      break;
  }
}


// CDOTA_Modifier_DataDriven::OnAttacked  (line 1097, @0x00000000025eb630, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAttacked(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAttacked; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAttacked = this->m_pOnAttacked;
  if ( m_pOnAttacked != 0 )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->htarget.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAttacked, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAttackLanded  (line 1110, @0x00000000025eb730, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAttackLanded(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAttackLanded; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAttackLanded = this->m_pOnAttackLanded;
  if ( m_pOnAttackLanded != 0 )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAttackLanded, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAttackStart  (line 1122, @0x00000000025eb830, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAttackStart(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAttackStart; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAttackStart = this->m_pOnAttackStart;
  if ( m_pOnAttackStart != 0 )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAttackStart, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAttack  (line 1134, @0x00000000025eb930, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAttack(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAttack; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAttack = this->m_pOnAttack;
  if ( m_pOnAttack != 0 )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAttack, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnTakeDamage  (line 1146, @0x00000000025eba30, libserver.so)  // inlines: AttackerNPC, Get, GetInstance, GetParent, IsUnitMyParent, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnTakeDamage(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnTakeDamage; // r14
  CEntityInstance *v5; // rax
  KeyValues *m_pOnDealDamage; // r14
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnTakeDamage = this->m_pOnTakeDamage;
  if ( m_pOnTakeDamage != 0 )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&params->hunit);
    if ( v5 != 0
      && BYTE3(v5[7]._vptr_IHandleEntity) != 0
      && v5 == CEntityHandle::operator CEntityInstance *(&this->m_hParent) )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnTakeDamage, Caster, params);
    }
  }
  m_pOnDealDamage = this->m_pOnDealDamage;
  if ( m_pOnDealDamage == 0 )
    return 1uLL;
  v7 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v7 == 0
    || BYTE3(v7[7]._vptr_IHandleEntity) == 0
    || v7 != CEntityHandle::operator CEntityInstance *(&this->m_hParent) )
  {
    return 1uLL;
  }
  v9 = CDOTA_Buff::GetCaster(this);
  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnDealDamage, v9, params);
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnProjectileDodge  (line 1166, @0x00000000025ebb20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnProjectileDodge(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnProjectileDodge; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnProjectileDodge = this->m_pOnProjectileDodge;
  if ( m_pOnProjectileDodge != 0 )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->htarget.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnProjectileDodge, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnOrder  (line 1179, @0x00000000025ebc20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnOrder(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnOrder; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnOrder = this->m_pOnOrder;
  if ( m_pOnOrder != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnOrder, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnUnitMoved  (line 1192, @0x00000000025ebd20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnUnitMoved(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnUnitMoved; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnUnitMoved = this->m_pOnUnitMoved;
  if ( m_pOnUnitMoved != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnUnitMoved, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAbilityStart  (line 1205, @0x00000000025ebe20, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAbilityStart(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAbilityStart; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAbilityStart = this->m_pOnAbilityStart;
  if ( m_pOnAbilityStart != 0 )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAbilityStart, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAbilityEndChannel  (line 1218, @0x00000000025ebf20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAbilityEndChannel(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAbilityEndChannel; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAbilityEndChannel = this->m_pOnAbilityEndChannel;
  if ( m_pOnAbilityEndChannel != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAbilityEndChannel, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnStateChanged  (line 1231, @0x00000000025ec020, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnStateChanged(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnStateChanged; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnStateChanged = this->m_pOnStateChanged;
  if ( m_pOnStateChanged != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnStateChanged, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnRespawn  (line 1244, @0x00000000025ec120, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnRespawn(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnRespawn; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnRespawn = this->m_pOnRespawn;
  if ( m_pOnRespawn != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnRespawn, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnSpentMana  (line 1257, @0x00000000025ec220, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnSpentMana(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnSpentMana; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnSpentMana = this->m_pOnSpentMana;
  if ( m_pOnSpentMana != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnSpentMana, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnTeleporting  (line 1270, @0x00000000025ec320, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnTeleporting(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnTeleporting; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnTeleporting = this->m_pOnTeleporting;
  if ( m_pOnTeleporting != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnTeleporting, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnTeleported  (line 1283, @0x00000000025ec420, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnTeleported(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnTeleported; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnTeleported = this->m_pOnTeleported;
  if ( m_pOnTeleported != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnTeleported, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnHealthGained  (line 1296, @0x00000000025ec520, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnHealthGained(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnHealthGained; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnHealthGained = this->m_pOnHealthGained;
  if ( m_pOnHealthGained != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnHealthGained, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnManaGained  (line 1309, @0x00000000025ec620, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnManaGained(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnManaGained; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnManaGained = this->m_pOnManaGained;
  if ( m_pOnManaGained != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnManaGained, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnHeroKilled  (line 1322, @0x00000000025ec720, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnHeroKilled(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnHeroKilled; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnHeroKilled = this->m_pOnHeroKilled;
  if ( m_pOnHeroKilled != 0 )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnHeroKilled, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnHealReceived  (line 1335, @0x00000000025ec820, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnHealReceived(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnHealReceived; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnHealReceived = this->m_pOnHealReceived;
  if ( m_pOnHealReceived != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnHealReceived, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnDeath  (line 1348, @0x00000000025ec920, libserver.so)  // inlines: AttackerNPC, Get, GetInstance, GetParent, IsUnitMyParent, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnDeath(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnKill; // r14
  CEntityInstance *v5; // rax
  KeyValues *m_pOnDeath; // r14
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnKill = this->m_pOnKill;
  if ( m_pOnKill != 0 )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
    if ( v5 != 0
      && BYTE3(v5[7]._vptr_IHandleEntity) != 0
      && v5 == CEntityHandle::operator CEntityInstance *(&this->m_hParent) )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnKill, Caster, params);
    }
  }
  m_pOnDeath = this->m_pOnDeath;
  if ( m_pOnDeath == 0 )
    return 1uLL;
  v7 = CEntityHandle::operator CEntityInstance *(&params->hunit);
  if ( v7 == 0
    || BYTE3(v7[7]._vptr_IHandleEntity) == 0
    || v7 != CEntityHandle::operator CEntityInstance *(&this->m_hParent) )
  {
    return 1uLL;
  }
  v9 = CDOTA_Buff::GetCaster(this);
  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnDeath, v9, params);
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAbilityExecuted  (line 1370, @0x00000000025eca10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAbilityExecuted(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAbilityExecuted; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAbilityExecuted = this->m_pOnAbilityExecuted;
  if ( m_pOnAbilityExecuted != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAbilityExecuted, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAttackFailed  (line 1384, @0x00000000025ecb10, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAttackFailed(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAttackFailed; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAttackFailed = this->m_pOnAttackFailed;
  if ( m_pOnAttackFailed != 0 )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAttackFailed, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAttackAllied  (line 1398, @0x00000000025ecc10, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAttackAllied(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAttackAllied; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAttackAllied = this->m_pOnAttackAllied;
  if ( m_pOnAttackAllied != 0 )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAttackAllied, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnAttackFinished  (line 1411, @0x00000000025ecd10, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DataDriven::OnAttackFinished(
        CDOTA_Modifier_DataDriven *const this,
        const CModifierParams *const params)
{
  KeyValues *m_pOnAttackFinished; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v9; // edi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_pOnAttackFinished = this->m_pOnAttackFinished;
  if ( m_pOnAttackFinished != 0 )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v9 = this->m_hParent.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hParent.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && m_pInstance == v11->m_pInstance )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnAttackFinished, Caster, params);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DataDriven::OnDestroy  (line 1425, @0x00000000025eded0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DataDriven::OnDestroy(CDOTA_Modifier_DataDriven *const this)
{
  KeyValues *m_pOnDestroy; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  CModifierParams params; // [rsp+0h] [rbp-A0h] BYREF

  m_pOnDestroy = this->m_pOnDestroy;
  if ( m_pOnDestroy != 0 )
  {
    m_Index = this->m_hParent.m_Index;
    params.bCraniumBasherTested = 0;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.fOriginalDamage = 0.0;
    params.bTooltip = 0;
    params.bHeartRegenApplied = 0;
    params.nActivity = -1;
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
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hParent.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        {
          m_pEntity = v5->m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v8 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            params.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                   | v8 & 0x7FFF;
          }
        }
      }
    }
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnDestroy, Caster, &params);
  }
}


// CDOTA_Modifier_DataDriven::OnIntervalThink  (line 1437, @0x00000000025ee090, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_ActionRunner::PerformActions
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DataDriven::OnIntervalThink(CDOTA_Modifier_DataDriven *const this)
{
  KeyValues *m_pOnIntervalThink; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  CModifierParams params; // [rsp+0h] [rbp-A0h] BYREF

  m_pOnIntervalThink = this->m_pOnIntervalThink;
  if ( m_pOnIntervalThink != 0 )
  {
    m_Index = this->m_hParent.m_Index;
    params.bCraniumBasherTested = 0;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.fOriginalDamage = 0.0;
    params.bTooltip = 0;
    params.bHeartRegenApplied = 0;
    params.nActivity = -1;
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
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hParent.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        {
          m_pEntity = v5->m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v8 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            params.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                   | v8 & 0x7FFF;
          }
        }
      }
    }
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_ActionRunner::PerformActions(&this->CDOTA_ActionRunner, m_pOnIntervalThink, Caster, &params);
  }
}


// CDOTA_Orb_DataDriven::~CDOTA_Orb_DataDriven  (line 1452, @0x000000000262bf20, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_Orb_DataDriven::~CDOTA_Orb_DataDriven(CDOTA_Orb_DataDriven *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_Orb_DataDriven::~CDOTA_Orb_DataDriven  (line 1452, @0x000000000262da40, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_Orb_DataDriven
// calls: operator delete
void __fastcall CDOTA_Orb_DataDriven::~CDOTA_Orb_DataDriven(CDOTA_Orb_DataDriven *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_Orb_DataDriven::GetProjectileName  (line 1464, @0x0000000002625fa0, libserver.so)
const char *__fastcall CDOTA_Orb_DataDriven::GetProjectileName(CDOTA_Orb_DataDriven *const this)
{
  return this->m_pszProjectileName;
}


// CDOTA_Orb_DataDriven::GetOrbLabel  (line 1465, @0x0000000002625fb0, libserver.so)
int __fastcall CDOTA_Orb_DataDriven::GetOrbLabel(CDOTA_Orb_DataDriven *const this)
{
  return this->m_nOrbLabel;
}


// CDOTA_Orb_DataDriven::OnOrbImpact  (line 1484, @0x0000000002646c60, libserver.so)  // inlines: Get, GetCaster, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Orb::GetAbility, __dynamic_cast, CDOTA_Ability_DataDriven::GetModifierDataByIndex, KeyValues::FindKey, CEntityHandle::operator CEntityInstance*, CDOTA_ActionRunner::PerformActions, CDOTA_Item_DataDriven::GetModifierDataByIndex
// strings: "OnOrbImpact"
void __fastcall CDOTA_Orb_DataDriven::OnOrbImpact(
        CDOTA_Orb_DataDriven *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rbx
  CDOTA_Ability_DataDriven *v6; // r13
  CDOTA_Item_DataDriven *v7; // rax
  CDOTA_Item_DataDriven *v8; // rbx
  int m_nModifierIndexInAbility; // esi
  KeyValues *v10; // rax
  KeyValues *Key; // r14
  EHANDLE *p_m_hCaster; // rdi
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdx
  CDOTA_ActionRunner *v15; // rdi
  CEntityInstance *v16; // rax

  Ability = CDOTA_Orb::GetAbility(this);
  v5 = Ability;
  if ( Ability != 0 )
  {
    v6 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Ability_DataDriven, 0);
    v7 = __dynamic_cast(v5, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_DataDriven, 0);
    v8 = v7;
    if ( v7 != 0 || v6 != 0 )
    {
      m_nModifierIndexInAbility = this->m_nModifierIndexInAbility;
      v10 = v6 != 0
          ? CDOTA_Ability_DataDriven::GetModifierDataByIndex(v6, m_nModifierIndexInAbility)
          : CDOTA_Item_DataDriven::GetModifierDataByIndex(v7, m_nModifierIndexInAbility);
      if ( v10 != 0 )
      {
        Key = KeyValues::FindKey(v10, "OnOrbImpact", 0);
        if ( Key != 0 )
        {
          p_m_hCaster = &this->m_hCaster;
          if ( v6 != 0 )
          {
            v13 = CEntityHandle::operator CEntityInstance *(p_m_hCaster);
            if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
              v14 = v13;
            else
              v14 = 0;
            v15 = &v6->CDOTA_ActionRunner;
          }
          else
          {
            v16 = CEntityHandle::operator CEntityInstance *(p_m_hCaster);
            if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
              v14 = v16;
            else
              v14 = 0;
            v15 = &v8->CDOTA_ActionRunner;
          }
          CDOTA_ActionRunner::PerformActions(v15, Key, v14, params);
        }
      }
    }
  }
}


// CDOTA_Orb_DataDriven::OnOrbFire  (line 1505, @0x0000000002646db0, libserver.so)  // inlines: Get, GetCaster, GetInstance, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Orb::GetAbility, __dynamic_cast, CDOTA_Ability_DataDriven::GetModifierDataByIndex, KeyValues::FindKey, CEntityHandle::operator CEntityInstance*, CDOTA_ActionRunner::PerformActions, CDOTA_AttackRecord::DeleteOrb, CDOTA_Item_DataDriven::GetModifierDataByIndex
// strings: "OnOrbFire"
void __fastcall CDOTA_Orb_DataDriven::OnOrbFire(CDOTA_Orb_DataDriven *const this, const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rbx
  CDOTA_Ability_DataDriven *v6; // r13
  CDOTA_Item_DataDriven *v7; // rax
  CDOTA_Item_DataDriven *v8; // rbx
  int m_nModifierIndexInAbility; // esi
  KeyValues *v10; // rax
  KeyValues *Key; // r14
  EHANDLE *p_m_hCaster; // rdi
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdx
  bool v15; // al
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdx

  Ability = CDOTA_Orb::GetAbility(this);
  v5 = Ability;
  if ( Ability != 0 )
  {
    v6 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Ability_DataDriven, 0);
    v7 = __dynamic_cast(v5, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_DataDriven, 0);
    v8 = v7;
    if ( v7 != 0 || v6 != 0 )
    {
      m_nModifierIndexInAbility = this->m_nModifierIndexInAbility;
      v10 = v6 != 0
          ? CDOTA_Ability_DataDriven::GetModifierDataByIndex(v6, m_nModifierIndexInAbility)
          : CDOTA_Item_DataDriven::GetModifierDataByIndex(v7, m_nModifierIndexInAbility);
      if ( v10 != 0 )
      {
        Key = KeyValues::FindKey(v10, "OnOrbFire", 0);
        if ( Key != 0 )
        {
          p_m_hCaster = &this->m_hCaster;
          if ( v6 != 0 )
          {
            v13 = CEntityHandle::operator CEntityInstance *(p_m_hCaster);
            if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
              v14 = v13;
            else
              v14 = 0;
            v15 = CDOTA_ActionRunner::PerformActions(&v6->CDOTA_ActionRunner, Key, v14, params);
          }
          else
          {
            v16 = CEntityHandle::operator CEntityInstance *(p_m_hCaster);
            if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
              v17 = v16;
            else
              v17 = 0;
            v15 = CDOTA_ActionRunner::PerformActions(&v8->CDOTA_ActionRunner, Key, v17, params);
          }
          if ( v15 )
            CDOTA_AttackRecord::DeleteOrb(this->m_pRecord);
        }
      }
    }
  }
}


// CDOTA_Modifier_DataDriven::GetCustomOrb  (line 1539, @0x00000000025fcb20, libserver.so)  // inlines: CDOTA_Orb_DataDriven, Get, GetAbility, GetInstance, operator==<CBaseEntity>
// calls: KeyValues::KeyValues, CDOTA_Buff::GetCaster, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_datadriven_orb"
CDOTA_Orb *__fastcall CDOTA_Modifier_DataDriven::GetCustomOrb(
        CDOTA_Modifier_DataDriven *const this,
        CDOTA_AttackRecord *pRecord)
{
  CDOTABaseAbility *v4; // r15
  CDOTA_Orb *v5; // r14
  CDOTA_BaseNPC *pCaster; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  if ( this->m_nOrbPriority == 0 )
    return 0;
  KeyValues::KeyValues(&kv, "modifier_datadriven_orb");
  pCaster = CDOTA_Buff::GetCaster(this);
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  v5 = operator new(0x28u);
  CDOTA_Orb::CDOTA_Orb(v5, pRecord, &kv, pCaster, v4);
  v5->_vptr_CDOTA_Orb = &off_412BF70;
  LODWORD(v5[1]._vptr_CDOTA_Orb) = this->m_nOrbLabel;
  HIDWORD(v5[1]._vptr_CDOTA_Orb) = this->m_nIndexInAbility;
  v5[1].m_pRecord = this->m_pszOrbProjectileName;
  KeyValues::~KeyValues(&kv);
  return v5;
}


// CDOTA_Modifier_DataDriven::LookupValueSymbol  (line 1551, @0x00000000026235e0, libserver.so)  // inlines: CVariantBase, FStrEq, Free, Get, GetAbility, GetInstance, _V_strcmp, atof, atoi, operator==<CBaseEntity>, strchr, ~CVariantBase
// calls: CDOTA_ActionRunner::LookupValueSymbol, strchr, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTA_Modifier_DataDriven::GetAbilityKeyValues, KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetString, KeyValues::GetNextTrueSubKey, strtol, strtod (14 total)
// strings: "stack_count", "AbilitySpecial", "FIELD_FLOAT", "var_type"
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTA_Modifier_DataDriven::LookupValueSymbol(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_Modifier_DataDriven *const this,
        const char *pszValue)
{
  CDOTA_ActionRunner *v3; // r14
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // r14
  void *v10; // rax
  KeyValues *AbilityKeyValues; // rax
  KeyValues *Key; // rax
  KeyValues *i; // rax
  const char *String; // r14
  KeyValues *v15; // r13
  void *v16; // rax
  int v17; // eax
  const char *v18; // rax
  double v19; // xmm0_8
  ScriptVariant_t v20; // [rsp+0h] [rbp-40h] BYREF

  v3 = &this->CDOTA_ActionRunner;
  CDOTA_ActionRunner::LookupValueSymbol(&v20, &this->CDOTA_ActionRunner, pszValue);
  if ( v20.m_type != 0 )
  {
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, a1);
    goto LABEL_5;
  }
  if ( pszValue == 0 )
    goto LABEL_20;
  if ( strchr(pszValue, 46) != 0 )
  {
    (*(this->_vptr_CDOTA_ActionRunner + 4))(a1, v3, pszValue);
    goto LABEL_5;
  }
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  v9 = v8;
  if ( v8 != 0 )
  {
    v10 = __dynamic_cast(v8, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Ability_DataDriven, 0);
    if ( v10 != 0 )
    {
      (*(*v10 + 2664LL))(a1, v10, pszValue);
      goto LABEL_5;
    }
    v16 = __dynamic_cast(v9, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_DataDriven, 0);
    if ( v16 != 0 )
    {
      (*(*v16 + 2912LL))(a1, v16, pszValue);
      goto LABEL_5;
    }
  }
  if ( pszValue != "stack_count" && strcmp(pszValue, "stack_count") != 0 )
  {
    AbilityKeyValues = CDOTA_Modifier_DataDriven::GetAbilityKeyValues(this);
    if ( AbilityKeyValues != 0 )
    {
      Key = KeyValues::FindKey(AbilityKeyValues, "AbilitySpecial", 0);
      if ( Key != 0 )
      {
        for ( i = KeyValues::GetFirstTrueSubKey(Key); ; i = KeyValues::GetNextTrueSubKey(v15) )
        {
          v15 = i;
          if ( i == 0 )
            break;
          String = KeyValues::GetString(i, pszValue, 0, 0, 0);
          if ( String != 0 )
          {
            v18 = KeyValues::GetString(v15, "var_type", "FIELD_FLOAT", 0, 0);
            if ( v18 != "FIELD_FLOAT" && strcmp(v18, "FIELD_FLOAT") != 0 )
            {
              v17 = strtol(String, 0, 10);
              goto LABEL_24;
            }
            v19 = strtod(String, 0);
            a1->m_type = 34;
            a1->m_flags = 0;
            a1->m_float64 = v19;
            goto LABEL_5;
          }
        }
      }
    }
LABEL_20:
    a1->m_uint64 = 0;
    a1->m_type = 0;
    a1->m_flags = 0;
    goto LABEL_5;
  }
  v17 = (*(this->_vptr_CDOTA_Buff + 27))(this);
LABEL_24:
  a1->m_int = v17;
  a1->m_type = 5;
  a1->m_flags = 0;
LABEL_5:
  if ( (v20.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
  return a1;
}


