
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InvalidEconItemStringIndex  (line 30, @0x00000000024bf920, libserver.so)
DotaEconItemIndex_t __cdecl InvalidEconItemStringIndex()
{
  return -1;
}


// CreateEconItemStringTable  (line 39, @0x00000000024e9e10, libserver.so)  // inlines: FirstInorder, LeftChild, PurgeAndDeleteElements, operator[]
// calls: CUtlRBTree<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int, CUtlMap<itemid_t, CEconItem*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int, CUtlMap<itemid_t, CEconItem*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int> >::Purge
// globals: g_EconItemMap
void __fastcall CreateEconItemStringTable(const char *pTableName, INetworkStringTable *pTable)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  unsigned __int16 m_Left; // si
  CUtlMap<itemid_t,CEconItem*,short unsigned int,bool (*)(const itemid_t&,const itemid_t&)>::ElemType_t elem; // rdi

  m_Root = g_EconItemMap.m_Tree.m_Root;
  if ( g_EconItemMap.m_Tree.m_Root != 0xFFFF )
  {
    m_pMemory = g_EconItemMap.m_Tree.m_Elements.m_pMemory;
    v4 = g_EconItemMap.m_Tree.m_Root;
    m_Left = g_EconItemMap.m_Tree.m_Elements.m_pMemory[g_EconItemMap.m_Tree.m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( g_EconItemMap.m_Tree.m_Elements.m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = g_EconItemMap.m_Tree.m_Elements.m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      elem = m_pMemory[v4].m_Data.elem;
      if ( elem != 0 )
        (*(elem->_vptr_CSharedObject + 1))(elem);
      m_Root = CUtlRBTree<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short,CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &g_EconItemMap.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = g_EconItemMap.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short,CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&g_EconItemMap.m_Tree);
}


// GetEconItemFromStringTable  (line 54, @0x00000000024de540, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int, CUtlMap<itemid_t, CEconItem*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CPlayerInventory::GetSOCDataForItem, CEconItemView::GetSOCData
// globals: g_EconItemMap
CEconItem *__fastcall GetEconItemFromStringTable(itemid_t itemID)
{
  unsigned __int16 v1; // ax
  CUtlMap<itemid_t,CEconItem*,short unsigned int,bool (*)(const itemid_t&,const itemid_t&)>::Node_t search; // [rsp+0h] [rbp-10h] BYREF

  search.key = itemID;
  v1 = CUtlRBTree<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short,CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &g_EconItemMap.m_Tree,
         &search);
  if ( v1 == 0xFFFF )
    return 0;
  else
    return g_EconItemMap.m_Tree.m_Elements.m_pMemory[v1].m_Data.elem;
}


// OnStringTableEconItemsChanged  (line 137, @0x00000000024b4280, libserver.so)
void __fastcall OnStringTableEconItemsChanged(
        void *object,
        INetworkStringTable *stringTable,
        int stringNumber,
        const char *newString,
        const void *newData)
{
  ;
}


// AddEconItemToStringTable  (line 141, @0x0000000002542090, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: CSOEconItem::CSOEconItem, CEconItem::SerializeToProtoBufItem, CSOEconItem::ByteSize, CSOEconItem::SerializeWithCachedSizesToArray, V_snprintf, operator new, CEconItem::CEconItem, CUtlRBTree<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int, CUtlMap<itemid_t, CEconItem*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int> >::Find, CSOEconItem::~CSOEconItem, Warning, CUtlRBTree<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int, CUtlMap<itemid_t, CEconItem*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int, CUtlMap<itemid_t, CEconItem*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent (15 total)
// callers: CDOTA_BaseNPC::OnSpawnWearable, CDOTAGamerules::OnGCObjectUpdated, CDOTAGamerules::FinalizeHeroSelections, CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots
// strings: "Unexpected issue serializing buff!\n"
// globals: g_pStringTableEconItems, g_EconItemMap
DotaEconItemIndex_t __fastcall AddEconItemToStringTable(const CEconItem *pItem)
{
  unsigned int v2; // r14d
  void *v3; // rsp
  __int64 v4; // rax
  DotaEconItemIndex_t v5; // r12d
  CEconItem *v6; // r14
  unsigned __int16 v7; // ax
  __int64 v8; // r13
  UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem*>::Node_t,short unsigned int> *v9; // rax
  CUtlMap<itemid_t,CEconItem*,short unsigned int,bool (*)(const itemid_t&,const itemid_t&)>::ElemType_t elem; // rdi
  uint64 v12; // rax
  unsigned __int16 m_Root; // r15
  unsigned __int16 m_Left; // ax
  bool v15; // r13
  unsigned __int16 v16; // ax
  CUtlMap<itemid_t,CEconItem*,short unsigned int,bool (*)(const itemid_t&,const itemid_t&)>::Node_t search; // [rsp+10h] [rbp-110h] BYREF
  CUtlMap<itemid_t,CEconItem*,short unsigned int,bool (*)(const itemid_t&,const itemid_t&)>::Node_t v18; // [rsp+20h] [rbp-100h] BYREF
  _BYTE v19[144]; // [rsp+30h] [rbp-F0h] BYREF
  char idString[40]; // [rsp+C0h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+E8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( pItem == 0 )
    return -1;
  CSOEconItem::CSOEconItem(v19);
  CEconItem::SerializeToProtoBufItem(pItem, v19);
  v2 = CSOEconItem::ByteSize(v19);
  v3 = alloca(((v2 + 31) & 0xFFFFFFF0) + 16LL);
  if ( CSOEconItem::SerializeWithCachedSizesToArray(v19, (&search & 0xFFFFFFFFFFFFFFEFLL)) == 0 )
    Warning("Unexpected issue serializing buff!\n");
  v4 = (*(pItem->_vptr_CSharedObject + 12))(pItem);
  V_snprintf(idString, 32, "%llu", v4);
  v5 = (*(g_pStringTableEconItems->_vptr_INetworkStringTable + 8))(
         g_pStringTableEconItems,
         1,
         idString,
         v2,
         &search & 0xFFFFFFFFFFFFFFEFLL);
  if ( v5 != -1 )
  {
    v6 = operator new(0x50u);
    CEconItem::CEconItem(v6, pItem);
    search.key.m_Data = (*(pItem->_vptr_CSharedObject + 12))(pItem);
    v7 = CUtlRBTree<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short,CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &g_EconItemMap.m_Tree,
           &search);
    if ( v7 == 0xFFFF )
    {
      v12 = (*(pItem->_vptr_CSharedObject + 12))(pItem);
      m_Root = g_EconItemMap.m_Tree.m_Root;
      v18.key.m_Data = v12;
      v18.elem = v6;
      if ( g_EconItemMap.m_Tree.m_Root == 0xFFFF )
      {
        v15 = 0;
      }
      else
      {
        while ( 1 )
        {
          if ( g_EconItemMap.m_Tree.m_LessFunc.m_LessFunc(
                 &v18.key,
                 &g_EconItemMap.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.key) )
          {
            m_Left = g_EconItemMap.m_Tree.m_Elements.m_pMemory[m_Root].m_Left;
            v15 = 1;
          }
          else
          {
            m_Left = g_EconItemMap.m_Tree.m_Elements.m_pMemory[m_Root].m_Right;
            v15 = 0;
          }
          if ( m_Left == 0xFFFF )
            break;
          m_Root = m_Left;
        }
      }
      v16 = CUtlRBTree<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short,CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &g_EconItemMap.m_Tree,
              &v18);
      CUtlRBTree<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short,CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &g_EconItemMap.m_Tree,
        v16,
        m_Root,
        v15);
      ++g_EconItemMap.m_Tree.m_NumElements;
    }
    else
    {
      v8 = v7;
      v9 = &g_EconItemMap.m_Tree.m_Elements.m_pMemory[v8];
      elem = g_EconItemMap.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem;
      if ( elem != 0 )
      {
        (*(elem->_vptr_CSharedObject + 1))(elem);
        v9 = &g_EconItemMap.m_Tree.m_Elements.m_pMemory[v8];
      }
      v9->m_Data.elem = v6;
    }
  }
  CSOEconItem::~CSOEconItem(v19);
  return v5;
}


// sv_dota_dump_econ_item_stringtable  (line 182, @0x00000000025427a0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSOEconItemAttribute>::TypeHandler>, attribute
// calls: Msg, CSOEconItem::~CSOEconItem, CSOEconItem::CSOEconItem, google::protobuf::MessageLite::ParseFromArray(void const*,int), _Unwind_Resume
// strings: "index,length,id,name,desc\n", "%d, Error parsing Econ Item!\n", "%d,%d, (%s), id:%llu\n", "style: %i\n", "attribute %d: %d, %d\n", "Item Def - %s\n"
// globals: g_pStringTableEconItems
void __fastcall sv_dota_dump_econ_item_stringtable(const CCommandContext *const ctx, const CCommand *const args)
{
  unsigned int v2; // r13d
  unsigned __int64 v3; // xmm0_8
  const void *v4; // rbx
  const char *v5; // rax
  const char *v6; // r12
  __int64 v7; // r12
  int i; // ebx
  int v9; // [rsp-8h] [rbp-CCh] BYREF
  _BYTE v10[4]; // [rsp-4h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+14h] [rbp-B0h]
  __int64 v12; // [rsp+3Ch] [rbp-88h]
  int v13; // [rsp+44h] [rbp-80h]
  int v14; // [rsp+60h] [rbp-64h]

  if ( g_pStringTableEconItems != 0 )
  {
    v2 = 0;
    v3 = Msg("index,length,id,name,desc\n", args).m128_u64[0];
    while ( v2 < (*(g_pStringTableEconItems->_vptr_INetworkStringTable + 4))(g_pStringTableEconItems, *&v3) )
    {
      v9 = 0;
      v4 = (*(g_pStringTableEconItems->_vptr_INetworkStringTable + 11))(g_pStringTableEconItems, v2, &v9);
      v5 = (*(g_pStringTableEconItems->_vptr_INetworkStringTable + 9))(g_pStringTableEconItems, v2, 0);
      v6 = v5;
      if ( v4 != 0 )
      {
        CSOEconItem::CSOEconItem(v10);
        if ( google::protobuf::MessageLite::ParseFromArray(v10, v4, v9) != 0 )
        {
          Msg("%d,%d, (%s), id:%llu\n", v2, v9, v6, v11);
          Msg("style: %i\n", v14);
          v7 = 0;
          for ( i = 0; i < v13; v7 += 8 )
            Msg("attribute %d: %d, %d\n", i++, *(*(v12 + v7) + 24LL), *(*(v12 + v7) + 28LL));
        }
        else
        {
          Msg("%d, Error parsing Econ Item!\n", v2);
        }
        CSOEconItem::~CSOEconItem(v10);
      }
      else
      {
        v3 = Msg("Item Def - %s\n", v5).m128_u64[0];
      }
      ++v2;
    }
  }
}


