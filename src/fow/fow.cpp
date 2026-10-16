
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_fow.cpp  (line 0, @0x0000000001a6e900, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: ConVar::ConVar, __cxa_atexit
// strings: "4.0", "0.2"
// globals: UNSPECIFIED_LOGGING_COLOR, fow_degree_fade_in_rate_midpoint, __dso_handle, fow_degree_fade_in_rate1, fow_degree_fade_in_rate2, fow_degree_fade_out_rate_midpoint, fow_degree_fade_out_rate1, fow_degree_fade_out_rate2 (10 total)
void __cdecl GLOBAL__sub_I_fow_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  ConVar::ConVar(
    &fow_degree_fade_in_rate_midpoint,
    &stru_352A848.m_MaxVisibilityGridDegree[1].m_Memory.m_nAllocationCount,
    "0.5",
    24576,
    &stru_352A848.m_VisibilityGridDegree[9].m_Memory.m_nAllocationCount);
  __cxa_atexit(ConVar::~ConVar, &fow_degree_fade_in_rate_midpoint, &_dso_handle);
  ConVar::ConVar(
    &fow_degree_fade_in_rate1,
    &stru_352A848.m_ViewerTree.m_PrevInsertedNode,
    "4.0",
    24576,
    &stru_352A848.m_MaxVisibilityGridDegree[3].m_Memory);
  __cxa_atexit(ConVar::~ConVar, &fow_degree_fade_in_rate1, &_dso_handle);
  ConVar::ConVar(
    &fow_degree_fade_in_rate2,
    &stru_352A848.m_NewViewers.m_Size + 1,
    "4.0",
    24576,
    &stru_352A848.m_MaxVisibilityGridDegree[5].m_Memory.m_nAllocationCount);
  __cxa_atexit(ConVar::~ConVar, &fow_degree_fade_in_rate2, &_dso_handle);
  ConVar::ConVar(
    &fow_degree_fade_out_rate_midpoint,
    &stru_352A848.m_MaxVisibilityGridDegree[9].m_Memory.m_nAllocationCount,
    "0.5",
    24576,
    &stru_352A848.m_MaxVisibilityGridDegree[8]);
  __cxa_atexit(ConVar::~ConVar, &fow_degree_fade_out_rate_midpoint, &_dso_handle);
  ConVar::ConVar(
    &fow_degree_fade_out_rate1,
    &stru_352A848.m_FreeViewers.m_Memory.m_nAllocationCount + 2,
    "4.0",
    24576,
    &stru_352A848.m_VisibleBits[0].m_Memory);
  __cxa_atexit(ConVar::~ConVar, &fow_degree_fade_out_rate1, &_dso_handle);
  ConVar::ConVar(
    &fow_degree_fade_out_rate2,
    &stru_352A848.m_Viewers.m_Size + 4,
    "4.0",
    24576,
    &stru_352A848.m_VisibleBits[2].m_Memory.m_nAllocationCount);
  __cxa_atexit(ConVar::~ConVar, &fow_degree_fade_out_rate2, &_dso_handle);
  ConVar::ConVar(&fow_tile_update_time, &stru_352A848.m_nDebugFlags, "0.2", 24576, &stru_352A848.m_TileInfo.m_Size + 6);
  __cxa_atexit(ConVar::~ConVar, &fow_tile_update_time, &_dso_handle);
  ConVar::ConVar(&dota_fow_circle_test, &stru_352A848.m_pfnTraceRayVerticalGroundHeight + 1, "1", 24578);
  __cxa_atexit(ConVar::~ConVar, &dota_fow_circle_test, &_dso_handle);
}


// CFoW::CFoW  (line 53, @0x0000000003256f90, libserver.so)  // inlines: CUtlMemory, CUtlSphereTree, CUtlStack, CUtlVector, CUtlVectorBase, EnsureCapacity, Purge, RemoveAll, ResetDbgInfo, memcpy, ~CUtlMemory, ~CUtlSphereTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlSphereTree::Node, CUtlMemory<CUtlSphereTree::Node, int> >::RemoveAll, CMemAllocSystemInitialize, CUtlMemory<CUtlSphereTree::Node, int>::Purge, memcpy, CUtlVectorBase<CUtlSphereTree::Node, CUtlMemory<CUtlSphereTree::Node, int> >::~CUtlVectorBase, CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlStack, CUtlMemory<float, int>::Purge
// callers: CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t::SpawnGroupFoWInfo_t
void __fastcall CFoW::CFoW(CFoW *const this)
{
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *p_m_Memory; // rsi
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *v2; // rdx
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *v3; // rax
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *v5; // rcx
  signed __int64 v6; // rcx
  CFoW *v7; // rax
  CFoW *v8; // rcx
  signed __int64 v9; // rcx
  CUtlVectorBase<short unsigned int,CUtlMemory<short unsigned int,int> >::CAllocator *v10; // rcx
  CFoW *v11; // rax
  CFoW *v12; // rdx
  signed __int64 v13; // rdx
  __int64 v14; // rdi
  uint32 m_nGrowSize; // eax
  CUtlSphereTree::Node *m_pMemory; // rsi
  __int64 v17; // rax
  CUtlSphereTree::Node *v18; // rax
  CUtlSphereTree::Node *v19; // rax
  CUtlSphereTree::Node *src; // [rsp+0h] [rbp-40h]

  p_m_Memory = &this->m_VisibilityGridDegree[0].m_Memory;
  v2 = &this->m_MaxVisibilityGridDegree[0].m_Memory;
  v3 = &this->m_VisibilityGridDegree[0].m_Memory;
  do
  {
    v3[-1].m_nAllocationCount = 0;
    v5 = v3;
    v3 = (v3 + 24);
    v6 = v5 - this->m_VisibilityGridDegree;
    *(p_m_Memory + v6 - 8) = 0;
    *(&p_m_Memory->m_pMemory + v6) = 0;
    *(&p_m_Memory->m_pMemory + v6 + 4) = 0;
  }
  while ( v3 != v2 );
  v7 = &this->m_MaxVisibilityGridDegree[0].m_Memory;
  do
  {
    LODWORD(v7[-1].m_hContext) = 0;
    v8 = v7;
    v7 = (v7 + 24);
    v9 = v8 - this->m_MaxVisibilityGridDegree;
    *(v2 + v9 - 8) = 0;
    *(&v2->m_pMemory + v9) = 0;
    *(&v2->m_pMemory + v9 + 4) = 0;
  }
  while ( v7 != &this->m_VerticalLevels.m_Memory );
  v10 = &this->m_VisibleBits[0].m_Memory;
  this->m_VerticalLevels.m_Size = 0;
  this->m_VerticalLevels.m_Memory.m_pMemory = 0;
  v11 = &this->m_VisibleBits[0].m_Memory;
  this->m_VerticalLevels.m_Memory.m_nAllocationCount = 0;
  this->m_VerticalLevels.m_Memory.m_nGrowSize = 0;
  do
  {
    LODWORD(v11[-1].m_hContext) = 0;
    v12 = v11;
    v11 = (v11 + 24);
    v13 = v12 - this->m_VisibleBits;
    *(v10 + v13 - 8) = 0;
    *(&v10->m_pMemory + v13) = 0;
    *(&v10->m_pMemory + v13 + 4) = 0;
  }
  while ( v11 != &this->m_ViewerTree );
  this->m_ViewerTree.m_Nodes.m_Size = 0;
  this->m_ViewerTree._vptr_CUtlSphereTree = off_3FCF010;
  this->m_ViewerTree.m_Nodes.m_Memory.m_pMemory = 0;
  this->m_ViewerTree.m_Nodes.m_Memory.m_nAllocationCount = 0;
  this->m_ViewerTree.m_Nodes.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int>>::RemoveAll(&this->m_ViewerTree.m_Nodes);
  this->m_ViewerTree.m_FreelistHead = -1;
  this->m_ViewerTree.m_NumNodesInTree = 0;
  this->m_ViewerTree.m_PrevInsertedNode = -1;
  CUtlVectorBase<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int>>::RemoveAll(&this->m_ViewerTree.m_Nodes);
  if ( (this->m_ViewerTree.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlSphereTree::Node,int>::Purge(&this->m_ViewerTree.m_Nodes.m_Memory);
  if ( this->m_ViewerTree.m_Nodes.m_Memory.m_nAllocationCount <= 511 )
  {
    m_nGrowSize = this->m_ViewerTree.m_Nodes.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        src = this->m_ViewerTree.m_Nodes.m_Memory.m_pMemory;
        v19 = (**g_pMemAlloc)(g_pMemAlloc, 20480);
        this->m_ViewerTree.m_Nodes.m_Memory.m_pMemory = v19;
        if ( src != 0 )
          memcpy(v19, src, 40LL * this->m_ViewerTree.m_Nodes.m_Memory.m_nAllocationCount);
        this->m_ViewerTree.m_Nodes.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        m_pMemory = this->m_ViewerTree.m_Nodes.m_Memory.m_pMemory;
        v17 = *g_pMemAlloc;
        if ( m_pMemory != 0 )
          v18 = (*(v17 + 8))(g_pMemAlloc, m_pMemory, 20480);
        else
          v18 = (*v17)(g_pMemAlloc, 20480);
        this->m_ViewerTree.m_Nodes.m_Memory.m_pMemory = v18;
      }
      this->m_ViewerTree.m_Nodes.m_Memory.m_nAllocationCount = 512;
    }
  }
  this->m_NewViewers.m_Memory.m_pMemory = 0;
  this->m_NewViewers.m_Memory.m_nAllocationCount = 0;
  this->m_NewViewers.m_Memory.m_nGrowSize = 0;
  this->m_NewViewers.m_Size = 0;
  this->m_NewViewers.m_pElements = 0;
  this->m_FreeViewers.m_Memory.m_pMemory = 0;
  this->m_FreeViewers.m_Memory.m_nAllocationCount = 0;
  this->m_FreeViewers.m_Memory.m_nGrowSize = 0;
  this->m_FreeViewers.m_Size = 0;
  this->m_FreeViewers.m_pElements = 0;
  this->m_Viewers.m_Size = 0;
  this->m_Viewers.m_Memory.m_pMemory = 0;
  this->m_Viewers.m_Memory.m_nAllocationCount = 100;
  this->m_Viewers.m_Memory.m_nGrowSize = 100;
  CMemAllocSystemInitialize(v14);
  this->m_Viewers.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 8LL * this->m_Viewers.m_Memory.m_nAllocationCount);
  this->m_TileInfo.m_Size = 0;
  this->m_TileInfo.m_Memory.m_pMemory = 0;
  this->m_TileInfo.m_Memory.m_nAllocationCount = 0;
  this->m_TileInfo.m_Memory.m_nGrowSize = 0;
  this->m_bIsDotaServer = 0;
  this->m_nNumberOfTeams = 0;
  this->m_nMagicInitNumber = 0;
  this->m_bDebugVisible = 0;
  this->m_nDebugFlags = 0;
  this->m_nDebugTeam = 0;
  this->m_flElapsedFrameTime = 0.0;
  this->m_FrameNumber = -1;
  this->m_bInSolveVisibility = 0;
  this->m_bEnableUnseenVisibility = 0;
  this->m_flOccluderRadius = 0.0;
  this->m_flTreeRadius = 0.0;
  this->m_pFoW1DZ = 0;
}


// CFoW::~CFoW  (line 87, @0x0000000003257830, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlSphereTree, ~CUtlVector, ~CUtlVectorBase
// calls: CFoW::ClearState, CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlStack, CUtlVectorBase<CUtlSphereTree::Node, CUtlMemory<CUtlSphereTree::Node, int> >::RemoveAll, CUtlMemory<short unsigned int, int>::Purge, CUtlMemory<unsigned char, int>::Purge, CUtlMemory<CUtlSphereTree::Node, int>::Purge, CUtlMemory<CFoW_Viewer*, int>::Purge, CUtlMemory<float, int>::Purge
// callers: CDOTAFogOfWarSystem::GameShutdown, CDOTAFogOfWarSystem::PostSpawnGroupUnload
void __fastcall CFoW::~CFoW(CFoW *const this)
{
  bool v2; // zf
  CUtlVector<short unsigned int,CUtlMemory<short unsigned int,int> > *m_VisibleBits; // r12
  float32 *p_m_flOccluderRadius; // rbx
  CUtlMemory<short unsigned int,int> *v5; // rdi
  CUtlVector<float,CUtlMemory<float,int> > *p_m_VerticalLevels; // r12
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *m_MaxVisibilityGridDegree; // rbx
  CUtlMemory<unsigned char,int> *p_m_Memory; // rdi
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *m_VisibilityGridDegree; // r13
  CUtlMemory<unsigned char,int> *v10; // rdi

  CFoW::ClearState(this);
  v2 = (this->m_TileInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_TileInfo.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<unsigned char,int>::Purge(&this->m_TileInfo.m_Memory);
    if ( (this->m_TileInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&this->m_TileInfo.m_Memory);
  }
  v2 = (this->m_Viewers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Viewers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CFoW_Viewer *,int>::Purge(&this->m_Viewers.m_Memory);
    if ( (this->m_Viewers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFoW_Viewer *,int>::Purge(&this->m_Viewers.m_Memory);
  }
  CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::~CUtlStack(&this->m_FreeViewers);
  CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::~CUtlStack(&this->m_NewViewers);
  this->m_ViewerTree._vptr_CUtlSphereTree = off_3FCF010;
  CUtlVectorBase<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int>>::RemoveAll(&this->m_ViewerTree.m_Nodes);
  if ( (this->m_ViewerTree.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlSphereTree::Node,int>::Purge(&this->m_ViewerTree.m_Nodes.m_Memory);
    if ( (this->m_ViewerTree.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSphereTree::Node,int>::Purge(&this->m_ViewerTree.m_Nodes.m_Memory);
  }
  m_VisibleBits = this->m_VisibleBits;
  p_m_flOccluderRadius = &this->m_flOccluderRadius;
  do
  {
    while ( 1 )
    {
      v2 = (*(p_m_flOccluderRadius - 1) & 0xC0000000) == 0;
      *(p_m_flOccluderRadius - 6) = 0.0;
      if ( v2 )
      {
        CUtlMemory<unsigned short,int>::Purge(p_m_flOccluderRadius - 1);
        if ( (*(p_m_flOccluderRadius - 1) & 0xC0000000) == 0 )
          break;
      }
      p_m_flOccluderRadius -= 6;
      if ( m_VisibleBits == p_m_flOccluderRadius )
        goto LABEL_9;
    }
    v5 = (p_m_flOccluderRadius - 4);
    p_m_flOccluderRadius -= 6;
    CUtlMemory<unsigned short,int>::Purge(v5);
  }
  while ( m_VisibleBits != p_m_flOccluderRadius );
LABEL_9:
  v2 = (this->m_VerticalLevels.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  p_m_VerticalLevels = &this->m_VerticalLevels;
  this->m_VerticalLevels.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<float,int>::Purge(&this->m_VerticalLevels.m_Memory);
    if ( (this->m_VerticalLevels.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_VerticalLevels.m_Memory);
  }
  m_MaxVisibilityGridDegree = this->m_MaxVisibilityGridDegree;
  while ( m_MaxVisibilityGridDegree != p_m_VerticalLevels )
  {
    while ( 1 )
    {
      v2 = (p_m_VerticalLevels[-1].m_Memory.m_nGrowSize & 0xC0000000) == 0;
      p_m_VerticalLevels[-1].m_Size = 0;
      if ( v2 )
      {
        CUtlMemory<unsigned char,int>::Purge(&p_m_VerticalLevels[-1].m_Memory);
        if ( (p_m_VerticalLevels[-1].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_MaxVisibilityGridDegree == --p_m_VerticalLevels )
        goto LABEL_16;
    }
    p_m_Memory = &p_m_VerticalLevels[-1].m_Memory;
    --p_m_VerticalLevels;
    CUtlMemory<unsigned char,int>::Purge(p_m_Memory);
  }
LABEL_16:
  m_VisibilityGridDegree = this->m_VisibilityGridDegree;
  do
  {
    while ( 1 )
    {
      v2 = (m_MaxVisibilityGridDegree[-1].m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_MaxVisibilityGridDegree[-1].m_Size = 0;
      if ( v2 )
      {
        CUtlMemory<unsigned char,int>::Purge(&m_MaxVisibilityGridDegree[-1].m_Memory);
        if ( (m_MaxVisibilityGridDegree[-1].m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_VisibilityGridDegree == --m_MaxVisibilityGridDegree )
        return;
    }
    v10 = &m_MaxVisibilityGridDegree[-1].m_Memory;
    --m_MaxVisibilityGridDegree;
    CUtlMemory<unsigned char,int>::Purge(v10);
  }
  while ( m_VisibilityGridDegree != m_MaxVisibilityGridDegree );
}


// CFoW::ClearState  (line 100, @0x0000000003257560, libserver.so)  // inlines: Clear, Purge, PurgeAndDeleteElements, RemoveAll, ResetDbgInfo, ~CFoW_1DZ, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CFoW_Viewer::~CFoW_Viewer, operator delete, CUtlMemory<CFoW_Viewer*, int>::Purge, CUtlVectorBase<CUtlSphereTree::Node, CUtlMemory<CUtlSphereTree::Node, int> >::RemoveAll, CUtlMemory<CUtlSphereTree::Node, int>::Purge, CUtlMemory<unsigned char, int>::Purge, CFoW_1DZ::ClearState, CUtlRBTree<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int, CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<float, int>::Purge, CUtlMemory<short unsigned int, int>::Purge
// callers: CDOTAFogOfWarSystem::PreSpawnGroupLoad, CFoW::~CFoW
// globals: CFoW::s_nMagicInitNumber
void __fastcall CFoW::ClearState(CFoW *const this)
{
  __int64 v1; // r14
  int i; // r13d
  CFoW_Viewer **m_pMemory; // rax
  CFoW_Viewer *v5; // rbx
  bool v6; // zf
  unsigned __int16 *v7; // rax
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *p_m_Memory; // rbx
  int v9; // r13d
  CUtlMemory<unsigned char,int> *v10; // rdi
  CFoW_1DZ *m_pFoW1DZ; // rdi
  CFoW_1DZ *v12; // rbx

  v1 = 0;
  for ( i = 0; i < this->m_Viewers.m_Size; ++v1 )
  {
    m_pMemory = this->m_Viewers.m_Memory.m_pMemory;
    v5 = m_pMemory[v1];
    if ( v5 != 0 )
    {
      CFoW_Viewer::~CFoW_Viewer(m_pMemory[v1]);
      operator delete(v5);
    }
    ++i;
  }
  v6 = (this->m_Viewers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Viewers.m_Size = 0;
  if ( v6 )
    CUtlMemory<CFoW_Viewer *,int>::Purge(&this->m_Viewers.m_Memory);
  CUtlVectorBase<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int>>::RemoveAll(&this->m_ViewerTree.m_Nodes);
  this->m_ViewerTree.m_FreelistHead = -1;
  this->m_ViewerTree.m_NumNodesInTree = 0;
  this->m_ViewerTree.m_PrevInsertedNode = -1;
  CUtlVectorBase<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int>>::RemoveAll(&this->m_ViewerTree.m_Nodes);
  if ( (this->m_ViewerTree.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlSphereTree::Node,int>::Purge(&this->m_ViewerTree.m_Nodes.m_Memory);
  v6 = (this->m_FreeViewers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_FreeViewers.m_Size = 0;
  if ( v6 )
    CUtlMemory<unsigned short,int>::Purge(&this->m_FreeViewers.m_Memory);
  v7 = this->m_FreeViewers.m_Memory.m_pMemory;
  this->m_NewViewers.m_Size = 0;
  v6 = (this->m_NewViewers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_FreeViewers.m_pElements = v7;
  if ( v6 )
    CUtlMemory<unsigned short,int>::Purge(&this->m_NewViewers.m_Memory);
  p_m_Memory = &this->m_MaxVisibilityGridDegree[0].m_Memory;
  v9 = 10;
  this->m_NewViewers.m_pElements = this->m_NewViewers.m_Memory.m_pMemory;
  do
  {
    while ( 1 )
    {
      v6 = (p_m_Memory[-15].m_nGrowSize & 0xC0000000) == 0;
      p_m_Memory[-16].m_nAllocationCount = 0;
      if ( v6 )
        break;
      v6 = (p_m_Memory->m_nGrowSize & 0xC0000000) == 0;
      p_m_Memory[-1].m_nAllocationCount = 0;
      if ( v6 )
        goto LABEL_18;
LABEL_15:
      p_m_Memory = (p_m_Memory + 24);
      if ( --v9 == 0 )
        goto LABEL_19;
    }
    CUtlMemory<unsigned char,int>::Purge(p_m_Memory - 15);
    v6 = (p_m_Memory->m_nGrowSize & 0xC0000000) == 0;
    p_m_Memory[-1].m_nAllocationCount = 0;
    if ( !v6 )
      goto LABEL_15;
LABEL_18:
    v10 = p_m_Memory;
    p_m_Memory = (p_m_Memory + 24);
    CUtlMemory<unsigned char,int>::Purge(v10);
    --v9;
  }
  while ( v9 != 0 );
LABEL_19:
  v6 = (this->m_VerticalLevels.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bFowEnabled = 0;
  this->m_bEnableUnseenVisibility = 0;
  this->m_VerticalLevels.m_Size = 0;
  if ( v6 )
    CUtlMemory<float,int>::Purge(&this->m_VerticalLevels.m_Memory);
  m_pFoW1DZ = this->m_pFoW1DZ;
  this->m_pfnTraceRayVerticalGroundHeight = 0;
  if ( m_pFoW1DZ != 0 )
  {
    CFoW_1DZ::ClearState(m_pFoW1DZ);
    v12 = this->m_pFoW1DZ;
    if ( v12 != 0 )
    {
      CFoW_1DZ::ClearState(this->m_pFoW1DZ);
      CUtlRBTree<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short,CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&v12->m_CircleInfos.m_Tree);
      if ( (v12->m_CircleInfos.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,CFoW_1DZ::CIRCLEINFO *,unsigned short,bool (*)(float const&,float const&)>::Node_t,unsigned short>,unsigned short>::Purge(&v12->m_CircleInfos.m_Tree.m_Elements);
      operator delete(v12);
    }
    this->m_pFoW1DZ = 0;
  }
  this->m_vWorldMins.x = 0.0;
  this->m_vWorldMins.y = 0.0;
  this->m_vWorldMaxs.x = 0.0;
  this->m_vWorldMaxs.y = 0.0;
  this->m_nGridXUnits = 0;
  this->m_nGridYUnits = 0;
  this->m_nMagicInitNumber = 0;
  ++CFoW::s_nMagicInitNumber;
}


// CFoW::SetNumberOfTeams  (line 143, @0x0000000003253d90, libserver.so)
// callers: CDOTAFogOfWarSystem::PreSpawnGroupLoad
void __fastcall CFoW::SetNumberOfTeams(CFoW *const this, int nCount)
{
  unsigned int v2; // eax

  if ( nCount < 0 )
  {
    this->m_nNumberOfTeams = 10;
  }
  else
  {
    v2 = 10;
    if ( nCount >= 10 )
      v2 = nCount;
    this->m_nNumberOfTeams = v2;
  }
}


// CFoW::SetContext  (line 159, @0x00000000032540f0, libserver.so)
// calls: CFoW::UpdateHeightArray
// callers: CDOTAFogOfWarSystem::ActiveSpawnGroupChanged
void __fastcall CFoW::SetContext(CFoW *const this, uintp hContext)
{
  if ( this->m_hContext != hContext )
  {
    this->m_hContext = hContext;
    CFoW::UpdateHeightArray(this);
  }
}


// CFoW::SetSize  (line 175, @0x0000000003258a30, libserver.so)  // inlines: AddMultipleToTail, AlignValue<int>, CFoW_1DZ, CUtlMap, CUtlMemory, CUtlRBTree, Clear, EnsureCapacity, EnsureCount, FastSqrt, FillWithValue, GetFloat, GrowMemory, GrowVector, InsertMultipleBefore, ResetDbgInfo, VectorMax, VectorMin, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, fpmax, fpmin, memcpy, operator=
// calls: CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue, CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::Push, CFoW::UpdateHeightArray, CUtlMemory<short unsigned int, int>::Grow, CUtlMemory<unsigned char, int>::Grow, CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector, CUtlVectorBase<float, CUtlMemory<float, int> >::ShiftElementsRight, memcpy, operator new
// callers: CDOTAFogOfWarSystem::ActiveSpawnGroupChanged, CDOTAFogOfWarSystem::PreSpawnGroupLoad
// globals: CFoW::s_nMagicInitNumber, CDefOps<float>::LessFunc(float const&,float const&)
void __fastcall CFoW::SetSize(
        CFoW *const this,
        bool bIsDotaServer,
        uintp hContext,
        Vector *const vWorldMins,
        Vector *const vWorldMaxs,
        int nHorizontalGridSize,
        float32 flTreeRadius,
        int nVerticalGridSize,
        PFN_TraceRayVerticalGroundHeight *pfnTraceRayVerticalGroundHeight)
{
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  __m128 v14; // xmm1
  float v15; // xmm1_4
  __m128 v16; // xmm2
  float v17; // xmm2_4
  vec_t y; // xmm6_4
  float z; // xmm5_4
  float x; // xmm0_4
  __m128 v21; // xmm3
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // r9d
  int v30; // ebx
  __int64 v31; // rax
  signed int v32; // ebx
  unsigned int i; // r15d
  __int64 v34; // r8
  CUtlVector<short unsigned int,CUtlMemory<short unsigned int,int> > *v35; // r14
  int m_Size; // ecx
  __int64 v37; // rdx
  int v38; // eax
  int *v39; // r14
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v40; // rax
  float v41; // xmm1_4
  int v42; // r14d
  int v43; // ebx
  __int64 v44; // rax
  bool v45; // cc
  uint32 m_nGrowSize; // eax
  unsigned __int16 *v47; // rsi
  __int64 v48; // rax
  unsigned __int16 *v49; // rax
  unsigned __int16 *m_pMemory; // rdi
  int v51; // ebx
  int v52; // ebx
  int m_nHorizontalGridSize; // eax
  unsigned int v54; // edx
  float m_fValue; // xmm0_4
  unsigned int v56; // eax
  int m_nAllocationCount; // eax
  int v58; // edx
  int v59; // eax
  unsigned __int16 *v60; // rbx
  unsigned __int16 *v61; // rax
  CFoW_1DZ *v62; // rax
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v63; // [rsp+0h] [rbp-50h]
  unsigned __int8 src[2]; // [rsp+1Eh] [rbp-32h] BYREF

  this->m_bIsDotaServer = bIsDotaServer;
  this->m_hContext = hContext;
  v10.m128_i32[0] = LODWORD(vWorldMins->z);
  v11.m128_i32[0] = LODWORD(vWorldMins->y);
  v12 = _mm_cmplt_ss(0xFF7FFFFF, v10);
  v13.m128_i32[0] = LODWORD(vWorldMins->x);
  LODWORD(this->m_vWorldMins.z) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v12, 0xFF7FFFFF).m128_f32[0])
                                | v10.m128_i32[0] & v12.m128_i32[0];
  v14 = _mm_cmplt_ss(0xC6800000, v11);
  LODWORD(v15) = _mm_andnot_ps(v14, 0xC6800000).m128_u32[0] | v11.m128_i32[0] & v14.m128_i32[0];
  this->m_vWorldMins.y = v15;
  v16 = _mm_cmplt_ss(0xC6800000, v13);
  LODWORD(v17) = _mm_andnot_ps(v16, 0xC6800000).m128_u32[0] | v13.m128_i32[0] & v16.m128_i32[0];
  this->m_vWorldMins.x = v17;
  y = vWorldMaxs->y;
  z = vWorldMaxs->z;
  x = vWorldMaxs->x;
  this->m_nHorizontalGridSize = nHorizontalGridSize;
  v21 = _mm_cmplt_ss(LODWORD(y), 0x46800000u);
  v22 = fminf(x, 16384.0);
  LODWORD(v23) = _mm_andnot_ps(v21, 0x46800000u).m128_u32[0] | LODWORD(y) & v21.m128_i32[0];
  this->m_vWorldMaxs.z = fminf(z, 3.4028235e38);
  this->m_vWorldMaxs.x = v22;
  this->m_vWorldMaxs.y = v23;
  if ( nHorizontalGridSize != 0 )
  {
    v24 = nHorizontalGridSize;
    v25 = 1.0 / nHorizontalGridSize;
  }
  else
  {
    v24 = 0.0;
    v25 = 0.0;
  }
  this->m_nHorizontalGridSizeRcp = v25;
  v26 = ((((v22 - v17) + v24) - 1.0) * v25);
  this->m_nGridXUnits = v26;
  v27 = v26 * nHorizontalGridSize;
  v28 = ((((v23 - v15) + v24) - 1.0) * v25);
  v29 = v28 * nHorizontalGridSize;
  this->m_nGridYUnits = v28;
  this->m_vWorldMaxs.x = v27 + v17;
  v30 = v26 * v28 + 15;
  v31 = 0;
  v32 = v30 & 0xFFFFFFF0;
  this->m_vWorldMaxs.y = v29 + v15;
  do
    this->m_WasVisibleUpdateID[v31++] = -1;
  while ( v31 != 10 );
  for ( i = 0; this->m_nNumberOfTeams > i; ++i )
  {
    v34 = i;
    v35 = &this->m_VisibleBits[i];
    m_Size = v35->m_Size;
    if ( v32 > v35->m_Size )
    {
      m_nAllocationCount = this->m_VisibleBits[i].m_Memory.m_nAllocationCount;
      if ( v32 > m_nAllocationCount )
      {
        CUtlMemory<unsigned short,int>::Grow(&this->m_VisibleBits[i].m_Memory, v32 - m_nAllocationCount);
        v34 = i;
      }
      v35->m_Size = v32;
      m_Size = v32;
    }
    v37 = 0;
    v38 = 0;
    if ( m_Size > 0 )
    {
      do
      {
        ++v38;
        this->m_VisibleBits[i].m_Memory.m_pMemory[v37++] = 0;
      }
      while ( v38 < v35->m_Size );
    }
    if ( !this->m_bIsDotaServer )
    {
      v39 = &this->m_WasVisibleUpdateID[6 * v34 + 9];
      v40 = &this->m_VisibilityGridDegree[v34];
      if ( v32 > v40->m_Size )
      {
        v58 = this->m_VisibilityGridDegree[v34].m_Memory.m_nAllocationCount;
        if ( v32 > v58 )
        {
          v63 = &this->m_VisibilityGridDegree[v34];
          CUtlMemory<unsigned char,int>::Grow(&this->m_VisibilityGridDegree[v34].m_Memory, v32 - v58);
          v40 = v63;
        }
        v39[2] = v32;
      }
      src[0] = 0;
      CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(v40, src);
    }
  }
  if ( nVerticalGridSize > 0 )
  {
    v41 = nVerticalGridSize;
    v42 = this->m_VerticalLevels.m_Size;
    v43 = ((((this->m_vWorldMaxs.z - this->m_vWorldMins.z) + nVerticalGridSize) - 1.0) / nVerticalGridSize);
    if ( v43 > v42 && v43 != v42 )
    {
      CUtlVectorBase<float,CUtlMemory<float,int>>::GrowVector(&this->m_VerticalLevels, v43 - v42);
      CUtlVectorBase<float,CUtlMemory<float,int>>::ShiftElementsRight(&this->m_VerticalLevels, v42, v43 - v42);
      v41 = nVerticalGridSize;
    }
    if ( v43 > 0 )
    {
      v44 = 0;
      do
      {
        this->m_VerticalLevels.m_Memory.m_pMemory[v44] = ((v44 + 0.75) * v41) + this->m_vWorldMins.z;
        ++v44;
      }
      while ( v43 > v44 );
    }
  }
  v45 = this->m_FreeViewers.m_Memory.m_nAllocationCount <= 599;
  this->m_NewViewers.m_Size = 0;
  if ( !v45 || ((m_nGrowSize = this->m_FreeViewers.m_Memory.m_nGrowSize) & 0x40000000) != 0 )
  {
    m_pMemory = this->m_FreeViewers.m_Memory.m_pMemory;
  }
  else
  {
    if ( (m_nGrowSize & 0xC0000000) != 0 )
    {
      v60 = this->m_FreeViewers.m_Memory.m_pMemory;
      v61 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
      this->m_FreeViewers.m_Memory.m_pMemory = v61;
      m_pMemory = v61;
      if ( v60 != 0 )
      {
        memcpy(v61, v60, 2LL * this->m_FreeViewers.m_Memory.m_nAllocationCount);
        m_pMemory = this->m_FreeViewers.m_Memory.m_pMemory;
      }
      this->m_FreeViewers.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
    }
    else
    {
      v47 = this->m_FreeViewers.m_Memory.m_pMemory;
      v48 = *g_pMemAlloc;
      if ( v47 != 0 )
        v49 = (*(v48 + 8))(g_pMemAlloc, v47, 1200);
      else
        v49 = (*v48)(g_pMemAlloc, 1200);
      this->m_FreeViewers.m_Memory.m_pMemory = v49;
      m_pMemory = v49;
    }
    this->m_FreeViewers.m_Memory.m_nAllocationCount = 600;
  }
  this->m_FreeViewers.m_pElements = m_pMemory;
  v51 = 599;
  this->m_FreeViewers.m_Size = 0;
  do
  {
    *src = v51;
    CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::Push(&this->m_FreeViewers, src);
    --v51;
  }
  while ( v51 != -1 );
  v52 = this->m_nGridYUnits * this->m_nGridXUnits;
  if ( v52 > this->m_TileInfo.m_Size )
  {
    v59 = this->m_TileInfo.m_Memory.m_nAllocationCount;
    if ( v52 > v59 )
      CUtlMemory<unsigned char,int>::Grow(&this->m_TileInfo.m_Memory, v52 - v59);
    this->m_TileInfo.m_Size = v52;
  }
  src[0] = 0;
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(&this->m_TileInfo, src);
  m_nHorizontalGridSize = this->m_nHorizontalGridSize;
  this->m_flTreeRadius = flTreeRadius;
  this->m_pfnTraceRayVerticalGroundHeight = pfnTraceRayVerticalGroundHeight;
  this->m_flOccluderRadius = fsqrt((m_nHorizontalGridSize * m_nHorizontalGridSize) * 0.5);
  CFoW::UpdateHeightArray(this);
  if ( this->m_pFoW1DZ == 0 )
  {
    v62 = operator new(0x28u);
    v62->m_CircleInfos.m_Tree.m_Elements.m_pMemory = 0;
    v62->m_CircleInfos.m_Tree.m_LessFunc.m_LessFunc = CDefOps<float>::LessFunc;
    v62->m_CircleInfos.m_Tree.m_Elements.m_nAllocationCount = 0;
    v62->m_CircleInfos.m_Tree.m_Elements.m_nGrowSize = 0;
    v62->m_CircleInfos.m_Tree.m_Root = -1;
    v62->m_CircleInfos.m_Tree.m_NumElements = 0;
    v62->m_CircleInfos.m_Tree.m_FirstFree = -1;
    v62->m_CircleInfos.m_Tree.m_LastAlloc.index = -1;
    v62->m_CircleInfos.m_Tree.m_pElements = 0;
    this->m_pFoW1DZ = v62;
  }
  v54 = CFoW::s_nMagicInitNumber;
  m_fValue = fow_tile_update_time.m_pParent->m_Value.m_fValue;
  this->m_FrameNumber = -1;
  v56 = v54 + 1;
  this->m_flElapsedFrameTime = m_fValue;
  CFoW::s_nMagicInitNumber = v54 + 1;
  if ( v54 == -1 )
  {
    v56 = 1;
    CFoW::s_nMagicInitNumber = 1;
  }
  this->m_nMagicInitNumber = v56;
  this->m_bFowEnabled = 1;
}


// CFoW::EnableFogOfWar  (line 272, @0x0000000003257440, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue, CFoW::SolveVisibility
// callers: CDOTAFogOfWarSystem::EnableFogOfWar
void __fastcall CFoW::EnableFogOfWar(CFoW *const this, bool bEnable)
{
  float v2; // xmm1_4
  __int16 v4; // r14
  CFoW::GRIDDEGREE v5; // al
  unsigned int m_nNumberOfTeams; // ecx
  unsigned int v7; // r13d
  __int64 v8; // r9
  int m_Size; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rbx
  CFoW::GRIDDEGREE degree; // [rsp+1Dh] [rbp-33h] BYREF
  CFoW::GRIDDEGREE maxDegree; // [rsp+1Eh] [rbp-32h] BYREF
  bool bUpdated; // [rsp+1Fh] [rbp-31h] BYREF

  if ( this->m_bFowEnabled != bEnable )
  {
    this->m_bFowEnabled = bEnable;
    degree = -1;
    if ( bEnable )
    {
      v4 = 0;
      v5 = 0;
    }
    else
    {
      v4 = -16384;
      v5 = -1;
    }
    m_nNumberOfTeams = this->m_nNumberOfTeams;
    maxDegree = v5;
    if ( m_nNumberOfTeams != 0 )
    {
      v7 = 0;
      do
      {
        v8 = v7;
        m_Size = this->m_VisibleBits[v7].m_Size;
        if ( m_Size > 0 )
        {
          v10 = 0;
          do
          {
            v11 = v10;
            v10 += 2;
            v12 = (this->m_VisibleBits[v7].m_Memory.m_pMemory + v11);
            *v12 = v4 | *v12 & 0xFFF;
          }
          while ( v10 != 2LL * (m_Size - 1) + 2 );
        }
        ++v7;
        v13 = v8;
        CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(
          &this->m_VisibilityGridDegree[v8],
          &degree);
        CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(
          &this->m_MaxVisibilityGridDegree[v13],
          &maxDegree);
      }
      while ( this->m_nNumberOfTeams > v7 );
    }
    if ( bEnable )
    {
      bUpdated = 0;
      CFoW::SolveVisibility(this, 100.0, -1, &bUpdated, v2);
    }
  }
}


// CFoW::EnableUnseenVisbility  (line 317, @0x0000000003258940, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, RemoveAll
// calls: CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue, CUtlMemory<unsigned char, int>::Grow
// callers: CDOTABaseGameMode::SetUnseenFogOfWarEnabled
void __fastcall CFoW::EnableUnseenVisbility(CFoW *const this, bool bEnable)
{
  unsigned int i; // eax
  __int64 v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // rax
  int m_Size; // edx
  CUtlMemory<unsigned char,int> *p_m_nAllocationCount; // r13
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> > *v10; // rax
  int m_nAllocationCount; // ecx
  int v12; // [rsp+Ch] [rbp-44h]
  unsigned __int8 src[49]; // [rsp+1Fh] [rbp-31h] BYREF

  if ( this->m_bEnableUnseenVisibility != bEnable )
  {
    if ( !this->m_bIsDotaServer )
    {
      if ( bEnable )
      {
        if ( this->m_nNumberOfTeams != 0 )
        {
          v6 = 0;
          do
          {
            v7 = v6;
            m_Size = this->m_VisibleBits[v7].m_Size;
            p_m_nAllocationCount = &this->m_VisibilityGridDegree[v7 + 9].m_Memory.m_nAllocationCount;
            v10 = &p_m_nAllocationCount->m_nAllocationCount;
            if ( m_Size > p_m_nAllocationCount->m_nAllocationCount )
            {
              m_nAllocationCount = p_m_nAllocationCount[1].m_nAllocationCount;
              if ( m_Size > m_nAllocationCount )
              {
                v12 = m_Size;
                CUtlMemory<unsigned char,int>::Grow(p_m_nAllocationCount + 1, m_Size - m_nAllocationCount);
                v10 = &p_m_nAllocationCount->m_nAllocationCount;
                m_Size = v12;
              }
              p_m_nAllocationCount->m_nAllocationCount = m_Size;
            }
            ++v6;
            src[0] = 0;
            CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(v10, src);
          }
          while ( this->m_nNumberOfTeams > v6 );
        }
      }
      else
      {
        for ( i = 0; this->m_nNumberOfTeams > i; this->m_MaxVisibilityGridDegree[v5].m_Size = 0 )
          v5 = i++;
      }
    }
    this->m_bEnableUnseenVisibility = bEnable;
  }
}


// CFoW::UpdateHeightArray  (line 348, @0x0000000003253df0, libserver.so)  // inlines: GetHeightGroup, operator[]
// calls: CFoW_Viewer::MergeViewerVisibility, CFoW::SetHeightGroup, CFoW_Viewer::UpdateHeightGroup
// callers: CFoW::SetContext, CFoW::SetSize
void __fastcall CFoW::UpdateHeightArray(CFoW *const this)
{
  __int64 v2; // r12
  int i; // ebx
  CFoW_Viewer *v4; // rdi
  PFN_TraceRayVerticalGroundHeight *m_pfnTraceRayVerticalGroundHeight; // rax
  signed int v6; // r12d
  int m_nHorizontalGridSize; // eax
  signed int v8; // ebx
  float v9; // xmm0_4
  float v10; // xmm0_4
  int m_Size; // edx
  float *m_pMemory; // rax
  float *v13; // rax
  int v14; // ecx
  int m_nGridXUnits; // eax
  int m_nGridYUnits; // ecx
  int v17; // r9d
  int v18; // ebx
  int v19; // r12d
  int v20; // esi
  int v21; // edx
  int v22; // r10d
  unsigned __int8 *v23; // rax
  int v24; // r8d
  int v25; // edi
  int v26; // ecx
  __int64 v27; // r12
  int j; // ebx
  CFoW_Viewer *v29; // rdi
  float x; // [rsp+8h] [rbp-28h]
  float y; // [rsp+Ch] [rbp-24h]

  v2 = 0;
  for ( i = 0; this->m_Viewers.m_Size > i; ++v2 )
  {
    v4 = this->m_Viewers.m_Memory.m_pMemory[v2];
    if ( v4 != 0 )
      CFoW_Viewer::MergeViewerVisibility(v4, 0);
    ++i;
  }
  m_pfnTraceRayVerticalGroundHeight = this->m_pfnTraceRayVerticalGroundHeight;
  if ( m_pfnTraceRayVerticalGroundHeight != 0
    && (m_pfnTraceRayVerticalGroundHeight)(this->m_hContext, 0.0, 0.0, 1000.0, -10000.0) != 3.4028235e38 )
  {
    v6 = 0;
    if ( this->m_nGridXUnits <= 0 )
      goto LABEL_29;
    do
    {
      m_nHorizontalGridSize = this->m_nHorizontalGridSize;
      v8 = 0;
      v9 = m_nHorizontalGridSize * 0.5;
      y = this->m_vWorldMins.y + v9;
      for ( x = (v6 * m_nHorizontalGridSize) + (v9 + this->m_vWorldMins.x);
            this->m_nGridYUnits > v8;
            y = this->m_nHorizontalGridSize + y )
      {
        (this->m_pfnTraceRayVerticalGroundHeight)(this->m_hContext, x, y, 1000.0, -10000.0);
        m_Size = this->m_VerticalLevels.m_Size;
        if ( m_Size <= 0 || *(m_pMemory = this->m_VerticalLevels.m_Memory.m_pMemory) > v10 )
        {
          LOBYTE(v14) = 0;
        }
        else
        {
          v13 = m_pMemory + 1;
          v14 = 0;
          do
          {
            if ( ++v14 == m_Size )
              break;
            ++v13;
          }
          while ( *(v13 - 1) <= v10 );
        }
        CFoW::SetHeightGroup(this, v6, v8++, v14);
      }
      m_nGridXUnits = this->m_nGridXUnits;
      ++v6;
    }
    while ( m_nGridXUnits > v6 );
  }
  else
  {
    m_nGridXUnits = this->m_nGridXUnits;
  }
  if ( m_nGridXUnits > 2 )
  {
    m_nGridYUnits = this->m_nGridYUnits;
    v17 = 1;
    v18 = 2;
    do
    {
      v19 = v18;
      if ( m_nGridYUnits <= 2 )
        goto LABEL_28;
      v19 = v18;
      v20 = 2;
      v21 = 1;
      do
      {
        while ( 1 )
        {
          v23 = this->m_TileInfo.m_Memory.m_pMemory;
          v24 = v17 * m_nGridYUnits;
          v25 = v23[v17 * m_nGridYUnits + v21] & 0x1F;
          if ( v25 > (v23[v21 + m_nGridYUnits * (v18 - 2)] & 0x1F) )
          {
            v22 = v20;
            break;
          }
          v22 = v20;
          if ( (v23[v17 * m_nGridYUnits + v21] & 0x1Fu) > (v23[v20 - 2 + v24] & 0x1Fu)
            || v25 > (v23[v20 + v24] & 0x1F)
            || v25 > (v23[v21 + v18 * m_nGridYUnits] & 0x1F) )
          {
            break;
          }
          ++v21;
          ++v20;
          if ( m_nGridYUnits - 1 <= v22 )
            goto LABEL_27;
        }
        ++v20;
        v26 = v21 + v17 * m_nGridYUnits;
        ++v21;
        v23[v26] |= 0x20u;
        m_nGridYUnits = this->m_nGridYUnits;
      }
      while ( m_nGridYUnits - 1 > v22 );
LABEL_27:
      m_nGridXUnits = this->m_nGridXUnits;
LABEL_28:
      ++v18;
      ++v17;
    }
    while ( m_nGridXUnits - 1 > v19 );
  }
LABEL_29:
  v27 = 0;
  for ( j = 0; this->m_Viewers.m_Size > j; ++v27 )
  {
    v29 = this->m_Viewers.m_Memory.m_pMemory[v27];
    if ( v29 != 0 )
      CFoW_Viewer::UpdateHeightGroup(v29);
    ++j;
  }
}


// CFoW::SetHeightGroup  (line 415, @0x0000000003253dc0, libserver.so)  // inlines: operator[]
// callers: CFoW::UpdateHeightArray
void __fastcall CFoW::SetHeightGroup(CFoW *const this, uint32 nGridX, uint32 nGridY, uint8 HeightGroup)
{
  unsigned __int8 *v4; // rdx

  v4 = &this->m_TileInfo.m_Memory.m_pMemory[this->m_nGridYUnits * nGridX + nGridY];
  *v4 = *v4 & 0xE0 | HeightGroup & 0x1F;
}


// CFoW::GetHeightGroup  (line 433, @0x0000000003254120, libserver.so)  // inlines: operator[]
// callers: CDOTAFogOfWarSystem::FindHeightLevel, CFoW_Viewer1DZ::UpdateLocation
uint8 __fastcall CFoW::GetHeightGroup(CFoW *const this, uint32 nGridX, uint32 nGridY)
{
  return this->m_TileInfo.m_Memory.m_pMemory[nGridY + this->m_nGridYUnits * nGridX] & 0x1F;
}


// CFoW::SetCustomVerticalLevels  (line 448, @0x0000000003258fd0, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, InsertMultipleBefore
// calls: CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector, CUtlVectorBase<float, CUtlMemory<float, int> >::ShiftElementsRight
// callers: CDOTAFogOfWarSystem::SetVerticalLevelsForSpawnGroup
void __fastcall CFoW::SetCustomVerticalLevels(CFoW *const this, float *pflHeightLevels, int nCount)
{
  int m_Size; // r13d
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  int v9; // r15d
  CUtlVector<float,CUtlMemory<float,int> > *p_m_VerticalLevels; // r14

  m_Size = this->m_VerticalLevels.m_Size;
  if ( nCount > m_Size )
  {
    v8 = nCount - m_Size;
    v9 = v8;
    if ( v8 != 0 )
    {
      p_m_VerticalLevels = &this->m_VerticalLevels;
      CUtlVectorBase<float,CUtlMemory<float,int>>::GrowVector(&this->m_VerticalLevels, v8);
      CUtlVectorBase<float,CUtlMemory<float,int>>::ShiftElementsRight(p_m_VerticalLevels, m_Size, v9);
      m_Size = this->m_VerticalLevels.m_Size;
    }
  }
  v6 = 0;
  v7 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      ++v7;
      this->m_VerticalLevels.m_Memory.m_pMemory[v6] = pflHeightLevels[v6];
      ++v6;
    }
    while ( this->m_VerticalLevels.m_Size > v7 );
  }
}


// CFoW::GetSize  (line 464, @0x0000000003254140, libserver.so)  // inlines: operator=
void __fastcall CFoW::GetSize(CFoW *const this, Vector *pvWorldMins, Vector *pvWorldMaxs)
{
  if ( pvWorldMins != 0 )
    *pvWorldMins = this->m_vWorldMins;
  if ( pvWorldMaxs != 0 )
    *pvWorldMaxs = this->m_vWorldMaxs;
}


// CFoW::EndUpdate  (line 478, @0x00000000032554a0, libserver.so)
// calls: CFoW_Viewer::MergeViewerVisibility, CFoW::SolveVisibility, Msg, Warning
// callers: CDOTAFogOfWarSystem::UpdateFogOfWar
// strings: "Viewers: %d  DirtyViewerCount:%d\n", "CFoW::EndUpdate: Not Initialized!"
_BOOL8 __fastcall CFoW::EndUpdate(CFoW *const this, __m128i flFrameTime, int FrameNumber, bool bDirtyViewers, float a5)
{
  float v5; // r15d
  __int64 v8; // r12
  int v9; // ebx
  CFoW_Viewer *v10; // rdi
  int v11; // eax
  bool v13; // [rsp+0h] [rbp-44h]
  bool fUpdated; // [rsp+13h] [rbp-31h] BYREF

  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(flFrameTime));
  if ( this->m_nMagicInitNumber == 0 )
  {
    v13 = bDirtyViewers;
    Warning("CFoW::EndUpdate: Not Initialized!");
    bDirtyViewers = v13;
  }
  if ( bDirtyViewers && this->m_Viewers.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = this->m_Viewers.m_Memory.m_pMemory[v8];
      if ( v10 != 0 )
        CFoW_Viewer::MergeViewerVisibility(v10, 0);
      ++v9;
      ++v8;
    }
    while ( this->m_Viewers.m_Size > v9 );
  }
  fUpdated = 0;
  v11 = CFoW::SolveVisibility(this, v5, FrameNumber, &fUpdated, a5);
  if ( (this->m_nDebugFlags & 8) != 0 )
    Msg("Viewers: %d  DirtyViewerCount:%d\n", this->m_Viewers.m_Size, v11);
  return fUpdated;
}


// CFoW::OutOfViewersDieDieDie  (line 547, @0x0000000003254190, libserver.so)
// callers: CDOTAFogOfWarTempViewers::AddTempViewer
void __fastcall CFoW::OutOfViewersDieDieDie(CFoW *const this)
{
  ;
}


// CFoW::AddViewer  (line 588, @0x0000000003259060, libserver.so)  // inlines: Add, AddMultipleToTail, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, Element, EnsureCount, EnterScope, GetElapsed, GetTimebaseRegister, GrowMemory, GrowVector, InTargetThread, InsertMultipleBefore, IsEnabled, PLAT_CPU_TIME, Pop, Top, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: operator new, CFoW_Viewer::CFoW_Viewer, CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::Push, CFoW::InsertViewerIntoTree, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CUtlMemory<CFoW_Viewer*, int>::Grow, operator delete, _Unwind_Resume
// callers: CFoWRevealerEntity::Spawn, CDOTAFogOfWarSystem::AddFOWEntity, CDOTAFogOfWarTempViewers::AddTempViewer
// strings: "DOTA::FoW"
int __fastcall CFoW::AddViewer(CFoW *const this, FoWViewerType_t FoWViewerType, unsigned int nViewerTeam)
{
  int m_enabled; // r9d
  int m_Size; // eax
  int v7; // eax
  int v8; // r12d
  unsigned __int16 v9; // cx
  int v10; // r14d
  CFoW_Viewer *v11; // r12
  int result; // eax
  ThreadId_t m_TargetThreadId; // r14
  unsigned __int64 v14; // r12
  uint64 m_numTimeBaseTicks; // rcx
  int m_nAllocationCount; // eax
  __int64 v17; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v19; // rax
  int v20; // [rsp+4h] [rbp-4Ch]
  unsigned __int16 v21; // [rsp+8h] [rbp-48h]
  bool VProf_597; // [rsp+Bh] [rbp-45h]
  FoWViewerType_t FoWViewerTypeb; // [rsp+Ch] [rbp-44h]
  unsigned __int16 src[25]; // [rsp+1Eh] [rbp-32h] BYREF

  if ( nViewerTeam == 10000 )
    return -1;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_597 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v14 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != &stru_352A848.m_ViewerTree.m_Nodes.m_Memory.m_nAllocationCount )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       &stru_352A848.m_ViewerTree.m_Nodes.m_Memory.m_nAllocationCount,
                       0,
                       "DOTA::FoW",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v19 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v19->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v14 + __rdtsc();
    m_Size = this->m_FreeViewers.m_Size;
    if ( m_Size > 0 )
      goto LABEL_4;
  }
  else
  {
    m_Size = this->m_FreeViewers.m_Size;
    if ( m_Size > 0 )
    {
LABEL_4:
      v7 = m_Size - 1;
      v8 = this->m_Viewers.m_Size;
      v9 = this->m_FreeViewers.m_Memory.m_pMemory[v7];
      this->m_FreeViewers.m_Size = v7;
      v10 = v9;
      v21 = v9;
      if ( v9 >= v8 )
      {
        v20 = v9 + 1;
        if ( v8 < v20 )
        {
          m_nAllocationCount = this->m_Viewers.m_Memory.m_nAllocationCount;
          if ( v20 > m_nAllocationCount )
            CUtlMemory<CFoW_Viewer *,int>::Grow(&this->m_Viewers.m_Memory, v20 - m_nAllocationCount);
          this->m_Viewers.m_Size = v20;
          v17 = v8;
          do
          {
            ++v8;
            this->m_Viewers.m_Memory.m_pMemory[v17++] = 0;
          }
          while ( this->m_Viewers.m_Size > v8 );
        }
      }
      v11 = operator new(0xA8u);
      CFoW_Viewer::CFoW_Viewer(v11, this, nViewerTeam, FoWViewerType);
      this->m_Viewers.m_Memory.m_pMemory[v21] = v11;
      src[0] = v21;
      CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::Push(&this->m_NewViewers, src);
      CFoW::InsertViewerIntoTree(this, v10);
      result = v10;
      goto LABEL_7;
    }
  }
  result = -1;
LABEL_7:
  if ( VProf_597 )
  {
    FoWViewerTypeb = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return FoWViewerTypeb;
  }
  return result;
}


// CFoW::RemoveViewer  (line 637, @0x00000000032588a0, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: CFoW::RemoveViewerFromTree, CFoW_Viewer::~CFoW_Viewer, operator delete, CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::Push
// callers: CDOTAFogOfWarSystem::BlindViewer, CDOTAFogOfWarSystem::RemoveFOWEntity, CDOTAFogOfWarTempViewers::ThinkUpdateFogOfWar
void __fastcall CFoW::RemoveViewer(CFoW *const this, int nID)
{
  unsigned __int16 v2; // bx
  __int64 v4; // r14
  CFoW_Viewer **v5; // rax
  CFoW_Viewer *v6; // r13
  unsigned __int16 src[17]; // [rsp+Eh] [rbp-22h] BYREF

  v2 = nID;
  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v4 = nID;
    if ( this->m_Viewers.m_Memory.m_pMemory[v4] != 0 )
    {
      CFoW::RemoveViewerFromTree(this, nID, 0);
      v5 = &this->m_Viewers.m_Memory.m_pMemory[v4];
      v6 = *v5;
      if ( *v5 != 0 )
      {
        CFoW_Viewer::~CFoW_Viewer(*v5);
        operator delete(v6);
      }
      this->m_Viewers.m_Memory.m_pMemory[v4] = 0;
      src[0] = v2;
      CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::Push(&this->m_FreeViewers, src);
    }
  }
}


// CFoW::UpdateViewer  (line 656, @0x0000000003258460, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: CFoW_Viewer::UpdateLocation, CFoW::RemoveViewerFromTree, CFoW_Viewer::UpdateSize, CFoW::InsertViewerIntoTree, CFoW_Viewer::UpdateTeam, CFoW_Viewer::UpdateViewerOccludeMode
// callers: CDOTAFogOfWarSystem::UpdateFogOfWar, CDOTAFogOfWarTempViewers::AddTempViewer
void __fastcall CFoW::UpdateViewer(
        CFoW *const this,
        int nID,
        unsigned int nViewerTeam,
        const Vector *const vLocation,
        float flRadius,
        FoWOccluderMode_t OccludeMode)
{
  CFoW_Viewer *v9; // r13
  Vector *p_vOldLocation; // rdx
  float v12; // xmm1_4
  Vector vOldLocation; // [rsp+10h] [rbp-40h] BYREF

  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v9 = this->m_Viewers.m_Memory.m_pMemory[nID];
    if ( v9 != 0 && nViewerTeam != 10000 )
    {
      if ( CFoW_Viewer::UpdateLocation(v9, vLocation, &vOldLocation) )
      {
        p_vOldLocation = &vOldLocation;
      }
      else
      {
        if ( flRadius == v9->m_flRadius )
          goto LABEL_8;
        p_vOldLocation = 0;
      }
      CFoW::RemoveViewerFromTree(this, nID, p_vOldLocation);
      CFoW_Viewer::UpdateSize(v9, v12);
      CFoW::InsertViewerIntoTree(this, nID);
LABEL_8:
      CFoW_Viewer::UpdateTeam(v9, nViewerTeam);
      CFoW_Viewer::UpdateViewerOccludeMode(v9, OccludeMode);
    }
  }
}


// CFoW::UpdateViewerLocation  (line 697, @0x0000000003258550, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: CFoW_Viewer::UpdateLocation, CFoW::RemoveViewerFromTree, CFoW::InsertViewerIntoTree
// callers: CFoWRevealerEntity::Spawn, CDOTAFogOfWarSystem::AddFOWEntity
void __fastcall CFoW::UpdateViewerLocation(CFoW *const this, int nID, const Vector *const vLocation)
{
  CFoW_Viewer *v5; // rdi
  Vector vOldLocation; // [rsp+0h] [rbp-30h] BYREF

  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v5 = this->m_Viewers.m_Memory.m_pMemory[nID];
    if ( v5 != 0 && CFoW_Viewer::UpdateLocation(v5, vLocation, &vOldLocation) )
    {
      CFoW::RemoveViewerFromTree(this, nID, &vOldLocation);
      CFoW::InsertViewerIntoTree(this, nID);
    }
  }
}


// CFoW::UpdateViewerSize  (line 721, @0x00000000032585d0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, IsValidIndex, PLAT_CPU_TIME, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, CFoW::RemoveViewerFromTree, CFoW_Viewer::UpdateSize, CFoW::InsertViewerIntoTree, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume, std::terminate(void), CVProfile::ExitScope
// callers: CFoWRevealerEntity::Spawn, CDOTAFogOfWarSystem::AddFOWEntity
// strings: "DOTA::FoW"
void __fastcall CFoW::UpdateViewerSize(CFoW *const this, int nID, float a3, float flRadius)
{
  __int64 v6; // r14
  CFoW_Viewer *v7; // rax
  int m_enabled; // r8d
  bool v9; // r15
  bool v10; // zf
  unsigned __int64 v11; // r12
  ThreadId_t v12; // r13
  unsigned __int64 v13; // rax
  uint64 v14; // rcx
  uint64 m_numTimeBaseTicks; // rcx
  float v16; // xmm1_4
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v19; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-48h]
  unsigned __int64 v21; // [rsp+10h] [rbp-40h]

  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v6 = nID;
    v7 = this->m_Viewers.m_Memory.m_pMemory[nID];
    if ( v7 != 0 )
    {
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v9 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        v21 = __rdtsc();
        m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
        if ( m_TargetThreadId == ThreadGetCurrentId() )
        {
          m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
          if ( m_pCurNode->m_pszName != &stru_352A848.m_ViewerTree._vptr_CUtlSphereTree + 1 )
          {
            m_pCurNode = CVProfNode::GetSubNode(
                           g_VProfCurrentProfile.m_pCurNode,
                           &stru_352A848.m_ViewerTree._vptr_CUtlSphereTree + 1,
                           0,
                           "DOTA::FoW",
                           4);
            g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
          }
          v19 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
          v19->m_BudgetFlags |= 4u;
          CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
          g_VProfCurrentProfile.m_fAtRoot = 0;
        }
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v21 + __rdtsc();
        v10 = a3 == this->m_Viewers.m_Memory.m_pMemory[v6]->m_flRadius;
      }
      else
      {
        v10 = a3 == v7->m_flRadius;
      }
      if ( !v10 )
      {
        CFoW::RemoveViewerFromTree(this, nID, 0);
        CFoW_Viewer::UpdateSize(this->m_Viewers.m_Memory.m_pMemory[v6], v16);
        CFoW::InsertViewerIntoTree(this, nID);
      }
      if ( v9 )
      {
        v11 = __rdtsc();
        if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
        {
          v12 = g_VProfCurrentProfile.m_TargetThreadId;
          if ( v12 == ThreadGetCurrentId() )
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
        }
        v13 = __rdtsc();
        v14 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v14 - v11 + (v13 | (HIDWORD(v13) << 32));
      }
    }
  }
}


// CFoW::UpdateViewerOccludeMode  (line 746, @0x00000000032541a0, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: CFoW_Viewer::UpdateViewerOccludeMode
void __fastcall CFoW::UpdateViewerOccludeMode(CFoW *const this, int nID, FoWOccluderMode_t OccludeMode)
{
  CFoW_Viewer *v3; // rdi

  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v3 = this->m_Viewers.m_Memory.m_pMemory[nID];
    if ( v3 != 0 )
      CFoW_Viewer::UpdateViewerOccludeMode(v3, OccludeMode);
  }
}


// CFoW::UpdateViewerTeam  (line 763, @0x00000000032541e0, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: CFoW_Viewer::UpdateTeam
void __fastcall CFoW::UpdateViewerTeam(CFoW *const this, int nID, unsigned int nViewerTeam)
{
  CFoW_Viewer *v3; // rdi

  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v3 = this->m_Viewers.m_Memory.m_pMemory[nID];
    if ( v3 != 0 )
      CFoW_Viewer::UpdateTeam(v3, nViewerTeam);
  }
}


// CFoW::UpdateViewerName  (line 781, @0x0000000003254220, libserver.so)  // inlines: IsValidIndex, operator[]
// calls: CFoW_Viewer::SetName
// callers: CFoWRevealerEntity::Spawn, CDOTAFogOfWarSystem::AddFOWEntity
void __fastcall CFoW::UpdateViewerName(CFoW *const this, int nID, const char *pszName)
{
  CFoW_Viewer *v3; // rdi

  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v3 = this->m_Viewers.m_Memory.m_pMemory[nID];
    if ( v3 != 0 )
      CFoW_Viewer::SetName(v3, pszName);
  }
}


// CFoW::HasUnobstructedViewer  (line 793, @0x0000000003254260, libserver.so)  // inlines: DistToSqr, LengthSqr, Square<float>, Vector2D, Vector2DSubtract
// callers: CDOTA_Unit_Hero_MonkeyKing::AddCustomVisibility
bool __fastcall CFoW::HasUnobstructedViewer(CFoW *const this, unsigned int nViewerTeam, const Vector *const vLocation)
{
  int m_Size; // ecx
  float x; // xmm3_4
  float y; // xmm4_4
  CFoW_Viewer **m_pMemory; // rdi
  __int64 v7; // rax
  CFoW_Viewer *v8; // rdx

  m_Size = this->m_Viewers.m_Size;
  x = vLocation->x;
  y = vLocation->y;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_Viewers.m_Memory.m_pMemory;
  v7 = 0;
  while ( 1 )
  {
    v8 = m_pMemory[v7];
    if ( v8 != 0
      && v8->m_nViewerTeam == nViewerTeam
      && v8->m_OccludeMode == FoWOccluderMode_t::FOW_OCCLUDE_MODE_NONE
      && (v8->m_flRadius * v8->m_flRadius) >= (((v8->m_vLocation.x - x) * (v8->m_vLocation.x - x))
                                             + ((v8->m_vLocation.y - y) * (v8->m_vLocation.y - y))) )
    {
      break;
    }
    if ( m_Size <= ++v7 )
      return 0;
  }
  return 1;
}


// CFoW::GetViewerSize  (line 812, @0x00000000032542f0, libserver.so)  // inlines: IsValidIndex, operator[]
float __fastcall CFoW::GetViewerSize(CFoW *const this, int nID)
{
  CFoW_Viewer *v2; // rax

  if ( nID >= 0 && nID < this->m_Viewers.m_Size && (v2 = this->m_Viewers.m_Memory.m_pMemory[nID]) != 0 )
    return v2->m_flRadius;
  else
    return 1.0;
}


// CFoW::GetViewerLocation  (line 818, @0x0000000003254330, libserver.so)  // inlines: IsValidIndex, Vector, operator[]
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CFoW::GetViewerLocation(int)::vError, CFoW::GetViewerLocation(int)::vError
const Vector *__fastcall CFoW::GetViewerLocation(CFoW *const this, int nID)
{
  const Vector *result; // rax
  CFoW_Viewer *v4; // rdx
  int v5; // eax
  int nIDa; // [rsp+Ch] [rbp-14h]

  if ( `guard variable for'CFoW::GetViewerLocation(int)::vError == 0 )
  {
    nIDa = nID;
    v5 = __cxa_guard_acquire(&`guard variable for'CFoW::GetViewerLocation(int)::vError);
    nID = nIDa;
    if ( v5 != 0 )
    {
      CFoW::GetViewerLocation(int)::vError.x = -99999.0;
      CFoW::GetViewerLocation(int)::vError.y = -99999.0;
      CFoW::GetViewerLocation(int)::vError.z = -99999.0;
      __cxa_guard_release(&`guard variable for'CFoW::GetViewerLocation(int)::vError);
      nID = nIDa;
    }
  }
  result = &CFoW::GetViewerLocation(int)::vError;
  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v4 = this->m_Viewers.m_Memory.m_pMemory[nID];
    if ( v4 != 0 )
      return &v4->m_vLocation;
  }
  return result;
}


// CFoW::GetViewerType  (line 826, @0x00000000032543d0, libserver.so)  // inlines: IsValidIndex, operator[]
FoWViewerType_t __fastcall CFoW::GetViewerType(CFoW *const this, int nID)
{
  FoWViewerType_t result; // eax
  CFoW_Viewer *v3; // rdx

  result = FoWViewerType_t::FOWVIEWERTYPE_MAX;
  if ( nID >= 0 && nID < this->m_Viewers.m_Size )
  {
    v3 = this->m_Viewers.m_Memory.m_pMemory[nID];
    if ( v3 != 0 )
      return v3->m_FoWViewerType;
  }
  return result;
}


// CFoW::AddBlockingOccluder  (line 837, @0x0000000003257e20, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetGridUnitsClamped, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CFoW::SnapCoordsToGrid, CFoW::GetGridUnitsClamped, Warning, CFoW::DirtyViewers, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// callers: CFoWBlockerEntity::Spawn
// strings: "DOTA::FoW"
uint32 __fastcall CFoW::AddBlockingOccluder(CFoW *const this, const Vector *const vLocation)
{
  int m_enabled; // r9d
  bool v5; // r14
  uint32 v6; // r13d
  unsigned __int8 *v8; // rax
  unsigned __int64 v9; // r12
  ThreadId_t v10; // r14
  uint64 v11; // rcx
  unsigned __int64 v12; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v16; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-58h]
  int nGridX; // [rsp+18h] [rbp-48h] BYREF
  int nGridY; // [rsp+1Ch] [rbp-44h] BYREF
  Vector vLocationSnapped; // [rsp+20h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v12 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != &stru_352A848.m_VisibleBits[8].m_Memory.m_pMemory + 5 )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       &stru_352A848.m_VisibleBits[8].m_Memory.m_pMemory + 5,
                       0,
                       "DOTA::FoW",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v16 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v16->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v12 + __rdtsc();
  }
  CFoW::SnapCoordsToGrid(this, vLocation, &vLocationSnapped);
  if ( CFoW::GetGridUnitsClamped(this, &vLocationSnapped, &nGridX, &nGridY) )
  {
    Warning(&stru_352A848.m_VisibilityGridDegree[4], vLocation->x, vLocation->y);
    v6 = 0;
    if ( !v5 )
      return v6;
  }
  else
  {
    CFoW::DirtyViewers(this, nGridX, nGridY, this->m_flOccluderRadius);
    v8 = &this->m_TileInfo.m_Memory.m_pMemory[nGridY + nGridX * this->m_nGridYUnits];
    v6 = ((nGridY & 0x3FF) << 10) | nGridX & 0x3FF;
    *v8 |= 0x40u;
    if ( !v5 )
      return v6;
  }
  v9 = __rdtsc();
  if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
  {
    v10 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v10 == ThreadGetCurrentId() )
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
  }
  v11 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
  ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v11 - v9 + __rdtsc();
  return v6;
}


// CFoW::AddOccluder  (line 875, @0x00000000032580e0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetGridUnitsClamped, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CFoW::SnapCoordsToGrid, CFoW::GetGridUnitsClamped, CFoW::DirtyViewers, CVProfile::ExitScope, Warning, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_SimpleObstruction::Spawn, CDOTA_MapTree::Spawn, CDOTA_TempTree::InitTree
// strings: "DOTA::FoW"
uint32 __fastcall CFoW::AddOccluder(CFoW *const this, const Vector *const vLocation)
{
  int m_enabled; // r10d
  bool v5; // r14
  vec_t m_flTreeRadius; // xmm0_4
  __int64 v7; // r13
  __int16 v8; // dx
  __int16 v9; // ax
  uint32 result; // eax
  unsigned __int64 v11; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v14; // rax
  uint32 v15; // [rsp+8h] [rbp-58h]
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-58h]
  int nGridX; // [rsp+18h] [rbp-48h] BYREF
  int nGridY; // [rsp+1Ch] [rbp-44h] BYREF
  Vector vLocationSnapped; // [rsp+20h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v11 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != &stru_352A848.m_VisibleBits[9].m_Memory.m_pMemory + 7 )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       &stru_352A848.m_VisibleBits[9].m_Memory.m_pMemory + 7,
                       0,
                       "DOTA::FoW",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v14 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v14->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v11 + __rdtsc();
  }
  CFoW::SnapCoordsToGrid(this, vLocation, &vLocationSnapped);
  if ( CFoW::GetGridUnitsClamped(this, &vLocationSnapped, &nGridX, &nGridY) )
  {
    Warning(&stru_352A848.m_VisibilityGridDegree[6], vLocation->x, vLocation->y);
    result = 0;
  }
  else
  {
    m_flTreeRadius = this->m_flTreeRadius;
    v7 = nGridY + nGridX * this->m_nGridYUnits;
    if ( (this->m_TileInfo.m_Memory.m_pMemory[v7] & 0x80u) != 0 )
    {
      CFoW::DirtyViewers(this, nGridX, nGridY, m_flTreeRadius);
      result = 0;
    }
    else
    {
      CFoW::DirtyViewers(this, nGridX, nGridY, m_flTreeRadius);
      v8 = nGridY;
      v9 = nGridX;
      this->m_TileInfo.m_Memory.m_pMemory[v7] |= 0x80u;
      result = ((v8 & 0x3FF) << 10) | v9 & 0x3FF;
    }
  }
  if ( v5 )
  {
    v15 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v15;
  }
  return result;
}


// CFoW::RemoveOccluder  (line 923, @0x00000000032583e0, libserver.so)
// calls: CFoW::EnableOccluder
// callers: CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction, CDOTA_Tree::ShutdownTree
void __fastcall CFoW::RemoveOccluder(CFoW *const this, uint32 nID)
{
  CFoW::EnableOccluder(this, nID, 0);
}


// CFoW::EnableOccluder  (line 934, @0x0000000003258300, libserver.so)  // inlines: operator[]
// calls: Warning, CFoW::DirtyViewers
// callers: CDOTA_SimpleObstruction::SetEnabled, CDOTA_MapTree::CutDownEx, CDOTA_MapTree::GrowBack, CFoW::RemoveOccluder
void __fastcall CFoW::EnableOccluder(CFoW *const this, uint32 nID, bool bEnable)
{
  signed int v3; // eax
  __int64 v4; // rcx
  int m_nGridYUnits; // edi
  __int64 v7; // r12
  char v8; // r13

  if ( nID != 0 )
  {
    v4 = nID >> 10;
    v3 = nID & 0x3FF;
    LOWORD(v4) = v4 & 0x3FF;
    if ( v3 >= this->m_nGridXUnits || (m_nGridYUnits = this->m_nGridYUnits, (v4 = v4) >= m_nGridYUnits) )
    {
      Warning(&stru_352A848.m_VisibilityGridDegree[7].m_Memory.m_nAllocationCount, nID, bEnable, v4);
    }
    else
    {
      v7 = v4 + v3 * m_nGridYUnits;
      v8 = this->m_TileInfo.m_Memory.m_pMemory[v7];
      if ( v8 < 0 )
      {
        if ( !bEnable )
        {
          CFoW::DirtyViewers(this, v3, v4, this->m_flTreeRadius);
          this->m_TileInfo.m_Memory.m_pMemory[v7] = v8 & 0x7F;
        }
      }
      else if ( bEnable )
      {
        CFoW::DirtyViewers(this, v3, v4, this->m_flTreeRadius);
        this->m_TileInfo.m_Memory.m_pMemory[v7] = v8 | 0x80;
      }
    }
  }
}


// CFoW::SolveVisibility  (line 983, @0x0000000003255160, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, Clamp<float>, Clear, EnterScope, GetElapsed, GetFloat, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CFoW_Viewer::MergeViewerVisibility, CFoW::UpdateVisibleAmounts, CVProfile::ExitScope, CFoW::UpdateVisibleAmountsAndGridDegree, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CFoW::EndUpdate, CFoW::EnableFogOfWar
// strings: "DOTA::FoW"
__int64 __fastcall CFoW::SolveVisibility(
        CFoW *const this,
        float flFrameTime,
        int FrameNumber,
        bool *const fUpdated,
        float a5)
{
  int m_enabled; // r10d
  bool v8; // r15
  bool v9; // zf
  float m_flElapsedFrameTime; // xmm0_4
  __int64 v11; // r12
  unsigned int v12; // r13d
  CFoW_Viewer *v13; // rdi
  float v14; // xmm0_4
  float v15; // xmm0_4
  uint32 v16; // esi
  bool m_bIsDotaServer; // al
  __int64 result; // rax
  int m_FrameNumber; // eax
  unsigned __int64 v20; // r13
  uint64 m_numTimeBaseTicks; // rcx
  __int64 v22; // r12
  CFoW_Viewer *v23; // rdi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v25; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-48h]
  unsigned int flFrameTimeb; // [rsp+1Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v8 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v20 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != &stru_352A848.m_VisibleBits[4].m_Memory.m_nGrowSize + 1 )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       &stru_352A848.m_VisibleBits[4].m_Memory.m_nGrowSize + 1,
                       0,
                       "DOTA::FoW",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v25 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v25->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v20 + __rdtsc();
  }
  if ( this->m_bFowEnabled )
  {
    this->m_bInSolveVisibility = 1;
    v9 = !this->m_bIsDotaServer;
    m_flElapsedFrameTime = flFrameTime + this->m_flElapsedFrameTime;
    this->m_flElapsedFrameTime = m_flElapsedFrameTime;
    if ( v9 )
    {
      m_FrameNumber = this->m_FrameNumber;
      this->m_FrameNumber = FrameNumber;
      if ( m_FrameNumber == FrameNumber )
      {
        v16 = 0x4000;
        v12 = 0;
        goto LABEL_22;
      }
    }
    else if ( m_flElapsedFrameTime < fow_tile_update_time.m_pParent->m_Value.m_fValue )
    {
      if ( this->m_NewViewers.m_Size == 0 )
      {
        v16 = 0x4000;
        v12 = 0;
        goto LABEL_15;
      }
      if ( this->m_NewViewers.m_Size <= 0 )
      {
        v12 = 0;
      }
      else
      {
        v22 = 0;
        v12 = 0;
        do
        {
          v23 = this->m_Viewers.m_Memory.m_pMemory[this->m_NewViewers.m_Memory.m_pMemory[v22]];
          if ( v23 != 0 && v23->m_flRadius > 1.0 )
          {
            ++v12;
            CFoW_Viewer::MergeViewerVisibility(v23, 1);
          }
          ++v22;
        }
        while ( this->m_NewViewers.m_Size > v22 );
      }
      v16 = 20479;
      *fUpdated = 1;
      m_bIsDotaServer = this->m_bIsDotaServer;
      goto LABEL_14;
    }
    v11 = 0;
    v12 = 0;
    if ( this->m_Viewers.m_Size > 0 )
    {
      do
      {
        v13 = this->m_Viewers.m_Memory.m_pMemory[v11];
        if ( v13 != 0 && v13->m_flRadius > 1.0 )
          v12 += CFoW_Viewer::MergeViewerVisibility(v13, 1);
        ++v11;
      }
      while ( this->m_Viewers.m_Size > v11 );
      m_flElapsedFrameTime = this->m_flElapsedFrameTime;
    }
    a5 = 0.0;
    v14 = m_flElapsedFrameTime - fow_tile_update_time.m_pParent->m_Value.m_fValue;
    this->m_flElapsedFrameTime = v14;
    if ( v14 < 0.0 )
      v15 = 0.0;
    else
      v15 = fminf(fow_tile_update_time.m_pParent->m_Value.m_fValue, v14);
    this->m_flElapsedFrameTime = v15;
    v16 = 4095;
    *fUpdated = 1;
    m_bIsDotaServer = this->m_bIsDotaServer;
LABEL_14:
    if ( m_bIsDotaServer )
    {
LABEL_15:
      CFoW::UpdateVisibleAmounts(this, COERCE_DOUBLE(LODWORD(flFrameTime)), a5, v16);
      goto LABEL_16;
    }
LABEL_22:
    CFoW::UpdateVisibleAmountsAndGridDegree(this, flFrameTime, a5, v16);
LABEL_16:
    this->m_bInSolveVisibility = 0;
    result = v12;
    this->m_NewViewers.m_Size = 0;
    if ( !v8 )
      return result;
LABEL_19:
    flFrameTimeb = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return flFrameTimeb;
  }
  result = 0;
  if ( v8 )
    goto LABEL_19;
  return result;
}


// CFoW::GetLocationInfo  (line 1077, @0x0000000003255960, libserver.so)  // inlines: GetGridUnitsClamped, operator[]
// calls: CFoW::GetGridUnitsClamped
// callers: CBaseModelEntity::UpdateVisibility, CDOTA_Modifier_Teleporting::GenerateSound, CDOTA_BaseNPC::UpdateVisibility, CDOTA_NeutralSpawner::Think, CDOTA_Ability_AntiMage_Blink::CastFilterResult, CDOTA_Ability_QueenOfPain_Blink::CastFilterResult, CDOTA_Ability_Furion_Teleportation::CastFilterResult, CDOTA_Item_BlinkDagger::CastFilterResult, CFoW::GetLocationInfoForRadius
uint32 __fastcall CFoW::GetLocationInfo(CFoW *const this, unsigned int nViewerTeam, const Vector *const vLocation)
{
  __int64 v3; // rbx
  int nGridX; // [rsp+8h] [rbp-18h] BYREF
  int nGridY[5]; // [rsp+Ch] [rbp-14h] BYREF

  v3 = nViewerTeam;
  if ( nViewerTeam == 10000
    || nViewerTeam >= this->m_nNumberOfTeams
    || CFoW::GetGridUnitsClamped(this, vLocation, &nGridX, nGridY) )
  {
    return 0;
  }
  else
  {
    return this->m_VisibleBits[v3].m_Memory.m_pMemory[nGridY[0] + nGridX * this->m_nGridYUnits];
  }
}


// CFoW::GetLocationInfoForRadius  (line 1106, @0x00000000032559d0, libserver.so)  // inlines: GetGridUnitsClamped, VectorAdd, VectorSubtract, operator+, operator-
// calls: CFoW::GetGridUnitsClamped, Warning, CFoW::GetLocationInfo
// callers: CDOTAFogOfWarSystem::IsLocationVisible, CDOTA_TempTree::UpdateVisibility, CDOTA_Unit_Hero_MonkeyKing::AddCustomVisibility
// strings: "CFoW::GetLocationInfoForRadius() called with large radius %g.\n", "CFoW::GetLocationInfoForRadius: Not Initialized!\n"
_BOOL8 __fastcall CFoW::GetLocationInfoForRadius(
        CFoW *const this,
        __int64 nViewerTeam,
        const Vector *const vLocation,
        float flRadius)
{
  __int64 v4; // r12
  float v6; // xmm1_4
  float y; // xmm0_4
  float x; // xmm4_4
  vec_t v9; // xmm3_4
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rsi
  unsigned __int16 *m_pMemory; // rdx
  __int16 *v14; // rdx
  int v15; // eax
  __int16 v16; // cx
  const Vector *vLocationa; // [rsp+0h] [rbp-50h]
  int nMinGridX; // [rsp+10h] [rbp-40h] BYREF
  int nMinGridY; // [rsp+14h] [rbp-3Ch] BYREF
  int nMaxGridX; // [rsp+18h] [rbp-38h] BYREF
  int nMaxGridY; // [rsp+1Ch] [rbp-34h] BYREF
  Vector vMin; // [rsp+20h] [rbp-30h] BYREF
  Vector vMax; // [rsp+30h] [rbp-20h] BYREF

  v4 = nViewerTeam;
  if ( nViewerTeam == 10000 || nViewerTeam >= this->m_nNumberOfTeams )
    return 0;
  v6 = flRadius;
  if ( flRadius > 1.0 )
  {
    if ( this->m_nMagicInitNumber != 0 )
    {
      if ( flRadius > 2048.0 )
      {
        vLocationa = vLocation;
        Warning("CFoW::GetLocationInfoForRadius() called with large radius %g.\n", flRadius);
        vLocation = vLocationa;
        v6 = flRadius;
      }
      y = vLocation->y;
      x = vLocation->x;
      v9 = vLocation->x + v6;
      vMin.z = vLocation->z;
      vMax.x = v9;
      vMin.x = x - v6;
      vMax.z = vMin.z + 0.0;
      vMin.y = y - v6;
      vMax.y = v6 + y;
      CFoW::GetGridUnitsClamped(this, &vMin, &nMinGridX, &nMinGridY);
      CFoW::GetGridUnitsClamped(this, &vMax, &nMaxGridX, &nMaxGridY);
      v10 = nMaxGridY - nMinGridY;
      if ( nMaxGridX - nMinGridX >= 0 )
      {
        v11 = 0;
        v12 = 2LL * (nMinGridY + nMinGridX * this->m_nGridYUnits) + 2;
        do
        {
          if ( v10 >= 0 )
          {
            m_pMemory = this->m_VisibleBits[v4].m_Memory.m_pMemory;
            if ( (*(m_pMemory + v12 - 1) & 0x40) != 0 )
              return 1;
            v14 = (m_pMemory + v12);
            v15 = 0;
            while ( v10 >= ++v15 )
            {
              v16 = *v14++;
              if ( (v16 & 0x4000) != 0 )
                return 1;
            }
          }
          ++v11;
          v12 += 2LL * this->m_nGridYUnits;
        }
        while ( nMaxGridX - nMinGridX >= v11 );
      }
    }
    else
    {
      Warning("CFoW::GetLocationInfoForRadius: Not Initialized!\n", nViewerTeam, vLocation);
    }
    return 0;
  }
  return (CFoW::GetLocationInfo(this, nViewerTeam, vLocation) & 0x4000) != 0;
}


// CFoW::GetLocationInfo  (line 1161, @0x0000000003254410, libserver.so)  // inlines: operator[]
// calls: Warning
// callers: CFoW::DrawDebugInfo
// strings: "CFoW: GetLocationInfo() called with invalid grid location of %d %d\n", "CFoW::GetLocationInfo: Not Initialized!"
uint32 __fastcall CFoW::GetLocationInfo(CFoW *const this, unsigned int nViewerTeam, uint32 GridX, uint32 GridY)
{
  uint32 result; // eax
  int v7; // r13d
  uint32 v8; // [rsp-30h] [rbp-30h]
  unsigned int v9; // [rsp-2Ch] [rbp-2Ch]

  if ( nViewerTeam == 10000 )
    return 0;
  result = 0;
  if ( nViewerTeam < this->m_nNumberOfTeams )
  {
    v7 = GridY + GridX * this->m_nGridYUnits;
    if ( this->m_nMagicInitNumber == 0 )
    {
      v8 = GridY;
      v9 = nViewerTeam;
      Warning("CFoW::GetLocationInfo: Not Initialized!");
      GridY = v8;
      nViewerTeam = v9;
    }
    if ( v7 >= this->m_VisibleBits[0].m_Size )
    {
      Warning("CFoW: GetLocationInfo() called with invalid grid location of %d %d\n", GridX, GridY);
      return 0;
    }
    else
    {
      return this->m_VisibleBits[nViewerTeam].m_Memory.m_pMemory[v7];
    }
  }
  return result;
}


// CFoW::GetTileLocationVisibilityDegree  (line 1197, @0x0000000003255710, libserver.so)  // inlines: GridDegreeToFloatClamped, operator[]
// calls: CFoW::GetGridIndex, Warning
// callers: CFoW::GetLocationVisibilityDegree_Circular
// strings: "CFoW::GetTileLocationVisibilityDegree: Not Initialized!\n"
float __fastcall CFoW::GetTileLocationVisibilityDegree(
        CFoW *const this,
        unsigned int nViewerTeam,
        const Vector *const vLocation,
        const char *pszDebugLocation)
{
  float v4; // xmm2_4
  __int64 v5; // r12
  int GridIndex; // eax

  v5 = nViewerTeam;
  if ( this->m_nNumberOfTeams <= nViewerTeam )
    return 0.0;
  if ( this->m_nMagicInitNumber != 0 )
  {
    GridIndex = CFoW::GetGridIndex(this, vLocation->x, vLocation->y, v4);
    if ( GridIndex < 0 || GridIndex >= this->m_VisibilityGridDegree[v5].m_Size )
      return 0.0;
    return this->m_VisibilityGridDegree[v5].m_Memory.m_pMemory[GridIndex] * 0.0039215689;
  }
  else
  {
    Warning("CFoW::GetTileLocationVisibilityDegree: Not Initialized!\n", nViewerTeam, vLocation, pszDebugLocation);
    return 0.0;
  }
}


// CFoW::GetTileLocationVisibilityDegreeFast  (line 1235, @0x00000000032544c0, libserver.so)  // inlines: GridDegreeToFloatClamped, operator[]
float __fastcall CFoW::GetTileLocationVisibilityDegreeFast(
        CFoW *const this,
        unsigned int nViewerTeam,
        int nGridX,
        int nGridY,
        const char *pszDebugLocation)
{
  return this->m_VisibilityGridDegree[nViewerTeam].m_Memory.m_pMemory[nGridY + this->m_nGridYUnits * nGridX]
       * 0.0039215689;
}


// CFoW::GetLocationVisibilityDegree  (line 1250, @0x0000000003256230, libserver.so)  // inlines: GetBool, GetInt, VectorAdd, VectorSubtract, operator+, operator-
// calls: CFoW::GetLocationVisibilityDegree_Circular, CFoW::GetLocationVisibilityDegree
// callers: CParticleSystemQuery::GetPointVisibilityPercentage, ShouldDrawParticleFOW
float __fastcall CFoW::GetLocationVisibilityDegree(
        CFoW *const this,
        __int64 nViewerTeam,
        const Vector *const vLocation,
        bool bQuickIfPartialVisible,
        double flRadius,
        const char *pszDebugLocation)
{
  float y; // xmm1_4
  float x; // xmm4_4
  vec_t v9; // xmm3_4
  Vector vMin; // [rsp+0h] [rbp-20h] BYREF
  Vector vMax; // [rsp+10h] [rbp-10h] BYREF

  if ( dota_fow_circle_test.m_pParent->m_Value.m_nValue != 0 )
    return CFoW::GetLocationVisibilityDegree_Circular(
             this,
             nViewerTeam,
             vLocation,
             bQuickIfPartialVisible,
             flRadius,
             pszDebugLocation);
  y = vLocation->y;
  x = vLocation->x;
  v9 = vLocation->x + *&flRadius;
  vMin.z = vLocation->z;
  vMax.x = v9;
  vMin.x = x - *&flRadius;
  vMax.z = vMin.z + 0.0;
  vMin.y = y - *&flRadius;
  vMax.y = *&flRadius + y;
  return CFoW::GetLocationVisibilityDegree(this, nViewerTeam, &vMin, &vMax, bQuickIfPartialVisible, pszDebugLocation);
}


// CFoW::GetLocationVisibilityDegree_Circular  (line 1267, @0x0000000003255ed0, libserver.so)  // inlines: DistTo, FastSqrt, GetGridUnitsClamped, GridDegreeToFloatClamped, Length, PLAT_CPU_TIME, Sample, Square<float>, Square<int>, Start, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: CFoW::GetGridUnitsClamped, Warning, CFoW::GetTileLocationVisibilityDegree
// callers: CFoW::GetLocationVisibilityDegree
// strings: "CFoW::GetLocationVisibilityDegree: Not Initialized!\n"
float __fastcall CFoW::GetLocationVisibilityDegree_Circular(
        CFoW *const this,
        __int64 nViewerTeam,
        const Vector *const vLocation,
        __int64 bQuickIfPartialVisible,
        double flRadius,
        const char *pszDebugLocation)
{
  __int64 v7; // r14
  float y; // xmm2_4
  vec_t v11; // xmm3_4
  vec_t v12; // xmm5_4
  bool v13; // cf
  float v14; // xmm5_4
  vec_t v15; // xmm2_4
  vec_t v16; // xmm5_4
  float result; // xmm0_4
  char v18; // r12
  int v19; // r11d
  int v20; // r15d
  int v21; // ecx
  int v22; // edx
  const char *v23; // r8
  int v24; // eax
  __int64 v25; // rsi
  int v26; // ebx
  int m_nGridYUnits; // esi
  int v28; // eax
  unsigned __int8 *v29; // r9
  float v30; // xmm0_4
  int v31; // r13d
  int i; // edi
  int v33; // eax
  float nStridea; // [rsp+18h] [rbp-78h]
  __int64 nStride; // [rsp+18h] [rbp-78h]
  int nMinGridX; // [rsp+28h] [rbp-68h] BYREF
  int nMinGridY; // [rsp+2Ch] [rbp-64h] BYREF
  int nMaxGridX; // [rsp+30h] [rbp-60h] BYREF
  int nMaxGridY; // [rsp+34h] [rbp-5Ch] BYREF
  int nCenterGridX; // [rsp+38h] [rbp-58h] BYREF
  int nCenterGridY; // [rsp+3Ch] [rbp-54h] BYREF
  Vector vMin; // [rsp+40h] [rbp-50h] BYREF
  Vector vMax; // [rsp+50h] [rbp-40h] BYREF

  v7 = nViewerTeam;
  if ( *&flRadius <= 1.0 )
    return CFoW::GetTileLocationVisibilityDegree(this, nViewerTeam, vLocation, pszDebugLocation);
  y = vLocation->y;
  v11 = vLocation->x + *&flRadius;
  v12 = vLocation->x - *&flRadius;
  v13 = nViewerTeam < this->m_nNumberOfTeams;
  vMin.z = vLocation->z;
  vMax.x = v11;
  vMin.x = v12;
  v14 = y;
  v15 = y + *&flRadius;
  v16 = v14 - *&flRadius;
  vMax.z = vMin.z + 0.0;
  result = 0.0;
  vMax.y = v15;
  vMin.y = v16;
  if ( v13 )
  {
    if ( this->m_nMagicInitNumber == 0 )
    {
      Warning(
        "CFoW::GetLocationVisibilityDegree: Not Initialized!\n",
        nViewerTeam,
        vLocation,
        bQuickIfPartialVisible,
        pszDebugLocation,
        0.0,
        flRadius);
      return 0.0;
    }
    v18 = bQuickIfPartialVisible;
    nStridea = *&flRadius;
    __rdtsc();
    CFoW::GetGridUnitsClamped(this, &vMin, &nMinGridX, &nMinGridY);
    CFoW::GetGridUnitsClamped(this, &vMax, &nMaxGridX, &nMaxGridY);
    CFoW::GetGridUnitsClamped(this, vLocation, &nCenterGridX, &nCenterGridY);
    v19 = nMaxGridY;
    v20 = nMaxGridX;
    v21 = nMinGridY;
    v22 = nMinGridX;
    v23 = pszDebugLocation;
    v24 = nMaxGridY - nMinGridY;
    v25 = ((nMaxGridY - nMinGridY) * (nMaxGridX - nMinGridX));
    v26 = (((nStridea * this->m_nHorizontalGridSizeRcp) + 1.0) * ((nStridea * this->m_nHorizontalGridSizeRcp) + 1.0));
    if ( v25 > 1561 )
    {
      Warning(
        &stru_352A848.m_bInSolveVisibility,
        v25,
        pszDebugLocation,
        (fsqrt(
           (((vMin.x - vMax.x) * (vMin.x - vMax.x)) + ((vMin.y - vMax.y) * (vMin.y - vMax.y)))
         + ((vMin.z - vMax.z) * (vMin.z - vMax.z)))
       * 0.5));
      v19 = nMaxGridY;
      v21 = nMinGridY;
      v20 = nMaxGridX;
      v22 = nMinGridX;
      v23 = pszDebugLocation;
      v24 = nMaxGridY - nMinGridY;
    }
    m_nGridYUnits = this->m_nGridYUnits;
    v28 = m_nGridYUnits + ~v24;
    v29 = &this->m_VisibilityGridDegree[v7].m_Memory.m_pMemory[v22 * m_nGridYUnits + v21];
    if ( v22 > v20 )
      goto LABEL_24;
    v30 = 0.0;
    v31 = 0;
    nStride = v28;
    do
    {
      if ( v21 <= v19 )
      {
        for ( i = v21; i <= v19; ++i )
        {
          if ( v26 >= (v22 - nCenterGridX) * (v22 - nCenterGridX) + (i - nCenterGridY) * (i - nCenterGridY) )
          {
            if ( v18 != 0 )
            {
              if ( *v29 != 0 )
                return 1.0;
              v33 = 0;
            }
            else
            {
              v33 = *v29;
            }
            ++v31;
            v30 = v30 + (v33 * 0.0039215689);
          }
          ++v29;
        }
      }
      ++v22;
      v29 += nStride;
    }
    while ( v22 <= v20 );
    if ( v31 != 0 )
    {
      return v30 / v31;
    }
    else
    {
LABEL_24:
      Warning(
        &stru_352A848.m_WasVisibleUpdateID[7],
        v23,
        ((vMin.x + vMax.x) * 0.5),
        ((vMin.y + vMax.y) * 0.5),
        ((vMin.z + vMax.z) * 0.5));
      return 0.0;
    }
  }
  return result;
}


// CFoW::GetLocationVisibilityDegree  (line 1347, @0x0000000003255b80, libserver.so)  // inlines: AlignValue<int>, DistTo, FastSqrt, GetGridUnitsClamped, GridDegreeToFloatClamped, Length, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+
// calls: CFoW::GetGridUnitsClamped, Warning
// callers: ShouldDrawParticleFOW, CFoW::GetLocationVisibilityDegree
// strings: "CFoW::GetLocationVisibilityDegree: Not Initialized!\n"
float __fastcall CFoW::GetLocationVisibilityDegree(
        CFoW *const this,
        unsigned int nViewerTeam,
        const Vector *const vMin,
        const Vector *const vMax,
        bool bQuickIfPartialVisible,
        const char *pszDebugLocation)
{
  __int64 v6; // r14
  __int64 m_nMagicInitNumber; // rsi
  int v11; // edi
  int v12; // edx
  int v13; // r10d
  bool v14; // r8
  const char *v15; // r9
  int v16; // eax
  __int64 v17; // rsi
  int v18; // esi
  int v19; // r11d
  unsigned __int8 *v20; // rax
  int v21; // esi
  unsigned int v22; // ecx
  signed int v23; // r8d
  unsigned int v24; // r9d
  unsigned int v25; // esi
  unsigned __int8 *v26; // rdx
  unsigned __int8 *v27; // rax
  int v29; // r12d
  float v30; // xmm0_4
  int v31; // ecx
  unsigned __int8 *v32; // rdi
  int v33; // r8d
  const char *v34; // rdx
  unsigned __int8 *v35; // rax
  bool pszDebugLocationb; // [rsp+0h] [rbp-50h]
  const char *v39; // [rsp+8h] [rbp-48h]
  int nMinGridX; // [rsp+10h] [rbp-40h] BYREF
  int nMinGridY; // [rsp+14h] [rbp-3Ch] BYREF
  int nMaxGridX; // [rsp+18h] [rbp-38h] BYREF
  int nMaxGridY[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v6 = nViewerTeam;
  if ( this->m_nNumberOfTeams <= nViewerTeam )
    return 0.0;
  m_nMagicInitNumber = this->m_nMagicInitNumber;
  if ( m_nMagicInitNumber == 0 )
  {
    Warning(
      "CFoW::GetLocationVisibilityDegree: Not Initialized!\n",
      m_nMagicInitNumber,
      vMin,
      vMax,
      bQuickIfPartialVisible,
      pszDebugLocation);
    return 0.0;
  }
  CFoW::GetGridUnitsClamped(this, vMin, &nMinGridX, &nMinGridY);
  CFoW::GetGridUnitsClamped(this, vMax, &nMaxGridX, nMaxGridY);
  v11 = nMaxGridX;
  v12 = nMinGridY;
  v13 = nMinGridX;
  v14 = bQuickIfPartialVisible;
  v15 = pszDebugLocation;
  v16 = nMaxGridY[0] - nMinGridY;
  v17 = ((nMaxGridY[0] - nMinGridY) * (nMaxGridX - nMinGridX));
  if ( v17 > 1536 )
  {
    v34 = pszDebugLocation;
    pszDebugLocationb = bQuickIfPartialVisible;
    v39 = v15;
    Warning(
      &stru_352A848.m_bInSolveVisibility,
      v17,
      v34,
      (fsqrt(
         (((vMin->x - vMax->x) * (vMin->x - vMax->x)) + ((vMin->y - vMax->y) * (vMin->y - vMax->y)))
       + ((vMin->z - vMax->z) * (vMin->z - vMax->z)))
     * 0.5));
    v18 = nMaxGridY[0];
    v12 = nMinGridY;
    v11 = nMaxGridX;
    v13 = nMinGridX;
    v15 = v39;
    v16 = nMaxGridY[0] - nMinGridY;
    v14 = pszDebugLocationb;
  }
  else
  {
    v18 = nMaxGridY[0];
  }
  v19 = this->m_nGridYUnits + ~v16;
  v20 = &this->m_VisibilityGridDegree[v6].m_Memory.m_pMemory[v12 + v13 * this->m_nGridYUnits];
  if ( !v14 )
  {
    if ( v13 > v11 )
      goto LABEL_37;
    v29 = v11 + 1;
    v30 = 0.0;
    v31 = 0;
    do
    {
      if ( v18 < v12 )
      {
        v32 = v20;
      }
      else
      {
        v32 = &v20[v18 - v12 + 1];
        do
          v33 = *v20++;
        while ( v20 != v32 );
        v31 += v18 + 1 - v12;
        v30 = v33 * 0.0039215689;
      }
      v20 = &v32[v19];
      ++v13;
    }
    while ( v13 != v29 );
    if ( v31 != 0 )
      return v30 / v31;
LABEL_37:
    Warning(
      &stru_352A848.m_WasVisibleUpdateID[7],
      v15,
      ((vMin->x + vMax->x) * 0.5),
      ((vMin->y + vMax->y) * 0.5),
      ((vMin->z + vMax->z) * 0.5));
    return 0.0;
  }
  v21 = v18 + 1;
  v22 = (v12 + 3) & 0xFFFFFFFC;
  v23 = (v21 - v22) & 0xFFFFFFFC;
  v24 = v22 - v12;
  v25 = v21 - (v23 + v22);
  if ( v13 > v11 )
    return 0.0;
  while ( 1 )
  {
    if ( &v20[v24] <= v20 )
    {
      v26 = v20;
    }
    else
    {
      v26 = v20 + 1;
      if ( *v20 != 0 )
        return 1.0;
      while ( v26 != &v20[v24] )
      {
        if ( *v26++ != 0 )
          return 1.0;
      }
    }
    v27 = &v26[v23];
    if ( v27 > v26 )
      break;
LABEL_30:
    if ( v26 >= &v26[v25] )
    {
      v35 = v26;
    }
    else
    {
      v35 = v26 + 1;
      if ( *v26 != 0 )
        return 1.0;
      while ( v35 != &v26[v25] )
      {
        if ( *v35++ != 0 )
          return 1.0;
      }
    }
    ++v13;
    v20 = &v35[v19];
    if ( v13 > v11 )
      return 0.0;
  }
  while ( *v26 == 0 )
  {
    v26 += 4;
    if ( v27 <= v26 )
      goto LABEL_30;
  }
  return 1.0;
}


// CFoW::GenerateMiniMapTexture  (line 1454, @0x00000000032544f0, libserver.so)  // inlines: Clamp<int>, WritePixel, WritePixelNoAdvance
// callers: CFoW::GenerateMiniMapTexture
void __fastcall CFoW::GenerateMiniMapTexture(
        CFoW *const this,
        unsigned int nViewerTeam,
        CPixelWriter *const pixelWriter,
        int nWidth,
        int nHeight,
        unsigned int FogAlphaVisited,
        unsigned int FogAlphaUnVisited)
{
  float v8; // xmm0_4
  int m_nGridXUnits; // ecx
  int m_nGridYUnits; // r15d
  float v11; // xmm2_4
  float v12; // xmm1_4
  int v13; // r14d
  __int64 v14; // rax
  int v15; // r11d
  int v16; // eax
  __int64 v17; // r11
  __int64 v18; // r10
  unsigned __int8 *v19; // r11
  int v20; // eax
  unsigned __int8 m_Size; // si
  __int64 v22; // rcx
  unsigned int v23; // r15d
  int v24; // ecx
  unsigned int v25; // r15d
  unsigned __int8 *m_pBits; // rcx
  unsigned __int64 v27; // r15
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v29; // [rsp+4h] [rbp-38h]
  CUtlVector<short unsigned int,CUtlMemory<short unsigned int,int> > *v30; // [rsp+Ch] [rbp-30h]

  v8 = nWidth;
  m_nGridXUnits = this->m_nGridXUnits;
  m_nGridYUnits = this->m_nGridYUnits;
  v11 = m_nGridXUnits / v8;
  v12 = m_nGridYUnits / nHeight;
  if ( nWidth > 0 )
  {
    v13 = 0;
    v14 = nViewerTeam;
    v30 = &this->m_VisibleBits[v14];
    v29 = &this->m_VisibilityGridDegree[v14];
    while ( 1 )
    {
      v15 = m_nGridXUnits - 1;
      v16 = (v13 * v11);
      if ( v16 < m_nGridXUnits )
      {
        if ( v16 < 0 )
          v16 = 0;
        v15 = v16;
      }
      v17 = m_nGridYUnits * v15;
      v18 = &v30->m_Memory.m_pMemory[v17];
      v19 = &v29->m_Memory.m_pMemory[v17];
      if ( nHeight > 0 )
        break;
LABEL_32:
      if ( ++v13 == nWidth )
        return;
      m_nGridXUnits = this->m_nGridXUnits;
      m_nGridYUnits = this->m_nGridYUnits;
    }
    v20 = 0;
    m_Size = pixelWriter->m_Size;
    while ( 1 )
    {
      LODWORD(v22) = (v20 * v12);
      if ( v22 >= m_nGridYUnits )
      {
        v22 = m_nGridYUnits - 1;
        if ( (*(v18 + 2 * v22) & 0xC000) != 0 )
          goto LABEL_10;
      }
      else
      {
        if ( v22 < 0 )
          LODWORD(v22) = 0;
        v22 = v22;
        if ( (*(v18 + 2LL * v22) & 0xC000) != 0 )
        {
LABEL_10:
          v23 = 0;
          v24 = ((FogAlphaVisited << 8) - (FogAlphaVisited << 8) / 0xFF * v19[v22]) >> 8;
          if ( v24 >= 0 )
          {
            if ( v24 > FogAlphaVisited )
              v24 = FogAlphaVisited;
            v23 = v24;
          }
          if ( m_Size == 0 )
            goto LABEL_21;
          if ( m_Size <= 4u )
            goto LABEL_16;
          goto LABEL_29;
        }
      }
      if ( m_Size == 0 )
        goto LABEL_21;
      v23 = FogAlphaUnVisited;
      if ( m_Size <= 4u )
      {
LABEL_16:
        v25 = (pixelWriter->m_RMask & v23) << pixelWriter->m_RShift;
        m_pBits = pixelWriter->m_pBits;
        if ( m_Size == 3 )
        {
          *m_pBits = v25;
          pixelWriter->m_pBits[2] = BYTE2(v25);
          m_Size = pixelWriter->m_Size;
        }
        else if ( m_Size == 4 )
        {
          *m_pBits = v25;
          m_Size = pixelWriter->m_Size;
        }
        else
        {
          if ( m_Size == 2 )
            *m_pBits = v25;
          else
            *m_pBits = v25;
          m_Size = pixelWriter->m_Size;
        }
LABEL_21:
        ++v20;
        pixelWriter->m_pBits += m_Size;
        if ( v20 == nHeight )
          goto LABEL_32;
        goto LABEL_22;
      }
LABEL_29:
      v27 = (pixelWriter->m_RMask & v23) << pixelWriter->m_RShift;
      if ( m_Size == 6 )
      {
        *pixelWriter->m_pBits = v27;
        *(pixelWriter->m_pBits + 2) = WORD2(v27);
        m_Size = pixelWriter->m_Size;
        goto LABEL_21;
      }
      if ( m_Size != 8 )
        goto LABEL_21;
      ++v20;
      *pixelWriter->m_pBits = v27;
      m_Size = pixelWriter->m_Size;
      pixelWriter->m_pBits += m_Size;
      if ( v20 == nHeight )
        goto LABEL_32;
LABEL_22:
      m_nGridYUnits = this->m_nGridYUnits;
    }
  }
}


// CFoW::GenerateMiniMapTexture  (line 1502, @0x0000000003254760, libserver.so)  // inlines: SetPixelMemory
// calls: CFoW::GenerateMiniMapTexture
void __fastcall CFoW::GenerateMiniMapTexture(
        CFoW *const this,
        unsigned int nViewerTeam,
        uint8 *pDstImage,
        int nWidth,
        int nHeight,
        unsigned int FogAlphaVisited,
        unsigned int FogAlphaUnVisited)
{
  CPixelWriter pixelWriter; // [rsp+8h] [rbp-30h] BYREF

  pixelWriter.m_BShift = 0;
  pixelWriter.m_AShift = 0;
  pixelWriter.m_pBits = pDstImage;
  pixelWriter.m_pBase = pDstImage;
  pixelWriter.m_BytesPerRow = nWidth;
  pixelWriter.m_nFlags = 0;
  pixelWriter.m_Size = 1;
  pixelWriter.m_RShift = 0;
  pixelWriter.m_GShift = 0;
  pixelWriter.m_RMask = 255;
  pixelWriter.m_GMask = 0;
  pixelWriter.m_BMask = 0;
  pixelWriter.m_AMask = 0;
  CFoW::GenerateMiniMapTexture(this, nViewerTeam, &pixelWriter, nWidth, nHeight, FogAlphaVisited, FogAlphaUnVisited);
}


// CFoW::InsertViewerIntoTree  (line 1516, @0x00000000032583f0, libserver.so)  // inlines: operator=, operator[]
// calls: CUtlSphereTree::Insert
// callers: CFoW::UpdateViewer, CFoW::UpdateViewerLocation, CFoW::UpdateViewerSize, CFoW::AddViewer
void __fastcall CFoW::InsertViewerIntoTree(CFoW *const this, int nIndex)
{
  __int64 v2; // rbp
  const void **v3; // rax
  float *v4; // rdx
  vec_t v5; // xmm0_4
  Sphere_t Bounds; // [rsp+0h] [rbp-18h] BYREF
  __int64 v7; // [rsp+10h] [rbp-8h]

  v3 = &this->m_Viewers.m_Memory.m_pMemory[nIndex];
  v4 = *v3;
  if ( *(*v3 + 4) > 1.0 )
  {
    v7 = v2;
    v5 = v4[24];
    Bounds.z = 0.0;
    Bounds.x = v5;
    Bounds.y = v4[25];
    Bounds.w = *(*v3 + 4);
    CUtlSphereTree::Insert(&this->m_ViewerTree, *v3, &Bounds);
  }
}


// CFoW::RemoveViewerFromTree  (line 1537, @0x00000000032547d0, libserver.so)  // inlines: FreelistPush, NodeHasData, Ref, Remove, operator=, operator==, operator[]
// calls: CUtlSphereTree::Remove_R
// callers: CFoW::UpdateViewer, CFoW::UpdateViewerLocation, CFoW::UpdateViewerSize, CFoW::RemoveViewer
void __fastcall CFoW::RemoveViewerFromTree(CFoW *const this, int nIndex, Vector *pvOldLocation)
{
  __int64 v3; // rbp
  CFoW_Viewer **v4; // rax
  CFoW_Viewer *v5; // rcx
  float y; // xmm0_4
  float m_flRadius; // xmm1_4
  CFoW_Viewer *v8; // rdx
  int m_NumNodesInTree; // eax
  CUtlSphereTree::Node *m_pMemory; // rax
  int z_low; // eax
  vec_t x; // [rsp-8h] [rbp-28h] BYREF
  float v13; // [rsp-4h] [rbp-24h]
  Sphere_t Bounds; // [rsp+0h] [rbp-20h] BYREF
  CUtlVector<CUtlSphereTree::Node,CUtlMemory<CUtlSphereTree::Node,int> > *p_m_Nodes; // [rsp+10h] [rbp-10h]
  __int64 v16; // [rsp+18h] [rbp-8h]

  v4 = &this->m_Viewers.m_Memory.m_pMemory[nIndex];
  v5 = *v4;
  if ( (*v4)->m_flRadius > 1.0 )
  {
    v16 = v3;
    if ( pvOldLocation != 0 )
    {
      x = pvOldLocation->x;
      y = pvOldLocation->y;
    }
    else
    {
      x = v5->m_vLocation.x;
      y = v5->m_vLocation.y;
    }
    v13 = y;
    Bounds.x = 0.0;
    m_flRadius = (*v4)->m_flRadius;
    Bounds.y = m_flRadius;
    v8 = *v4;
    m_NumNodesInTree = this->m_ViewerTree.m_NumNodesInTree;
    if ( m_NumNodesInTree != 0 )
    {
      Bounds.z = 0.0;
      p_m_Nodes = &this->m_ViewerTree.m_Nodes;
      if ( m_NumNodesInTree == 1 )
      {
        m_pMemory = this->m_ViewerTree.m_Nodes.m_Memory.m_pMemory;
        if ( v8 == m_pMemory->pData
          && x == m_pMemory->bounds.x
          && v13 == m_pMemory->bounds.y
          && m_pMemory->bounds.z == 0.0
          && m_flRadius == m_pMemory->bounds.w )
        {
          if ( this->m_ViewerTree.m_PrevInsertedNode == 0 )
            this->m_ViewerTree.m_PrevInsertedNode = -1;
          LODWORD(m_pMemory->bounds.x) = this->m_ViewerTree.m_FreelistHead;
          z_low = LODWORD(Bounds.z);
          --this->m_ViewerTree.m_NumNodesInTree;
          this->m_ViewerTree.m_FreelistHead = z_low;
        }
      }
      else
      {
        CUtlSphereTree::Remove_R(&this->m_ViewerTree, &Bounds.z, v8, &x);
      }
    }
  }
}


// CFoW::DirtyViewers  (line 1561, @0x0000000003257aa0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Cut, GrowMemory, IntersectWithSphere, LengthSqr, Ptr, Purge, RemoveAll, SpheresIntersect, Vector4D, VectorSubtract, operator-, operator->, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~Cut
// calls: CUtlMemory<int, int>::Grow, CFoW_Viewer::MergeViewerVisibility, CUtlMemory<void*, int>::Purge, CUtlSphereTree::IntersectWithSphere_R, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CFoW::AddBlockingOccluder, CFoW::AddOccluder, CFoW::EnableOccluder
void __fastcall CFoW::DirtyViewers(CFoW *const this, int nGridX, int nGridY, vec_t flRadius)
{
  CFoW_Viewer **v4; // r14
  int m_nHorizontalGridSize; // eax
  vec_t v7; // xmm1_4
  vec_t v8; // xmm2_4
  int m_NumNodesInTree; // edi
  int v10; // ebx
  __int64 v11; // r12
  int i; // ebx
  int v13; // edx
  CUtlSphereTree::Node *v14; // rax
  float v15; // xmm0_4
  int v16; // [rsp+3Ch] [rbp-3B4h] BYREF
  Sphere_t TestSphere; // [rsp+40h] [rbp-3B0h] BYREF
  CUtlSphereTree::NodeRef v18; // [rsp+50h] [rbp-3A0h] BYREF
  CUtlVector<void*,CUtlMemory<void*,int> > FoundViewers; // [rsp+60h] [rbp-390h] BYREF
  CUtlSphereTree *p_m_ViewerTree; // [rsp+80h] [rbp-370h]
  int v21; // [rsp+88h] [rbp-368h]
  CUtlMemory<int,int> v22; // [rsp+90h] [rbp-360h] BYREF
  CFoW_Viewer *FixedPointerArray[100]; // [rsp+A0h] [rbp-350h] BYREF

  v4 = FixedPointerArray;
  TestSphere.w = flRadius;
  m_nHorizontalGridSize = this->m_nHorizontalGridSize;
  TestSphere.z = 0.0;
  FoundViewers.m_Size = 0;
  FoundViewers.m_Memory.m_pMemory = FixedPointerArray;
  FoundViewers.m_Memory.m_nAllocationCount = 100;
  FoundViewers.m_Memory.m_nGrowSize = 0x40000000;
  v7 = (m_nHorizontalGridSize * nGridY) + this->m_vWorldMins.y;
  v8 = (nGridX * m_nHorizontalGridSize) + this->m_vWorldMins.x;
  m_NumNodesInTree = this->m_ViewerTree.m_NumNodesInTree;
  TestSphere.y = v7;
  TestSphere.x = v8;
  if ( m_NumNodesInTree != 0 )
  {
    v22.m_pMemory = 0;
    v22.m_nAllocationCount = 0;
    v22.m_nGrowSize = 0;
    p_m_ViewerTree = &this->m_ViewerTree;
    CUtlMemory<int,int>::Grow(&v22, 1);
    v21 = 1;
    if ( v22.m_pMemory != 0 )
      *v22.m_pMemory = 0;
    if ( &this->m_ViewerTree == p_m_ViewerTree )
    {
      v16 = 100;
      if ( v21 > 0 )
      {
        v11 = 0;
        for ( i = 0; i < v21; ++i )
        {
          v13 = v22.m_pMemory[v11];
          v14 = 0;
          if ( v13 >= 0 )
            v14 = &this->m_ViewerTree.m_Nodes.m_Memory.m_pMemory[v13];
          v15 = (((TestSphere.x - v14->bounds.x) * (TestSphere.x - v14->bounds.x))
               + ((TestSphere.y - v14->bounds.y) * (TestSphere.y - v14->bounds.y)))
              + ((TestSphere.z - v14->bounds.z) * (TestSphere.z - v14->bounds.z));
          if ( ((TestSphere.w + v14->bounds.w) * (TestSphere.w + v14->bounds.w)) >= v15 )
          {
            v18.nodeIndex = v22.m_pMemory[v11];
            v18.pNodes = &this->m_ViewerTree.m_Nodes;
            CUtlSphereTree::IntersectWithSphere_R(&this->m_ViewerTree, &v18, &TestSphere, 1, &FoundViewers, &v16, v15);
          }
          ++v11;
        }
      }
    }
    v21 = 0;
    if ( (v22.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&v22);
      if ( (v22.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&v22);
    }
    if ( FoundViewers.m_Size > 0 )
    {
      v10 = 0;
      do
      {
        CFoW_Viewer::MergeViewerVisibility(*v4, 0);
        ++v10;
        ++v4;
      }
      while ( FoundViewers.m_Size > v10 );
    }
  }
  FoundViewers.m_Size = 0;
  if ( (FoundViewers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<void *,int>::Purge(&FoundViewers.m_Memory);
    if ( (FoundViewers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<void *,int>::Purge(&FoundViewers.m_Memory);
  }
}


// CFoW::UpdateVisibleAmountsAndGridDegree  (line 1591, @0x0000000003254900, libserver.so)  // inlines: GetFloat, _mm_adds_epu8, _mm_and_si128, _mm_andnot_si128, _mm_cmpeq_epi8, _mm_cmpgt_epi16, _mm_max_epu8, _mm_min_epu8, _mm_or_si128, _mm_packs_epi16, _mm_set1_epi8, _mm_set_epi16, _mm_set_epi8, _mm_store_si128, _mm_subs_epu8, _mm_xor_si128
// callers: CFoW::SolveVisibility
void __fastcall CFoW::UpdateVisibleAmountsAndGridDegree(
        CFoW *const this,
        float a2,
        float flFrameTime,
        uint32 VisibleMask)
{
  float m_fValue; // xmm1_4
  unsigned int v5; // eax
  float v6; // xmm0_4
  __m128 m_fValue_low; // xmm2
  unsigned int v8; // r12d
  int v9; // r9d
  float v10; // xmm1_4
  int v11; // edx
  __m128 v12; // xmm2
  unsigned int v13; // r13d
  int v14; // r10d
  float v15; // xmm1_4
  int v16; // edx
  float v17; // xmm1_4
  unsigned int v18; // edx
  __m128 v19; // xmm2
  float v20; // xmm1_4
  int v21; // ebx
  unsigned int v22; // r14d
  int v23; // ecx
  __m128 v24; // xmm2
  float v25; // xmm1_4
  int v26; // ecx
  unsigned int v27; // ecx
  int v28; // r8d
  __m128i v29; // xmm0
  __m128i v30; // xmm10
  __m128i v31; // xmm6
  __m128i v32; // xmm0
  __m128i v33; // xmm11
  __m128i v34; // xmm10
  __m128i v35; // xmm0
  __m128i v36; // xmm4
  __m128i v37; // xmm0
  __m128i v38; // xmm11
  __m128i v39; // xmm0
  int v40; // r11d
  __m128i v41; // xmm13
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // xmm5
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __m128i v47; // xmm10
  __m128i v48; // xmm11
  __m128i v49; // xmm14
  __m128i v50; // xmm15
  CFoW *v51; // r12
  __m128i si128; // xmm9
  int v53; // r14d
  __m128i v54; // xmm8
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *p_m_Memory; // rsi
  unsigned int v56; // r13d
  __int64 v57; // r14
  __m128i *v58; // rax
  const __m128i *m_pMemory; // rdx
  __m128i *v60; // rcx
  __m128i v61; // xmm1
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  __m128i v64; // xmm1
  __m128i v65; // xmm2
  __m128i v66; // xmm0
  __m128i v67; // xmm3
  __m128i v68; // xmm4
  __m128i v69; // xmm5
  unsigned int v70; // r9d
  __int64 v71; // rax
  unsigned __int8 *v72; // rsi
  unsigned __int8 *v73; // rcx
  __int64 i; // rax
  unsigned __int8 v75; // dl
  __m128 v76; // xmm3
  __m128 v77; // xmm3
  __m128 v78; // xmm4
  __m128 v79; // xmm4
  float v80; // xmm4_4
  float v81; // xmm4_4
  float v82; // xmm3_4
  float v83; // xmm3_4
  __m128i FadeInFrameTime1; // [rsp+0h] [rbp-40h]
  __m128i v85[3]; // [rsp+10h] [rbp-30h] BYREF

  m_fValue = fow_degree_fade_in_rate_midpoint.m_pParent->m_Value.m_fValue;
  v5 = -1;
  if ( m_fValue <= 1.0 )
  {
    v5 = 0;
    if ( m_fValue >= 0.0 )
      v5 = (m_fValue * 255.0);
  }
  v6 = a2 * 255.0;
  m_fValue_low = LODWORD(fow_degree_fade_in_rate1.m_pParent->m_Value.m_fValue);
  if ( m_fValue_low.m128_f32[0] > 32.0 )
  {
    v8 = -1;
    v9 = 255;
    v10 = 32.0;
    v11 = (v6 * 32.0);
    if ( v11 > 255 )
      goto LABEL_4;
    if ( v11 <= 0 )
      goto LABEL_50;
LABEL_56:
    v9 = (v10 * v6);
    goto LABEL_57;
  }
  v8 = -1;
  v9 = 255;
  v10 = 0.25;
  v79 = _mm_cmplt_ss(m_fValue_low, 0x3E800000u);
  if ( (COERCE_FLOAT(_mm_andnot_ps(v79, m_fValue_low).m128_u32[0] | v79.m128_i32[0] & 0x3E800000) * v6) > 255 )
    goto LABEL_4;
  if ( m_fValue_low.m128_f32[0] <= 32.0 )
  {
    if ( m_fValue_low.m128_f32[0] < 0.25 )
      v80 = v6 * 0.25;
    else
      v80 = v6 * m_fValue_low.m128_f32[0];
    if ( v80 > 0 )
    {
      if ( m_fValue_low.m128_f32[0] <= 32.0 )
      {
        if ( m_fValue_low.m128_f32[0] >= 0.25 )
        {
          v9 = (m_fValue_low.m128_f32[0] * v6);
          goto LABEL_57;
        }
      }
      else
      {
        v10 = 32.0;
      }
      goto LABEL_56;
    }
LABEL_50:
    v8 = 1;
    v9 = 1;
    goto LABEL_4;
  }
  v9 = (32.0 * v6);
  if ( v9 <= 0 )
    goto LABEL_50;
LABEL_57:
  v8 = v9;
LABEL_4:
  v12 = LODWORD(fow_degree_fade_in_rate2.m_pParent->m_Value.m_fValue);
  if ( v12.m128_f32[0] <= 32.0 )
  {
    v13 = -1;
    v14 = 255;
    v15 = 0.25;
    v78 = _mm_cmplt_ss(v12, 0x3E800000u);
    if ( (COERCE_FLOAT(_mm_andnot_ps(v78, v12).m128_u32[0] | v78.m128_i32[0] & 0x3E800000) * v6) > 255 )
      goto LABEL_6;
    if ( v12.m128_f32[0] > 32.0 )
    {
      v14 = (32.0 * v6);
      if ( v14 <= 0 )
      {
LABEL_46:
        v13 = 1;
        v14 = 1;
        goto LABEL_6;
      }
LABEL_64:
      v13 = v14;
      goto LABEL_6;
    }
    if ( v12.m128_f32[0] < 0.25 )
      v81 = v6 * 0.25;
    else
      v81 = v6 * v12.m128_f32[0];
    if ( v81 <= 0 )
      goto LABEL_46;
    if ( v12.m128_f32[0] <= 32.0 )
    {
      if ( v12.m128_f32[0] >= 0.25 )
      {
        v14 = (v12.m128_f32[0] * v6);
        goto LABEL_64;
      }
    }
    else
    {
      v15 = 32.0;
    }
LABEL_63:
    v14 = (v15 * v6);
    goto LABEL_64;
  }
  v13 = -1;
  v14 = 255;
  v15 = 32.0;
  v16 = (v6 * 32.0);
  if ( v16 <= 255 )
  {
    if ( v16 <= 0 )
      goto LABEL_46;
    goto LABEL_63;
  }
LABEL_6:
  v17 = fow_degree_fade_out_rate_midpoint.m_pParent->m_Value.m_fValue;
  v18 = -1;
  if ( v17 <= 1.0 )
  {
    v18 = 0;
    if ( v17 >= 0.0 )
      v18 = (255.0 * v17);
  }
  v19 = LODWORD(fow_degree_fade_out_rate1.m_pParent->m_Value.m_fValue);
  if ( v19.m128_f32[0] > 32.0 )
  {
    v20 = 32.0;
    v21 = 255;
    v22 = -1;
    v23 = (v6 * 32.0);
    if ( v23 > 255 )
      goto LABEL_9;
    if ( v23 <= 0 )
      goto LABEL_38;
LABEL_77:
    v21 = (v20 * v6);
    goto LABEL_78;
  }
  v20 = 0.25;
  v21 = 255;
  v22 = -1;
  v76 = _mm_cmplt_ss(v19, 0x3E800000u);
  if ( (COERCE_FLOAT(_mm_andnot_ps(v76, v19).m128_u32[0] | v76.m128_i32[0] & 0x3E800000) * v6) > 255 )
    goto LABEL_9;
  if ( v19.m128_f32[0] <= 32.0 )
  {
    if ( v19.m128_f32[0] < 0.25 )
      v83 = v6 * 0.25;
    else
      v83 = v6 * v19.m128_f32[0];
    if ( v83 > 0 )
    {
      if ( v19.m128_f32[0] <= 32.0 )
      {
        if ( v19.m128_f32[0] >= 0.25 )
        {
          v21 = (v19.m128_f32[0] * v6);
          goto LABEL_78;
        }
      }
      else
      {
        v20 = 32.0;
      }
      goto LABEL_77;
    }
LABEL_38:
    v22 = 1;
    v21 = 1;
    goto LABEL_9;
  }
  v21 = (32.0 * v6);
  if ( v21 <= 0 )
    goto LABEL_38;
LABEL_78:
  v22 = v21;
LABEL_9:
  v24 = LODWORD(fow_degree_fade_out_rate2.m_pParent->m_Value.m_fValue);
  if ( v24.m128_f32[0] <= 32.0 )
  {
    v25 = 0.25;
    v27 = -1;
    v28 = 255;
    v77 = _mm_cmplt_ss(v24, 0x3E800000u);
    if ( (COERCE_FLOAT(_mm_andnot_ps(v77, v24).m128_u32[0] | v77.m128_i32[0] & 0x3E800000) * v6) > 255 )
      goto LABEL_13;
    if ( v24.m128_f32[0] > 32.0 )
    {
      v28 = (v6 * 32.0);
      if ( v28 <= 0 )
        goto LABEL_12;
      goto LABEL_71;
    }
    if ( v24.m128_f32[0] < 0.25 )
      v82 = v6 * 0.25;
    else
      v82 = v6 * v24.m128_f32[0];
    if ( v82 <= 0 )
      goto LABEL_12;
    if ( v24.m128_f32[0] <= 32.0 )
    {
      if ( v24.m128_f32[0] >= 0.25 )
      {
        v28 = (v6 * v24.m128_f32[0]);
        goto LABEL_71;
      }
    }
    else
    {
      v25 = 32.0;
    }
LABEL_70:
    v28 = (v6 * v25);
LABEL_71:
    v27 = v28;
    goto LABEL_13;
  }
  v25 = 32.0;
  v26 = (v6 * 32.0);
  if ( v26 <= 255 )
  {
    if ( v26 <= 0 )
    {
LABEL_12:
      v27 = 1;
      v28 = 1;
      goto LABEL_13;
    }
    goto LABEL_70;
  }
  v27 = -1;
  v28 = 255;
LABEL_13:
  v29 = _mm_cvtsi32_si128(VisibleMask);
  v30 = _mm_cvtsi32_si128(v5);
  v31 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v29, v29), 0);
  v32 = _mm_cvtsi32_si128(v8);
  v33 = _mm_cvtsi32_si128(v18);
  v34 = _mm_unpacklo_epi8(v30, v30);
  v35 = _mm_unpacklo_epi8(v32, v32);
  v36 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v35, v35), 0);
  v37 = _mm_cvtsi32_si128(v13);
  v38 = _mm_unpacklo_epi8(v33, v33);
  v39 = _mm_unpacklo_epi8(v37, v37);
  v40 = this->m_nGridXUnits * this->m_nGridYUnits;
  v41 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v39, v39), 0);
  v42 = _mm_cvtsi32_si128(v22);
  v43 = _mm_unpacklo_epi8(v42, v42);
  v44 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v43, v43), 0);
  v45 = _mm_cvtsi32_si128(v27);
  FadeInFrameTime1 = v36;
  v46 = _mm_unpacklo_epi8(v45, v45);
  v47 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v34, v34), 0);
  v48 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v38, v38), 0);
  v49 = v44;
  v50 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v46, v46), 0);
  if ( this->m_nNumberOfTeams != 0 )
  {
    v51 = this;
    si128 = _mm_load_si128(&xmmword_352ACD0);
    v53 = v40 + 7;
    v54 = _mm_load_si128(xmmword_352ACE0);
    p_m_Memory = &this->m_VisibilityGridDegree[0].m_Memory;
    if ( v40 >= 0 )
      v53 = this->m_nGridXUnits * this->m_nGridYUnits;
    v56 = 0;
    v57 = v53 >> 3;
    do
    {
      ++v51->m_WasVisibleUpdateID[0];
      v58 = *&p_m_Memory[31].m_nAllocationCount;
      m_pMemory = p_m_Memory->m_pMemory;
      v60 = &v58[v57];
      if ( &v58[v57] > v58 )
      {
        v85[0] = v41;
        do
        {
          v61 = _mm_load_si128(v58);
          _mm_prefetch(m_pMemory->m128i_i8, 1);
          _mm_prefetch(v58[1].m128i_i8, 1);
          v62 = _mm_cmpgt_epi16(_mm_and_si128(v61, v31), 0LL);
          v63 = _mm_load_si128(v58 + 1);
          *v58 = _mm_or_si128(
                   _mm_and_si128(_mm_or_si128(v61, si128), v62),
                   _mm_andnot_si128(v62, _mm_and_si128(v61, v54)));
          v64 = _mm_cmpgt_epi16(_mm_and_si128(v63, v31), 0LL);
          v65 = _mm_packs_epi16(v62, v64);
          v58[1] = _mm_or_si128(
                     _mm_and_si128(_mm_or_si128(v63, si128), v64),
                     _mm_andnot_si128(v64, _mm_and_si128(v63, v54)));
          v66 = _mm_load_si128(m_pMemory);
          v67 = _mm_xor_si128(-1LL, v65);
          if ( v9 != v14 )
          {
            v68 = _mm_cmpeq_epi8(_mm_min_epu8(v66, v47), v47);
            v36 = _mm_or_si128(_mm_andnot_si128(v68, FadeInFrameTime1), _mm_and_si128(v68, v85[0]));
          }
          if ( v21 != v28 )
          {
            v69 = _mm_cmpeq_epi8(_mm_max_epu8(v66, v48), v48);
            v44 = _mm_or_si128(_mm_andnot_si128(v69, v49), _mm_and_si128(v69, v50));
          }
          v58 += 2;
          ++m_pMemory;
          m_pMemory[-1] = _mm_subs_epu8(_mm_adds_epu8(_mm_and_si128(v65, v36), v66), _mm_and_si128(v67, v44));
        }
        while ( v60 > v58 );
        v41 = _mm_load_si128(v85);
      }
      ++v56;
      v51 = (v51 + 4);
      p_m_Memory = (p_m_Memory + 24);
    }
    while ( this->m_nNumberOfTeams > v56 );
  }
  if ( this->m_bEnableUnseenVisibility && this->m_nNumberOfTeams != 0 )
  {
    v70 = 0;
    do
    {
      v71 = v70;
      v72 = this->m_VisibilityGridDegree[v71].m_Memory.m_pMemory;
      v73 = this->m_MaxVisibilityGridDegree[v71].m_Memory.m_pMemory;
      for ( i = 0; v40 > i; ++i )
      {
        v75 = v73[i];
        if ( v72[i] >= v75 )
          v75 = v72[i];
        v73[i] = v75;
      }
      ++v70;
    }
    while ( this->m_nNumberOfTeams > v70 );
  }
}


// CFoW::UpdateVisibleAmounts  (line 1852, @0x0000000003255090, libserver.so)  // inlines: _mm_and_si128, _mm_andnot_si128, _mm_cmpgt_epi16, _mm_or_si128, _mm_set_epi16, _mm_store_si128
// callers: CFoW::SolveVisibility
void __fastcall CFoW::UpdateVisibleAmounts(CFoW *const this, double a2, float flFrameTime, uint32 VisibleMask)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm3
  __m128i si128; // xmm6
  CFoW *v7; // rcx
  unsigned int v8; // r8d
  __m128i v9; // xmm5
  CUtlVector<short unsigned int,CUtlMemory<short unsigned int,int> > *m_VisibleBits; // rsi
  int m_Size; // edx
  const __m128i *m_pMemory; // rax
  const __m128i *i; // rdx
  __m128i v14; // xmm1
  __m128i v15; // xmm2

  if ( VisibleMask != 0x4000 )
  {
    v4 = _mm_cvtsi32_si128(VisibleMask);
    v5 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v4, v4), 0);
    if ( this->m_nNumberOfTeams != 0 )
    {
      si128 = _mm_load_si128(&xmmword_352ACD0);
      v7 = this;
      v8 = 0;
      v9 = _mm_load_si128(xmmword_352ACE0);
      m_VisibleBits = this->m_VisibleBits;
      do
      {
        m_Size = m_VisibleBits->m_Size;
        ++v7->m_WasVisibleUpdateID[0];
        m_pMemory = m_VisibleBits->m_Memory.m_pMemory;
        for ( i = &m_pMemory[m_Size / 8];
              i > m_pMemory;
              m_pMemory[-1] = _mm_or_si128(
                                _mm_and_si128(_mm_or_si128(v14, si128), v15),
                                _mm_andnot_si128(v15, _mm_and_si128(v14, v9))) )
        {
          v14 = _mm_load_si128(m_pMemory++);
          v15 = _mm_cmpgt_epi16(_mm_and_si128(v14, v5), 0LL);
        }
        ++v8;
        ++m_VisibleBits;
        v7 = (v7 + 4);
      }
      while ( this->m_nNumberOfTeams > v8 );
    }
  }
}


// CFoW::SnapCoordsToGrid  (line 1939, @0x0000000003255580, libserver.so)
// calls: floorf
// callers: CDOTA_TempTree::InitTree, CFoW::AddBlockingOccluder, CFoW::AddOccluder
void __fastcall CFoW::SnapCoordsToGrid(CFoW *const this, const Vector *const vIn, Vector *const vOut)
{
  float v6; // xmm0_4
  __m128d v7; // xmm1
  vec_t v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // [rsp+8h] [rbp-28h]
  float x; // [rsp+Ch] [rbp-24h]
  float y; // [rsp+Ch] [rbp-24h]

  x = this->m_vWorldMins.x;
  v6 = floorf((vIn->x - x) * this->m_nHorizontalGridSizeRcp);
  v7.m128d_f64[1] = x;
  v7.m128d_f64[0] = x + v6 * this->m_nHorizontalGridSize;
  v8 = _mm_movedup_pd(v7).m128d_f64[0];
  vOut->x = v8;
  v12 = v8;
  y = this->m_vWorldMins.y;
  v9 = y + floorf((vIn->y - y) * this->m_nHorizontalGridSizeRcp) * this->m_nHorizontalGridSize;
  vOut->y = v9;
  vOut->z = vIn->z;
  v10 = this->m_vWorldMaxs.x;
  if ( v12 <= v10 )
    v10 = fmaxf(this->m_vWorldMins.x, v12);
  vOut->x = v10;
  v11 = this->m_vWorldMaxs.y;
  if ( v9 <= v11 )
    v11 = fmaxf(this->m_vWorldMins.y, v9);
  vOut->y = v11;
}


// CFoW::GetGridIndex  (line 1953, @0x0000000003255680, libserver.so)
// calls: floorf
// callers: CFoW::GetTileLocationVisibilityDegree
__int64 __fastcall CFoW::GetGridIndex(CFoW *const this, float a2, float x, float y)
{
  int v5; // r12d
  int v6; // eax
  int m_nGridYUnits; // edx
  float m_nHorizontalGridSizeRcp; // [rsp+Ch] [rbp-14h]

  m_nHorizontalGridSizeRcp = this->m_nHorizontalGridSizeRcp;
  v5 = floorf((a2 - this->m_vWorldMins.x) * m_nHorizontalGridSizeRcp);
  v6 = floorf((x - this->m_vWorldMins.y) * m_nHorizontalGridSizeRcp);
  if ( v6 < 0 )
    return 0xFFFFFFFFLL;
  if ( v5 < 0 )
    return 0xFFFFFFFFLL;
  if ( v5 >= this->m_nGridXUnits )
    return 0xFFFFFFFFLL;
  m_nGridYUnits = this->m_nGridYUnits;
  if ( v6 >= m_nGridYUnits )
    return 0xFFFFFFFFLL;
  else
    return (m_nGridYUnits * v5 + v6);
}


// CFoW::GetGridUnits  (line 1976, @0x0000000003255820, libserver.so)
// calls: ceilf, CFoW::ClampGridUnits, floorf
// callers: CFoW::DrawDebugInfo
bool __fastcall CFoW::GetGridUnits(
        CFoW *const this,
        const Vector *const vCoords,
        float flXOffset,
        float flYOffset,
        bool bGoLower,
        int *const nGridX,
        int *const nGridY)
{
  float v11; // xmm0_4

  v11 = ((vCoords->x - flXOffset) - this->m_vWorldMins.x) * this->m_nHorizontalGridSizeRcp;
  if ( bGoLower )
  {
    *nGridX = floorf(v11);
    *nGridY = floorf(((vCoords->y - flYOffset) - this->m_vWorldMins.y) * this->m_nHorizontalGridSizeRcp);
  }
  else
  {
    *nGridX = ceilf(v11);
    *nGridY = ceilf(((vCoords->y - flYOffset) - this->m_vWorldMins.y) * this->m_nHorizontalGridSizeRcp);
  }
  return CFoW::ClampGridUnits(this, nGridX, nGridY);
}


// CFoW::GetGridUnitsClamped  (line 1993, @0x0000000003255950, libserver.so)
// calls: CFoW::GetGridUnitsClamped
// callers: CDOTAFogOfWarSystem::FindHeightLevel, CDOTAFogOfWarTempViewers::AddTempViewer, CFoW_Viewer::UpdateLocation
bool __fastcall CFoW::GetGridUnitsClamped(
        CFoW *const this,
        const Vector *const vCoords,
        int *const nGridX,
        int *const nGridY)
{
  return CFoW::GetGridUnitsClamped(this, vCoords, nGridX, nGridY);
}


// CFoW::GetGridUnitsClamped  (line 1999, @0x00000000032558e0, libserver.so)
// calls: floorf, CFoW::ClampGridUnits
// callers: CDOTA_TeamCommander::UpdatePotentialLocationGrid, CFoW::GetGridUnitsClamped, CFoW::GetLocationInfo, CFoW::GetLocationInfoForRadius, CFoW::GetLocationVisibilityDegree, CFoW::GetLocationVisibilityDegree_Circular, CFoW::AddBlockingOccluder, CFoW::AddOccluder
bool __fastcall CFoW::GetGridUnitsClamped(
        CFoW *const this,
        const Vector2D *const vCoords,
        int *const nGridX,
        int *const nGridY)
{
  *nGridX = floorf((vCoords->x - this->m_vWorldMins.x) * this->m_nHorizontalGridSizeRcp);
  *nGridY = floorf((vCoords->y - this->m_vWorldMins.y) * this->m_nHorizontalGridSizeRcp);
  return CFoW::ClampGridUnits(this, nGridX, nGridY);
}


// CFoW::ClampGridUnits  (line 2008, @0x00000000032557a0, libserver.so)
// callers: CFoW::GetGridUnits, CFoW::GetGridUnitsClamped
bool __fastcall CFoW::ClampGridUnits(CFoW *const this, int *const nGridX, int *const nGridY)
{
  int v3; // eax
  int m_nGridXUnits; // ecx
  int m_nGridYUnits; // eax
  int v6; // ecx
  int v7; // eax
  int v9; // ecx

  v3 = *nGridX;
  m_nGridXUnits = this->m_nGridXUnits;
  if ( *nGridX < 0 )
  {
    if ( v3 >= m_nGridXUnits )
    {
LABEL_3:
      *nGridX = m_nGridXUnits - 1;
      m_nGridYUnits = this->m_nGridYUnits;
      v6 = *nGridY;
      if ( m_nGridYUnits <= *nGridY )
      {
LABEL_4:
        v7 = m_nGridYUnits - 1;
LABEL_5:
        *nGridY = v7;
        return 1;
      }
LABEL_11:
      v7 = 0;
      if ( v6 >= 0 )
        v7 = v6;
      goto LABEL_5;
    }
    v9 = 0;
    if ( v3 >= 0 )
      v9 = *nGridX;
LABEL_10:
    *nGridX = v9;
    m_nGridYUnits = this->m_nGridYUnits;
    v6 = *nGridY;
    if ( m_nGridYUnits <= *nGridY )
      goto LABEL_4;
    goto LABEL_11;
  }
  if ( v3 >= m_nGridXUnits )
    goto LABEL_3;
  if ( *nGridY < 0 || *nGridY >= this->m_nGridYUnits )
  {
    v9 = 0;
    if ( v3 >= 0 )
      v9 = *nGridX;
    goto LABEL_10;
  }
  return 0;
}


// CFoW::GetWorldCoords  (line 2020, @0x00000000032562c0, libserver.so)  // inlines: GetHeightGroup, operator[]
void __fastcall CFoW::GetWorldCoords(CFoW *const this, int nGridX, int nGridY, Vector *const vCoords)
{
  int m_nGridXUnits; // r8d
  int m_nGridYUnits; // eax
  int v6; // r8d
  int v7; // eax
  int v8; // edx
  int v9; // eax

  m_nGridXUnits = this->m_nGridXUnits;
  if ( m_nGridXUnits > nGridX )
  {
    m_nGridYUnits = this->m_nGridYUnits;
    v6 = 0;
    if ( nGridX >= 0 )
      v6 = nGridX;
    if ( m_nGridYUnits <= nGridY )
      goto LABEL_3;
  }
  else
  {
    m_nGridYUnits = this->m_nGridYUnits;
    v6 = m_nGridXUnits - 1;
    if ( m_nGridYUnits <= nGridY )
    {
LABEL_3:
      v7 = m_nGridYUnits - 1;
      goto LABEL_4;
    }
  }
  v7 = 0;
  if ( nGridY >= 0 )
    v7 = nGridY;
LABEL_4:
  vCoords->x = (v6 * this->m_nHorizontalGridSize) + this->m_vWorldMins.x;
  vCoords->y = (v7 * this->m_nHorizontalGridSize) + this->m_vWorldMins.y;
  v8 = this->m_TileInfo.m_Memory.m_pMemory[this->m_nGridYUnits * v6 + v7] & 0x1F;
  v9 = this->m_VerticalLevels.m_Size - 1;
  if ( v8 <= v9 )
    v9 = v8;
  vCoords->z = this->m_VerticalLevels.m_Memory.m_pMemory[v9];
}


// CFoW::SetDebugVisibility  (line 2042, @0x0000000003256360, libserver.so)
// callers: CDOTAFogOfWarSystem::SetDebugInfo, CDOTAFogOfWarSystem::SetDebugVisibility
void __fastcall CFoW::SetDebugVisibility(CFoW *const this, bool bVisible)
{
  this->m_bDebugVisible = bVisible;
}


// CFoW::SetDebugTeam  (line 2053, @0x0000000003256370, libserver.so)
// callers: CDOTAFogOfWarSystem::SetDebugInfo
void __fastcall CFoW::SetDebugTeam(CFoW *const this, unsigned int nTeam)
{
  unsigned int m_nNumberOfTeams; // eax

  m_nNumberOfTeams = this->m_nNumberOfTeams;
  if ( m_nNumberOfTeams <= nTeam )
    nTeam = m_nNumberOfTeams - 1;
  this->m_nDebugTeam = nTeam;
}


// CFoW::EnableDebugFlags  (line 2064, @0x0000000003256390, libserver.so)
// callers: CDOTAFogOfWarSystem::SetDebugInfo, CDOTAFogOfWarSystem::EnableDebugFlags
void __fastcall CFoW::EnableDebugFlags(CFoW *const this, unsigned int nFlags)
{
  this->m_nDebugFlags |= nFlags;
}


// CFoW::DisableDebugFlags  (line 2075, @0x00000000032563a0, libserver.so)
// callers: CDOTAFogOfWarSystem::SetDebugInfo, CDOTAFogOfWarSystem::DisableDebugFlags
void __fastcall CFoW::DisableDebugFlags(CFoW *const this, unsigned int nFlags)
{
  this->m_nDebugFlags &= ~nFlags;
}


// CFoW::GetDebugFlags  (line 2086, @0x00000000032563b0, libserver.so)
unsigned int __fastcall CFoW::GetDebugFlags(CFoW *const this)
{
  return this->m_nDebugFlags;
}


// CFoW::DrawDebugInfo  (line 2097, @0x00000000032563c0, libserver.so)  // inlines: GetOccluderBitMask, GridDegreeToFloatClamped, QAngle, Vector, operator+=, operator[]
// calls: CFoW::GetGridUnits, CFoW::GetLocationInfo
// callers: CDOTAFogOfWarSystem::SetDebugInfo
void __fastcall CFoW::DrawDebugInfo(
        CFoW *const this,
        const Vector *const vLocation,
        float a3,
        float flMinXOffset,
        float flMaxXOffset,
        float flMinYOffset,
        double flMaxYOffset,
        double a8)
{
  CFoW *v8; // r15
  unsigned int m_nDebugFlags; // ecx
  const Vector *v10; // r14
  float v11; // xmm7_4
  int v12; // r10d
  const Vector *v13; // r13
  int m_nHorizontalGridSize; // eax
  float v16; // xmm6_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  int m_nGridYUnits; // edx
  CFoW *v21; // r10
  uint32 v22; // ebx
  const Vector *v23; // r11
  float v24; // xmm6_4
  double v25; // xmm1_8
  __int64 m_nDebugTeam; // rsi
  unsigned int m_Size; // r12d
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int8 *m_pMemory; // rdx
  unsigned int v31; // r14d
  float v32; // xmm0_4
  int v33; // xmm5_4
  void (__fastcall *v34)(ISceneViewDebugOverlays *, int *, float *, _QWORD, _QWORD, _QWORD, double, int); // rax
  void (__fastcall *v35)(ISceneViewDebugOverlays *, int *, float *, _QWORD, _QWORD, _QWORD, double, int); // rax
  void (__fastcall *v36)(ISceneViewDebugOverlays *, int *, float *, _QWORD, _QWORD, _QWORD, double, int); // rax
  void (__fastcall *v37)(ISceneViewDebugOverlays *, int *, float *, _QWORD, _QWORD, _QWORD, double, int); // rax
  __int64 v38; // rbx
  int v39; // r12d
  Vector *p_vLocT; // r11
  double v41; // xmm3_8
  float *v42; // r10
  Vector **v43; // rdx
  Vector *v44; // rax
  float v45; // xmm0_4
  float y; // xmm1_4
  float v47; // xmm0_4
  void (__fastcall *v48)(ISceneViewDebugOverlays *, Vector *, int *, int *, float *, _QWORD, double, int, __int64, __int64); // rax
  float v49; // xmm5_4
  double v50; // xmm2_8
  float v51; // xmm5_4
  int v52; // eax
  char v53; // al
  float32 m_flTreeRadius; // xmm7_4
  char v55; // r13
  int v56; // esi
  uintp m_hContext; // rdi
  float v58; // xmm1_4
  vec_t v59; // xmm6_4
  float v60; // xmm0_4
  float v61; // xmm1_4
  void (__fastcall *v62)(ISceneViewDebugOverlays *, Vector *, int *, int *, float *, __int64, double, _DWORD, _DWORD, int); // rax
  float v63; // xmm0_4
  void (__fastcall *v64)(ISceneViewDebugOverlays *, float *, _QWORD, __int64, __int64, __int64, double, int, char *, uint32, uint32); // r12
  __int16 LocationInfo; // ax
  int v66; // eax
  __int64 v67; // [rsp+8h] [rbp-F8h]
  __int64 v68; // [rsp+10h] [rbp-F0h]
  uint32 x; // [rsp+24h] [rbp-DCh]
  const Vector *v70; // [rsp+28h] [rbp-D8h]
  const Vector *v71; // [rsp+28h] [rbp-D8h]
  CFoW *flCenterY; // [rsp+38h] [rbp-C8h]
  float flCenterYa; // [rsp+38h] [rbp-C8h]
  int flRealEndYa; // [rsp+40h] [rbp-C0h]
  float flRealEndY; // [rsp+40h] [rbp-C0h]
  float v76; // [rsp+48h] [rbp-B8h]
  float v77; // [rsp+48h] [rbp-B8h]
  unsigned int flRealStartY; // [rsp+4Ch] [rbp-B4h]
  float flRealStartYa; // [rsp+4Ch] [rbp-B4h]
  int flGroundCenterZb; // [rsp+58h] [rbp-A8h]
  float flGroundCenterZ; // [rsp+58h] [rbp-A8h]
  float flGroundCenterZa; // [rsp+58h] [rbp-A8h]
  CFoW *flGroundCenterZc; // [rsp+58h] [rbp-A8h]
  unsigned int flRealStartX; // [rsp+60h] [rbp-A0h]
  float flRealEndX; // [rsp+68h] [rbp-98h]
  float *flRealEndXa; // [rsp+68h] [rbp-98h]
  Vector *flRadiusb; // [rsp+78h] [rbp-88h]
  float flRadius; // [rsp+78h] [rbp-88h]
  float flRadiusa; // [rsp+78h] [rbp-88h]
  int nGridX; // [rsp+88h] [rbp-78h] BYREF
  int nGridY; // [rsp+8Ch] [rbp-74h] BYREF
  Vector vLocT; // [rsp+90h] [rbp-70h] BYREF
  int v97; // [rsp+A0h] [rbp-60h] BYREF
  int v98; // [rsp+A4h] [rbp-5Ch]
  int v99; // [rsp+A8h] [rbp-58h]
  int v100; // [rsp+B0h] [rbp-50h] BYREF
  int v101; // [rsp+B4h] [rbp-4Ch]
  float v102; // [rsp+B8h] [rbp-48h]
  float v103; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v104; // [rsp+C4h] [rbp-3Ch]
  float v105; // [rsp+C8h] [rbp-38h]

  v8 = this;
  if ( this->m_bDebugVisible )
  {
    m_nDebugFlags = this->m_nDebugFlags;
    v10 = vLocation;
    if ( (m_nDebugFlags & 4) != 0 && this->m_nGridXUnits > 0 )
    {
      v11 = 7.0;
      v12 = 0;
      v13 = vLocation;
      do
      {
        m_nHorizontalGridSize = v8->m_nHorizontalGridSize;
        v16 = m_nHorizontalGridSize;
        v17 = ((v12 * m_nHorizontalGridSize) + v8->m_vWorldMins.x) + v11;
        v18 = ((m_nHorizontalGridSize + v17) - v11) - v11;
        v19 = (v17 + v18) * 0.5;
        if ( (a3 + v13->x) <= v19 && v19 <= (v13->x + flMinXOffset) )
        {
          m_nGridYUnits = v8->m_nGridYUnits;
          if ( m_nGridYUnits > 0 )
          {
            x = v12;
            v21 = v8;
            v22 = 0;
            v23 = v13;
            flRealEndX = ((m_nHorizontalGridSize + v17) - v11) - v11;
            while ( 1 )
            {
              *&a8 = ((v22 * m_nHorizontalGridSize) + v21->m_vWorldMins.y) + v11;
              HIDWORD(v25) = HIDWORD(a8);
              v24 = ((v16 + *&a8) - v11) - v11;
              *&v25 = (*&a8 + v24) * 0.5;
              if ( (v23->y + flMaxXOffset) <= *&v25 && *&v25 <= (v23->y + flMinYOffset) )
              {
                m_nDebugTeam = v21->m_nDebugTeam;
                m_Size = v21->m_VisibilityGridDegree[m_nDebugTeam].m_Size;
                v28 = &v21->m_VisibilityGridDegree[m_nDebugTeam];
                if ( m_Size != 0 )
                {
                  v29 = m_nGridYUnits * x;
                  m_pMemory = v21->m_VisibilityGridDegree[v21->m_nDebugTeam].m_Memory.m_pMemory;
                  m_Size = ((m_pMemory[v22 + v29] * 0.0039215689) * 255.0);
                  v31 = 255 - m_Size;
                }
                else
                {
                  v71 = v23;
                  v77 = v11;
                  flCenterYa = (*&a8 + v24) * 0.5;
                  flRealEndY = v24;
                  flRealStartYa = ((v22 * m_nHorizontalGridSize) + v21->m_vWorldMins.y) + v11;
                  flGroundCenterZc = v21;
                  LocationInfo = CFoW::GetLocationInfo(v21, m_nDebugTeam, x, v22);
                  v23 = v71;
                  v66 = LocationInfo & 0x4000;
                  v21 = flGroundCenterZc;
                  v31 = -(v66 == 0);
                  if ( v66 != 0 )
                    m_Size = 255;
                  v31 = v31;
                  v11 = v77;
                  *&v25 = LODWORD(flCenterYa);
                  v24 = flRealEndY;
                  *&a8 = flRealStartYa;
                }
                v70 = v23;
                flCenterY = v21;
                flRealEndYa = LODWORD(v24);
                v76 = v11;
                flGroundCenterZb = LODWORD(a8);
                v32 = (v21->m_pfnTraceRayVerticalGroundHeight)(
                        v21->m_hContext,
                        m_nDebugTeam,
                        m_pMemory,
                        v28,
                        (v17 + v18) * 0.5,
                        v25,
                        1000.0,
                        -10000.0);
                v33 = flGroundCenterZb;
                flGroundCenterZ = v32;
                flRealStartY = v33;
                v34 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 50);
                v105 = v32;
                v102 = v32;
                v100 = LODWORD(v17);
                v103 = flRealEndX;
                v104 = v33;
                v101 = v33;
                v34(debugoverlay, &v100, &v103, v31, m_Size, 0, 0.06666667014360428, 1);
                v35 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 50);
                v101 = flRealStartY;
                v103 = flRealEndX;
                v104 = flRealEndYa;
                v105 = flGroundCenterZ;
                v100 = LODWORD(flRealEndX);
                v102 = flGroundCenterZ;
                v35(debugoverlay, &v100, &v103, v31, m_Size, 0, 0.06666667014360428, 1);
                v36 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 50);
                v103 = v17;
                v104 = flRealEndYa;
                v105 = flGroundCenterZ;
                v100 = LODWORD(flRealEndX);
                v101 = flRealEndYa;
                v102 = flGroundCenterZ;
                v36(debugoverlay, &v100, &v103, v31, m_Size, 0, 0.06666667014360428, 1);
                v37 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 50);
                v103 = v17;
                v104 = flRealStartY;
                v105 = flGroundCenterZ;
                v100 = LODWORD(v17);
                v102 = flGroundCenterZ;
                v101 = flRealEndYa;
                v37(debugoverlay, &v100, &v103, v31, m_Size, 0, 0.06666667014360428, 1);
                v21 = flCenterY;
                *&a8 = flRealStartY;
                v11 = v76;
                v23 = v70;
                if ( (flCenterY->m_nDebugFlags & 0x10) != 0 )
                {
                  v64 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 59);
                  v103 = v17;
                  v104 = flRealStartY;
                  v105 = flGroundCenterZ;
                  v64(
                    debugoverlay,
                    &v103,
                    0,
                    255,
                    255,
                    255,
                    0.06666667014360428,
                    255,
                    &stru_352A848.m_VisibleBits[5].m_Memory.m_nAllocationCount + 3,
                    x,
                    v22);
                  v21 = flCenterY;
                  v23 = v70;
                  m_nGridYUnits = flCenterY->m_nGridYUnits;
                  v11 = v76;
                }
                else
                {
                  m_nGridYUnits = flCenterY->m_nGridYUnits;
                }
              }
              if ( m_nGridYUnits <= ++v22 )
                break;
              m_nHorizontalGridSize = v21->m_nHorizontalGridSize;
              v16 = m_nHorizontalGridSize;
            }
            v8 = v21;
            v12 = x;
            v13 = v23;
          }
        }
        ++v12;
      }
      while ( v8->m_nGridXUnits > v12 );
      m_nDebugFlags = v8->m_nDebugFlags;
      v10 = v13;
    }
    v38 = 0;
    v39 = 0;
    if ( v8->m_Viewers.m_Size > 0 )
    {
      p_vLocT = &vLocT;
      *&v41 = LODWORD(a3);
      v42 = &v103;
      do
      {
        v43 = &v8->m_Viewers.m_Memory.m_pMemory[v38];
        v44 = *v43;
        if ( *v43 != 0 && (m_nDebugFlags & 1) != 0 )
        {
          v45 = v44[8].x;
          if ( (v10->x + *&v41) <= v45 && v45 <= (v10->x + flMinXOffset) )
          {
            y = v10->y;
            v47 = v44[8].y;
            if ( (flMaxXOffset + y) <= v47 && v47 <= (y + flMinYOffset) )
            {
              flRealStartX = LODWORD(v41);
              flRealEndXa = v42;
              flRadiusb = p_vLocT;
              vLocT = v44[8];
              (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 66))(
                debugoverlay,
                p_vLocT,
                0,
                255,
                0,
                0,
                (*v43)[1].y,
                0.06666667014360428,
                flMaxXOffset + y,
                v41,
                flMaxYOffset,
                1);
              v48 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 46);
              v103 = 0.0;
              v104 = 0;
              v105 = 0.0;
              v100 = 1098907648;
              v101 = 1098907648;
              v102 = 16.0;
              v97 = -1048576000;
              v98 = -1048576000;
              v99 = -1048576000;
              LODWORD(v68) = 127;
              LODWORD(v67) = 0;
              v48(debugoverlay, flRadiusb, &v97, &v100, flRealEndXa, 0, 0.06666667014360428, 255, v67, v68);
              (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 59))(
                debugoverlay,
                flRadiusb,
                0,
                255,
                255,
                255,
                0.06666667014360428,
                255,
                "%s",
                v8->m_Viewers.m_Memory.m_pMemory[v38]->m_szName);
              m_nDebugFlags = v8->m_nDebugFlags;
              p_vLocT = flRadiusb;
              v42 = flRealEndXa;
              *&v41 = flRealStartX;
            }
          }
        }
        ++v39;
        ++v38;
      }
      while ( v8->m_Viewers.m_Size > v39 );
    }
    if ( (m_nDebugFlags & 2) != 0 && flMinXOffset > a3 )
    {
      do
      {
        if ( flMinYOffset <= flMaxXOffset )
        {
          v63 = v8->m_nHorizontalGridSize;
        }
        else
        {
          v49 = flMaxXOffset;
          do
          {
            flRadius = v49;
            CFoW::GetGridUnits(v8, v10, -a3, -v49, 1, &nGridX, &nGridY);
            v51 = flRadius;
            v52 = nGridY + nGridX * v8->m_nGridYUnits;
            if ( v52 < v8->m_TileInfo.m_Size )
            {
              v53 = v8->m_TileInfo.m_Memory.m_pMemory[v52];
              if ( (v53 & 0xE0) != 0 )
              {
                m_flTreeRadius = v8->m_flTreeRadius;
                v55 = v53 >> 7;
                if ( v53 >= 0 )
                  m_flTreeRadius = v8->m_flOccluderRadius;
                v56 = v8->m_nHorizontalGridSize;
                flGroundCenterZa = flRadius;
                m_hContext = v8->m_hContext;
                flRadiusa = m_flTreeRadius;
                v58 = v56 * 0.5;
                v59 = (v56 * nGridY) + v8->m_vWorldMins.y;
                vLocT.x = (v56 * nGridX) + v8->m_vWorldMins.x;
                *&v50 = vLocT.x + v58;
                vLocT.y = v59;
                v60 = (v8->m_pfnTraceRayVerticalGroundHeight)(m_hContext, v50, v58 + v59, 1000.0, -10000.0);
                vLocT.z = v60;
                if ( v55 == 0 )
                {
                  v61 = v8->m_nHorizontalGridSize * 0.5;
                  vLocT.z = v60 + 0.0;
                  vLocT.x = vLocT.x + v61;
                  vLocT.y = v61 + vLocT.y;
                }
                (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 48))(
                  debugoverlay,
                  &vLocT,
                  10,
                  10,
                  255,
                  0,
                  flRadiusa,
                  0.06666667014360428,
                  0,
                  127,
                  1);
                v62 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 46);
                v103 = 0.0;
                v104 = 0;
                v105 = 0.0;
                v100 = 1098907648;
                v101 = 1098907648;
                v102 = 16.0;
                v97 = -1048576000;
                v98 = -1048576000;
                v99 = -1048576000;
                v62(debugoverlay, &vLocT, &v97, &v100, &v103, 255, 0.06666667014360428, 0, 0, 127);
                v51 = flGroundCenterZa;
              }
            }
            v63 = v8->m_nHorizontalGridSize;
            v49 = v51 + v63;
          }
          while ( flMinYOffset > v49 );
        }
        a3 = v63 + a3;
      }
      while ( flMinXOffset > a3 );
    }
  }
}


// CFoW::PrintStats  (line 2237, @0x0000000003256f10, libserver.so)
// calls: Msg
// callers: CC_FoW_Stats
void __fastcall CFoW::PrintStats(CFoW *const this)
{
  int m_Size; // edx
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // r12d
  double v5; // xmm0_8
  double v6; // xmm0_8

  m_Size = this->m_Viewers.m_Size;
  if ( m_Size <= 0 )
  {
    v3 = 0;
    v4 = 0;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    do
    {
      if ( this->m_Viewers.m_Memory.m_pMemory[v2] != 0 )
      {
        ++v4;
        v3 += 168;
      }
      ++v2;
    }
    while ( m_Size > v2 );
  }
  *&v5 = Msg(&stru_352A848.m_VisibleBits[6].m_Size + 1).m128_u64[0];
  *&v6 = Msg(&stru_352A848.m_VisibleBits[6].m_Memory.m_pMemory + 4, v4, v5).m128_u64[0];
  Msg(&stru_352A848.m_VisibleBits[7].m_Memory.m_pMemory + 7, v3, v6);
}


