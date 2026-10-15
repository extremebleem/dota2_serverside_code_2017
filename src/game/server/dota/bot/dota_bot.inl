
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot::Schema_DynamicBinding  (line 167, @0x0000000002811b60, libserver.so)
// globals: CDOTA_Bot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Bot::Schema_DynamicBinding(const CDOTA_Bot *const this)
{
  return CDOTA_Bot::s_pSchemaBinding;
}


// CDOTA_Bot::~CDOTA_Bot  (line 178, @0x0000000002813860, libserver.so)  // inlines: Destruct<CDOTA_Bot::sQueuedOrder>, Element, Purge, RemoveAll, operator[], ~CCopyableUtlVector, ~CDOTA_Bot_Pathing, ~CUnitOrders, ~CUtlMemory, ~CUtlReferenceList, ~CUtlVector, ~CUtlVectorBase, ~sQueuedOrder
// calls: CUtlMemory<CEntityIndex, int>::Purge, CUtlStack<CDOTA_BotAction*, CUtlMemory<CDOTA_BotAction*, int> >::~CUtlStack, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<CDOTA_Bot::SortedUnit_t, CUtlMemory<CDOTA_Bot::SortedUnit_t, int> >::RemoveAll, CUtlMemory<CDOTA_Bot::sQueuedOrder, int>::Purge, CUtlMemory<CDOTA_Bot::SortedUnit_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<int, int>::Purge, CUtlMemory<CDOTABaseAbility*, int>::Purge, CUtlMemory<sPathingInfo, int>::Purge, CUtlMemory<CDOTA_Bot::sQueuedAction, int>::Purge
// callers: CDOTA_Bot::~CDOTA_Bot, CDOTA_Bot_Hero_Unknown::~CDOTA_Bot_Hero_Unknown, CDOTA_Bot_Hero_Axe::~CDOTA_Bot_Hero_Axe, CDOTA_TutorialBot_Hero_Axe::~CDOTA_TutorialBot_Hero_Axe, CDOTA_Bot_Hero_Brewmaster::~CDOTA_Bot_Hero_Brewmaster, CDOTA_Bot_Hero_BountyHunter::~CDOTA_Bot_Hero_BountyHunter, CDOTA_Bot_Hero_Bloodseeker::~CDOTA_Bot_Hero_Bloodseeker, CDOTA_Bot_Hero_Beastmaster::~CDOTA_Bot_Hero_Beastmaster, CDOTA_Bot_Hero_Batrider::~CDOTA_Bot_Hero_Batrider, CDOTA_Bot_Hero_Bane::~CDOTA_Bot_Hero_Bane, CDOTA_Bot_Hero_Antimage::~CDOTA_Bot_Hero_Antimage, CDOTA_Bot_Hero_AncientApparition::~CDOTA_Bot_Hero_AncientApparition (114 total)
void __fastcall CDOTA_Bot::~CDOTA_Bot(CDOTA_Bot *const this)
{
  int m_Size; // r13d
  __int64 i; // r14
  CUtlMemory<CEntityIndex,int> *v4; // r12
  bool v5; // zf
  CUtlReference<CDOTA_Bot> *m_pHead; // rax
  CUtlReference<CDOTA_Bot> *m_pNext; // rdx

  this->_vptr_CDOTA_Bot = &off_42B6D10;
  m_Size = this->m_OrderQueue.m_Size;
  for ( i = 72LL * m_Size - 72; --m_Size >= 0; i -= 72 )
  {
    v4 = (this->m_OrderQueue.m_Memory.m_pMemory + i);
    v5 = (v4[1].m_nGrowSize & 0xC0000000) == 0;
    v4->m_nAllocationCount = 0;
    if ( v5 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(v4 + 1);
      if ( (v4[1].m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(v4 + 1);
    }
  }
  v5 = (this->m_OrderQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_OrderQueue.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CDOTA_Bot::sQueuedOrder,int>::Purge(&this->m_OrderQueue.m_Memory);
    if ( (this->m_OrderQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot::sQueuedOrder,int>::Purge(&this->m_OrderQueue.m_Memory);
  }
  CUtlStack<CDOTA_BotAction *,CUtlMemory<CDOTA_BotAction *,int>>::~CUtlStack(&this->m_ActionStack);
  v5 = (this->m_ActionQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ActionQueue.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CDOTA_Bot::sQueuedAction,int>::Purge(&this->m_ActionQueue.m_Memory);
    if ( (this->m_ActionQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot::sQueuedAction,int>::Purge(&this->m_ActionQueue.m_Memory);
  }
  v5 = (this->m_AvoidancePathing.m_PathingGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AvoidancePathing.m_PathingGrid.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<sPathingInfo,int>::Purge(&this->m_AvoidancePathing.m_PathingGrid.m_Memory);
    if ( (this->m_AvoidancePathing.m_PathingGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sPathingInfo,int>::Purge(&this->m_AvoidancePathing.m_PathingGrid.m_Memory);
  }
  v5 = (this->m_Pathing.m_PathingGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Pathing.m_PathingGrid.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<sPathingInfo,int>::Purge(&this->m_Pathing.m_PathingGrid.m_Memory);
    if ( (this->m_Pathing.m_PathingGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sPathingInfo,int>::Purge(&this->m_Pathing.m_PathingGrid.m_Memory);
  }
  v5 = (this->m_Build.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Build.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CDOTABaseAbility *,int>::Purge(&this->m_Build.m_Memory);
    if ( (this->m_Build.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTABaseAbility *,int>::Purge(&this->m_Build.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hMinions);
  if ( (this->m_hMinions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hMinions.m_Memory);
    if ( (this->m_hMinions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hMinions.m_Memory);
  }
  v5 = (this->m_NearbyTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_NearbyTrees.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<int,int>::Purge(&this->m_NearbyTrees.m_Memory);
    if ( (this->m_NearbyTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_NearbyTrees.m_Memory);
  }
  CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyShrines);
  if ( (this->m_NearbyShrines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyShrines.m_Memory);
    if ( (this->m_NearbyShrines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyShrines.m_Memory);
  }
  CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyBarracks);
  if ( (this->m_NearbyBarracks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyBarracks.m_Memory);
    if ( (this->m_NearbyBarracks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyBarracks.m_Memory);
  }
  CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyTowers);
  if ( (this->m_NearbyTowers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyTowers.m_Memory);
    if ( (this->m_NearbyTowers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyTowers.m_Memory);
  }
  CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyHeroes);
  if ( (this->m_NearbyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyHeroes.m_Memory);
    if ( (this->m_NearbyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyHeroes.m_Memory);
  }
  CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyCreeps);
  if ( (this->m_NearbyCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyCreeps.m_Memory);
    if ( (this->m_NearbyCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Purge(&this->m_NearbyCreeps.m_Memory);
  }
  m_pHead = this->m_References.m_pHead;
  if ( m_pHead != 0 )
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


// CDOTA_Bot::~CDOTA_Bot  (line 178, @0x0000000002813cd0, libserver.so)
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_Bot::~CDOTA_Bot(CDOTA_Bot *const this)
{
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_Bot::GetInitialMode  (line 196, @0x0000000002811b70, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_Bot::GetInitialMode(CDOTA_Bot *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_LANING;
}


// CDOTA_Bot::SetDeathActivity  (line 213, @0x0000000002811b80, libserver.so)
void __fastcall CDOTA_Bot::SetDeathActivity(CDOTA_Bot *const this, int nActivity)
{
  ;
}


// CDOTA_Bot::TranslateActivity  (line 214, @0x0000000002811b90, libserver.so)
int __fastcall CDOTA_Bot::TranslateActivity(CDOTA_Bot *const this, int nActivity)
{
  return nActivity;
}


// CDOTA_Bot::GetAggroFreeAttackAbility  (line 287, @0x0000000002811ba0, libserver.so)
CDOTABaseAbility *__fastcall CDOTA_Bot::GetAggroFreeAttackAbility(CDOTA_Bot *const this)
{
  return 0;
}


// CDOTA_Bot::HasLocationStun  (line 444, @0x0000000002811bb0, libserver.so)
bool __fastcall CDOTA_Bot::HasLocationStun(CDOTA_Bot *const this)
{
  return 0;
}


// CDOTA_Bot::IsSavingBlink  (line 453, @0x0000000002811bc0, libserver.so)
bool __fastcall CDOTA_Bot::IsSavingBlink(CDOTA_Bot *const this)
{
  return 0;
}


// CDOTA_Bot::IsTutorial  (line 481, @0x0000000002811bd0, libserver.so)
bool __fastcall CDOTA_Bot::IsTutorial(CDOTA_Bot *const this)
{
  return 0;
}


// CDOTA_Bot::IsTutorialBotBoss  (line 482, @0x0000000002811be0, libserver.so)
bool __fastcall CDOTA_Bot::IsTutorialBotBoss(CDOTA_Bot *const this)
{
  return 0;
}


