
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysicsGameSystem::~CPhysicsGameSystem  (line 82, @0x0000000001f964d0, libserver.so)  // inlines: Destruct<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t>, First, IsIdxValid, IsValidIndex, LeftChild, MarkInvalid, Next, Purge, RemoveAll, SetLeftChild, SetRightChild, operator==, operator[], ~CStrongHandle, ~CUtlHashtable, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~Node_t, ~PhysicsWorld_t
// calls: CUtlVectorBase<physicssound::breaksound_t, CUtlMemory<physicssound::breaksound_t, int> >::RemoveAll, CUtlVectorBase<physicssound::impactsound_t, CUtlMemory<physicssound::impactsound_t, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int>::Purge, CUtlVectorBase<CGameSceneNodeHandle, CUtlMemory<CGameSceneNodeHandle, int> >::RemoveAll, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<physicssound::impactsound_t, int>::Purge, CUtlMemory<physicssound::breaksound_t, int>::Purge, CUtlMemory<physicssound::friction_t, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, short unsigned int>::Purge (14 total)
void __fastcall CPhysicsGameSystem::~CPhysicsGameSystem(CPhysicsGameSystem *const this)
{
  bool v2; // zf
  int m_nUsed; // ecx
  int v4; // edx
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v5; // rax
  unsigned __int16 index; // di
  __int64 m_nAllocationCount; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *v10; // rsi
  CUtlVectorBase<physicssound::friction_t,CUtlMemory<physicssound::friction_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_scrapeSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCDAD0;
  this->_vptr_IPhysicsWorldEventListener = &off_3FCDC28;
  this->m_scrapeSounds.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_scrapeSounds.m_Memory;
    CUtlMemory<physicssound::friction_t,int>::Purge(&this->m_scrapeSounds.m_Memory);
    if ( (this->m_scrapeSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<physicssound::friction_t,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<physicssound::breaksound_t,CUtlMemory<physicssound::breaksound_t,int>>::RemoveAll(&this->m_breakSounds);
  if ( (this->m_breakSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<physicssound::breaksound_t,int>::Purge(&this->m_breakSounds.m_Memory);
    if ( (this->m_breakSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<physicssound::breaksound_t,int>::Purge(&this->m_breakSounds.m_Memory);
  }
  CUtlVectorBase<physicssound::impactsound_t,CUtlMemory<physicssound::impactsound_t,int>>::RemoveAll(&this->m_impactSounds);
  if ( (this->m_impactSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<physicssound::impactsound_t,int>::Purge(&this->m_impactSounds.m_Memory);
    if ( (this->m_impactSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<physicssound::impactsound_t,int>::Purge(&this->m_impactSounds.m_Memory);
  }
  v2 = (this->m_hierarchyJointsToUpdate.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hierarchyJointsToUpdate.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CSkeletonInstance *,int>::Purge(&this->m_hierarchyJointsToUpdate.m_Memory);
    if ( (this->m_hierarchyJointsToUpdate.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSkeletonInstance *,int>::Purge(&this->m_hierarchyJointsToUpdate.m_Memory);
  }
  v2 = (this->m_kinematicsToUpdate.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_kinematicsToUpdate.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CSkeletonInstance *,int>::Purge(&this->m_kinematicsToUpdate.m_Memory);
    if ( (this->m_kinematicsToUpdate.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSkeletonInstance *,int>::Purge(&this->m_kinematicsToUpdate.m_Memory);
  }
  m_nUsed = this->m_HierarchyConstraints.m_nUsed;
  if ( m_nUsed != 0 )
  {
    v4 = this->m_HierarchyConstraints.m_table.m_nAllocationCount - 1;
    if ( v4 >= 0 )
    {
      v5 = &this->m_HierarchyConstraints.m_table.m_pMemory[v4];
      do
      {
        if ( v5->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v5->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v4;
        --v5;
      }
      while ( v4 != -1 );
    }
    this->m_HierarchyConstraints.m_nUsed = 0;
  }
  if ( (this->m_HierarchyConstraints.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>::Purge(&this->m_HierarchyConstraints.m_table);
  CUtlVectorBase<CGameSceneNodeHandle,CUtlMemory<CGameSceneNodeHandle,int>>::RemoveAll(&this->m_dirtyScales);
  if ( (this->m_dirtyScales.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CGameSceneNodeHandle,int>::Purge(&this->m_dirtyScales.m_Memory);
    if ( (this->m_dirtyScales.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CGameSceneNodeHandle,int>::Purge(&this->m_dirtyScales.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hMatCollisionGeometry);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hMatDefault);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hMatHiddenWireframe);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hMatWireframe);
  index = this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
    v8 = 0;
    v9 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v9 < m_nAllocationCount && v9 <= index )
        {
          v10 = &this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v8];
          if ( v9 != v10->m_Left )
          {
            v10->m_Data.elem._vptr_PhysicsWorld_t = off_3FCADD0;
            this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v8].m_Right = this->m_mapLevelWorlds.m_Tree.m_FirstFree;
            this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v8].m_Left = v9;
            index = this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index;
            this->m_mapLevelWorlds.m_Tree.m_FirstFree = v9;
          }
        }
        if ( v9 == index )
          break;
        m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v9 + 1) >= m_nAllocationCount )
          break;
        ++v9;
        ++v8;
      }
      while ( v9 != 0xFFFF );
    }
    this->m_mapLevelWorlds.m_Tree.m_Root = -1;
    this->m_mapLevelWorlds.m_Tree.m_NumElements = 0;
  }
  v2 = (this->m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLevelWorlds.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLevelWorlds.m_Tree.m_Elements);
    v2 = (this->m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLevelWorlds.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_PhysicsSpawnGroups.m_Tree);
  v2 = (this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_PhysicsSpawnGroups.m_Tree.m_FirstFree = -1;
  if ( !v2 )
  {
    this->m_PhysicsSpawnGroups.m_Tree.m_LastAlloc.index = -1;
LABEL_30:
    IGameSystem::~IGameSystem(this);
    return;
  }
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PhysicsSpawnGroups.m_Tree.m_Elements);
  v2 = (this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_PhysicsSpawnGroups.m_Tree.m_LastAlloc.index = -1;
  if ( !v2 )
    goto LABEL_30;
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PhysicsSpawnGroups.m_Tree.m_Elements);
  IGameSystem::~IGameSystem(this);
}


// CPhysicsGameSystem::~CPhysicsGameSystem  (line 82, @0x0000000001f968b0, libserver.so)  // inlines: Destruct<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t>, First, IsIdxValid, IsValidIndex, LeftChild, MarkInvalid, Next, Purge, RemoveAll, SetLeftChild, SetRightChild, operator==, operator[], ~CPhysicsGameSystem, ~CStrongHandle, ~CUtlHashtable, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~Node_t, ~PhysicsWorld_t
// calls: CUtlVectorBase<physicssound::breaksound_t, CUtlMemory<physicssound::breaksound_t, int> >::RemoveAll, CUtlVectorBase<physicssound::impactsound_t, CUtlMemory<physicssound::impactsound_t, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int>::Purge, CUtlVectorBase<CGameSceneNodeHandle, CUtlMemory<CGameSceneNodeHandle, int> >::RemoveAll, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<physicssound::impactsound_t, int>::Purge, CUtlMemory<physicssound::breaksound_t, int>::Purge, CUtlMemory<physicssound::friction_t, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int>::Purge (15 total)
void __fastcall CPhysicsGameSystem::~CPhysicsGameSystem(CPhysicsGameSystem *const this)
{
  bool v2; // zf
  int m_nUsed; // ecx
  int v4; // edx
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v5; // rax
  unsigned __int16 index; // di
  __int64 m_nAllocationCount; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *v10; // rsi
  CUtlVectorBase<physicssound::friction_t,CUtlMemory<physicssound::friction_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_scrapeSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCDAD0;
  this->_vptr_IPhysicsWorldEventListener = &off_3FCDC28;
  this->m_scrapeSounds.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_scrapeSounds.m_Memory;
    CUtlMemory<physicssound::friction_t,int>::Purge(&this->m_scrapeSounds.m_Memory);
    if ( (this->m_scrapeSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<physicssound::friction_t,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<physicssound::breaksound_t,CUtlMemory<physicssound::breaksound_t,int>>::RemoveAll(&this->m_breakSounds);
  if ( (this->m_breakSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<physicssound::breaksound_t,int>::Purge(&this->m_breakSounds.m_Memory);
    if ( (this->m_breakSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<physicssound::breaksound_t,int>::Purge(&this->m_breakSounds.m_Memory);
  }
  CUtlVectorBase<physicssound::impactsound_t,CUtlMemory<physicssound::impactsound_t,int>>::RemoveAll(&this->m_impactSounds);
  if ( (this->m_impactSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<physicssound::impactsound_t,int>::Purge(&this->m_impactSounds.m_Memory);
    if ( (this->m_impactSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<physicssound::impactsound_t,int>::Purge(&this->m_impactSounds.m_Memory);
  }
  v2 = (this->m_hierarchyJointsToUpdate.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hierarchyJointsToUpdate.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CSkeletonInstance *,int>::Purge(&this->m_hierarchyJointsToUpdate.m_Memory);
    if ( (this->m_hierarchyJointsToUpdate.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSkeletonInstance *,int>::Purge(&this->m_hierarchyJointsToUpdate.m_Memory);
  }
  v2 = (this->m_kinematicsToUpdate.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_kinematicsToUpdate.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CSkeletonInstance *,int>::Purge(&this->m_kinematicsToUpdate.m_Memory);
    if ( (this->m_kinematicsToUpdate.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSkeletonInstance *,int>::Purge(&this->m_kinematicsToUpdate.m_Memory);
  }
  m_nUsed = this->m_HierarchyConstraints.m_nUsed;
  if ( m_nUsed != 0 )
  {
    v4 = this->m_HierarchyConstraints.m_table.m_nAllocationCount - 1;
    if ( v4 >= 0 )
    {
      v5 = &this->m_HierarchyConstraints.m_table.m_pMemory[v4];
      do
      {
        if ( v5->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v5->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v4;
        --v5;
      }
      while ( v4 != -1 );
    }
    this->m_HierarchyConstraints.m_nUsed = 0;
  }
  if ( (this->m_HierarchyConstraints.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>::Purge(&this->m_HierarchyConstraints.m_table);
  CUtlVectorBase<CGameSceneNodeHandle,CUtlMemory<CGameSceneNodeHandle,int>>::RemoveAll(&this->m_dirtyScales);
  if ( (this->m_dirtyScales.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CGameSceneNodeHandle,int>::Purge(&this->m_dirtyScales.m_Memory);
    if ( (this->m_dirtyScales.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CGameSceneNodeHandle,int>::Purge(&this->m_dirtyScales.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hMatCollisionGeometry);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hMatDefault);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hMatHiddenWireframe);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hMatWireframe);
  index = this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
    v8 = 0;
    v9 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v9 < m_nAllocationCount && v9 <= index )
        {
          v10 = &this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v8];
          if ( v9 != v10->m_Left )
          {
            v10->m_Data.elem._vptr_PhysicsWorld_t = off_3FCADD0;
            this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v8].m_Right = this->m_mapLevelWorlds.m_Tree.m_FirstFree;
            this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v8].m_Left = v9;
            index = this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index;
            this->m_mapLevelWorlds.m_Tree.m_FirstFree = v9;
          }
        }
        if ( v9 == index )
          break;
        m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v9 + 1) >= m_nAllocationCount )
          break;
        ++v9;
        ++v8;
      }
      while ( v9 != 0xFFFF );
    }
    this->m_mapLevelWorlds.m_Tree.m_Root = -1;
    this->m_mapLevelWorlds.m_Tree.m_NumElements = 0;
  }
  v2 = (this->m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapLevelWorlds.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLevelWorlds.m_Tree.m_Elements);
    v2 = (this->m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLevelWorlds.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_PhysicsSpawnGroups.m_Tree);
  v2 = (this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_PhysicsSpawnGroups.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PhysicsSpawnGroups.m_Tree.m_Elements);
    v2 = (this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_PhysicsSpawnGroups.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PhysicsSpawnGroups.m_Tree.m_Elements);
  }
  else
  {
    this->m_PhysicsSpawnGroups.m_Tree.m_LastAlloc.index = -1;
  }
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CPhysicsGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 84, @0x0000000001f71b10, libserver.so)
void __fastcall CPhysicsGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CPhysicsGameSystem *const this)
{
  ;
}


// CPhysicsGameSystem::DoesGameSystemReallocate  (line 84, @0x0000000001f71b20, libserver.so)
// globals: CPhysicsGameSystem::sm_Factory
bool __fastcall CPhysicsGameSystem::DoesGameSystemReallocate(const CPhysicsGameSystem *const this)
{
  return (*(CPhysicsGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CPhysicsGameSystem::sm_Factory);
}


// CPhysicsGameSystem::SetGameSystemGlobalPtrs  (line 84, @0x0000000001f71b40, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CPhysicsGameSystem::sm_Factory
void __fastcall CPhysicsGameSystem::SetGameSystemGlobalPtrs(CPhysicsGameSystem *const this, void *pValue)
{
  if ( CPhysicsGameSystem::sm_Factory != 0 )
    (*(CPhysicsGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CPhysicsGameSystem::sm_Factory, pValue);
}


// CPhysicsGameSystem::PhysicsWorld_t::~PhysicsWorld_t  (line 244, @0x0000000001f71b70, libserver.so)
void __fastcall CPhysicsGameSystem::PhysicsWorld_t::~PhysicsWorld_t(CPhysicsGameSystem::PhysicsWorld_t *const this)
{
  this->_vptr_PhysicsWorld_t = off_3FCADD0;
}


// CPhysicsGameSystem::PhysicsWorld_t::~PhysicsWorld_t  (line 244, @0x0000000001f73bf0, libserver.so)  // inlines: ~PhysicsWorld_t
// calls: operator delete
void __fastcall CPhysicsGameSystem::PhysicsWorld_t::~PhysicsWorld_t(CPhysicsGameSystem::PhysicsWorld_t *const this)
{
  this->_vptr_PhysicsWorld_t = off_3FCADD0;
  operator delete(this);
}


