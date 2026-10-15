
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSoundscapeSystem::~CSoundscapeSystem  (line 26, @0x00000000023b2d00, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~SoundscapeInfo_t
// calls: CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int> >::RemoveAll, CStringRegistry::~CStringRegistry, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int>::Purge, CUtlMemory<short unsigned int, int>::Purge, CUtlMemory<CEnvSoundscape*, int>::Purge, CUtlMemory<clusterSoundscapeList_t, int>::Purge
void __fastcall CSoundscapeSystem::~CSoundscapeSystem(CSoundscapeSystem *const this)
{
  bool v2; // zf
  CUtlMemory<short unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_soundscapeIndexList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40AE570;
  this->m_soundscapeIndexList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_soundscapeIndexList.m_Memory;
    CUtlMemory<unsigned short,int>::Purge(&this->m_soundscapeIndexList.m_Memory);
    if ( (this->m_soundscapeIndexList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_soundscapesInCluster.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_soundscapesInCluster.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<clusterSoundscapeList_t,int>::Purge(&this->m_soundscapesInCluster.m_Memory);
    if ( (this->m_soundscapesInCluster.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<clusterSoundscapeList_t,int>::Purge(&this->m_soundscapesInCluster.m_Memory);
  }
  v2 = (this->m_soundscapeEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_soundscapeEntities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CEnvSoundscape *,int>::Purge(&this->m_soundscapeEntities.m_Memory);
    if ( (this->m_soundscapeEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEnvSoundscape *,int>::Purge(&this->m_soundscapeEntities.m_Memory);
  }
  CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_spawnGroupSoundscapes.m_Tree);
  v2 = (this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_spawnGroupSoundscapes.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_spawnGroupSoundscapes.m_Tree.m_Elements);
    v2 = (this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_spawnGroupSoundscapes.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_spawnGroupSoundscapes.m_Tree.m_Elements);
  }
  else
  {
    this->m_spawnGroupSoundscapes.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlVectorBase<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>>::RemoveAll(&this->m_globalSoundscapes.m_sounds);
  if ( (this->m_globalSoundscapes.m_sounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>::Purge(&this->m_globalSoundscapes.m_sounds.m_Memory);
    if ( (this->m_globalSoundscapes.m_sounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>::Purge(&this->m_globalSoundscapes.m_sounds.m_Memory);
  }
  CStringRegistry::~CStringRegistry(&this->m_globalSoundscapes.m_soundscapes);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CSoundscapeSystem::~CSoundscapeSystem  (line 26, @0x00000000023b2ea0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CSoundscapeSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~SoundscapeInfo_t
// calls: CUtlRBTree<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int, CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int> >::RemoveAll, CStringRegistry::~CStringRegistry, IGameSystem::~IGameSystem, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int>::Purge, CUtlMemory<short unsigned int, int>::Purge, CUtlMemory<CEnvSoundscape*, int>::Purge, CUtlMemory<clusterSoundscapeList_t, int>::Purge
void __fastcall CSoundscapeSystem::~CSoundscapeSystem(CSoundscapeSystem *const this)
{
  bool v2; // zf
  CUtlMemory<short unsigned int,int> *p_m_Memory; // r12

  v2 = (this->m_soundscapeIndexList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40AE570;
  this->m_soundscapeIndexList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_soundscapeIndexList.m_Memory;
    CUtlMemory<unsigned short,int>::Purge(&this->m_soundscapeIndexList.m_Memory);
    if ( (this->m_soundscapeIndexList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_soundscapesInCluster.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_soundscapesInCluster.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<clusterSoundscapeList_t,int>::Purge(&this->m_soundscapesInCluster.m_Memory);
    if ( (this->m_soundscapesInCluster.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<clusterSoundscapeList_t,int>::Purge(&this->m_soundscapesInCluster.m_Memory);
  }
  v2 = (this->m_soundscapeEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_soundscapeEntities.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CEnvSoundscape *,int>::Purge(&this->m_soundscapeEntities.m_Memory);
    if ( (this->m_soundscapeEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEnvSoundscape *,int>::Purge(&this->m_soundscapeEntities.m_Memory);
  }
  CUtlRBTree<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_spawnGroupSoundscapes.m_Tree);
  v2 = (this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_spawnGroupSoundscapes.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_spawnGroupSoundscapes.m_Tree.m_Elements);
    v2 = (this->m_spawnGroupSoundscapes.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_spawnGroupSoundscapes.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CSoundscapeSystem::SoundscapeInfo_t *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_spawnGroupSoundscapes.m_Tree.m_Elements);
  }
  else
  {
    this->m_spawnGroupSoundscapes.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlVectorBase<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>>::RemoveAll(&this->m_globalSoundscapes.m_sounds);
  if ( (this->m_globalSoundscapes.m_sounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>::Purge(&this->m_globalSoundscapes.m_sounds.m_Memory);
    if ( (this->m_globalSoundscapes.m_sounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>>,int>::Purge(&this->m_globalSoundscapes.m_sounds.m_Memory);
  }
  CStringRegistry::~CStringRegistry(&this->m_globalSoundscapes.m_soundscapes);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CSoundscapeSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 28, @0x00000000023a9590, libserver.so)
void __fastcall CSoundscapeSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CSoundscapeSystem *const this)
{
  ;
}


// CSoundscapeSystem::DoesGameSystemReallocate  (line 28, @0x00000000023a95a0, libserver.so)
// globals: CSoundscapeSystem::sm_Factory
bool __fastcall CSoundscapeSystem::DoesGameSystemReallocate(const CSoundscapeSystem *const this)
{
  return (*(CSoundscapeSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CSoundscapeSystem::sm_Factory);
}


// CSoundscapeSystem::SetGameSystemGlobalPtrs  (line 28, @0x00000000023a95c0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSoundscapeSystem::sm_Factory
void __fastcall CSoundscapeSystem::SetGameSystemGlobalPtrs(CSoundscapeSystem *const this, void *pValue)
{
  if ( CSoundscapeSystem::sm_Factory != 0 )
    (*(CSoundscapeSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CSoundscapeSystem::sm_Factory, pValue);
}


