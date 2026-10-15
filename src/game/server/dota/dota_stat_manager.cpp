
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SteamIDLessFunc  (line 24, @0x00000000026bcf80, libserver.so)  // inlines: operator>
bool __fastcall `anonymous namespace'::SteamIDLessFunc(const CSteamID *const node1, const CSteamID *const node2)
{
  return node2->m_steamid.m_unAll64Bits > node1->m_steamid.m_unAll64Bits;
}


// StringLessFunc  (line 30, @0x00000000026bd110, libserver.so)  // inlines: String, ToCStr, _V_strcmp
// calls: strcmp
bool __fastcall `anonymous namespace'::StringLessFunc(const string_t *const node1, const string_t *const node2)
{
  const char *m_Id; // rsi
  const char *v4; // rdi

  m_Id = "";
  if ( node1->u.m_Id != 0 )
    m_Id = node1->u.m_Id;
  v4 = "";
  if ( node2->u.m_Id != 0 )
    v4 = node2->u.m_Id;
  return strcmp(v4, m_Id) > 0;
}


// CDotaStatManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 160, @0x00000000026f4bc0, libserver.so)
void __cdecl CDotaStatManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDotaStatManager::CDotaStatManager  (line 162, @0x000000000270a9d0, libserver.so)  // inlines: CGameEventListener, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetLessFunc
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// globals: `anonymous namespace'::SteamIDLessFunc(CSteamID const&,CSteamID const&), CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CDotaStatManager::CDotaStatManager(CDotaStatManager *const this)
{
  this->_vptr_IGameSystem = &off_42AAE10;
  this->_vptr_IGameEventListener2 = off_42AAF68;
  this->m_StatStateMap.m_Tree.m_Root = -1;
  this->m_StatStateMap.m_Tree.m_NumElements = 0;
  this->m_StatStateMap.m_Tree.m_FirstFree = -1;
  this->m_StatStateMap.m_Tree.m_LastAlloc.index = -1;
  this->m_BotStatStateMap.m_Tree.m_Root = -1;
  this->m_BotStatStateMap.m_Tree.m_NumElements = 0;
  this->m_StatStateMap.m_Tree.m_LessFunc.m_LessFunc = `anonymous namespace'::SteamIDLessFunc;
  this->m_bRegisteredForEvents = 0;
  this->m_StatStateMap.m_Tree.m_Elements.m_pMemory = 0;
  this->m_StatStateMap.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_StatStateMap.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_StatStateMap.m_Tree.m_pElements = 0;
  this->m_BotStatStateMap.m_Tree.m_Elements.m_pMemory = 0;
  this->m_BotStatStateMap.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_BotStatStateMap.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_BotStatStateMap.m_Tree.m_FirstFree = -1;
  this->m_BotStatStateMap.m_Tree.m_LastAlloc.index = -1;
  this->m_BotStatStateMap.m_Tree.m_pElements = 0;
  this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory = 0;
  this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_PlayerNetWorthTimeline.m_Tree.m_Root = -1;
  this->m_PlayerNetWorthTimeline.m_Tree.m_NumElements = 0;
  this->m_PlayerNetWorthTimeline.m_Tree.m_FirstFree = -1;
  this->m_PlayerNetWorthTimeline.m_Tree.m_LastAlloc.index = -1;
  this->m_PlayerNetWorthTimeline.m_Tree.m_pElements = 0;
  this->m_BotStatStateMap.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
  this->m_PlayerNetWorthTimeline.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
  this->m_pTotalEarnedGoldTimeline[0] = 0;
  this->m_pTotalEarnedGoldTimeline[1] = 0;
  this->m_pTotalEarnedXPTimeline[0] = 0;
  this->m_pTotalEarnedXPTimeline[1] = 0;
  this->m_pTotalNetWorthTimeline[0] = 0;
  this->m_pTotalNetWorthTimeline[1] = 0;
}


// CDotaStatManager::~CDotaStatManager  (line 175, @0x000000000270ab30, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CAutoGameSystem, ~CGameEventListener, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~IGameEventListener2
// calls: CUtlRBTree<CUtlMap<int, CTimeline*>::Node_t, short unsigned int, CUtlMap<int, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CTimeline*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int, CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int>::Purge
// callers: CDotaStatManager::~CDotaStatManager
void __fastcall CDotaStatManager::~CDotaStatManager(CDotaStatManager *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = &off_42AAE10;
  this->_vptr_IGameEventListener2 = off_42AAF68;
  CUtlRBTree<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_PlayerNetWorthTimeline.m_Tree);
  if ( (this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PlayerNetWorthTimeline.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_BotStatStateMap.m_Tree);
  if ( (this->m_BotStatStateMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_BotStatStateMap.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_StatStateMap.m_Tree);
  v2 = (this->m_StatStateMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_StatStateMap.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_StatStateMap.m_Tree.m_Elements);
    v2 = (this->m_StatStateMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_StatStateMap.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_StatStateMap.m_Tree.m_Elements);
  }
  else
  {
    this->m_StatStateMap.m_Tree.m_LastAlloc.index = -1;
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDotaStatManager::~CDotaStatManager  (line 175, @0x000000000270ac50, libserver.so)
// calls: CDotaStatManager::~CDotaStatManager, operator delete
void __fastcall CDotaStatManager::~CDotaStatManager(CDotaStatManager *const this)
{
  CDotaStatManager::~CDotaStatManager(this);
  operator delete(this);
}


// CDotaStatManager::FireGameEvent  (line 180, @0x0000000002711f50, libserver.so)  // inlines: CBotPlayerStatState, CSteamID, Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, ToDOTAPlayer, _V_strcmp, operator(), operator[]
// calls: CDotaStatManager::AggregateAllPlayerStats, UTIL_PlayerByIndex, CDOTA_PlayerResource::IsFakeClient, CUtlRBTree<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int, CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find, operator new, CDotaStatManager::CBasePlayerStatState::CBasePlayerStatState, CBaseMultiplayerPlayer::GetSteamID, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find, CDotaStatManager::CPlayerStatState::CPlayerStatState, CUtlRBTree<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int, CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int, CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::NewNode (16 total)
// strings: "dota_match_done"
void __fastcall CDotaStatManager::FireGameEvent(CDotaStatManager *const this, IGameEvent *event)
{
  const char *v4; // rax
  bool v5; // zf
  char v6; // r12
  CEntityIndex v7; // eax
  CBasePlayer *v8; // rax
  CBaseMultiplayerPlayer *v9; // rbx
  int v10; // eax
  CUtlMap<int,CDotaStatManager::CBotPlayerStatState*,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v11; // r14d
  unsigned __int16 m_Root; // r14
  unsigned __int16 m_Right; // ax
  UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState*>::Node_t,short unsigned int> *m_pMemory; // rax
  CDotaStatManager::CPlayerStatState *v15; // r15
  unsigned __int16 v16; // r12
  unsigned __int16 m_Left; // ax
  UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*>::Node_t,short unsigned int> *v18; // rax
  unsigned __int16 v19; // ax
  bool v20; // r15
  unsigned __int16 v21; // bx
  CDotaStatManager::CBotPlayerStatState *v22; // [rsp+0h] [rbp-60h]
  CDotaStatManager::BotStatMap_t *p_m_BotStatStateMap; // [rsp+8h] [rbp-58h]
  CDotaStatManager::PlayerStatMap_t *p_m_StatStateMap; // [rsp+8h] [rbp-58h]
  CSteamID steamID; // [rsp+10h] [rbp-50h] BYREF
  CUtlMap<int,CDotaStatManager::CBotPlayerStatState*,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+20h] [rbp-40h] BYREF

  if ( event != 0 )
  {
    v4 = (*(event->_vptr_IGameEvent + 2))(event);
    v5 = strcmp("dota_player_pick_hero", v4) == 0;
    v6 = !v5;
    if ( v5 )
    {
      v7.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "player", 0);
      v8 = UTIL_PlayerByIndex(v7);
      v9 = v8;
      if ( v8 != 0 && (*(v8->_vptr_IHandleEntity + 140))(v8) != 0 )
      {
        v10 = (*(v9->_vptr_IHandleEntity + 393))(v9);
        HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
        v11 = v10;
        steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
        if ( CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v10) )
        {
          if ( v11 != -1 )
          {
            search.key = v11;
            p_m_BotStatStateMap = &this->m_BotStatStateMap;
            if ( CUtlRBTree<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                   &this->m_BotStatStateMap.m_Tree,
                   &search) == 0xFFFF )
            {
              v22 = operator new(0x38u);
              CDotaStatManager::CBasePlayerStatState::CBasePlayerStatState(v22);
              v22->_vptr_CBasePlayerStatState = &off_42AAFE0;
              v22->m_nPlayerID = v11;
              search.key = v11;
              m_Root = this->m_BotStatStateMap.m_Tree.m_Root;
              search.elem = v22;
              if ( m_Root == 0xFFFF )
              {
                m_Root = -1;
              }
              else
              {
                while ( 1 )
                {
                  v5 = !this->m_BotStatStateMap.m_Tree.m_LessFunc.m_LessFunc(
                          &search,
                          &this->m_BotStatStateMap.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
                  m_pMemory = this->m_BotStatStateMap.m_Tree.m_Elements.m_pMemory;
                  if ( v5 )
                  {
                    m_Right = m_pMemory[m_Root].m_Right;
                    v6 = 0;
                  }
                  else
                  {
                    m_Right = m_pMemory[m_Root].m_Left;
                    v6 = 1;
                  }
                  if ( m_Right == 0xFFFF )
                    break;
                  m_Root = m_Right;
                }
              }
              v19 = CUtlRBTree<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                      &p_m_BotStatStateMap->m_Tree,
                      &search);
              CUtlRBTree<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
                &p_m_BotStatStateMap->m_Tree,
                v19,
                m_Root,
                v6);
              ++this->m_BotStatStateMap.m_Tree.m_NumElements;
            }
          }
        }
        else if ( CBaseMultiplayerPlayer::GetSteamID(v9, &steamID) )
        {
          *&search.key = steamID;
          p_m_StatStateMap = &this->m_StatStateMap;
          if ( CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                 &this->m_StatStateMap.m_Tree,
                 &search) == 0xFFFF )
          {
            v15 = operator new(0xD0u);
            CDotaStatManager::CPlayerStatState::CPlayerStatState(v15, &steamID);
            v16 = this->m_StatStateMap.m_Tree.m_Root;
            search.elem = v15;
            *&search.key = steamID;
            if ( v16 == 0xFFFF )
            {
              v20 = 0;
            }
            else
            {
              while ( 1 )
              {
                v5 = !this->m_StatStateMap.m_Tree.m_LessFunc.m_LessFunc(
                        &search,
                        &this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v16].m_Data);
                v18 = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory;
                if ( v5 )
                {
                  m_Left = v18[v16].m_Right;
                  v20 = 0;
                }
                else
                {
                  m_Left = v18[v16].m_Left;
                  v20 = 1;
                }
                if ( m_Left == 0xFFFF )
                  break;
                v16 = m_Left;
              }
            }
            v21 = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                    &p_m_StatStateMap->m_Tree,
                    &search);
            CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
              &p_m_StatStateMap->m_Tree,
              v21,
              v16,
              v20);
            ++this->m_StatStateMap.m_Tree.m_NumElements;
            CDotaStatManager::CPlayerStatState::RequestUserSteamStats(this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v21].m_Data.elem);
          }
        }
      }
    }
    else if ( strcmp(v4, "dota_match_done") == 0 )
    {
      CDotaStatManager::AggregateAllPlayerStats(this);
    }
  }
}


// CDotaStatManager::Init  (line 229, @0x00000000026bcf90, libserver.so)  // inlines: ListenForGameEvent
// strings: "dota_match_done"
bool __fastcall CDotaStatManager::Init(CDotaStatManager *const this)
{
  CGameEventListener *v2; // r12
  IGameEventManager2 *v3; // rdi

  v2 = &this->CGameEventListener;
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(
    gameeventmanager,
    &this->CGameEventListener,
    "dota_player_pick_hero",
    1);
  v3 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v3->_vptr_IBaseInterface + 4))(v3, v2, "dota_match_done", 1);
  return 1;
}


// CDotaStatManager::GetPlayerMatchStat<int>  (line 242, @0x0000000002709e70, libserver.so)  // inlines: Element, GetStatIndexForPlayer, operator[]
// calls: CDotaStatManager::GetStatIndexForPlayer, KeyValues::GetInt
// callers: CDotaStatManager::GetPlayerLifetimeStat<int>
bool __fastcall CDotaStatManager::GetPlayerMatchStat<int>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        int *const nOutValue,
        const char *szStatName)
{
  int StatIndexForPlayer; // eax

  if ( pPlayer == 0 )
    return 0;
  StatIndexForPlayer = CDotaStatManager::GetStatIndexForPlayer(this, pPlayer);
  if ( StatIndexForPlayer == 0xFFFF || szStatName == 0 )
    return 0;
  *nOutValue = KeyValues::GetInt(
                 this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[StatIndexForPlayer].m_Data.elem->m_pKVMatchStats,
                 szStatName,
                 0);
  return 1;
}


// CDotaStatManager::GetPlayerMatchStat<float>  (line 257, @0x0000000002709ef0, libserver.so)  // inlines: Element, GetStatIndexForPlayer, operator[]
// calls: CDotaStatManager::GetStatIndexForPlayer, KeyValues::GetFloat
// callers: CDotaStatManager::GetPlayerLifetimeStat<float>
bool __fastcall CDotaStatManager::GetPlayerMatchStat<float>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        float *const flOutValue,
        const char *szStatName)
{
  int StatIndexForPlayer; // eax
  float v8; // xmm1_4

  if ( pPlayer == 0 )
    return 0;
  StatIndexForPlayer = CDotaStatManager::GetStatIndexForPlayer(this, pPlayer);
  if ( StatIndexForPlayer == 0xFFFF || szStatName == 0 )
    return 0;
  *flOutValue = KeyValues::GetFloat(
                  this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[StatIndexForPlayer].m_Data.elem->m_pKVMatchStats,
                  szStatName,
                  v8);
  return 1;
}


// CDotaStatManager::SetPlayerMatchStat<int>  (line 275, @0x0000000002709f70, libserver.so)  // inlines: Element, GetStatIndexForPlayer, operator[]
// calls: CDotaStatManager::GetStatIndexForPlayer, KeyValues::SetInt
// callers: CDotaStatManager::SetPlayerLifetimeStat<int>
bool __fastcall CDotaStatManager::SetPlayerMatchStat<int>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        int nValue,
        const char *szStatName)
{
  int StatIndexForPlayer; // eax

  if ( pPlayer == 0 )
    return 0;
  StatIndexForPlayer = CDotaStatManager::GetStatIndexForPlayer(this, pPlayer);
  if ( StatIndexForPlayer == 0xFFFF || szStatName == 0 )
    return 0;
  KeyValues::SetInt(
    this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[StatIndexForPlayer].m_Data.elem->m_pKVMatchStats,
    szStatName,
    nValue);
  return 1;
}


// CDotaStatManager::SetPlayerMatchStat<float>  (line 290, @0x0000000002709ff0, libserver.so)  // inlines: Element, GetStatIndexForPlayer, operator[]
// calls: CDotaStatManager::GetStatIndexForPlayer, KeyValues::SetFloat
// callers: CDotaStatManager::SetPlayerLifetimeStat<float>
__int64 __fastcall CDotaStatManager::SetPlayerMatchStat<float>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        float flValue,
        const char *szStatName)
{
  int StatIndexForPlayer; // eax
  float v7; // xmm1_4

  if ( pPlayer == 0 )
    return 0;
  StatIndexForPlayer = CDotaStatManager::GetStatIndexForPlayer(this, pPlayer);
  if ( StatIndexForPlayer == 0xFFFF || szStatName == 0 )
    return 0;
  KeyValues::SetFloat(
    this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[StatIndexForPlayer].m_Data.elem->m_pKVMatchStats,
    szStatName,
    v7);
  return 1;
}


// CDotaStatManager::IncrementPlayerStat<float>  (line 308, @0x000000000270a070, libserver.so)  // inlines: Element, GetBool, GetInt, GetStatIndexForPlayer, operator[]
// calls: CDotaStatManager::GetStatIndexForPlayer, KeyValues::GetFloat, KeyValues::SetFloat, DevMsg(char const*,...)
__int64 __fastcall CDotaStatManager::IncrementPlayerStat<float>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        float flIncrementBy,
        const char *szStatName)
{
  int StatIndexForPlayer; // eax
  float v7; // xmm1_4
  __int64 v8; // r13
  float v9; // xmm1_4
  float v10; // xmm1_4
  float Float; // xmm0_4

  if ( pPlayer == 0 )
    return 0;
  StatIndexForPlayer = CDotaStatManager::GetStatIndexForPlayer(this, pPlayer);
  if ( StatIndexForPlayer == 0xFFFF || szStatName == 0 )
    return 0;
  v8 = StatIndexForPlayer;
  KeyValues::GetFloat(this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem->m_pKVMatchStats, szStatName, v7);
  KeyValues::SetFloat(this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem->m_pKVMatchStats, szStatName, v9);
  if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    Float = KeyValues::GetFloat(
              this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem->m_pKVMatchStats,
              szStatName,
              v10);
    DevMsg(&stru_33C2400.m_DelayedSpeech.m_Memory.m_nAllocationCount, szStatName, flIncrementBy, Float);
  }
  return 1;
}


// CDotaStatManager::IncrementPlayerStat<int>  (line 327, @0x000000000270a180, libserver.so)  // inlines: Element, GetBool, GetInt, GetStatIndexForPlayer, operator[]
// calls: CDotaStatManager::GetStatIndexForPlayer, KeyValues::GetInt, KeyValues::SetInt, DevMsg(char const*,...)
// callers: CDOTA_Ability_Pudge_MeatHook::OnProjectileHit_ExtraData
bool __fastcall CDotaStatManager::IncrementPlayerStat<int>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        int flIncrementBy,
        const char *szStatName)
{
  int StatIndexForPlayer; // eax
  __int64 v8; // r14
  int Int; // eax
  unsigned int v11; // eax

  if ( pPlayer == 0 )
    return 0;
  StatIndexForPlayer = CDotaStatManager::GetStatIndexForPlayer(this, pPlayer);
  if ( StatIndexForPlayer == 0xFFFF || szStatName == 0 )
    return 0;
  v8 = StatIndexForPlayer;
  Int = KeyValues::GetInt(
          this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem->m_pKVMatchStats,
          szStatName,
          0);
  KeyValues::SetInt(
    this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem->m_pKVMatchStats,
    szStatName,
    Int + flIncrementBy);
  if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v11 = KeyValues::GetInt(
            this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem->m_pKVMatchStats,
            szStatName,
            0);
    DevMsg(&stru_33C2400.m_pLessonKeys, szStatName, flIncrementBy, v11);
  }
  return 1;
}


// CDotaStatManager::GetPlayerLifetimeStat<int>  (line 350, @0x000000000270a270, libserver.so)  // inlines: CSteamID, Element, FetchUserSteamStat<int>, Find, GetBool, GetInt, operator[]
// calls: CBaseMultiplayerPlayer::GetSteamID, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find, CDotaStatManager::GetPlayerMatchStat<int>, DevMsg(char const*,...), CDotaStatManager::CPlayerStatState::FetchUserSteamStat<int>
bool __fastcall CDotaStatManager::GetPlayerLifetimeStat<int>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        int *const nValue,
        const char *szStatName)
{
  bool result; // al
  unsigned __int16 v9; // ax
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::ElemType_t elem; // rdi
  bool UserSteam; // r14
  int nLifetime; // [rsp+8h] [rbp-58h] BYREF
  int nMatch; // [rsp+Ch] [rbp-54h] BYREF
  CSteamID steamID; // [rsp+10h] [rbp-50h] BYREF
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::Node_t search; // [rsp+20h] [rbp-40h] BYREF

  if ( pPlayer == 0 )
    return 0;
  HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
  nLifetime = 0;
  nMatch = 0;
  steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  if ( !CBaseMultiplayerPlayer::GetSteamID(pPlayer, &steamID) )
    return 0;
  if ( szStatName != 0 )
  {
    search.key = steamID;
    v9 = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_StatStateMap.m_Tree,
           &search);
    if ( v9 == 0xFFFF )
    {
      if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
        DevMsg(&stru_33C2400.m_hRoquelairePerches, szStatName, steamID.m_steamid.m_comp);
    }
    else
    {
      elem = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem;
      if ( elem != 0 )
      {
        if ( !elem->m_bIsStatRequestPending )
        {
          UserSteam = CDotaStatManager::CPlayerStatState::FetchUserSteamStat<int>(elem, &nLifetime, szStatName);
          goto LABEL_10;
        }
        if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          UserSteam = 0;
          DevMsg(&stru_33C2400.m_szFinishText[108], szStatName, steamID.m_steamid.m_comp);
          goto LABEL_10;
        }
      }
      else if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        UserSteam = 0;
        DevMsg(&stru_33C2400.m_szFinishText[20], szStatName, steamID.m_steamid.m_comp);
        goto LABEL_10;
      }
    }
  }
  UserSteam = 0;
LABEL_10:
  result = UserSteam & CDotaStatManager::GetPlayerMatchStat<int>(this, pPlayer, &nMatch, szStatName);
  *nValue = nMatch + nLifetime;
  return result;
}


// CDotaStatManager::GetPlayerLifetimeStat<float>  (line 374, @0x000000000270a400, libserver.so)  // inlines: CSteamID, Element, FetchUserSteamStat<float>, Find, GetBool, GetInt, operator[]
// calls: CBaseMultiplayerPlayer::GetSteamID, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find, CDotaStatManager::GetPlayerMatchStat<float>, DevMsg(char const*,...), CDotaStatManager::CPlayerStatState::FetchUserSteamStat<float>
bool __fastcall CDotaStatManager::GetPlayerLifetimeStat<float>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        float *const flValue,
        const char *szStatName)
{
  bool result; // al
  unsigned __int16 v9; // ax
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::ElemType_t elem; // rdi
  bool UserSteam; // r14
  float flLifetime; // [rsp+8h] [rbp-58h] BYREF
  float flMatch; // [rsp+Ch] [rbp-54h] BYREF
  CSteamID steamID; // [rsp+10h] [rbp-50h] BYREF
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::Node_t search; // [rsp+20h] [rbp-40h] BYREF

  if ( pPlayer == 0 )
    return 0;
  HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
  flLifetime = 0.0;
  flMatch = 0.0;
  steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  if ( !CBaseMultiplayerPlayer::GetSteamID(pPlayer, &steamID) )
    return 0;
  if ( szStatName != 0 )
  {
    search.key = steamID;
    v9 = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_StatStateMap.m_Tree,
           &search);
    if ( v9 == 0xFFFF )
    {
      if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
        DevMsg(&stru_33C2400.m_hRoquelairePerches, szStatName, steamID.m_steamid.m_comp);
    }
    else
    {
      elem = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem;
      if ( elem != 0 )
      {
        if ( !elem->m_bIsStatRequestPending )
        {
          UserSteam = CDotaStatManager::CPlayerStatState::FetchUserSteamStat<float>(elem, &flLifetime, szStatName);
          goto LABEL_10;
        }
        if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          UserSteam = 0;
          DevMsg(&stru_33C2400.m_szFinishText[108], szStatName, steamID.m_steamid.m_comp);
          goto LABEL_10;
        }
      }
      else if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        UserSteam = 0;
        DevMsg(&stru_33C2400.m_szFinishText[20], szStatName, steamID.m_steamid.m_comp);
        goto LABEL_10;
      }
    }
  }
  UserSteam = 0;
LABEL_10:
  result = UserSteam & CDotaStatManager::GetPlayerMatchStat<float>(this, pPlayer, &flMatch, szStatName);
  *flValue = flLifetime + flMatch;
  return result;
}


// CDotaStatManager::SetPlayerLifetimeStat<int>  (line 401, @0x000000000270a750, libserver.so)  // inlines: CSteamID, Element, Find, GetBool, GetInt, StoreUserSteamStat<int>, operator[]
// calls: CBaseMultiplayerPlayer::GetSteamID, CDotaStatManager::SetPlayerMatchStat<int>, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find, DevMsg(char const*,...), CDotaStatManager::CPlayerStatState::StoreUserSteamStat<int>
bool __fastcall CDotaStatManager::SetPlayerLifetimeStat<int>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        int nValue,
        const char *szStatName)
{
  bool v8; // bl
  unsigned __int16 v10; // ax
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::ElemType_t elem; // rdi
  CSteamID steamID; // [rsp+0h] [rbp-50h] BYREF
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  if ( pPlayer != 0 )
  {
    HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
    steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
    v8 = CBaseMultiplayerPlayer::GetSteamID(pPlayer, &steamID);
    if ( v8 )
    {
      CDotaStatManager::SetPlayerMatchStat<int>(this, pPlayer, 0, szStatName);
      if ( szStatName != 0 )
      {
        search.key = steamID;
        v10 = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                &this->m_StatStateMap.m_Tree,
                &search);
        if ( v10 == 0xFFFF )
        {
          if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            v8 = 0;
            DevMsg(&stru_33C2400.m_hRoquelairePerches, szStatName, steamID.m_steamid.m_comp);
            return v8;
          }
        }
        else
        {
          elem = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem;
          if ( elem != 0 )
          {
            if ( !elem->m_bIsStatRequestPending )
              return CDotaStatManager::CPlayerStatState::StoreUserSteamStat<int>(elem, nValue, szStatName);
            if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
            {
              v8 = 0;
              DevMsg(&stru_33C2400.m_szFinishText[108], szStatName, steamID.m_steamid.m_comp);
              return v8;
            }
          }
          else if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            DevMsg(&stru_33C2400.m_szFinishText[20], szStatName, steamID.m_steamid.m_comp);
          }
        }
      }
    }
    else if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      DevMsg(&stru_33C2400.m_szFinishText[260], szStatName, steamID.m_steamid.m_comp);
      return v8;
    }
  }
  return 0;
}


// CDotaStatManager::SetPlayerLifetimeStat<float>  (line 425, @0x000000000270a5a0, libserver.so)  // inlines: CSteamID, Element, Find, GetBool, GetInt, StoreUserSteamStat<float>, operator[]
// calls: CBaseMultiplayerPlayer::GetSteamID, CDotaStatManager::SetPlayerMatchStat<float>, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find, DevMsg(char const*,...), CDotaStatManager::CPlayerStatState::StoreUserSteamStat<float>
__int64 __fastcall CDotaStatManager::SetPlayerLifetimeStat<float>(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer,
        __m128i flValue,
        const char *szStatName)
{
  unsigned int v6; // r15d
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 v11; // ax
  float v12; // xmm1_4
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::ElemType_t elem; // rdi
  CSteamID steamID; // [rsp+0h] [rbp-50h] BYREF
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  if ( pPlayer != 0 )
  {
    HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
    v6 = _mm_cvtsi128_si32(flValue);
    steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
    LOBYTE(v8) = CBaseMultiplayerPlayer::GetSteamID(pPlayer, &steamID);
    v9 = v8;
    if ( v8 != 0 )
    {
      CDotaStatManager::SetPlayerMatchStat<float>(this, pPlayer, 0.0, szStatName);
      if ( szStatName != 0 )
      {
        search.key = steamID;
        v11 = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                &this->m_StatStateMap.m_Tree,
                &search);
        if ( v11 == 0xFFFF )
        {
          if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            v9 = 0;
            DevMsg(&stru_33C2400.m_hRoquelairePerches, szStatName, steamID.m_steamid.m_comp);
            return v9;
          }
        }
        else
        {
          elem = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v11].m_Data.elem;
          if ( elem != 0 )
          {
            if ( !elem->m_bIsStatRequestPending )
              return CDotaStatManager::CPlayerStatState::StoreUserSteamStat<float>(
                       elem,
                       *_mm_cvtsi32_si128(v6).m128i_i64,
                       v12,
                       szStatName);
            if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
            {
              v9 = 0;
              DevMsg(&stru_33C2400.m_szFinishText[108], szStatName, steamID.m_steamid.m_comp);
              return v9;
            }
          }
          else if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            DevMsg(&stru_33C2400.m_szFinishText[20], szStatName, steamID.m_steamid.m_comp);
          }
        }
      }
    }
    else if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      DevMsg(&stru_33C2400.m_szFinishText[180], szStatName, steamID.m_steamid.m_comp);
      return v9;
    }
  }
  return 0;
}


// CDotaStatManager::GetStatIndexForPlayer  (line 448, @0x0000000002709de0, libserver.so)  // inlines: CSteamID, Find, GetStatIndexForSteamID
// calls: CBaseMultiplayerPlayer::GetSteamID, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDotaStatManager::GetStatIndexForPlayer, CDotaStatManager::GetPlayerMatchStat<int>, CDotaStatManager::GetPlayerMatchStat<float>, CDotaStatManager::SetPlayerMatchStat<int>, CDotaStatManager::SetPlayerMatchStat<float>, CDotaStatManager::IncrementPlayerStat<float>, CDotaStatManager::IncrementPlayerStat<int>
int __fastcall CDotaStatManager::GetStatIndexForPlayer(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer)
{
  CSteamID steamID; // [rsp+0h] [rbp-30h] BYREF
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::Node_t search; // [rsp+10h] [rbp-20h] BYREF

  HIWORD(steamID.m_steamid.m_unAll64Bits) = BYTE6(steamID.m_steamid.m_unAll64Bits) & 0xF;
  steamID.m_steamid.m_comp = (steamID.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  if ( !CBaseMultiplayerPlayer::GetSteamID(pPlayer, &steamID) )
    return 0xFFFF;
  search.key = steamID;
  return CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_StatStateMap.m_Tree,
           &search);
}


// CDotaStatManager::GetStatIndexForPlayer  (line 448, @0x0000000002709e50, libserver.so)
// calls: CDotaStatManager::GetStatIndexForPlayer
int __fastcall CDotaStatManager::GetStatIndexForPlayer(
        const CDotaStatManager *const this,
        CBaseMultiplayerPlayer *pPlayer)
{
  if ( pPlayer != 0 )
    return CDotaStatManager::GetStatIndexForPlayer(this, pPlayer);
  else
    return 0xFFFF;
}


// CDotaStatManager::GetStatIndexForSteamID  (line 468, @0x0000000002709cf0, libserver.so)  // inlines: Find
// calls: CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find
int __fastcall CDotaStatManager::GetStatIndexForSteamID(
        const CDotaStatManager *const this,
        const CSteamID *const steamID)
{
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::Node_t search; // [rsp+0h] [rbp-10h] BYREF

  search.key = steamID->m_steamid.m_comp;
  return CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_StatStateMap.m_Tree,
           &search);
}


// CDotaStatManager::AggregateAllPlayerStats  (line 473, @0x000000000270b030, libserver.so)  // inlines: Element, FirstInorder, GetLobby, LeftChild, NextInorder, operator[]
// calls: GDOTAGCClientSystem, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CDotaStatManager::FireGameEvent
void __fastcall CDotaStatManager::AggregateAllPlayerStats(CDotaStatManager *const this)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*>::Node_t,short unsigned int> *m_pMemory; // rdx
  int m_Left; // ebx
  unsigned __int16 v7; // ax
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::ElemType_t elem; // rdi

  if ( steamgameserverapicontext != 0
    && steamgameserverapicontext->m_pSteamGameServerStats != 0
    && GDOTAGCClientSystem() != 0 )
  {
    v2 = *(GDOTAGCClientSystem() + 260);
    if ( v2 != 0 )
    {
      v3 = *(v2 + 152);
      if ( v3 == 0 || (v3 - 7) <= 1 )
      {
        m_Root = this->m_StatStateMap.m_Tree.m_Root;
        if ( m_Root != 0xFFFF )
        {
          m_pMemory = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory;
          m_Left = m_pMemory[m_Root].m_Left;
          if ( m_Left == 0xFFFF )
          {
            m_Left = m_Root;
          }
          else
          {
            while ( 1 )
            {
              v7 = m_pMemory[m_Left].m_Left;
              if ( v7 == 0xFFFF )
                break;
              m_Left = v7;
            }
          }
          do
          {
            elem = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[m_Left].m_Data.elem;
            if ( elem != 0 && elem->m_pKVMatchStats != 0 )
              CDotaStatManager::CPlayerStatState::SubmitUserSteamStats(elem);
            m_Left = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                       &this->m_StatStateMap.m_Tree,
                       m_Left);
          }
          while ( m_Left != 0xFFFF );
        }
      }
    }
  }
}


// CDotaStatManager::GameInit  (line 501, @0x000000000270e310, libserver.so)
// calls: CDotaStatManager::ClearAllPlayerStats
void __fastcall CDotaStatManager::GameInit(CDotaStatManager *const this, const EventGameInit_t *const msg)
{
  CDotaStatManager::ClearAllPlayerStats(this);
}


// CDotaStatManager::PreSpawnGroupUnload  (line 506, @0x00000000026bd000, libserver.so)
void __fastcall CDotaStatManager::PreSpawnGroupUnload(
        CDotaStatManager *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  ;
}


// CDotaStatManager::ClearAllPlayerStats  (line 510, @0x000000000270dd80, libserver.so)  // inlines: CNetworkVarBase, Element, EnsureValidValue<TimelineCompression_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, First, FirstInorder, IntervalTimer, IsIdxValid, IsValidIndex, LeftChild, NetworkStateChanged, Next, NextInorder, Purge, PurgeAndDeleteElements, RemoveAll, Set, SetCompressionType, SetLeftChild, SetRightChild, SetTimeFunction, Start, _Function_base, _M_init_functor, function, function<float (*)(), void>, operator=, operator=<TimelineCompression_t>, operator=<float>, operator==, operator[], swap, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<float (*)(const std::_Any_data&)>, swap<std::_Any_data>, ~CBasePlayerStatState, ~CBotPlayerStatState, ~CTimeline, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~_Function_base, ~function
// calls: CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int, CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlRBTree<CUtlMap<int, CTimeline*>::Node_t, short unsigned int, CUtlMap<int, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, operator delete, operator new, CTimeline::ClearValues, IntervalTimer::Now, std::_Function_base::_Base_manager<float (*)()>::_M_manager, CUtlRBTree<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int, CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>, short unsigned int>::Purge, _Unwind_Resume (13 total)
// callers: CDotaStatManager::GameInit
// globals: GetGameTime(void)
void __fastcall CDotaStatManager::ClearAllPlayerStats(CDotaStatManager *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*>::Node_t,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx
  CDotaStatManager::PlayerStatMap_t *p_m_StatStateMap; // r14
  __int64 v6; // r13
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::ElemType_t elem; // rdi
  unsigned __int16 Inorder; // r15
  UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState*>::Node_t,short unsigned int> *v9; // rdx
  __int64 v10; // rax
  unsigned __int16 v11; // si
  CTimeline ***v12; // r13
  CTimeline **v13; // r12
  CTimeline *v14; // rbx
  void (__fastcall *M_manager)(std::function<float()> *, std::function<float()> *, __int64); // rax
  CTimeline *v16; // rax
  CTimeline *v17; // rbx
  CTimeline *v18; // r14
  float v19; // xmm0_4
  bool (__fastcall *v20)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // rsi
  CTimeline *v21; // r12
  std::_Any_data v22; // rcx
  __int64 delta; // rdx
  bool (__fastcall *v24)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // rax
  float (__fastcall *v25)(const std::_Any_data *const); // rdx
  CUtlMap<int,CDotaStatManager::CBotPlayerStatState*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t v26; // rbx
  unsigned __int16 index; // r8
  __int64 m_nAllocationCount; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *v31; // rsi
  bool v32; // zf
  CTimeline **pTimelines; // [rsp+10h] [rbp-D0h]
  float v34; // [rsp+1Ch] [rbp-C4h]
  __int64 v35; // [rsp+38h] [rbp-A8h]
  CDotaStatManager::PlayerStatMap_t *v36; // [rsp+38h] [rbp-A8h]
  CTimeline **pTimelineArrays[3]; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-88h] BYREF
  std::_Any_data v39; // [rsp+60h] [rbp-80h] BYREF
  bool (__fastcall *v40)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // [rsp+70h] [rbp-70h]
  float (__fastcall *v41)(const std::_Any_data *const); // [rsp+78h] [rbp-68h]
  std::_Any_data v42; // [rsp+80h] [rbp-60h] BYREF
  bool (__fastcall *v43)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // [rsp+90h] [rbp-50h]
  float (__fastcall *M_object)(const std::_Any_data *const); // [rsp+98h] [rbp-48h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  m_Root = this->m_StatStateMap.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    p_m_StatStateMap = &this->m_StatStateMap;
  }
  else
  {
    m_pMemory = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    p_m_StatStateMap = &this->m_StatStateMap;
    while ( 1 )
    {
      v6 = m_Root;
      elem = m_pMemory[v6].m_Data.elem;
      if ( elem != 0 )
      {
        (*(elem->_vptr_CBasePlayerStatState + 2))(elem);
        this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem = 0;
      }
      m_Root = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_StatStateMap.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory;
    }
  }
  Inorder = this->m_BotStatStateMap.m_Tree.m_Root;
  if ( Inorder != 0xFFFF )
  {
    v9 = this->m_BotStatStateMap.m_Tree.m_Elements.m_pMemory;
    v10 = Inorder;
    v11 = v9[Inorder].m_Left;
    if ( v11 == 0xFFFF )
    {
      v36 = p_m_StatStateMap;
    }
    else
    {
      while ( 1 )
      {
        v10 = v11;
        if ( v9[v11].m_Left == 0xFFFF )
          break;
        v11 = v9[v11].m_Left;
      }
      Inorder = v11;
      v36 = p_m_StatStateMap;
    }
    while ( 1 )
    {
      v26 = v9[v10].m_Data.elem;
      if ( v26 != 0 )
      {
        index = v26->m_TimelineMap.m_Tree.m_LastAlloc.index;
        v26->_vptr_CBasePlayerStatState = &off_42AAFC0;
        if ( index != 0xFFFF )
        {
          m_nAllocationCount = v26->m_TimelineMap.m_Tree.m_Elements.m_nAllocationCount;
          v29 = 0;
          v30 = 0;
          if ( m_nAllocationCount > 0 )
          {
            do
            {
              if ( v30 < m_nAllocationCount && v30 <= index )
              {
                v31 = &v26->m_TimelineMap.m_Tree.m_Elements.m_pMemory[v29];
                if ( v30 != v31->m_Left )
                {
                  v31->m_Right = v26->m_TimelineMap.m_Tree.m_FirstFree;
                  v26->m_TimelineMap.m_Tree.m_Elements.m_pMemory[v29].m_Left = v30;
                  index = v26->m_TimelineMap.m_Tree.m_LastAlloc.index;
                  v26->m_TimelineMap.m_Tree.m_FirstFree = v30;
                }
              }
              if ( v30 == index )
                break;
              m_nAllocationCount = v26->m_TimelineMap.m_Tree.m_Elements.m_nAllocationCount;
              if ( (v30 + 1) >= m_nAllocationCount )
                break;
              ++v30;
              ++v29;
            }
            while ( v30 != 0xFFFF );
          }
          v26->m_TimelineMap.m_Tree.m_Root = -1;
          v26->m_TimelineMap.m_Tree.m_NumElements = 0;
        }
        v32 = (v26->m_TimelineMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
        v26->m_TimelineMap.m_Tree.m_FirstFree = -1;
        if ( v32 )
        {
          CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v26->m_TimelineMap.m_Tree.m_Elements);
          v32 = (v26->m_TimelineMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
          v26->m_TimelineMap.m_Tree.m_LastAlloc.index = -1;
          if ( v32 )
            CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v26->m_TimelineMap.m_Tree.m_Elements);
        }
        else
        {
          v26->m_TimelineMap.m_Tree.m_LastAlloc.index = -1;
        }
        operator delete(v26);
      }
      Inorder = CUtlRBTree<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                  &this->m_BotStatStateMap.m_Tree,
                  Inorder);
      if ( Inorder == 0xFFFF )
        break;
      v9 = this->m_BotStatStateMap.m_Tree.m_Elements.m_pMemory;
      v10 = Inorder;
    }
    p_m_StatStateMap = v36;
  }
  CUtlRBTree<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_BotStatStateMap.m_Tree);
  CUtlRBTree<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_PlayerNetWorthTimeline.m_Tree);
  CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&p_m_StatStateMap->m_Tree);
  v35 = 0;
  pTimelines = this->m_pTotalEarnedGoldTimeline;
  pTimelineArrays[0] = this->m_pTotalEarnedGoldTimeline;
  pTimelineArrays[1] = this->m_pTotalEarnedXPTimeline;
  pTimelineArrays[2] = this->m_pTotalNetWorthTimeline;
  do
  {
    v12 = pTimelineArrays;
    v13 = &pTimelines[v35];
    v14 = pTimelines[v35];
    if ( v14 == 0 )
      goto LABEL_26;
LABEL_23:
    M_manager = v14->m_fnTime._M_manager;
    v14->_vptr_IntervalTimer = &off_3FFCAB0;
    if ( M_manager != 0 )
      M_manager(&v14->m_fnTime, &v14->m_fnTime, 3);
    operator delete(v14);
    while ( 1 )
    {
LABEL_26:
      v16 = operator new(0x240u);
      v16->m_timestamp.m_Value = -1.0;
      v17 = v16;
      v16->_vptr_IntervalTimer = &off_3FFCAB0;
      v16->m_nBucketCount.m_Value = 0;
      v16->m_flInterval.m_Value = 0.0;
      v16->m_flFinalValue.m_Value = 0.0;
      v16->m_nCompressionType.m_Value = TimelineCompression_t::TIMELINE_COMPRESSION_SUM;
      v16->m_bStopped.m_Value = 0;
      v16->m_fnTime._M_manager = 0;
      CTimeline::ClearValues(v16);
      *v13 = v17;
      v18 = v17;
      if ( v17->m_nCompressionType.m_Value != TimelineCompression_t::TIMELINE_COMPRESSION_AVERAGE )
      {
        (*(v17->_vptr_IntervalTimer + 2))(v17, 536, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v17->m_nCompressionType.m_Value = TimelineCompression_t::TIMELINE_COMPRESSION_AVERAGE;
        v18 = *v13;
      }
      v19 = IntervalTimer::Now(v18);
      if ( v19 != v18->m_timestamp.m_Value )
      {
        v34 = v19;
        (*(v18->_vptr_IntervalTimer + 2))(v18, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v18->m_timestamp.m_Value = v34;
      }
      v20 = 0;
      v39._M_unused._M_object = GetGameTime;
      v21 = *v13;
      v43 = 0;
      v41 = std::_Function_handler<float ()(void),float (*)(void)>::_M_invoke;
      v40 = std::_Function_base::_Base_manager<float (*)(void)>::_M_manager;
      if ( std::_Function_base::_Base_manager<float (*)(void)>::_M_manager != 0 )
      {
        M_object = std::_Function_handler<float ()(void),float (*)(void)>::_M_invoke;
        v43 = std::_Function_base::_Base_manager<float (*)(void)>::_M_manager;
        std::_Function_base::_Base_manager<float (*)(void)>::_M_manager(
          &v42,
          &v39,
          std::_Manager_operation::__clone_functor);
        v20 = v43;
      }
      v22 = v42;
      delta = v21->m_fnTime._M_functor._M_unused._M_member_pointer.__delta;
      v42._M_unused._M_object = v21->m_fnTime._M_functor._M_unused._M_object;
      v24 = v21->m_fnTime._M_manager;
      v21->m_fnTime._M_functor._M_unused._M_object = v22._M_unused._M_object;
      v22._M_unused._M_object = v21->m_fnTime._M_invoker;
      v42._M_unused._M_member_pointer.__delta = delta;
      v25 = M_object;
      v21->m_fnTime._M_functor._M_unused._M_member_pointer.__delta = v22._M_unused._M_member_pointer.__delta;
      v43 = v24;
      v21->m_fnTime._M_manager = v20;
      M_object = v22._M_unused._M_object;
      v21->m_fnTime._M_invoker = v25;
      if ( v24 != 0 )
        v24(&v42, &v42, std::_Manager_operation::__destroy_functor);
      if ( v40 != 0 )
        v40(&v39, &v39, std::_Manager_operation::__destroy_functor);
      if ( ++v12 == &v38 )
        break;
      v13 = &(*v12)[v35];
      v14 = *v13;
      if ( *v13 != 0 )
        goto LABEL_23;
    }
    ++v35;
  }
  while ( v35 != 2 );
}


// CDotaStatManager::IncrementTimelineStat  (line 546, @0x0000000002713590, libserver.so)
// calls: CDotaStatManager::GetStatTimeline, CTimeline::RecordValue, CDotaStatManager::GetTimelineElapsedTime, DevMsg(char const*,...), CTimeline::GetValue
// callers: CDOTA_PlayerResource::IncrementTotalEarnedXP, CDOTA_PlayerResource::ModifyGold
// strings: "[DOTASTATS] Incrementing timeline stat by %f, elapsed: %f\n", "[%i] = %f\n"
__int64 __fastcall CDotaStatManager::IncrementTimelineStat(
        const CDotaStatManager *const this,
        CDOTAPlayer *pPlayer,
        float flPoints,
        const char *szStatName)
{
  int v7; // eax
  CTimeline *StatTimeline; // rax
  float v9; // xmm1_4
  const CTimeline *v10; // r12
  __int64 result; // rax
  CDOTAPlayer *v12; // rsi
  int v13; // ebx
  float Value; // xmm0_4
  __int64 v15; // rsi
  float flElapsed[9]; // [rsp+1Ch] [rbp-24h] BYREF

  if ( pPlayer == 0 )
    return 0;
  v7 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  StatTimeline = CDotaStatManager::GetStatTimeline(this, v7, szStatName);
  v10 = StatTimeline;
  if ( StatTimeline == 0 )
    return 0;
  CTimeline::RecordValue(StatTimeline, flPoints, v9);
  result = 1;
  if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue > 1 )
  {
    v12 = pPlayer;
    flElapsed[0] = 0.0;
    v13 = 0;
    CDotaStatManager::GetTimelineElapsedTime(this, v12, flElapsed, szStatName);
    DevMsg("[DOTASTATS] Incrementing timeline stat by %f, elapsed: %f\n", flPoints, flElapsed[0]);
    if ( v10->m_nBucketCount.m_Value > 0 )
    {
      do
      {
        Value = CTimeline::GetValue(v10, v13);
        v15 = v13++;
        DevMsg("[%i] = %f\n", v15, Value);
      }
      while ( v13 < v10->m_nBucketCount.m_Value );
    }
    return 1;
  }
  return result;
}


// CDotaStatManager::GetTimelineStatByInterp  (line 571, @0x0000000002713390, libserver.so)
// calls: CDotaStatManager::GetStatTimeline, CTimeline::GetValueAtInterp
__int64 __fastcall CDotaStatManager::GetTimelineStatByInterp(
        const CDotaStatManager *const this,
        CDOTAPlayer *pPlayer,
        float *const flOutValue,
        float flInterp,
        const char *szStatName)
{
  int v8; // eax
  CTimeline *StatTimeline; // rax
  float v10; // xmm1_4

  if ( pPlayer == 0 )
    return 0;
  v8 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  StatTimeline = CDotaStatManager::GetStatTimeline(this, v8, szStatName);
  if ( StatTimeline == 0 )
    return 0;
  *flOutValue = CTimeline::GetValueAtInterp(StatTimeline, flInterp, v10);
  return 1;
}


// CDotaStatManager::GetTimelineStatByGameTime  (line 584, @0x0000000002713410, libserver.so)  // inlines: GetStartTime, curtime
// calls: CDotaStatManager::GetStatTimeline, CTimeline::GetValueAtInterp
__int64 __fastcall CDotaStatManager::GetTimelineStatByGameTime(
        const CDotaStatManager *const this,
        CDOTAPlayer *pPlayer,
        float *const flOutValue,
        float flGameTime,
        const char *szStatName)
{
  int v8; // eax
  CTimeline *StatTimeline; // rax
  float m_flCurrentTime; // xmm2_4
  float m_Value; // xmm1_4
  CGlobalVars *v12; // rbx
  float v13; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float v16; // [rsp-4h] [rbp-34h]
  CTimeline *flGameTimeb; // [rsp+0h] [rbp-30h]

  if ( pPlayer == 0 )
    return 0;
  v8 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  StatTimeline = CDotaStatManager::GetStatTimeline(this, v8, szStatName);
  if ( StatTimeline == 0 )
    return 0;
  m_flCurrentTime = 0.0;
  m_Value = StatTimeline->m_timestamp.m_Value;
  v12 = gpGlobals;
  v13 = flGameTime - m_Value;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v16 = flGameTime - m_Value;
        flGameTimeb = StatTimeline;
        (m_pfnWarningFunc)(1, v13, m_Value, 0.0);
        StatTimeline = flGameTimeb;
        v13 = v16;
        m_Value = flGameTimeb->m_timestamp.m_Value;
      }
    }
    m_flCurrentTime = v12->m_flCurrentTime;
  }
  *flOutValue = CTimeline::GetValueAtInterp(StatTimeline, v13 / (m_flCurrentTime - m_Value), m_Value);
  return 1;
}


// CDotaStatManager::GetTimelineElapsedTime  (line 600, @0x0000000002713500, libserver.so)  // inlines: GetElapsedTime
// calls: CDotaStatManager::GetStatTimeline, IntervalTimer::Now
// callers: CDotaStatManager::IncrementTimelineStat
bool __fastcall CDotaStatManager::GetTimelineElapsedTime(
        const CDotaStatManager *const this,
        CDOTAPlayer *pPlayer,
        float *const flOutValue,
        const char *szStatName)
{
  int v7; // eax
  CTimeline *StatTimeline; // rax
  float v9; // xmm0_4

  if ( pPlayer == 0 )
    return 0;
  v7 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  StatTimeline = CDotaStatManager::GetStatTimeline(this, v7, szStatName);
  if ( StatTimeline == 0 )
    return 0;
  if ( StatTimeline->m_timestamp.m_Value <= 0.0 )
    v9 = 99999.898;
  else
    v9 = IntervalTimer::Now(StatTimeline) - StatTimeline->m_timestamp.m_Value;
  *flOutValue = v9;
  return 1;
}


// CDotaStatManager::GetTimelineStatPerMinute  (line 613, @0x0000000002713870, libserver.so)
// calls: CDotaStatManager::GetStatState, CDotaStatManager::CBasePlayerStatState::GetTimelineStatPerMinute
__int64 __fastcall CDotaStatManager::GetTimelineStatPerMinute(
        const CDotaStatManager *const this,
        CDOTAPlayer *pPlayer,
        float *const flOutValue,
        float flMinute,
        const char *szStatName)
{
  int v8; // eax
  CDotaStatManager::CBasePlayerStatState *StatState; // rax

  if ( pPlayer != 0
    && (v8 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer),
        (StatState = CDotaStatManager::GetStatState(this, v8)) != 0) )
  {
    return CDotaStatManager::CBasePlayerStatState::GetTimelineStatPerMinute(StatState, flOutValue, flMinute, szStatName);
  }
  else
  {
    return 0;
  }
}


// CDotaStatManager::GetStatState  (line 623, @0x0000000002709d20, libserver.so)  // inlines: Element, Find, GetStatIndexForSteamID, operator[]
// calls: CDOTA_PlayerResource::IsFakeClient, CDOTA_PlayerResource::GetSteamID, CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int, CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDotaStatManager::GetStatTimeline, CDotaStatManager::GetTimelineStatPerMinute
CDotaStatManager::CBasePlayerStatState *__fastcall CDotaStatManager::GetStatState(
        const CDotaStatManager *const this,
        int nPlayerID)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v6; // ax
  CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*,short unsigned int,bool (*)(const CSteamID&,const CSteamID&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( nPlayerID <= 0x3F )
  {
    if ( CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, nPlayerID) )
    {
      *&search.key.m_steamid.m_comp = nPlayerID;
      v6 = CUtlRBTree<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CDotaStatManager::CBotPlayerStatState *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &this->m_BotStatStateMap.m_Tree,
             &search);
      if ( v6 != 0xFFFF )
        return this->m_BotStatStateMap.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
    }
    else
    {
      search.key.m_steamid.m_unAll64Bits = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, nPlayerID);
      v4 = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &this->m_StatStateMap.m_Tree,
             &search);
      if ( v4 != 0xFFFF )
        return this->m_StatStateMap.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem;
    }
  }
  return 0;
}


// CDotaStatManager::GetStatTimeline  (line 649, @0x0000000002712d40, libserver.so)
// calls: CDotaStatManager::GetStatState, CDotaStatManager::CBasePlayerStatState::GetStatTimeline
// callers: CDOTASpecGraphPlayerData::UpdateGoldPerMinStats, CDOTASpecGraphPlayerData::UpdateXPPerMinStats, CDotaStatManager::GetTimelineStatByInterp, CDotaStatManager::GetTimelineStatByGameTime, CDotaStatManager::GetTimelineElapsedTime, CDotaStatManager::IncrementTimelineStat
CTimeline *__fastcall CDotaStatManager::GetStatTimeline(
        const CDotaStatManager *const this,
        int nPlayerID,
        const char *szStatName)
{
  CDotaStatManager::CBasePlayerStatState *StatState; // rax

  if ( nPlayerID > 0x3F )
    return 0;
  StatState = CDotaStatManager::GetStatState(this, nPlayerID);
  if ( StatState != 0 )
    return CDotaStatManager::CBasePlayerStatState::GetStatTimeline(StatState, szStatName);
  else
    return 0;
}


// CDotaStatManager::GetTotalEarnedGoldTimeline  (line 659, @0x00000000026f4bd0, libserver.so)
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeam
CTimeline *__fastcall CDotaStatManager::GetTotalEarnedGoldTimeline(const CDotaStatManager *const this, int nTeam)
{
  CTimeline *result; // rax

  result = 0;
  if ( (nTeam - 2) <= 1 )
  {
    if ( nTeam == 2 )
      return this->m_pTotalEarnedGoldTimeline[0];
    else
      return this->m_pTotalEarnedGoldTimeline[1];
  }
  return result;
}


// CDotaStatManager::GetTotalNetWorthTimeline  (line 667, @0x00000000026f4c00, libserver.so)
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeam
CTimeline *__fastcall CDotaStatManager::GetTotalNetWorthTimeline(const CDotaStatManager *const this, int nTeam)
{
  CTimeline *result; // rax

  result = 0;
  if ( (nTeam - 2) <= 1 )
  {
    if ( nTeam == 2 )
      return this->m_pTotalNetWorthTimeline[0];
    else
      return this->m_pTotalNetWorthTimeline[1];
  }
  return result;
}


// CDotaStatManager::GetTotalEarnedXPTimeline  (line 675, @0x00000000026f4c30, libserver.so)
// callers: CDOTAGCServerSystem::WriteMatchMetadataTeam
CTimeline *__fastcall CDotaStatManager::GetTotalEarnedXPTimeline(const CDotaStatManager *const this, int nTeam)
{
  CTimeline *result; // rax

  result = 0;
  if ( (nTeam - 2) <= 1 )
  {
    if ( nTeam == 2 )
      return this->m_pTotalEarnedXPTimeline[0];
    else
      return this->m_pTotalEarnedXPTimeline[1];
  }
  return result;
}


// CDotaStatManager::GetPlayerNetWorthTimeline  (line 683, @0x0000000002712280, libserver.so)  // inlines: CNetworkVarBase, Element, EnsureValidValue<TimelineCompression_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Find, FindInsertionPosition, Insert, InsertAt, IntervalTimer, LeftChild, NetworkStateChanged, RightChild, Set, SetCompressionType, SetTimeFunction, Start, _Function_base, _M_init_functor, function, function<float (*)(), void>, operator(), operator=, operator=<TimelineCompression_t>, operator=<float>, operator[], swap, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<float (*)(const std::_Any_data&)>, swap<std::_Any_data>, ~_Function_base, ~function
// calls: operator new, CTimeline::ClearValues, CUtlRBTree<CUtlMap<int, CTimeline*>::Node_t, short unsigned int, CUtlMap<int, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CTimeline*>::Node_t, short unsigned int, CUtlMap<int, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, IntervalTimer::Now, std::_Function_base::_Base_manager<float (*)()>::_M_manager, __stack_chk_fail, operator delete, _Unwind_Resume
// callers: CDOTASpectatorGraphManager::RecordTeamStats, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
// globals: GetGameTime(void)
CTimeline *__fastcall CDotaStatManager::GetPlayerNetWorthTimeline(CDotaStatManager *const this, int nPlayerID)
{
  __int64 v2; // rdx
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<int,CTimeline*>::Node_t,short unsigned int> *v5; // rcx
  unsigned __int64 v6; // r15
  _DWORD *v7; // r12
  unsigned __int16 v8; // r12
  unsigned __int16 m_Right; // ax
  char v10; // dl
  bool v11; // zf
  UtlRBTreeNode_t<CUtlMap<int,CTimeline*>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v14; // r15
  __int16 v15; // r14
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  unsigned __int64 v18; // r14
  UtlRBTreeNode_t<CUtlMap<int,CTimeline*>::Node_t,short unsigned int> *v19; // rax
  CUtlMap<int,CTimeline*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r13
  float v21; // xmm0_4
  UtlRBTreeNode_t<CUtlMap<int,CTimeline*>::Node_t,short unsigned int> *v22; // rcx
  CUtlMap<int,CTimeline*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t v23; // r13
  bool (__fastcall *v24)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // rcx
  __int64 delta; // rdx
  std::_Any_data v26; // kr00_16
  bool (__fastcall *M_manager)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // rax
  float (__fastcall *v28)(const std::_Any_data *const); // rdx
  float (__fastcall *M_invoker)(const std::_Any_data *const); // rcx
  float nPlayerIDb; // [rsp+8h] [rbp-98h]
  CUtlMap<int,CTimeline*,short unsigned int,bool (*)(int const&,int const&)>::Node_t pCopyFrom; // [rsp+10h] [rbp-90h] BYREF
  std::_Any_data __source; // [rsp+20h] [rbp-80h] BYREF
  bool (__fastcall *v34)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // [rsp+30h] [rbp-70h]
  float (__fastcall *v35)(const std::_Any_data *const); // [rsp+38h] [rbp-68h]
  std::_Any_data __dest; // [rsp+40h] [rbp-60h] BYREF
  bool (__fastcall *v37)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // [rsp+50h] [rbp-50h]
  float (__fastcall *v38)(const std::_Any_data *const); // [rsp+58h] [rbp-48h]
  unsigned __int64 v39; // [rsp+68h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  v2 = 0;
  if ( nPlayerID > 0x3F )
    return 0;
  m_Root = this->m_PlayerNetWorthTimeline.m_Tree.m_Root;
  pCopyFrom.key = nPlayerID;
  if ( m_Root == 0xFFFF )
  {
LABEL_8:
    v7 = operator new(0x240u);
    v7[2] = -1082130432;
    v7[131] = 0;
    v7[132] = 0;
    v7[133] = 0;
    v7[134] = 0;
    *v7 = &off_3FFCAB0;
    *(v7 + 540) = 0;
    *(v7 + 70) = 0;
    CTimeline::ClearValues(v7);
    pCopyFrom.elem = v7;
    v8 = this->m_PlayerNetWorthTimeline.m_Tree.m_Root;
    pCopyFrom.key = nPlayerID;
    if ( v8 == 0xFFFF )
    {
      v15 = -1;
      v14 = 0;
    }
    else
    {
      while ( 1 )
      {
        v11 = !this->m_PlayerNetWorthTimeline.m_Tree.m_LessFunc.m_LessFunc(
                 &pCopyFrom,
                 &this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory[v8].m_Data);
        m_pMemory = this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory;
        if ( v11 )
        {
          m_Right = m_pMemory[v8].m_Right;
          v10 = 0;
        }
        else
        {
          m_Right = m_pMemory[v8].m_Left;
          v10 = 1;
        }
        if ( m_Right == 0xFFFF )
          break;
        v8 = m_Right;
      }
      v14 = v10;
      v15 = v8;
    }
    v16 = CUtlRBTree<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
            &this->m_PlayerNetWorthTimeline.m_Tree,
            &pCopyFrom);
    v17 = v15;
    m_Root = v16;
    v18 = v16;
    CUtlRBTree<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CTimeline *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      &this->m_PlayerNetWorthTimeline.m_Tree,
      v16,
      v17,
      v14);
    v19 = this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory;
    ++this->m_PlayerNetWorthTimeline.m_Tree.m_NumElements;
    elem = v19[v18].m_Data.elem;
    if ( elem->m_nCompressionType.m_Value != TimelineCompression_t::TIMELINE_COMPRESSION_AVERAGE )
    {
      (*(elem->_vptr_IntervalTimer + 2))(elem, 536, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      elem->m_nCompressionType.m_Value = TimelineCompression_t::TIMELINE_COMPRESSION_AVERAGE;
      elem = this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory[v18].m_Data.elem;
    }
    v21 = IntervalTimer::Now(elem);
    if ( v21 != elem->m_timestamp.m_Value )
    {
      nPlayerIDb = v21;
      (*(elem->_vptr_IntervalTimer + 2))(elem, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      elem->m_timestamp.m_Value = nPlayerIDb;
    }
    __source._M_unused._M_object = GetGameTime;
    v22 = this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory;
    v35 = std::_Function_handler<float ()(void),float (*)(void)>::_M_invoke;
    v34 = std::_Function_base::_Base_manager<float (*)(void)>::_M_manager;
    v23 = v22[v18].m_Data.elem;
    v24 = 0;
    v37 = 0;
    if ( std::_Function_base::_Base_manager<float (*)(void)>::_M_manager != 0 )
    {
      v38 = std::_Function_handler<float ()(void),float (*)(void)>::_M_invoke;
      v37 = std::_Function_base::_Base_manager<float (*)(void)>::_M_manager;
      std::_Function_base::_Base_manager<float (*)(void)>::_M_manager(
        &__dest,
        &__source,
        std::_Manager_operation::__clone_functor);
      v24 = v37;
    }
    delta = v23->m_fnTime._M_functor._M_unused._M_member_pointer.__delta;
    v26 = __dest;
    __dest._M_unused._M_object = v23->m_fnTime._M_functor._M_unused._M_object;
    M_manager = v23->m_fnTime._M_manager;
    __dest._M_unused._M_member_pointer.__delta = delta;
    v28 = v38;
    v23->m_fnTime._M_manager = v24;
    M_invoker = v23->m_fnTime._M_invoker;
    v23->m_fnTime._M_functor = v26;
    v37 = M_manager;
    v38 = M_invoker;
    v23->m_fnTime._M_invoker = v28;
    if ( M_manager != 0 )
      M_manager(&__dest, &__dest, std::_Manager_operation::__destroy_functor);
    if ( v34 != 0 )
      v34(&__source, &__source, std::_Manager_operation::__destroy_functor);
  }
  else
  {
    v5 = this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = m_Root;
        if ( (this->m_PlayerNetWorthTimeline.m_Tree.m_LessFunc.m_LessFunc)(&pCopyFrom, &v5[v6].m_Data, v2) == 0 )
          break;
        v5 = this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory;
        m_Root = v5[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_8;
      }
      if ( !this->m_PlayerNetWorthTimeline.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory[v6].m_Data,
              &pCopyFrom) )
        break;
      v5 = this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory;
      m_Root = v5[v6].m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_8;
    }
  }
  return this->m_PlayerNetWorthTimeline.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.elem;
}


// CDotaStatManager::DumpStatDetails  (line 700, @0x000000000270a8f0, libserver.so)  // inlines: Element, FirstInorder, LeftChild, NextInorder, operator[]
// calls: DevMsg(char const*,...), CUtlRBTree<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int, CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: dota_dump_all_player_stats_f
void __fastcall CDotaStatManager::DumpStatDetails(const CDotaStatManager *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState*>::Node_t,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx
  void (__fastcall ***elem)(_QWORD); // rdi

  DevMsg(&stru_33C2400.m_szFinishText[332]);
  m_Root = this->m_StatStateMap.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    while ( 1 )
    {
      elem = m_pMemory[m_Root].m_Data.elem;
      if ( elem != 0 )
        (**elem)(elem);
      m_Root = CUtlRBTree<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short,CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID,CDotaStatManager::CPlayerStatState *,unsigned short,bool (*)(CSteamID const&,CSteamID const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_StatStateMap.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_StatStateMap.m_Tree.m_Elements.m_pMemory;
    }
  }
  DevMsg(&stru_33C2400.m_szFinishText[372]);
}


// CDotaStatManager::CBasePlayerStatState::CBasePlayerStatState  (line 716, @0x00000000026f4c60, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetLessFunc
// callers: CDotaStatManager::CBotPlayerStatState::CBotPlayerStatState, CDotaStatManager::CPlayerStatState::CPlayerStatState, CDotaStatManager::FireGameEvent
// globals: `anonymous namespace'::StringLessFunc(CUtlSymbolLarge const&,CUtlSymbolLarge const&)
void __fastcall CDotaStatManager::CBasePlayerStatState::CBasePlayerStatState(
        CDotaStatManager::CBasePlayerStatState *const this)
{
  this->_vptr_CBasePlayerStatState = &off_42AAFC0;
  this->m_TimelineMap.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_TimelineMap.m_Tree.m_Elements.m_pMemory = 0;
  this->m_TimelineMap.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_TimelineMap.m_Tree.m_Root = -1;
  this->m_TimelineMap.m_Tree.m_NumElements = 0;
  this->m_TimelineMap.m_Tree.m_FirstFree = -1;
  this->m_TimelineMap.m_Tree.m_LastAlloc.index = -1;
  this->m_TimelineMap.m_Tree.m_pElements = 0;
  this->m_TimelineMap.m_Tree.m_LessFunc.m_LessFunc = `anonymous namespace'::StringLessFunc;
}


// CDotaStatManager::CPlayerStatState::CPlayerStatState  (line 721, @0x0000000002700050, libserver.so)  // inlines: CCallResult, CCallback, CCallbackBase, CCallbackImpl, Cancel, Register, SetGameserverFlag, Unregister, ~CBasePlayerStatState, ~CCallResult, ~CCallback, ~CCallbackImpl, ~CUtlMap
// calls: CDotaStatManager::CBasePlayerStatState::CBasePlayerStatState, SteamAPI_RegisterCallback, KeyValues::operator new, KeyValues::KeyValues, SteamAPI_UnregisterCallback, KeyValues::operator delete, SteamAPI_UnregisterCallResult, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// callers: CDotaStatManager::FireGameEvent
// strings: "userstats"
// globals: CDotaStatManager::CPlayerStatState::Steam_OnGSStatsUnloaded(GSStatsUnloaded_t *)
void __fastcall CDotaStatManager::CPlayerStatState::CPlayerStatState(
        CDotaStatManager::CPlayerStatState *const this,
        const CSteamID *const steamID)
{
  CSteamID::SteamID_t v4; // rax
  KeyValues *v5; // r13
  bool v6; // zf

  CDotaStatManager::CBasePlayerStatState::CBasePlayerStatState(this);
  this->m_CallbackGSStatsReceived.m_nCallbackFlags = 0;
  this->_vptr_CBasePlayerStatState = &off_42AAF90;
  this->m_CallbackGSStatsReceived._vptr_CCallbackBase = off_42A90B0;
  this->m_CallbackGSStatsStored._vptr_CCallbackBase = off_42A90F0;
  this->m_CallbackGSStatUnloaded._vptr_CCallbackBase = off_42A9130;
  this->m_CallbackGSStatsReceived.m_hAPICall = 0;
  this->m_CallbackGSStatsReceived.m_pObj = 0;
  this->m_CallbackGSStatsReceived.m_Func.__pfn = 0;
  this->m_CallbackGSStatsReceived.m_Func.__delta = 0;
  this->m_CallbackGSStatsReceived.m_iCallback = 1800;
  this->m_CallbackGSStatsStored.m_nCallbackFlags = 0;
  this->m_CallbackGSStatsStored.m_hAPICall = 0;
  this->m_CallbackGSStatsStored.m_pObj = 0;
  this->m_CallbackGSStatsStored.m_Func.__pfn = 0;
  this->m_CallbackGSStatsStored.m_Func.__delta = 0;
  this->m_CallbackGSStatsStored.m_iCallback = 1801;
  this->m_CallbackGSStatUnloaded.m_iCallback = 0;
  this->m_CallbackGSStatUnloaded.m_Func.__delta = 0;
  this->m_CallbackGSStatUnloaded.m_nCallbackFlags = 2;
  this->m_CallbackGSStatUnloaded.m_pObj = this;
  this->m_CallbackGSStatUnloaded.m_Func.__pfn = CDotaStatManager::CPlayerStatState::Steam_OnGSStatsUnloaded;
  SteamAPI_RegisterCallback(&this->m_CallbackGSStatUnloaded, 1108);
  v4.m_comp = steamID->m_steamid;
  this->m_bIsStatRequestPending = 0;
  this->m_bIsStatSubmissionPending = 0;
  this->m_SteamID.m_steamid = v4;
  v5 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v5, "userstats");
  v6 = (this->m_CallbackGSStatUnloaded.m_nCallbackFlags & 1) == 0;
  this->m_pKVMatchStats = v5;
  if ( !v6 )
    SteamAPI_UnregisterCallback(&this->m_CallbackGSStatUnloaded);
  this->m_CallbackGSStatUnloaded.m_pObj = this;
  this->m_CallbackGSStatUnloaded.m_Func.__pfn = CDotaStatManager::CPlayerStatState::Steam_OnGSStatsUnloaded;
  this->m_CallbackGSStatUnloaded.m_Func.__delta = 0;
  SteamAPI_RegisterCallback(&this->m_CallbackGSStatUnloaded, 1108);
}


// CDotaStatManager::CBotPlayerStatState::CBotPlayerStatState  (line 733, @0x00000000026f4cc0, libserver.so)
// calls: CDotaStatManager::CBasePlayerStatState::CBasePlayerStatState
void __fastcall CDotaStatManager::CBotPlayerStatState::CBotPlayerStatState(
        CDotaStatManager::CBotPlayerStatState *const this,
        int nPlayerID)
{
  CDotaStatManager::CBasePlayerStatState::CBasePlayerStatState(this);
  this->m_nPlayerID = nPlayerID;
  this->_vptr_CBasePlayerStatState = &off_42AAFE0;
}


// CDotaStatManager::CPlayerStatState::~CPlayerStatState  (line 740, @0x00000000026ca3a0, libserver.so)  // inlines: Cancel, First, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, RemoveAll, SetLeftChild, SetRightChild, Unregister, operator==, operator[], ~CBasePlayerStatState, ~CCallResult, ~CCallback, ~CCallbackImpl, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: KeyValues::deleteThis, SteamAPI_UnregisterCallback, SteamAPI_UnregisterCallResult, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>, short unsigned int>::Purge
// callers: CDotaStatManager::CPlayerStatState::~CPlayerStatState
void __fastcall CDotaStatManager::CPlayerStatState::~CPlayerStatState(CDotaStatManager::CPlayerStatState *const this)
{
  KeyValues *m_pKVMatchStats; // rdi
  bool v3; // zf
  SteamAPICall_t m_hAPICall; // rsi
  SteamAPICall_t v5; // rsi
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *v10; // rcx
  uint32 m_nGrowSize; // eax

  this->_vptr_CBasePlayerStatState = &off_42AAF90;
  m_pKVMatchStats = this->m_pKVMatchStats;
  if ( m_pKVMatchStats != 0 )
  {
    KeyValues::deleteThis(m_pKVMatchStats);
    this->m_pKVMatchStats = 0;
  }
  SteamAPI_UnregisterCallback(&this->m_CallbackGSStatUnloaded);
  v3 = (this->m_CallbackGSStatUnloaded.m_nCallbackFlags & 1) == 0;
  this->m_CallbackGSStatUnloaded._vptr_CCallbackBase = &off_4186210;
  if ( !v3 )
    SteamAPI_UnregisterCallback(&this->m_CallbackGSStatUnloaded);
  m_hAPICall = this->m_CallbackGSStatsStored.m_hAPICall;
  this->m_CallbackGSStatsStored._vptr_CCallbackBase = off_42A90F0;
  if ( m_hAPICall != 0 )
  {
    SteamAPI_UnregisterCallResult(&this->m_CallbackGSStatsStored);
    this->m_CallbackGSStatsStored.m_hAPICall = 0;
  }
  v5 = this->m_CallbackGSStatsReceived.m_hAPICall;
  this->m_CallbackGSStatsReceived._vptr_CCallbackBase = off_42A90B0;
  if ( v5 != 0 )
  {
    SteamAPI_UnregisterCallResult(&this->m_CallbackGSStatsReceived);
    this->m_CallbackGSStatsReceived.m_hAPICall = 0;
  }
  index = this->m_TimelineMap.m_Tree.m_LastAlloc.index;
  this->_vptr_CBasePlayerStatState = &off_42AAFC0;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_TimelineMap.m_Tree.m_Elements.m_nAllocationCount;
    v8 = 0;
    v9 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v9 < m_nAllocationCount && index >= v9 )
        {
          v10 = &this->m_TimelineMap.m_Tree.m_Elements.m_pMemory[v8];
          if ( v9 != v10->m_Left )
          {
            v10->m_Right = this->m_TimelineMap.m_Tree.m_FirstFree;
            this->m_TimelineMap.m_Tree.m_Elements.m_pMemory[v8].m_Left = v9;
            index = this->m_TimelineMap.m_Tree.m_LastAlloc.index;
            this->m_TimelineMap.m_Tree.m_FirstFree = v9;
          }
        }
        if ( v9 == index )
          break;
        m_nAllocationCount = this->m_TimelineMap.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v9 + 1) >= m_nAllocationCount )
          break;
        ++v9;
        ++v8;
      }
      while ( v9 != 0xFFFF );
    }
    this->m_TimelineMap.m_Tree.m_Root = -1;
    this->m_TimelineMap.m_Tree.m_NumElements = 0;
  }
  v3 = (this->m_TimelineMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_TimelineMap.m_Tree.m_FirstFree = -1;
  if ( v3 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_TimelineMap.m_Tree.m_Elements);
    m_nGrowSize = this->m_TimelineMap.m_Tree.m_Elements.m_nGrowSize;
    this->m_TimelineMap.m_Tree.m_LastAlloc.index = -1;
    if ( (m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_TimelineMap.m_Tree.m_Elements);
  }
  else
  {
    this->m_TimelineMap.m_Tree.m_LastAlloc.index = -1;
  }
}


// CDotaStatManager::CPlayerStatState::~CPlayerStatState  (line 740, @0x00000000026ca550, libserver.so)
// calls: CDotaStatManager::CPlayerStatState::~CPlayerStatState, operator delete
void __fastcall CDotaStatManager::CPlayerStatState::~CPlayerStatState(CDotaStatManager::CPlayerStatState *const this)
{
  CDotaStatManager::CPlayerStatState::~CPlayerStatState(this);
  operator delete(this);
}


// CDotaStatManager::CPlayerStatState::RequestUserSteamStats  (line 750, @0x00000000026f4cf0, libserver.so)  // inlines: ConvertToUint64, GetBool, GetInt, Set
// calls: SteamAPI_RegisterCallResult, DevMsg(char const*,...), SteamAPI_UnregisterCallResult
// callers: CDotaStatManager::FireGameEvent
// strings: "[DOTASTATS]Requesting steam stats for user %llu...\n"
// globals: CDotaStatManager::CPlayerStatState::Steam_OnGSStatsReceived(GSStatsReceived_t *,bool)
bool __fastcall CDotaStatManager::CPlayerStatState::RequestUserSteamStats(
        CDotaStatManager::CPlayerStatState *const this)
{
  ISteamGameServerStats *m_pSteamGameServerStats; // rdi
  SteamAPICall_t v3; // r12
  CCallResult<CDotaStatManager::CPlayerStatState,GSStatsReceived_t> *p_m_CallbackGSStatsReceived; // r13

  if ( steamgameserverapicontext == 0 )
    return 0;
  m_pSteamGameServerStats = steamgameserverapicontext->m_pSteamGameServerStats;
  if ( m_pSteamGameServerStats != 0 )
  {
    v3 = (**m_pSteamGameServerStats)(m_pSteamGameServerStats, this->m_SteamID.m_steamid);
    if ( v3 != 0 )
    {
      if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        DevMsg("[DOTASTATS]Requesting steam stats for user %llu...\n", this->m_SteamID.m_steamid.m_unAll64Bits);
        p_m_CallbackGSStatsReceived = &this->m_CallbackGSStatsReceived;
        if ( this->m_CallbackGSStatsReceived.m_hAPICall == 0 )
          goto LABEL_6;
      }
      else
      {
        p_m_CallbackGSStatsReceived = &this->m_CallbackGSStatsReceived;
        if ( this->m_CallbackGSStatsReceived.m_hAPICall == 0 )
        {
LABEL_6:
          this->m_CallbackGSStatsReceived.m_hAPICall = v3;
          this->m_CallbackGSStatsReceived.m_Func.__pfn = CDotaStatManager::CPlayerStatState::Steam_OnGSStatsReceived;
          this->m_CallbackGSStatsReceived.m_pObj = this;
          this->m_CallbackGSStatsReceived.m_Func.__delta = 0;
          SteamAPI_RegisterCallResult(p_m_CallbackGSStatsReceived, v3);
          this->m_bIsStatRequestPending = 1;
          return 1;
        }
      }
      SteamAPI_UnregisterCallResult(p_m_CallbackGSStatsReceived);
      goto LABEL_6;
    }
  }
  return 0;
}


// CDotaStatManager::CPlayerStatState::Steam_OnGSStatsReceived  (line 780, @0x00000000026bd280, libserver.so)  // inlines: ConvertToUint64, GetBool, GetInt
// calls: DevMsg(char const*,...)
// strings: "[DOTASTATS]Steam stats received for user %llu\n", "[DOTASTATS]Error retrieving stats for user %llu with error %d\n"
void __fastcall CDotaStatManager::CPlayerStatState::Steam_OnGSStatsReceived(
        CDotaStatManager::CPlayerStatState *const this,
        GSStatsReceived_t *pGSStatsReceived,
        bool bError)
{
  if ( bError )
  {
    if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
      DevMsg(
        "[DOTASTATS]Error retrieving stats for user %llu with error %d\n",
        pGSStatsReceived->m_steamIDUser.m_steamid.m_unAll64Bits,
        pGSStatsReceived->m_eResult);
  }
  else if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    DevMsg("[DOTASTATS]Steam stats received for user %llu\n", pGSStatsReceived->m_steamIDUser.m_steamid.m_unAll64Bits);
    this->m_bIsStatRequestPending = 0;
  }
  else
  {
    this->m_bIsStatRequestPending = 0;
  }
}


// CDotaStatManager::CPlayerStatState::SubmitUserSteamStats  (line 799, @0x000000000270ac80, libserver.so)  // inlines: Element, FirstInorder, GetBool, GetElapsedTime, GetInt, LeftChild, NextInorder, Set, String, ToCStr, operator[]
// calls: KeyValues::GetFirstValue, KeyValues::GetName, CDotaStatManager::CPlayerStatState::FetchUserSteamStat<float>, KeyValues::GetNextValue, KeyValues::GetDataType, CDotaStatManager::CPlayerStatState::FetchUserSteamStat<int>, KeyValues::GetInt, CDotaStatManager::CPlayerStatState::StoreUserSteamStat<int>, CTimeline::GetValue, IntervalTimer::Now, CDotaStatManager::CPlayerStatState::StoreAvgRateStat, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder (16 total)
// callers: CDotaStatManager::AggregateAllPlayerStats
// globals: CDotaStatManager::CPlayerStatState::Steam_OnGSStatsStored(GSStatsStored_t *,bool)
bool __fastcall CDotaStatManager::CPlayerStatState::SubmitUserSteamStats(
        CDotaStatManager::CPlayerStatState *const this)
{
  KeyValues *FirstValue; // r12
  float v3; // xmm2_4
  const char *v4; // rax
  CKeyValues_Data::types_t DataType; // eax
  const char *Name; // rax
  int Int; // eax
  const char *v8; // rax
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx
  unsigned __int64 v12; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *v13; // rax
  const CTimeline *elem; // r14
  int v15; // r15d
  double v16; // xmm1_8
  int v17; // esi
  float Value; // xmm0_4
  const char *m_pAsString; // r13
  float v20; // xmm0_4
  float v21; // xmm0_4
  SteamAPICall_t v23; // r12
  int v24; // eax
  const char *v25; // rax
  float v26; // xmm1_4
  bool m_bIsStatRequestPending; // [rsp+Fh] [rbp-51h]
  float flStatTotal; // [rsp+1Ch] [rbp-44h]
  unsigned int flStatTotala; // [rsp+1Ch] [rbp-44h]
  float nLifetime[13]; // [rsp+2Ch] [rbp-34h] BYREF

  m_bIsStatRequestPending = this->m_bIsStatRequestPending;
  if ( m_bIsStatRequestPending
    || steamgameserverapicontext == 0
    || steamgameserverapicontext->m_pSteamGameServerStats == 0 )
  {
    return 0;
  }
  FirstValue = KeyValues::GetFirstValue(this->m_pKVMatchStats);
  if ( FirstValue != 0 )
  {
    while ( 1 )
    {
      DataType = KeyValues::GetDataType(FirstValue, 0);
      if ( DataType != CKeyValues_Data::types_t::TYPE_INT )
        break;
      nLifetime[0] = 0.0;
      Name = KeyValues::GetName(FirstValue);
      if ( CDotaStatManager::CPlayerStatState::FetchUserSteamStat<int>(this, nLifetime, Name) )
      {
        Int = KeyValues::GetInt(FirstValue, 0, 0);
        LODWORD(nLifetime[0]) += Int;
        v8 = KeyValues::GetName(FirstValue);
        CDotaStatManager::CPlayerStatState::StoreUserSteamStat<int>(this, SLODWORD(nLifetime[0]), v8);
        FirstValue = KeyValues::GetNextValue(FirstValue);
        if ( FirstValue == 0 )
          goto LABEL_13;
      }
      else
      {
LABEL_9:
        FirstValue = KeyValues::GetNextValue(FirstValue);
        if ( FirstValue == 0 )
          goto LABEL_13;
      }
    }
    if ( DataType == CKeyValues_Data::types_t::TYPE_FLOAT )
    {
      nLifetime[0] = 0.0;
      v4 = KeyValues::GetName(FirstValue);
      if ( CDotaStatManager::CPlayerStatState::FetchUserSteamStat<float>(this, nLifetime, v4) )
      {
        v24 = KeyValues::GetInt(FirstValue, 0, 0);
        nLifetime[0] = v24 + nLifetime[0];
        v25 = KeyValues::GetName(FirstValue);
        CDotaStatManager::CPlayerStatState::StoreUserSteamStat<float>(
          this,
          COERCE_DOUBLE(LODWORD(nLifetime[0])),
          v26,
          v25);
      }
    }
    goto LABEL_9;
  }
LABEL_13:
  m_Root = this->m_TimelineMap.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v12 = m_Root;
      v13 = &m_pMemory[v12];
      elem = m_pMemory[v12].m_Data.elem;
      if ( elem != 0 )
      {
        if ( elem->m_nBucketCount.m_Value <= 0 )
        {
          v16 = 0.0;
        }
        else
        {
          v15 = 0;
          LODWORD(v16) = 0;
          do
          {
            v17 = v15++;
            flStatTotal = *&v16;
            Value = CTimeline::GetValue(elem, v17);
            *&v16 = LODWORD(flStatTotal);
            *&v16 = flStatTotal + Value;
          }
          while ( v15 < elem->m_nBucketCount.m_Value );
          v13 = &this->m_TimelineMap.m_Tree.m_Elements.m_pMemory[v12];
        }
        m_pAsString = "";
        if ( v13->m_Data.key.u.m_Id != 0 )
          m_pAsString = v13->m_Data.key.u.m_pAsString;
        if ( elem->m_timestamp.m_Value <= 0.0 )
        {
          v21 = 1666.6649;
        }
        else
        {
          flStatTotala = LODWORD(v16);
          v20 = IntervalTimer::Now(elem);
          *&v16 = flStatTotala;
          v21 = (v20 - elem->m_timestamp.m_Value) / 60.0;
        }
        CDotaStatManager::CPlayerStatState::StoreAvgRateStat(this, v21, v16, v3, m_pAsString);
      }
      m_Root = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_TimelineMap.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
    }
  }
  v23 = (*(*steamgameserverapicontext->m_pSteamGameServerStats + 72LL))(
          steamgameserverapicontext->m_pSteamGameServerStats,
          this->m_SteamID.m_steamid);
  if ( v23 == 0 )
  {
    if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      DevMsg(&stru_33C2400.m_szFinishText[468], this->m_SteamID.m_steamid.m_unAll64Bits);
      return m_bIsStatRequestPending;
    }
    return 0;
  }
  if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
    DevMsg(&stru_33C2400.m_szFinishText[412], this->m_SteamID.m_steamid.m_unAll64Bits);
  if ( this->m_CallbackGSStatsStored.m_hAPICall != 0 )
    SteamAPI_UnregisterCallResult(&this->m_CallbackGSStatsStored);
  this->m_CallbackGSStatsStored.m_hAPICall = v23;
  this->m_CallbackGSStatsStored.m_pObj = this;
  this->m_CallbackGSStatsStored.m_Func.__pfn = CDotaStatManager::CPlayerStatState::Steam_OnGSStatsStored;
  this->m_CallbackGSStatsStored.m_Func.__delta = 0;
  SteamAPI_RegisterCallResult(&this->m_CallbackGSStatsStored, v23);
  this->m_bIsStatSubmissionPending = 1;
  return 1;
}


// CDotaStatManager::CPlayerStatState::Steam_OnGSStatsStored  (line 899, @0x00000000026bd310, libserver.so)  // inlines: ConvertToUint64, GetBool, GetInt
// calls: DevMsg(char const*,...)
// strings: "[DOTASTATS]Steam stats stored for user %llu\n", "[DOTASTATS]Error storing stats for user %llu with error %i\n"
void __fastcall CDotaStatManager::CPlayerStatState::Steam_OnGSStatsStored(
        CDotaStatManager::CPlayerStatState *const this,
        GSStatsStored_t *pGSStatsStored,
        bool bError)
{
  CSteamID::SteamID_t v3; // rcx
  ConVar *m_pParent; // rax

  v3.m_comp = pGSStatsStored->m_steamIDUser.m_steamid;
  if ( bError )
  {
    DevMsg(
      "[DOTASTATS]Error storing stats for user %llu with error %i\n",
      pGSStatsStored->m_steamIDUser.m_steamid.m_unAll64Bits,
      pGSStatsStored->m_eResult);
  }
  else
  {
    m_pParent = dota_statmanager_debug.m_pParent;
    this->m_bIsStatSubmissionPending = 0;
    if ( m_pParent->m_Value.m_nValue != 0 )
      DevMsg("[DOTASTATS]Steam stats stored for user %llu\n", v3.m_unAll64Bits);
  }
}


// CDotaStatManager::CPlayerStatState::Steam_OnGSStatsUnloaded  (line 915, @0x00000000026bd010, libserver.so)
void __fastcall CDotaStatManager::CPlayerStatState::Steam_OnGSStatsUnloaded(
        CDotaStatManager::CPlayerStatState *const this,
        GSStatsUnloaded_t *pGSStatsUnloaded)
{
  ;
}


// CDotaStatManager::CPlayerStatState::FetchUserSteamStat<int>  (line 921, @0x000000000279fc80, libserver.so)  // inlines: GetBool, GetInt
// calls: DevMsg(char const*,...)
// callers: CDotaStatManager::GetPlayerLifetimeStat<int>, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats
// strings: "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n"
bool __fastcall CDotaStatManager::CPlayerStatState::FetchUserSteamStat<int>(
        const CDotaStatManager::CPlayerStatState *const this,
        int *const value,
        const char *szStatName)
{
  char v5; // bl

  v5 = (*(*steamgameserverapicontext->m_pSteamGameServerStats + 8LL))(
         steamgameserverapicontext->m_pSteamGameServerStats,
         this->m_SteamID.m_steamid,
         szStatName,
         value);
  if ( v5 != 0 || dota_statmanager_debug.m_pParent->m_Value.m_nValue == 0 )
    return v5;
  DevMsg(
    "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n",
    szStatName,
    this->m_SteamID.m_steamid.m_unAll64Bits);
  return v5;
}


// CDotaStatManager::CPlayerStatState::FetchUserSteamStat<float>  (line 921, @0x000000000279fd80, libserver.so)  // inlines: GetBool, GetInt
// calls: DevMsg(char const*,...)
// callers: CDotaStatManager::GetPlayerLifetimeStat<float>, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats
// strings: "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n"
bool __fastcall CDotaStatManager::CPlayerStatState::FetchUserSteamStat<float>(
        const CDotaStatManager::CPlayerStatState *const this,
        float *const value,
        const char *szStatName)
{
  char v5; // bl

  v5 = (*(*steamgameserverapicontext->m_pSteamGameServerStats + 16LL))(
         steamgameserverapicontext->m_pSteamGameServerStats,
         this->m_SteamID.m_steamid,
         szStatName,
         value);
  if ( v5 != 0 || dota_statmanager_debug.m_pParent->m_Value.m_nValue == 0 )
    return v5;
  DevMsg(
    "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n",
    szStatName,
    this->m_SteamID.m_steamid.m_unAll64Bits);
  return v5;
}


// CDotaStatManager::CPlayerStatState::StoreUserSteamStat<int>  (line 938, @0x000000000279fd00, libserver.so)  // inlines: GetBool, GetInt
// calls: DevMsg(char const*,...)
// callers: CDotaStatManager::SetPlayerLifetimeStat<int>, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats
// strings: "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n"
bool __fastcall CDotaStatManager::CPlayerStatState::StoreUserSteamStat<int>(
        const CDotaStatManager::CPlayerStatState *const this,
        const int value,
        const char *szStatName)
{
  char v5; // bl

  v5 = (*(*steamgameserverapicontext->m_pSteamGameServerStats + 32LL))(
         steamgameserverapicontext->m_pSteamGameServerStats,
         this->m_SteamID.m_steamid,
         szStatName,
         value);
  if ( v5 != 0 || dota_statmanager_debug.m_pParent->m_Value.m_nValue == 0 )
    return v5;
  DevMsg(
    "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n",
    szStatName,
    this->m_SteamID.m_steamid.m_unAll64Bits);
  return v5;
}


// CDotaStatManager::CPlayerStatState::StoreUserSteamStat<float>  (line 938, @0x000000000279fe00, libserver.so)  // inlines: GetBool, GetInt
// calls: DevMsg(char const*,...)
// callers: CDotaStatManager::SetPlayerLifetimeStat<float>, CDotaStatManager::CPlayerStatState::SubmitUserSteamStats
// strings: "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n"
__int64 __fastcall CDotaStatManager::CPlayerStatState::StoreUserSteamStat<float>(
        const CDotaStatManager::CPlayerStatState *const this,
        double a2,
        float value,
        const char *szStatName)
{
  unsigned int v6; // ebx

  v6 = (*(*steamgameserverapicontext->m_pSteamGameServerStats + 40LL))(
         steamgameserverapicontext->m_pSteamGameServerStats,
         this->m_SteamID.m_steamid,
         szStatName,
         a2,
         value);
  if ( v6 != 0 || dota_statmanager_debug.m_pParent->m_Value.m_nValue == 0 )
    return v6;
  DevMsg(
    "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n",
    szStatName,
    this->m_SteamID.m_steamid.m_unAll64Bits);
  return v6;
}


// CDotaStatManager::CPlayerStatState::StoreAvgRateStat  (line 954, @0x00000000026f4de0, libserver.so)  // inlines: GetBool, GetInt
// calls: DevMsg(char const*,...)
// callers: CDotaStatManager::CPlayerStatState::SubmitUserSteamStats
// strings: "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n"
__int64 __fastcall CDotaStatManager::CPlayerStatState::StoreAvgRateStat(
        CDotaStatManager::CPlayerStatState *const this,
        float a2,
        double flElapsedTimeInSeconds,
        const float flStatCount,
        const char *szStatName)
{
  unsigned int v7; // ebx

  if ( szStatName != 0 )
  {
    v7 = (*(*steamgameserverapicontext->m_pSteamGameServerStats + 48LL))(
           steamgameserverapicontext->m_pSteamGameServerStats,
           this->m_SteamID.m_steamid,
           szStatName,
           flElapsedTimeInSeconds,
           a2);
    if ( v7 != 0 )
      return v7;
    if ( dota_statmanager_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      DevMsg(
        "[DOTASTATS]Cannot store stat '%s' for user %llu, stat does not exist in the database.\n",
        szStatName,
        this->m_SteamID.m_steamid.m_unAll64Bits);
      return v7;
    }
  }
  return 0;
}


// CDotaStatManager::CBasePlayerStatState::GetStatTimeline  (line 976, @0x0000000002712950, libserver.so)  // inlines: CNetworkVarBase, Element, EnsureValidValue<TimelineCompression_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Find, FindInsertionPosition, Insert, InsertAt, IntervalTimer, LeftChild, NetworkStateChanged, RightChild, Set, SetCompressionType, SetTimeFunction, Start, _Function_base, _M_init_functor, function, function<float (*)(), void>, operator(), operator=, operator=<TimelineCompression_t>, operator=<float>, operator[], swap, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<float (*)(const std::_Any_data&)>, swap<std::_Any_data>, ~_Function_base, ~function
// calls: AllocPooledString, operator new, CTimeline::ClearValues, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, IntervalTimer::Now, std::_Function_base::_Base_manager<float (*)()>::_M_manager, operator delete, _Unwind_Resume, __stack_chk_fail
// callers: CDotaStatManager::GetStatTimeline, CDotaStatManager::CBasePlayerStatState::GetTimelineStatByInterp, CDotaStatManager::CBasePlayerStatState::GetTimelineStatByGameTime, CDotaStatManager::CBasePlayerStatState::GetTimelineStatPerMinute
// globals: GetGameTime(void)
CTimeline *__fastcall CDotaStatManager::CBasePlayerStatState::GetStatTimeline(
        CDotaStatManager::CBasePlayerStatState *const this,
        const char *szStatName)
{
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *v4; // rdx
  unsigned __int64 v5; // r15
  _DWORD *v6; // r12
  unsigned __int16 v7; // r12
  unsigned __int16 m_Right; // ax
  char v9; // dl
  bool v10; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v12; // r15
  unsigned __int16 v13; // r13
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // r14
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *v16; // rax
  CUtlMap<CUtlSymbolLarge,CTimeline*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t elem; // r13
  float v18; // xmm0_4
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *v19; // rcx
  CUtlMap<CUtlSymbolLarge,CTimeline*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::ElemType_t v20; // r13
  bool (__fastcall *v21)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // rcx
  __int64 delta; // rdx
  std::_Any_data v23; // kr00_16
  bool (__fastcall *M_manager)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // rax
  float (__fastcall *v25)(const std::_Any_data *const); // rdx
  float (__fastcall *M_invoker)(const std::_Any_data *const); // rcx
  float v28; // [rsp+8h] [rbp-A8h]
  string_t name; // [rsp+10h] [rbp-A0h] BYREF
  CUtlMap<CUtlSymbolLarge,CTimeline*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t pCopyFrom; // [rsp+20h] [rbp-90h] BYREF
  std::_Any_data __source; // [rsp+30h] [rbp-80h] BYREF
  bool (__fastcall *v32)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // [rsp+40h] [rbp-70h]
  float (__fastcall *v33)(const std::_Any_data *const); // [rsp+48h] [rbp-68h]
  std::_Any_data __dest; // [rsp+50h] [rbp-60h] BYREF
  bool (__fastcall *v35)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // [rsp+60h] [rbp-50h]
  float (__fastcall *v36)(const std::_Any_data *const); // [rsp+68h] [rbp-48h]
  unsigned __int64 v37; // [rsp+78h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  AllocPooledString(&name, szStatName);
  m_Root = this->m_TimelineMap.m_Tree.m_Root;
  pCopyFrom.key = name;
  if ( m_Root == 0xFFFF )
  {
LABEL_7:
    v6 = operator new(0x240u);
    v6[2] = -1082130432;
    v6[131] = 0;
    v6[132] = 0;
    v6[133] = 0;
    v6[134] = 0;
    *v6 = &off_3FFCAB0;
    *(v6 + 540) = 0;
    *(v6 + 70) = 0;
    CTimeline::ClearValues(v6);
    pCopyFrom.elem = v6;
    v7 = this->m_TimelineMap.m_Tree.m_Root;
    pCopyFrom.key = name;
    if ( v7 != 0xFFFF )
    {
      while ( 1 )
      {
        v10 = !this->m_TimelineMap.m_Tree.m_LessFunc.m_LessFunc(
                 &pCopyFrom,
                 &this->m_TimelineMap.m_Tree.m_Elements.m_pMemory[v7].m_Data);
        m_pMemory = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
        if ( v10 )
        {
          m_Right = m_pMemory[v7].m_Right;
          v9 = 0;
          if ( m_Right == 0xFFFF )
          {
LABEL_13:
            v12 = v9;
            v13 = v7;
            goto LABEL_14;
          }
        }
        else
        {
          m_Right = m_pMemory[v7].m_Left;
          v9 = 1;
          if ( m_Right == 0xFFFF )
            goto LABEL_13;
        }
        v7 = m_Right;
      }
    }
    v13 = -1;
    v12 = 0;
LABEL_14:
    v14 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
            &this->m_TimelineMap.m_Tree,
            &pCopyFrom);
    m_Root = v14;
    v15 = v14;
    CUtlRBTree<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      &this->m_TimelineMap.m_Tree,
      v14,
      v13,
      v12);
    v16 = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
    ++this->m_TimelineMap.m_Tree.m_NumElements;
    elem = v16[v15].m_Data.elem;
    if ( elem->m_nCompressionType.m_Value != TimelineCompression_t::TIMELINE_COMPRESSION_COUNT_PER_INTERVAL )
    {
      (*(elem->_vptr_IntervalTimer + 2))(elem, 536, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      elem->m_nCompressionType.m_Value = TimelineCompression_t::TIMELINE_COMPRESSION_COUNT_PER_INTERVAL;
      elem = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory[v15].m_Data.elem;
    }
    v18 = IntervalTimer::Now(elem);
    if ( v18 != elem->m_timestamp.m_Value )
    {
      v28 = v18;
      (*(elem->_vptr_IntervalTimer + 2))(elem, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      elem->m_timestamp.m_Value = v28;
    }
    __source._M_unused._M_object = GetGameTime;
    v19 = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
    v33 = std::_Function_handler<float ()(void),float (*)(void)>::_M_invoke;
    v32 = std::_Function_base::_Base_manager<float (*)(void)>::_M_manager;
    v20 = v19[v15].m_Data.elem;
    v21 = 0;
    v35 = 0;
    if ( std::_Function_base::_Base_manager<float (*)(void)>::_M_manager != 0 )
    {
      v36 = std::_Function_handler<float ()(void),float (*)(void)>::_M_invoke;
      v35 = std::_Function_base::_Base_manager<float (*)(void)>::_M_manager;
      std::_Function_base::_Base_manager<float (*)(void)>::_M_manager(
        &__dest,
        &__source,
        std::_Manager_operation::__clone_functor);
      v21 = v35;
    }
    delta = v20->m_fnTime._M_functor._M_unused._M_member_pointer.__delta;
    v23 = __dest;
    __dest._M_unused._M_object = v20->m_fnTime._M_functor._M_unused._M_object;
    M_manager = v20->m_fnTime._M_manager;
    __dest._M_unused._M_member_pointer.__delta = delta;
    v25 = v36;
    v20->m_fnTime._M_manager = v21;
    M_invoker = v20->m_fnTime._M_invoker;
    v20->m_fnTime._M_functor = v23;
    v35 = M_manager;
    v36 = M_invoker;
    v20->m_fnTime._M_invoker = v25;
    if ( M_manager != 0 )
      M_manager(&__dest, &__dest, std::_Manager_operation::__destroy_functor);
    if ( v32 != 0 )
      v32(&__source, &__source, std::_Manager_operation::__destroy_functor);
  }
  else
  {
    v4 = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = m_Root;
        if ( !this->m_TimelineMap.m_Tree.m_LessFunc.m_LessFunc(&pCopyFrom, &v4[v5].m_Data) )
          break;
        v4 = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
        m_Root = v4[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_7;
      }
      if ( !this->m_TimelineMap.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_TimelineMap.m_Tree.m_Elements.m_pMemory[v5].m_Data,
              &pCopyFrom) )
        break;
      v4 = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
      m_Root = v4[v5].m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_7;
    }
  }
  return this->m_TimelineMap.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.elem;
}


// CDotaStatManager::CBasePlayerStatState::GetTimelineStatByInterp  (line 991, @0x00000000027136b0, libserver.so)
// calls: CDotaStatManager::CBasePlayerStatState::GetStatTimeline, CTimeline::GetValueAtInterp
__int64 __fastcall CDotaStatManager::CBasePlayerStatState::GetTimelineStatByInterp(
        CDotaStatManager::CBasePlayerStatState *const this,
        float *const flOutValue,
        float flInterp,
        const char *szStatName)
{
  CTimeline *StatTimeline; // rdi
  float v6; // xmm1_4
  __int64 result; // rax
  float ValueAtInterp; // xmm0_4

  StatTimeline = CDotaStatManager::CBasePlayerStatState::GetStatTimeline(this, szStatName);
  result = 0;
  if ( StatTimeline != 0 )
  {
    ValueAtInterp = CTimeline::GetValueAtInterp(StatTimeline, flInterp, v6);
    *flOutValue = ValueAtInterp;
    return 1;
  }
  return result;
}


// CDotaStatManager::CBasePlayerStatState::GetTimelineStatByGameTime  (line 1004, @0x00000000027136f0, libserver.so)  // inlines: GetStartTime, curtime
// calls: CDotaStatManager::CBasePlayerStatState::GetStatTimeline, CTimeline::GetValueAtInterp
__int64 __fastcall CDotaStatManager::CBasePlayerStatState::GetTimelineStatByGameTime(
        CDotaStatManager::CBasePlayerStatState *const this,
        float *const flOutValue,
        float flGameTime,
        const char *szStatName)
{
  CTimeline *StatTimeline; // rbx
  __int64 result; // rax
  float m_flCurrentTime; // xmm2_4
  float m_Value; // xmm1_4
  CGlobalVars *v9; // r12
  float v10; // xmm0_4
  float ValueAtInterp; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flGameTimeb; // [rsp+Ch] [rbp-24h]

  StatTimeline = CDotaStatManager::CBasePlayerStatState::GetStatTimeline(this, szStatName);
  result = 0;
  if ( StatTimeline != 0 )
  {
    m_flCurrentTime = 0.0;
    m_Value = StatTimeline->m_timestamp.m_Value;
    v9 = gpGlobals;
    v10 = flGameTime - m_Value;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          flGameTimeb = flGameTime - m_Value;
          (m_pfnWarningFunc)(1, v10, m_Value, 0.0);
          m_Value = StatTimeline->m_timestamp.m_Value;
          v10 = flGameTimeb;
        }
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    ValueAtInterp = CTimeline::GetValueAtInterp(StatTimeline, v10 / (m_flCurrentTime - m_Value), m_Value);
    result = 1;
    *flOutValue = ValueAtInterp;
  }
  return result;
}


// CDotaStatManager::CBasePlayerStatState::GetTimelineStatPerMinute  (line 1020, @0x00000000027137a0, libserver.so)  // inlines: GetStartTime, curtime
// calls: CDotaStatManager::CBasePlayerStatState::GetStatTimeline, CTimeline::GetValueAtInterp
// callers: CDotaStatManager::GetTimelineStatPerMinute
__int64 __fastcall CDotaStatManager::CBasePlayerStatState::GetTimelineStatPerMinute(
        CDotaStatManager::CBasePlayerStatState *const this,
        float *const flOutValue,
        float flMinute,
        const char *szStatName)
{
  CTimeline *StatTimeline; // rbx
  __int64 result; // rax
  float m_flCurrentTime; // xmm3_4
  double v8; // xmm1_8
  float m_Value; // xmm2_4
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  float ValueAtInterp; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flMinuteb; // [rsp+Ch] [rbp-24h]
  float flMinutec; // [rsp+Ch] [rbp-24h]

  StatTimeline = CDotaStatManager::CBasePlayerStatState::GetStatTimeline(this, szStatName);
  result = 0;
  if ( StatTimeline != 0 )
  {
    m_flCurrentTime = 0.0;
    *&v8 = LODWORD(StatTimeline->m_timestamp.m_Value);
    m_Value = *&v8;
    v10 = gpGlobals;
    v11 = flMinute - *&v8;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          flMinutec = flMinute - *&v8;
          (m_pfnWarningFunc)(1, v11, *&v8, v8, 0.0);
          m_Value = StatTimeline->m_timestamp.m_Value;
          v11 = flMinutec;
        }
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    flMinuteb = StatTimeline->m_flInterval.m_Value / 60.0;
    ValueAtInterp = CTimeline::GetValueAtInterp(StatTimeline, v11 / (m_flCurrentTime - m_Value), flMinuteb);
    result = 1;
    *flOutValue = ValueAtInterp * flMinuteb;
  }
  return result;
}


// CDotaStatManager::CBasePlayerStatState::DumpStats  (line 1036, @0x000000000270b150, libserver.so)  // inlines: CUtlSymbolLarge, Element, FirstInorder, LeftChild, NextInorder, operator[]
// calls: DevMsg(char const*,...), CTimeline::GetValue, CUtlRBTree<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, CTimeline*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CDotaStatManager::CPlayerStatState::DumpStats, CDotaStatManager::CBotPlayerStatState::DumpStats
// strings: "PLAYER STATS:\n", "\tTIMELINE[%s]\n", "\t\t[%i]=%f\n"
void __fastcall CDotaStatManager::CBasePlayerStatState::DumpStats(CDotaStatManager::CBasePlayerStatState *const this)
{
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *m_pMemory; // rdx
  int m_Left; // r12d
  unsigned __int16 v5; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline*>::Node_t,short unsigned int> *v6; // rax
  const CTimeline *elem; // rbx
  const char *m_pAsString; // rsi
  int v9; // r15d
  float Value; // xmm0_4
  __int64 v11; // rsi

  DevMsg("PLAYER STATS:\n");
  m_Root = this->m_TimelineMap.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left == 0xFFFF )
    {
      m_Left = m_Root;
    }
    else
    {
      while ( 1 )
      {
        v5 = m_pMemory[m_Left].m_Left;
        if ( v5 == 0xFFFF )
          break;
        m_Left = v5;
      }
    }
    while ( 1 )
    {
      v6 = &m_pMemory[m_Left];
      elem = v6->m_Data.elem;
      if ( elem != 0 )
      {
        m_pAsString = v6->m_Data.key.u.m_pAsString;
        if ( m_pAsString == 0 )
          m_pAsString = "";
        DevMsg("\tTIMELINE[%s]\n", m_pAsString);
        if ( elem->m_nBucketCount.m_Value > 0 )
        {
          v9 = 0;
          do
          {
            Value = CTimeline::GetValue(elem, v9);
            v11 = v9++;
            DevMsg("\t\t[%i]=%f\n", v11, Value);
          }
          while ( v9 < elem->m_nBucketCount.m_Value );
        }
      }
      m_Left = CUtlRBTree<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,CTimeline *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_TimelineMap.m_Tree,
                 m_Left);
      if ( m_Left == 0xFFFF )
        break;
      m_pMemory = this->m_TimelineMap.m_Tree.m_Elements.m_pMemory;
    }
  }
}


// CDotaStatManager::CPlayerStatState::DumpStats  (line 1058, @0x000000000270b280, libserver.so)
// calls: CDotaStatManager::CBasePlayerStatState::DumpStats, DevMsg(char const*,...), KeyValues::GetFirstValue, KeyValues::GetFloat, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetDataType, KeyValues::GetInt
// strings: "  SteamID [%llu]\n", "\t[%s]=%f\n", "\t[%s]=%i\n"
void __fastcall CDotaStatManager::CPlayerStatState::DumpStats(CDotaStatManager::CPlayerStatState *const this)
{
  CSteamID::SteamID_t v2; // rsi
  KeyValues *i; // rbx
  const char *v4; // rax
  CKeyValues_Data::types_t DataType; // eax
  float v6; // xmm1_4
  int Int; // r12d
  const char *Name; // rax
  float Float; // [rsp+Ch] [rbp-14h]

  CDotaStatManager::CBasePlayerStatState::DumpStats(this);
  v2.m_comp = this->m_SteamID.m_steamid;
  if ( this->m_pKVMatchStats != 0 )
  {
    DevMsg("  SteamID [%llu]\n", v2.m_unAll64Bits);
    for ( i = KeyValues::GetFirstValue(this->m_pKVMatchStats); i != 0; i = KeyValues::GetNextValue(i) )
    {
      while ( 1 )
      {
        DataType = KeyValues::GetDataType(i, 0);
        if ( DataType != CKeyValues_Data::types_t::TYPE_INT )
          break;
        Int = KeyValues::GetInt(i, 0, 0);
        Name = KeyValues::GetName(i);
        DevMsg("\t[%s]=%i\n", Name, Int);
        i = KeyValues::GetNextValue(i);
        if ( i == 0 )
          return;
      }
      if ( DataType == CKeyValues_Data::types_t::TYPE_FLOAT )
      {
        Float = KeyValues::GetFloat(i, 0, v6);
        v4 = KeyValues::GetName(i);
        DevMsg("\t[%s]=%f\n", v4, Float);
      }
    }
  }
  else
  {
    DevMsg(&stru_33C2400.m_TeleportTargetList.m_Memory, v2.m_unAll64Bits);
  }
}


// CDotaStatManager::CBotPlayerStatState::DumpStats  (line 1096, @0x000000000270b390, libserver.so)
// calls: CDotaStatManager::CBasePlayerStatState::DumpStats, DevMsg(char const*,...)
// strings: "  Bot PlayerID [%d]\n"
void __fastcall CDotaStatManager::CBotPlayerStatState::DumpStats(CDotaStatManager::CBotPlayerStatState *const this)
{
  CDotaStatManager::CBasePlayerStatState::DumpStats(this);
  DevMsg("  Bot PlayerID [%d]\n", this->m_nPlayerID);
}


// dota_dump_all_player_stats_f  (line 1103, @0x000000000270a9b0, libserver.so)
// calls: CDotaStatManager::DumpStatDetails
// globals: g_pDotaStatManager
void __fastcall dota_dump_all_player_stats_f(const CCommandContext *const ctx, const CCommand *const args)
{
  CDotaStatManager::DumpStatDetails(g_pDotaStatManager);
}


