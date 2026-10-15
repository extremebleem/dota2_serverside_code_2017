
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCaptionCacheCleanup::~CCaptionCacheCleanup  (line 23, @0x000000000241d3b0, libserver.so)  // inlines: PurgeAndDeleteElements
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, AsyncCaption_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements
// globals: s_captionCache
void __fastcall `anonymous namespace'::CCaptionCacheCleanup::~CCaptionCacheCleanup(
        `anonymous namespace'::CCaptionCacheCleanup *const this)
{
  CUtlRBTree<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&s_captionCache.m_Tree);
}


// AsyncCaption_t::ClearCache  (line 29, @0x000000000241d390, libserver.so)  // inlines: PurgeAndDeleteElements
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, AsyncCaption_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements
// globals: s_captionCache
void __cdecl AsyncCaption_t::ClearCache()
{
  CUtlRBTree<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&s_captionCache.m_Tree);
}


// AsyncCaption_t::LoadFromFile  (line 35, @0x000000000241d880, libserver.so)  // inlines: AsyncCaption_t, CUtlMemory, CUtlRBTree, CUtlSortVector, CUtlSymbol, CUtlVector, CUtlVectorBase, Element, Find, FindInsertionPosition, FirstInorder, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, Purge, RemoveAll, ResetDbgInfo, RightChild, V_memset, memset, operator(), operator=, operator[], ~AsyncCaption_t, ~CUtlMemory, ~CUtlSortVector, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbol::CUtlSymbol, CUtlRBTree<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, AsyncCaption_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, AsyncCaption_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, operator new, AsyncCaption_t::LoadFromFile_Internal, CUtlRBTree<AsyncCaption_t::BlockInfo_t, short unsigned int, bool (*)(const AsyncCaption_t::BlockInfo_t&, const AsyncCaption_t::BlockInfo_t&), CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, operator delete, CUtlVectorBase<CaptionLookup_t, CUtlMemory<CaptionLookup_t, int> >::SetCount, CUtlMemory<CaptionLookup_t, int>::Purge, CUtlRBTree<AsyncCaption_t::BlockInfo_t, short unsigned int, bool (*)(const AsyncCaption_t::BlockInfo_t&, const AsyncCaption_t::BlockInfo_t&), CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<AsyncCaption_t::BlockInfo_t, short unsigned int, bool (*)(const AsyncCaption_t::BlockInfo_t&, const AsyncCaption_t::BlockInfo_t&), CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlRBTree<AsyncCaption_t::BlockInfo_t, short unsigned int, bool (*)(const AsyncCaption_t::BlockInfo_t&, const AsyncCaption_t::BlockInfo_t&), CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CSoundEmitterSystem::AddCaptionFile
// globals: s_captionCache, AsyncCaption_t::BlockInfo_t::Less(AsyncCaption_t::BlockInfo_t const&,AsyncCaption_t::BlockInfo_t const&)
bool __fastcall AsyncCaption_t::LoadFromFile(AsyncCaption_t *const this, const char *pRelativePath)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t*>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned __int16 v7; // r12
  unsigned __int16 m_Left; // ax
  char v9; // dl
  bool v10; // r13
  unsigned __int16 v11; // ax
  AsyncCaption_t *v12; // r14
  bool v13; // al
  unsigned __int16 v14; // r8
  bool v15; // zf
  bool result; // al
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t*>::Node_t,short unsigned int> *v17; // rax
  int m_Size; // r12d
  unsigned __int64 v19; // rax
  CaptionLookup_t *v20; // rdx
  CaptionLookup_t *v21; // rcx
  unsigned __int16 v22; // ax
  UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t,short unsigned int> *v23; // rdx
  unsigned __int16 v24; // r15
  unsigned __int16 v25; // r12
  const AsyncCaption_t::BlockInfo_t *p_m_Data; // r13
  unsigned __int16 m_Right; // ax
  UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t,short unsigned int> *v28; // rax
  unsigned __int16 v29; // ax
  char v30; // cl
  bool isLeft; // [rsp+Ch] [rbp-64h]
  int pRelativePathb; // [rsp+10h] [rbp-60h]
  unsigned __int16 pCaptionb; // [rsp+18h] [rbp-58h]
  bool pCaptionc; // [rsp+18h] [rbp-58h]
  AsyncCaption_t *pCaption; // [rsp+18h] [rbp-58h]
  bool pCaptiona; // [rsp+18h] [rbp-58h]
  CUtlSymbol sRelativePath; // [rsp+20h] [rbp-50h] BYREF
  CUtlMap<CUtlSymbol,AsyncCaption_t*,short unsigned int,bool (*)(const CUtlSymbol&,const CUtlSymbol&)>::Node_t v39[4]; // [rsp+30h] [rbp-40h] BYREF

  CUtlSymbol::CUtlSymbol(&sRelativePath, pRelativePath);
  m_Root = s_captionCache.m_Tree.m_Root;
  v39[0].key = sRelativePath;
  if ( s_captionCache.m_Tree.m_Root == 0xFFFF )
  {
LABEL_7:
    v6 = 0xFFFF;
    m_Root = -1;
  }
  else
  {
    m_pMemory = s_captionCache.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = m_Root;
        if ( !s_captionCache.m_Tree.m_LessFunc.m_LessFunc(&v39[0].key, &m_pMemory[v5].m_Data.key) )
          break;
        m_pMemory = s_captionCache.m_Tree.m_Elements.m_pMemory;
        m_Root = s_captionCache.m_Tree.m_Elements.m_pMemory[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_7;
      }
      if ( !s_captionCache.m_Tree.m_LessFunc.m_LessFunc(
              &s_captionCache.m_Tree.m_Elements.m_pMemory[v5].m_Data.key,
              &v39[0].key) )
        break;
      m_pMemory = s_captionCache.m_Tree.m_Elements.m_pMemory;
      m_Root = s_captionCache.m_Tree.m_Elements.m_pMemory[v5].m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_7;
    }
    v6 = m_Root;
  }
  if ( s_captionCache.m_Tree.m_Elements.m_nAllocationCount <= v6
    || s_captionCache.m_Tree.m_LastAlloc.index < m_Root
    || m_Root == 0xFFFF
    || (v17 = &s_captionCache.m_Tree.m_Elements.m_pMemory[m_Root])->m_Left == m_Root )
  {
    v7 = s_captionCache.m_Tree.m_Root;
    v39[0].elem = 0;
    v39[0].key = sRelativePath;
    if ( s_captionCache.m_Tree.m_Root != 0xFFFF )
    {
      while ( 1 )
      {
        if ( s_captionCache.m_Tree.m_LessFunc.m_LessFunc(
               &v39[0].key,
               &s_captionCache.m_Tree.m_Elements.m_pMemory[v7].m_Data.key) )
        {
          m_Left = s_captionCache.m_Tree.m_Elements.m_pMemory[v7].m_Left;
          v9 = 1;
          if ( m_Left == 0xFFFF )
            goto LABEL_15;
        }
        else
        {
          m_Left = s_captionCache.m_Tree.m_Elements.m_pMemory[v7].m_Right;
          v9 = 0;
          if ( m_Left == 0xFFFF )
          {
LABEL_15:
            v10 = v9;
            v11 = CUtlRBTree<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                    &s_captionCache.m_Tree,
                    v39);
            goto LABEL_16;
          }
        }
        v7 = m_Left;
      }
    }
    v7 = -1;
    v10 = 0;
    v11 = CUtlRBTree<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
            &s_captionCache.m_Tree,
            v39);
LABEL_16:
    pCaptionb = v11;
    CUtlRBTree<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      &s_captionCache.m_Tree,
      v11,
      v7,
      v10);
    ++s_captionCache.m_Tree.m_NumElements;
    v12 = operator new(0x70u);
    v12->m_RequestedBlocks.m_Elements.m_pMemory = 0;
    v12->m_RequestedBlocks.m_LessFunc = AsyncCaption_t::BlockInfo_t::Less;
    v12->m_RequestedBlocks.m_FirstFree = -1;
    v12->m_RequestedBlocks.m_LastAlloc.index = -1;
    v12->m_RequestedBlocks.m_Elements.m_nAllocationCount = 0;
    v12->m_RequestedBlocks.m_Elements.m_nGrowSize = 0;
    v12->m_RequestedBlocks.m_Root = -1;
    v12->m_RequestedBlocks.m_NumElements = 0;
    v12->m_RequestedBlocks.m_pElements = 0;
    v12->m_CaptionDirectory.m_Size = 0;
    v12->m_CaptionDirectory.m_Memory.m_pMemory = 0;
    v12->m_CaptionDirectory.m_Memory.m_nAllocationCount = 0;
    v12->m_CaptionDirectory.m_Memory.m_nGrowSize = 0;
    v12->m_CaptionDirectory.m_pLessContext = 0;
    v12->m_CaptionDirectory.m_bNeedsSort = 0;
    v12->m_DataBaseFile.m_Id = -1;
    *&v12->m_Header.magic = 0;
    *&v12->m_Header.numblocks = 0;
    *&v12->m_Header.directorysize = 0;
    v13 = AsyncCaption_t::LoadFromFile_Internal(v12, pRelativePath);
    v14 = pCaptionb;
    if ( !v13 )
    {
      v15 = (v12->m_CaptionDirectory.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v12->m_CaptionDirectory.m_Size = 0;
      if ( v15 )
      {
        pCaptiona = v13;
        CUtlMemory<CaptionLookup_t,int>::Purge(&v12->m_CaptionDirectory.m_Memory);
        v13 = pCaptiona;
        if ( (v12->m_CaptionDirectory.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CaptionLookup_t,int>::Purge(&v12->m_CaptionDirectory.m_Memory);
          v13 = pCaptiona;
        }
      }
      pCaptionc = v13;
      CUtlRBTree<AsyncCaption_t::BlockInfo_t,unsigned short,bool (*)(AsyncCaption_t::BlockInfo_t const&,AsyncCaption_t::BlockInfo_t const&),CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t,unsigned short>,unsigned short>>::~CUtlRBTree(&v12->m_RequestedBlocks);
      operator delete(v12);
      return pCaptionc;
    }
    pCaption = v12;
    s_captionCache.m_Tree.m_Elements.m_pMemory[v14].m_Data.elem = v12;
  }
  else
  {
    pCaption = v17->m_Data.elem;
    result = 0;
    if ( pCaption == 0 )
      return result;
  }
  if ( this != pCaption )
  {
    if ( &this->m_CaptionDirectory != &pCaption->m_CaptionDirectory )
    {
      m_Size = pCaption->m_CaptionDirectory.m_Size;
      CUtlVectorBase<CaptionLookup_t,CUtlMemory<CaptionLookup_t,int>>::SetCount(&this->m_CaptionDirectory, m_Size);
      if ( m_Size > 0 )
      {
        v19 = 0;
        do
        {
          v20 = this->m_CaptionDirectory.m_Memory.m_pMemory;
          v21 = pCaption->m_CaptionDirectory.m_Memory.m_pMemory;
          *&v20[v19 / 0xC].hash = *&v21[v19 / 0xC].hash;
          *&v20[v19 / 0xC].offset = *&v21[v19 / 0xC].offset;
          v19 += 12LL;
        }
        while ( v19 != 4 * (3LL * (m_Size - 1) + 3) );
      }
    }
    this->m_CaptionDirectory.m_pLessContext = pCaption->m_CaptionDirectory.m_pLessContext;
    this->m_CaptionDirectory.m_bNeedsSort = pCaption->m_CaptionDirectory.m_bNeedsSort;
    *&this->m_Header.magic = *&pCaption->m_Header.magic;
    *&this->m_Header.numblocks = *&pCaption->m_Header.numblocks;
    *&this->m_Header.directorysize = *&pCaption->m_Header.directorysize;
    this->m_DataBaseFile.m_Id = pCaption->m_DataBaseFile.m_Id;
    v22 = pCaption->m_RequestedBlocks.m_Root;
    if ( v22 != 0xFFFF )
    {
      v23 = pCaption->m_RequestedBlocks.m_Elements.m_pMemory;
      v24 = v23[v22].m_Left;
      if ( v24 == 0xFFFF )
      {
        v24 = pCaption->m_RequestedBlocks.m_Root;
      }
      else
      {
        while ( v23[v24].m_Left != 0xFFFF )
          v24 = v23[v24].m_Left;
      }
      pRelativePathb = v24;
      if ( v24 != 0xFFFF )
      {
        while ( 1 )
        {
          v25 = this->m_RequestedBlocks.m_Root;
          p_m_Data = &v23[pRelativePathb].m_Data;
          if ( v25 != 0xFFFF )
          {
            while ( 1 )
            {
              v15 = this->m_RequestedBlocks.m_LessFunc(
                      p_m_Data,
                      &this->m_RequestedBlocks.m_Elements.m_pMemory[v25].m_Data) == 0;
              v28 = this->m_RequestedBlocks.m_Elements.m_pMemory;
              if ( v15 )
              {
                m_Right = v28[v25].m_Right;
                v30 = 0;
                if ( m_Right == 0xFFFF )
                  goto LABEL_48;
              }
              else
              {
                m_Right = v28[v25].m_Left;
                v30 = 1;
                if ( m_Right == 0xFFFF )
                  goto LABEL_48;
              }
              v25 = m_Right;
            }
          }
          v25 = -1;
          v30 = 0;
LABEL_48:
          isLeft = v30;
          v29 = CUtlRBTree<AsyncCaption_t::BlockInfo_t,unsigned short,bool (*)(AsyncCaption_t::BlockInfo_t const&,AsyncCaption_t::BlockInfo_t const&),CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t,unsigned short>,unsigned short>>::NewNode(
                  &this->m_RequestedBlocks,
                  p_m_Data);
          CUtlRBTree<AsyncCaption_t::BlockInfo_t,unsigned short,bool (*)(AsyncCaption_t::BlockInfo_t const&,AsyncCaption_t::BlockInfo_t const&),CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t,unsigned short>,unsigned short>>::LinkToParent(
            &this->m_RequestedBlocks,
            v29,
            v25,
            isLeft);
          ++this->m_RequestedBlocks.m_NumElements;
          pRelativePathb = CUtlRBTree<AsyncCaption_t::BlockInfo_t,unsigned short,bool (*)(AsyncCaption_t::BlockInfo_t const&,AsyncCaption_t::BlockInfo_t const&),CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t,unsigned short>,unsigned short>>::NextInorder(
                             &pCaption->m_RequestedBlocks,
                             pRelativePathb);
          if ( pRelativePathb == 0xFFFF )
            break;
          v23 = pCaption->m_RequestedBlocks.m_Elements.m_pMemory;
        }
      }
    }
  }
  return 1;
}


// AsyncCaption_t::LoadFromFile_Internal  (line 64, @0x000000000241d3d0, libserver.so)  // inlines: CopyArray, EnsureCapacity, LeafCodeInfo_t, PeekGet, QuickSort, RedoSort, V_strncpy<long unsigned int>, memcpy, operator=, operator[], ~CUtlBuffer, ~CUtlMemory
// calls: _V_strncpy, V_FixSlashes, V_strlower_fast, CUtlBuffer::CUtlBuffer, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlBuffer::EnsureCapacity, CUtlVectorBase<CaptionLookup_t, CUtlMemory<CaptionLookup_t, int> >::SetCount, V_qsort_s, CUtlSymbol::CUtlSymbol (16 total)
// callers: AsyncCaption_t::LoadFromFile
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/public/closedcaptions, "LoadFromFile_Internal", "Invalid file id for %s\n", "Invalid file version for %s\n", "Invalid directory size %d for %s\n"
// globals: CUtlSortVector<CaptionLookup_t,CCaptionLookupLess,CUtlVector<CaptionLookup_t,CUtlMemory<CaptionLookup_t,int>>>::CompareHelper(void *,CaptionLookup_t const*,Capt
bool __fastcall AsyncCaption_t::LoadFromFile_Internal(AsyncCaption_t *const this, const char *pRelativePath)
{
  unsigned int *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  uint32 m_nGrowSize; // eax
  CaptionLookup_t *m_pMemory; // rsi
  __int64 v19; // rax
  CaptionLookup_t *v20; // rax
  int v21; // r14d
  unsigned __int8 *v22; // r13
  unsigned __int64 v23; // rax
  CaptionLookup_t *v24; // rdx
  __int64 m_Size; // rsi
  CaptionLookup_t *v26; // rdi
  int v27; // r8d
  CaptionLookup_t *v28; // rax
  CaptionLookup_t *src; // [rsp+0h] [rbp-1E0h]
  unsigned int directoryBytes; // [rsp+8h] [rbp-1D8h]
  signed int directorysize; // [rsp+Ch] [rbp-1D4h]
  char v32; // [rsp+1Fh] [rbp-1C1h] BYREF
  CUtlSymbol v33; // [rsp+20h] [rbp-1C0h] BYREF
  LeafCodeInfo_t v34; // [rsp+30h] [rbp-1B0h] BYREF
  CUtlBuffer dirbuffer; // [rsp+50h] [rbp-190h] BYREF
  char pRelativePathFixed[264]; // [rsp+A0h] [rbp-140h] BYREF
  unsigned __int64 v37; // [rsp+1A8h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  _V_strncpy(pRelativePathFixed, pRelativePath, 260);
  V_FixSlashes(pRelativePathFixed, 47);
  V_strlower_fast(pRelativePathFixed);
  v3 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(
         &g_pFullFileSystem->IBaseFileSystem,
         pRelativePathFixed,
         "rb",
         "GAME");
  if ( v3 == 0 )
    return 0;
  CUtlBuffer::CUtlBuffer(&dirbuffer, 0, 0, 0);
  (*g_pFullFileSystem->_vptr_IBaseFileSystem)(&g_pFullFileSystem->IBaseFileSystem, &this->m_Header, 24, v3);
  if ( this->m_Header.magic != 1145258838 )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v34.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/public/closedcaptions.cpp";
      v34.m_szFunction = "LoadFromFile_Internal";
      v34.m_nLine = 83;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v34, "Invalid file id for %s\n", pRelativePathFixed);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
  }
  if ( this->m_Header.version != 1 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v34.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/public/closedcaptions.cpp";
      v34.m_szFunction = "LoadFromFile_Internal";
      v34.m_nLine = 85;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v34,
        "Invalid file version for %s\n",
        pRelativePathFixed);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    return 0;
  }
  directorysize = this->m_Header.directorysize;
  if ( directorysize > 0x10000 )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v27 = this->m_Header.directorysize;
      v34.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/public/closedcaptions.cpp";
      v34.m_nLine = 87;
      v34.m_szFunction = "LoadFromFile_Internal";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v34,
        "Invalid directory size %d for %s\n",
        v27,
        pRelativePathFixed);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
  }
  directoryBytes = 12 * directorysize;
  if ( directorysize > this->m_CaptionDirectory.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_CaptionDirectory.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        src = this->m_CaptionDirectory.m_Memory.m_pMemory;
        v28 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * directorysize);
        this->m_CaptionDirectory.m_Memory.m_pMemory = v28;
        if ( src != 0 )
          memcpy(v28, src, 12LL * this->m_CaptionDirectory.m_Memory.m_nAllocationCount);
        this->m_CaptionDirectory.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        m_pMemory = this->m_CaptionDirectory.m_Memory.m_pMemory;
        v19 = *g_pMemAlloc;
        if ( m_pMemory != 0 )
          v20 = (*(v19 + 8))(g_pMemAlloc, m_pMemory, 12LL * directorysize);
        else
          v20 = (*v19)(g_pMemAlloc, 12LL * directorysize);
        this->m_CaptionDirectory.m_Memory.m_pMemory = v20;
      }
      this->m_CaptionDirectory.m_Memory.m_nAllocationCount = directorysize;
    }
  }
  CUtlBuffer::EnsureCapacity(&dirbuffer, directoryBytes);
  (*g_pFullFileSystem->_vptr_IBaseFileSystem)(
    &g_pFullFileSystem->IBaseFileSystem,
    dirbuffer.m_Memory.m_pMemory,
    directoryBytes,
    v3);
  (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v3);
  v21 = this->m_Header.directorysize;
  v22 = &dirbuffer.m_Memory.m_pMemory[dirbuffer.m_Get - dirbuffer.m_nOffset];
  CUtlVectorBase<CaptionLookup_t,CUtlMemory<CaptionLookup_t,int>>::SetCount(&this->m_CaptionDirectory, v21);
  if ( v21 > 0 )
  {
    v23 = 0;
    do
    {
      v24 = this->m_CaptionDirectory.m_Memory.m_pMemory;
      *&v24[v23 / 0xC].hash = *&v22[v23];
      *&v24[v23 / 0xC].offset = *&v22[v23 + 8];
      v23 += 12LL;
    }
    while ( v23 != 4 * (3LL * (v21 - 1) + 3) );
  }
  m_Size = this->m_CaptionDirectory.m_Size;
  this->m_CaptionDirectory.m_bNeedsSort = 0;
  if ( m_Size > 1 )
  {
    v26 = this->m_CaptionDirectory.m_Memory.m_pMemory;
    v34.m_szFile = this->m_CaptionDirectory.m_pLessContext;
    *&v34.m_nLine = &v32;
    V_qsort_s(
      v26,
      m_Size,
      12,
      CUtlSortVector<CaptionLookup_t,CCaptionLookupLess,CUtlVector<CaptionLookup_t,CUtlMemory<CaptionLookup_t,int>>>::CompareHelper,
      &v34);
  }
  CUtlSymbol::CUtlSymbol(&v33, pRelativePathFixed);
  this->m_DataBaseFile = v33;
  CUtlMemory<unsigned char,int>::Purge(&dirbuffer.m_Memory);
  return 1;
}


