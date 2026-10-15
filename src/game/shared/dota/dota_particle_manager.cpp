
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_ParticleManagerSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 60, @0x0000000002658e60, libserver.so)
void __cdecl CDOTA_ParticleManagerSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetParticleManager  (line 66, @0x0000000002658e70, libserver.so)
// callers: CDOTA_ActionRunner::CreateParticle, CDOTABaseAbility::CreateAbilityParticleEffect, CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints, CDOTA_ActionRunner::PerformAction_AttachEffect, CDOTA_ActionRunner::PerformAction_Blink, CDOTA_ActionRunner::PerformAction_Lifesteal, CDOTA_ActionRunner::PerformAction_FireEffect, CDOTA_Ability_ShootFirework::OnSpellStart, CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart, CDOTA_BaseNPC::ModifyEconParticles, CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Ability_Slithereen_Riptide::OnSpellStart (950 total)
CDOTA_ParticleManager *__cdecl GetParticleManager()
{
  return g_DOTAParticleManagerSystem.m_pDOTAParticleManager;
}


// CDOTA_ParticleManager::CDOTA_ParticleManager  (line 71, @0x0000000002699c60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CDOTA_ParticleElement*, int>::Purge, _Unwind_Resume, CUtlMemory<CDOTA_ParticleManager::PortraitParticleMapEntry_t, int>::Purge
// callers: CDOTA_ParticleManagerSystem::GameInit
void __fastcall CDOTA_ParticleManager::CDOTA_ParticleManager(CDOTA_ParticleManager *const this)
{
  this->m_pParticles.m_Memory.m_pMemory = 0;
  this->m_pParticles.m_Memory.m_nAllocationCount = 0;
  this->m_pParticles.m_Memory.m_nGrowSize = 0;
  this->m_PortraitIndexMap.m_Size = 0;
  this->m_PortraitIndexMap.m_Memory.m_pMemory = 0;
  this->m_PortraitIndexMap.m_Memory.m_nAllocationCount = 0;
  this->m_PortraitIndexMap.m_Memory.m_nGrowSize = 0;
  this->m_pParticles.m_Size = 0;
  CUtlMemory<CDOTA_ParticleElement *,int>::Purge(&this->m_pParticles.m_Memory);
  this->m_iRunningParticleCount = 0;
}


// CDOTA_ParticleManager::~CDOTA_ParticleManager  (line 85, @0x0000000002696c70, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, PurgeAndDeleteElements, Purge_FixedGrowable, RemoveAll, RemoveAllParticles, ~CDOTA_ParticleElement, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: operator delete, CRecipientFilter::~CRecipientFilter, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_ParticleElement*, int>::Purge, CUtlMemory<CDOTA_ParticleManager::PortraitParticleMapEntry_t, int>::Purge
// callers: CDOTA_ParticleManagerSystem::GameShutdown
void __fastcall CDOTA_ParticleManager::~CDOTA_ParticleManager(CDOTA_ParticleManager *const this)
{
  __int64 v2; // r13
  int i; // r12d
  uint32 m_nGrowSize; // edx
  CHandle<CBaseEntity> *m_pMemory; // rsi
  unsigned int v6; // eax
  CDOTA_ParticleElement *v7; // rbx
  int m_nAllocationCount; // r15d
  bool v9; // zf

  v2 = 0;
  for ( i = 0; i < this->m_pParticles.m_Size; ++v2 )
  {
    v7 = this->m_pParticles.m_Memory.m_pMemory[v2];
    if ( v7 == 0 )
      goto LABEL_9;
    CRecipientFilter::~CRecipientFilter(&v7->m_filter);
    m_nAllocationCount = v7->m_vecAttachedEntities.m_Memory.m_nAllocationCount;
    v7->m_vecAttachedEntities.m_Size = 0;
    if ( m_nAllocationCount >= 0 )
    {
      m_nGrowSize = v7->m_vecAttachedEntities.m_Memory.m_nGrowSize;
      m_pMemory = v7->m_vecAttachedEntities.m_Memory.m_pMemory;
      v6 = m_nGrowSize & 0xC0000000;
      if ( &v7->m_vecAttachedEntities.m_Memory.m_FixedMemory != m_pMemory )
      {
        if ( m_pMemory != 0 && v6 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = v7->m_vecAttachedEntities.m_Memory.m_nGrowSize;
        }
        v7->m_vecAttachedEntities.m_Memory.m_pMemory = &v7->m_vecAttachedEntities.m_Memory.m_FixedMemory;
        v7->m_vecAttachedEntities.m_Memory.m_nAllocationCount = 4;
        v7->m_vecAttachedEntities.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
        goto LABEL_8;
      }
    }
    else
    {
      v6 = v7->m_vecAttachedEntities.m_Memory.m_nGrowSize & 0xC0000000;
    }
    if ( v6 == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v7->m_vecAttachedEntities.m_Memory);
LABEL_8:
    operator delete(v7);
LABEL_9:
    ++i;
  }
  v9 = (this->m_pParticles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pParticles.m_Size = 0;
  if ( v9 )
    CUtlMemory<CDOTA_ParticleElement *,int>::Purge(&this->m_pParticles.m_Memory);
  v9 = (this->m_PortraitIndexMap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PortraitIndexMap.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CDOTA_ParticleManager::PortraitParticleMapEntry_t,int>::Purge(&this->m_PortraitIndexMap.m_Memory);
    if ( (this->m_PortraitIndexMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_ParticleManager::PortraitParticleMapEntry_t,int>::Purge(&this->m_PortraitIndexMap.m_Memory);
  }
  v9 = (this->m_pParticles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pParticles.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CDOTA_ParticleElement *,int>::Purge(&this->m_pParticles.m_Memory);
    if ( (this->m_pParticles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_ParticleElement *,int>::Purge(&this->m_pParticles.m_Memory);
  }
}


// CDOTA_ParticleManager::FindElementByIndex  (line 95, @0x0000000002658e80, libserver.so)
// callers: CDOTA_ParticleManager::SetFrozen, CDOTA_ParticleManager::SetShouldDraw, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlOffset, CDOTA_ParticleManager::SetParticleControlFallback, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_ParticleManager::SetParticleControlOrientation, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::DestroyParticleEffect
CDOTA_ParticleElement *__fastcall CDOTA_ParticleManager::FindElementByIndex(
        CDOTA_ParticleManager *const this,
        int iIndex)
{
  CDOTA_ParticleElement **m_pMemory; // rdx
  CDOTA_ParticleElement *result; // rax
  CDOTA_ParticleElement **v4; // rdx
  CDOTA_ParticleElement **v5; // rcx

  if ( this->m_pParticles.m_Size > 0 )
  {
    m_pMemory = this->m_pParticles.m_Memory.m_pMemory;
    result = *m_pMemory;
    if ( (*m_pMemory)->m_iIndex == iIndex )
      return result;
    v4 = m_pMemory + 1;
    v5 = &v4[this->m_pParticles.m_Size - 1];
    while ( v4 != v5 )
    {
      result = *v4++;
      if ( result->m_iIndex == iIndex )
        return result;
    }
  }
  return 0;
}


// CDOTA_ParticleManager::CreateParticle  (line 108, @0x000000000268caf0, libserver.so)  // inlines: FindEmptyParticleIndex
// calls: CDOTA_ParticleManager::CreateParticleEffectInternal
// callers: CDOTA_ActionRunner::CreateParticle, CDOTABaseAbility::CreateAbilityParticleEffect, CDOTA_ActionRunner::PerformAction_Blink, CDOTA_ActionRunner::PerformAction_Lifesteal, CDOTA_Ability_ShootFirework::OnSpellStart, CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart, CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Ability_Slithereen_Riptide::OnSpellStart, CDOTA_Item_Tombstone::OnAbilityPhaseStart, CDOTA_Item_Tombstone::CompleteChannelSuccessfully, CDOTA_Item_Physical::SetContainedItem, DoEventPostTPEffect (634 total)
int __fastcall CDOTA_ParticleManager::CreateParticle(
        CDOTA_ParticleManager *const this,
        const char *pParticleName,
        int iAttachType,
        CBaseEntity *pEntityForAttach,
        CRecipientFilter *pFilter,
        CBaseEntity *pEntityForModifiers)
{
  int m_iRunningParticleCount; // ebx

  m_iRunningParticleCount = this->m_iRunningParticleCount;
  this->m_iRunningParticleCount = m_iRunningParticleCount + 1;
  CDOTA_ParticleManager::CreateParticleEffectInternal(
    this,
    m_iRunningParticleCount,
    pParticleName,
    iAttachType,
    pEntityForAttach,
    pFilter,
    pEntityForModifiers);
  return m_iRunningParticleCount;
}


// CDOTA_ParticleManager::CreateParticle  (line 117, @0x000000000268cb30, libserver.so)  // inlines: CSocketIterator, CSocketPair, CreateParticle, FindEmptyParticleIndex, GetFirstSocket<CItemSocket_Spectator>, GetModifier, GetParticleControlPointValue, GetReplacementName, GetSocket, String, TSocketIterator, ToDOTABaseNPC, Vector, operator[]
// calls: CDOTA_ParticleManager::CreateParticleEffectInternal, FindAssetModifier<CDOTA_BaseNPC, CParticleModifier>, CUtlString::Get, ItemSystem, CBaseAnimating::LookupAttachment, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, __dynamic_cast, CSocketIterator::GetSocket, GetAssetModifiers<CEconItemView, CParticleControlPointModifier>, GetAssetModifier<CEconItemView, CStrangeControlPointModifier>, GetStatsGemValue
// callers: CDOTA_ParticleManager::CreateAttachedParticle, CDOTA_Modifier_MonkeyKing_Transform::OnIntervalThink
int __fastcall CDOTA_ParticleManager::CreateParticle(
        CDOTA_ParticleManager *const this,
        const attachedparticlesystem_t *pSystem,
        bool bIsFakeSystem,
        CBaseEntity *pEntity,
        CBaseEntity *pEntityForModifiers)
{
  CBaseEntity *v5; // rax
  const char *v9; // rcx
  CBaseEntity *v10; // rsi
  const char *m_pAsString; // rax
  char v12; // dl
  const char *v13; // rsi
  CBaseEntity *v14; // rax
  bool v15; // r12
  unsigned int m_iRunningParticleCount; // r12d
  bool v17; // zf
  const CParticleModifier *Asset; // rax
  const CParticleModifier *v19; // r15
  CEconItemSystem *v20; // rax
  const attachedparticlesystem_t *v21; // rax
  const CBaseAnimating *v22; // rax
  int nRootAttachType; // ecx
  __int64 v24; // r15
  const attachedparticlesystem_t *v25; // rax
  int v26; // ebx
  const attachedparticlesystem_t *v27; // r14
  const char *v28; // r9
  attachedparticlecontrolpoint_t *v29; // rax
  int nAttachType; // r8d
  void *v31; // rax
  __int64 v32; // rax
  vec_t *p_z; // rdx
  IItemSocket *Socket; // rax
  int vptr_IItemSocket; // eax
  const CUtlVector<const CParticleControlPointModifier*,CUtlMemory<const CParticleControlPointModifier*,int> > *v36; // rax
  int v37; // r12d
  __int64 v38; // r15
  const char *v39; // r14
  const CUtlVector<const CParticleControlPointModifier*,CUtlMemory<const CParticleControlPointModifier*,int> > *v40; // rbx
  const CParticleControlPointModifier *v41; // rdi
  const CParticleControlPointModifier *v42; // rax
  vec_t y; // xmm2_4
  int m_iCPNumber; // edx
  float z; // xmm1_4
  const CStrangeControlPointModifier *v46; // rax
  int m_nControlPoint; // r15d
  signed int StatsGemValue; // eax
  const char *vecPosition_8; // [rsp+8h] [rbp-118h]
  const char *pszSystemName; // [rsp+10h] [rbp-110h]
  const attachedparticlesystem_t *pszSystemNamea; // [rsp+10h] [rbp-110h]
  int iIndexa; // [rsp+18h] [rbp-108h]
  CDOTA_BaseNPC *pEntityForModifiersa; // [rsp+20h] [rbp-100h]
  CEconItemView *pItem; // [rsp+28h] [rbp-F8h]
  CEconItemView *pItema; // [rsp+28h] [rbp-F8h]
  Vector vecCPValue; // [rsp+30h] [rbp-F0h] BYREF
  int v59; // [rsp+D8h] [rbp-48h] BYREF
  int v60; // [rsp+DCh] [rbp-44h]
  int v61; // [rsp+E0h] [rbp-40h]

  v5 = pEntityForModifiers;
  if ( pEntityForModifiers == 0 )
    v5 = pEntity;
  v9 = "";
  v10 = v5;
  pEntityForModifiersa = v5;
  m_pAsString = pSystem->symSystemName.u.m_pAsString;
  if ( m_pAsString != 0 )
    v9 = pSystem->symSystemName.u.m_pAsString;
  pszSystemName = v9;
  if ( v10 != 0 && v10->m_bIsDOTANPC )
  {
    if ( m_pAsString == 0 )
      m_pAsString = "";
    Asset = FindAssetModifier<CDOTA_BaseNPC,CParticleModifier>(pEntityForModifiersa, m_pAsString);
    v12 = 0;
    v19 = Asset;
    if ( Asset != 0 )
    {
      pszSystemName = CUtlString::Get(&Asset->m_strModifier);
      v20 = ItemSystem();
      v21 = (*(v20->m_itemSchema._vptr_IEconItemSchema + 15))(&v20->m_itemSchema, v19->m_nIndex);
      v12 = 1;
      if ( v21 != 0 )
        pSystem = v21;
    }
  }
  else
  {
    v12 = 0;
  }
  v13 = "";
  if ( pSystem->symAttachmentName.u.m_Id != 0 )
    v13 = pSystem->symAttachmentName.u.m_pAsString;
  v14 = pEntity;
  if ( pSystem->nAttachToEntity == attachedparticle_toent_t::ATTPART_TO_PARENT )
    v14 = pEntityForModifiersa;
  pItem = v14;
  if ( v14 == 0 || v12 == 0 && bIsFakeSystem )
    return -1;
  v15 = pSystem->nRootAttachType != 1;
  if ( v13 != 0 && *v13 != 0 )
  {
    vecPosition_8 = v13;
    if ( (*(v14->_vptr_IHandleEntity + 43))(v14) != 0 )
    {
      v22 = (*(pItem->_vptr_IEconItemInterface + 43))(pItem);
      if ( CBaseAnimating::LookupAttachment(v22, vecPosition_8) != 0 )
      {
        nRootAttachType = 2;
        if ( !v15 )
        {
LABEL_29:
          m_iRunningParticleCount = this->m_iRunningParticleCount;
          this->m_iRunningParticleCount = m_iRunningParticleCount + 1;
          CDOTA_ParticleManager::CreateParticleEffectInternal(
            this,
            m_iRunningParticleCount,
            pszSystemName,
            nRootAttachType,
            pEntityForModifiersa,
            0,
            pEntityForModifiersa);
          goto LABEL_30;
        }
LABEL_28:
        nRootAttachType = pSystem->nRootAttachType;
        goto LABEL_29;
      }
    }
  }
  if ( v15 )
    goto LABEL_28;
  m_iRunningParticleCount = this->m_iRunningParticleCount;
  v17 = !pSystem->bFollowRootBone;
  this->m_iRunningParticleCount = m_iRunningParticleCount + 1;
  if ( v17 )
    CDOTA_ParticleManager::CreateParticleEffectInternal(
      this,
      m_iRunningParticleCount,
      pszSystemName,
      1,
      pEntityForModifiersa,
      0,
      pEntityForModifiersa);
  else
    CDOTA_ParticleManager::CreateParticleEffectInternal(
      this,
      m_iRunningParticleCount,
      pszSystemName,
      9,
      pEntityForModifiersa,
      0,
      pEntityForModifiersa);
LABEL_30:
  if ( m_iRunningParticleCount == -1 )
    return -1;
  v24 = 0;
  if ( pSystem->vecControlPoints.m_Size > 0 )
  {
    v25 = pSystem;
    v26 = 0;
    v27 = v25;
    do
    {
      while ( 1 )
      {
        v29 = &v27->vecControlPoints.m_Memory.m_pMemory[v24];
        nAttachType = v29->nAttachType;
        if ( nAttachType != 8 && nAttachType != 2 )
          break;
        ++v26;
        ++v24;
        CDOTA_ParticleManager::SetParticleControl(
          this,
          m_iRunningParticleCount,
          v29->nControlPoint,
          *&v29->vecPosition.x,
          v29->vecPosition.z);
        if ( v27->vecControlPoints.m_Size <= v26 )
          goto LABEL_39;
      }
      v28 = "";
      if ( v29->symAttachmentName.u.m_Id != 0 )
        v28 = v29->symAttachmentName.u.m_pAsString;
      ++v26;
      ++v24;
      CDOTA_ParticleManager::SetParticleControlEnt(
        this,
        m_iRunningParticleCount,
        v29->nControlPoint,
        pItem,
        nAttachType,
        v28,
        vec3_invalid,
        v27->nAttachToEntity == attachedparticle_toent_t::ATTPART_TO_SELF);
    }
    while ( v27->vecControlPoints.m_Size > v26 );
LABEL_39:
    pSystem = v27;
  }
  if ( pEntity != 0 )
  {
    v31 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CEconEntity, 0);
    if ( v31 != 0 )
    {
      v32 = (*(*v31 + 2120LL))(v31);
      pItema = (v32 + 104);
      if ( v32 != -104 )
      {
        p_z = &vecCPValue.z;
        do
        {
          *p_z = 0;
          p_z += 4;
          *(p_z - 1) = 0;
        }
        while ( p_z != &v59 );
        v59 = 0;
        v60 = 0;
        v61 = 1;
        *&vecCPValue.x = off_4178570;
        (*(*(v32 + 104) + 224LL))(pItema, &vecCPValue);
        if ( v60 > 0 )
        {
          Socket = CSocketIterator::GetSocket(&vecCPValue, 0);
          if ( Socket != 0 )
          {
            vptr_IItemSocket = Socket[5]._vptr_IItemSocket;
            *&vecCPValue.y = 0x3F8000003F800000LL;
            vecCPValue.x = vptr_IItemSocket;
            CDOTA_ParticleManager::SetParticleControl(this, m_iRunningParticleCount, 13, *&vecCPValue.x, 1.0);
          }
        }
        v36 = GetAssetModifiers<CEconItemView,CParticleControlPointModifier>(pItema);
        if ( v36 != 0 && v36->m_Size > 0 )
        {
          iIndexa = m_iRunningParticleCount;
          v37 = 0;
          v38 = 0;
          v39 = pszSystemName;
          pszSystemNamea = pSystem;
          v40 = v36;
          do
          {
            while ( 1 )
            {
              v41 = v40->m_Memory.m_pMemory[v38];
              if ( v41 != 0 && (*(v41->_vptr_CAssetModifier + 6))(v41, v39) != 0 )
                break;
              ++v37;
              ++v38;
              if ( v40->m_Size <= v37 )
                goto LABEL_55;
            }
            ++v37;
            v42 = v40->m_Memory.m_pMemory[v38++];
            y = v42->m_vControlPoint.y;
            m_iCPNumber = v42->m_iCPNumber;
            z = v42->m_vControlPoint.z;
            vecCPValue.x = v42->m_vControlPoint.x;
            vecCPValue.y = y;
            vecCPValue.z = z;
            CDOTA_ParticleManager::SetParticleControl(this, iIndexa, m_iCPNumber, *&vecCPValue.x, z);
          }
          while ( v40->m_Size > v37 );
LABEL_55:
          m_iRunningParticleCount = iIndexa;
          pSystem = pszSystemNamea;
        }
        v46 = GetAssetModifier<CEconItemView,CStrangeControlPointModifier>(pItema);
        if ( v46 != 0 )
        {
          m_nControlPoint = v46->m_nControlPoint;
          StatsGemValue = GetStatsGemValue(pItema, v46->m_nStrangeType, 0);
          *&vecCPValue.y = 0;
          vecCPValue.x = StatsGemValue;
          CDOTA_ParticleManager::SetParticleControl(
            this,
            m_iRunningParticleCount,
            m_nControlPoint,
            COERCE_DOUBLE(COERCE_UNSIGNED_INT(StatsGemValue)),
            0.0);
        }
      }
    }
  }
  if ( pEntityForModifiersa != 0 )
    (*(pEntityForModifiersa->_vptr_IHandleEntity + 206))(
      pEntityForModifiersa,
      m_iRunningParticleCount,
      &pSystem->colorDefault);
  return m_iRunningParticleCount;
}


// CDOTA_ParticleManager::CreateAttachedParticle  (line 270, @0x000000000268d0a0, libserver.so)
// calls: ItemSystem, CDOTA_ParticleManager::CreateParticle
int __fastcall CDOTA_ParticleManager::CreateAttachedParticle(
        CDOTA_ParticleManager *const this,
        const char *pParticleSystem,
        bool bIsFakeSystem,
        CBaseEntity *pEntityAttach,
        CBaseEntity *pEntityForModifiers)
{
  CEconItemSystem *v10; // rax
  const attachedparticlesystem_t *v11; // rax

  v10 = ItemSystem();
  v11 = (*(v10->m_itemSchema._vptr_IEconItemSchema + 16))(&v10->m_itemSchema, pParticleSystem, 0);
  if ( v11 != 0 )
    return CDOTA_ParticleManager::CreateParticle(this, v11, bIsFakeSystem, pEntityAttach, pEntityForModifiers);
  else
    return -1;
}


// CDOTA_ParticleManager::ReleaseParticleIndex  (line 284, @0x0000000002696df0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_ParticleManager_t, CEntityHandle, CHandle, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, ConvertToExternalMemory, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsExternallyAllocated, LookupEntity, PostEvent<CDOTAUserMsg_ParticleManager_t>, Purge, Purge_FixedGrowable, RemoveAll, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, Set, ToBaseModelEntity, end, mutable_position, mutable_update_entity_position, operator CBaseEntity*, operator CEntityInstance*, set_entity_handle, set_has_entity_handle, set_has_index, set_has_position, set_has_type, set_has_update_entity_position, set_has_x, set_has_y, set_has_z, set_index, set_type, set_x, set_y, set_z, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_ParticleManager_t, ~CDOTA_ParticleElement, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CDOTA_ParticleManager::FindElementByIndex, CUtlVectorBase<CDOTA_ParticleElement*, CUtlMemory<CDOTA_ParticleElement*, int> >::FindAndRemove, CRecipientFilter::~CRecipientFilter, operator delete, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, CRecipientFilter::RemoveAllRecipients, CRecipientFilter::AddRecipientsByTeamNumber, Server_EHandleToInt (19 total)
// callers: CDOTA_ActionRunner::PerformAction_Blink, CDOTA_ActionRunner::PerformAction_Lifesteal, CDOTA_ActionRunner::PerformAction_FireEffect, CDOTA_Ability_ShootFirework::OnSpellStart, CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart, CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Ability_Slithereen_Riptide::OnSpellStart, CDOTA_Item_Tombstone::CompleteChannelSuccessfully, CDOTA_Item_Physical::SetContainedItem, DoEventPostTPEffect, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::OnSpellStart, CDOTA_Modifier_Spawnlord_Aura_Bonus::OnAttacked (583 total)
// globals: CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
void __fastcall CDOTA_ParticleManager::ReleaseParticleIndex(CDOTA_ParticleManager *const this, int iIndex)
{
  CDOTA_ParticleElement *ElementByIndex; // rax
  CUtlVectorFixedGrowable<CHandle<CBaseEntity>,4ul> *p_m_vecAttachedEntities; // r12
  CHandle<CBaseEntity> *m_pMemory; // rax
  CHandle<CBaseEntity> *v5; // r10
  int v6; // r13d
  char v7; // di
  char v8; // r8
  uint32 m_Index; // edx
  unsigned int v10; // ecx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CUtlVectorFixedGrowable<CHandle<CBaseEntity>,4ul> *v13; // rbx
  int m_nAllocationCount; // eax
  uint32 m_nGrowSize; // edx
  CHandle<CBaseEntity> *v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // r13
  IGameEventSystem *v19; // r12
  void (__fastcall *v20)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r14
  CHandle<CBaseEntity> *v21; // rbx
  uint32 v22; // eax
  unsigned int v23; // edx
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CEntityInstance *m_pInstance; // r12
  int v27; // r15d
  CEntityIdentity *m_pEntity; // rax
  int v29; // edx
  __int16 v30; // cx
  uint32 v31; // eax
  CDOTAUserMsg_ParticleManager_UpdateEntityPosition *v32; // r15
  uint32 v33; // r14d
  const Vector *AbsOrigin; // rax
  CDOTAUserMsg_ParticleManager_UpdateEntityPosition *v35; // r12
  vec_t z; // xmm1_4
  vec_t x; // r15d
  CMsgVector *v38; // r14
  CDOTAUserMsg_ParticleManager_UpdateEntityPosition *v39; // r12
  CMsgVector *v40; // r14
  CDOTAUserMsg_ParticleManager_UpdateEntityPosition *v41; // r12
  CMsgVector *v42; // r14
  IGameEventSystem *v43; // r12
  __int64 v44; // r14
  void (__fastcall *v45)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64, CDOTA_ParticleManager *); // r15
  CDOTA_ParticleManager *thisa; // [rsp+8h] [rbp-258h]
  vec_t y; // [rsp+24h] [rbp-23Ch]
  vec_t v49; // [rsp+28h] [rbp-238h]
  int nTeam; // [rsp+2Ch] [rbp-234h]
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemoryFixedGrowable<CHandle<CBaseEntity>,4ul,int> >::iterator __for_end; // [rsp+38h] [rbp-228h]
  EHANDLE v52; // [rsp+40h] [rbp-220h] BYREF
  CUtlVectorFixedGrowable<CHandle<CBaseEntity>,4ul> *__for_range; // [rsp+48h] [rbp-218h] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-210h] BYREF
  int v55; // [rsp+60h] [rbp-200h]
  int v56; // [rsp+68h] [rbp-1F8h]
  int v57; // [rsp+6Ch] [rbp-1F4h]
  CDOTAUserMsg_ParticleManager_UpdateEntityPosition *v58; // [rsp+D8h] [rbp-188h]
  CReliableBroadcastRecipientFilter filter; // [rsp+F0h] [rbp-170h] BYREF
  unsigned __int64 v60; // [rsp+228h] [rbp-38h]

  thisa = this;
  v60 = __readfsqword(0x28u);
  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  p_m_vecAttachedEntities = &ElementByIndex->m_vecAttachedEntities;
  __for_range = &ElementByIndex->m_vecAttachedEntities;
  if ( ElementByIndex != 0 )
  {
    nTeam = 0;
    if ( ElementByIndex->m_vecAttachedEntities.m_Size <= 0 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        if ( (nTeam - 6) <= 7 || (nTeam - 2) <= 1 )
        {
          m_pMemory = p_m_vecAttachedEntities->m_Memory.m_pMemory;
          v5 = &m_pMemory[p_m_vecAttachedEntities->m_Size];
          v6 = 1 << nTeam;
          if ( m_pMemory != v5 )
          {
            v7 = 0;
            v8 = 0;
            do
            {
              while ( 1 )
              {
                m_Index = m_pMemory->m_Index;
                v10 = m_pMemory->m_Index + 2;
                LODWORD(v54[0]) = m_pMemory->m_Index;
                if ( v10 > 1 )
                {
                  v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v54[0]) >> 9) & 0x3F];
                  if ( v11 != 0 )
                  {
                    v12 = &v11[v54[0] & 0x1FF];
                    if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
                      break;
                  }
                }
                if ( v5 == ++m_pMemory )
                  goto LABEL_17;
              }
              if ( (HIDWORD(v12->m_pInstance[16].m_hPrivateScope.m_hScope) & v6) != 0 )
                v7 = 1;
              else
                v8 = 1;
              ++m_pMemory;
            }
            while ( v5 != m_pMemory );
LABEL_17:
            if ( v7 == 1 && v8 == 1 )
              break;
          }
        }
        if ( ++nTeam == 14 )
          goto LABEL_19;
      }
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&filter);
      CRecipientFilter::RemoveAllRecipients(&filter);
      CRecipientFilter::AddRecipientsByTeamNumber(&filter, nTeam);
      v21 = __for_range->m_Memory.m_pMemory;
      __for_end = &v21[__for_range->m_Size];
      while ( __for_end != v21 )
      {
        while ( 1 )
        {
          v22 = v21->m_Index;
          v23 = v21->m_Index + 2;
          LODWORD(v54[0]) = v21->m_Index;
          if ( v23 > 1 )
          {
            v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v54[0]) >> 9) & 0x3F];
            if ( v24 != 0 )
            {
              v25 = &v24[v54[0] & 0x1FF];
              if ( v25 != 0 && v22 == v25->m_EHandle.m_Index )
              {
                m_pInstance = v25->m_pInstance;
                if ( v25->m_pInstance != 0 && (v6 & HIDWORD(m_pInstance[16].m_hPrivateScope.m_hScope)) == 0 )
                  break;
              }
            }
          }
          if ( __for_end == ++v21 )
            goto LABEL_58;
        }
        CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v54);
        v27 = v55;
        v56 = 14;
        v54[0] = off_416C710;
        v52.m_Index = -1;
        v55 |= 3u;
        v57 = iIndex;
        m_pEntity = m_pInstance->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v29 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v30 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v30 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v52.m_Index) = v30 | v52.m_Index & 0x8000;
          v52.m_Index = (v29 << 15) | v52.m_Index & 0x7FFF;
        }
        v31 = Server_EHandleToInt(&v52);
        v55 = v27 | 0x8003;
        v32 = v58;
        v33 = v31;
        if ( v58 == 0 )
        {
          v32 = operator new(0x28u);
          CDOTAUserMsg_ParticleManager_UpdateEntityPosition::CDOTAUserMsg_ParticleManager_UpdateEntityPosition(v32);
          v58 = v32;
        }
        *(v32 + 4) |= 1u;
        *(v32 + 8) = v33;
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
        v35 = v58;
        z = AbsOrigin->z;
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        v55 |= 0x8000u;
        v49 = z;
        if ( v58 == 0 )
        {
          v35 = operator new(0x28u);
          CDOTAUserMsg_ParticleManager_UpdateEntityPosition::CDOTAUserMsg_ParticleManager_UpdateEntityPosition(v35);
          v58 = v35;
        }
        v38 = *(v35 + 3);
        *(v35 + 4) |= 2u;
        if ( v38 == 0 )
        {
          v38 = operator new(0x28u);
          CMsgVector::CMsgVector(v38);
          *(v35 + 3) = v38;
        }
        *(v38 + 4) |= 1u;
        *(v38 + 6) = x;
        v39 = v58;
        v55 |= 0x8000u;
        if ( v58 == 0 )
        {
          v39 = operator new(0x28u);
          CDOTAUserMsg_ParticleManager_UpdateEntityPosition::CDOTAUserMsg_ParticleManager_UpdateEntityPosition(v39);
          v58 = v39;
        }
        v40 = *(v39 + 3);
        *(v39 + 4) |= 2u;
        if ( v40 == 0 )
        {
          v40 = operator new(0x28u);
          CMsgVector::CMsgVector(v40);
          *(v39 + 3) = v40;
        }
        *(v40 + 4) |= 2u;
        *(v40 + 7) = y;
        v41 = v58;
        v55 |= 0x8000u;
        if ( v58 == 0 )
        {
          v41 = operator new(0x28u);
          CDOTAUserMsg_ParticleManager_UpdateEntityPosition::CDOTAUserMsg_ParticleManager_UpdateEntityPosition(v41);
          v58 = v41;
        }
        v42 = *(v41 + 3);
        *(v41 + 4) |= 2u;
        if ( v42 == 0 )
        {
          v42 = operator new(0x28u);
          CMsgVector::CMsgVector(v42);
          *(v41 + 3) = v42;
        }
        *(v42 + 4) |= 4u;
        v43 = g_pGameEventSystem;
        *(v42 + 8) = v49;
        v44 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
        v45 = *(*v43 + 128LL);
        (*(*g_pNetworkMessages + 96LL))(
          g_pNetworkMessages,
          IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
        v45(v43, 0, 0, &filter, v44, v54, 152, thisa);
        ++v21;
        v54[0] = &off_416C590;
        CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v54);
      }
LABEL_58:
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&filter);
      p_m_vecAttachedEntities = __for_range;
      ++nTeam;
    }
    while ( nTeam != 14 );
LABEL_19:
    if ( p_m_vecAttachedEntities != 0 )
    {
LABEL_20:
      CUtlVectorBase<CDOTA_ParticleElement *,CUtlMemory<CDOTA_ParticleElement *,int>>::FindAndRemove(
        &thisa->m_pParticles,
        &__for_range);
      v13 = __for_range;
      if ( __for_range != 0 )
      {
        CRecipientFilter::~CRecipientFilter(&__for_range[1]);
        m_nAllocationCount = v13->m_Memory.m_nAllocationCount;
        v13->m_Size = 0;
        if ( m_nAllocationCount < 0 )
        {
          v17 = v13->m_Memory.m_nGrowSize & 0xC0000000;
        }
        else
        {
          m_nGrowSize = v13->m_Memory.m_nGrowSize;
          v16 = v13->m_Memory.m_pMemory;
          v17 = m_nGrowSize & 0xC0000000;
          if ( &v13->m_Memory.m_FixedMemory != v16 )
          {
            if ( v16 != 0 && v17 == 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
              m_nGrowSize = v13->m_Memory.m_nGrowSize;
            }
            v13->m_Memory.m_pMemory = &v13->m_Memory.m_FixedMemory;
            v13->m_Memory.m_nAllocationCount = 4;
            v13->m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_27:
            operator delete(v13);
            goto LABEL_28;
          }
        }
        if ( v17 == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v13->m_Memory);
        goto LABEL_27;
      }
    }
  }
LABEL_28:
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v54);
  v18 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
  v56 = 9;
  v54[0] = off_416C710;
  v55 |= 3u;
  v57 = iIndex;
  v19 = g_pGameEventSystem;
  v20 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
  v20(v19, 0, 0, &filter, v18, v54, 152);
  v54[0] = &off_416C590;
  CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v54);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_ParticleManager::GetParticleReplacement  (line 356, @0x0000000002658ed0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTA_BaseNPC::GetModifiedAbilityParticleName
// callers: CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CScriptParticleManager::GetParticleReplacement, CDOTA_Ability_Tidehunter_Gush::OnSpellStart, CDOTA_Ability_Necrolyte_Death_Pulse::OnSpellStart, CDOTA_Modifier_WitchDoctor_Cask_Thinker::OnIntervalThink, CDOTA_Ability_WitchDoctor_DeathWard::OnProjectileHit_ExtraData, CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::GetStatusEffectName, CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetStatusEffectName, CDOTA_Ability_Luna_MoonGlaive::OnProjectileHit_ExtraData, CDOTA_Ability_Tusk_IceShards::OnSpellStart, CDOTA_Item_BootsOfTravel::OnSpellStart
const char *__fastcall CDOTA_ParticleManager::GetParticleReplacement(const char *pParticleNameIn, CBaseEntity *pEnt)
{
  const char *result; // rax

  result = pParticleNameIn;
  if ( pEnt != 0 && pEnt->m_bIsDOTANPC )
    return CDOTA_BaseNPC::GetModifiedAbilityParticleName(pEnt, pParticleNameIn);
  return result;
}


// CDOTA_ParticleManager::GetParticleSnapshotReplacement  (line 369, @0x0000000002689a60, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CDOTA_BaseNPC, CParticleSnapshotModifier>, FindAssetModifier<CParticleSnapshotModifier>, GetAssetModifiers<CParticleSnapshotModifier>, GetModifier, GetReplacementName, IsIdxValid, IsValidIndex, LeftChild, ToDOTABaseNPC, operator[]
// calls: CParticleSnapshotModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlString::Get
const char *__fastcall CDOTA_ParticleManager::GetParticleSnapshotReplacement(
        const char *pParticleSnapshotNameIn,
        CBaseEntity *pEnt)
{
  unsigned __int16 v4; // ax
  UtlSymLargeId_t v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rbx
  const CUtlString *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pEnt == 0 )
    return 0;
  if ( !pEnt->m_bIsDOTANPC )
    return 0;
  if ( pParticleSnapshotNameIn == 0 )
    return 0;
  search.key.m_nType = CParticleSnapshotModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pEnt[4].m_lifeState,
         &search);
  if ( v4 >= SLODWORD(pEnt[4].m_flMoveDoneTime) )
    return 0;
  if ( v4 > HIWORD(pEnt[4].m_iszDamageFilterName.u.m_pAsString) )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = pEnt[4].m_target.u.m_Id + 24LL * v4;
  if ( v4 == *v5 )
    return 0;
  v6 = *(v5 + 16);
  if ( v6 == 0 || *v6 <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(*(v6 + 8) + 8 * v7);
    if ( v8 != 0 && (*(v8->m_pString + 6))(v8, pParticleSnapshotNameIn) != 0 )
      break;
    if ( ++v7 >= *v6 )
      return 0;
  }
  return CUtlString::Get(v8 + 2);
}


// CDOTA_ParticleManager::CreateParticleEffectInternal  (line 386, @0x000000000268c440, libserver.so)  // inlines: AddToTail, AlignedByteArrayExplicit_t, AlignedByteArray_t, CDOTAUserMsg_ParticleManager_t, CDOTA_ParticleElement, CEntityHandle, CHandle, CNetMessagePB, CUserMessagePB, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CDOTA_ParticleElement*>, CopyConstruct<CHandle<CBaseEntity> >, Element, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, PostEvent<CDOTAUserMsg_ParticleManager_t>, Purge, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, Set, mutable_create_particle, operator[], set_attach_type, set_entity_handle, set_entity_handle_for_modifiers, set_has_attach_type, set_has_create_particle, set_has_entity_handle, set_has_entity_handle_for_modifiers, set_has_particle_name_index, set_has_type, set_index, set_particle_name_index, set_type, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: IsGameActive, operator new, CRecipientFilter::CRecipientFilter, CRecipientFilter::CopyFrom, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, Server_EHandleToInt, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, Plat_IsInDebugSessionRaw, CUtlMemory<CDOTA_ParticleElement*, int>::Grow, CRecipientFilter::MakeReliable, CRecipientFilter::AddAllPlayers, CUtlMemory<CHandle<CBaseEntity>, int>::Grow (17 total)
// callers: CDOTA_ParticleManager::CreateParticleEffectInternal
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
void __fastcall CDOTA_ParticleManager::CreateParticleEffectInternal(
        CDOTA_ParticleManager *const this,
        int iIndex,
        HParticleSystemDefinition hDef,
        int iAttachType,
        CBaseEntity *pEntityAttach,
        CRecipientFilter *pFilter,
        CBaseEntity *pEntityForModifiers)
{
  CDOTA_ParticleElement *v10; // rbx
  __int64 v11; // rdi
  CEntityIdentity *m_pEntity; // rax
  __int16 v13; // cx
  __int64 m_Size; // rax
  int v15; // edx
  CHandle<CBaseEntity> *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  CDOTA_ParticleElement **v19; // rax
  __int64 v20; // r13
  CDOTAUserMsg_ParticleManager_CreateParticle *v21; // r14
  CDOTAUserMsg_ParticleManager_CreateParticle *v22; // rax
  CEntityIdentity *v23; // rdx
  __int16 v24; // cx
  uint32 v25; // eax
  uint32 v26; // r14d
  CDOTAUserMsg_ParticleManager_CreateParticle *v27; // rax
  CEntityIdentity *v28; // rax
  int v29; // edx
  __int16 v30; // cx
  uint32 v31; // eax
  CDOTAUserMsg_ParticleManager_CreateParticle *v32; // rdi
  uint32 v33; // r12d
  __int64 v34; // r13
  IGameEventSystem *v35; // r12
  void (__fastcall *v36)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r14
  CDOTAUserMsg_ParticleManager_CreateParticle *v37; // r13
  CDOTAUserMsg_ParticleManager_CreateParticle *v38; // r13
  int v39; // [rsp+10h] [rbp-100h]
  int v40; // [rsp+18h] [rbp-F8h]
  CDOTAUserMsg_ParticleManager_CreateParticle *hDefb; // [rsp+28h] [rbp-E8h]
  EHANDLE hIn; // [rsp+30h] [rbp-E0h] BYREF
  _QWORD v46[2]; // [rsp+40h] [rbp-D0h] BYREF
  int v47; // [rsp+50h] [rbp-C0h]
  int v48; // [rsp+58h] [rbp-B8h]
  int iIndexa; // [rsp+5Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_CreateParticle *v50; // [rsp+68h] [rbp-A8h]

  if ( IsGameActive() )
  {
    v10 = operator new(0x168u);
    v10->m_vecAttachedEntities.m_Size = 0;
    v10->m_vecAttachedEntities.m_Memory.m_pMemory = 0;
    v10->m_vecAttachedEntities.m_Memory.m_nAllocationCount = 4;
    v10->m_vecAttachedEntities.m_Memory.m_nGrowSize = 0x80000000;
    if ( ((v10 + 24) & 3) != 0 && Plat_IsInDebugSessionRaw(v11) != 0 )
      __debugbreak();
    v10->m_vecAttachedEntities.m_Memory.m_pMemory = &v10->m_vecAttachedEntities.m_Memory.m_FixedMemory;
    CRecipientFilter::CRecipientFilter(&v10->m_filter);
    v10->m_iIndex = iIndex;
    if ( pEntityAttach != 0 )
    {
      LODWORD(v46[0]) = -1;
      m_pEntity = pEntityAttach->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v13 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(v46[0]) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
      }
      m_Size = v10->m_vecAttachedEntities.m_Size;
      v15 = v10->m_vecAttachedEntities.m_Size;
      if ( m_Size == v10->m_vecAttachedEntities.m_Memory.m_nAllocationCount )
      {
        v40 = v10->m_vecAttachedEntities.m_Size;
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v10->m_vecAttachedEntities.m_Memory, 1);
        v15 = v10->m_vecAttachedEntities.m_Size;
        m_Size = v40;
      }
      v10->m_vecAttachedEntities.m_Size = v15 + 1;
      v16 = &v10->m_vecAttachedEntities.m_Memory.m_pMemory[m_Size];
      if ( v16 != 0 )
        v16->m_Index = v46[0];
    }
    v17 = this->m_pParticles.m_Size;
    v18 = this->m_pParticles.m_Size;
    if ( v17 == this->m_pParticles.m_Memory.m_nAllocationCount )
    {
      v39 = this->m_pParticles.m_Size;
      CUtlMemory<CDOTA_ParticleElement *,int>::Grow(&this->m_pParticles.m_Memory, 1);
      v18 = this->m_pParticles.m_Size;
      v17 = v39;
    }
    this->m_pParticles.m_Size = v18 + 1;
    v19 = &this->m_pParticles.m_Memory.m_pMemory[v17];
    if ( v19 != 0 )
      *v19 = v10;
    if ( hDef.m_pBinding->m_pData != 0 )
    {
      if ( pFilter != 0 )
      {
        CRecipientFilter::CopyFrom(&v10->m_filter, pFilter);
      }
      else
      {
        CRecipientFilter::MakeReliable(&v10->m_filter);
        CRecipientFilter::AddAllPlayers(&v10->m_filter);
      }
      v20 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, hDef.m_pBinding->m_pData);
      CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v46);
      iIndexa = iIndex;
      v46[0] = off_416C710;
      v21 = v50;
      v48 = 0;
      v47 |= 0xBu;
      if ( v50 == 0 )
      {
        v21 = operator new(0x30u);
        CDOTAUserMsg_ParticleManager_CreateParticle::CDOTAUserMsg_ParticleManager_CreateParticle(v21);
        v50 = v21;
      }
      *(v21 + 4) |= 1u;
      *(v21 + 3) = v20;
      v22 = v50;
      v47 |= 8u;
      if ( v50 == 0 )
      {
        v37 = operator new(0x30u);
        CDOTAUserMsg_ParticleManager_CreateParticle::CDOTAUserMsg_ParticleManager_CreateParticle(v37);
        v50 = v37;
        v22 = v37;
      }
      *(v22 + 4) |= 2u;
      *(v22 + 8) = iAttachType;
      hIn.m_Index = -1;
      if ( pEntityAttach != 0 )
      {
        v23 = pEntityAttach->m_pEntity;
        if ( v23 != 0 )
        {
          v24 = 0x7FFF;
          if ( v23->m_EHandle.m_Index != -1 )
            v24 = v23->m_EHandle.m_Index & 0x7FFF;
          hIn.m_Index = (((v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1)) << 15) | v24 & 0x7FFF;
        }
      }
      v25 = Server_EHandleToInt(&hIn);
      v47 |= 8u;
      v26 = v25;
      v27 = v50;
      if ( v50 == 0 )
      {
        hDefb = operator new(0x30u);
        CDOTAUserMsg_ParticleManager_CreateParticle::CDOTAUserMsg_ParticleManager_CreateParticle(hDefb);
        v27 = hDefb;
        v50 = hDefb;
      }
      *(v27 + 4) |= 4u;
      *(v27 + 9) = v26;
      if ( pEntityForModifiers != pEntityAttach && pEntityForModifiers != 0 )
      {
        hIn.m_Index = -1;
        v28 = pEntityForModifiers->m_pEntity;
        if ( v28 != 0 )
        {
          v29 = (v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1);
          v30 = 0x7FFF;
          if ( v28->m_EHandle.m_Index != -1 )
            v30 = v28->m_EHandle.m_Index & 0x7FFF;
          LOWORD(hIn.m_Index) = v30 | hIn.m_Index & 0x8000;
          hIn.m_Index = (v29 << 15) | hIn.m_Index & 0x7FFF;
        }
        v31 = Server_EHandleToInt(&hIn);
        v32 = v50;
        v47 |= 8u;
        v33 = v31;
        if ( v50 == 0 )
        {
          v38 = operator new(0x30u);
          CDOTAUserMsg_ParticleManager_CreateParticle::CDOTAUserMsg_ParticleManager_CreateParticle(v38);
          v50 = v38;
          v32 = v38;
        }
        *(v32 + 4) |= 8u;
        *(v32 + 10) = v33;
      }
      v34 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
      v35 = g_pGameEventSystem;
      v36 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
      v36(v35, 0, 0, &v10->m_filter, v34, v46, 152);
      v46[0] = &off_416C590;
      CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v46);
    }
  }
}


// CDOTA_ParticleManager::CreateParticleEffectInternal  (line 523, @0x000000000268c9c0, libserver.so)  // inlines: CWeakHandle, FindExistingResourceByName, FindExistingResourceByName<1717792886ull>, FindExistingResourceByNameLoadingJustInTime, FindExistingResourceByNameLoadingJustInTime<1717792886ull>, Init
// calls: CDOTA_ParticleManager::CreateParticleEffectInternal
// callers: CDOTA_ParticleManager::CreateParticle
// globals: CDOTA_ParticleManager::g_pStringTableParticleEffectAssets
void __fastcall CDOTA_ParticleManager::CreateParticleEffectInternal(
        CDOTA_ParticleManager *const this,
        int iIndex,
        const char *pParticleName,
        int iAttachType,
        CBaseEntity *pEntityAttach,
        CRecipientFilter *pFilter,
        CBaseEntity *pEntityForModifiers)
{
  IResourceSystem *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  const ResourceBindingBase_t *m_pBinding; // r9
  IResourceSystem *hDef; // [rsp+8h] [rbp-58h]
  HParticleSystemDefinition hDefa; // [rsp+8h] [rbp-58h]
  HParticleSystemDefinition v19; // [rsp+20h] [rbp-40h] BYREF

  v11 = g_pResourceSystem;
  if ( (*(*g_pResourceSystem + 448LL))(g_pResourceSystem, pParticleName) == 0
    || (m_pBinding = (*(*v11 + 256LL))(v11, pParticleName, 1717792886, 0)) == 0 )
  {
    hDef = g_pResourceSystem;
    if ( (*(*g_pResourceSystem + 448LL))(g_pResourceSystem, pParticleName, v12, v13, g_pResourceSystem, m_pBinding) != 0 )
      m_pBinding = (*(*hDef + 256LL))(hDef, pParticleName, 1717792886, 0);
    else
      m_pBinding = (*(*hDef + 392LL))(hDef, pParticleName, 1717792886, 0);
    if ( m_pBinding != 0 )
    {
      hDefa.m_pBinding = m_pBinding;
      (*(CDOTA_ParticleManager::g_pStringTableParticleEffectAssets->_vptr_INetworkStringTable + 8))(
        CDOTA_ParticleManager::g_pStringTableParticleEffectAssets,
        1,
        pParticleName,
        0xFFFFFFFFLL,
        0);
      m_pBinding = hDefa.m_pBinding;
    }
  }
  v19.m_pBinding = m_pBinding;
  CDOTA_ParticleManager::CreateParticleEffectInternal(
    this,
    iIndex,
    &v19,
    iAttachType,
    pEntityAttach,
    pFilter,
    pEntityForModifiers);
}


// CDOTA_ParticleManager::DestroyParticleEffect  (line 548, @0x00000000026976d0, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, ConvertToExternalMemory, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, IsExternallyAllocated, PostEvent<CDOTAUserMsg_ParticleManager_t>, Purge, Purge_FixedGrowable, RemoveAll, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_destroy_particle, set_destroy_immediately, set_has_destroy_immediately, set_has_destroy_particle, set_has_type, set_index, set_type, ~CDOTAUserMsg_ParticleManager_t, ~CDOTA_ParticleElement, ~CNetMessagePB, ~CUserMessagePB, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CUtlVectorBase<CDOTA_ParticleElement*, CUtlMemory<CDOTA_ParticleElement*, int> >::FindAndRemove, CRecipientFilter::~CRecipientFilter, operator delete, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, operator new, CDOTAUserMsg_ParticleManager_DestroyParticle::CDOTAUserMsg_ParticleManager_DestroyParticle, _Unwind_Resume
// callers: CDOTA_Item_Tombstone::UpdateOnRemove, CDOTA_Modifier_Tutorial_Roq_Teleport::OnDestroy, CDOTA_Modifier_Greevil_Miniboss_Blue_IceVortexThinker::OnDestroy, CDOTA_Ability_EnragedWildkin_Tornado::OnChannelFinish, CDOTA_Buff::DestroyParticles, CDOTA_TempTree::CutDown, CDOTA_Modifier_TutorialNPCBlocker::OnDestroy, CScriptParticleManager::DestroyParticle, CDOTA_Ability_SandKing_Epicenter::OnAbilityPhaseInterrupted, CDOTA_Ability_Nevermore_Requiem::OnAbilityPhaseInterrupted, CDOTA_Modifier_AncientApparition_IceVortexThinker::OnDestroy, CDOTA_Ability_SandKing_Epicenter::OnChannelFinish (127 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
void __fastcall CDOTA_ParticleManager::DestroyParticleEffect(
        CDOTA_ParticleManager *const this,
        int iIndex,
        bool bDestroyImmediately)
{
  CDOTAUserMsg_ParticleManager_DestroyParticle *v6; // rax
  __int64 v7; // r14
  IGameEventSystem *v8; // r13
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTA_ParticleElement *v10; // r12
  int m_nAllocationCount; // eax
  uint32 m_nGrowSize; // edx
  CHandle<CBaseEntity> *m_pMemory; // rsi
  unsigned int v14; // eax
  CDOTAUserMsg_ParticleManager_DestroyParticle *v15; // r14
  CDOTA_ParticleElement *pElement; // [rsp+18h] [rbp-D8h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-D0h] BYREF
  int v18; // [rsp+30h] [rbp-C0h]
  int v19; // [rsp+38h] [rbp-B8h]
  int v20; // [rsp+3Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_DestroyParticle *v21; // [rsp+50h] [rbp-A0h]

  pElement = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( pElement != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v17);
    v19 = 7;
    v17[0] = off_416C710;
    v20 = iIndex;
    v18 |= 0x13u;
    v6 = v21;
    if ( v21 == 0 )
    {
      v15 = operator new(0x20u);
      CDOTAUserMsg_ParticleManager_DestroyParticle::CDOTAUserMsg_ParticleManager_DestroyParticle(v15);
      v21 = v15;
      v6 = v15;
    }
    *(v6 + 24) = bDestroyImmediately;
    v7 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    *(v6 + 4) |= 1u;
    v8 = g_pGameEventSystem;
    v9 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v7);
    v9(v8, 0, 0, &pElement->m_filter, v7, v17, 152);
    CUtlVectorBase<CDOTA_ParticleElement *,CUtlMemory<CDOTA_ParticleElement *,int>>::FindAndRemove(
      &this->m_pParticles,
      &pElement);
    v10 = pElement;
    if ( pElement == 0 )
      goto LABEL_11;
    CRecipientFilter::~CRecipientFilter(&pElement->m_filter);
    m_nAllocationCount = v10->m_vecAttachedEntities.m_Memory.m_nAllocationCount;
    v10->m_vecAttachedEntities.m_Size = 0;
    if ( m_nAllocationCount < 0 )
    {
      v14 = v10->m_vecAttachedEntities.m_Memory.m_nGrowSize & 0xC0000000;
    }
    else
    {
      m_nGrowSize = v10->m_vecAttachedEntities.m_Memory.m_nGrowSize;
      m_pMemory = v10->m_vecAttachedEntities.m_Memory.m_pMemory;
      v14 = m_nGrowSize & 0xC0000000;
      if ( &v10->m_vecAttachedEntities.m_Memory.m_FixedMemory != m_pMemory )
      {
        if ( m_pMemory != 0 && v14 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = v10->m_vecAttachedEntities.m_Memory.m_nGrowSize;
        }
        v10->m_vecAttachedEntities.m_Memory.m_pMemory = &v10->m_vecAttachedEntities.m_Memory.m_FixedMemory;
        v10->m_vecAttachedEntities.m_Memory.m_nAllocationCount = 4;
        v10->m_vecAttachedEntities.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
        operator delete(v10);
LABEL_11:
        v17[0] = &off_416C590;
        CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v17);
        return;
      }
    }
    if ( v14 == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v10->m_vecAttachedEntities.m_Memory);
    operator delete(v10);
    goto LABEL_11;
  }
}


// CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap  (line 608, @0x000000000268b390, libserver.so)  // inlines: MakeStringToken
// calls: __dynamic_cast, CModel::FirstAttachmentHandle, CModel::GetAttachmentHandle, CModel::NextAttachmentHandle, CModel::GetAttachmentName, MurmurHash2LowerCase, RegisterStringToken, CDOTA_ParticleManager::ChangeControlPointAttachment
// callers: CDOTA_BaseNPC::ManageModelChanges
void __fastcall CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap(
        CDOTA_ParticleManager *const this,
        CBaseEntity *pEnt,
        const CModel *pOldModel,
        const CModel *pNewModel)
{
  AttachmentHandle_t i; // bl
  AttachmentHandle_t AttachmentHandle; // al
  const char *AttachmentName; // rax
  CUtlStringToken v10; // esi
  uint32 v11; // eax
  const char *v12; // rsi
  const char *pAttachmentName; // [rsp+8h] [rbp-38h]
  uint32 pAttachmentNamea; // [rsp+8h] [rbp-38h]

  if ( pEnt != 0
    && pOldModel != 0
    && pNewModel != 0
    && __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0) != 0 )
  {
    for ( i = CModel::FirstAttachmentHandle(pOldModel); i != 0; i = CModel::NextAttachmentHandle(pOldModel, i) )
    {
      AttachmentName = CModel::GetAttachmentName(pOldModel, i);
      v10.m_nHashCode = 0;
      if ( AttachmentName != 0 && *AttachmentName != 0 )
      {
        pAttachmentName = AttachmentName;
        v11 = MurmurHash2LowerCase(AttachmentName, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
        {
          v12 = pAttachmentName;
          pAttachmentNamea = v11;
          RegisterStringToken(v11, v12, 0, 1);
          v10.m_nHashCode = pAttachmentNamea;
        }
        else
        {
          v10.m_nHashCode = v11;
        }
      }
      AttachmentHandle = CModel::GetAttachmentHandle(pNewModel, v10);
      if ( i != AttachmentHandle && AttachmentHandle != 0 )
        CDOTA_ParticleManager::ChangeControlPointAttachment(this, pEnt, i, AttachmentHandle);
    }
  }
}


// CDOTA_ParticleManager::ChangeControlPointAttachment  (line 640, @0x000000000268b050, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_ParticleManager_t, CEntityHandle, CHandle, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, GetEHandle, GetEntryIndex, GetSerialNumber, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, Set, mutable_change_control_point_attachment, set_attachment_new, set_attachment_old, set_entity_handle, set_has_attachment_new, set_has_attachment_old, set_has_change_control_point_attachment, set_has_entity_handle, set_has_type, set_index, set_type, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, Server_EHandleToInt, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, CRecipientFilter::~CRecipientFilter, operator new, CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment::CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment, __stack_chk_fail, operator delete, _Unwind_Resume
// callers: CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
void __fastcall CDOTA_ParticleManager::ChangeControlPointAttachment(
        CDOTA_ParticleManager *const this,
        CBaseEntity *pEnt,
        int nAttachmentOld,
        int nAttachmentNew)
{
  CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *v7; // rax
  CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // cx
  uint32 v11; // eax
  CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *v12; // rdi
  uint32 v13; // r13d
  __int64 v14; // r14
  IGameEventSystem *v15; // r13
  void (__fastcall *v16)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *v17; // r15
  CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *v18; // r14
  CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *pMem; // [rsp+8h] [rbp-228h]
  EHANDLE hIn; // [rsp+10h] [rbp-220h] BYREF
  _QWORD v21[2]; // [rsp+20h] [rbp-210h] BYREF
  int v22; // [rsp+30h] [rbp-200h]
  int v23; // [rsp+38h] [rbp-1F8h]
  int v24; // [rsp+3Ch] [rbp-1F4h]
  CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *v25; // [rsp+A0h] [rbp-190h]
  CReliableBroadcastRecipientFilter filter; // [rsp+C0h] [rbp-170h] BYREF
  unsigned __int64 v27; // [rsp+1F8h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v21);
  v23 = 13;
  v21[0] = off_416C710;
  v24 = 0;
  v22 |= 0x4003u;
  v7 = v25;
  if ( v25 == 0 )
  {
    pMem = operator new(0x28u);
    CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment::CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment(pMem);
    v7 = pMem;
    v25 = pMem;
  }
  *(v7 + 4) |= 1u;
  *(v7 + 6) = nAttachmentOld;
  v8 = v25;
  v22 |= 0x4000u;
  if ( v25 == 0 )
  {
    v17 = operator new(0x28u);
    CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment::CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment(v17);
    v25 = v17;
    v8 = v17;
  }
  *(v8 + 4) |= 2u;
  *(v8 + 7) = nAttachmentNew;
  hIn.m_Index = -1;
  if ( pEnt != 0 )
  {
    m_pEntity = pEnt->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hIn.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
    }
  }
  v11 = Server_EHandleToInt(&hIn);
  v12 = v25;
  v22 |= 0x4000u;
  v13 = v11;
  if ( v25 == 0 )
  {
    v18 = operator new(0x28u);
    CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment::CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment(v18);
    v25 = v18;
    v12 = v18;
  }
  *(v12 + 8) = v13;
  *(v12 + 4) |= 4u;
  v14 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
  v15 = g_pGameEventSystem;
  v16 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
  v16(v15, 0, 0, &filter, v14, v21, 152);
  v21[0] = &off_416C590;
  CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v21);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving  (line 672, @0x000000000268ad80, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_ParticleManager_t, CEntityHandle, CHandle, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, GetEHandle, GetEntryIndex, GetSerialNumber, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, Set, mutable_destroy_particle_involving, set_destroy_immediately, set_entity_handle, set_has_destroy_immediately, set_has_destroy_particle_involving, set_has_entity_handle, set_has_type, set_index, set_type, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, Server_EHandleToInt, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, CRecipientFilter::~CRecipientFilter, operator new, CDOTAUserMsg_ParticleManager_DestroyParticleInvolving::CDOTAUserMsg_ParticleManager_DestroyParticleInvolving, __stack_chk_fail, operator delete, _Unwind_Resume
// callers: CDOTA_Modifier_Illusion::OnDestroy, CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::OnDestroy, CDOTA_Ability_WitchDoctor_DeathWard::OnChannelFinish, CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnDeath
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
void __fastcall CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving(
        CDOTA_ParticleManager *const this,
        CBaseEntity *pEnt,
        bool bDestroyImmediately)
{
  CDOTAUserMsg_ParticleManager_DestroyParticleInvolving *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  uint32 v8; // eax
  CDOTAUserMsg_ParticleManager_DestroyParticleInvolving *v9; // rdx
  uint32 v10; // r13d
  __int64 v11; // r14
  IGameEventSystem *v12; // r13
  void (__fastcall *v13)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_DestroyParticleInvolving *v14; // r15
  CDOTAUserMsg_ParticleManager_DestroyParticleInvolving *v15; // r14
  EHANDLE hIn; // [rsp+10h] [rbp-220h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-210h] BYREF
  int v18; // [rsp+30h] [rbp-200h]
  int v19; // [rsp+38h] [rbp-1F8h]
  int v20; // [rsp+3Ch] [rbp-1F4h]
  CDOTAUserMsg_ParticleManager_DestroyParticleInvolving *v21; // [rsp+58h] [rbp-1D8h]
  CReliableBroadcastRecipientFilter filter; // [rsp+C0h] [rbp-170h] BYREF
  unsigned __int64 v23; // [rsp+1F8h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v17);
  v19 = 8;
  v17[0] = off_416C710;
  v20 = 0;
  v18 |= 0x23u;
  v5 = v21;
  if ( v21 == 0 )
  {
    v14 = operator new(0x20u);
    CDOTAUserMsg_ParticleManager_DestroyParticleInvolving::CDOTAUserMsg_ParticleManager_DestroyParticleInvolving(v14);
    v21 = v14;
    v5 = v14;
  }
  *(v5 + 4) |= 1u;
  *(v5 + 24) = bDestroyImmediately;
  hIn.m_Index = -1;
  if ( pEnt != 0 )
  {
    m_pEntity = pEnt->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hIn.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
  }
  v8 = Server_EHandleToInt(&hIn);
  v9 = v21;
  v18 |= 0x20u;
  v10 = v8;
  if ( v21 == 0 )
  {
    v15 = operator new(0x20u);
    CDOTAUserMsg_ParticleManager_DestroyParticleInvolving::CDOTAUserMsg_ParticleManager_DestroyParticleInvolving(v15);
    v21 = v15;
    v9 = v15;
  }
  *(v9 + 7) = v10;
  *(v9 + 4) |= 2u;
  v11 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
  v12 = g_pGameEventSystem;
  v13 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
  v13(v12, 0, 0, &filter, v11, v17, 152);
  v17[0] = &off_416C590;
  CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v17);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_ParticleManager::SetParticleControl  (line 709, @0x000000000268a0f0, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_position, mutable_update_particle, set_control_point, set_has_control_point, set_has_position, set_has_type, set_has_update_particle, set_has_x, set_has_y, set_has_z, set_index, set_type, set_x, set_y, set_z, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator new, CDOTAUserMsg_ParticleManager_UpdateParticle::CDOTAUserMsg_ParticleManager_UpdateParticle, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints, CDOTA_ActionRunner::PerformAction_AttachEffect, CDOTA_ActionRunner::PerformAction_Blink, CDOTA_ActionRunner::PerformAction_FireEffect, CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart, CDOTA_BaseNPC::ModifyEconParticles, CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Ability_Slithereen_Riptide::OnSpellStart, CDOTA_Item_Tombstone::OnAbilityPhaseStart, CDOTA_Item_Tombstone::OnChannelThink, DoEventPostTPEffect, CDOTA_Modifier_Tutorial_Roq_Teleport::OnCreated (418 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_ParticleManager::SetParticleControl(
        CDOTA_ParticleManager *const this,
        int iIndex,
        int iPoint,
        double a4,
        float a5)
{
  CDOTA_ParticleElement *ElementByIndex; // r13
  CDOTAUserMsg_ParticleManager_UpdateParticle *v8; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticle *v9; // rbx
  CMsgVector *v10; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticle *v11; // rbx
  CMsgVector *v12; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticle *v13; // rbx
  CMsgVector *v14; // rax
  __int64 v15; // r14
  IGameEventSystem *v16; // rbx
  void (__fastcall *v17)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_UpdateParticle *v19; // r14
  CMsgVector *v20; // r15
  CMsgVector *v21; // r15
  CMsgVector *v22; // r15
  _QWORD v25[2]; // [rsp+20h] [rbp-D0h] BYREF
  int v26; // [rsp+30h] [rbp-C0h]
  int v27; // [rsp+38h] [rbp-B8h]
  int v28; // [rsp+3Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_UpdateParticle *v29; // [rsp+60h] [rbp-90h]

  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( ElementByIndex != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v25);
    v27 = 1;
    v25[0] = off_416C710;
    v28 = iIndex;
    v26 |= 0x43u;
    v8 = v29;
    if ( v29 == 0 )
    {
      v19 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticle::CDOTAUserMsg_ParticleManager_UpdateParticle(v19);
      v29 = v19;
      v8 = v19;
    }
    *(v8 + 4) |= 1u;
    *(v8 + 8) = iPoint;
    v9 = v29;
    v26 |= 0x40u;
    if ( v29 == 0 )
    {
      v9 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticle::CDOTAUserMsg_ParticleManager_UpdateParticle(v9);
      v29 = v9;
    }
    v10 = *(v9 + 3);
    *(v9 + 4) |= 2u;
    if ( v10 == 0 )
    {
      v20 = operator new(0x28u);
      CMsgVector::CMsgVector(v20);
      *(v9 + 3) = v20;
      v10 = v20;
    }
    *(v10 + 4) |= 1u;
    *(v10 + 6) = LODWORD(a4);
    v11 = v29;
    v26 |= 0x40u;
    if ( v29 == 0 )
    {
      v11 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticle::CDOTAUserMsg_ParticleManager_UpdateParticle(v11);
      v29 = v11;
    }
    v12 = *(v11 + 3);
    *(v11 + 4) |= 2u;
    if ( v12 == 0 )
    {
      v21 = operator new(0x28u);
      CMsgVector::CMsgVector(v21);
      *(v11 + 3) = v21;
      v12 = v21;
    }
    *(v12 + 4) |= 2u;
    *(v12 + 7) = HIDWORD(a4);
    v13 = v29;
    v26 |= 0x40u;
    if ( v29 == 0 )
    {
      v13 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticle::CDOTAUserMsg_ParticleManager_UpdateParticle(v13);
      v29 = v13;
    }
    v14 = *(v13 + 3);
    *(v13 + 4) |= 2u;
    if ( v14 == 0 )
    {
      v22 = operator new(0x28u);
      CMsgVector::CMsgVector(v22);
      *(v13 + 3) = v22;
      v14 = v22;
    }
    *(v14 + 4) |= 4u;
    *(v14 + 8) = a5;
    v15 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    v16 = g_pGameEventSystem;
    v17 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
    v17(v16, 0, 0, &ElementByIndex->m_filter, v15, v25, 152);
    v25[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v25);
  }
  return 1;
}


// CDOTA_ParticleManager::SetParticleControlForward  (line 740, @0x000000000268aa50, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_forward, mutable_update_particle_fwd, set_control_point, set_has_control_point, set_has_forward, set_has_type, set_has_update_particle_fwd, set_has_x, set_has_y, set_has_z, set_index, set_type, set_x, set_y, set_z, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator new, CDOTAUserMsg_ParticleManager_UpdateParticleFwd::CDOTAUserMsg_ParticleManager_UpdateParticleFwd, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints, CScriptParticleManager::SetParticleControlForward, CDOTA_Ability_Lina_DragonSlave::OnProjectileHit, CDOTA_Ability_AntiMage_Blink::OnSpellStart, CDOTA_Modifier_Tiny_Avalanche::OnCreated, CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnAttackLanded, CDOTA_Ability_PhantomAssassin_PhantomStrike::OnSpellStart, CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnCreated, CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnIntervalThink, CDOTA_Modifier_Invoker_IceWall_Thinker::OnCreated, CDOTA_Modifier_DarkSeer_WallOfReplica::OnCreated, CDOTA_Ability_Nyx_Assassin_Burrow::OnAbilityPhaseStart (15 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_ParticleManager::SetParticleControlForward(
        CDOTA_ParticleManager *const this,
        int iIndex,
        int iPoint,
        double a4,
        float a5)
{
  CDOTA_ParticleElement *ElementByIndex; // r13
  int v8; // eax
  CDOTAUserMsg_ParticleManager_UpdateParticleFwd *v9; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleFwd *v10; // rbx
  CMsgVector *v11; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleFwd *v12; // rbx
  CMsgVector *v13; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleFwd *v14; // rbx
  CMsgVector *v15; // rax
  __int64 v16; // r14
  IGameEventSystem *v17; // rbx
  void (__fastcall *v18)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_UpdateParticleFwd *v20; // r14
  CMsgVector *v21; // r15
  CMsgVector *v22; // r15
  CMsgVector *v23; // r15
  _QWORD v26[2]; // [rsp+20h] [rbp-D0h] BYREF
  int v27; // [rsp+30h] [rbp-C0h]
  int v28; // [rsp+38h] [rbp-B8h]
  int v29; // [rsp+3Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_UpdateParticleFwd *v30; // [rsp+68h] [rbp-88h]

  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( ElementByIndex != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v26);
    v28 = 2;
    v26[0] = off_416C710;
    v8 = v27;
    v29 = iIndex;
    LOBYTE(v8) = v27 | 0x83;
    v27 = v8;
    v9 = v30;
    if ( v30 == 0 )
    {
      v20 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleFwd::CDOTAUserMsg_ParticleManager_UpdateParticleFwd(v20);
      v30 = v20;
      v9 = v20;
    }
    *(v9 + 4) |= 1u;
    *(v9 + 8) = iPoint;
    v10 = v30;
    v27 |= 0x80u;
    if ( v30 == 0 )
    {
      v10 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleFwd::CDOTAUserMsg_ParticleManager_UpdateParticleFwd(v10);
      v30 = v10;
    }
    v11 = *(v10 + 3);
    *(v10 + 4) |= 2u;
    if ( v11 == 0 )
    {
      v21 = operator new(0x28u);
      CMsgVector::CMsgVector(v21);
      *(v10 + 3) = v21;
      v11 = v21;
    }
    *(v11 + 4) |= 1u;
    *(v11 + 6) = LODWORD(a4);
    v12 = v30;
    v27 |= 0x80u;
    if ( v30 == 0 )
    {
      v12 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleFwd::CDOTAUserMsg_ParticleManager_UpdateParticleFwd(v12);
      v30 = v12;
    }
    v13 = *(v12 + 3);
    *(v12 + 4) |= 2u;
    if ( v13 == 0 )
    {
      v22 = operator new(0x28u);
      CMsgVector::CMsgVector(v22);
      *(v12 + 3) = v22;
      v13 = v22;
    }
    *(v13 + 4) |= 2u;
    *(v13 + 7) = HIDWORD(a4);
    v14 = v30;
    v27 |= 0x80u;
    if ( v30 == 0 )
    {
      v14 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleFwd::CDOTAUserMsg_ParticleManager_UpdateParticleFwd(v14);
      v30 = v14;
    }
    v15 = *(v14 + 3);
    *(v14 + 4) |= 2u;
    if ( v15 == 0 )
    {
      v23 = operator new(0x28u);
      CMsgVector::CMsgVector(v23);
      *(v14 + 3) = v23;
      v15 = v23;
    }
    *(v15 + 4) |= 4u;
    *(v15 + 8) = a5;
    v16 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    v17 = g_pGameEventSystem;
    v18 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
    v18(v17, 0, 0, &ElementByIndex->m_filter, v16, v26, 152);
    v26[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v26);
  }
  return 1;
}


// CDOTA_ParticleManager::SetParticleControlOrientation  (line 772, @0x000000000268b4c0, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_forward, mutable_right, mutable_up, mutable_update_particle_orient, set_control_point, set_has_control_point, set_has_forward, set_has_right, set_has_type, set_has_up, set_has_update_particle_orient, set_has_x, set_has_y, set_has_z, set_index, set_type, set_x, set_y, set_z, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator new, CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CScriptParticleManager::SetParticleControlOrientation, CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnCreated, CDOTA_Modifier_Tiny_CraggyExterior::OnAttackLanded, CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnIntervalThink, CDOTA_Unit_Brewmaster_PrimalEarth::OnDying, CDOTA_Unit_Brewmaster_PrimalFire::OnDying, CDOTA_Unit_Brewmaster_PrimalStorm::OnDying, CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnCreated, CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnIntervalThink, CDOTA_Modifier_Spectre_Desolate::OnAttack, CDOTA_Ability_Weaver_Shukuchi::OnSpellStart, CDOTA_Modifier_EmberSpirit_FireRemnantThinker::StartFX (19 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_ParticleManager::SetParticleControlOrientation(
        CDOTA_ParticleManager *const this,
        int iIndex,
        int iPoint,
        double a4,
        float a5,
        double a6,
        float a7,
        double a8,
        float a9)
{
  CDOTA_ParticleElement *ElementByIndex; // r13
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v12; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v13; // rbx
  CMsgVector *v14; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v15; // rbx
  CMsgVector *v16; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v17; // rbx
  CMsgVector *v18; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v19; // rbx
  CMsgVector *v20; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v21; // rbx
  CMsgVector *v22; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v23; // rbx
  CMsgVector *v24; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v25; // rbx
  CMsgVector *v26; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v27; // rbx
  CMsgVector *v28; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v29; // rbx
  CMsgVector *v30; // rax
  __int64 v31; // r14
  IGameEventSystem *v32; // rbx
  void (__fastcall *v33)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v35; // r14
  CMsgVector *v36; // r15
  CMsgVector *v37; // r15
  CMsgVector *v38; // r15
  CMsgVector *v39; // r15
  CMsgVector *v40; // r15
  CMsgVector *v41; // r15
  CMsgVector *v42; // r15
  CMsgVector *v43; // r15
  CMsgVector *v44; // r15
  _QWORD v51[2]; // [rsp+40h] [rbp-D0h] BYREF
  int v52; // [rsp+50h] [rbp-C0h]
  int v53; // [rsp+58h] [rbp-B8h]
  int v54; // [rsp+5Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_UpdateParticleOrient *v55; // [rsp+90h] [rbp-80h]

  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( ElementByIndex != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v51);
    v53 = 3;
    v51[0] = off_416C710;
    v54 = iIndex;
    v52 |= 0x103u;
    v12 = v55;
    if ( v55 == 0 )
    {
      v35 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v35);
      v55 = v35;
      v12 = v35;
    }
    *(v12 + 4) |= 1u;
    *(v12 + 12) = iPoint;
    v13 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v13 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v13);
      v55 = v13;
    }
    v14 = *(v13 + 3);
    *(v13 + 4) |= 2u;
    if ( v14 == 0 )
    {
      v36 = operator new(0x28u);
      CMsgVector::CMsgVector(v36);
      *(v13 + 3) = v36;
      v14 = v36;
    }
    *(v14 + 4) |= 1u;
    *(v14 + 6) = LODWORD(a4);
    v15 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v15 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v15);
      v55 = v15;
    }
    v16 = *(v15 + 3);
    *(v15 + 4) |= 2u;
    if ( v16 == 0 )
    {
      v37 = operator new(0x28u);
      CMsgVector::CMsgVector(v37);
      *(v15 + 3) = v37;
      v16 = v37;
    }
    *(v16 + 4) |= 2u;
    *(v16 + 7) = HIDWORD(a4);
    v17 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v17 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v17);
      v55 = v17;
    }
    v18 = *(v17 + 3);
    *(v17 + 4) |= 2u;
    if ( v18 == 0 )
    {
      v38 = operator new(0x28u);
      CMsgVector::CMsgVector(v38);
      *(v17 + 3) = v38;
      v18 = v38;
    }
    *(v18 + 4) |= 4u;
    *(v18 + 8) = a5;
    v19 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v19 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v19);
      v55 = v19;
    }
    v20 = *(v19 + 4);
    *(v19 + 4) |= 4u;
    if ( v20 == 0 )
    {
      v39 = operator new(0x28u);
      CMsgVector::CMsgVector(v39);
      *(v19 + 4) = v39;
      v20 = v39;
    }
    *(v20 + 4) |= 1u;
    *(v20 + 6) = LODWORD(a6);
    v21 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v21 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v21);
      v55 = v21;
    }
    v22 = *(v21 + 4);
    *(v21 + 4) |= 4u;
    if ( v22 == 0 )
    {
      v40 = operator new(0x28u);
      CMsgVector::CMsgVector(v40);
      *(v21 + 4) = v40;
      v22 = v40;
    }
    *(v22 + 4) |= 2u;
    *(v22 + 7) = HIDWORD(a6);
    v23 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v23 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v23);
      v55 = v23;
    }
    v24 = *(v23 + 4);
    *(v23 + 4) |= 4u;
    if ( v24 == 0 )
    {
      v41 = operator new(0x28u);
      CMsgVector::CMsgVector(v41);
      *(v23 + 4) = v41;
      v24 = v41;
    }
    *(v24 + 4) |= 4u;
    *(v24 + 8) = a7;
    v25 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v25 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v25);
      v55 = v25;
    }
    v26 = *(v25 + 5);
    *(v25 + 4) |= 8u;
    if ( v26 == 0 )
    {
      v42 = operator new(0x28u);
      CMsgVector::CMsgVector(v42);
      *(v25 + 5) = v42;
      v26 = v42;
    }
    *(v26 + 4) |= 1u;
    *(v26 + 6) = LODWORD(a8);
    v27 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v27 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v27);
      v55 = v27;
    }
    v28 = *(v27 + 5);
    *(v27 + 4) |= 8u;
    if ( v28 == 0 )
    {
      v43 = operator new(0x28u);
      CMsgVector::CMsgVector(v43);
      *(v27 + 5) = v43;
      v28 = v43;
    }
    *(v28 + 4) |= 2u;
    *(v28 + 7) = HIDWORD(a8);
    v29 = v55;
    v52 |= 0x100u;
    if ( v55 == 0 )
    {
      v29 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOrient::CDOTAUserMsg_ParticleManager_UpdateParticleOrient(v29);
      v55 = v29;
    }
    v30 = *(v29 + 5);
    *(v29 + 4) |= 8u;
    if ( v30 == 0 )
    {
      v44 = operator new(0x28u);
      CMsgVector::CMsgVector(v44);
      *(v29 + 5) = v44;
      v30 = v44;
    }
    *(v30 + 4) |= 4u;
    *(v30 + 8) = a9;
    v31 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    v32 = g_pGameEventSystem;
    v33 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
    v33(v32, 0, 0, &ElementByIndex->m_filter, v31, v51, 152);
    v51[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v51);
  }
  return 1;
}


// CDOTA_ParticleManager::SetParticleControlFallback  (line 808, @0x000000000268a730, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_position, mutable_update_particle_fallback, set_control_point, set_has_control_point, set_has_position, set_has_type, set_has_update_particle_fallback, set_has_x, set_has_y, set_has_z, set_index, set_type, set_x, set_y, set_z, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator new, CDOTAUserMsg_ParticleManager_UpdateParticleFallback::CDOTAUserMsg_ParticleManager_UpdateParticleFallback, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CDOTA_Modifier_CrystalMaiden_FreezingField::OnIntervalThink, CDOTA_Modifier_Razor_PlasmaField_Thinker::OnIntervalThink, CDOTA_Modifier_Batrider_Firefly::OnIntervalThink, CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_ParticleManager::SetParticleControlFallback(
        CDOTA_ParticleManager *const this,
        int iIndex,
        int iPoint,
        double a4,
        float a5)
{
  CDOTA_ParticleElement *ElementByIndex; // r13
  CDOTAUserMsg_ParticleManager_UpdateParticleFallback *v8; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleFallback *v9; // rbx
  CMsgVector *v10; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleFallback *v11; // rbx
  CMsgVector *v12; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleFallback *v13; // rbx
  CMsgVector *v14; // rax
  __int64 v15; // r14
  IGameEventSystem *v16; // rbx
  void (__fastcall *v17)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_UpdateParticleFallback *v19; // r14
  CMsgVector *v20; // r15
  CMsgVector *v21; // r15
  CMsgVector *v22; // r15
  _QWORD v25[2]; // [rsp+20h] [rbp-D0h] BYREF
  int v26; // [rsp+30h] [rbp-C0h]
  int v27; // [rsp+38h] [rbp-B8h]
  int v28; // [rsp+3Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_UpdateParticleFallback *v29; // [rsp+78h] [rbp-78h]

  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( ElementByIndex != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v25);
    v27 = 4;
    v25[0] = off_416C710;
    v28 = iIndex;
    v26 |= 0x203u;
    v8 = v29;
    if ( v29 == 0 )
    {
      v19 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleFallback::CDOTAUserMsg_ParticleManager_UpdateParticleFallback(v19);
      v29 = v19;
      v8 = v19;
    }
    *(v8 + 4) |= 1u;
    *(v8 + 8) = iPoint;
    v9 = v29;
    v26 |= 0x200u;
    if ( v29 == 0 )
    {
      v9 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleFallback::CDOTAUserMsg_ParticleManager_UpdateParticleFallback(v9);
      v29 = v9;
    }
    v10 = *(v9 + 3);
    *(v9 + 4) |= 2u;
    if ( v10 == 0 )
    {
      v20 = operator new(0x28u);
      CMsgVector::CMsgVector(v20);
      *(v9 + 3) = v20;
      v10 = v20;
    }
    *(v10 + 4) |= 1u;
    *(v10 + 6) = LODWORD(a4);
    v11 = v29;
    v26 |= 0x200u;
    if ( v29 == 0 )
    {
      v11 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleFallback::CDOTAUserMsg_ParticleManager_UpdateParticleFallback(v11);
      v29 = v11;
    }
    v12 = *(v11 + 3);
    *(v11 + 4) |= 2u;
    if ( v12 == 0 )
    {
      v21 = operator new(0x28u);
      CMsgVector::CMsgVector(v21);
      *(v11 + 3) = v21;
      v12 = v21;
    }
    *(v12 + 4) |= 2u;
    *(v12 + 7) = HIDWORD(a4);
    v13 = v29;
    v26 |= 0x200u;
    if ( v29 == 0 )
    {
      v13 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleFallback::CDOTAUserMsg_ParticleManager_UpdateParticleFallback(v13);
      v29 = v13;
    }
    v14 = *(v13 + 3);
    *(v13 + 4) |= 2u;
    if ( v14 == 0 )
    {
      v22 = operator new(0x28u);
      CMsgVector::CMsgVector(v22);
      *(v13 + 3) = v22;
      v14 = v22;
    }
    *(v14 + 4) |= 4u;
    *(v14 + 8) = a5;
    v15 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    v16 = g_pGameEventSystem;
    v17 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
    v17(v16, 0, 0, &ElementByIndex->m_filter, v15, v25, 152);
    v25[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v25);
  }
  return 0;
}


// CDOTA_ParticleManager::SetParticleControlOffset  (line 838, @0x000000000268a410, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_origin_offset, mutable_update_particle_offset, set_control_point, set_has_control_point, set_has_origin_offset, set_has_type, set_has_update_particle_offset, set_has_x, set_has_y, set_has_z, set_index, set_type, set_x, set_y, set_z, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator new, CDOTAUserMsg_ParticleManager_UpdateParticleOffset::CDOTAUserMsg_ParticleManager_UpdateParticleOffset, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CDOTA_Buff::SetOverheadEffectOffset, CDOTA_Modifier_Razor_EyeOfTheStorm::OnIntervalThink
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_ParticleManager::SetParticleControlOffset(
        CDOTA_ParticleManager *const this,
        int iIndex,
        int iPoint,
        double a4,
        float a5)
{
  CDOTA_ParticleElement *ElementByIndex; // r13
  CDOTAUserMsg_ParticleManager_UpdateParticleOffset *v8; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOffset *v9; // rbx
  CMsgVector *v10; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOffset *v11; // rbx
  CMsgVector *v12; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleOffset *v13; // rbx
  CMsgVector *v14; // rax
  __int64 v15; // r14
  IGameEventSystem *v16; // rbx
  void (__fastcall *v17)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_UpdateParticleOffset *v19; // r14
  CMsgVector *v20; // r15
  CMsgVector *v21; // r15
  CMsgVector *v22; // r15
  _QWORD v25[2]; // [rsp+20h] [rbp-D0h] BYREF
  int v26; // [rsp+30h] [rbp-C0h]
  int v27; // [rsp+38h] [rbp-B8h]
  int v28; // [rsp+3Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_UpdateParticleOffset *v29; // [rsp+80h] [rbp-70h]

  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( ElementByIndex != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v25);
    v27 = 6;
    v25[0] = off_416C710;
    v28 = iIndex;
    v26 |= 0x403u;
    v8 = v29;
    if ( v29 == 0 )
    {
      v19 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOffset::CDOTAUserMsg_ParticleManager_UpdateParticleOffset(v19);
      v29 = v19;
      v8 = v19;
    }
    *(v8 + 4) |= 1u;
    *(v8 + 8) = iPoint;
    v9 = v29;
    v26 |= 0x400u;
    if ( v29 == 0 )
    {
      v9 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOffset::CDOTAUserMsg_ParticleManager_UpdateParticleOffset(v9);
      v29 = v9;
    }
    v10 = *(v9 + 3);
    *(v9 + 4) |= 2u;
    if ( v10 == 0 )
    {
      v20 = operator new(0x28u);
      CMsgVector::CMsgVector(v20);
      *(v9 + 3) = v20;
      v10 = v20;
    }
    *(v10 + 4) |= 1u;
    *(v10 + 6) = LODWORD(a4);
    v11 = v29;
    v26 |= 0x400u;
    if ( v29 == 0 )
    {
      v11 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOffset::CDOTAUserMsg_ParticleManager_UpdateParticleOffset(v11);
      v29 = v11;
    }
    v12 = *(v11 + 3);
    *(v11 + 4) |= 2u;
    if ( v12 == 0 )
    {
      v21 = operator new(0x28u);
      CMsgVector::CMsgVector(v21);
      *(v11 + 3) = v21;
      v12 = v21;
    }
    *(v12 + 4) |= 2u;
    *(v12 + 7) = HIDWORD(a4);
    v13 = v29;
    v26 |= 0x400u;
    if ( v29 == 0 )
    {
      v13 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_UpdateParticleOffset::CDOTAUserMsg_ParticleManager_UpdateParticleOffset(v13);
      v29 = v13;
    }
    v14 = *(v13 + 3);
    *(v13 + 4) |= 2u;
    if ( v14 == 0 )
    {
      v22 = operator new(0x28u);
      CMsgVector::CMsgVector(v22);
      *(v13 + 3) = v22;
      v14 = v22;
    }
    *(v14 + 4) |= 4u;
    *(v14 + 8) = a5;
    v15 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    v16 = g_pGameEventSystem;
    v17 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
    v17(v16, 0, 0, &ElementByIndex->m_filter, v15, v25, 152);
    v25[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v25);
  }
  return 1;
}


// CDOTA_ParticleManager::SetParticleAlwaysInstantiate  (line 865, @0x0000000002658f00, libserver.so)
bool __fastcall CDOTA_ParticleManager::SetParticleAlwaysInstantiate(CDOTA_ParticleManager *const this, int iIndex)
{
  return 1;
}


// CDOTA_ParticleManager::SetParticleAlwaysSimulate  (line 881, @0x0000000002658f10, libserver.so)
// callers: CScriptParticleManager::SetParticleAlwaysSimulate, CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_Ability_Pudge_MeatHook::OnSpellStart, CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnIntervalThink, CDOTA_Ability_Sniper_Shrapnel::OnSpellStart
bool __fastcall CDOTA_ParticleManager::SetParticleAlwaysSimulate(CDOTA_ParticleManager *const this, int iIndex)
{
  return 1;
}


// CDOTA_ParticleManager::FindPortraitParticleIndex  (line 896, @0x0000000002658f20, libserver.so)
int __fastcall CDOTA_ParticleManager::FindPortraitParticleIndex(
        CDOTA_ParticleManager *const this,
        int iOriginalIndex,
        int iPortrait)
{
  int m_Size; // ecx
  int result; // eax
  CDOTA_ParticleManager::PortraitParticleMapEntry_t *m_pMemory; // rax
  __int64 v6; // rcx

  m_Size = this->m_PortraitIndexMap.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_PortraitIndexMap.m_Memory.m_pMemory;
    v6 = &m_pMemory[(m_Size - 1) + 1];
    do
    {
      if ( m_pMemory->nOriginalParticleIndex == iOriginalIndex && m_pMemory->nPortrait == iPortrait )
        return m_pMemory->nPortraitParticleIndex;
      ++m_pMemory;
    }
    while ( m_pMemory != v6 );
    return -1;
  }
  return result;
}


// CDOTA_ParticleManager::SetParticleFoWProperties  (line 925, @0x0000000002689ef0, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_set_particle_fow_properties, set_fow_control_point, set_fow_control_point2, set_fow_radius, set_has_fow_control_point, set_has_fow_control_point2, set_has_fow_radius, set_has_set_particle_fow_properties, set_has_type, set_index, set_type, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator new, CDOTAUserMsg_ParticleManager_SetParticleFoWProperties::CDOTAUserMsg_ParticleManager_SetParticleFoWProperties, operator delete, _Unwind_Resume
// callers: DoEventPostTPEffect, CDOTA_Modifier_SandKing_Epicenter::OnIntervalThink, CDOTA_Modifier_Razor_PlasmaField_Thinker::OnCreated, CDOTA_Modifier_CrystalMaiden_FreezingField::OnCreated, CDOTA_Ability_SandKing_BurrowStrike::OnSpellStart, CDOTA_Modifier_SandKing_SandStorm::OnRefresh, CDOTA_Modifier_SandKing_SandStorm::OnCreated, CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnCreated, CDOTA_Modifier_Razor_PlasmaField_Thinker::OnIntervalThink, CDOTA_Ability_Earthshaker_Fissure::OnSpellStart, CDOTA_Ability_Tidehunter_Ravage::OnSpellStart, CDOTA_Modifier_Enigma_MidnightPulseThinker::OnCreated (39 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
void __fastcall CDOTA_ParticleManager::SetParticleFoWProperties(
        CDOTA_ParticleManager *const this,
        int iIndex,
        int iFoWCP0,
        int iFoWCP1,
        float flFoWRadius)
{
  CDOTA_ParticleElement *ElementByIndex; // r12
  CDOTAUserMsg_ParticleManager_SetParticleFoWProperties *v9; // r13
  CDOTAUserMsg_ParticleManager_SetParticleFoWProperties *v10; // rax
  CDOTAUserMsg_ParticleManager_SetParticleFoWProperties *v11; // rax
  __int64 v12; // r14
  IGameEventSystem *v13; // r13
  void (__fastcall *v14)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_SetParticleFoWProperties *v15; // r13
  CDOTAUserMsg_ParticleManager_SetParticleFoWProperties *v16; // r13
  _QWORD v18[2]; // [rsp+10h] [rbp-D0h] BYREF
  int v19; // [rsp+20h] [rbp-C0h]
  int v20; // [rsp+28h] [rbp-B8h]
  int iIndexa; // [rsp+2Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_SetParticleFoWProperties *v22; // [rsp+A0h] [rbp-40h]

  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( ElementByIndex != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v18);
    iIndexa = iIndex;
    v18[0] = off_416C710;
    v9 = v22;
    v20 = 15;
    v19 |= 0x10003u;
    if ( v22 == 0 )
    {
      v9 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_SetParticleFoWProperties::CDOTAUserMsg_ParticleManager_SetParticleFoWProperties(v9);
      v22 = v9;
    }
    *(v9 + 4) |= 1u;
    *(v9 + 6) = iFoWCP0;
    v10 = v22;
    v19 |= 0x10000u;
    if ( v22 == 0 )
    {
      v15 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_SetParticleFoWProperties::CDOTAUserMsg_ParticleManager_SetParticleFoWProperties(v15);
      v22 = v15;
      v10 = v15;
    }
    *(v10 + 4) |= 2u;
    *(v10 + 7) = iFoWCP1;
    v11 = v22;
    v19 |= 0x10000u;
    if ( v22 == 0 )
    {
      v16 = operator new(0x28u);
      CDOTAUserMsg_ParticleManager_SetParticleFoWProperties::CDOTAUserMsg_ParticleManager_SetParticleFoWProperties(v16);
      v22 = v16;
      v11 = v16;
    }
    *(v11 + 4) |= 4u;
    *(v11 + 8) = flFoWRadius;
    v12 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    v13 = g_pGameEventSystem;
    v14 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
    v14(v13, 0, 0, &ElementByIndex->m_filter, v12, v18, 152);
    v18[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v18);
  }
}


// CDOTA_ParticleManager::SetParticleControlEnt  (line 958, @0x000000000268bb70, libserver.so)  // inlines: AddToTail, CDOTAUserMsg_ParticleManager_t, CEntityHandle, CHandle, CNetMessagePB, CUserMessagePB, CopyConstruct<CHandle<CBaseEntity> >, Element, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, Set, String, mutable_fallback_position, mutable_update_particle_ent, operator!=, operator[], set_attach_type, set_attachment, set_control_point, set_entity_handle, set_has_attach_type, set_has_attachment, set_has_control_point, set_has_entity_handle, set_has_fallback_position, set_has_include_wearables, set_has_type, set_has_update_particle_ent, set_has_x, set_has_y, set_has_z, set_include_wearables, set_index, set_type, set_x, set_y, set_z, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, Server_EHandleToInt, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, CBaseAnimating::LookupAttachment, CBaseEntity::GetModelName, Warning, CBaseEntity::GetAbsOrigin, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, operator new, CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt, CMsgVector::CMsgVector (14 total)
// callers: CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints, CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Ability_Slithereen_Riptide::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::OnSpellStart, CDOTA_Modifier_Illusion::OnDestroy, CDOTA_Ability_AncientGolem_Rockslide::OnSpellStart, CDOTA_Ability_SatyrHellcaller_Shockwave::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_White_Purification::OnSpellStart, CDOTA_Ability_BlackDragon_Fireball::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Purple_VenomousGale::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Purple_PlagueWard::OnSpellStart, CDOTA_Ability_PolarFurbolgUrsaWarrior_ThunderClap::OnSpellStart (514 total)
// strings: "CDOTA_ParticleManager::SetParticleControlEnt: Unable to lookup attachment %s on model %s\
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_ParticleManager::SetParticleControlEnt(
        CDOTA_ParticleManager *const this,
        int iIndex,
        int iPoint,
        const CBaseAnimating *pEnt,
        int iAttachType,
        const char *pAttachmentName,
        const Vector vecFallbackPosition,
        bool bIncludeWearables)
{
  CDOTA_ParticleElement *ElementByIndex; // rbx
  bool v12; // cl
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v13; // r14
  CEntityIdentity *v14; // rdx
  __int16 v15; // cx
  uint32 v16; // eax
  uint32 v17; // r14d
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v18; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v19; // r14
  int v20; // r14d
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v21; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v22; // r12
  CMsgVector *v23; // r14
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v24; // r12
  CMsgVector *v25; // r14
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v26; // r12
  CMsgVector *v27; // r14
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v28; // rax
  __int64 v29; // r14
  IGameEventSystem *v30; // r12
  void (__fastcall *v31)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v34; // si
  __int64 m_Size; // rax
  int v36; // edx
  CHandle<CBaseEntity> *v37; // rax
  AttachmentHandle_t v38; // al
  const char *v39; // rdx
  const Vector *AbsOrigin; // rax
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v41; // r12
  vec_t v42; // xmm7_4
  vec_t v43; // r15d
  CMsgVector *v44; // r14
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v45; // r12
  CMsgVector *v46; // r14
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v47; // r12
  CMsgVector *v48; // r14
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v49; // r12
  bool v50; // [rsp+Ch] [rbp-114h]
  int v51; // [rsp+Ch] [rbp-114h]
  float y; // [rsp+10h] [rbp-110h]
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *iPointb; // [rsp+18h] [rbp-108h]
  AttachmentHandle_t iAttachment; // [rsp+20h] [rbp-100h]
  vec_t iAttachmenta; // [rsp+20h] [rbp-100h]
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *iAttachmentb; // [rsp+20h] [rbp-100h]
  float z; // [rsp+2Ch] [rbp-F4h]
  vec_t v60; // [rsp+2Ch] [rbp-F4h]
  float x; // [rsp+30h] [rbp-F0h]
  EHANDLE hIn; // [rsp+40h] [rbp-E0h] BYREF
  _QWORD v63[2]; // [rsp+50h] [rbp-D0h] BYREF
  int v64; // [rsp+60h] [rbp-C0h]
  int v65; // [rsp+68h] [rbp-B8h]
  int iIndexa; // [rsp+6Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_UpdateParticleEnt *v67; // [rsp+B8h] [rbp-68h]

  x = vecFallbackPosition.x;
  z = vecFallbackPosition.z;
  y = vecFallbackPosition.y;
  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  v12 = ElementByIndex != 0;
  if ( ElementByIndex != 0 )
  {
    if ( pEnt == 0 )
    {
LABEL_3:
      iAttachment = 0;
      goto LABEL_4;
    }
    LODWORD(v63[0]) = -1;
    m_pEntity = pEnt->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v34 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(v63[0]) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v34 & 0x7FFF;
    }
    m_Size = ElementByIndex->m_vecAttachedEntities.m_Size;
    v36 = ElementByIndex->m_vecAttachedEntities.m_Size;
    if ( m_Size == ElementByIndex->m_vecAttachedEntities.m_Memory.m_nAllocationCount )
    {
      v51 = ElementByIndex->m_vecAttachedEntities.m_Size;
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&ElementByIndex->m_vecAttachedEntities.m_Memory, 1);
      v36 = ElementByIndex->m_vecAttachedEntities.m_Size;
      m_Size = v51;
      v12 = ElementByIndex != 0;
    }
    ElementByIndex->m_vecAttachedEntities.m_Size = v36 + 1;
    v37 = &ElementByIndex->m_vecAttachedEntities.m_Memory.m_pMemory[m_Size];
    if ( v37 != 0 )
      v37->m_Index = v63[0];
  }
  if ( pEnt == 0 || pAttachmentName == 0 )
    goto LABEL_3;
  v50 = v12;
  v38 = CBaseAnimating::LookupAttachment(pEnt, pAttachmentName);
  v12 = v50;
  iAttachment = v38;
  if ( v38 == 0 )
  {
    CBaseEntity::GetModelName(v63, pEnt);
    v39 = "";
    if ( v63[0] != 0 )
      v39 = v63[0];
    Warning(
      "CDOTA_ParticleManager::SetParticleControlEnt: Unable to lookup attachment %s on model %s\n",
      pAttachmentName,
      v39);
    v12 = v50;
  }
LABEL_4:
  if ( v12 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v63);
    iIndexa = iIndex;
    v63[0] = off_416C710;
    v13 = v67;
    v65 = 5;
    v64 |= 0x803u;
    if ( v67 == 0 )
    {
      v13 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v13);
      v67 = v13;
    }
    hIn.m_Index = -1;
    *(v13 + 4) |= 1u;
    *(v13 + 6) = iPoint;
    if ( pEnt != 0 )
    {
      v14 = pEnt->m_pEntity;
      if ( v14 != 0 )
      {
        v15 = 0x7FFF;
        if ( v14->m_EHandle.m_Index != -1 )
          v15 = v14->m_EHandle.m_Index & 0x7FFF;
        hIn.m_Index = (((v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1)) << 15) | v15 & 0x7FFF;
      }
    }
    v16 = Server_EHandleToInt(&hIn);
    v64 |= 0x800u;
    v17 = v16;
    v18 = v67;
    if ( v67 == 0 )
    {
      iPointb = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(iPointb);
      v18 = iPointb;
      v67 = iPointb;
    }
    *(v18 + 4) |= 2u;
    *(v18 + 7) = v17;
    v19 = v67;
    v64 |= 0x800u;
    if ( v67 == 0 )
    {
      v19 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v19);
      v67 = v19;
    }
    *(v19 + 4) |= 4u;
    *(v19 + 8) = iAttachType;
    v20 = iAttachment;
    v21 = v67;
    v64 |= 0x800u;
    if ( v67 == 0 )
    {
      iAttachmentb = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(iAttachmentb);
      v21 = iAttachmentb;
      v67 = iAttachmentb;
    }
    *(v21 + 4) |= 8u;
    *(v21 + 9) = v20;
    if ( x == vec3_invalid.x && y == vec3_invalid.y && z == vec3_invalid.z )
    {
      if ( pEnt != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(pEnt);
        v41 = v67;
        v42 = AbsOrigin->z;
        v43 = AbsOrigin->x;
        v60 = AbsOrigin->y;
        v64 |= 0x800u;
        iAttachmenta = v42;
        if ( v67 == 0 )
        {
          v41 = operator new(0x38u);
          CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v41);
          v67 = v41;
        }
        v44 = *(v41 + 5);
        *(v41 + 4) |= 0x10u;
        if ( v44 == 0 )
        {
          v44 = operator new(0x28u);
          CMsgVector::CMsgVector(v44);
          *(v41 + 5) = v44;
        }
        *(v44 + 4) |= 1u;
        *(v44 + 6) = v43;
        v45 = v67;
        v64 |= 0x800u;
        if ( v67 == 0 )
        {
          v45 = operator new(0x38u);
          CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v45);
          v67 = v45;
        }
        v46 = *(v45 + 5);
        *(v45 + 4) |= 0x10u;
        if ( v46 == 0 )
        {
          v46 = operator new(0x28u);
          CMsgVector::CMsgVector(v46);
          *(v45 + 5) = v46;
        }
        *(v46 + 4) |= 2u;
        *(v46 + 7) = v60;
        v47 = v67;
        v64 |= 0x800u;
        if ( v67 == 0 )
        {
          v47 = operator new(0x38u);
          CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v47);
          v67 = v47;
        }
        v48 = *(v47 + 5);
        *(v47 + 4) |= 0x10u;
        if ( v48 == 0 )
        {
          v48 = operator new(0x28u);
          CMsgVector::CMsgVector(v48);
          *(v47 + 5) = v48;
        }
        *(v48 + 4) |= 4u;
        *(v48 + 8) = iAttachmenta;
      }
    }
    else
    {
      v22 = v67;
      v64 |= 0x800u;
      if ( v67 == 0 )
      {
        v22 = operator new(0x38u);
        CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v22);
        v67 = v22;
      }
      v23 = *(v22 + 5);
      *(v22 + 4) |= 0x10u;
      if ( v23 == 0 )
      {
        v23 = operator new(0x28u);
        CMsgVector::CMsgVector(v23);
        *(v22 + 5) = v23;
      }
      *(v23 + 4) |= 1u;
      *(v23 + 6) = x;
      v24 = v67;
      v64 |= 0x800u;
      if ( v67 == 0 )
      {
        v24 = operator new(0x38u);
        CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v24);
        v67 = v24;
      }
      v25 = *(v24 + 5);
      *(v24 + 4) |= 0x10u;
      if ( v25 == 0 )
      {
        v25 = operator new(0x28u);
        CMsgVector::CMsgVector(v25);
        *(v24 + 5) = v25;
      }
      *(v25 + 4) |= 2u;
      *(v25 + 7) = y;
      v26 = v67;
      v64 |= 0x800u;
      if ( v67 == 0 )
      {
        v26 = operator new(0x38u);
        CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v26);
        v67 = v26;
      }
      v27 = *(v26 + 5);
      *(v26 + 4) |= 0x10u;
      if ( v27 == 0 )
      {
        v27 = operator new(0x28u);
        CMsgVector::CMsgVector(v27);
        *(v26 + 5) = v27;
      }
      *(v27 + 4) |= 4u;
      *(v27 + 8) = z;
    }
    v28 = v67;
    v64 |= 0x800u;
    if ( v67 == 0 )
    {
      v49 = operator new(0x38u);
      CDOTAUserMsg_ParticleManager_UpdateParticleEnt::CDOTAUserMsg_ParticleManager_UpdateParticleEnt(v49);
      v67 = v49;
      v28 = v49;
    }
    *(v28 + 4) |= 0x20u;
    v29 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    *(v28 + 48) = bIncludeWearables;
    v30 = g_pGameEventSystem;
    v31 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v29);
    v31(v30, 0, 0, &ElementByIndex->m_filter, v29, v63, 152);
    v63[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v63);
  }
  return 1;
}


// CDOTA_ParticleManager::SetFrozen  (line 1074, @0x0000000002689c50, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_update_particle_set_frozen, set_has_set_frozen, set_has_type, set_has_update_particle_set_frozen, set_index, set_set_frozen, set_type, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator new, CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen::CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen, operator delete, _Unwind_Resume
// callers: CDOTA_Modifier_Wisp_Tentacles::OnIntervalThink
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
bool __fastcall CDOTA_ParticleManager::SetFrozen(CDOTA_ParticleManager *const this, int iIndex, bool bFrozen)
{
  CDOTA_ParticleElement *ElementByIndex; // r12
  CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen *v6; // rsi
  __int64 v7; // r14
  IGameEventSystem *v8; // r13
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen *v11; // r14
  _QWORD v12[2]; // [rsp+10h] [rbp-D0h] BYREF
  int v13; // [rsp+20h] [rbp-C0h]
  int v14; // [rsp+28h] [rbp-B8h]
  int v15; // [rsp+2Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen *v16; // [rsp+88h] [rbp-58h]

  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( ElementByIndex != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v12);
    v6 = v16;
    v12[0] = off_416C710;
    v14 = 12;
    v15 = iIndex;
    v13 |= 0x2003u;
    if ( v16 == 0 )
    {
      v11 = operator new(0x20u);
      CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen::CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen(v11);
      v16 = v11;
      v6 = v11;
    }
    *(v6 + 24) = bFrozen;
    *(v6 + 4) |= 1u;
    v7 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    v8 = g_pGameEventSystem;
    v9 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
    v9(v8, 0, 0, &ElementByIndex->m_filter, v7, v12, 152);
    v12[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v12);
  }
  return 1;
}


// CDOTA_ParticleManager::SetShouldDraw  (line 1097, @0x0000000002689da0, libserver.so)  // inlines: CDOTAUserMsg_ParticleManager_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ParticleManager_t>, FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>, PostEvent<CDOTAUserMsg_ParticleManager_t>, SendUserMessage<CDOTAUserMsg_ParticleManager_t>, mutable_update_particle_should_draw, set_has_should_draw, set_has_type, set_has_update_particle_should_draw, set_index, set_should_draw, set_type, ~CDOTAUserMsg_ParticleManager_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_ParticleManager::FindElementByIndex, CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager, CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator new, CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw::CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw, operator delete, _Unwind_Resume
// callers: CDOTA_Buff::SetHideParticles, CDOTA_Modifier_Nevermore_Necromastery::OnDeath, CDOTA_Modifier_Nevermore_Necromastery::OnRefresh, CDOTA_Unit_Hero_Wisp::UpdateOnModelChange
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent
bool __fastcall CDOTA_ParticleManager::SetShouldDraw(CDOTA_ParticleManager *const this, int iIndex, bool bShouldDraw)
{
  CDOTA_ParticleElement *ElementByIndex; // r12
  CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw *v6; // rsi
  __int64 v7; // r14
  IGameEventSystem *v8; // r13
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw *v11; // r14
  _QWORD v12[2]; // [rsp+10h] [rbp-D0h] BYREF
  int v13; // [rsp+20h] [rbp-C0h]
  int v14; // [rsp+28h] [rbp-B8h]
  int v15; // [rsp+2Ch] [rbp-B4h]
  CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw *v16; // [rsp+80h] [rbp-60h]

  ElementByIndex = CDOTA_ParticleManager::FindElementByIndex(this, iIndex);
  if ( ElementByIndex != 0 )
  {
    CDOTAUserMsg_ParticleManager::CDOTAUserMsg_ParticleManager(v12);
    v6 = v16;
    v12[0] = off_416C710;
    v14 = 11;
    v15 = iIndex;
    v13 |= 0x1003u;
    if ( v16 == 0 )
    {
      v11 = operator new(0x20u);
      CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw::CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw(v11);
      v16 = v11;
      v6 = v11;
    }
    *(v6 + 24) = bShouldDraw;
    *(v6 + 4) |= 1u;
    v7 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent;
    v8 = g_pGameEventSystem;
    v9 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ParticleManager_t>(bool)::s_hEvent);
    v9(v8, 0, 0, &ElementByIndex->m_filter, v7, v12, 152);
    v12[0] = &off_416C590;
    CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(v12);
  }
  return 1;
}


// CDOTA_ParticleManager::RemoveAllParticles  (line 1149, @0x0000000002699b40, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, PurgeAndDeleteElements, Purge_FixedGrowable, RemoveAll, ~CDOTA_ParticleElement, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: operator delete, CRecipientFilter::~CRecipientFilter, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_ParticleElement*, int>::Purge
void __fastcall CDOTA_ParticleManager::RemoveAllParticles(CDOTA_ParticleManager *const this)
{
  __int64 v2; // r13
  int i; // r12d
  uint32 m_nGrowSize; // edx
  CHandle<CBaseEntity> *m_pMemory; // rsi
  unsigned int v6; // eax
  CDOTA_ParticleElement *v7; // rbx
  int m_nAllocationCount; // r15d
  bool v9; // zf

  v2 = 0;
  for ( i = 0; i < this->m_pParticles.m_Size; ++v2 )
  {
    v7 = this->m_pParticles.m_Memory.m_pMemory[v2];
    if ( v7 == 0 )
      goto LABEL_9;
    CRecipientFilter::~CRecipientFilter(&v7->m_filter);
    m_nAllocationCount = v7->m_vecAttachedEntities.m_Memory.m_nAllocationCount;
    v7->m_vecAttachedEntities.m_Size = 0;
    if ( m_nAllocationCount >= 0 )
    {
      m_nGrowSize = v7->m_vecAttachedEntities.m_Memory.m_nGrowSize;
      m_pMemory = v7->m_vecAttachedEntities.m_Memory.m_pMemory;
      v6 = m_nGrowSize & 0xC0000000;
      if ( &v7->m_vecAttachedEntities.m_Memory.m_FixedMemory != m_pMemory )
      {
        if ( m_pMemory != 0 && v6 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = v7->m_vecAttachedEntities.m_Memory.m_nGrowSize;
        }
        v7->m_vecAttachedEntities.m_Memory.m_pMemory = &v7->m_vecAttachedEntities.m_Memory.m_FixedMemory;
        v7->m_vecAttachedEntities.m_Memory.m_nAllocationCount = 4;
        v7->m_vecAttachedEntities.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
        goto LABEL_8;
      }
    }
    else
    {
      v6 = v7->m_vecAttachedEntities.m_Memory.m_nGrowSize & 0xC0000000;
    }
    if ( v6 == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v7->m_vecAttachedEntities.m_Memory);
LABEL_8:
    operator delete(v7);
LABEL_9:
    ++i;
  }
  v9 = (this->m_pParticles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pParticles.m_Size = 0;
  if ( v9 )
    CUtlMemory<CDOTA_ParticleElement *,int>::Purge(&this->m_pParticles.m_Memory);
}


// CDOTA_ParticleManager::RemoveServerParticles  (line 1157, @0x0000000002673140, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<CDOTA_ParticleElement*, CUtlMemory<CDOTA_ParticleElement*, int> >::Remove
void __fastcall CDOTA_ParticleManager::RemoveServerParticles(CDOTA_ParticleManager *const this)
{
  int i; // ebx

  for ( i = 0;
        this->m_pParticles.m_Size > i;
        CUtlVectorBase<CDOTA_ParticleElement *,CUtlMemory<CDOTA_ParticleElement *,int>>::Remove(&this->m_pParticles, i) )
  {
    while ( this->m_pParticles.m_Memory.m_pMemory[i]->m_iIndex > 0xFFFF )
    {
      if ( this->m_pParticles.m_Size <= ++i )
        return;
    }
  }
}


// CDOTA_ParticleManager::FindEmptyParticleIndex  (line 1172, @0x0000000002658f70, libserver.so)
int __fastcall CDOTA_ParticleManager::FindEmptyParticleIndex(CDOTA_ParticleManager *const this)
{
  int result; // eax

  result = this->m_iRunningParticleCount;
  this->m_iRunningParticleCount = result + 1;
  return result;
}


// CDOTA_ParticleManager::OnStringTableParticleAssetsChanged  (line 1978, @0x0000000002658f80, libserver.so)  // inlines: FindExistingResourceByNameLoadingJustInTime
void __fastcall CDOTA_ParticleManager::OnStringTableParticleAssetsChanged(
        void *object,
        INetworkStringTable *stringTable,
        int stringNumber,
        const char *newString,
        const void *newData)
{
  IResourceSystem *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax

  v6 = g_pResourceSystem;
  v7 = (*(*g_pResourceSystem + 448LL))(g_pResourceSystem, newString, stringNumber, newString, newData) == 0;
  v8 = *v6;
  if ( v7 )
    (*(v8 + 392))(v6, newString, 1717792886, 0);
  else
    (*(v8 + 256))(v6, newString, 1717792886, 0);
}


