
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAVScriptGameSystem::~CDOTAVScriptGameSystem  (line 15, @0x00000000027dfa00, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CScriptAccessorT, ~CScriptScopeT, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVectorUltraConservative, ~CVScriptGameSystem
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, HSCRIPT__*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAVScriptGameSystem::~CDOTAVScriptGameSystem(CDOTAVScriptGameSystem *const this)
{
  bool v2; // zf
  int v3; // r12d
  IScriptVM *v4; // r14
  __int64 v5; // r13
  HSCRIPT__ **v6; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rsi
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  this->_vptr_IGameSystem = off_3FCECF0;  // vptr: CVScriptGameSystem
  this->_vptr_IVScriptGameSystem = off_3FCEED0;
  CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_CompiledScriptCache.m_Tree);
  v2 = (this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_CompiledScriptCache.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompiledScriptCache.m_Tree.m_Elements);
    v2 = (this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompiledScriptCache.m_Tree.m_Elements);
  }
  else
  {
    this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_ScriptScopeCache.m_Tree);
  v2 = (this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_ScriptScopeCache.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScriptScopeCache.m_Tree.m_Elements);
    v2 = (this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScriptScopeCache.m_Tree.m_Elements);
  }
  else
  {
    this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
  }
  if ( this->m_RootTable.m_hScope != 0 )
  {
    v3 = 0;
    v4 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_RootTable.m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v3 >= m_pData->m_Size )
            goto LABEL_12;
        }
        else if ( v3 >= 0 )
        {
          goto LABEL_12;
        }
        v5 = v3;
        v6 = m_pData->m_Elements[v3++];
        (*(*v4 + 152LL))(v4, *v6);
        *this->m_RootTable.m_FuncHandles.m_pData->m_Elements[v5] = 0;
      }
    }
    m_pData = this->m_RootTable.m_FuncHandles.m_pData;
LABEL_12:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_RootTable.m_FuncHandles.m_pData = 0;
    }
    if ( this->m_RootTable.m_hScope != 0 && v4 != 0 && (this->m_RootTable.m_flags & 1) == 0 )
    {
      (*(*v4 + 136LL))(v4);
      this->m_RootTable.m_hScope = 0;
    }
    else
    {
      this->m_RootTable.m_hScope = 0;
    }
  }
  v7 = this->m_RootTable.m_FuncHandles.m_pData;
  this->m_RootTable.m_flags = 0;
  if ( v7 != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_RootTable.m_FuncHandles.m_pData = 0;
  }
  this->m_RootTable.m_hScope = 0;
  IGameSystem::~IGameSystem(this);
}


// CDOTAVScriptGameSystem::~CDOTAVScriptGameSystem  (line 15, @0x00000000027dfc00, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CDOTAVScriptGameSystem, ~CScriptAccessorT, ~CScriptScopeT, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVectorUltraConservative, ~CVScriptGameSystem
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, HSCRIPT__*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAVScriptGameSystem::~CDOTAVScriptGameSystem(CDOTAVScriptGameSystem *const this)
{
  bool v2; // zf
  int v3; // r12d
  IScriptVM *v4; // r14
  __int64 v5; // r13
  HSCRIPT__ **v6; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rsi
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  this->_vptr_IVScriptGameSystem = off_3FCEED0;
  this->_vptr_IGameSystem = off_3FCECF0;  // vptr: CVScriptGameSystem
  CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_CompiledScriptCache.m_Tree);
  v2 = (this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_CompiledScriptCache.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompiledScriptCache.m_Tree.m_Elements);
    v2 = (this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompiledScriptCache.m_Tree.m_Elements);
  }
  else
  {
    this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_ScriptScopeCache.m_Tree);
  v2 = (this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_ScriptScopeCache.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScriptScopeCache.m_Tree.m_Elements);
    v2 = (this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScriptScopeCache.m_Tree.m_Elements);
  }
  else
  {
    this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
  }
  if ( this->m_RootTable.m_hScope != 0 )
  {
    v3 = 0;
    v4 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_RootTable.m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v3 >= m_pData->m_Size )
            goto LABEL_12;
        }
        else if ( v3 >= 0 )
        {
          goto LABEL_12;
        }
        v5 = v3;
        v6 = m_pData->m_Elements[v3++];
        (*(*v4 + 152LL))(v4, *v6);
        *this->m_RootTable.m_FuncHandles.m_pData->m_Elements[v5] = 0;
      }
    }
    m_pData = this->m_RootTable.m_FuncHandles.m_pData;
LABEL_12:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_RootTable.m_FuncHandles.m_pData = 0;
    }
    if ( this->m_RootTable.m_hScope != 0 && v4 != 0 && (this->m_RootTable.m_flags & 1) == 0 )
    {
      (*(*v4 + 136LL))(v4);
      this->m_RootTable.m_hScope = 0;
    }
    else
    {
      this->m_RootTable.m_hScope = 0;
    }
  }
  v7 = this->m_RootTable.m_FuncHandles.m_pData;
  this->m_RootTable.m_flags = 0;
  if ( v7 != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_RootTable.m_FuncHandles.m_pData = 0;
  }
  this->m_RootTable.m_hScope = 0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTAVScriptGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 17, @0x00000000027ce9c0, libserver.so)
void __fastcall CDOTAVScriptGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTAVScriptGameSystem *const this)
{
  ;
}


// CDOTAVScriptGameSystem::DoesGameSystemReallocate  (line 17, @0x00000000027ce9d0, libserver.so)
// globals: CDOTAVScriptGameSystem::sm_Factory
bool __fastcall CDOTAVScriptGameSystem::DoesGameSystemReallocate(const CDOTAVScriptGameSystem *const this)
{
  return (*(CDOTAVScriptGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAVScriptGameSystem::sm_Factory);
}


// CDOTAVScriptGameSystem::SetGameSystemGlobalPtrs  (line 17, @0x00000000027d0a20, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAVScriptGameSystem::sm_Factory
void __fastcall CDOTAVScriptGameSystem::SetGameSystemGlobalPtrs(CDOTAVScriptGameSystem *const this, void *pValue)
{
  if ( CVScriptGameSystem::sm_Factory != 0 )
    (*(CVScriptGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CVScriptGameSystem::sm_Factory);
  if ( CDOTAVScriptGameSystem::sm_Factory != 0 )
    (*(CDOTAVScriptGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAVScriptGameSystem::sm_Factory, pValue);
}


