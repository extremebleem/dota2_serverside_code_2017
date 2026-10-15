
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAEventDefinition::CDOTAEventDefinition  (line 61, @0x0000000002542930, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, CUtlStringMap, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ResetDbgInfo, ~CUtlMap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMsgDOTASeasonRewards::CMsgDOTASeasonRewards, CMsgDOTASeasonAchievements::CMsgDOTASeasonAchievements, CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlVectorBase<DOTAEventMysteryVOGroup_t, CUtlMemory<DOTAEventMysteryVOGroup_t, int> >::~CUtlVectorBase, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlRBTree<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int, CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int>, int> >::~CUtlRBTree, CMsgDOTASeasonAchievements::~CMsgDOTASeasonAchievements, CUtlRBTree<CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::Node_t, int, CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::Node_t, int>, int> >::~CUtlRBTree, CUtlRBTree<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::~CUtlRBTree (15 total)
// callers: CDOTAEventSchema::Initialize
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTAEventDefinition::CDOTAEventDefinition(CDOTAEventDefinition *const this, EEvent eEventID)
{
  uint16 m_Data; // ax

  *this = eEventID;
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  *(this + 4) = 0;
  *(this + 20) = 0;
  *(this + 22) = 0;
  *(this + 23) = 0;
  *(this + 24) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 14) = m_Data;
  *(this + 8) = 0;
  *(this + 18) = 0;
  *(this + 10) = 0;
  *(this + 22) = 0;
  *(this + 23) = 0;
  *(this + 24) = 0;
  *(this + 13) = 0;
  *(this + 28) = 0;
  *(this + 29) = 0;
  *(this + 60) = m_Data;
  *(this + 61) = m_Data;
  *(this + 62) = m_Data;
  *(this + 63) = m_Data;
  *(this + 16) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  *(this + 18) = 0;
  *(this + 19) = 0;
  *(this + 20) = 0;
  *(this + 42) = 0;
  *(this + 22) = 0;
  *(this + 23) = 0;
  *(this + 24) = 0;
  *(this + 25) = 0;
  *(this + 26) = 0;
  *(this + 27) = 0;
  *(this + 28) = 0;
  *(this + 29) = 0;
  *(this + 30) = 0;
  *(this + 31) = 0;
  *(this + 32) = 0;
  *(this + 33) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  *(this + 36) = 0;
  *(this + 37) = 0;
  *(this + 38) = 0;
  *(this + 156) = 0;
  *(this + 157) = 0;
  *(this + 158) = 0;
  *(this + 159) = 0;
  *(this + 320) = 0;
  *(this + 81) = 0;
  *(this + 41) = 0;
  *(this + 42) = 0;
  *(this + 43) = 0;
  *(this + 44) = 0;
  *(this + 45) = 0;
  *(this + 92) = 0;
  *(this + 93) = 0;
  *(this + 94) = 0;
  *(this + 95) = 0;
  *(this + 96) = 0;
  *(this + 98) = 0;
  *(this + 198) = 0;
  *(this + 100) = 0;
  *(this + 404) = 0;
  *(this + 412) = 0;
  *(this + 105) = 0;
  *(this + 106) = 0;
  *(this + 107) = 1065353216;
  CMsgDOTASeasonRewards::CMsgDOTASeasonRewards((this + 432));
  *(this + 61) = 0;
  *(this + 124) = 0;
  *(this + 125) = 0;
  *(this + 126) = -1;
  *(this + 127) = 0;
  *(this + 128) = -1;
  *(this + 129) = -1;
  *(this + 65) = 0;
  *(this + 132) = 0;
  *(this + 67) = 0;
  *(this + 136) = 0;
  *(this + 137) = 0;
  *(this + 70) = 0;
  *(this + 142) = 0;
  *(this + 143) = 0;
  *(this + 144) = -1;
  *(this + 145) = 0;
  *(this + 146) = -1;
  *(this + 147) = -1;
  *(this + 74) = 0;
  CMsgDOTASeasonAchievements::CMsgDOTASeasonAchievements((this + 600));
  *(this + 83) = 0;
  *(this + 168) = 0;
  *(this + 169) = 0;
  *(this + 170) = -1;
  *(this + 171) = 0;
  *(this + 172) = -1;
  *(this + 173) = -1;
  *(this + 87) = 0;
  *(this + 88) = 0;
  *(this + 89) = 0;
  *(this + 180) = 0;
  *(this + 91) = 0;
  *(this + 184) = 0;
  *(this + 185) = 0;
  *(this + 186) = 0;
  *(this + 94) = 0;
  *(this + 190) = 0;
  *(this + 191) = 0;
  *(this + 192) = 0;
  *(this + 97) = 0;
  *(this + 196) = 32;
  *(this + 197) = 0;
  CMemAllocSystemInitialize();
  *(this + 97) = (**g_pMemAlloc)(g_pMemAlloc, 24LL * *(this + 196));
  CUtlSymbolTable::CUtlSymbolTable((this + 792), 0, 32, 1);
  *(this + 110) = 0;
  *(this + 222) = 0;
  *(this + 223) = 0;
  *(this + 224) = -1;
  *(this + 225) = 0;
  *(this + 226) = -1;
  *(this + 227) = -1;
  *(this + 114) = 0;
  *(this + 116) = 0;
  *(this + 234) = 0;
  *(this + 235) = 0;
  *(this + 236) = -1;
  *(this + 237) = 0;
  *(this + 238) = -1;
  *(this + 239) = -1;
  *(this + 120) = 0;
  *(this + 242) = 0;
  *(this + 122) = 0;
  *(this + 246) = 0;
  *(this + 247) = 0;
  *(this + 125) = 0;
  *(this + 252) = 0;
  *(this + 253) = 0;
  *(this + 254) = -1;
  *(this + 255) = 0;
  *(this + 256) = -1;
  *(this + 257) = -1;
  *(this + 129) = 0;
  *(this + 260) = 0;
  *(this + 131) = 0;
  *(this + 264) = 0;
  *(this + 265) = 0;
  *(this + 134) = 0;
  *(this + 270) = 0;
  *(this + 271) = 0;
  *(this + 272) = -1;
  *(this + 273) = 0;
  *(this + 274) = -1;
  *(this + 275) = -1;
  *(this + 138) = 0;
  memset(this + 1112, 0, 0x30u);
  *(this + 145) = 0;
  *(this + 146) = 0;
  *(this + 147) = 0;
  *(this + 148) = 0;
  *(this + 149) = 0;
}


// CDOTAEventDefinition::~CDOTAEventDefinition  (line 131, @0x0000000002543810, libserver.so)  // inlines: Destruct<DOTAEventMysteryVOGroup_t>, Element, Purge, PurgeAndDeleteElements, RemoveAll, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~DOTAEventMysteryVOGroup_t
// calls: CUtlRBTree<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::PurgeAndDeleteElements, CUtlRBTree<CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::Node_t, int, CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::Node_t, int>, int> >::RemoveAll, CUtlRBTree<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::RemoveAll, CUtlRBTree<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int, CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int>, int> >::RemoveAll, CUtlRBTree<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int>::Purge, CUtlSymbolTable::~CUtlSymbolTable, CUtlVectorBase<CUtlVector<DOTAEventMysteryVOLine_t, CUtlMemory<DOTAEventMysteryVOLine_t, int> >, CUtlMemory<CUtlVector<DOTAEventMysteryVOLine_t, CUtlMemory<DOTAEventMysteryVOLine_t, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<DOTAEventMysteryVOLine_t, CUtlMemory<DOTAEventMysteryVOLine_t, int> >, int>::Purge, CUtlRBTree<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int, CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int>, int> >::RemoveAll, CMsgDOTASeasonAchievements::~CMsgDOTASeasonAchievements, CUtlRBTree<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::RemoveAll (24 total)
// callers: CDOTAEventSchema::~CDOTAEventSchema
void __fastcall CDOTAEventDefinition::~CDOTAEventDefinition(CDOTAEventDefinition *const this)
{
  CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t,int>,int> > *v1; // r12
  bool v3; // zf
  int v4; // r13d
  __int64 i; // r14
  CUtlVectorBase<CUtlVector<DOTAEventMysteryVOLine_t,CUtlMemory<DOTAEventMysteryVOLine_t,int> >,CUtlMemory<CUtlVector<DOTAEventMysteryVOLine_t,CUtlMemory<DOTAEventMysteryVOLine_t,int> >,int> > *v6; // r12

  v1 = (this + 872);
  CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int>,int>>::PurgeAndDeleteElements((this + 872));
  CUtlRBTree<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int,CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int>,int>>::RemoveAll((this + 1064));
  v3 = (*(this + 271) & 0xC0000000) == 0;
  *(this + 274) = -1;
  if ( v3 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int>,int>::Purge(this + 67);
    v3 = (*(this + 271) & 0xC0000000) == 0;
    *(this + 275) = -1;
    if ( v3 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int>,int>::Purge(this + 67);
  }
  else
  {
    *(this + 275) = -1;
  }
  v3 = (*(this + 265) & 0xC0000000) == 0;
  *(this + 260) = 0;
  if ( v3 )
  {
    CUtlMemory<SDOTAEventActionDefinition const*,int>::Purge((this + 1048));
    if ( (*(this + 265) & 0xC0000000) == 0 )
      CUtlMemory<SDOTAEventActionDefinition const*,int>::Purge((this + 1048));
  }
  CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::RemoveAll((this + 992));
  v3 = (*(this + 253) & 0xC0000000) == 0;
  *(this + 256) = -1;
  if ( v3 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int>,int>::Purge((this + 1000));
    v3 = (*(this + 253) & 0xC0000000) == 0;
    *(this + 257) = -1;
    if ( v3 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int>,int>::Purge((this + 1000));
  }
  else
  {
    *(this + 257) = -1;
  }
  v3 = (*(this + 247) & 0xC0000000) == 0;
  *(this + 242) = 0;
  if ( v3 )
  {
    CUtlMemory<SDOTAEventActionDefinition const*,int>::Purge(this + 61);
    if ( (*(this + 247) & 0xC0000000) == 0 )
      CUtlMemory<SDOTAEventActionDefinition const*,int>::Purge(this + 61);
  }
  CUtlRBTree<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>>::RemoveAll((this + 920));
  v3 = (*(this + 235) & 0xC0000000) == 0;
  *(this + 238) = -1;
  if ( v3 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>::Purge(this + 58);
    v3 = (*(this + 235) & 0xC0000000) == 0;
    *(this + 239) = -1;
    if ( v3 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>::Purge(this + 58);
  }
  else
  {
    *(this + 239) = -1;
  }
  CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int>,int>>::Purge(v1);
  if ( (*(this + 223) & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int>,int>::Purge(this + 55);
  CUtlSymbolTable::~CUtlSymbolTable((this + 792));
  v4 = *(this + 192);
  for ( i = 24LL * v4 - 24; --v4 >= 0; i -= 24 )
  {
    v6 = (*(this + 97) + i);
    CUtlVectorBase<CUtlVector<DOTAEventMysteryVOLine_t,CUtlMemory<DOTAEventMysteryVOLine_t,int>>,CUtlMemory<CUtlVector<DOTAEventMysteryVOLine_t,CUtlMemory<DOTAEventMysteryVOLine_t,int>>,int>>::RemoveAll(v6);
    if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CUtlVector<DOTAEventMysteryVOLine_t,CUtlMemory<DOTAEventMysteryVOLine_t,int>>,int>::Purge(&v6->m_Memory);
      if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlVector<DOTAEventMysteryVOLine_t,CUtlMemory<DOTAEventMysteryVOLine_t,int>>,int>::Purge(&v6->m_Memory);
    }
  }
  v3 = (*(this + 197) & 0xC0000000) == 0;
  *(this + 192) = 0;
  if ( v3 )
  {
    CUtlMemory<DOTAEventMysteryVOGroup_t,int>::Purge((this + 776));
    if ( (*(this + 197) & 0xC0000000) == 0 )
      CUtlMemory<DOTAEventMysteryVOGroup_t,int>::Purge((this + 776));
  }
  v3 = (*(this + 191) & 0xC0000000) == 0;
  *(this + 186) = 0;
  if ( v3 )
  {
    CUtlMemory<int,int>::Purge(this + 47);
    if ( (*(this + 191) & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(this + 47);
  }
  v3 = (*(this + 185) & 0xC0000000) == 0;
  *(this + 180) = 0;
  if ( v3 )
  {
    CUtlMemory<SDOTAEventMysteryCategory,int>::Purge((this + 728));
    if ( (*(this + 185) & 0xC0000000) == 0 )
      CUtlMemory<SDOTAEventMysteryCategory,int>::Purge((this + 728));
  }
  CUtlRBTree<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int,CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int>,int>>::RemoveAll((this + 656));
  v3 = (*(this + 169) & 0xC0000000) == 0;
  *(this + 172) = -1;
  if ( v3 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int>,int>::Purge((this + 664));
    v3 = (*(this + 169) & 0xC0000000) == 0;
    *(this + 173) = -1;
    if ( v3 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int>,int>::Purge((this + 664));
  }
  else
  {
    *(this + 173) = -1;
  }
  CMsgDOTASeasonAchievements::~CMsgDOTASeasonAchievements((this + 600));
  CUtlRBTree<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int,CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int>,int>>::RemoveAll((this + 552));
  v3 = (*(this + 143) & 0xC0000000) == 0;
  *(this + 146) = -1;
  if ( v3 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int>,int>::Purge(this + 35);
    v3 = (*(this + 143) & 0xC0000000) == 0;
    *(this + 147) = -1;
    if ( v3 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int>,int>::Purge(this + 35);
  }
  else
  {
    *(this + 147) = -1;
  }
  v3 = (*(this + 137) & 0xC0000000) == 0;
  *(this + 132) = 0;
  if ( v3 )
  {
    CUtlMemory<CMsgDOTASeasonRewards_Reward const*,int>::Purge((this + 536));
    if ( (*(this + 137) & 0xC0000000) == 0 )
      CUtlMemory<CMsgDOTASeasonRewards_Reward const*,int>::Purge((this + 536));
  }
  CUtlRBTree<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::RemoveAll(this + 10);
  v3 = (*(this + 125) & 0xC0000000) == 0;
  *(this + 128) = -1;
  if ( v3 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int>,int>::Purge((this + 488));
    v3 = (*(this + 125) & 0xC0000000) == 0;
    *(this + 129) = -1;
    if ( v3 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int>,int>::Purge((this + 488));
  }
  else
  {
    *(this + 129) = -1;
  }
  CMsgDOTASeasonRewards::~CMsgDOTASeasonRewards((this + 432));
  v3 = (*(this + 29) & 0xC0000000) == 0;
  *(this + 24) = 0;
  if ( v3 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge((this + 104));
    if ( (*(this + 29) & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge((this + 104));
  }
  v3 = (*(this + 23) & 0xC0000000) == 0;
  *(this + 18) = 0;
  if ( v3 )
  {
    CUtlMemory<item_definition_index_t,int>::Purge(this + 5);
    if ( (*(this + 23) & 0xC0000000) == 0 )
      CUtlMemory<item_definition_index_t,int>::Purge(this + 5);
  }
}


// CDOTAEventDefinition::InitFromKeyValues  (line 148, @0x000000000252c9e0, libserver.so)  // inlines: AddMultipleToTail, AddString, AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<CUtlVector<DOTAEventMysteryVOLine_t> >, Construct<DOTAEventMysteryVOGroup_t>, CopyConstruct<SDOTAEventMysteryCategory>, CopyConstruct<const CMsgDOTASeasonRewards_Reward*>, DOTAEventMysteryVOGroup_t, Element, EnsureCount, FindInsertionPosition, GetBool, GrowMemory, GrowVector, Insert, InsertAt, InsertIfNotFound, InsertMultipleBefore, InsertWithDupes, IsClaimable, LeftChild, Node_t, RightChild, SDOTAEventGoalDefinition, String, V_isempty, _V_strcmp, end, operator const UtlSymId_t, operator*, operator=, operator[], ~CUtlString, ~Node_t, ~SDOTAEventGoalDefinition
// calls: KeyValues::GetInt, KeyValues::GetString, KeyValues::FindKey, CFmtStrN<256, false>::CFmtStrN, KeyValues::GetFloat, IsAppDota2Main, CDOTAEventDefinition::InitItemDefVectorFromKV, CUtlString::Get, CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume, __stack_chk_fail (36 total)
// callers: CDOTAEventSchema::Initialize
// strings: "is_major", "has_bracket_data", "does_event_point_popup", "does_event_point_popup_premium", "points_per_level", "can_grant_points" (40 total)
bool __fastcall CDOTAEventDefinition::InitFromKeyValues(
        CDOTAEventDefinition *const this,
        KeyValues *pkv,
        CUtlString *const sErrMsg)
{
  KeyValues *Key; // rax
  KeyValues *v6; // rbx
  KeyValues *v7; // rax
  KeyValues *v8; // r12
  __int64 v9; // r15
  KeyValues *v10; // r13
  float v11; // xmm1_4
  bool v12; // al
  const char *v13; // rsi
  KeyValues *v14; // r12
  __int64 i; // r14
  KeyValues *v16; // rax
  const char *v17; // rax
  bool inited; // bl
  KeyValues *v20; // rax
  const char *v21; // rax
  __int64 v22; // r12
  KeyValues *v23; // r13
  float v24; // xmm1_4
  char **v25; // r14
  char *v26; // r15
  int v27; // r12d
  unsigned int v28; // ecx
  int *v29; // rax
  int v30; // edx
  _BOOL4 v31; // ebx
  int v32; // eax
  KeyValues *v33; // rax
  KeyValues *v34; // r12
  KeyValues *v35; // rax
  KeyValues *j; // rbx
  const char **v37; // rax
  const char *Name; // r15
  const char *String; // r14
  __int64 v40; // r13
  int v41; // eax
  __int64 v42; // rbx
  int v43; // eax
  char **v44; // rax
  uint16 v45; // ax
  KeyValues *v46; // rax
  KeyValues *FirstSubKey; // rbx
  int v48; // r14d
  KeyValues *v49; // rax
  int v50; // r14d
  int v51; // r15d
  const char **v52; // rbx
  const KeyValues *v53; // r13
  KeyValues *v54; // rax
  const char *v55; // rax
  CDOTAEventDefinition *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r12
  int v59; // ebx
  __int64 v60; // rax
  int *v61; // r15
  __int64 v62; // rbx
  int v63; // eax
  int *v64; // r13
  __int64 v65; // rax
  KeyValues *k; // r12
  __int64 v67; // rbx
  __int64 v68; // rbx
  int v69; // eax
  KeyValues *v70; // rax
  KeyValues *NextKey; // rbx
  const char *v72; // rax
  const char *v73; // rax
  const char *v74; // rax
  const char *v75; // rax
  int v76; // r15d
  __int64 v77; // rdx
  int v78; // eax
  _BOOL4 v79; // r12d
  int v80; // eax
  KeyValues *v81; // rax
  const char *v82; // rax
  const char *v83; // r12
  int v84; // r13d
  int v85; // eax
  int v86; // esi
  __int64 v87; // rdx
  __int64 v88; // rcx
  const char *v89; // rax
  const SDOTAEventActionDefinition *ActionDefinitionByName; // rax
  KeyValues *pkvVOGroup; // [rsp+28h] [rbp-228h]
  const KeyValues *pkvVOGroupa; // [rsp+28h] [rbp-228h]
  KeyValues *pkvVOLineList; // [rsp+48h] [rbp-208h]
  KeyValues *pkvVOLineLista; // [rsp+48h] [rbp-208h]
  KeyValues *pkvVOLineListb; // [rsp+48h] [rbp-208h]
  KeyValues *pkvVOLineListc; // [rsp+48h] [rbp-208h]
  unsigned __int16 v100; // [rsp+50h] [rbp-200h]
  CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t> >::Node_t v101; // [rsp+60h] [rbp-1F0h] BYREF
  CUtlString sErrMsgCause; // [rsp+70h] [rbp-1E0h] BYREF
  SDOTAEventGoalDefinition goalDef; // [rsp+80h] [rbp-1D0h] BYREF
  CUtlMap<short unsigned int,SDOTAEventGoalDefinition,int,CDefLess<short unsigned int> >::Node_t pCopyFrom; // [rsp+C0h] [rbp-190h] BYREF
  CFmtStrN<256,false> v105; // [rsp+100h] [rbp-150h] BYREF
  unsigned __int64 v106; // [rsp+218h] [rbp-38h]

  v106 = __readfsqword(0x28u);
  *(this + 4) = KeyValues::GetInt(pkv, "league_id", 0);
  *(this + 20) = KeyValues::GetInt(pkv, "is_major", 0) != 0;
  *(this + 21) = KeyValues::GetInt(pkv, "has_bracket_data", 0) != 0;
  *(this + 22) = KeyValues::GetInt(pkv, "does_event_point_popup", 0) != 0;
  *(this + 23) = KeyValues::GetInt(pkv, "does_event_point_popup_premium", 0) != 0;
  *(this + 7) = KeyValues::GetInt(pkv, "points_per_level", 100);
  *(this + 24) = KeyValues::GetInt(pkv, "can_grant_points", 0) != 0;
  *(this + 8) = KeyValues::GetInt(pkv, "event_end_time", 0);
  *(this + 5) = KeyValues::GetString(pkv, "season_name", 0, 0, 0);
  *(this + 6) = KeyValues::GetString(pkv, "season_class", 0, 0, 0);
  *(this + 28) = KeyValues::GetInt(pkv, "recycling_recipe_item_def", 0);
  *(this + 60) = KeyValues::GetInt(pkv, "effects_item_def", 0);
  *(this + 61) = KeyValues::GetInt(pkv, "player_card_pack_item_def", 0);
  *(this + 62) = KeyValues::GetInt(pkv, "player_card_item_def", 0);
  *(this + 63) = KeyValues::GetInt(pkv, "player_card_dust_item_def", 0);
  *(this + 32) = KeyValues::GetInt(pkv, "player_card_dust_common", 0);
  *(this + 33) = KeyValues::GetInt(pkv, "player_card_dust_silver", 0);
  *(this + 34) = KeyValues::GetInt(pkv, "player_card_dust_gold", 0);
  *(this + 35) = KeyValues::GetInt(pkv, "player_card_dust_pack_price", 0);
  Key = KeyValues::FindKey(pkv, "crest_images", 0);
  v6 = Key;
  if ( Key != 0 )
  {
    *(this + 29) = KeyValues::GetInt(Key, "trophy_id", 0);
    *(this + 8) = KeyValues::GetString(v6, "prefix", 0, 0, 0);
  }
  v7 = KeyValues::FindKey(pkv, "fantasy", 0);
  v8 = v7;
  if ( v7 != 0 )
  {
    v9 = 0;
    v10 = KeyValues::FindKey(v7, "scoring", 0);
    if ( v10 != 0 )
    {
      do
      {
        CFmtStrN<256,false>::CFmtStrN(&v105, "%d", v9);
        *(this + v9++ + 278) = KeyValues::GetFloat(v10, v105.m_szBuf, v11);
      }
      while ( v9 != 12 );
    }
    v12 = IsAppDota2Main();
    v13 = "days";
    if ( v12 )
      v13 = "days_staging";
    v14 = KeyValues::FindKey(v8, v13, 0);
    if ( v14 != 0 )
    {
      for ( i = 0; i != 10; ++i )
      {
        CFmtStrN<256,false>::CFmtStrN(&v105, "%d", i);
        *(this + i + 290) = KeyValues::GetInt(v14, v105.m_szBuf, 0);
      }
    }
  }
  sErrMsgCause.m_pString = 0;
  v16 = KeyValues::FindKey(pkv, "activate_item_defs", 0);
  if ( !CDOTAEventDefinition::InitItemDefVectorFromKV(v16, this + 3, &sErrMsgCause) )
  {
    v17 = CUtlString::Get(&sErrMsgCause);
    CUtlString::Format(sErrMsg, "Error parsing 'activate_item_defs'.  %s", v17);
    goto LABEL_13;
  }
  v20 = KeyValues::FindKey(pkv, "purchase_points_item_defs", 0);
  if ( !CDOTAEventDefinition::InitItemDefVectorFromKV(v20, this + 4, &sErrMsgCause) )
  {
    v21 = CUtlString::Get(&sErrMsgCause);
    CUtlString::Format(sErrMsg, "Error parsing 'purchase_points_item_defs'.  %s", v21);
    goto LABEL_13;
  }
  *(this + 18) = KeyValues::GetString(pkv, "background_panel_path", 0, 0, 0);
  *(this + 19) = KeyValues::GetString(pkv, "quest_picker_panel_path", 0, 0, 0);
  *(this + 20) = KeyValues::GetString(pkv, "quest_status_panel_path", 0, 0, 0);
  *(this + 42) = KeyValues::GetInt(pkv, "default_quest_id", 0);
  *(this + 22) = KeyValues::GetString(pkv, "event_url", 0, 0, 0);
  *(this + 23) = KeyValues::GetString(pkv, "recycling_button_id", 0, 0, 0);
  *(this + 24) = KeyValues::GetString(pkv, "show_home_page_event", 0, 0, 0);
  *(this + 25) = KeyValues::GetString(pkv, "purchase_access_event", 0, 0, 0);
  *(this + 26) = KeyValues::GetString(pkv, "purchase_levels_event", 0, 0, 0);
  *(this + 27) = KeyValues::GetString(pkv, "purchase_points_event", 0, 0, 0);
  *(this + 28) = KeyValues::GetString(pkv, "spend_points_event", 0, 0, 0);
  *(this + 29) = KeyValues::GetString(pkv, "show_achievements_event", 0, 0, 0);
  *(this + 30) = KeyValues::GetString(pkv, "show_level_rewards_evenT", 0, 0, 0);
  *(this + 320) = KeyValues::GetInt(pkv, "total_points_use_high_watermark", 0) != 0;
  *(this + 92) = KeyValues::GetInt(pkv, "period_start_time", 0);
  *(this + 93) = KeyValues::GetInt(pkv, "period_duration", 0);
  *(this + 81) = KeyValues::GetInt(pkv, "period_resource_type", 0);
  *(this + 94) = KeyValues::GetInt(pkv, "periodic_points_scale_normal_event_points", 0);
  *(this + 95) = KeyValues::GetInt(pkv, "periodic_points_bonus_normal_event_points", 0);
  *(this + 96) = KeyValues::GetInt(pkv, "periodic_points_bonus_minimum_event_points", 0);
  *(this + 97) = KeyValues::GetInt(pkv, "periodic_points_bonus_maximum_event_points", 0);
  v22 = 0;
  v23 = KeyValues::FindKey(pkv, "periodic_points", 0);
  if ( v23 != 0 )
  {
    do
    {
      CFmtStrN<256,false>::CFmtStrN(&v105, "%d", v22);
      *(this + v22++ + 82) = KeyValues::GetInt(v23, v105.m_szBuf, 0);
    }
    while ( v22 != 10 );
  }
  *(this + 100) = KeyValues::GetInt(pkv, "wager_time", 0);
  *(this + 101) = KeyValues::GetInt(pkv, "wager_small", 0);
  *(this + 102) = KeyValues::GetInt(pkv, "wager_medium", 0);
  *(this + 103) = KeyValues::GetInt(pkv, "wager_large", 0);
  *(this + 104) = KeyValues::GetInt(pkv, "wager_premium", 0);
  *(this + 31) = KeyValues::GetString(pkv, "normal_points_leaderboard_name", 0, 0, 0);
  *(this + 32) = KeyValues::GetString(pkv, "premium_points_leaderboard_name", 0, 0, 0);
  *(this + 33) = KeyValues::GetString(pkv, "wager_winnings_leaderboard_name", 0, 0, 0);
  *(this + 34) = KeyValues::GetString(pkv, "season_mmr_friends_leaderboard_name", 0, 0, 0);
  *(this + 35) = KeyValues::GetString(pkv, "season_mmr_global_leaderboard_name", 0, 0, 0);
  *(this + 36) = KeyValues::GetString(pkv, "weekend_tourney_friends_leaderboard_name_base", 0, 0, 0);
  *(this + 37) = KeyValues::GetString(pkv, "fantasy_leaderboard_name", 0, 0, 0);
  *(this + 38) = KeyValues::GetString(pkv, "background_map_name", 0, 0, 0);
  *(this + 156) = KeyValues::GetInt(pkv, "level_event_trophy", 0);
  *(this + 157) = KeyValues::GetInt(pkv, "achievements_trophy", 0);
  *(this + 158) = KeyValues::GetInt(pkv, "weekend_tourney_trophy", 0);
  *(this + 159) = KeyValues::GetInt(pkv, "champions_cup_trophy", 0);
  *(this + 107) = KeyValues::GetFloat(pkv, "wager_conversion_ratio", v24);
  *(this + 105) = KeyValues::GetInt(pkv, "tip_amount", 0);
  *(this + 106) = KeyValues::GetInt(pkv, "expiration_date", 0);
  ProtoBufHelper::ParseKV((this + 432), pkv, 0);
  v25 = *(this + 57);
  pkvVOGroup = &v25[*(this + 116)];
  if ( v25 != pkvVOGroup )
  {
    pkvVOLineList = (this + 480);
    do
    {
      v26 = *v25;
      v27 = *(this + 126);
      v28 = *(*v25 + 10);
      goalDef.szGoalName.m_pString = *v25;
      *&goalDef.unGoalID = v28;
      if ( v27 == -1 )
      {
        LOBYTE(v31) = 0;
      }
      else
      {
        while ( 1 )
        {
          v29 = (*(this + 61) + 32LL * v27);
          v30 = v29[1];
          if ( v28 < v29[4] )
            v30 = *v29;
          v31 = v28 < v29[4];
          if ( v30 == -1 )
            break;
          v27 = v30;
        }
      }
      v32 = CUtlRBTree<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::NewNode(
              pkvVOLineList,
              &goalDef);
      CUtlRBTree<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::LinkToParent(
        pkvVOLineList,
        v32,
        v27,
        v31);
      ++*(this + 127);
      if ( *(v26 + 11) == 0 )
        goto LABEL_30;
      v42 = *(this + 132);
      v43 = *(this + 132);
      if ( v42 == *(this + 136) )
      {
        CUtlMemory<CMsgDOTASeasonRewards_Reward const*,int>::Grow((this + 536), 1);
        v43 = *(this + 132);
      }
      *(this + 132) = v43 + 1;
      v44 = (*(this + 67) + 8 * v42);
      if ( v44 != 0 )
      {
        *v44 = v26;
        if ( *(v26 + 14) == 0 )
        {
LABEL_45:
          v45 = *(v26 + 16);
          v101.elem = 1;
          v101.key.m_Data = v45;
          CUtlRBTree<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int,CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int>,int>>::InsertIfNotFound(
            (this + 552),
            &v101);
        }
      }
      else
      {
LABEL_30:
        if ( *(v26 + 14) == 0 )
          goto LABEL_45;
      }
      ++v25;
    }
    while ( pkvVOGroup != v25 );
  }
  ProtoBufHelper::ParseKV((this + 600), pkv, 0);
  KeyValues::FindKey(pkv, "arcana_vote", 0);
  v33 = KeyValues::FindKey(pkv, "mystery", 0);
  v34 = v33;
  if ( v33 != 0 )
  {
    *(this + 88) = KeyValues::GetString(v33, "name", "", 0, 0);
    *(this + 89) = KeyValues::GetString(v34, "image", "", 0, 0);
    v35 = KeyValues::FindKey(v34, "categories", 0);
    if ( v35 != 0 )
    {
      for ( j = KeyValues::GetFirstSubKey(v35); j != 0; j = KeyValues::GetNextKey(j) )
      {
        Name = KeyValues::GetName(j);
        String = KeyValues::GetString(j, "locname", "", 0, 0);
        pkvVOLineLista = KeyValues::GetString(j, "lootlist", "", 0, 0);
        v40 = *(this + 180);
        v41 = *(this + 180);
        if ( v40 == *(this + 184) )
        {
          CUtlMemory<SDOTAEventMysteryCategory,int>::Grow((this + 728), 1);
          v41 = *(this + 180);
        }
        *(this + 180) = v41 + 1;
        v37 = (*(this + 91) + 24 * v40);
        if ( v37 != 0 )
        {
          *v37 = Name;
          v37[1] = String;
          v37[2] = pkvVOLineLista;
        }
      }
    }
    v46 = KeyValues::FindKey(v34, "wheel_segments", 0);
    if ( v46 != 0 )
    {
      FirstSubKey = KeyValues::GetFirstSubKey(v46);
      if ( FirstSubKey != 0 )
      {
        while ( 1 )
        {
          pkvVOLineListb = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
          *&pCopyFrom.key = 0;
          v48 = *(this + 180);
          if ( v48 <= 0 )
            break;
          v49 = FirstSubKey;
          v50 = v48 + 1;
          v51 = 1;
          v52 = *(this + 91);
          v53 = v49;
          while ( strcmp(pkvVOLineListb, *v52) != 0 )
          {
            *&pCopyFrom.key = v51++;
            v52 += 3;
            if ( v51 == v50 )
              goto LABEL_70;
          }
          CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(this + 31, &pCopyFrom);
          FirstSubKey = KeyValues::GetNextKey(v53);
          if ( FirstSubKey == 0 )
            goto LABEL_54;
        }
LABEL_70:
        CUtlString::Format(sErrMsg, "Can't initialize wheel segment with unknown category %s", pkvVOLineListb);
        goto LABEL_13;
      }
    }
LABEL_54:
    v54 = KeyValues::FindKey(v34, "vo", 0);
    if ( v54 != 0 )
    {
      for ( pkvVOGroupa = KeyValues::GetFirstSubKey(v54); pkvVOGroupa != 0; pkvVOGroupa = KeyValues::GetNextKey(pkvVOGroupa) )
      {
        v55 = KeyValues::GetName(pkvVOGroupa);
        CUtlSymbolTable::AddString((this + 792), v55);
        v56 = this;
        v57 = v100;
        v58 = *(this + 192);
        if ( v100 >= v58 )
        {
          v59 = v100 + 1;
          if ( v58 < v59 )
          {
            v56 = this;
            v84 = v59 - v58;
            if ( v59 == v58 )
              goto LABEL_59;
            v85 = *(this + 196);
            if ( v59 > v85 )
              CUtlMemory<DOTAEventMysteryVOGroup_t,int>::Grow((this + 776), v59 - v85);
            *(this + 192) = v59;
            if ( v84 > 0 )
            {
              v86 = 0;
              v87 = 24 * v58;
              v60 = *(this + 97);
              do
              {
                v88 = v87 + v60;
                if ( v87 + v60 != 0 )
                {
                  *v88 = 0;
                  *(v88 + 8) = 0;
                  *(v88 + 16) = 0;
                  *(v88 + 20) = 0;
                  v60 = *(this + 97);
                }
                ++v86;
                v87 += 24;
              }
              while ( v84 > v86 );
              v57 = v100;
              goto LABEL_60;
            }
            v57 = v100;
          }
          v56 = this;
        }
LABEL_59:
        v60 = *(v56 + 97);
LABEL_60:
        v61 = (v60 + 24 * v57);
        for ( pkvVOLineListc = KeyValues::GetFirstSubKey(pkvVOGroupa);
              pkvVOLineListc != 0;
              pkvVOLineListc = KeyValues::GetNextKey(pkvVOLineListc) )
        {
          v62 = *v61;
          v63 = *v61;
          if ( v62 == v61[4] )
          {
            CUtlMemory<CUtlVector<DOTAEventMysteryVOLine_t,CUtlMemory<DOTAEventMysteryVOLine_t,int>>,int>::Grow(
              (v61 + 2),
              1);
            v63 = *v61;
          }
          v64 = 0;
          *v61 = v63 + 1;
          v65 = *(v61 + 1) + 24 * v62;
          if ( v65 != 0 )
          {
            *v65 = 0;
            *(v65 + 8) = 0;
            *(v65 + 16) = 0;
            *(v65 + 20) = 0;
            v64 = (*(v61 + 1) + 24 * v62);
          }
          for ( k = KeyValues::GetFirstValue(pkvVOLineListc); k != 0; k = KeyValues::GetNextValue(k) )
          {
            v68 = *v64;
            v69 = *v64;
            if ( v68 == v64[4] )
            {
              CUtlMemory<DOTAEventMysteryVOLine_t,int>::Grow((v64 + 2), 1);
              v69 = *v64;
            }
            *v64 = v69 + 1;
            v67 = *(v64 + 1) + 16 * v68;
            *v67 = KeyValues::GetName(k);
            *(v67 + 8) = KeyValues::GetInt(k, 0, 0) != 0;
          }
        }
      }
    }
  }
  v70 = KeyValues::FindKey(pkv, "goals", 0);
  if ( v70 != 0 )
  {
    NextKey = KeyValues::GetFirstSubKey(v70);
    if ( NextKey != 0 )
    {
      while ( 1 )
      {
        memset(&goalDef.szGoalName, 0, 32);
        goalDef.unGoalID = KeyValues::GetInt(NextKey, "goal_id", 0);
        v72 = KeyValues::GetName(NextKey);
        CUtlString::operator=(&goalDef.szGoalName, v72);
        if ( goalDef.unGoalID == 0 )
          break;
        v73 = KeyValues::GetString(NextKey, "name", "", 0, 0);
        CUtlString::operator=(&goalDef.szGoalLocName, v73);
        v74 = KeyValues::GetString(NextKey, "description", "", 0, 0);
        CUtlString::operator=(&goalDef.szGoalLocDescription, v74);
        v75 = KeyValues::GetString(NextKey, "tooltip_image", "", 0, 0);
        CUtlString::operator=(&goalDef.szTooltipImagePath, v75);
        goalDef.unGoalTargetValue = KeyValues::GetUint64(NextKey, "target_value", 0);
        goalDef.unPrerequisiteGoalID = KeyValues::GetInt(NextKey, "prerequisite_goal_id", 0);
        goalDef.unLinaPlaysGranted = KeyValues::GetInt(NextKey, "lina_plays_granted", 0);
        memset(&pCopyFrom.elem.szGoalName, 0, 32);
        pCopyFrom.key = goalDef.unGoalID;
        pCopyFrom.elem.unGoalID = goalDef.unGoalID;
        CUtlString::operator=(&pCopyFrom.elem.szGoalName, &goalDef.szGoalName);
        CUtlString::operator=(&pCopyFrom.elem.szGoalLocName, &goalDef.szGoalLocName);
        CUtlString::operator=(&pCopyFrom.elem.szGoalLocDescription, &goalDef.szGoalLocDescription);
        CUtlString::operator=(&pCopyFrom.elem.szTooltipImagePath, &goalDef.szTooltipImagePath);
        pCopyFrom.elem.unGoalTargetValue = goalDef.unGoalTargetValue;
        pCopyFrom.elem.unPrerequisiteGoalID = goalDef.unPrerequisiteGoalID;
        pCopyFrom.elem.unLinaPlaysGranted = goalDef.unLinaPlaysGranted;
        v76 = *(this + 170);
        if ( v76 == -1 )
        {
          LOBYTE(v79) = 0;
        }
        else
        {
          while ( 1 )
          {
            v77 = *(this + 83) + 80LL * v76;
            v78 = *(v77 + 4);
            if ( *(v77 + 16) > pCopyFrom.key )
              v78 = *v77;
            v79 = pCopyFrom.key < *(v77 + 16);
            if ( v78 == -1 )
              break;
            v76 = v78;
          }
        }
        v80 = CUtlRBTree<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int,CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int>,int>>::NewNode(
                (this + 656),
                &pCopyFrom);
        CUtlRBTree<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int,CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int>,int>>::LinkToParent(
          (this + 656),
          v80,
          v76,
          v79);
        ++*(this + 171);
        if ( pCopyFrom.elem.szTooltipImagePath.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&pCopyFrom.elem.szTooltipImagePath);
        if ( pCopyFrom.elem.szGoalLocDescription.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&pCopyFrom.elem.szGoalLocDescription);
        if ( pCopyFrom.elem.szGoalLocName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&pCopyFrom.elem.szGoalLocName);
        if ( pCopyFrom.elem.szGoalName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&pCopyFrom.elem.szGoalName);
        if ( goalDef.szTooltipImagePath.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&goalDef.szTooltipImagePath);
        if ( goalDef.szGoalLocDescription.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&goalDef.szGoalLocDescription);
        if ( goalDef.szGoalLocName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&goalDef.szGoalLocName);
        if ( goalDef.szGoalName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&goalDef.szGoalName);
        NextKey = KeyValues::GetNextKey(NextKey);
        if ( NextKey == 0 )
          goto LABEL_99;
      }
      v89 = CUtlString::Get(&goalDef.szGoalName);
      CUtlString::Format(sErrMsg, "Event Goal '%s' is missing a goal_id.", v89);
      SDOTAEventGoalDefinition::~SDOTAEventGoalDefinition(&goalDef);
      goto LABEL_13;
    }
  }
LABEL_99:
  v81 = KeyValues::FindKey(pkv, "event_actions", 0);
  inited = CDOTAEventDefinition::InitEventActions(this, v81, sErrMsg);
  if ( !inited )
  {
LABEL_13:
    inited = 0;
    goto LABEL_14;
  }
  v82 = KeyValues::GetString(pkv, "custom_game_reward_action", 0, 0, 0);
  v83 = v82;
  if ( v82 != 0 && *v82 != 0 )
  {
    ActionDefinitionByName = CDOTAEventDefinition::GetActionDefinitionByName(this, v82);
    if ( ActionDefinitionByName == 0 )
    {
      CUtlString::Format(sErrMsg, "Custom game reward action '%s' does not exist", v83);
      goto LABEL_13;
    }
    if ( ActionDefinitionByName->unAvailableAtEventLevel == 0
      && ActionDefinitionByName->unPointCost == 0
      && ActionDefinitionByName->unPremiumPointCost == 0 )
    {
      CUtlString::Format(
        sErrMsg,
        "Custom game reward action '%s' is not claimable. Give it a point cost, level requirement, etc.",
        v83);
      goto LABEL_13;
    }
    *(this + 98) = ActionDefinitionByName->unMinActionID;
  }
  *(this + 198) = KeyValues::GetInt(pkv, "custom_game_trophy_id", 0);
LABEL_14:
  if ( sErrMsgCause.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sErrMsgCause);
  return inited;
}


// CDOTAEventDefinition::InitArcanaVoteFromKV  (line 439, @0x00000000024bf950, libserver.so)
bool __fastcall CDOTAEventDefinition::InitArcanaVoteFromKV(
        CDOTAEventDefinition *const this,
        KeyValues *pKV,
        CUtlString *const sErrMsg)
{
  return 1;
}


// CDOTAEventDefinition::InitItemDefVectorFromKV  (line 538, @0x00000000024ec090, libserver.so)  // inlines: AddToTail, CopyConstruct<item_definition_index_t>, Element, GrowMemory, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, GEconItemSchema, CEconItemSchema::FindItemDefinitionIndex, CUtlMemory<item_definition_index_t, int>::Grow, CUtlString::Format
// callers: CDOTAEventDefinition::InitFromKeyValues
// strings: "Item def '%s' not found."
// globals: INVALID_ITEM_DEF_INDEX
bool __fastcall CDOTAEventDefinition::InitItemDefVectorFromKV(
        KeyValues *pkv,
        CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> > *const vecItemDefs,
        CUtlString *const sErrMsg)
{
  KeyValues *FirstSubKey; // r12
  item_definition_index_t *v6; // rdx
  const char *Name; // r13
  CEconItemSchema *v8; // rax
  item_definition_index_t v9; // ax
  __int64 m_Size; // r13
  int v11; // edx
  const char *v13; // rax
  uint16 m_Data; // [rsp-3Ch] [rbp-3Ch]

  if ( pkv == 0 )
    return 1;
  FirstSubKey = KeyValues::GetFirstSubKey(pkv);
  if ( FirstSubKey == 0 )
    return 1;
  while ( 1 )
  {
    Name = KeyValues::GetName(FirstSubKey);
    v8 = GEconItemSchema();
    v9.m_Data = CEconItemSchema::FindItemDefinitionIndex(v8, Name).m_Data;
    if ( INVALID_ITEM_DEF_INDEX.m_Data == v9.m_Data )
      break;
    m_Size = vecItemDefs->m_Size;
    v11 = vecItemDefs->m_Size;
    if ( m_Size == vecItemDefs->m_Memory.m_nAllocationCount )
    {
      m_Data = v9.m_Data;
      CUtlMemory<item_definition_index_t,int>::Grow(&vecItemDefs->m_Memory, 1);
      v11 = vecItemDefs->m_Size;
      v9.m_Data = m_Data;
    }
    vecItemDefs->m_Size = v11 + 1;
    v6 = &vecItemDefs->m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      v6->m_Data = v9.m_Data;
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    if ( FirstSubKey == 0 )
      return 1;
  }
  v13 = KeyValues::GetName(FirstSubKey);
  CUtlString::Format(sErrMsg, "Item def '%s' not found.", v13);
  return 0;
}


// CDOTAEventDefinition::InitEventActions  (line 558, @0x0000000002528f50, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<SDOTAEventScoreRewardsDefinition>, CopyConstruct<const SDOTAEventActionDefinition*>, Element, EnsureCapacity, Find, FindClosest, FindElement, FindInsertionPosition, GetBool, GrowMemory, HasElement, Insert, InsertAt, InsertIfNotFound, InsertWithDupes, LeftChild, NextInorder, RightChild, SDOTAEventScoreRewardsDefinition, SortPredicate<CDOTAEventDefinition::InitEventActions(KeyValues*, CUtlString&)::__lambda11>, V_isempty, _V_strcmp, __final_insertion_sort<const SDOTAEventActionDefinition**, CDOTAEventDefinition::InitEventActions(KeyValues*, CUtlString&)::__lambda11>, __lg, __unguarded_insertion_sort<const SDOTAEventActionDefinition**, CDOTAEventDefinition::InitEventActions(KeyValues*, CUtlString&)::__lambda11>, __unguarded_linear_insert<const SDOTAEventActionDefinition**, CDOTAEventDefinition::InitEventActions(KeyValues*, CUtlString&)::__lambda11>, end, memcpy, operator(), operator[], sort<const SDOTAEventActionDefinition**, CDOTAEventDefinition::InitEventActions(KeyValues*, CUtlString&)::__lambda11>
// calls: KeyValues::Count, KeyValues::GetFirstSubKey, KeyValues::GetName, KeyValues::GetString, CDOTAEventDefinition::ParseRange, CUtlRBTree<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::FindClosest, CUtlRBTree<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int, CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int>, int> >::Find, operator new, CUtlRBTree<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::LinkToParent, strcmp (29 total)
// callers: CDOTAEventDefinition::InitFromKeyValues
// strings: "action_id_range", "Event action '%s' has an action id range which overlaps with the range for action '%s'", "available_at_event_level", "max_grants", "premium_point_cost", "must_own_event" (19 total)
bool __fastcall CDOTAEventDefinition::InitEventActions(
        CDOTAEventDefinition *const this,
        KeyValues *pkvEventActions,
        CUtlString *const sErrMsg)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t,int>,int> > *v7; // r12
  const char *Name; // r15
  const char *String; // rax
  const char *v10; // rbx
  EventActionID_t v11; // ebx
  int Closest; // eax
  EventActionID_t v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rdx
  SDOTAEventActionDefinition *v16; // rbx
  const char *v17; // rax
  int v18; // r13d
  int *v19; // rcx
  int v20; // esi
  _BOOL4 v21; // ecx
  bool v22; // r14
  int v23; // eax
  const char *pszActionName; // r13
  int v25; // ebx
  __int64 v26; // r14
  __int64 v27; // r15
  int v28; // eax
  int v29; // edx
  unsigned int v30; // eax
  bool v31; // r13
  int v32; // eax
  KeyValues *FirstSubKey; // r14
  CDOTAEventDefinition *v34; // r15
  const char *v35; // rbx
  const char *v36; // rax
  const char *v37; // r12
  EventActionID_t v38; // edx
  __int64 v39; // rax
  int *v40; // rax
  const void *v42; // r12
  void *v43; // rax
  SDOTAEventActionDefinition *v44; // r12
  const char *v45; // rax
  const char *v46; // rbx
  KeyValues *Key; // rax
  const KeyValues *v48; // rbx
  int v49; // r13d
  uint32 m_nGrowSize; // eax
  SDOTAEventScoreRewardsDefinition *m_pMemory; // rsi
  __int64 v52; // rax
  KeyValues *v53; // r13
  KeyValues *NextKey; // r14
  SDOTAEventScoreRewardsDefinition *v55; // rsi
  __int64 v56; // r8
  int v57; // r13d
  int v58; // eax
  KeyValues *v59; // rax
  KeyValues *v60; // rbx
  const char *v61; // r13
  int v62; // eax
  __int64 v63; // rdx
  _DWORD *v64; // r9
  SDOTAEventAchievementDefinition *v65; // rax
  SDOTAEventAchievementDefinition *pAchievementDef; // r13
  SDOTAEventAchievementDefinition *v67; // r13
  SDOTAEventAchievementDefinition *v68; // r13
  SDOTAEventAchievementDefinition *v69; // r13
  __int64 v70; // rbx
  int v71; // eax
  SDOTAEventActionDefinition **v72; // rax
  uint32 unAvailableAtEventLevel; // edx
  const SDOTAEventActionDefinition **v74; // r12
  __int64 v75; // rax
  const SDOTAEventActionDefinition **v76; // r13
  const SDOTAEventActionDefinition **v77; // rsi
  __int64 v78; // rbx
  const SDOTAEventActionDefinition **v79; // rbx
  const SDOTAEventActionDefinition *v80; // rsi
  const SDOTAEventActionDefinition **v81; // rax
  const SDOTAEventActionDefinition *v82; // rdx
  const SDOTAEventActionDefinition **i; // rcx
  int v84; // r13d
  int *v85; // rax
  int v86; // ecx
  _BOOL4 v87; // eax
  bool v88; // cl
  int v89; // eax
  SDOTAEventScoreRewardsDefinition *v90; // rbx
  __int64 m_Size; // r13
  CUtlRBTree<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t> >::Node_t,int,CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t> >::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t> >::Node_t,int>,int> > *v92; // r12
  SDOTAEventRewardDefinition *v93; // rdx
  __int64 v94; // rcx
  SDOTAEventRewardDefinition *v95; // r15
  SDOTAEventRewardDefinition *v96; // r14
  TrophyID_t unTrophyID; // ax
  SDOTAEventScoreRewardsDefinition *v98; // rax
  __int64 v99; // rbx
  int v100; // eax
  SDOTAEventActionDefinition **v101; // rax
  CDOTAEventDefinition *v102; // [rsp+8h] [rbp-98h]
  CUtlRBTree<CUtlMap<char const*,const SDOTAEventActionDefinition*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,const SDOTAEventActionDefinition*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,const SDOTAEventActionDefinition*,int,CDefStringLess>::Node_t,int>,int> > *v103; // [rsp+10h] [rbp-90h]
  uint32 *unRangeStart; // [rsp+20h] [rbp-80h]
  uint32 *unRangeStarta; // [rsp+20h] [rbp-80h]
  KeyValues *__for_end; // [rsp+40h] [rbp-60h]
  CUtlVectorBase<SDOTAEventScoreRewardsDefinition,CUtlMemory<SDOTAEventScoreRewardsDefinition,int> >::iterator __for_endc; // [rsp+40h] [rbp-60h]
  bool __for_endd; // [rsp+40h] [rbp-60h]
  CUtlVectorBase<SDOTAEventScoreRewardsDefinition,CUtlMemory<SDOTAEventScoreRewardsDefinition,int> >::iterator __for_enda; // [rsp+40h] [rbp-60h]
  CUtlVectorBase<SDOTAEventScoreRewardsDefinition,CUtlMemory<SDOTAEventScoreRewardsDefinition,int> >::iterator __for_endb; // [rsp+40h] [rbp-60h]
  EventActionID_t unMinActionID; // [rsp+58h] [rbp-48h] BYREF
  EventActionID_t unMaxActionID; // [rsp+5Ch] [rbp-44h] BYREF
  const char *v116; // [rsp+60h] [rbp-40h] BYREF
  SDOTAEventActionDefinition *pActionDef; // [rsp+68h] [rbp-38h]

  if ( pkvEventActions != 0 )
  {
    v3 = KeyValues::Count(pkvEventActions);
    if ( v3 > *(this + 222) )
    {
      v4 = *(this + 223);
      if ( (v4 & 0x40000000) == 0 )
      {
        if ( (v4 & 0xC0000000) != 0 )
        {
          v42 = *(this + 110);
          v43 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * v3);
          *(this + 110) = v43;
          if ( v42 != 0 )
            memcpy(v43, v42, 32LL * *(this + 222));
          *(this + 223) &= 0x3FFFFFFFu;
        }
        else
        {
          v5 = *(this + 110);
          v6 = *g_pMemAlloc;
          if ( v5 != 0 )
            *(this + 110) = (*(v6 + 8))(g_pMemAlloc, v5, 32LL * v3);
          else
            *(this + 110) = (*v6)(g_pMemAlloc, 32LL * v3);
        }
        *(this + 222) = v3;
      }
    }
    __for_end = KeyValues::GetFirstSubKey(pkvEventActions);
    if ( __for_end != 0 )
    {
      v7 = (this + 872);
      while ( 1 )
      {
        Name = KeyValues::GetName(__for_end);
        unMinActionID = 0;
        unMaxActionID = 0;
        String = KeyValues::GetString(__for_end, "action_id_range", 0, 0, 0);
        v10 = String;
        if ( String != 0 )
        {
          if ( !CDOTAEventDefinition::ParseRange(String, &unMinActionID, &unMaxActionID) )
          {
            CUtlString::Format(sErrMsg, "Unable to parse action id range '%s' for action '%s'", v10, Name);
            return 0;
          }
          v11 = unMinActionID;
        }
        else
        {
          unMinActionID = KeyValues::GetInt(__for_end, "action_id", 0);
          v11 = unMinActionID;
          unMaxActionID = unMinActionID;
        }
        if ( v11 == 0 )
        {
          CUtlString::Format(sErrMsg, "Event action '%s' missing action id", Name);
          return 0;
        }
        LODWORD(v116) = v11;
        Closest = CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int>,int>>::FindClosest(
                    v7,
                    &v116,
                    CompareOperands_t::k_ELessThanOrEqualTo);
        if ( Closest != -1 )
        {
          v13 = unMaxActionID;
          v14 = *(this + 110);
          v15 = *(v14 + 32LL * Closest + 24);
          if ( *v15 <= unMaxActionID )
          {
            if ( v11 <= *(v15 + 4) )
            {
LABEL_49:
              CUtlString::Format(
                sErrMsg,
                "Event action '%s' has an action id range which overlaps with the range for action '%s'",
                Name,
                *(v15 + 8));
              return 0;
            }
            while ( 1 )
            {
              Closest = CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int>,int>>::NextInorder(
                          v7,
                          Closest);
              if ( Closest == -1 )
                break;
              v15 = *(v14 + 32LL * Closest + 24);
              if ( *v15 > v13 )
                break;
              if ( *(v15 + 4) >= v11 )
                goto LABEL_49;
            }
          }
        }
        v116 = Name;
        v103 = (this + 920);
        if ( CUtlRBTree<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>>::Find(
               (this + 920),
               &v116) != -1 )
          break;
        v16 = operator new(0x50u);
        memset(v16, 0, sizeof(SDOTAEventActionDefinition));
        v16->unMinActionID = unMinActionID;
        v16->unMaxActionID = unMaxActionID;
        v17 = KeyValues::GetName(__for_end);
        v16->unMaxGrants = 1;
        v16->pszActionName = v17;
        v16->unAvailableAtEventLevel = 0;
        v16->unPointCost = 0;
        v16->unPremiumPointCost = 0;
        v16->pAchievementDef = 0;
        v16->bMustOwnEvent = 1;
        v16->bAddToWebRequest = 0;
        v16->bImportant = 0;
        v18 = *(this + 224);
        pActionDef = v16;
        LODWORD(v116) = unMinActionID;
        if ( v18 == -1 )
        {
          v22 = 0;
        }
        else
        {
          while ( 1 )
          {
            v19 = (*(this + 110) + 32LL * v18);
            v20 = v19[1];
            if ( unMinActionID < v19[4] )
              v20 = *v19;
            v21 = unMinActionID < v19[4];
            if ( v20 == -1 )
              break;
            v18 = v20;
          }
          v22 = v21;
        }
        v23 = CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int>,int>>::NewNode(
                v7,
                &v116);
        CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int>,int>>::LinkToParent(
          v7,
          v23,
          v18,
          v22);
        ++*(this + 225);
        pszActionName = v16->pszActionName;
        pActionDef = v16;
        v25 = *(this + 236);
        v116 = pszActionName;
        if ( v25 == -1 )
        {
          v31 = 0;
        }
        else
        {
          v26 = *(this + 116);
          while ( 1 )
          {
            v27 = v26 + 32LL * v25;
            v28 = strcmp(pszActionName, *(v27 + 16));
            v29 = *(v27 + 4);
            if ( v28 < 0 )
              v29 = *v27;
            v30 = v28 >> 31;
            if ( v29 == -1 )
              break;
            v25 = v29;
          }
          v31 = v30;
        }
        v32 = CUtlRBTree<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>>::NewNode(
                v103,
                &v116);
        CUtlRBTree<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>>::LinkToParent(
          v103,
          v32,
          v25,
          v31);
        ++*(this + 237);
        __for_end = KeyValues::GetNextKey(__for_end);
        if ( __for_end == 0 )
          goto LABEL_37;
      }
      CUtlString::Format(sErrMsg, "Event action name '%s' is used in two places", Name);
      return 0;
    }
LABEL_37:
    FirstSubKey = KeyValues::GetFirstSubKey(pkvEventActions);
    if ( FirstSubKey != 0 )
    {
      v34 = this;
      while ( 1 )
      {
        v35 = KeyValues::GetName(FirstSubKey);
        unMinActionID = 0;
        unMaxActionID = 0;
        v36 = KeyValues::GetString(FirstSubKey, "action_id_range", 0, 0, 0);
        v37 = v36;
        if ( v36 != 0 )
        {
          if ( !CDOTAEventDefinition::ParseRange(v36, &unMinActionID, &unMaxActionID) )
          {
            CUtlString::Format(sErrMsg, "Unable to parse action id range '%s' for action '%s'", v37, v35);
            return 0;
          }
          v38 = unMinActionID;
        }
        else
        {
          unMinActionID = KeyValues::GetInt(FirstSubKey, "action_id", 0);
          v38 = unMinActionID;
          unMaxActionID = unMinActionID;
        }
        v39 = *(v34 + 224);
        while ( v39 != -1 )
        {
          v40 = (*(v34 + 110) + 32 * v39);
          if ( v38 < v40[4] )
          {
            v39 = *v40;
          }
          else
          {
            if ( v38 <= v40[4] )
            {
              v44 = *(v40 + 3);
              goto LABEL_61;
            }
            v39 = v40[1];
          }
        }
        v44 = 0;
LABEL_61:
        v45 = KeyValues::GetString(FirstSubKey, "available_at_event_level", "", 0, 0);
        v46 = v45;
        if ( v45 != 0 && *v45 != 0 )
        {
          if ( !CDOTAEventDefinition::ParseRepeatInterval(
                  v45,
                  &v44->unAvailableAtEventLevel,
                  &v44->unAvailableAtEventLevelRepeatInterval) )
          {
            CUtlString::Format(sErrMsg, "Unable to parse event level '%s' for action '%s'", v46, v44->pszActionName);
            return 0;
          }
        }
        else
        {
          v44->unAvailableAtEventLevel = 0;
          v44->unAvailableAtEventLevelRepeatInterval = 0;
        }
        v44->unMaxGrants = KeyValues::GetInt(FirstSubKey, "max_grants", 1);
        v44->unPointCost = KeyValues::GetInt(FirstSubKey, "point_cost", 0);
        v44->unPremiumPointCost = KeyValues::GetInt(FirstSubKey, "premium_point_cost", 0);
        v44->bMustOwnEvent = KeyValues::GetInt(FirstSubKey, "must_own_event", 1) != 0;
        v44->bAddToWebRequest = KeyValues::GetInt(FirstSubKey, "add_to_web_request", 0) != 0;
        v44->bImportant = KeyValues::GetInt(FirstSubKey, "important", 0) != 0;
        Key = KeyValues::FindKey(FirstSubKey, "rewards", 0);
        v48 = Key;
        if ( Key != 0 )
        {
          v49 = KeyValues::Count(Key);
          if ( v49 > v44->vecScoreRewards.m_Memory.m_nAllocationCount )
          {
            m_nGrowSize = v44->vecScoreRewards.m_Memory.m_nGrowSize;
            if ( (m_nGrowSize & 0x40000000) == 0 )
            {
              if ( (m_nGrowSize & 0xC0000000) != 0 )
              {
                __for_endb = v44->vecScoreRewards.m_Memory.m_pMemory;
                v98 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * v49);
                v44->vecScoreRewards.m_Memory.m_pMemory = v98;
                if ( __for_endb != 0 )
                  memcpy(v98, __for_endb, 32LL * v44->vecScoreRewards.m_Memory.m_nAllocationCount);
                v44->vecScoreRewards.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
              }
              else
              {
                m_pMemory = v44->vecScoreRewards.m_Memory.m_pMemory;
                v52 = *g_pMemAlloc;
                if ( m_pMemory != 0 )
                  v44->vecScoreRewards.m_Memory.m_pMemory = (*(v52 + 8))(g_pMemAlloc, m_pMemory, 32LL * v49);
                else
                  v44->vecScoreRewards.m_Memory.m_pMemory = (*v52)(g_pMemAlloc, 32LL * v49);
              }
              v44->vecScoreRewards.m_Memory.m_nAllocationCount = v49;
            }
          }
          v53 = KeyValues::GetFirstSubKey(v48);
          if ( v53 != 0 )
            break;
        }
LABEL_81:
        v59 = KeyValues::FindKey(FirstSubKey, "achievement", 0);
        v60 = v59;
        if ( v59 != 0 )
        {
          v61 = KeyValues::GetString(v59, "tracking_action", "", 0, 0);
          v116 = v61;
          v62 = CUtlRBTree<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>>::Find(
                  (this + 920),
                  &v116);
          if ( v62 == -1 || (v63 = *(v34 + 116) + 32LL * v62, (v64 = *(v63 + 24)) == 0) )
          {
            CUtlString::Format(
              sErrMsg,
              "Event action '%s' has an achievement with an unknown tracking action '%s'",
              v44->pszActionName,
              v61);
            return 0;
          }
          if ( *v64 != v64[1] )
          {
            CUtlString::Format(
              sErrMsg,
              "Event action '%s' has an achievement with a tracking action '%s', but that action has a range of action ids.",
              v44->pszActionName,
              v61);
            return 0;
          }
          __for_endc = *(v63 + 24);
          v65 = operator new(0x28u);
          v65->pszName = 0;
          v65->pszDescription = 0;
          v65->pszImage = 0;
          v65->unTrackingActionID = 0;
          v65->unAchievementGoal = 0;
          v65->unAchievementLevel = 0;
          v44->pAchievementDef = v65;
          v65->pszName = KeyValues::GetString(v60, "name", "", 0, 0);
          pAchievementDef = v44->pAchievementDef;
          pAchievementDef->pszDescription = KeyValues::GetString(v60, "description", "", 0, 0);
          v67 = v44->pAchievementDef;
          v67->pszImage = KeyValues::GetString(v60, "image", "", 0, 0);
          v44->pAchievementDef->unTrackingActionID = __for_endc->unActionScore;
          v68 = v44->pAchievementDef;
          v68->unAchievementLevel = KeyValues::GetInt(v60, "achievement_level", 1);
          v69 = v44->pAchievementDef;
          v69->unAchievementGoal = KeyValues::GetInt(v60, "achievement_goal", 0);
          v70 = *(v34 + 242);
          v71 = *(v34 + 242);
          if ( v70 == *(v34 + 246) )
          {
            CUtlMemory<SDOTAEventActionDefinition const*,int>::Grow(v34 + 61, 1);
            v71 = *(v34 + 242);
          }
          *(v34 + 242) = v71 + 1;
          v72 = (*(v34 + 122) + 8 * v70);
          if ( v72 != 0 )
            *v72 = v44;
        }
        unAvailableAtEventLevel = v44->unAvailableAtEventLevel;
        if ( unAvailableAtEventLevel != 0 )
        {
          v84 = *(v34 + 254);
          LODWORD(v116) = v44->unAvailableAtEventLevel;
          pActionDef = v44;
          if ( v84 == -1 )
          {
            v88 = 0;
          }
          else
          {
            while ( 1 )
            {
              v85 = (*(v34 + 125) + 32LL * v84);
              v86 = v85[1];
              if ( unAvailableAtEventLevel < v85[4] )
                v86 = *v85;
              v87 = unAvailableAtEventLevel < v85[4];
              if ( v86 == -1 )
                break;
              v84 = v86;
            }
            v88 = v87;
          }
          __for_endd = v88;
          v89 = CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::NewNode(
                  (v34 + 992),
                  &v116);
          CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::LinkToParent(
            (v34 + 992),
            v89,
            v84,
            __for_endd);
          ++*(v34 + 255);
          if ( v44->unAvailableAtEventLevelRepeatInterval != 0 )
          {
            v99 = *(v34 + 260);
            v100 = *(v34 + 260);
            if ( v99 == *(v34 + 264) )
            {
              CUtlMemory<SDOTAEventActionDefinition const*,int>::Grow((v34 + 1048), 1);
              v100 = *(v34 + 260);
            }
            *(v34 + 260) = v100 + 1;
            v101 = (*(v34 + 131) + 8 * v99);
            if ( v101 != 0 )
              *v101 = v44;
          }
          v90 = v44->vecScoreRewards.m_Memory.m_pMemory;
          m_Size = v44->vecScoreRewards.m_Size;
          __for_enda = &v90[m_Size];
          if ( v90 != &v90[m_Size] )
          {
            unRangeStarta = FirstSubKey;
            v102 = v34;
            v92 = (v34 + 1064);
            do
            {
              v93 = v90->vecRewards.m_Memory.m_pMemory;
              v94 = v90->vecRewards.m_Size;
              v95 = &v93[v94];
              v96 = v93;
              while ( v95 != v96 )
              {
                while ( v96->eEventAction != EEventAction::eEventAction_GrantItem )
                {
                  if ( v95 == ++v96 )
                    goto LABEL_120;
                }
                unTrophyID = v96->trophyGrant.unTrophyID;
                ++v96;
                BYTE2(v116) = 1;
                LOWORD(v116) = unTrophyID;
                CUtlRBTree<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int,CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t,bool,int,CDefLess<item_definition_index_t>>::Node_t,int>,int>>::InsertIfNotFound(
                  v92,
                  &v116);
              }
LABEL_120:
              ++v90;
            }
            while ( __for_enda != v90 );
            FirstSubKey = unRangeStarta;
            v34 = v102;
          }
        }
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_91;
      }
      unRangeStart = FirstSubKey;
      NextKey = v53;
      while ( 1 )
      {
        v57 = v44->vecScoreRewards.m_Size;
        v58 = v57;
        if ( v57 == v44->vecScoreRewards.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<SDOTAEventScoreRewardsDefinition,int>::Grow(&v44->vecScoreRewards.m_Memory, 1);
          v58 = v44->vecScoreRewards.m_Size;
        }
        v55 = 0;
        v44->vecScoreRewards.m_Size = v58 + 1;
        v56 = &v44->vecScoreRewards.m_Memory.m_pMemory[v57];
        if ( v56 != 0 )
        {
          *(v56 + 8) = 0;
          *(v56 + 16) = 0;
          *(v56 + 24) = 0;
          *(v56 + 28) = 0;
          v55 = &v44->vecScoreRewards.m_Memory.m_pMemory[v57];
        }
        if ( !CDOTAEventDefinition::InitEventScoreRewards(v34, v55, NextKey, v44->pszActionName, sErrMsg) )
          break;
        NextKey = KeyValues::GetNextKey(NextKey);
        if ( NextKey == 0 )
        {
          FirstSubKey = unRangeStart;
          goto LABEL_81;
        }
      }
      CUtlVectorBase<SDOTAEventScoreRewardsDefinition,CUtlMemory<SDOTAEventScoreRewardsDefinition,int>>::Remove(
        &v44->vecScoreRewards,
        v44->vecScoreRewards.m_Size - 1);
      return 0;
    }
LABEL_91:
    v74 = *(this + 131);
    v75 = *(this + 260);
    v76 = &v74[v75];
    if ( v74 != v76 )
    {
      v77 = &v74[v75];
      v78 = 8 * v75;
      _BitScanReverse64(&v75, (8 * v75) >> 3);
      std::__introsort_loop<SDOTAEventActionDefinition const**,long,CDOTAEventDefinition::InitEventActions(KeyValues *,CUtlString &)::{lambda(SDOTAEventActionDefinition const*,SDOTAEventActionDefinition const*)#1}>(
        *(this + 131),
        v77,
        2 * (63LL - (v75 ^ 0x3F)));
      if ( v78 <= 135 )
      {
        std::__insertion_sort<SDOTAEventActionDefinition const**,CDOTAEventDefinition::InitEventActions(KeyValues *,CUtlString &)::{lambda(SDOTAEventActionDefinition const*,SDOTAEventActionDefinition const*)#1}>(
          v74,
          v76);
      }
      else
      {
        v79 = v74 + 16;
        std::__insertion_sort<SDOTAEventActionDefinition const**,CDOTAEventDefinition::InitEventActions(KeyValues *,CUtlString &)::{lambda(SDOTAEventActionDefinition const*,SDOTAEventActionDefinition const*)#1}>(
          v74,
          v74 + 16);
        if ( v76 != v74 + 16 )
        {
          do
          {
            v80 = *v79;
            v81 = v79 - 1;
            v82 = *(v79 - 1);
            if ( v82->unAvailableAtEventLevel <= (*v79)->unAvailableAtEventLevel )
            {
              v81 = v79;
            }
            else
            {
              for ( i = v79; ; i = v81-- )
              {
                *i = v82;
                v82 = *(v81 - 1);
                if ( v80->unAvailableAtEventLevel >= v82->unAvailableAtEventLevel )
                  break;
              }
            }
            ++v79;
            *v81 = v80;
          }
          while ( v76 != v79 );
        }
      }
    }
  }
  return 1;
}


// CDOTAEventDefinition::ParseRepeatInterval  (line 758, @0x00000000024bf960, libserver.so)  // inlines: SkipBlanks, V_isdigit
// calls: V_atoi
// callers: CDOTAEventDefinition::InitEventScoreRewards, CDOTAEventDefinition::InitEventActions
bool __fastcall CDOTAEventDefinition::ParseRepeatInterval(
        const char *pszInput,
        uint32 *const unStartValue,
        uint32 *const unRepeatInterval)
{
  const char *v5; // rbx
  signed int v6; // eax
  char i; // cl
  bool result; // al
  _BYTE *j; // r13
  signed int v10; // eax
  char v11; // cl
  _BYTE *v12; // rdx

  v5 = pszInput;
  *unStartValue = 0;
  for ( *unRepeatInterval = 0; (*v5 - 1) <= 0x1Fu; ++v5 )
    ;
  v6 = V_atoi(v5);
  if ( v6 < 0 )
    return 0;
  *unStartValue = v6;
  for ( i = *v5; (*v5 - 48) <= 9u; i = *v5 )
    ++v5;
  if ( (i - 1) <= 0x1Fu )
  {
    do
      i = *++v5;
    while ( (*v5 - 1) <= 0x1Fu );
  }
  result = 1;
  if ( i != 0 )
  {
    if ( i == 43 )
    {
      for ( j = v5 + 1; (*j - 1) <= 0x1Fu; ++j )
        ;
      v10 = V_atoi(j);
      if ( v10 >= 0 )
      {
        while ( (*j - 48) <= 9u )
          ++j;
        if ( *j == 110 )
        {
          v11 = j[1];
          v12 = j + 1;
          if ( (v11 - 1) <= 0x1Fu )
          {
            do
              v11 = *++v12;
            while ( (*v12 - 1) <= 0x1Fu );
          }
          if ( v11 == 0 )
          {
            *unRepeatInterval = v10;
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return result;
}


// CDOTAEventDefinition::ParseRange  (line 813, @0x00000000024bfaa0, libserver.so)  // inlines: SkipBlanks, V_isdigit
// calls: V_atoi
// callers: CDOTAEventDefinition::InitEventActions
bool __fastcall CDOTAEventDefinition::ParseRange(
        const char *pszInput,
        uint32 *const unRangeStart,
        uint32 *const unRangeEnd)
{
  const char *v5; // rbx
  signed int v6; // eax
  signed int v7; // r13d
  char i; // cl
  char *j; // r12
  signed int v11; // eax
  char v12; // cl

  v5 = pszInput;
  *unRangeStart = 0;
  for ( *unRangeEnd = 0; (*v5 - 1) <= 0x1Fu; ++v5 )
    ;
  v6 = V_atoi(v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *unRangeStart = v6;
    for ( i = *v5; (*v5 - 48) <= 9u; i = *v5 )
      ++v5;
    if ( (i - 1) <= 0x1Fu )
    {
      do
        i = *++v5;
      while ( (*v5 - 1) <= 0x1Fu );
    }
    if ( i == 0 )
    {
      *unRangeEnd = v6;
      return 1;
    }
    if ( i == 45 )
    {
      for ( j = (v5 + 1); (*j - 1) <= 0x1Fu; ++j )
        ;
      v11 = V_atoi(j);
      if ( v11 >= 0 )
      {
        while ( 1 )
        {
          v12 = *j;
          if ( (*j - 48) > 9u )
            break;
          ++j;
        }
        if ( (v12 - 1) <= 0x1Fu )
        {
          do
            v12 = *++j;
          while ( (*j - 1) <= 0x1Fu );
        }
        if ( v12 == 0 && v7 <= v11 )
        {
          *unRangeEnd = v11;
          return 1;
        }
      }
    }
  }
  return 0;
}


// CDOTAEventDefinition::InitEventScoreRewards  (line 869, @0x00000000024f80d0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Element, EnsureCapacity, GrowMemory, Remove, V_isempty, memcpy, operator[]
// calls: KeyValues::GetName, CDOTAEventDefinition::ParseRepeatInterval, KeyValues::Count, KeyValues::GetFirstSubKey, CDOTAEventDefinition::InitEventReward, KeyValues::GetNextKey, CUtlMemory<SDOTAEventRewardDefinition, int>::Grow, CUtlString::Format, memcpy
// callers: CDOTAEventDefinition::InitEventActions
// strings: "Event action '%s' has a reward with an empty score specified.", "Action '%s' has a reward with an invalid score value of zero", "Action '%s' has a reward with an invalid score value '%s'"
bool __fastcall CDOTAEventDefinition::InitEventScoreRewards(
        CDOTAEventDefinition *const this,
        SDOTAEventScoreRewardsDefinition *const scoreRewardsDef,
        KeyValues *pkvScoreRewards,
        const char *pszActionName,
        CUtlString *const sErrMsg)
{
  const char *Name; // rax
  const char *v9; // r12
  int v10; // r15d
  uint32 m_nGrowSize; // eax
  SDOTAEventRewardDefinition *v12; // rsi
  __int64 v13; // rax
  KeyValues *FirstSubKey; // r15
  int m_Size; // eax
  int v16; // edx
  SDOTAEventRewardDefinition *v18; // rax
  CUtlMemory<SDOTAEventRewardDefinition,int> *m_pMemory; // [rsp+0h] [rbp-50h]
  int pkvScoreRewardsb; // [rsp+8h] [rbp-48h]
  bool v22; // [rsp+17h] [rbp-39h]

  Name = KeyValues::GetName(pkvScoreRewards);
  v9 = Name;
  if ( Name != 0 && *Name != 0 )
  {
    scoreRewardsDef->unActionScore = 0;
    scoreRewardsDef->unActionScoreRepeatInterval = 0;
    v22 = CDOTAEventDefinition::ParseRepeatInterval(
            Name,
            &scoreRewardsDef->unActionScore,
            &scoreRewardsDef->unActionScoreRepeatInterval);
    if ( v22 )
    {
      if ( scoreRewardsDef->unActionScore != 0 )
      {
        v10 = KeyValues::Count(pkvScoreRewards);
        if ( v10 > scoreRewardsDef->vecRewards.m_Memory.m_nAllocationCount )
        {
          m_nGrowSize = scoreRewardsDef->vecRewards.m_Memory.m_nGrowSize;
          if ( (m_nGrowSize & 0x40000000) == 0 )
          {
            if ( (m_nGrowSize & 0xC0000000) != 0 )
            {
              m_pMemory = scoreRewardsDef->vecRewards.m_Memory.m_pMemory;
              v18 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * v10);
              scoreRewardsDef->vecRewards.m_Memory.m_pMemory = v18;
              if ( m_pMemory != 0 )
                memcpy(v18, m_pMemory, 32LL * scoreRewardsDef->vecRewards.m_Memory.m_nAllocationCount);
              scoreRewardsDef->vecRewards.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
            }
            else
            {
              v12 = scoreRewardsDef->vecRewards.m_Memory.m_pMemory;
              v13 = *g_pMemAlloc;
              if ( v12 != 0 )
                scoreRewardsDef->vecRewards.m_Memory.m_pMemory = (*(v13 + 8))(g_pMemAlloc, v12, 32LL * v10);
              else
                scoreRewardsDef->vecRewards.m_Memory.m_pMemory = (*v13)(g_pMemAlloc, 32LL * v10);
            }
            scoreRewardsDef->vecRewards.m_Memory.m_nAllocationCount = v10;
          }
        }
        FirstSubKey = KeyValues::GetFirstSubKey(pkvScoreRewards);
        if ( FirstSubKey != 0 )
        {
          while ( 1 )
          {
            m_Size = scoreRewardsDef->vecRewards.m_Size;
            v16 = m_Size;
            if ( m_Size == scoreRewardsDef->vecRewards.m_Memory.m_nAllocationCount )
            {
              pkvScoreRewardsb = scoreRewardsDef->vecRewards.m_Size;
              CUtlMemory<SDOTAEventRewardDefinition,int>::Grow(&scoreRewardsDef->vecRewards.m_Memory, 1);
              v16 = scoreRewardsDef->vecRewards.m_Size;
              m_Size = pkvScoreRewardsb;
            }
            scoreRewardsDef->vecRewards.m_Size = v16 + 1;
            if ( !CDOTAEventDefinition::InitEventReward(
                    this,
                    &scoreRewardsDef->vecRewards.m_Memory.m_pMemory[m_Size],
                    FirstSubKey,
                    pszActionName,
                    v9,
                    sErrMsg) )
              break;
            FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
            if ( FirstSubKey == 0 )
              return v22;
          }
          --scoreRewardsDef->vecRewards.m_Size;
          return 0;
        }
      }
      else
      {
        CUtlString::Format(sErrMsg, "Action '%s' has a reward with an invalid score value of zero", pszActionName);
        return 0;
      }
    }
    else
    {
      CUtlString::Format(sErrMsg, "Action '%s' has a reward with an invalid score value '%s'", pszActionName, v9);
    }
  }
  else
  {
    CUtlString::Format(sErrMsg, "Event action '%s' has a reward with an empty score specified.", pszActionName);
    return 0;
  }
  return v22;
}


// CDOTAEventDefinition::InitEventReward  (line 911, @0x00000000024ec190, libserver.so)  // inlines: Element, Find, FindElement, _V_strcmp, operator[]
// calls: KeyValues::GetName, CUtlString::Format, KeyValues::GetInt, KeyValues::GetString, CUtlRBTree<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int, CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int>, int> >::Find, KeyValues::GetUint64
// callers: CDOTAEventDefinition::InitEventScoreRewards
// strings: "grant_item", "grant_items", "grant_loot_list", "grant_trophy", "grant_action", "grant_actions" (26 total)
bool __fastcall CDOTAEventDefinition::InitEventReward(
        CDOTAEventDefinition *const this,
        SDOTAEventRewardDefinition *const rewardDef,
        KeyValues *pkvReward,
        const char *pszActionName,
        const char *pszRewardScore,
        CUtlString *const sErrMsg)
{
  const char *Name; // rax
  uint32 Int; // eax
  uint32 v14; // eax
  uint32 unItemDef; // r8d
  const char *v16; // r15
  const char *v17; // rax
  const char *v18; // rax
  int v19; // eax
  uint32 *v20; // rax
  TrophyScore_t v21; // eax
  const char *v22; // rax
  int v23; // eax
  uint32 *v24; // rax
  const char *v25; // rax
  const char *String; // rax
  uint32 v27; // eax
  const char *v28; // rax
  uint32 v29; // eax
  uint32 v30; // eax
  CUtlMap<char const*,const SDOTAEventActionDefinition*,int,CDefStringLess>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  Name = KeyValues::GetName(pkvReward);
  if ( strcmp(Name, "grant_item") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantItem;
    Int = KeyValues::GetInt(pkvReward, 0, 0);
    rewardDef->itemGrant.unQuantity = 1;
    rewardDef->itemGrant.unItemDef = Int;
    rewardDef->trophyGrant.unTrophyMinScore = 31;
    rewardDef->itemGrant.eAckPos = unacknowledged_item_inventory_positions_t::UNACK_ITEM_COMPENDIUM_REWARD;
    if ( Int == 0 )
    {
      String = KeyValues::GetString(pkvReward, 0, "", 0, 0);
      CUtlString::Format(
        sErrMsg,
        "Action '%s' can't grant a reward for score '%s' with an invalid item def '%s'",
        pszActionName,
        pszRewardScore,
        String);
      return 0;
    }
    return 1;
  }
  if ( strcmp(Name, "grant_items") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantItem;
    rewardDef->itemGrant.unItemDef = KeyValues::GetInt(pkvReward, "item_def", 0);
    v14 = KeyValues::GetInt(pkvReward, "quantity", 1);
    unItemDef = rewardDef->itemGrant.unItemDef;
    rewardDef->trophyGrant.unTrophyMinScore = 31;
    rewardDef->itemGrant.unQuantity = v14;
    rewardDef->itemGrant.eAckPos = unacknowledged_item_inventory_positions_t::UNACK_ITEM_COMPENDIUM_REWARD;
    if ( unItemDef == 0 || v14 == 0 )
    {
      v16 = KeyValues::GetString(pkvReward, "quantity", "", 0, 0);
      v17 = KeyValues::GetString(pkvReward, "item_def", "", 0, 0);
      CUtlString::Format(
        sErrMsg,
        "Action '%s' can't grant a reward for score '%s' with invalid item def '%s' or quantity '%s'",
        pszActionName,
        pszRewardScore,
        v17,
        v16);
      return 0;
    }
    return 1;
  }
  if ( strcmp(Name, "grant_loot_list") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantLootList;
    v18 = KeyValues::GetString(pkvReward, 0, "", 0, 0);
    rewardDef->lootListGrant.unQuantity = 1;
    rewardDef->lootListGrant.pszLootList = v18;
    rewardDef->itemGrant.eAckPos = unacknowledged_item_inventory_positions_t::UNACK_NUM_METHODS|unacknowledged_item_inventory_positions_t::UNACK_ITEM_SUPPORT;
    rewardDef->itemGrant.unQuantity = 22;
    return 1;
  }
  if ( strcmp(Name, "grant_trophy") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantTrophy;
    rewardDef->trophyGrant.unTrophyID = KeyValues::GetInt(pkvReward, "trophy_id", 0);
    rewardDef->trophyGrant.unTrophyMinScore = KeyValues::GetInt(pkvReward, "trophy_min_score", 0);
    return 1;
  }
  if ( strcmp(Name, "grant_action") == 0 )
  {
    search.key = KeyValues::GetString(pkvReward, 0, "", 0, 0);
    v23 = CUtlRBTree<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>>::Find(
            (this + 920),
            &search);
    if ( v23 != -1 )
    {
      v24 = *(*(this + 116) + 32LL * v23 + 24);
      if ( v24 != 0 )
      {
        if ( *v24 == v24[1] )
        {
          rewardDef->eEventAction = EEventAction::eEventAction_GrantAction;
          v27 = *v24;
          rewardDef->trophyGrant.unTrophyMinScore = 1;
          rewardDef->itemGrant.unItemDef = v27;
          return 1;
        }
        goto LABEL_31;
      }
    }
LABEL_35:
    v28 = KeyValues::GetString(pkvReward, 0, "", 0, 0);
    CUtlString::Format(
      sErrMsg,
      "Action '%s' can't grant an unknown action '%s' as a reward at score '%s'",
      pszActionName,
      v28,
      pszRewardScore);
    return 0;
  }
  if ( strcmp(Name, "grant_actions") == 0 )
  {
    search.key = KeyValues::GetString(pkvReward, 0, "", 0, 0);
    v19 = CUtlRBTree<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>>::Find(
            (this + 920),
            &search);
    if ( v19 != -1 )
    {
      v20 = *(*(this + 116) + 32LL * v19 + 24);
      if ( v20 != 0 )
      {
        if ( *v20 == v20[1] )
        {
          rewardDef->eEventAction = EEventAction::eEventAction_GrantAction;
          rewardDef->itemGrant.unItemDef = *v20;
          v21 = KeyValues::GetInt(pkvReward, "grant_count", 1);
          rewardDef->trophyGrant.unTrophyMinScore = v21;
          if ( v21 == 0 )
          {
            v22 = KeyValues::GetString(pkvReward, 0, "", 0, 0);
            CUtlString::Format(
              sErrMsg,
              "Action '%s' can't grant a action '%s' as a reward at score '%s' with 0 as the grant count",
              pszActionName,
              v22,
              pszRewardScore);
            return 0;
          }
          return 1;
        }
LABEL_31:
        v25 = KeyValues::GetString(pkvReward, 0, "", 0, 0);
        CUtlString::Format(
          sErrMsg,
          "Action '%s' can't grant action '%s' as a reward at score '%s' because that action spans a range of action ids",
          pszActionName,
          v25,
          pszRewardScore);
        return 0;
      }
    }
    goto LABEL_35;
  }
  if ( strcmp(Name, "grant_points") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantPoints;
    v29 = KeyValues::GetInt(pkvReward, 0, 0);
    rewardDef->trophyGrant.unTrophyMinScore = 0;
    rewardDef->itemGrant.unItemDef = v29;
    return 1;
  }
  if ( strcmp(Name, "grant_premium_points") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantPoints;
    rewardDef->itemGrant.unItemDef = 0;
    rewardDef->trophyGrant.unTrophyMinScore = KeyValues::GetInt(pkvReward, 0, 0);
    return 1;
  }
  if ( strcmp(Name, "grant_backpack_slots") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantBackpackSlots;
LABEL_40:
    rewardDef->itemGrant.unItemDef = KeyValues::GetInt(pkvReward, 0, 0);
    return 1;
  }
  if ( strcmp(Name, "grant_emoticon") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantEmoticon;
    v30 = KeyValues::GetInt(pkvReward, 0, 0);
    rewardDef->itemGrant.unItemDef = v30;
    rewardDef->trophyGrant.unTrophyMinScore = v30;
    return 1;
  }
  if ( strcmp(Name, "grant_emoticons") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantEmoticon;
    rewardDef->itemGrant.unItemDef = KeyValues::GetInt(pkvReward, "emoticon_id_start", 0);
    rewardDef->trophyGrant.unTrophyMinScore = KeyValues::GetInt(pkvReward, "emoticon_id_end", 0);
    return 1;
  }
  if ( strcmp(Name, "grant_account_flag") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantAccountFlag;
    rewardDef->itemGrant.unItemDef = KeyValues::GetUint64(pkvReward, "flags_to_grant", 0);
    rewardDef->trophyGrant.unTrophyMinScore = KeyValues::GetUint64(pkvReward, "audit_data", 0);
    return 1;
  }
  if ( strcmp(Name, "grant_quest") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantQuest;
    goto LABEL_40;
  }
  if ( strcmp(Name, "grant_mystery_item") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantMysteryItem;
    return 1;
  }
  if ( strcmp(Name, "grant_effect") == 0 )
  {
    rewardDef->eEventAction = EEventAction::eEventAction_GrantEffect;
    rewardDef->lootListGrant.pszLootList = KeyValues::GetString(pkvReward, "name", "", 0, 0);
    rewardDef->effectGrant.pszImage = KeyValues::GetString(pkvReward, "image", "", 0, 0);
    rewardDef->lootListGrant.unQuantity = KeyValues::GetInt(pkvReward, "effect_index", 0);
    return 1;
  }
  else
  {
    CUtlString::Format(
      sErrMsg,
      "Unknown reward type '%s' for action '%s' at score '%s'",
      Name,
      pszActionName,
      pszRewardScore);
    return 0;
  }
}


// CDOTAEventDefinition::GetActionDefinition  (line 1081, @0x00000000024de590, libserver.so)  // inlines: Element, FindClosest, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::FindClosest
// callers: CDOTAEventDefinition::GetEffectMaskForAction
const SDOTAEventActionDefinition *__fastcall CDOTAEventDefinition::GetActionDefinition(
        const CDOTAEventDefinition *const this,
        EventActionID_t unActionID)
{
  int Closest; // eax
  const SDOTAEventActionDefinition *result; // rax
  CUtlMap<unsigned int,SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = unActionID;
  Closest = CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition *,int,CDefLess<unsigned int>>::Node_t,int>,int>>::FindClosest(
              (this + 872),
              &search,
              CompareOperands_t::k_ELessThanOrEqualTo);
  if ( Closest == -1 )
    return 0;
  result = *(*(this + 110) + 32LL * Closest + 24);
  if ( result->unMinActionID > unActionID || result->unMaxActionID < unActionID )
    return 0;
  return result;
}


// CDOTAEventDefinition::GetActionDefinitionByName  (line 1094, @0x00000000024ec8a0, libserver.so)  // inlines: Element, Find, FindElement, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int, CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int>, int> >::Find
// callers: CDOTAEventDefinition::InitFromKeyValues
const SDOTAEventActionDefinition *__fastcall CDOTAEventDefinition::GetActionDefinitionByName(
        const CDOTAEventDefinition *const this,
        const char *pszActionName)
{
  int v3; // eax
  CUtlMap<char const*,const SDOTAEventActionDefinition*,int,CDefStringLess>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = pszActionName;
  v3 = CUtlRBTree<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int,CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,SDOTAEventActionDefinition const*,int,CDefStringLess>::Node_t,int>,int>>::Find(
         (this + 920),
         &search);
  if ( v3 == -1 )
    return 0;
  else
    return *(*(this + 116) + 32LL * v3 + 24);
}


// CDOTAEventDefinition::GetEventPointsLevel  (line 1099, @0x00000000024bfbf0, libserver.so)
// callers: CDOTA_PlayerResource::GetEventLevelForPlayerID
uint32 __fastcall CDOTAEventDefinition::GetEventPointsLevel(
        const CDOTAEventDefinition *const this,
        uint32 unEventPoints)
{
  unsigned int v2; // ecx
  uint32 result; // eax

  v2 = *(this + 7);
  result = unEventPoints;
  if ( v2 != 0 )
    return unEventPoints / v2;
  return result;
}


// CDOTAEventDefinition::GetEventPointsToNextLevel  (line 1114, @0x00000000024bfc10, libserver.so)
uint32 __fastcall CDOTAEventDefinition::GetEventPointsToNextLevel(
        const CDOTAEventDefinition *const this,
        uint32 unEventPoints)
{
  unsigned int v2; // ecx
  uint32 result; // eax

  v2 = *(this + 7);
  result = 0;
  if ( v2 != 0 )
    return v2 - unEventPoints % v2;
  return result;
}


// CDOTAEventDefinition::IsValidFantasyDayTimestamp  (line 1181, @0x00000000024bfc30, libserver.so)
bool __fastcall CDOTAEventDefinition::IsValidFantasyDayTimestamp(
        const CDOTAEventDefinition *const this,
        RTime32 unTimestamp)
{
  char *v2; // rax
  char *v3; // rdi

  v2 = this + 1200;
  if ( *(this + 290) == unTimestamp )
    return 1;
  v3 = this + 1164;
  while ( v2 != v3 )
  {
    v3 += 4;
    if ( *(v3 - 1) == unTimestamp )
      return 1;
  }
  return 0;
}


// CDOTAEventDefinition::GetTimeUntilEventEnd  (line 1192, @0x00000000024bfc70, libserver.so)
RTime32 __fastcall CDOTAEventDefinition::GetTimeUntilEventEnd(const CDOTAEventDefinition *const this)
{
  return *(this + 8) - CRTime::sm_nTimeCur;
}


// CDOTAEventDefinition::GetPeriodIndex  (line 1203, @0x00000000024bfc90, libserver.so)
int __fastcall CDOTAEventDefinition::GetPeriodIndex(const CDOTAEventDefinition *const this, RTime32 unTime)
{
  unsigned int v2; // ecx
  int result; // eax

  v2 = *(this + 93);
  result = 0;
  if ( v2 != 0 )
  {
    if ( unTime == 0 )
      unTime = CRTime::sm_nTimeCur;
    return (unTime - *(this + 92)) / v2;
  }
  return result;
}


// CDOTAEventDefinition::GetPeriodicTime  (line 1222, @0x00000000024bfcc0, libserver.so)
RTime32 __fastcall CDOTAEventDefinition::GetPeriodicTime(const CDOTAEventDefinition *const this, RTime32 unTime)
{
  unsigned int v2; // ecx
  RTime32 result; // eax

  v2 = *(this + 93);
  if ( unTime == 0 )
    unTime = CRTime::sm_nTimeCur;
  result = 0;
  if ( v2 != 0 )
    return unTime - (unTime - *(this + 92)) % v2;
  return result;
}


// CDOTAEventDefinition::GetTimeUntilPeriodReset  (line 1243, @0x00000000024bfcf0, libserver.so)
RTime32 __fastcall CDOTAEventDefinition::GetTimeUntilPeriodReset(
        const CDOTAEventDefinition *const this,
        RTime32 unTime)
{
  if ( unTime == 0 )
    unTime = CRTime::sm_nTimeCur;
  return *(this + 93) - (unTime - *(this + 92)) % *(this + 93);
}


// CDOTAEventDefinition::GetPlayerCardDustCount  (line 1259, @0x00000000024bfd20, libserver.so)
uint32 __fastcall CDOTAEventDefinition::GetPlayerCardDustCount(const CDOTAEventDefinition *const this, int nCardTier)
{
  uint32 result; // eax

  result = 0;
  if ( nCardTier <= 3 )
    return *(this + nCardTier + 32);
  return result;
}


// CDOTAEventDefinition::GetEventGoalDefinition  (line 1268, @0x00000000024de760, libserver.so)  // inlines: CUtlString, Element, Find, Node_t, SDOTAEventGoalDefinition, operator[]
// calls: CUtlRBTree<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int, CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int>, int> >::Find
const SDOTAEventGoalDefinition *__fastcall CDOTAEventDefinition::GetEventGoalDefinition(
        const CDOTAEventDefinition *const this,
        EventGoalID_t unEventGoalID)
{
  int v3; // eax
  CUtlMap<short unsigned int,SDOTAEventGoalDefinition,int,CDefLess<short unsigned int> >::Node_t search; // [rsp+0h] [rbp-50h] BYREF

  search.key = unEventGoalID;
  memset(&search.elem.szGoalName, 0, 32);
  v3 = CUtlRBTree<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int,CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int>,int>>::Find(
         (this + 656),
         &search);
  if ( v3 == -1 )
    return 0;
  else
    return (*(this + 83) + 80LL * v3 + 24);
}


// CDOTAEventDefinition::GetEventGoalDefinitionByName  (line 1276, @0x00000000024bfd40, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild, _V_strcmp, operator[]
// calls: CUtlString::Get, strcmp
// callers: CDOTAEventDefinition::ParseEventGoalID
const SDOTAEventGoalDefinition *__fastcall CDOTAEventDefinition::GetEventGoalDefinitionByName(
        const CDOTAEventDefinition *const this,
        const char *pszName)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  const SDOTAEventGoalDefinition *v8; // r14
  const char *v9; // rax

  v4 = 0;
  v5 = 0;
  v6 = *(this + 168);
  if ( v6 <= 0 )
    return 0;
  while ( 1 )
  {
    if ( v5 < v6 )
    {
      if ( *(this + 173) < v5 )
        goto LABEL_7;
      v7 = *(this + 83) + v4;
      if ( *v7 == v5 )
        goto LABEL_7;
      v8 = (v7 + 24);
      v9 = CUtlString::Get((v7 + 32));
      if ( strcmp(v9, pszName) == 0 )
        return v8;
      v6 = *(this + 168);
    }
LABEL_7:
    v4 += 80;
    if ( ++v5 >= v6 )
      return 0;
  }
}


// CDOTAEventDefinition::ParseEventGoalID  (line 1289, @0x00000000024de6d0, libserver.so)  // inlines: CUtlString, Element, Find, GetEventGoalDefinition, Node_t, SDOTAEventGoalDefinition, operator[]
// calls: CDOTAEventDefinition::GetEventGoalDefinitionByName, V_atoi, CUtlRBTree<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int, CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::Node_t, int>, int> >::Find
EventGoalID_t __fastcall CDOTAEventDefinition::ParseEventGoalID(
        const CDOTAEventDefinition *const this,
        const char *pszName)
{
  const SDOTAEventGoalDefinition *EventGoalDefinitionByName; // rdx
  EventGoalID_t result; // ax
  __int64 v6; // rdx
  CUtlMap<short unsigned int,SDOTAEventGoalDefinition,int,CDefLess<short unsigned int> >::Node_t search; // [rsp+0h] [rbp-50h] BYREF

  EventGoalDefinitionByName = CDOTAEventDefinition::GetEventGoalDefinitionByName(this, pszName);
  if ( EventGoalDefinitionByName != 0 )
    return EventGoalDefinitionByName->unGoalID;
  memset(&search.elem.szGoalName, 0, 32);
  search.key = V_atoi(pszName);
  v6 = CUtlRBTree<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int,CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned short,SDOTAEventGoalDefinition,int,CDefLess<unsigned short>>::Node_t,int>,int>>::Find(
         (this + 656),
         &search);
  result = 0;
  if ( v6 != -1 )
  {
    EventGoalDefinitionByName = (*(this + 83) + 80 * v6 + 24);
    if ( EventGoalDefinitionByName != 0 )
      return EventGoalDefinitionByName->unGoalID;
  }
  return result;
}


// CDOTAEventDefinition::IsExpired  (line 1303, @0x00000000024bfdf0, libserver.so)  // inlines: RTime32TimeCur
bool __fastcall CDOTAEventDefinition::IsExpired(const CDOTAEventDefinition *const this)
{
  RTime32 v1; // edx
  bool result; // al

  v1 = *(this + 106);
  result = 1;
  if ( v1 != 0 )
    return v1 < CRTime::sm_nTimeCur;
  return result;
}


// CDOTAEventDefinition::IsExpiredAtTime  (line 1314, @0x00000000024bfe20, libserver.so)
bool __fastcall CDOTAEventDefinition::IsExpiredAtTime(const CDOTAEventDefinition *const this, uint32 unTime)
{
  return *(this + 106) < unTime;
}


// CDOTAEventDefinition::GetExpirationDate  (line 1319, @0x00000000024bfe30, libserver.so)
RTime32 __fastcall CDOTAEventDefinition::GetExpirationDate(const CDOTAEventDefinition *const this)
{
  return *(this + 106);
}


// CDOTAEventDefinition::GetEffectMaskForAction  (line 1326, @0x00000000024de600, libserver.so)  // inlines: end
// calls: CDOTAEventDefinition::GetActionDefinition
uint32 __fastcall CDOTAEventDefinition::GetEffectMaskForAction(
        const CDOTAEventDefinition *const this,
        EventActionID_t unActionID,
        uint32 unTimesGranted)
{
  const SDOTAEventActionDefinition *ActionDefinition; // rax
  SDOTAEventScoreRewardsDefinition *m_pMemory; // rdi
  SDOTAEventScoreRewardsDefinition *v7; // r10
  uint32 v8; // r9d
  uint32 unActionScore; // ecx
  uint32 unActionScoreRepeatInterval; // esi
  SDOTAEventRewardDefinition *v11; // rsi
  SDOTAEventRewardDefinition *i; // r8
  uint32 unQuantity; // eax

  if ( unTimesGranted == 0 )
    return 0;
  ActionDefinition = CDOTAEventDefinition::GetActionDefinition(this, unActionID);
  if ( ActionDefinition == 0 )
    return 0;
  m_pMemory = ActionDefinition->vecScoreRewards.m_Memory.m_pMemory;
  v7 = &m_pMemory[ActionDefinition->vecScoreRewards.m_Size];
  if ( m_pMemory == v7 )
    return 0;
  v8 = 0;
  do
  {
    unActionScore = m_pMemory->unActionScore;
    if ( unTimesGranted >= m_pMemory->unActionScore
      && (unTimesGranted <= unActionScore
       || (unActionScoreRepeatInterval = m_pMemory->unActionScoreRepeatInterval) != 0
       && (unTimesGranted - unActionScore) % unActionScoreRepeatInterval == 0) )
    {
      v11 = m_pMemory->vecRewards.m_Memory.m_pMemory;
      for ( i = &v11[m_pMemory->vecRewards.m_Size]; i != v11; v8 |= 1 << (unQuantity - 1) )
      {
        while ( v11->eEventAction != EEventAction::eEventAction_GrantEffect )
        {
          if ( i == ++v11 )
            goto LABEL_15;
        }
        unQuantity = v11->lootListGrant.unQuantity;
        ++v11;
      }
    }
LABEL_15:
    ++m_pMemory;
  }
  while ( v7 != m_pMemory );
  return v8;
}


// CDOTAEventDefinition::GetRewardsAtLevel_Legacy  (line 1363, @0x00000000024ecaf0, libserver.so)  // inlines: AddToTail, CopyConstruct<const CMsgDOTASeasonRewards_Reward*>, Element, FindFirst, GrowMemory, IsIdxValid, IsValidIndex, LeftChild, NextInorder, NextInorderSameKey, RightChild, end, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::NextInorder, CUtlMemory<const CMsgDOTASeasonRewards_Reward*, int>::Grow
void __fastcall CDOTAEventDefinition::GetRewardsAtLevel_Legacy(
        const CDOTAEventDefinition *const this,
        uint32 unLevel,
        CUtlVector<const CMsgDOTASeasonRewards_Reward*,CUtlMemory<const CMsgDOTASeasonRewards_Reward*,int> > *const vecLevelRewards)
{
  int v6; // esi
  __int64 v7; // rdi
  int Inorder; // eax
  int *v9; // rdx
  __int64 v10; // rdx
  _DWORD *v11; // rsi
  __int64 m_Size; // r15
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r12
  int v16; // edx
  const CMsgDOTASeasonRewards_Reward **v17; // rdx
  const CMsgDOTASeasonRewards_Reward **v18; // r12
  CUtlVectorBase<const CMsgDOTASeasonRewards_Reward*,CUtlMemory<const CMsgDOTASeasonRewards_Reward*,int> >::CAllocator *p_m_Memory; // r8
  const CMsgDOTASeasonRewards_Reward **i; // rcx
  const CMsgDOTASeasonRewards_Reward *v21; // r13
  uint32 v22; // eax
  __int64 v23; // r15
  int v24; // eax
  const CMsgDOTASeasonRewards_Reward **v25; // rax
  int iMap; // [rsp+Ch] [rbp-44h]
  __int64 v27; // [rsp+10h] [rbp-40h]
  const CMsgDOTASeasonRewards_Reward **v28; // [rsp+10h] [rbp-40h]
  CUtlRBTree<CUtlMap<unsigned int,const CMsgDOTASeasonRewards_Reward*,int,CDefLess<unsigned int> >::Node_t,int,CUtlMap<unsigned int,const CMsgDOTASeasonRewards_Reward*,int,CDefLess<unsigned int> >::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,const CMsgDOTASeasonRewards_Reward*,int,CDefLess<unsigned int> >::Node_t,int>,int> > *v29; // [rsp+18h] [rbp-38h]

  v6 = *(this + 126);
  if ( v6 == -1 )
    goto LABEL_20;
  v7 = *(this + 61);
  Inorder = -1;
  do
  {
    while ( 1 )
    {
      v9 = (v7 + 32LL * v6);
      if ( unLevel < v9[4] )
      {
        v6 = *v9;
        goto LABEL_7;
      }
      if ( unLevel <= v9[4] )
        break;
      v6 = v9[1];
      if ( v6 == -1 )
        goto LABEL_8;
    }
    Inorder = v6;
    v6 = *v9;
LABEL_7:
    ;
  }
  while ( v6 != -1 );
LABEL_8:
  if ( Inorder != -1 )
  {
    v10 = Inorder;
    do
    {
      m_Size = vecLevelRewards->m_Size;
      v13 = 32 * v10;
      v14 = v7 + v13;
      v15 = v13;
      v16 = vecLevelRewards->m_Size;
      if ( m_Size == vecLevelRewards->m_Memory.m_nAllocationCount )
      {
        iMap = Inorder;
        v27 = v14;
        CUtlMemory<CMsgDOTASeasonRewards_Reward const*,int>::Grow(&vecLevelRewards->m_Memory, 1);
        v16 = vecLevelRewards->m_Size;
        Inorder = iMap;
        v14 = v27;
      }
      vecLevelRewards->m_Size = v16 + 1;
      v17 = &vecLevelRewards->m_Memory.m_pMemory[m_Size];
      if ( v17 != 0 )
        *v17 = *(v14 + 24);
      Inorder = CUtlRBTree<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CMsgDOTASeasonRewards_Reward const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::NextInorder(
                  this + 10,
                  Inorder);
      v10 = Inorder;
      if ( Inorder < 0LL )
        break;
      if ( Inorder >= *(this + 124) )
        break;
      if ( Inorder > *(this + 129) )
        break;
      if ( Inorder == -1 )
        break;
      v7 = *(this + 61);
      v11 = (v7 + 32LL * Inorder);
      if ( Inorder == *v11 )
        break;
    }
    while ( v11[4] == *(v7 + v15 + 16) );
  }
LABEL_20:
  v18 = *(this + 67);
  p_m_Memory = &vecLevelRewards->m_Memory;
  for ( i = &v18[*(this + 132)]; i != v18; *v25 = v21 )
  {
    while ( 1 )
    {
      v21 = *v18;
      v22 = *(*v18 + 10);
      if ( v22 < unLevel && (unLevel - v22) % *(v21 + 11) == 0 )
      {
        v23 = vecLevelRewards->m_Size;
        v24 = vecLevelRewards->m_Size;
        if ( v23 == vecLevelRewards->m_Memory.m_nAllocationCount )
        {
          v28 = i;
          v29 = p_m_Memory;
          CUtlMemory<CMsgDOTASeasonRewards_Reward const*,int>::Grow(p_m_Memory, 1);
          v24 = vecLevelRewards->m_Size;
          i = v28;
          p_m_Memory = v29;
        }
        vecLevelRewards->m_Size = v24 + 1;
        v25 = &vecLevelRewards->m_Memory.m_pMemory[v23];
        if ( v25 != 0 )
          break;
      }
      if ( i == ++v18 )
        return;
    }
    ++v18;
  }
}


// CDOTAEventDefinition::GetMaxLevelWithNonRepeatingReward_Legacy  (line 1386, @0x00000000024bfe40, libserver.so)  // inlines: LastInorder, RightChild, operator[]
uint32 __fastcall CDOTAEventDefinition::GetMaxLevelWithNonRepeatingReward_Legacy(
        const CDOTAEventDefinition *const this)
{
  int v1; // edx
  uint32 result; // eax
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = *(this + 126);
  result = 0;
  if ( v1 != -1 )
  {
    v3 = v1;
    do
    {
      v4 = *(this + 61) + 32 * v3;
      v3 = *(v4 + 4);
    }
    while ( v3 != -1 );
    return *(*(v4 + 24) + 40LL);
  }
  return result;
}


// CDOTAEventDefinition::GetPredictions  (line 1395, @0x00000000024bfe90, libserver.so)
// calls: CDOTACompendiumSchema::Get, CDOTACompendiumSchema::GetCompendiumDefinition
const CMsgDOTASeasonPredictions *__fastcall CDOTAEventDefinition::GetPredictions(
        const CDOTAEventDefinition *const this)
{
  uint32 v1; // ebx
  CDOTACompendiumSchema_0 *v2; // rax
  const CDOTACompendiumDefinition *CompendiumDefinition; // rax

  v1 = *(this + 4);
  v2 = CDOTACompendiumSchema::Get();
  CompendiumDefinition = CDOTACompendiumSchema::GetCompendiumDefinition(v2, v1);
  if ( CompendiumDefinition != 0 )
    return (CompendiumDefinition + 8);
  else
    return 0;
}


// CDOTAEventDefinition::GetMysteryCategory  (line 1403, @0x00000000024bfed0, libserver.so)  // inlines: operator[]
const SDOTAEventMysteryCategory *__fastcall CDOTAEventDefinition::GetMysteryCategory(
        const CDOTAEventDefinition *const this,
        DOTAEventMysteryCategoryIndex_t nCategoryID)
{
  const SDOTAEventMysteryCategory *result; // rax

  result = 0;
  if ( nCategoryID >= 0 && nCategoryID <= *(this + 180) )
    return (*(this + 91) + 24LL * nCategoryID);
  return result;
}


// CDOTAEventDefinition::GetMysteryWheelVOGroup  (line 1411, @0x00000000024bff00, libserver.so)  // inlines: Find, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::Find
const DOTAEventMysteryVOGroup_t *__fastcall CDOTAEventDefinition::GetMysteryWheelVOGroup(
        const CDOTAEventDefinition *const this,
        const char *pName)
{
  UtlSymId_t id; // [rsp+0h] [rbp-20h]

  CUtlSymbolTable::Find((this + 792), pName);
  if ( id == 0xFFFF )
    return 0;
  else
    return (*(this + 97) + 24LL * id);
}


// CDOTAEventDefinition::GetWeekendTourneyFriendsLeaderboardNameForSkillLevel  (line 1420, @0x00000000024bff50, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::Format, CUtlString::Set, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%s%d"
CUtlString __fastcall CDOTAEventDefinition::GetWeekendTourneyFriendsLeaderboardNameForSkillLevel(
        CUtlString *a1,
        const CDOTAEventDefinition *const this,
        int nSkillLevel)
{
  _BYTE *v4; // rax
  const char *v6; // rdx
  CUtlString v8; // [rsp+0h] [rbp-20h] BYREF

  v4 = *(this + 36);
  if ( v4 != 0 && *v4 != 0 && (nSkillLevel - 3) <= 5 )
  {
    v6 = *(this + 36);
    v8.m_pString = 0;
    CUtlString::Format(&v8, "%s%d", v6, nSkillLevel);
    a1->m_pString = v8.m_pString;
    return a1;
  }
  else
  {
    a1->m_pString = 0;
    CUtlString::Set(a1, "");
    return a1;
  }
}


// CDOTAEventDefinition::GetMaxEventLevelWithNonRepeatingAction  (line 1431, @0x00000000024bfff0, libserver.so)  // inlines: LastInorder, RightChild, operator[]
uint32 __fastcall CDOTAEventDefinition::GetMaxEventLevelWithNonRepeatingAction(const CDOTAEventDefinition *const this)
{
  int v1; // edx
  uint32 result; // eax
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = *(this + 254);
  result = 0;
  if ( v1 != -1 )
  {
    v3 = v1;
    do
    {
      v4 = *(this + 125) + 32 * v3;
      v3 = *(v4 + 4);
    }
    while ( v3 != -1 );
    return *(*(v4 + 24) + 20LL);
  }
  return result;
}


// CDOTAEventDefinition::GetActionsAtEventLevel  (line 1440, @0x00000000024ec8f0, libserver.so)  // inlines: AddToTail, CopyConstruct<const SDOTAEventActionDefinition*>, Element, FindFirst, GrowMemory, IsIdxValid, IsValidIndex, LeftChild, NextInorder, NextInorderSameKey, RightChild, end, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::NextInorder, CUtlMemory<const SDOTAEventActionDefinition*, int>::Grow
void __fastcall CDOTAEventDefinition::GetActionsAtEventLevel(
        const CDOTAEventDefinition *const this,
        uint32 unLevel,
        CUtlVector<const SDOTAEventActionDefinition*,CUtlMemory<const SDOTAEventActionDefinition*,int> > *const vecActionDefs)
{
  int v6; // esi
  __int64 v7; // rdi
  int Inorder; // eax
  int *v9; // rdx
  __int64 v10; // rdx
  _DWORD *v11; // rsi
  __int64 m_Size; // r15
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r12
  int v16; // edx
  const SDOTAEventActionDefinition **v17; // rdx
  const SDOTAEventActionDefinition **v18; // r12
  CUtlVectorBase<const SDOTAEventActionDefinition*,CUtlMemory<const SDOTAEventActionDefinition*,int> >::CAllocator *p_m_Memory; // r8
  const SDOTAEventActionDefinition **i; // rcx
  const SDOTAEventActionDefinition *v21; // r13
  uint32 unAvailableAtEventLevel; // eax
  __int64 v23; // r15
  int v24; // eax
  const SDOTAEventActionDefinition **v25; // rax
  int iMap; // [rsp+Ch] [rbp-44h]
  __int64 v27; // [rsp+10h] [rbp-40h]
  const SDOTAEventActionDefinition **v28; // [rsp+10h] [rbp-40h]
  CUtlRBTree<CUtlMap<unsigned int,const SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t,int,CUtlMap<unsigned int,const SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,const SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t,int>,int> > *v29; // [rsp+18h] [rbp-38h]

  v6 = *(this + 254);
  if ( v6 == -1 )
    goto LABEL_20;
  v7 = *(this + 125);
  Inorder = -1;
  do
  {
    while ( 1 )
    {
      v9 = (v7 + 32LL * v6);
      if ( unLevel < v9[4] )
      {
        v6 = *v9;
        goto LABEL_7;
      }
      if ( unLevel <= v9[4] )
        break;
      v6 = v9[1];
      if ( v6 == -1 )
        goto LABEL_8;
    }
    Inorder = v6;
    v6 = *v9;
LABEL_7:
    ;
  }
  while ( v6 != -1 );
LABEL_8:
  if ( Inorder != -1 )
  {
    v10 = Inorder;
    do
    {
      m_Size = vecActionDefs->m_Size;
      v13 = 32 * v10;
      v14 = v7 + v13;
      v15 = v13;
      v16 = vecActionDefs->m_Size;
      if ( m_Size == vecActionDefs->m_Memory.m_nAllocationCount )
      {
        iMap = Inorder;
        v27 = v14;
        CUtlMemory<SDOTAEventActionDefinition const*,int>::Grow(&vecActionDefs->m_Memory, 1);
        v16 = vecActionDefs->m_Size;
        Inorder = iMap;
        v14 = v27;
      }
      vecActionDefs->m_Size = v16 + 1;
      v17 = &vecActionDefs->m_Memory.m_pMemory[m_Size];
      if ( v17 != 0 )
        *v17 = *(v14 + 24);
      Inorder = CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::NextInorder(
                  (this + 992),
                  Inorder);
      v10 = Inorder;
      if ( Inorder < 0LL )
        break;
      if ( Inorder >= *(this + 252) )
        break;
      if ( Inorder > *(this + 257) )
        break;
      if ( Inorder == -1 )
        break;
      v7 = *(this + 125);
      v11 = (v7 + 32LL * Inorder);
      if ( Inorder == *v11 )
        break;
    }
    while ( v11[4] == *(v7 + v15 + 16) );
  }
LABEL_20:
  v18 = *(this + 131);
  p_m_Memory = &vecActionDefs->m_Memory;
  for ( i = &v18[*(this + 260)]; i != v18; *v25 = v21 )
  {
    while ( 1 )
    {
      v21 = *v18;
      unAvailableAtEventLevel = (*v18)->unAvailableAtEventLevel;
      if ( unAvailableAtEventLevel < unLevel
        && (unLevel - unAvailableAtEventLevel) % v21->unAvailableAtEventLevelRepeatInterval == 0 )
      {
        v23 = vecActionDefs->m_Size;
        v24 = vecActionDefs->m_Size;
        if ( v23 == vecActionDefs->m_Memory.m_nAllocationCount )
        {
          v28 = i;
          v29 = p_m_Memory;
          CUtlMemory<SDOTAEventActionDefinition const*,int>::Grow(p_m_Memory, 1);
          v24 = vecActionDefs->m_Size;
          i = v28;
          p_m_Memory = v29;
        }
        vecActionDefs->m_Size = v24 + 1;
        v25 = &vecActionDefs->m_Memory.m_pMemory[v23];
        if ( v25 != 0 )
          break;
      }
      if ( i == ++v18 )
        return;
    }
    ++v18;
  }
}


// SDOTAEventActionDefinition::GetActionIDForEventLevel  (line 1463, @0x00000000024c0040, libserver.so)
EventActionID_t __fastcall SDOTAEventActionDefinition::GetActionIDForEventLevel(
        const SDOTAEventActionDefinition *const this,
        uint32 unLevel)
{
  uint32 unAvailableAtEventLevel; // ecx
  EventActionID_t v3; // r8d
  uint32 unAvailableAtEventLevelRepeatInterval; // r9d

  unAvailableAtEventLevel = this->unAvailableAtEventLevel;
  v3 = 0;
  if ( unAvailableAtEventLevel == 0 )
    return v3;
  if ( unAvailableAtEventLevel != unLevel )
  {
    unAvailableAtEventLevelRepeatInterval = this->unAvailableAtEventLevelRepeatInterval;
    if ( unAvailableAtEventLevelRepeatInterval != 0
      && unAvailableAtEventLevel <= unLevel
      && (unLevel - unAvailableAtEventLevel) % unAvailableAtEventLevelRepeatInterval == 0
      && this->unMinActionID + (unLevel - unAvailableAtEventLevel) / unAvailableAtEventLevelRepeatInterval <= this->unMaxActionID )
    {
      return this->unMinActionID + (unLevel - unAvailableAtEventLevel) / unAvailableAtEventLevelRepeatInterval;
    }
    return v3;
  }
  return this->unMinActionID;
}


// SDOTAEventActionDefinition::GetEventLevelForActionID  (line 1497, @0x00000000024c0090, libserver.so)
uint32 __fastcall SDOTAEventActionDefinition::GetEventLevelForActionID(
        const SDOTAEventActionDefinition *const this,
        EventActionID_t unActionID)
{
  uint32 unAvailableAtEventLevel; // edx
  uint32 result; // eax
  EventActionID_t unMinActionID; // ecx
  uint32 unAvailableAtEventLevelRepeatInterval; // r8d

  unAvailableAtEventLevel = this->unAvailableAtEventLevel;
  result = 0;
  if ( unAvailableAtEventLevel != 0 )
  {
    unMinActionID = this->unMinActionID;
    if ( this->unMinActionID == unActionID )
    {
      return this->unAvailableAtEventLevel;
    }
    else
    {
      unAvailableAtEventLevelRepeatInterval = this->unAvailableAtEventLevelRepeatInterval;
      if ( unAvailableAtEventLevelRepeatInterval != 0
        && unMinActionID <= unActionID
        && unActionID <= this->unMaxActionID )
      {
        return unAvailableAtEventLevelRepeatInterval * (unActionID - unMinActionID) + unAvailableAtEventLevel;
      }
    }
  }
  return result;
}


// CDOTAEventDefinition::GetNextLevelForItemDefReward  (line 1520, @0x00000000024de8d0, libserver.so)
// calls: CDOTAEventDefinition::GetNextNonRepeatingLevelForItemDefReward, CDOTAEventDefinition::GetNextRepeatingLevelForItemDefReward
uint32 __fastcall CDOTAEventDefinition::GetNextLevelForItemDefReward(
        const CDOTAEventDefinition *const this,
        item_definition_index_t unItemDef,
        uint32 unStartLevel)
{
  uint32 NextNonRepeatingLevelForItemDefReward; // r14d
  uint32 NextRepeatingLevelForItemDefReward; // eax
  uint32 v8; // edx

  NextNonRepeatingLevelForItemDefReward = CDOTAEventDefinition::GetNextNonRepeatingLevelForItemDefReward(
                                            this,
                                            unItemDef,
                                            unStartLevel);
  NextRepeatingLevelForItemDefReward = CDOTAEventDefinition::GetNextRepeatingLevelForItemDefReward(
                                         this,
                                         unItemDef,
                                         unStartLevel);
  v8 = NextRepeatingLevelForItemDefReward;
  if ( NextNonRepeatingLevelForItemDefReward != 0 )
  {
    v8 = NextNonRepeatingLevelForItemDefReward;
    if ( NextRepeatingLevelForItemDefReward != 0
      && NextRepeatingLevelForItemDefReward <= NextNonRepeatingLevelForItemDefReward )
    {
      return NextRepeatingLevelForItemDefReward;
    }
  }
  return v8;
}


// CDOTAEventDefinition::GetNextNonRepeatingLevelForItemDefReward  (line 1534, @0x00000000024de7d0, libserver.so)  // inlines: Element, FindClosest, LeftChild, NextInorder, RightChild, end, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int>, int> >::NextInorder
// callers: CDOTAEventDefinition::GetNextLevelForItemDefReward
uint32 __fastcall CDOTAEventDefinition::GetNextNonRepeatingLevelForItemDefReward(
        const CDOTAEventDefinition *const this,
        item_definition_index_t unItemDef,
        uint32 unStartLevel)
{
  const CUtlRBTree<CUtlMap<unsigned int,const SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t,int,CUtlMap<unsigned int,const SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,const SDOTAEventActionDefinition*,int,CDefLess<unsigned int> >::Node_t,int>,int> > *v3; // r13
  int Inorder; // eax
  __int64 v5; // r12
  int v6; // edi
  int *v7; // rcx
  int m_Data; // ebx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rdx
  _DWORD *v14; // rcx

  v3 = (this + 992);
  Inorder = *(this + 254);
  if ( Inorder == -1 )
    return 0;
  v5 = *(this + 125);
  v6 = -1;
  do
  {
    while ( 1 )
    {
      v7 = (v5 + 32LL * Inorder);
      if ( unStartLevel >= v7[4] )
        break;
      v6 = Inorder;
      Inorder = *v7;
      if ( *v7 == -1 )
        goto LABEL_17;
    }
    if ( unStartLevel <= v7[4] )
      goto LABEL_6;
    Inorder = v7[1];
  }
  while ( Inorder != -1 );
LABEL_17:
  Inorder = v6;
LABEL_6:
  if ( Inorder == -1 )
    return 0;
  m_Data = unItemDef.m_Data;
  while ( 1 )
  {
    v9 = *(v5 + 32LL * Inorder + 24);
    v10 = *(v9 + 48);
    v11 = 32LL * *(v9 + 40);
    v12 = v10 + v11;
    if ( v10 != v10 + v11 )
      break;
LABEL_14:
    Inorder = CUtlRBTree<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int,CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,SDOTAEventActionDefinition const*,int,CDefLess<unsigned int>>::Node_t,int>,int>>::NextInorder(
                v3,
                Inorder);
    if ( Inorder == -1 )
      return 0;
  }
  while ( 1 )
  {
    v13 = *(v10 + 16);
    v14 = &v13[8 * *(v10 + 8)];
    if ( v13 != v14 )
      break;
LABEL_13:
    v10 += 32;
    if ( v12 == v10 )
      goto LABEL_14;
  }
  while ( *v13 != 0 || v13[2] != m_Data )
  {
    v13 += 8;
    if ( v14 == v13 )
      goto LABEL_13;
  }
  return *(v9 + 20);
}


// CDOTAEventDefinition::GetNextRepeatingLevelForItemDefReward  (line 1560, @0x00000000024c00d0, libserver.so)  // inlines: end
// callers: CDOTAEventDefinition::GetNextLevelForItemDefReward
uint32 __fastcall CDOTAEventDefinition::GetNextRepeatingLevelForItemDefReward(
        const CDOTAEventDefinition *const this,
        item_definition_index_t unItemDef,
        uint32 unStartLevel)
{
  __int64 *v3; // r10
  __int64 *v4; // rbx
  int m_Data; // edi
  uint32 v6; // r11d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rcx
  _DWORD *v11; // rsi
  uint32 v13; // ecx

  v3 = *(this + 131);
  v4 = &v3[*(this + 260)];
  if ( v3 == v4 )
    return 0;
  m_Data = unItemDef.m_Data;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = *v3;
      v8 = *(*v3 + 48);
      v9 = v8 + 32LL * *(*v3 + 40);
      if ( v8 != v9 )
      {
        while ( 1 )
        {
          v10 = *(v8 + 16);
          v11 = &v10[8 * *(v8 + 8)];
          if ( v10 != v11 )
            break;
LABEL_8:
          v8 += 32;
          if ( v9 == v8 )
            goto LABEL_9;
        }
        while ( *v10 != 0 || v10[2] != m_Data )
        {
          v10 += 8;
          if ( v11 == v10 )
            goto LABEL_8;
        }
        v13 = *(v7 + 20);
        if ( v13 <= unStartLevel )
          v13 += *(v7 + 24) * ((unStartLevel + *(v7 + 24) - 1 - v13) / *(v7 + 24));
        if ( v13 < v6 || v6 == 0 )
          break;
      }
LABEL_9:
      if ( v4 == ++v3 )
        return v6;
    }
    ++v3;
    v6 = v13;
  }
  while ( v4 != v3 );
  return v6;
}


// CDOTAEventDefinition::IsItemDefAnEventReward  (line 1609, @0x00000000024c01b0, libserver.so)  // inlines: Element, Find, FindElement, LeftChild, RightChild, operator[]
bool __fastcall CDOTAEventDefinition::IsItemDefAnEventReward(
        const CDOTAEventDefinition *const this,
        item_definition_index_t unItemDef)
{
  __int64 v2; // rax
  int *v3; // rax

  v2 = *(this + 272);
  if ( v2 == -1 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = (*(this + 134) + 20 * v2);
      if ( *(v3 + 8) <= unItemDef.m_Data )
        break;
      v2 = *v3;
      if ( v2 == -1 )
        return 0;
    }
    if ( *(v3 + 8) >= unItemDef.m_Data )
      break;
    v2 = v3[1];
    if ( v2 == -1 )
      return 0;
  }
  return *(v3 + 18);
}


