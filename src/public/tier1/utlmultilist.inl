
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlMultiList<watcher_t, short unsigned int>::~CUtlMultiList  (line 191, @0x0000000002319300, libserver.so)  // inlines: InternalElement, Next, Purge, RemoveAll, operator[], ~CUtlLinkedList, ~CUtlMemory
// calls: CUtlMemory<CUtlMultiList<watcher_t, short unsigned int>::ListElem_t, int>::Purge
void __fastcall CUtlMultiList<watcher_t,unsigned short>::~CUtlMultiList(
        CUtlMultiList<watcher_t,short unsigned int> *const this)
{
  int m_MaxElementIndex; // eax
  int v3; // eax
  unsigned __int16 v4; // cx
  __int64 v5; // rdx
  __int64 m_Head; // rax
  UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int> *m_pMemory; // rdx
  __int64 v8; // rax
  unsigned __int16 v9; // dx
  UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int> *v10; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v12; // ax

  m_MaxElementIndex = this->m_MaxElementIndex;
  if ( m_MaxElementIndex != 0 )
  {
    v3 = m_MaxElementIndex - 1;
    v4 = -1;
    if ( v3 >= 0 )
    {
      do
      {
        v5 = v3;
        this->m_Memory.m_pMemory[v5].m_Next = v4;
        v4 = v3;
        this->m_Memory.m_pMemory[v5].m_Previous = v3--;
      }
      while ( v3 != -1 );
    }
    m_Head = this->m_List.m_Head;
    this->m_FirstFree = 0;
    if ( m_Head != 0xFFFF )
    {
      m_pMemory = this->m_List.m_Memory.m_pMemory;
      do
      {
        m_pMemory[m_Head].m_Element.m_Head = -1;
        v8 = m_Head;
        this->m_List.m_Memory.m_pMemory[v8].m_Element.m_Tail = -1;
        this->m_List.m_Memory.m_pMemory[v8].m_Element.m_Count = 0;
        m_pMemory = this->m_List.m_Memory.m_pMemory;
        m_Head = m_pMemory[v8].m_Next;
      }
      while ( m_Head != 0xFFFF );
    }
    this->m_TotalElements = 0;
  }
  if ( this->m_pElementList != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  if ( this->m_List.m_LastAlloc.index != 0xFFFF )
  {
    v9 = this->m_List.m_Head;
    if ( v9 != 0xFFFF )
    {
      while ( 1 )
      {
        v10 = &this->m_List.m_Memory.m_pMemory[v9];
        m_Next = v10->m_Next;
        v10->m_Previous = v9;
        if ( m_Next == 0xFFFF )
          break;
        v9 = m_Next;
      }
      v10->m_Next = this->m_List.m_FirstFree;
      v12 = this->m_List.m_Head;
      if ( v12 != 0xFFFF )
        this->m_List.m_FirstFree = v12;
    }
    this->m_List.m_Head = -1;
    this->m_List.m_Tail = -1;
    this->m_List.m_ElementCount = 0;
  }
  if ( (this->m_List.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_List.m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_List.m_Memory.m_pMemory = 0;
    }
    this->m_List.m_Memory.m_nAllocationCount = 0;
  }
  CUtlMemory<CUtlMultiList<watcher_t,unsigned short>::ListElem_t,int>::Purge(&this->m_Memory);
}


// CUtlMultiList<watcher_t, short unsigned int>::CreateList  (line 240, @0x000000000231d500, libserver.so)  // inlines: AddToTail, InsertBefore, InternalElement, LinkBefore, operator[]
// calls: CUtlLinkedList<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int>, short unsigned int> >::Unlink
// callers: CWatcherList::Init, AddWatcherToEntity
CUtlMultiList<watcher_t,short unsigned int>::ListHandle_t __fastcall CUtlMultiList<watcher_t,unsigned short>::CreateList(
        CUtlMultiList<watcher_t,short unsigned int> *const this)
{
  CUtlLinkedList<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int>,short unsigned int> > *p_m_List; // r12
  CUtlMultiList<watcher_t,short unsigned int>::ListHandle_t result; // ax
  __int64 v4; // rdx
  UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int> *v5; // rsi
  __int64 m_Tail; // rcx
  UtlLinkedListElem_t<CUtlMultiList<watcher_t,short unsigned int>::List_t,short unsigned int> *v7; // rcx
  unsigned __int16 v8; // [rsp+Ch] [rbp-14h]

  p_m_List = &this->m_List;
  result = CUtlLinkedList<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short>,unsigned short>>::AllocInternal(
             &this->m_List,
             0);
  v4 = 0xFFFF;
  if ( result != 0xFFFF )
  {
    v8 = result;
    CUtlLinkedList<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short>,unsigned short>>::Unlink(
      p_m_List,
      result);
    result = v8;
    v4 = v8;
    v5 = &this->m_List.m_Memory.m_pMemory[v4];
    v5->m_Next = -1;
    m_Tail = this->m_List.m_Tail;
    v5->m_Previous = m_Tail;
    this->m_List.m_Tail = v8;
    if ( m_Tail == 0xFFFF )
      this->m_List.m_Head = v8;
    else
      this->m_List.m_Memory.m_pMemory[m_Tail].m_Next = v8;
    ++this->m_List.m_ElementCount;
  }
  v7 = &this->m_List.m_Memory.m_pMemory[v4];
  v7->m_Element.m_Tail = -1;
  v7->m_Element.m_Head = -1;
  this->m_List.m_Memory.m_pMemory[v4].m_Element.m_Count = 0;
  return result;
}


// CUtlMultiList<watcher_t, short unsigned int>::Alloc  (line 393, @0x000000000231b1a0, libserver.so)  // inlines: CEntityHandle, CHandle, Construct<watcher_t>, IndexInRange, InternalElement, LeafCodeInfo_t, ResetDbgInfo, operator[], watcher_t
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlMemory<CUtlMultiList<watcher_t, short unsigned int>::ListElem_t, int>::Grow
// callers: CWatcherList::AddToList
// strings: "../../public/tier1/utlmultilist.h", "Alloc", "CUtlMultiList overflow! (exhausted index range)\n", "CUtlMultiList overflow! (exhausted memory allocator)\n"
unsigned __int16 __fastcall CUtlMultiList<watcher_t,unsigned short>::Alloc(
        CUtlMultiList<watcher_t,short unsigned int> *const this)
{
  CUtlMultiList<watcher_t,short unsigned int> *v1; // rbx
  unsigned __int16 result; // ax
  __int64 v3; // rdx
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *v4; // rcx
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *v5; // rdx
  int m_MaxElementIndex; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *m_pMemory; // rcx
  bool v14; // cc
  __int64 v15; // r8
  __int64 v16; // r9
  LeafCodeInfo_t v17; // [rsp+0h] [rbp-30h] BYREF

  v1 = this;
  result = this->m_FirstFree;
  if ( result == 0xFFFF )
  {
    m_MaxElementIndex = this->m_MaxElementIndex;
    if ( m_MaxElementIndex == m_MaxElementIndex )
      goto LABEL_12;
LABEL_7:
    v1 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "../../public/tier1/utlmultilist.h";
      v17.m_szFunction = "Alloc";
      v17.m_nLine = 402;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "CUtlMultiList overflow! (exhausted index range)\n",
        v11,
        v12);
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v9, v10, v7, v8) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_12:
      if ( m_MaxElementIndex == 0xFFFF )
        goto LABEL_7;
      if ( m_MaxElementIndex != this->m_Memory.m_nAllocationCount )
      {
        m_pMemory = this->m_Memory.m_pMemory;
        result = m_MaxElementIndex;
        goto LABEL_15;
      }
      CUtlMemory<CUtlMultiList<watcher_t,unsigned short>::ListElem_t,int>::Grow(&v1->m_Memory, 1);
      m_MaxElementIndex = v1->m_MaxElementIndex;
      m_pMemory = v1->m_Memory.m_pMemory;
      v14 = m_MaxElementIndex < v1->m_Memory.m_nAllocationCount;
      v1->m_pElements = v1->m_Memory.m_pMemory;
      if ( v14 )
        break;
      v1 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../../public/tier1/utlmultilist.h";
        v17.m_szFunction = "Alloc";
        v17.m_nLine = 417;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "CUtlMultiList overflow! (exhausted memory allocator)\n",
          v15,
          v16);
      }
    }
    result = m_MaxElementIndex;
LABEL_15:
    v1->m_MaxElementIndex = m_MaxElementIndex + 1;
    v3 = result;
    v4 = &m_pMemory[v3];
  }
  else
  {
    v3 = result;
    v4 = &this->m_Memory.m_pMemory[v3];
    this->m_FirstFree = v4->m_Next;
  }
  v4->m_Previous = result;
  v4->m_Next = result;
  ++v1->m_TotalElements;
  v5 = &v1->m_Memory.m_pMemory[v3];
  if ( v5 != 0 )
    v5->m_Element.hWatcher.m_Index = -1;
  return result;
}


// CUtlMultiList<watcher_t, short unsigned int>::Unlink  (line 554, @0x0000000002311120, libserver.so)  // inlines: InternalElement, IsInList, Previous, operator[]
// callers: CUtlMultiList<watcher_t, short unsigned int>::Remove, CWatcherList::AddToList
void __fastcall CUtlMultiList<watcher_t,unsigned short>::Unlink(
        CUtlMultiList<watcher_t,short unsigned int> *const this,
        CUtlMultiList<watcher_t,short unsigned int>::ListHandle_t list,
        unsigned __int16 elem)
{
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *v3; // rax
  __int64 m_Previous; // r8
  __int64 v5; // r8
  __int64 m_Next; // rsi
  __int64 v7; // r8
  unsigned __int16 v8; // r9
  unsigned __int16 *m_pElementList; // rax

  if ( elem < this->m_MaxElementIndex )
  {
    v3 = &this->m_Memory.m_pMemory[elem];
    m_Previous = v3->m_Previous;
    if ( elem != m_Previous )
    {
      if ( m_Previous == 0xFFFF )
      {
        v7 = 10LL * list;
        *(&this->m_List.m_Memory.m_pMemory->m_Element.m_Head + v7) = v3->m_Next;
        m_Next = v3->m_Next;
        v8 = v3->m_Previous;
        if ( m_Next != 0xFFFF )
          goto LABEL_5;
      }
      else
      {
        this->m_Memory.m_pMemory[m_Previous].m_Next = v3->m_Next;
        v5 = 5LL * list;
        m_Next = v3->m_Next;
        v7 = 2 * v5;
        v8 = v3->m_Previous;
        if ( m_Next != 0xFFFF )
        {
LABEL_5:
          this->m_Memory.m_pMemory[m_Next].m_Previous = v8;
          goto LABEL_6;
        }
      }
      *(&this->m_List.m_Memory.m_pMemory->m_Element.m_Tail + v7) = v8;
LABEL_6:
      v3->m_Next = elem;
      v3->m_Previous = elem;
      --*(&this->m_List.m_Memory.m_pMemory->m_Element.m_Count + v7);
      m_pElementList = this->m_pElementList;
      if ( m_pElementList != 0 )
        m_pElementList[elem] = -1;
    }
  }
}


// CUtlMultiList<watcher_t, short unsigned int>::Remove  (line 708, @0x00000000023111f0, libserver.so)  // inlines: Free, InternalElement, IsInList, Previous, operator[]
// calls: CUtlMultiList<watcher_t, short unsigned int>::Unlink
// callers: CWatcherList::GetCallbackObjects, CWatcherList::RemoveWatcher, CWatcherList::~CWatcherList
void __fastcall CUtlMultiList<watcher_t,unsigned short>::Remove(
        CUtlMultiList<watcher_t,short unsigned int> *const this,
        CUtlMultiList<watcher_t,short unsigned int>::ListHandle_t list,
        unsigned __int16 elem)
{
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *v5; // rax
  __int64 v6; // r13

  if ( elem < this->m_MaxElementIndex )
  {
    v6 = elem;
    v5 = &this->m_Memory.m_pMemory[v6];
    if ( elem != v5->m_Previous )
    {
      CUtlMultiList<watcher_t,unsigned short>::Unlink(this, list, elem);
      v5 = &this->m_Memory.m_pMemory[v6];
    }
  }
  else
  {
    v5 = &this->m_Memory.m_pMemory[elem];
  }
  v5->m_Next = this->m_FirstFree;
  --this->m_TotalElements;
  this->m_FirstFree = elem;
}


