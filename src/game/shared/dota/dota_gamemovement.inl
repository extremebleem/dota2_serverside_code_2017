
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAGameMovement::~CDOTAGameMovement  (line 17, @0x00000000025600b0, libserver.so)  // inlines: First, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, RemoveAll, SetLeftChild, SetRightChild, operator==, operator[], ~CGameMovement, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~IGameMovement
// calls: CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAGameMovement::~CDOTAGameMovement(CDOTAGameMovement *const this)
{
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v4; // rax
  UtlRBTreeNode_t<CUtlMap<CEntityIndex,float>::Node_t,short unsigned int> *v5; // r8
  bool v6; // zf

  index = this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index;
  this->_vptr_IGameMovement = off_404F270;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nAllocationCount;
    v4 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v4 < m_nAllocationCount && index >= v4 )
        {
          v5 = &this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory[v4];
          if ( v5->m_Left != v4 )
          {
            v5->m_Right = this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree;
            this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory[v4].m_Left = v4;
            index = this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index;
            this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree = v4;
          }
        }
        if ( v4 == index )
          break;
        m_nAllocationCount = this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v4 + 1) >= m_nAllocationCount )
          break;
        ++v4;
      }
      while ( v4 != 0xFFFF );
    }
    this->m_mapLastVelocitySpewTime.m_Tree.m_Root = -1;
    this->m_mapLastVelocitySpewTime.m_Tree.m_NumElements = 0;
  }
  v6 = (this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree = -1;
  if ( !v6 )
  {
    this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index = -1;
LABEL_13:
    this->_vptr_IGameMovement = off_404F1F0;
    return;
  }
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLastVelocitySpewTime.m_Tree.m_Elements);
  v6 = (this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index = -1;
  if ( !v6 )
    goto LABEL_13;
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLastVelocitySpewTime.m_Tree.m_Elements);
  this->_vptr_IGameMovement = off_404F1F0;
}


// CDOTAGameMovement::~CDOTAGameMovement  (line 17, @0x0000000002560200, libserver.so)  // inlines: First, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, RemoveAll, SetLeftChild, SetRightChild, operator==, operator[], ~CDOTAGameMovement, ~CGameMovement, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~IGameMovement
// calls: operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAGameMovement::~CDOTAGameMovement(CDOTAGameMovement *const this)
{
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v4; // rax
  UtlRBTreeNode_t<CUtlMap<CEntityIndex,float>::Node_t,short unsigned int> *v5; // r8
  bool v6; // zf

  index = this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index;
  this->_vptr_IGameMovement = off_404F270;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nAllocationCount;
    v4 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v4 < m_nAllocationCount && index >= v4 )
        {
          v5 = &this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory[v4];
          if ( v5->m_Left != v4 )
          {
            v5->m_Right = this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree;
            this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_pMemory[v4].m_Left = v4;
            index = this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index;
            this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree = v4;
          }
        }
        if ( v4 == index )
          break;
        m_nAllocationCount = this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v4 + 1) >= m_nAllocationCount )
          break;
        ++v4;
      }
      while ( v4 != 0xFFFF );
    }
    this->m_mapLastVelocitySpewTime.m_Tree.m_Root = -1;
    this->m_mapLastVelocitySpewTime.m_Tree.m_NumElements = 0;
  }
  v6 = (this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLastVelocitySpewTime.m_Tree.m_FirstFree = -1;
  if ( v6 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLastVelocitySpewTime.m_Tree.m_Elements);
    v6 = (this->m_mapLastVelocitySpewTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index = -1;
    if ( v6 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex,float,unsigned short,bool (*)(CEntityIndex const&,CEntityIndex const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLastVelocitySpewTime.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapLastVelocitySpewTime.m_Tree.m_LastAlloc.index = -1;
  }
  this->_vptr_IGameMovement = off_404F1F0;
  operator delete(this);
}


