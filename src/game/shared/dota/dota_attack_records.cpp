
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_AttackRecordManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 24, @0x0000000002428210, libserver.so)
void __cdecl CDOTA_AttackRecordManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetProjectileAttachmentName  (line 39, @0x0000000002428220, libserver.so)
// callers: CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTA_ProjectileManager::FrameUpdatePostEntityThink, CDOTA_Ability_Lich_ChainFrost::OnSpellStart, CDOTA_Ability_Lich_ChainFrost::OnProjectileHit_ExtraData, CDOTA_Modifier_WitchDoctor_DeathWard::OnAttackLanded, CDOTA_Ability_WitchDoctor_ParalyzingCask::OnSpellStart, CDOTA_Ability_WitchDoctor_ParalyzingCask::OnProjectileHit_ExtraData, CDOTA_Modifier_Gyrocopter_Homing_Missile::UpdateHorizontalMotion
// globals: g_pszProjectileAttachmentNames
const char *__fastcall GetProjectileAttachmentName(int iAttachment)
{
  return g_pszProjectileAttachmentNames[iAttachment];
}


// GetAttackRecordsManager  (line 47, @0x0000000002428240, libserver.so)
// callers: CDOTA_Modifier_Special_Bonus_Lifesteal::OnAttacked, DoCleaveAttack, CDOTABehaviorAttackPhase::OnEnd, CDOTA_BaseNPC::CreateAttackRecord, DamageImpact, ApplyDamage, CDOTA_Modifier_Juggernaut_BladeDance::OnAttackLanded, CDOTA_Modifier_DrowRanger_Marksmanship::OnAttackLanded, CDOTA_Modifier_Lich_Attack_Slow::OnAttack, CDOTA_Modifier_DrowRanger_Marksmanship::OnAttack, CDOTA_Modifier_SkeletonKing_MortalStrike::OnAttackLanded, CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttacked (53 total)
// globals: g_AttackRecordManager
CDOTA_AttackRecordManager *__cdecl GetAttackRecordsManager()
{
  return &g_AttackRecordManager;
}


// CDOTA_AttackRecordManager::AddNewAttackRecord  (line 55, @0x0000000002454dd0, libserver.so)  // inlines: AddToTail, CDOTA_AttackRecord, CEntityHandle, CHandle, CUtlIntrusiveDList, CUtlIntrusiveList, CUtlReferenceList, CUtlSymbolLarge, GrowMemory, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: operator new, CUtlMemory<CDOTA_AttackRecord*, int>::Grow
// callers: CDOTA_BaseNPC::CreateAttackRecord, ApplyDamage, CDOTA_Ability_Luna_MoonGlaive::OnProjectileHit_ExtraData
CDOTA_AttackRecord *__fastcall CDOTA_AttackRecordManager::AddNewAttackRecord(CDOTA_AttackRecordManager *const this)
{
  CDOTA_AttackRecord *result; // rax
  __int64 m_Size; // r12
  int v4; // edx
  bool v5; // zf
  CDOTA_AttackRecord *pRecord; // [rsp+8h] [rbp-18h]

  result = operator new(0x98u);
  result->m_References.m_pHead = 0;
  result->m_hSource.m_Index = -1;
  result->m_hInflictor.m_Index = -1;
  result->m_hTarget.m_Index = -1;
  result->m_hProjectileSource.m_Index = -1;
  result->m_iszAutoAttackRangedParticle.u.m_Id = 0;
  result->m_guidAttackSound.m_nGuid.m_Data = 0;
  result->m_guidAttackSound.m_hStackHash = -1;
  result->m_iFailType = 0;
  result->m_iRecord = 0;
  result->m_flDamage = 0.0;
  result->m_flDamageMagical = 0.0;
  result->m_flDamagePhysical = 0.0;
  result->m_flDamagePhysical_IllusionDisplay = 0.0;
  result->m_flDamageComposite = 0.0;
  result->m_flDamagePure = 0.0;
  result->m_iDamageCategory = 1;
  result->m_iFlags = 0;
  result->m_flCriticalBonus = 0.0;
  result->m_flCriticalDamage = 0.0;
  result->m_animation = 1503;
  result->m_bRangedAttack = 0;
  result->m_bFakeAttack = 0;
  result->m_bNeverMiss = 0;
  result->m_bTriggeredAttack = 0;
  result->m_bAutoCastAttack = 0;
  result->m_nBashSource = 0;
  result->m_pOrb = 0;
  result->m_pOrb2 = 0;
  result->m_bProcessProcs = 1;
  result->m_bUseProjectile = 1;
  result->m_iProjectileSpeed = 1;
  result->m_flOriginalDamage = 0.0;
  result->m_flAttackHeight = 0.0;
  result->m_iRecord = this->m_iRecordsCount;
  m_Size = this->m_AttackRecords.m_Size;
  v4 = m_Size;
  v5 = m_Size == this->m_AttackRecords.m_Memory.m_nAllocationCount;
  this->m_iRecordsCount = (this->m_iRecordsCount + 1) % 0x7FFF;
  if ( v5 )
  {
    pRecord = result;
    CUtlMemory<CDOTA_AttackRecord *,int>::Grow(&this->m_AttackRecords.m_Memory, 1);
    v4 = this->m_AttackRecords.m_Size;
    result = pRecord;
  }
  this->m_AttackRecords.m_Size = v4 + 1;
  this->m_AttackRecords.m_Memory.m_pMemory[m_Size] = result;
  return result;
}


// CDOTA_AttackRecordManager::GetRecordByIndex  (line 69, @0x0000000002428250, libserver.so)
// calls: Warning
// callers: CDOTA_Modifier_Special_Bonus_Lifesteal::OnAttacked, DoCleaveAttack, CDOTA_Modifier_Juggernaut_BladeDance::OnAttackLanded, CDOTA_Modifier_DrowRanger_Marksmanship::OnAttackLanded, CDOTA_Modifier_Lich_Attack_Slow::OnAttack, CDOTA_Modifier_DrowRanger_Marksmanship::OnAttack, CDOTA_Modifier_SkeletonKing_MortalStrike::OnAttackLanded, CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttacked, CDOTA_Modifier_Slardar_Bash::GetModifierProcAttack_BonusDamage_Physical, CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttack, CDOTA_Modifier_PhantomAssassin_Gravestone::OnDeath, CDOTA_Modifier_PhantomAssassin_CoupdeGrace::GetModifierPreAttack_CriticalStrike (48 total)
// strings: "CDOTA_AttackRecordManager::GetRecordByIndex - Could not find attack record (%ld)!\n"
CDOTA_AttackRecord *__fastcall CDOTA_AttackRecordManager::GetRecordByIndex(
        CDOTA_AttackRecordManager *const this,
        __int64 iIndex)
{
  int m_Size; // r8d
  CDOTA_AttackRecord **m_pMemory; // rdi
  __int64 v4; // rdx
  CDOTA_AttackRecord *result; // rax

  m_Size = this->m_AttackRecords.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_6:
    Warning("CDOTA_AttackRecordManager::GetRecordByIndex - Could not find attack record (%ld)!\n", iIndex);
    return 0;
  }
  else
  {
    m_pMemory = this->m_AttackRecords.m_Memory.m_pMemory;
    v4 = 0;
    while ( 1 )
    {
      result = m_pMemory[v4];
      if ( result != 0 && result->m_iRecord == iIndex )
        break;
      if ( m_Size <= ++v4 )
        goto LABEL_6;
    }
  }
  return result;
}


// CDOTA_AttackRecordManager::RemoveRecord  (line 87, @0x00000000024305c0, libserver.so)  // inlines: Find, FindAndRemove
// calls: Warning, CUtlVectorBase<CDOTA_AttackRecord*, CUtlMemory<CDOTA_AttackRecord*, int> >::Remove, CDOTA_AttackRecord::~CDOTA_AttackRecord, operator delete
// callers: CDOTABehaviorAttackPhase::OnEnd, DamageImpact
// strings: "CDOTA_AttackRecordManager::RemoveRecord - Tried to remove attack record that does not exi
void __fastcall CDOTA_AttackRecordManager::RemoveRecord(
        CDOTA_AttackRecordManager *const this,
        CDOTA_AttackRecord *pRecord)
{
  int m_Size; // ecx
  CDOTA_AttackRecord **m_pMemory; // rdx
  CDOTA_AttackRecord **v5; // rdx
  int v6; // eax
  int v7; // esi

  if ( pRecord != 0 )
  {
    m_Size = this->m_AttackRecords.m_Size;
    if ( m_Size <= 0 )
    {
LABEL_7:
      Warning("CDOTA_AttackRecordManager::RemoveRecord - Tried to remove attack record that does not exist!\n");
      return;
    }
    m_pMemory = this->m_AttackRecords.m_Memory.m_pMemory;
    if ( *m_pMemory != pRecord )
    {
      v5 = m_pMemory + 1;
      v6 = 0;
      while ( ++v6 != m_Size )
      {
        if ( *v5++ == pRecord )
        {
          if ( v6 == -1 )
            goto LABEL_7;
          v7 = v6;
          goto LABEL_10;
        }
      }
      goto LABEL_7;
    }
    v7 = 0;
LABEL_10:
    CUtlVectorBase<CDOTA_AttackRecord *,CUtlMemory<CDOTA_AttackRecord *,int>>::Remove(&this->m_AttackRecords, v7);
    CDOTA_AttackRecord::~CDOTA_AttackRecord(pRecord);
    operator delete(pRecord);
  }
}


// CDOTA_AttackRecordManager::RemoveRecordByIndex  (line 105, @0x0000000002430540, libserver.so)
// calls: Warning, CUtlVectorBase<CDOTA_AttackRecord*, CUtlMemory<CDOTA_AttackRecord*, int> >::Remove, CDOTA_AttackRecord::~CDOTA_AttackRecord, operator delete
// strings: "CDOTA_AttackRecordManager::RemoveRecordByIndex - Tried to remove attack record that does 
void __fastcall CDOTA_AttackRecordManager::RemoveRecordByIndex(CDOTA_AttackRecordManager *const this, __int64 iIndex)
{
  int m_Size; // ecx
  __int64 v3; // rax
  CDOTA_AttackRecord *v4; // rbx

  m_Size = this->m_AttackRecords.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_6:
    Warning(
      "CDOTA_AttackRecordManager::RemoveRecordByIndex - Tried to remove attack record that does not exist (%ld)!\n",
      iIndex);
  }
  else
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = this->m_AttackRecords.m_Memory.m_pMemory[v3];
      if ( v4 != 0 && v4->m_iRecord == iIndex )
        break;
      if ( m_Size <= ++v3 )
        goto LABEL_6;
    }
    CUtlVectorBase<CDOTA_AttackRecord *,CUtlMemory<CDOTA_AttackRecord *,int>>::Remove(&this->m_AttackRecords, v3);
    CDOTA_AttackRecord::~CDOTA_AttackRecord(v4);
    operator delete(v4);
  }
}


// CDOTA_AttackRecord::OnProjectileHit  (line 126, @0x00000000024282a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: DamageImpact
// callers: CDOTA_ProjectileManager::FinishTrackingProjectile
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_AttackRecord::OnProjectileHit(CDOTA_AttackRecord *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_hSource.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSource.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_hSource.m_Index & 0x1FF];
      if ( v3 != 0
        && m_Index == v3->m_EHandle.m_Index
        && v3->m_pInstance != 0
        && BYTE3(v3->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        DamageImpact(this);
      }
    }
  }
}


// CDOTA_AttackRecord::~CDOTA_AttackRecord  (line 138, @0x0000000002428360, libserver.so)  // inlines: ~CUtlReferenceList
// calls: CDOTA_AttackRecord::DeleteOrb
// callers: CSchemaClassBinding<CDOTA_AttackRecord>::Deallocate, CSchemaClassBinding<CDOTA_AttackRecord>::DestructInPlace, CDOTA_AttackRecordManager::GameInit, CDOTA_AttackRecordManager::RemoveRecordByIndex, CDOTA_AttackRecordManager::RemoveRecord
void __fastcall CDOTA_AttackRecord::~CDOTA_AttackRecord(CDOTA_AttackRecord *const this)
{
  CUtlReference<CDOTA_AttackRecord> *m_pHead; // rax
  CUtlReference<CDOTA_AttackRecord> *m_pNext; // rdx

  CDOTA_AttackRecord::DeleteOrb(this);
  m_pHead = this->m_References.m_pHead;
  if ( this->m_References.m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      m_pHead->m_pPrev = 0;
      m_pHead->m_pNext = 0;
      m_pHead->m_pObject = 0;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  this->m_References.m_pHead = 0;
}


// CDOTA_AttackRecord::DeleteOrb  (line 143, @0x0000000002428310, libserver.so)
// callers: CDOTA_AttackRecord::~CDOTA_AttackRecord, CDOTA_Orb_DataDriven::OnOrbFire, CDOTA_OrbDrowRanger_FrostArrow::OnOrbFire, CDOTA_OrbHoldout_Multishot::OnOrbFire, CDOTA_OrbObsidian_Destroyer_ArcaneOrb::OnOrbFire
void __fastcall CDOTA_AttackRecord::DeleteOrb(CDOTA_AttackRecord *const this)
{
  CDOTA_Orb *m_pOrb; // rdi
  CDOTA_Orb *m_pOrb2; // rdi

  m_pOrb = this->m_pOrb;
  if ( m_pOrb != 0 )
    (*(m_pOrb->_vptr_CDOTA_Orb + 2))(m_pOrb);
  m_pOrb2 = this->m_pOrb2;
  if ( m_pOrb2 != 0 )
    (*(m_pOrb2->_vptr_CDOTA_Orb + 2))(m_pOrb2);
  this->m_pOrb = 0;
  this->m_pOrb2 = 0;
}


