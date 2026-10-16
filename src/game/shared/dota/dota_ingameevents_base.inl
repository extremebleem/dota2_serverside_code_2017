
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_PlayerChallengeInfo::operator=  (line 23, @0x00000000025dcbf0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=
// callers: CSchemaUtlVectorManipulator<CUtlVector<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >, CDOTA_PlayerChallengeInfo>::SwapItems, CSchemaClassBinding<CDOTA_PlayerChallengeInfo>::AllocateAndCopyConstruct, CSchemaClassBinding<CDOTA_PlayerChallengeInfo>::Copy, CAtomicManipulator<CUtlVector<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> > >::AllocateAndCopy, CAtomicManipulator<CUtlVector<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> > >::Copy
CDOTA_PlayerChallengeInfo *__fastcall CDOTA_PlayerChallengeInfo::operator=(
        CDOTA_PlayerChallengeInfo *const this,
        __int64 a2)
{
  CEntityInstance *v4; // rax
  int16 v5; // cx
  int v6; // eax
  CEntityInstance *m_pObj; // rdi
  int v8; // eax
  CEntityInstance *v9; // rdi
  int v10; // eax
  CEntityInstance *v11; // rdi
  int v12; // eax
  CEntityInstance *v13; // rdi
  int v14; // eax
  CEntityInstance *v15; // rdi
  int v16; // eax
  CEntityInstance *v17; // rdi
  int v18; // eax
  CEntityInstance *v19; // rdi
  int v20; // eax
  CEntityInstance *v21; // rdi
  int v22; // eax
  CEntityInstance *v23; // rdi
  int v24; // eax
  CEntityInstance *v25; // rdi
  int v26; // eax
  CEntityInstance *v27; // rdi
  int v28; // eax
  CEntityInstance *v29; // rdi
  int v30; // eax
  CEntityInstance *v31; // rdi
  int v32; // eax
  CEntityInstance *v33; // rdi
  int v34; // eax
  CEntityInstance *v35; // rdi

  v4 = *(a2 + 8);
  if ( v4 != this->__m_pChainEntity.m_pObj )
    this->__m_pChainEntity.m_pObj = v4;
  v5 = *(a2 + 16);
  this->__m_PathIndex.m_Value = v5;
  v6 = *(a2 + 20);
  if ( this->nType.m_Value != v6 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v5 != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 20, 0xFFFFFFFFLL);
      v6 = *(a2 + 20);
    }
    this->nType.m_Value = v6;
  }
  v8 = *(a2 + 24);
  if ( this->nQuestID.m_Value != v8 )
  {
    v9 = this->__m_pChainEntity.m_pObj;
    if ( v9 != 0 && (v9->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v9->_vptr_IHandleEntity + 22))(v9, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v8 = *(a2 + 24);
    }
    this->nQuestID.m_Value = v8;
  }
  v10 = *(a2 + 28);
  if ( this->nQuestChallengeID.m_Value != v10 )
  {
    v11 = this->__m_pChainEntity.m_pObj;
    if ( v11 != 0 && (v11->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v11->_vptr_IHandleEntity + 22))(v11, 28, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v10 = *(a2 + 28);
    }
    this->nQuestChallengeID.m_Value = v10;
  }
  v12 = *(a2 + 32);
  if ( this->nTier.m_Value != v12 )
  {
    v13 = this->__m_pChainEntity.m_pObj;
    if ( v13 != 0 && (v13->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v13->_vptr_IHandleEntity + 22))(v13, 32, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v12 = *(a2 + 32);
    }
    this->nTier.m_Value = v12;
  }
  v14 = *(a2 + 36);
  if ( this->nParam0.m_Value != v14 )
  {
    v15 = this->__m_pChainEntity.m_pObj;
    if ( v15 != 0 && (v15->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v15->_vptr_IHandleEntity + 22))(v15, 36, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v14 = *(a2 + 36);
    }
    this->nParam0.m_Value = v14;
  }
  v16 = *(a2 + 40);
  if ( this->nParam1.m_Value != v16 )
  {
    v17 = this->__m_pChainEntity.m_pObj;
    if ( v17 != 0 && (v17->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 40, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v16 = *(a2 + 40);
    }
    this->nParam1.m_Value = v16;
  }
  v18 = *(a2 + 44);
  if ( this->nSlotID.m_Value != v18 )
  {
    v19 = this->__m_pChainEntity.m_pObj;
    if ( v19 != 0 && (v19->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v19->_vptr_IHandleEntity + 22))(v19, 44, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v18 = *(a2 + 44);
    }
    this->nSlotID.m_Value = v18;
  }
  v20 = *(a2 + 48);
  if ( this->nProgress.m_Value != v20 )
  {
    v21 = this->__m_pChainEntity.m_pObj;
    if ( v21 != 0 && (v21->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v21->_vptr_IHandleEntity + 22))(v21, 48, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v20 = *(a2 + 48);
    }
    this->nProgress.m_Value = v20;
  }
  v22 = *(a2 + 52);
  if ( this->nCompletionThreshold.m_Value != v22 )
  {
    v23 = this->__m_pChainEntity.m_pObj;
    if ( v23 != 0 && (v23->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v23->_vptr_IHandleEntity + 22))(v23, 52, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v22 = *(a2 + 52);
    }
    this->nCompletionThreshold.m_Value = v22;
  }
  v24 = *(a2 + 56);
  if ( this->nPlayerID.m_Value != v24 )
  {
    v25 = this->__m_pChainEntity.m_pObj;
    if ( v25 != 0 && (v25->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v25->_vptr_IHandleEntity + 22))(v25, 56, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v24 = *(a2 + 56);
    }
    this->nPlayerID.m_Value = v24;
  }
  v26 = *(a2 + 60);
  if ( this->nQueryIndex.m_Value != v26 )
  {
    v27 = this->__m_pChainEntity.m_pObj;
    if ( v27 != 0 && (v27->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v27->_vptr_IHandleEntity + 22))(v27, 60, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v26 = *(a2 + 60);
    }
    this->nQueryIndex.m_Value = v26;
  }
  v28 = *(a2 + 64);
  if ( this->nEventID.m_Value != v28 )
  {
    v29 = this->__m_pChainEntity.m_pObj;
    if ( v29 != 0 && (v29->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v29->_vptr_IHandleEntity + 22))(v29, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v28 = *(a2 + 64);
    }
    this->nEventID.m_Value = v28;
  }
  v30 = *(a2 + 68);
  if ( this->nSequenceID.m_Value != v30 )
  {
    v31 = this->__m_pChainEntity.m_pObj;
    if ( v31 != 0 && (v31->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v31->_vptr_IHandleEntity + 22))(v31, 68, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v30 = *(a2 + 68);
    }
    this->nSequenceID.m_Value = v30;
  }
  v32 = *(a2 + 72);
  if ( this->nCompleted.m_Value != v32 )
  {
    v33 = this->__m_pChainEntity.m_pObj;
    if ( v33 != 0 && (v33->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v33->_vptr_IHandleEntity + 22))(v33, 72, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v32 = *(a2 + 72);
    }
    this->nCompleted.m_Value = v32;
  }
  v34 = *(a2 + 76);
  if ( this->nRank.m_Value != v34 )
  {
    v35 = this->__m_pChainEntity.m_pObj;
    if ( v35 != 0 && (v35->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v35->_vptr_IHandleEntity + 22))(v35, 76, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v34 = *(a2 + 76);
    }
    this->nRank.m_Value = v34;
  }
  return this;
}


// CDOTA_PlayerChallengeInfo::Schema_DynamicBinding  (line 26, @0x00000000025c4930, libserver.so)
// globals: CDOTA_PlayerChallengeInfo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_PlayerChallengeInfo::Schema_DynamicBinding(
        const CDOTA_PlayerChallengeInfo *const this)
{
  return CDOTA_PlayerChallengeInfo::s_pSchemaBinding;
}


// CDOTA_PlayerChallengeInfo::NetworkStateChanged  (line 27, @0x00000000025ce620, libserver.so)  // inlines: Get, operator CEntityInstance*
// callers: CIngameEvent_Base::GoActive, CIngameEvent_Base::ClearPlayerCompendiumChallenge
void __fastcall CDOTA_PlayerChallengeInfo::NetworkStateChanged(
        CDOTA_PlayerChallengeInfo *const this,
        __int64 nLocalOffset,
        __int64 nArrayIndex,
        int16 a4)
{
  CEntityInstance *m_pObj; // rax
  ChangeAccessorFieldPathIndex_t *p_nPathIndexa; // rcx
  ChangeAccessorFieldPathIndex_t *p_m_PathIndex; // rdi
  ChangeAccessorFieldPathIndex_t nPathIndexa; // [rsp+0h] [rbp-10h] BYREF

  m_pObj = this->__m_pChainEntity.m_pObj;
  nPathIndexa.m_Value = a4;
  if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
  {
    p_nPathIndexa = &nPathIndexa;
    p_m_PathIndex = &this->__m_PathIndex;
    if ( nPathIndexa.m_Value == -1 )
      p_nPathIndexa = p_m_PathIndex;
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, nLocalOffset, nArrayIndex, p_nPathIndexa->m_Value);
  }
}


// CDOTASubChallengeInfo::operator=  (line 50, @0x00000000025dd300, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=
// callers: CSchemaUtlVectorManipulator<CUtlVector<CDOTASubChallengeInfo, CNetworkUtlVector_MemoryType<CDOTASubChallengeInfo, -1> >, CDOTASubChallengeInfo>::SwapItems, CSchemaClassBinding<CDOTASubChallengeInfo>::AllocateAndCopyConstruct, CSchemaClassBinding<CDOTASubChallengeInfo>::Copy, CAtomicManipulator<CUtlVector<CDOTASubChallengeInfo, CNetworkUtlVector_MemoryType<CDOTASubChallengeInfo, -1> > >::AllocateAndCopy, CAtomicManipulator<CUtlVector<CDOTASubChallengeInfo, CNetworkUtlVector_MemoryType<CDOTASubChallengeInfo, -1> > >::Copy
CDOTASubChallengeInfo *__fastcall CDOTASubChallengeInfo::operator=(CDOTASubChallengeInfo *const this, __int64 a2)
{
  CEntityInstance *v4; // rax
  int16 v5; // cx
  int v6; // eax
  CEntityInstance *m_pObj; // rdi
  int v8; // eax
  CEntityInstance *v9; // rdi
  int v10; // eax
  CEntityInstance *v11; // rdi
  int v12; // eax
  CEntityInstance *v13; // rdi
  int v14; // eax
  CEntityInstance *v15; // rdi
  int v16; // eax
  CEntityInstance *v17; // rdi
  int v18; // eax
  CEntityInstance *v19; // rdi
  int v20; // eax
  CEntityInstance *v21; // rdi
  int v22; // eax
  CEntityInstance *v23; // rdi
  int v24; // eax
  CEntityInstance *v25; // rdi
  int v26; // eax
  CEntityInstance *v27; // rdi

  v4 = *(a2 + 8);
  if ( v4 != this->__m_pChainEntity.m_pObj )
    this->__m_pChainEntity.m_pObj = v4;
  v5 = *(a2 + 16);
  this->__m_PathIndex.m_Value = v5;
  v6 = *(a2 + 20);
  if ( this->nType.m_Value != v6 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v5 != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 20, 0xFFFFFFFFLL);
      v6 = *(a2 + 20);
    }
    this->nType.m_Value = v6;
  }
  v8 = *(a2 + 24);
  if ( this->nTier.m_Value != v8 )
  {
    v9 = this->__m_pChainEntity.m_pObj;
    if ( v9 != 0 && (v9->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v9->_vptr_IHandleEntity + 22))(v9, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v8 = *(a2 + 24);
    }
    this->nTier.m_Value = v8;
  }
  v10 = *(a2 + 28);
  if ( this->nSlotID.m_Value != v10 )
  {
    v11 = this->__m_pChainEntity.m_pObj;
    if ( v11 != 0 && (v11->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v11->_vptr_IHandleEntity + 22))(v11, 28, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v10 = *(a2 + 28);
    }
    this->nSlotID.m_Value = v10;
  }
  v12 = *(a2 + 32);
  if ( this->nProgress.m_Value != v12 )
  {
    v13 = this->__m_pChainEntity.m_pObj;
    if ( v13 != 0 && (v13->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v13->_vptr_IHandleEntity + 22))(v13, 32, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v12 = *(a2 + 32);
    }
    this->nProgress.m_Value = v12;
  }
  v14 = *(a2 + 36);
  if ( this->nCompletionThreshold.m_Value != v14 )
  {
    v15 = this->__m_pChainEntity.m_pObj;
    if ( v15 != 0 && (v15->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v15->_vptr_IHandleEntity + 22))(v15, 36, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v14 = *(a2 + 36);
    }
    this->nCompletionThreshold.m_Value = v14;
  }
  v16 = *(a2 + 40);
  if ( this->nPlayerID.m_Value != v16 )
  {
    v17 = this->__m_pChainEntity.m_pObj;
    if ( v17 != 0 && (v17->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 40, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v16 = *(a2 + 40);
    }
    this->nPlayerID.m_Value = v16;
  }
  v18 = *(a2 + 44);
  if ( this->nQueryIndex.m_Value != v18 )
  {
    v19 = this->__m_pChainEntity.m_pObj;
    if ( v19 != 0 && (v19->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v19->_vptr_IHandleEntity + 22))(v19, 44, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v18 = *(a2 + 44);
    }
    this->nQueryIndex.m_Value = v18;
  }
  v20 = *(a2 + 48);
  if ( this->nEventID.m_Value != v20 )
  {
    v21 = this->__m_pChainEntity.m_pObj;
    if ( v21 != 0 && (v21->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v21->_vptr_IHandleEntity + 22))(v21, 48, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v20 = *(a2 + 48);
    }
    this->nEventID.m_Value = v20;
  }
  v22 = *(a2 + 52);
  if ( this->nSequenceID.m_Value != v22 )
  {
    v23 = this->__m_pChainEntity.m_pObj;
    if ( v23 != 0 && (v23->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v23->_vptr_IHandleEntity + 22))(v23, 52, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v22 = *(a2 + 52);
    }
    this->nSequenceID.m_Value = v22;
  }
  v24 = *(a2 + 56);
  if ( this->nRequiredHero.m_Value != v24 )
  {
    v25 = this->__m_pChainEntity.m_pObj;
    if ( v25 != 0 && (v25->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v25->_vptr_IHandleEntity + 22))(v25, 56, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v24 = *(a2 + 56);
    }
    this->nRequiredHero.m_Value = v24;
  }
  v26 = *(a2 + 60);
  if ( this->nCompleted.m_Value != v26 )
  {
    v27 = this->__m_pChainEntity.m_pObj;
    if ( v27 != 0 && (v27->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v27->_vptr_IHandleEntity + 22))(v27, 60, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v26 = *(a2 + 60);
    }
    this->nCompleted.m_Value = v26;
  }
  return this;
}


// CDOTASubChallengeInfo::Schema_DynamicBinding  (line 53, @0x00000000025c4940, libserver.so)
// globals: CDOTASubChallengeInfo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTASubChallengeInfo::Schema_DynamicBinding(
        const CDOTASubChallengeInfo *const this)
{
  return CDOTASubChallengeInfo::s_pSchemaBinding;
}


// CDOTA_CombatLogQueryProgress::operator=  (line 78, @0x00000000025dc6a0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=
// calls: memcpy
// callers: CSchemaUtlVectorManipulator<CUtlVector<CDOTA_CombatLogQueryProgress, CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress, -1> >, CDOTA_CombatLogQueryProgress>::SwapItems
CDOTA_CombatLogQueryProgress *__fastcall CDOTA_CombatLogQueryProgress::operator=(
        CDOTA_CombatLogQueryProgress *const this,
        __int64 a2)
{
  int16 v4; // cx
  int v5; // eax
  CEntityInstance *m_pObj; // rdi
  int v7; // eax
  CEntityInstance *v8; // rdi
  int v9; // eax
  CEntityInstance *v10; // rdi
  int v11; // eax
  CEntityInstance *v12; // rdi

  if ( *a2 != this->__m_pChainEntity.m_pObj )
    this->__m_pChainEntity.m_pObj = *a2;
  v4 = *(a2 + 8);
  this->__m_PathIndex.m_Value = v4;
  v5 = *(a2 + 12);
  if ( this->m_nPlayerID.m_Value != v5 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v4 != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 12, 0xFFFFFFFFLL);
      v5 = *(a2 + 12);
    }
    this->m_nPlayerID.m_Value = v5;
  }
  v7 = *(a2 + 16);
  if ( this->m_nQueryID.m_Value != v7 )
  {
    v8 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v8->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v8->_vptr_IHandleEntity + 22))(v8, 16, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v7 = *(a2 + 16);
    }
    this->m_nQueryID.m_Value = v7;
  }
  v9 = *(a2 + 20);
  if ( this->m_nQueryRank.m_Value != v9 )
  {
    v10 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v10->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v10->_vptr_IHandleEntity + 22))(v10, 20, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v9 = *(a2 + 20);
    }
    this->m_nQueryRank.m_Value = v9;
  }
  v11 = *(a2 + 24);
  if ( this->m_nMultiQueryID.m_Value != v11 )
  {
    v12 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v12->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v12->_vptr_IHandleEntity + 22))(v12, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v11 = *(a2 + 24);
    }
    this->m_nMultiQueryID.m_Value = v11;
  }
  memcpy(&this->m_szRankIdentifier, (a2 + 28), sizeof(this->m_szRankIdentifier));
  return this;
}


// CIngameEvent_Base::~CIngameEvent_Base  (line 97, @0x00000000025d8510, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, operator delete, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge
void __fastcall CIngameEvent_Base::~CIngameEvent_Base(CIngameEvent_Base *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v2 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
}


// CIngameEvent_Base::~CIngameEvent_Base  (line 97, @0x00000000025d85c0, libserver.so)  // inlines: Purge, RemoveAll, ~CIngameEvent_Base, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, operator delete, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge
void __fastcall CIngameEvent_Base::~CIngameEvent_Base(CIngameEvent_Base *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v2 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CIngameEvent_Base::Schema_DynamicBinding  (line 99, @0x00000000025c4950, libserver.so)
// globals: CIngameEvent_Base::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_Base::Schema_DynamicBinding(const CIngameEvent_Base *const this)
{
  return CIngameEvent_Base::s_pSchemaBinding;
}


// CIngameEvent_Base::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 99, @0x00000000025c4960, libserver.so)
// globals: CIngameEvent_Base::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_Base::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CIngameEvent_Base::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_Base::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CIngameEvent_Base::CEntityInstanceEntityClass::AllocateInstance  (line 99, @0x00000000025c4970, libserver.so)
void *__fastcall CIngameEvent_Base::CEntityInstanceEntityClass::AllocateInstance(
        CIngameEvent_Base::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CIngameEvent_Base::CEntityInstanceEntityClass::ConstructInstance  (line 99, @0x00000000025c4980, libserver.so)
CEntityInstance *__fastcall CIngameEvent_Base::CEntityInstanceEntityClass::ConstructInstance(
        CIngameEvent_Base::CEntityInstanceEntityClass *const this,
        void *p)
{
  return p;
}


// CIngameEvent_Base::CEntityInstanceEntityClass::DestructInstance  (line 99, @0x00000000025c4990, libserver.so)
void __fastcall CIngameEvent_Base::CEntityInstanceEntityClass::DestructInstance(
        CIngameEvent_Base::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  ;
}


// CIngameEvent_Base::CEntityInstanceEntityClass::FreeInstance  (line 99, @0x00000000025c49a0, libserver.so)
void __fastcall CIngameEvent_Base::CEntityInstanceEntityClass::FreeInstance(
        CIngameEvent_Base::CEntityInstanceEntityClass *const this,
        void *p)
{
  ;
}


// CIngameEvent_Base::CEntityInstanceEntityClass::CanAllocate  (line 99, @0x00000000025c49b0, libserver.so)
bool __fastcall CIngameEvent_Base::CEntityInstanceEntityClass::CanAllocate(
        const CIngameEvent_Base::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CIngameEvent_Base::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 99, @0x00000000025c49c0, libserver.so)
// globals: CIngameEvent_Base::s_pSchemaBinding
const ISchemaBinding *__fastcall CIngameEvent_Base::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CIngameEvent_Base::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_Base::s_pSchemaBinding;
}


// CIngameEvent_Base::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 99, @0x00000000025cb330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CIngameEvent_Base::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_Base::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CIngameEvent_Base::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 99, @0x00000000025cb350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CIngameEvent_Base::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_Base::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CIngameEvent_Base::GetEntityClassInfo  (line 99, @0x00000000025ce670, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CIngameEvent_FM2015::GetEntityClassInternal
// strings: "CIngameEvent_Base", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo, CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CIngameEvent_Base::GetEntityClassInfo()
{
  if ( `guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo != 0 )
    return &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo) == 0 )
    return &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo;
  if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
    {
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
        "CGameEntity",
        0,
        0,
        &g_EntityRootClassInfo);
      __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
      "CBaseEntity",
      0,
      0,
      &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo,
    "CIngameEvent_Base",
    0,
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo);
  return &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo;
}


// CIngameEvent_Base::GetEntityClassInternal  (line 99, @0x00000000025ce770, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "CIngameEvent_Base"
// globals: `guard variable for'CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass, CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass, __dso_handle, CIngameEvent_Base::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo, CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo
CEntityClass *__cdecl CIngameEvent_Base::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass);
    CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass._vptr_CEntityClass = off_4100A30;
    __cxa_guard_release(&`guard variable for'CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass);
    __cxa_atexit(
      CIngameEvent_Base::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCIngameEvent_BaseClass != 0 )
    return &CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass;
  if ( `guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo,
      "CIngameEvent_Base",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo);
  }
  CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass.m_pClassInfo = &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo;
  CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass.m_pBaseClassInfo = CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo.m_pBaseClassInfo;
  g_pEntityCIngameEvent_BaseClass = &CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass;
  CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo.m_pClass = &CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass;
  CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCIngameEvent_BaseClass->m_pComponentOverrides = 0;
  return &CIngameEvent_Base::GetEntityClassInternal(void)::g_EntityCIngameEvent_BaseClass;
}


// CIngameEvent_Base::GetEventPointID  (line 102, @0x00000000025c49d0, libserver.so)
EEvent __fastcall CIngameEvent_Base::GetEventPointID(CIngameEvent_Base *const this)
{
  return EEvent::EVENT_ID_COUNT|EEvent::EVENT_ID_DIRETIDE;
}


// CIngameEvent_Base::ChallengesEnabled  (line 105, @0x00000000025c49e0, libserver.so)
bool __fastcall CIngameEvent_Base::ChallengesEnabled(CIngameEvent_Base *const this)
{
  return 0;
}


// CIngameEvent_Base::IsAwaitingInitialization  (line 111, @0x00000000025c49f0, libserver.so)
bool __fastcall CIngameEvent_Base::IsAwaitingInitialization(CIngameEvent_Base *const this)
{
  return !this->m_bInitialized;
}


// CIngameEvent_Base::OnHeroKill  (line 115, @0x00000000025c4a00, libserver.so)
void __fastcall CIngameEvent_Base::OnHeroKill(
        CIngameEvent_Base *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller)
{
  ;
}


// CIngameEvent_Base::PlayersSwapped  (line 116, @0x00000000025c4a10, libserver.so)
void __fastcall CIngameEvent_Base::PlayersSwapped(
        CIngameEvent_Base *const this,
        unsigned int unPlayer1ID,
        unsigned int unPlayer2ID)
{
  ;
}


// CIngameEvent_Base::SpawnerReleaseCreeps  (line 118, @0x00000000025c4a20, libserver.so)
void __fastcall CIngameEvent_Base::SpawnerReleaseCreeps(
        CIngameEvent_Base *const this,
        int iTeam,
        Vector vecOrigin,
        string_t szNPCFirstWaypoint)
{
  ;
}


// CIngameEvent_Base::OnWaitingForPlayers  (line 119, @0x00000000025c4a30, libserver.so)
float __fastcall CIngameEvent_Base::OnWaitingForPlayers(CIngameEvent_Base *const this, const CDOTALobby *pLobby)
{
  return 0.0;
}


// CIngameEvent_Base::OnPreGameStarted  (line 131, @0x00000000025c4a40, libserver.so)
void __fastcall CIngameEvent_Base::OnPreGameStarted(CIngameEvent_Base *const this)
{
  ;
}


// CIngameEvent_Base::OnGameStarted  (line 132, @0x00000000025c4a50, libserver.so)
void __fastcall CIngameEvent_Base::OnGameStarted(CIngameEvent_Base *const this)
{
  ;
}


