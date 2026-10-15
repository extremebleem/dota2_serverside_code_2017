
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CConcreteEntityList::LookupEntity  (line 281, @0x00000000021b4a40, libserver.so)  // inlines: GetEntryIndex, IndexToIdentity, IsValid
// callers: CPointCommentaryNode::UpdateViewThink, CPointCommentaryNode::CleanupPostCommentary, CCommentarySystem::JumpToNextNode, CommentarySystem_PePlayerRunCommand, CGibShooter::InitPointGib, CEnvEffectsScript::HandleAnimEvent, CDOTAGamerules::SpawnRune, CDOTAGamerules::BuildPositionList, CDOTAGamerules::Defeated, fow_server_test_tempviewer, CDOTAGamerules::State_Enter_POST_GAME, CDOTAGamerules::PostSpawnGroupLoad (19 total)
CEntityIdentity *__fastcall CConcreteEntityList::LookupEntity(
        const CConcreteEntityList *const this,
        const CEntityHandle *const handle)
{
  CEntityIdentity *result; // rax

  result = 0;
  if ( handle->m_Index + 2 > 1 )
  {
    result = this->m_pIdentityChunks[(LOWORD(handle->m_Index) >> 9) & 0x3F];
    if ( result != 0 )
    {
      result += handle->m_Index & 0x1FF;
      if ( result != 0 && handle->m_Index != result->m_EHandle.m_Index )
        return 0;
    }
  }
  return result;
}


// CConcreteEntityList::Purge  (line 498, @0x00000000030c0170, libserver.so)  // inlines: Clear, ClearAll, Term, memset, ~CEntityIdentity, ~CScriptAccessorT
// calls: CConcreteEntityList::FreeEntity, operator delete [], memset
// callers: CEntitySystem::CEntitySystem
void __fastcall CConcreteEntityList::Purge(CConcreteEntityList *const this)
{
  CEntityIdentity *m_pHead; // rsi
  CEntityIdentity *m_pNext; // rbx
  CEntityIdentity *v4; // rsi
  CEntityIdentity *v5; // rbx
  __int64 v6; // rbx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rsi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rcx
  V_uuid_t *v12; // rdi

  m_pHead = this->m_dormantList.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      CConcreteEntityList::FreeEntity(this, m_pHead, 1);
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  v4 = this->m_usedList.m_pHead;
  if ( v4 != 0 )
  {
    while ( 1 )
    {
      v5 = v4->m_pNext;
      CConcreteEntityList::FreeEntity(this, v4, 1);
      if ( v5 == 0 )
        break;
      v4 = v5;
    }
  }
  this->m_pFirstActiveEntity = 0;
  v6 = 0;
  this->m_freeNetworkableList.m_pHead = 0;
  this->m_freeNetworkableList.m_pTail = 0;
  this->m_freeNonNetworkableList.m_pHead = 0;
  this->m_freeNonNetworkableList.m_pTail = 0;
  do
  {
    v7 = this->m_pIdentityChunks[v6];
    if ( v7 != 0 )
    {
      v8 = &v7[v7[-1].m_pId];
      if ( v7 != v8 )
      {
        v9 = v8 - 1;
        do
        {
          v10 = v9;
          v11 = v9--;
          v10->m_hPublicScope.m_hScope = 0;
          v7 = this->m_pIdentityChunks[v6];
        }
        while ( v7 != v11 );
      }
      operator delete[](&v7[-1].m_pId);
    }
    v12 = this->m_pEntityIdChunks[v6];
    if ( v12 != 0 )
      operator delete[](v12);
    ++v6;
  }
  while ( v6 != 64 );
  memset(this->m_pIdentityChunks, 0, sizeof(this->m_pIdentityChunks));
  memset(this->m_pEntityIdChunks, 0, sizeof(this->m_pEntityIdChunks));
  memset(&this->m_PVSBits, 0, sizeof(this->m_PVSBits));
}


// CConcreteEntityList::AllocEntityChunk  (line 696, @0x00000000030c4820, libserver.so)  // inlines: AddToTail, CEntityHandle, CEntityIdentity, CNetworkVarBase, CScriptAccessorT, ChangeAccessorFieldPathIndex_t, ClearId, ClearUsed, EnsureValidValue<int>, IndexToIdentity, IsInList, LeafCodeInfo_t, LinkBefore, NetworkStateChanged, Set, Term, Unlink, V_memset, memset, operator=, operator=<int>, ~CEntityIdentity, ~CScriptAccessorT
// calls: operator new [], CEntityIdentity::NetworkStateChanged, memset, RandomInt, SpewEntityListSummary, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, operator delete [], _Unwind_Resume
// callers: CEntitySystem::CEntitySystem, CConcreteEntityList::AllocEntity
// strings: "non-", "../public/entity2/concreteentitylist.h", "AllocEntityChunk", "Ran out of %snetworkable entities! (See console spew for entity list summary)\n"
void __fastcall CConcreteEntityList::AllocEntityChunk(CConcreteEntityList *const this, bool bNetworkable)
{
  void *v2; // r13
  __int64 v3; // r14
  __int64 v5; // rbx
  int m_nNonNetworkableEntityLimit; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  __int64 v11; // r14
  _QWORD *v12; // r13
  CEntityIdentity *v13; // rbx
  signed __int64 v14; // r12
  size_t v15; // rbx
  size_t v16; // rdi
  void *v17; // rax
  __int64 v18; // r12
  CEntityIdentity *v19; // r13
  CNetworkVarBase<int,CEntityIdentity::NetworkVar_m_nameStringableIndex> *p_m_nameStringableIndex; // rbx
  CEntityIdentity *m_pNext; // rax
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax
  CEntityIdentity *v24; // rcx
  V_uuid_t *m_pId; // rax
  char *v26; // r14
  CEntityIdentity *m_pPrev; // rax
  CEntityIdentity *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  const char *v35; // r8
  int v36; // r12d
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // edx
  int v40; // ecx
  int v41; // esi
  int v42; // r8d
  int v43; // r9d
  int nChunk; // [rsp+4h] [rbp-8Ch]
  __int64 v45; // [rsp+8h] [rbp-88h]
  _QWORD *v46; // [rsp+8h] [rbp-88h]
  char *v47; // [rsp+10h] [rbp-80h]
  string_t *p_m_designerName; // [rsp+18h] [rbp-78h]
  string_t *p_m_name; // [rsp+20h] [rbp-70h]
  int v50; // [rsp+28h] [rbp-68h]
  CEntityIdentity *v51; // [rsp+30h] [rbp-60h]
  int nEntries; // [rsp+3Ch] [rbp-54h]
  LeafCodeInfo_t v54; // [rsp+40h] [rbp-50h] BYREF

  v5 = bNetworkable;
  m_nNonNetworkableEntityLimit = this->m_nNonNetworkableEntityLimit;
  if ( bNetworkable )
    m_nNonNetworkableEntityLimit = this->m_nNetworkableEntityLimit;
  v7 = !bNetworkable ? 0x20 : 0;
  v8 = m_nNonNetworkableEntityLimit + 1022;
  if ( m_nNonNetworkableEntityLimit + 511 >= 0 )
    v8 = m_nNonNetworkableEntityLimit + 511;
  v9 = v7 + (v8 >> 9);
  if ( v7 >= v9 )
  {
LABEL_53:
    SpewEntityListSummary(this);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v54.m_nLine = 776;
      v35 = "";
      if ( v5 == 0 )
        v35 = "non-";
      v54.m_szFile = "../public/entity2/concreteentitylist.h";
      v54.m_szFunction = "AllocEntityChunk";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v54,
        "Ran out of %snetworkable entities! (See console spew for entity list summary)\n",
        v35);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v31, v32, v29, v30, v33, v34) != 0 )
      loc_0 = -559038737;
    v36 = Plat_ExitProcess(1);
    *(v5 + 40) = 0;
    if ( v45 != 0 )
    {
      v37 = 120 * (511 - v3);
      if ( v45 != v45 + v37 )
      {
        v38 = v45 + v37;
        do
        {
          v38 -= 120;
          *(v38 - 80 + 120) = 0;
        }
        while ( v45 != v38 );
      }
    }
    operator delete[](v2);
    Unwind_Resume(v36, v41, v39, v40, v42, v43);
  }
  if ( this->m_pIdentityChunks[v7] != 0 )
  {
    v10 = !bNetworkable ? 0x20 : 0;
    do
    {
      if ( ++v10 == v9 )
        goto LABEL_53;
    }
    while ( this->m_pIdentityChunks[v10] != 0 );
    nChunk = v10;
  }
  else
  {
    nChunk = !bNetworkable ? 0x20 : 0;
  }
  nEntries = 512;
  if ( nChunk + 1 == v9 )
    nEntries = ((v7 - nChunk) << 9) + m_nNonNetworkableEntityLimit;
  v11 = 511;
  v12 = operator new[](0xF008u);
  *v12 = 512;
  v46 = v12 + 1;
  v13 = (v12 + 1);
  do
  {
    v14 = v13 - v12;
    *(v12 + v14 + 16) = -1;
    v13->m_nameStringableIndex.m_Value = 0;
    *(v12 + v14 + 40) = 0;
    *(v12 + v14 + 60) = -1;
    v13->m_pNext = v13;
    v13->m_pPrev = v13;
    v13->m_pPrevByClass = 0;
    v13->m_pNextByClass = 0;
    v13->m_pId = 0;
    v13->m_hSpawnGroup = 0;
    v13->m_pAttributes = 0;
    v13->m_pRenderAttrs = 0;
    v13->m_flags = 0;
    v13->m_fDataObjectTypes = 0;
    v13->m_pClass = 0;
    *(v12 + v14 + 32) = 0;
    v13->m_pInstance = 0;
    *(v12 + v14 + 24) = 0;
    CEntityIdentity::NetworkStateChanged(v13, 0x14u, -1, -1);
    --v11;
    ++v13;
    *(v46 + v14 + 12) = -1;
    v13[-1].m_hSpawnGroup = 0;
  }
  while ( v11 != -1 );
  v47 = &this->m_Lock.gap0 + 8 * nChunk;
  *(v47 + 1) = v46;
  if ( nEntries <= 0x7F0000000000000LL )
  {
    v16 = 16LL * nEntries;
    v15 = v16;
  }
  else
  {
    v15 = 16LL * nEntries;
    v16 = -1;
  }
  v17 = operator new[](v16);
  *(v47 + 66) = v17;
  memset(v17, 0, v15);
  v18 = 0;
  v50 = nChunk << 9;
  v19 = *(v47 + 1);
  p_m_designerName = &v19->m_designerName;
  v51 = v19;
  p_m_nameStringableIndex = &v19->m_nameStringableIndex;
  p_m_name = &v19->m_name;
  do
  {
    v19->m_EHandle.m_Index = (RandomInt(0, 0x1FFFF) << 15) | v19->m_EHandle.m_Index & 0x7FFF;
    if ( ((v50 + v18) >> 9) <= 0x3F )
    {
      v23 = this->m_pIdentityChunks[(v50 + v18) >> 9];
      if ( v23 != 0 )
      {
        v24 = &v23[(v50 + v18) & 0x1FF];
        if ( v24 != 0 )
          LOWORD(v24->m_EHandle.m_Index) |= 0x7FFFu;
      }
    }
    m_pId = v19->m_pId;
    v19->m_flags = 0;
    v19->m_fDataObjectTypes = 0;
    if ( m_pId != 0 )
    {
      *&m_pId->Data1 = 0;
      *m_pId->Data4 = 0;
    }
    v19->m_pClass = 0;
    v26 = (v19 - v51);
    *(&p_m_designerName->u.m_Id + v26) = 0;
    v19->m_pInstance = 0;
    *(&p_m_name->u.m_Id + v26) = 0;
    if ( *(&p_m_nameStringableIndex->m_Value + v19 - v51) != -1 )
    {
      CEntityIdentity::NetworkStateChanged(v19, 0x14u, -1, -1);
      *(&p_m_nameStringableIndex->m_Value + v26) = -1;
    }
    v19->m_hSpawnGroup = 0;
    if ( nEntries > v18 )
    {
      v19->m_pId = (*(v47 + 66) + 16 * v18);
      m_pPrev = v19->m_pPrev;
      if ( bNetworkable )
      {
        if ( v19 != m_pPrev )
        {
          if ( m_pPrev != 0 )
            m_pPrev->m_pNext = v19->m_pNext;
          else
            this->m_freeNetworkableList.m_pHead = v19->m_pNext;
          m_pNext = v19->m_pNext;
          if ( m_pNext != 0 )
            m_pNext->m_pPrev = v19->m_pPrev;
          else
            this->m_freeNetworkableList.m_pTail = v19->m_pPrev;
          v19->m_pPrev = v19;
        }
        v19->m_pNext = 0;
        v19->m_pPrev = this->m_freeNetworkableList.m_pTail;
        this->m_freeNetworkableList.m_pTail = v19;
        v22 = v19->m_pPrev;
        if ( v22 != 0 )
        {
LABEL_25:
          v22->m_pNext = v19;
          goto LABEL_26;
        }
        this->m_freeNetworkableList.m_pHead = v19;
      }
      else
      {
        if ( v19 != m_pPrev )
        {
          if ( m_pPrev != 0 )
            m_pPrev->m_pNext = v19->m_pNext;
          else
            this->m_freeNonNetworkableList.m_pHead = v19->m_pNext;
          v28 = v19->m_pNext;
          if ( v28 != 0 )
            v28->m_pPrev = v19->m_pPrev;
          else
            this->m_freeNonNetworkableList.m_pTail = v19->m_pPrev;
          v19->m_pPrev = v19;
        }
        v19->m_pNext = 0;
        v19->m_pPrev = this->m_freeNonNetworkableList.m_pTail;
        this->m_freeNonNetworkableList.m_pTail = v19;
        v22 = v19->m_pPrev;
        if ( v22 != 0 )
          goto LABEL_25;
        this->m_freeNonNetworkableList.m_pHead = v19;
      }
    }
LABEL_26:
    ++v18;
    ++v19;
  }
  while ( v18 != 512 );
}


// CConcreteEntityList::AllocEntity  (line 779, @0x00000000030c4df0, libserver.so)  // inlines: Bitvec_Set, CEntityHandle, CEntityIdentity, CNetworkVarBase, CScriptAccessorT, ChangeAccessorFieldPathIndex_t, ClearId, EnsureValidValue<int>, IdentityIndexInChunk, IdentityToIndex, IndexToIdentity, IsInList, IsUsed, LinkBefore, NetworkStateChanged, Set, SetUsed, Term, Unlink, operator=, operator=<int>, ~CScriptAccessorT
// calls: CConcreteEntityList::AllocEntityChunk, operator new, CEntityIdentity::NetworkStateChanged, operator delete, _Unwind_Resume
// callers: CEntitySystem::AllocateEntityIdentity, CEntitySystem::TransferEntityIntoStagingDatabase
CEntityIdentity *__fastcall CConcreteEntityList::AllocEntity(
        CConcreteEntityList *const this,
        bool bNetworkable,
        CEntityIndex iForcedIndex,
        int iForcedSerial,
        bool bCreateIsolatedEntity,
        bool bIsAnonymous)
{
  CEntityIdentity *m_pHead; // rbx
  CEntityIdentity *m_pPrev; // rax
  CEntityIdentity *m_pNext; // rax
  CEntityIdentity **m_pIdentityChunks; // rax
  int v14; // esi
  CEntityIdentity *v15; // rdx
  int v16; // ecx
  CEntityIdentity *v17; // rdx
  char v18; // cl
  CEntityIdentity *v19; // rdx
  CEntityIdentity *m_pFirstActiveEntity; // rax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rax
  int v23; // ecx
  CEntityIdentity *result; // rax
  unsigned int v25; // r14d
  char *v26; // r13
  __int64 i; // rax
  CEntityIdentity *v28; // rax
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rbx

  if ( bCreateIsolatedEntity || bIsAnonymous )
  {
    v31 = operator new(0x78u);
    v31->m_EHandle.m_Index = -1;
    v31->m_nameStringableIndex.m_Value = 0;
    v31->m_hPublicScope.m_hScope = 0;
    v31->m_PathIndex.m_Value = -1;
    v31->m_pNext = v31;
    v31->m_pPrev = v31;
    v31->m_pPrevByClass = 0;
    v31->m_pNextByClass = 0;
    v31->m_pId = 0;
    v31->m_hSpawnGroup = 0;
    v31->m_pAttributes = 0;
    v31->m_pRenderAttrs = 0;
    v31->m_flags = 0;
    v31->m_fDataObjectTypes = 0;
    v31->m_pClass = 0;
    v31->m_designerName.u.m_Id = 0;
    v31->m_pInstance = 0;
    v31->m_name.u.m_Id = 0;
    CEntityIdentity::NetworkStateChanged(v31, 0x14u, -1, -1);
    v31->m_nameStringableIndex.m_Value = -1;
    v31->m_hSpawnGroup = 0;
    v31->m_EHandle.m_Index = -1;
    v31->m_pId = operator new(&stru_10);
    if ( bCreateIsolatedEntity )
      v31->m_flags |= 0x800u;
    if ( bIsAnonymous )
      v31->m_flags |= 0x4000u;
    result = v31;
    if ( bNetworkable )
    {
      v31->m_flags |= 0x40u;
      if ( iForcedIndex.m_Data != -1 )
      {
        v23 = iForcedSerial;
        LOWORD(v31->m_EHandle.m_Index) = iForcedIndex.m_Data & 0x7FFF | v31->m_EHandle.m_Index & 0x8000;
        if ( iForcedSerial != -1 )
          goto LABEL_38;
      }
    }
    return result;
  }
  if ( !bNetworkable )
  {
    m_pHead = this->m_freeNonNetworkableList.m_pHead;
    if ( m_pHead == 0 )
    {
      CConcreteEntityList::AllocEntityChunk(this, 0);
      m_pHead = this->m_freeNonNetworkableList.m_pHead;
    }
    m_pPrev = m_pHead->m_pPrev;
    if ( m_pPrev == m_pHead )
      goto LABEL_12;
    if ( m_pPrev != 0 )
      m_pPrev->m_pNext = m_pHead->m_pNext;
    else
      this->m_freeNonNetworkableList.m_pHead = m_pHead->m_pNext;
    m_pNext = m_pHead->m_pNext;
    if ( m_pNext == 0 )
    {
      this->m_freeNonNetworkableList.m_pTail = m_pHead->m_pPrev;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( iForcedIndex.m_Data == -1 )
  {
    m_pHead = this->m_freeNetworkableList.m_pHead;
    if ( m_pHead == 0 )
    {
      CConcreteEntityList::AllocEntityChunk(this, 1);
      m_pHead = this->m_freeNetworkableList.m_pHead;
    }
  }
  else
  {
    if ( iForcedIndex.m_Data < 0 || this->m_nNetworkableEntityLimit <= iForcedIndex.m_Data )
      return 0;
    v25 = iForcedIndex.m_Data >> 9;
    v26 = &this->m_Lock.gap0 + 8 * (iForcedIndex.m_Data >> 9);
    for ( i = *(v26 + 1); i == 0; i = *(v26 + 1) )
      CConcreteEntityList::AllocEntityChunk(this, 1);
    if ( v25 > 0x3F )
    {
      m_pHead = 0;
      goto LABEL_48;
    }
    m_pHead = (i + 120LL * (iForcedIndex.m_Data & 0x1FF));
    if ( m_pHead != 0 && (m_pHead->m_EHandle.m_Index & 0x7FFF) == iForcedIndex.m_Data )
      return 0;
  }
LABEL_48:
  v28 = m_pHead->m_pPrev;
  if ( m_pHead != v28 )
  {
    if ( v28 != 0 )
      v28->m_pNext = m_pHead->m_pNext;
    else
      this->m_freeNetworkableList.m_pHead = m_pHead->m_pNext;
    m_pNext = m_pHead->m_pNext;
    if ( m_pNext == 0 )
    {
      this->m_freeNetworkableList.m_pTail = m_pHead->m_pPrev;
      goto LABEL_11;
    }
LABEL_10:
    m_pNext->m_pPrev = m_pHead->m_pPrev;
LABEL_11:
    m_pHead->m_pPrev = m_pHead;
    m_pHead->m_pNext = m_pHead;
  }
LABEL_12:
  m_pIdentityChunks = this->m_pIdentityChunks;
  v14 = 0x4000;
  while ( 1 )
  {
    v15 = *m_pIdentityChunks;
    if ( *m_pIdentityChunks != 0 )
      break;
    v17 = m_pIdentityChunks[32];
    v18 = 1;
    if ( v17 == 0 )
    {
LABEL_59:
      if ( v18 != 0 )
      {
LABEL_24:
        v16 = -1;
        goto LABEL_25;
      }
      goto LABEL_23;
    }
LABEL_19:
    if ( m_pHead >= v17 && m_pHead < &v17[512] && m_pHead->m_pId != 0 )
    {
      v16 = v14 - 286331153 * ((m_pHead - v17) >> 3);
      if ( v16 >= 0 )
        goto LABEL_53;
    }
LABEL_23:
    v14 += 512;
    ++m_pIdentityChunks;
    if ( v14 == 0x8000 )
      goto LABEL_24;
  }
  if ( m_pHead < v15
    || m_pHead >= &v15[512]
    || m_pHead->m_pId == 0
    || (v16 = v14 - 286331153 * ((m_pHead - v15) >> 3) - 0x4000) < 0 )
  {
    v17 = m_pIdentityChunks[32];
    v18 = 0;
    if ( v17 == 0 )
      goto LABEL_59;
    goto LABEL_19;
  }
LABEL_53:
  if ( (v16 >> 9) <= 0x3F )
  {
    v29 = this->m_pIdentityChunks[v16 >> 9];
    if ( v29 != 0 )
    {
      v30 = &v29[v16 & 0x1FF];
      if ( v30 != 0 )
        LOWORD(v30->m_EHandle.m_Index) = v16 & 0x7FFF | v30->m_EHandle.m_Index & 0x8000;
    }
  }
LABEL_25:
  if ( this->m_nNetworkableEntityLimit > v16 )
    this->m_PVSBits.m_Ints[v16 >> 5] |= 1 << v16;
  v19 = m_pHead->m_pPrev;
  m_pFirstActiveEntity = this->m_pFirstActiveEntity;
  if ( m_pHead != v19 )
  {
    if ( v19 != 0 )
      v19->m_pNext = m_pHead->m_pNext;
    else
      this->m_usedList.m_pHead = m_pHead->m_pNext;
    v21 = m_pHead->m_pNext;
    if ( v21 != 0 )
      v21->m_pPrev = m_pHead->m_pPrev;
    else
      this->m_usedList.m_pTail = m_pHead->m_pPrev;
    m_pHead->m_pPrev = m_pHead;
  }
  m_pHead->m_pNext = m_pFirstActiveEntity;
  if ( m_pFirstActiveEntity != 0 )
  {
    m_pHead->m_pPrev = m_pFirstActiveEntity->m_pPrev;
    m_pFirstActiveEntity->m_pPrev = m_pHead;
  }
  else
  {
    m_pHead->m_pPrev = this->m_usedList.m_pTail;
    this->m_usedList.m_pTail = m_pHead;
  }
  v22 = m_pHead->m_pPrev;
  if ( v22 != 0 )
    v22->m_pNext = m_pHead;
  else
    this->m_usedList.m_pHead = m_pHead;
  v23 = iForcedSerial;
  result = m_pHead;
  if ( iForcedSerial != -1 )
LABEL_38:
    result->m_EHandle.m_Index = (v23 << 15) | result->m_EHandle.m_Index & 0x7FFF;
  return result;
}


// CConcreteEntityList::FreeEntity  (line 879, @0x00000000030bfd30, libserver.so)  // inlines: AddToTail, Clear, ClearId, ClearUsed, GetEntityIndex, IdentityIndexInChunk, IdentityToIndex, IndexToIdentity, IsInList, IsUsed, LinkBefore, NetworkStateChanged, Set, Term, Unlink, V_memset, memset, operator=, operator=<int>, ~CEntityIdentity, ~CScriptAccessorT
// calls: operator delete, CEntityIdentity::NetworkStateChanged
// callers: CConcreteEntityList::Purge, CEntitySystem::DeallocateEntityIdentity, CEntitySystem::DeallocateForPrecache, CEntitySystem::ExecuteQueuedDeallocation, CEntitySystem::~CEntitySystem, CEntitySystem::HelperExecuteQueuedSpawn, CEntitySystem::CEntitySystem, CEntitySystem::TransferEntityIntoStagingDatabase, CEntitySystem::DestroyEntityImmediate, CEntitySystem::QueueDestroyEntity, CEntitySystem::CreateEntity, CEntitySystem::AllocateForPrecache
void __fastcall CConcreteEntityList::FreeEntity(
        CConcreteEntityList *const this,
        CEntityIdentity *pEntity,
        bool bInvalidateHandle)
{
  CEntityIdentity **m_pIdentityChunks; // rax
  int v5; // esi
  int v6; // ecx
  unsigned __int64 v7; // rcx
  char v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // r8d
  char *v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  CEntityIdentity *m_pPrev; // r8
  CEntityIdentity *m_pNext; // rsi
  CEntityIdentity *v18; // rsi
  __int64 v19; // rsi
  V_uuid_t *m_pId; // rax
  bool v21; // zf
  CEntityIdentity *v22; // rsi
  CEntityIdentity *v23; // rax
  CEntityIdentity *v24; // rax
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  CEntityIdentity *v27; // rax

  if ( (pEntity->m_flags & 0x4800) != 0 )
  {
    operator delete(pEntity->m_pId);
    pEntity->m_hPublicScope.m_hScope = 0;
    operator delete(pEntity);
    return;
  }
  m_pIdentityChunks = this->m_pIdentityChunks;
  v5 = 0x4000;
  while ( 1 )
  {
    v9 = *m_pIdentityChunks;
    if ( *m_pIdentityChunks != 0 )
      break;
    v7 = m_pIdentityChunks[32];
    v8 = 1;
    if ( v7 == 0 )
    {
LABEL_16:
      if ( v8 != 0 )
      {
LABEL_17:
        v10 = -1;
        v11 = -1;
        v6 = -1;
        goto LABEL_18;
      }
      goto LABEL_13;
    }
LABEL_9:
    if ( pEntity >= v7 && pEntity < v7 + 61440 && pEntity->m_pId != 0 )
    {
      v6 = v5 - 286331153 * ((pEntity - v7) >> 3);
      if ( v6 >= 0 )
        goto LABEL_44;
    }
LABEL_13:
    v5 += 512;
    ++m_pIdentityChunks;
    if ( v5 == 0x8000 )
      goto LABEL_17;
  }
  if ( pEntity < v9
    || pEntity >= v9 + 61440
    || pEntity->m_pId == 0
    || (v6 = v5 - 286331153 * ((pEntity - v9) >> 3) - 0x4000) < 0 )
  {
    v7 = m_pIdentityChunks[32];
    v8 = 0;
    if ( v7 == 0 )
      goto LABEL_16;
    goto LABEL_9;
  }
LABEL_44:
  v11 = v6 >> 9;
  v10 = v6 >> 9;
LABEL_18:
  if ( this->m_nNetworkableEntityLimit > v6 )
    this->m_PVSBits.m_Ints[v6 >> 5] &= ~(1 << v6);
  if ( v10 <= 0x3F )
  {
    v12 = &this->m_Lock.gap0 + 8 * v11;
    v13 = *(v12 + 1);
    if ( v13 != 0 )
    {
      v14 = 120LL * (v6 & 0x1FF);
      v15 = v14 + v13;
      if ( v15 != 0 && (*(v15 + 16) & 0x7FFF) == v6 )
      {
        if ( SLOBYTE(pEntity->m_flags) < 0 )
        {
          m_pPrev = pEntity->m_pPrev;
          if ( pEntity != m_pPrev )
          {
            m_pNext = pEntity->m_pNext;
            if ( m_pPrev != 0 )
              m_pPrev->m_pNext = m_pNext;
            else
              this->m_dormantList.m_pHead = m_pNext;
            v18 = pEntity->m_pNext;
            if ( v18 != 0 )
              goto LABEL_29;
            this->m_dormantList.m_pTail = pEntity->m_pPrev;
            goto LABEL_30;
          }
          goto LABEL_33;
        }
        if ( !bInvalidateHandle )
          goto LABEL_33;
        if ( this->m_pFirstActiveEntity == pEntity )
          this->m_pFirstActiveEntity = pEntity->m_pNext;
        v22 = pEntity->m_pPrev;
        if ( pEntity != v22 )
        {
          if ( v22 != 0 )
            v22->m_pNext = pEntity->m_pNext;
          else
            this->m_usedList.m_pHead = pEntity->m_pNext;
          v18 = pEntity->m_pNext;
          if ( v18 != 0 )
LABEL_29:
            v18->m_pPrev = pEntity->m_pPrev;
          else
            this->m_usedList.m_pTail = pEntity->m_pPrev;
LABEL_30:
          pEntity->m_pPrev = pEntity;
          pEntity->m_pNext = pEntity;
        }
        v19 = *(v12 + 1);
        if ( v19 != 0 )
        {
          v15 = v14 + v19;
          if ( v15 != 0 )
LABEL_33:
            *(v15 + 16) |= 0x7FFFu;
        }
        if ( this->m_nNetworkableEntityLimit > v6 )
        {
          if ( this->m_nMaxPlayers >= v6 )
            goto LABEL_36;
          v26 = pEntity->m_pPrev;
          if ( pEntity != v26 )
          {
            if ( v26 != 0 )
              v26->m_pNext = pEntity->m_pNext;
            else
              this->m_freeNetworkableList.m_pHead = pEntity->m_pNext;
            v27 = pEntity->m_pNext;
            if ( v27 != 0 )
              v27->m_pPrev = pEntity->m_pPrev;
            else
              this->m_freeNetworkableList.m_pTail = pEntity->m_pPrev;
            pEntity->m_pPrev = pEntity;
          }
          pEntity->m_pNext = 0;
          pEntity->m_pPrev = this->m_freeNetworkableList.m_pTail;
          this->m_freeNetworkableList.m_pTail = pEntity;
          v25 = pEntity->m_pPrev;
          if ( v25 == 0 )
          {
            this->m_freeNetworkableList.m_pHead = pEntity;
            goto LABEL_36;
          }
LABEL_60:
          v25->m_pNext = pEntity;
          goto LABEL_36;
        }
        v23 = pEntity->m_pPrev;
        if ( pEntity != v23 )
        {
          if ( v23 != 0 )
            v23->m_pNext = pEntity->m_pNext;
          else
            this->m_freeNonNetworkableList.m_pHead = pEntity->m_pNext;
          v24 = pEntity->m_pNext;
          if ( v24 != 0 )
            v24->m_pPrev = pEntity->m_pPrev;
          else
            this->m_freeNonNetworkableList.m_pTail = pEntity->m_pPrev;
          pEntity->m_pPrev = pEntity;
        }
        pEntity->m_pNext = 0;
        pEntity->m_pPrev = this->m_freeNonNetworkableList.m_pTail;
        this->m_freeNonNetworkableList.m_pTail = pEntity;
        v25 = pEntity->m_pPrev;
        if ( v25 != 0 )
          goto LABEL_60;
        this->m_freeNonNetworkableList.m_pHead = pEntity;
LABEL_36:
        if ( bInvalidateHandle )
          pEntity->m_EHandle.m_Index = ((pEntity->m_EHandle.m_Index & 0xFFFF8000) + 0x8000)
                                     | pEntity->m_EHandle.m_Index & 0x7FFF;
        m_pId = pEntity->m_pId;
        pEntity->m_flags = 0;
        pEntity->m_fDataObjectTypes = 0;
        if ( m_pId != 0 )
        {
          *&m_pId->Data1 = 0;
          *m_pId->Data4 = 0;
        }
        v21 = pEntity->m_nameStringableIndex.m_Value == -1;
        pEntity->m_pClass = 0;
        pEntity->m_designerName.u.m_Id = 0;
        pEntity->m_pInstance = 0;
        pEntity->m_name.u.m_Id = 0;
        if ( !v21 )
        {
          CEntityIdentity::NetworkStateChanged(pEntity, 0x14u, -1, -1);
          pEntity->m_nameStringableIndex.m_Value = -1;
        }
        pEntity->m_hSpawnGroup = 0;
      }
    }
  }
}


