// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_consumables.cpp:447
class CGCConsumableExhausted : public CGCClientJob {
public:

	CGCConsumableExhausted(CGCConsumableExhausted &);
	CGCConsumableExhausted(CGCConsumableExhausted &);
	CGCConsumableExhausted(CGCClient *);
	virtual bool BYieldingRunGCJob(IMsgNetPacket *);
	virtual ~CGCConsumableExhausted();

	// vtable[5] BYieldingRunGCJob
	// sizeof = 320
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetPlayerBySteamID  (line 67, @0x0000000002e35d50, libserver.so)  // inlines: ToDOTAPlayer
// calls: CDOTA_PlayerResource::GetSteamID, UTIL_PlayerByIndex
CDOTAPlayer *__fastcall GetPlayerBySteamID(const CSteamID *const steamID)
{
  CEntityIndex v2; // ebx
  CBasePlayer *v3; // rax
  CDOTAPlayer *v4; // rbx

  if ( gpGlobals->maxClients <= 0 )
    return 0;
  v2.m_Data = 1;
  while ( CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v2.m_Data - 1) != steamID->m_steamid.m_unAll64Bits )
  {
    if ( gpGlobals->maxClients < ++v2.m_Data )
      return 0;
  }
  v3 = UTIL_PlayerByIndex(v2);
  v4 = v3;
  if ( v3 != 0 && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0 )
    return v4;
  else
    return 0;
}


// CDOTAConsumableEconItem::CDOTAConsumableEconItem  (line 82, @0x0000000002e35de0, libserver.so)  // inlines: itemid_t
void __fastcall CDOTAConsumableEconItem::CDOTAConsumableEconItem(
        CDOTAConsumableEconItem *const this,
        const CEconItemView *pItem)
{
  this->_vptr_CDOTAConsumableEconItem = off_479FFD0;
  this->m_ulItemID.m_Data = 0;
  this->m_pInitiator = 0;
}


// CDOTAConsumableEconItem::CreateBehaviorForEconItem  (line 91, @0x0000000002e35e00, libserver.so)  // inlines: SetItem
// callers: CDOTABaseAbility::CastAbility, UseEconItem
CDOTAConsumableEconItem *__fastcall CDOTAConsumableEconItem::CreateBehaviorForEconItem(const CEconItemView *pItem)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  CDOTAConsumableEconItem *v4; // r12
  __int64 v5; // rax

  if ( pItem == 0 )
    return 0;
  v2 = (*(pItem->_vptr_IEconItemInterface + 12))(pItem);
  if ( v2 == 0 )
    return 0;
  v3 = *(v2 + 192);
  if ( v3 == 0 )
    return 0;
  v4 = (*(*v3 + 56LL))(v3);
  if ( v4 == 0 )
    return 0;
  v5 = (*(pItem->_vptr_IEconItemInterface + 14))(pItem);
  v4->m_pItemView = pItem;
  v4->m_ulItemID.m_Data = v5;
  return v4;
}


// CDOTAConsumableEconItem::RequiresGC  (line 118, @0x0000000002e30570, libserver.so)
bool __fastcall CDOTAConsumableEconItem::RequiresGC(CDOTAConsumableEconItem *const this)
{
  const CEconItemView *m_pItemView; // rdi

  m_pItemView = this->m_pItemView;
  return m_pItemView != 0 && (*((*(m_pItemView->_vptr_IEconItemInterface + 12))(m_pItemView) + 36) & 0x40) != 0;
}


// CDOTAConsumableEconItem::NotifyGC  (line 130, @0x0000000002e34b10, libserver.so)  // inlines: Add, AllocProto, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufMsg, CSteamID, CVProfScope, CopyArray, EnterScope, FreeProto, Get, GetAccountID, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetRaw, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, MoveArray, PLAT_CPU_TIME, Reserve, Unlock, add_gift__potential_targets, memcpy, mutable_use_item_msg, operator(), set_has_initiator_account_id, set_has_item_id, set_has_use_item_msg, set_initiator_account_id, set_item_id, ~CMicroProfilerGuard, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope, CBaseMultiplayerPlayer::GetSteamID, UTIL_PlayerByIndex, CBasePlayer::GetSteamID, GCClientSystem, CGCClientSystem::BSendMessage, GCSDK::CProtoBufMsgMemoryPoolBase::Free (28 total)
// strings: "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool
bool __fastcall CDOTAConsumableEconItem::NotifyGC(CDOTAConsumableEconItem *const this)
{
  __int64 v2; // rdi
  int m_enabled; // eax
  bool v4; // r12
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CMsgServerUseItem *m_pProtoBufBody; // rax
  int m_comp; // edx
  CMsgServerUseItem *v10; // rbx
  CMsgUseItem *v11; // r12
  uint64 m_Data; // rax
  int v13; // ebx
  CBasePlayer *v14; // rax
  __int64 v15; // rdx
  int v16; // r15d
  void *v17; // rax
  CGCClientSystem *v18; // rax
  int v20; // eax
  int v21; // edx
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem> *v22; // r14
  const google::protobuf::Descriptor *v23; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v25; // rax
  uint32 v26; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v27; // rax
  CVProfNode *m_pCurNode; // rax
  __int64 v29; // rax
  void *src; // [rsp+8h] [rbp-88h]
  CSteamID steamIDInitiator; // [rsp+10h] [rbp-80h] BYREF
  CSteamID steamIDPlayer; // [rsp+20h] [rbp-70h] BYREF
  GCSDK::CProtoBufMsg<CMsgServerUseItem> msg; // [rsp+30h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x44Fu);
  msg._vptr_CProtoBufMsgBase = &off_47A0010;
  msg.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(v2) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v29 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      *(v29 + 8) |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_bRegisteredWithMemoryPoolMgr )
    {
      v22 = operator new(0x28u);
      v23 = CMsgServerUseItem::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v23->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v25 = CMsgServerUseItem::descriptor();
      v26 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v25->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v22, v26, Int32);
      v22->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A4590;
      GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool = v22;
      v27 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v27, v22);
      GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool);
  if ( v4 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  HIWORD(steamIDInitiator.m_steamid.m_unAll64Bits) = BYTE6(steamIDInitiator.m_steamid.m_unAll64Bits) & 0xF;
  steamIDInitiator.m_steamid.m_comp = (steamIDInitiator.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  CBaseMultiplayerPlayer::GetSteamID(this->m_pInitiator, &steamIDInitiator);
  m_pProtoBufBody = msg.m_pProtoBufBody;
  m_comp = steamIDInitiator.m_steamid.m_comp;
  *(msg.m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 8) = m_comp;
  v10 = msg.m_pProtoBufBody;
  v11 = *(msg.m_pProtoBufBody + 3);
  *(msg.m_pProtoBufBody + 4) |= 2u;
  if ( v11 == 0 )
  {
    v11 = operator new(0x48u);
    CMsgUseItem::CMsgUseItem(v11);
    *(v10 + 3) = v11;
  }
  m_Data = this->m_ulItemID.m_Data;
  *(v11 + 4) |= 1u;
  *(v11 + 3) = m_Data;
  if ( (*(this->_vptr_CDOTAConsumableEconItem + 5))(this) != 0 && gpGlobals->maxClients > 0 )
  {
    v13 = 1;
    do
    {
      while ( 1 )
      {
        v14 = UTIL_PlayerByIndex(v13);
        if ( v14 != 0 )
        {
          HIWORD(steamIDPlayer.m_steamid.m_unAll64Bits) = BYTE6(steamIDPlayer.m_steamid.m_unAll64Bits) & 0xF;
          steamIDPlayer.m_steamid.m_comp = (steamIDPlayer.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
          if ( CBasePlayer::GetSteamID(v14, &steamIDPlayer) )
            break;
        }
        if ( gpGlobals->maxClients < ++v13 )
          goto LABEL_20;
      }
      v15 = *(v11 + 12);
      v16 = steamIDPlayer.m_steamid.m_comp;
      v17 = *(v11 + 5);
      if ( v15 == *(v11 + 13) )
      {
        src = *(v11 + 5);
        v20 = v15 + 1;
        v21 = 2 * v15;
        if ( v20 >= v21 )
          v21 = v20;
        if ( v21 < 4 )
          v21 = 4;
        *(v11 + 13) = v21;
        v17 = operator new[](4LL * v21);
        *(v11 + 5) = v17;
        v15 = *(v11 + 12);
        if ( src != 0 )
        {
          memcpy(v17, src, 4 * v15);
          operator delete[](src);
          v17 = *(v11 + 5);
          v15 = *(v11 + 12);
        }
      }
      ++v13;
      *(v11 + 12) = v15 + 1;
      *(v17 + v15) = v16;
    }
    while ( gpGlobals->maxClients >= v13 );
  }
LABEL_20:
  v18 = GCClientSystem();
  CGCClientSystem::BSendMessage(v18, &msg);
  msg._vptr_CProtoBufMsgBase = &off_47A0010;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool, msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CDOTAConsumableEconItem::ConsumeItem  (line 172, @0x0000000002e35e60, libserver.so)  // inlines: Add, AllocProto, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufMsg, CVProfScope, EnterScope, ExitScope, FreeProto, Get, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, PLAT_CPU_TIME, Unlock, mutable_use_item_msg, set_has_initiator_account_id, set_has_item_id, set_has_use_item_msg, set_initiator_account_id, set_item_id, ~CMicroProfilerGuard, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, operator new, CMsgServerUseItem::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCClientSystem (24 total)
// callers: CDOTAGamerules::Think
// strings: "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool
bool __fastcall CDOTAConsumableEconItem::ConsumeItem(uint32 unAccountID, uint64 ulItemID)
{
  __int64 v4; // rdi
  int m_enabled; // eax
  bool v6; // r13
  uint64 m_numTimeBaseTicks; // rcx
  const google::protobuf::Descriptor *v8; // rax
  const google::protobuf::Descriptor *v9; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v11; // rax
  google::protobuf::Message *m_pProtoBufBody; // rcx
  __int64 v13; // rdi
  CMsgServerUseItem *v14; // rbx
  CMsgUseItem *v15; // rax
  CGCClientSystem *v16; // rax
  unsigned __int64 v18; // r13
  uint64 v19; // rsi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v21; // rax
  CVProfNode *m_pParent; // rax
  CMsgUseItem *v23; // r13
  uint32 unTargetHigh[2]; // [rsp+0h] [rbp-70h]
  uint32 unTargetHigha; // [rsp+0h] [rbp-70h]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPool; // [rsp+8h] [rbp-68h]
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem> *pPoola; // [rsp+8h] [rbp-68h]
  GCSDK::CProtoBufMsgMemoryPoolBase *pPoolb; // [rsp+8h] [rbp-68h]
  GCSDK::CProtoBufMsg<CMsgServerUseItem> msg; // [rsp+10h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x44Fu);
  msg._vptr_CProtoBufMsgBase = &off_47A0010;
  msg.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v6 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    pPool = __rdtsc();
    *unTargetHigh = g_VProfCurrentProfile.m_TargetThreadId;
    if ( *unTargetHigh == ThreadGetCurrentId(v4) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v21 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v21->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - pPool + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_bRegisteredWithMemoryPoolMgr )
    {
      pPoola = operator new(0x28u);
      v8 = CMsgServerUseItem::descriptor();
      unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v8->options_ + 8),
                        msgpool_hard_limit.number_,
                        msgpool_hard_limit.default_value_);
      v9 = CMsgServerUseItem::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v9->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(pPoola, Int32, unTargetHigha);
      pPoola->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A4590;
      GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool = pPoola;
      v11 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v11, pPoola);
      GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool);
  msg.m_pProtoBufBody = m_pProtoBufBody;
  if ( v6 )
  {
    v18 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      pPoolb = g_VProfCurrentProfile.m_TargetThreadId;
      if ( pPoolb == ThreadGetCurrentId(v13) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        m_pProtoBufBody = msg.m_pProtoBufBody;
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
      else
      {
        m_pProtoBufBody = msg.m_pProtoBufBody;
      }
    }
    v19 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v19 - v18 + __rdtsc();
  }
  *(m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 8) = unAccountID;
  v14 = msg.m_pProtoBufBody;
  v15 = *(msg.m_pProtoBufBody + 3);
  *(msg.m_pProtoBufBody + 4) |= 2u;
  if ( v15 == 0 )
  {
    v23 = operator new(0x48u);
    CMsgUseItem::CMsgUseItem(v23);
    *(v14 + 3) = v23;
    v15 = v23;
  }
  *(v15 + 4) |= 1u;
  *(v15 + 3) = ulItemID;
  v16 = GCClientSystem();
  CGCClientSystem::BSendMessage(v16, &msg);
  msg._vptr_CProtoBufMsgBase = &off_47A0010;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool, msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CDOTAConsumableEconItem::TryUse  (line 195, @0x0000000002e36250, libserver.so)  // inlines: CSteamID, DOTAGameRules, GetItemIndex, GetRaw, SetRiverItem
// calls: CBaseMultiplayerPlayer::GetSteamID
// callers: CDOTABaseAbility::CastAbility, UseEconItem
ActionItemResult_t __fastcall CDOTAConsumableEconItem::TryUse(CDOTAConsumableEconItem *const this)
{
  ActionItemResult_t result; // eax
  uint16 m_Data; // ax
  CDOTAPlayer *m_pInitiator; // rdi
  uint64 v5; // rdx
  CGameRules *v6; // rax
  CSteamID steamIDInitiator; // [rsp+0h] [rbp-20h] BYREF

  result = ActionItemResult_t::ACTION_ITEM_FAILURE;
  if ( this->m_iQuantity > 0 )
  {
    result = (*(this->_vptr_CDOTAConsumableEconItem + 1))(this);
    if ( result == ActionItemResult_t::ACTION_ITEM_SUCCESS )
    {
      if ( (*(this->_vptr_CDOTAConsumableEconItem + 3))(this) != 0 )
      {
        m_Data = this->m_pItemView->m_iItemDefinitionIndex.m_Value.m_Data;
        if ( (m_Data - 17022) <= 5u || m_Data == 17047 )
        {
          HIWORD(steamIDInitiator.m_steamid.m_unAll64Bits) = BYTE6(steamIDInitiator.m_steamid.m_unAll64Bits) & 0xF;
          m_pInitiator = this->m_pInitiator;
          steamIDInitiator.m_steamid.m_comp = (steamIDInitiator.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
          CBaseMultiplayerPlayer::GetSteamID(m_pInitiator, &steamIDInitiator);
          v5 = this->m_ulItemID.m_Data;
          v6 = g_pGameRules;
          *&g_pGameRules[15].m_szQuestName[24] = steamIDInitiator.m_steamid.m_comp;
          *&v6[15].m_szQuestName[32] = v5;
        }
        else
        {
          (*(this->_vptr_CDOTAConsumableEconItem + 4))(this);
        }
      }
      if ( (*(this->_vptr_CDOTAConsumableEconItem + 3))(this) == 0 || (*this->_vptr_CDOTAConsumableEconItem)(this) != 0 )
        return (*(this->_vptr_CDOTAConsumableEconItem + 2))(this);
      else
        return ActionItemResult_t::ACTION_ITEM_SUCCESS;
    }
  }
  return result;
}


// UseEconItem  (line 281, @0x0000000002e36340, libserver.so)  // inlines: CEntityHandle, CSingleUserRecipientFilter, DOTAGameRules, GetAssignedHero, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsSpeaking, LookupEntity, SetInitiator, SetQuantity, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, ~CSingleUserRecipientFilter
// calls: CDOTAConsumableEconItem::CreateBehaviorForEconItem, CEconItemView::GetItemQuantity, CDOTAConsumableEconItem::TryUse, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, SendChatEventMessage, CRecipientFilter::~CRecipientFilter, operator delete, CDOTA_Speech::IsSpeaking, CDOTA_BaseNPC::GetLastNagTime, CDOTA_BaseNPC::StartNagTime, CResponseCriteriaSet::CResponseCriteriaSet (17 total)
// callers: CDOTA_BaseNPC_Hero::PerformAutoTaunt, UseEconItemID, UseEconItem
// strings: "nagtime"
bool __fastcall UseEconItem(CEconItemView *pItem, CDOTAPlayer *pPlayer)
{
  CDOTAConsumableEconItem *BehaviorForEconItem; // rax
  CDOTAConsumableEconItem *v5; // rbx
  ActionItemResult_t v6; // r12d
  __int64 (__fastcall ***v7)(_QWORD); // rax
  unsigned __int16 v8; // ax
  unsigned __int16 v10; // dx
  int v11; // esi
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_Speech *m_pSpeech; // rdi
  float v17; // xmm2_4
  CDOTA_Speech *v18; // rdi
  CDOTA_BaseNPC *v19; // rax
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-1B0h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+198h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( pItem == 0 )
    return 0;
  BehaviorForEconItem = CDOTAConsumableEconItem::CreateBehaviorForEconItem(pItem);
  v5 = BehaviorForEconItem;
  if ( BehaviorForEconItem == 0 )
    return 0;
  BehaviorForEconItem->m_pInitiator = pPlayer;
  BehaviorForEconItem->m_iQuantity = CEconItemView::GetItemQuantity(pItem);
  v6 = CDOTAConsumableEconItem::TryUse(v5);
  if ( v6 != ActionItemResult_t::ACTION_ITEM_SUCCESS )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&filter, pPlayer);
    v7 = (*(pItem->_vptr_IEconItemInterface + 12))(pItem);
    v8 = (**v7)(v7);
    SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_CANT_USE_ACTION_ITEM, v8, v6, &filter);
    if ( v6 == ActionItemResult_t::ACTION_ITEM_COOLDOWN )
    {
      if ( pPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
      {
        v10 = 0x7FFF;
        v11 = 0x7FFF;
      }
      else
      {
        v10 = pPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
        v11 = v10;
      }
      v12 = (pPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v10 & 0x7FFF;
      LODWORD(criteria._vptr_CResponseCriteriaSet) = v12;
      if ( v12 + 2 > 1
        && (v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9]) != 0
        && (v14 = &v13[v11 & 0x1FF]) != 0
        && v12 == v14->m_EHandle.m_Index
        && (v19 = v14->m_pInstance, v14->m_pInstance != 0)
        && v19->m_bIsDOTANPC )
      {
        m_pInstance = 0;
        if ( (v19->m_iUnitType & 1) != 0 )
          m_pInstance = v14->m_pInstance;
      }
      else
      {
        m_pInstance = 0;
      }
      m_pSpeech = m_pInstance->m_Speech.m_pSpeech;
      if ( m_pSpeech == 0 || !CDOTA_Speech::IsSpeaking(m_pSpeech) )
      {
        CDOTA_BaseNPC::GetLastNagTime(m_pInstance);
        CDOTA_BaseNPC::StartNagTime(m_pInstance);
        CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
        CResponseCriteriaSet::AppendCriteria(&criteria, "nagtime", 1.0, v17);
        v18 = m_pInstance->m_Speech.m_pSpeech;
        if ( v18 != 0 )
          CDOTA_Speech::SpeakConcept(v18, 23, &criteria, 0, 0, 0, 0, 0);
        CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      }
    }
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  operator delete(v5);
  return v6 == ActionItemResult_t::ACTION_ITEM_SUCCESS;
}


// UseEconItem  (line 341, @0x0000000002e3cba0, libserver.so)  // inlines: DoLookup<int>, Find, GetDOTASlotType, GetHeroDemoModeItemForHero, GetItemSlotsForHero, GetSlotIndexBySlotType, _V_strcmp, operator(), operator[]
// calls: DOTAGameManager, CDOTAGameManager::GetHeroIDByName, strcmp, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType, CDOTAInventoryManager::IsDemoingHero, UseEconItem, CDOTAInventoryManager::SetUpDemoHeroItems, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>
// callers: CDOTAPlayer::ClientCommand
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings, g_DOTAInventoryManager
bool __fastcall UseEconItem(const char *pszHeroName, const char *pszSlotType, CDOTAPlayer *pPlayer)
{
  CDOTAGameManager *v6; // rax
  int HeroIDByName; // r14d
  __int64 v8; // rbx
  CEconItemView *ItemInLoadoutForHeroBySlotType; // r12
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v10; // rcx
  int *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // edx
  unsigned int v15; // edx
  int v16; // eax
  int nPlayerID[13]; // [rsp+1Ch] [rbp-34h] BYREF

  if ( pPlayer != 0 && pszHeroName != 0 && pszSlotType != 0 )
  {
    v6 = DOTAGameManager();
    HeroIDByName = CDOTAGameManager::GetHeroIDByName(v6, pszHeroName);
    if ( HeroIDByName == -1 )
      HeroIDByName = 1000;
    v8 = 0;
    while ( strcmp(*(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + v8), pszSlotType) != 0 )
    {
      if ( ++v8 == 45 )
      {
        LODWORD(v8) = -1;
        break;
      }
    }
    nPlayerID[0] = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(
                                       g_DOTAInventoryManager,
                                       HeroIDByName,
                                       v8,
                                       nPlayerID);
    if ( CDOTAInventoryManager::IsDemoingHero(g_DOTAInventoryManager, HeroIDByName) )
    {
      v11 = 0;
      if ( stru_4D583D0.m_nUsed != 0 )
      {
        v14 = 33 * (((4097 * HeroIDByName + 2127912214) >> 19) ^ (4097 * HeroIDByName + 2127912214) ^ 0xC761C23C);
        v15 = 9 * ((v14 - 369570787) ^ ((v14 + 374761393) << 9)) - 42973499;
        v16 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
                &stru_4D583D0,
                HeroIDByName,
                HIWORD(v15) ^ v15 ^ 0xB55A4F09,
                v10);
        if ( v16 != -1 )
          v11 = &stru_4D583D0.m_table.m_pMemory[v16].data[2];
      }
      v12 = 0;
      while ( v11[v12 + 32] != v8 )
      {
        if ( ++v12 == 16 )
        {
          v13 = -1;
          goto LABEL_19;
        }
      }
      v13 = v12;
LABEL_19:
      CDOTAInventoryManager::SetUpDemoHeroItems(g_DOTAInventoryManager);
      if ( HeroIDByName == dword_4D58410 && byte_4D591B0[v13 + 8] != 0 )
      {
        ItemInLoadoutForHeroBySlotType = &g_DOTAInventoryManager[27 * v13 + 16];
        return UseEconItem(ItemInLoadoutForHeroBySlotType, pPlayer);
      }
    }
    if ( ItemInLoadoutForHeroBySlotType != 0 )
      return UseEconItem(ItemInLoadoutForHeroBySlotType, pPlayer);
  }
  return 0;
}


// UseEconItemID  (line 422, @0x0000000002e37590, libserver.so)
// calls: V_atoi64, CDOTAInventoryManager::GetInventoryForPlayerID, CPlayerInventory::GetInventoryItemByItemID, UseEconItem
// callers: CDOTAPlayer::ClientCommand
// globals: g_DOTAInventoryManager
bool __fastcall UseEconItemID(const char *pszItemID, CDOTAPlayer *pPlayer)
{
  itemid_t v3; // r12
  int v4; // eax
  CDOTAPlayerInventory *InventoryForPlayerID; // rax
  CEconItemView *InventoryItemByItemID; // rax
  bool result; // al

  result = pPlayer != 0
        && pszItemID != 0
        && (v3.m_Data = V_atoi64(),
            v4 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer),
            (InventoryForPlayerID = CDOTAInventoryManager::GetInventoryForPlayerID(g_DOTAInventoryManager, v4, 0)) != 0)
        && (InventoryItemByItemID = CPlayerInventory::GetInventoryItemByItemID(InventoryForPlayerID, v3, 0)) != 0
        && UseEconItem(InventoryItemByItemID, pPlayer);
  return result;
}


// CGCConsumableExhausted::~CGCConsumableExhausted  (line 447, @0x0000000002e504f0, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCConsumableExhausted::~CGCConsumableExhausted(CGCConsumableExhausted *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// CGCConsumableExhausted::~CGCConsumableExhausted  (line 447, @0x0000000002e50510, libserver.so)  // inlines: ~CGCClientJob, ~CGCConsumableExhausted
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCConsumableExhausted::~CGCConsumableExhausted(CGCConsumableExhausted *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCConsumableExhausted::BYieldingRunGCJob  (line 452, @0x0000000002e56340, libserver.so)  // inlines: AllocProto, CAttributeIterator_HasAttribute, CProtoBufMsg, CSchemaFieldHandle, FindAttribute<CEconItemDefinition>, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetTypedRef, Lock, Unlock, operator const CEconItemAttributeDefinition*, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgConsumableExhausted::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, ItemSystem (25 total)
// strings: "ignore charge notification"
// globals: GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_pMemoryPool, `guard variable for'CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification, CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CGCConsumableExhausted::BYieldingRunGCJob(
        CGCConsumableExhausted *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted> *v3; // r14
  const google::protobuf::Descriptor *v4; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v6; // rax
  uint32 v7; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax
  item_definition_index_t v9; // r12
  CEconItemSystem *v10; // rax
  const CEconItemDefinition *ItemDefinition; // r12
  uint32 v12; // r13d
  const char *m_szName; // r14
  CEconItemSchema *v14; // rax
  const CEconItemAttributeDefinition *m_pRef; // rax
  CEconItemSchema *v17; // rax
  uint32 m_unResetCount; // eax
  IEconItemAttributeIterator pIterator; // [rsp+0h] [rbp-80h] BYREF
  const CEconItemAttributeDefinition *v20; // [rsp+8h] [rbp-78h]
  char v21; // [rsp+10h] [rbp-70h]
  GCSDK::CProtoBufMsg<CMsgConsumableExhausted> msg; // [rsp+20h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_47A00B0;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_bRegisteredWithMemoryPoolMgr )
    {
      v3 = operator new(0x28u);
      v4 = CMsgConsumableExhausted::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v4->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v6 = CMsgConsumableExhausted::descriptor();
      v7 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v6->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v3, v7, Int32);
      v3->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A45D0;
      GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_pMemoryPool = v3;
      v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v3);
      GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  v9.m_Data = *(msg.m_pProtoBufBody + 12);
  v10 = ItemSystem();
  ItemDefinition = CEconItemSchema::GetItemDefinition(&v10->m_itemSchema, v9, 0);
  if ( ItemDefinition != 0 )
  {
    if ( `guard variable for'CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification == 0
      && __cxa_guard_acquire(&`guard variable for'CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification) != 0 )
    {
      CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_szName = "ignore charge notification";
      v17 = GEconItemSchema();
      CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v17, "ignore charge notification");
      m_unResetCount = GEconItemSchema()->m_unResetCount;
      CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_bDestructName = 0;
      CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_unSchemaGeneration = m_unResetCount;
      __cxa_guard_release(&`guard variable for'CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification,
        &_dso_handle);
    }
    if ( CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_szName != 0 )
    {
      v12 = GEconItemSchema()->m_unResetCount;
      if ( v12 == CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_unSchemaGeneration )
      {
        m_pRef = CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_pRef;
      }
      else
      {
        m_szName = CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_szName;
        v14 = GEconItemSchema();
        m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v14, m_szName);
        CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_pRef = m_pRef;
        CGCConsumableExhausted::BYieldingRunGCJob(GCSDK::IMsgNetPacket *)::pAttrib_IgnoreNotification.m_unSchemaGeneration = v12;
      }
      if ( m_pRef != 0 )
      {
        v20 = m_pRef;
        pIterator._vptr_IEconItemAttributeIterator = off_40F17F0;
        v21 = 0;
        CEconItemDefinition::IterateAttributes(ItemDefinition, &pIterator);
      }
    }
  }
  msg._vptr_CProtoBufMsgBase = &off_47A00B0;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CreateJob_CGCConsumableExhausted  (line 473, @0x0000000002e30df0, libserver.so)  // inlines: AllocateJob<CGCConsumableExhausted, GCSDK::CGCClient>, CGCClientJob, CGCConsumableExhausted, JobMgrAllocateJobClass<CGCConsumableExhausted, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCConsumableExhausted
GCSDK::CJob *__fastcall CreateJob_CGCConsumableExhausted(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x140u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47A0050;
  v2->m_pJobType = &g_JobType_CGCConsumableExhausted;
  *(&v2[1] + 2) = 4;
  return v2;
}


// CEconTool_HeroTaunt::CreateEconConsumable  (line 481, @0x0000000002e30ad0, libserver.so)
// calls: operator new
IEconConsumable *__fastcall CEconTool_HeroTaunt::CreateEconConsumable(const CEconTool_HeroTaunt *const this)
{
  IEconConsumable *result; // rax

  result = operator new(0x28u);
  *&result[8].gap0 = 0;
  *&result[16].gap0 = 0;
  *&result[24].gap0 = 0;
  *&result[32].gap0 = 0;
  *&result->gap0 = off_47A0150;
  return result;
}


// CDOTAHeroTaunt::GetTauntActivity  (line 487, @0x0000000002e40880, libserver.so)
// calls: GetAssetModifiers<CEconItemView, CActivityModifier>
// callers: CDOTAHeroTaunt::CanUse, CDOTAHeroTaunt::ApplyEffects
Activity __fastcall CDOTAHeroTaunt::GetTauntActivity(CDOTAHeroTaunt *const this)
{
  const CUtlVector<const CActivityModifier*,CUtlMemory<const CActivityModifier*,int> > *Asset; // rax
  const CUtlVector<const CActivityModifier*,CUtlMemory<const CActivityModifier*,int> > *v2; // rdx
  int m_Size; // esi
  Activity result; // eax
  const CActivityModifier **m_pMemory; // rdi
  __int64 v6; // rdx
  const CActivityModifier *v7; // rcx

  Asset = GetAssetModifiers<CEconItemView,CActivityModifier>(this->m_pItemView);
  v2 = Asset;
  if ( Asset == 0 )
    return -1;
  m_Size = Asset->m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = v2->m_Memory.m_pMemory;
    v6 = 0;
    while ( 1 )
    {
      v7 = m_pMemory[v6];
      if ( v7 != 0 )
      {
        result = v7->m_Activity;
        if ( result == 1536 )
          return 1536;
        if ( v7->m_bAlwaysOn )
          return result;
      }
      if ( m_Size <= ++v6 )
        return -1;
    }
  }
  return result;
}


// CDOTAHeroTaunt::PlayActivityAsGesture  (line 503, @0x0000000002e40a80, libserver.so)
// calls: GetAssetModifiers<CEconItemView, CActivityModifier>
// callers: CDOTAHeroTaunt::ApplyEffects
bool __fastcall CDOTAHeroTaunt::PlayActivityAsGesture(CDOTAHeroTaunt *const this)
{
  const CUtlVector<const CActivityModifier*,CUtlMemory<const CActivityModifier*,int> > *Asset; // rax
  int m_Size; // ecx
  const CActivityModifier **m_pMemory; // rsi
  __int64 v4; // rax
  const CActivityModifier *v5; // rdx

  Asset = GetAssetModifiers<CEconItemView,CActivityModifier>(this->m_pItemView);
  if ( Asset == 0 )
    return 0;
  m_Size = Asset->m_Size;
  if ( Asset->m_Size <= 0 )
    return 0;
  m_pMemory = Asset->m_Memory.m_pMemory;
  v4 = 0;
  while ( 1 )
  {
    v5 = m_pMemory[v4];
    if ( v5 != 0 && v5->m_Activity == 1536 && v5->m_pKV != 0 )
      break;
    if ( m_Size <= ++v4 )
      return 0;
  }
  return v5->m_bPlayAsGesture;
}


// CDOTAHeroTaunt::GetSpeechConcept  (line 520, @0x0000000002e40ae0, libserver.so)  // inlines: GetAsset, GetSpeechConcept, StringFieldToInt
// calls: GetAssetModifier<CEconItemView, CSpeechModifier>, CUtlString::Get, StringFieldToInt
// callers: CDOTAHeroTaunt::ApplyEffects
int __fastcall CDOTAHeroTaunt::GetSpeechConcept(CDOTAHeroTaunt *const this)
{
  const CSpeechModifier *Asset; // rax
  const char *v2; // rax
  bool v3; // r8

  Asset = GetAssetModifier<CEconItemView,CSpeechModifier>(this->m_pItemView);
  if ( Asset != 0 && (v2 = CUtlString::Get(&Asset->m_strAsset)) != 0 && *v2 != 0 )
    return StringFieldToInt(v2, g_pszDOTAConcepts, 39, 0xFFFFFFFF, v3);
  else
    return -1;
}


// CDOTAHeroTaunt::GetChatMessage  (line 530, @0x0000000002e40b30, libserver.so)  // inlines: GetChatMessage, GetModifier
// calls: GetAssetModifier<CEconItemView, CSpeechModifier>, CUtlString::Get, GetDOTAChatMessageNumber
// callers: CDOTAHeroTaunt::ApplyEffects
DOTA_CHAT_MESSAGE __fastcall CDOTAHeroTaunt::GetChatMessage(CDOTAHeroTaunt *const this)
{
  const CSpeechModifier *Asset; // rax
  const char *v2; // rax

  Asset = GetAssetModifier<CEconItemView,CSpeechModifier>(this->m_pItemView);
  if ( Asset == 0 )
    return DOTA_CHAT_MESSAGE::CHAT_MESSAGE_INVALID;
  v2 = CUtlString::Get(&Asset->m_strModifier);
  return GetDOTAChatMessageNumber(v2);
}


// CDOTAHeroTaunt::CanUse  (line 542, @0x0000000002e408f0, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, curtime, operator CBaseEntity*
// calls: CDOTAHeroTaunt::GetTauntActivity, CBaseAnimating::SelectWeightedSequence
ActionItemResult_t __fastcall CDOTAHeroTaunt::CanUse(CDOTAHeroTaunt *const this)
{
  CDOTAPlayer *m_pInitiator; // rax
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  ActionItemResult_t result; // eax
  const CBaseAnimating *m_pInstance; // rbx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v11; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  Activity TauntActivity; // esi

  if ( g_pGameRules == 0 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  m_pInitiator = this->m_pInitiator;
  if ( m_pInitiator->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = m_pInitiator->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (m_pInitiator->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) <= 1 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
  if ( v6 == 0 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  v7 = &v6[v4 & 0x1FF];
  if ( v7 == 0 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  if ( v5 != v7->m_EHandle.m_Index )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  m_pInstance = v7->m_pInstance;
  if ( v7->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || (m_pInstance[1].m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value & 1) == 0 )
  {
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  }
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v7->m_pInstance) == 0 )
    return ActionItemResult_t::ACTION_ITEM_DEAD;
  m_flCurrentTime = 0.0;
  v11 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v11->m_flCurrentTime;
  }
  result = ActionItemResult_t::ACTION_ITEM_COOLDOWN;
  if ( m_pInstance[1].m_vecViewOffset.m_Value.y <= m_flCurrentTime )
  {
    TauntActivity = CDOTAHeroTaunt::GetTauntActivity(this);
    result = ActionItemResult_t::ACTION_ITEM_SUCCESS;
    if ( TauntActivity != -1 )
      return CBaseAnimating::SelectWeightedSequence(m_pInstance, TauntActivity).m_Data == -1;
  }
  return result;
}


// CDOTAHeroTaunt::ApplyEffects  (line 570, @0x0000000002e40b60, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetTauntCooldown, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, curtime, operator CBaseEntity*, operator=<float>
// calls: CDOTAHeroTaunt::GetSpeechConcept, CDOTA_Speech::SpeakConcept, CDOTAHeroTaunt::GetTauntActivity, CDOTAHeroTaunt::PlayActivityAsGesture, CDOTABody::GetAnimation, CDOTA_BaseNPC::IsChanneling, CDOTABody::StartAnimation, CBaseAnimating::SequenceDuration, CDOTAHeroTaunt::GetChatMessage, SendChatEventMessage, CDOTA_BaseNPC::GetCurrentActiveAbility, CBaseAnimating::SelectWeightedSequence (14 total)
ActionItemResult_t __fastcall CDOTAHeroTaunt::ApplyEffects(CDOTAHeroTaunt *const this)
{
  CDOTAPlayer *m_pInitiator; // rax
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  ActionItemResult_t v8; // r13d
  CDOTA_BaseNPC *m_pInstance; // r12
  int SpeechConcept; // eax
  CDOTA_Speech *m_pSpeech; // rdi
  unsigned int TauntActivity; // r14d
  bool v14; // r13
  const CDOTABody *v15; // rax
  CDOTABody *v16; // rax
  HSequence v17; // eax
  float v18; // xmm0_4
  float v19; // xmm1_4
  CGlobalVars *v20; // r13
  FnGlobalVarsWarningFunc v21; // rax
  float v22; // xmm0_4
  bool v23; // zf
  DOTA_CHAT_MESSAGE ChatMessage; // r12d
  int v25; // eax
  CDOTABaseAbility *CurrentActiveAbility; // rax
  HSequence v27; // eax
  CGlobalVars *v28; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  float flStunTimea; // [rsp+1Ch] [rbp-34h]
  float flStunTime; // [rsp+1Ch] [rbp-34h]
  float flStunTimeb; // [rsp+1Ch] [rbp-34h]

  m_pInitiator = this->m_pInitiator;
  if ( m_pInitiator->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = m_pInitiator->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (m_pInitiator->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) <= 1 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
  if ( v6 == 0 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  v7 = &v6[v4 & 0x1FF];
  if ( v7 == 0 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  if ( v5 != v7->m_EHandle.m_Index )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  m_pInstance = v7->m_pInstance;
  if ( v7->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || (m_pInstance->m_iUnitType & 1) == 0 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  SpeechConcept = CDOTAHeroTaunt::GetSpeechConcept(this);
  if ( SpeechConcept != -1 )
  {
    m_pSpeech = m_pInstance->m_Speech.m_pSpeech;
    if ( m_pSpeech == 0 || !CDOTA_Speech::SpeakConcept(m_pSpeech, SpeechConcept, 0, 0, 0, 0, 0, 0) )
      return ActionItemResult_t::ACTION_ITEM_COOLDOWN;
  }
  TauntActivity = CDOTAHeroTaunt::GetTauntActivity(this);
  v14 = CDOTAHeroTaunt::PlayActivityAsGesture(this);
  if ( TauntActivity != -1 )
  {
    v15 = (*(m_pInstance->_vptr_IHandleEntity + 377))(m_pInstance);
    if ( TauntActivity != CDOTABody::GetAnimation(v15) )
    {
      if ( v14 )
      {
        CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance);
        if ( CurrentActiveAbility != 0 && CurrentActiveAbility->m_bInAbilityPhase.m_Value )
        {
          v8 = ActionItemResult_t::ACTION_ITEM_FAILURE;
          if ( (*(CurrentActiveAbility->_vptr_IHandleEntity + 301))(CurrentActiveAbility) != 0 )
            return v8;
        }
        (*(m_pInstance->_vptr_IHandleEntity + 442))(m_pInstance, TauntActivity);
        v27.m_Data = CBaseAnimating::SelectWeightedSequence(m_pInstance, TauntActivity).m_Data;
        flStunTime = CBaseAnimating::SequenceDuration(m_pInstance, v27);
        CDOTA_BaseNPC::StartGesture(m_pInstance, 1536, 0.1, 0.1, 9, 0, 1.0);
        v28 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          m_flCurrentTime = v28->m_flCurrentTime;
        }
        else
        {
          m_flCurrentTime = 0.0;
        }
        v22 = (m_flCurrentTime + flStunTime) + 2.0;
        v23 = v22 == m_pInstance->m_flTauntCooldown.m_Value;
      }
      else
      {
        if ( !CDOTA_BaseNPC::IsChanneling(m_pInstance) )
          CDOTA_BaseNPC::Stop(m_pInstance);
        v16 = (*(m_pInstance->_vptr_IHandleEntity + 377))(m_pInstance);
        v17.m_Data = CDOTABody::StartAnimation(v16, TauntActivity, 1, 1.0).m_Data;
        v18 = CBaseAnimating::SequenceDuration(m_pInstance, v17);
        v19 = 0.0;
        v20 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v21 = gpGlobals->m_pfnWarningFunc;
            if ( v21 != 0 )
            {
              flStunTimea = v18;
              (v21)(1, v18, 0.0);
              v18 = flStunTimea;
            }
          }
          v19 = v20->m_flCurrentTime;
        }
        v22 = (v18 + v19) + 2.0;
        v23 = v22 == m_pInstance->m_flTauntCooldown.m_Value;
      }
      if ( !v23 )
      {
        flStunTimeb = v22;
        (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 2316, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pInstance->m_flTauntCooldown.m_Value = flStunTimeb;
      }
    }
  }
  v8 = ActionItemResult_t::ACTION_ITEM_SUCCESS;
  ChatMessage = CDOTAHeroTaunt::GetChatMessage(this);
  if ( ChatMessage == DOTA_CHAT_MESSAGE::CHAT_MESSAGE_INVALID )
    return v8;
  v25 = (*(this->m_pInitiator->_vptr_IHandleEntity + 393))(this->m_pInitiator);
  SendChatEventMessage(ChatMessage, 0, v25, 0);
  return ActionItemResult_t::ACTION_ITEM_SUCCESS;
}


// CEconTool_VictoryPrediction::CreateEconConsumable  (line 636, @0x0000000002e30a90, libserver.so)  // inlines: CDOTAConsumableEconItem, CDOTAVictoryPrediction, itemid_t
// calls: operator new
IEconConsumable *__fastcall CEconTool_VictoryPrediction::CreateEconConsumable(
        const CEconTool_VictoryPrediction *const this)
{
  bool m_bAllPickOnly; // bl
  IEconConsumable *result; // rax

  m_bAllPickOnly = this->m_bAllPickOnly;
  result = operator new(0x28u);
  *&result[8].gap0 = 0;
  *&result->gap0 = off_47A01F0;
  result[36].gap0 = m_bAllPickOnly;
  return result;
}


// CDOTAVictoryPrediction::CanUse  (line 644, @0x0000000002e40f70, libserver.so)  // inlines: CEntityHandle, CanSpeak, DOTAGameRules, GetAssignedHero, GetEntryIndex, GetGameMode, GetHandleEntity, GetInstance, GetItemIndex, GetLobbyType, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTAGamerules::GetDOTATime, CDOTA_PlayerResource::HasPredictedVictory, CDOTA_PlayerResource::GetVictoryPredictionItemID, CDOTAVictoryPrediction::GetSpeechConcept, CDOTA_Speech::CanSpeak
// globals: INVALID_ITEM_DEF_INDEX
ActionItemResult_t __fastcall CDOTAVictoryPrediction::CanUse(CDOTAVictoryPrediction *const this)
{
  ActionItemResult_t result; // eax
  float DOTATime; // xmm0_4
  int vptr_CGameRules; // edx
  CDOTAPlayer *m_pInitiator; // rax
  unsigned __int16 v6; // dx
  int v7; // esi
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rbx
  int v12; // eax
  CDOTAPlayer *v13; // rdi
  const CEconItemView *m_pItemView; // rax
  uint16 v15; // bx
  int v16; // eax
  const CDOTA_PlayerResource::TVictoryPredictionItems *VictoryPredictionItemID; // rax
  int m_Size; // ecx
  std::pair<item_definition_index_t,itemid_t> *m_pMemory; // rdx
  int v20; // eax
  int SpeechConcept; // eax
  CDOTA_Speech *vptr_IHandleEntity; // rdi

  result = ActionItemResult_t::ACTION_ITEM_FAILURE;
  if ( g_pGameRules != 0 )
  {
    DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    result = ActionItemResult_t::ACTION_ITEM_FAILURE_HORN_BLOWN;
    if ( DOTATime <= 0.0 )
    {
      vptr_CGameRules = g_pGameRules[116]._vptr_CGameRules;
      if ( vptr_CGameRules == 0 || vptr_CGameRules == 7 || (LOBYTE(result) = 4, vptr_CGameRules == 9) )
      {
        if ( !this->m_bAllPickOnly
          || (*&g_pGameRules[6].m_szQuestName[68] & 0xFFFFFFFD) == 1
          || (result = ActionItemResult_t::ACTION_ITEM_FAILURE_GAMEMODE_RESTRICTED,
              *&g_pGameRules[6].m_szQuestName[68] == 22) )
        {
          m_pInitiator = this->m_pInitiator;
          if ( m_pInitiator->m_hAssignedHero.m_Value.m_Index == -1 )
          {
            v6 = 0x7FFF;
            v7 = 0x7FFF;
          }
          else
          {
            v6 = m_pInitiator->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
            v7 = v6;
          }
          v8 = (m_pInitiator->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
          if ( (v8 + 2) <= 1 )
            return ActionItemResult_t::ACTION_ITEM_FAILURE;
          v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
          if ( v9 == 0 )
            return ActionItemResult_t::ACTION_ITEM_FAILURE;
          v10 = &v9[v7 & 0x1FF];
          if ( v10 == 0 )
            return ActionItemResult_t::ACTION_ITEM_FAILURE;
          if ( v8 != v10->m_EHandle.m_Index )
            return ActionItemResult_t::ACTION_ITEM_FAILURE;
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance == 0
            || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
            || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          {
            return ActionItemResult_t::ACTION_ITEM_FAILURE;
          }
          v12 = (*(m_pInstance->_vptr_IHandleEntity + 414))(v10->m_pInstance);
          if ( !CDOTA_PlayerResource::HasPredictedVictory(g_pDOTAPlayerResource, v12) )
          {
            SpeechConcept = CDOTAVictoryPrediction::GetSpeechConcept(this);
            if ( SpeechConcept != -1 )
            {
              vptr_IHandleEntity = m_pInstance[70]._vptr_IHandleEntity;
              if ( vptr_IHandleEntity == 0 || !CDOTA_Speech::CanSpeak(vptr_IHandleEntity, SpeechConcept, 5) )
                return ActionItemResult_t::ACTION_ITEM_COOLDOWN;
            }
          }
          v13 = this->m_pInitiator;
          if ( v13 != 0 )
          {
            m_pItemView = this->m_pItemView;
            v15 = m_pItemView != 0 ? m_pItemView->m_iItemDefinitionIndex.m_Value.m_Data : INVALID_ITEM_DEF_INDEX.m_Data;
            v16 = (*(v13->_vptr_IHandleEntity + 393))(v13);
            VictoryPredictionItemID = CDOTA_PlayerResource::GetVictoryPredictionItemID(g_pDOTAPlayerResource, v16);
            if ( VictoryPredictionItemID != 0 )
            {
              m_Size = VictoryPredictionItemID->m_Size;
              if ( VictoryPredictionItemID->m_Size > 0 )
              {
                m_pMemory = VictoryPredictionItemID->m_Memory.m_pMemory;
                if ( m_pMemory->first.m_Data == v15 )
                  return ActionItemResult_t::ACTION_ITEM_COOLDOWN;
                v20 = 0;
                while ( ++v20 != m_Size )
                {
                  ++m_pMemory;
                  if ( m_pMemory->first.m_Data == v15 )
                    return ActionItemResult_t::ACTION_ITEM_COOLDOWN;
                }
              }
            }
          }
          return ActionItemResult_t::ACTION_ITEM_SUCCESS;
        }
      }
    }
  }
  return result;
}


// CDOTAVictoryPrediction::ApplyEffects  (line 705, @0x0000000002e411e0, libserver.so)  // inlines: Add, AllocProto, CAttributeIterator_HasAttribute, CEntityHandle, CMicroProfilerGuard, CMicroProfilerSample, CProtoBufMsg, CSchemaFieldHandle, CSocketIterator, CSocketPair, CSteamID, CVProfScope, EnterScope, ExitScope, FindAttribute, FindAttribute<IEconItemInterface>, FreeProto, Get, GetAssignedHero, GetElapsed, GetEntryIndex, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetHandleEntity, GetInstance, GetSerialNumber, GetSocket, GetTimebaseRegister, GetTypedRef, InTargetThread, IndexToIdentity, Init, IsEnabled, IsValid, Lock, LookupEntity, PLAT_CPU_TIME, SpeakConcept, TSocketIterator, ToDOTABaseNPC, ToDOTABaseNPCHero, Unlock, operator CBaseEntity*, operator const CEconItemAttributeDefinition*, set_account_id, set_has_account_id, set_has_item_id, set_item_id, ~CMicroProfilerGuard, ~CProtoBufMsg, ~CVProfScope
// calls: CDOTA_PlayerResource::HasPredictedVictory, CDOTA_PlayerResource::RecordVictoryPrediction, CBaseMultiplayerPlayer::GetSteamID, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, operator new, CMsgServerToGCLockCharmTrading::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase (37 total)
// strings: "cannot trade", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: `guard variable for'CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade, CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade, GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_pMemoryPool, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle(), INVALID_ITEM_DEF_INDEX
ActionItemResult_t __fastcall CDOTAVictoryPrediction::ApplyEffects(CDOTAVictoryPrediction *const this)
{
  CDOTAPlayer *m_pInitiator; // rax
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r12
  int v10; // eax
  int v11; // eax
  char v12; // dl
  uint32 v13; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSchema *v16; // rax
  uint32 v17; // r12d
  CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v19; // r13
  CEconItemSchema *v20; // rax
  const CEconItemView *v21; // rdi
  __int64 v22; // rdi
  int m_enabled; // eax
  bool v24; // r15
  unsigned __int64 v25; // r14
  uint64 m_numTimeBaseTicks; // rcx
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading> *v27; // r14
  const google::protobuf::Descriptor *v28; // rax
  const google::protobuf::Descriptor *v29; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v31; // rax
  google::protobuf::Message *m_pProtoBufBody; // rcx
  __int64 v33; // rdi
  int m_comp; // eax
  __int64 v35; // rax
  CMsgServerToGCLockCharmTrading *v36; // rdx
  CGCClientSystem *v37; // rax
  int SpeechConcept; // eax
  CDOTA_Speech *vptr_IHandleEntity; // rdi
  DOTA_CHAT_MESSAGE ChatMessage; // r12d
  int v41; // eax
  GCSDK::CProtoBufNetPacket **p_m_pNetPacket; // rax
  const CEconItemView *m_pItemView; // rdi
  int i; // r13d
  IItemSocket *Socket; // rax
  IItemSocket *v46; // r15
  int v47; // eax
  CEconItemSchema *v48; // rax
  uint32 m_unResetCount; // eax
  unsigned __int64 v50; // r14
  ThreadId_t m_TargetThreadId; // r15
  uint64 v52; // rsi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v54; // rax
  CVProfNode *m_pParent; // rax
  ThreadId_t iCurrentStreaka; // [rsp+18h] [rbp-108h]
  uint32 iCurrentStreakb; // [rsp+18h] [rbp-108h]
  int iCurrentStreak; // [rsp+18h] [rbp-108h]
  CSteamID steamID; // [rsp+20h] [rbp-100h] BYREF
  GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading> msg; // [rsp+30h] [rbp-F0h] BYREF
  int v61; // [rsp+D8h] [rbp-48h] BYREF
  int v62; // [rsp+DCh] [rbp-44h]
  int v63; // [rsp+E0h] [rbp-40h]

  m_pInitiator = this->m_pInitiator;
  if ( m_pInitiator->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = m_pInitiator->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (m_pInitiator->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  LODWORD(msg._vptr_CProtoBufMsgBase) = v5;
  if ( (v5 + 2) <= 1 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
  if ( v6 == 0 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  v7 = &v6[v4 & 0x1FF];
  if ( v7 == 0 )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  if ( v5 != v7->m_EHandle.m_Index )
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  m_pInstance = v7->m_pInstance;
  if ( v7->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    return ActionItemResult_t::ACTION_ITEM_FAILURE;
  }
  v10 = (*(m_pInstance->_vptr_IHandleEntity + 414))(v7->m_pInstance);
  if ( !CDOTA_PlayerResource::HasPredictedVictory(g_pDOTAPlayerResource, v10) )
  {
    SpeechConcept = CDOTAVictoryPrediction::GetSpeechConcept(this);
    if ( SpeechConcept != -1 )
    {
      vptr_IHandleEntity = m_pInstance[70]._vptr_IHandleEntity;
      if ( vptr_IHandleEntity != 0 )
        CDOTA_Speech::SpeakConcept(vptr_IHandleEntity, SpeechConcept, 0, 0, 0, 0, 0, 0);
    }
    ChatMessage = CDOTAVictoryPrediction::GetChatMessage(this);
    if ( ChatMessage != DOTA_CHAT_MESSAGE::CHAT_MESSAGE_INVALID )
    {
      v41 = (*(this->m_pInitiator->_vptr_IHandleEntity + 393))(this->m_pInitiator);
      SendChatEventMessage(ChatMessage, 0, v41, 0);
    }
    p_m_pNetPacket = &msg.m_pNetPacket;
    do
    {
      *p_m_pNetPacket = 0;
      p_m_pNetPacket += 2;
      *(p_m_pNetPacket - 1) = 0;
    }
    while ( p_m_pNetPacket != &v61 );
    m_pItemView = this->m_pItemView;
    v61 = 0;
    v62 = 0;
    v63 = 1;
    msg._vptr_CProtoBufMsgBase = off_40FC710;
    (*(m_pItemView->_vptr_IEconItemInterface + 28))(m_pItemView, &msg, &v61);
    if ( v62 > 0 && v61 > 0 )
    {
      iCurrentStreak = 0;
      for ( i = 0; i < v61; ++i )
      {
        Socket = CSocketIterator::GetSocket(&msg, i);
        v46 = Socket;
        if ( Socket != 0
          && LODWORD(Socket[5]._vptr_IItemSocket) == 205
          && (*(Socket->_vptr_IItemSocket + 21))(Socket) == 3012 )
        {
          iCurrentStreak = HIDWORD(v46[5]._vptr_IItemSocket);
        }
      }
      if ( iCurrentStreak > 2 )
      {
        v47 = (*(this->m_pInitiator->_vptr_IHandleEntity + 393))(this->m_pInitiator);
        SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_VICTORY_PREDICTION_STREAK, iCurrentStreak, v47, 0);
      }
    }
  }
  v11 = (*(this->m_pInitiator->_vptr_IHandleEntity + 393))(this->m_pInitiator);
  CDOTA_PlayerResource::RecordVictoryPrediction(g_pDOTAPlayerResource, v11, this, this->m_ulItemID);
  HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
  steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  CBaseMultiplayerPlayer::GetSteamID(this->m_pInitiator, &steamID);
  v12 = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF0;
  if ( (steamID.m_steamid.m_unAll64Bits & 0xF0000000000000LL) == 0
    || BYTE6(steamID.m_steamid.m_unAll64Bits) > 0xAFu
    || (HIBYTE(steamID.m_steamid.m_unAll64Bits) - 1) > 3u )
  {
    return ActionItemResult_t::ACTION_ITEM_SUCCESS;
  }
  if ( v12 == 16 )
  {
    if ( steamID.m_steamid.m_comp != 0 )
    {
      if ( (*(&steamID.m_steamid.m_comp + 1) & 0xFFFFFu) > 4 )
        return ActionItemResult_t::ACTION_ITEM_SUCCESS;
      goto LABEL_19;
    }
    return ActionItemResult_t::ACTION_ITEM_SUCCESS;
  }
  if ( v12 == 112 )
  {
    if ( steamID.m_steamid.m_comp != 0 )
    {
      if ( (*(&steamID.m_steamid.m_comp + 1) & 0xFFFFF) != 0 )
        return ActionItemResult_t::ACTION_ITEM_SUCCESS;
      goto LABEL_19;
    }
    return ActionItemResult_t::ACTION_ITEM_SUCCESS;
  }
  if ( v12 == 48 && steamID.m_steamid.m_comp == 0 )
    return ActionItemResult_t::ACTION_ITEM_SUCCESS;
LABEL_19:
  if ( `guard variable for'CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade) != 0 )
  {
    CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_szName = "cannot trade";
    v48 = GEconItemSchema();
    CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                               v48,
                                                                               "cannot trade");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_bDestructName = 0;
    CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade,
      &_dso_handle);
  }
  if ( this->m_pItemView == 0 || CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_szName == 0 )
    return ActionItemResult_t::ACTION_ITEM_SUCCESS;
  v13 = GEconItemSchema()->m_unResetCount;
  m_pRef = CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_pRef;
  if ( v13 != CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_unSchemaGeneration )
  {
    m_szName = CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_szName;
    v16 = GEconItemSchema();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v16, m_szName);
    CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_unSchemaGeneration = v13;
    CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 )
    return ActionItemResult_t::ACTION_ITEM_SUCCESS;
  if ( CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_szName != 0 )
  {
    v17 = GEconItemSchema()->m_unResetCount;
    AttributeDefinitionByName = CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_pRef;
    if ( v17 != CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_unSchemaGeneration )
    {
      v19 = CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_szName;
      v20 = GEconItemSchema();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v20, v19);
      CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_unSchemaGeneration = v17;
      CDOTAVictoryPrediction::ApplyEffects(void)::pAttrib_CannotTrade.m_pRef = AttributeDefinitionByName;
    }
    v21 = this->m_pItemView;
    if ( AttributeDefinitionByName != 0 )
    {
      msg.m_pNetPacket = AttributeDefinitionByName;
      msg._vptr_CProtoBufMsgBase = off_40F17F0;
      LOBYTE(msg.m_pProtoBufHdr) = 0;
      (*(v21->_vptr_IEconItemInterface + 28))(v21, &msg);
      if ( LOBYTE(msg.m_pProtoBufHdr) != 0 )
        return ActionItemResult_t::ACTION_ITEM_SUCCESS;
    }
  }
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1F44u);
  msg._vptr_CProtoBufMsgBase = &off_47A0230;
  msg.m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v24 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v25 = __rdtsc();
    iCurrentStreaka = g_VProfCurrentProfile.m_TargetThreadId;
    if ( iCurrentStreaka == ThreadGetCurrentId(v22) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v54 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v54->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v25 + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_bRegisteredWithMemoryPoolMgr )
    {
      v27 = operator new(0x28u);
      v28 = CMsgServerToGCLockCharmTrading::descriptor();
      iCurrentStreakb = google::protobuf::internal::ExtensionSet::GetInt32(
                          (v28->options_ + 8),
                          msgpool_hard_limit.number_,
                          msgpool_hard_limit.default_value_);
      v29 = CMsgServerToGCLockCharmTrading::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v29->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v27, Int32, iCurrentStreakb);
      v27->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A4610;
      GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_pMemoryPool = v27;
      v31 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v31, v27);
      GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_pMemoryPool);
  msg.m_pProtoBufBody = m_pProtoBufBody;
  if ( v24 )
  {
    v50 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      if ( m_TargetThreadId == ThreadGetCurrentId(v33) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
      m_pProtoBufBody = msg.m_pProtoBufBody;
    }
    v52 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v52 - v50 + __rdtsc();
  }
  m_comp = steamID.m_steamid.m_comp;
  *(m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 8) = m_comp;
  v35 = (*(this->m_pItemView->_vptr_IEconItemInterface + 14))(this->m_pItemView);
  v36 = msg.m_pProtoBufBody;
  *(msg.m_pProtoBufBody + 4) |= 2u;
  *(v36 + 3) = v35;
  v37 = GCClientSystem();
  CGCClientSystem::BSendMessage(v37, &msg);
  msg._vptr_CProtoBufMsgBase = &off_47A0230;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return ActionItemResult_t::ACTION_ITEM_SUCCESS;
}


// CDOTAVictoryPrediction::GetSpeechConcept  (line 795, @0x0000000002e40f20, libserver.so)  // inlines: GetAsset, GetSpeechConcept, StringFieldToInt
// calls: GetAssetModifier<CEconItemView, CSpeechModifier>, CUtlString::Get, StringFieldToInt
// callers: CDOTAVictoryPrediction::CanUse, CDOTAVictoryPrediction::ApplyEffects
int __fastcall CDOTAVictoryPrediction::GetSpeechConcept(CDOTAVictoryPrediction *const this)
{
  const CSpeechModifier *Asset; // rax
  const char *v2; // rax
  bool v3; // r8

  Asset = GetAssetModifier<CEconItemView,CSpeechModifier>(this->m_pItemView);
  if ( Asset != 0 && (v2 = CUtlString::Get(&Asset->m_strAsset)) != 0 && *v2 != 0 )
    return StringFieldToInt(v2, g_pszDOTAConcepts, 39, 0xFFFFFFFF, v3);
  else
    return -1;
}


// CDOTAVictoryPrediction::GetChatMessage  (line 805, @0x0000000002e411b0, libserver.so)  // inlines: GetChatMessage, GetModifier
// calls: GetAssetModifier<CEconItemView, CSpeechModifier>, CUtlString::Get, GetDOTAChatMessageNumber
// callers: CDOTAVictoryPrediction::ApplyEffects
DOTA_CHAT_MESSAGE __fastcall CDOTAVictoryPrediction::GetChatMessage(CDOTAVictoryPrediction *const this)
{
  const CSpeechModifier *Asset; // rax
  const char *v2; // rax

  Asset = GetAssetModifier<CEconItemView,CSpeechModifier>(this->m_pItemView);
  if ( Asset == 0 )
    return DOTA_CHAT_MESSAGE::CHAT_MESSAGE_INVALID;
  v2 = CUtlString::Get(&Asset->m_strModifier);
  return GetDOTAChatMessageNumber(v2);
}


// CEconTool_HeroAbility::CreateEconConsumable  (line 817, @0x0000000002e30b10, libserver.so)
// calls: operator new
IEconConsumable *__fastcall CEconTool_HeroAbility::CreateEconConsumable(const CEconTool_HeroAbility *const this)
{
  IEconConsumable *result; // rax

  result = operator new(0x28u);
  *&result[8].gap0 = 0;
  *&result[16].gap0 = 0;
  *&result[24].gap0 = 0;
  *&result[32].gap0 = 0;
  *&result->gap0 = off_47A02D0;
  return result;
}


// CDOTAHeroEconItemAbility::GetAbilityName  (line 822, @0x0000000002e41af0, libserver.so)  // inlines: GetAbilityName, GetAsset
// calls: GetAssetModifier<CEconItemView, CAbilityNameModifier>, CUtlString::Get
const char *__fastcall CDOTAHeroEconItemAbility::GetAbilityName(CDOTAHeroEconItemAbility *const this)
{
  const CAbilityNameModifier *Asset; // rax

  Asset = GetAssetModifier<CEconItemView,CAbilityNameModifier>(this->m_pItemView);
  if ( Asset != 0 )
    return CUtlString::Get(&Asset->m_strAsset);
  else
    return 0;
}


// CDOTAHeroEconItemAbility::CanUse  (line 831, @0x0000000002e34210, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CEntityHandle, CSchemaFieldHandle, FindAttribute_UnsafeBitwiseCast<unsigned int, float, CEconItemView>, Get, GetAssignedHero, GetEntryIndex, GetGameMode, GetHandleEntity, GetInstance, GetSerialNumber, GetTypedRef, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "gamemode restricted"
// globals: `guard variable for'CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted, CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
ActionItemResult_t __fastcall CDOTAHeroEconItemAbility::CanUse(CDOTAHeroEconItemAbility *const this)
{
  uint32 v2; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSchema *v5; // rax
  const CEconItemView *m_pItemView; // rdi
  ActionItemResult_t result; // eax
  CDOTAPlayer *m_pInitiator; // rax
  unsigned __int16 v9; // dx
  int v10; // esi
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEconItemSchema *v14; // rax
  uint32 m_unResetCount; // eax
  CEntityInstance *m_pInstance; // rax
  float flGameMode; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v18[3]; // [rsp+10h] [rbp-40h] BYREF
  char v19; // [rsp+28h] [rbp-28h]

  if ( `guard variable for'CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted) != 0 )
  {
    CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_szName = "gamemode restricted";
    v14 = GEconItemSchema();
    CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                  v14,
                                                                                  "gamemode restricted");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_bDestructName = 0;
    CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted,
      &_dso_handle);
  }
  flGameMode = 0.0;
  if ( CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_szName == 0 )
    goto LABEL_10;
  v2 = GEconItemSchema()->m_unResetCount;
  m_pRef = CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_pRef;
  if ( v2 != CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_unSchemaGeneration )
  {
    m_szName = CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_szName;
    v5 = GEconItemSchema();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v5, m_szName);
    CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_unSchemaGeneration = v2;
    CDOTAHeroEconItemAbility::CanUse(void)::pAttrib_GameModeRestricted.m_pRef = m_pRef;
  }
  m_pItemView = this->m_pItemView;
  if ( m_pRef == 0
    || (v18[1] = m_pRef,
        v18[0] = off_40FDAF0,
        v18[2] = &flGameMode,
        v19 = 0,
        (*(m_pItemView->_vptr_IEconItemInterface + 28))(m_pItemView, v18),
        v19 == 0)
    || (result = ActionItemResult_t::ACTION_ITEM_FAILURE_GAMEMODE_RESTRICTED,
        (flGameMode + 0.01) == *&g_pGameRules[6].m_szQuestName[68]) )
  {
LABEL_10:
    m_pInitiator = this->m_pInitiator;
    if ( m_pInitiator->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v9 = 0x7FFF;
      v10 = 0x7FFF;
    }
    else
    {
      v9 = m_pInitiator->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v10 = v9;
    }
    v11 = (m_pInitiator->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
    LODWORD(v18[0]) = v11;
    result = ActionItemResult_t::ACTION_ITEM_FAILURE;
    if ( (v11 + 2) > 1 )
    {
      v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
      if ( v12 != 0 )
      {
        v13 = &v12[v10 & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        {
          m_pInstance = v13->m_pInstance;
          if ( v13->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            return ActionItemResult_t::ACTION_ITEM_SUCCESS;
          }
        }
      }
    }
  }
  return result;
}


// CDOTAHeroEconItemAbility::ApplyEffects  (line 864, @0x0000000002e305a0, libserver.so)
ActionItemResult_t __fastcall CDOTAHeroEconItemAbility::ApplyEffects(CDOTAHeroEconItemAbility *const this)
{
  return ActionItemResult_t::ACTION_ITEM_SUCCESS;
}


