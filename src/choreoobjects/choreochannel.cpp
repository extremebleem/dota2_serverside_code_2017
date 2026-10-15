// Reconstructed from DWARF by pahole; not original source.

// src/choreoobjects/choreochannel.cpp:276
struct EventGroup {
	CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> > timeSortedEvents;  // +0x0
	EventGroup();
	EventGroup(const EventGroup &);
	EventGroup & operator=(const EventGroup &);
	~EventGroup();

	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_choreochannel.cpp  (line 0, @0x0000000001a67770, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_choreochannel_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CChoreoChannel::CChoreoChannel  (line 21, @0x00000000030740c0, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Purge, RemoveAll, SetName, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume, CUtlMemory<CChoreoEvent*, int>::Purge
// callers: CChoreoActor::operator=, CChoreoScene::AllocChannel
// globals: CChoreoObjectBase::s_nNextChoreoObjectHandle
void __fastcall CChoreoChannel::CChoreoChannel(CChoreoChannel *const this, const char *name)
{
  ChoreoObjectHandle_t v2; // rax

  this->_vptr_CChoreoObjectBase = &off_47C2870;
  v2 = CChoreoObjectBase::s_nNextChoreoObjectHandle;
  this->m_pActor = 0;
  this->m_szName.m_pString = 0;
  this->m_Events.m_Size = 0;
  this->m_Events.m_Memory.m_pMemory = 0;
  this->m_Events.m_Memory.m_nAllocationCount = 0;
  this->m_Events.m_Memory.m_nGrowSize = 0;
  this->m_bActive = 1;
  this->m_bMarkedForSave = 0;
  CChoreoObjectBase::s_nNextChoreoObjectHandle = v2 + 1;
  this->m_hChoreoObjectHandle = v2;
  if ( name != 0 )
    CUtlString::operator=(&this->m_szName, name);
}


// CChoreoChannel::operator=  (line 31, @0x00000000030745e0, libserver.so)  // inlines: AddEvent, AddToTail, CopyConstruct<CChoreoEvent*>, Element, GrowMemory, operator[]
// calls: CUtlString::operator=, CChoreoEvent::SetChannel, CChoreoEvent::SetActor, CChoreoEvent::GetScene, operator new, CChoreoEvent::CChoreoEvent, CChoreoEvent::operator=, CUtlMemory<CChoreoEvent*, int>::Grow, operator delete, _Unwind_Resume
// callers: CChoreoActor::operator=, CChoreoScene::Merge
CChoreoChannel *__fastcall CChoreoChannel::operator=(CChoreoChannel *const this, const CChoreoChannel *const src)
{
  CUtlString *p_m_szName; // rsi
  __int64 v4; // r13
  CUtlString *v6; // rdi
  CChoreoEvent **v7; // rax
  CChoreoEvent *v8; // r14
  CChoreoEvent *v9; // r12
  __int64 m_Size; // r14
  int v11; // eax
  CChoreoScene *scene; // [rsp+8h] [rbp-38h]

  p_m_szName = &src->m_szName;
  v4 = 0;
  v6 = &this->m_szName;
  v6[-2].m_pString = p_m_szName[-2].m_pString;
  LOBYTE(v6[4].m_pString) = p_m_szName[4].m_pString;
  CUtlString::operator=(v6, p_m_szName);
  if ( src->m_Events.m_Size > 0 )
  {
    do
    {
      v8 = src->m_Events.m_Memory.m_pMemory[v4];
      scene = CChoreoEvent::GetScene(v8);
      v9 = operator new(0x1C0u);
      CChoreoEvent::CChoreoEvent(v9, scene);
      CChoreoEvent::operator=(v9, v8);
      m_Size = this->m_Events.m_Size;
      v11 = this->m_Events.m_Size;
      if ( m_Size == this->m_Events.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CChoreoEvent *,int>::Grow(&this->m_Events.m_Memory, 1);
        v11 = this->m_Events.m_Size;
      }
      this->m_Events.m_Size = v11 + 1;
      v7 = &this->m_Events.m_Memory.m_pMemory[m_Size];
      if ( v7 != 0 )
        *v7 = v9;
      CChoreoEvent::SetChannel(v9, this);
      CChoreoEvent::SetActor(v9, this->m_pActor);
      ++v4;
    }
    while ( src->m_Events.m_Size > v4 );
  }
  return this;
}


// CChoreoChannel::SetName  (line 51, @0x0000000003074190, libserver.so)
// calls: CUtlString::operator=
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseChannel
void __fastcall CChoreoChannel::SetName(CChoreoChannel *const this, const char *name)
{
  CUtlString::operator=(&this->m_szName, name);
}


// CChoreoChannel::GetName  (line 56, @0x00000000030741a0, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CChoreoActor::FindChannel, CChoreoEvent::GetDescription, CChoreoScene::PrintChannel, CChoreoScene::FileSaveChannel, CChoreoScene::Merge
const char *__fastcall CChoreoChannel::GetName(const CChoreoChannel *const this)
{
  return CUtlString::Get(&this->m_szName);
}


// CChoreoChannel::GetNumEvents  (line 61, @0x00000000030741b0, libserver.so)
// callers: CChoreoScene::PrintChannel, CChoreoScene::InternalDetermineEventTypes, CChoreoScene::FileSaveChannel, CChoreoScene::FindTargetingEvent, CChoreoScene::FindTagByName, CChoreoScene::ReconcileTags, CChoreoScene::RemoveEventsExceptTypes, CChoreoScene::DeleteReferencedObjects, CChoreoScene::Merge, CChoreoScene::operator=
int __fastcall CChoreoChannel::GetNumEvents(const CChoreoChannel *const this)
{
  return this->m_Events.m_Size;
}


// CChoreoChannel::GetEvent  (line 66, @0x00000000030741c0, libserver.so)  // inlines: operator[]
// callers: CChoreoChannel::MarkForSaveAll, CChoreoChannel::SaveToBuffer, CChoreoChannel::ReconcileGestureTimes, CChoreoChannel::ReconcileCloseCaption, CChoreoScene::PrintChannel, CChoreoScene::InternalDetermineEventTypes, CChoreoScene::FindTargetingEvent, CChoreoScene::FindTagByName, CChoreoScene::ReconcileTags, CChoreoScene::RemoveEventsExceptTypes, CChoreoScene::DeleteReferencedObjects, CChoreoScene::Merge (13 total)
CChoreoEvent *__fastcall CChoreoChannel::GetEvent(CChoreoChannel *const this, int event)
{
  CChoreoEvent *result; // rax

  result = 0;
  if ( event >= 0 && event < this->m_Events.m_Size )
    return this->m_Events.m_Memory.m_pMemory[event];
  return result;
}


// CChoreoChannel::GetEvent  (line 77, @0x00000000030741f0, libserver.so)  // inlines: operator[]
// callers: CChoreoScene::FileSaveChannel
const CChoreoEvent *__fastcall CChoreoChannel::GetEvent(const CChoreoChannel *const this, int event)
{
  const CChoreoEvent *result; // rax

  result = 0;
  if ( event >= 0 && event < this->m_Events.m_Size )
    return this->m_Events.m_Memory.m_pMemory[event];
  return result;
}


// CChoreoChannel::AddEvent  (line 87, @0x0000000003074700, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoEvent*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CChoreoEvent*, int>::Grow
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::ParseEvent, CChoreoScene::Merge
void __fastcall CChoreoChannel::AddEvent(CChoreoChannel *const this, CChoreoEvent *event)
{
  __int64 m_Size; // r12
  int v5; // eax
  CChoreoEvent **v6; // rax

  m_Size = this->m_Events.m_Size;
  v5 = this->m_Events.m_Size;
  if ( m_Size == this->m_Events.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CChoreoEvent *,int>::Grow(&this->m_Events.m_Memory, 1);
    v5 = this->m_Events.m_Size;
  }
  this->m_Events.m_Size = v5 + 1;
  v6 = &this->m_Events.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = event;
}


// CChoreoChannel::RemoveEvent  (line 92, @0x0000000003074280, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CChoreoChannel::FindEventIndex, memmove
// callers: CChoreoScene::RemoveEventsExceptTypes, CChoreoScene::DeleteReferencedObjects
void __fastcall CChoreoChannel::RemoveEvent(CChoreoChannel *const this, CChoreoEvent *event)
{
  int EventIndex; // eax
  int m_Size; // ecx
  CChoreoEvent **v5; // rsi

  EventIndex = CChoreoChannel::FindEventIndex(this, event);
  if ( EventIndex != -1 )
  {
    m_Size = this->m_Events.m_Size;
    if ( m_Size - EventIndex - 1 > 0 )
    {
      v5 = &this->m_Events.m_Memory.m_pMemory[EventIndex + 1];
      memmove(v5 - 1, v5, 8LL * (this->m_Events.m_Size - EventIndex - 1));
      m_Size = this->m_Events.m_Size;
    }
    this->m_Events.m_Size = m_Size - 1;
  }
}


// CChoreoChannel::RemoveAllEvents  (line 101, @0x0000000003074220, libserver.so)  // inlines: RemoveAll
// callers: CChoreoScene::Merge
void __fastcall CChoreoChannel::RemoveAllEvents(CChoreoChannel *const this)
{
  this->m_Events.m_Size = 0;
}


// CChoreoChannel::FindEventIndex  (line 107, @0x0000000003074230, libserver.so)
// callers: CChoreoChannel::RemoveEvent
int __fastcall CChoreoChannel::FindEventIndex(CChoreoChannel *const this, CChoreoEvent *event)
{
  int m_Size; // ecx
  int result; // eax
  CChoreoEvent **m_pMemory; // rdx
  CChoreoEvent **v5; // rdx

  m_Size = this->m_Events.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Events.m_Memory.m_pMemory;
    if ( *m_pMemory == event )
    {
      return 0;
    }
    else
    {
      v5 = m_pMemory + 1;
      result = 0;
      while ( ++result != m_Size )
      {
        if ( *v5++ == event )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CChoreoChannel::GetActor  (line 119, @0x00000000030742e0, libserver.so)
CChoreoActor *__fastcall CChoreoChannel::GetActor(CChoreoChannel *const this)
{
  return this->m_pActor;
}


// CChoreoChannel::SetActor  (line 124, @0x00000000030742f0, libserver.so)
// callers: CSceneEntity::GenerateSceneForSound, CChoreoActor::RestoreFromBuffer, CChoreoActor::operator=, CChoreoScene::ParseChannel, CChoreoScene::Merge
void __fastcall CChoreoChannel::SetActor(CChoreoChannel *const this, CChoreoActor *actor)
{
  this->m_pActor = actor;
}


// CChoreoChannel::SetActive  (line 129, @0x0000000003074300, libserver.so)
// callers: CChoreoScene::ParseChannel
void __fastcall CChoreoChannel::SetActive(CChoreoChannel *const this, bool active)
{
  this->m_bActive = active;
}


// CChoreoChannel::GetActive  (line 134, @0x0000000003074310, libserver.so)
// callers: CChoreoScene::FileSaveChannel, CChoreoScene::GatherEventsOfType
bool __fastcall CChoreoChannel::GetActive(const CChoreoChannel *const this)
{
  return this->m_bActive;
}


// ChoreEventStartTimeLessFunc  (line 139, @0x0000000003073fd0, libserver.so)
// calls: CChoreoEvent::GetStartTime
bool __fastcall ChoreEventStartTimeLessFunc(CChoreoEvent *const *const p1, CChoreoEvent *const *const p2)
{
  const CChoreoEvent *v2; // rbx
  float StartTime; // [rsp+Ch] [rbp-14h]

  v2 = *p2;
  StartTime = CChoreoEvent::GetStartTime(*p1);
  return CChoreoEvent::GetStartTime(v2) > StartTime;
}


// CChoreoChannel::ReconcileGestureTimes  (line 150, @0x0000000003074af0, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, Element, FirstInorder, LeftChild, Purge, ResetDbgInfo, operator[], ~CUtlMemory, ~CUtlRBTree
// calls: CChoreoChannel::GetEvent, CChoreoEvent::GetType, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::Insert, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::NextInorder, CChoreoEvent::GetSyncToFollowingGesture, CChoreoEvent::FindEntryTag, CChoreoEvent::FindExitTag, CEventAbsoluteTag::GetAbsoluteTime, CEventAbsoluteTag::GetPercentage, CChoreoEvent::GetStartTime, CChoreoEvent::RescaleGestureTimes, CChoreoEvent::SetEndTime (19 total)
// callers: CChoreoScene::ReconcileGestureTimes
// globals: ChoreEventStartTimeLessFunc(CChoreoEvent * const&,CChoreoEvent * const&)
void __fastcall CChoreoChannel::ReconcileGestureTimes(CChoreoChannel *const this)
{
  int m_Size; // r12d
  int i; // ebx
  __int64 m_Root; // rax
  unsigned __int16 m_Left; // dx
  unsigned __int16 v6; // r12
  CChoreoEvent *j; // rbx
  unsigned __int16 v8; // ax
  CChoreoEvent *m_Data; // r13
  CEventAbsoluteTag *ExitTag; // r15
  float v11; // xmm2_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float duration; // [rsp+4h] [rbp-7Ch]
  float durationa; // [rsp+4h] [rbp-7Ch]
  CEventAbsoluteTag *entryTime; // [rsp+8h] [rbp-78h]
  float entryTimea; // [rsp+8h] [rbp-78h]
  CChoreoEvent *e; // [rsp+18h] [rbp-68h] BYREF
  CUtlRBTree<CChoreoEvent*,short unsigned int,bool (*)(CChoreoEvent* const&,CChoreoEvent* const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*,short unsigned int>,short unsigned int> > sortedGestures; // [rsp+20h] [rbp-60h] BYREF

  sortedGestures.m_LessFunc = ChoreEventStartTimeLessFunc;
  m_Size = this->m_Events.m_Size;
  sortedGestures.m_FirstFree = -1;
  sortedGestures.m_Root = -1;
  sortedGestures.m_Elements.m_pMemory = 0;
  sortedGestures.m_Elements.m_nAllocationCount = 0;
  sortedGestures.m_Elements.m_nGrowSize = 0;
  sortedGestures.m_NumElements = 0;
  sortedGestures.m_LastAlloc.index = -1;
  sortedGestures.m_pElements = 0;
  if ( m_Size <= 0 )
    goto LABEL_26;
  for ( i = 0; i != m_Size; ++i )
  {
    while ( 1 )
    {
      e = CChoreoChannel::GetEvent(this, i);
      if ( CChoreoEvent::GetType(e) == GESTURE )
        break;
      if ( ++i == m_Size )
        goto LABEL_6;
    }
    CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::Insert(
      &sortedGestures,
      &e,
      ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  }
LABEL_6:
  if ( sortedGestures.m_NumElements != 0 )
  {
    m_Root = sortedGestures.m_Root;
    if ( sortedGestures.m_Root != 0xFFFF )
    {
      m_Left = sortedGestures.m_Elements.m_pMemory[sortedGestures.m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( sortedGestures.m_Elements.m_pMemory[m_Left].m_Left != 0xFFFF )
          m_Left = sortedGestures.m_Elements.m_pMemory[m_Left].m_Left;
        m_Root = m_Left;
      }
      v6 = m_Root;
      if ( m_Root != 0xFFFF )
      {
        for ( j = sortedGestures.m_Elements.m_pMemory[m_Root].m_Data; ; j = m_Data )
        {
          v8 = CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::NextInorder(
                 &sortedGestures,
                 v6);
          v6 = v8;
          if ( v8 == 0xFFFF )
            break;
          m_Data = sortedGestures.m_Elements.m_pMemory[v8].m_Data;
          if ( j != 0 && CChoreoEvent::GetSyncToFollowingGesture(j) )
          {
            entryTime = CChoreoEvent::FindEntryTag(m_Data, PLAYBACK);
            ExitTag = CChoreoEvent::FindExitTag(j, PLAYBACK);
            if ( ExitTag != 0 && entryTime != 0 )
            {
              entryTimea = CEventAbsoluteTag::GetAbsoluteTime(entryTime);
              duration = (*(j->_vptr_CChoreoObjectBase + 8))(j);
              v11 = _mm_movedup_pd(COERCE_UNSIGNED_INT64((1.0 - CEventAbsoluteTag::GetPercentage(ExitTag)) * duration)).m128d_f64[0];
              durationa = v11 + entryTimea;
              CChoreoEvent::GetStartTime(j);
              CChoreoEvent::RescaleGestureTimes(j, durationa, v12, 1);
              CChoreoEvent::SetEndTime(j, v13);
              CEventAbsoluteTag::SetAbsoluteTime(ExitTag, v14);
              CChoreoEvent::PreventTagOverlap(m_Data);
              CChoreoEvent::PreventTagOverlap(j);
            }
          }
        }
        if ( j != 0 )
          CChoreoEvent::GetScene(j);
      }
    }
    CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::RemoveAll(&sortedGestures);
    sortedGestures.m_FirstFree = -1;
    if ( (sortedGestures.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&sortedGestures.m_Elements);
      sortedGestures.m_LastAlloc.index = -1;
      if ( (sortedGestures.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_26:
    CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::RemoveAll(&sortedGestures);
    sortedGestures.m_FirstFree = -1;
    if ( (sortedGestures.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&sortedGestures.m_Elements);
      sortedGestures.m_LastAlloc.index = -1;
      if ( (sortedGestures.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
LABEL_30:
        CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&sortedGestures.m_Elements);
    }
  }
}


// CChoreoChannel::MarkForSaveAll  (line 263, @0x0000000003074320, libserver.so)  // inlines: SetMarkedForSave
// calls: CChoreoChannel::GetEvent
// callers: CChoreoActor::MarkForSaveAll
void __fastcall CChoreoChannel::MarkForSaveAll(CChoreoChannel *const this, bool mark)
{
  int v3; // ebx
  int m_Size; // r14d
  char v5; // r12
  int v6; // esi
  CChoreoEvent *Event; // rax

  v3 = 0;
  m_Size = this->m_Events.m_Size;
  v5 = mark << 6;
  this->m_bMarkedForSave = mark;
  if ( m_Size > 0 )
  {
    do
    {
      v6 = v3++;
      Event = CChoreoChannel::GetEvent(this, v6);
      *(Event + 440) = v5 | *(Event + 440) & 0xBF;
    }
    while ( v3 != m_Size );
  }
}


// EventGroup::EventGroup  (line 283, @0x00000000030766c0, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, Element, FirstInorder, LeftChild, ResetDbgInfo, operator[]
// calls: CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::RemoveAll, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::Insert, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// globals: ChoreEventStartTimeLessFunc(CChoreoEvent * const&,CChoreoEvent * const&)
void __fastcall EventGroup::EventGroup(EventGroup *const this, const EventGroup *const src)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CChoreoEvent*,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx

  this->timeSortedEvents.m_LessFunc = ChoreEventStartTimeLessFunc;
  this->timeSortedEvents.m_Root = -1;
  this->timeSortedEvents.m_NumElements = 0;
  this->timeSortedEvents.m_FirstFree = -1;
  this->timeSortedEvents.m_Elements.m_pMemory = 0;
  this->timeSortedEvents.m_Elements.m_nAllocationCount = 0;
  this->timeSortedEvents.m_Elements.m_nGrowSize = 0;
  this->timeSortedEvents.m_LastAlloc.index = -1;
  this->timeSortedEvents.m_pElements = 0;
  CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::RemoveAll(&this->timeSortedEvents);
  m_Root = src->timeSortedEvents.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = src->timeSortedEvents.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    while ( 1 )
    {
      CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::Insert(
        &this->timeSortedEvents,
        &m_pMemory[m_Root].m_Data,
        ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      m_Root = CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::NextInorder(
                 &src->timeSortedEvents,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = src->timeSortedEvents.m_Elements.m_pMemory;
    }
  }
}


// CChoreoChannel::ReconcileCloseCaption  (line 317, @0x0000000003075000, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, Element, EventGroup, Find, FirstInorder, LeftChild, Node_t, Purge, ResetDbgInfo, RightChild, SetCompareType, SetLessFunc, operator(), operator[], ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~EventGroup, ~Node_t
// calls: CChoreoChannel::GetEvent, CChoreoEvent::GetType, CChoreoEvent::GetCloseCaptionType, CChoreoEvent::GetCloseCaptionToken, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::RemoveAll, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::Insert, CChoreoEvent::GetEndTime, CChoreoEvent::SetLastSlaveEndTime, CChoreoEvent::SetCloseCaptionType, CChoreoEvent::IsUsingCombinedFile, CChoreoEvent::SetUsingCombinedFile, CChoreoEvent::SetRequiredCombinedChecksum (21 total)
// callers: CChoreoScene::ReconcileCloseCaption
// globals: FastCaselessStringLessThan(char const* const&,char const* const&), ChoreEventStartTimeLessFunc(CChoreoEvent * const&,CChoreoEvent * const&)
void __fastcall CChoreoChannel::ReconcileCloseCaption(CChoreoChannel *const this)
{
  int m_Size; // r14d
  int i; // ebx
  CCNameMap_t::CLOSECAPTION CloseCaptionType; // r12d
  bool (*CloseCaptionToken)(CChoreoEvent *const *, CChoreoEvent *const *); // rax
  __int64 m_Left; // r13
  UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v8; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v9; // r14
  unsigned int v10; // esi
  unsigned __int16 m_Root; // cx
  UtlRBTreeNode_t<CChoreoEvent*,short unsigned int> *v12; // rdx
  int Inorder; // r12d
  unsigned __int16 v14; // ax
  CChoreoEvent *v15; // r13
  float v16; // xmm1_4
  bool IsUsingCombinedFile; // al
  float v18; // xmm1_4
  __int64 v19; // rax
  CChoreoEvent *v20; // rbx
  float v21; // xmm1_4
  float v22; // xmm1_4
  CChoreoEvent *m_Data; // rbx
  float v24; // xmm1_4
  CChoreoEvent **insert; // [rsp+8h] [rbp-B8h]
  const char *name; // [rsp+10h] [rbp-B0h]
  CChoreoEvent **namea; // [rsp+10h] [rbp-B0h]
  int num; // [rsp+18h] [rbp-A8h]
  CChoreoEvent *e; // [rsp+28h] [rbp-98h] BYREF
  bool (__fastcall *c)(const char *const *const, const char *const *const); // [rsp+30h] [rbp-90h] BYREF
  CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int> v31; // [rsp+38h] [rbp-88h] BYREF
  int v32; // [rsp+48h] [rbp-78h]
  int v33; // [rsp+4Ch] [rbp-74h]
  int v34; // [rsp+50h] [rbp-70h]
  int v35; // [rsp+54h] [rbp-6Ch]
  __int64 v36; // [rsp+58h] [rbp-68h]
  EventGroup eg; // [rsp+60h] [rbp-60h] BYREF
  __int64 v38; // [rsp+88h] [rbp-38h]

  v31.m_nAllocationCount = 0;
  m_Size = this->m_Events.m_Size;
  v31.m_nGrowSize = 0;
  v31.m_pMemory = 0;
  v32 = -1;
  v33 = 0;
  v34 = -1;
  v35 = -1;
  v36 = 0;
  c = FastCaselessStringLessThan;
  if ( m_Size <= 0 )
    goto LABEL_46;
  for ( i = 0; i != m_Size; ++i )
  {
    while ( 1 )
    {
      e = CChoreoChannel::GetEvent(this, i);
      if ( CChoreoEvent::GetType(e) == SPEAK )
      {
        CloseCaptionType = CChoreoEvent::GetCloseCaptionType(e);
        if ( CloseCaptionType == CC_DISABLED )
          goto LABEL_35;
        CloseCaptionToken = CChoreoEvent::GetCloseCaptionToken(e);
        name = CloseCaptionToken;
        if ( CloseCaptionToken != 0 && *CloseCaptionToken != 0 )
          break;
        if ( CloseCaptionType == CC_SLAVE )
        {
          CChoreoEvent::SetCloseCaptionType(e, CC_MASTER);
LABEL_35:
          CChoreoEvent::SetUsingCombinedFile(e, 0);
          CChoreoEvent::SetRequiredCombinedChecksum(e, 0);
          CChoreoEvent::SetNumSlaves(e, 0);
          CChoreoEvent::SetLastSlaveEndTime(e, v22);
        }
      }
LABEL_3:
      if ( ++i == m_Size )
        goto LABEL_16;
    }
    m_Left = v32;
    eg.timeSortedEvents.m_Elements.m_pMemory = ChoreEventStartTimeLessFunc;
    eg.timeSortedEvents.m_pElements = 0xFFFFFFFF0000FFFFLL;
    *&eg.timeSortedEvents.m_Elements.m_nAllocationCount = 0;
    *&eg.timeSortedEvents.m_Root = 0;
    *&eg.timeSortedEvents.m_FirstFree = 0;
    eg.timeSortedEvents.m_LessFunc = CloseCaptionToken;
    m_pMemory = v31.m_pMemory;
    v38 = 0;
    while ( m_Left != -1 )
    {
      while ( 1 )
      {
        v8 = m_Left << 6;
        if ( !c(&eg, (&m_pMemory->m_Data.key + v8)) )
          break;
        m_pMemory = v31.m_pMemory;
        m_Left = v31.m_pMemory[m_Left].m_Left;
        if ( m_Left == -1 )
          goto LABEL_12;
      }
      if ( !c((&v31.m_pMemory->m_Data.key + v8), &eg) )
        goto LABEL_13;
      m_pMemory = v31.m_pMemory;
      m_Left = *(&v31.m_pMemory->m_Right + v8);
    }
LABEL_12:
    m_Left = -1;
LABEL_13:
    CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::RemoveAll(&eg.timeSortedEvents.m_Elements);
    WORD2(eg.timeSortedEvents.m_pElements) = -1;
    if ( (*&eg.timeSortedEvents.m_FirstFree & 0xC0000000) == 0 )
    {
      CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&eg.timeSortedEvents.m_Elements.m_nAllocationCount);
      HIWORD(eg.timeSortedEvents.m_pElements) = -1;
      if ( (*&eg.timeSortedEvents.m_FirstFree & 0xC0000000) == 0 )
        CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&eg.timeSortedEvents.m_Elements.m_nAllocationCount);
    }
    if ( m_Left == -1 )
    {
      eg.timeSortedEvents.m_Root = -1;
      eg.timeSortedEvents.m_FirstFree = -1;
      eg.timeSortedEvents.m_LastAlloc.index = -1;
      eg.timeSortedEvents.m_LessFunc = ChoreEventStartTimeLessFunc;
      eg.timeSortedEvents.m_Elements.m_pMemory = 0;
      eg.timeSortedEvents.m_Elements.m_nAllocationCount = 0;
      eg.timeSortedEvents.m_Elements.m_nGrowSize = 0;
      eg.timeSortedEvents.m_NumElements = 0;
      eg.timeSortedEvents.m_pElements = 0;
      CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::Insert(
        &eg.timeSortedEvents,
        &e,
        ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      CUtlDict<EventGroup,int>::Insert(&c, name, &eg);
      CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::RemoveAll(&eg.timeSortedEvents);
      eg.timeSortedEvents.m_FirstFree = -1;
      if ( (eg.timeSortedEvents.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&eg.timeSortedEvents.m_Elements);
        eg.timeSortedEvents.m_LastAlloc.index = -1;
        if ( (eg.timeSortedEvents.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&eg.timeSortedEvents.m_Elements);
      }
      goto LABEL_3;
    }
    CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::Insert(
      &v31.m_pMemory[m_Left].m_Data.elem.timeSortedEvents,
      &e,
      ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  }
LABEL_16:
  if ( v33 != 0 )
  {
    if ( v33 > 0 )
    {
      namea = 0;
      insert = (((v33 - 1) + 1LL) << 6);
      do
      {
        v9 = (v31.m_pMemory + namea);
        v10 = *(&v31.m_pMemory->m_Data.elem.timeSortedEvents.m_NumElements + namea);
        if ( v10 <= 1 )
        {
          m_Data = v9->m_Data.elem.timeSortedEvents.m_Elements.m_pMemory->m_Data;
          CChoreoEvent::SetCloseCaptionType(m_Data, CC_MASTER);
          CChoreoEvent::SetUsingCombinedFile(m_Data, 0);
          CChoreoEvent::SetRequiredCombinedChecksum(m_Data, 0);
          CChoreoEvent::SetNumSlaves(m_Data, 0);
          CChoreoEvent::SetLastSlaveEndTime(m_Data, v24);
        }
        else
        {
          m_Root = v9->m_Data.elem.timeSortedEvents.m_Root;
          if ( m_Root != 0xFFFF )
          {
            v12 = v9->m_Data.elem.timeSortedEvents.m_Elements.m_pMemory;
            Inorder = v12[m_Root].m_Left;
            if ( Inorder == 0xFFFF )
            {
              Inorder = m_Root;
            }
            else
            {
              while ( 1 )
              {
                v14 = v12[Inorder].m_Left;
                if ( v14 == 0xFFFF )
                  break;
                Inorder = v14;
              }
            }
            v15 = 0;
            num = v10 - 1;
            while ( 1 )
            {
              v19 = Inorder;
              v20 = v12[v19].m_Data;
              if ( v15 != 0 )
              {
                CChoreoEvent::GetEndTime(v12[v19].m_Data);
                CChoreoEvent::SetLastSlaveEndTime(v15, v16);
                CChoreoEvent::SetCloseCaptionType(v20, CC_SLAVE);
                IsUsingCombinedFile = CChoreoEvent::IsUsingCombinedFile(v15);
                CChoreoEvent::SetUsingCombinedFile(v20, IsUsingCombinedFile);
                CChoreoEvent::SetRequiredCombinedChecksum(v20, 0);
                CChoreoEvent::SetLastSlaveEndTime(v20, v18);
              }
              else
              {
                CChoreoEvent::SetCloseCaptionType(v12[v19].m_Data, CC_MASTER);
                CChoreoEvent::SetRequiredCombinedChecksum(v20, 0);
                CChoreoEvent::SetNumSlaves(v20, num);
                CChoreoEvent::GetEndTime(v20);
                CChoreoEvent::SetLastSlaveEndTime(v20, v21);
                v15 = v20;
              }
              Inorder = CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::NextInorder(
                          &v9->m_Data.elem.timeSortedEvents,
                          Inorder);
              if ( Inorder == 0xFFFF )
                break;
              v12 = v9->m_Data.elem.timeSortedEvents.m_Elements.m_pMemory;
            }
          }
        }
        namea += 8;
      }
      while ( namea != insert );
    }
    CUtlDict<EventGroup,int>::Purge(&c);
    CUtlRBTree<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&c);
    if ( (v31.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&v31);
    return;
  }
LABEL_46:
  CUtlDict<EventGroup,int>::Purge(&c);
  CUtlRBTree<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&c);
  if ( (v31.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&v31);
}


// CChoreoChannel::GetSortedCombinedEventList  (line 429, @0x0000000003074e00, libserver.so)  // inlines: Element, FindInsertionPosition, First, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, Next, RemoveAll, RightChild, SetLeftChild, SetRightChild, operator==, operator[]
// calls: CChoreoEvent::GetType, CChoreoEvent::GetCloseCaptionType, CChoreoEvent::GetCloseCaptionToken, V_stricmp_fast, CChoreoEvent::GetNumSlaves, CUtlRBTree<const CChoreoEvent*, short unsigned int, bool (*)(const CChoreoEvent* const&, const CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<const CChoreoEvent*, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<const CChoreoEvent*, short unsigned int, bool (*)(const CChoreoEvent* const&, const CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<const CChoreoEvent*, short unsigned int>, short unsigned int> >::LinkToParent
bool __fastcall CChoreoChannel::GetSortedCombinedEventList(
        const CChoreoChannel *const this,
        const char *cctoken,
        CUtlRBTree<const CChoreoEvent*,short unsigned int,bool (*)(const CChoreoEvent* const&,const CChoreoEvent* const&),CUtlMemory<UtlRBTreeNode_t<const CChoreoEvent*,short unsigned int>,short unsigned int> > *const events)
{
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v8; // rax
  UtlRBTreeNode_t<const CChoreoEvent*,short unsigned int> *v9; // r10
  __int64 v10; // r12
  int i; // ebx
  const char *CloseCaptionToken; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned __int16 m_Right; // ax
  bool v16; // zf
  UtlRBTreeNode_t<const CChoreoEvent*,short unsigned int> *m_pMemory; // rax
  __int16 v19; // dx
  unsigned __int16 v20; // ax
  bool isLeft; // [rsp+10h] [rbp-50h]
  unsigned __int16 parent; // [rsp+1Ch] [rbp-44h]
  unsigned __int16 parenta; // [rsp+1Ch] [rbp-44h]
  const CChoreoEvent *e; // [rsp+28h] [rbp-38h] BYREF

  index = events->m_LastAlloc.index;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = events->m_Elements.m_nAllocationCount;
    v8 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v8 < m_nAllocationCount && index >= v8 )
        {
          v9 = &events->m_Elements.m_pMemory[v8];
          if ( v9->m_Left != v8 )
          {
            v9->m_Right = events->m_FirstFree;
            events->m_Elements.m_pMemory[v8].m_Left = v8;
            index = events->m_LastAlloc.index;
            events->m_FirstFree = v8;
          }
        }
        if ( index == v8 )
          break;
        m_nAllocationCount = events->m_Elements.m_nAllocationCount;
        if ( (v8 + 1) >= m_nAllocationCount )
          break;
        ++v8;
      }
      while ( v8 != 0xFFFF );
    }
    events->m_Root = -1;
    events->m_NumElements = 0;
  }
  v10 = 0;
  for ( i = 0; this->m_Events.m_Size > i; ++v10 )
  {
    e = this->m_Events.m_Memory.m_pMemory[v10];
    if ( CChoreoEvent::GetType(e) == SPEAK
      && CChoreoEvent::GetCloseCaptionType(e) != CC_DISABLED
      && (CChoreoEvent::GetCloseCaptionType(e) != CC_MASTER || CChoreoEvent::GetNumSlaves(e) != 0) )
    {
      CloseCaptionToken = CChoreoEvent::GetCloseCaptionToken(e);
      v13 = V_stricmp_fast(CloseCaptionToken, cctoken);
      v14 = v13;
      if ( v13 == 0 )
      {
        parent = events->m_Root;
        if ( parent == 0xFFFF )
        {
          v19 = -1;
        }
        else
        {
          while ( 1 )
          {
            v16 = (events->m_LessFunc)(&e, &events->m_Elements.m_pMemory[parent].m_Data, 16LL * parent, v14) == 0;
            m_pMemory = events->m_Elements.m_pMemory;
            if ( v16 )
            {
              m_Right = m_pMemory[parent].m_Right;
              v14 = 0;
            }
            else
            {
              m_Right = m_pMemory[parent].m_Left;
              v14 = 1;
            }
            if ( m_Right == 0xFFFF )
              break;
            parent = m_Right;
          }
          v19 = parent;
        }
        isLeft = v14;
        parenta = v19;
        v20 = CUtlRBTree<CChoreoEvent const*,unsigned short,bool (*)(CChoreoEvent const* const&,CChoreoEvent const* const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent const*,unsigned short>,unsigned short>>::NewNode(
                events,
                &e);
        CUtlRBTree<CChoreoEvent const*,unsigned short,bool (*)(CChoreoEvent const* const&,CChoreoEvent const* const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent const*,unsigned short>,unsigned short>>::LinkToParent(
          events,
          v20,
          parenta,
          isLeft);
        ++events->m_NumElements;
      }
    }
    ++i;
  }
  return events->m_NumElements != 0;
}


// CChoreoChannel::SaveToBuffer  (line 457, @0x0000000003074380, libserver.so)  // inlines: GetActive, GetName, LowLevelByteSwap<int>, PeekPut, PutChar, PutInt, PutTabs, PutType<int>, PutType<short unsigned int>, PutTypeBin<char>, PutTypeBin<int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, String, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[]
// calls: CUtlString::Get, CUtlBuffer::Printf, CChoreoChannel::GetEvent, CChoreoEvent::SaveToBuffer, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CChoreoActor::SaveToBuffer
// strings: "%hu"
void __fastcall CChoreoChannel::SaveToBuffer(
        CChoreoChannel *const this,
        CUtlBuffer *const buf,
        CChoreoScene *pScene,
        IChoreoStringPool *pStringPool)
{
  int (*v7)(...); // r14
  const char *v8; // rax
  int v9; // eax
  int v10; // r14d
  int m_Size; // r14d
  int v12; // r15d
  int v13; // esi
  CChoreoEvent *Event; // rax
  unsigned __int8 m_Flags; // al
  bool m_bActive; // r13
  int v17; // edx
  int m_nTab; // r12d
  int m_nOffset; // esi
  int m_Put; // eax
  unsigned __int8 *v21; // rdx
  int v23; // [rsp+18h] [rbp-38h]
  int v24; // [rsp+1Ch] [rbp-34h]

  v7 = *pStringPool->_vptr_IChoreoStringPool;
  v8 = CUtlString::Get(&this->m_szName);
  v9 = v7(pStringPool, v8);
  v10 = v9;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", v9);
  }
  else
  {
    v23 = v9;
    if ( CUtlBuffer::CheckPut(buf, 4) )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Put = buf->m_Put;
        v21 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
        if ( v21 != 0 )
        {
          LOBYTE(v24) = HIBYTE(v23);
          BYTE1(v24) = BYTE2(v23);
          BYTE2(v24) = BYTE1(v23);
          HIBYTE(v24) = v23;
          *v21 = v24;
          m_Put = buf->m_Put;
        }
      }
      else
      {
        *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v10;
        m_Put = buf->m_Put;
      }
      buf->m_Put = m_Put + 4;
      CUtlBuffer::AddNullTermination(buf);
    }
  }
  m_Size = this->m_Events.m_Size;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%hu", m_Size);
  }
  else if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_Size;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
  v12 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v13 = v12++;
      Event = CChoreoChannel::GetEvent(this, v13);
      CChoreoEvent::SaveToBuffer(Event, buf, pScene, pStringPool);
    }
    while ( v12 != m_Size );
  }
  m_Flags = buf->m_Flags;
  m_bActive = this->m_bActive;
  if ( (m_Flags & 1) != 0 )
  {
    v17 = buf->m_Put;
    m_nOffset = buf->m_nOffset;
    if ( v17 != m_nOffset && buf->m_Memory.m_pMemory[v17 - 1 - m_nOffset] == 10 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) != 0 )
        goto LABEL_11;
      goto LABEL_27;
    }
  }
  else
  {
    v17 = buf->m_Put;
  }
  if ( v17 == 0 )
  {
    m_nTab = 0;
    if ( (m_Flags & 0x10) == 0 )
LABEL_27:
      m_nTab = buf->m_nTab;
LABEL_11:
    while ( --m_nTab >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --m_nTab < 0 )
          goto LABEL_14;
      }
    }
  }
LABEL_14:
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_bActive;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
}


// CChoreoChannel::RestoreFromBuffer  (line 475, @0x0000000003074760, libserver.so)  // inlines: AddEvent, AddToTail, CopyConstruct<CChoreoEvent*>, Element, GetChar, GetInt, GetType<int>, GetType<short unsigned int>, GetTypeBin<char>, GetTypeBin<int>, GetTypeBin<unsigned char>, GetTypeText<int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, GrowMemory, LowLevelByteSwap<int>, PeekGet, SetActive, SetName, StringToNumber<int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlString::operator=, CUtlBuffer::CheckGet, V_strtoi64, CChoreoEvent::SetChannel, CChoreoEvent::SetActor, CChoreoScene::AllocEvent, CChoreoEvent::RestoreFromBuffer, CUtlMemory<CChoreoEvent*, int>::Grow, V_strtoui64, __stack_chk_fail
// callers: CChoreoActor::RestoreFromBuffer
bool __fastcall CChoreoChannel::RestoreFromBuffer(
        CChoreoChannel *const this,
        SceneBinaryVersion_t nRestoreVersion,
        CUtlBuffer *const buf,
        CChoreoScene *pScene,
        CChoreoActor *pActor,
        IChoreoStringPool *pStringPool)
{
  void (__fastcall *v9)(IChoreoStringPool *, __int64, char *, __int64); // rbx
  bool v10; // al
  __int64 v11; // rsi
  bool v12; // al
  bool result; // al
  int v14; // r12d
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // r12d
  CChoreoEvent **v19; // rax
  CChoreoEvent *v20; // rbx
  __int64 m_Size; // rax
  int v22; // edx
  bool v23; // al
  int m_Get; // edx
  int v25; // edx
  int v26; // eax
  int v27; // ebx
  unsigned __int8 v28; // al
  unsigned __int8 *v29; // rax
  int v30; // [rsp+14h] [rbp-16Ch]
  int numEvents; // [rsp+20h] [rbp-160h]
  unsigned int v35; // [rsp+30h] [rbp-150h] BYREF
  int nIncrement; // [rsp+34h] [rbp-14Ch] BYREF
  unsigned __int8 *v37; // [rsp+38h] [rbp-148h] BYREF
  char sz[264]; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v39; // [rsp+148h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  v9 = *(pStringPool->_vptr_IChoreoStringPool + 1);
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v10 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v11 = 0;
    if ( v10 )
    {
      v37 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v14 = v37;
      v35 = V_strtoi64(v37, &v37, 10);
      v11 = v35;
      if ( v37 != v14 )
        buf->m_Get += v37 - v14;
    }
  }
  else
  {
    v23 = CUtlBuffer::CheckGet(buf, 4);
    v11 = 0;
    if ( v23 )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        m_Get = buf->m_Get;
        v29 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
        if ( v29 == 0 )
          v29 = &v35;
        LODWORD(v37) = v35;
        LOBYTE(v37) = v29[3];
        BYTE1(v37) = v29[2];
        BYTE2(v37) = v29[1];
        BYTE3(v37) = *v29;
        v11 = v37;
      }
      else
      {
        m_Get = buf->m_Get;
        v11 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      }
      buf->m_Get = m_Get + 4;
    }
  }
  v9(pStringPool, v11, sz, 256);
  CUtlString::operator=(&this->m_szName, sz);
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
    {
LABEL_5:
      v12 = CUtlBuffer::CheckGet(buf, 1);
      if ( v12 )
      {
        v25 = buf->m_Get;
        v26 = v25 + 1;
        LOBYTE(v25) = buf->m_Memory.m_pMemory[v25 - buf->m_nOffset];
        buf->m_Get = v26;
        v12 = v25 == 1;
      }
      this->m_bActive = v12;
      return 1;
    }
    v37 = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v27 = v37;
    v28 = V_strtoui64(v37, &v37, 10);
    if ( v37 != v27 )
      buf->m_Get += v37 - v27;
    numEvents = v28;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 1) )
      goto LABEL_5;
    v15 = buf->m_Get;
    v16 = v15 + 1;
    v17 = buf->m_Memory.m_pMemory[v15 - buf->m_nOffset];
    buf->m_Get = v16;
    numEvents = v17;
  }
  if ( numEvents == 0 )
    goto LABEL_5;
  v18 = 0;
  while ( 1 )
  {
    v20 = CChoreoScene::AllocEvent(pScene);
    result = CChoreoEvent::RestoreFromBuffer(v20, nRestoreVersion, buf, pScene, pStringPool);
    if ( !result )
      return result;
    m_Size = this->m_Events.m_Size;
    v22 = this->m_Events.m_Size;
    if ( m_Size == this->m_Events.m_Memory.m_nAllocationCount )
    {
      v30 = this->m_Events.m_Size;
      CUtlMemory<CChoreoEvent *,int>::Grow(&this->m_Events.m_Memory, 1);
      v22 = this->m_Events.m_Size;
      m_Size = v30;
    }
    this->m_Events.m_Size = v22 + 1;
    v19 = &this->m_Events.m_Memory.m_pMemory[m_Size];
    if ( v19 != 0 )
      *v19 = v20;
    ++v18;
    CChoreoEvent::SetChannel(v20, this);
    CChoreoEvent::SetActor(v20, pActor);
    if ( v18 == numEvents )
      goto LABEL_5;
  }
}


