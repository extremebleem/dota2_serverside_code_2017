
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTakeDamageInfo::AddDatadescMetadataKeys  (line 17, @0x00000000023c5c40, libserver.so)
void __fastcall CTakeDamageInfo::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CTakeDamageInfo::GetBaseMap  (line 17, @0x00000000023c5c50, libserver.so)
datamap_t *__cdecl CTakeDamageInfo::GetBaseMap()
{
  return 0;
}


// DataMapInit<CTakeDamageInfo>  (line 17, @0x00000000023c5c60, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTakeDamageInfo"
// globals: `guard variable for'DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder, CTakeDamageInfo::m_DataMap, DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder) != 0 )
  {
    DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder.m_pszBase = "CTakeDamageInfo";
    DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::nameHolder,
      &_dso_handle);
  }
  CTakeDamageInfo::m_DataMap.baseMap = 0;
  CTakeDamageInfo::m_DataMap.dataDesc = &DataMapInit<CTakeDamageInfo>(CTakeDamageInfo *)::dataDesc[1];
  CTakeDamageInfo::m_DataMap.dataNumFields = 22;
  return &CTakeDamageInfo::m_DataMap;
}


// CTakeDamageInfo::Init  (line 45, @0x00000000023c5d20, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, Zero, operator=
// callers: CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::Set, CMultiDamage::Init
void __fastcall CTakeDamageInfo::Init(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        CBaseEntity *pWeapon,
        const Vector *const damageForce,
        const Vector *const damagePosition,
        float flDamage,
        const Vector *const reportedPosition,
        int bitsDamageType,
        int iCustomDamage)
{
  CEntityIdentity *m_pEntity; // r10
  int v11; // eax
  __int16 v12; // bx
  CEntityIdentity *v13; // rax
  int v14; // edx
  __int16 v15; // si
  CEntityIdentity *v16; // rdx
  int v17; // eax
  __int16 v18; // cx
  vec_t z; // xmm0_4

  if ( pInflictor == 0 )
  {
    this->m_hInflictor.m_Index = -1;
    if ( pAttacker == 0 )
      goto LABEL_17;
    goto LABEL_6;
  }
  m_pEntity = pInflictor->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v12 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hInflictor.m_Index) = v12 | this->m_hInflictor.m_Index & 0x8000;
    this->m_hInflictor.m_Index = (v11 << 15) | this->m_hInflictor.m_Index & 0x7FFF;
    if ( pAttacker != 0 )
    {
LABEL_6:
      v13 = pAttacker->m_pEntity;
      if ( v13 != 0 )
        goto LABEL_7;
      goto LABEL_17;
    }
  }
  else
  {
    this->m_hInflictor.m_Index = -1;
    if ( pAttacker != 0 )
      goto LABEL_6;
  }
  v13 = pInflictor->m_pEntity;
  if ( v13 != 0 )
  {
LABEL_7:
    v14 = (v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1);
    v15 = 0x7FFF;
    if ( v13->m_EHandle.m_Index != -1 )
      v15 = v13->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hAttacker.m_Index) = v15 | this->m_hAttacker.m_Index & 0x8000;
    this->m_hAttacker.m_Index = (v14 << 15) | this->m_hAttacker.m_Index & 0x7FFF;
    if ( pWeapon == 0 )
      goto LABEL_18;
    goto LABEL_10;
  }
LABEL_17:
  this->m_hAttacker.m_Index = -1;
  if ( pWeapon == 0 )
    goto LABEL_18;
LABEL_10:
  v16 = pWeapon->m_pEntity;
  if ( v16 == 0 )
  {
LABEL_18:
    this->m_hWeapon.m_Index = -1;
    goto LABEL_14;
  }
  v17 = (v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1);
  if ( v16->m_EHandle.m_Index == -1 )
    v18 = 0x7FFF;
  else
    v18 = v16->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hWeapon.m_Index) = v18 | this->m_hWeapon.m_Index & 0x8000;
  this->m_hWeapon.m_Index = (v17 << 15) | this->m_hWeapon.m_Index & 0x7FFF;
LABEL_14:
  this->m_flDamage = flDamage;
  this->m_flBaseDamage = 3.4028235e38;
  this->m_flMaxDamage = flDamage;
  this->m_bitsDamageType = bitsDamageType;
  this->m_iDamageCustom = iCustomDamage;
  this->m_vecDamageForce = *damageForce;
  this->m_vecDamagePosition = *damagePosition;
  this->m_vecReportedPosition.x = reportedPosition->x;
  this->m_vecReportedPosition.y = reportedPosition->y;
  z = reportedPosition->z;
  this->m_vecDamageDirection.z = 0.0;
  this->m_vecDamageDirection.y = 0.0;
  this->m_vecReportedPosition.z = z;
  this->m_vecDamageDirection.x = 0.0;
  this->m_iAmmoType = -1;
  this->m_flRadius = 0.0;
  this->m_flOriginalDamage = 0.0;
  this->m_hBodyPart = 0;
  this->m_bCanHeadshot = 1;
  this->m_flStabilityDamage = 0.0;
  this->m_bitsDotaDamageType = 0;
  this->m_bAllowFriendlyFire = 1;
  this->m_bCanBeBlocked = 0;
  this->m_hScriptInstance = 0;
}


// CTakeDamageInfo::CTakeDamageInfo  (line 90, @0x00000000023c5f80, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CTakeDamageInfo::Init
// callers: CSchemaClassBinding<CTakeDamageInfo>::Allocate, CSchemaClassBinding<CTakeDamageInfo>::ConstructInPlace, CSchemaClassBinding<CTakeDamageInfo>::AllocateAndCopyConstruct, CBreakableProp::InputBreak, CBreakableProp::UpdateHealth, CBreakableProp::BreakThink, CBreakableProp::HandleFirstCollisionInteractions, CBaseCombatCharacter::InputBecomeServerRagdoll, CPhysImpact::InputImpact, CBasePlayer::Event_Dying, CBasePlayer::CommitSuicide, CRagdollProp::HandleFirstCollisionInteractions (16 total)
void __fastcall CTakeDamageInfo::CTakeDamageInfo(CTakeDamageInfo *const this)
{
  this->m_hInflictor.m_Index = -1;
  this->m_hAttacker.m_Index = -1;
  this->m_hWeapon.m_Index = -1;
  this->_vptr_CTakeDamageInfo = off_3FC92D0;
  CTakeDamageInfo::Init(this, 0, 0, 0, &vec3_origin, &vec3_origin, 0.0, &vec3_origin, 0, 0);
}


// CTakeDamageInfo::CTakeDamageInfo  (line 95, @0x00000000023c5fe0, libserver.so)  // inlines: CEntityHandle, CHandle, Set
// calls: CTakeDamageInfo::Init
// callers: CBaseEntity::FireBullets, CBreakableProp::BreakablePropTouch, CBaseCombatCharacter::CheckTraceHullAttack, CFuncRotating::Blocked, CFuncRotating::HurtTouch, CC_HurtMe_f, CBeam::BeamDamage, CEntityDissolve::DissolveThink, CEntityFlame::FlameThink, CBaseDoor::Blocked, CEntityDissolve::Create, CEnvExplosion::InputExplode (38 total)
void __fastcall CTakeDamageInfo::CTakeDamageInfo(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        float flDamage,
        int bitsDamageType,
        int iKillType)
{
  this->m_hInflictor.m_Index = -1;
  this->m_hAttacker.m_Index = -1;
  this->m_hWeapon.m_Index = -1;
  this->_vptr_CTakeDamageInfo = off_3FC92D0;
  CTakeDamageInfo::Init(
    this,
    pInflictor,
    pAttacker,
    0,
    &vec3_origin,
    &vec3_origin,
    flDamage,
    &vec3_origin,
    bitsDamageType,
    iKillType);
}


// CTakeDamageInfo::CTakeDamageInfo  (line 100, @0x00000000023c6a70, libserver.so)  // inlines: CEntityHandle, CHandle, Set
// calls: CTakeDamageInfo::Init
void __fastcall CTakeDamageInfo::CTakeDamageInfo(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        CBaseEntity *pWeapon,
        float flDamage,
        int bitsDamageType,
        int iKillType)
{
  this->m_hInflictor.m_Index = -1;
  this->m_hAttacker.m_Index = -1;
  this->m_hWeapon.m_Index = -1;
  this->_vptr_CTakeDamageInfo = off_3FC92D0;
  CTakeDamageInfo::Init(
    this,
    pInflictor,
    pAttacker,
    pWeapon,
    &vec3_origin,
    &vec3_origin,
    flDamage,
    &vec3_origin,
    bitsDamageType,
    iKillType);
}


// CTakeDamageInfo::CTakeDamageInfo  (line 105, @0x00000000023c6bf0, libserver.so)  // inlines: CEntityHandle, CHandle, Set
// calls: CTakeDamageInfo::Set
// callers: CreateDamageInfo, CBaseCombatCharacter::ApplyStressDamage, CBaseCombatCharacter::VPhysicsShadowCollision, CBreakable::VPhysicsCollision, CRagdollProp::VPhysicsCollision, CPhysicsProp::VPhysicsCollision, CPropVehicleDriveable::VPhysicsCollision, CDOTA_Tutorial::ForceGoodWin, EndGameImmediately, CDOTA_BaseNPC::ModifyHealth, DamageImpact
void __fastcall CTakeDamageInfo::CTakeDamageInfo(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        const Vector *const damageForce,
        const Vector *const damagePosition,
        float flDamage,
        int bitsDamageType,
        int iKillType,
        Vector *reportedPosition)
{
  this->m_hInflictor.m_Index = -1;
  this->m_hAttacker.m_Index = -1;
  this->m_hWeapon.m_Index = -1;
  this->_vptr_CTakeDamageInfo = off_3FC92D0;
  CTakeDamageInfo::Set(
    this,
    pInflictor,
    pAttacker,
    0,
    damageForce,
    damagePosition,
    flDamage,
    bitsDamageType,
    iKillType,
    reportedPosition);
}


// CTakeDamageInfo::CTakeDamageInfo  (line 110, @0x00000000023c6b90, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CTakeDamageInfo::Set
void __fastcall CTakeDamageInfo::CTakeDamageInfo(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        CBaseEntity *pWeapon,
        const Vector *const damageForce,
        const Vector *const damagePosition,
        float flDamage,
        int bitsDamageType,
        int iKillType,
        Vector *reportedPosition)
{
  this->m_hInflictor.m_Index = -1;
  this->m_hAttacker.m_Index = -1;
  this->m_hWeapon.m_Index = -1;
  this->_vptr_CTakeDamageInfo = off_3FC92D0;
  CTakeDamageInfo::Set(
    this,
    pInflictor,
    pAttacker,
    pWeapon,
    damageForce,
    damagePosition,
    flDamage,
    bitsDamageType,
    iKillType,
    reportedPosition);
}


// CTakeDamageInfo::Set  (line 115, @0x00000000023c6ac0, libserver.so)
// calls: CTakeDamageInfo::Init
void __fastcall CTakeDamageInfo::Set(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        float flDamage,
        int bitsDamageType,
        int iKillType)
{
  CTakeDamageInfo::Init(
    this,
    pInflictor,
    pAttacker,
    0,
    &vec3_origin,
    &vec3_origin,
    flDamage,
    &vec3_origin,
    bitsDamageType,
    iKillType);
}


// CTakeDamageInfo::Set  (line 120, @0x00000000023c6af0, libserver.so)
// calls: CTakeDamageInfo::Init
void __fastcall CTakeDamageInfo::Set(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        CBaseEntity *pWeapon,
        float flDamage,
        int bitsDamageType,
        int iKillType)
{
  CTakeDamageInfo::Init(
    this,
    pInflictor,
    pAttacker,
    pWeapon,
    &vec3_origin,
    &vec3_origin,
    flDamage,
    &vec3_origin,
    bitsDamageType,
    iKillType);
}


// CTakeDamageInfo::Set  (line 125, @0x00000000023c6bc0, libserver.so)
// calls: CTakeDamageInfo::Set
void __fastcall CTakeDamageInfo::Set(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        const Vector *const damageForce,
        const Vector *const damagePosition,
        float flDamage,
        int bitsDamageType,
        int iKillType,
        Vector *reportedPosition)
{
  CTakeDamageInfo::Set(
    this,
    pInflictor,
    pAttacker,
    0,
    damageForce,
    damagePosition,
    flDamage,
    bitsDamageType,
    iKillType,
    reportedPosition);
}


// CTakeDamageInfo::Set  (line 130, @0x00000000023c6b20, libserver.so)  // inlines: operator=
// calls: CTakeDamageInfo::Init
// callers: CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::Set
void __fastcall CTakeDamageInfo::Set(
        CTakeDamageInfo *const this,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        CBaseEntity *pWeapon,
        const Vector *const damageForce,
        const Vector *const damagePosition,
        float flDamage,
        int bitsDamageType,
        int iKillType,
        Vector *reportedPosition)
{
  vec_t z; // r10d
  Vector vecReported; // [rsp+18h] [rbp-10h] BYREF

  z = vec3_origin.z;
  *&vecReported.x = *&vec3_origin.x;
  vecReported.z = z;
  if ( reportedPosition != 0 )
    vecReported = *reportedPosition;
  CTakeDamageInfo::Init(
    this,
    pInflictor,
    pAttacker,
    pWeapon,
    damageForce,
    damagePosition,
    flDamage,
    &vecReported,
    bitsDamageType,
    iKillType);
}


// CTakeDamageInfo::GetHScript  (line 141, @0x00000000023c6c40, libserver.so)  // inlines: GetVM
// callers: CreateDamageInfo
HSCRIPT __fastcall CTakeDamageInfo::GetHScript(CTakeDamageInfo *const this)
{
  HSCRIPT result; // rax
  IScriptVM *v3; // r12
  __int64 (__fastcall *v4)(IScriptVM *, __int64, CTakeDamageInfo *const); // r13
  __int64 v5; // rax

  result = this->m_hScriptInstance;
  if ( result == 0 )
  {
    v3 = g_pScriptVM;
    v4 = *(*g_pScriptVM + 184LL);
    v5 = (*(this->_vptr_CTakeDamageInfo + 1))(this);
    result = v4(v3, v5, this);
    this->m_hScriptInstance = result;
  }
  return result;
}


// CTakeDamageInfo::~CTakeDamageInfo  (line 151, @0x00000000023c6cb0, libserver.so)  // inlines: GetVM
// callers: CBaseEntity::FireBullets, CSchemaClassBinding<CTakeDamageInfo>::Deallocate, CSchemaClassBinding<CTakeDamageInfo>::DestructInPlace, DestroyDamageInfo, CBreakableProp::BreakablePropTouch, CBreakableProp::OnTakeDamage, CBreakableProp::InputBreak, CBreakableProp::UpdateHealth, CBreakableProp::BreakThink, CBreakableProp::HandleFirstCollisionInteractions, CBaseEntity::TakeDamageOld, CBaseCombatCharacter::ApplyStressDamage (70 total)
void __fastcall CTakeDamageInfo::~CTakeDamageInfo(CTakeDamageInfo *const this)
{
  HSCRIPT m_hScriptInstance; // rsi

  m_hScriptInstance = this->m_hScriptInstance;
  this->_vptr_CTakeDamageInfo = off_3FC92D0;
  if ( m_hScriptInstance != 0 )
  {
    (*(*g_pScriptVM + 136LL))(g_pScriptVM);
    this->m_hScriptInstance = 0;
  }
}


// CTakeDamageInfo::CTakeDamageInfo  (line 161, @0x00000000023c6d00, libserver.so)  // inlines: CEntityHandle, CHandle, CopyData, V_memcpy, memcpy
// calls: memcpy
// callers: CBreakableProp::OnTakeDamage, CBaseEntity::TakeDamageOld, CBaseCombatCharacter::BecomeRagdoll, PerformMeleeAttackTest, CBreakable::OnTakeDamage, CGameRules::RadiusDamage, IsBreakableEntity, CRagdollProp::OnTakeDamage, CBasePlayer::TraceAttack, CBasePlayer::OnTakeDamage, CPropDoorRotatingBreakable::OnTakeDamage, CPhysicsProp::OnTakeDamage (13 total)
void __fastcall CTakeDamageInfo::CTakeDamageInfo(CTakeDamageInfo *const this, const CTakeDamageInfo *const rhs)
{
  this->m_hInflictor.m_Index = -1;
  this->m_hAttacker.m_Index = -1;
  this->m_hWeapon.m_Index = -1;
  this->_vptr_CTakeDamageInfo = off_3FC92D0;
  *(memcpy(this, rhs, sizeof(CTakeDamageInfo)) + 17) = 0;
}


// CTakeDamageInfo::operator=  (line 167, @0x00000000023c6d40, libserver.so)  // inlines: CopyData, V_memcpy, memcpy
// calls: memcpy
// callers: CSchemaClassBinding<CTakeDamageInfo>::AllocateAndCopyConstruct, CSchemaClassBinding<CTakeDamageInfo>::Copy, NextBotManager::OnKilled
CTakeDamageInfo *__fastcall CTakeDamageInfo::operator=(CTakeDamageInfo *const this, const CTakeDamageInfo *const rhs)
{
  CTakeDamageInfo *result; // rax

  if ( this == rhs )
    return this;
  result = memcpy(this, rhs, sizeof(CTakeDamageInfo));
  result->m_hScriptInstance = 0;
  return result;
}


// CTakeDamageInfo::CopyData  (line 177, @0x00000000023c6d70, libserver.so)  // inlines: V_memcpy, memcpy
// calls: memcpy
void __fastcall CTakeDamageInfo::CopyData(CTakeDamageInfo *const this, const CTakeDamageInfo *pSource)
{
  *(memcpy(this, pSource, sizeof(CTakeDamageInfo)) + 17) = 0;
}


// CTakeDamageInfo::AdjustPlayerDamageInflictedForSkillLevel  (line 190, @0x00000000023c6d90, libserver.so)  // inlines: CopyDamageToBaseDamage, SetDamage
// callers: CGameRules::RadiusDamage
void __fastcall CTakeDamageInfo::AdjustPlayerDamageInflictedForSkillLevel(CTakeDamageInfo *const this)
{
  this->m_flBaseDamage = this->m_flDamage;
  this->m_flDamage = (*(g_pGameRules->_vptr_CGameRules + 89))(g_pGameRules);
}


// CTakeDamageInfo::AdjustPlayerDamageTakenForSkillLevel  (line 200, @0x00000000023c6dd0, libserver.so)  // inlines: CopyDamageToBaseDamage
void __fastcall CTakeDamageInfo::AdjustPlayerDamageTakenForSkillLevel(CTakeDamageInfo *const this)
{
  this->m_flBaseDamage = this->m_flDamage;
  (*(g_pGameRules->_vptr_CGameRules + 90))(g_pGameRules, this);
}


// CTakeDamageInfo::GetAmmoName  (line 212, @0x00000000023c6e00, libserver.so)  // inlines: Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, _V_strcmp, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: GetAmmoDef, CAmmoDef::GetAmmoOfIndex, CBaseEntity::GetModelName
// strings: "Unknown", "prop_physics"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CTakeDamageInfo::GetAmmoName(const CTakeDamageInfo *const this)
{
  int m_iAmmoType; // ebx
  uint32 m_Index; // edx
  const char *result; // rax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CAmmoDef *AmmoDef; // rax
  const CBaseEntity *m_pInstance; // r8
  CEntityIdentity *m_pEntity; // rdx
  const char *v9; // [rsp+0h] [rbp-20h] BYREF

  m_iAmmoType = this->m_iAmmoType;
  if ( m_iAmmoType >= 0 )
  {
    AmmoDef = GetAmmoDef();
    return CAmmoDef::GetAmmoOfIndex(AmmoDef, m_iAmmoType)->pName;
  }
  else
  {
    m_Index = this->m_hInflictor.m_Index;
    result = "Unknown";
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hInflictor.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hInflictor.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( v5->m_pInstance != 0 )
          {
            m_pEntity = m_pInstance->m_pEntity;
            result = "";
            if ( m_pEntity->m_designerName.u.m_Id != 0 )
            {
              result = m_pEntity->m_designerName.u.m_pAsString;
              if ( strcmp(result, "prop_physics") == 0 )
              {
                CBaseEntity::GetModelName(&v9, m_pInstance);
                result = "";
                if ( v9 != 0 )
                  return v9;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// CMultiDamage::AddDatadescMetadataKeys  (line 243, @0x00000000023c6ee0, libserver.so)
void __fastcall CMultiDamage::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CMultiDamage::GetBaseMap  (line 243, @0x00000000023c6ef0, libserver.so)
// globals: CTakeDamageInfo::m_DataMap
datamap_t *__cdecl CMultiDamage::GetBaseMap()
{
  return &CTakeDamageInfo::m_DataMap;
}


// DataMapInit<CMultiDamage>  (line 243, @0x00000000023c6f00, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CMultiDamage"
// globals: `guard variable for'DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder, CTakeDamageInfo::m_DataMap, CMultiDamage::m_DataMap, DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMultiDamage>(CMultiDamage *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder) != 0 )
  {
    DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder.m_pszBase = "CMultiDamage";
    DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMultiDamage>(CMultiDamage *)::nameHolder,
      &_dso_handle);
  }
  CMultiDamage::m_DataMap.dataNumFields = 1;
  CMultiDamage::m_DataMap.baseMap = &CTakeDamageInfo::m_DataMap;
  CMultiDamage::m_DataMap.dataDesc = &DataMapInit<CMultiDamage>(CMultiDamage *)::dataDesc[1];
  return &CMultiDamage::m_DataMap;
}


// CMultiDamage::CMultiDamage  (line 249, @0x00000000023c6fc0, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CTakeDamageInfo::CTakeDamageInfo
void __fastcall CMultiDamage::CMultiDamage(CMultiDamage *const this)
{
  CTakeDamageInfo::CTakeDamageInfo(this);
  this->m_hTarget.m_Index = -1;
  this->_vptr_CTakeDamageInfo = off_40B06D0;
}


// CMultiDamage::Init  (line 257, @0x00000000023c6ff0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CTakeDamageInfo::Init
// callers: ClearMultiDamage, AddMultiDamage
void __fastcall CMultiDamage::Init(
        CMultiDamage *const this,
        CBaseEntity *pTarget,
        CBaseEntity *pInflictor,
        CBaseEntity *pAttacker,
        CBaseEntity *pWeapon,
        const Vector *const damageForce,
        float flDamage,
        const Vector *const damagePosition,
        const Vector *const reportedPosition,
        int bitsDamageType,
        int iKillType)
{
  CEntityIdentity *m_pEntity; // r10
  int v12; // eax
  __int16 v13; // si

  if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
  {
    v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v13 = 0x7FFF;
    else
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v13 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v12 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  CTakeDamageInfo::Init(
    this,
    pInflictor,
    pAttacker,
    pWeapon,
    damageForce,
    damagePosition,
    flDamage,
    reportedPosition,
    bitsDamageType,
    iKillType);
}


// ClearMultiDamage  (line 266, @0x00000000023c70c0, libserver.so)
// calls: CMultiDamage::Init
// callers: CBaseEntity::FireBullets, CBeam::BeamDamage, CGameRules::CGameRules, CGameRules::RadiusDamage, ApplyMultiDamage
// globals: g_MultiDamage
void __cdecl ClearMultiDamage()
{
  CMultiDamage::Init(&g_MultiDamage, 0, 0, 0, 0, &vec3_origin, 0.0, &vec3_origin, &vec3_origin, 0, 0);
}


// ApplyMultiDamage  (line 274, @0x00000000023c7110, libserver.so)  // inlines: CGameTrace, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSuppressHost, GetTarget, IndexToIdentity, IsValid, LookupEntity, RnCollisionAttr_t, SetSuppressHost, operator CBaseEntity*, operator CEntityInstance*
// calls: CGameTrace::Init, CBaseEntity::TakeDamage, ClearMultiDamage
// callers: CBaseEntity::FireBullets, CBaseEntity::TraceAttackToTriggers, CBeam::BeamDamage, CGameRules::EndGameFrame, CGameRules::RadiusDamage, CPhysImpact::InputImpact, AddMultiDamage
// globals: CEntityHandle::gm_pEntityList, g_MultiDamage
void __cdecl ApplyMultiDamage()
{
  CConcreteEntityList *v0; // rcx
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rdx
  CEntityInstance *m_pSuppressHost; // r12
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  trace_t tr; // [rsp+0h] [rbp-C0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v0 = CEntityHandle::gm_pEntityList;
  if ( g_MultiDamage.m_hTarget.m_Index + 2 > 1 )
  {
    v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_MultiDamage.m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v1 != 0 )
    {
      v2 = &v1[g_MultiDamage.m_hTarget.m_Index & 0x1FF];
      if ( v2 != 0 && g_MultiDamage.m_hTarget.m_Index == v2->m_EHandle.m_Index && v2->m_pInstance != 0 )
      {
        m_pSuppressHost = 0;
        if ( te->m_nStatusPushed <= 0 )
          m_pSuppressHost = te->m_pSuppressHost;
        te->m_pSuppressHost = 0;
        m_pInstance = 0;
        if ( g_MultiDamage.m_hTarget.m_Index + 2 > 1 )
        {
          v5 = v0->m_pIdentityChunks[(LOWORD(g_MultiDamage.m_hTarget.m_Index) >> 9) & 0x3F];
          if ( v5 != 0 )
          {
            v6 = &v5[g_MultiDamage.m_hTarget.m_Index & 0x1FF];
            if ( v6 != 0 && g_MultiDamage.m_hTarget.m_Index == v6->m_EHandle.m_Index )
              m_pInstance = v6->m_pInstance;
          }
        }
        CBaseEntity::TakeDamage(m_pInstance, &g_MultiDamage);
        te->m_pSuppressHost = m_pSuppressHost;
        ClearMultiDamage();
      }
    }
  }
}


// AddMultiDamage  (line 299, @0x00000000023c7260, libserver.so)  // inlines: AddDamageType, Get, GetAttacker, GetDamageDirection, GetDamageForce, GetDamagePosition, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, GetReportedPosition, GetTarget, GetWeapon, IndexToIdentity, IsValid, LookupEntity, SetAmmoType, SetBodyPart, SetDamage, SetDamageDirection, SetDamageForce, SetDamagePosition, SetMaxDamage, SetReportedPosition, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator=, operator==
// calls: ApplyMultiDamage, CMultiDamage::Init, Warning
// callers: CBaseEntity::TraceAttack, CBasePlayer::TraceAttack
// strings: "AddMultiDamage:  g_MultiDamage.GetDamagePosition() == vec3_origin\n", "AddMultiDamage:  g_MultiDamage.GetDamageForce() == vec3_origin\n"
// globals: CEntityHandle::gm_pEntityList, g_MultiDamage, AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount
void __fastcall AddMultiDamage(const CTakeDamageInfo *const info, CBaseEntity *pEntity)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // r8
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  uint32 v10; // eax
  CBaseEntity *v11; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  uint32 v14; // eax
  CBaseEntity *v15; // rdx
  CEntityIdentity *v16; // rsi
  CEntityIdentity *v17; // rsi
  IPhysicsBody *m_hBodyPart; // rax
  vec_t v19; // xmm0_4
  vec_t v20; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t v24; // xmm1_4
  vec_t v25; // xmm2_4
  vec_t v26; // xmm0_4
  vec_t v27; // xmm1_4
  vec_t v28; // xmm0_4
  float v29; // xmm0_4
  __int64 m_bitsDamageType; // rsi
  double v31; // xmm3_8
  double v32; // xmm4_8
  double v33; // xmm5_8
  double v34; // xmm0_8
  bool v35; // sf
  double v36; // xmm1_8
  double v37; // xmm2_8
  float v38; // xmm6_4

  if ( pEntity != 0 )
  {
    if ( g_MultiDamage.m_hTarget.m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_MultiDamage.m_hTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = &v4[g_MultiDamage.m_hTarget.m_Index & 0x1FF]) == 0
      || g_MultiDamage.m_hTarget.m_Index != v5->m_EHandle.m_Index
      || pEntity != v5->m_pInstance
      || (m_hBodyPart = info->m_hBodyPart) != g_MultiDamage.m_hBodyPart )
    {
      ApplyMultiDamage();
      m_Index = info->m_hWeapon.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hWeapon.m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[info->m_hWeapon.m_Index & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            m_pInstance = v9->m_pInstance;
        }
      }
      v10 = info->m_hAttacker.m_Index;
      v11 = 0;
      if ( v10 + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[info->m_hAttacker.m_Index & 0x1FF];
          if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
            v11 = v13->m_pInstance;
        }
      }
      v14 = info->m_hInflictor.m_Index;
      v15 = 0;
      if ( v14 + 2 > 1 )
      {
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
        if ( v16 != 0 )
        {
          v17 = &v16[info->m_hInflictor.m_Index & 0x1FF];
          if ( v17 != 0 && v14 == v17->m_EHandle.m_Index )
            v15 = v17->m_pInstance;
        }
      }
      CMultiDamage::Init(
        &g_MultiDamage,
        pEntity,
        v15,
        v11,
        m_pInstance,
        &vec3_origin,
        0.0,
        &vec3_origin,
        &vec3_origin,
        info->m_bitsDamageType,
        info->m_iDamageCustom);
      m_hBodyPart = info->m_hBodyPart;
    }
    g_MultiDamage.m_hBodyPart = m_hBodyPart;
    g_MultiDamage.m_bitsDamageType |= info->m_bitsDamageType;
    g_MultiDamage.m_flDamage = g_MultiDamage.m_flDamage + info->m_flDamage;
    v19 = g_MultiDamage.m_vecDamageForce.z + info->m_vecDamageForce.z;
    v20 = info->m_vecDamageForce.x + g_MultiDamage.m_vecDamageForce.x;
    g_MultiDamage.m_vecDamageForce.y = g_MultiDamage.m_vecDamageForce.y + info->m_vecDamageForce.y;
    y = info->m_vecDamagePosition.y;
    g_MultiDamage.m_vecDamageForce.z = v19;
    z = info->m_vecDamagePosition.z;
    g_MultiDamage.m_vecDamageForce.x = v20;
    x = info->m_vecDamagePosition.x;
    g_MultiDamage.m_vecDamagePosition.y = y;
    v24 = info->m_vecDamageDirection.y;
    g_MultiDamage.m_vecDamagePosition.x = x;
    v25 = info->m_vecDamageDirection.x;
    g_MultiDamage.m_vecDamagePosition.z = z;
    v26 = info->m_vecDamageDirection.z;
    g_MultiDamage.m_vecDamageDirection.x = v25;
    g_MultiDamage.m_vecDamageDirection.y = v24;
    g_MultiDamage.m_vecDamageDirection.z = v26;
    v27 = info->m_vecReportedPosition.y;
    v28 = info->m_vecReportedPosition.z;
    g_MultiDamage.m_vecReportedPosition.x = info->m_vecReportedPosition.x;
    g_MultiDamage.m_vecReportedPosition.y = v27;
    g_MultiDamage.m_vecReportedPosition.z = v28;
    v29 = fmaxf(g_MultiDamage.m_flMaxDamage, info->m_flMaxDamage);
    g_MultiDamage.m_iAmmoType = info->m_iAmmoType;
    m_bitsDamageType = info->m_bitsDamageType;
    g_MultiDamage.m_flMaxDamage = v29;
    if ( (*(g_pGameRules->_vptr_CGameRules + 25))(g_pGameRules, m_bitsDamageType) == 0
      && g_MultiDamage.m_bitsDamageType != 0 )
    {
      *&v31 = LODWORD(g_MultiDamage.m_vecDamageForce.x);
      *&v32 = LODWORD(g_MultiDamage.m_vecDamageForce.y);
      *&v33 = LODWORD(g_MultiDamage.m_vecDamageForce.z);
      *&v34 = LODWORD(vec3_origin.x);
      if ( vec3_origin.x == g_MultiDamage.m_vecDamageForce.x
        && g_MultiDamage.m_vecDamageForce.y == vec3_origin.y
        && g_MultiDamage.m_vecDamageForce.z == vec3_origin.z )
      {
        v35 = AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount - 8 < 0;
        ++AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount;
        if ( !(v35 ^ __OFSUB__(AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount, 9)
             | (AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount == 9)) )
          return;
      }
      else
      {
        *&v36 = LODWORD(g_MultiDamage.m_vecDamagePosition.y);
        *&v37 = LODWORD(g_MultiDamage.m_vecDamagePosition.z);
        if ( vec3_origin.x != g_MultiDamage.m_vecDamagePosition.x )
          return;
        v38 = vec3_origin.y;
        if ( v38 != g_MultiDamage.m_vecDamagePosition.y )
          return;
        if ( g_MultiDamage.m_vecDamagePosition.z != vec3_origin.z )
          return;
        v35 = AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount - 8 < 0;
        ++AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount;
        if ( !(v35 ^ __OFSUB__(AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount, 9)
             | (AddMultiDamage(CTakeDamageInfo const&,CBaseEntity *)::warningCount == 9)) )
          return;
        if ( vec3_origin.x != g_MultiDamage.m_vecDamageForce.x )
          goto LABEL_40;
        if ( v38 != g_MultiDamage.m_vecDamageForce.y )
        {
          *&v31 = LODWORD(g_MultiDamage.m_vecDamagePosition.x);
          goto LABEL_39;
        }
      }
      if ( g_MultiDamage.m_vecDamageForce.z == vec3_origin.z )
      {
        Warning(
          "AddMultiDamage:  g_MultiDamage.GetDamageForce() == vec3_origin\n",
          COERCE_DOUBLE(LODWORD(vec3_origin.x)));
        *&v34 = LODWORD(vec3_origin.x);
      }
      *&v31 = LODWORD(g_MultiDamage.m_vecDamagePosition.x);
      *&v36 = LODWORD(g_MultiDamage.m_vecDamagePosition.y);
      *&v37 = LODWORD(g_MultiDamage.m_vecDamagePosition.z);
LABEL_39:
      if ( *&v34 != *&v31 )
        return;
LABEL_40:
      if ( *&v36 == vec3_origin.y && *&v37 == vec3_origin.z )
        Warning("AddMultiDamage:  g_MultiDamage.GetDamagePosition() == vec3_origin\n", v34, v36, v37, v31, v32, v33);
    }
  }
}


// ImpulseScale  (line 361, @0x00000000023c76b0, libserver.so)
float __fastcall ImpulseScale(float a1, float flTargetMass, float flDesiredSpeed)
{
  return a1 * flTargetMass;
}


// CalculateExplosiveDamageForce  (line 369, @0x00000000023c76c0, libserver.so)  // inlines: GetBaseDamage, GetFloat, SetDamageForce, SetDamagePosition, operator*=, operator=
// calls: VectorNormalize
// callers: CGameRules::RadiusDamage, CPhysExplosion::Explode, GuessDamageForce, NextBotGroundLocomotion::DetectCollision
void __fastcall CalculateExplosiveDamageForce(
        CTakeDamageInfo *info,
        const Vector *const vecDir,
        const Vector *const vecForceOrigin,
        float flScale)
{
  float m_flBaseDamage; // xmm0_4
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  float v10; // xmm0_4
  float m_fValue; // xmm0_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm2_4
  float flScalea; // [rsp+8h] [rbp-28h]
  float flForceScale; // [rsp+Ch] [rbp-24h]
  float flForceScalea; // [rsp+Ch] [rbp-24h]
  Vector vecForce; // [rsp+10h] [rbp-20h] BYREF

  info->m_vecDamagePosition = *vecForceOrigin;
  m_flBaseDamage = info->m_flBaseDamage;
  if ( m_flBaseDamage == 3.4028235e38 )
    m_flBaseDamage = info->m_flDamage;
  flScalea = flScale;
  v8.m128_f32[0] = m_flBaseDamage * 300.0;
  v9 = _mm_cmpge_ss(0x46EA6000u, v8);
  LODWORD(flForceScale) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v9, 0x46EA6000u).m128_f32[0])
                        | v8.m128_i32[0] & v9.m128_i32[0];
  v10 = (*(*random_valve + 8LL))(random_valve, 0.85000002, 1.15);
  vecForce = *vecDir;
  flForceScalea = flForceScale * v10;
  VectorNormalize(&vecForce);
  m_fValue = phys_pushscale.m_pParent->m_Value.m_fValue;
  v12 = ((vecForce.z * flForceScalea) * m_fValue) * flScalea;
  v13 = ((flForceScalea * vecForce.x) * m_fValue) * flScalea;
  info->m_vecDamageForce.y = ((vecForce.y * flForceScalea) * m_fValue) * flScalea;
  info->m_vecDamageForce.z = v12;
  info->m_vecDamageForce.x = v13;
}


// CalculateBulletDamageForce  (line 400, @0x00000000023c77f0, libserver.so)  // inlines: GetFloat, SetDamageForce, SetDamagePosition, operator*=, operator=
// calls: VectorNormalize, GetAmmoDef, CAmmoDef::DamageForce
// callers: CBaseEntity::FireBullets, GuessDamageForce
void __fastcall CalculateBulletDamageForce(
        CTakeDamageInfo *info,
        int iBulletType,
        const Vector *const vecBulletDir,
        const Vector *const vecForceOrigin,
        float flScale)
{
  CAmmoDef *AmmoDef; // rax
  float v8; // xmm0_4
  float m_fValue; // xmm5_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm1_4
  Vector vecForce; // [rsp+10h] [rbp-20h] BYREF

  info->m_vecDamagePosition = *vecForceOrigin;
  vecForce = *vecBulletDir;
  VectorNormalize(&vecForce);
  AmmoDef = GetAmmoDef();
  v8 = CAmmoDef::DamageForce(AmmoDef, iBulletType);
  m_fValue = phys_pushscale.m_pParent->m_Value.m_fValue;
  v10 = ((vecForce.z * v8) * m_fValue) * flScale;
  v11 = ((vecForce.x * v8) * m_fValue) * flScale;
  info->m_vecDamageForce.y = ((vecForce.y * v8) * m_fValue) * flScale;
  info->m_vecDamageForce.z = v10;
  info->m_vecDamageForce.x = v11;
}


// CalculateMeleeDamageForce  (line 415, @0x00000000023c78b0, libserver.so)  // inlines: GetBaseDamage, GetFloat, SetDamageForce, SetDamagePosition, operator*=, operator=
// calls: VectorNormalize
// callers: CBreakableProp::BreakablePropTouch, PerformMeleeAttackTest, CBeam::BeamDamage, CBreakable::BreakTouch, GuessDamageForce
void __fastcall CalculateMeleeDamageForce(
        CTakeDamageInfo *info,
        const Vector *const vecMeleeDir,
        const Vector *const vecForceOrigin,
        float flScale)
{
  float m_flBaseDamage; // xmm1_4
  float m_fValue; // xmm0_4
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  float flForceScale; // [rsp+Ch] [rbp-24h]
  Vector vecForce; // [rsp+10h] [rbp-20h] BYREF

  m_flBaseDamage = info->m_flBaseDamage;
  info->m_vecDamagePosition = *vecForceOrigin;
  if ( m_flBaseDamage == 3.4028235e38 )
    m_flBaseDamage = info->m_flDamage;
  vecForce = *vecMeleeDir;
  flForceScale = m_flBaseDamage * 300.0;
  VectorNormalize(&vecForce);
  m_fValue = phys_pushscale.m_pParent->m_Value.m_fValue;
  v7 = ((vecForce.z * flForceScale) * m_fValue) * flScale;
  v8 = ((flForceScale * vecForce.x) * m_fValue) * flScale;
  info->m_vecDamageForce.y = ((vecForce.y * flForceScale) * m_fValue) * flScale;
  info->m_vecDamageForce.z = v7;
  info->m_vecDamageForce.x = v8;
}


// GuessDamageForce  (line 434, @0x00000000023c7980, libserver.so)
// calls: CalculateMeleeDamageForce, CalculateExplosiveDamageForce, GetAmmoDef, CAmmoDef::Index, CalculateBulletDamageForce
// callers: CPointHurt::HurtThink, CTriggerHurt::HurtEntity
void __fastcall GuessDamageForce(
        CTakeDamageInfo *info,
        const Vector *const vecForceDir,
        const Vector *const vecForceOrigin,
        float flScale)
{
  int m_bitsDamageType; // eax
  CAmmoDef *AmmoDef; // rax
  int v8; // eax

  m_bitsDamageType = info->m_bitsDamageType;
  if ( (m_bitsDamageType & 2) != 0 )
  {
    AmmoDef = GetAmmoDef();
    v8 = CAmmoDef::Index(AmmoDef, "SMG1");
    CalculateBulletDamageForce(info, v8, vecForceDir, vecForceOrigin, flScale);
  }
  else if ( (m_bitsDamageType & 0x40) != 0 )
  {
    CalculateExplosiveDamageForce(info, vecForceDir, vecForceOrigin, flScale);
  }
  else
  {
    CalculateMeleeDamageForce(info, vecForceDir, vecForceOrigin, flScale);
  }
}


// CTakeDamageInfo::DebugGetDamageTypeString  (line 499, @0x00000000023c7a00, libserver.so)
// calls: V_snprintf
// callers: CVScriptGameSystem::InstallScriptBindings, CBasePlayer::OnTakeDamage
void __fastcall CTakeDamageInfo::DebugGetDamageTypeString(unsigned int damageType, char *outbuf, int outbuflength)
{
  char *v3; // r8
  int v5; // r12d
  __int64 v6; // rbx
  int v7; // r13d
  const char *v8; // rcx
  int v9; // eax
  int v10; // eax
  char *outbufb; // [rsp+8h] [rbp-38h]

  v3 = outbuf;
  v5 = outbuflength;
  if ( damageType == 0 )
  {
    v10 = V_snprintf(outbuf, outbuflength, "%s", "GENERIC");
    v5 -= v10;
    v3 = &outbuf[v10];
  }
  v6 = 0;
  while ( v5 > 0 )
  {
    v7 = v6 + 1;
    if ( (damageType & (1 << v6)) != 0 )
    {
      v8 = s_DamageTypeToStrTable[v6 + 1];
      outbufb = v3;
      ++v6;
      v9 = V_snprintf(v3, v5, "%s ", v8);
      v5 -= v9;
      v3 = &outbufb[v9];
      if ( v7 > 29 )
        return;
    }
    else
    {
      ++v6;
      if ( v7 > 29 )
        return;
    }
  }
}


