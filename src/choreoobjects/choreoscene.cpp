
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_choreoscene.cpp  (line 0, @0x0000000001a677d0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_choreoscene_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CChoreoScene::choreoprintf  (line 42, @0x0000000003080120, libserver.so)  // inlines: printf
// calls: V_vsnprintf, Msg, __printf_chk, __stack_chk_fail
// callers: CChoreoScene::PrintEvent, CChoreoScene::PrintChannel, CChoreoScene::PrintActor, CChoreoScene::ReconcileTags
void CChoreoScene::choreoprintf(CChoreoScene *const this, int level, const char *fmt, ...)
{
  int v5; // ebx
  void (*m_pfnPrint)(const char *, ...); // rcx
  void (*v7)(const char *, ...); // rdx
  va_list argptr; // [rsp+8h] [rbp-8F8h] BYREF
  char string[2056]; // [rsp+20h] [rbp-8E0h] BYREF
  unsigned __int64 v10; // [rsp+828h] [rbp-D8h]

  va_start(argptr, fmt);
  v10 = __readfsqword(0x28u);
  v5 = level - 1;
  V_vsnprintf(string, 2048, fmt, argptr);
  if ( level > 0 )
  {
    do
    {
      m_pfnPrint = this->m_pfnPrint;
      if ( m_pfnPrint != 0 )
        m_pfnPrint("  ");
      else
        __printf_chk(1, "  ");
      --v5;
      Msg("  ");
    }
    while ( v5 != -1 );
  }
  v7 = this->m_pfnPrint;
  if ( v7 != 0 )
    v7(string);
  else
    __printf_chk(1, "%s", string);
  Msg("%s", string);
}


// CChoreoScene::CChoreoScene  (line 78, @0x0000000003086550, libserver.so)  // inlines: CBitVec, CBitVecT, CCurveData, CExpressionSample, CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlString, CUtlVector, CUtlVectorBase, ClearAll, EdgeInfo_t, Purge, RemoveAll, ResetDbgInfo, SetCompareType, SetLessFunc, Vector2D, memset, ~CCurveData, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CChoreoScene::Init, CUtlString::FreeMemoryBlock, CUtlDict<int, int>::Purge, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::~CUtlRBTree, CCurveData::RemoveBezierData, CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >::~CUtlVectorBase, CUtlVectorBase<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >::~CUtlVectorBase, CUtlVectorBase<CChoreoActor*, CUtlMemory<CChoreoActor*, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<CChoreoChannel*, int>::Purge
// callers: CSceneEntity::GenerateSceneForSound, CSceneEntity::LoadScene, CSceneEntity::ScriptLoadSceneFromString
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CChoreoScene::CChoreoScene(
        CChoreoScene *const this,
        IChoreoEventCallback *callback,
        ScenePrintFunction scenePrintFunction)
{
  vec_t x; // xmm1_4
  vec_t y; // xmm0_4
  __int16 v5; // ax
  __int16 v6; // ax

  this->_vptr_ICurveDataAccessor = &off_47C2A50;
  this->m_Events.m_Size = 0;
  this->m_Events.m_Memory.m_pMemory = 0;
  this->m_Events.m_Memory.m_nAllocationCount = 0;
  this->m_Events.m_Memory.m_nGrowSize = 0;
  this->m_Actors.m_Size = 0;
  this->m_Actors.m_Memory.m_pMemory = 0;
  this->m_Actors.m_Memory.m_nAllocationCount = 0;
  this->m_Actors.m_Memory.m_nGrowSize = 0;
  this->m_Channels.m_Size = 0;
  this->m_Channels.m_Memory.m_pMemory = 0;
  this->m_Channels.m_Memory.m_nAllocationCount = 0;
  this->m_Channels.m_Memory.m_nGrowSize = 0;
  this->m_ResumeConditions.m_Size = 0;
  this->m_ResumeConditions.m_Memory.m_pMemory = 0;
  this->m_ResumeConditions.m_Memory.m_nAllocationCount = 0;
  this->m_ResumeConditions.m_Memory.m_nGrowSize = 0;
  this->m_ActiveResumeConditions.m_Size = 0;
  this->m_ActiveResumeConditions.m_Memory.m_pMemory = 0;
  this->m_ActiveResumeConditions.m_Memory.m_nAllocationCount = 0;
  this->m_ActiveResumeConditions.m_Memory.m_nGrowSize = 0;
  this->m_PauseEvents.m_Size = 0;
  this->m_PauseEvents.m_Memory.m_pMemory = 0;
  this->m_PauseEvents.m_Memory.m_nAllocationCount = 0;
  this->m_PauseEvents.m_Memory.m_nGrowSize = 0;
  this->m_pfnPrint = scenePrintFunction;
  this->m_sMapname.m_pString = 0;
  this->m_SceneRamp.m_pAccessor = this;
  this->m_SceneRamp.m_Ramp.m_Size = 0;
  this->m_SceneRamp.m_Ramp.m_Memory.m_pMemory = 0;
  this->m_SceneRamp.m_Ramp.m_Memory.m_nAllocationCount = 0;
  this->m_SceneRamp.m_Ramp.m_Memory.m_nGrowSize = 0;
  x = vec2_origin.x;
  y = vec2_origin.y;
  this->m_SceneRamp.m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.x = vec2_origin.x;
  this->m_SceneRamp.m_RampEdgeInfo[0].m_ZeroPos.m_AnchorPos.y = y;
  v5 = *(&this->m_SceneRamp.m_RampEdgeInfo[0].m_ZeroPos + 5);
  this->m_SceneRamp.m_RampEdgeInfo[0].m_ZeroPos.m_curvetype = 0;
  this->m_SceneRamp.m_RampEdgeInfo[0].m_bActive = 0;
  this->m_SceneRamp.m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.x = x;
  this->m_SceneRamp.m_RampEdgeInfo[1].m_ZeroPos.m_AnchorPos.y = y;
  v5 |= 0x7FFFu;
  this->m_SceneRamp.m_RampEdgeInfo[1].m_ZeroPos.m_curvetype = 0;
  *(&this->m_SceneRamp.m_RampEdgeInfo[0].m_ZeroPos + 5) = v5;
  this->m_SceneRamp.m_RampEdgeInfo[1].m_bActive = 0;
  *(&this->m_SceneRamp.m_RampEdgeInfo[0].m_ZeroPos + 11) = HIBYTE(v5) & 0x7F;
  v6 = *(&this->m_SceneRamp.m_RampEdgeInfo[1].m_ZeroPos + 5);
  this->m_SceneRamp.m_pBezierControls = 0;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  v6 |= 0x7FFFu;
  *(&this->m_SceneRamp.m_RampEdgeInfo[1].m_ZeroPos + 5) = v6;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_Root = -1;
  *(&this->m_SceneRamp.m_RampEdgeInfo[1].m_ZeroPos + 11) = HIBYTE(v6) & 0x7F;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_NumElements = 0;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_pElements = 0;
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_sFileName.m_pString = 0;
  this->m_bitvecHasEventOfType.m_Ints[0] = 0;
  CChoreoScene::Init(this, callback);
}


// CChoreoScene::operator=  (line 89, @0x00000000030882e0, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoChannel*>, CopyConstruct<CChoreoEvent*>, Element, FirstInorder, GrowMemory, LeftChild, NextInorder, Purge, RemoveAll, operator[], ~CChoreoActor, ~CChoreoChannel, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CChoreoScene::Init, CUtlString::FreeMemoryBlock, operator delete, CUtlMemory<CChoreoChannel*, int>::Purge, CUtlMemory<CChoreoEvent*, int>::Purge, CChoreoEvent::GetActor, CChoreoScene::AllocActor, CChoreoActor::operator=, CChoreoActor::GetNumChannels, CChoreoActor::GetChannel, CChoreoEvent::SetScene, CChoreoChannel::GetNumEvents (22 total)
CChoreoScene *__fastcall CChoreoScene::operator=(CChoreoScene *const this, const CChoreoScene *const src)
{
  __int64 v2; // r14
  int v3; // r13d
  CChoreoActor *v5; // r12
  bool v6; // zf
  int m_Size; // r14d
  __int64 v8; // r13
  int v9; // r12d
  CChoreoEvent *v10; // rdi
  int v11; // r12d
  __int64 v12; // r14
  int v13; // r13d
  CChoreoChannel *v14; // r12
  __int64 v15; // r12
  char v16; // al
  char v17; // al
  CChoreoEvent *v18; // r13
  int v19; // r14d
  const CChoreoActor *v20; // r12
  CChoreoChannel *Channel; // rax
  __int64 v22; // r12
  CChoreoChannel *v23; // r13
  int v24; // eax
  CChoreoChannel **v25; // rax
  int j; // r12d
  CChoreoEvent **v27; // rdx
  CChoreoEvent *Event; // rax
  int v29; // r15d
  int v30; // ecx
  int v31; // eax
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v34; // rdx
  int m_Left; // esi
  __int64 v36; // r12
  CChoreoEvent *v38; // rax
  __int64 i; // [rsp+8h] [rbp-58h]
  CChoreoActor *newActor; // [rsp+20h] [rbp-40h]
  CChoreoEvent *ev; // [rsp+28h] [rbp-38h]

  v2 = 0;
  v3 = 0;
  CChoreoScene::Init(this, src->m_pIChoreoEventCallback);
  if ( this->m_Actors.m_Size > 0 )
  {
    do
    {
      v5 = this->m_Actors.m_Memory.m_pMemory[v2];
      if ( v5 != 0 )
      {
        v6 = (v5->m_Channels.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v5->m_Channels.m_Size = 0;
        v5->_vptr_CChoreoObjectBase = off_47C2810;  // vptr: CChoreoActor
        if ( v6 )
        {
          CUtlMemory<CChoreoChannel *,int>::Purge(&v5->m_Channels.m_Memory);
          if ( (v5->m_Channels.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CChoreoChannel *,int>::Purge(&v5->m_Channels.m_Memory);
        }
        if ( v5->m_szFacePoserModelName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v5->m_szFacePoserModelName);
        if ( v5->m_szName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v5->m_szName);
        operator delete(v5);
      }
      ++v3;
      ++v2;
    }
    while ( this->m_Actors.m_Size > v3 );
  }
  m_Size = this->m_Events.m_Size;
  v8 = 0;
  v9 = 0;
  this->m_Actors.m_Size = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v10 = this->m_Events.m_Memory.m_pMemory[v8];
      if ( v10 != 0 )
        (*(v10->_vptr_CChoreoObjectBase + 4))(v10);
      ++v9;
      ++v8;
    }
    while ( this->m_Events.m_Size > v9 );
  }
  v11 = this->m_Channels.m_Size;
  v12 = 0;
  v13 = 0;
  this->m_Events.m_Size = 0;
  if ( v11 > 0 )
  {
    do
    {
      v14 = this->m_Channels.m_Memory.m_pMemory[v12];
      if ( v14 != 0 )
      {
        v6 = (v14->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v14->m_Events.m_Size = 0;
        v14->_vptr_CChoreoObjectBase = &off_47C2870;
        if ( v6 )
        {
          CUtlMemory<CChoreoEvent *,int>::Purge(&v14->m_Events.m_Memory);
          if ( (v14->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CChoreoEvent *,int>::Purge(&v14->m_Events.m_Memory);
        }
        if ( v14->m_szName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v14->m_szName);
        operator delete(v14);
      }
      ++v13;
      ++v12;
    }
    while ( this->m_Channels.m_Size > v13 );
  }
  this->m_Channels.m_Size = 0;
  v15 = 0;
  this->m_pTokenizer = src->m_pTokenizer;
  this->m_flCurrentTime = src->m_flCurrentTime;
  this->m_flStartTime = src->m_flStartTime;
  this->m_flEndTime = src->m_flEndTime;
  this->m_flSoundSystemLatency = src->m_flSoundSystemLatency;
  this->m_pfnPrint = src->m_pfnPrint;
  this->m_flLastActiveTime = src->m_flLastActiveTime;
  this->m_pTokenizer = src->m_pTokenizer;
  v16 = *(src + 356) & 4 | *(this + 356) & 0xFB;
  *(this + 356) = v16;
  this->m_nSceneFPS = src->m_nSceneFPS;
  v17 = *(src + 356) & 8 | v16 & 0xF7;
  *(this + 356) = v17;
  for ( *(this + 356) = *(src + 356) & 2 | v17 & 0xFD; src->m_Events.m_Size > v15; ++v15 )
  {
    v18 = src->m_Events.m_Memory.m_pMemory[v15];
    if ( CChoreoEvent::GetActor(v18) == 0 )
    {
      v38 = CChoreoScene::AllocEvent(this);
      CChoreoEvent::operator=(v38, v18);
    }
  }
  i = 0;
  if ( src->m_Actors.m_Size > 0 )
  {
    do
    {
      v19 = 0;
      v20 = src->m_Actors.m_Memory.m_pMemory[i];
      newActor = CChoreoScene::AllocActor(this);
      CChoreoActor::operator=(newActor, v20);
      if ( CChoreoActor::GetNumChannels(newActor) > 0 )
      {
        do
        {
          Channel = CChoreoActor::GetChannel(newActor, v19);
          v22 = this->m_Channels.m_Size;
          v23 = Channel;
          v24 = this->m_Channels.m_Size;
          if ( v22 == this->m_Channels.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CChoreoChannel *,int>::Grow(&this->m_Channels.m_Memory, 1);
            v24 = this->m_Channels.m_Size;
          }
          this->m_Channels.m_Size = v24 + 1;
          v25 = &this->m_Channels.m_Memory.m_pMemory[v22];
          if ( v25 != 0 )
            *v25 = v23;
          for ( j = 0; j < CChoreoChannel::GetNumEvents(v23); ++j )
          {
            Event = CChoreoChannel::GetEvent(v23, j);
            v29 = this->m_Events.m_Size;
            v30 = v29;
            if ( v29 == this->m_Events.m_Memory.m_nAllocationCount )
            {
              ev = Event;
              CUtlMemory<CChoreoEvent *,int>::Grow(&this->m_Events.m_Memory, 1);
              v30 = this->m_Events.m_Size;
              Event = ev;
            }
            this->m_Events.m_Size = v30 + 1;
            v27 = &this->m_Events.m_Memory.m_pMemory[v29];
            if ( v27 != 0 )
              *v27 = Event;
            CChoreoEvent::SetScene(Event, this);
          }
          ++v19;
        }
        while ( v19 < CChoreoActor::GetNumChannels(newActor) );
      }
      v31 = i++;
    }
    while ( src->m_Actors.m_Size > v31 + 1 );
  }
  CUtlString::operator=(&this->m_sMapname, &src->m_sMapname);
  CCurveData::CopyFrom(&this->m_SceneRamp, &src->m_SceneRamp);
  m_Root = this->m_TimeZoomLookup.m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
    v34 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v34 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v34].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_TimeZoomLookup.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
      v34 = m_Root;
    }
  }
  v36 = 0;
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::RemoveAll(&this->m_TimeZoomLookup.m_Elements.m_Tree);
  if ( src->m_TimeZoomLookup.m_Elements.m_Tree.m_NumElements > 0 )
  {
    do
    {
      CUtlDict<int,int>::Insert(
        &this->m_TimeZoomLookup,
        src->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v36].m_Data.key,
        &src->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v36].m_Data.elem);
      ++v36;
    }
    while ( src->m_TimeZoomLookup.m_Elements.m_Tree.m_NumElements > v36 );
  }
  CUtlString::operator=(&this->m_sFileName, &src->m_sFileName);
  this->m_nLastPauseEvent = src->m_nLastPauseEvent;
  this->m_flPrecomputedStopTime = src->m_flPrecomputedStopTime;
  this->m_bitvecHasEventOfType.m_Ints[0] = src->m_bitvecHasEventOfType.m_Ints[0];
  return this;
}


// CChoreoScene::Init  (line 196, @0x0000000003080290, libserver.so)  // inlines: ClearAll, memset
// calls: CUtlString::Clear
// callers: CChoreoScene::CChoreoScene, CChoreoScene::operator=
void __fastcall CChoreoScene::Init(CChoreoScene *const this, IChoreoEventCallback *callback)
{
  CUtlString *p_m_sMapname; // rdi
  char v5; // al
  char v6; // al

  p_m_sMapname = &this->m_sMapname;
  HIDWORD(p_m_sMapname[19].m_pString) = 0;
  p_m_sMapname[-1].m_pString = 0;
  CUtlString::Clear(p_m_sMapname);
  v5 = *(this + 356);
  this->m_pIChoreoEventCallback = callback;
  this->m_pfnPrint = 0;
  this->m_nActiveEvents = 0;
  this->m_flCurrentTime = 0.0;
  this->m_flStartTime = 0.0;
  *(this + 356) = v5 & 0xF3;
  this->m_flEndTime = 0.0;
  this->m_flSoundSystemLatency = 0.0;
  this->m_flLastActiveTime = 0.0;
  this->m_flEarliestTime = 0.0;
  this->m_flLatestTime = 0.0;
  this->m_nSceneFPS = 60;
  CUtlString::Clear(&this->m_sFileName);
  v6 = *(this + 356);
  this->m_bitvecHasEventOfType.m_Ints[0] = 0;
  this->m_nLastPauseEvent = -1;
  *(this + 356) = v6 & 0xFC;
}


// CChoreoScene::~CChoreoScene  (line 228, @0x0000000003086850, libserver.so)  // inlines: Purge, RemoveAll, ~CChoreoActor, ~CChoreoChannel, ~CCurveData, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, operator delete, CUtlMemory<CChoreoChannel*, int>::Purge, CUtlMemory<CChoreoEvent*, int>::Purge, CUtlDict<int, int>::Purge, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CCurveData::RemoveBezierData, CUtlMemory<CExpressionSample, int>::Purge, CUtlMemory<CChoreoActor*, int>::Purge
// callers: CChoreoScene::~CChoreoScene
void __fastcall CChoreoScene::~CChoreoScene(CChoreoScene *const this)
{
  __int64 v1; // r14
  int v2; // r13d
  CChoreoActor *v4; // r12
  bool v5; // zf
  int m_Size; // r10d
  __int64 v7; // r13
  int v8; // r12d
  CChoreoEvent *v9; // rdi
  int v10; // r9d
  __int64 v11; // r14
  int v12; // r13d
  CChoreoChannel *v13; // r12

  v1 = 0;
  v2 = 0;
  for ( this->_vptr_ICurveDataAccessor = &off_47C2A50; this->m_Actors.m_Size > v2; ++v1 )
  {
    v4 = this->m_Actors.m_Memory.m_pMemory[v1];
    if ( v4 != 0 )
    {
      v5 = (v4->m_Channels.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v4->m_Channels.m_Size = 0;
      v4->_vptr_CChoreoObjectBase = off_47C2810;  // vptr: CChoreoActor
      if ( v5 )
      {
        CUtlMemory<CChoreoChannel *,int>::Purge(&v4->m_Channels.m_Memory);
        if ( (v4->m_Channels.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CChoreoChannel *,int>::Purge(&v4->m_Channels.m_Memory);
      }
      if ( v4->m_szFacePoserModelName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v4->m_szFacePoserModelName);
      if ( v4->m_szName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v4->m_szName);
      operator delete(v4);
    }
    ++v2;
  }
  m_Size = this->m_Events.m_Size;
  v7 = 0;
  v8 = 0;
  this->m_Actors.m_Size = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v9 = this->m_Events.m_Memory.m_pMemory[v7];
      if ( v9 != 0 )
        (*(v9->_vptr_CChoreoObjectBase + 4))(v9);
      ++v8;
      ++v7;
    }
    while ( this->m_Events.m_Size > v8 );
  }
  v10 = this->m_Channels.m_Size;
  v11 = 0;
  v12 = 0;
  this->m_Events.m_Size = 0;
  if ( v10 > 0 )
  {
    do
    {
      v13 = this->m_Channels.m_Memory.m_pMemory[v11];
      if ( v13 != 0 )
      {
        v5 = (v13->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v13->m_Events.m_Size = 0;
        v13->_vptr_CChoreoObjectBase = &off_47C2870;
        if ( v5 )
        {
          CUtlMemory<CChoreoEvent *,int>::Purge(&v13->m_Events.m_Memory);
          if ( (v13->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CChoreoEvent *,int>::Purge(&v13->m_Events.m_Memory);
        }
        if ( v13->m_szName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v13->m_szName);
        operator delete(v13);
      }
      ++v12;
      ++v11;
    }
    while ( this->m_Channels.m_Size > v12 );
  }
  v5 = this->m_sFileName.m_pString == 0;
  this->m_Channels.m_Size = 0;
  if ( !v5 )
    CUtlString::FreeMemoryBlock(&this->m_sFileName);
  CUtlDict<int,int>::Purge(&this->m_TimeZoomLookup);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_TimeZoomLookup.m_Elements.m_Tree);
  if ( (this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements);
  CCurveData::RemoveBezierData(&this->m_SceneRamp);
  v5 = (this->m_SceneRamp.m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SceneRamp.m_Ramp.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CExpressionSample,int>::Purge(&this->m_SceneRamp.m_Ramp.m_Memory);
    if ( (this->m_SceneRamp.m_Ramp.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CExpressionSample,int>::Purge(&this->m_SceneRamp.m_Ramp.m_Memory);
  }
  if ( this->m_sMapname.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sMapname);
  v5 = (this->m_PauseEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PauseEvents.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_PauseEvents.m_Memory);
    if ( (this->m_PauseEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_PauseEvents.m_Memory);
  }
  v5 = (this->m_ActiveResumeConditions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ActiveResumeConditions.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_ActiveResumeConditions.m_Memory);
    if ( (this->m_ActiveResumeConditions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_ActiveResumeConditions.m_Memory);
  }
  v5 = (this->m_ResumeConditions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ResumeConditions.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_ResumeConditions.m_Memory);
    if ( (this->m_ResumeConditions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_ResumeConditions.m_Memory);
  }
  v5 = (this->m_Channels.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Channels.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CChoreoChannel *,int>::Purge(&this->m_Channels.m_Memory);
    if ( (this->m_Channels.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CChoreoChannel *,int>::Purge(&this->m_Channels.m_Memory);
  }
  v5 = (this->m_Actors.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Actors.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CChoreoActor *,int>::Purge(&this->m_Actors.m_Memory);
    if ( (this->m_Actors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CChoreoActor *,int>::Purge(&this->m_Actors.m_Memory);
  }
  v5 = (this->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Events.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_Events.m_Memory);
    if ( (this->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CChoreoEvent *,int>::Purge(&this->m_Events.m_Memory);
  }
}


// CChoreoScene::~CChoreoScene  (line 228, @0x0000000003086c50, libserver.so)
// calls: CChoreoScene::~CChoreoScene, operator delete
void __fastcall CChoreoScene::~CChoreoScene(CChoreoScene *const this)
{
  CChoreoScene::~CChoreoScene(this);
  operator delete(this);
}


// CChoreoScene::IgnorePhonemes  (line 263, @0x0000000003080380, libserver.so)
void __fastcall CChoreoScene::IgnorePhonemes(CChoreoScene *const this, bool bIgnore)
{
  *(this + 356) = (2 * bIgnore) | *(this + 356) & 0xFD;
}


// CChoreoScene::ShouldIgnorePhonemes  (line 268, @0x00000000030803a0, libserver.so)
// callers: CSceneEntity::DispatchStartSpeak
bool __fastcall CChoreoScene::ShouldIgnorePhonemes(const CChoreoScene *const this)
{
  return (*(this + 356) & 2) != 0;
}


// CChoreoScene::SetEventCallbackInterface  (line 278, @0x00000000030803c0, libserver.so)
void __fastcall CChoreoScene::SetEventCallbackInterface(CChoreoScene *const this, IChoreoEventCallback *callback)
{
  this->m_pIChoreoEventCallback = callback;
}


// CChoreoScene::PrintEvent  (line 288, @0x00000000030803d0, libserver.so)  // inlines: V_strlen
// calls: CChoreoEvent::GetName, CChoreoEvent::GetType, CChoreoEvent::NameForType, CChoreoScene::choreoprintf, CChoreoEvent::GetEndTime, CChoreoEvent::GetStartTime, CChoreoEvent::GetParameters, CChoreoEvent::GetParameters2, strlen, CChoreoEvent::GetParameters3
// callers: CChoreoScene::PrintChannel, CChoreoScene::Print
// strings: "event %s \"%s\"\n", "time %f %f\n", "param \"%s\"\n", "param2 \"%s\"\n", "param3 \"%s\"\n"
void __fastcall CChoreoScene::PrintEvent(CChoreoScene *const this, int level, CChoreoEvent *e)
{
  const char *Name; // r14
  EventNameMap_t::EVENTTYPE Type; // eax
  const char *v8; // rax
  const char *v9; // r8
  int v10; // r14d
  float StartTime; // xmm0_4
  const char *Parameters; // rax
  const char *Parameters2; // rax
  const char *v14; // rax
  const char *Parameters3; // rax
  const char *v16; // rax
  float EndTime; // [rsp+Ch] [rbp-24h]

  Name = CChoreoEvent::GetName(e);
  Type = CChoreoEvent::GetType(e);
  v8 = CChoreoEvent::NameForType(Type);
  v9 = Name;
  v10 = level + 1;
  CChoreoScene::choreoprintf(this, level, "event %s \"%s\"\n", v8, v9);
  CChoreoScene::choreoprintf(this, level, "{\n");
  EndTime = CChoreoEvent::GetEndTime(e);
  StartTime = CChoreoEvent::GetStartTime(e);
  CChoreoScene::choreoprintf(this, level + 1, "time %f %f\n", StartTime, EndTime);
  Parameters = CChoreoEvent::GetParameters(e);
  CChoreoScene::choreoprintf(this, level + 1, "param \"%s\"\n", Parameters);
  Parameters2 = CChoreoEvent::GetParameters2(e);
  if ( Parameters2 != 0 && strlen(Parameters2) > 0 )
  {
    v14 = CChoreoEvent::GetParameters2(e);
    CChoreoScene::choreoprintf(this, v10, "param2 \"%s\"\n", v14);
  }
  Parameters3 = CChoreoEvent::GetParameters3(e);
  if ( Parameters3 != 0 && strlen(Parameters3) > 0 )
  {
    v16 = CChoreoEvent::GetParameters3(e);
    CChoreoScene::choreoprintf(this, v10, "param3 \"%s\"\n", v16);
  }
  CChoreoScene::choreoprintf(this, level, "}\n");
}


// CChoreoScene::PrintChannel  (line 310, @0x0000000003080520, libserver.so)
// calls: CChoreoChannel::GetName, CChoreoScene::choreoprintf, CChoreoChannel::GetEvent, CChoreoScene::PrintEvent, CChoreoChannel::GetNumEvents
// callers: CChoreoScene::PrintActor
// strings: "channel \"%s\"\n"
void __fastcall CChoreoScene::PrintChannel(CChoreoScene *const this, int level, CChoreoChannel_0 *c)
{
  int v4; // r14d
  int v7; // ebx
  const char *Name; // rax
  CChoreoEvent *Event; // rax

  v4 = level + 1;
  v7 = 0;
  Name = CChoreoChannel::GetName(c);
  CChoreoScene::choreoprintf(this, level, "channel \"%s\"\n", Name);
  CChoreoScene::choreoprintf(this, level, "{\n");
  while ( v7 < CChoreoChannel::GetNumEvents(c) )
  {
    Event = CChoreoChannel::GetEvent(c, v7);
    if ( Event != 0 )
      CChoreoScene::PrintEvent(this, v4, Event);
    ++v7;
  }
  CChoreoScene::choreoprintf(this, level, "}\n");
}


// CChoreoScene::PrintActor  (line 332, @0x00000000030805d0, libserver.so)
// calls: CChoreoActor::GetName, CChoreoScene::choreoprintf, CChoreoActor::GetChannel, CChoreoScene::PrintChannel, CChoreoActor::GetNumChannels
// callers: CChoreoScene::Print
// strings: "actor \"%s\"\n", "}\n\n"
void __fastcall CChoreoScene::PrintActor(CChoreoScene *const this, int level, CChoreoActor *a)
{
  int v4; // r14d
  int v7; // ebx
  const char *Name; // rax
  CChoreoChannel *Channel; // rax

  v4 = level + 1;
  v7 = 0;
  Name = CChoreoActor::GetName(a);
  CChoreoScene::choreoprintf(this, level, "actor \"%s\"\n", Name);
  CChoreoScene::choreoprintf(this, level, "{\n");
  while ( v7 < CChoreoActor::GetNumChannels(a) )
  {
    Channel = CChoreoActor::GetChannel(a, v7);
    if ( Channel != 0 )
      CChoreoScene::PrintChannel(this, v4, Channel);
    ++v7;
  }
  CChoreoScene::choreoprintf(this, level, "}\n\n");
}


// CChoreoScene::Print  (line 352, @0x0000000003080680, libserver.so)
// calls: CChoreoEvent::GetActor, CChoreoScene::PrintActor, CChoreoScene::PrintEvent
void __fastcall CChoreoScene::Print(CChoreoScene *const this)
{
  __int64 v1; // r13
  int i; // r12d
  CChoreoEvent *v4; // r14
  __int64 v5; // r13
  int j; // r12d
  CChoreoActor *v7; // rdx

  v1 = 0;
  for ( i = 0; this->m_Events.m_Size > i; ++v1 )
  {
    v4 = this->m_Events.m_Memory.m_pMemory[v1];
    if ( CChoreoEvent::GetActor(v4) == 0 )
      CChoreoScene::PrintEvent(this, 0, v4);
    ++i;
  }
  v5 = 0;
  for ( j = 0; this->m_Actors.m_Size > j; ++v5 )
  {
    v7 = this->m_Actors.m_Memory.m_pMemory[v5];
    if ( v7 != 0 )
      CChoreoScene::PrintActor(this, 0, v7);
    ++j;
  }
}


// CChoreoScene::SceneMsg  (line 381, @0x0000000003080710, libserver.so)
// calls: V_vsnprintf, Msg, __stack_chk_fail
void CChoreoScene::SceneMsg(CChoreoScene *const this, const char *pFormat, ...)
{
  void (*m_pfnPrint)(const char *, ...); // rdx
  va_list argptr; // [rsp+8h] [rbp-8E8h] BYREF
  char string[2056]; // [rsp+20h] [rbp-8D0h] BYREF
  unsigned __int64 v6; // [rsp+828h] [rbp-C8h]

  va_start(argptr, pFormat);
  v6 = __readfsqword(0x28u);
  V_vsnprintf(string, 2048, pFormat, argptr);
  m_pfnPrint = this->m_pfnPrint;
  if ( m_pfnPrint != 0 )
    m_pfnPrint(string);
  else
    Msg("%s", string);
}


// CChoreoScene::AllocEvent  (line 403, @0x0000000003084e10, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoEvent*>, Element, GrowMemory, operator[]
// calls: operator new, CChoreoEvent::CChoreoEvent, CUtlMemory<CChoreoEvent*, int>::Grow, operator delete, _Unwind_Resume
// callers: CSceneEntity::GenerateSceneForSound, CChoreoChannel::RestoreFromBuffer, CChoreoScene::ParseEvent, CChoreoScene::Merge, CChoreoScene::RestoreFromBinaryBuffer, CChoreoScene::operator=
CChoreoEvent *__fastcall CChoreoScene::AllocEvent(CChoreoScene *const this)
{
  CChoreoEvent *v2; // r12
  __int64 m_Size; // r13
  int v4; // eax
  CChoreoEvent **v5; // rax

  v2 = operator new(0x1C0u);
  CChoreoEvent::CChoreoEvent(v2, this);
  m_Size = this->m_Events.m_Size;
  v4 = this->m_Events.m_Size;
  if ( m_Size == this->m_Events.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CChoreoEvent *,int>::Grow(&this->m_Events.m_Memory, 1);
    v4 = this->m_Events.m_Size;
  }
  this->m_Events.m_Size = v4 + 1;
  v5 = &this->m_Events.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
    *v5 = v2;
  return v2;
}


// CChoreoScene::AllocChannel  (line 416, @0x0000000003084c30, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoChannel*>, Element, GrowMemory, operator[]
// calls: operator new, CChoreoChannel::CChoreoChannel, CUtlMemory<CChoreoChannel*, int>::Grow, operator delete, _Unwind_Resume
// callers: CSceneEntity::GenerateSceneForSound, CChoreoActor::RestoreFromBuffer, CChoreoScene::ParseChannel, CChoreoScene::Merge
CChoreoChannel_0 *__fastcall CChoreoScene::AllocChannel(CChoreoScene *const this)
{
  CChoreoChannel *v2; // r12
  __int64 m_Size; // r13
  int v4; // eax
  CChoreoChannel **v5; // rax

  v2 = operator new(0x40u);
  CChoreoChannel::CChoreoChannel(v2, 0);
  m_Size = this->m_Channels.m_Size;
  v4 = this->m_Channels.m_Size;
  if ( m_Size == this->m_Channels.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CChoreoChannel *,int>::Grow(&this->m_Channels.m_Memory, 1);
    v4 = this->m_Channels.m_Size;
  }
  this->m_Channels.m_Size = v4 + 1;
  v5 = &this->m_Channels.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
    *v5 = v2;
  return v2;
}


// CChoreoScene::AllocActor  (line 429, @0x00000000030874e0, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoActor*>, Element, GrowMemory, operator[]
// calls: operator new, CChoreoActor::CChoreoActor, CUtlMemory<CChoreoActor*, int>::Grow, operator delete, _Unwind_Resume
// callers: CSceneEntity::GenerateSceneForSound, CChoreoScene::Merge, CChoreoScene::RestoreFromBinaryBuffer, CChoreoScene::ParseActor, CChoreoScene::operator=
CChoreoActor *__fastcall CChoreoScene::AllocActor(CChoreoScene *const this)
{
  CChoreoActor *v2; // r12
  __int64 m_Size; // r13
  int v4; // eax
  CChoreoActor **v5; // rax

  v2 = operator new(0x40u);
  CChoreoActor::CChoreoActor(v2, 0);
  m_Size = this->m_Actors.m_Size;
  v4 = this->m_Actors.m_Size;
  if ( m_Size == this->m_Actors.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CChoreoActor *,int>::Grow(&this->m_Actors.m_Memory, 1);
    v4 = this->m_Actors.m_Size;
  }
  this->m_Actors.m_Size = v4 + 1;
  v5 = &this->m_Actors.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
    *v5 = v2;
  return v2;
}


// CChoreoScene::FindActor  (line 443, @0x0000000003080810, libserver.so)
// calls: CChoreoActor::GetName, V_stricmp_fast
// callers: CChoreoScene::Merge
CChoreoActor *__fastcall CChoreoScene::FindActor(CChoreoScene *const this, const char *name)
{
  __int64 v4; // rbx
  CChoreoActor **m_pMemory; // rax
  CChoreoActor *v6; // r12
  const char *v7; // rax

  v4 = 0;
  if ( this->m_Actors.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    m_pMemory = this->m_Actors.m_Memory.m_pMemory;
    v6 = m_pMemory[v4];
    if ( v6 != 0 )
    {
      v7 = CChoreoActor::GetName(m_pMemory[v4]);
      if ( V_stricmp_fast(v7, name) == 0 )
        break;
    }
    if ( this->m_Actors.m_Size <= ++v4 )
      return 0;
  }
  return v6;
}


// CChoreoScene::GetNumEvents  (line 462, @0x0000000003080880, libserver.so)
// callers: CSceneEntity::ClearSchedules, CSceneEntity::ClearSceneEvents, CSceneEntity::PrecacheScene, CSceneEntity::CheckActors, CSceneCache::Rebuild, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList
int __fastcall CChoreoScene::GetNumEvents(const CChoreoScene *const this)
{
  return this->m_Events.m_Size;
}


// CChoreoScene::GetEvent  (line 472, @0x0000000003080890, libserver.so)  // inlines: operator[]
// callers: CSceneEntity::ClearSchedules, CSceneEntity::ClearSceneEvents, CSceneEntity::PrecacheScene, CSceneEntity::CheckActors, CSceneCache::Rebuild, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList, CChoreoScene::FindEvent, CChoreoScene::GatherEventsOfType, CChoreoScene::GatherNonGlobalEvents
CChoreoEvent *__fastcall CChoreoScene::GetEvent(const CChoreoScene *const this, int event)
{
  CChoreoEvent *result; // rax

  result = 0;
  if ( event >= 0 && event < this->m_Events.m_Size )
    return this->m_Events.m_Memory.m_pMemory[event];
  return result;
}


// CChoreoScene::GetNumActors  (line 484, @0x00000000030808c0, libserver.so)
// callers: CInstancedSceneEntity::FindNamedActor, CSceneEntity::InvolvesActor, CSceneEntity::ClearSceneEvents, CSceneEntity::UnloadScene, CSceneEntity::OnRestore, CSceneEntity::PitchShiftPlayback, CSceneEntity::OnSceneFinished, CSceneEntity::CheckActors, CSceneEntity::FindNamedActor
int __fastcall CChoreoScene::GetNumActors(const CChoreoScene *const this)
{
  return this->m_Actors.m_Size;
}


// CChoreoScene::GetActor  (line 494, @0x00000000030808d0, libserver.so)  // inlines: operator[]
// callers: CSceneEntity::CheckActors, CSceneEntity::FindNamedActor
CChoreoActor *__fastcall CChoreoScene::GetActor(CChoreoScene *const this, int actor)
{
  CChoreoActor *result; // rax

  result = 0;
  if ( actor >= 0 && actor < this->m_Actors.m_Size )
    return this->m_Actors.m_Memory.m_pMemory[actor];
  return result;
}


// CChoreoScene::GetActor  (line 501, @0x0000000003080900, libserver.so)  // inlines: operator[]
const CChoreoActor *__fastcall CChoreoScene::GetActor(const CChoreoScene *const this, int actor)
{
  const CChoreoActor *result; // rax

  result = 0;
  if ( actor >= 0 && actor < this->m_Actors.m_Size )
    return this->m_Actors.m_Memory.m_pMemory[actor];
  return result;
}


// CChoreoScene::GetNumChannels  (line 512, @0x0000000003080930, libserver.so)
// callers: CBaseFlex::GetScenePriority
int __fastcall CChoreoScene::GetNumChannels(const CChoreoScene *const this)
{
  return this->m_Channels.m_Size;
}


// CChoreoScene::GetChannel  (line 522, @0x0000000003080940, libserver.so)  // inlines: operator[]
CChoreoChannel_0 *__fastcall CChoreoScene::GetChannel(CChoreoScene *const this, int channel)
{
  CChoreoChannel_0 *result; // rax

  result = 0;
  if ( channel >= 0 && channel < this->m_Channels.m_Size )
    return this->m_Channels.m_Memory.m_pMemory[channel];
  return result;
}


// CChoreoScene::ParseRamp  (line 529, @0x0000000003080970, libserver.so)
// calls: CCurveData::Parse
void __fastcall CChoreoScene::ParseRamp(
        const CChoreoScene *const this,
        ISceneTokenProcessor *tokenizer,
        CChoreoEvent *e)
{
  CCurveData::Parse(&e->m_Ramp, tokenizer, this);
}


// CChoreoScene::ParseSceneRamp  (line 534, @0x0000000003080990, libserver.so)
// calls: CCurveData::Parse
void __fastcall CChoreoScene::ParseSceneRamp(CChoreoScene *const this, ISceneTokenProcessor *tokenizer)
{
  CCurveData::Parse(&this->m_SceneRamp, tokenizer, this);
}


// CChoreoScene::ParseEdgeInfo  (line 543, @0x00000000030809b0, libserver.so)  // inlines: SetActive, SetCurveType, atof
// calls: Interpolator_CurveTypeForName, strtod
// callers: CChoreoScene::ParseFlexAnimations, CCurveData::Parse
void __fastcall CChoreoScene::ParseEdgeInfo(
        const CChoreoScene *const this,
        ISceneTokenProcessor *tokenizer,
        EdgeInfo_t *edgeinfo)
{
  const char *v5; // rax
  const char *v6; // rax
  __m128d v7; // xmm0
  vec_t v8; // xmm1_4

  (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 0);
  edgeinfo->m_bActive = 1;
  v5 = tokenizer->CurrentToken();
  edgeinfo->m_ZeroPos.m_curvetype = Interpolator_CurveTypeForName(v5);
  (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 0);
  v6 = tokenizer->CurrentToken();
  v7.m128d_f64[0] = strtod(v6, 0);
  v8 = _mm_movedup_pd(v7).m128d_f64[0];
  edgeinfo->m_ZeroPos.m_AnchorPos.y = v8;
  (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
}


// CChoreoScene::ParseFlexAnimations  (line 561, @0x0000000003083c80, libserver.so)  // inlines: AddSamples, CExpressionSample, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, EdgeInfo_t, GetCurveType, Purge, RemoveAll, SamplesRestore_t, SetBezierHandleIndex, V_strlen, V_strnicmp_fast<int>, Vector2D, atof, operator char const*, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~SamplesRestore_t
// calls: CChoreoEvent::RemoveAllTracks, CChoreoEvent::SetTrackLookupSet, CChoreoEvent::GetEndTime, CChoreoEvent::GetStartTime, V_stricmp_fast, _V_strnicmp_fast, strlen, CUtlString::Set, strtod, CChoreoScene::ParseEdgeInfo, CCurveData::ParseSample, CUtlString::Get (29 total)
// callers: CChoreoScene::ParseEvent
// strings: "samples_use_time", "defaultcurvetype", "expecting {\n", "leftedge", "rightedge", "expecting flex animation data\n" (7 total)
void __fastcall CChoreoScene::ParseFlexAnimations(
        const CChoreoScene *const this,
        ISceneTokenProcessor *tokenizer,
        CChoreoEvent *e,
        bool removeold)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // rax
  __int64 v11; // rax
  const char *v12; // rax
  vec_t y; // xmm0_4
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rax
  __m128d v18; // xmm0
  float v19; // xmm3_4
  const char *v20; // rax
  __m128d v21; // xmm0
  float v22; // xmm4_4
  __int64 v23; // rax
  __int64 v24; // rax
  SamplesRestore_t *v25; // r13
  int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rax
  const char *v29; // rax
  const char *v30; // rax
  float v31; // xmm1_4
  float v32; // xmm1_4
  SamplesRestore_t *v33; // r15
  __int64 v34; // r14
  int v35; // r13d
  CBezierHandlesForSample *m_pMemory; // rax
  CExpressionSample *v37; // rax
  unsigned __int16 m_curvetype; // dx
  __int16 v39; // cx
  vec_t v40; // xmm0_4
  __int16 v41; // cx
  CCurveData *Ramp; // rax
  CCurveData *v43; // rax
  CUtlVectorBase<CExpressionSample,CUtlMemory<CExpressionSample,int> >::CAllocator *p_m_Memory; // r13
  bool v45; // zf
  _BYTE *v46; // r13
  char v47; // al
  const char *v48; // rax
  int v49; // r13d
  CFlexAnimationTrack *track; // [rsp+38h] [rbp-F8h]
  char samples_use_realtime; // [rsp+43h] [rbp-EDh]
  float t; // [rsp+44h] [rbp-ECh]
  FlexExpressionTrackType_t ta; // [rsp+44h] [rbp-ECh]
  float range_min; // [rsp+48h] [rbp-E8h]
  bool pCurveData; // [rsp+50h] [rbp-E0h]
  CCurveData_0 *pCurveDataa; // [rsp+50h] [rbp-E0h]
  char combo; // [rsp+5Bh] [rbp-D5h]
  float event_timea; // [rsp+5Ch] [rbp-D4h]
  float event_time; // [rsp+5Ch] [rbp-D4h]
  CUtlString flexcontroller; // [rsp+60h] [rbp-D0h] BYREF
  CExpressionSample v62; // [rsp+70h] [rbp-C0h] BYREF
  EdgeInfo_t edgeinfo[2]; // [rsp+80h] [rbp-B0h] BYREF
  SamplesRestore_t restore[2]; // [rsp+A0h] [rbp-90h] BYREF

  if ( removeold )
  {
    CChoreoEvent::RemoveAllTracks(e);
    CChoreoEvent::SetTrackLookupSet(e, 0);
  }
  (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
  event_timea = CChoreoEvent::GetEndTime(e);
  event_time = event_timea - CChoreoEvent::GetStartTime(e);
  (*(this->_vptr_ICurveDataAccessor + 2))(this);
  v7 = tokenizer->CurrentToken();
  samples_use_realtime = 0;
  if ( V_stricmp_fast(v7, "samples_use_time") == 0 )
  {
    (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
    samples_use_realtime = 1;
  }
  v8 = tokenizer->CurrentToken();
  if ( _V_strnicmp_fast(v8, "defaultcurvetype", 16) == 0 )
  {
    v46 = (tokenizer->CurrentToken() + 16);
    v47 = *v46;
    if ( *v46 == 0 )
    {
      (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
      v46 = tokenizer->CurrentToken();
      v47 = *v46;
    }
    if ( v47 != 61 )
      (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting =\n");
    v48 = v46 + 1;
    if ( v46[1] == 0 )
    {
      (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
      v48 = tokenizer->CurrentToken();
    }
    v49 = Interpolator_CurveTypeForName(v48);
    (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
    CChoreoEvent::SetDefaultCurveType(e, v49);
  }
  v9 = tokenizer->CurrentToken();
  if ( V_stricmp_fast(v9, "{") != 0 )
    (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting {\n");
  while ( 1 )
  {
    (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
    v10 = tokenizer->CurrentToken();
    if ( v10 == 0 || strlen(v10) <= 0 )
      break;
    v11 = tokenizer->CurrentToken();
    if ( V_stricmp_fast(v11, "}") == 0 )
      return;
    v12 = tokenizer->CurrentToken();
    flexcontroller.m_pString = 0;
    CUtlString::Set(&flexcontroller, v12);
    (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
    edgeinfo[0].m_ZeroPos.m_curvetype = 0;
    edgeinfo[0].m_bActive = 0;
    edgeinfo[1].m_ZeroPos.m_curvetype = 0;
    edgeinfo[1].m_bActive = 0;
    y = vec2_origin.y;
    edgeinfo[0].m_ZeroPos.m_AnchorPos.x = vec2_origin.x;
    edgeinfo[0].m_ZeroPos.m_AnchorPos.y = y;
    edgeinfo[1].m_ZeroPos.m_AnchorPos.x = vec2_origin.x;
    edgeinfo[1].m_ZeroPos.m_AnchorPos.y = y;
    *(&edgeinfo[0].m_ZeroPos + 5) = 0x7FFF;
    *(&edgeinfo[1].m_ZeroPos + 5) = 0x7FFF;
    v14 = tokenizer->CurrentToken();
    if ( V_stricmp_fast(v14, "disabled") != 0 )
    {
      pCurveData = 1;
    }
    else
    {
      (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
      pCurveData = 0;
    }
    v15 = tokenizer->CurrentToken();
    if ( V_stricmp_fast(v15, "combo") != 0 )
    {
      combo = 0;
    }
    else
    {
      (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
      combo = 1;
    }
    v16 = tokenizer->CurrentToken();
    if ( V_stricmp_fast(v16, "range") != 0 )
    {
      range_min = 0.0;
      t = 1.0;
    }
    else
    {
      (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 0);
      v17 = tokenizer->CurrentToken();
      v18.m128d_f64[0] = strtod(v17, 0);
      v19 = _mm_movedup_pd(v18).m128d_f64[0];
      range_min = v19;
      (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 0);
      v20 = tokenizer->CurrentToken();
      v21.m128d_f64[0] = strtod(v20, 0);
      v22 = _mm_movedup_pd(v21).m128d_f64[0];
      t = v22;
      (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
    }
    v23 = tokenizer->CurrentToken();
    if ( V_stricmp_fast(v23, "leftedge") == 0 )
      CChoreoScene::ParseEdgeInfo(this, tokenizer, edgeinfo);
    v24 = tokenizer->CurrentToken();
    if ( V_stricmp_fast(v24, "rightedge") == 0 )
      CChoreoScene::ParseEdgeInfo(this, tokenizer, &edgeinfo[1]);
    v25 = restore;
    v26 = 0;
    restore[0].m_samples.m_Size = 0;
    restore[0].m_samples.m_Memory.m_nAllocationCount = 0;
    restore[0].m_samples.m_Memory.m_pMemory = 0;
    restore[0].m_samples.m_Memory.m_nGrowSize = 0;
    restore[0].m_handles.m_Size = 0;
    restore[0].m_handles.m_Memory.m_pMemory = 0;
    restore[0].m_handles.m_Memory.m_nAllocationCount = 0;
    restore[0].m_handles.m_Memory.m_nGrowSize = 0;
    restore[1].m_samples.m_Size = 0;
    restore[1].m_samples.m_Memory.m_pMemory = 0;
    restore[1].m_samples.m_Memory.m_nAllocationCount = 0;
    restore[1].m_samples.m_Memory.m_nGrowSize = 0;
    restore[1].m_handles.m_Size = 0;
    restore[1].m_handles.m_Memory.m_pMemory = 0;
    restore[1].m_handles.m_Memory.m_nAllocationCount = 0;
    restore[1].m_handles.m_Memory.m_nGrowSize = 0;
    while ( v26 < 2 - (combo == 0) )
    {
      v27 = tokenizer->CurrentToken();
      if ( V_stricmp_fast(v27, "{") != 0 )
        (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting {\n");
      while ( 1 )
      {
        (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
        v29 = tokenizer->CurrentToken();
        if ( v29 == 0 || strlen(v29) <= 0 )
          break;
        v28 = tokenizer->CurrentToken();
        if ( V_stricmp_fast(v28, "}") == 0 )
          goto LABEL_30;
        CCurveData::ParseSample(tokenizer, this, v25, samples_use_realtime, event_time);
      }
      (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting flex animation data\n");
LABEL_30:
      if ( (v26 & 1) == 0 && combo != 0 )
        (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
      ++v26;
      ++v25;
    }
    if ( pCurveData || restore[0].m_samples.m_Size > 0 )
    {
      v30 = CUtlString::Get(&flexcontroller);
      track = CChoreoEvent::AddTrack(e, v30);
      CFlexAnimationTrack::SetTrackActive(track, pCurveData);
      CFlexAnimationTrack::SetComboType(track, combo);
      CFlexAnimationTrack::SetMin(track, range_min, v31);
      CFlexAnimationTrack::SetMax(track, t, v32);
      v33 = restore;
      for ( ta = FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY; ta < 2 - (combo == 0); ++ta )
      {
        v34 = 0;
        v35 = 0;
        for ( pCurveDataa = CFlexAnimationTrack::GetRamp(track, ta); v35 < v33->m_samples.m_Size; ++v34 )
        {
          while ( 1 )
          {
            v37 = &v33->m_samples.m_Memory.m_pMemory[v34];
            m_curvetype = v37->m_curvetype;
            v39 = *(v37 + 5);
            v62.m_AnchorPos.x = v37->m_AnchorPos.x;
            v40 = v37->m_AnchorPos.y;
            v62.m_curvetype = m_curvetype;
            v41 = (2 * v39) >> 1;
            v62.m_AnchorPos.y = v40;
            *(&v62 + 5) = v41 & 0x7FFF | *(&v62 + 5) & 0x8000;
            *(&v62 + 11) = *(v37 + 11) & 0x80 | *(&v62 + 11) & 0x7F;
            if ( v41 == -1 )
              break;
            m_pMemory = v33->m_handles.m_Memory.m_pMemory;
            *(&v62 + 5) |= 0x7FFFu;
            CCurveData::Add(pCurveDataa, &v62, &m_pMemory[v41]);
            ++v35;
            ++v34;
            if ( v35 >= v33->m_samples.m_Size )
              goto LABEL_43;
          }
          CCurveData::Add(pCurveDataa, &v62, 0);
          ++v35;
        }
LABEL_43:
        ++v33;
      }
      if ( edgeinfo[0].m_bActive )
      {
        CFlexAnimationTrack::SetEdgeActive(track, 1, 1);
        CFlexAnimationTrack::SetEdgeInfo(
          track,
          1,
          edgeinfo[0].m_ZeroPos.m_curvetype,
          edgeinfo[0].m_ZeroPos.m_AnchorPos.y);
      }
      if ( edgeinfo[1].m_bActive )
      {
        CFlexAnimationTrack::SetEdgeActive(track, 0, 1);
        CFlexAnimationTrack::SetEdgeInfo(
          track,
          0,
          edgeinfo[1].m_ZeroPos.m_curvetype,
          edgeinfo[1].m_ZeroPos.m_AnchorPos.y);
      }
      Ramp = CFlexAnimationTrack::GetRamp(track, FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY);
      CCurveData::Resort(Ramp);
      v43 = CFlexAnimationTrack::GetRamp(track, FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_LEFTRIGHT);
      CCurveData::Resort(v43);
    }
    p_m_Memory = &restore[1].m_samples.m_Memory;
    do
    {
      v45 = (HIDWORD(p_m_Memory[2].m_pMemory) & 0xC0000000) == 0;
      LODWORD(p_m_Memory[1].m_pMemory) = 0;
      if ( v45 )
      {
        CUtlMemory<CBezierHandlesForSample,int>::Purge(&p_m_Memory[1].m_nAllocationCount);
        if ( (HIDWORD(p_m_Memory[2].m_pMemory) & 0xC0000000) == 0 )
          CUtlMemory<CBezierHandlesForSample,int>::Purge(&p_m_Memory[1].m_nAllocationCount);
      }
      v45 = (p_m_Memory->m_nGrowSize & 0xC0000000) == 0;
      p_m_Memory[-1].m_nAllocationCount = 0;
      if ( v45 )
      {
        CUtlMemory<CExpressionSample,int>::Purge(p_m_Memory);
        if ( (p_m_Memory->m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CExpressionSample,int>::Purge(p_m_Memory);
      }
      p_m_Memory -= 3;
    }
    while ( p_m_Memory != &v62.m_curvetype );
    if ( flexcontroller.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&flexcontroller);
  }
  (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting flex animation data\n");
}


// CChoreoScene::ParseEvent  (line 756, @0x0000000003084ea0, libserver.so)  // inlines: CExpressionSample, CUtlString, ParseRamp, V_strlen, V_strncpy<long unsigned int>, Vector, Vector2D, atof, atoi, operator char const*, setTime, ~CUtlString
// calls: CChoreoScene::AllocEvent, CChoreoEvent::TypeForName, CChoreoEvent::SetType, CChoreoEvent::SetName, V_stricmp_fast, strlen, strtod, CChoreoEvent::SetStartTime, CChoreoEvent::SetEndTime, CChoreoEvent::SetParameters, CChoreoChannel::AddEvent, CChoreoEvent::SetActor (57 total)
// callers: CChoreoScene::ParseChannel, CChoreoScene::ImportEvents, CChoreoScene::ParseFromBuffer
// strings: "param", "expecting more tokens!", "param2", "param3", "moveforwarddistance", "expecting {\n" (31 total)
CChoreoEvent *__fastcall CChoreoScene::ParseEvent(
        CChoreoScene *const this,
        CChoreoActor *actor,
        CChoreoChannel_0 *channel)
{
  CChoreoEvent *v6; // r12
  const char *v7; // rax
  EventNameMap_t::EVENTTYPE v8; // eax
  const char *v9; // rax
  __int64 v10; // rax
  char v11; // r13
  __int64 v12; // rax
  const char *v13; // rax
  __int64 v14; // rax
  int v15; // eax
  ISceneTokenProcessor *m_pTokenizer; // rdi
  bool v17; // zf
  int (**vptr_ISceneTokenProcessor)(...); // rax
  const char *v19; // rax
  __m128d v20; // xmm0
  float v21; // xmm3_4
  char v22; // al
  double v23; // xmm0_8
  float v24; // xmm1_4
  __int64 v25; // rax
  int v26; // eax
  ISceneTokenProcessor *v27; // rdi
  int (**v28)(...); // rax
  const char *v29; // rax
  __m128d v30; // xmm0
  float v31; // xmm4_4
  const char *v32; // rax
  __m128d v33; // xmm0
  __int64 v34; // rax
  int v35; // eax
  ISceneTokenProcessor *v36; // rdi
  int (**v37)(...); // rax
  const char *v38; // rax
  const char *v40; // rax
  __m128d v41; // xmm0
  __int64 v42; // rax
  int v43; // eax
  ISceneTokenProcessor *v44; // rdi
  int (**v45)(...); // rax
  const char *v46; // rax
  const char *v47; // rax
  __m128d v48; // xmm0
  __int64 v49; // rax
  int v50; // eax
  ISceneTokenProcessor *v51; // rdi
  int (**v52)(...); // rax
  const char *v53; // rax
  __int64 v54; // rax
  int v55; // eax
  ISceneTokenProcessor *v56; // rdi
  int (**v57)(...); // rax
  const char *v58; // rax
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  ISceneTokenProcessor *v62; // rdi
  int (**v63)(...); // rax
  __int64 v64; // rax
  int v65; // eax
  ISceneTokenProcessor *v66; // rdi
  int (**v67)(...); // rax
  const char *v68; // rax
  int v69; // eax
  float v70; // xmm0_4
  const char *v71; // rax
  int v72; // eax
  __int64 v73; // rax
  int v74; // eax
  ISceneTokenProcessor *v75; // rdi
  int (**v76)(...); // rax
  const char *v77; // rax
  int v78; // eax
  __int64 v79; // rax
  int v80; // eax
  ISceneTokenProcessor *v81; // rdi
  int (**v82)(...); // rax
  __int64 v83; // rax
  int v84; // eax
  ISceneTokenProcessor *v85; // rdi
  int (**v86)(...); // rax
  const char *v87; // rax
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // eax
  ISceneTokenProcessor *v97; // rdi
  int (**v98)(...); // rax
  const char *v99; // rax
  float v100; // xmm0_4
  float v101; // xmm1_4
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // eax
  ISceneTokenProcessor *v106; // rdi
  int (**v107)(...); // rax
  const char *v108; // rax
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // eax
  ISceneTokenProcessor *v113; // rdi
  int (**v114)(...); // rax
  __int64 v115; // rax
  const char *v116; // rax
  __int64 v117; // rax
  const char *v118; // rax
  __int64 v119; // rax
  const char *v120; // rax
  float v121; // xmm1_4
  __int64 v122; // rax
  int v123; // eax
  ISceneTokenProcessor *v124; // rdi
  int (**v125)(...); // rax
  const char *v126; // rax
  float v127; // xmm0_4
  float v128; // xmm1_4
  __int64 v129; // rax
  int v130; // eax
  ISceneTokenProcessor *v131; // rdi
  int (**v132)(...); // rax
  const char *v133; // rax
  __int64 v134; // rax
  const char *v135; // rax
  __int64 v136; // rax
  const char *v137; // rax
  __int64 v138; // rax
  const char *v139; // rax
  __int64 v140; // rax
  int v141; // eax
  ISceneTokenProcessor *v142; // rdi
  int (**v143)(...); // rax
  __int64 v144; // rax
  const char *v145; // rax
  __int64 v146; // rax
  const char *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  const char *v150; // rax
  __int64 v151; // rax
  int v152; // eax
  ISceneTokenProcessor *v153; // rdi
  int (**v154)(...); // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  int v160; // eax
  ISceneTokenProcessor *v161; // rdi
  int (**v162)(...); // rax
  const char *v163; // rax
  CCNameMap_t::CLOSECAPTION v164; // eax
  __int64 v165; // rax
  int v166; // eax
  ISceneTokenProcessor *v167; // rdi
  int (**v168)(...); // rax
  const char *v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  float v176; // xmm0_4
  float v177; // xmm1_4
  float sustain; // [rsp+2Ch] [rbp-164h]
  float decay; // [rsp+30h] [rbp-160h]
  float attack; // [rsp+34h] [rbp-15Ch]
  float decaytime; // [rsp+38h] [rbp-158h]
  vec_t decaytimea; // [rsp+38h] [rbp-158h]
  float decaytimec; // [rsp+38h] [rbp-158h]
  bool decaytimed; // [rsp+38h] [rbp-158h]
  float attacktime; // [rsp+3Ch] [rbp-154h]
  vec_t attacktimeb; // [rsp+3Ch] [rbp-154h]
  float attacktimec; // [rsp+3Ch] [rbp-154h]
  CChoreoEvent::AbsTagType attacktimea; // [rsp+3Ch] [rbp-154h]
  float attacktimed; // [rsp+3Ch] [rbp-154h]
  CExpressionSample s; // [rsp+40h] [rbp-150h] BYREF
  char tagname[128]; // [rsp+50h] [rbp-140h] BYREF
  char wavname[136]; // [rsp+D0h] [rbp-C0h] BYREF
  unsigned __int64 v193; // [rsp+158h] [rbp-38h]
  Vector2D decaytimeb; // 0:^38.8

  v193 = __readfsqword(0x28u);
  v6 = CChoreoScene::AllocEvent(this);
  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0);
  v7 = this->m_pTokenizer->CurrentToken();
  v8 = CChoreoEvent::TypeForName(v7);
  CChoreoEvent::SetType(v6, v8);
  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0);
  v9 = this->m_pTokenizer->CurrentToken();
  CChoreoEvent::SetName(v6, v9);
  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
  v10 = this->m_pTokenizer->CurrentToken();
  if ( V_stricmp_fast(v10, "{") != 0 )
    (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(this->m_pTokenizer, "expecting {\n");
  v11 = 0;
  decay = 1.0;
  sustain = 1.0;
  attack = 1.0;
LABEL_4:
  while ( 1 )
  {
    (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
    v12 = this->m_pTokenizer->CurrentToken();
    if ( V_stricmp_fast(v12, "}") == 0 )
      break;
    v13 = this->m_pTokenizer->CurrentToken();
    if ( v13 == 0 || strlen(v13) <= 0 )
    {
      (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(this->m_pTokenizer, "expecting more tokens!");
      break;
    }
    v14 = this->m_pTokenizer->CurrentToken();
    v15 = V_stricmp_fast(v14, "time");
    m_pTokenizer = this->m_pTokenizer;
    v17 = v15 == 0;
    vptr_ISceneTokenProcessor = m_pTokenizer->_vptr_ISceneTokenProcessor;
    if ( v17 )
    {
      vptr_ISceneTokenProcessor[1](m_pTokenizer, 0);
      v19 = this->m_pTokenizer->CurrentToken();
      v20.m128d_f64[0] = strtod(v19, 0);
      v21 = _mm_movedup_pd(v20).m128d_f64[0];
      attacktime = v21;
      v22 = (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 2))(this->m_pTokenizer);
      v24 = 1.0;
      if ( v22 != 0 )
      {
        (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0, v23, 1.0);
        v40 = this->m_pTokenizer->CurrentToken();
        v41.m128d_f64[0] = strtod(v40, 0);
        v24 = _mm_movedup_pd(v41).m128d_f64[0];
      }
      decaytime = v24;
      CChoreoEvent::SetStartTime(v6, attacktime, v24);
      CChoreoEvent::SetEndTime(v6, decaytime, decaytime);
    }
    else
    {
      v25 = (*vptr_ISceneTokenProcessor)();
      v26 = V_stricmp_fast(v25, "ramp");
      v27 = this->m_pTokenizer;
      v17 = v26 == 0;
      v28 = v27->_vptr_ISceneTokenProcessor;
      if ( v17 )
      {
        v28[1](v27, 0);
        v29 = this->m_pTokenizer->CurrentToken();
        v30.m128d_f64[0] = strtod(v29, 0);
        v31 = _mm_movedup_pd(v30).m128d_f64[0];
        attack = v31;
        if ( (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 2))(this->m_pTokenizer) != 0 )
        {
          (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0);
          v47 = this->m_pTokenizer->CurrentToken();
          v48.m128d_f64[0] = strtod(v47, 0);
          sustain = _mm_movedup_pd(v48).m128d_f64[0];
        }
        v11 = 1;
        if ( (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 2))(this->m_pTokenizer) != 0 )
        {
          (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0);
          v32 = this->m_pTokenizer->CurrentToken();
          v33.m128d_f64[0] = strtod(v32, 0);
          decay = _mm_movedup_pd(v33).m128d_f64[0];
        }
      }
      else
      {
        v34 = (*v28)();
        v35 = V_stricmp_fast(v34, "param");
        v36 = this->m_pTokenizer;
        v17 = v35 == 0;
        v37 = v36->_vptr_ISceneTokenProcessor;
        if ( v17 )
        {
          v37[1](v36, 0);
          v38 = this->m_pTokenizer->CurrentToken();
          CChoreoEvent::SetParameters(v6, v38);
        }
        else
        {
          v42 = (*v37)();
          v43 = V_stricmp_fast(v42, "param2");
          v44 = this->m_pTokenizer;
          v17 = v43 == 0;
          v45 = v44->_vptr_ISceneTokenProcessor;
          if ( v17 )
          {
            v45[1](v44, 0);
            v46 = this->m_pTokenizer->CurrentToken();
            CChoreoEvent::SetParameters2(v6, v46);
          }
          else
          {
            v49 = (*v45)();
            v50 = V_stricmp_fast(v49, "param3");
            v51 = this->m_pTokenizer;
            v17 = v50 == 0;
            v52 = v51->_vptr_ISceneTokenProcessor;
            if ( v17 )
            {
              v52[1](v51, 0);
              v53 = this->m_pTokenizer->CurrentToken();
              CChoreoEvent::SetParameters3(v6, v53);
            }
            else
            {
              v54 = (*v52)();
              v55 = V_stricmp_fast(v54, "pitch");
              v56 = this->m_pTokenizer;
              v17 = v55 == 0;
              v57 = v56->_vptr_ISceneTokenProcessor;
              if ( v17 )
              {
                v57[1](v56, 0);
                v58 = this->m_pTokenizer->CurrentToken();
                v59 = strtol(v58, 0, 10);
                CChoreoEvent::SetPitch(v6, v59);
              }
              else
              {
                v60 = (*v57)();
                v61 = V_stricmp_fast(v60, "yaw");
                v62 = this->m_pTokenizer;
                v17 = v61 == 0;
                v63 = v62->_vptr_ISceneTokenProcessor;
                if ( v17 )
                {
                  v63[1](v62, 0);
                  v71 = this->m_pTokenizer->CurrentToken();
                  v72 = strtol(v71, 0, 10);
                  CChoreoEvent::SetYaw(v6, v72);
                }
                else
                {
                  v64 = (*v63)();
                  v65 = V_stricmp_fast(v64, "moveforwarddistance");
                  v66 = this->m_pTokenizer;
                  v17 = v65 == 0;
                  v67 = v66->_vptr_ISceneTokenProcessor;
                  if ( v17 )
                  {
                    v67[1](v66, 0);
                    v68 = this->m_pTokenizer->CurrentToken();
                    v69 = strtol(v68, 0, 10);
                    CChoreoEvent::SetForwardDistance(v6, v69);
                  }
                  else
                  {
                    v73 = (*v67)();
                    v74 = V_stricmp_fast(v73, "moverightdistance");
                    v75 = this->m_pTokenizer;
                    v17 = v74 == 0;
                    v76 = v75->_vptr_ISceneTokenProcessor;
                    if ( v17 )
                    {
                      v76[1](v75, 0);
                      v77 = this->m_pTokenizer->CurrentToken();
                      v78 = strtol(v77, 0, 10);
                      CChoreoEvent::SetRightDistance(v6, v78);
                    }
                    else
                    {
                      v79 = (*v76)();
                      v80 = V_stricmp_fast(v79, "targetposition");
                      v81 = this->m_pTokenizer;
                      v17 = v80 == 0;
                      v82 = v81->_vptr_ISceneTokenProcessor;
                      if ( v17 )
                      {
                        v82[1](v81, 0);
                        v89 = this->m_pTokenizer->CurrentToken();
                        decaytimeb.x = V_atof(v89);
                        (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0);
                        v90 = this->m_pTokenizer->CurrentToken();
                        decaytimeb.y = V_atof(v90);
                        (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0);
                        v91 = this->m_pTokenizer->CurrentToken();
                        *&s.m_curvetype = V_atof(v91);
                        s.m_AnchorPos = decaytimeb;
                        CChoreoEvent::SetTargetLocation(v6, &s);
                      }
                      else
                      {
                        v83 = (*v82)();
                        v84 = V_stricmp_fast(v83, "loopcount");
                        v85 = this->m_pTokenizer;
                        v17 = v84 == 0;
                        v86 = v85->_vptr_ISceneTokenProcessor;
                        if ( v17 )
                        {
                          v86[1](v85, 0);
                          v87 = this->m_pTokenizer->CurrentToken();
                          v88 = strtol(v87, 0, 10);
                          CChoreoEvent::SetLoopCount(v6, v88);
                        }
                        else
                        {
                          v92 = (*v86)();
                          if ( V_stricmp_fast(v92, "resumecondition") != 0 )
                          {
                            v93 = this->m_pTokenizer->CurrentToken();
                            if ( V_stricmp_fast(v93, "fixedlength") != 0 )
                            {
                              v94 = this->m_pTokenizer->CurrentToken();
                              if ( V_stricmp_fast(v94, "lockbodyfacing") != 0 )
                              {
                                v95 = this->m_pTokenizer->CurrentToken();
                                v96 = V_stricmp_fast(v95, "distancetotarget");
                                v97 = this->m_pTokenizer;
                                v17 = v96 == 0;
                                v98 = v97->_vptr_ISceneTokenProcessor;
                                if ( v17 )
                                {
                                  v98[1](v97, 0);
                                  v99 = this->m_pTokenizer->CurrentToken();
                                  v100 = strtod(v99, 0);
                                  CChoreoEvent::SetDistanceToTarget(v6, v100, v101);
                                }
                                else
                                {
                                  v102 = (*v98)();
                                  if ( V_stricmp_fast(v102, "forceshortmovement") != 0 )
                                  {
                                    v103 = this->m_pTokenizer->CurrentToken();
                                    if ( V_stricmp_fast(v103, "synctofollowinggesture") != 0 )
                                    {
                                      v104 = this->m_pTokenizer->CurrentToken();
                                      v105 = V_stricmp_fast(v104, "active");
                                      v106 = this->m_pTokenizer;
                                      v17 = v105 == 0;
                                      v107 = v106->_vptr_ISceneTokenProcessor;
                                      if ( v17 )
                                      {
                                        v107[1](v106, 0);
                                        v108 = this->m_pTokenizer->CurrentToken();
                                        v109 = strtol(v108, 0, 10);
                                        CChoreoEvent::SetActive(v6, v109 != 0);
                                      }
                                      else
                                      {
                                        v110 = (*v107)();
                                        if ( V_stricmp_fast(v110, "playoverscript") != 0 )
                                        {
                                          v111 = this->m_pTokenizer->CurrentToken();
                                          v112 = V_stricmp_fast(v111, "tags");
                                          v113 = this->m_pTokenizer;
                                          v17 = v112 == 0;
                                          v114 = v113->_vptr_ISceneTokenProcessor;
                                          if ( v17 )
                                          {
                                            v114[1](v113, 1);
                                            v115 = this->m_pTokenizer->CurrentToken();
                                            if ( V_stricmp_fast(v115, "{") != 0 )
                                              (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(
                                                this->m_pTokenizer,
                                                "expecting {\n");
                                            while ( 1 )
                                            {
                                              (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                this->m_pTokenizer,
                                                1);
                                              v116 = this->m_pTokenizer->CurrentToken();
                                              if ( v116 == 0 || strlen(v116) <= 0 )
                                                goto LABEL_71;
                                              v117 = this->m_pTokenizer->CurrentToken();
                                              if ( V_stricmp_fast(v117, "}") == 0 )
                                                goto LABEL_4;
                                              v118 = this->m_pTokenizer->CurrentToken();
                                              s.m_AnchorPos = 0;
                                              CUtlString::Set(&s, v118);
                                              (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                this->m_pTokenizer,
                                                0);
                                              v119 = this->m_pTokenizer->CurrentToken();
                                              attacktimec = V_atof(v119);
                                              v120 = CUtlString::Get(&s);
                                              CChoreoEvent::AddRelativeTag(v6, v120, LODWORD(attacktimec), v121);
                                              if ( *&s.m_AnchorPos != 0 )
                                                CUtlString::FreeMemoryBlock(&s);
                                            }
                                          }
                                          v122 = (*v114)();
                                          v123 = V_stricmp_fast(v122, "sequenceduration");
                                          v124 = this->m_pTokenizer;
                                          v17 = v123 == 0;
                                          v125 = v124->_vptr_ISceneTokenProcessor;
                                          if ( v17 )
                                          {
                                            v125[1](v124, 0);
                                            v126 = this->m_pTokenizer->CurrentToken();
                                            v127 = strtod(v126, 0);
                                            CChoreoEvent::SetGestureSequenceDuration(v6, v127, v128);
                                          }
                                          else
                                          {
                                            v129 = (*v125)();
                                            v130 = V_stricmp_fast(v129, "absolutetags");
                                            v131 = this->m_pTokenizer;
                                            v17 = v130 == 0;
                                            v132 = v131->_vptr_ISceneTokenProcessor;
                                            if ( v17 )
                                            {
                                              v132[1](v131, 1);
                                              v133 = this->m_pTokenizer->CurrentToken();
                                              attacktimea = CChoreoEvent::TypeForAbsoluteTagName(v133);
                                              if ( attacktimea == -1 )
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(
                                                  this->m_pTokenizer,
                                                  "expecting valid tag type!!!");
                                              (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                this->m_pTokenizer,
                                                1);
                                              v134 = this->m_pTokenizer->CurrentToken();
                                              if ( V_stricmp_fast(v134, "{") != 0 )
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(
                                                  this->m_pTokenizer,
                                                  "expecting {\n");
                                              while ( 1 )
                                              {
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                  this->m_pTokenizer,
                                                  1);
                                                v135 = this->m_pTokenizer->CurrentToken();
                                                if ( v135 == 0 || strlen(v135) <= 0 )
                                                  goto LABEL_71;
                                                v136 = this->m_pTokenizer->CurrentToken();
                                                if ( V_stricmp_fast(v136, "}") == 0 )
                                                  goto LABEL_4;
                                                v137 = this->m_pTokenizer->CurrentToken();
                                                s.m_AnchorPos = 0;
                                                CUtlString::Set(&s, v137);
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                  this->m_pTokenizer,
                                                  0);
                                                v138 = this->m_pTokenizer->CurrentToken();
                                                decaytimec = V_atof(v138);
                                                v139 = CUtlString::Get(&s);
                                                CChoreoEvent::AddAbsoluteTag(v6, attacktimea, v139, LODWORD(decaytimec));
                                                if ( *&s.m_AnchorPos != 0 )
                                                  CUtlString::FreeMemoryBlock(&s);
                                              }
                                            }
                                            v140 = (*v132)();
                                            v141 = V_stricmp_fast(v140, "flextimingtags");
                                            v142 = this->m_pTokenizer;
                                            v17 = v141 == 0;
                                            v143 = v142->_vptr_ISceneTokenProcessor;
                                            if ( v17 )
                                            {
                                              v143[1](v142, 1);
                                              v144 = this->m_pTokenizer->CurrentToken();
                                              if ( V_stricmp_fast(v144, "{") != 0 )
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(
                                                  this->m_pTokenizer,
                                                  "expecting {\n");
                                              while ( 1 )
                                              {
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                  this->m_pTokenizer,
                                                  1);
                                                v145 = this->m_pTokenizer->CurrentToken();
                                                if ( v145 == 0 || strlen(v145) <= 0 )
                                                  break;
                                                v146 = this->m_pTokenizer->CurrentToken();
                                                if ( V_stricmp_fast(v146, "}") == 0 )
                                                  goto LABEL_4;
                                                v147 = this->m_pTokenizer->CurrentToken();
                                                s.m_AnchorPos = 0;
                                                CUtlString::Set(&s, v147);
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                  this->m_pTokenizer,
                                                  0);
                                                v148 = this->m_pTokenizer->CurrentToken();
                                                attacktimed = V_atof(v148);
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                  this->m_pTokenizer,
                                                  0);
                                                v149 = this->m_pTokenizer->CurrentToken();
                                                decaytimed = V_atoi(v149) != 0;
                                                v150 = CUtlString::Get(&s);
                                                CChoreoEvent::AddTimingTag(v6, v150, LODWORD(attacktimed), decaytimed);
                                                if ( *&s.m_AnchorPos != 0 )
                                                  CUtlString::FreeMemoryBlock(&s);
                                              }
LABEL_71:
                                              (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(
                                                this->m_pTokenizer,
                                                "expecting relative tag\n");
                                            }
                                            else
                                            {
                                              v151 = (*v143)();
                                              v152 = V_stricmp_fast(v151, "relativetag");
                                              v153 = this->m_pTokenizer;
                                              v17 = v152 == 0;
                                              v154 = v153->_vptr_ISceneTokenProcessor;
                                              if ( v17 )
                                              {
                                                v154[1](v153, 0);
                                                v155 = this->m_pTokenizer->CurrentToken();
                                                _V_strncpy(tagname, v155, 128);
                                                (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                  this->m_pTokenizer,
                                                  0);
                                                v156 = this->m_pTokenizer->CurrentToken();
                                                _V_strncpy(wavname, v156, 128);
                                                CChoreoEvent::SetUsingRelativeTag(v6, 1, tagname, wavname);
                                              }
                                              else
                                              {
                                                v157 = (*v154)();
                                                if ( V_stricmp_fast(v157, "flexanimations") != 0 )
                                                {
                                                  v158 = this->m_pTokenizer->CurrentToken();
                                                  if ( V_stricmp_fast(v158, "event_ramp") != 0 )
                                                  {
                                                    v159 = this->m_pTokenizer->CurrentToken();
                                                    v160 = V_stricmp_fast(v159, "cctype");
                                                    v161 = this->m_pTokenizer;
                                                    v17 = v160 == 0;
                                                    v162 = v161->_vptr_ISceneTokenProcessor;
                                                    if ( v17 )
                                                    {
                                                      v162[1](v161, 0);
                                                      v163 = this->m_pTokenizer->CurrentToken();
                                                      v164 = CChoreoEvent::CCTypeForName(v163);
                                                      CChoreoEvent::SetCloseCaptionType(v6, v164);
                                                    }
                                                    else
                                                    {
                                                      v165 = (*v162)();
                                                      v166 = V_stricmp_fast(v165, "cctoken");
                                                      v167 = this->m_pTokenizer;
                                                      v17 = v166 == 0;
                                                      v168 = v167->_vptr_ISceneTokenProcessor;
                                                      if ( v17 )
                                                      {
                                                        v168[1](v167, 0);
                                                        v169 = this->m_pTokenizer->CurrentToken();
                                                        CChoreoEvent::SetCloseCaptionToken(v6, v169);
                                                      }
                                                      else
                                                      {
                                                        v170 = (*v168)();
                                                        if ( V_stricmp_fast(v170, "cc_usingcombinedfile") != 0 )
                                                        {
                                                          v171 = this->m_pTokenizer->CurrentToken();
                                                          if ( V_stricmp_fast(v171, "cc_combinedusesgender") != 0 )
                                                          {
                                                            v172 = this->m_pTokenizer->CurrentToken();
                                                            if ( V_stricmp_fast(v172, "cc_noattenuate") != 0 )
                                                            {
                                                              v173 = this->m_pTokenizer->CurrentToken();
                                                              if ( V_stricmp_fast(v173, "hardstopspeakevent") != 0 )
                                                              {
                                                                v174 = this->m_pTokenizer->CurrentToken();
                                                                if ( V_stricmp_fast(v174, "startdelay") == 0 )
                                                                {
                                                                  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(
                                                                    this->m_pTokenizer,
                                                                    0);
                                                                  v175 = this->m_pTokenizer->CurrentToken();
                                                                  v176 = V_atof(v175);
                                                                  CChoreoEvent::SetSoundStartDelay(v6, v176, v177);
                                                                }
                                                              }
                                                              else
                                                              {
                                                                CChoreoEvent::SetHardStopSpeakEvent(v6, 1);
                                                              }
                                                            }
                                                            else
                                                            {
                                                              CChoreoEvent::SetSuppressingCaptionAttenuation(v6, 1);
                                                            }
                                                          }
                                                          else
                                                          {
                                                            CChoreoEvent::SetCombinedUsingGenderToken(v6, 1);
                                                          }
                                                        }
                                                        else
                                                        {
                                                          CChoreoEvent::SetUsingCombinedFile(v6, 1);
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    CCurveData::Parse(&v6->m_Ramp, this->m_pTokenizer, this);
                                                  }
                                                }
                                                else
                                                {
                                                  CChoreoScene::ParseFlexAnimations(this, this->m_pTokenizer, v6, 1);
                                                }
                                              }
                                            }
                                          }
                                        }
                                        else
                                        {
                                          CChoreoEvent::SetPlayOverScript(v6, 1);
                                        }
                                      }
                                    }
                                    else
                                    {
                                      CChoreoEvent::SetSyncToFollowingGesture(v6, 1);
                                    }
                                  }
                                  else
                                  {
                                    CChoreoEvent::SetForceShortMovement(v6, 1);
                                  }
                                }
                              }
                              else
                              {
                                CChoreoEvent::SetLockBodyFacing(v6, 1);
                              }
                            }
                            else
                            {
                              CChoreoEvent::SetFixedLength(v6, 1);
                            }
                          }
                          else
                          {
                            CChoreoEvent::SetResumeCondition(v6, 1);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( channel != 0 )
    CChoreoChannel::AddEvent(channel, v6);
  CChoreoEvent::SetActor(v6, actor);
  CChoreoEvent::SetChannel(v6, channel);
  if ( v11 != 0 && CCurveData::Count(&v6->m_Ramp) == 0 && (attack != 1.0 || sustain != 1.0 || decay != 1.0) )
  {
    attacktimeb = (1.0 - attack) * (*(v6->_vptr_CChoreoObjectBase + 8))(v6);
    v70 = (*(v6->_vptr_CChoreoObjectBase + 8))(v6);
    s.m_curvetype = 0;
    s.m_AnchorPos.y = sustain;
    *(&s + 5) = 0x7FFF;
    decaytimea = v70 * decay;
    s.m_AnchorPos.x = attacktimeb;
    CCurveData::Add(&v6->m_Ramp, &s, 0);
    s.m_AnchorPos.x = (attacktimeb + decaytimea) * 0.5;
    CCurveData::Add(&v6->m_Ramp, &s, 0);
    s.m_AnchorPos.x = decaytimea;
    CCurveData::Add(&v6->m_Ramp, &s, 0);
    CCurveData::Resort(&v6->m_Ramp);
  }
  return v6;
}


// CChoreoScene::ParseActor  (line 1125, @0x0000000003087c70, libserver.so)  // inlines: atoi
// calls: CChoreoScene::AllocActor, CChoreoActor::SetName, V_stricmp_fast, CChoreoScene::ParseChannel, CChoreoScene::ParseFacePoserModel, strtol, CChoreoActor::SetActive
// callers: CChoreoScene::ParseFromBuffer
// strings: "faceposermodel", "expecting channel got %s\n", "expecting {"
CChoreoActor *__fastcall CChoreoScene::ParseActor(CChoreoScene *const this)
{
  CChoreoActor *v2; // r12
  const char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  ISceneTokenProcessor *m_pTokenizer; // rdi
  bool v11; // zf
  int (**vptr_ISceneTokenProcessor)(...); // rax
  const char *v13; // rax
  int v14; // eax
  int (*v15)(...); // r13
  const char *v16; // rax

  v2 = CChoreoScene::AllocActor(this);
  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0);
  v3 = this->m_pTokenizer->CurrentToken();
  CChoreoActor::SetName(v2, v3);
  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
  v4 = this->m_pTokenizer->CurrentToken();
  if ( V_stricmp_fast(v4, "{") != 0 )
    (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(this->m_pTokenizer, "expecting {");
  while ( 1 )
  {
    (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
    v5 = this->m_pTokenizer->CurrentToken();
    if ( V_stricmp_fast(v5, "}") == 0 )
      break;
    v6 = this->m_pTokenizer->CurrentToken();
    if ( V_stricmp_fast(v6, "channel") != 0 )
    {
      v7 = this->m_pTokenizer->CurrentToken();
      if ( V_stricmp_fast(v7, "faceposermodel") != 0 )
      {
        v8 = this->m_pTokenizer->CurrentToken();
        v9 = V_stricmp_fast(v8, "active");
        m_pTokenizer = this->m_pTokenizer;
        v11 = v9 == 0;
        vptr_ISceneTokenProcessor = m_pTokenizer->_vptr_ISceneTokenProcessor;
        if ( v11 )
        {
          vptr_ISceneTokenProcessor[1](m_pTokenizer, 1);
          v13 = this->m_pTokenizer->CurrentToken();
          v14 = strtol(v13, 0, 10);
          CChoreoActor::SetActive(v2, v14 != 0);
        }
        else
        {
          v15 = vptr_ISceneTokenProcessor[3];
          v16 = (*vptr_ISceneTokenProcessor)();
          (v15)(this->m_pTokenizer, "expecting channel got %s\n", v16);
        }
      }
      else
      {
        CChoreoScene::ParseFacePoserModel(this, v2);
      }
    }
    else
    {
      CChoreoScene::ParseChannel(this, v2);
    }
  }
  return v2;
}


// CChoreoScene::GetMapname  (line 1169, @0x0000000003080a30, libserver.so)  // inlines: String
// calls: CUtlString::Get
const char *__fastcall CChoreoScene::GetMapname(const CChoreoScene *const this)
{
  return CUtlString::Get(&this->m_sMapname);
}


// CChoreoScene::SetMapname  (line 1178, @0x0000000003080a50, libserver.so)
// calls: CUtlString::operator=
void __fastcall CChoreoScene::SetMapname(CChoreoScene *const this, const char *name)
{
  CUtlString::operator=(&this->m_sMapname, name);
}


// CChoreoScene::ParseMapname  (line 1186, @0x0000000003080a70, libserver.so)
// calls: CUtlString::operator=
// callers: CChoreoScene::ParseFromBuffer
void __fastcall CChoreoScene::ParseMapname(CChoreoScene *const this)
{
  const char *v2; // rax

  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
  v2 = this->m_pTokenizer->CurrentToken();
  CUtlString::operator=(&this->m_sMapname, v2);
}


// CChoreoScene::ParseFPS  (line 1195, @0x0000000003080ab0, libserver.so)  // inlines: atoi
// calls: strtol
// callers: CChoreoScene::ParseFromBuffer
void __fastcall CChoreoScene::ParseFPS(CChoreoScene *const this)
{
  const char *v2; // rax
  int v3; // eax
  int v4; // edx
  int v5; // eax

  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
  v2 = this->m_pTokenizer->CurrentToken();
  v3 = strtol(v2, 0, 10);
  v4 = 10;
  if ( v3 >= 10 )
    v4 = v3;
  v5 = 240;
  if ( v4 <= 240 )
    v5 = v4;
  this->m_nSceneFPS = v5;
}


// CChoreoScene::ParseSnap  (line 1207, @0x0000000003080b10, libserver.so)
// calls: V_stricmp_fast
// callers: CChoreoScene::ParseFromBuffer
void __fastcall CChoreoScene::ParseSnap(CChoreoScene *const this)
{
  __int64 v2; // rax

  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
  v2 = this->m_pTokenizer->CurrentToken();
  *(this + 356) = (8 * (V_stricmp_fast(v2, "on") == 0)) | *(this + 356) & 0xF7;
}


// CChoreoScene::ParseIgnorePhonemes  (line 1217, @0x0000000003080b70, libserver.so)
// calls: V_stricmp_fast
// callers: CChoreoScene::ParseFromBuffer
void __fastcall CChoreoScene::ParseIgnorePhonemes(CChoreoScene *const this)
{
  __int64 v2; // rax

  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
  v2 = this->m_pTokenizer->CurrentToken();
  *(this + 356) = (2 * (V_stricmp_fast(v2, "on") == 0)) | *(this + 356) & 0xFD;
}


// CChoreoScene::ParseFacePoserModel  (line 1228, @0x0000000003080bd0, libserver.so)
// calls: CChoreoActor::SetFacePoserModelName
// callers: CChoreoScene::ParseActor
void __fastcall CChoreoScene::ParseFacePoserModel(CChoreoScene *const this, CChoreoActor *actor)
{
  const char *v4; // rax

  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
  v4 = this->m_pTokenizer->CurrentToken();
  CChoreoActor::SetFacePoserModelName(actor, v4);
}


// CChoreoScene::ParseChannel  (line 1239, @0x00000000030860c0, libserver.so)  // inlines: atoi
// calls: CChoreoScene::AllocChannel, CChoreoChannel::SetName, V_stricmp_fast, CChoreoScene::ParseEvent, strtol, CChoreoChannel::SetActive, CChoreoActor::AddChannel, CChoreoChannel::SetActor
// callers: CChoreoScene::ParseActor
// strings: "expecting event got %s\n", "expecting {"
CChoreoChannel_0 *__fastcall CChoreoScene::ParseChannel(CChoreoScene *const this, CChoreoActor *actor)
{
  CChoreoChannel *v4; // r12
  const char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  ISceneTokenProcessor *m_pTokenizer; // rdi
  bool v12; // zf
  int (**vptr_ISceneTokenProcessor)(...); // rax
  const char *v14; // rax
  int v15; // eax
  int (*v16)(...); // r14
  const char *v17; // rax

  v4 = CChoreoScene::AllocChannel(this);
  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 0);
  v5 = this->m_pTokenizer->CurrentToken();
  CChoreoChannel::SetName(v4, v5);
  (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
  v6 = this->m_pTokenizer->CurrentToken();
  if ( V_stricmp_fast(v6, "{") != 0 )
    (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 3))(this->m_pTokenizer, "expecting {");
  while ( 1 )
  {
    (*(this->m_pTokenizer->_vptr_ISceneTokenProcessor + 1))(this->m_pTokenizer, 1);
    v7 = this->m_pTokenizer->CurrentToken();
    if ( V_stricmp_fast(v7, "}") == 0 )
      break;
    v8 = this->m_pTokenizer->CurrentToken();
    if ( V_stricmp_fast(v8, "event") != 0 )
    {
      v9 = this->m_pTokenizer->CurrentToken();
      v10 = V_stricmp_fast(v9, "active");
      m_pTokenizer = this->m_pTokenizer;
      v12 = v10 == 0;
      vptr_ISceneTokenProcessor = m_pTokenizer->_vptr_ISceneTokenProcessor;
      if ( v12 )
      {
        vptr_ISceneTokenProcessor[1](m_pTokenizer, 1);
        v14 = this->m_pTokenizer->CurrentToken();
        v15 = strtol(v14, 0, 10);
        CChoreoChannel::SetActive(v4, v15 != 0);
      }
      else
      {
        v16 = vptr_ISceneTokenProcessor[3];
        v17 = (*vptr_ISceneTokenProcessor)();
        (v16)(this->m_pTokenizer, "expecting event got %s\n", v17);
      }
    }
    else
    {
      CChoreoScene::ParseEvent(this, actor, v4);
    }
  }
  if ( actor != 0 )
  {
    CChoreoActor::AddChannel(actor, v4);
    CChoreoChannel::SetActor(v4, actor);
  }
  return v4;
}


// CChoreoScene::ParseFromBuffer  (line 1287, @0x0000000003088ad0, libserver.so)  // inlines: FindStopTime, ParseSceneRamp, String, V_strlen
// calls: CUtlString::operator=, CChoreoScene::ParseEvent, strlen, V_stricmp_fast, CChoreoScene::ParseActor, CChoreoScene::ParseMapname, CChoreoScene::ParseFPS, CUtlString::Get, CChoreoScene::ReconcileTags, CChoreoScene::ReconcileGestureTimes, CChoreoScene::ReconcileCloseCaption, CChoreoScene::InternalDetermineEventTypes (17 total)
// callers: CSceneEntity::ScriptLoadSceneFromString, CChoreoScene::RestoreFromTextBuffer
// strings: "fps", "%s: unexpected token %s\n", "ignorePhonemes", "scene_ramp", "scalesettings"
// globals: CChoreoScene::s_bEditingDisabled
bool __fastcall CChoreoScene::ParseFromBuffer(
        CChoreoScene *const this,
        const char *pFilename,
        ISceneTokenProcessor *tokenizer)
{
  CUtlString *p_m_sFileName; // r12
  ISceneTokenProcessor *i; // rdi
  const char *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  ISceneTokenProcessor *m_pTokenizer; // rdi
  void (*v13)(ISceneTokenProcessor *, const char *, ...); // r14
  const char *v14; // r13
  const char *v15; // rax
  float m_flPrecomputedStopTime; // xmm0_4
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  p_m_sFileName = &this->m_sFileName;
  CUtlString::operator=(&this->m_sFileName, pFilename);
  this->m_pTokenizer = tokenizer;
  for ( i = tokenizer; (*(i->_vptr_ISceneTokenProcessor + 1))(i, 1) != 0; i = this->m_pTokenizer )
  {
    v7 = this->m_pTokenizer->CurrentToken();
    if ( v7 == 0 || strlen(v7) <= 0 )
      break;
    v8 = this->m_pTokenizer->CurrentToken();
    if ( V_stricmp_fast(v8, "event") != 0 )
    {
      v9 = this->m_pTokenizer->CurrentToken();
      if ( V_stricmp_fast(v9, "actor") != 0 )
      {
        v10 = this->m_pTokenizer->CurrentToken();
        if ( V_stricmp_fast(v10, "mapname") != 0 )
        {
          v11 = this->m_pTokenizer->CurrentToken();
          if ( V_stricmp_fast(v11, "fps") != 0 )
          {
            v18 = this->m_pTokenizer->CurrentToken();
            if ( V_stricmp_fast(v18, "snap") != 0 )
            {
              v19 = this->m_pTokenizer->CurrentToken();
              if ( V_stricmp_fast(v19, "ignorePhonemes") != 0 )
              {
                v20 = this->m_pTokenizer->CurrentToken();
                if ( V_stricmp_fast(v20, "scene_ramp") != 0 )
                {
                  v21 = this->m_pTokenizer->CurrentToken();
                  if ( V_stricmp_fast(v21, "scalesettings") != 0 )
                  {
                    m_pTokenizer = this->m_pTokenizer;
                    v13 = *(m_pTokenizer->_vptr_ISceneTokenProcessor + 3);
                    v14 = m_pTokenizer->CurrentToken();
                    v15 = CUtlString::Get(p_m_sFileName);
                    v13(this->m_pTokenizer, "%s: unexpected token %s\n", v15, v14);
                    break;
                  }
                  CChoreoScene::ParseScaleSettings(this, this->m_pTokenizer);
                }
                else
                {
                  CCurveData::Parse(&this->m_SceneRamp, this->m_pTokenizer, this);
                }
              }
              else
              {
                CChoreoScene::ParseIgnorePhonemes(this);
              }
            }
            else
            {
              CChoreoScene::ParseSnap(this);
            }
          }
          else
          {
            CChoreoScene::ParseFPS(this);
          }
        }
        else
        {
          CChoreoScene::ParseMapname(this);
        }
      }
      else
      {
        CChoreoScene::ParseActor(this);
      }
    }
    else
    {
      CChoreoScene::ParseEvent(this, 0, 0);
    }
  }
  CChoreoScene::ReconcileTags(this);
  CChoreoScene::ReconcileGestureTimes(this);
  CChoreoScene::ReconcileCloseCaption(this);
  CChoreoScene::InternalDetermineEventTypes(this);
  if ( CChoreoScene::s_bEditingDisabled )
  {
    m_flPrecomputedStopTime = this->m_flPrecomputedStopTime;
    if ( m_flPrecomputedStopTime == 0.0 )
      m_flPrecomputedStopTime = CChoreoScene::FindStopTime(this);
    this->m_flPrecomputedStopTime = m_flPrecomputedStopTime;
  }
  return 1;
}


// CChoreoScene::RemoveEventsExceptTypes  (line 1358, @0x0000000003084970, libserver.so)
// calls: CChoreoActor::GetNumChannels, CChoreoActor::GetChannel, CChoreoChannel::GetNumEvents, CChoreoChannel::GetEvent, CChoreoEvent::GetType, CChoreoEvent::GetActor, CChoreoScene::DeleteReferencedObjects, CChoreoChannel::RemoveEvent
void __fastcall CChoreoScene::RemoveEventsExceptTypes(CChoreoScene *const this, int *typeList, int count)
{
  int *v3; // r12
  CChoreoChannel *Channel; // rax
  CChoreoChannel *v5; // r14
  int v6; // r13d
  CChoreoEvent *Event; // rbx
  int *v8; // r15
  int v9; // edx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  CChoreoEvent *v12; // r12
  int *v13; // r14
  __int64 v14; // [rsp+0h] [rbp-60h]
  int i; // [rsp+Ch] [rbp-54h]
  CChoreoActor *a; // [rsp+10h] [rbp-50h]
  int j; // [rsp+28h] [rbp-38h]

  if ( this->m_Actors.m_Size > 0 )
  {
    v14 = 0;
    i = 0;
    v3 = &typeList[count - 1 + 1];
    while ( 1 )
    {
      a = this->m_Actors.m_Memory.m_pMemory[v14];
      if ( a != 0 )
      {
        j = 0;
        if ( CChoreoActor::GetNumChannels(a) > 0 )
          break;
      }
LABEL_14:
      ++i;
      ++v14;
      if ( this->m_Actors.m_Size <= i )
        goto LABEL_15;
    }
    while ( 1 )
    {
      Channel = CChoreoActor::GetChannel(a, j);
      v5 = Channel;
      if ( Channel != 0 )
      {
        v6 = CChoreoChannel::GetNumEvents(Channel) - 1;
        if ( v6 >= 0 )
          break;
      }
LABEL_13:
      if ( ++j >= CChoreoActor::GetNumChannels(a) )
        goto LABEL_14;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        Event = CChoreoChannel::GetEvent(v5, v6);
        if ( Event != 0 )
          break;
LABEL_12:
        if ( --v6 == -1 )
          goto LABEL_13;
      }
      if ( count > 0 )
      {
        v8 = typeList;
        while ( CChoreoEvent::GetType(Event) != *v8 )
        {
          if ( ++v8 == v3 )
            goto LABEL_25;
        }
        goto LABEL_12;
      }
LABEL_25:
      --v6;
      CChoreoChannel::RemoveEvent(v5, Event);
      CChoreoScene::DeleteReferencedObjects(this, Event);
      if ( v6 == -1 )
        goto LABEL_13;
    }
  }
LABEL_15:
  v9 = this->m_Events.m_Size - 1;
  if ( v9 >= 0 )
  {
    v10 = 8LL * v9;
    v11 = 8 * (v9 - v9) - 8;
    do
    {
      while ( 1 )
      {
        v12 = this->m_Events.m_Memory.m_pMemory[v10 / 8];
        if ( CChoreoEvent::GetActor(v12) == 0 )
          break;
LABEL_17:
        v10 -= 8LL;
        if ( v10 == v11 )
          return;
      }
      if ( count > 0 )
      {
        v13 = typeList;
        while ( CChoreoEvent::GetType(v12) != *v13 )
        {
          if ( ++v13 == &typeList[count - 1 + 1] )
            goto LABEL_23;
        }
        goto LABEL_17;
      }
LABEL_23:
      v10 -= 8LL;
      CChoreoScene::DeleteReferencedObjects(this, v12);
    }
    while ( v10 != v11 );
  }
}


// CChoreoScene::InternalDetermineEventTypes  (line 1425, @0x0000000003080c10, libserver.so)  // inlines: ClearAll, Set, memset
// calls: CChoreoActor::GetNumChannels, CChoreoActor::GetChannel, CChoreoChannel::GetEvent, CChoreoEvent::GetType, CChoreoChannel::GetNumEvents
// callers: CChoreoScene::RestoreFromBinaryBuffer, CChoreoScene::ParseFromBuffer
void __fastcall CChoreoScene::InternalDetermineEventTypes(CChoreoScene *const this)
{
  CBitVec<19> *p_m_bitvecHasEventOfType; // r13
  int j; // r15d
  CChoreoChannel *Channel; // r12
  int k; // ebx
  CChoreoEvent *Event; // rax
  EventNameMap_t::EVENTTYPE Type; // eax
  int v7; // eax
  __int64 i; // [rsp+10h] [rbp-40h]
  CChoreoActor *a; // [rsp+18h] [rbp-38h]

  p_m_bitvecHasEventOfType = &this->m_bitvecHasEventOfType;
  this->m_bitvecHasEventOfType.m_Ints[0] = 0;
  i = 0;
  if ( this->m_Actors.m_Size > 0 )
  {
    do
    {
      a = this->m_Actors.m_Memory.m_pMemory[i];
      if ( a != 0 )
      {
        for ( j = 0; j < CChoreoActor::GetNumChannels(a); ++j )
        {
          Channel = CChoreoActor::GetChannel(a, j);
          if ( Channel != 0 )
          {
            for ( k = 0; k < CChoreoChannel::GetNumEvents(Channel); ++k )
            {
              Event = CChoreoChannel::GetEvent(Channel, k);
              if ( Event != 0 )
              {
                Type = CChoreoEvent::GetType(Event);
                p_m_bitvecHasEventOfType[Type >> 5].m_Ints[0] |= 1 << Type;
              }
            }
          }
        }
      }
      v7 = i++;
    }
    while ( v7 + 1 < this->m_Actors.m_Size );
  }
}


// CChoreoScene::FindStopTime  (line 1457, @0x0000000003080090, libserver.so)
// calls: CChoreoEvent::GetEndTime, CChoreoEvent::HasEndTime, CChoreoEvent::GetStartTime
// callers: CChoreoScene::GetDuration, CChoreoScene::FindStopTime, CChoreoScene::GetEndTime, CChoreoScene::RestoreFromBinaryBuffer, CChoreoScene::ParseFromBuffer
float __fastcall CChoreoScene::FindStopTime(const CChoreoScene *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  float EndTime; // xmm0_4
  const CChoreoEvent *v6; // r12
  float lasttime; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_Events.m_Size;
  if ( m_Size <= 0 )
    return 0.0;
  v3 = 0;
  v4 = 8LL * (m_Size - 1) + 8;
  lasttime = 0.0;
  do
  {
    v6 = this->m_Events.m_Memory.m_pMemory[v3 / 8];
    if ( CChoreoEvent::HasEndTime(v6) )
      EndTime = CChoreoEvent::GetEndTime(v6);
    else
      EndTime = CChoreoEvent::GetStartTime(v6);
    v3 += 8LL;
    lasttime = fmaxf(EndTime, lasttime);
  }
  while ( v3 != v4 );
  return lasttime;
}


// CChoreoScene::FindStopTime  (line 1457, @0x0000000003080d20, libserver.so)
// calls: CChoreoScene::FindStopTime
// callers: CSceneEntity::EstimateLength, CSceneCache::Rebuild
float __fastcall CChoreoScene::FindStopTime(const CChoreoScene *const this)
{
  float result; // xmm0_4

  result = this->m_flPrecomputedStopTime;
  if ( result == 0.0 )
    return CChoreoScene::FindStopTime(this);
  return result;
}


// CChoreoScene::FindLastSpeakTime  (line 1483, @0x0000000003080d50, libserver.so)
// calls: CChoreoEvent::GetType, CChoreoEvent::HasEndTime, CChoreoEvent::GetEndTime, CChoreoEvent::GetStartTime
float __fastcall CChoreoScene::FindLastSpeakTime(const CChoreoScene *const this)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  const CChoreoEvent *v5; // rbx

  v2 = this->m_Events.m_Size - 1;
  if ( v2 < 0 )
    return 0.0;
  v3 = 8LL * v2;
  v4 = 8 * (v2 - v2) - 8;
  while ( CChoreoEvent::GetType(this->m_Events.m_Memory.m_pMemory[v3 / 8]) != SPEAK )
  {
    v3 -= 8LL;
    if ( v3 == v4 )
      return 0.0;
  }
  v5 = this->m_Events.m_Memory.m_pMemory[v3 / 8];
  if ( CChoreoEvent::HasEndTime(v5) )
    return CChoreoEvent::GetEndTime(v5);
  else
    return CChoreoEvent::GetStartTime(v5);
}


// CChoreoScene::FilePrintf  (line 1530, @0x0000000003080e00, libserver.so)
// calls: CUtlBuffer::Printf, CUtlBuffer::VaPrintf
// callers: CChoreoScene::FileSaveHeader, CChoreoScene::FileSaveScaleSettings, CChoreoScene::FileSaveFlexAnimationTrack, CChoreoScene::FileSaveFlexAnimations, CChoreoScene::FileSaveEvent, CChoreoScene::FileSaveChannel, CChoreoScene::FileSaveActor, CChoreoScene::ExportMarkedToBuffer, CChoreoScene::ExportEvents, CChoreoScene::SaveToFile, CCurveData::SaveSamples, CCurveData::FileSave
void CChoreoScene::FilePrintf(const CChoreoScene *const this, CUtlBuffer *const buf, int level, const char *fmt, ...)
{
  int v6; // ebx
  va_list argptr; // [rsp+8h] [rbp-E8h] BYREF

  va_start(argptr, fmt);
  v6 = level - 1;
  if ( level > 0 )
  {
    do
    {
      --v6;
      CUtlBuffer::Printf(buf, "  ");
    }
    while ( v6 != -1 );
  }
  CUtlBuffer::VaPrintf(buf, fmt, argptr);
}


// CChoreoScene::FileSaveHeader  (line 1548, @0x0000000003080ed0, libserver.so)
// calls: CChoreoScene::FilePrintf
// strings: "// Choreo version 1\n"
void __fastcall CChoreoScene::FileSaveHeader(const CChoreoScene *const this, CUtlBuffer *const buf)
{
  CChoreoScene::FilePrintf(this, buf, 0, "// Choreo version 1\n");
}


// CChoreoScene::MarkForSaveAll  (line 1557, @0x0000000003080ef0, libserver.so)  // inlines: SetMarkedForSave
// calls: CChoreoEvent::GetActor, CChoreoActor::MarkForSaveAll
// callers: CChoreoScene::SaveToFile
void __fastcall CChoreoScene::MarkForSaveAll(CChoreoScene *const this, bool mark)
{
  char v3; // r15
  __int64 i; // r12
  CChoreoEvent *v6; // r13
  __int64 j; // r12
  CChoreoActor *v8; // rdi

  v3 = mark << 6;
  for ( i = 0; i < this->m_Events.m_Size; ++i )
  {
    while ( 1 )
    {
      v6 = this->m_Events.m_Memory.m_pMemory[i];
      if ( CChoreoEvent::GetActor(v6) == 0 )
        break;
      if ( ++i >= this->m_Events.m_Size )
        goto LABEL_6;
    }
    *(v6 + 440) = v3 | *(v6 + 440) & 0xBF;
  }
LABEL_6:
  for ( j = 0; this->m_Actors.m_Size > j; ++j )
  {
    v8 = this->m_Actors.m_Memory.m_pMemory[j];
    if ( v8 != 0 )
      CChoreoActor::MarkForSaveAll(v8, mark);
  }
}


// CChoreoScene::ExportMarkedToBuffer  (line 1580, @0x0000000003082380, libserver.so)  // inlines: FileSaveEvent, FileSaveHeader
// calls: CChoreoScene::FilePrintf, CChoreoEvent::GetActor, CChoreoScene::FileSaveEvent, CChoreoScene::FileSaveActor
// callers: CChoreoScene::ExportMarkedToFile, CChoreoScene::SaveToFile
// strings: "// Choreo version 1\n"
void __fastcall CChoreoScene::ExportMarkedToBuffer(const CChoreoScene *const this, CUtlBuffer *const buf)
{
  __int64 v3; // r12
  CChoreoEvent *v5; // r14
  __int64 i; // r12
  const CChoreoActor *v7; // rcx

  v3 = 0;
  CChoreoScene::FilePrintf(this, buf, 0, "// Choreo version 1\n");
  if ( this->m_Events.m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v5 = this->m_Events.m_Memory.m_pMemory[v3];
        if ( CChoreoEvent::GetActor(v5) == 0 && (*(v5 + 440) & 0x40) != 0 )
          break;
        if ( ++v3 >= this->m_Events.m_Size )
          goto LABEL_7;
      }
      CChoreoScene::FileSaveEvent(this, buf, 0, v5);
      ++v3;
    }
    while ( v3 < this->m_Events.m_Size );
  }
LABEL_7:
  for ( i = 0; this->m_Actors.m_Size > i; ++i )
  {
    v7 = this->m_Actors.m_Memory.m_pMemory[i];
    if ( v7 != 0 )
      CChoreoScene::FileSaveActor(this, buf, 0, v7);
  }
}


// CChoreoScene::ExportMarkedToFile  (line 1610, @0x00000000030838d0, libserver.so)  // inlines: ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CChoreoScene::ExportMarkedToBuffer, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// strings: "wt"
bool __fastcall CChoreoScene::ExportMarkedToFile(const CChoreoScene *const this, const char *filename)
{
  __int64 v4; // rax
  __int64 v5; // r12
  bool v6; // r12
  CUtlBuffer buf; // [rsp+0h] [rbp-70h] BYREF

  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 1);
  CChoreoScene::ExportMarkedToBuffer(this, &buf);
  v4 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(&g_pFullFileSystem->IBaseFileSystem, filename, "wt", 0);
  v5 = v4;
  if ( v4 != 0 )
  {
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(
      &g_pFullFileSystem->IBaseFileSystem,
      buf.m_Memory.m_pMemory,
      buf.m_Put,
      v4);
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v5);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v6;
}


// CChoreoScene::SaveToFile  (line 1631, @0x0000000003083ad0, libserver.so)  // inlines: FileSaveSceneRamp, Length, String, V_strlen, ~CUtlBuffer, ~CUtlMemory
// calls: CChoreoScene::MarkForSaveAll, CUtlBuffer::CUtlBuffer, CChoreoScene::ExportMarkedToBuffer, strlen, CUtlString::Get, CChoreoScene::FilePrintf, CCurveData::FileSave, CChoreoScene::FileSaveScaleSettings, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// strings: "mapname \"%s\"\n", "scene_ramp", "fps %i\n", "snap %s\n", "ignorePhonemes %s\n", "wt"
bool __fastcall CChoreoScene::SaveToFile(CChoreoScene *const this, const char *filename)
{
  char *m_pString; // rdi
  const char *v5; // rax
  char *v6; // r8
  char *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  bool v10; // bl
  CUtlBuffer buf; // [rsp+0h] [rbp-70h] BYREF

  CChoreoScene::MarkForSaveAll(this, 1);
  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 1);
  CChoreoScene::ExportMarkedToBuffer(this, &buf);
  m_pString = this->m_sMapname.m_pString;
  if ( m_pString != 0 && strlen(m_pString) > 0 )
  {
    v5 = CUtlString::Get(&this->m_sMapname);
    CChoreoScene::FilePrintf(this, &buf, 0, "mapname \"%s\"\n", v5);
  }
  CCurveData::FileSave(&this->m_SceneRamp, &buf, 0, "scene_ramp", this);
  CChoreoScene::FileSaveScaleSettings(this, &buf, 0, this);
  CChoreoScene::FilePrintf(this, &buf, 0, "fps %i\n", this->m_nSceneFPS);
  v6 = "off";
  if ( (*(this + 356) & 8) != 0 )
    v6 = "on";
  CChoreoScene::FilePrintf(this, &buf, 0, "snap %s\n", v6);
  v7 = "off";
  if ( (*(this + 356) & 2) != 0 )
    v7 = "on";
  CChoreoScene::FilePrintf(this, &buf, 0, "ignorePhonemes %s\n", v7);
  v8 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(&g_pFullFileSystem->IBaseFileSystem, filename, "wt", 0);
  v9 = v8;
  if ( v8 != 0 )
  {
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(
      &g_pFullFileSystem->IBaseFileSystem,
      buf.m_Memory.m_pMemory,
      buf.m_Put,
      v8);
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v9);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v10;
}


// CChoreoScene::FileSaveRamp  (line 1668, @0x0000000003080fc0, libserver.so)
// calls: CCurveData::FileSave
// strings: "event_ramp"
void __fastcall CChoreoScene::FileSaveRamp(
        const CChoreoScene *const this,
        CUtlBuffer *const buf,
        int level,
        const CChoreoEvent *e)
{
  CCurveData::FileSave(&e->m_Ramp, buf, level, "event_ramp", this);
}


// CChoreoScene::FileSaveSceneRamp  (line 1679, @0x0000000003080fe0, libserver.so)
// calls: CCurveData::FileSave
// strings: "scene_ramp"
void __fastcall CChoreoScene::FileSaveSceneRamp(const CChoreoScene *const this, CUtlBuffer *const buf, int level)
{
  CCurveData::FileSave(&this->m_SceneRamp, buf, level, "scene_ramp", this);
}


// CChoreoScene::FileSaveScaleSettings  (line 1687, @0x0000000003081000, libserver.so)  // inlines: Element, operator[]
// calls: CChoreoScene::FilePrintf
// callers: CChoreoScene::SaveToFile
// strings: "scalesettings\n"
void __fastcall CChoreoScene::FileSaveScaleSettings(
        const CChoreoScene *const this,
        CUtlBuffer *const buf,
        int level,
        const CChoreoScene *scene)
{
  int m_NumElements; // r14d
  int v9; // eax
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v12; // rax
  int v14; // [rsp+Ch] [rbp-34h]

  m_NumElements = scene->m_TimeZoomLookup.m_Elements.m_Tree.m_NumElements;
  if ( m_NumElements > 0 )
  {
    CChoreoScene::FilePrintf(this, buf, level, "scalesettings\n");
    CChoreoScene::FilePrintf(this, buf, level, "{\n");
    v9 = level + 1;
    v10 = 32 * ((m_NumElements - 1) + 1LL);
    v11 = 0;
    v14 = v9;
    do
    {
      v12 = &scene->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v11 / 0x20];
      v11 += 32LL;
      CChoreoScene::FilePrintf(this, buf, v14, "\"%s\" \"%i\"\n", v12->m_Data.key, v12->m_Data.elem);
    }
    while ( v11 != v10 );
    CChoreoScene::FilePrintf(this, buf, level, "}\n");
  }
}


// CChoreoScene::FileSaveFlexAnimationTrack  (line 1716, @0x00000000030810e0, libserver.so)  // inlines: String, V_strncat<long unsigned int>, ~CUtlString
// calls: CFlexAnimationTrack::GetRamp, CFlexAnimationTrack::IsTrackActive, CFlexAnimationTrack::GetFlexControllerName, V_snprintf, CFlexAnimationTrack::IsComboType, CFlexAnimationTrack::GetMin, CFlexAnimationTrack::GetMax, _V_strncat, CFlexAnimationTrack::IsEdgeActive, CFlexAnimationTrack::GetEdgeZeroValue, CFlexAnimationTrack::GetEdgeCurveType, Interpolator_NameForCurveType (19 total)
// callers: CChoreoScene::FileSaveFlexAnimations
// strings: "\"%s\" ", "range %.1f %.1f ", "leftedge %s %.3f ", "rightedge %s %.3f ", "disabled ", "combo "
void __fastcall CChoreoScene::FileSaveFlexAnimationTrack(
        const CChoreoScene *const this,
        CUtlBuffer *const buf,
        int level,
        const CFlexAnimationTrack *track,
        int nDefaultCurveType)
{
  const char *FlexControllerName; // rax
  float Min; // xmm0_4
  __int16 EdgeCurveType; // ax
  const char *v12; // rax
  __int16 v13; // ax
  const char *v14; // rax
  int v15; // r14d
  int v16; // r15d
  const CCurveData *Ramp; // rbx
  double EdgeZeroValue; // [rsp+0h] [rbp-770h]
  double v19; // [rsp+0h] [rbp-770h]
  float Max; // [rsp+10h] [rbp-760h]
  int v21; // [rsp+10h] [rbp-760h]
  const CCurveData_0 *pCurveData; // [rsp+18h] [rbp-758h]
  CUtlString v23[2]; // [rsp+20h] [rbp-750h] BYREF
  char sz[256]; // [rsp+30h] [rbp-740h] BYREF
  char edgestr[512]; // [rsp+130h] [rbp-640h] BYREF
  char line[1032]; // [rsp+330h] [rbp-440h] BYREF
  unsigned __int64 v27; // [rsp+738h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( track != 0 )
  {
    pCurveData = CFlexAnimationTrack::GetRamp(track, FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY);
    if ( CFlexAnimationTrack::IsTrackActive(track) || CCurveData::Count(pCurveData) > 0 )
    {
      FlexControllerName = CFlexAnimationTrack::GetFlexControllerName(track);
      V_snprintf(line, 1024, "\"%s\" ", FlexControllerName);
      if ( !CFlexAnimationTrack::IsTrackActive(track) )
      {
        V_snprintf(edgestr, 256, "disabled ");
        _V_strncat(line, edgestr, 1024, 0xFFFFFFFFLL);
      }
      if ( CFlexAnimationTrack::IsComboType(track) )
      {
        V_snprintf(edgestr, 256, "combo ");
        _V_strncat(line, edgestr, 1024, 0xFFFFFFFFLL);
      }
      if ( CFlexAnimationTrack::GetMin(track) != 0.0 || CFlexAnimationTrack::GetMax(track) != 1.0 )
      {
        Max = CFlexAnimationTrack::GetMax(track);
        Min = CFlexAnimationTrack::GetMin(track);
        V_snprintf(edgestr, 256, "range %.1f %.1f ", Min, Max);
        _V_strncat(line, edgestr, 1024, 0xFFFFFFFFLL);
      }
      if ( CFlexAnimationTrack::IsEdgeActive(track, 1) || CFlexAnimationTrack::IsEdgeActive(track, 0) )
      {
        edgestr[0] = 0;
        if ( CFlexAnimationTrack::IsEdgeActive(track, 1) )
        {
          EdgeZeroValue = CFlexAnimationTrack::GetEdgeZeroValue(track, 1);
          EdgeCurveType = CFlexAnimationTrack::GetEdgeCurveType(track, 1);
          Interpolator_NameForCurveType(v23, EdgeCurveType, 0);
          v12 = CUtlString::Get(v23);
          V_snprintf(sz, 256, "leftedge %s %.3f ", v12, EdgeZeroValue);
          if ( v23[0].m_pString != 0 )
            CUtlString::FreeMemoryBlock(v23);
          _V_strncat(edgestr, sz, 512, 0xFFFFFFFFLL);
        }
        if ( CFlexAnimationTrack::IsEdgeActive(track, 0) )
        {
          v19 = CFlexAnimationTrack::GetEdgeZeroValue(track, 0);
          v13 = CFlexAnimationTrack::GetEdgeCurveType(track, 0);
          Interpolator_NameForCurveType(v23, v13, 0);
          v14 = CUtlString::Get(v23);
          V_snprintf(sz, 256, "rightedge %s %.3f ", v14, v19);
          if ( v23[0].m_pString != 0 )
            CUtlString::FreeMemoryBlock(v23);
          _V_strncat(edgestr, sz, 512, 0xFFFFFFFFLL);
        }
        _V_strncat(line, edgestr, 1024, 0xFFFFFFFFLL);
      }
      v15 = level + 2;
      v21 = level + 2;
      CChoreoScene::FilePrintf(this, buf, level + 2, "%s\n", line);
      CChoreoScene::FilePrintf(this, buf, level + 2, "{\n");
      v16 = level + 3;
      CCurveData::SaveSamples(pCurveData, buf, v16, this);
      CChoreoScene::FilePrintf(this, buf, v15, "}\n");
      if ( CFlexAnimationTrack::IsComboType(track) )
      {
        Ramp = CFlexAnimationTrack::GetRamp(track, FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_LEFTRIGHT);
        CChoreoScene::FilePrintf(this, buf, v21, "{\n");
        CCurveData::SaveSamples(Ramp, buf, v16, this);
        CChoreoScene::FilePrintf(this, buf, v21, "}\n");
      }
    }
  }
}


// CChoreoScene::FileSaveFlexAnimations  (line 1794, @0x0000000003081610, libserver.so)  // inlines: String, ~CUtlString
// calls: CChoreoEvent::GetNumFlexAnimationTracks, Interpolator_NameForCurveType, CUtlString::Get, CChoreoScene::FilePrintf, CUtlString::FreeMemoryBlock, CChoreoEvent::GetFlexAnimationTrack, CChoreoScene::FileSaveFlexAnimationTrack, _Unwind_Resume
// callers: CChoreoScene::FileSaveEvent
// strings: "flexanimations samples_use_time defaultcurvetype=%s\n", "flexanimations samples_use_time\n"
void __fastcall CChoreoScene::FileSaveFlexAnimations(
        const CChoreoScene *const this,
        CUtlBuffer *const buf,
        int level,
        const CChoreoEvent *e)
{
  int v8; // r12d
  __int16 v9; // ax
  const char *v10; // rax
  int v11; // r12d
  int v12; // esi
  const CFlexAnimationTrack *FlexAnimationTrack; // r15
  int v14; // eax
  int v15; // [rsp+8h] [rbp-48h]
  CUtlString v17; // [rsp+10h] [rbp-40h] BYREF

  if ( CChoreoEvent::GetNumFlexAnimationTracks(e) > 0 )
  {
    v8 = (*(e->_vptr_CChoreoObjectBase + 6))(e);
    if ( v8 == (*(this->_vptr_ICurveDataAccessor + 2))(this) )
    {
      v15 = level + 1;
      CChoreoScene::FilePrintf(this, buf, level + 1, "flexanimations samples_use_time\n");
    }
    else
    {
      v9 = (*(e->_vptr_CChoreoObjectBase + 6))(e);
      Interpolator_NameForCurveType(&v17, v9, 0);
      v10 = CUtlString::Get(&v17);
      v15 = level + 1;
      CChoreoScene::FilePrintf(this, buf, level + 1, "flexanimations samples_use_time defaultcurvetype=%s\n", v10);
      if ( v17.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v17);
    }
    v11 = 0;
    CChoreoScene::FilePrintf(this, buf, v15, "{\n");
    while ( v11 < CChoreoEvent::GetNumFlexAnimationTracks(e) )
    {
      v12 = v11++;
      FlexAnimationTrack = CChoreoEvent::GetFlexAnimationTrack(e, v12);
      v14 = (*(e->_vptr_CChoreoObjectBase + 6))(e);
      CChoreoScene::FileSaveFlexAnimationTrack(this, buf, level, FlexAnimationTrack, v14);
    }
    CChoreoScene::FilePrintf(this, buf, v15, "}\n");
  }
}


// CChoreoScene::FileSaveEvent  (line 1826, @0x0000000003081780, libserver.so)  // inlines: FileSaveRamp, V_strlen
// calls: CChoreoEvent::GetName, CChoreoEvent::GetType, CChoreoEvent::NameForType, CChoreoScene::FilePrintf, CChoreoEvent::GetStartTime, CChoreoEvent::GetEndTime, CChoreoEvent::GetParameters, CChoreoEvent::GetParameters2, strlen, CChoreoEvent::GetParameters3, CCurveData::Count, CCurveData::FileSave (52 total)
// callers: CChoreoScene::FileSaveEvent, CChoreoScene::FileSaveChannel, CChoreoScene::ExportMarkedToBuffer, CChoreoScene::ExportEvents
// strings: "event %s \"%s\"\n", "time %f %f\n", "param \"%s\"\n", "param2 \"%s\"\n", "param3 \"%s\"\n", "event_ramp" (33 total)
void __fastcall CChoreoScene::FileSaveEvent(
        const CChoreoScene *const this,
        CUtlBuffer *const buf,
        int level,
        const CChoreoEvent *e)
{
  const char *Name; // r12
  EventNameMap_t::EVENTTYPE Type; // eax
  const char *v10; // rax
  float EndTime; // xmm0_4
  int v12; // r15d
  const char *Parameters; // rax
  const char *Parameters2; // rax
  const char *v15; // rax
  const char *Parameters3; // rax
  const char *v17; // rax
  const Vector *TargetLocation; // rax
  float y; // xmm1_4
  float z; // xmm2_4
  float DistanceToTarget; // xmm0_4
  int v22; // r12d
  int v23; // esi
  const CEventRelativeTag *RelativeTag; // r15
  const char *v25; // rax
  int v26; // r12d
  int v27; // esi
  const CFlexTimingTag *TimingTag; // r15
  const char *v29; // rax
  CChoreoEvent::AbsTagType i; // r15d
  const char *v31; // rax
  int v32; // r12d
  const CEventAbsoluteTag *AbsoluteTag; // rax
  const char *v34; // rax
  int RightDistance; // eax
  int ForwardDistance; // eax
  int Yaw; // eax
  int Pitch; // eax
  const char *RelativeWavName; // r12
  const char *RelativeTagName; // rax
  int LoopCount; // eax
  CCNameMap_t::CLOSECAPTION CloseCaptionType; // eax
  const char *v43; // rax
  const char *CloseCaptionToken; // rax
  float SoundStartDelay; // xmm0_4
  int v47; // [rsp+Ch] [rbp-54h]
  float abstag; // [rsp+10h] [rbp-50h]
  const CEventAbsoluteTag *abstaga; // [rsp+10h] [rbp-50h]
  float st; // [rsp+1Ch] [rbp-44h]
  float sta; // [rsp+1Ch] [rbp-44h]
  bool stb; // [rsp+1Ch] [rbp-44h]
  float stc; // [rsp+1Ch] [rbp-44h]
  float duration[13]; // [rsp+2Ch] [rbp-34h] BYREF

  Name = CChoreoEvent::GetName(e);
  Type = CChoreoEvent::GetType(e);
  v10 = CChoreoEvent::NameForType(Type);
  CChoreoScene::FilePrintf(this, buf, level, "event %s \"%s\"\n", v10, Name);
  CChoreoScene::FilePrintf(this, buf, level, "{\n");
  st = CChoreoEvent::GetStartTime(e);
  EndTime = CChoreoEvent::GetEndTime(e);
  v12 = level + 1;
  v47 = v12;
  CChoreoScene::FilePrintf(this, buf, v12, "time %f %f\n", st, EndTime);
  Parameters = CChoreoEvent::GetParameters(e);
  CChoreoScene::FilePrintf(this, buf, v12, "param \"%s\"\n", Parameters);
  Parameters2 = CChoreoEvent::GetParameters2(e);
  if ( Parameters2 != 0 && strlen(Parameters2) > 0 )
  {
    v15 = CChoreoEvent::GetParameters2(e);
    CChoreoScene::FilePrintf(this, buf, v12, "param2 \"%s\"\n", v15);
  }
  Parameters3 = CChoreoEvent::GetParameters3(e);
  if ( Parameters3 != 0 && strlen(Parameters3) > 0 )
  {
    v17 = CChoreoEvent::GetParameters3(e);
    CChoreoScene::FilePrintf(this, buf, v12, "param3 \"%s\"\n", v17);
  }
  if ( CCurveData::Count(&e->m_Ramp) > 0 )
    CCurveData::FileSave(&e->m_Ramp, buf, v12, "event_ramp", this);
  if ( CChoreoEvent::GetPitch(e) != 0 )
  {
    Pitch = CChoreoEvent::GetPitch(e);
    CChoreoScene::FilePrintf(this, buf, v12, "pitch \"%i\"\n", Pitch);
  }
  if ( CChoreoEvent::GetYaw(e) != 0 )
  {
    Yaw = CChoreoEvent::GetYaw(e);
    CChoreoScene::FilePrintf(this, buf, v12, "yaw \"%i\"\n", Yaw);
  }
  if ( CChoreoEvent::GetForwardDistance(e) != 0 )
  {
    ForwardDistance = CChoreoEvent::GetForwardDistance(e);
    CChoreoScene::FilePrintf(this, buf, v12, "moveforwarddistance \"%i\"\n", ForwardDistance);
  }
  if ( CChoreoEvent::GetRightDistance(e) != 0 )
  {
    RightDistance = CChoreoEvent::GetRightDistance(e);
    CChoreoScene::FilePrintf(this, buf, v12, "moverightdistance \"%i\"\n", RightDistance);
  }
  TargetLocation = CChoreoEvent::GetTargetLocation(e);
  y = TargetLocation->y;
  z = TargetLocation->z;
  if ( TargetLocation->x != 0.0 || y != 0.0 || z != 0.0 )
    CChoreoScene::FilePrintf(this, buf, v12, "targetposition %.2f %.2f %.2f\n", TargetLocation->x, y, z);
  if ( CChoreoEvent::IsResumeCondition(e) )
    CChoreoScene::FilePrintf(this, buf, v12, "resumecondition\n");
  if ( CChoreoEvent::IsLockBodyFacing(e) )
    CChoreoScene::FilePrintf(this, buf, v12, "lockbodyfacing\n");
  if ( CChoreoEvent::GetDistanceToTarget(e) > 0.0 )
  {
    DistanceToTarget = CChoreoEvent::GetDistanceToTarget(e);
    CChoreoScene::FilePrintf(this, buf, v12, "distancetotarget %.2f\n", DistanceToTarget);
  }
  if ( CChoreoEvent::GetForceShortMovement(e) )
    CChoreoScene::FilePrintf(this, buf, v12, "forceshortmovement\n");
  if ( CChoreoEvent::GetSyncToFollowingGesture(e) )
    CChoreoScene::FilePrintf(this, buf, v12, "synctofollowinggesture\n");
  if ( !CChoreoEvent::GetActive(e) )
    CChoreoScene::FilePrintf(this, buf, v12, "active 0\n");
  if ( CChoreoEvent::GetPlayOverScript(e) )
    CChoreoScene::FilePrintf(this, buf, v12, "playoverscript\n");
  if ( CChoreoEvent::IsFixedLength(e) )
    CChoreoScene::FilePrintf(this, buf, v12, "fixedlength\n");
  if ( CChoreoEvent::GetNumRelativeTags(e) > 0 )
  {
    v22 = 0;
    CChoreoScene::FilePrintf(this, buf, v12, "tags\n");
    CChoreoScene::FilePrintf(this, buf, v12, "{\n");
    while ( v22 < CChoreoEvent::GetNumRelativeTags(e) )
    {
      v23 = v22++;
      RelativeTag = CChoreoEvent::GetRelativeTag(e, v23);
      sta = CEventRelativeTag::GetPercentage(RelativeTag);
      v25 = CEventRelativeTag::GetName(RelativeTag);
      CChoreoScene::FilePrintf(this, buf, level + 2, "\"%s\" %f\n", v25, sta);
    }
    CChoreoScene::FilePrintf(this, buf, v47, "}\n");
  }
  if ( CChoreoEvent::GetNumTimingTags(e) > 0 )
  {
    v26 = 0;
    CChoreoScene::FilePrintf(this, buf, v47, "flextimingtags\n");
    CChoreoScene::FilePrintf(this, buf, v47, "{\n");
    while ( v26 < CChoreoEvent::GetNumTimingTags(e) )
    {
      v27 = v26++;
      TimingTag = CChoreoEvent::GetTimingTag(e, v27);
      stb = CFlexTimingTag::GetLocked(TimingTag);
      abstag = CEventRelativeTag::GetPercentage(TimingTag);
      v29 = CEventRelativeTag::GetName(TimingTag);
      CChoreoScene::FilePrintf(this, buf, level + 2, "\"%s\" %f %i\n", v29, abstag, stb);
    }
    CChoreoScene::FilePrintf(this, buf, v47, "}\n");
  }
  for ( i = PLAYBACK; i != NUM_ABS_TAG_TYPES; ++i )
  {
    if ( CChoreoEvent::GetNumAbsoluteTags(e, i) > 0 )
    {
      v31 = CChoreoEvent::NameForAbsoluteTagType(i);
      CChoreoScene::FilePrintf(this, buf, v47, "absolutetags %s\n", v31);
      CChoreoScene::FilePrintf(this, buf, v47, "{\n");
      v32 = 0;
      while ( v32 < CChoreoEvent::GetNumAbsoluteTags(e, i) )
      {
        AbsoluteTag = CChoreoEvent::GetAbsoluteTag(e, i, v32++);
        abstaga = AbsoluteTag;
        stc = CEventAbsoluteTag::GetPercentage(AbsoluteTag);
        v34 = CEventAbsoluteTag::GetName(abstaga);
        CChoreoScene::FilePrintf(this, buf, level + 2, "\"%s\" %f\n", v34, stc);
      }
      CChoreoScene::FilePrintf(this, buf, v47, "}\n");
    }
  }
  if ( CChoreoEvent::GetType(e) == GESTURE && CChoreoEvent::GetGestureSequenceDuration(e, duration) )
    CChoreoScene::FilePrintf(this, buf, v47, "sequenceduration %f\n", duration[0]);
  if ( CChoreoEvent::IsUsingRelativeTag(e) )
  {
    RelativeWavName = CChoreoEvent::GetRelativeWavName(e);
    RelativeTagName = CChoreoEvent::GetRelativeTagName(e);
    CChoreoScene::FilePrintf(this, buf, v47, "relativetag \"%s\" \"%s\"\n", RelativeTagName, RelativeWavName);
  }
  if ( CChoreoEvent::GetNumFlexAnimationTracks(e) > 0 )
    CChoreoScene::FileSaveFlexAnimations(this, buf, level, e);
  if ( CChoreoEvent::GetType(e) == LOOP )
  {
    LoopCount = CChoreoEvent::GetLoopCount(e);
    CChoreoScene::FilePrintf(this, buf, v47, "loopcount \"%i\"\n", LoopCount);
    if ( CChoreoEvent::GetType(e) != SPEAK )
      goto LABEL_59;
  }
  else if ( CChoreoEvent::GetType(e) != SPEAK )
  {
    goto LABEL_59;
  }
  CloseCaptionType = CChoreoEvent::GetCloseCaptionType(e);
  v43 = CChoreoEvent::NameForCCType(CloseCaptionType);
  CChoreoScene::FilePrintf(this, buf, v47, "cctype \"%s\"\n", v43);
  CloseCaptionToken = CChoreoEvent::GetCloseCaptionToken(e);
  CChoreoScene::FilePrintf(this, buf, v47, "cctoken \"%s\"\n", CloseCaptionToken);
  if ( CChoreoEvent::GetCloseCaptionType(e) != CC_DISABLED && CChoreoEvent::IsUsingCombinedFile(e) )
    CChoreoScene::FilePrintf(this, buf, v47, "cc_usingcombinedfile\n");
  if ( CChoreoEvent::IsCombinedUsingGenderToken(e) )
    CChoreoScene::FilePrintf(this, buf, v47, "cc_combinedusesgender\n");
  if ( CChoreoEvent::IsSuppressingCaptionAttenuation(e) )
    CChoreoScene::FilePrintf(this, buf, v47, "cc_noattenuate\n");
  if ( CChoreoEvent::ShouldHardStopSpeakEvent(e) )
    CChoreoScene::FilePrintf(this, buf, v47, "hardstopspeakevent\n");
  if ( CChoreoEvent::GetSoundStartDelay(e) != 0.0 )
  {
    SoundStartDelay = CChoreoEvent::GetSoundStartDelay(e);
    CChoreoScene::FilePrintf(this, buf, v47, "startdelay %f\n", SoundStartDelay);
  }
LABEL_59:
  CChoreoScene::FilePrintf(this, buf, level, "}\n");
}


// CChoreoScene::FileSaveEvent  (line 1826, @0x0000000003082110, libserver.so)
// calls: CChoreoScene::FileSaveEvent
void __fastcall CChoreoScene::FileSaveEvent(
        const CChoreoScene *const this,
        CUtlBuffer *const buf,
        int level,
        const CChoreoEvent *e)
{
  if ( (*(e + 440) & 0x40) != 0 )
    CChoreoScene::FileSaveEvent(this, buf, level, e);
}


// CChoreoScene::FileSaveChannel  (line 2010, @0x0000000003082130, libserver.so)  // inlines: FileSaveEvent
// calls: CChoreoChannel::GetName, CChoreoScene::FilePrintf, CChoreoChannel::GetNumEvents, CChoreoChannel::GetEvent, CChoreoScene::FileSaveEvent, CChoreoChannel::GetActive
// callers: CChoreoScene::FileSaveActor
// strings: "channel \"%s\"\n", "active \"0\"\n"
void __fastcall CChoreoScene::FileSaveChannel(
        const CChoreoScene *const this,
        CUtlBuffer *const buf,
        int level,
        const CChoreoChannel_0 *c)
{
  int v8; // ebx
  const char *Name; // rax
  const CChoreoEvent *Event; // rax

  if ( c->m_bMarkedForSave )
  {
    v8 = 0;
    Name = CChoreoChannel::GetName(c);
    CChoreoScene::FilePrintf(this, buf, level, "channel \"%s\"\n", Name);
    CChoreoScene::FilePrintf(this, buf, level, "{\n");
    while ( v8 < CChoreoChannel::GetNumEvents(c) )
    {
      Event = CChoreoChannel::GetEvent(c, v8);
      if ( Event != 0 && (*(Event + 440) & 0x40) != 0 )
        CChoreoScene::FileSaveEvent(this, buf, level + 1, Event);
      ++v8;
    }
    if ( !CChoreoChannel::GetActive(c) )
      CChoreoScene::FilePrintf(this, buf, level + 1, "active \"0\"\n");
    CChoreoScene::FilePrintf(this, buf, level, "}\n");
  }
}


// CChoreoScene::FileSaveActor  (line 2042, @0x0000000003082240, libserver.so)  // inlines: V_strlen
// calls: CChoreoActor::GetName, CChoreoScene::FilePrintf, CChoreoActor::GetChannel, CChoreoScene::FileSaveChannel, CChoreoActor::GetNumChannels, CChoreoActor::GetFacePoserModelName, strlen, CChoreoActor::GetActive
// callers: CChoreoScene::ExportMarkedToBuffer
// strings: "actor \"%s\"\n", "faceposermodel \"%s\"\n", "}\n\n", "active \"0\"\n"
void __fastcall CChoreoScene::FileSaveActor(
        const CChoreoScene *const this,
        CUtlBuffer *const buf,
        int level,
        const CChoreoActor *a)
{
  int v8; // ebx
  const char *Name; // rax
  const CChoreoChannel *Channel; // rax
  const char *FacePoserModelName; // rax
  const char *v12; // rax

  if ( a->m_bMarkedForSave )
  {
    v8 = 0;
    Name = CChoreoActor::GetName(a);
    CChoreoScene::FilePrintf(this, buf, level, "actor \"%s\"\n", Name);
    CChoreoScene::FilePrintf(this, buf, level, "{\n");
    while ( v8 < CChoreoActor::GetNumChannels(a) )
    {
      Channel = CChoreoActor::GetChannel(a, v8);
      if ( Channel != 0 )
        CChoreoScene::FileSaveChannel(this, buf, level + 1, Channel);
      ++v8;
    }
    FacePoserModelName = CChoreoActor::GetFacePoserModelName(a);
    if ( FacePoserModelName != 0 && strlen(FacePoserModelName) > 0 )
    {
      v12 = CChoreoActor::GetFacePoserModelName(a);
      CChoreoScene::FilePrintf(this, buf, level + 1, "faceposermodel \"%s\"\n", v12);
    }
    if ( !CChoreoActor::GetActive(a) )
      CChoreoScene::FilePrintf(this, buf, level + 1, "active \"0\"\n");
    CChoreoScene::FilePrintf(this, buf, level, "}\n\n");
  }
}


// CChoreoScene::FindAdjustedStartTime  (line 2077, @0x0000000003082450, libserver.so)
// calls: CChoreoEvent::GetStartTime, CChoreoEvent::GetType
// callers: CChoreoScene::ResetSimulation
float __fastcall CChoreoScene::FindAdjustedStartTime(CChoreoScene *const this)
{
  float v1; // xmm1_4
  __int64 v3; // rbx
  const CChoreoEvent *v4; // r12
  EventNameMap_t::EVENTTYPE Type; // eax
  float v6; // xmm0_4
  float v8; // [rsp-28h] [rbp-30h]
  float StartTime; // [rsp-24h] [rbp-2Ch]

  v1 = 0.0;
  if ( this->m_Events.m_Size > 0 )
  {
    v3 = 0;
    v1 = 0.0;
    do
    {
      v8 = v1;
      v4 = this->m_Events.m_Memory.m_pMemory[v3];
      StartTime = CChoreoEvent::GetStartTime(v4);
      Type = CChoreoEvent::GetType(v4);
      v6 = StartTime;
      if ( Type == SPEAK )
        v6 = StartTime - this->m_flSoundSystemLatency;
      ++v3;
      v1 = fminf(v6, v8);
    }
    while ( this->m_Events.m_Size > v3 );
  }
  return v1;
}


// CChoreoScene::FindAdjustedEndTime  (line 2109, @0x00000000030824e0, libserver.so)
// calls: CChoreoEvent::GetType, CChoreoEvent::GetStartTime, CChoreoEvent::HasEndTime, CChoreoEvent::GetEndTime
// callers: CChoreoScene::ResetSimulation
float __fastcall CChoreoScene::FindAdjustedEndTime(CChoreoScene *const this)
{
  __int64 v2; // r12
  EventNameMap_t::EVENTTYPE Type; // eax
  float v4; // xmm0_4
  const CChoreoEvent *v5; // rbx
  bool HasEndTime; // al
  float v7; // xmm0_4
  float endtime; // [rsp+8h] [rbp-28h]
  float endtimea; // [rsp+8h] [rbp-28h]
  float latest_time; // [rsp+Ch] [rbp-24h]

  if ( this->m_Events.m_Size <= 0 )
    return 0.0;
  v2 = 0;
  latest_time = 0.0;
  do
  {
    v5 = this->m_Events.m_Memory.m_pMemory[v2];
    endtimea = CChoreoEvent::GetStartTime(v5);
    HasEndTime = CChoreoEvent::HasEndTime(v5);
    v7 = endtimea;
    if ( HasEndTime )
      v7 = CChoreoEvent::GetEndTime(v5);
    endtime = v7;
    Type = CChoreoEvent::GetType(v5);
    v4 = endtime;
    if ( Type == SPEAK )
      v4 = endtime + this->m_flSoundSystemLatency;
    ++v2;
    latest_time = fmaxf(v4, latest_time);
  }
  while ( this->m_Events.m_Size > v2 );
  return latest_time;
}


// CChoreoScene::ResetSimulation  (line 2145, @0x0000000003086350, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoEvent*>, Element, GrowMemory, RemoveAll, operator[]
// calls: CChoreoEvent::IsResumeCondition, CChoreoEvent::ResetProcessing, CChoreoEvent::GetType, CChoreoScene::FindAdjustedStartTime, CChoreoScene::FindAdjustedEndTime, CUtlMemory<CChoreoEvent*, int>::Grow
// callers: CSceneEntity::DispatchStartSubScene, CSceneEntity::EndEvent, CSceneEntity::OnRestore, CSceneEntity::OnSceneFinished, CSceneEntity::StartPlayback
void __fastcall CChoreoScene::ResetSimulation(
        CChoreoScene *const this,
        bool forward,
        float a3,
        float starttime,
        float endtime)
{
  __int64 v7; // r13
  int v8; // r12d
  int m_Size; // ecx
  CChoreoEvent *v10; // rbx
  __int64 v11; // rax
  int v12; // ecx
  CChoreoEvent **v13; // rax
  float AdjustedEndTime; // xmm0_4
  int v15; // eax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // [rsp+4h] [rbp-4Ch]
  int v19; // [rsp+4h] [rbp-4Ch]
  CUtlVectorBase<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> >::CAllocator *v20; // [rsp+8h] [rbp-48h]
  CUtlVectorBase<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-40h]

  v7 = 0;
  v8 = 0;
  p_m_Memory = &this->m_PauseEvents.m_Memory;
  m_Size = this->m_Events.m_Size;
  this->m_ActiveResumeConditions.m_Size = 0;
  this->m_ResumeConditions.m_Size = 0;
  v20 = &this->m_ResumeConditions.m_Memory;
  this->m_PauseEvents.m_Size = 0;
  if ( m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v10 = this->m_Events.m_Memory.m_pMemory[v7];
        CChoreoEvent::ResetProcessing(v10);
        if ( CChoreoEvent::GetType(v10) == SECTION )
          break;
        if ( CChoreoEvent::IsResumeCondition(v10) )
        {
          v16 = this->m_ResumeConditions.m_Size;
          v17 = this->m_ResumeConditions.m_Size;
          if ( v16 == this->m_ResumeConditions.m_Memory.m_nAllocationCount )
          {
            v19 = this->m_ResumeConditions.m_Size;
            CUtlMemory<CChoreoEvent *,int>::Grow(v20, 1);
            v17 = this->m_ResumeConditions.m_Size;
            v16 = v19;
          }
          this->m_ResumeConditions.m_Size = v17 + 1;
          v13 = &this->m_ResumeConditions.m_Memory.m_pMemory[v16];
          if ( v13 != 0 )
            goto LABEL_9;
        }
LABEL_4:
        ++v8;
        ++v7;
        if ( this->m_Events.m_Size <= v8 )
          goto LABEL_10;
      }
      v11 = this->m_PauseEvents.m_Size;
      v12 = this->m_PauseEvents.m_Size;
      if ( v11 == this->m_PauseEvents.m_Memory.m_nAllocationCount )
      {
        v18 = this->m_PauseEvents.m_Size;
        CUtlMemory<CChoreoEvent *,int>::Grow(p_m_Memory, 1);
        v12 = this->m_PauseEvents.m_Size;
        v11 = v18;
      }
      this->m_PauseEvents.m_Size = v12 + 1;
      v13 = &this->m_PauseEvents.m_Memory.m_pMemory[v11];
      if ( v13 == 0 )
        goto LABEL_4;
LABEL_9:
      *v13 = v10;
      ++v8;
      ++v7;
    }
    while ( this->m_Events.m_Size > v8 );
  }
LABEL_10:
  this->m_flEarliestTime = CChoreoScene::FindAdjustedStartTime(this);
  AdjustedEndTime = CChoreoScene::FindAdjustedEndTime(this);
  this->m_flLatestTime = AdjustedEndTime;
  if ( forward )
    AdjustedEndTime = this->m_flEarliestTime;
  v15 = this->m_Events.m_Size;
  this->m_flCurrentTime = AdjustedEndTime;
  this->m_flLastActiveTime = 0.0;
  this->m_flStartTime = a3;
  this->m_nActiveEvents = v15;
  this->m_flEndTime = starttime;
}


// CChoreoScene::CheckEventCompletion  (line 2190, @0x00000000030825a0, libserver.so)
// calls: CChoreoEvent::CheckProcessing
// callers: CSceneEntity::PauseThink
bool __fastcall CChoreoScene::CheckEventCompletion(CChoreoScene *const this)
{
  __int64 v2; // rbx
  bool result; // al

  if ( this->m_ActiveResumeConditions.m_Size <= 0 )
    return 1;
  v2 = 0;
  result = 1;
  do
  {
    while ( !result )
    {
      if ( this->m_ActiveResumeConditions.m_Size <= ++v2 )
        return result;
    }
    result = CChoreoEvent::CheckProcessing(
               this->m_ActiveResumeConditions.m_Memory.m_pMemory[v2++],
               this->m_pIChoreoEventCallback,
               this,
               this->m_flCurrentTime);
  }
  while ( this->m_ActiveResumeConditions.m_Size > v2 );
  return result;
}


// CChoreoScene::SpeechFinished  (line 2210, @0x0000000003082610, libserver.so)
// calls: CChoreoEvent::GetType, CChoreoEvent::GetEndTime
bool __fastcall CChoreoScene::SpeechFinished(const CChoreoScene *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  const CChoreoEvent *v5; // rdi
  float lastEndTime; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_Events.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v3 = 0;
  v4 = 8LL * (m_Size - 1) + 8;
  lastEndTime = -1.0;
  do
  {
    while ( CChoreoEvent::GetType(this->m_Events.m_Memory.m_pMemory[v3 / 8]) != SPEAK )
    {
      v3 += 8LL;
      if ( v3 == v4 )
        return lastEndTime >= 0.0 && this->m_flCurrentTime >= lastEndTime;
    }
    v5 = this->m_Events.m_Memory.m_pMemory[v3 / 8];
    v3 += 8LL;
    lastEndTime = fmaxf(lastEndTime, CChoreoEvent::GetEndTime(v5));
  }
  while ( v3 != v4 );
  return lastEndTime >= 0.0 && this->m_flCurrentTime >= lastEndTime;
}


// CChoreoScene::SimulationFinished  (line 2242, @0x00000000030826d0, libserver.so)
// callers: CSceneEntity::ProcessEvent, CInstancedSceneEntity::DoThink, CSceneEntity::DoThink
bool __fastcall CChoreoScene::SimulationFinished(CChoreoScene *const this)
{
  float m_flCurrentTime; // xmm0_4

  m_flCurrentTime = this->m_flCurrentTime;
  if ( m_flCurrentTime <= this->m_flLatestTime )
    return this->m_flEarliestTime > m_flCurrentTime;
  else
    return this->m_nActiveEvents == 0;
}


// CChoreoScene::FindPauseBetweenTimes  (line 2267, @0x0000000003082710, libserver.so)  // inlines: IsTimeInRange
// calls: CChoreoEvent::GetStartTime
// callers: CChoreoScene::EventThink
CChoreoEvent *__fastcall CChoreoScene::FindPauseBetweenTimes(
        CChoreoScene *const this,
        __m128i a2,
        float starttime,
        float endtime)
{
  float v4; // r15d
  int v6; // r12d
  __int64 v7; // rbx
  CChoreoEvent **m_pMemory; // rax
  CChoreoEvent *v9; // r13
  float v10; // xmm0_4

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  v6 = 0;
  v7 = 0;
  if ( this->m_PauseEvents.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    m_pMemory = this->m_PauseEvents.m_Memory.m_pMemory;
    v9 = m_pMemory[v7];
    if ( v9 != 0 )
    {
      v10 = CChoreoEvent::GetStartTime(m_pMemory[v7]);
      if ( v10 <= starttime && v4 <= v10 )
        break;
    }
    ++v6;
    ++v7;
    if ( this->m_PauseEvents.m_Size <= v6 )
      return 0;
  }
  return v9;
}


// CChoreoScene::IsTimeInRange  (line 2292, @0x00000000030827b0, libserver.so)
__int64 __fastcall CChoreoScene::IsTimeInRange(
        CChoreoScene *const this,
        float a2,
        float t,
        float starttime,
        float endtime)
{
  __int64 result; // rax

  result = 2;
  if ( a2 <= starttime )
    return t > a2;
  return result;
}


// CChoreoScene::EventThink  (line 2306, @0x00000000030827d0, libserver.so)  // inlines: IsTimeInRange
// calls: CChoreoEvent::HasEndTime, CChoreoEvent::GetStartTime, CChoreoEvent::GetEndTime, CChoreoEvent::GetType, CChoreoEvent::IsProcessing, CChoreoEvent::IsResumeCondition, CChoreoScene::FindPauseBetweenTimes, CChoreoEvent::AddEventDependency
// callers: CChoreoScene::Think
__int64 __fastcall CChoreoScene::EventThink(
        CChoreoScene *const this,
        CChoreoEvent *e,
        float frame_start_time,
        float frame_end_time,
        bool playing_forward,
        CChoreoScene::ActiveList::PROCESSING_TYPE *const disposition)
{
  bool HasEndTime; // r14
  float v11; // xmm2_4
  EventNameMap_t::EVENTTYPE Type; // eax
  float v13; // xmm2_4
  float m_flSoundSystemLatency; // xmm1_4
  __m128i v16; // xmm5
  float v17; // xmm1_4
  CChoreoEvent *PauseBetweenTimes; // rax
  CChoreoEvent *v19; // r13
  float endtime; // [rsp+0h] [rbp-40h]
  float starttime; // [rsp+4h] [rbp-3Ch]

  *disposition = PROCESSING_TYPE_IGNORE;
  HasEndTime = CChoreoEvent::HasEndTime(e);
  starttime = CChoreoEvent::GetStartTime(e);
  if ( HasEndTime )
    endtime = CChoreoEvent::GetEndTime(e);
  else
    endtime = CChoreoEvent::GetStartTime(e);
  if ( !playing_forward )
  {
    v11 = frame_end_time;
    frame_end_time = frame_start_time;
    frame_start_time = v11;
  }
  Type = CChoreoEvent::GetType(e);
  if ( Type == SPEAK )
  {
    if ( playing_forward )
    {
      m_flSoundSystemLatency = this->m_flSoundSystemLatency;
      v16 = LODWORD(starttime);
      *v16.m128i_i32 = starttime - m_flSoundSystemLatency;
      v17 = m_flSoundSystemLatency + (starttime - m_flSoundSystemLatency);
      starttime = *v16.m128i_i32;
      PauseBetweenTimes = CChoreoScene::FindPauseBetweenTimes(this, v16, v17, v13);
      v19 = PauseBetweenTimes;
      if ( PauseBetweenTimes != 0 && CChoreoEvent::GetStartTime(PauseBetweenTimes) >= frame_start_time )
      {
        CChoreoEvent::AddEventDependency(v19, e);
        goto LABEL_8;
      }
    }
  }
  else if ( Type == SUBSCENE && (*(this + 356) & 4) != 0 )
  {
LABEL_8:
    if ( !CChoreoEvent::IsProcessing(e) )
      return 0;
LABEL_21:
    *disposition = PROCESSING_TYPE_STOP;
    return 0;
  }
  if ( !CChoreoEvent::IsProcessing(e) )
  {
    if ( frame_start_time > endtime || starttime > frame_start_time )
    {
      if ( HasEndTime || starttime > frame_end_time || frame_start_time > starttime )
        return 0;
    }
    else if ( CChoreoEvent::IsResumeCondition(e) )
    {
      *disposition = PROCESSING_TYPE_START_RESUMECONDITION;
      return 1;
    }
    *disposition = PROCESSING_TYPE_START;
    return 1;
  }
  if ( frame_start_time > endtime || starttime > frame_start_time )
    goto LABEL_21;
  *disposition = PROCESSING_TYPE_CONTINUE;
  return 1;
}


// CChoreoScene::EventLess  (line 2445, @0x000000000307fd40, libserver.so)
// calls: CChoreoEvent::GetStartTime, CChoreoEvent::HasEndTime, CChoreoEvent::GetActor, CChoreoEvent::GetName, strcmp, CChoreoEvent::GetEndTime, CChoreoEvent::GetChannel, CChoreoActor::FindChannelIndex
bool __fastcall CChoreoScene::EventLess(
        const CChoreoScene::ActiveList *const al0,
        const CChoreoScene::ActiveList *const al1)
{
  CChoreoEvent *e; // rbx
  CChoreoEvent *v3; // r12
  CChoreoActor *Actor; // r13
  CChoreoActor *v6; // rax
  const char *Name; // r12
  const char *v8; // rax
  __m128i v9; // xmm0
  CChoreoChannel *Channel; // r14
  CChoreoChannel *v11; // rax
  int ChannelIndex; // ebx
  float StartTime; // [rsp+Ch] [rbp-24h]
  float v14; // [rsp+Ch] [rbp-24h]
  float EndTime; // [rsp+Ch] [rbp-24h]

  e = al0->e;
  v3 = al1->e;
  StartTime = CChoreoEvent::GetStartTime(e);
  if ( CChoreoEvent::GetStartTime(v3) > StartTime )
    return 1;
  v14 = CChoreoEvent::GetStartTime(e);
  if ( v14 > CChoreoEvent::GetStartTime(v3) )
    return 0;
  if ( CChoreoEvent::HasEndTime(e) && CChoreoEvent::HasEndTime(v3) )
  {
    *v9.m128i_i32 = CChoreoEvent::GetEndTime(e);
    if ( COERCE_FLOAT(_mm_cvtsi128_si32(v9)) > CChoreoEvent::GetEndTime(v3) )
      return 1;
    EndTime = CChoreoEvent::GetEndTime(e);
    if ( CChoreoEvent::GetEndTime(v3) > EndTime )
      return 0;
  }
  Actor = CChoreoEvent::GetActor(e);
  v6 = CChoreoEvent::GetActor(v3);
  if ( Actor != 0
    && v6 != 0
    && Actor == v6
    && (Channel = CChoreoEvent::GetChannel(e), v11 = CChoreoEvent::GetChannel(v3), Channel != 0)
    && v11 != 0
    && Channel == v11 )
  {
    ChannelIndex = CChoreoActor::FindChannelIndex(Actor, Channel);
    return ChannelIndex < CChoreoActor::FindChannelIndex(Actor, Channel);
  }
  else
  {
    Name = CChoreoEvent::GetName(v3);
    v8 = CChoreoEvent::GetName(e);
    return strcmp(v8, Name) == -1;
  }
}


// CChoreoScene::ClearPauseEventDependencies  (line 2498, @0x00000000030829c0, libserver.so)
// calls: CChoreoEvent::ClearEventDependencies
// callers: CChoreoScene::Think
void __fastcall CChoreoScene::ClearPauseEventDependencies(CChoreoScene *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CChoreoEvent *v5; // rdi

  m_Size = this->m_PauseEvents.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      v5 = this->m_PauseEvents.m_Memory.m_pMemory[v3 / 8];
      v3 += 8LL;
      CChoreoEvent::ClearEventDependencies(v5);
    }
    while ( v3 != v4 );
  }
}


// CChoreoScene::AddPauseEventDependency  (line 2514, @0x0000000003082a20, libserver.so)
// calls: CChoreoEvent::AddEventDependency
void __fastcall CChoreoScene::AddPauseEventDependency(
        CChoreoScene *const this,
        CChoreoEvent *pauseEvent,
        CChoreoEvent *suppressed)
{
  CChoreoEvent::AddEventDependency(pauseEvent, suppressed);
}


// CChoreoScene::Think  (line 2525, @0x0000000003087e40, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlRBTree, ConvertToExternalMemory, CopyConstruct<CChoreoEvent*>, Element, FindInsertionPosition, FirstInorder, GrowMemory, Insert, InsertAt, LeftChild, Purge, Purge_FixedGrowable, ResetDbgInfo, RightChild, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlRBTree
// calls: CChoreoScene::ClearPauseEventDependencies, CChoreoScene::EventThink, CUtlRBTree<CChoreoScene::ActiveList, int, bool (*)(const CChoreoScene::ActiveList&, const CChoreoScene::ActiveList&), CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, 256ul, int> >::NewNode, CUtlRBTree<CChoreoScene::ActiveList, int, bool (*)(const CChoreoScene::ActiveList&, const CChoreoScene::ActiveList&), CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, 256ul, int> >::LinkToParent, CChoreoEvent::StartProcessing, CChoreoEvent::GetType, CUtlRBTree<CChoreoScene::ActiveList, int, bool (*)(const CChoreoScene::ActiveList&, const CChoreoScene::ActiveList&), CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, 256ul, int> >::NextInorder, CChoreoEvent::StopProcessing, CUtlRBTree<CChoreoScene::ActiveList, int, bool (*)(const CChoreoScene::ActiveList&, const CChoreoScene::ActiveList&), CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, 256ul, int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, int>::Purge, __stack_chk_fail, CUtlRBTree<CChoreoScene::ActiveList, int, bool (*)(const CChoreoScene::ActiveList&, const CChoreoScene::ActiveList&), CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, 256ul, int> >::~CUtlRBTree (16 total)
// callers: CSceneEntity::ProcessEvent, CInstancedSceneEntity::DoThink, CSceneEntity::DoThink
// globals: CChoreoScene::EventLess(CChoreoScene::ActiveList const&,CChoreoScene::ActiveList const&)
void __fastcall CChoreoScene::Think(CChoreoScene *const this, float a2, float curtime)
{
  float m_flCurrentTime; // xmm2_4
  bool v5; // bl
  int m_Size; // eax
  __int64 v7; // r14
  CChoreoEvent **m_pMemory; // rax
  CChoreoEvent *v9; // rbx
  int m_Root; // r13d
  int m_Left; // eax
  bool v12; // bl
  int v13; // eax
  UtlRBTreeNode_t<CChoreoScene::ActiveList,int> *v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  UtlRBTreeNode_t<CChoreoScene::ActiveList,int> *v17; // r13
  int pt; // eax
  uint32 v19; // eax
  __int64 v20; // r14
  int v21; // eax
  CChoreoEvent **v22; // rax
  float oldt; // [rsp+4h] [rbp-20ACh]
  bool playing_forward; // [rsp+10h] [rbp-20A0h]
  CChoreoScene::ActiveList::PROCESSING_TYPE disposition; // [rsp+2Ch] [rbp-2084h] BYREF
  CChoreoScene::ActiveList pCopyFrom; // [rsp+30h] [rbp-2080h] BYREF
  CUtlRBTreeFixedGrowable_0 pending; // [rsp+40h] [rbp-2070h] BYREF
  unsigned __int64 v29; // [rsp+2078h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  m_flCurrentTime = this->m_flCurrentTime;
  this->m_nActiveEvents = 0;
  oldt = m_flCurrentTime;
  v5 = (a2 - m_flCurrentTime) >= 0.0;
  CChoreoScene::ClearPauseEventDependencies(this);
  pending.m_Elements.m_nAllocationCount = 256;
  pending.m_LessFunc = CChoreoScene::EventLess;
  pending.m_Elements.m_pMemory = &pending.m_Elements.m_FixedMemory;
  pending.m_pElements = &pending.m_Elements.m_FixedMemory;
  m_Size = this->m_Events.m_Size;
  pending.m_Elements.m_nGrowSize = 0x80000000;
  pending.m_Root = -1;
  pending.m_NumElements = 0;
  pending.m_FirstFree = -1;
  pending.m_LastAlloc.index = -1;
  if ( m_Size > 0 )
  {
    v7 = 0;
    playing_forward = v5;
    do
    {
      while ( 1 )
      {
        m_pMemory = this->m_Events.m_Memory.m_pMemory;
        v9 = m_pMemory[v7];
        if ( v9 != 0 )
        {
          this->m_nActiveEvents += CChoreoScene::EventThink(
                                     this,
                                     m_pMemory[v7],
                                     this->m_flCurrentTime,
                                     a2,
                                     playing_forward,
                                     &disposition);
          if ( disposition != PROCESSING_TYPE_IGNORE )
            break;
        }
        if ( this->m_Events.m_Size <= ++v7 )
          goto LABEL_13;
      }
      m_Root = pending.m_Root;
      pCopyFrom.e = v9;
      pCopyFrom.pt = disposition;
      if ( pending.m_Root != -1 )
      {
        while ( 1 )
        {
          if ( pending.m_LessFunc(&pCopyFrom, &pending.m_Elements.m_pMemory[m_Root].m_Data) != 0 )
          {
            m_Left = pending.m_Elements.m_pMemory[m_Root].m_Left;
            v12 = 1;
            if ( m_Left == -1 )
              goto LABEL_12;
          }
          else
          {
            m_Left = pending.m_Elements.m_pMemory[m_Root].m_Right;
            v12 = 0;
            if ( m_Left == -1 )
              goto LABEL_12;
          }
          m_Root = m_Left;
        }
      }
      v12 = 0;
LABEL_12:
      v13 = CUtlRBTree<CChoreoScene::ActiveList,int,bool (*)(CChoreoScene::ActiveList const&,CChoreoScene::ActiveList const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList,int>,256ul,int>>::NewNode(
              &pending,
              &pCopyFrom);
      CUtlRBTree<CChoreoScene::ActiveList,int,bool (*)(CChoreoScene::ActiveList const&,CChoreoScene::ActiveList const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList,int>,256ul,int>>::LinkToParent(
        &pending,
        v13,
        m_Root,
        v12);
      ++v7;
      ++pending.m_NumElements;
    }
    while ( this->m_Events.m_Size > v7 );
LABEL_13:
    if ( pending.m_Root != -1 )
    {
      v14 = pending.m_Elements.m_pMemory;
      v15 = pending.m_Root;
      v16 = pending.m_Elements.m_pMemory[pending.m_Root].m_Left;
      if ( v16 == -1 )
      {
        v16 = pending.m_Root;
      }
      else
      {
        while ( 1 )
        {
          v15 = v16;
          if ( pending.m_Elements.m_pMemory[v16].m_Left == -1 )
            break;
          v16 = pending.m_Elements.m_pMemory[v16].m_Left;
        }
      }
      while ( 1 )
      {
        v17 = &v14[v15];
        pt = v17->m_Data.pt;
        if ( pt == 3 )
        {
          CChoreoEvent::ContinueProcessing(v17->m_Data.e, this->m_pIChoreoEventCallback, this, this->m_flCurrentTime);
        }
        else if ( pt <= 3 )
        {
          if ( pt >= 1 )
          {
            CChoreoEvent::StartProcessing(v17->m_Data.e, this->m_pIChoreoEventCallback, this, this->m_flCurrentTime);
            if ( v17->m_Data.pt == PROCESSING_TYPE_START_RESUMECONDITION )
            {
              v20 = this->m_ActiveResumeConditions.m_Size;
              v21 = this->m_ActiveResumeConditions.m_Size;
              if ( v20 == this->m_ActiveResumeConditions.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CChoreoEvent *,int>::Grow(&this->m_ActiveResumeConditions.m_Memory, 1);
                v21 = this->m_ActiveResumeConditions.m_Size;
              }
              this->m_ActiveResumeConditions.m_Size = v21 + 1;
              v22 = &this->m_ActiveResumeConditions.m_Memory.m_pMemory[v20];
              if ( v22 != 0 )
                *v22 = v17->m_Data.e;
            }
            if ( CChoreoEvent::GetType(v17->m_Data.e) == SECTION )
              this->m_nLastPauseEvent = CUtlVectorBase<CChoreoEvent *,CUtlMemory<CChoreoEvent *,int>>::Find(
                                          &this->m_PauseEvents,
                                          &v17->m_Data.e);
          }
        }
        else if ( pt == 4 )
        {
          CChoreoEvent::StopProcessing(v17->m_Data.e, this->m_pIChoreoEventCallback, this, this->m_flCurrentTime);
        }
        v16 = CUtlRBTree<CChoreoScene::ActiveList,int,bool (*)(CChoreoScene::ActiveList const&,CChoreoScene::ActiveList const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList,int>,256ul,int>>::NextInorder(
                &pending,
                v16);
        if ( v16 == -1 )
          break;
        v14 = pending.m_Elements.m_pMemory;
        v15 = v16;
      }
    }
  }
  if ( oldt == this->m_flCurrentTime )
    this->m_flCurrentTime = a2;
  if ( this->m_nActiveEvents != 0 )
    this->m_flLastActiveTime = this->m_flCurrentTime;
  CUtlRBTree<CChoreoScene::ActiveList,int,bool (*)(CChoreoScene::ActiveList const&,CChoreoScene::ActiveList const&),CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList,int>,256ul,int>>::RemoveAll(&pending);
  pending.m_FirstFree = -1;
  v19 = pending.m_Elements.m_nGrowSize & 0xC0000000;
  if ( pending.m_Elements.m_nAllocationCount < 0 || pending.m_Elements.m_pMemory == &pending.m_Elements.m_FixedMemory )
  {
    pending.m_LastAlloc.index = -1;
    if ( v19 == 0 )
      CUtlMemory<UtlRBTreeNode_t<CChoreoScene::ActiveList,int>,int>::Purge(&pending.m_Elements);
  }
  else if ( pending.m_Elements.m_pMemory != 0 && v19 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CChoreoScene::GetTime  (line 2645, @0x0000000003082a30, libserver.so)
// callers: CBaseFlex::ProcessFlexSettingSceneEvent, CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CBaseFlex::ProcessGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent, CBaseFlex::AddFlexAnimation, CSceneEntity::DoThink
float __fastcall CChoreoScene::GetTime(CChoreoScene *const this)
{
  return this->m_flCurrentTime;
}


// CChoreoScene::SetTime  (line 2654, @0x0000000003082a40, libserver.so)
// callers: CSceneEntity::OnRestore
void __fastcall CChoreoScene::SetTime(CChoreoScene *const this, float a2, float t)
{
  this->m_flCurrentTime = a2;
}


// CChoreoScene::LoopToTime  (line 2663, @0x0000000003082a50, libserver.so)
// callers: CSceneEntity::DispatchProcessLoop
void __fastcall CChoreoScene::LoopToTime(CChoreoScene *const this, float a2, float t)
{
  this->m_flCurrentTime = a2;
}


// CChoreoScene::SetPrintFunc  (line 2672, @0x0000000003082a60, libserver.so)
void __fastcall CChoreoScene::SetPrintFunc(CChoreoScene *const this, void (*pfn)(const char *, ...))
{
  this->m_pfnPrint = pfn;
}


// CChoreoScene::RemoveActor  (line 2681, @0x0000000003084760, libserver.so)
// calls: CChoreoScene::FindActorIndex, CUtlVectorBase<CChoreoActor*, CUtlMemory<CChoreoActor*, int> >::Remove
void __fastcall CChoreoScene::RemoveActor(CChoreoScene *const this, CChoreoActor *actor)
{
  int ActorIndex; // eax

  ActorIndex = CChoreoScene::FindActorIndex(this, actor);
  if ( ActorIndex != -1 )
    CUtlVectorBase<CChoreoActor *,CUtlMemory<CChoreoActor *,int>>::Remove(&this->m_Actors, ActorIndex);
}


// CChoreoScene::FindActorIndex  (line 2695, @0x0000000003082a70, libserver.so)
// callers: CSceneEntity::FindNamedActor, CChoreoScene::RemoveActor
int __fastcall CChoreoScene::FindActorIndex(CChoreoScene *const this, CChoreoActor *actor)
{
  int m_Size; // ecx
  int result; // eax
  CChoreoActor **m_pMemory; // rdx
  CChoreoActor **v5; // rdx

  m_Size = this->m_Actors.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Actors.m_Memory.m_pMemory;
    if ( *m_pMemory == actor )
    {
      return 0;
    }
    else
    {
      v5 = m_pMemory + 1;
      result = 0;
      while ( ++result != m_Size )
      {
        if ( *v5++ == actor )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CChoreoScene::SwapActors  (line 2712, @0x0000000003082ac0, libserver.so)  // inlines: operator[]
void __fastcall CChoreoScene::SwapActors(CChoreoScene *const this, int a1, int a2)
{
  CChoreoActor **m_pMemory; // rcx
  CChoreoActor **v4; // rax
  CChoreoActor *v5; // rsi

  m_pMemory = this->m_Actors.m_Memory.m_pMemory;
  v4 = &m_pMemory[a1];
  v5 = *v4;
  *v4 = m_pMemory[a2];
  this->m_Actors.m_Memory.m_pMemory[a2] = v5;
}


// CChoreoScene::DeleteReferencedObjects  (line 2725, @0x0000000003084bd0, libserver.so)
// calls: CChoreoActor::GetChannel, CChoreoActor::RemoveChannel, CChoreoScene::DeleteReferencedObjects, CChoreoActor::GetNumChannels, CChoreoScene::DestroyActor
void __fastcall CChoreoScene::DeleteReferencedObjects(CChoreoScene *const this, CChoreoActor *actor)
{
  int v4; // ebx
  int v5; // esi
  CChoreoChannel *Channel; // r13

  v4 = 0;
  while ( v4 < CChoreoActor::GetNumChannels(actor) )
  {
    v5 = v4++;
    Channel = CChoreoActor::GetChannel(actor, v5);
    CChoreoActor::RemoveChannel(actor, Channel);
    CChoreoScene::DeleteReferencedObjects(this, Channel);
  }
  CChoreoScene::DestroyActor(this, actor);
}


// CChoreoScene::DeleteReferencedObjects  (line 2742, @0x0000000003084b70, libserver.so)
// calls: CChoreoChannel::GetEvent, CChoreoChannel::RemoveEvent, CChoreoScene::DeleteReferencedObjects, CChoreoChannel::GetNumEvents, CChoreoScene::DestroyChannel
// callers: CChoreoScene::DeleteReferencedObjects
void __fastcall CChoreoScene::DeleteReferencedObjects(CChoreoScene *const this, CChoreoChannel_0 *channel)
{
  int v4; // ebx
  int v5; // esi
  CChoreoEvent *Event; // r13

  v4 = 0;
  while ( v4 < CChoreoChannel::GetNumEvents(channel) )
  {
    v5 = v4++;
    Event = CChoreoChannel::GetEvent(channel, v5);
    CChoreoChannel::RemoveEvent(channel, Event);
    CChoreoScene::DeleteReferencedObjects(this, Event);
  }
  CChoreoScene::DestroyChannel(this, channel);
}


// CChoreoScene::DeleteReferencedObjects  (line 2759, @0x0000000003084920, libserver.so)
// calls: CUtlVectorBase<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >::Find, CUtlVectorBase<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >::Remove, CChoreoScene::DestroyEvent
// callers: CChoreoScene::RemoveEventsExceptTypes, CChoreoScene::DeleteReferencedObjects
void __fastcall CChoreoScene::DeleteReferencedObjects(CChoreoScene *const this, CChoreoEvent *event)
{
  CUtlVector<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> > *p_m_PauseEvents; // r12
  int v4; // eax
  CChoreoEvent *eventa; // [rsp+8h] [rbp-18h] BYREF

  p_m_PauseEvents = &this->m_PauseEvents;
  eventa = event;
  v4 = CUtlVectorBase<CChoreoEvent *,CUtlMemory<CChoreoEvent *,int>>::Find(&this->m_PauseEvents, &eventa);
  if ( v4 != -1 )
    CUtlVectorBase<CChoreoEvent *,CUtlMemory<CChoreoEvent *,int>>::Remove(p_m_PauseEvents, v4);
  CChoreoScene::DestroyEvent(this, eventa);
}


// CChoreoScene::DestroyActor  (line 2774, @0x00000000030847a0, libserver.so)  // inlines: Purge, RemoveAll, ~CChoreoActor, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, operator delete, CUtlVectorBase<CChoreoActor*, CUtlMemory<CChoreoActor*, int> >::Remove, CUtlMemory<CChoreoChannel*, int>::Purge
// callers: CChoreoScene::DeleteReferencedObjects
void __fastcall CChoreoScene::DestroyActor(CChoreoScene *const this, CChoreoActor *actor)
{
  CUtlVector<CChoreoActor*,CUtlMemory<CChoreoActor*,int> > *p_m_Actors; // r15
  int v5; // ebx
  __int64 v6; // r12
  bool v7; // zf

  p_m_Actors = &this->m_Actors;
  v5 = this->m_Actors.m_Size - 1;
  v6 = v5;
  if ( v5 >= 0 )
  {
    do
    {
      if ( this->m_Actors.m_Memory.m_pMemory[v6] == actor )
        CUtlVectorBase<CChoreoActor *,CUtlMemory<CChoreoActor *,int>>::Remove(p_m_Actors, v5);
      --v5;
      --v6;
    }
    while ( v5 != -1 );
  }
  if ( actor != 0 )
  {
    v7 = (actor->m_Channels.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    actor->m_Channels.m_Size = 0;
    actor->_vptr_CChoreoObjectBase = off_47C2810;  // vptr: CChoreoActor
    if ( v7 )
    {
      CUtlMemory<CChoreoChannel *,int>::Purge(&actor->m_Channels.m_Memory);
      if ( (actor->m_Channels.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CChoreoChannel *,int>::Purge(&actor->m_Channels.m_Memory);
    }
    if ( actor->m_szFacePoserModelName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&actor->m_szFacePoserModelName);
    if ( actor->m_szName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&actor->m_szName);
    operator delete(actor);
  }
}


// CChoreoScene::DestroyChannel  (line 2793, @0x0000000003082af0, libserver.so)  // inlines: Element, Purge, Remove, RemoveAll, ShiftElementsLeft, V_memmove, memmove, operator[], ~CChoreoChannel, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, operator delete, memmove, CUtlMemory<CChoreoEvent*, int>::Purge
// callers: CChoreoScene::DeleteReferencedObjects
void __fastcall CChoreoScene::DestroyChannel(CChoreoScene *const this, CChoreoChannel_0 *channel)
{
  int v4; // ebx
  __int64 v5; // r12
  CChoreoChannel **m_pMemory; // rcx
  bool v7; // zf

  v4 = this->m_Channels.m_Size - 1;
  v5 = v4;
  if ( v4 >= 0 )
  {
    do
    {
      m_pMemory = this->m_Channels.m_Memory.m_pMemory;
      if ( m_pMemory[v5] == channel )
      {
        if ( this->m_Channels.m_Size - v4 - 1 > 0 )
          memmove(&m_pMemory[v5], &m_pMemory[v5 + 1], 8LL * (this->m_Channels.m_Size - v4 - 1));
        --this->m_Channels.m_Size;
      }
      --v4;
      --v5;
    }
    while ( v4 != -1 );
  }
  if ( channel != 0 )
  {
    v7 = (channel->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    channel->m_Events.m_Size = 0;
    channel->_vptr_CChoreoObjectBase = &off_47C2870;
    if ( v7 )
    {
      CUtlMemory<CChoreoEvent *,int>::Purge(&channel->m_Events.m_Memory);
      if ( (channel->m_Events.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CChoreoEvent *,int>::Purge(&channel->m_Events.m_Memory);
    }
    if ( channel->m_szName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&channel->m_szName);
    operator delete(channel);
  }
}


// CChoreoScene::DestroyEvent  (line 2812, @0x0000000003084890, libserver.so)
// calls: CUtlVectorBase<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >::Remove
// callers: CChoreoScene::DeleteReferencedObjects
void __fastcall CChoreoScene::DestroyEvent(CChoreoScene *const this, CChoreoEvent *event)
{
  CUtlVector<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> > *p_m_Events; // r15
  int v5; // ebx
  __int64 v6; // r12

  p_m_Events = &this->m_Events;
  v5 = this->m_Events.m_Size - 1;
  v6 = v5;
  if ( v5 >= 0 )
  {
    do
    {
      if ( this->m_Events.m_Memory.m_pMemory[v6] == event )
        CUtlVectorBase<CChoreoEvent *,CUtlMemory<CChoreoEvent *,int>>::Remove(p_m_Events, v5);
      --v5;
      --v6;
    }
    while ( v5 != -1 );
  }
  if ( event != 0 )
    (*(event->_vptr_CChoreoObjectBase + 4))(event);
}


// CChoreoScene::ResumeSimulation  (line 2830, @0x0000000003084640, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CChoreoEvent::GetStartTime, CChoreoEvent::GetEventDependencies, CChoreoEvent::StartProcessing, CUtlMemory<CChoreoEvent*, int>::Purge, CUtlVectorBase<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CSceneEntity::ResumePlayback
void __fastcall CChoreoScene::ResumeSimulation(CChoreoScene *const this)
{
  __int64 m_nLastPauseEvent; // rax
  CChoreoEvent **m_pMemory; // rdx
  CChoreoEvent *v4; // r12
  __int64 v5; // r13
  int i; // r12d
  CUtlVector<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> > deps; // [rsp+0h] [rbp-40h] BYREF

  m_nLastPauseEvent = this->m_nLastPauseEvent;
  if ( m_nLastPauseEvent >= 0 && m_nLastPauseEvent < this->m_PauseEvents.m_Size )
  {
    m_pMemory = this->m_PauseEvents.m_Memory.m_pMemory;
    deps.m_Size = 0;
    deps.m_Memory.m_pMemory = 0;
    deps.m_Memory.m_nAllocationCount = 0;
    deps.m_Memory.m_nGrowSize = 0;
    v4 = m_pMemory[m_nLastPauseEvent];
    CChoreoEvent::GetStartTime(v4);
    CChoreoEvent::GetEventDependencies(v4, &deps);
    v5 = 0;
    for ( i = 0; deps.m_Size > i; ++v5 )
    {
      CChoreoEvent::StartProcessing(
        deps.m_Memory.m_pMemory[v5],
        this->m_pIChoreoEventCallback,
        this,
        this->m_flCurrentTime);
      ++i;
    }
    deps.m_Size = 0;
    if ( (deps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CChoreoEvent *,int>::Purge(&deps.m_Memory);
      if ( (deps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CChoreoEvent *,int>::Purge(&deps.m_Memory);
    }
  }
  this->m_nLastPauseEvent = -1;
  this->m_ActiveResumeConditions.m_Size = 0;
}


// CChoreoScene::SetSoundFileStartupLatency  (line 2870, @0x0000000003082c00, libserver.so)
// callers: CInstancedSceneEntity::DoThink, CSceneEntity::DoThink
void __fastcall CChoreoScene::SetSoundFileStartupLatency(CChoreoScene *const this, float a2, float time)
{
  this->m_flSoundSystemLatency = a2;
}


// CChoreoScene::GetSceneTimes  (line 2881, @0x0000000003082c10, libserver.so)
void __fastcall CChoreoScene::GetSceneTimes(CChoreoScene *const this, float *const start, float *const end)
{
  *start = this->m_flStartTime;
  *end = this->m_flEndTime;
}


// CChoreoScene::ReconcileTags  (line 2890, @0x0000000003082ea0, libserver.so)
// calls: CChoreoActor::GetNumChannels, CChoreoActor::GetChannel, CChoreoChannel::GetNumEvents, CChoreoChannel::GetEvent, CChoreoEvent::IsUsingRelativeTag, CChoreoEvent::GetRelativeTagName, CChoreoEvent::GetRelativeWavName, CChoreoScene::FindTagByName, CEventRelativeTag::GetStartTime, CChoreoEvent::GetStartTime, CChoreoEvent::OffsetTime, CChoreoEvent::GetName (14 total)
// callers: CChoreoScene::ImportEvents, CChoreoScene::ParseFromBuffer
// strings: "Event %s was missing tag %s for wav %s\n"
void __fastcall CChoreoScene::ReconcileTags(CChoreoScene *const this)
{
  int j; // r13d
  CChoreoChannel *Channel; // r12
  int k; // ebx
  CChoreoEvent *Event; // rax
  CChoreoEvent *v5; // r14
  const char *RelativeTagName; // r15
  const char *RelativeWavName; // rax
  CEventRelativeTag *TagByName; // rax
  __m128i v9; // xmm0
  float v10; // r15d
  float StartTime; // xmm0_4
  const char *v12; // r15
  const char *Name; // rax
  int i; // [rsp+Ch] [rbp-54h]
  __int64 v15; // [rsp+10h] [rbp-50h]
  const char *v16; // [rsp+18h] [rbp-48h]
  CChoreoActor *a; // [rsp+20h] [rbp-40h]

  v15 = 0;
  for ( i = 0; this->m_Actors.m_Size > i; ++v15 )
  {
    a = this->m_Actors.m_Memory.m_pMemory[v15];
    if ( a != 0 )
    {
      for ( j = 0; j < CChoreoActor::GetNumChannels(a); ++j )
      {
        Channel = CChoreoActor::GetChannel(a, j);
        if ( Channel != 0 )
        {
          for ( k = 0; k < CChoreoChannel::GetNumEvents(Channel); ++k )
          {
            Event = CChoreoChannel::GetEvent(Channel, k);
            v5 = Event;
            if ( Event != 0 && CChoreoEvent::IsUsingRelativeTag(Event) )
            {
              RelativeTagName = CChoreoEvent::GetRelativeTagName(v5);
              RelativeWavName = CChoreoEvent::GetRelativeWavName(v5);
              TagByName = CChoreoScene::FindTagByName(this, RelativeWavName, RelativeTagName);
              if ( TagByName != 0 )
              {
                *v9.m128i_i32 = CEventRelativeTag::GetStartTime(TagByName);
                v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
                StartTime = CChoreoEvent::GetStartTime(v5);
                CChoreoEvent::OffsetTime(v5, v10 - StartTime, v10 - StartTime);
              }
              else
              {
                v16 = CChoreoEvent::GetRelativeTagName(v5);
                v12 = CChoreoEvent::GetRelativeWavName(v5);
                Name = CChoreoEvent::GetName(v5);
                CChoreoScene::choreoprintf(this, 0, "Event %s was missing tag %s for wav %s\n", Name, v12, v16);
                CChoreoEvent::SetUsingRelativeTag(v5, 0, "", "");
              }
            }
          }
        }
      }
    }
    ++i;
  }
}


// CChoreoScene::FindTargetingEvent  (line 2947, @0x0000000003082c30, libserver.so)
// calls: CChoreoActor::GetNumChannels, CChoreoActor::GetChannel, CChoreoChannel::GetNumEvents, CChoreoChannel::GetEvent, CChoreoEvent::IsUsingRelativeTag, CChoreoEvent::GetRelativeWavName, V_stricmp_fast, CChoreoEvent::GetRelativeTagName
CChoreoEvent *__fastcall CChoreoScene::FindTargetingEvent(
        CChoreoScene *const this,
        const char *wavname,
        const char *name)
{
  int j; // r13d
  CChoreoChannel *Channel; // r12
  int k; // ebx
  CChoreoEvent *Event; // rax
  CChoreoEvent *v8; // r15
  const char *RelativeWavName; // rax
  const char *RelativeTagName; // rax
  int i; // [rsp+Ch] [rbp-54h]
  __int64 v14; // [rsp+18h] [rbp-48h]
  CChoreoActor *a; // [rsp+28h] [rbp-38h]

  v14 = 0;
  for ( i = 0; this->m_Actors.m_Size > i; ++v14 )
  {
    a = this->m_Actors.m_Memory.m_pMemory[v14];
    if ( a != 0 )
    {
      for ( j = 0; j < CChoreoActor::GetNumChannels(a); ++j )
      {
        Channel = CChoreoActor::GetChannel(a, j);
        if ( Channel != 0 )
        {
          for ( k = 0; k < CChoreoChannel::GetNumEvents(Channel); ++k )
          {
            Event = CChoreoChannel::GetEvent(Channel, k);
            v8 = Event;
            if ( Event != 0 && CChoreoEvent::IsUsingRelativeTag(Event) )
            {
              RelativeWavName = CChoreoEvent::GetRelativeWavName(v8);
              if ( V_stricmp_fast(wavname, RelativeWavName) == 0 )
              {
                RelativeTagName = CChoreoEvent::GetRelativeTagName(v8);
                if ( V_stricmp_fast(name, RelativeTagName) == 0 )
                  return v8;
              }
            }
          }
        }
      }
    }
    ++i;
  }
  return 0;
}


// CChoreoScene::FindTagByName  (line 2989, @0x0000000003082d70, libserver.so)  // inlines: strstr
// calls: CChoreoActor::GetNumChannels, CChoreoActor::GetChannel, CChoreoChannel::GetNumEvents, CChoreoChannel::GetEvent, CChoreoEvent::GetType, CChoreoEvent::GetParameters, strstr, CChoreoEvent::FindRelativeTag
// callers: CChoreoScene::ReconcileTags
CEventRelativeTag *__fastcall CChoreoScene::FindTagByName(
        CChoreoScene *const this,
        const char *wavname,
        const char *name)
{
  CChoreoActor **m_pMemory; // rax
  CChoreoActor *v4; // r14
  int v5; // r13d
  CChoreoChannel *Channel; // r12
  int j; // ebx
  CChoreoEvent *Event; // rax
  CChoreoEvent *v9; // r15
  const char *Parameters; // rax
  CEventRelativeTag *result; // rax
  int i; // [rsp+Ch] [rbp-54h]
  __int64 v14; // [rsp+18h] [rbp-48h]

  v14 = 0;
  for ( i = 0; this->m_Actors.m_Size > i; ++v14 )
  {
    m_pMemory = this->m_Actors.m_Memory.m_pMemory;
    v4 = m_pMemory[v14];
    if ( v4 != 0 )
    {
      v5 = 0;
      if ( CChoreoActor::GetNumChannels(m_pMemory[v14]) > 0 )
      {
        do
        {
          Channel = CChoreoActor::GetChannel(v4, v5);
          if ( Channel != 0 )
          {
            for ( j = 0; j < CChoreoChannel::GetNumEvents(Channel); ++j )
            {
              Event = CChoreoChannel::GetEvent(Channel, j);
              v9 = Event;
              if ( Event != 0 && CChoreoEvent::GetType(Event) == SPEAK )
              {
                Parameters = CChoreoEvent::GetParameters(v9);
                if ( strstr(Parameters, wavname) != 0 )
                {
                  result = CChoreoEvent::FindRelativeTag(v9, name);
                  if ( result != 0 )
                    return result;
                }
              }
            }
          }
          ++v5;
        }
        while ( v5 < CChoreoActor::GetNumChannels(v4) );
      }
    }
    ++i;
  }
  return 0;
}


// CChoreoScene::ExportEvents  (line 3031, @0x0000000003083990, libserver.so)  // inlines: FileSaveEvent, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CChoreoScene::FilePrintf, CChoreoEvent::GetActor, CChoreoScene::FileSaveEvent, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// strings: "// Choreo version 1:  <%i> Exported Events\n", "wt"
void __fastcall CChoreoScene::ExportEvents(
        CChoreoScene *const this,
        const char *filename,
        CUtlVector<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> > *const events)
{
  __int64 i; // rbx
  CChoreoEvent *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  CUtlBuffer buf; // [rsp+10h] [rbp-80h] BYREF

  if ( events->m_Size > 0 )
  {
    CUtlBuffer::CUtlBuffer(&buf, 0, 0, 1);
    CChoreoScene::FilePrintf(this, &buf, 0, "// Choreo version 1:  <%i> Exported Events\n", events->m_Size);
    for ( i = 0; events->m_Size > i; ++i )
    {
      while ( 1 )
      {
        v6 = events->m_Memory.m_pMemory[i];
        if ( CChoreoEvent::GetActor(v6) != 0 && (*(v6 + 440) & 0x40) != 0 )
          break;
        if ( events->m_Size <= ++i )
          goto LABEL_8;
      }
      CChoreoScene::FileSaveEvent(this, &buf, 0, v6);
    }
LABEL_8:
    v7 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(&g_pFullFileSystem->IBaseFileSystem, filename, "wt", 0);
    v8 = v7;
    if ( v7 != 0 )
    {
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(
        &g_pFullFileSystem->IBaseFileSystem,
        buf.m_Memory.m_pMemory,
        buf.m_Put,
        v7);
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v8);
    }
    CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  }
}


// CChoreoScene::ImportEvents  (line 3066, @0x0000000003086280, libserver.so)  // inlines: V_strlen
// calls: strlen, V_stricmp_fast, CChoreoScene::ParseEvent, CChoreoScene::ReconcileTags
void __fastcall CChoreoScene::ImportEvents(
        CChoreoScene *const this,
        ISceneTokenProcessor *tokenizer,
        CChoreoActor *actor,
        CChoreoChannel_0 *channel)
{
  ISceneTokenProcessor *i; // rdi
  __int64 v8; // rax
  const char *v9; // rax
  ISceneTokenProcessor *m_pTokenizer; // rdi
  void (*v11)(ISceneTokenProcessor *, const char *, ...); // r12
  const char *v12; // rax

  this->m_pTokenizer = tokenizer;
  for ( i = tokenizer; (*(i->_vptr_ISceneTokenProcessor + 1))(i, 1) != 0; i = this->m_pTokenizer )
  {
    v9 = this->m_pTokenizer->CurrentToken();
    if ( v9 == 0 || strlen(v9) <= 0 )
      break;
    v8 = this->m_pTokenizer->CurrentToken();
    if ( V_stricmp_fast(v8, "event") != 0 )
    {
      m_pTokenizer = this->m_pTokenizer;
      v11 = *(m_pTokenizer->_vptr_ISceneTokenProcessor + 3);
      v12 = m_pTokenizer->CurrentToken();
      v11(this->m_pTokenizer, "unexpected token %s\n", v12);
      break;
    }
    CChoreoScene::ParseEvent(this, actor, channel);
  }
  CChoreoScene::ReconcileTags(this);
}


// CChoreoScene::SetSubScene  (line 3095, @0x0000000003083050, libserver.so)
// callers: CSceneEntity::PrecacheScene, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList
void __fastcall CChoreoScene::SetSubScene(CChoreoScene *const this, bool sub)
{
  *(this + 356) = (4 * sub) | *(this + 356) & 0xFB;
}


// CChoreoScene::IsSubScene  (line 3100, @0x0000000003083070, libserver.so)
// callers: CSceneEntity::DispatchStartSubScene, CSceneEntity::ClearSchedules, CSceneEntity::ClearSceneEvents, CSceneEntity::PrecacheScene, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList
bool __fastcall CChoreoScene::IsSubScene(const CChoreoScene *const this)
{
  return (*(this + 356) & 4) != 0;
}


// CChoreoScene::GetSceneFPS  (line 3109, @0x0000000003083090, libserver.so)
int __fastcall CChoreoScene::GetSceneFPS(const CChoreoScene *const this)
{
  return this->m_nSceneFPS;
}


// CChoreoScene::SetSceneFPS  (line 3118, @0x00000000030830a0, libserver.so)
void __fastcall CChoreoScene::SetSceneFPS(CChoreoScene *const this, int fps)
{
  this->m_nSceneFPS = fps;
}


// CChoreoScene::IsUsingFrameSnap  (line 3127, @0x00000000030830b0, libserver.so)
bool __fastcall CChoreoScene::IsUsingFrameSnap(const CChoreoScene *const this)
{
  return (*(this + 356) & 8) != 0;
}


// CChoreoScene::SetUsingFrameSnap  (line 3136, @0x00000000030830d0, libserver.so)
void __fastcall CChoreoScene::SetUsingFrameSnap(CChoreoScene *const this, bool snap)
{
  *(this + 356) = (8 * snap) | *(this + 356) & 0xF7;
}


// CChoreoScene::SnapTime  (line 3146, @0x00000000030830f0, libserver.so)
// callers: CChoreoEvent::SnapTimes, CChoreoEvent::SnapTime
float __fastcall CChoreoScene::SnapTime(CChoreoScene *const this, float result, float t)
{
  if ( (*(this + 356) & 8) != 0 )
    return ((result * this->m_nSceneFPS) + 0.5) / this->m_nSceneFPS;
  return result;
}


// CChoreoScene::ReconcileGestureTimes  (line 3167, @0x0000000003083120, libserver.so)
// calls: CChoreoActor::GetChannel, CChoreoChannel::ReconcileGestureTimes, CChoreoActor::GetNumChannels
// callers: CChoreoScene::ParseFromBuffer
void __fastcall CChoreoScene::ReconcileGestureTimes(CChoreoScene *const this)
{
  __int64 v2; // r14
  int i; // r13d
  CChoreoActor *v4; // r12
  int j; // ebx
  CChoreoChannel *Channel; // rax

  v2 = 0;
  for ( i = 0; this->m_Actors.m_Size > i; ++v2 )
  {
    v4 = this->m_Actors.m_Memory.m_pMemory[v2];
    if ( v4 != 0 )
    {
      for ( j = 0; j < CChoreoActor::GetNumChannels(v4); ++j )
      {
        Channel = CChoreoActor::GetChannel(v4, j);
        if ( Channel != 0 )
          CChoreoChannel::ReconcileGestureTimes(Channel);
      }
    }
    ++i;
  }
}


// CChoreoScene::TimeZoomFirst  (line 3186, @0x00000000030831b0, libserver.so)  // inlines: First, FirstInorder, LeftChild, operator[]
int __fastcall CChoreoScene::TimeZoomFirst(CChoreoScene *const this)
{
  int result; // eax
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  int m_Left; // edx

  result = this->m_TimeZoomLookup.m_Elements.m_Tree.m_Root;
  if ( result != -1 )
  {
    m_pMemory = this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[result].m_Left;
    if ( m_Left != -1 )
    {
      while ( m_pMemory[m_Left].m_Left != -1 )
        m_Left = m_pMemory[m_Left].m_Left;
      return m_Left;
    }
  }
  return result;
}


// CChoreoScene::TimeZoomNext  (line 3191, @0x0000000003086530, libserver.so)  // inlines: Next, NextInorder
// calls: CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder
int __fastcall CChoreoScene::TimeZoomNext(CChoreoScene *const this, int i)
{
  return CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
           &this->m_TimeZoomLookup.m_Elements.m_Tree,
           i);
}


// CChoreoScene::TimeZoomInvalid  (line 3195, @0x0000000003083200, libserver.so)
int __fastcall CChoreoScene::TimeZoomInvalid(const CChoreoScene *const this)
{
  return -1;
}


// CChoreoScene::TimeZoomName  (line 3199, @0x0000000003083210, libserver.so)  // inlines: Element, GetElementName, Key, operator[]
const char *__fastcall CChoreoScene::TimeZoomName(CChoreoScene *const this, int i)
{
  return this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory[i].m_Data.key;
}


// CChoreoScene::GetTimeZoom  (line 3209, @0x0000000003088860, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, CUtlDict<int, int>::Insert
int __fastcall CChoreoScene::GetTimeZoom(const CChoreoScene *const this, const char *tool)
{
  CUtlDict<int,int> *p_m_TimeZoomLookup; // r13
  int v5; // eax
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( tool == 0 )
  {
    p_m_TimeZoomLookup = &this->m_TimeZoomLookup;
    goto LABEL_5;
  }
  search.key = tool;
  p_m_TimeZoomLookup = &this->m_TimeZoomLookup;
  v5 = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
         &this->m_TimeZoomLookup.m_Elements.m_Tree,
         &search);
  if ( v5 == -1 )
  {
LABEL_5:
    LODWORD(search.key) = 100;
    v5 = CUtlDict<int,int>::Insert(p_m_TimeZoomLookup, tool, &search);
  }
  return this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem;
}


// CChoreoScene::SetTimeZoom  (line 3226, @0x00000000030888f0, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, CUtlDict<int, int>::Insert
// callers: CChoreoScene::ParseScaleSettings
void __fastcall CChoreoScene::SetTimeZoom(CChoreoScene *const this, const char *tool, int tz)
{
  CUtlDict<int,int> *p_m_TimeZoomLookup; // r14
  int v7; // eax
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  if ( tool == 0 )
  {
    p_m_TimeZoomLookup = &this->m_TimeZoomLookup;
    goto LABEL_5;
  }
  search.key = tool;
  p_m_TimeZoomLookup = &this->m_TimeZoomLookup;
  v7 = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
         &this->m_TimeZoomLookup.m_Elements.m_Tree,
         &search);
  if ( v7 == -1 )
  {
LABEL_5:
    LODWORD(search.key) = 100;
    v7 = CUtlDict<int,int>::Insert(p_m_TimeZoomLookup, tool, &search);
  }
  this->m_TimeZoomLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem = tz;
}


// CChoreoScene::ParseScaleSettings  (line 3238, @0x0000000003088980, libserver.so)  // inlines: V_strlen, V_strncpy<long unsigned int>
// calls: V_stricmp_fast, strlen, _V_strncpy, V_atoi, CChoreoScene::SetTimeZoom, __stack_chk_fail
// callers: CChoreoScene::ParseFromBuffer
// strings: "expecting scalesettings data\n", "expecting {\n"
void __fastcall CChoreoScene::ParseScaleSettings(CChoreoScene *const this, ISceneTokenProcessor *tokenizer)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  const char *v9; // rax
  char tool[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v11; // [rsp+108h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
  v4 = tokenizer->CurrentToken();
  if ( V_stricmp_fast(v4, "{") != 0 )
    (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting {\n");
  while ( 1 )
  {
    (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 1);
    v9 = tokenizer->CurrentToken();
    if ( v9 == 0 || strlen(v9) <= 0 )
      break;
    v5 = tokenizer->CurrentToken();
    if ( V_stricmp_fast(v5, "}") == 0 )
      return;
    v6 = tokenizer->CurrentToken();
    _V_strncpy(tool, v6, 256);
    (*(tokenizer->_vptr_ISceneTokenProcessor + 1))(tokenizer, 0);
    v7 = tokenizer->CurrentToken();
    v8 = V_atoi(v7);
    if ( v8 <= 0 )
      v8 = 100;
    CChoreoScene::SetTimeZoom(this, tool, v8);
  }
  (*(tokenizer->_vptr_ISceneTokenProcessor + 3))(tokenizer, "expecting scalesettings data\n");
}


// CChoreoScene::Merge  (line 3273, @0x0000000003087570, libserver.so)
// calls: CChoreoEvent::GetActor, CChoreoActor::GetName, CChoreoScene::FindActor, CChoreoActor::GetNumChannels, CChoreoActor::GetChannel, CChoreoChannel::GetName, CChoreoActor::FindChannel, CChoreoChannel::GetEvent, CChoreoScene::AllocEvent, CChoreoEvent::operator=, CChoreoEvent::SetScene, CChoreoChannel::AddEvent (24 total)
// strings: "Merged in (%i) actors, (%i) channels, and (%i) events\n"
bool __fastcall CChoreoScene::Merge(CChoreoScene *const this, CChoreoScene *other)
{
  __int64 v3; // r13
  int v4; // ebx
  CChoreoEvent *v6; // r12
  const char *Name; // rax
  CChoreoChannel *Channel; // r13
  const char *v9; // rax
  CChoreoChannel *v10; // r14
  __int64 v11; // r12
  CChoreoEvent *v12; // rbx
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int acount; // [rsp+8h] [rbp-68h]
  int ccount; // [rsp+Ch] [rbp-64h]
  __int64 i; // [rsp+18h] [rbp-58h]
  CChoreoActor *a; // [rsp+20h] [rbp-50h]
  CChoreoActor *destActor; // [rsp+28h] [rbp-48h]
  int j; // [rsp+30h] [rbp-40h]
  int ecount; // [rsp+34h] [rbp-3Ch]
  const CChoreoEvent *newEventb; // [rsp+38h] [rbp-38h]
  int newEvent; // [rsp+38h] [rbp-38h]
  CChoreoEvent *newEventa; // [rsp+38h] [rbp-38h]

  if ( other->m_Events.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    ecount = 0;
    do
    {
      v6 = other->m_Events.m_Memory.m_pMemory[v3];
      if ( CChoreoEvent::GetActor(v6) == 0 )
      {
        newEventa = CChoreoScene::AllocEvent(this);
        CChoreoEvent::operator=(newEventa, v6);
        CChoreoEvent::SetScene(newEventa, this);
        ++ecount;
      }
      ++v4;
      ++v3;
    }
    while ( other->m_Events.m_Size > v4 );
    if ( other->m_Actors.m_Size > 0 )
      goto LABEL_7;
LABEL_20:
    ccount = 0;
    acount = 0;
    goto LABEL_18;
  }
  ecount = 0;
  if ( other->m_Actors.m_Size <= 0 )
    goto LABEL_20;
LABEL_7:
  i = 0;
  ccount = 0;
  acount = 0;
  do
  {
    a = other->m_Actors.m_Memory.m_pMemory[i];
    Name = CChoreoActor::GetName(a);
    destActor = CChoreoScene::FindActor(this, Name);
    if ( destActor == 0 )
    {
      destActor = CChoreoScene::AllocActor(this);
      CChoreoActor::operator=(destActor, a);
      CChoreoActor::RemoveAllChannels(destActor);
      ++acount;
    }
    for ( j = 0; j < CChoreoActor::GetNumChannels(a); ecount = newEvent )
    {
      Channel = CChoreoActor::GetChannel(a, j);
      v9 = CChoreoChannel::GetName(Channel);
      v10 = CChoreoActor::FindChannel(destActor, v9);
      if ( v10 == 0 )
      {
        v10 = CChoreoScene::AllocChannel(this);
        CChoreoChannel::operator=(v10, Channel);
        CChoreoChannel::RemoveAllEvents(v10);
        ++ccount;
        CChoreoActor::AddChannel(destActor, v10);
        CChoreoChannel::SetActor(v10, destActor);
      }
      v11 = 0;
      while ( 1 )
      {
        v13 = v11;
        v14 = v11++ + ecount;
        newEvent = v14;
        if ( v13 >= CChoreoChannel::GetNumEvents(Channel) )
          break;
        newEventb = CChoreoChannel::GetEvent(Channel, v13);
        v12 = CChoreoScene::AllocEvent(this);
        CChoreoEvent::operator=(v12, newEventb);
        CChoreoEvent::SetScene(v12, this);
        CChoreoChannel::AddEvent(v10, v12);
        CChoreoEvent::SetChannel(v12, v10);
        CChoreoEvent::SetActor(v12, destActor);
      }
      ++j;
    }
    v15 = i++;
  }
  while ( other->m_Actors.m_Size > v15 + 1 );
LABEL_18:
  Msg("Merged in (%i) actors, (%i) channels, and (%i) events\n", acount, ccount, ecount);
  return (ccount | ecount | acount) != 0;
}


// CChoreoScene::ReconcileCloseCaption  (line 3364, @0x0000000003083230, libserver.so)
// calls: CChoreoActor::GetChannel, CChoreoChannel::ReconcileCloseCaption, CChoreoActor::GetNumChannels
// callers: CChoreoScene::RestoreFromBinaryBuffer, CChoreoScene::ParseFromBuffer
void __fastcall CChoreoScene::ReconcileCloseCaption(CChoreoScene *const this)
{
  __int64 v2; // r14
  int i; // r13d
  CChoreoActor *v4; // r12
  int j; // ebx
  CChoreoChannel *Channel; // rax

  v2 = 0;
  for ( i = 0; this->m_Actors.m_Size > i; ++v2 )
  {
    v4 = this->m_Actors.m_Memory.m_pMemory[v2];
    if ( v4 != 0 )
    {
      for ( j = 0; j < CChoreoActor::GetNumChannels(v4); ++j )
      {
        Channel = CChoreoActor::GetChannel(v4, j);
        if ( Channel != 0 )
          CChoreoChannel::ReconcileCloseCaption(Channel);
      }
    }
    ++i;
  }
}


// CChoreoScene::GetFilename  (line 3387, @0x00000000030832c0, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CSceneEntity::DispatchStartSpeak, CSceneEntity::FindNamedActor, CChoreoEvent::ComputeCombinedBaseFileName
const char *__fastcall CChoreoScene::GetFilename(const CChoreoScene *const this)
{
  return CUtlString::Get(&this->m_sFileName);
}


// CChoreoScene::SetFileName  (line 3393, @0x00000000030832e0, libserver.so)
// calls: CUtlString::operator=
void __fastcall CChoreoScene::SetFileName(CChoreoScene *const this, const char *fn)
{
  CUtlString::operator=(&this->m_sFileName, fn);
}


// CChoreoScene::GetPlayingSoundName  (line 3399, @0x0000000003083300, libserver.so)  // inlines: V_strncpy<int>
// calls: CChoreoEvent::GetType, CChoreoEvent::IsProcessing, CChoreoEvent::GetParameters, _V_strncpy
// callers: CSceneEntity::PitchShiftPlayback
bool __fastcall CChoreoScene::GetPlayingSoundName(CChoreoScene *const this, char *pchBuff, int iBuffLength)
{
  __int64 v5; // rbx
  int v6; // r12d
  const CChoreoEvent *v7; // r13
  bool IsProcessing; // al
  const char *Parameters; // rax
  bool v12; // [rsp+4h] [rbp-3Ch]

  if ( this->m_Events.m_Size <= 0 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = this->m_Events.m_Memory.m_pMemory[v5];
    if ( CChoreoEvent::GetType(v7) == SPEAK )
    {
      IsProcessing = CChoreoEvent::IsProcessing(v7);
      if ( IsProcessing )
        break;
    }
    ++v6;
    ++v5;
    if ( this->m_Events.m_Size <= v6 )
      return 0;
  }
  v12 = IsProcessing;
  Parameters = CChoreoEvent::GetParameters(v7);
  _V_strncpy(pchBuff, Parameters, iBuffLength);
  return v12;
}


// CChoreoScene::HasUnplayedSpeech  (line 3417, @0x00000000030833a0, libserver.so)
// calls: CChoreoEvent::GetType, CChoreoEvent::GetStartTime
// callers: CSceneEntity::HasUnplayedSpeech, CSceneManager::IsRunningScriptedSceneWithSpeech, CSceneManager::IsRunningScriptedSceneWithSpeechAndNotPaused
bool __fastcall CChoreoScene::HasUnplayedSpeech(const CChoreoScene *const this)
{
  int v2; // r12d
  __int64 v3; // rbx
  const CChoreoEvent *v4; // r14
  float m_flCurrentTime; // [rsp+Ch] [rbp-24h]

  v2 = 0;
  v3 = 0;
  if ( this->m_Events.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = this->m_Events.m_Memory.m_pMemory[v3];
    if ( CChoreoEvent::GetType(v4) == SPEAK )
    {
      m_flCurrentTime = this->m_flCurrentTime;
      if ( CChoreoEvent::GetStartTime(v4) > m_flCurrentTime )
        break;
    }
    ++v2;
    ++v3;
    if ( this->m_Events.m_Size <= v2 )
      return 0;
  }
  return 1;
}


// CChoreoScene::HasFlexAnimation  (line 3436, @0x0000000003083430, libserver.so)
// calls: CChoreoEvent::GetType, CChoreoEvent::GetStartTime, CChoreoEvent::GetEndTime
// callers: CSceneEntity::HasFlexAnimation
bool __fastcall CChoreoScene::HasFlexAnimation(const CChoreoScene *const this)
{
  int v2; // r12d
  __int64 v3; // rbx
  const CChoreoEvent *v4; // r14
  float m_flCurrentTime; // [rsp+Ch] [rbp-24h]
  float v7; // [rsp+Ch] [rbp-24h]

  v2 = 0;
  v3 = 0;
  if ( this->m_Events.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = this->m_Events.m_Memory.m_pMemory[v3];
    if ( CChoreoEvent::GetType(v4) == FLEXANIMATION )
    {
      m_flCurrentTime = this->m_flCurrentTime;
      if ( m_flCurrentTime >= CChoreoEvent::GetStartTime(v4) )
      {
        v7 = this->m_flCurrentTime;
        if ( CChoreoEvent::GetEndTime(v4) >= v7 )
          break;
      }
    }
    ++v2;
    ++v3;
    if ( this->m_Events.m_Size <= v2 )
      return 0;
  }
  return 1;
}


// CChoreoScene::SetBackground  (line 3456, @0x00000000030834d0, libserver.so)
// callers: CInstancedSceneEntity::OnLoaded, CSceneEntity::SetBackground, InstancedScriptedScene, CInstancedSceneEntity::OnRestore
void __fastcall CChoreoScene::SetBackground(CChoreoScene *const this, bool bIsBackground)
{
  *(this + 356) = bIsBackground | *(this + 356) & 0xFE;
}


// CChoreoScene::IsBackground  (line 3464, @0x00000000030834f0, libserver.so)
// callers: CBaseFlex::ProcessSceneEvents, CBaseFlex::IsSuppressedFlexAnimation, CSceneEntity::IsBackground, CSceneManager::IsInInterruptableScenes
bool __fastcall CChoreoScene::IsBackground(const CChoreoScene *const this)
{
  return *(this + 356) & 1;
}


// CChoreoScene::HasEventsOfType  (line 3469, @0x0000000003083500, libserver.so)  // inlines: BitVec_IsBitSet, IsBitSet
// callers: CSceneEntity::ShouldNetwork
bool __fastcall CChoreoScene::HasEventsOfType(
        const CChoreoScene *const this,
        CChoreoScene::HasEventsOfType::EVENTTYPE type)
{
  return ((1 << type) & this->m_bitvecHasEventOfType.m_Ints[type >> 5]) != 0;
}


// CChoreoScene::CurveHasEndTime  (line 3475, @0x000000000307fd10, libserver.so)
bool __fastcall CChoreoScene::CurveHasEndTime(const CChoreoScene *const this)
{
  return 1;
}


// CChoreoScene::GetDefaultCurveType  (line 3480, @0x000000000307fd20, libserver.so)
int __fastcall CChoreoScene::GetDefaultCurveType(const CChoreoScene *const this)
{
  return 257;
}


// CChoreoScene::GetDefaultEdgeValue  (line 3485, @0x000000000307fd30, libserver.so)
float __fastcall CChoreoScene::GetDefaultEdgeValue(const CChoreoScene *const this)
{
  return 0.0;
}


// CChoreoScene::SaveBinary  (line 3490, @0x0000000003087380, libserver.so)  // inlines: ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CChoreoScene::SaveToBinaryBuffer, CUtlMemory<unsigned char, int>::Purge, Warning, _Unwind_Resume
// strings: "wb", "Forcing '%s' to be writable!!!\n", "Unable to open '%s' for writing!!!\n"
bool __fastcall CChoreoScene::SaveBinary(
        CChoreoScene *const this,
        const char *pszBinaryFileName,
        const char *pPathID,
        unsigned int nTextVersionCRC,
        IChoreoStringPool *pStringPool)
{
  __int64 v9; // rax
  __int64 v10; // r14
  bool v11; // bl
  CUtlBuffer buf; // [rsp+10h] [rbp-80h] BYREF

  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
  CChoreoScene::SaveToBinaryBuffer(this, &buf, nTextVersionCRC, pStringPool);
  if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
         &g_pFullFileSystem->IBaseFileSystem,
         pszBinaryFileName,
         pPathID) != 0
    && (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 11))(
         &g_pFullFileSystem->IBaseFileSystem,
         pszBinaryFileName,
         pPathID) == 0 )
  {
    Warning("Forcing '%s' to be writable!!!\n", pszBinaryFileName);
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 12))(
      &g_pFullFileSystem->IBaseFileSystem,
      pszBinaryFileName,
      1,
      pPathID);
  }
  v9 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(
         &g_pFullFileSystem->IBaseFileSystem,
         pszBinaryFileName,
         "wb",
         pPathID);
  v10 = v9;
  if ( v9 != 0 )
  {
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(
      &g_pFullFileSystem->IBaseFileSystem,
      buf.m_Memory.m_pMemory,
      buf.m_Put,
      v9);
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v10);
    v11 = 1;
  }
  else
  {
    Warning("Unable to open '%s' for writing!!!\n", pszBinaryFileName);
    v11 = 0;
  }
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v11;
}


// CChoreoScene::SaveToBinaryBuffer  (line 3521, @0x0000000003086c70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CChoreoActor*>, CopyConstruct<CChoreoEvent*>, Element, GrowMemory, LowLevelByteSwap<int>, PeekPut, Purge, PutChar, PutInt, PutTabs, PutType<int>, PutType<short unsigned int>, PutTypeBin<char>, PutTypeBin<int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, RemoveAll, SwapBufferToTargetEndian<int>, V_memcpy, WasLastCharacterCR, memcpy, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CChoreoEvent::GetActor, CChoreoEvent::SaveToBuffer, CUtlMemory<CChoreoActor*, int>::Grow, CChoreoActor::SaveToBuffer, CCurveData::SaveToBuffer, CUtlMemory<CChoreoActor*, int>::Purge, CUtlMemory<CChoreoEvent*, int>::Purge, CUtlMemory<CChoreoEvent*, int>::Grow, CUtlVectorBase<CChoreoActor*, CUtlMemory<CChoreoActor*, int> >::~CUtlVectorBase (14 total)
// callers: CChoreoScene::SaveBinary
// strings: "%hu"
void __fastcall CChoreoScene::SaveToBinaryBuffer(
        CChoreoScene *const this,
        CUtlBuffer *const buf,
        unsigned int nTextVersionCRC,
        IChoreoStringPool *pStringPool)
{
  unsigned __int8 m_Flags; // al
  int v8; // edx
  int m_nOffset; // esi
  int m_nTab; // r12d
  int m_Size; // eax
  __int64 v12; // r13
  int v13; // r12d
  CChoreoEvent *v14; // r15
  int v15; // eax
  CChoreoEvent **v16; // rax
  int v17; // r12d
  int m_Size_low; // r13d
  __int64 v19; // r13
  unsigned __int64 v20; // r12
  int v21; // r15d
  __int64 v22; // r12
  __int64 v23; // r13
  int v24; // edx
  CChoreoActor **v25; // rax
  CChoreoActor *v26; // r15
  int v27; // eax
  unsigned __int64 v28; // r12
  __int64 v29; // r13
  bool v30; // bl
  int v31; // eax
  int m_Put; // eax
  unsigned __int8 *v33; // rdx
  unsigned __int8 *v34; // rdx
  int v35; // [rsp+10h] [rbp-A0h]
  CUtlVector<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> > eventList; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<CChoreoActor*,CUtlMemory<CChoreoActor*,int> > actorList; // [rsp+60h] [rbp-50h] BYREF

  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", 1684239970);
  }
  else if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v34 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v34 != 0 )
      {
        actorList.m_Size = 1651925860;
        *v34 = 1651925860;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 1684239970;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  m_Flags = buf->m_Flags;
  v8 = buf->m_Put;
  if ( (m_Flags & 1) != 0 )
  {
    m_nOffset = buf->m_nOffset;
    if ( v8 != m_nOffset && buf->m_Memory.m_pMemory[v8 - 1 - m_nOffset] == 10 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) != 0 )
        goto LABEL_7;
      goto LABEL_69;
    }
  }
  if ( v8 == 0 )
  {
    m_nTab = 0;
    if ( (m_Flags & 0x10) == 0 )
LABEL_69:
      m_nTab = buf->m_nTab;
LABEL_7:
    while ( --m_nTab >= 0 )
    {
      while ( CUtlBuffer::CheckPut(buf, 1) )
      {
        buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 9;
        ++buf->m_Put;
        CUtlBuffer::AddNullTermination(buf);
        if ( --m_nTab < 0 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 7;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
    if ( (buf->m_Flags & 1) != 0 )
      goto LABEL_12;
  }
  else if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_12:
    CUtlBuffer::Printf(buf, "%d", nTextVersionCRC);
    goto LABEL_13;
  }
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v31 = buf->m_Put;
      v33 = &buf->m_Memory.m_pMemory[v31 - buf->m_nOffset];
      if ( v33 != 0 )
      {
        LOBYTE(actorList.m_Size) = HIBYTE(nTextVersionCRC);
        BYTE1(actorList.m_Size) = BYTE2(nTextVersionCRC);
        BYTE2(actorList.m_Size) = BYTE1(nTextVersionCRC);
        HIBYTE(actorList.m_Size) = nTextVersionCRC;
        *v33 = actorList.m_Size;
        v31 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = nTextVersionCRC;
      v31 = buf->m_Put;
    }
    buf->m_Put = v31 + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
LABEL_13:
  m_Size = this->m_Events.m_Size;
  eventList.m_Size = 0;
  eventList.m_Memory.m_pMemory = 0;
  eventList.m_Memory.m_nAllocationCount = 0;
  eventList.m_Memory.m_nGrowSize = 0;
  if ( m_Size <= 0 )
  {
    m_Size_low = 0;
    v17 = 0;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = this->m_Events.m_Memory.m_pMemory[v12];
        if ( CChoreoEvent::GetActor(v14) == 0 )
        {
          v15 = eventList.m_Size;
          v35 = eventList.m_Size;
          if ( eventList.m_Size == eventList.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CChoreoEvent *,int>::Grow(&eventList.m_Memory, 1);
            v15 = eventList.m_Size;
          }
          eventList.m_Size = v15 + 1;
          v16 = &eventList.m_Memory.m_pMemory[v35];
          if ( v16 != 0 )
            break;
        }
        ++v13;
        ++v12;
        if ( this->m_Events.m_Size <= v13 )
          goto LABEL_21;
      }
      *v16 = v14;
      ++v13;
      ++v12;
    }
    while ( this->m_Events.m_Size > v13 );
LABEL_21:
    v17 = eventList.m_Size;
    m_Size_low = LOBYTE(eventList.m_Size);
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%hu", m_Size_low);
  }
  else if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = m_Size_low;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
  if ( v17 > 0 )
  {
    v19 = 8LL * (v17 - 1) + 8;
    v20 = 0;
    do
    {
      CChoreoEvent::SaveToBuffer(eventList.m_Memory.m_pMemory[v20 / 8], buf, this, pStringPool);
      v20 += 8LL;
    }
    while ( v20 != v19 );
  }
  v21 = this->m_Actors.m_Size;
  v22 = 0;
  v23 = 0;
  actorList.m_Size = 0;
  actorList.m_Memory.m_pMemory = 0;
  actorList.m_Memory.m_nAllocationCount = 0;
  actorList.m_Memory.m_nGrowSize = 0;
  if ( v21 > 0 )
  {
    while ( 1 )
    {
      v26 = this->m_Actors.m_Memory.m_pMemory[v22];
      if ( v26 == 0 )
        goto LABEL_31;
      v27 = v23;
      if ( actorList.m_Memory.m_nAllocationCount == v23 )
      {
        CUtlMemory<CChoreoActor *,int>::Grow(&actorList.m_Memory, 1);
        v27 = actorList.m_Size;
      }
      v24 = v27 + 1;
      actorList.m_Size = v27 + 1;
      v25 = &actorList.m_Memory.m_pMemory[v23];
      if ( v25 != 0 )
      {
        *v25 = v26;
        v23 = actorList.m_Size;
LABEL_31:
        if ( this->m_Actors.m_Size <= ++v22 )
          goto LABEL_39;
      }
      else
      {
        ++v22;
        v23 = v24;
        if ( this->m_Actors.m_Size <= v22 )
        {
LABEL_39:
          LODWORD(v22) = v23;
          break;
        }
      }
    }
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%hu", v22);
  }
  else if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v22;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
  }
  if ( v23 > 0 )
  {
    v28 = 0;
    v29 = 8LL * (v23 - 1) + 8;
    do
    {
      CChoreoActor::SaveToBuffer(actorList.m_Memory.m_pMemory[v28 / 8], buf, this, pStringPool);
      v28 += 8LL;
    }
    while ( v28 != v29 );
  }
  CCurveData::SaveToBuffer(&this->m_SceneRamp, buf, pStringPool);
  v30 = (*(this + 356) & 2) != 0;
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%hu", v30);
  }
  else if ( CUtlBuffer::CheckPut(buf, 1) )
  {
    buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v30;
    ++buf->m_Put;
    CUtlBuffer::AddNullTermination(buf);
    actorList.m_Size = 0;
    if ( (actorList.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_48;
    goto LABEL_57;
  }
  actorList.m_Size = 0;
  if ( (actorList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_57:
    CUtlMemory<CChoreoActor *,int>::Purge(&actorList.m_Memory);
    if ( (actorList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CChoreoActor *,int>::Purge(&actorList.m_Memory);
      if ( (eventList.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        return;
      goto LABEL_59;
    }
  }
LABEL_48:
  if ( (eventList.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return;
LABEL_59:
  CUtlMemory<CChoreoEvent *,int>::Purge(&eventList.m_Memory);
  if ( (eventList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CChoreoEvent *,int>::Purge(&eventList.m_Memory);
}


// CChoreoScene::GetCRCFromBinaryBuffer  (line 3593, @0x0000000003083530, libserver.so)  // inlines: GetChar, GetInt, GetType<int>, GetTypeBin<char>, GetTypeBin<int>, GetTypeText<int>, LowLevelByteSwap<int>, PeekGet, StringToNumber<int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::SeekGet, V_strtoi64, CUtlBuffer::CheckGet
bool __fastcall CChoreoScene::GetCRCFromBinaryBuffer(CUtlBuffer *const buf, unsigned int *const crc)
{
  int m_Get; // r13d
  bool v5; // r12
  int v7; // r12d
  int v8; // eax
  int v9; // edx
  int v10; // eax
  bool v11; // al
  __int64 v12; // rdx
  int v13; // edx
  int v14; // eax
  unsigned __int8 *v15; // rax
  bool v16; // al
  int v17; // ecx
  int v18; // r12d
  int v19; // eax
  unsigned __int8 *v20; // rax
  int v21; // [rsp+0h] [rbp-30h] BYREF
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  _QWORD v23[5]; // [rsp+8h] [rbp-28h] BYREF

  m_Get = buf->m_Get;
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
      goto LABEL_3;
    v23[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v7 = v23[0];
    v8 = V_strtoi64(v23[0], v23, 10);
    v21 = v8;
    if ( LODWORD(v23[0]) != v7 )
      buf->m_Get += LODWORD(v23[0]) - v7;
    if ( v8 != 1684239970 )
      goto LABEL_3;
  }
  else
  {
    v5 = 0;
    if ( !CUtlBuffer::CheckGet(buf, 4) )
      goto LABEL_4;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v13 = buf->m_Get;
      v15 = &buf->m_Memory.m_pMemory[v13 - buf->m_nOffset];
      if ( v15 == 0 )
        v15 = &v21;
      LODWORD(v23[0]) = v21;
      LOBYTE(v23[0]) = v15[3];
      BYTE1(v23[0]) = v15[2];
      BYTE2(v23[0]) = v15[1];
      BYTE3(v23[0]) = *v15;
      v14 = v23[0];
    }
    else
    {
      v13 = buf->m_Get;
      v14 = *&buf->m_Memory.m_pMemory[v13 - buf->m_nOffset];
    }
    buf->m_Get = v13 + 4;
    if ( v14 != 1684239970 )
      goto LABEL_3;
  }
  if ( !CUtlBuffer::CheckGet(buf, 1)
    || (v9 = buf->m_Get,
        v10 = v9 + 1,
        LOBYTE(v9) = buf->m_Memory.m_pMemory[v9 - buf->m_nOffset],
        buf->m_Get = v10,
        v9 <= 3u) )
  {
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v11 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement);
    v12 = 0;
    if ( v11 )
    {
      LOBYTE(v12) = 10;
      v23[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v18 = v23[0];
      v19 = V_strtoi64(v23[0], v23, v12);
      v21 = v19;
      if ( LODWORD(v23[0]) != v18 )
        buf->m_Get += LODWORD(v23[0]) - v18;
      LODWORD(v12) = v19;
    }
  }
  else
  {
    v16 = CUtlBuffer::CheckGet(buf, 4);
    LODWORD(v12) = 0;
    if ( v16 )
    {
      if ( (*&buf->m_Byteswap & 1) != 0 )
      {
        v17 = buf->m_Get;
        v20 = &buf->m_Memory.m_pMemory[v17 - buf->m_nOffset];
        if ( v20 == 0 )
          v20 = &v21;
        LODWORD(v23[0]) = v21;
        LOBYTE(v23[0]) = v20[3];
        BYTE1(v23[0]) = v20[2];
        BYTE2(v23[0]) = v20[1];
        BYTE3(v23[0]) = *v20;
        LODWORD(v12) = v23[0];
      }
      else
      {
        v17 = buf->m_Get;
        LODWORD(v12) = *&buf->m_Memory.m_pMemory[v17 - buf->m_nOffset];
      }
      buf->m_Get = v17 + 4;
    }
  }
  *crc = v12;
  v5 = 1;
LABEL_4:
  CUtlBuffer::SeekGet(buf, CUtlBuffer::SeekType_t::SEEK_HEAD, m_Get);
  return v5;
}


// CChoreoScene::RestoreFromTextBuffer  (line 3615, @0x0000000003088d90, libserver.so)
// calls: CSceneTokenProcessor::CSceneTokenProcessor, CChoreoScene::ParseFromBuffer, __stack_chk_fail
bool __fastcall CChoreoScene::RestoreFromTextBuffer(
        CChoreoScene *const this,
        CUtlBuffer *const buf,
        const char *filename)
{
  CSceneTokenProcessor tokenizer; // [rsp+0h] [rbp-540h] BYREF
  unsigned __int64 v7; // [rsp+518h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CSceneTokenProcessor::CSceneTokenProcessor(&tokenizer, buf);
  return CChoreoScene::ParseFromBuffer(this, filename, &tokenizer);
}


// CChoreoScene::RestoreFromBinaryBuffer  (line 3622, @0x0000000003087820, libserver.so)  // inlines: FindStopTime, GetChar, GetInt, GetType<int>, GetType<short unsigned int>, GetTypeBin<char>, GetTypeBin<int>, GetTypeBin<unsigned char>, GetTypeText<int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, LowLevelByteSwap<int>, PeekGet, StringToNumber<int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlString::operator=, CUtlBuffer::CheckArbitraryPeekGet, V_strtoi64, CUtlBuffer::CheckGet, CCurveData::RestoreFromBuffer, CUtlBuffer::GetUnsignedChar, CChoreoScene::ReconcileCloseCaption, CChoreoScene::InternalDetermineEventTypes, CChoreoScene::AllocEvent, CChoreoEvent::RestoreFromBuffer, CChoreoScene::AllocActor, CChoreoActor::RestoreFromBuffer (14 total)
// callers: CSceneEntity::LoadScene
// globals: CChoreoScene::s_bEditingDisabled
bool __fastcall CChoreoScene::RestoreFromBinaryBuffer(
        CChoreoScene *const this,
        CUtlBuffer *const buf,
        const char *filename,
        IChoreoStringPool *pStringPool)
{
  bool v7; // r13
  int v9; // r13d
  int v10; // eax
  int v11; // edx
  SceneBinaryVersion_t v12; // r13d
  float m_flPrecomputedStopTime; // xmm0_4
  int m_Get; // edx
  int v15; // eax
  unsigned __int8 *v16; // rax
  int v17; // edx
  int v18; // r15d
  int v19; // r15d
  CChoreoEvent *v20; // rax
  int v21; // r15d
  int v22; // edx
  int v23; // r15d
  int v24; // r15d
  CChoreoActor *v25; // rax
  int v26; // r15d
  unsigned __int8 v27; // al
  int v28; // r15d
  unsigned __int8 v29; // al
  int actorCount; // [rsp+Ch] [rbp-44h]
  int actorCounta; // [rsp+Ch] [rbp-44h]
  int v32; // [rsp+10h] [rbp-40h] BYREF
  int nIncrement; // [rsp+14h] [rbp-3Ch] BYREF
  _QWORD v34[7]; // [rsp+18h] [rbp-38h] BYREF

  CUtlString::operator=(&this->m_sFileName, filename);
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
      return 0;
    v34[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v9 = v34[0];
    v10 = V_strtoi64(v34[0], v34, 10);
    v32 = v10;
    if ( LODWORD(v34[0]) != v9 )
      buf->m_Get += LODWORD(v34[0]) - v9;
    if ( v10 != 1684239970 )
      return 0;
  }
  else
  {
    v7 = CUtlBuffer::CheckGet(buf, 4);
    if ( !v7 )
      return v7;
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Get = buf->m_Get;
      v16 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
      if ( v16 == 0 )
        v16 = &v32;
      LODWORD(v34[0]) = v32;
      LOBYTE(v34[0]) = v16[3];
      BYTE1(v34[0]) = v16[2];
      BYTE2(v34[0]) = v16[1];
      BYTE3(v34[0]) = *v16;
      v15 = v34[0];
    }
    else
    {
      m_Get = buf->m_Get;
      v15 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
    }
    buf->m_Get = m_Get + 4;
    if ( v15 != 1684239970 )
      return 0;
  }
  if ( !CUtlBuffer::CheckGet(buf, 1) )
    return 0;
  v11 = buf->m_Get;
  v12 = buf->m_Memory.m_pMemory[v11 - buf->m_nOffset];
  buf->m_Get = v11 + 1;
  if ( v12 <= 3u )
    return 0;
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
    {
      v34[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
      v21 = v34[0];
      v32 = V_strtoi64(v34[0], v34, 10);
      if ( LODWORD(v34[0]) != v21 )
        buf->m_Get += LODWORD(v34[0]) - v21;
    }
  }
  else if ( CUtlBuffer::CheckGet(buf, 4) )
  {
    buf->m_Get += 4;
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
      goto LABEL_14;
    v34[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v26 = v34[0];
    v27 = V_strtoui64(v34[0], v34, 10);
    if ( LODWORD(v34[0]) != v26 )
      buf->m_Get += LODWORD(v34[0]) - v26;
    actorCount = v27;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 1) )
      goto LABEL_14;
    v17 = buf->m_Get;
    v18 = buf->m_Memory.m_pMemory[v17 - buf->m_nOffset];
    buf->m_Get = v17 + 1;
    actorCount = v18;
  }
  if ( actorCount != 0 )
  {
    v19 = 0;
    do
    {
      v20 = CChoreoScene::AllocEvent(this);
      if ( !CChoreoEvent::RestoreFromBuffer(v20, v12, buf, this, pStringPool) )
        return 0;
    }
    while ( ++v19 != actorCount );
  }
LABEL_14:
  if ( (buf->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &nIncrement) )
      goto LABEL_16;
    v34[0] = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
    v28 = v34[0];
    v29 = V_strtoui64(v34[0], v34, 10);
    if ( LODWORD(v34[0]) != v28 )
      buf->m_Get += LODWORD(v34[0]) - v28;
    actorCounta = v29;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(buf, 1) )
      goto LABEL_16;
    v22 = buf->m_Get;
    v23 = buf->m_Memory.m_pMemory[v22 - buf->m_nOffset];
    buf->m_Get = v22 + 1;
    actorCounta = v23;
  }
  if ( actorCounta != 0 )
  {
    v24 = 0;
    do
    {
      v25 = CChoreoScene::AllocActor(this);
      if ( !CChoreoActor::RestoreFromBuffer(v25, v12, buf, this, pStringPool) )
        return 0;
    }
    while ( ++v24 != actorCounta );
  }
LABEL_16:
  v7 = CCurveData::RestoreFromBuffer(&this->m_SceneRamp, v12, buf, pStringPool);
  if ( !v7 )
    return 0;
  *(this + 356) = (2 * (CUtlBuffer::GetUnsignedChar(buf) != 0)) | *(this + 356) & 0xFD;
  CChoreoScene::ReconcileCloseCaption(this);
  CChoreoScene::InternalDetermineEventTypes(this);
  if ( CChoreoScene::s_bEditingDisabled )
  {
    m_flPrecomputedStopTime = this->m_flPrecomputedStopTime;
    if ( m_flPrecomputedStopTime == 0.0 )
      m_flPrecomputedStopTime = CChoreoScene::FindStopTime(this);
    this->m_flPrecomputedStopTime = m_flPrecomputedStopTime;
  }
  return v7;
}


// CChoreoScene::FindEvent  (line 3692, @0x0000000003083780, libserver.so)
// calls: CChoreoScene::GetEvent
CChoreoEvent *__fastcall CChoreoScene::FindEvent(const CChoreoScene *const this, ChoreoObjectHandle_t h)
{
  int m_Size; // r13d
  int v5; // ebx
  CChoreoEvent *result; // rax

  m_Size = this->m_Events.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    result = CChoreoScene::GetEvent(this, v5);
    if ( result->m_hChoreoObjectHandle == h )
      break;
    if ( ++v5 == m_Size )
      return 0;
  }
  return result;
}


// CChoreoScene::FindActor  (line 3707, @0x00000000030837e0, libserver.so)
CChoreoActor *__fastcall CChoreoScene::FindActor(const CChoreoScene *const this, ChoreoObjectHandle_t h)
{
  int m_Size; // ecx
  CChoreoActor **m_pMemory; // rdx
  CChoreoActor *result; // rax
  CChoreoActor **v5; // rdx
  CChoreoActor **v6; // rcx

  m_Size = this->m_Actors.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Actors.m_Memory.m_pMemory;
    result = *m_pMemory;
    if ( (*m_pMemory)->m_hChoreoObjectHandle == h )
      return result;
    v5 = m_pMemory + 1;
    v6 = &v5[m_Size - 1];
    while ( v5 != v6 )
    {
      result = *v5++;
      if ( result->m_hChoreoObjectHandle == h )
        return result;
    }
  }
  return 0;
}


// CChoreoScene::FindChannel  (line 3718, @0x0000000003083820, libserver.so)
CChoreoChannel_0 *__fastcall CChoreoScene::FindChannel(const CChoreoScene *const this, ChoreoObjectHandle_t h)
{
  int m_Size; // r8d
  CChoreoActor **m_pMemory; // r9
  __int64 v4; // rdi
  CChoreoActor *v5; // rax
  int v6; // ecx
  CChoreoChannel_0 **v7; // rdx
  CChoreoChannel_0 *result; // rax
  CChoreoChannel_0 **v9; // rdx
  CChoreoChannel_0 **v10; // rcx

  m_Size = this->m_Actors.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Actors.m_Memory.m_pMemory;
    v4 = 0;
    do
    {
      v5 = m_pMemory[v4];
      v6 = v5->m_Channels.m_Size;
      if ( v6 > 0 )
      {
        v7 = v5->m_Channels.m_Memory.m_pMemory;
        result = *v7;
        if ( (*v7)->m_hChoreoObjectHandle == h )
          return result;
        v9 = v7 + 1;
        v10 = &v9[v6 - 1];
        while ( v9 != v10 )
        {
          result = *v9++;
          if ( result->m_hChoreoObjectHandle == h )
            return result;
        }
      }
      ++v4;
    }
    while ( m_Size > v4 );
  }
  return 0;
}


// CChoreoScene::GatherEventsOfType  (line 3733, @0x0000000003084cc0, libserver.so)  // inlines: AddToHead
// calls: CChoreoScene::GetEvent, CChoreoEvent::GetType, CUtlVectorBase<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >::InsertBefore, CChoreoEvent::GetActive, CChoreoEvent::GetActor, CChoreoActor::GetActive, CChoreoEvent::GetChannel, CChoreoChannel::GetActive
void __fastcall CChoreoScene::GatherEventsOfType(
        const CChoreoScene *const this,
        CChoreoScene::HasEventsOfType::EVENTTYPE type,
        CUtlVector<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> > *const list,
        bool bOnlyActive)
{
  int i; // r14d
  CChoreoActor *Actor; // rax
  CChoreoChannel *Channel; // rax
  CChoreoEvent *e; // [rsp+18h] [rbp-38h] BYREF

  for ( i = 0; i < this->m_Events.m_Size; ++i )
  {
    while ( 1 )
    {
      e = CChoreoScene::GetEvent(this, i);
      if ( CChoreoEvent::GetType(e) == type )
      {
        if ( !bOnlyActive )
          break;
        if ( CChoreoEvent::GetActive(e) )
        {
          Actor = CChoreoEvent::GetActor(e);
          if ( Actor != 0 && CChoreoActor::GetActive(Actor) )
          {
            Channel = CChoreoEvent::GetChannel(e);
            if ( Channel != 0 && CChoreoChannel::GetActive(Channel) )
              break;
          }
        }
      }
      if ( ++i >= this->m_Events.m_Size )
        return;
    }
    CUtlVectorBase<CChoreoEvent *,CUtlMemory<CChoreoEvent *,int>>::InsertBefore(list, 0, &e);
  }
}


// CChoreoScene::GatherNonGlobalEvents  (line 3757, @0x0000000003084da0, libserver.so)  // inlines: AddToHead
// calls: CChoreoScene::GetEvent, CChoreoEvent::GetActor, CUtlVectorBase<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >::InsertBefore
void __fastcall CChoreoScene::GatherNonGlobalEvents(
        const CChoreoScene *const this,
        CUtlVector<CChoreoEvent*,CUtlMemory<CChoreoEvent*,int> > *const list)
{
  int i; // ebx
  CChoreoEvent *e; // [rsp+8h] [rbp-28h] BYREF

  for ( i = 0; i < this->m_Events.m_Size; ++i )
  {
    e = CChoreoScene::GetEvent(this, i);
    if ( CChoreoEvent::GetActor(e) != 0 )
      CUtlVectorBase<CChoreoEvent *,CUtlMemory<CChoreoEvent *,int>>::InsertBefore(list, 0, &e);
  }
}


// CChoreoScene::GetStartTime  (line 3769, @0x0000000003083890, libserver.so)
float __fastcall CChoreoScene::GetStartTime(const CChoreoScene *const this)
{
  return 0.0;
}


// CChoreoScene::GetEndTime  (line 3774, @0x00000000030838a0, libserver.so)  // inlines: FindStopTime
// calls: CChoreoScene::FindStopTime
float __fastcall CChoreoScene::GetEndTime(const CChoreoScene *const this)
{
  float result; // xmm0_4

  result = this->m_flPrecomputedStopTime;
  if ( result == 0.0 )
    return CChoreoScene::FindStopTime(this);
  return result;
}


