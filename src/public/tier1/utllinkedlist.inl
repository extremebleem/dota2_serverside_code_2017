
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::~CUtlLinkedList  (line 460, @0x0000000002057ca0, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int>::Purge
// callers: CGameGibManager::~CGameGibManager
void __fastcall CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::~CUtlLinkedList(
        CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *const this)
{
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(this);
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>::Purge(&this->m_Memory);
}


// CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::~CUtlLinkedList  (line 460, @0x000000000217f990, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int>::Purge
// callers: CWeaponList::~CWeaponList
void __fastcall CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::~CUtlLinkedList(
        CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *const this)
{
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::RemoveAll(this);
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>::Purge(&this->m_Memory);
}


// CUtlLinkedList<CEnvWindShared*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>, short unsigned int> >::~CUtlLinkedList  (line 460, @0x000000000220f700, libserver.so)  // inlines: InternalElement, Next, Purge, RemoveAll, operator[], ~CUtlMemory
void __fastcall CUtlLinkedList<CEnvWindShared *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared *,unsigned short>,unsigned short>>::~CUtlLinkedList(
        CUtlLinkedList<CEnvWindShared*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *v3; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v5; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v3 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v3->m_Next;
        v3->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v3->m_Next = this->m_FirstFree;
      v5 = this->m_Head;
      if ( v5 != 0xFFFF )
        this->m_FirstFree = v5;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_Memory.m_pMemory = 0;
    }
    this->m_Memory.m_nAllocationCount = 0;
  }
}


// CUtlLinkedList<CFuncAreaPortalBase*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>, short unsigned int> >::~CUtlLinkedList  (line 460, @0x00000000022465c0, libserver.so)  // inlines: InternalElement, Next, Purge, RemoveAll, operator[], ~CUtlMemory
void __fastcall CUtlLinkedList<CFuncAreaPortalBase *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase *,unsigned short>,unsigned short>>::~CUtlLinkedList(
        CUtlLinkedList<CFuncAreaPortalBase*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int> *v3; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v5; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v3 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v3->m_Next;
        v3->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v3->m_Next = this->m_FirstFree;
      v5 = this->m_Head;
      if ( v5 != 0xFFFF )
        this->m_FirstFree = v5;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_Memory.m_pMemory = 0;
    }
    this->m_Memory.m_nAllocationCount = 0;
  }
}


// CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::~CUtlLinkedList  (line 460, @0x00000000022b5d10, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int>::Purge
// callers: CMarkupManager::~CMarkupManager
void __fastcall CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::~CUtlLinkedList(
        CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int>,short unsigned int> > *const this)
{
  CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::RemoveAll(this);
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>::Purge(&this->m_Memory);
}


// CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::~CUtlLinkedList  (line 460, @0x0000000002311c60, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int>::Purge
// callers: CBasePlayer::CBasePlayer, CBasePlayer::~CBasePlayer
void __fastcall CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::~CUtlLinkedList(
        CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int> > *const this)
{
  CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::RemoveAll(this);
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>::Purge(&this->m_Memory);
}


// CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int> >::~CUtlLinkedList  (line 460, @0x0000000002f05480, libserver.so)  // inlines: InternalElement, Next, Purge, RemoveAll, operator[], ~CUtlMemory
void __fastcall CUtlLinkedList<CFuncNavBlocker *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker *,unsigned short>,unsigned short>>::~CUtlLinkedList(
        CUtlLinkedList<CFuncNavBlocker*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int> *v3; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v5; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v3 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v3->m_Next;
        v3->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v3->m_Next = this->m_FirstFree;
      v5 = this->m_Head;
      if ( v5 != 0xFFFF )
        this->m_FirstFree = v5;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_Memory.m_pMemory = 0;
    }
    this->m_Memory.m_nAllocationCount = 0;
  }
}


// CUtlLinkedList<CRR_Concept, short unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CRR_Concept, short unsigned int>, unsigned int> >::~CUtlLinkedList  (line 460, @0x00000000030fe0c0, libserver.so)  // inlines: InternalElement, Next, Purge, RemoveAll, operator[], ~CUtlMemory
void __fastcall CUtlLinkedList<CRR_Concept,unsigned short,false,unsigned int,CUtlMemory<UtlLinkedListElem_t<CRR_Concept,unsigned short>,unsigned int>>::~CUtlLinkedList(
        CUtlLinkedList<CRR_Concept,short unsigned int,false,unsigned int,CUtlMemory<UtlLinkedListElem_t<CRR_Concept,short unsigned int>,unsigned int> > *const this)
{
  unsigned int m_Head; // edx
  UtlLinkedListElem_t<CRR_Concept,short unsigned int> *v3; // rax
  unsigned int m_Next; // ecx
  unsigned int v5; // eax

  if ( this->m_LastAlloc.index != -1 )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v3 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v3->m_Next;
        v3->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v3->m_Next = this->m_FirstFree;
      v5 = this->m_Head;
      if ( v5 != 0xFFFF )
        this->m_FirstFree = v5;
    }
    this->m_Head = 0xFFFF;
    this->m_Tail = 0xFFFF;
    this->m_ElementCount = 0;
  }
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_Memory.m_pMemory = 0;
    }
    this->m_Memory.m_nAllocationCount = 0;
  }
}


// CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > >::AllocInternal  (line 674, @0x0000000001f9ae90, libserver.so)  // inlines: First, GetIndex, InternalElement, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> >::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CRenderGameSystem::MarkChanged
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
__int64 __fastcall CUtlLinkedList<CRenderComponent *,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>>::AllocInternal(
        CUtlLinkedList<CRenderComponent*,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> > > *const this,
        bool multilist)
{
  __int64 result; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pBlockHeader; // rdx
  intp m_nIndex; // rcx
  intp m_nBlockSize; // rsi
  intp v8; // rcx
  intp v9; // rcx
  intp v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 m_FirstFree; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  result = this->m_FirstFree;
  if ( result != 0 )
    goto LABEL_17;
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  if ( m_pBlockHeader != 0
    && (m_nIndex = this->m_LastAlloc.m_nIndex) >= 0
    && (m_nBlockSize = m_pBlockHeader->m_nBlockSize, m_nIndex < m_nBlockSize) )
  {
    v8 = m_nIndex + 1;
    if ( m_nBlockSize > v8 )
    {
      if ( v8 >= 0 )
        goto LABEL_22;
      goto LABEL_7;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_7;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_7;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
    goto LABEL_21;
LABEL_7:
  m_FirstFree = this->m_FirstFree;
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>::Grow(&this->m_Memory, 1);
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  this->m_pElements = 0;
  result = m_FirstFree;
  if ( m_pBlockHeader != 0 && (v9 = this->m_LastAlloc.m_nIndex) >= 0 && (v10 = m_pBlockHeader->m_nBlockSize, v9 < v10) )
  {
    v8 = v9 + 1;
    if ( v10 > v8 )
    {
      if ( v8 < 0 )
        goto LABEL_12;
LABEL_22:
      if ( (m_pBlockHeader + 24 * v8) != -16LL )
      {
        this->m_LastAlloc.m_pBlockHeader = m_pBlockHeader;
        this->m_LastAlloc.m_nIndex = v8;
        if ( m_pBlockHeader->m_nBlockSize <= v8 )
        {
          ++this->m_NumAlloced;
          v15 = 0;
        }
        else
        {
          ++this->m_NumAlloced;
          result = &m_pBlockHeader[1] + 24 * v8;
          v15 = result;
        }
        if ( multilist )
          goto LABEL_18;
        goto LABEL_26;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../../public/tier1/utllinkedlist.h";
        v17.m_szFunction = "AllocInternal";
        v17.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      goto LABEL_14;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_12;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_12;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
  {
LABEL_21:
    v8 = 0;
    goto LABEL_22;
  }
LABEL_12:
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v17.m_szFile = "../../public/tier1/utllinkedlist.h";
    v17.m_szFunction = "AllocInternal";
    v17.m_nLine = 699;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v17,
      "CUtlLinkedList overflow! (exhausted memory allocator)\n");
  }
LABEL_14:
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
    loc_0 = -559038737;
  result = Plat_ExitProcess(1);
LABEL_17:
  v15 = result;
  this->m_FirstFree = *(result + 16);
  if ( multilist )
  {
LABEL_18:
    *(v15 + 16) = 0;
    *(v15 + 8) = 0;
    return result;
  }
LABEL_26:
  *(v15 + 16) = result;
  *(v15 + 8) = result;
  return result;
}


// CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x0000000001f9ba40, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::InsertBefore
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>::Grow(
          &v3->m_Memory,
          1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x0000000002058280, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CGameGibManager::AddGibToLRU, CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::InsertBefore
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::AllocInternal  (line 674, @0x00000000021814e0, libserver.so)  // inlines: First, GetIndex, InternalElement, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> >::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CResponseQueue::Add
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
__int64 __fastcall CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::AllocInternal(
        CUtlLinkedList<CResponseQueue::CDeferredResponse,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> > > *const this,
        bool multilist)
{
  __int64 result; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *m_pBlockHeader; // rdx
  intp m_nIndex; // rcx
  intp m_nBlockSize; // rsi
  intp v8; // rcx
  intp v9; // rcx
  intp v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 m_FirstFree; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  result = this->m_FirstFree;
  if ( result != 0 )
    goto LABEL_17;
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  if ( m_pBlockHeader != 0
    && (m_nIndex = this->m_LastAlloc.m_nIndex) >= 0
    && (m_nBlockSize = m_pBlockHeader->m_nBlockSize, m_nIndex < m_nBlockSize) )
  {
    v8 = m_nIndex + 1;
    if ( m_nBlockSize > v8 )
    {
      if ( v8 >= 0 )
        goto LABEL_22;
      goto LABEL_7;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_7;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_7;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
    goto LABEL_21;
LABEL_7:
  m_FirstFree = this->m_FirstFree;
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>::Grow(&this->m_Memory, 1);
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  this->m_pElements = 0;
  result = m_FirstFree;
  if ( m_pBlockHeader != 0 && (v9 = this->m_LastAlloc.m_nIndex) >= 0 && (v10 = m_pBlockHeader->m_nBlockSize, v9 < v10) )
  {
    v8 = v9 + 1;
    if ( v10 > v8 )
    {
      if ( v8 < 0 )
        goto LABEL_12;
LABEL_22:
      if ( (m_pBlockHeader + 104 * v8) != -16LL )
      {
        this->m_LastAlloc.m_pBlockHeader = m_pBlockHeader;
        this->m_LastAlloc.m_nIndex = v8;
        if ( m_pBlockHeader->m_nBlockSize <= v8 )
        {
          ++this->m_NumAlloced;
          v15 = 0;
        }
        else
        {
          ++this->m_NumAlloced;
          result = &m_pBlockHeader[1] + 104 * v8;
          v15 = result;
        }
        if ( multilist )
          goto LABEL_18;
        goto LABEL_26;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../../public/tier1/utllinkedlist.h";
        v17.m_szFunction = "AllocInternal";
        v17.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      goto LABEL_14;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_12;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_12;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
  {
LABEL_21:
    v8 = 0;
    goto LABEL_22;
  }
LABEL_12:
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v17.m_szFile = "../../public/tier1/utllinkedlist.h";
    v17.m_szFunction = "AllocInternal";
    v17.m_nLine = 699;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v17,
      "CUtlLinkedList overflow! (exhausted memory allocator)\n");
  }
LABEL_14:
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
    loc_0 = -559038737;
  result = Plat_ExitProcess(1);
LABEL_17:
  v15 = result;
  this->m_FirstFree = *(result + 96);
  if ( multilist )
  {
LABEL_18:
    *(v15 + 96) = 0;
    *(v15 + 88) = 0;
    return result;
  }
LABEL_26:
  *(v15 + 96) = result;
  *(v15 + 88) = result;
  return result;
}


// CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x0000000002183900, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::InsertBefore
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >::AllocInternal  (line 674, @0x00000000021b9bf0, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDamageModifier::AddModifierToEntity
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted memory allocator)\n", "CUtlLinkedList overflow! (exhausted index range)\n"
int __fastcall CUtlLinkedList<CDamageModifier *,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>>::AllocInternal(
        CUtlLinkedList<CDamageModifier*,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier*,int>,int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CDamageModifier*,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier*,int>,int> > *v3; // rbx
  int result; // eax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CDamageModifier*,int> *v6; // rcx
  int index; // eax
  int m_nAllocationCount; // esi
  unsigned __int64 v9; // rdx
  UtlLinkedListElem_t<CDamageModifier*,int> *m_pMemory; // rcx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  LeafCodeInfo_t v21; // [rsp+0h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result != -1 )
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
    goto LABEL_3;
  }
  index = this->m_LastAlloc.index;
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  if ( index < 0LL || index >= m_nAllocationCount )
  {
    if ( m_nAllocationCount > 0 )
    {
      m_pMemory = this->m_Memory.m_pMemory;
LABEL_24:
      result = 0;
      v9 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    result = index + 1;
    v9 = result;
    if ( result >= 0LL && m_nAllocationCount > result )
      goto LABEL_10;
  }
  CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>::Grow(&this->m_Memory, 1);
  v11 = v3->m_LastAlloc.index;
  m_pMemory = v3->m_Memory.m_pMemory;
  v12 = v3->m_Memory.m_nAllocationCount;
  v3->m_pElements = v3->m_Memory.m_pMemory;
  if ( v11 < 0LL || v11 >= v12 )
    goto LABEL_23;
  result = v11 + 1;
  v9 = result;
  if ( result < 0LL || v12 <= result )
    goto LABEL_18;
LABEL_10:
  if ( result == -1 )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v21.m_szFile = "../../public/tier1/utllinkedlist.h";
      v21.m_szFunction = "AllocInternal";
      v21.m_nLine = 708;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v21,
        "CUtlLinkedList overflow! (exhausted index range)\n",
        v19,
        v20);
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_23:
      if ( v12 > 0 )
        break;
LABEL_18:
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 699;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted memory allocator)\n",
          v17,
          v18);
      }
    }
    goto LABEL_24;
  }
  m_pMemory = v3->m_Memory.m_pMemory;
LABEL_12:
  ++v3->m_NumAlloced;
  v5 = v9;
  v3->m_LastAlloc.index = result;
  v6 = &m_pMemory[v5];
LABEL_3:
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CEnvWindShared*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x0000000002219e60, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CEnvWindShared::CEnvWindShared
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CEnvWindShared *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared *,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CEnvWindShared*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CEnvWindShared*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CEnvWindShared *,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CFuncAreaPortalBase*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x0000000002251670, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CFuncAreaPortalBase::CFuncAreaPortalBase
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CFuncAreaPortalBase *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase *,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CFuncAreaPortalBase*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CFuncAreaPortalBase*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase *,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x00000000022b6870, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CMarkupManager::FindOrCreateMarkupGroup, CMarkupVolumeTagged::Activate
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>::Grow(
          &v3->m_Memory,
          1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    ++v3->m_NumAlloced;
    v3->m_LastAlloc.index = v11;
    result = v11;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::AllocInternal  (line 674, @0x000000000231a670, libserver.so)  // inlines: First, GetIndex, InternalElement, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> >::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CParticleSystemQueryGameSystem::PreSpawnGroupLoad
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
__int64 __fastcall CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>>::AllocInternal(
        CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> > > *const this,
        bool multilist)
{
  __int64 result; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *m_pBlockHeader; // rdx
  intp m_nIndex; // rcx
  intp m_nBlockSize; // rsi
  intp v8; // rcx
  intp v9; // rcx
  intp v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 m_FirstFree; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  result = this->m_FirstFree;
  if ( result != 0 )
    goto LABEL_17;
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  if ( m_pBlockHeader != 0
    && (m_nIndex = this->m_LastAlloc.m_nIndex) >= 0
    && (m_nBlockSize = m_pBlockHeader->m_nBlockSize, m_nIndex < m_nBlockSize) )
  {
    v8 = m_nIndex + 1;
    if ( m_nBlockSize > v8 )
    {
      if ( v8 >= 0 )
        goto LABEL_22;
      goto LABEL_7;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_7;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_7;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
    goto LABEL_21;
LABEL_7:
  m_FirstFree = this->m_FirstFree;
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>::Grow(&this->m_Memory, 1);
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  this->m_pElements = 0;
  result = m_FirstFree;
  if ( m_pBlockHeader != 0 && (v9 = this->m_LastAlloc.m_nIndex) >= 0 && (v10 = m_pBlockHeader->m_nBlockSize, v9 < v10) )
  {
    v8 = v9 + 1;
    if ( v10 > v8 )
    {
      if ( v8 < 0 )
        goto LABEL_12;
LABEL_22:
      if ( &m_pBlockHeader[2 * v8] != -16LL )
      {
        this->m_LastAlloc.m_pBlockHeader = m_pBlockHeader;
        this->m_LastAlloc.m_nIndex = v8;
        if ( m_pBlockHeader->m_nBlockSize <= v8 )
        {
          ++this->m_NumAlloced;
          v15 = 0;
        }
        else
        {
          ++this->m_NumAlloced;
          result = &m_pBlockHeader[2 * v8 + 1];
          v15 = result;
        }
        if ( multilist )
          goto LABEL_18;
        goto LABEL_26;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../../public/tier1/utllinkedlist.h";
        v17.m_szFunction = "AllocInternal";
        v17.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      goto LABEL_14;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_12;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_12;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
  {
LABEL_21:
    v8 = 0;
    goto LABEL_22;
  }
LABEL_12:
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v17.m_szFile = "../../public/tier1/utllinkedlist.h";
    v17.m_szFunction = "AllocInternal";
    v17.m_nLine = 699;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v17,
      "CUtlLinkedList overflow! (exhausted memory allocator)\n");
  }
LABEL_14:
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
    loc_0 = -559038737;
  result = Plat_ExitProcess(1);
LABEL_17:
  v15 = result;
  this->m_FirstFree = *(result + 24);
  if ( multilist )
  {
LABEL_18:
    *(v15 + 24) = 0;
    *(v15 + 16) = 0;
    return result;
  }
LABEL_26:
  *(v15 + 24) = result;
  *(v15 + 16) = result;
  return result;
}


// CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::AllocInternal  (line 674, @0x000000000231b590, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::InsertBefore
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted memory allocator)\n", "CUtlLinkedList overflow! (exhausted index range)\n"
int __fastcall CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::AllocInternal(
        CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int> > *v3; // rbx
  int result; // eax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CUserCmd,int> *v6; // rcx
  int index; // eax
  int m_nAllocationCount; // esi
  unsigned __int64 v9; // rdx
  UtlLinkedListElem_t<CUserCmd,int> *m_pMemory; // rcx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  LeafCodeInfo_t v21; // [rsp+0h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result != -1 )
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
    goto LABEL_3;
  }
  index = this->m_LastAlloc.index;
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  if ( index < 0LL || index >= m_nAllocationCount )
  {
    if ( m_nAllocationCount > 0 )
    {
      m_pMemory = this->m_Memory.m_pMemory;
LABEL_24:
      result = 0;
      v9 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    result = index + 1;
    v9 = result;
    if ( result >= 0LL && m_nAllocationCount > result )
      goto LABEL_10;
  }
  CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>::Grow(&this->m_Memory, 1);
  v11 = v3->m_LastAlloc.index;
  m_pMemory = v3->m_Memory.m_pMemory;
  v12 = v3->m_Memory.m_nAllocationCount;
  v3->m_pElements = v3->m_Memory.m_pMemory;
  if ( v11 < 0LL || v11 >= v12 )
    goto LABEL_23;
  result = v11 + 1;
  v9 = result;
  if ( result < 0LL || v12 <= result )
    goto LABEL_18;
LABEL_10:
  if ( result == -1 )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v21.m_szFile = "../../public/tier1/utllinkedlist.h";
      v21.m_szFunction = "AllocInternal";
      v21.m_nLine = 708;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v21,
        "CUtlLinkedList overflow! (exhausted index range)\n",
        v19,
        v20);
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_23:
      if ( v12 > 0 )
        break;
LABEL_18:
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 699;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted memory allocator)\n",
          v17,
          v18);
      }
    }
    goto LABEL_24;
  }
  m_pMemory = v3->m_Memory.m_pMemory;
LABEL_12:
  ++v3->m_NumAlloced;
  v5 = v9;
  v3->m_LastAlloc.index = result;
  v6 = &m_pMemory[v5];
LABEL_3:
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x000000000231c4e0, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::InsertBefore
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CPlayerCmdInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CPlayerCmdInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x000000000231c920, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::InsertBefore
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CPlayerSimInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CPlayerSimInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    ++v3->m_NumAlloced;
    v3->m_LastAlloc.index = v11;
    result = v11;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x000000000231d2c0, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlMultiList<watcher_t, short unsigned int>::CreateList
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short>,unsigned short>::Grow(
          &v3->m_Memory,
          1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    ++v3->m_NumAlloced;
    v3->m_LastAlloc.index = v11;
    result = v11;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::AllocInternal  (line 674, @0x0000000002347780, libserver.so)  // inlines: First, GetIndex, InternalElement, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> >::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CLagCompensationManager::RecordDataIntoTrack
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
__int64 __fastcall CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::AllocInternal(
        CUtlLinkedList<LagRecord,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> > > *const this,
        bool multilist)
{
  __int64 result; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pBlockHeader; // rdx
  intp m_nIndex; // rcx
  intp m_nBlockSize; // rsi
  intp v8; // rcx
  intp v9; // rcx
  intp v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 m_FirstFree; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  result = this->m_FirstFree;
  if ( result != 0 )
    goto LABEL_17;
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  if ( m_pBlockHeader != 0
    && (m_nIndex = this->m_LastAlloc.m_nIndex) >= 0
    && (m_nBlockSize = m_pBlockHeader->m_nBlockSize, m_nIndex < m_nBlockSize) )
  {
    v8 = m_nIndex + 1;
    if ( m_nBlockSize > v8 )
    {
      if ( v8 >= 0 )
        goto LABEL_22;
      goto LABEL_7;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_7;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_7;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
    goto LABEL_21;
LABEL_7:
  m_FirstFree = this->m_FirstFree;
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>::Grow(&this->m_Memory, 1);
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  this->m_pElements = 0;
  result = m_FirstFree;
  if ( m_pBlockHeader != 0 && (v9 = this->m_LastAlloc.m_nIndex) >= 0 && (v10 = m_pBlockHeader->m_nBlockSize, v9 < v10) )
  {
    v8 = v9 + 1;
    if ( v10 > v8 )
    {
      if ( v8 < 0 )
        goto LABEL_12;
LABEL_22:
      if ( &m_pBlockHeader[20 * v8] != -16LL )
      {
        this->m_LastAlloc.m_pBlockHeader = m_pBlockHeader;
        this->m_LastAlloc.m_nIndex = v8;
        if ( m_pBlockHeader->m_nBlockSize <= v8 )
        {
          ++this->m_NumAlloced;
          v15 = 0;
        }
        else
        {
          ++this->m_NumAlloced;
          result = &m_pBlockHeader[20 * v8 + 1];
          v15 = result;
        }
        if ( multilist )
          goto LABEL_18;
        goto LABEL_26;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../../public/tier1/utllinkedlist.h";
        v17.m_szFunction = "AllocInternal";
        v17.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      goto LABEL_14;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_12;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_12;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
  {
LABEL_21:
    v8 = 0;
    goto LABEL_22;
  }
LABEL_12:
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v17.m_szFile = "../../public/tier1/utllinkedlist.h";
    v17.m_szFunction = "AllocInternal";
    v17.m_nLine = 699;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v17,
      "CUtlLinkedList overflow! (exhausted memory allocator)\n");
  }
LABEL_14:
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
    loc_0 = -559038737;
  result = Plat_ExitProcess(1);
LABEL_17:
  v15 = result;
  this->m_FirstFree = *(result + 312);
  if ( multilist )
  {
LABEL_18:
    *(v15 + 312) = 0;
    *(v15 + 304) = 0;
    return result;
  }
LABEL_26:
  *(v15 + 312) = result;
  *(v15 + 304) = result;
  return result;
}


// CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x0000000002580860, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::InsertBefore
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<int,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<int,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<int,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<int,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<int,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x00000000026b76a0, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::InsertBefore
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CUnitOrders,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CUnitOrders,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CUnitOrders,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    ++v3->m_NumAlloced;
    v3->m_LastAlloc.index = v11;
    result = v11;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> > >::AllocInternal  (line 674, @0x000000000298d2d0, libserver.so)  // inlines: First, GetIndex, InternalElement, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> >::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAHeroList::UpdateHeroPositions
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
__int64 __fastcall CUtlLinkedList<CDOTAHeroPositionsElement,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>>::AllocInternal(
        CUtlLinkedList<CDOTAHeroPositionsElement,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> > > *const this,
        bool multilist)
{
  __int64 result; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pBlockHeader; // rdx
  intp m_nIndex; // rcx
  intp m_nBlockSize; // rsi
  intp v8; // rcx
  intp v9; // rcx
  intp v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 m_FirstFree; // [rsp+8h] [rbp-38h]
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  result = this->m_FirstFree;
  if ( result != 0 )
    goto LABEL_17;
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  if ( m_pBlockHeader != 0
    && (m_nIndex = this->m_LastAlloc.m_nIndex) >= 0
    && (m_nBlockSize = m_pBlockHeader->m_nBlockSize, m_nIndex < m_nBlockSize) )
  {
    v8 = m_nIndex + 1;
    if ( m_nBlockSize > v8 )
    {
      if ( v8 >= 0 )
        goto LABEL_22;
      goto LABEL_7;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_7;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_7;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
    goto LABEL_21;
LABEL_7:
  m_FirstFree = this->m_FirstFree;
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>::Grow(&this->m_Memory, 1);
  m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
  this->m_pElements = 0;
  result = m_FirstFree;
  if ( m_pBlockHeader != 0 && (v9 = this->m_LastAlloc.m_nIndex) >= 0 && (v10 = m_pBlockHeader->m_nBlockSize, v9 < v10) )
  {
    v8 = v9 + 1;
    if ( v10 > v8 )
    {
      if ( v8 < 0 )
        goto LABEL_12;
LABEL_22:
      if ( (m_pBlockHeader + 40 * v8) != -16LL )
      {
        this->m_LastAlloc.m_pBlockHeader = m_pBlockHeader;
        this->m_LastAlloc.m_nIndex = v8;
        if ( m_pBlockHeader->m_nBlockSize <= v8 )
        {
          ++this->m_NumAlloced;
          v15 = 0;
        }
        else
        {
          ++this->m_NumAlloced;
          result = &m_pBlockHeader[1] + 40 * v8;
          v15 = result;
        }
        if ( multilist )
          goto LABEL_18;
        goto LABEL_26;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../../public/tier1/utllinkedlist.h";
        v17.m_szFunction = "AllocInternal";
        v17.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      goto LABEL_14;
    }
    m_pBlockHeader = m_pBlockHeader->m_pNext;
    if ( m_pBlockHeader == 0 )
      goto LABEL_12;
  }
  else
  {
    m_pBlockHeader = this->m_Memory.m_pBlocks;
    if ( this->m_Memory.m_pBlocks == 0 )
      goto LABEL_12;
  }
  if ( m_pBlockHeader->m_nBlockSize > 0 )
  {
LABEL_21:
    v8 = 0;
    goto LABEL_22;
  }
LABEL_12:
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v17.m_szFile = "../../public/tier1/utllinkedlist.h";
    v17.m_szFunction = "AllocInternal";
    v17.m_nLine = 699;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v17,
      "CUtlLinkedList overflow! (exhausted memory allocator)\n");
  }
LABEL_14:
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
    loc_0 = -559038737;
  result = Plat_ExitProcess(1);
LABEL_17:
  v15 = result;
  this->m_FirstFree = *(result + 32);
  if ( multilist )
  {
LABEL_18:
    *(v15 + 32) = 0;
    *(v15 + 24) = 0;
    return result;
  }
LABEL_26:
  *(v15 + 32) = result;
  *(v15 + 24) = result;
  return result;
}


// CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x0000000002f0ccf0, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CFuncNavBlocker::Spawn
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<CFuncNavBlocker *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker *,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<CFuncNavBlocker*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<CFuncNavBlocker*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker *,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int> >::AllocInternal  (line 674, @0x0000000002f23af0, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: NextBotManager::Register
// strings: "../../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted index range)\n", "CUtlLinkedList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::AllocInternal(
        CUtlLinkedList<INextBot*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<INextBot*,short unsigned int>,short unsigned int> > *const this,
        bool multilist)
{
  CUtlLinkedList<INextBot*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<INextBot*,short unsigned int>,short unsigned int> > *v3; // rbx
  unsigned __int16 result; // ax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v6; // rcx
  unsigned __int16 index; // si
  int m_nAllocationCount; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // si
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+Ch] [rbp-34h]
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    index = this->m_LastAlloc.index;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v9 = m_nAllocationCount;
    if ( index < m_nAllocationCount )
      goto LABEL_20;
    v10 = 0xFFFF;
    v11 = (m_nAllocationCount > 0) - 1;
    if ( m_nAllocationCount > 0 )
      v10 = 0;
    if ( m_nAllocationCount <= v10 )
      goto LABEL_10;
LABEL_24:
    while ( v11 == 0xFFFF )
    {
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 708;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted index range)\n");
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v17, v18, v15, v16) != 0 )
          loc_0 = -559038737;
        result = Plat_ExitProcess(1);
LABEL_20:
        v11 = index + 1;
        v19 = 0xFFFF;
        if ( v9 <= v11 )
          v11 = result;
        else
          v19 = v11;
        if ( v9 > v19 )
          break;
LABEL_10:
        v20 = result;
        CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>::Grow(&v3->m_Memory, 1);
        v12 = v3->m_LastAlloc.index;
        v13 = v3->m_Memory.m_nAllocationCount;
        v3->m_pElements = v3->m_Memory.m_pMemory;
        if ( v12 >= v13 )
        {
          v14 = 0xFFFF;
          v11 = (v13 > 0) - 1;
          if ( v13 > 0 )
            v14 = 0;
        }
        else
        {
          v11 = v12 + 1;
          v14 = 0xFFFF;
          if ( v13 <= v11 )
            v11 = v20;
          else
            v14 = v11;
        }
        if ( v13 > v14 )
          goto LABEL_24;
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v21.m_szFile = "../../public/tier1/utllinkedlist.h";
          v21.m_szFunction = "AllocInternal";
          v21.m_nLine = 699;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v21,
            "CUtlLinkedList overflow! (exhausted memory allocator)\n");
        }
      }
    }
    v3->m_LastAlloc.index = v11;
    result = v11;
    ++v3->m_NumAlloced;
    v5 = v11;
    v6 = &v3->m_Memory.m_pMemory[v5];
  }
  else
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
  }
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::AllocInternal  (line 674, @0x000000000322eec0, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore
// strings: "../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted memory allocator)\n", "CUtlLinkedList overflow! (exhausted index range)\n"
int __fastcall CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::AllocInternal(
        CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int> > *const this,
        bool multilist)
{
  CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int> > *v3; // rbx
  int result; // eax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int> *v6; // rcx
  int index; // eax
  int m_nAllocationCount; // esi
  unsigned __int64 v9; // rdx
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int> *m_pMemory; // rcx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  LeafCodeInfo_t v21; // [rsp+0h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result != -1 )
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
    goto LABEL_3;
  }
  index = this->m_LastAlloc.index;
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  if ( index < 0LL || index >= m_nAllocationCount )
  {
    if ( m_nAllocationCount > 0 )
    {
      m_pMemory = this->m_Memory.m_pMemory;
LABEL_24:
      result = 0;
      v9 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    result = index + 1;
    v9 = result;
    if ( result >= 0LL && m_nAllocationCount > result )
      goto LABEL_10;
  }
  CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>::Grow(&this->m_Memory, 1);
  v11 = v3->m_LastAlloc.index;
  m_pMemory = v3->m_Memory.m_pMemory;
  v12 = v3->m_Memory.m_nAllocationCount;
  v3->m_pElements = v3->m_Memory.m_pMemory;
  if ( v11 < 0LL || v11 >= v12 )
    goto LABEL_23;
  result = v11 + 1;
  v9 = result;
  if ( result < 0LL || v12 <= result )
    goto LABEL_18;
LABEL_10:
  if ( result == -1 )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v21.m_szFile = "../public/tier1/utllinkedlist.h";
      v21.m_szFunction = "AllocInternal";
      v21.m_nLine = 708;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v21,
        "CUtlLinkedList overflow! (exhausted index range)\n",
        v19,
        v20);
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_23:
      if ( v12 > 0 )
        break;
LABEL_18:
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 699;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted memory allocator)\n",
          v17,
          v18);
      }
    }
    goto LABEL_24;
  }
  m_pMemory = v3->m_Memory.m_pMemory;
LABEL_12:
  ++v3->m_NumAlloced;
  v3->m_LastAlloc.index = result;
  v5 = v9;
  v6 = &m_pMemory[v5];
LABEL_3:
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::AllocInternal  (line 674, @0x000000000322f610, libserver.so)  // inlines: First, InternalElement, IsIdxValid, IsValidIterator, LeafCodeInfo_t, Next, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: GCSDK::CJobMgr::MarkJobPause
// strings: "../public/tier1/utllinkedlist.h", "AllocInternal", "CUtlLinkedList overflow! (exhausted memory allocator)\n", "CUtlLinkedList overflow! (exhausted index range)\n"
int __fastcall CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::AllocInternal(
        CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int> > *const this,
        bool multilist)
{
  CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int> > *v3; // rbx
  int result; // eax
  unsigned __int64 v5; // rdx
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int> *v6; // rcx
  int index; // eax
  int m_nAllocationCount; // esi
  unsigned __int64 v9; // rdx
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int> *m_pMemory; // rcx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  LeafCodeInfo_t v21; // [rsp+0h] [rbp-30h] BYREF

  v3 = this;
  result = this->m_FirstFree;
  if ( result != -1 )
  {
    v5 = result;
    v6 = &this->m_Memory.m_pMemory[v5];
    this->m_FirstFree = v6->m_Next;
    goto LABEL_3;
  }
  index = this->m_LastAlloc.index;
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  if ( index < 0LL || index >= m_nAllocationCount )
  {
    if ( m_nAllocationCount > 0 )
    {
      m_pMemory = this->m_Memory.m_pMemory;
LABEL_24:
      result = 0;
      v9 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    result = index + 1;
    v9 = result;
    if ( result >= 0LL && m_nAllocationCount > result )
      goto LABEL_10;
  }
  CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>::Grow(&this->m_Memory, 1);
  v11 = v3->m_LastAlloc.index;
  m_pMemory = v3->m_Memory.m_pMemory;
  v12 = v3->m_Memory.m_nAllocationCount;
  v3->m_pElements = v3->m_Memory.m_pMemory;
  if ( v11 < 0LL || v11 >= v12 )
    goto LABEL_23;
  result = v11 + 1;
  v9 = result;
  if ( result < 0LL || v12 <= result )
    goto LABEL_18;
LABEL_10:
  if ( result == -1 )
  {
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v21.m_szFile = "../public/tier1/utllinkedlist.h";
      v21.m_szFunction = "AllocInternal";
      v21.m_nLine = 708;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v21,
        "CUtlLinkedList overflow! (exhausted index range)\n",
        v19,
        v20);
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_23:
      if ( v12 > 0 )
        break;
LABEL_18:
      v3 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../public/tier1/utllinkedlist.h";
        v21.m_szFunction = "AllocInternal";
        v21.m_nLine = 699;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "CUtlLinkedList overflow! (exhausted memory allocator)\n",
          v17,
          v18);
      }
    }
    goto LABEL_24;
  }
  m_pMemory = v3->m_Memory.m_pMemory;
LABEL_12:
  ++v3->m_NumAlloced;
  v3->m_LastAlloc.index = result;
  v5 = v9;
  v6 = &m_pMemory[v5];
LABEL_3:
  if ( multilist )
  {
    v6->m_Next = -1;
    v3->m_Memory.m_pMemory[v5].m_Previous = -1;
  }
  else
  {
    v6->m_Next = result;
    v3->m_Memory.m_pMemory[v5].m_Previous = result;
  }
  return result;
}


// CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::Free  (line 749, @0x0000000001f98f40, libserver.so)  // inlines: Destruct<CScrollingScreenOverlay::TextLine_t>, InternalElement, operator[], ~CUtlString, ~TextLine_t
// calls: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::Unlink, CUtlString::FreeMemoryBlock
// callers: CScrollingScreenOverlay::Draw, CScrollingScreenOverlay::AddText
void __fastcall CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::Free(
        CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  __int64 v4; // rbx
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v5; // rbx

  v4 = elem;
  CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::Unlink(
    this,
    elem);
  v5 = &this->m_Memory.m_pMemory[v4];
  if ( v5->m_Element.m_text.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v5->m_Element.m_text);
  v5->m_Next = this->m_FirstFree;
  this->m_FirstFree = elem;
}


// CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::Free  (line 749, @0x0000000002180b10, libserver.so)  // inlines: Destruct<CResponseQueue::CDeferredResponse>, ~CDeferredResponse
// calls: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::Unlink, CResponseCriteriaSet::~CResponseCriteriaSet
// callers: CResponseQueue::Remove, CResponseQueue::PerFrameDispatch
void __fastcall CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::Free(
        CUtlLinkedList<CResponseQueue::CDeferredResponse,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> > > *const this,
        __int64 elem)
{
  CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::Unlink(
    this,
    elem);
  *elem = &off_4000240;
  CResponseCriteriaSet::~CResponseCriteriaSet((elem + 16));
  *(elem + 96) = this->m_FirstFree;
  this->m_FirstFree = elem;
}


// CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::InsertBefore  (line 765, @0x0000000001f9bc80, libserver.so)  // inlines: CUtlString, Construct<CScrollingScreenOverlay::TextLine_t>, InternalElement, LinkBefore, TextLine_t, operator[]
// calls: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::Unlink
// callers: CScrollingScreenOverlay::AddText
unsigned __int16 __fastcall CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::InsertBefore(
        CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 before)
{
  unsigned __int16 result; // ax
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v5; // rdi
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v6; // rcx
  unsigned __int16 m_Tail; // si
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v8; // rdx
  unsigned __int16 v9; // [rsp+Ch] [rbp-24h]

  result = CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::AllocInternal(
             this,
             0);
  if ( result != 0xFFFF )
  {
    v9 = result;
    CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::Unlink(
      this,
      result);
    result = v9;
    v5 = &this->m_Memory.m_pMemory[v9];
    v5->m_Next = before;
    if ( before == 0xFFFF )
    {
      m_Tail = this->m_Tail;
      v5->m_Previous = m_Tail;
      this->m_Tail = v9;
      if ( m_Tail != 0xFFFF )
        goto LABEL_4;
    }
    else
    {
      v6 = &this->m_Memory.m_pMemory[before];
      m_Tail = v6->m_Previous;
      v5->m_Previous = m_Tail;
      v6->m_Previous = v9;
      if ( m_Tail != 0xFFFF )
      {
LABEL_4:
        this->m_Memory.m_pMemory[m_Tail].m_Next = v9;
        goto LABEL_5;
      }
    }
    this->m_Head = v9;
LABEL_5:
    ++this->m_ElementCount;
    v8 = &this->m_Memory.m_pMemory[v9];
    if ( v8 != 0 )
      v8->m_Element.m_text.m_pString = 0;
  }
  return result;
}


// CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::InsertBefore  (line 765, @0x000000000231cb60, libserver.so)  // inlines: CPlayerSimInfo, Construct<CPlayerSimInfo>, InternalElement, LinkBefore, Vector, operator[]
// calls: CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::Unlink
// callers: CBasePlayer::AdjustPlayerTimeBase
unsigned __int16 __fastcall CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::InsertBefore(
        CUtlLinkedList<CPlayerSimInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 before)
{
  __int64 v2; // r13
  unsigned __int16 result; // ax
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *v6; // rsi
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *v7; // rdi
  __int64 m_Tail; // rcx
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *v9; // rdx
  unsigned __int16 v10; // [rsp+Ch] [rbp-24h]

  v2 = before;
  result = CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::AllocInternal(
             this,
             0);
  if ( result != 0xFFFF )
  {
    v10 = result;
    CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::Unlink(
      this,
      result);
    result = v10;
    v6 = &this->m_Memory.m_pMemory[v10];
    v6->m_Next = before;
    if ( before == 0xFFFF )
    {
      m_Tail = this->m_Tail;
      v6->m_Previous = m_Tail;
      this->m_Tail = v10;
      if ( m_Tail != 0xFFFF )
        goto LABEL_4;
    }
    else
    {
      v7 = &this->m_Memory.m_pMemory[v2];
      m_Tail = v7->m_Previous;
      v6->m_Previous = m_Tail;
      v7->m_Previous = v10;
      if ( m_Tail != 0xFFFF )
      {
LABEL_4:
        this->m_Memory.m_pMemory[m_Tail].m_Next = v10;
        goto LABEL_5;
      }
    }
    this->m_Head = v10;
LABEL_5:
    ++this->m_ElementCount;
    v9 = &this->m_Memory.m_pMemory[v10];
    if ( v9 != 0 )
    {
      v9->m_Element.m_flTime = 0.0;
      v9->m_Element.m_nNumCmds = 0;
      v9->m_Element.m_nTicksCorrected = 0;
      v9->m_Element.m_flFinalSimulationTime = 0.0;
      v9->m_Element.m_flGameSimulationTime = 0.0;
      v9->m_Element.m_flServerFrameTime = 0.0;
      v9->m_Element.m_vecAbsOrigin.x = 0.0;
      v9->m_Element.m_vecAbsOrigin.y = 0.0;
      v9->m_Element.m_vecAbsOrigin.z = 0.0;
    }
  }
  return result;
}


// CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::InsertBefore  (line 765, @0x00000000026b78e0, libserver.so)  // inlines: CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CUnitOrders>, InternalElement, LinkBefore, Reset, operator=, operator[]
// calls: CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::Unlink
// callers: CDOTAPlayer::AddExecuteOrders
unsigned __int16 __fastcall CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::InsertBefore(
        CUtlLinkedList<CUnitOrders,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 before)
{
  __int64 v2; // r13
  unsigned __int16 result; // ax
  UtlLinkedListElem_t<CUnitOrders,short unsigned int> *v6; // rsi
  UtlLinkedListElem_t<CUnitOrders,short unsigned int> *v7; // rdi
  __int64 m_Tail; // rcx
  UtlLinkedListElem_t<CUnitOrders,short unsigned int> *v9; // rdx
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  unsigned __int16 v13; // [rsp+Ch] [rbp-24h]

  v2 = before;
  result = CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::AllocInternal(
             this,
             0);
  if ( result != 0xFFFF )
  {
    v13 = result;
    CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::Unlink(
      this,
      result);
    result = v13;
    v6 = &this->m_Memory.m_pMemory[v13];
    v6->m_Next = before;
    if ( before == 0xFFFF )
    {
      m_Tail = this->m_Tail;
      v6->m_Previous = m_Tail;
      this->m_Tail = v13;
      if ( m_Tail != 0xFFFF )
        goto LABEL_4;
    }
    else
    {
      v7 = &this->m_Memory.m_pMemory[v2];
      m_Tail = v7->m_Previous;
      v6->m_Previous = m_Tail;
      v7->m_Previous = v13;
      if ( m_Tail != 0xFFFF )
      {
LABEL_4:
        this->m_Memory.m_pMemory[m_Tail].m_Next = v13;
        goto LABEL_5;
      }
    }
    this->m_Head = v13;
LABEL_5:
    ++this->m_ElementCount;
    v9 = &this->m_Memory.m_pMemory[v13];
    if ( v9 != 0 )
    {
      v9->m_Element.m_nUnits.m_Size = 0;
      v9->m_Element.m_nUnits.m_Memory.m_pMemory = 0;
      v9->m_Element.m_nUnits.m_Memory.m_nAllocationCount = 0;
      v9->m_Element.m_nUnits.m_Memory.m_nGrowSize = 0;
      x = vec3_origin.x;
      v9->m_Element.m_nOrderSequenceNumber = 0;
      v9->m_Element.m_nIssuerPlayerIndex = -1;
      v9->m_Element.m_vPosition.x = x;
      y = vec3_origin.y;
      v9->m_Element.m_nOrderType = 0;
      v9->m_Element.m_vPosition.y = y;
      z = vec3_origin.z;
      v9->m_Element.m_nTargetIndex.m_Data = 0;
      v9->m_Element.m_vPosition.z = z;
      v9->m_Element.m_nAbilityIndex.m_Data = 0;
      v9->m_Element.m_bQueue = 0;
    }
  }
  return result;
}


// CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::InsertBefore  (line 816, @0x0000000002183bd0, libserver.so)  // inlines: CopyConstruct<CBaseCombatWeapon*>, InternalElement, LinkBefore, operator[]
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::Unlink
// callers: OnBaseCombatWeaponCreated, CBaseCombatWeapon::CBaseCombatWeapon
unsigned __int16 __fastcall CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::InsertBefore(
        CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 before,
        CBaseCombatWeapon *const *const src)
{
  __int64 v3; // r14
  unsigned __int16 result; // ax
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *v8; // rsi
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *v9; // r14
  __int64 m_Tail; // rcx
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *v11; // rdx
  unsigned __int16 v12; // [rsp+Ch] [rbp-24h]

  v3 = before;
  result = CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::AllocInternal(
             this,
             0);
  if ( result != 0xFFFF )
  {
    v12 = result;
    CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::Unlink(
      this,
      result);
    result = v12;
    v8 = &this->m_Memory.m_pMemory[v12];
    v8->m_Next = before;
    if ( before == 0xFFFF )
    {
      m_Tail = this->m_Tail;
      v8->m_Previous = m_Tail;
      this->m_Tail = v12;
      if ( m_Tail != 0xFFFF )
        goto LABEL_4;
    }
    else
    {
      v9 = &this->m_Memory.m_pMemory[v3];
      m_Tail = v9->m_Previous;
      v8->m_Previous = m_Tail;
      v9->m_Previous = v12;
      if ( m_Tail != 0xFFFF )
      {
LABEL_4:
        this->m_Memory.m_pMemory[m_Tail].m_Next = v12;
        goto LABEL_5;
      }
    }
    this->m_Head = v12;
LABEL_5:
    ++this->m_ElementCount;
    v11 = &this->m_Memory.m_pMemory[v12];
    if ( v11 != 0 )
      v11->m_Element = *src;
  }
  return result;
}


// CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::InsertBefore  (line 816, @0x000000000231b790, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, CUserCmd, ChangeAccessorFieldPathIndex_t, CopyConstruct<CUserCmd>, EnsureValidValue, EnsureValidValue<float>, Get, HandInfo_t, Init, InternalElement, LinkBefore, NetworkStateChanged, Reset, Set, Zero, operator CEntityInstance*, operator!=, operator=, operator=<QAngle>, operator=<Quaternion>, operator=<Vector>, operator=<int>, operator==, operator[]
// calls: CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::AllocInternal, CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::Unlink, CUserCmd::operator=
// callers: CBasePlayer::ProcessUsercmds, CBasePlayer::AdjustPlayerTimeBase
int __fastcall CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::InsertBefore(
        CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int> > *const this,
        int before,
        const CUserCmd *const src)
{
  __int64 v3; // r12
  int v5; // eax
  int v6; // r14d
  double v7; // xmm4_8
  __int64 v8; // rax
  UtlLinkedListElem_t<CUserCmd,int> *v9; // rcx
  UtlLinkedListElem_t<CUserCmd,int> *v10; // r12
  __int64 m_Tail; // rdx
  bool v12; // zf
  UtlLinkedListElem_t<CUserCmd,int> *v13; // rax
  const QAngle *v14; // r8
  double v15; // xmm0_8
  const Vector *v16; // r9
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *p_m_vPosition; // r10
  double v18; // xmm6_8
  HandInfo_t *hmd_controllers_info; // r12
  double v20; // xmm3_8
  double v21; // xmm5_8
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *p_m_FilteredAngles; // r15
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *p_m_vFilteredVelocity; // r14
  CNetworkVarBase<Quaternion,HandInfo_t::NetworkVar_m_FilteredAngularVel> *p_m_FilteredAngularVel; // r13
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *p_m_Angles; // r11
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *p_m_vFilteredPosition; // rax
  double v27; // xmm1_8
  signed __int64 v28; // rbx
  double v29; // xmm2_8
  double v30; // xmm7_8
  double v31; // xmm1_8
  double v32; // xmm2_8
  double v33; // xmm4_8
  double v34; // xmm1_8
  double v35; // xmm2_8
  double v36; // xmm4_8
  double v37; // xmm1_8
  double v38; // xmm2_8
  CEntityInstance *v39; // rdi
  CEntityInstance *v41; // rdi
  CEntityInstance *v42; // rdi
  CEntityInstance *v43; // rdi
  CEntityInstance *v44; // rdi
  CEntityInstance *v45; // rdi
  CEntityInstance *v46; // rdi
  CEntityInstance *m_pObj; // rdi
  unsigned int v48; // [rsp+Ch] [rbp-E4h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v49; // [rsp+10h] [rbp-E0h]
  unsigned int v50; // [rsp+10h] [rbp-E0h]
  unsigned int v51; // [rsp+10h] [rbp-E0h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v52; // [rsp+18h] [rbp-D8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v53; // [rsp+18h] [rbp-D8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v54; // [rsp+18h] [rbp-D8h]
  unsigned int v55; // [rsp+18h] [rbp-D8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v56; // [rsp+20h] [rbp-D0h]
  unsigned int v57; // [rsp+20h] [rbp-D0h]
  unsigned int v58; // [rsp+20h] [rbp-D0h]
  unsigned int v59; // [rsp+20h] [rbp-D0h]
  unsigned int v60; // [rsp+20h] [rbp-D0h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v61; // [rsp+20h] [rbp-D0h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v62; // [rsp+20h] [rbp-D0h]
  unsigned int v63; // [rsp+20h] [rbp-D0h]
  unsigned int v64; // [rsp+28h] [rbp-C8h]
  unsigned int v65; // [rsp+28h] [rbp-C8h]
  unsigned int v66; // [rsp+28h] [rbp-C8h]
  unsigned int v67; // [rsp+28h] [rbp-C8h]
  unsigned int v68; // [rsp+28h] [rbp-C8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v69; // [rsp+28h] [rbp-C8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v70; // [rsp+28h] [rbp-C8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v71; // [rsp+28h] [rbp-C8h]
  const Vector *v72; // [rsp+30h] [rbp-C0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v73; // [rsp+30h] [rbp-C0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v74; // [rsp+30h] [rbp-C0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v75; // [rsp+30h] [rbp-C0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v76; // [rsp+30h] [rbp-C0h]
  unsigned int v77; // [rsp+30h] [rbp-C0h]
  unsigned int v78; // [rsp+30h] [rbp-C0h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v79; // [rsp+30h] [rbp-C0h]
  const QAngle *v80; // [rsp+38h] [rbp-B8h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v81; // [rsp+38h] [rbp-B8h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v82; // [rsp+38h] [rbp-B8h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v83; // [rsp+38h] [rbp-B8h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v84; // [rsp+38h] [rbp-B8h]
  const Vector *v85; // [rsp+38h] [rbp-B8h]
  const Vector *v86; // [rsp+38h] [rbp-B8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v87; // [rsp+38h] [rbp-B8h]
  vec_t v88; // [rsp+40h] [rbp-B0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v89; // [rsp+40h] [rbp-B0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v90; // [rsp+40h] [rbp-B0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v91; // [rsp+40h] [rbp-B0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v92; // [rsp+40h] [rbp-B0h]
  const QAngle *v93; // [rsp+40h] [rbp-B0h]
  const QAngle *v94; // [rsp+40h] [rbp-B0h]
  unsigned int v95; // [rsp+40h] [rbp-B0h]
  vec_t v96; // [rsp+48h] [rbp-A8h]
  unsigned int v97; // [rsp+48h] [rbp-A8h]
  unsigned int v98; // [rsp+48h] [rbp-A8h]
  unsigned int v99; // [rsp+48h] [rbp-A8h]
  unsigned int v100; // [rsp+48h] [rbp-A8h]
  vec_t v101; // [rsp+48h] [rbp-A8h]
  vec_t x; // [rsp+48h] [rbp-A8h]
  const Vector *v103; // [rsp+48h] [rbp-A8h]
  vec_t v104; // [rsp+50h] [rbp-A0h]
  const Vector *v105; // [rsp+50h] [rbp-A0h]
  const Vector *v106; // [rsp+50h] [rbp-A0h]
  const Vector *v107; // [rsp+50h] [rbp-A0h]
  const Vector *v108; // [rsp+50h] [rbp-A0h]
  vec_t v109; // [rsp+50h] [rbp-A0h]
  vec_t v110; // [rsp+50h] [rbp-A0h]
  const QAngle *v111; // [rsp+50h] [rbp-A0h]
  vec_t w; // [rsp+58h] [rbp-98h]
  const QAngle *v113; // [rsp+58h] [rbp-98h]
  const QAngle *v114; // [rsp+58h] [rbp-98h]
  const QAngle *v115; // [rsp+58h] [rbp-98h]
  const QAngle *v116; // [rsp+58h] [rbp-98h]
  vec_t v117; // [rsp+58h] [rbp-98h]
  vec_t v118; // [rsp+58h] [rbp-98h]
  int v119; // [rsp+58h] [rbp-98h]
  CUserCmd *p_m_Element; // [rsp+60h] [rbp-90h]
  unsigned int v122; // [rsp+70h] [rbp-80h]
  unsigned int v123; // [rsp+70h] [rbp-80h]
  unsigned int v124; // [rsp+70h] [rbp-80h]
  float z; // [rsp+74h] [rbp-7Ch]
  Vector *p_hmd_middle_eye_local; // [rsp+78h] [rbp-78h]
  HandInfo_t *v127; // [rsp+80h] [rbp-70h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> *p_m_flTrackpadOrJoystickAnalogValueX; // [rsp+88h] [rbp-68h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flGripAnalogValue> *p_m_flGripAnalogValue; // [rsp+90h] [rbp-60h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTriggerAnalogValue> *p_m_flTriggerAnalogValue; // [rsp+98h] [rbp-58h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueY> *p_m_flTrackpadOrJoystickAnalogValueY; // [rsp+A0h] [rbp-50h]
  ChangeAccessorFieldPathIndex_t *p_m_PathIndex; // [rsp+A8h] [rbp-48h]
  float y; // [rsp+B0h] [rbp-40h]
  int newNode; // [rsp+B4h] [rbp-3Ch]
  ChangeAccessorFieldPathIndex_t *v135; // [rsp+B8h] [rbp-38h]

  v3 = before;
  v5 = CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::AllocInternal(this, 0);
  v6 = v5;
  newNode = v5;
  if ( v5 == -1 )
    return newNode;
  CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::Unlink(this, v5);
  v8 = v6;
  v9 = &this->m_Memory.m_pMemory[v8];
  v9->m_Next = v3;
  if ( v3 == -1 )
  {
    m_Tail = this->m_Tail;
    v9->m_Previous = m_Tail;
    this->m_Tail = newNode;
    if ( m_Tail != -1 )
      goto LABEL_4;
  }
  else
  {
    v10 = &this->m_Memory.m_pMemory[v3];
    m_Tail = v10->m_Previous;
    v9->m_Previous = m_Tail;
    v10->m_Previous = newNode;
    if ( m_Tail != -1 )
    {
LABEL_4:
      this->m_Memory.m_pMemory[m_Tail].m_Next = newNode;
      goto LABEL_5;
    }
  }
  this->m_Head = newNode;
LABEL_5:
  ++this->m_ElementCount;
  v12 = &this->m_Memory.m_pMemory[v8] == 0;
  v13 = &this->m_Memory.m_pMemory[v8];
  p_m_Element = &v13->m_Element;
  if ( !v12 )
  {
    v14 = &vec3_angle;
    v15 = 0.0;
    v16 = &vec3_origin;
    p_m_PathIndex = &v13->m_Element.hmd_controllers_info[0].__m_PathIndex;
    p_m_vPosition = &v13->m_Element.hmd_controllers_info[0].m_vPosition;
    v135 = &v13->m_Element.hmd_controllers_info[0].__m_PathIndex;
    p_hmd_middle_eye_local = &v13->m_Element.hmd_middle_eye_local;
    v13->m_Element._vptr_CUserCmd = off_403F950;
    *&v18 = LODWORD(vec3_angle.y);
    hmd_controllers_info = v13->m_Element.hmd_controllers_info;
    v127 = v13->m_Element.hmd_controllers_info;
    *&v20 = LODWORD(vec3_origin.y);
    *&v21 = LODWORD(vec3_origin.z);
    p_m_flTriggerAnalogValue = &v13->m_Element.hmd_controllers_info[0].m_flTriggerAnalogValue;
    p_m_FilteredAngles = &v13->m_Element.hmd_controllers_info[0].m_FilteredAngles;
    p_m_flGripAnalogValue = &v13->m_Element.hmd_controllers_info[0].m_flGripAnalogValue;
    p_m_vFilteredVelocity = &v13->m_Element.hmd_controllers_info[0].m_vFilteredVelocity;
    p_m_flTrackpadOrJoystickAnalogValueX = &v13->m_Element.hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueX;
    p_m_FilteredAngularVel = &v13->m_Element.hmd_controllers_info[0].m_FilteredAngularVel;
    y = vec3_angle.y;
    p_m_Angles = &v13->m_Element.hmd_controllers_info[0].m_Angles;
    p_m_flTrackpadOrJoystickAnalogValueY = &v13->m_Element.hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueY;
    p_m_vFilteredPosition = &v13->m_Element.hmd_controllers_info[0].m_vFilteredPosition;
    z = vec3_angle.z;
    do
    {
      *&v27 = LODWORD(v16->x);
      v28 = hmd_controllers_info - v127;
      hmd_controllers_info->__m_pChainEntity.m_pObj = CEntitySpawnHelper::gm_pCurEntityPtr;
      *(&v135->m_Value + v28) = -1;
      *(&p_m_vPosition->m_Value.z + v28) = 0.0;
      *(&p_m_vPosition->m_Value.y + v28) = 0.0;
      *(&p_m_vPosition->m_Value.x + v28) = 0.0;
      *(&p_m_Angles->m_Value.x + v28) = 0.0;
      *(&p_m_Angles->m_Value.y + v28) = 0.0;
      *(&p_m_Angles->m_Value.z + v28) = 0.0;
      *(&p_m_vFilteredPosition->m_Value.z + v28) = 0.0;
      *(&p_m_vFilteredPosition->m_Value.y + v28) = 0.0;
      *(&p_m_vFilteredPosition->m_Value.x + v28) = 0.0;
      *(&p_m_FilteredAngles->m_Value.x + v28) = 0.0;
      *(&p_m_FilteredAngles->m_Value.y + v28) = 0.0;
      *(&p_m_FilteredAngles->m_Value.z + v28) = 0.0;
      *(&p_m_vFilteredVelocity->m_Value.z + v28) = 0.0;
      *(&p_m_vFilteredVelocity->m_Value.y + v28) = 0.0;
      *(&p_m_vFilteredVelocity->m_Value.x + v28) = 0.0;
      *(&p_m_FilteredAngularVel->m_Value.x + v28) = 0.0;
      *(&p_m_FilteredAngularVel->m_Value.y + v28) = 0.0;
      *(&p_m_FilteredAngularVel->m_Value.z + v28) = 0.0;
      *(&p_m_FilteredAngularVel->m_Value.w + v28) = 0.0;
      hmd_controllers_info->m_flTriggerAnalogValue.m_Value = 0.0;
      hmd_controllers_info->m_flGripAnalogValue.m_Value = 0.0;
      hmd_controllers_info->m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
      hmd_controllers_info->m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
      if ( *&v27 != *&v15 || *&v20 != *&v15 || *&v21 != *&v15 )
      {
        *(&p_m_vPosition->m_Value.x + v28) = *&v27;
        *(&p_m_vPosition->m_Value.y + v28) = *&v20;
        *(&p_m_vPosition->m_Value.z + v28) = *&v21;
      }
      *&v29 = LODWORD(v14->x);
      if ( *&v29 != *&v15 || y != *&v15 || (*&v30 = LODWORD(z), z != *&v15) )
      {
        *&v18 = LODWORD(y);
        *(&p_m_Angles->m_Value.x + v28) = *&v29;
        *&v30 = LODWORD(z);
        *(&p_m_Angles->m_Value.y + v28) = y;
        *(&p_m_Angles->m_Value.z + v28) = z;
      }
      if ( *&v27 != *&v15
        || *&v20 != *(&p_m_vFilteredPosition->m_Value.y + v28)
        || *&v21 != *(&p_m_vFilteredPosition->m_Value.z + v28) )
      {
        m_pObj = hmd_controllers_info->__m_pChainEntity.m_pObj;
        if ( hmd_controllers_info->__m_pChainEntity.m_pObj != 0
          && (m_pObj->m_pEntity->m_flags & 0x400) == 0
          && *(&v135->m_Value + v28) != -1 )
        {
          v71 = p_m_vFilteredPosition;
          v55 = LODWORD(v21);
          v63 = LODWORD(v20);
          v79 = p_m_Angles;
          v87 = p_m_vPosition;
          v95 = LODWORD(v15);
          v103 = v16;
          v111 = v14;
          v119 = LODWORD(v27);
          (*(m_pObj->_vptr_IHandleEntity + 22))(
            m_pObj,
            36,
            0xFFFFFFFFLL,
            p_m_PathIndex->m_Value,
            v15,
            v27,
            v29,
            v20,
            v7,
            v21,
            v18,
            v30);
          v14 = v111;
          v16 = v103;
          p_m_vPosition = v87;
          p_m_Angles = v79;
          p_m_vFilteredPosition = v71;
          LODWORD(v27) = v119;
          *&v15 = v95;
          *&v20 = v63;
          *&v21 = v55;
        }
        *(&p_m_vFilteredPosition->m_Value.x + v28) = *&v27;
        *(&p_m_vFilteredPosition->m_Value.y + v28) = *&v20;
        *(&p_m_vFilteredPosition->m_Value.z + v28) = *&v21;
      }
      *&v31 = LODWORD(v14->x);
      *&v32 = LODWORD(v14->y);
      *&v33 = LODWORD(v14->z);
      if ( *&v31 != *(&p_m_FilteredAngles->m_Value.x + v28)
        || *&v32 != *(&p_m_FilteredAngles->m_Value.y + v28)
        || *&v33 != *(&p_m_FilteredAngles->m_Value.z + v28) )
      {
        v46 = hmd_controllers_info->__m_pChainEntity.m_pObj;
        if ( hmd_controllers_info->__m_pChainEntity.m_pObj != 0
          && (v46->m_pEntity->m_flags & 0x400) == 0
          && *(&v135->m_Value + v28) != -1 )
        {
          v54 = p_m_vFilteredPosition;
          v124 = LODWORD(v21);
          v51 = LODWORD(v20);
          v62 = p_m_Angles;
          v70 = p_m_vPosition;
          v78 = LODWORD(v15);
          v86 = v16;
          v94 = v14;
          x = v14->x;
          v110 = v14->y;
          v118 = v14->z;
          (*(v46->_vptr_IHandleEntity + 22))(
            v46,
            48,
            0xFFFFFFFFLL,
            p_m_PathIndex->m_Value,
            v15,
            v31,
            v32,
            v20,
            v33,
            v21,
            v18,
            v30);
          v14 = v94;
          v16 = v86;
          p_m_vPosition = v70;
          p_m_Angles = v62;
          p_m_vFilteredPosition = v54;
          *&v33 = v118;
          *&v32 = v110;
          *&v31 = x;
          *&v15 = v78;
          *&v20 = v51;
          *&v21 = v124;
        }
        *(&p_m_FilteredAngles->m_Value.x + v28) = *&v31;
        *(&p_m_FilteredAngles->m_Value.y + v28) = *&v32;
        *(&p_m_FilteredAngles->m_Value.z + v28) = *&v33;
      }
      *&v34 = LODWORD(v16->x);
      *&v35 = LODWORD(v16->y);
      *&v36 = LODWORD(v16->z);
      if ( *&v34 != *(&p_m_vFilteredVelocity->m_Value.x + v28)
        || *&v35 != *(&p_m_vFilteredVelocity->m_Value.y + v28)
        || *&v36 != *(&p_m_vFilteredVelocity->m_Value.z + v28) )
      {
        v45 = hmd_controllers_info->__m_pChainEntity.m_pObj;
        if ( hmd_controllers_info->__m_pChainEntity.m_pObj != 0
          && (v45->m_pEntity->m_flags & 0x400) == 0
          && *(&v135->m_Value + v28) != -1 )
        {
          v53 = p_m_vFilteredPosition;
          v123 = LODWORD(v21);
          v50 = LODWORD(v20);
          v61 = p_m_Angles;
          v69 = p_m_vPosition;
          v77 = LODWORD(v15);
          v85 = v16;
          v93 = v14;
          v101 = v16->x;
          v109 = v16->y;
          v117 = v16->z;
          (*(v45->_vptr_IHandleEntity + 22))(
            v45,
            60,
            0xFFFFFFFFLL,
            p_m_PathIndex->m_Value,
            v15,
            v34,
            v35,
            v20,
            v36,
            v21,
            v18,
            v30);
          v14 = v93;
          v16 = v85;
          p_m_vPosition = v69;
          p_m_Angles = v61;
          p_m_vFilteredPosition = v53;
          *&v36 = v117;
          *&v35 = v109;
          *&v34 = v101;
          *&v15 = v77;
          *&v20 = v50;
          *&v21 = v123;
        }
        *(&p_m_vFilteredVelocity->m_Value.x + v28) = *&v34;
        *(&p_m_vFilteredVelocity->m_Value.y + v28) = *&v35;
        *(&p_m_vFilteredVelocity->m_Value.z + v28) = *&v36;
      }
      *&v37 = LODWORD(quat_identity.x);
      *&v38 = LODWORD(quat_identity.y);
      *&v7 = LODWORD(quat_identity.z);
      *&v18 = LODWORD(quat_identity.w);
      if ( quat_identity.x != *(&p_m_FilteredAngularVel->m_Value.x + v28)
        || *&v38 != *(&p_m_FilteredAngularVel->m_Value.y + v28)
        || *&v7 != *(&p_m_FilteredAngularVel->m_Value.z + v28)
        || *&v18 != *(&p_m_FilteredAngularVel->m_Value.w + v28) )
      {
        v39 = hmd_controllers_info->__m_pChainEntity.m_pObj;
        if ( hmd_controllers_info->__m_pChainEntity.m_pObj != 0
          && (v39->m_pEntity->m_flags & 0x400) == 0
          && *(&v135->m_Value + v28) != -1 )
        {
          v49 = p_m_vFilteredPosition;
          v48 = LODWORD(v21);
          v122 = LODWORD(v20);
          v52 = p_m_Angles;
          v56 = p_m_vPosition;
          v64 = LODWORD(v15);
          v72 = v16;
          v80 = v14;
          v88 = quat_identity.x;
          v96 = quat_identity.y;
          v104 = quat_identity.z;
          w = quat_identity.w;
          (*(v39->_vptr_IHandleEntity + 22))(
            v39,
            72,
            0xFFFFFFFFLL,
            p_m_PathIndex->m_Value,
            v15,
            COERCE_DOUBLE(LODWORD(quat_identity.x)),
            v38,
            v20,
            v7,
            v21,
            v18,
            v30);
          v14 = v80;
          v16 = v72;
          p_m_vPosition = v56;
          p_m_Angles = v52;
          p_m_vFilteredPosition = v49;
          *&v18 = LODWORD(w);
          *&v7 = LODWORD(v104);
          *&v38 = LODWORD(v96);
          *&v37 = LODWORD(v88);
          *&v15 = v64;
          *&v20 = v122;
          *&v21 = v48;
        }
        *(&p_m_FilteredAngularVel->m_Value.x + v28) = *&v37;
        *(&p_m_FilteredAngularVel->m_Value.y + v28) = *&v38;
        *(&p_m_FilteredAngularVel->m_Value.z + v28) = *&v7;
        *(&p_m_FilteredAngularVel->m_Value.w + v28) = *&v18;
      }
      if ( *&v15 != *(&p_m_flTriggerAnalogValue->m_Value + v28) )
      {
        v44 = hmd_controllers_info->__m_pChainEntity.m_pObj;
        if ( hmd_controllers_info->__m_pChainEntity.m_pObj != 0
          && (v44->m_pEntity->m_flags & 0x400) == 0
          && *(&v135->m_Value + v28) != -1 )
        {
          v76 = p_m_vFilteredPosition;
          v60 = LODWORD(v21);
          v68 = LODWORD(v20);
          v84 = p_m_Angles;
          v92 = p_m_vPosition;
          v100 = LODWORD(v15);
          v108 = v16;
          v116 = v14;
          (*(v44->_vptr_IHandleEntity + 22))(
            v44,
            88,
            0xFFFFFFFFLL,
            p_m_PathIndex->m_Value,
            v15,
            v37,
            v38,
            v20,
            v7,
            v21,
            v18,
            v30);
          v14 = v116;
          v16 = v108;
          p_m_vPosition = v92;
          p_m_Angles = v84;
          p_m_vFilteredPosition = v76;
          *&v15 = v100;
          *&v20 = v68;
          *&v21 = v60;
        }
        *(&p_m_flTriggerAnalogValue->m_Value + v28) = 0.0;
      }
      if ( *&v15 != *(&p_m_flGripAnalogValue->m_Value + v28) )
      {
        v43 = hmd_controllers_info->__m_pChainEntity.m_pObj;
        if ( hmd_controllers_info->__m_pChainEntity.m_pObj != 0
          && (v43->m_pEntity->m_flags & 0x400) == 0
          && *(&v135->m_Value + v28) != -1 )
        {
          v75 = p_m_vFilteredPosition;
          v59 = LODWORD(v21);
          v67 = LODWORD(v20);
          v83 = p_m_Angles;
          v91 = p_m_vPosition;
          v99 = LODWORD(v15);
          v107 = v16;
          v115 = v14;
          (*(v43->_vptr_IHandleEntity + 22))(
            v43,
            92,
            0xFFFFFFFFLL,
            p_m_PathIndex->m_Value,
            v15,
            v37,
            v38,
            v20,
            v7,
            v21,
            v18,
            v30);
          v14 = v115;
          v16 = v107;
          p_m_vPosition = v91;
          p_m_Angles = v83;
          p_m_vFilteredPosition = v75;
          *&v15 = v99;
          *&v20 = v67;
          *&v21 = v59;
        }
        *(&p_m_flGripAnalogValue->m_Value + v28) = 0.0;
      }
      if ( *&v15 != *(&p_m_flTrackpadOrJoystickAnalogValueX->m_Value + v28) )
      {
        v42 = hmd_controllers_info->__m_pChainEntity.m_pObj;
        if ( hmd_controllers_info->__m_pChainEntity.m_pObj != 0
          && (v42->m_pEntity->m_flags & 0x400) == 0
          && *(&v135->m_Value + v28) != -1 )
        {
          v74 = p_m_vFilteredPosition;
          v58 = LODWORD(v21);
          v66 = LODWORD(v20);
          v82 = p_m_Angles;
          v90 = p_m_vPosition;
          v98 = LODWORD(v15);
          v106 = v16;
          v114 = v14;
          (*(v42->_vptr_IHandleEntity + 22))(
            v42,
            96,
            0xFFFFFFFFLL,
            p_m_PathIndex->m_Value,
            v15,
            v37,
            v38,
            v20,
            v7,
            v21,
            v18,
            v30);
          v14 = v114;
          v16 = v106;
          p_m_vPosition = v90;
          p_m_Angles = v82;
          p_m_vFilteredPosition = v74;
          *&v15 = v98;
          *&v20 = v66;
          *&v21 = v58;
        }
        *(&p_m_flTrackpadOrJoystickAnalogValueX->m_Value + v28) = 0.0;
      }
      if ( *&v15 != *(&p_m_flTrackpadOrJoystickAnalogValueY->m_Value + v28) )
      {
        v41 = hmd_controllers_info->__m_pChainEntity.m_pObj;
        if ( hmd_controllers_info->__m_pChainEntity.m_pObj != 0
          && (v41->m_pEntity->m_flags & 0x400) == 0
          && *(&v135->m_Value + v28) != -1 )
        {
          v73 = p_m_vFilteredPosition;
          v57 = LODWORD(v21);
          v65 = LODWORD(v20);
          v81 = p_m_Angles;
          v89 = p_m_vPosition;
          v97 = LODWORD(v15);
          v105 = v16;
          v113 = v14;
          (*(v41->_vptr_IHandleEntity + 22))(
            v41,
            100,
            0xFFFFFFFFLL,
            p_m_PathIndex->m_Value,
            v15,
            v37,
            v38,
            v20,
            v7,
            v21,
            v18,
            v30);
          v14 = v113;
          v16 = v105;
          p_m_vPosition = v89;
          p_m_Angles = v81;
          p_m_vFilteredPosition = v73;
          *&v15 = v97;
          *&v20 = v65;
          *&v21 = v57;
        }
        *(&p_m_flTrackpadOrJoystickAnalogValueY->m_Value + v28) = 0.0;
      }
      p_m_PathIndex += 52;
      ++hmd_controllers_info;
    }
    while ( hmd_controllers_info != p_hmd_middle_eye_local );
    CUserCmd::operator=(p_m_Element, src);
  }
  return newNode;
}


// CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::InsertBefore  (line 816, @0x000000000231c710, libserver.so)  // inlines: CopyConstruct<CPlayerCmdInfo>, InternalElement, LinkBefore, operator[]
// calls: CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::Unlink
// callers: CBasePlayer::ProcessUsercmds
unsigned __int16 __fastcall CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::InsertBefore(
        CUtlLinkedList<CPlayerCmdInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 before,
        const CPlayerCmdInfo *const src)
{
  __int64 v4; // r13
  unsigned __int16 result; // ax
  UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int> *v8; // rsi
  UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int> *v9; // r13
  __int64 m_Tail; // rdx
  UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int> *v11; // rcx
  unsigned __int16 v12; // [rsp+Ch] [rbp-24h]

  v4 = before;
  result = CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::AllocInternal(
             this,
             0);
  if ( result != 0xFFFF )
  {
    v12 = result;
    CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::Unlink(
      this,
      result);
    result = v12;
    v8 = &this->m_Memory.m_pMemory[v12];
    v8->m_Next = before;
    if ( before == 0xFFFF )
    {
      m_Tail = this->m_Tail;
      v8->m_Previous = m_Tail;
      this->m_Tail = v12;
      if ( m_Tail != 0xFFFF )
        goto LABEL_4;
    }
    else
    {
      v9 = &this->m_Memory.m_pMemory[v4];
      m_Tail = v9->m_Previous;
      v8->m_Previous = m_Tail;
      v9->m_Previous = v12;
      if ( m_Tail != 0xFFFF )
      {
LABEL_4:
        this->m_Memory.m_pMemory[m_Tail].m_Next = v12;
        goto LABEL_5;
      }
    }
    this->m_Head = v12;
LABEL_5:
    ++this->m_ElementCount;
    v11 = &this->m_Memory.m_pMemory[v12];
    if ( v11 != 0 )
    {
      *&v11->m_Element.m_flTime = *&src->m_flTime;
      v11->m_Element.m_nDroppedPackets = src->m_nDroppedPackets;
    }
  }
  return result;
}


// CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::InsertBefore  (line 816, @0x00000000023808b0, libserver.so)  // inlines: CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseAnimating> >, InternalElement, LinkBefore, operator[]
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::Unlink
// callers: CRagdollLRURetirement::MoveToTopOfLRU
unsigned __int16 __fastcall CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::InsertBefore(
        CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 before,
        const CHandle<CBaseAnimating> *const src)
{
  __int64 v3; // r14
  unsigned __int16 result; // ax
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v8; // rsi
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v9; // rdi
  __int64 m_Tail; // rcx
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v11; // rdx
  unsigned __int16 v12; // [rsp+Ch] [rbp-24h]

  v3 = before;
  result = CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::AllocInternal(
             this,
             0);
  if ( result != 0xFFFF )
  {
    v12 = result;
    CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
      this,
      result);
    result = v12;
    v8 = &this->m_Memory.m_pMemory[v12];
    v8->m_Next = before;
    if ( before == 0xFFFF )
    {
      m_Tail = this->m_Tail;
      v8->m_Previous = m_Tail;
      this->m_Tail = v12;
      if ( m_Tail != 0xFFFF )
        goto LABEL_4;
    }
    else
    {
      v9 = &this->m_Memory.m_pMemory[v3];
      m_Tail = v9->m_Previous;
      v8->m_Previous = m_Tail;
      v9->m_Previous = v12;
      if ( m_Tail != 0xFFFF )
      {
LABEL_4:
        this->m_Memory.m_pMemory[m_Tail].m_Next = v12;
        goto LABEL_5;
      }
    }
    this->m_Head = v12;
LABEL_5:
    ++this->m_ElementCount;
    v11 = &this->m_Memory.m_pMemory[v12];
    if ( v11 != 0 )
      v11->m_Element = src->m_Index;
  }
  return result;
}


// CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::InsertBefore  (line 816, @0x0000000002580aa0, libserver.so)  // inlines: CopyConstruct<int>, InternalElement, LinkBefore, operator[]
// calls: CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::Unlink
// callers: CDOTAGameManager::SetupItemCombines, CMesh::CalculateIndicentFacesForVertices
unsigned __int16 __fastcall CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::InsertBefore(
        CUtlLinkedList<int,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<int,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 before,
        const int *const src)
{
  __int64 v3; // r14
  unsigned __int16 result; // ax
  UtlLinkedListElem_t<int,short unsigned int> *v8; // rsi
  UtlLinkedListElem_t<int,short unsigned int> *v9; // rdi
  __int64 m_Tail; // rcx
  UtlLinkedListElem_t<int,short unsigned int> *v11; // rdx
  unsigned __int16 v12; // [rsp+Ch] [rbp-24h]

  v3 = before;
  result = CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::AllocInternal(
             this,
             0);
  if ( result != 0xFFFF )
  {
    v12 = result;
    CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::Unlink(
      this,
      result);
    result = v12;
    v8 = &this->m_Memory.m_pMemory[v12];
    v8->m_Next = before;
    if ( before == 0xFFFF )
    {
      m_Tail = this->m_Tail;
      v8->m_Previous = m_Tail;
      this->m_Tail = v12;
      if ( m_Tail != 0xFFFF )
        goto LABEL_4;
    }
    else
    {
      v9 = &this->m_Memory.m_pMemory[v3];
      m_Tail = v9->m_Previous;
      v8->m_Previous = m_Tail;
      v9->m_Previous = v12;
      if ( m_Tail != 0xFFFF )
      {
LABEL_4:
        this->m_Memory.m_pMemory[m_Tail].m_Next = v12;
        goto LABEL_5;
      }
    }
    this->m_Head = v12;
LABEL_5:
    ++this->m_ElementCount;
    v11 = &this->m_Memory.m_pMemory[v12];
    if ( v11 != 0 )
      v11->m_Element = *src;
  }
  return result;
}


// CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore  (line 816, @0x000000000322f0a0, libserver.so)  // inlines: CopyConstruct<GCSDK::CJobMgr::JobYielding_t>, InternalElement, LinkBefore, operator[]
// calls: CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::AllocInternal, CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::Unlink
// callers: GCSDK::CJobMgr::AddToYieldList, GCSDK::CJobMgr::PassMsgToJob, GCSDK::CJobMgr::BRouteWorkItemCompletedInternal, GCSDK::CJobMgr::AddDelayedJobToYieldList, GCSDK::CJobMgr::WakeupLockedJob, GCSDK::CJobMgr::WakeJobsWaitingOnJob, GCSDK::CJobMgr::BYield
int __fastcall CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::InsertBefore(
        CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int> > *const this,
        int before,
        const GCSDK::CJobMgr::JobYielding_t *const src)
{
  __int64 v4; // r12
  int result; // eax
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int> *v7; // rsi
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int> *v8; // rdi
  __int64 m_Tail; // rdx
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int> *v10; // rcx
  __int64 v11; // r10
  int newNode; // [rsp+Ch] [rbp-24h]

  v4 = before;
  result = CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::AllocInternal(
             this,
             0);
  if ( result != -1 )
  {
    newNode = result;
    CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::Unlink(
      this,
      result);
    result = newNode;
    v7 = &this->m_Memory.m_pMemory[newNode];
    v7->m_Next = v4;
    if ( v4 == -1 )
    {
      m_Tail = this->m_Tail;
      v7->m_Previous = m_Tail;
      this->m_Tail = newNode;
      if ( m_Tail != -1 )
        goto LABEL_4;
    }
    else
    {
      v8 = &this->m_Memory.m_pMemory[v4];
      m_Tail = v8->m_Previous;
      v7->m_Previous = m_Tail;
      v8->m_Previous = newNode;
      if ( m_Tail != -1 )
      {
LABEL_4:
        this->m_Memory.m_pMemory[m_Tail].m_Next = newNode;
        goto LABEL_5;
      }
    }
    this->m_Head = newNode;
LABEL_5:
    ++this->m_ElementCount;
    v10 = &this->m_Memory.m_pMemory[newNode];
    if ( v10 != 0 )
    {
      v11 = *&src->m_nIteration;
      v10->m_Element.m_JobID = src->m_JobID;
      *&v10->m_Element.m_nIteration = v11;
    }
  }
  return result;
}


// CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::FindAndRemove  (line 879, @0x0000000002183c90, libserver.so)  // inlines: Element, Find, Free, Next, Remove, operator[]
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::Unlink
// callers: OnBaseCombatWeaponDestroyed, CBaseCombatWeapon::~CBaseCombatWeapon
bool __fastcall CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::FindAndRemove(
        CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *const this,
        CBaseCombatWeapon *const *const src)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *m_pMemory; // r8
  __int64 v5; // rbx
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *v6; // rax
  unsigned __int16 v8; // r13

  m_Head = this->m_Head;
  if ( m_Head == 0xFFFF )
    return 0;
  m_pMemory = this->m_Memory.m_pMemory;
  v5 = m_Head;
  v6 = &this->m_Memory.m_pMemory[v5];
  if ( v6->m_Element != *src )
  {
    do
    {
      m_Head = v6->m_Next;
      if ( m_Head == 0xFFFF )
        return 0;
      v5 = m_Head;
      v6 = &m_pMemory[v5];
    }
    while ( m_pMemory[v5].m_Element != *src );
  }
  v8 = m_Head;
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::Unlink(
    this,
    m_Head);
  this->m_Memory.m_pMemory[v5].m_Next = this->m_FirstFree;
  this->m_FirstFree = v8;
  return 1;
}


// CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x0000000001f89d60, libserver.so)  // inlines: Destruct<CScrollingScreenOverlay::TextLine_t>, InternalElement, Next, operator[], ~CUtlString, ~TextLine_t
// calls: CUtlString::FreeMemoryBlock
// callers: CScrollingScreenOverlay::Clear, CVScriptGameSystem::GameInit, CScrollingScreenOverlay::~CScrollingScreenOverlay
void __fastcall CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // r13
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v3; // rbx
  unsigned __int16 m_Next; // r12
  unsigned __int16 v5; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v3 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v3->m_Next;
        if ( v3->m_Element.m_text.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&this->m_Memory.m_pMemory[m_Head].m_Element.m_text);
        v3->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        v3->m_Next = m_Next;
        m_Head = m_Next;
      }
      v3->m_Next = this->m_FirstFree;
      v5 = this->m_Head;
      if ( v5 != 0xFFFF )
        this->m_FirstFree = v5;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > >::RemoveAll  (line 913, @0x0000000001f927a0, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsValidIndex, IsValidIterator, Iterator_t, Next, operator!=, operator==
// callers: CRenderGameSystem::~CRenderGameSystem, CRenderGameSystem::CRenderGameSystem
void __fastcall CUtlLinkedList<CRenderComponent *,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>>::RemoveAll(
        CUtlLinkedList<CRenderComponent*,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> > > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pBlocks; // rax
  intp v2; // rcx
  unsigned __int64 v3; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pBlockHeader; // r9
  intp m_nIndex; // r11
  intp m_nBlockSize; // rdx
  intp v7; // rdx
  intp v8; // rdx
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *v9; // r8
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pNext; // rdx

  if ( this->m_LastAlloc.m_pBlockHeader == 0 && this->m_LastAlloc.m_nIndex == 0 )
    return;
  m_pBlocks = this->m_Memory.m_pBlocks;
  v2 = 0;
LABEL_3:
  if ( m_pBlocks != 0 )
  {
LABEL_4:
    if ( m_pBlocks->m_nBlockSize <= v2 )
      goto LABEL_11;
    v3 = &m_pBlocks[1] + 24 * v2;
    if ( (m_pBlocks + 24 * v2) == -16LL )
      goto LABEL_11;
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v9 = m_pBlockHeader + 1;
          if ( v3 < &m_pBlockHeader[1] || v3 >= v9 + 24 * m_nBlockSize )
          {
            m_pNext = m_pBlockHeader->m_pNext;
            if ( m_pBlockHeader->m_pNext != 0 )
            {
              do
              {
                if ( v3 >= &m_pNext[1] && v3 < &m_pNext[1] + 24 * m_pNext->m_nBlockSize )
                  goto LABEL_26;
                m_pNext = m_pNext->m_pNext;
              }
              while ( m_pNext != 0 );
              if ( (&m_pBlocks[1] + 24 * v2) != *(&m_pBlocks[1].m_nBlockSize + 3 * v2) )
              {
LABEL_10:
                *(&m_pBlocks[1].m_nBlockSize + 3 * v2) = m_pBlocks + 24 * v2 + 16;
                *(&m_pBlocks[2].m_pNext + 3 * v2) = this->m_FirstFree;
                this->m_FirstFree = v3;
                goto LABEL_11;
              }
LABEL_32:
              if ( (&m_pBlocks[1] + 24 * v2) != *(&m_pBlocks[2].m_pNext + 3 * v2) )
                goto LABEL_12;
              goto LABEL_10;
            }
          }
          else if ( v3 > v9 + 24 * m_nIndex )
          {
LABEL_26:
            v7 = this->m_LastAlloc.m_nIndex;
            goto LABEL_13;
          }
        }
      }
    }
    if ( (&m_pBlocks[1] + 24 * v2) != *(&m_pBlocks[1].m_nBlockSize + 3 * v2) )
      goto LABEL_10;
    goto LABEL_32;
  }
  while ( v2 != 0 )
  {
LABEL_11:
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
LABEL_12:
    v7 = this->m_LastAlloc.m_nIndex;
LABEL_13:
    if ( m_pBlockHeader == m_pBlocks && v7 == v2 )
      break;
    if ( m_pBlocks == 0 )
      break;
    v8 = m_pBlocks->m_nBlockSize;
    if ( v8 <= v2 )
      break;
    if ( v8 > ++v2 )
      goto LABEL_3;
    m_pBlocks = m_pBlocks->m_pNext;
    v2 = 0;
    if ( m_pBlocks != 0 )
      goto LABEL_4;
  }
  this->m_Head = 0;
  this->m_Tail = 0;
  this->m_ElementCount = 0;
}


// CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t, long long int> > >::RemoveAll  (line 913, @0x0000000001f92920, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsValidIndex, IsValidIterator, Iterator_t, Next, operator!=, operator==
// callers: CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::~CWorkListTransient, CRenderGameSystem::~CRenderGameSystem
void __fastcall CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long>>>::RemoveAll(
        CUtlLinkedList<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> > > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> >::BlockHeader_t *m_pBlocks; // rax
  intp v2; // rdx
  unsigned __int64 v3; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> >::BlockHeader_t *m_pBlockHeader; // r9
  intp m_nIndex; // r11
  intp m_nBlockSize; // rcx
  intp v7; // rcx
  intp v8; // rcx
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> >::BlockHeader_t *v9; // r8
  CUtlFixedMemory<UtlLinkedListElem_t<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t,4>::InternalInfo_t,long long int> >::BlockHeader_t *m_pNext; // rcx

  if ( this->m_LastAlloc.m_pBlockHeader != 0 || this->m_LastAlloc.m_nIndex != 0 )
  {
    m_pBlocks = this->m_Memory.m_pBlocks;
    v2 = 0;
LABEL_3:
    if ( m_pBlocks != 0 )
    {
LABEL_4:
      if ( m_pBlocks->m_nBlockSize <= v2 )
        goto LABEL_11;
      v3 = &m_pBlocks[1] + 104 * v2;
      if ( (m_pBlocks + 104 * v2) == -16LL )
        goto LABEL_11;
      m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
      if ( m_pBlockHeader != 0 )
      {
        m_nIndex = this->m_LastAlloc.m_nIndex;
        if ( m_nIndex >= 0 )
        {
          m_nBlockSize = m_pBlockHeader->m_nBlockSize;
          if ( m_nIndex < m_nBlockSize )
          {
            v9 = m_pBlockHeader + 1;
            if ( v3 < &m_pBlockHeader[1] || v3 >= v9 + 104 * m_nBlockSize )
            {
              m_pNext = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader->m_pNext != 0 )
              {
                do
                {
                  if ( v3 >= &m_pNext[1] && v3 < &m_pNext[1] + 104 * m_pNext->m_nBlockSize )
                    goto LABEL_27;
                  m_pNext = m_pNext->m_pNext;
                }
                while ( m_pNext != 0 );
                if ( (&m_pBlocks[1] + 104 * v2) != *(&m_pBlocks[6].m_nBlockSize + 13 * v2) )
                {
LABEL_10:
                  *(&m_pBlocks[6].m_nBlockSize + 13 * v2) = m_pBlocks + 104 * v2 + 16;
                  *(&m_pBlocks[7].m_pNext + 13 * v2) = this->m_FirstFree;
                  this->m_FirstFree = v3;
                  goto LABEL_11;
                }
LABEL_33:
                if ( (&m_pBlocks[1] + 104 * v2) != *(&m_pBlocks[7].m_pNext + 13 * v2) )
                  goto LABEL_12;
                goto LABEL_10;
              }
            }
            else if ( v3 > v9 + 104 * m_nIndex )
            {
LABEL_27:
              v7 = this->m_LastAlloc.m_nIndex;
              goto LABEL_13;
            }
          }
        }
      }
      if ( (&m_pBlocks[1] + 104 * v2) != *(&m_pBlocks[6].m_nBlockSize + 13 * v2) )
        goto LABEL_10;
      goto LABEL_33;
    }
    while ( v2 != 0 )
    {
LABEL_11:
      m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
LABEL_12:
      v7 = this->m_LastAlloc.m_nIndex;
LABEL_13:
      if ( m_pBlockHeader == m_pBlocks && v7 == v2 )
        break;
      if ( m_pBlocks == 0 )
        break;
      v8 = m_pBlocks->m_nBlockSize;
      if ( v8 <= v2 )
        break;
      if ( v8 > ++v2 )
        goto LABEL_3;
      m_pBlocks = m_pBlocks->m_pNext;
      v2 = 0;
      if ( m_pBlocks != 0 )
        goto LABEL_4;
    }
    this->m_Head = 0;
    this->m_Tail = 0;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x0000000002057c30, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CGameGibManager::Activate, CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::~CUtlLinkedList, CRagdollLRURetirement::GameInit, CRagdollLRURetirement::CleanRagdolls, CRagdollLRURetirement::~CRagdollLRURetirement
void __fastcall CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<JiggleData, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<JiggleData, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x0000000002113930, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CSkeletonInstance::~CSkeletonInstance, CSkeletonInstance::EnableJiggleBones, CSkeletonInstance::SetModel, CSkeletonInstance::PostDataUpdate
void __fastcall CUtlLinkedList<JiggleData,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<JiggleData,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<JiggleData,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<JiggleData,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<JiggleData,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::RemoveAll  (line 913, @0x000000000217e400, libserver.so)  // inlines: Destruct<CResponseQueue::CDeferredResponse>, GetIndex, IsIdxAfter, IsInBlock, IsValidIndex, IsValidIterator, Iterator_t, Next, operator!=, operator==, ~CDeferredResponse
// calls: CResponseCriteriaSet::~CResponseCriteriaSet
// callers: CResponseQueue::Evacuate, CResponseQueueManager::GameDeactivate, CResponseQueue::CResponseQueue, CResponseQueueManager::GameShutdown, CResponseQueueManager::~CResponseQueueManager
void __fastcall CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::RemoveAll(
        CUtlLinkedList<CResponseQueue::CDeferredResponse,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> > > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *m_pBlocks; // rbx
  intp v3; // r12
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t **v4; // r13
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *m_pBlockHeader; // rcx
  intp m_nIndex; // rdi
  intp m_nBlockSize; // rax
  intp v8; // rax
  intp v9; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *v10; // rdx
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *m_pNext; // rax

  if ( this->m_LastAlloc.m_pBlockHeader != 0 || this->m_LastAlloc.m_nIndex != 0 )
  {
    m_pBlocks = this->m_Memory.m_pBlocks;
    v3 = 0;
LABEL_3:
    if ( m_pBlocks != 0 )
    {
LABEL_4:
      if ( m_pBlocks->m_nBlockSize <= v3 )
        goto LABEL_11;
      v4 = &m_pBlocks[1].m_pNext + 13 * v3;
      if ( (m_pBlocks + 104 * v3) == -16LL )
        goto LABEL_11;
      m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
      if ( m_pBlockHeader != 0 )
      {
        m_nIndex = this->m_LastAlloc.m_nIndex;
        if ( m_nIndex >= 0 )
        {
          m_nBlockSize = m_pBlockHeader->m_nBlockSize;
          if ( m_nIndex < m_nBlockSize )
          {
            v10 = m_pBlockHeader + 1;
            if ( v4 < &m_pBlockHeader[1].m_pNext || v4 >= &v10->m_pNext + 13 * m_nBlockSize )
            {
              m_pNext = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader->m_pNext != 0 )
              {
                do
                {
                  if ( v4 >= &m_pNext[1].m_pNext && v4 < &m_pNext[1].m_pNext + 13 * m_pNext->m_nBlockSize )
                    goto LABEL_27;
                  m_pNext = m_pNext->m_pNext;
                }
                while ( m_pNext != 0 );
                if ( (&m_pBlocks[1] + 104 * v3) != *(&m_pBlocks[6].m_nBlockSize + 13 * v3) )
                {
LABEL_10:
                  *v4 = &off_4000240;
                  CResponseCriteriaSet::~CResponseCriteriaSet((&m_pBlocks[2] + 104 * v3));
                  *(&m_pBlocks[6].m_nBlockSize + 13 * v3) = m_pBlocks + 104 * v3 + 16;
                  *(&m_pBlocks[7].m_pNext + 13 * v3) = this->m_FirstFree;
                  this->m_FirstFree = v4;
                  goto LABEL_11;
                }
LABEL_33:
                if ( (&m_pBlocks[1] + 104 * v3) != *(&m_pBlocks[7].m_pNext + 13 * v3) )
                  goto LABEL_12;
                goto LABEL_10;
              }
            }
            else if ( v4 > (&v10->m_pNext + 13 * m_nIndex) )
            {
LABEL_27:
              v8 = this->m_LastAlloc.m_nIndex;
              goto LABEL_13;
            }
          }
        }
      }
      if ( (&m_pBlocks[1] + 104 * v3) != *(&m_pBlocks[6].m_nBlockSize + 13 * v3) )
        goto LABEL_10;
      goto LABEL_33;
    }
    while ( v3 != 0 )
    {
LABEL_11:
      m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
LABEL_12:
      v8 = this->m_LastAlloc.m_nIndex;
LABEL_13:
      if ( m_pBlockHeader == m_pBlocks && v8 == v3 )
        break;
      if ( m_pBlocks == 0 )
        break;
      v9 = m_pBlocks->m_nBlockSize;
      if ( v9 <= v3 )
        break;
      if ( v9 > ++v3 )
        goto LABEL_3;
      m_pBlocks = m_pBlocks->m_pNext;
      v3 = 0;
      if ( m_pBlocks != 0 )
        goto LABEL_4;
    }
    this->m_Head = 0;
    this->m_Tail = 0;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x000000000217f8c0, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CWeaponList::GameShutdown, CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::~CUtlLinkedList
void __fastcall CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >::RemoveAll  (line 913, @0x000000000217fa50, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity
void __fastcall CUtlLinkedList<CDamageModifier *,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>>::RemoveAll(
        CUtlLinkedList<CDamageModifier*,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier*,int>,int> > *const this)
{
  int m_Head; // edx
  UtlLinkedListElem_t<CDamageModifier*,int> *v2; // rax
  int m_Next; // ecx
  int v4; // eax

  if ( this->m_LastAlloc.index != -1 )
  {
    m_Head = this->m_Head;
    if ( m_Head != -1 )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == -1 )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != -1 )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CEnvWindShared::WindAveEvent_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x00000000022193c0, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CEnvWindShared::CEnvWindShared, CEnvWindShared::~CEnvWindShared
void __fastcall CUtlLinkedList<CEnvWindShared::WindAveEvent_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CEnvWindShared::WindAveEvent_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CEnvWindShared::WindVariationEvent_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x0000000002219430, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CEnvWindShared::CEnvWindShared, CEnvWindShared::~CEnvWindShared
void __fastcall CUtlLinkedList<CEnvWindShared::WindVariationEvent_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CEnvWindShared::WindVariationEvent_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x00000000022b5b40, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CMarkupManager::PostSpawnGroupUnload, CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::~CUtlLinkedList
void __fastcall CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::RemoveAll  (line 913, @0x0000000002310f10, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsValidIndex, IsValidIterator, Iterator_t, Next, operator!=, operator==
// callers: CParticleSystemQueryGameSystem::~CParticleSystemQueryGameSystem
void __fastcall CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>>::RemoveAll(
        CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> > > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *m_pBlocks; // rax
  intp v2; // rcx
  unsigned __int64 v3; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *m_pBlockHeader; // r9
  intp m_nIndex; // r11
  intp m_nBlockSize; // rdx
  intp v7; // rdx
  intp v8; // rdx
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *v9; // r8
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *m_pNext; // rdx

  if ( this->m_LastAlloc.m_pBlockHeader == 0 && this->m_LastAlloc.m_nIndex == 0 )
    return;
  m_pBlocks = this->m_Memory.m_pBlocks;
  v2 = 0;
LABEL_3:
  if ( m_pBlocks != 0 )
  {
LABEL_4:
    if ( m_pBlocks->m_nBlockSize <= v2 )
      goto LABEL_11;
    v3 = &m_pBlocks[2 * v2 + 1];
    if ( &m_pBlocks[2 * v2] == -16LL )
      goto LABEL_11;
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v9 = m_pBlockHeader + 1;
          if ( v3 < &m_pBlockHeader[1] || v3 >= &v9[2 * m_nBlockSize] )
          {
            m_pNext = m_pBlockHeader->m_pNext;
            if ( m_pBlockHeader->m_pNext != 0 )
            {
              do
              {
                if ( v3 >= &m_pNext[1] && v3 < &m_pNext[2 * m_pNext->m_nBlockSize + 1] )
                  goto LABEL_26;
                m_pNext = m_pNext->m_pNext;
              }
              while ( m_pNext != 0 );
              if ( &m_pBlocks[2 * v2 + 1] != m_pBlocks[2 * v2 + 2].m_pNext )
              {
LABEL_10:
                m_pBlocks[2 * v2 + 2].m_pNext = &m_pBlocks[2 * v2 + 1];
                m_pBlocks[2 * v2 + 2].m_nBlockSize = this->m_FirstFree;
                this->m_FirstFree = v3;
                goto LABEL_11;
              }
LABEL_32:
              if ( &m_pBlocks[2 * v2 + 1] != m_pBlocks[2 * v2 + 2].m_nBlockSize )
                goto LABEL_12;
              goto LABEL_10;
            }
          }
          else if ( v3 > &v9[2 * m_nIndex] )
          {
LABEL_26:
            v7 = this->m_LastAlloc.m_nIndex;
            goto LABEL_13;
          }
        }
      }
    }
    if ( &m_pBlocks[2 * v2 + 1] != m_pBlocks[2 * v2 + 2].m_pNext )
      goto LABEL_10;
    goto LABEL_32;
  }
  while ( v2 != 0 )
  {
LABEL_11:
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
LABEL_12:
    v7 = this->m_LastAlloc.m_nIndex;
LABEL_13:
    if ( m_pBlockHeader == m_pBlocks && v7 == v2 )
      break;
    if ( m_pBlocks == 0 )
      break;
    v8 = m_pBlocks->m_nBlockSize;
    if ( v8 <= v2 )
      break;
    if ( v8 > ++v2 )
      goto LABEL_3;
    m_pBlocks = m_pBlocks->m_pNext;
    v2 = 0;
    if ( m_pBlocks != 0 )
      goto LABEL_4;
  }
  this->m_Head = 0;
  this->m_Tail = 0;
  this->m_ElementCount = 0;
}


// CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::RemoveAll  (line 913, @0x0000000002311bd0, libserver.so)  // inlines: Destruct<CUserCmd>, InternalElement, Next, operator[]
// callers: CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::~CUtlLinkedList, CBasePlayer::AdjustPlayerTimeBase
void __fastcall CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::RemoveAll(
        CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int> > *const this)
{
  int m_Head; // r13d
  UtlLinkedListElem_t<CUserCmd,int> *v3; // rbx
  int m_Next; // r12d
  int v5; // eax

  if ( this->m_LastAlloc.index != -1 )
  {
    m_Head = this->m_Head;
    if ( m_Head != -1 )
    {
      while ( 1 )
      {
        v3 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v3->m_Next;
        (*v3->m_Element._vptr_CUserCmd)(v3);
        v3->m_Previous = m_Head;
        if ( m_Next == -1 )
          break;
        v3->m_Next = m_Next;
        m_Head = m_Next;
      }
      v3->m_Next = this->m_FirstFree;
      v5 = this->m_Head;
      if ( v5 != -1 )
        this->m_FirstFree = v5;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x0000000002311ca0, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CBasePlayer::CBasePlayer, CBasePlayer::~CBasePlayer
void __fastcall CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CPlayerSimInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x0000000002311d10, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CBasePlayer::CBasePlayer, CBasePlayer::~CBasePlayer
void __fastcall CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CPlayerCmdInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::RemoveAll  (line 913, @0x0000000002342060, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsValidIndex, IsValidIterator, Iterator_t, Next, operator!=, operator==
// callers: CLagCompensationManager::Shutdown, CLagCompensationManager::GameShutdown, CLagCompensationManager::StartLagCompensation, CLagCompensationManager::FrameUpdatePostEntityThink
void __fastcall CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::RemoveAll(
        CUtlLinkedList<LagRecord,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> > > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pBlocks; // rax
  intp v2; // rcx
  unsigned __int64 v3; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pBlockHeader; // r9
  intp m_nIndex; // r11
  intp m_nBlockSize; // rdx
  intp v7; // rdx
  intp v8; // rdx
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *v9; // r8
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pNext; // rdx

  if ( this->m_LastAlloc.m_pBlockHeader == 0 && this->m_LastAlloc.m_nIndex == 0 )
    return;
  m_pBlocks = this->m_Memory.m_pBlocks;
  v2 = 0;
LABEL_3:
  if ( m_pBlocks != 0 )
  {
LABEL_4:
    if ( m_pBlocks->m_nBlockSize <= v2 )
      goto LABEL_11;
    v3 = &m_pBlocks[20 * v2 + 1];
    if ( &m_pBlocks[20 * v2] == -16LL )
      goto LABEL_11;
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v9 = m_pBlockHeader + 1;
          if ( v3 < &m_pBlockHeader[1] || v3 >= &v9[20 * m_nBlockSize] )
          {
            m_pNext = m_pBlockHeader->m_pNext;
            if ( m_pBlockHeader->m_pNext != 0 )
            {
              do
              {
                if ( v3 >= &m_pNext[1] && v3 < &m_pNext[20 * m_pNext->m_nBlockSize + 1] )
                  goto LABEL_26;
                m_pNext = m_pNext->m_pNext;
              }
              while ( m_pNext != 0 );
              if ( &m_pBlocks[20 * v2 + 1] != m_pBlocks[20 * v2 + 20].m_pNext )
              {
LABEL_10:
                m_pBlocks[20 * v2 + 20].m_pNext = &m_pBlocks[20 * v2 + 1];
                m_pBlocks[20 * v2 + 20].m_nBlockSize = this->m_FirstFree;
                this->m_FirstFree = v3;
                goto LABEL_11;
              }
LABEL_32:
              if ( &m_pBlocks[20 * v2 + 1] != m_pBlocks[20 * v2 + 20].m_nBlockSize )
                goto LABEL_12;
              goto LABEL_10;
            }
          }
          else if ( v3 > &v9[20 * m_nIndex] )
          {
LABEL_26:
            v7 = this->m_LastAlloc.m_nIndex;
            goto LABEL_13;
          }
        }
      }
    }
    if ( &m_pBlocks[20 * v2 + 1] != m_pBlocks[20 * v2 + 20].m_pNext )
      goto LABEL_10;
    goto LABEL_32;
  }
  while ( v2 != 0 )
  {
LABEL_11:
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
LABEL_12:
    v7 = this->m_LastAlloc.m_nIndex;
LABEL_13:
    if ( m_pBlockHeader == m_pBlocks && v7 == v2 )
      break;
    if ( m_pBlocks == 0 )
      break;
    v8 = m_pBlocks->m_nBlockSize;
    if ( v8 <= v2 )
      break;
    if ( v8 > ++v2 )
      goto LABEL_3;
    m_pBlocks = m_pBlocks->m_pNext;
    v2 = 0;
    if ( m_pBlocks != 0 )
      goto LABEL_4;
  }
  this->m_Head = 0;
  this->m_Tail = 0;
  this->m_ElementCount = 0;
}


// CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x0000000002572f80, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: CDOTAGameManager::SetupItemCombines
void __fastcall CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<int,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<int,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<int,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x00000000026af510, libserver.so)  // inlines: Destruct<CUnitOrders>, InternalElement, Next, Purge, RemoveAll, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CEntityIndex, int>::Purge
// callers: CDOTAPlayer::CDOTAPlayer, CDOTAPlayer::~CDOTAPlayer
void __fastcall CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<CUnitOrders,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // r13
  UtlLinkedListElem_t<CUnitOrders,short unsigned int> *v3; // rbx
  bool v4; // zf
  unsigned __int16 m_Next; // r12
  unsigned __int16 v6; // ax

  if ( this->m_LastAlloc.index == 0xFFFF )
    return;
  m_Head = this->m_Head;
  if ( m_Head == 0xFFFF )
    goto LABEL_10;
  while ( 1 )
  {
    v3 = &this->m_Memory.m_pMemory[m_Head];
    v4 = (v3->m_Element.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v3->m_Element.m_nUnits.m_Size = 0;
    m_Next = v3->m_Next;
    if ( v4 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&v3->m_Element.m_nUnits.m_Memory);
      if ( (v3->m_Element.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        break;
    }
    v3->m_Previous = m_Head;
    if ( m_Next == 0xFFFF )
      goto LABEL_8;
LABEL_5:
    v3->m_Next = m_Next;
    m_Head = m_Next;
  }
  CUtlMemory<CEntityIndex,int>::Purge(&v3->m_Element.m_nUnits.m_Memory);
  v3->m_Previous = m_Head;
  if ( m_Next != 0xFFFF )
    goto LABEL_5;
LABEL_8:
  v3->m_Next = this->m_FirstFree;
  v6 = this->m_Head;
  if ( v6 != 0xFFFF )
    this->m_FirstFree = v6;
LABEL_10:
  this->m_Head = -1;
  this->m_Tail = -1;
  this->m_ElementCount = 0;
}


// CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> > >::RemoveAll  (line 913, @0x000000000297dea0, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsValidIndex, IsValidIterator, Iterator_t, Next, operator!=, operator==
// callers: CDOTAHeroList::RemoveAllHeroPositions
void __fastcall CUtlLinkedList<CDOTAHeroPositionsElement,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>>::RemoveAll(
        CUtlLinkedList<CDOTAHeroPositionsElement,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> > > *const this)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pBlocks; // rax
  intp v2; // rcx
  unsigned __int64 v3; // rsi
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pBlockHeader; // r9
  intp m_nIndex; // r11
  intp m_nBlockSize; // rdx
  intp v7; // rdx
  intp v8; // rdx
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *v9; // r8
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pNext; // rdx

  if ( this->m_LastAlloc.m_pBlockHeader == 0 && this->m_LastAlloc.m_nIndex == 0 )
    return;
  m_pBlocks = this->m_Memory.m_pBlocks;
  v2 = 0;
LABEL_3:
  if ( m_pBlocks != 0 )
  {
LABEL_4:
    if ( m_pBlocks->m_nBlockSize <= v2 )
      goto LABEL_11;
    v3 = &m_pBlocks[1] + 40 * v2;
    if ( (m_pBlocks + 40 * v2) == -16LL )
      goto LABEL_11;
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v9 = m_pBlockHeader + 1;
          if ( v3 < &m_pBlockHeader[1] || v3 >= v9 + 40 * m_nBlockSize )
          {
            m_pNext = m_pBlockHeader->m_pNext;
            if ( m_pBlockHeader->m_pNext != 0 )
            {
              do
              {
                if ( v3 >= &m_pNext[1] && v3 < &m_pNext[1] + 40 * m_pNext->m_nBlockSize )
                  goto LABEL_26;
                m_pNext = m_pNext->m_pNext;
              }
              while ( m_pNext != 0 );
              if ( (&m_pBlocks[1] + 40 * v2) != *(&m_pBlocks[2].m_nBlockSize + 5 * v2) )
              {
LABEL_10:
                *(&m_pBlocks[2].m_nBlockSize + 5 * v2) = m_pBlocks + 40 * v2 + 16;
                *(&m_pBlocks[3].m_pNext + 5 * v2) = this->m_FirstFree;
                this->m_FirstFree = v3;
                goto LABEL_11;
              }
LABEL_32:
              if ( (&m_pBlocks[1] + 40 * v2) != *(&m_pBlocks[3].m_pNext + 5 * v2) )
                goto LABEL_12;
              goto LABEL_10;
            }
          }
          else if ( v3 > v9 + 40 * m_nIndex )
          {
LABEL_26:
            v7 = this->m_LastAlloc.m_nIndex;
            goto LABEL_13;
          }
        }
      }
    }
    if ( (&m_pBlocks[1] + 40 * v2) != *(&m_pBlocks[2].m_nBlockSize + 5 * v2) )
      goto LABEL_10;
    goto LABEL_32;
  }
  while ( v2 != 0 )
  {
LABEL_11:
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
LABEL_12:
    v7 = this->m_LastAlloc.m_nIndex;
LABEL_13:
    if ( m_pBlockHeader == m_pBlocks && v7 == v2 )
      break;
    if ( m_pBlocks == 0 )
      break;
    v8 = m_pBlocks->m_nBlockSize;
    if ( v8 <= v2 )
      break;
    if ( v8 > ++v2 )
      goto LABEL_3;
    m_pBlocks = m_pBlocks->m_pNext;
    v2 = 0;
    if ( m_pBlocks != 0 )
      goto LABEL_4;
  }
  this->m_Head = 0;
  this->m_Tail = 0;
  this->m_ElementCount = 0;
}


// CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int> >::RemoveAll  (line 913, @0x0000000002f21030, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: NextBotManager::~NextBotManager
void __fastcall CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::RemoveAll(
        CUtlLinkedList<INextBot*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<INextBot*,short unsigned int>,short unsigned int> > *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v2; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v4; // ax

  if ( this->m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != 0xFFFF )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::RemoveAll  (line 913, @0x000000000322c570, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: GCSDK::CJobMgr::CJobMgr, GCSDK::CJobMgr::~CJobMgr
void __fastcall CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::RemoveAll(
        CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int> > *const this)
{
  int m_Head; // edx
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int> *v2; // rax
  int m_Next; // ecx
  int v4; // eax

  if ( this->m_LastAlloc.index != -1 )
  {
    m_Head = this->m_Head;
    if ( m_Head != -1 )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == -1 )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != -1 )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::RemoveAll  (line 913, @0x000000000322c5d0, libserver.so)  // inlines: InternalElement, Next, operator[]
// callers: GCSDK::CJobMgr::CJobMgr, GCSDK::CJobMgr::~CJobMgr
void __fastcall CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::RemoveAll(
        CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int> > *const this)
{
  int m_Head; // edx
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int> *v2; // rax
  int m_Next; // ecx
  int v4; // eax

  if ( this->m_LastAlloc.index != -1 )
  {
    m_Head = this->m_Head;
    if ( m_Head != -1 )
    {
      while ( 1 )
      {
        v2 = &this->m_Memory.m_pMemory[m_Head];
        m_Next = v2->m_Next;
        v2->m_Previous = m_Head;
        if ( m_Next == -1 )
          break;
        m_Head = m_Next;
      }
      v2->m_Next = this->m_FirstFree;
      v4 = this->m_Head;
      if ( v4 != -1 )
        this->m_FirstFree = v4;
    }
    this->m_Head = -1;
    this->m_Tail = -1;
    this->m_ElementCount = 0;
  }
}


// CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::LinkBefore  (line 977, @0x000000000322dfb0, libserver.so)  // inlines: InternalElement, operator[]
// calls: CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::Unlink
// callers: GCSDK::CJobMgr::CheckForJobTimeouts, GCSDK::CJobMgr::MarkJobPause
void __fastcall CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::LinkBefore(
        CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int> > *const this,
        int before,
        int elem)
{
  __int64 v3; // r13
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int> *v6; // rdx
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int> *v7; // rcx
  __int64 m_Tail; // rax

  v3 = before;
  CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::Unlink(
    this,
    elem);
  v6 = &this->m_Memory.m_pMemory[elem];
  v6->m_Next = v3;
  if ( v3 == -1 )
  {
    m_Tail = this->m_Tail;
    v6->m_Previous = m_Tail;
    this->m_Tail = elem;
    if ( m_Tail != -1 )
      goto LABEL_3;
  }
  else
  {
    v7 = &this->m_Memory.m_pMemory[v3];
    m_Tail = v7->m_Previous;
    v6->m_Previous = m_Tail;
    v7->m_Previous = elem;
    if ( m_Tail != -1 )
    {
LABEL_3:
      this->m_Memory.m_pMemory[m_Tail].m_Next = elem;
      ++this->m_ElementCount;
      return;
    }
  }
  ++this->m_ElementCount;
  this->m_Head = elem;
}


// CUtlLinkedList<CRenderComponent*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*, long long int> > >::Unlink  (line 1059, @0x0000000001ec71b0, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsInList, IsValidIterator
// callers: CRenderComponent::~CRenderComponent
void __fastcall CUtlLinkedList<CRenderComponent *,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent *,long long>>>::Unlink(
        CUtlLinkedList<CRenderComponent*,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> > > *const this,
        __int64 elem)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *m_pBlockHeader; // rax
  intp m_nIndex; // rdx
  intp m_nBlockSize; // rcx
  CUtlFixedMemory<UtlLinkedListElem_t<CRenderComponent*,long long int> >::BlockHeader_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  if ( elem != 0 )
  {
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v5 = m_pBlockHeader + 1;
          if ( elem < &m_pBlockHeader[1] || elem >= v5 + 24 * m_nBlockSize )
          {
            while ( 1 )
            {
              m_pBlockHeader = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader == 0 )
                break;
              if ( elem >= &m_pBlockHeader[1] && elem < &m_pBlockHeader[1] + 24 * m_pBlockHeader->m_nBlockSize )
                return;
            }
          }
          else if ( elem > v5 + 24 * m_nIndex )
          {
            return;
          }
        }
      }
    }
    if ( elem != *(elem + 8) )
    {
      v6 = *(elem + 8);
      if ( v6 != 0 )
        *(v6 + 16) = *(elem + 16);
      else
        this->m_Head = *(elem + 16);
      v7 = *(elem + 16);
      if ( v7 != 0 )
        *(v7 + 8) = *(elem + 8);
      else
        this->m_Tail = *(elem + 8);
      *(elem + 16) = elem;
      *(elem + 8) = elem;
      --this->m_ElementCount;
    }
  }
}


// CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x0000000001f98eb0, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::Free, CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::InsertBefore
void __fastcall CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x00000000020580c0, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CGameGibManager::AddGibToLRU, CRagdollLRURetirement::Update, CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::InsertBefore, CRagdollLRURetirement::MoveToTopOfLRU
void __fastcall CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::Unlink  (line 1059, @0x0000000002180a20, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsInList, IsValidIterator
// callers: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::Free, CResponseQueue::Add
void __fastcall CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::Unlink(
        CUtlLinkedList<CResponseQueue::CDeferredResponse,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> > > *const this,
        __int64 elem)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *m_pBlockHeader; // rax
  intp m_nIndex; // rdx
  intp m_nBlockSize; // rcx
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> >::BlockHeader_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  if ( elem != 0 )
  {
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v5 = m_pBlockHeader + 1;
          if ( elem < &m_pBlockHeader[1] || elem >= v5 + 104 * m_nBlockSize )
          {
            while ( 1 )
            {
              m_pBlockHeader = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader == 0 )
                break;
              if ( elem >= &m_pBlockHeader[1] && elem < &m_pBlockHeader[1] + 104 * m_pBlockHeader->m_nBlockSize )
                return;
            }
          }
          else if ( elem > v5 + 104 * m_nIndex )
          {
            return;
          }
        }
      }
    }
    if ( elem != *(elem + 88) )
    {
      v6 = *(elem + 88);
      if ( v6 != 0 )
        *(v6 + 96) = *(elem + 96);
      else
        this->m_Head = *(elem + 96);
      v7 = *(elem + 96);
      if ( v7 != 0 )
        *(v7 + 88) = *(elem + 88);
      else
        this->m_Tail = *(elem + 88);
      *(elem + 96) = elem;
      *(elem + 88) = elem;
      --this->m_ElementCount;
    }
  }
}


// CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x0000000002183b40, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::InsertBefore, CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::FindAndRemove
void __fastcall CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >::Unlink  (line 1059, @0x00000000021b9dd0, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CDamageModifier::RemoveModifier, CDamageModifier::AddModifierToEntity
void __fastcall CUtlLinkedList<CDamageModifier *,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>>::Unlink(
        CUtlLinkedList<CDamageModifier*,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier*,int>,int> > *const this,
        int elem)
{
  UtlLinkedListElem_t<CDamageModifier*,int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem >= 0LL && elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == -1 )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != -1 )
          goto LABEL_7;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != -1 )
        {
LABEL_7:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_8:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_8;
    }
  }
}


// CUtlLinkedList<CEnvWindShared*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x000000000221a090, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CEnvWindShared::CEnvWindShared, CEnvWindShared::~CEnvWindShared
void __fastcall CUtlLinkedList<CEnvWindShared *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared *,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CEnvWindShared*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CEnvWindShared*,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CFuncAreaPortalBase*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x0000000002250280, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CFuncAreaPortalBase::~CFuncAreaPortalBase, CFuncAreaPortalBase::CFuncAreaPortalBase
void __fastcall CUtlLinkedList<CFuncAreaPortalBase *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase *,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CFuncAreaPortalBase*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::Unlink  (line 1059, @0x0000000002318540, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsInList, IsValidIterator
// callers: CParticleSystemQueryGameSystem::PostSpawnGroupUnload, CParticleSystemQueryGameSystem::PreSpawnGroupLoad
void __fastcall CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>>::Unlink(
        CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> > > *const this,
        __int64 elem)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *m_pBlockHeader; // rax
  intp m_nIndex; // rdx
  intp m_nBlockSize; // rcx
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long int> >::BlockHeader_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  if ( elem != 0 )
  {
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v5 = m_pBlockHeader + 1;
          if ( elem < &m_pBlockHeader[1] || elem >= &v5[2 * m_nBlockSize] )
          {
            while ( 1 )
            {
              m_pBlockHeader = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader == 0 )
                break;
              if ( elem >= &m_pBlockHeader[1] && elem < &m_pBlockHeader[2 * m_pBlockHeader->m_nBlockSize + 1] )
                return;
            }
          }
          else if ( elem > &v5[2 * m_nIndex] )
          {
            return;
          }
        }
      }
    }
    if ( elem != *(elem + 16) )
    {
      v6 = *(elem + 16);
      if ( v6 != 0 )
        *(v6 + 24) = *(elem + 24);
      else
        this->m_Head = *(elem + 24);
      v7 = *(elem + 24);
      if ( v7 != 0 )
        *(v7 + 16) = *(elem + 16);
      else
        this->m_Tail = *(elem + 16);
      *(elem + 24) = elem;
      *(elem + 16) = elem;
      --this->m_ElementCount;
    }
  }
}


// CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x0000000002319ba0, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::InsertBefore, CBasePlayer::ProcessUsercmds
void __fastcall CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CPlayerCmdInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x0000000002319c30, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::InsertBefore, CBasePlayer::AdjustPlayerTimeBase
void __fastcall CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CPlayerSimInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::Unlink  (line 1059, @0x0000000002319cc0, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::InsertBefore, CBasePlayer::PhysicsSimulate
void __fastcall CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::Unlink(
        CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int> > *const this,
        int elem)
{
  UtlLinkedListElem_t<CUserCmd,int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem >= 0LL && elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == -1 )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != -1 )
          goto LABEL_7;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != -1 )
        {
LABEL_7:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_8:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_8;
    }
  }
}


// CUtlLinkedList<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x000000000231aff0, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CWatcherList::~CWatcherList, CUtlMultiList<watcher_t, short unsigned int>::CreateList
void __fastcall CUtlLinkedList<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<LagRecord, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<LagRecord, long long int> > >::Unlink  (line 1059, @0x0000000002345140, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsInList, IsValidIterator
// callers: CLagCompensationManager::RecordDataIntoTrack
void __fastcall CUtlLinkedList<LagRecord,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long>>>::Unlink(
        CUtlLinkedList<LagRecord,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> > > *const this,
        __int64 elem)
{
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *m_pBlockHeader; // rax
  intp m_nIndex; // rdx
  intp m_nBlockSize; // rcx
  CUtlFixedMemory<UtlLinkedListElem_t<LagRecord,long long int> >::BlockHeader_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  if ( elem != 0 )
  {
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v5 = m_pBlockHeader + 1;
          if ( elem < &m_pBlockHeader[1] || elem >= &v5[20 * m_nBlockSize] )
          {
            while ( 1 )
            {
              m_pBlockHeader = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader == 0 )
                break;
              if ( elem >= &m_pBlockHeader[1] && elem < &m_pBlockHeader[20 * m_pBlockHeader->m_nBlockSize + 1] )
                return;
            }
          }
          else if ( elem > &v5[20 * m_nIndex] )
          {
            return;
          }
        }
      }
    }
    if ( elem != *(elem + 304) )
    {
      v6 = *(elem + 304);
      if ( v6 != 0 )
        *(v6 + 312) = *(elem + 312);
      else
        this->m_Head = *(elem + 312);
      v7 = *(elem + 312);
      if ( v7 != 0 )
        *(v7 + 304) = *(elem + 304);
      else
        this->m_Tail = *(elem + 304);
      *(elem + 312) = elem;
      *(elem + 304) = elem;
      --this->m_ElementCount;
    }
  }
}


// CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x000000000257b920, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::InsertBefore, CDOTAGameManager::SetupItemCombines
void __fastcall CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<int,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<int,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<int,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x00000000026b1d40, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CDOTAPlayer::ExecuteOrders, CUtlLinkedList<CUnitOrders, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int> >::InsertBefore
void __fastcall CUtlLinkedList<CUnitOrders,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CUnitOrders,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUnitOrders,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CUnitOrders,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> > >::Unlink  (line 1059, @0x000000000298bea0, libserver.so)  // inlines: GetIndex, IsIdxAfter, IsInBlock, IsInList, IsValidIterator
// callers: CDOTAHeroList::RemoveOldHeroPositions, CDOTAHeroList::UpdateHeroPositions
void __fastcall CUtlLinkedList<CDOTAHeroPositionsElement,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>>::Unlink(
        CUtlLinkedList<CDOTAHeroPositionsElement,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> > > *const this,
        __int64 elem)
{
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pBlockHeader; // rax
  intp m_nIndex; // rdx
  intp m_nBlockSize; // rcx
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  if ( elem != 0 )
  {
    m_pBlockHeader = this->m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = this->m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v5 = m_pBlockHeader + 1;
          if ( elem < &m_pBlockHeader[1] || elem >= v5 + 40 * m_nBlockSize )
          {
            while ( 1 )
            {
              m_pBlockHeader = m_pBlockHeader->m_pNext;
              if ( m_pBlockHeader == 0 )
                break;
              if ( elem >= &m_pBlockHeader[1] && elem < &m_pBlockHeader[1] + 40 * m_pBlockHeader->m_nBlockSize )
                return;
            }
          }
          else if ( elem > v5 + 40 * m_nIndex )
          {
            return;
          }
        }
      }
    }
    if ( elem != *(elem + 24) )
    {
      v6 = *(elem + 24);
      if ( v6 != 0 )
        *(v6 + 32) = *(elem + 32);
      else
        this->m_Head = *(elem + 32);
      v7 = *(elem + 32);
      if ( v7 != 0 )
        *(v7 + 24) = *(elem + 24);
      else
        this->m_Tail = *(elem + 24);
      *(elem + 32) = elem;
      *(elem + 24) = elem;
      --this->m_ElementCount;
    }
  }
}


// CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x0000000002f0cb20, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CFuncNavBlocker::UpdateOnRemove, CFuncNavBlocker::Spawn
void __fastcall CUtlLinkedList<CFuncNavBlocker *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker *,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<CFuncNavBlocker*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int> >::Unlink  (line 1059, @0x0000000002f20f40, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: NextBotManager::NotifyBeginUpdate, NextBotManager::UnRegister, NextBotManager::Register
void __fastcall CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::Unlink(
        CUtlLinkedList<INextBot*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<INextBot*,short unsigned int>,short unsigned int> > *const this,
        unsigned __int16 elem)
{
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
          goto LABEL_6;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != 0xFFFF )
        {
LABEL_6:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_7:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_7;
    }
  }
}


// CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::Unlink  (line 1059, @0x000000000322deb0, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: GCSDK::CJobMgr::BResumeYieldingJobsFromList, CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int> >::InsertBefore
void __fastcall CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int>>::Unlink(
        CUtlLinkedList<GCSDK::CJobMgr::JobYielding_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int>,int> > *const this,
        int elem)
{
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t,int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem >= 0LL && elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == -1 )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != -1 )
          goto LABEL_7;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != -1 )
        {
LABEL_7:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_8:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_8;
    }
  }
}


// CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::Unlink  (line 1059, @0x000000000322df30, libserver.so)  // inlines: IsIdxValid, IsInList, operator[]
// callers: CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int> >::LinkBefore, GCSDK::CJobMgr::CheckForJobTimeouts
void __fastcall CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int>>::Unlink(
        CUtlLinkedList<GCSDK::CJobMgr::JobTimeout_t,int,false,int,CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int>,int> > *const this,
        int elem)
{
  UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t,int> *v2; // rax
  __int64 m_Previous; // rdx
  __int64 m_Next; // rdx

  if ( elem >= 0LL && elem < this->m_Memory.m_nAllocationCount && elem <= this->m_LastAlloc.index )
  {
    v2 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v2->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == -1 )
      {
        this->m_Head = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != -1 )
          goto LABEL_7;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v2->m_Next;
        m_Next = v2->m_Next;
        if ( m_Next != -1 )
        {
LABEL_7:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v2->m_Previous;
LABEL_8:
          v2->m_Next = elem;
          v2->m_Previous = elem;
          --this->m_ElementCount;
          return;
        }
      }
      this->m_Tail = v2->m_Previous;
      goto LABEL_8;
    }
  }
}


