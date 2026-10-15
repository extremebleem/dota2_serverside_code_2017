
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_PlayerChallengeInfo::CDOTA_PlayerChallengeInfo  (line 52, @0x00000000025a1290, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, ChangeAccessorFieldPathIndex_t, EnsureValidValue<int>
void __fastcall CDOTA_PlayerChallengeInfo::CDOTA_PlayerChallengeInfo(CDOTA_PlayerChallengeInfo *const this)
{
  CEntityInstance *v1; // rax

  this->_vptr_CDOTA_PlayerChallengeInfo = &off_41009E0;
  this->__m_PathIndex.m_Value = -1;
  this->nType.m_Value = 0;
  this->nQuestID.m_Value = 0;
  v1 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->nQuestChallengeID.m_Value = 0;
  this->nTier.m_Value = 0;
  this->nParam0.m_Value = 0;
  this->nParam1.m_Value = 0;
  this->__m_pChainEntity.m_pObj = v1;
  this->nSlotID.m_Value = 0;
  this->nProgress.m_Value = 0;
  this->nCompletionThreshold.m_Value = 0;
  this->nPlayerID.m_Value = 0;
  this->nQueryIndex.m_Value = 0;
  this->nEventID.m_Value = 0;
  this->nSequenceID.m_Value = 0;
  this->nCompleted.m_Value = 0;
  this->nRank.m_Value = 0;
}


// CDOTASubChallengeInfo::CDOTASubChallengeInfo  (line 56, @0x00000000025a1330, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, ChangeAccessorFieldPathIndex_t, EnsureValidValue<int>
void __fastcall CDOTASubChallengeInfo::CDOTASubChallengeInfo(CDOTASubChallengeInfo *const this)
{
  CEntityInstance *v1; // rax

  this->_vptr_CDOTASubChallengeInfo = &off_4100A00;
  this->__m_PathIndex.m_Value = -1;
  this->nType.m_Value = 0;
  this->nTier.m_Value = 0;
  v1 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->nSlotID.m_Value = 0;
  this->nProgress.m_Value = 0;
  this->nCompletionThreshold.m_Value = 0;
  this->nPlayerID.m_Value = 0;
  this->__m_pChainEntity.m_pObj = v1;
  this->nQueryIndex.m_Value = 0;
  this->nEventID.m_Value = 0;
  this->nSequenceID.m_Value = 0;
  this->nRequiredHero.m_Value = 0;
  this->nCompleted.m_Value = 0;
}


// CIngameEvent_Base::GoActive  (line 65, @0x0000000002599e60, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: memcmp, CDOTA_PlayerChallengeInfo::NetworkStateChanged
void __fastcall CIngameEvent_Base::GoActive(CIngameEvent_Base *const this)
{
  unsigned int v2; // r12d
  char *v3; // r13
  char *v4; // rbx
  unsigned int v5; // r12d
  CNetworkArrayBase<int,100,CIngameEvent_Base::NetworkVar_m_ProgressForQueryID> *p_m_ProgressForQueryID; // rbx
  __int64 v7; // [rsp+0h] [rbp-80h]
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-78h]
  CDOTA_PlayerChallengeInfo *v9; // [rsp+10h] [rbp-70h]
  unsigned __int8 *v10; // [rsp+18h] [rbp-68h]
  unsigned __int8 *v11; // [rsp+20h] [rbp-60h]
  unsigned __int8 *v12; // [rsp+28h] [rbp-58h]
  unsigned __int8 *v13; // [rsp+30h] [rbp-50h]
  __int64 v14; // [rsp+38h] [rbp-48h]
  _DWORD s2[13]; // [rsp+4Ch] [rbp-34h] BYREF

  this->m_bInitialized = 0;
  if ( (*(this->_vptr_IHandleEntity + 211))(this) == 0 )
    goto LABEL_34;
  v7 = 0;
  p_m_Memory = &this->m_CompendiumChallengeInfo.m_Vector.m_Memory;
  do
  {
    v14 = 0;
    v13 = &p_m_Memory->m_Memory.m_Data[20];
    v2 = v7;
    v12 = &p_m_Memory->m_Memory.m_Data[32];
    v11 = &p_m_Memory->m_Memory.m_Data[36];
    v3 = this + v7;
    v10 = &p_m_Memory->m_Memory.m_Data[40];
    v4 = this + 4 * v7;
    do
    {
      s2[0] = -1;
      if ( memcmp(v4 + 780, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 780, v2, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeEventID.m_Value[v2] = -1;
      }
      s2[0] = -1;
      if ( memcmp(v4 + 876, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 876, v2, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeSequenceID.m_Value[v2] = -1;
      }
      s2[0] = -1;
      if ( memcmp(v4 + 972, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 972, v2, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCoinReward.m_Value[v2] = -1;
      }
      s2[0] = -1;
      if ( memcmp(v4 + 1068, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1068, v2, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCoinSplash.m_Value[v2] = -1;
      }
      s2[0] = -1;
      if ( memcmp(v4 + 1164, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1164, v2, 0xFFFFFFFFLL);
        this->m_CompendiumChallengePointReward.m_Value[v2] = -1;
      }
      v9 = &p_m_Memory->m_Memory.m_Data[v14];
      if ( *v13 != -1 )
      {
        CDOTA_PlayerChallengeInfo::NetworkStateChanged(&p_m_Memory->m_Memory.m_Data[v14], 20, 0xFFFFFFFFLL, -1);
        *v13 = -1;
      }
      if ( *v12 != -1 )
      {
        CDOTA_PlayerChallengeInfo::NetworkStateChanged(v9, 32, 0xFFFFFFFFLL, -1);
        *v12 = -1;
      }
      if ( *v11 != -1 )
      {
        CDOTA_PlayerChallengeInfo::NetworkStateChanged(v9, 36, 0xFFFFFFFFLL, -1);
        *v11 = -1;
      }
      if ( *v10 != -1 )
      {
        CDOTA_PlayerChallengeInfo::NetworkStateChanged(v9, 40, 0xFFFFFFFFLL, -1);
        *v10 = -1;
      }
      if ( v3[1260] != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1260, v2, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCompleted.m_Value[v2] = 0;
        if ( v3[1284] == 0 )
          goto LABEL_24;
      }
      else if ( v3[1284] == 0 )
      {
        goto LABEL_24;
      }
      (*(this->_vptr_IHandleEntity + 22))(this, 1284, v2, 0xFFFFFFFFLL);
      this->m_CompendiumChallengeFailed.m_Value[v2] = 0;
LABEL_24:
      s2[0] = -1;
      if ( memcmp(v4 + 1308, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1308, v2, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeProgress.m_Value[v2] = -1;
      }
      s2[0] = 0;
      if ( memcmp(v4 + 1404, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1404, v2, 0xFFFFFFFFLL);
        this->m_QueryIDForProgress.m_Value[v2] = 0;
      }
      s2[0] = 0;
      if ( memcmp(v4 + 4392, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4392, v2, 0xFFFFFFFFLL);
        this->m_PlayerQuestRankCompleted.m_Value[v2] = 0;
      }
      s2[0] = 0;
      if ( memcmp(v4 + 4352, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4352, v2, 0xFFFFFFFFLL);
        this->m_PlayerQuestRankPreviouslyCompleted.m_Value[v2] = 0;
      }
      v14 += 80;
      v4 += 4;
      ++v2;
      v10 += 80;
      ++v3;
      v11 += 80;
      v12 += 80;
      v13 += 80;
    }
    while ( v14 != 400 );
    v7 += 5;
    p_m_Memory = (p_m_Memory + 400);
  }
  while ( v7 != 10 );
LABEL_34:
  v5 = 0;
  p_m_ProgressForQueryID = &this->m_ProgressForQueryID;
  do
  {
    s2[0] = -1;
    if ( memcmp(p_m_ProgressForQueryID, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3552, v5, 0xFFFFFFFFLL);
      p_m_ProgressForQueryID->m_Value[0] = -1;
    }
    s2[0] = -1;
    if ( memcmp(&p_m_ProgressForQueryID[1], s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3952, v5, 0xFFFFFFFFLL);
      p_m_ProgressForQueryID[1].m_Value[0] = -1;
    }
    ++v5;
    p_m_ProgressForQueryID = (p_m_ProgressForQueryID + 4);
  }
  while ( v5 != 100 );
}


// CIngameEvent_Base::Spawn  (line 104, @0x0000000002593930, libserver.so)  // inlines: SetLessFunc
// calls: CBaseEntity::Spawn
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall CIngameEvent_Base::Spawn(CIngameEvent_Base *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  if ( this->m_mapCommunityGoalIncrements.m_Tree.m_LessFunc.m_LessFunc == 0 )
    this->m_mapCommunityGoalIncrements.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
}


// CIngameEvent_Base::Initialize  (line 113, @0x00000000025936b0, libserver.so)
void __fastcall CIngameEvent_Base::Initialize(CIngameEvent_Base *const this)
{
  this->m_bInitialized = 1;
}


// CIngameEvent_Base::AddResultToSignout  (line 119, @0x00000000025c2860, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints>::TypeHandler>, CUtlMemory, CUtlVector, CUtlVectorBase, GetGameWinner, New, add_additional_msgs, add_award_points, set_account_id, set_contents, set_event_id, set_has_account_id, set_has_contents, set_has_event_id, set_has_id, set_has_match_id, set_has_points, set_has_premium_points, set_id, set_match_id, set_points, set_premium_points, ~CUtlVector, ~basic_string
// calls: CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints, CDOTA_PlayerResource::GetPlayerIDsForTeam, CDOTA_PlayerResource::GetSteamAccountID, CDOTALobby::IsPermanentLeaver, CIngameEvent_Base::GetPlayerCompendiumChallengePointReward, CIngameEvent_Base::GetPlayerCompendiumChallengeCoinReward, CIngameEvent_Base::GetPlayerCompendiumCoinSplash, operator new, CMsgDOTAAwardEventPoints_AwardPoints::CMsgDOTAAwardEventPoints_AwardPoints, google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>, google::protobuf::MessageLite::SerializeAsString(void), std::string::assign(std::string const&) (18 total)
void __fastcall CIngameEvent_Base::AddResultToSignout(
        CIngameEvent_Base *const this,
        const CDOTALobby *pLobby,
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *pMsgSignOut)
{
  int v3; // eax
  __int64 v4; // r15
  int PlayerCompendiumChallengeCoinReward; // r14d
  __int64 v6; // r12
  int v7; // ebx
  int v8; // esi
  __int64 current_size; // rax
  CMsgDOTAAwardEventPoints_AwardPoints *v10; // r13
  __int64 v11; // rax
  int v12; // eax
  bool v13; // cc
  std::string **v14; // rax
  std::string **v15; // rbx
  int nCompendiumPointsEarned; // [rsp+30h] [rbp-D0h]
  AccountID_t nAccountID; // [rsp+34h] [rbp-CCh]
  char v21; // [rsp+4Fh] [rbp-B1h] BYREF
  std::string v22; // [rsp+50h] [rbp-B0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > winningPlayers; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[16]; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  google::protobuf::internal::RepeatedPtrFieldBase v26; // [rsp+98h] [rbp-68h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]

  if ( (*(this->_vptr_IHandleEntity + 211))(this) != 0 && (*(this->_vptr_IHandleEntity + 208))(this) <= 18 )
  {
    CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints(v24);
    v25 |= 2u;
    v27 = *(pLobby + 27);
    v3 = (*(this->_vptr_IHandleEntity + 208))(this);
    v25 |= 4u;
    v28 = v3;
    winningPlayers.m_Size = 0;
    winningPlayers.m_Memory.m_pMemory = 0;
    winningPlayers.m_Memory.m_nAllocationCount = 0;
    winningPlayers.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetPlayerIDsForTeam(
      g_pDOTAPlayerResource,
      *&g_pGameRules[16].m_szQuestName[80],
      &winningPlayers);
    if ( winningPlayers.m_Size > 0 )
    {
      v4 = 0;
      do
      {
        while ( 1 )
        {
          nAccountID = CDOTA_PlayerResource::GetSteamAccountID(
                         g_pDOTAPlayerResource,
                         winningPlayers.m_Memory.m_pMemory[v4]);
          if ( !CDOTALobby::IsPermanentLeaver(pLobby, nAccountID) )
          {
            nCompendiumPointsEarned = CIngameEvent_Base::GetPlayerCompendiumChallengePointReward(
                                        this,
                                        winningPlayers.m_Memory.m_pMemory[v4]);
            PlayerCompendiumChallengeCoinReward = CIngameEvent_Base::GetPlayerCompendiumChallengeCoinReward(
                                                    this,
                                                    winningPlayers.m_Memory.m_pMemory[v4]);
            if ( winningPlayers.m_Size > 0 )
            {
              v6 = 0;
              v7 = 0;
              do
              {
                v8 = winningPlayers.m_Memory.m_pMemory[v6];
                if ( winningPlayers.m_Memory.m_pMemory[v4] != v8 )
                  PlayerCompendiumChallengeCoinReward += CIngameEvent_Base::GetPlayerCompendiumCoinSplash(this, v8);
                ++v7;
                ++v6;
              }
              while ( winningPlayers.m_Size > v7 );
            }
            if ( PlayerCompendiumChallengeCoinReward > 0 || nCompendiumPointsEarned > 0 )
            {
              current_size = v26.current_size_;
              if ( v26.current_size_ < v26.allocated_size_ )
              {
                ++v26.current_size_;
                v10 = v26.elements_[current_size];
              }
              else
              {
                if ( v26.allocated_size_ == v26.total_size_ )
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v26, v26.allocated_size_ + 1);
                v10 = operator new(0x28u);
                CMsgDOTAAwardEventPoints_AwardPoints::CMsgDOTAAwardEventPoints_AwardPoints(v10);
                v11 = v26.current_size_;
                ++v26.allocated_size_;
                ++v26.current_size_;
                v26.elements_[v11] = v10;
              }
              v12 = *(v10 + 4);
              *(v10 + 6) = nAccountID;
              *(v10 + 4) = v12 | 1;
              if ( nCompendiumPointsEarned > 0 )
              {
                *(v10 + 4) = v12 | 3;
                *(v10 + 7) = nCompendiumPointsEarned;
              }
              if ( PlayerCompendiumChallengeCoinReward > 0 )
                break;
            }
          }
          if ( winningPlayers.m_Size <= ++v4 )
            goto LABEL_23;
        }
        *(v10 + 4) |= 4u;
        v13 = winningPlayers.m_Size <= ++v4;
        *(v10 + 8) = PlayerCompendiumChallengeCoinReward;
      }
      while ( !v13 );
    }
LABEL_23:
    v14 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>((pMsgSignOut->m_pProtoBufBody + 224));
    *(v14 + 4) |= 1u;
    v15 = v14;
    *(v14 + 8) = 7384;
    google::protobuf::MessageLite::SerializeAsString(&v22);
    *(v15 + 4) |= 2u;
    std::string::assign(v15[3], &v22);
    std::string::_Rep::_M_dispose(v22._M_dataplus._M_p - 24, &v21);
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&winningPlayers);
    CMsgDOTAAwardEventPoints::~CMsgDOTAAwardEventPoints(v24);
  }
}


// CIngameEvent_Base::PlayerSelectedHero  (line 173, @0x00000000025936c0, libserver.so)
void __fastcall CIngameEvent_Base::PlayerSelectedHero(CIngameEvent_Base *const this, unsigned int unPlayer1ID)
{
  ;
}


// CIngameEvent_Base::IncrementCommunityGoal  (line 193, @0x00000000025bfa00, libserver.so)  // inlines: Element, Find, FindElement, FindInsertionPosition, Insert, InsertAt, InsertOrReplace, LeftChild, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: IncrementCommunityGoal
void __fastcall CIngameEvent_Base::IncrementCommunityGoal(
        CIngameEvent_Base *const this,
        uint32 unGoalID,
        uint32 unIncrementAmount)
{
  CUtlMap<unsigned int,unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_mapCommunityGoalIncrements; // r15
  unsigned __int16 v7; // ax
  CUtlMap<unsigned int,unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // eax
  CUtlMap<unsigned int,unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t v9; // ebx
  unsigned __int16 v10; // ax
  unsigned __int16 m_Root; // r14
  unsigned __int16 m_Left; // ax
  char v13; // cl
  bool v14; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v16; // ax
  bool v17; // bl
  CUtlMap<unsigned int,unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  p_m_mapCommunityGoalIncrements = &this->m_mapCommunityGoalIncrements;
  search.key = unGoalID;
  v7 = CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_mapCommunityGoalIncrements.m_Tree,
         &search);
  if ( v7 == 0xFFFF )
    elem = 0;
  else
    elem = this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem;
  v9 = elem + unIncrementAmount;
  search.key = unGoalID;
  v10 = CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          &p_m_mapCommunityGoalIncrements->m_Tree,
          &search);
  if ( v10 != 0xFFFF )
  {
    this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem = v9;
    return;
  }
  search.key = unGoalID;
  m_Root = this->m_mapCommunityGoalIncrements.m_Tree.m_Root;
  search.elem = v9;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v17 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v14 = !this->m_mapCommunityGoalIncrements.m_Tree.m_LessFunc.m_LessFunc(
             &search,
             &this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
    m_pMemory = this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_pMemory;
    if ( v14 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v13 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_12;
LABEL_9:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v13 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_9;
LABEL_12:
  v17 = v13;
LABEL_13:
  v16 = CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &p_m_mapCommunityGoalIncrements->m_Tree,
          &search);
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &p_m_mapCommunityGoalIncrements->m_Tree,
    v16,
    m_Root,
    v17);
  ++this->m_mapCommunityGoalIncrements.m_Tree.m_NumElements;
}


// IncrementCommunityGoal  (line 202, @0x00000000025bfb40, libserver.so)
// calls: CDOTAGamerules::GetIngameEventByID, CDOTA_PlayerResource::IsEventOwnedForPlayerID, CIngameEvent_Base::IncrementCommunityGoal
// callers: CDOTA_Modifier_Radar_Thinker::OnIntervalThink, CDOTA_PlayerResource::SetSelectedHeroID, CDOTA_MapTree::CutDown, CDOTA_TempTree::CutDown, CDOTA_BaseNPC::Event_Killed, CDOTA_BaseNPC_Effigy_Statue::Event_Killed, CDOTA_Ability_AntiMage_Blink::OnSpellStart, CDOTA_Ability_QueenOfPain_Blink::OnSpellStart, CDOTA_Item_BlinkDagger::OnSpellStart, CDOTA_Item_TeleportScroll::OnChannelFinish
void __fastcall IncrementCommunityGoal(
        EEvent eEvent,
        EEventCommunityGoals_t eEventCommunityGoal,
        uint32 unIncrementCount,
        int nPlayerID)
{
  CIngameEvent_Base *IngameEventByID; // rax
  CIngameEvent_Base *v8; // rbx

  IngameEventByID = CDOTAGamerules::GetIngameEventByID(g_pGameRules, eEvent);
  v8 = IngameEventByID;
  if ( IngameEventByID != 0
    && (*(IngameEventByID->_vptr_IHandleEntity + 209))(IngameEventByID) != 0
    && g_pDOTAPlayerResource != 0
    && CDOTA_PlayerResource::IsEventOwnedForPlayerID(g_pDOTAPlayerResource, nPlayerID) )
  {
    CIngameEvent_Base::IncrementCommunityGoal(v8, eEventCommunityGoal, unIncrementCount);
  }
}


// CIngameEvent_Base::AddCommunityGoalResultToSignout  (line 216, @0x00000000025c3f20, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgSignOutCommunityGoalProgress_EventGoalIncrement>::TypeHandler>, Element, IsIdxValid, IsValidIndex, LeftChild, New, add_additional_msgs, add_event_increments, operator[], set_contents, set_event_goal_id, set_event_id, set_has_contents, set_has_event_goal_id, set_has_event_id, set_has_id, set_has_increment_amount, set_id, set_increment_amount, ~basic_string
// calls: CMsgSignOutCommunityGoalProgress::CMsgSignOutCommunityGoalProgress, operator new, CMsgSignOutCommunityGoalProgress_EventGoalIncrement::CMsgSignOutCommunityGoalProgress_EventGoalIncrement, CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg, google::protobuf::MessageLite::SerializeAsString(void), std::string::assign(std::string const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), CMsgSignOutCommunityGoalProgress::~CMsgSignOutCommunityGoalProgress, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), _Unwind_Resume, operator delete
// callers: CDOTAGamerules::IngameEvents_AddResultToSignout
void __fastcall CIngameEvent_Base::AddCommunityGoalResultToSignout(
        CIngameEvent_Base *const this,
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *pMsgSignOut)
{
  int m_nAllocationCount; // eax
  __int64 v4; // r12
  int v5; // ebx
  UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int>::Node_t,short unsigned int> *m_pMemory; // rcx
  UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int>::Node_t,short unsigned int> *v7; // rcx
  __int64 current_size; // rax
  CMsgSignOutCommunityGoalProgress_EventGoalIncrement *v9; // r14
  __int64 v10; // rax
  CUtlMap<unsigned int,unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t key; // edx
  int v12; // ecx
  CUtlMap<unsigned int,unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::ElemType_t elem; // edx
  CMsgGameMatchSignOut *m_pProtoBufBody; // rbx
  __int64 v15; // rax
  int v16; // edx
  CMsgGameMatchSignOut_CAdditionalSignoutMsg *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  CMsgGameMatchSignOut_CAdditionalSignoutMsg *v20; // rbx
  __int64 v21; // rdx
  char v23; // [rsp+1Fh] [rbp-81h] BYREF
  std::string v24; // [rsp+20h] [rbp-80h] BYREF
  _BYTE v25[16]; // [rsp+30h] [rbp-70h] BYREF
  int v26; // [rsp+40h] [rbp-60h]
  google::protobuf::internal::RepeatedPtrFieldBase v27; // [rsp+48h] [rbp-58h] BYREF
  int v28; // [rsp+60h] [rbp-40h]

  CMsgSignOutCommunityGoalProgress::CMsgSignOutCommunityGoalProgress(v25);
  v28 = (*(this->_vptr_IHandleEntity + 207))(this);
  m_nAllocationCount = this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nAllocationCount;
  v4 = 0;
  v26 |= 1u;
  v5 = 0;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      while ( 1 )
      {
        if ( v5 < m_nAllocationCount && v5 <= this->m_mapCommunityGoalIncrements.m_Tree.m_LastAlloc.index )
        {
          m_pMemory = this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_pMemory;
          if ( m_pMemory[v5].m_Left != v5 )
          {
            v7 = &m_pMemory[v4];
            if ( v7->m_Data.elem != 0 )
              break;
          }
        }
        ++v5;
        ++v4;
        if ( m_nAllocationCount <= v5 )
          goto LABEL_13;
      }
      current_size = v27.current_size_;
      if ( v27.current_size_ < v27.allocated_size_ )
      {
        ++v27.current_size_;
        v9 = v27.elements_[current_size];
      }
      else
      {
        if ( v27.allocated_size_ == v27.total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v27, v27.allocated_size_ + 1);
        v9 = operator new(0x20u);
        CMsgSignOutCommunityGoalProgress_EventGoalIncrement::CMsgSignOutCommunityGoalProgress_EventGoalIncrement(v9);
        v10 = v27.current_size_;
        ++v27.allocated_size_;
        ++v27.current_size_;
        v27.elements_[v10] = v9;
        v7 = &this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_pMemory[v4];
      }
      ++v5;
      key = v7->m_Data.key;
      v12 = *(v9 + 4);
      *(v9 + 6) = key;
      *(v9 + 4) = v12 | 1;
      elem = this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem;
      *(v9 + 4) = v12 | 3;
      ++v4;
      *(v9 + 7) = elem;
      m_nAllocationCount = this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nAllocationCount;
    }
    while ( m_nAllocationCount > v5 );
  }
LABEL_13:
  m_pProtoBufBody = pMsgSignOut->m_pProtoBufBody;
  v15 = *(m_pProtoBufBody + 58);
  v16 = *(m_pProtoBufBody + 59);
  if ( v15 < v16 )
  {
    v21 = *(m_pProtoBufBody + 28);
    *(m_pProtoBufBody + 58) = v15 + 1;
    v20 = *(v21 + 8 * v15);
  }
  else
  {
    if ( v16 == *(m_pProtoBufBody + 60) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve((m_pProtoBufBody + 224), v16 + 1);
    v17 = operator new(0x28u);
    CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg(v17);
    v18 = *(m_pProtoBufBody + 58);
    v19 = *(m_pProtoBufBody + 28);
    ++*(m_pProtoBufBody + 59);
    *(m_pProtoBufBody + 58) = v18 + 1;
    v20 = v17;
    *(v19 + 8 * v18) = v17;
  }
  *(v20 + 4) |= 1u;
  *(v20 + 8) = 8150;
  google::protobuf::MessageLite::SerializeAsString(&v24);
  *(v20 + 4) |= 2u;
  std::string::assign(*(v20 + 3), &v24);
  std::string::_Rep::_M_dispose(v24._M_dataplus._M_p - 24, &v23);
  CMsgSignOutCommunityGoalProgress::~CMsgSignOutCommunityGoalProgress(v25);
}


// CIngameEvent_Base::SetPlayerCompendiumChallenge  (line 239, @0x00000000025a13b0, libserver.so)  // inlines: Element, Get, GetArrayIndexForPlayerID, GetForModify, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>, operator[]
// calls: Msg, memcmp
// callers: CDOTAChallengeSystem::InternalSetPlayerChallenge
// strings: "Setting Player Challenge for playerID %d, quest id: %d, challenge id: %d\n"
void __fastcall CIngameEvent_Base::SetPlayerCompendiumChallenge(
        CIngameEvent_Base *const this,
        int nPlayerID,
        int nEventID,
        int nSequenceID,
        int nType,
        int nTier,
        int nParam0,
        int nParam1,
        int nSlotID,
        int nQuestID,
        int nQuestChallengeID,
        int nQuestRank)
{
  int v16; // eax
  int v17; // r8d
  int v18; // eax
  int v19; // r8d
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  unsigned int nTypeb; // [rsp+4h] [rbp-4Ch]
  int nTypec; // [rsp+4h] [rbp-4Ch]
  int nSequenceIDa; // [rsp+8h] [rbp-48h] BYREF
  int nEventIDa[4]; // [rsp+Ch] [rbp-44h] BYREF
  _DWORD s2[13]; // [rsp+1Ch] [rbp-34h] BYREF

  nEventIDa[0] = nEventID;
  nSequenceIDa = nSequenceID;
  if ( nPlayerID != -1 && nEventID != -1 && nSequenceID != -1 )
  {
    Msg(
      "Setting Player Challenge for playerID %d, quest id: %d, challenge id: %d\n",
      nPlayerID,
      nQuestID,
      nQuestChallengeID);
    if ( nPlayerID <= 9 )
    {
      v16 = memcmp(&this->m_CompendiumChallengeEventID.m_Value[nPlayerID], nEventIDa, 4u);
      v17 = nType;
      if ( v16 != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 780, nPlayerID, 0xFFFFFFFFLL);
        v17 = nType;
        this->m_CompendiumChallengeEventID.m_Value[nPlayerID] = nEventID;
      }
      nTypeb = v17;
      v18 = memcmp(&this->m_CompendiumChallengeSequenceID.m_Value[nPlayerID], &nSequenceIDa, 4u);
      v19 = nTypeb;
      if ( v18 != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 876, nPlayerID, 0xFFFFFFFFLL, nTypeb);
        v19 = nTypeb;
        this->m_CompendiumChallengeSequenceID.m_Value[nPlayerID] = nSequenceID;
      }
      if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 20] != v19 )
      {
        v20 = *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 8];
        if ( v20 != 0
          && (*(v20[1] + 49LL) & 4) == 0
          && *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16] != 0xFFFF )
        {
          nTypec = v19;
          (*(*v20 + 176LL))(
            v20,
            20,
            0xFFFFFFFFLL,
            *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16]);
          v19 = nTypec;
        }
        *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 20] = v19;
      }
      if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 32] != nTier )
      {
        v21 = *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 8];
        if ( v21 != 0
          && (*(v21[1] + 49LL) & 4) == 0
          && *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16] != 0xFFFF )
        {
          (*(*v21 + 176LL))(
            v21,
            32,
            0xFFFFFFFFLL,
            *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16]);
        }
        *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 32] = nTier;
      }
      if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 36] != nParam0 )
      {
        v22 = *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 8];
        if ( v22 != 0
          && (*(v22[1] + 49LL) & 4) == 0
          && *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16] != 0xFFFF )
        {
          (*(*v22 + 176LL))(
            v22,
            36,
            0xFFFFFFFFLL,
            *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16]);
        }
        *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 36] = nParam0;
      }
      if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 40] != nParam1 )
      {
        v23 = *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 8];
        if ( v23 != 0
          && (*(v23[1] + 49LL) & 4) == 0
          && *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16] != 0xFFFF )
        {
          (*(*v23 + 176LL))(
            v23,
            40,
            0xFFFFFFFFLL,
            *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16]);
        }
        *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 40] = nParam1;
      }
      if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 44] != nSlotID )
      {
        v24 = *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 8];
        if ( v24 != 0
          && (*(v24[1] + 49LL) & 4) == 0
          && *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16] != 0xFFFF )
        {
          (*(*v24 + 176LL))(
            v24,
            44,
            0xFFFFFFFFLL,
            *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16]);
        }
        *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 44] = nSlotID;
      }
      if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 24] != nQuestID )
      {
        v25 = *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 8];
        if ( v25 != 0
          && (*(v25[1] + 49LL) & 4) == 0
          && *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16] != 0xFFFF )
        {
          (*(*v25 + 176LL))(
            v25,
            24,
            0xFFFFFFFFLL,
            *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16]);
        }
        *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 24] = nQuestID;
      }
      if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 28] != nQuestChallengeID )
      {
        v26 = *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 8];
        if ( v26 != 0
          && (*(v26[1] + 49LL) & 4) == 0
          && *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16] != 0xFFFF )
        {
          (*(*v26 + 176LL))(
            v26,
            28,
            0xFFFFFFFFLL,
            *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 16]);
        }
        *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 28] = nQuestChallengeID;
      }
      if ( memcmp(&this->m_PlayerQuestRankPreviouslyCompleted.m_Value[nPlayerID], &nQuestRank, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4352, nPlayerID, 0xFFFFFFFFLL);
        this->m_PlayerQuestRankPreviouslyCompleted.m_Value[nPlayerID] = nQuestRank;
      }
      if ( this->m_CompendiumChallengeCompleted.m_Value[nPlayerID] )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1260, nPlayerID, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCompleted.m_Value[nPlayerID] = 0;
      }
      if ( this->m_CompendiumChallengeFailed.m_Value[nPlayerID] )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1284, nPlayerID, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeFailed.m_Value[nPlayerID] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&this->m_CompendiumChallengeCoinReward.m_Value[nPlayerID], s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 972, nPlayerID, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCoinReward.m_Value[nPlayerID] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&this->m_CompendiumChallengeCoinSplash.m_Value[nPlayerID], s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1068, nPlayerID, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeCoinSplash.m_Value[nPlayerID] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&this->m_CompendiumChallengePointReward.m_Value[nPlayerID], s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1164, nPlayerID, 0xFFFFFFFFLL);
        this->m_CompendiumChallengePointReward.m_Value[nPlayerID] = 0;
      }
      s2[0] = -1;
      if ( memcmp(&this->m_CompendiumChallengeProgress.m_Value[nPlayerID], s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1308, nPlayerID, 0xFFFFFFFFLL);
        this->m_CompendiumChallengeProgress.m_Value[nPlayerID] = -1;
      }
    }
  }
}


// CIngameEvent_Base::ClearPlayerCompendiumChallenge  (line 268, @0x00000000025b8320, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Element, Get, GetForModify, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Remove, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator=<int>, operator[]
// calls: memcmp, CDOTA_PlayerChallengeInfo::NetworkStateChanged, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>::Resolve, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<CDOTA_CombatLogQueryProgress, CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress, -1> >::ShiftElementsLeft, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath (14 total)
// callers: CDOTAChallengeSystem::ClearChallengeForPlayer
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CIngameEvent_Base::ClearPlayerCompendiumChallenge(CIngameEvent_Base *const this, int nPlayerID)
{
  int v3; // r14d
  __int64 v4; // r13
  char *v5; // rax
  CEntityInstance *v6; // rdi
  int v7; // esi
  __int64 v8; // r12
  int v9; // r13d
  CEntityInstance *m_pObj; // rcx
  void (__fastcall *v11)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *, bool *); // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v13; // rdx
  size_t v14; // rdx
  void **v15; // rsi
  __int64 m_nCount; // rdx
  __int64 v17; // rdx
  CFieldPath *m_pPaths; // rsi
  int16 v19; // cx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  CDOTA_CombatLogQueryProgress *v25; // rdx
  ChangeAccessorFieldPathIndex_t v26; // ax
  CEntityInstance *v27; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v30; // rdi
  __int64 v31; // [rsp+8h] [rbp-D8h]
  CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *p_m_PlayerQueryIDs; // [rsp+20h] [rbp-C0h]
  CEntityInstance *v34; // [rsp+38h] [rbp-A8h]
  ChangeAccessorFieldPathIndex_t *v35; // [rsp+38h] [rbp-A8h]
  CFieldPath *dest; // [rsp+40h] [rbp-A0h]
  CFieldPath v37; // [rsp+50h] [rbp-90h] BYREF
  void *src[2]; // [rsp+70h] [rbp-70h] BYREF
  __int16 v39; // [rsp+80h] [rbp-60h]
  char v40; // [rsp+82h] [rbp-5Eh]
  LeafCodeInfo_t s2[3]; // [rsp+90h] [rbp-50h] BYREF

  if ( nPlayerID > 9 )
    return;
  LODWORD(s2[0].m_szFile) = -1;
  if ( memcmp(&this->m_CompendiumChallengeEventID.m_Value[nPlayerID], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 780, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengeEventID.m_Value[nPlayerID] = s2[0].m_szFile;
  }
  LODWORD(s2[0].m_szFile) = -1;
  if ( memcmp(&this->m_CompendiumChallengeSequenceID.m_Value[nPlayerID], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 876, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengeSequenceID.m_Value[nPlayerID] = s2[0].m_szFile;
  }
  if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 20] != -1 )
  {
    CDOTA_PlayerChallengeInfo::NetworkStateChanged(
      &this->m_CompendiumChallengeInfo.m_Vector.m_Memory + nPlayerID,
      20,
      0xFFFFFFFFLL,
      -1);
    *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 20] = -1;
  }
  if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 32] != -1 )
  {
    CDOTA_PlayerChallengeInfo::NetworkStateChanged(
      &this->m_CompendiumChallengeInfo.m_Vector.m_Memory + nPlayerID,
      32,
      0xFFFFFFFFLL,
      -1);
    *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 32] = -1;
  }
  if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 36] != -1 )
  {
    CDOTA_PlayerChallengeInfo::NetworkStateChanged(
      &this->m_CompendiumChallengeInfo.m_Vector.m_Memory + nPlayerID,
      36,
      0xFFFFFFFFLL,
      -1);
    *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 36] = -1;
  }
  if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 40] != -1 )
  {
    CDOTA_PlayerChallengeInfo::NetworkStateChanged(
      &this->m_CompendiumChallengeInfo.m_Vector.m_Memory + nPlayerID,
      40,
      0xFFFFFFFFLL,
      -1);
    *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 40] = -1;
  }
  if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 44] != -1 )
  {
    CDOTA_PlayerChallengeInfo::NetworkStateChanged(
      &this->m_CompendiumChallengeInfo.m_Vector.m_Memory + nPlayerID,
      44,
      0xFFFFFFFFLL,
      -1);
    *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 44] = -1;
  }
  if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 24] != -1 )
  {
    CDOTA_PlayerChallengeInfo::NetworkStateChanged(
      &this->m_CompendiumChallengeInfo.m_Vector.m_Memory + nPlayerID,
      24,
      0xFFFFFFFFLL,
      -1);
    *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 24] = -1;
  }
  if ( *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 28] != -1 )
  {
    CDOTA_PlayerChallengeInfo::NetworkStateChanged(
      &this->m_CompendiumChallengeInfo.m_Vector.m_Memory + nPlayerID,
      28,
      0xFFFFFFFFLL,
      -1);
    *&this->m_CompendiumChallengeInfo.m_Vector.m_Memory.m_Memory.m_Data[80 * nPlayerID + 28] = -1;
  }
  LODWORD(s2[0].m_szFile) = 0;
  if ( memcmp(&this->m_PlayerQuestRankPreviouslyCompleted.m_Value[nPlayerID], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4352, nPlayerID, 0xFFFFFFFFLL);
    this->m_PlayerQuestRankPreviouslyCompleted.m_Value[nPlayerID] = s2[0].m_szFile;
  }
  LODWORD(s2[0].m_szFile) = -1;
  if ( memcmp(&this->m_CompendiumChallengeCoinReward.m_Value[nPlayerID], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 972, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengeCoinReward.m_Value[nPlayerID] = s2[0].m_szFile;
  }
  LODWORD(s2[0].m_szFile) = -1;
  if ( memcmp(&this->m_CompendiumChallengeCoinSplash.m_Value[nPlayerID], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1068, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengeCoinSplash.m_Value[nPlayerID] = s2[0].m_szFile;
  }
  LODWORD(s2[0].m_szFile) = -1;
  if ( memcmp(&this->m_CompendiumChallengePointReward.m_Value[nPlayerID], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengePointReward.m_Value[nPlayerID] = s2[0].m_szFile;
  }
  if ( this->m_CompendiumChallengeCompleted.m_Value[nPlayerID] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1260, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengeCompleted.m_Value[nPlayerID] = 0;
  }
  if ( this->m_CompendiumChallengeFailed.m_Value[nPlayerID] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1284, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengeFailed.m_Value[nPlayerID] = 0;
  }
  LODWORD(s2[0].m_szFile) = -1;
  if ( memcmp(&this->m_CompendiumChallengeProgress.m_Value[nPlayerID], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1308, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengeProgress.m_Value[nPlayerID] = s2[0].m_szFile;
  }
  v3 = this->m_PlayerQueryIDs.m_Vector.m_Size - 1;
  if ( v3 < 0 )
    return;
  p_m_PlayerQueryIDs = &this->m_PlayerQueryIDs;
  v4 = 288LL * v3;
  dest = &this->m_PlayerQueryIDs.m_PathToVector;
  while ( 1 )
  {
    v5 = this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory + v4;
    if ( v5 != 0 && nPlayerID == *(v5 + 3) )
      break;
LABEL_36:
    --v3;
    v4 -= 288;
    if ( v3 == -1 )
      return;
  }
  CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::Resolve(p_m_PlayerQueryIDs);
  if ( !this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded )
    EntityInstanceSetNetworkStateChanged(this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj);
  CUtlVectorBase<CDOTA_CombatLogQueryProgress,CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress,-1>>::ShiftElementsLeft(
    &p_m_PlayerQueryIDs->m_Vector,
    v3,
    1);
  --this->m_PlayerQueryIDs.m_Vector.m_Size;
  CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::Resolve(p_m_PlayerQueryIDs);
  if ( this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded || this->m_PlayerQueryIDs.m_Vector.m_Size <= 0 )
  {
LABEL_72:
    m_pArraySizeChangedDelegate = this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate;
    if ( m_pArraySizeChangedDelegate != 0 )
    {
      pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
      v30 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v30 - 1);
      pfn(v30);
    }
    goto LABEL_36;
  }
  v8 = 0;
  v31 = v4;
  v9 = 0;
  while ( 1 )
  {
    if ( !this->m_PlayerQueryIDs.m_bResolved )
    {
      m_pObj = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
      this->m_PlayerQueryIDs.m_bResolved = 1;
      if ( m_pObj != 0 )
      {
        v34 = m_pObj;
        v11 = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
        v11(
          src,
          g_pFlattenedSerializers,
          NetworkSerializerForEntityInstance,
          v34,
          p_m_PlayerQueryIDs,
          &this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded);
        if ( dest != src )
        {
          v13 = v39;
          this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( v13 > 6 )
            goto LABEL_81;
          this->m_PlayerQueryIDs.m_PathToVector.m_nCount = v13;
          if ( v13 > 0 )
          {
            v14 = 2 * v13;
            v15 = src;
            if ( v40 != 0 )
              v15 = src[0];
            memcpy(dest, v15, v14);
          }
        }
      }
      else
      {
        if ( this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
          CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::Resolve(v6);
        this->m_PlayerQueryIDs.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded )
      break;
LABEL_70:
    ++v9;
    ++v8;
    if ( v9 >= this->m_PlayerQueryIDs.m_Vector.m_Size )
    {
      v4 = v31;
      goto LABEL_72;
    }
  }
  m_nCount = this->m_PlayerQueryIDs.m_PathToVector.m_nCount;
  v37.m_bUsingExternalPaths = 0;
  v37.m_nCount = 0;
  if ( m_nCount <= 6 )
  {
    v37.m_nCount = m_nCount;
    if ( m_nCount <= 0 )
    {
      v19 = v9;
    }
    else
    {
      v17 = 2 * m_nCount;
      if ( this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
        m_pPaths = this->m_PlayerQueryIDs.m_PathToVector.u.m_pPaths;
      else
        m_pPaths = &this->m_PlayerQueryIDs.m_PathToVector;
      __memcpy_chk(&v37, m_pPaths, v17, 24);
      v19 = v9;
      if ( v37.m_bUsingExternalPaths )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          s2[0].m_szFile = "../../public/tier2/fieldpath.h";
          s2[0].m_szFunction = "Path_AddToTail";
          s2[0].m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            s2,
            "Path_AddToTail failed for read only CFieldPath");
        }
        goto LABEL_60;
      }
    }
    v24 = v37.m_nCount;
    if ( v37.m_nCount > 5 )
      CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::AssignPathIdToElement(
        v6,
        v7);
    v6 = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
    ++v37.m_nCount;
    v25 = &this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory[v8];
    v37.u.m_FixedPaths[v24].m_nValue = v19;
    if ( v6 != 0 )
    {
      v35 = v25;
      v26.m_Value = EntityInstanceAddChangeAccessorPath(v6, &v37).m_Value;
      v25 = v35;
      v35[4].m_Value = v26.m_Value;
    }
    else
    {
      v25->__m_PathIndex.m_Value = -1;
    }
    v27 = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
    if ( v27 != v25->__m_pChainEntity.m_pObj )
      v25->__m_pChainEntity.m_pObj = v27;
    goto LABEL_70;
  }
LABEL_81:
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    s2[0].m_nLine = 442;
    s2[0].m_szFile = "../../public/tier2/fieldpath.h";
    s2[0].m_szFunction = "Path_SetCount";
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      s2,
      "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
      6);
  }
LABEL_60:
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
}


// CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted  (line 306, @0x00000000025a1bd0, libserver.so)  // inlines: GetArrayIndexForPlayerID, GetPlayerCompendiumLevel, NetworkStateChanged, Set
// calls: CIngameEvent_Base::GetPlayerCompendiumChallengeInfo, CDOTA_PlayerResource::GetTeam, CIngameEvent_Base::GetTeamCompendiumLevel, CIngameEvent_Base::GetPlayerCompendiumLevel, TI2015_GetCompletedChallengeCoins, TI2015_GetChallengePointsValue, memcmp
// callers: CDOTAChallengeSystem::OnQuerySucceeded
void __fastcall CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted(CIngameEvent_Base *const this, int nPlayerID)
{
  const CDOTA_PlayerChallengeInfo *PlayerCompendiumChallengeInfo; // r13
  int Team; // eax
  int TeamCompendiumLevel; // eax
  uint32 m_Value; // r14d
  uint32 v8; // r15d
  uint32 PlayerCompendiumLevel; // eax
  uint32 ChallengePointsValue; // r15d
  uint32 v11; // [rsp+Ch] [rbp-44h]
  uint32 v12; // [rsp+Ch] [rbp-44h]
  uint32 unCoinReward; // [rsp+14h] [rbp-3Ch] BYREF
  uint32 unCoinSplash; // [rsp+18h] [rbp-38h] BYREF
  _DWORD s2[13]; // [rsp+1Ch] [rbp-34h] BYREF

  if ( nPlayerID != -1 )
  {
    PlayerCompendiumChallengeInfo = CIngameEvent_Base::GetPlayerCompendiumChallengeInfo(this, nPlayerID);
    if ( PlayerCompendiumChallengeInfo != 0 )
    {
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nPlayerID);
      TeamCompendiumLevel = CIngameEvent_Base::GetTeamCompendiumLevel(this, Team);
      m_Value = PlayerCompendiumChallengeInfo->nTier.m_Value;
      v8 = TeamCompendiumLevel;
      unCoinSplash = 0;
      PlayerCompendiumLevel = CIngameEvent_Base::GetPlayerCompendiumLevel(this, nPlayerID);
      TI2015_GetCompletedChallengeCoins(m_Value, PlayerCompendiumLevel, v8, &unCoinReward, &unCoinSplash);
      ChallengePointsValue = TI2015_GetChallengePointsValue(m_Value, PlayerCompendiumChallengeInfo->nSlotID.m_Value);
      if ( nPlayerID <= 9 )
      {
        if ( !this->m_CompendiumChallengeCompleted.m_Value[nPlayerID] )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1260, nPlayerID, 0xFFFFFFFFLL);
          this->m_CompendiumChallengeCompleted.m_Value[nPlayerID] = 1;
        }
        v11 = unCoinReward;
        s2[0] = unCoinReward;
        if ( memcmp(&this->m_CompendiumChallengeCoinReward.m_Value[nPlayerID], s2, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 972, nPlayerID, 0xFFFFFFFFLL);
          this->m_CompendiumChallengeCoinReward.m_Value[nPlayerID] = v11;
        }
        v12 = unCoinSplash;
        s2[0] = unCoinSplash;
        if ( memcmp(&this->m_CompendiumChallengeCoinSplash.m_Value[nPlayerID], s2, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1068, nPlayerID, 0xFFFFFFFFLL);
          this->m_CompendiumChallengeCoinSplash.m_Value[nPlayerID] = v12;
        }
        s2[0] = ChallengePointsValue;
        if ( memcmp(&this->m_CompendiumChallengePointReward.m_Value[nPlayerID], s2, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1164, nPlayerID, 0xFFFFFFFFLL);
          this->m_CompendiumChallengePointReward.m_Value[nPlayerID] = ChallengePointsValue;
        }
        if ( this->m_CompendiumChallengeFailed.m_Value[nPlayerID] )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1284, nPlayerID, 0xFFFFFFFFLL);
          this->m_CompendiumChallengeFailed.m_Value[nPlayerID] = 0;
        }
      }
    }
  }
}


// CIngameEvent_Base::SetPlayerCompendiumChallengeFailed  (line 335, @0x00000000025a1880, libserver.so)  // inlines: NetworkStateChanged, Set
// callers: CDOTAChallengeSystem::OnQueryFailed
void __fastcall CIngameEvent_Base::SetPlayerCompendiumChallengeFailed(CIngameEvent_Base *const this, int nPlayerID)
{
  __int64 v2; // r12

  if ( nPlayerID <= 9 )
  {
    v2 = nPlayerID;
    if ( !this->m_CompendiumChallengeFailed.m_Value[nPlayerID] )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1284, nPlayerID, 0xFFFFFFFFLL);
      this->m_CompendiumChallengeFailed.m_Value[v2] = 1;
    }
  }
}


// CIngameEvent_Base::SetPlayerCompendiumChallengeProgress  (line 349, @0x00000000025a18d0, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
void __fastcall CIngameEvent_Base::SetPlayerCompendiumChallengeProgress(
        CIngameEvent_Base *const this,
        int nPlayerID,
        int nProgress)
{
  int nProgressa[9]; // [rsp+Ch] [rbp-24h] BYREF

  nProgressa[0] = nProgress;
  if ( nPlayerID <= 9 && memcmp(&this->m_CompendiumChallengeProgress.m_Value[nPlayerID], nProgressa, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1308, nPlayerID, 0xFFFFFFFFLL);
    this->m_CompendiumChallengeProgress.m_Value[nPlayerID] = nProgressa[0];
  }
}


// CIngameEvent_Base::AddPlayerCombatLogIndexForProgress  (line 364, @0x00000000025bf330, libserver.so)  // inlines: AddToTail, AssignPathIdToElement, CDOTA_CombatLogQueryProgress, CEntityOwnerPtr, CFieldPath, CNetworkVarBase, CSmartPtr, ChangeAccessorFieldPathIndex_t, Clear, Construct<CDOTA_CombatLogQueryProgress>, Element, EnsureValidValue<int>, Get, GetPathData, GrowMemory, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator=<int>, operator[]
// calls: CDOTA_PlayerResource::IsValidPlayerID, GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, memcmp, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>::Resolve, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Grow (14 total)
// callers: CDOTAChallengeSystem::GenerateBasicQuery, CDOTAChallengeSystem::GenerateMultiQuery, CDOTAChallengeSystem::GenerateRankedQuery, CDOTAChallengeSystem::GenerateRankedMultiQuery
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CIngameEvent_Base::AddPlayerCombatLogIndexForProgress(
        CIngameEvent_Base *const this,
        int nPlayerID,
        int nQueryID,
        int nQueryRank,
        int nMultiQueryID)
{
  CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *p_m_PathToVector; // rdi
  int v10; // esi
  CEntityInstance *m_pObj; // rcx
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  void **v13; // r15
  __int64 v14; // rdx
  size_t v15; // rdx
  void **v16; // rsi
  int m_Size; // eax
  __int64 v18; // r11
  char *v19; // rax
  CEntityInstance *v20; // rcx
  FlattenedSerializerHandle_t v21; // rdx
  void **v22; // rax
  __int64 v23; // rdx
  size_t v24; // rdx
  __int64 m_nCount; // rax
  CFieldPath *m_pPaths; // rsi
  int16 v27; // cx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  CEntityInstance *v33; // rdi
  ChangeAccessorFieldPathIndex_t *v34; // r15
  ChangeAccessorFieldPathIndex_t v35; // ax
  CEntityInstance *v36; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v39; // rdi
  bool v40; // zf
  char *v41; // r11
  char *v42; // r15
  _QWORD *v43; // rdi
  _QWORD *v44; // rdi
  _QWORD *v45; // rdi
  _QWORD *v46; // rdi
  void (__fastcall *v47)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *, bool *); // [rsp+10h] [rbp-D0h]
  CEntityInstance *v48; // [rsp+10h] [rbp-D0h]
  CEntityInstance *v49; // [rsp+18h] [rbp-C8h]
  void (__fastcall *v50)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *, bool *); // [rsp+18h] [rbp-C8h]
  CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *p_m_PlayerQueryIDs; // [rsp+20h] [rbp-C0h]
  __int64 v52; // [rsp+20h] [rbp-C0h]
  __int64 v53; // [rsp+20h] [rbp-C0h]
  __int64 v54; // [rsp+20h] [rbp-C0h]
  void *src[2]; // [rsp+30h] [rbp-B0h] BYREF
  __int16 v57; // [rsp+40h] [rbp-A0h]
  char v58; // [rsp+42h] [rbp-9Eh]
  CFieldPath path; // [rsp+50h] [rbp-90h] BYREF
  void *v60[2]; // [rsp+70h] [rbp-70h] BYREF
  __int16 v61; // [rsp+80h] [rbp-60h]
  char v62; // [rsp+82h] [rbp-5Eh]
  LeafCodeInfo_t s2[3]; // [rsp+90h] [rbp-50h] BYREF

  if ( nPlayerID == -1 || !CDOTA_PlayerResource::IsValidPlayerID(g_pDOTAPlayerResource, nPlayerID) || nQueryID > 0x63 )
    return;
  p_m_PlayerQueryIDs = &this->m_PlayerQueryIDs;
  if ( !this->m_PlayerQueryIDs.m_bResolved )
  {
    m_pObj = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
    this->m_PlayerQueryIDs.m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v49 = m_pObj;
      v47 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v13 = src;
      v47(
        src,
        g_pFlattenedSerializers,
        NetworkSerializerForEntityInstance,
        v49,
        p_m_PlayerQueryIDs,
        &this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded);
      p_m_PathToVector = &this->m_PlayerQueryIDs.m_PathToVector;
      if ( &this->m_PlayerQueryIDs.m_PathToVector != src )
      {
        v14 = v57;
        this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v14 > 6 )
          goto LABEL_81;
        this->m_PlayerQueryIDs.m_PathToVector.m_nCount = v14;
        if ( v14 > 0 )
        {
          v15 = 2 * v14;
          v16 = src;
          if ( v58 != 0 )
            v16 = src[0];
          memcpy(p_m_PathToVector, v16, v15);
        }
      }
    }
    else
    {
      if ( this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
        goto LABEL_79;
      this->m_PlayerQueryIDs.m_PathToVector.m_nCount = 0;
    }
  }
  if ( !this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded )
    EntityInstanceSetNetworkStateChanged(this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj);
  LODWORD(v13) = this->m_PlayerQueryIDs.m_Vector.m_Size;
  m_Size = v13;
  if ( v13 == this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Grow(&this->m_PlayerQueryIDs.m_Vector.m_Memory, 1);
    m_Size = this->m_PlayerQueryIDs.m_Vector.m_Size;
  }
  this->m_PlayerQueryIDs.m_Vector.m_Size = m_Size + 1;
  v18 = 288LL * v13;
  v19 = this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory + v18;
  if ( v19 != 0 )
  {
    *(v19 + 3) = 0;
    *(v19 + 4) = 0;
    *(v19 + 5) = 0;
    *(v19 + 6) = 0;
    *v19 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(v19 + 4) = -1;
  }
  if ( this->m_PlayerQueryIDs.m_bResolved )
    goto LABEL_27;
  v20 = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
  this->m_PlayerQueryIDs.m_bResolved = 1;
  if ( v20 == 0 )
  {
    if ( !this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
    {
      this->m_PlayerQueryIDs.m_PathToVector.m_nCount = 0;
      goto LABEL_27;
    }
LABEL_79:
    CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::Resolve(p_m_PathToVector);
  }
  v48 = v20;
  v50 = *(*g_pFlattenedSerializers + 272LL);
  v21 = GetNetworkSerializerForEntityInstance(v20);
  v50(v60, g_pFlattenedSerializers, v21, v48, p_m_PlayerQueryIDs, &this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded);
  v22 = v60;
  p_m_PathToVector = &this->m_PlayerQueryIDs.m_PathToVector;
  v18 = 288LL * v13;
  if ( &this->m_PlayerQueryIDs.m_PathToVector != v60 )
  {
    v23 = v61;
    this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths = 0;
    if ( v23 > 6 )
      goto LABEL_81;
    this->m_PlayerQueryIDs.m_PathToVector.m_nCount = v23;
    if ( v23 > 0 )
    {
      v24 = 2 * v23;
      if ( v62 != 0 )
        v22 = v60[0];
      memcpy(p_m_PathToVector, v22, v24);
      v18 = 288LL * v13;
    }
  }
LABEL_27:
  if ( !this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded )
  {
    path.m_bUsingExternalPaths = 0;
    path.m_nCount = 0;
    m_nCount = this->m_PlayerQueryIDs.m_PathToVector.m_nCount;
    if ( m_nCount <= 6 )
    {
      path.m_nCount = this->m_PlayerQueryIDs.m_PathToVector.m_nCount;
      if ( m_nCount <= 0 )
      {
LABEL_38:
        v27 = v13;
LABEL_39:
        v32 = path.m_nCount;
        if ( path.m_nCount > 5 )
          CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::AssignPathIdToElement(
            p_m_PathToVector,
            v10);
        v33 = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
        v34 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory + v18);
        ++path.m_nCount;
        path.u.m_FixedPaths[v32].m_nValue = v27;
        if ( v33 != 0 )
        {
          v53 = v18;
          v35.m_Value = EntityInstanceAddChangeAccessorPath(v33, &path).m_Value;
          v18 = v53;
          v34[4].m_Value = v35.m_Value;
        }
        else
        {
          v34[4].m_Value = -1;
        }
        v36 = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
        if ( v36 != *&v34->m_Value )
          *&v34->m_Value = v36;
        goto LABEL_44;
      }
      m_pPaths = &this->m_PlayerQueryIDs.m_PathToVector;
      if ( this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
        m_pPaths = this->m_PlayerQueryIDs.m_PathToVector.u.m_pPaths;
      v52 = v18;
      __memcpy_chk(&path, m_pPaths, 2 * m_nCount, 24);
      v27 = v13;
      v18 = v52;
      if ( !path.m_bUsingExternalPaths )
        goto LABEL_39;
      this = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        s2[0].m_szFile = "../../public/tier2/fieldpath.h";
        s2[0].m_szFunction = "Path_AddToTail";
        s2[0].m_nLine = 428;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          s2,
          "Path_AddToTail failed for read only CFieldPath");
      }
LABEL_35:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v30, v31, v28, v29) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(&loc_0 + 1);
      goto LABEL_38;
    }
LABEL_81:
    this = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      s2[0].m_nLine = 442;
      s2[0].m_szFile = "../../public/tier2/fieldpath.h";
      s2[0].m_szFunction = "Path_SetCount";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        s2,
        "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_35;
  }
LABEL_44:
  m_pArraySizeChangedDelegate = this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v39 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v39 - 1);
    v54 = v18;
    pfn(v39);
    v18 = v54;
  }
  v40 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory + v18) == 0;
  v41 = this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory + v18;
  v42 = v41;
  if ( !v40 )
  {
    if ( *(v41 + 3) != nPlayerID )
    {
      v43 = *v41;
      if ( *v41 != 0 && (*(v43[1] + 49LL) & 4) == 0 && *(v41 + 4) != 0xFFFF )
        (*(*v43 + 176LL))(v43, 12, 0xFFFFFFFFLL, *(v41 + 4));
      *(v42 + 3) = nPlayerID;
    }
    if ( *(v42 + 4) != nQueryID )
    {
      v44 = *v42;
      if ( *v42 != 0 && (*(v44[1] + 49LL) & 4) == 0 && *(v42 + 4) != 0xFFFF )
        (*(*v44 + 176LL))(v44, 16, 0xFFFFFFFFLL, *(v42 + 4));
      *(v42 + 4) = nQueryID;
    }
    if ( *(v42 + 5) != nQueryRank )
    {
      v45 = *v42;
      if ( *v42 != 0 && (*(v45[1] + 49LL) & 4) == 0 && *(v42 + 4) != 0xFFFF )
        (*(*v45 + 176LL))(v45, 20, 0xFFFFFFFFLL, *(v42 + 4));
      *(v42 + 5) = nQueryRank;
    }
    if ( *(v42 + 6) != nMultiQueryID )
    {
      v46 = *v42;
      if ( *v42 != 0 && (*(v46[1] + 49LL) & 4) == 0 && *(v42 + 4) != 0xFFFF )
        (*(*v46 + 176LL))(v46, 24, 0xFFFFFFFFLL, *(v42 + 4));
      *(v42 + 6) = nMultiQueryID;
    }
  }
  LODWORD(s2[0].m_szFile) = 0;
  if ( memcmp(&this->m_ProgressForQueryID.m_Value[nQueryID], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3552, nQueryID, 0xFFFFFFFFLL);
    this->m_ProgressForQueryID.m_Value[nQueryID] = s2[0].m_szFile;
  }
}


// CIngameEvent_Base::OnQueryProgressChanged  (line 391, @0x0000000002596940, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
void __fastcall CIngameEvent_Base::OnQueryProgressChanged(CIngameEvent_Base *const this, int nQueryID, int nProgress)
{
  int nProgressa[9]; // [rsp+Ch] [rbp-24h] BYREF

  nProgressa[0] = nProgress;
  if ( nQueryID <= 0x63 && memcmp(&this->m_ProgressForQueryID.m_Value[nQueryID], nProgressa, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3552, nQueryID, 0xFFFFFFFFLL);
    this->m_ProgressForQueryID.m_Value[nQueryID] = nProgressa[0];
  }
}


// CIngameEvent_Base::SetGoalForQuery  (line 401, @0x00000000025a1950, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
// callers: CDOTAChallengeSystem::GenerateBasicQuery, CDOTAChallengeSystem::GenerateMultiQuery, CDOTAChallengeSystem::GenerateRankedQuery, CDOTAChallengeSystem::GenerateRankedMultiQuery
void __fastcall CIngameEvent_Base::SetGoalForQuery(CIngameEvent_Base *const this, int nQueryID, int nGoal)
{
  int nGoala[9]; // [rsp+Ch] [rbp-24h] BYREF

  nGoala[0] = nGoal;
  if ( nQueryID <= 0x63 && memcmp(&this->m_GoalForQueryID.m_Value[nQueryID], nGoala, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3952, nQueryID, 0xFFFFFFFFLL);
    this->m_GoalForQueryID.m_Value[nQueryID] = nGoala[0];
  }
}


// CIngameEvent_Base::ClearQuestQueryForPlayer  (line 411, @0x00000000025b8b70, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Remove, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator[]
// calls: CDOTA_PlayerResource::IsValidPlayer, GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<CDOTA_CombatLogQueryProgress, CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress, -1> >::ShiftElementsLeft, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...) (13 total)
// callers: CDOTAChallengeSystem::FireGameEvent
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CIngameEvent_Base::ClearQuestQueryForPlayer(CIngameEvent_Base *const this, int nPlayerID)
{
  int v3; // r15d
  __int64 j; // r13
  char *v5; // rax
  CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *p_m_PathToVector; // rdi
  CEntityInstance *m_pObj; // r14
  void (__fastcall *v8)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *, bool *); // r12
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  CEntityInstance *v10; // rcx
  void **v11; // r14
  __int64 v12; // rax
  void **v13; // rsi
  int v14; // esi
  CEntityInstance *v15; // r14
  FlattenedSerializerHandle_t v16; // rax
  CEntityInstance *v17; // rcx
  __int64 v18; // rax
  void **v19; // rsi
  CEntityInstance *v20; // rcx
  void (__fastcall *v21)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *, bool *); // r15
  FlattenedSerializerHandle_t v22; // rax
  __int64 v23; // rdx
  size_t v24; // rdx
  void **v25; // rsi
  __int64 m_nCount; // rdx
  __int64 v27; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v29; // cx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  ChangeAccessorFieldPathIndex_t *v35; // rdx
  ChangeAccessorFieldPathIndex_t v36; // ax
  CEntityInstance *v37; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v40; // rdi
  const CFieldPath *v41; // [rsp+20h] [rbp-110h]
  bool *p_m_bIsNetworkVarExcluded; // [rsp+28h] [rbp-108h]
  int i; // [rsp+30h] [rbp-100h]
  CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1> *p_m_PlayerQueryIDs; // [rsp+38h] [rbp-F8h]
  CEntityInstance *v46; // [rsp+48h] [rbp-E8h]
  ChangeAccessorFieldPathIndex_t *v47; // [rsp+48h] [rbp-E8h]
  CFieldPath *dest; // [rsp+50h] [rbp-E0h]
  void *src[2]; // [rsp+60h] [rbp-D0h] BYREF
  __int16 v50; // [rsp+70h] [rbp-C0h]
  char v51; // [rsp+72h] [rbp-BEh]
  void *v52[2]; // [rsp+80h] [rbp-B0h] BYREF
  __int16 v53; // [rsp+90h] [rbp-A0h]
  char v54; // [rsp+92h] [rbp-9Eh]
  char v55; // [rsp+A0h] [rbp-90h] BYREF
  int16 v56; // [rsp+B0h] [rbp-80h]
  char v57; // [rsp+B2h] [rbp-7Eh]
  void *v58[2]; // [rsp+C0h] [rbp-70h] BYREF
  __int16 v59; // [rsp+D0h] [rbp-60h]
  char v60; // [rsp+D2h] [rbp-5Eh]
  LeafCodeInfo_t v61; // [rsp+E0h] [rbp-50h] BYREF

  if ( CDOTA_PlayerResource::IsValidPlayer(g_pDOTAPlayerResource, nPlayerID) )
  {
    v3 = this->m_PlayerQueryIDs.m_Vector.m_Size - 1;
    if ( v3 >= 0 )
    {
      p_m_PlayerQueryIDs = &this->m_PlayerQueryIDs;
      for ( j = 288LL * v3; ; j -= 288 )
      {
        v5 = this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory + j;
        if ( v5 != 0 )
        {
          p_m_PathToVector = nPlayerID;
          if ( *(v5 + 3) == nPlayerID )
            break;
        }
LABEL_4:
        if ( --v3 == -1 )
          return;
      }
      if ( !this->m_PlayerQueryIDs.m_bResolved )
      {
        m_pObj = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
        this->m_PlayerQueryIDs.m_bResolved = 1;
        if ( m_pObj != 0 )
        {
          dest = &g_pFlattenedSerializers;
          v8 = *(*g_pFlattenedSerializers + 272LL);
          NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
          v10 = m_pObj;
          v11 = src;
          v8(
            src,
            g_pFlattenedSerializers,
            NetworkSerializerForEntityInstance,
            v10,
            p_m_PlayerQueryIDs,
            &this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded);
          if ( &this->m_PlayerQueryIDs.m_PathToVector != src )
          {
            v12 = v50;
            this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths = 0;
            if ( v12 > 6 )
              goto LABEL_69;
            this->m_PlayerQueryIDs.m_PathToVector.m_nCount = v12;
            if ( v12 > 0 )
            {
              v13 = src;
              if ( v51 != 0 )
                v13 = src[0];
              memcpy(&this->m_PlayerQueryIDs.m_PathToVector, v13, 2 * v12);
            }
          }
        }
        else
        {
          if ( this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
            goto LABEL_64;
          this->m_PlayerQueryIDs.m_PathToVector.m_nCount = 0;
        }
      }
      if ( !this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded )
        EntityInstanceSetNetworkStateChanged(this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj);
      CUtlVectorBase<CDOTA_CombatLogQueryProgress,CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress,-1>>::ShiftElementsLeft(
        &p_m_PlayerQueryIDs->m_Vector,
        v3,
        1);
      --this->m_PlayerQueryIDs.m_Vector.m_Size;
      if ( this->m_PlayerQueryIDs.m_bResolved )
        goto LABEL_25;
      v15 = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
      this->m_PlayerQueryIDs.m_bResolved = 1;
      if ( v15 == 0 )
      {
        if ( this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
LABEL_64:
          CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::Resolve(p_m_PathToVector);
        this->m_PlayerQueryIDs.m_PathToVector.m_nCount = 0;
        goto LABEL_25;
      }
      dest = &g_pFlattenedSerializers;
      v8 = *(*g_pFlattenedSerializers + 272LL);
      v16 = GetNetworkSerializerForEntityInstance(v15);
      v17 = v15;
      v11 = v52;
      v8(v52, g_pFlattenedSerializers, v16, v17, p_m_PlayerQueryIDs, &this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded);
      p_m_PathToVector = &this->m_PlayerQueryIDs.m_PathToVector;
      if ( &this->m_PlayerQueryIDs.m_PathToVector == v52 )
      {
LABEL_25:
        if ( !this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded && this->m_PlayerQueryIDs.m_Vector.m_Size > 0 )
        {
          v41 = j;
          v8 = 0;
          LODWORD(v11) = 0;
          j = &v55;
          i = v3;
          p_m_bIsNetworkVarExcluded = &this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded;
          dest = &this->m_PlayerQueryIDs.m_PathToVector;
          goto LABEL_28;
        }
LABEL_55:
        m_pArraySizeChangedDelegate = this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate;
        if ( m_pArraySizeChangedDelegate != 0 )
        {
          pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
          v40 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis
               + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v40 - 1);
          pfn(v40);
        }
        goto LABEL_4;
      }
      v18 = v53;
      this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths = 0;
      if ( v18 <= 6 )
      {
        this->m_PlayerQueryIDs.m_PathToVector.m_nCount = v18;
        if ( v18 > 0 )
        {
          v19 = v52;
          if ( v54 != 0 )
            v19 = v52[0];
          memcpy(p_m_PathToVector, v19, 2 * v18);
        }
        goto LABEL_25;
      }
LABEL_69:
      this = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v61.m_nLine = 442;
        v61.m_szFile = "../../public/tier2/fieldpath.h";
        v61.m_szFunction = "Path_SetCount";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v61,
          "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
LABEL_44:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v32, v33, v30, v31) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(&loc_0 + 1);
LABEL_47:
      v29 = v11;
LABEL_48:
      v34 = v56;
      if ( v56 > 5 )
        CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress,CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,-1>::AssignPathIdToElement(
          p_m_PathToVector,
          v14);
      p_m_PathToVector = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
      ++v56;
      v35 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory + v8);
      *(j + 2 * v34) = v29;
      if ( p_m_PathToVector != 0 )
      {
        v47 = v35;
        v36.m_Value = EntityInstanceAddChangeAccessorPath(p_m_PathToVector, j).m_Value;
        v35 = v47;
        v47[4].m_Value = v36.m_Value;
      }
      else
      {
        v35[4].m_Value = -1;
      }
      v37 = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
      if ( v37 != *&v35->m_Value )
        *&v35->m_Value = v37;
      while ( 1 )
      {
        LODWORD(v11) = v11 + 1;
        v8 = (v8 + 288);
        if ( v11 >= this->m_PlayerQueryIDs.m_Vector.m_Size )
          break;
LABEL_28:
        if ( !this->m_PlayerQueryIDs.m_bResolved )
        {
          v20 = this->m_PlayerQueryIDs.m_pOwnerEntity.m_pObj;
          this->m_PlayerQueryIDs.m_bResolved = 1;
          if ( v20 != 0 )
          {
            v46 = v20;
            v21 = *(*g_pFlattenedSerializers + 272LL);
            v22 = GetNetworkSerializerForEntityInstance(v20);
            v21(v58, g_pFlattenedSerializers, v22, v46, p_m_PlayerQueryIDs, p_m_bIsNetworkVarExcluded);
            if ( dest != v58 )
            {
              v23 = v59;
              this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths = 0;
              if ( v23 > 6 )
                goto LABEL_69;
              this->m_PlayerQueryIDs.m_PathToVector.m_nCount = v23;
              if ( v23 > 0 )
              {
                v24 = 2 * v23;
                v25 = v58;
                if ( v60 != 0 )
                  v25 = v58[0];
                memcpy(dest, v25, v24);
              }
            }
          }
          else
          {
            if ( this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
              goto LABEL_64;
            this->m_PlayerQueryIDs.m_PathToVector.m_nCount = 0;
          }
        }
        if ( !this->m_PlayerQueryIDs.m_bIsNetworkVarExcluded )
        {
          v57 = 0;
          v56 = 0;
          m_nCount = this->m_PlayerQueryIDs.m_PathToVector.m_nCount;
          if ( m_nCount > 6 )
            goto LABEL_69;
          v56 = this->m_PlayerQueryIDs.m_PathToVector.m_nCount;
          if ( m_nCount <= 0 )
            goto LABEL_47;
          v27 = 2 * m_nCount;
          if ( this->m_PlayerQueryIDs.m_PathToVector.m_bUsingExternalPaths )
            m_pPaths = this->m_PlayerQueryIDs.m_PathToVector.u.m_pPaths;
          else
            m_pPaths = dest;
          __memcpy_chk(j, m_pPaths, v27, 24);
          v29 = v11;
          if ( v57 == 0 )
            goto LABEL_48;
          this = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v61.m_szFile = "../../public/tier2/fieldpath.h";
            v61.m_szFunction = "Path_AddToTail";
            v61.m_nLine = 428;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v61,
              "Path_AddToTail failed for read only CFieldPath");
          }
          goto LABEL_44;
        }
      }
      v3 = i;
      j = v41;
      goto LABEL_55;
    }
  }
}


// CIngameEvent_Base::GetCombatLogQueryIDsForPlayer  (line 441, @0x00000000025b8190, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator[]
// calls: CUtlMemory<int, int>::Grow
// callers: CDOTAChallengeSystem::OnQuerySucceeded, CDOTAChallengeSystem::FireGameEvent, CDOTAChallengeSystem::AddResultToSignout, CIngameEvent_WM2016::PreWagerTimeThink
int __fastcall CIngameEvent_Base::GetCombatLogQueryIDsForPlayer(
        CIngameEvent_Base *const this,
        int nPlayerID,
        CUtlVector<int,CUtlMemory<int,int> > *pIDs)
{
  __int64 v5; // rbx
  int v6; // r13d
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r8
  int result; // eax
  CDOTA_CombatLogQueryProgress *v9; // r14
  __int64 m_Size; // rcx
  int v11; // esi
  int *v12; // rcx
  CUtlVector<int,CUtlMemory<int,int> > *v13; // [rsp+8h] [rbp-48h]
  int v14; // [rsp+10h] [rbp-40h]
  int nCount; // [rsp+14h] [rbp-3Ch]
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *v16; // [rsp+18h] [rbp-38h]

  if ( this->m_PlayerQueryIDs.m_Vector.m_Size <= 0 )
    return 0;
  v5 = 0;
  v6 = 0;
  p_m_Memory = &pIDs->m_Memory;
  result = 0;
  do
  {
    v9 = &this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory[v5];
    if ( v9 != 0 && v9->m_nPlayerID.m_Value == nPlayerID )
    {
      m_Size = pIDs->m_Size;
      v11 = pIDs->m_Size;
      if ( m_Size == pIDs->m_Memory.m_nAllocationCount )
      {
        v13 = pIDs;
        v14 = pIDs->m_Size;
        nCount = result;
        v16 = p_m_Memory;
        CUtlMemory<int,int>::Grow(p_m_Memory, 1);
        pIDs = v13;
        m_Size = v14;
        result = nCount;
        p_m_Memory = v16;
        v11 = v13->m_Size;
      }
      pIDs->m_Size = v11 + 1;
      v12 = &pIDs->m_Memory.m_pMemory[m_Size];
      if ( v12 != 0 )
        *v12 = v9->m_nQueryID.m_Value;
      ++result;
    }
    ++v6;
    ++v5;
  }
  while ( v6 < this->m_PlayerQueryIDs.m_Vector.m_Size );
  return result;
}


// CIngameEvent_Base::GetProgressForCombatLogQuery  (line 460, @0x00000000025a19d0, libserver.so)
// callers: CDOTAChallengeSystem::AddResultToSignout
int __fastcall CIngameEvent_Base::GetProgressForCombatLogQuery(CIngameEvent_Base *const this, int nQueryID)
{
  if ( nQueryID > 0x63 )
    return -1;
  else
    return this->m_ProgressForQueryID.m_Value[nQueryID];
}


// CIngameEvent_Base::GetGoalForCombatLogQuery  (line 468, @0x00000000025a19f0, libserver.so)
// callers: CDOTAChallengeSystem::OnQuerySucceeded
int __fastcall CIngameEvent_Base::GetGoalForCombatLogQuery(CIngameEvent_Base *const this, int nQueryID)
{
  if ( nQueryID > 0x63 )
    return -1;
  else
    return this->m_GoalForQueryID.m_Value[nQueryID];
}


// CIngameEvent_Base::GetCombatLogQueryProgressInfo  (line 478, @0x00000000025a1a10, libserver.so)
const CDOTA_CombatLogQueryProgress *__fastcall CIngameEvent_Base::GetCombatLogQueryProgressInfo(
        CIngameEvent_Base *const this,
        int nQueryID)
{
  int m_Size; // edx
  const CDOTA_CombatLogQueryProgress *result; // rax
  const CDOTA_CombatLogQueryProgress *v4; // rdx

  m_Size = this->m_PlayerQueryIDs.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  result = this->m_PlayerQueryIDs.m_Vector.m_Memory.m_pMemory;
  v4 = &result[(m_Size - 1) + 1];
  while ( result == 0 || result->m_nQueryID.m_Value != nQueryID )
  {
    if ( ++result == v4 )
      return 0;
  }
  return result;
}


// CIngameEvent_Base::GetArrayIndexForPlayerID  (line 496, @0x00000000025a1a60, libserver.so)
int __fastcall CIngameEvent_Base::GetArrayIndexForPlayerID(CIngameEvent_Base *const this, int nPlayerID)
{
  int result; // eax

  result = -1;
  if ( nPlayerID < 0xA )
    return nPlayerID;
  return result;
}


// CIngameEvent_Base::GetPlayerIDForArrayIndex  (line 507, @0x00000000025a1a80, libserver.so)
int __fastcall CIngameEvent_Base::GetPlayerIDForArrayIndex(CIngameEvent_Base *const this, int iArrayIndex)
{
  int result; // eax

  result = -1;
  if ( iArrayIndex < 0xA )
    return iArrayIndex;
  return result;
}


// CIngameEvent_Base::GetPlayerCompendiumLevel  (line 517, @0x0000000002594630, libserver.so)
// calls: CDOTAEventSchema::Get, CDOTAEventSchema::GetEventDefinition, CDOTA_PlayerResource::GetEventPointsForPlayerID
// callers: CIngameEvent_Base::GetPlayerCompendiumLevel, CIngameEvent_Base::GetTeamCompendiumLevel, CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges
int __fastcall CIngameEvent_Base::GetPlayerCompendiumLevel(CIngameEvent_Base *const this, int nPlayerID)
{
  EEvent v3; // ebx
  CDOTAEventSchema *v4; // rax
  const CDOTAEventDefinition *EventDefinition; // rax
  unsigned int v6; // ebx

  v3 = (*(this->_vptr_IHandleEntity + 207))(this);
  v4 = CDOTAEventSchema::Get();
  EventDefinition = CDOTAEventSchema::GetEventDefinition(v4, v3);
  if ( EventDefinition != 0 )
    v6 = *(EventDefinition + 7);
  else
    v6 = 100;
  return CDOTA_PlayerResource::GetEventPointsForPlayerID(g_pDOTAPlayerResource, nPlayerID) / v6;
}


// CIngameEvent_Base::GetPlayerCompendiumLevel  (line 517, @0x00000000025a1aa0, libserver.so)
// calls: CIngameEvent_Base::GetPlayerCompendiumLevel
// callers: CDOTA_Item_BootsOfTravel::OnSpellStart, CDOTA_Item_TeleportScroll::OnAbilityPhaseStart
int __fastcall CIngameEvent_Base::GetPlayerCompendiumLevel(CIngameEvent_Base *const this, int nPlayerID)
{
  if ( nPlayerID == -1 )
    return 0;
  else
    return CIngameEvent_Base::GetPlayerCompendiumLevel(this, nPlayerID);
}


// CIngameEvent_Base::GetPlayerCompendiumCoins  (line 529, @0x00000000025a1ac0, libserver.so)
// calls: CDOTA_PlayerResource::GetEventPremiumPoints
int __fastcall CIngameEvent_Base::GetPlayerCompendiumCoins(CIngameEvent_Base *const this, int nPlayerID)
{
  if ( nPlayerID == -1 )
    return 0;
  else
    return CDOTA_PlayerResource::GetEventPremiumPoints(g_pDOTAPlayerResource, nPlayerID);
}


// CIngameEvent_Base::GetPlayerWagerTokensRemaining  (line 539, @0x00000000025a1af0, libserver.so)
// calls: CDOTA_PlayerResource::GetEventWagerTokensRemaining
int __fastcall CIngameEvent_Base::GetPlayerWagerTokensRemaining(CIngameEvent_Base *const this, int nPlayerID)
{
  return CDOTA_PlayerResource::GetEventWagerTokensRemaining(g_pDOTAPlayerResource, nPlayerID);
}


// CIngameEvent_Base::GetPlayerWagerTokensMax  (line 546, @0x00000000025a1b10, libserver.so)
// calls: CDOTA_PlayerResource::GetEventWagerTokensMax
int __fastcall CIngameEvent_Base::GetPlayerWagerTokensMax(CIngameEvent_Base *const this, int nPlayerID)
{
  return CDOTA_PlayerResource::GetEventWagerTokensMax(g_pDOTAPlayerResource, nPlayerID);
}


// CIngameEvent_Base::GetPlayerCompendiumChallengeCoinReward  (line 553, @0x00000000025a1ec0, libserver.so)  // inlines: GetArrayIndexForPlayerID
// calls: CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted, CIngameEvent_Base::GetPlayerCompendiumChallengeInfo
// callers: CIngameEvent_Base::AddResultToSignout, CIngameEvent_FM2015::AddResultToSignout
int __fastcall CIngameEvent_Base::GetPlayerCompendiumChallengeCoinReward(CIngameEvent_Base *const this, int nPlayerID)
{
  __int64 v2; // rbx
  int result; // eax
  const CDOTA_PlayerChallengeInfo *PlayerCompendiumChallengeInfo; // rax

  v2 = nPlayerID;
  if ( nPlayerID == -1 )
    return 0;
  if ( !CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted(this, nPlayerID) )
    return 0;
  PlayerCompendiumChallengeInfo = CIngameEvent_Base::GetPlayerCompendiumChallengeInfo(this, v2);
  if ( PlayerCompendiumChallengeInfo == 0 || PlayerCompendiumChallengeInfo->nType.m_Value == 0 )
    return 0;
  result = 0;
  if ( v2 <= 9 )
    return this->m_CompendiumChallengeCoinReward.m_Value[v2];
  return result;
}


// CIngameEvent_Base::GetPlayerCompendiumChallengePointReward  (line 574, @0x00000000025a1f10, libserver.so)  // inlines: GetArrayIndexForPlayerID
// calls: CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted
// callers: CIngameEvent_Base::AddResultToSignout, CIngameEvent_FM2015::AddResultToSignout
int __fastcall CIngameEvent_Base::GetPlayerCompendiumChallengePointReward(CIngameEvent_Base *const this, int nPlayerID)
{
  __int64 v2; // rbx

  v2 = nPlayerID;
  if ( nPlayerID != -1 && CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted(this, nPlayerID) && v2 <= 9 )
    return this->m_CompendiumChallengePointReward.m_Value[v2];
  else
    return 0;
}


// CIngameEvent_Base::GetTeamCompendiumLevel  (line 603, @0x00000000025a1b30, libserver.so)  // inlines: GetPlayerCompendiumLevel
// calls: CDOTA_PlayerResource::NumTeamPlayers, CDOTA_PlayerResource::GetTeam, CIngameEvent_Base::GetPlayerCompendiumLevel
// callers: CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted
int __fastcall CIngameEvent_Base::GetTeamCompendiumLevel(CIngameEvent_Base *const this, int nTeam)
{
  int v3; // r14d
  int i; // ebx
  int PlayerCompendiumLevel; // eax

  v3 = 0;
  for ( i = 0; i < CDOTA_PlayerResource::NumTeamPlayers(g_pDOTAPlayerResource); ++i )
  {
    if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, i) == nTeam )
    {
      PlayerCompendiumLevel = 0;
      if ( i != -1 )
        PlayerCompendiumLevel = CIngameEvent_Base::GetPlayerCompendiumLevel(this, i);
      v3 += PlayerCompendiumLevel;
    }
  }
  return v3;
}


// CIngameEvent_Base::GetPlayerCompendiumCoinSplash  (line 621, @0x00000000025a1f50, libserver.so)  // inlines: GetArrayIndexForPlayerID, operator==<int>
// calls: CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted, CIngameEvent_Base::GetPlayerCompendiumChallengeInfo
// callers: CIngameEvent_Base::AddResultToSignout, CIngameEvent_FM2015::AddResultToSignout
int __fastcall CIngameEvent_Base::GetPlayerCompendiumCoinSplash(CIngameEvent_Base *const this, int nPlayerID)
{
  __int64 v2; // rbx
  int result; // eax
  const CDOTA_PlayerChallengeInfo *PlayerCompendiumChallengeInfo; // rax
  __int64 v6; // rax

  v2 = nPlayerID;
  if ( nPlayerID == -1 )
    return 0;
  if ( !CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted(this, nPlayerID) )
    return 0;
  PlayerCompendiumChallengeInfo = CIngameEvent_Base::GetPlayerCompendiumChallengeInfo(this, v2);
  if ( PlayerCompendiumChallengeInfo == 0 )
    return 0;
  result = PlayerCompendiumChallengeInfo->nType.m_Value;
  if ( result != 0 )
  {
    v6 = -1;
    if ( v2 < 0xA )
      v6 = v2;
    return this->m_CompendiumChallengeCoinSplash.m_Value[v6];
  }
  return result;
}


// CIngameEvent_Base::GetPlayerCompendiumChallengeInfo  (line 639, @0x00000000025a1bb0, libserver.so)  // inlines: Element, operator[]
// callers: CIngameEvent_Base::SetPlayerCompendiumChallengeCompleted, CIngameEvent_Base::GetPlayerCompendiumChallengeCoinReward, CIngameEvent_Base::GetPlayerCompendiumCoinSplash
const CDOTA_PlayerChallengeInfo *__fastcall CIngameEvent_Base::GetPlayerCompendiumChallengeInfo(
        CIngameEvent_Base *const this,
        int nPlayerID)
{
  const CDOTA_PlayerChallengeInfo *result; // rax

  result = 0;
  if ( nPlayerID <= 9 )
    return (&this->m_CompendiumChallengeInfo.m_Vector.m_Memory + 80 * nPlayerID);
  return result;
}


// CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted  (line 653, @0x00000000025a1e60, libserver.so)
// calls: CIngameEvent_Base::GetPlayerCompendiumChallenge, Msg
// callers: CDOTAChallengeSystem::AddResultToSignout, CIngameEvent_Base::GetPlayerCompendiumChallengeCoinReward, CIngameEvent_Base::GetPlayerCompendiumChallengePointReward, CIngameEvent_Base::GetPlayerCompendiumCoinSplash
// strings: "Ignoring completed challenge for Player %d because the challenge appears to be missing.\n
bool __fastcall CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted(CIngameEvent_Base *const this, int nPlayerID)
{
  bool v3; // bl

  if ( nPlayerID > 9 )
    return 0;
  v3 = this->m_CompendiumChallengeCompleted.m_Value[nPlayerID];
  if ( v3 && CIngameEvent_Base::GetPlayerCompendiumChallenge(this, nPlayerID) == 0 )
  {
    v3 = 0;
    Msg("Ignoring completed challenge for Player %d because the challenge appears to be missing.\n", nPlayerID);
  }
  return v3;
}


// CIngameEvent_Base::GetPlayerCompendiumChallengeFailed  (line 680, @0x00000000025a1da0, libserver.so)
bool __fastcall CIngameEvent_Base::GetPlayerCompendiumChallengeFailed(CIngameEvent_Base *const this, int nPlayerID)
{
  bool result; // al

  result = 0;
  if ( nPlayerID <= 9 )
    return this->m_CompendiumChallengeFailed.m_Value[nPlayerID];
  return result;
}


// CIngameEvent_Base::GetPlayerCompendiumChallengeProgress  (line 694, @0x00000000025a1dc0, libserver.so)
int __fastcall CIngameEvent_Base::GetPlayerCompendiumChallengeProgress(CIngameEvent_Base *const this, int nPlayerID)
{
  int result; // eax

  result = 0;
  if ( nPlayerID <= 9 )
    return this->m_CompendiumChallengeProgress.m_Value[nPlayerID];
  return result;
}


// CIngameEvent_Base::GetPlayerCompendiumChallengeSequenceID  (line 708, @0x00000000025a1de0, libserver.so)
int __fastcall CIngameEvent_Base::GetPlayerCompendiumChallengeSequenceID(CIngameEvent_Base *const this, int nPlayerID)
{
  int result; // eax

  result = 0;
  if ( nPlayerID <= 9 )
    return this->m_CompendiumChallengeSequenceID.m_Value[nPlayerID];
  return result;
}


// CIngameEvent_Base::GetPlayerCompendiumChallenge  (line 722, @0x00000000025a1e00, libserver.so)  // inlines: GetArrayIndexForPlayerID
// calls: CDOTA_PlayerResource::GetPlayer, GetDOTAPlayerChallenge
// callers: CDOTAChallengeSystem::AttemptToGenerateChallengeQueryForPlayer, CDOTAChallengeSystem::AddResultToSignout, CDOTAGamerules::ClientMsg_QuestStatus, CIngameEvent_Base::GetPlayerCompendiumChallengeCompleted
CDOTAPlayerChallenge *__fastcall CIngameEvent_Base::GetPlayerCompendiumChallenge(
        CIngameEvent_Base *const this,
        int nPlayerID)
{
  __int64 v2; // rbx
  CDOTAPlayer *Player; // rax

  v2 = nPlayerID;
  if ( nPlayerID == -1 )
    return 0;
  Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nPlayerID);
  if ( Player == 0 || v2 > 9 )
    return 0;
  else
    return GetDOTAPlayerChallenge(
             Player,
             this->m_CompendiumChallengeEventID.m_Value[v2],
             this->m_CompendiumChallengeSequenceID.m_Value[v2]);
}


// CIngameEvent_Base::SetPlayerQuestRankCompleted  (line 743, @0x00000000025a1fb0, libserver.so)  // inlines: GetArrayIndexForPlayerID, NetworkStateChanged, Set
// calls: memcmp
// callers: CDOTAChallengeSystem::OnQuerySucceeded, CDOTAChallengeSystem::GenerateRankedQuery, CDOTAChallengeSystem::GenerateRankedMultiQuery
void __fastcall CIngameEvent_Base::SetPlayerQuestRankCompleted(
        CIngameEvent_Base *const this,
        int nPlayerID,
        int nQuestRank)
{
  int nQuestRanka[9]; // [rsp+Ch] [rbp-24h] BYREF

  nQuestRanka[0] = nQuestRank;
  if ( nPlayerID <= 9 && memcmp(&this->m_PlayerQuestRankCompleted.m_Value[nPlayerID], nQuestRanka, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4392, nPlayerID, 0xFFFFFFFFLL);
    this->m_PlayerQuestRankCompleted.m_Value[nPlayerID] = nQuestRanka[0];
  }
}


// CIngameEvent_Base::GetPlayerQuestRankCompleted  (line 753, @0x00000000025a2030, libserver.so)  // inlines: GetArrayIndexForPlayerID
// callers: CDOTAChallengeSystem::OnQuerySucceeded, CDOTAChallengeSystem::AddResultToSignout
int __fastcall CIngameEvent_Base::GetPlayerQuestRankCompleted(CIngameEvent_Base *const this, int nPlayerID)
{
  int result; // eax

  result = -1;
  if ( nPlayerID <= 9 )
    return this->m_PlayerQuestRankCompleted.m_Value[nPlayerID];
  return result;
}


// CIngameEvent_Base::GetPreviouslyCompletedQuestRank  (line 762, @0x00000000025a2050, libserver.so)  // inlines: GetArrayIndexForPlayerID
int __fastcall CIngameEvent_Base::GetPreviouslyCompletedQuestRank(CIngameEvent_Base *const this, int nPlayerID)
{
  int result; // eax

  result = -1;
  if ( nPlayerID <= 9 )
    return this->m_PlayerQuestRankPreviouslyCompleted.m_Value[nPlayerID];
  return result;
}


