
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract  (line 1148, @0x0000000002125d50, libserver.so)  // inlines: CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, Element, Find, FindInsertionPosition, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, Lock, Node_t, Purge, RemoveAll, RightChild, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), operator[], ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~Node_t
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), CUtlRBTree<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::Node_t, unsigned int, CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::Node_t, unsigned int>, unsigned int> >::NewNode, CUtlRBTree<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::Node_t, unsigned int, CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::Node_t, unsigned int>, unsigned int> >::LinkToParent, CEventDispatcher_Base::RegisterEventListener_Base, ThreadInterlockedExchange64, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Purge, CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: EventMapRegister
void __fastcall CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract(
        CEventDispatcher_Identified<CEventIDManager_Default> *const this,
        const CUtlAbstractDelegate *const delegate,
        unsigned int nDelegateParamCount,
        bool bDelegateReturnsVoid,
        CEventDispatcher_Identified<CEventIDManager_Default>::EventID_t EventID,
        int nPriority,
        const char *pszName)
{
  signed __int64 CurrentId; // rsi
  unsigned int m_Root; // r15d
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *m_pMemory; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  uint32 v13; // eax
  unsigned int v14; // r14d
  unsigned int m_Right; // eax
  bool v16; // r12
  bool v17; // zf
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *v18; // rax
  CEventDispatcher_Base::DelegateIterator_Base_t *i; // r15
  unsigned __int64 m_Left; // rdx
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // r14
  uint32 v24; // eax
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *v25; // rax
  unsigned int v26; // [rsp+10h] [rbp-70h]
  CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t pCopyFrom; // [rsp+30h] [rbp-50h] BYREF

  if ( EventID != 0 )
  {
    CurrentId = ThreadGetCurrentId(this);
    if ( CurrentId == this->m_Lock.m_ownerID || _InterlockedCompareExchange64(this, CurrentId, 0) == 0 )
    {
      ++this->m_Lock.m_depth;
    }
    else
    {
      _mm_pause();
      CThreadFastMutex::Lock(this, CurrentId, 0);
    }
    m_Root = this->m_EventListenerMap.m_Tree.m_Root;
    pCopyFrom.elem.m_Size = 0;
    pCopyFrom.elem.m_Memory.m_pMemory = 0;
    pCopyFrom.elem.m_Memory.m_nAllocationCount = 0;
    pCopyFrom.elem.m_Memory.m_nGrowSize = 0;
    pCopyFrom.key = EventID;
    if ( m_Root == -1 )
    {
      v11 = 0xFFFFFFFFLL;
      v13 = 0;
    }
    else
    {
      m_pMemory = this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = m_Root;
          v12 = m_Root;
          if ( !this->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(&pCopyFrom, &m_pMemory[v12].m_Data) )
            break;
          m_pMemory = this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_12;
        }
        if ( !this->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(
                &this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v12].m_Data,
                &pCopyFrom) )
          break;
        m_pMemory = this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v12].m_Right;
        if ( m_Root == -1 )
        {
LABEL_12:
          v11 = 0xFFFFFFFFLL;
          v13 = pCopyFrom.elem.m_Memory.m_nGrowSize & 0xC0000000;
          goto LABEL_13;
        }
      }
      v13 = pCopyFrom.elem.m_Memory.m_nGrowSize & 0xC0000000;
    }
LABEL_13:
    pCopyFrom.elem.m_Size = 0;
    if ( v13 != 0
      || (CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&pCopyFrom.elem.m_Memory),
          (pCopyFrom.elem.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
    {
      if ( this->m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount <= v11 )
        goto LABEL_15;
    }
    else
    {
      CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&pCopyFrom.elem.m_Memory);
      if ( this->m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount <= v11 )
        goto LABEL_15;
    }
    if ( this->m_EventListenerMap.m_Tree.m_LastAlloc.index >= m_Root && m_Root != -1 )
    {
      v25 = &this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[m_Root];
      if ( v25->m_Left != m_Root )
      {
LABEL_38:
        CEventDispatcher_Base::RegisterEventListener_Base(
          this,
          delegate,
          nDelegateParamCount,
          bDelegateReturnsVoid,
          &v25->m_Data.elem,
          nPriority,
          pszName);
        if ( --this->m_Lock.m_depth == 0 )
          ThreadInterlockedExchange64(this, 0);
        return;
      }
    }
LABEL_15:
    v14 = this->m_EventListenerMap.m_Tree.m_Root;
    pCopyFrom.elem.m_Size = 0;
    pCopyFrom.elem.m_Memory.m_pMemory = 0;
    pCopyFrom.elem.m_Memory.m_nAllocationCount = 0;
    pCopyFrom.elem.m_Memory.m_nGrowSize = 0;
    pCopyFrom.key = EventID;
    if ( v14 != -1 )
    {
      while ( 1 )
      {
        v17 = !this->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(
                 &pCopyFrom,
                 &this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v14].m_Data);
        v18 = this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
        if ( v17 )
        {
          m_Right = v18[v14].m_Right;
          v16 = 0;
          if ( m_Right == -1 )
            goto LABEL_21;
        }
        else
        {
          m_Right = v18[v14].m_Left;
          v16 = 1;
          if ( m_Right == -1 )
            goto LABEL_21;
        }
        v14 = m_Right;
      }
    }
    v16 = 0;
LABEL_21:
    v26 = CUtlRBTree<CUtlMap<ISchemaBinding const*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(ISchemaBinding const* const&,ISchemaBinding const* const&)>::Node_t,unsigned int,CUtlMap<ISchemaBinding const*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(ISchemaBinding const* const&,ISchemaBinding const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<ISchemaBinding const*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(ISchemaBinding const* const&,ISchemaBinding const* const&)>::Node_t,unsigned int>,unsigned int>>::NewNode(
            &this->m_EventListenerMap.m_Tree,
            &pCopyFrom);
    CUtlRBTree<CUtlMap<ISchemaBinding const*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(ISchemaBinding const* const&,ISchemaBinding const* const&)>::Node_t,unsigned int,CUtlMap<ISchemaBinding const*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(ISchemaBinding const* const&,ISchemaBinding const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<ISchemaBinding const*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(ISchemaBinding const* const&,ISchemaBinding const* const&)>::Node_t,unsigned int>,unsigned int>>::LinkToParent(
      &this->m_EventListenerMap.m_Tree,
      v26,
      v14,
      v16);
    pCopyFrom.elem.m_Size = 0;
    ++this->m_EventListenerMap.m_Tree.m_NumElements;
    if ( (pCopyFrom.elem.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&pCopyFrom.elem.m_Memory);
      if ( (pCopyFrom.elem.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&pCopyFrom.elem.m_Memory);
    }
    for ( i = this->m_pActiveIterators; i != 0; i = i->pNext )
    {
      if ( i->pListeners != 0 )
      {
        pCopyFrom.elem.m_Size = 0;
        m_Left = this->m_EventListenerMap.m_Tree.m_Root;
        pCopyFrom.elem.m_Memory.m_pMemory = 0;
        pCopyFrom.elem.m_Memory.m_nAllocationCount = 0;
        pCopyFrom.elem.m_Memory.m_nGrowSize = 0;
        pCopyFrom.key = i[1].pListeners;
        if ( m_Left == -1 )
        {
          v23 = 0xFFFFFFFFLL;
          v24 = 0;
        }
        else
        {
          v21 = this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
          while ( 1 )
          {
            while ( 1 )
            {
              v22 = m_Left;
              v23 = m_Left;
              if ( !this->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(&pCopyFrom, &v21[m_Left].m_Data) )
                break;
              v21 = this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
              m_Left = v21[v22].m_Left;
              if ( m_Left == -1 )
                goto LABEL_30;
            }
            if ( !this->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(
                    &this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v22].m_Data,
                    &pCopyFrom) )
              break;
            v21 = this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
            m_Left = v21[v22].m_Right;
            if ( m_Left == -1 )
            {
LABEL_30:
              v23 = 0xFFFFFFFFLL;
              v24 = pCopyFrom.elem.m_Memory.m_nGrowSize & 0xC0000000;
              goto LABEL_31;
            }
          }
          v24 = pCopyFrom.elem.m_Memory.m_nGrowSize & 0xC0000000;
        }
LABEL_31:
        pCopyFrom.elem.m_Size = 0;
        if ( v24 == 0 )
        {
          CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&pCopyFrom.elem.m_Memory);
          if ( (pCopyFrom.elem.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&pCopyFrom.elem.m_Memory);
        }
        i->pListeners = &this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v23].m_Data.elem;
      }
    }
    v25 = &this->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v26];
    goto LABEL_38;
  }
}


// CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >::IDLessFunc  (line 1274, @0x0000000001f72510, libserver.so)
bool __fastcall CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0>>::IDLessFunc(
        const CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::EventID_t *const l,
        const CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int,CEventSignature_Void_0> >::EventID_t *const r)
{
  return *l < *r;
}


