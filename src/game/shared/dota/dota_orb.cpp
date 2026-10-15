
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Orb::CDOTA_Orb  (line 24, @0x00000000025fca50, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CDOTA_Modifier_DataDriven::GetCustomOrb, CDOTA_Modifier_AntiMage_ManaBreak::GetCustomOrb, CDOTA_Modifier_Holdout_Multishot::GetCustomOrb, CDOTA_Modifier_SandKing_CausticFinale::GetCustomOrb, CDOTA_Modifier_DrowRanger_FrostArrows::GetCustomOrb, CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::GetCustomOrb, CDOTA_Modifier_Item_Blight_Stone::GetCustomOrb, CDOTA_Modifier_Item_Desolator::GetCustomOrb, CDOTA_Modifier_Item_MaskOfDeath::GetCustomOrb, CDOTA_Modifier_Item_MaskOfMadness::GetCustomOrb, CDOTA_Modifier_Item_Satanic::GetCustomOrb
void __fastcall CDOTA_Orb::CDOTA_Orb(
        CDOTA_Orb *const this,
        CDOTA_AttackRecord *pRecord,
        KeyValues *pKV,
        CDOTA_BaseNPC *pCaster,
        CDOTABaseAbility *pAbility)
{
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  int v9; // eax
  __int16 v10; // cx

  this->_vptr_CDOTA_Orb = &off_4115E90;
  this->m_hCaster.m_Index = -1;
  this->m_hAbility.m_Index = -1;
  this->m_pRecord = pRecord;
  if ( pCaster != 0 )
  {
    m_pEntity = pCaster->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hCaster.m_Index) = v7 | this->m_hCaster.m_Index & 0x8000;
      this->m_hCaster.m_Index = (v6 << 15) | this->m_hCaster.m_Index & 0x7FFF;
    }
  }
  if ( pAbility != 0 )
  {
    v8 = pAbility->m_pEntity;
    if ( v8 != 0 )
    {
      v9 = (v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1);
      if ( v8->m_EHandle.m_Index == -1 )
        v10 = 0x7FFF;
      else
        v10 = v8->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v10 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v9 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
}


// CDOTA_Orb::GetCaster  (line 32, @0x00000000025fcc20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_OrbObsidian_Destroyer_ArcaneOrb::OnOrbFire, CDOTA_OrbObsidian_Destroyer_ArcaneOrb::OnOrbImpact
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_Orb::GetCaster(CDOTA_Orb *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *result; // rax

  m_Index = this->m_hCaster.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[this->m_hCaster.m_Index & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( m_Index != v3->m_EHandle.m_Index )
    return 0;
  result = v3->m_pInstance;
  if ( v3->m_pInstance == 0 || !result->m_bIsDOTANPC )
    return 0;
  return result;
}


// CDOTA_Orb::GetAbility  (line 37, @0x00000000025fcc90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast
// callers: CDOTA_Orb_DataDriven::OnOrbImpact, CDOTA_Orb_DataDriven::OnOrbFire, CDOTA_OrbDrowRanger_FrostArrow::OnOrbFire, CDOTA_OrbHoldout_Multishot::OnOrbFire, CDOTA_OrbObsidian_Destroyer_ArcaneOrb::OnOrbImpact
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_Orb::GetAbility(CDOTA_Orb *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hAbility.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && v3->m_pInstance != 0 )
  {
    return __dynamic_cast(v3->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  }
  else
  {
    return 0;
  }
}


