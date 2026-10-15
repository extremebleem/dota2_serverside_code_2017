
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Modifier_DataDriven::~CDOTA_Modifier_DataDriven  (line 34, @0x00000000026510f0, libserver.so)
// calls: CDOTA_ActionRunner::~CDOTA_ActionRunner, CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DataDriven::~CDOTA_Modifier_DataDriven(CDOTA_Modifier_DataDriven *const this)
{
  CDOTA_ActionRunner *v2; // rdi

  v2 = &this->CDOTA_ActionRunner;
  v2[-125].m_pCaster = &off_412BBF0;
  v2->_vptr_CDOTA_ActionRunner = &off_412BEF8;
  CDOTA_ActionRunner::~CDOTA_ActionRunner(v2);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DataDriven::~CDOTA_Modifier_DataDriven  (line 34, @0x0000000002651130, libserver.so)  // inlines: ~CDOTA_Modifier_DataDriven
// calls: CDOTA_ActionRunner::~CDOTA_ActionRunner, CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DataDriven::~CDOTA_Modifier_DataDriven(CDOTA_Modifier_DataDriven *const this)
{
  CDOTA_ActionRunner *v2; // rdi

  v2 = &this->CDOTA_ActionRunner;
  v2[-125].m_pCaster = &off_412BBF0;
  v2->_vptr_CDOTA_ActionRunner = &off_412BEF8;
  CDOTA_ActionRunner::~CDOTA_ActionRunner(v2);
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DataDriven::AllowIllusionDuplicate  (line 44, @0x0000000002625e40, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::AllowIllusionDuplicate(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_bAllowIllusionDuplicate;
}


// CDOTA_Modifier_DataDriven::IsAura  (line 45, @0x0000000002625e50, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::IsAura(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_nAuraModifierIndex >= 0;
}


// CDOTA_Modifier_DataDriven::IsDebuff  (line 48, @0x0000000002625e70, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::IsDebuff(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_bIsDebuff;
}


// CDOTA_Modifier_DataDriven::IsHidden  (line 49, @0x0000000002625e80, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::IsHidden(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_bIsHidden;
}


// CDOTA_Modifier_DataDriven::IsPurgable  (line 50, @0x0000000002625e90, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::IsPurgable(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_bIsPurgable;
}


// CDOTA_Modifier_DataDriven::IsStunDebuff  (line 51, @0x0000000002625ea0, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::IsStunDebuff(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_bIsStunDebuff;
}


// CDOTA_Modifier_DataDriven::IsCastAttack  (line 52, @0x0000000002625eb0, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::IsCastAttack(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_bOrbIsCastAttack;
}


// CDOTA_Modifier_DataDriven::GetAuraSearchTeam  (line 53, @0x0000000002625ec0, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::GetAuraSearchTeam(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_nAuraSearchTeam;
}


// CDOTA_Modifier_DataDriven::GetAuraSearchType  (line 54, @0x0000000002625ed0, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::GetAuraSearchType(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_nAuraSearchType;
}


// CDOTA_Modifier_DataDriven::GetAuraSearchFlags  (line 55, @0x0000000002625ee0, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::GetAuraSearchFlags(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_nAuraSearchFlags;
}


// CDOTA_Modifier_DataDriven::GetAuraRadius  (line 56, @0x0000000002625ef0, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::GetAuraRadius(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_nAuraRadius;
}


// CDOTA_Modifier_DataDriven::RemoveOnDeath  (line 57, @0x0000000002625f00, libserver.so)
bool __fastcall CDOTA_Modifier_DataDriven::RemoveOnDeath(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_bRemoveOnDeath;
}


// CDOTA_Modifier_DataDriven::GetAttributes  (line 58, @0x0000000002625f10, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::GetAttributes(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_nAttributes;
}


// CDOTA_Modifier_DataDriven::GetPriority  (line 60, @0x0000000002625f20, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::GetPriority(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_nPriority;
}


// CDOTA_Modifier_DataDriven::GetStatusEffectName  (line 62, @0x0000000002625f30, libserver.so)
const char *__fastcall CDOTA_Modifier_DataDriven::GetStatusEffectName(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_pszStatusEffectName;
}


// CDOTA_Modifier_DataDriven::StatusEffectPriority  (line 63, @0x0000000002625f40, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::StatusEffectPriority(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_nStatusEffectPriority;
}


// CDOTA_Modifier_DataDriven::GetModelChange  (line 64, @0x0000000002625f50, libserver.so)
const char *__fastcall CDOTA_Modifier_DataDriven::GetModelChange(CDOTA_Modifier_DataDriven *const this)
{
  return this->m_pszModelName;
}


// CDOTA_Modifier_DataDriven::GetOrbLabel  (line 80, @0x0000000002625f60, libserver.so)
int __fastcall CDOTA_Modifier_DataDriven::GetOrbLabel(
        CDOTA_Modifier_DataDriven *const this,
        CDOTA_AttackRecord *pRecord)
{
  return this->m_nOrbLabel;
}


// CDOTA_Modifier_DataDriven::GetActionContextName  (line 95, @0x0000000002625f70, libserver.so)  // inlines: GetName, String, ToCStr
const char *__fastcall CDOTA_Modifier_DataDriven::GetActionContextName(CDOTA_Modifier_DataDriven *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_name.u.m_Id != 0 )
    return this->m_name.u.m_pAsString;
  return result;
}


// CDOTA_Modifier_DataDriven::GetActionAbility  (line 99, @0x0000000002635a90, libserver.so)  // inlines: Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_Modifier_DataDriven::GetActionAbility(CDOTA_Modifier_DataDriven *const this)
{
  CDOTABaseAbility *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAbility.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


