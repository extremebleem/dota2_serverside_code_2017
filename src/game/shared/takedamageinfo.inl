
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTakeDamageInfo::Schema_DynamicBinding  (line 77, @0x0000000001f21970, libserver.so)
// globals: CTakeDamageInfo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTakeDamageInfo::Schema_DynamicBinding(const CTakeDamageInfo *const this)
{
  return CTakeDamageInfo::s_pSchemaBinding;
}


// CTakeDamageInfo::SetStabilityDamage  (line 185, @0x0000000001f21980, libserver.so)
void __fastcall CTakeDamageInfo::SetStabilityDamage(CTakeDamageInfo *const this, float a2, float flStabilityDamage)
{
  this->m_flStabilityDamage = a2;
}


// CTakeDamageInfo::GetStabilityDamage  (line 186, @0x0000000001f21990, libserver.so)
float __fastcall CTakeDamageInfo::GetStabilityDamage(const CTakeDamageInfo *const this)
{
  return this->m_flStabilityDamage;
}


// CTakeDamageInfo::SetAllowFriendlyFire  (line 188, @0x0000000001f219a0, libserver.so)
void __fastcall CTakeDamageInfo::SetAllowFriendlyFire(CTakeDamageInfo *const this, bool bAllow)
{
  this->m_bAllowFriendlyFire = bAllow;
}


// CTakeDamageInfo::AllowFriendlyFire  (line 189, @0x0000000001f219b0, libserver.so)
bool __fastcall CTakeDamageInfo::AllowFriendlyFire(const CTakeDamageInfo *const this)
{
  return this->m_bAllowFriendlyFire;
}


// CTakeDamageInfo::SetCanBeBlocked  (line 191, @0x0000000001f219c0, libserver.so)
void __fastcall CTakeDamageInfo::SetCanBeBlocked(CTakeDamageInfo *const this, bool bBlock)
{
  this->m_bCanBeBlocked = bBlock;
}


// CTakeDamageInfo::CanBeBlocked  (line 192, @0x0000000001f219d0, libserver.so)
bool __fastcall CTakeDamageInfo::CanBeBlocked(const CTakeDamageInfo *const this)
{
  return this->m_bCanBeBlocked;
}


// CMultiDamage::~CMultiDamage  (line 262, @0x00000000023e6c80, libserver.so)  // inlines: GetVM, ~CTakeDamageInfo
void __fastcall CMultiDamage::~CMultiDamage(CMultiDamage *const this)
{
  HSCRIPT m_hScriptInstance; // rsi

  m_hScriptInstance = this->m_hScriptInstance;
  this->_vptr_CTakeDamageInfo = off_3FC92D0;  // vptr: CTakeDamageInfo
  if ( m_hScriptInstance != 0 )
  {
    (*(*g_pScriptVM + 136LL))(g_pScriptVM);
    this->m_hScriptInstance = 0;
  }
}


// CTakeDamageInfo::Script_GetInflictor  (line 306, @0x0000000001f24280, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CTakeDamageInfo::Script_GetInflictor(const CTakeDamageInfo *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hInflictor.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hInflictor.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CTakeDamageInfo::Script_GetAttacker  (line 322, @0x0000000001f241f0, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CTakeDamageInfo::Script_GetAttacker(const CTakeDamageInfo *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hAttacker.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAttacker.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CTakeDamageInfo::Script_SetAttacker  (line 333, @0x0000000001f233b0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, operator=
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CTakeDamageInfo::Script_SetAttacker(CTakeDamageInfo *const this, HSCRIPT hAttacker)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // cx

  if ( hAttacker != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hAttacker, Script)) != 0)
    && (v7 = *(v6 + 8)) != 0 )
  {
    v8 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
    if ( *(v7 + 16) == -1 )
      v9 = 0x7FFF;
    else
      v9 = *(v7 + 16) & 0x7FFF;
    LOWORD(this->m_hAttacker.m_Index) = v9 | this->m_hAttacker.m_Index & 0x8000;
    this->m_hAttacker.m_Index = (v8 << 15) | this->m_hAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAttacker.m_Index = -1;
  }
}


// CTakeDamageInfo::GetDamage  (line 350, @0x0000000001f219e0, libserver.so)
float __fastcall CTakeDamageInfo::GetDamage(const CTakeDamageInfo *const this)
{
  return this->m_flDamage;
}


// CTakeDamageInfo::GetOriginalDamage  (line 356, @0x0000000001f219f0, libserver.so)
float __fastcall CTakeDamageInfo::GetOriginalDamage(const CTakeDamageInfo *const this)
{
  return this->m_flOriginalDamage;
}


// CTakeDamageInfo::SetOriginalDamage  (line 361, @0x0000000001f21a00, libserver.so)
void __fastcall CTakeDamageInfo::SetOriginalDamage(CTakeDamageInfo *const this, float a2, float flOriginalDamage)
{
  this->m_flOriginalDamage = a2;
}


// CTakeDamageInfo::GetDamageTaken  (line 366, @0x0000000001f21a10, libserver.so)
float __fastcall CTakeDamageInfo::GetDamageTaken(const CTakeDamageInfo *const this)
{
  return this->m_nDamageTaken;
}


// CTakeDamageInfo::SetDamageTaken  (line 371, @0x0000000001f21a20, libserver.so)
void __fastcall CTakeDamageInfo::SetDamageTaken(CTakeDamageInfo *const this, int nDamageTaken)
{
  this->m_nDamageTaken = nDamageTaken;
}


// CTakeDamageInfo::SetDamage  (line 409, @0x0000000001f21a30, libserver.so)
void __fastcall CTakeDamageInfo::SetDamage(CTakeDamageInfo *const this, float a2, float flDamage)
{
  this->m_flDamage = a2;
}


// CTakeDamageInfo::GetMaxDamage  (line 414, @0x0000000001f21a40, libserver.so)
float __fastcall CTakeDamageInfo::GetMaxDamage(const CTakeDamageInfo *const this)
{
  return this->m_flMaxDamage;
}


// CTakeDamageInfo::SetMaxDamage  (line 419, @0x0000000001f21a50, libserver.so)
void __fastcall CTakeDamageInfo::SetMaxDamage(CTakeDamageInfo *const this, float a2, float flMaxDamage)
{
  this->m_flMaxDamage = a2;
}


// CTakeDamageInfo::ScaleDamage  (line 424, @0x0000000001f21a60, libserver.so)
void __fastcall CTakeDamageInfo::ScaleDamage(CTakeDamageInfo *const this, float a2, float flScaleAmount)
{
  this->m_flDamage = a2 * this->m_flDamage;
}


// CTakeDamageInfo::AddDamage  (line 429, @0x0000000001f21a70, libserver.so)
void __fastcall CTakeDamageInfo::AddDamage(CTakeDamageInfo *const this, float a2, float flAddAmount)
{
  this->m_flDamage = a2 + this->m_flDamage;
}


// CTakeDamageInfo::GetBaseDamage  (line 434, @0x0000000001f21a80, libserver.so)  // inlines: BaseDamageIsValid
float __fastcall CTakeDamageInfo::GetBaseDamage(const CTakeDamageInfo *const this)
{
  float result; // xmm0_4

  result = this->m_flBaseDamage;
  if ( result == 3.4028235e38 )
    return this->m_flDamage;
  return result;
}


// CTakeDamageInfo::BaseDamageIsValid  (line 443, @0x0000000001f21aa0, libserver.so)
bool __fastcall CTakeDamageInfo::BaseDamageIsValid(const CTakeDamageInfo *const this)
{
  return this->m_flBaseDamage != 3.4028235e38;
}


// CTakeDamageInfo::GetDamageForce  (line 448, @0x0000000001f21ac0, libserver.so)
Vector __fastcall CTakeDamageInfo::GetDamageForce(const CTakeDamageInfo *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vecDamageForce.x;
  result.z = this->m_vecDamageForce.z;
  return result;
}


// CTakeDamageInfo::SetDamageForce  (line 453, @0x0000000001f21ae0, libserver.so)  // inlines: operator=
void __fastcall CTakeDamageInfo::SetDamageForce(CTakeDamageInfo *const this, const Vector *const damageForce)
{
  this->m_vecDamageForce = *damageForce;
}


// CTakeDamageInfo::GetDamagePosition  (line 463, @0x0000000001f21b10, libserver.so)
Vector __fastcall CTakeDamageInfo::GetDamagePosition(const CTakeDamageInfo *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vecDamagePosition.x;
  result.z = this->m_vecDamagePosition.z;
  return result;
}


// CTakeDamageInfo::SetDamagePosition  (line 469, @0x0000000001f21b30, libserver.so)  // inlines: operator=
void __fastcall CTakeDamageInfo::SetDamagePosition(CTakeDamageInfo *const this, const Vector *const damagePosition)
{
  this->m_vecDamagePosition = *damagePosition;
}


// CTakeDamageInfo::GetReportedPosition  (line 474, @0x0000000001f21b60, libserver.so)
Vector __fastcall CTakeDamageInfo::GetReportedPosition(const CTakeDamageInfo *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vecReportedPosition.x;
  result.z = this->m_vecReportedPosition.z;
  return result;
}


// CTakeDamageInfo::SetReportedPosition  (line 480, @0x0000000001f21b80, libserver.so)  // inlines: operator=
void __fastcall CTakeDamageInfo::SetReportedPosition(CTakeDamageInfo *const this, const Vector *const reportedPosition)
{
  this->m_vecReportedPosition = *reportedPosition;
}


// CTakeDamageInfo::GetDamageType  (line 495, @0x0000000001f21bb0, libserver.so)
int __fastcall CTakeDamageInfo::GetDamageType(const CTakeDamageInfo *const this)
{
  return this->m_bitsDamageType;
}


// CTakeDamageInfo::SetDamageType  (line 501, @0x0000000001f21bc0, libserver.so)
void __fastcall CTakeDamageInfo::SetDamageType(CTakeDamageInfo *const this, int bitsDamageType)
{
  this->m_bitsDamageType = bitsDamageType;
}


// CTakeDamageInfo::AddDamageType  (line 506, @0x0000000001f21bd0, libserver.so)
void __fastcall CTakeDamageInfo::AddDamageType(CTakeDamageInfo *const this, int bitsDamageType)
{
  this->m_bitsDamageType |= bitsDamageType;
}


// CTakeDamageInfo::GetDamageCustom  (line 511, @0x0000000001f21be0, libserver.so)
int __fastcall CTakeDamageInfo::GetDamageCustom(const CTakeDamageInfo *const this)
{
  return this->m_iDamageCustom;
}


// CTakeDamageInfo::SetDamageCustom  (line 516, @0x0000000001f21bf0, libserver.so)
void __fastcall CTakeDamageInfo::SetDamageCustom(CTakeDamageInfo *const this, int iDamageCustom)
{
  this->m_iDamageCustom = iDamageCustom;
}


// CTakeDamageInfo::GetAmmoType  (line 521, @0x0000000001f21c00, libserver.so)
int __fastcall CTakeDamageInfo::GetAmmoType(const CTakeDamageInfo *const this)
{
  return this->m_iAmmoType;
}


// CTakeDamageInfo::SetAmmoType  (line 526, @0x0000000001f21c10, libserver.so)
void __fastcall CTakeDamageInfo::SetAmmoType(CTakeDamageInfo *const this, int iAmmoType)
{
  this->m_iAmmoType = iAmmoType;
}


// CTakeDamageInfo::GetRadius  (line 536, @0x0000000001f21c20, libserver.so)
float __fastcall CTakeDamageInfo::GetRadius(const CTakeDamageInfo *const this)
{
  return this->m_flRadius;
}


// CTakeDamageInfo::SetRadius  (line 541, @0x0000000001f21c30, libserver.so)
void __fastcall CTakeDamageInfo::SetRadius(CTakeDamageInfo *const this, float a2, float flRadius)
{
  this->m_flRadius = a2;
}


