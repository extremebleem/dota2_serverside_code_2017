// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_speech.cpp:65
class CConceptHistoriesDataOps : public CDefSaveRestoreOps {
public:

	CConceptHistoriesDataOps(CConceptHistoriesDataOps &);
	CConceptHistoriesDataOps(const CConceptHistoriesDataOps &);
	CConceptHistoriesDataOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[3] MakeEmpty
	// vtable[2] IsEmpty
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ConceptHistory_t::~ConceptHistory_t  (line 39, @0x000000000214b000, libserver.so)
// calls: CRR_Response::~CRR_Response
void __fastcall ConceptHistory_t::~ConceptHistory_t(ConceptHistory_t *const this)
{
  CRR_Response::~CRR_Response(&this->m_response);
}


// ConceptHistory_t::ConceptHistory_t  (line 43, @0x000000000214b010, libserver.so)
// calls: CRR_Response::CRR_Response, CRR_Response::operator=, CRR_Response::~CRR_Response, _Unwind_Resume
// callers: CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Insert
void __fastcall ConceptHistory_t::ConceptHistory_t(ConceptHistory_t *const this, const ConceptHistory_t *const src)
{
  CRR_Response *p_m_response; // rbx

  p_m_response = &this->m_response;
  CRR_Response::CRR_Response(&this->m_response);
  this->timeSpoken = src->timeSpoken;
  CRR_Response::operator=(p_m_response, &src->m_response);
}


// ConceptHistory_t::operator=  (line 49, @0x000000000214b070, libserver.so)
// calls: CRR_Response::operator=
ConceptHistory_t *__fastcall ConceptHistory_t::operator=(
        ConceptHistory_t *const this,
        const ConceptHistory_t *const src)
{
  CRR_Response *p_m_response; // rdi

  if ( this != src )
  {
    p_m_response = &this->m_response;
    *&p_m_response[-1].m_Followup.bFired = src->timeSpoken;
    CRR_Response::operator=(p_m_response, &src->m_response);
  }
  return this;
}


// ConceptHistory_t::AddDatadescMetadataKeys  (line 60, @0x000000000214b0b0, libserver.so)
void __fastcall ConceptHistory_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// ConceptHistory_t::GetBaseMap  (line 60, @0x000000000214b0c0, libserver.so)
datamap_t *__cdecl ConceptHistory_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<ConceptHistory_t>  (line 60, @0x000000000214b0d0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "ConceptHistory_t"
// globals: `guard variable for'DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder, ConceptHistory_t::m_DataMap, DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<ConceptHistory_t>(ConceptHistory_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder) != 0 )
  {
    DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder.m_pszBase = "ConceptHistory_t";
    DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::nameHolder,
      &_dso_handle);
  }
  ConceptHistory_t::m_DataMap.baseMap = 0;
  ConceptHistory_t::m_DataMap.dataDesc = &DataMapInit<ConceptHistory_t>(ConceptHistory_t *)::dataDesc[1];
  ConceptHistory_t::m_DataMap.dataNumFields = 1;
  return &ConceptHistory_t::m_DataMap;
}


// CConceptHistoriesDataOps::Save  (line 68, @0x000000000217a3e0, libserver.so)  // inlines: Element, GetElementName, WriteAll<CRR_Response>, WriteAll<ConceptHistory_t>, operator[]
// globals: ConceptHistory_t::m_DataMap
void __fastcall CConceptHistoriesDataOps::Save(
        CConceptHistoriesDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  _QWORD *pField; // r14
  __int64 v5; // rbx
  int v6; // r13d
  __int64 v7; // r12
  int (**vptr_ISave)(...); // rax
  bool hasresponse; // [rsp+1Bh] [rbp-35h] BYREF
  int count[13]; // [rsp+1Ch] [rbp-34h] BYREF

  pField = fieldInfo->pField;
  count[0] = *(fieldInfo->pField + 7);
  (*(pSave->_vptr_ISave + 11))(pSave, count, 1);
  if ( count[0] > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = pField[1] + v5;
      (*(pSave->_vptr_ISave + 8))(pSave);
      (*(pSave->_vptr_ISave + 38))(pSave, fieldInfo->pTypeDesc->fieldName, *(pField[1] + v5 + 16));
      (*(pSave->_vptr_ISave + 5))(pSave, v7 + 24, &ConceptHistory_t::m_DataMap);
      vptr_ISave = pSave->_vptr_ISave;
      hasresponse = *(v7 + 33) != 0;
      vptr_ISave[15](pSave, &hasresponse, 1);
      if ( hasresponse )
        (*(pSave->_vptr_ISave + 5))(pSave, v7 + 32, &CRR_Response::m_DataMap);
      ++v6;
      v5 += 480;
      (*(pSave->_vptr_ISave + 9))(pSave);
    }
    while ( count[0] > v6 );
  }
}


// CConceptHistoriesDataOps::Restore  (line 98, @0x0000000002186310, libserver.so)  // inlines: ConceptHistory_t, Insert, MemAlloc_StrDupFunc, Node_t, ReadAll<CRR_Response>, ReadAll<ConceptHistory_t>, operator=, strcpy, ~ConceptHistory_t, ~Node_t
// calls: CRR_Response::CRR_Response, strcpy, CRR_Response::operator=, CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Insert, CRR_Response::~CRR_Response, _Unwind_Resume, __stack_chk_fail
// globals: ConceptHistory_t::m_DataMap
void __fastcall CConceptHistoriesDataOps::Restore(
        CConceptHistoriesDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  int i; // r13d
  int (**vptr_IRestore)(...); // rax
  char *v6; // rax
  char *v7; // rax
  CUtlDict<ConceptHistory_t,int> *ch_0; // [rsp+10h] [rbp-610h]
  const char *v9; // [rsp+18h] [rbp-608h]
  int count; // [rsp+2Ch] [rbp-5F4h]
  bool hasresponse; // [rsp+3Fh] [rbp-5E1h] BYREF
  ConceptHistory_t history; // [rsp+40h] [rbp-5E0h] BYREF
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t v13; // [rsp+210h] [rbp-410h] BYREF
  char conceptname[520]; // [rsp+3E0h] [rbp-240h] BYREF
  unsigned __int64 v15; // [rsp+5E8h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  ch_0 = fieldInfo->pField;
  count = (*(pRestore->_vptr_IRestore + 13))(pRestore);
  if ( count > 0 )
  {
    for ( i = 0; i != count; ++i )
    {
      conceptname[0] = 0;
      history.timeSpoken = -1.0;
      CRR_Response::CRR_Response(&history.m_response);
      (*(pRestore->_vptr_IRestore + 7))(pRestore);
      (*(pRestore->_vptr_IRestore + 22))(pRestore, conceptname, 512, 0);
      (*(pRestore->_vptr_IRestore + 2))(pRestore, &history, &ConceptHistory_t::m_DataMap);
      vptr_IRestore = pRestore->_vptr_IRestore;
      hasresponse = 0;
      vptr_IRestore[28](pRestore, &hasresponse, 1, 0);
      if ( hasresponse )
        (*(pRestore->_vptr_IRestore + 2))(pRestore, &history.m_response, &CRR_Response::m_DataMap);
      (*(pRestore->_vptr_IRestore + 8))(pRestore);
      if ( conceptname[0] != 0 )
      {
        v6 = (**g_pMemAlloc)(g_pMemAlloc, strlen(conceptname) + 1);
        v7 = strcpy(v6, conceptname);
        v13.elem.timeSpoken = -1.0;
        v9 = v7;
        CRR_Response::CRR_Response(&v13.elem.m_response);
        v13.elem.timeSpoken = history.timeSpoken;
        v13.key = v9;
        CRR_Response::operator=(&v13.elem.m_response, &history.m_response);
        CUtlRBTree<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Insert(
          &ch_0->m_Elements.m_Tree,
          &v13,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        CRR_Response::~CRR_Response(&v13.elem.m_response);
      }
      CRR_Response::~CRR_Response(&history.m_response);
    }
  }
}


// CConceptHistoriesDataOps::MakeEmpty  (line 142, @0x000000000217a4f0, libserver.so)
void __fastcall CConceptHistoriesDataOps::MakeEmpty(
        CConceptHistoriesDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  ;
}


// CConceptHistoriesDataOps::IsEmpty  (line 146, @0x000000000217a500, libserver.so)
bool __fastcall CConceptHistoriesDataOps::IsEmpty(
        CConceptHistoriesDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *(fieldInfo->pField + 7) == 0;
}


// RR::CApplyContextOperator::FindOperator  (line 162, @0x000000000214b190, libserver.so)
// callers: CBaseEntity::AddContext
// globals: RR::sm_OpCopy, RR::sm_OpToggle, RR::sm_OpIncrement, RR::sm_OpDecrement
RR::CApplyContextOperator *__fastcall RR::CApplyContextOperator::FindOperator(const char *pContextString)
{
  char v1; // dl
  RR::CApplyContextOperator *result; // rax

  if ( pContextString == 0 )
    return &RR::sm_OpCopy;
  v1 = *pContextString;
  result = &RR::sm_OpCopy;
  if ( *pContextString != 0 )
  {
    switch ( v1 )
    {
      case '+':
        if ( pContextString[1] == 43 && pContextString[2] != 0 )
          return &RR::sm_OpIncrement;
        break;
      case '-':
        if ( pContextString[1] == 45 && pContextString[2] != 0 )
          return &RR::sm_OpDecrement;
        break;
      case '!':
        return &RR::sm_OpToggle;
      default:
        break;
    }
  }
  return result;
}


// RR::CApplyContextOperator::Apply  (line 188, @0x000000000213dcf0, libserver.so)  // inlines: V_strncpy<int>
// calls: _V_strncpy
bool __fastcall RR::CApplyContextOperator::Apply(
        RR::CApplyContextOperator *const this,
        const char *pOldValue,
        const char *pOperator,
        char *pNewValue,
        int pNewValBufSize)
{
  if ( pOperator != 0 )
    _V_strncpy(pNewValue, pOperator, pNewValBufSize);
  else
    *pNewValue = 0;
  return 1;
}


// RR::CIncrementOperator::Apply  (line 203, @0x000000000213e040, libserver.so)
// calls: V_atoi, V_snprintf
bool __fastcall RR::CIncrementOperator::Apply(
        RR::CIncrementOperator *const this,
        const char *pOldValue,
        const char *pOperator,
        char *pNewValue,
        int pNewValBufSize)
{
  int v9; // ebx
  int v10; // eax

  v9 = 0;
  if ( pOldValue != 0 )
    v9 = V_atoi(pOldValue);
  v10 = V_atoi(&pOperator[this->m_nSkipChars]);
  V_snprintf(pNewValue, pNewValBufSize, "%d", v9 + v10);
  return 1;
}


// RR::CDecrementOperator::Apply  (line 213, @0x000000000213e0b0, libserver.so)
// calls: V_atoi, V_snprintf
bool __fastcall RR::CDecrementOperator::Apply(
        RR::CDecrementOperator *const this,
        const char *pOldValue,
        const char *pOperator,
        char *pNewValue,
        int pNewValBufSize)
{
  int v9; // ebx
  int v10; // eax

  v9 = 0;
  if ( pOldValue != 0 )
    v9 = V_atoi(pOldValue);
  v10 = V_atoi(&pOperator[this->m_nSkipChars]);
  V_snprintf(pNewValue, pNewValBufSize, "%d", v9 - v10);
  return 1;
}


// RR::CToggleOperator::Apply  (line 223, @0x000000000213e120, libserver.so)
// calls: V_atoi, V_snprintf
bool __fastcall RR::CToggleOperator::Apply(
        RR::CToggleOperator *const this,
        const char *pOldValue,
        const char *pOperator,
        char *pNewValue,
        int pNewValBufSize)
{
  _BOOL4 v7; // ecx

  v7 = 1;
  if ( pOldValue != 0 )
    v7 = V_atoi(pOldValue) == 0;
  V_snprintf(pNewValue, pNewValBufSize, "%d", v7);
  return 1;
}


// CAI_Expresser::AddDatadescMetadataKeys  (line 238, @0x000000000214b210, libserver.so)
void __fastcall CAI_Expresser::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CAI_Expresser::GetBaseMap  (line 238, @0x000000000214b220, libserver.so)
datamap_t *__cdecl CAI_Expresser::GetBaseMap()
{
  return 0;
}


// DataMapInit<CAI_Expresser>  (line 238, @0x000000000214b230, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CAI_Expresser"
// globals: `guard variable for'DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder, CAI_Expresser::m_DataMap, DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAI_Expresser>(CAI_Expresser *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder) != 0 )
  {
    DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder.m_pszBase = "CAI_Expresser";
    DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAI_Expresser>(CAI_Expresser *)::nameHolder,
      &_dso_handle);
  }
  CAI_Expresser::m_DataMap.baseMap = 0;
  CAI_Expresser::m_DataMap.dataDesc = &DataMapInit<CAI_Expresser>(CAI_Expresser *)::dataDesc[1];
  CAI_Expresser::m_DataMap.dataNumFields = 8;
  return &CAI_Expresser::m_DataMap;
}


// CAI_Expresser::SemaphoreIsAvailable  (line 255, @0x000000000214b2f0, libserver.so)
bool __fastcall CAI_Expresser::SemaphoreIsAvailable(CAI_Expresser *const this, CBaseEntity *pTalker)
{
  return 1;
}


// CAI_Expresser::GetSemaphoreAvailableTime  (line 270, @0x000000000214b300, libserver.so)
float __fastcall CAI_Expresser::GetSemaphoreAvailableTime(CAI_Expresser *const this, CBaseEntity *pTalker)
{
  return 0.0;
}


// CAI_Expresser::GetVoicePitch  (line 282, @0x000000000214b310, libserver.so)
int __fastcall CAI_Expresser::GetVoicePitch(const CAI_Expresser *const this)
{
  int m_voicePitch; // ebx

  m_voicePitch = this->m_voicePitch;
  return m_voicePitch + (*(*random_valve + 16LL))(random_valve, 0, 3);
}


// CAI_Expresser::CAI_Expresser  (line 296, @0x00000000021727c0, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetCompareType, SetLessFunc, ~CUtlDict, ~CUtlMap
// calls: CResponseQueue::AddExpresser, CUtlDict<ConceptHistory_t, int>::Purge, CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::~CUtlRBTree, _Unwind_Resume
// callers: CMultiplayer_Expresser::CMultiplayer_Expresser, CBaseMultiplayerPlayer::CreateExpresser, CFlexExpresser::CreateExpresser
// globals: g_nExpressers, FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CAI_Expresser::CAI_Expresser(CAI_Expresser *const this, CBaseFlex *pOuter)
{
  ++g_nExpressers;
  this->_vptr_IResponseFilter = &off_4001630;
  this->m_pSink = 0;
  this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_ConceptHistories.m_Elements.m_Tree.m_Root = -1;
  this->m_ConceptHistories.m_Elements.m_Tree.m_NumElements = 0;
  this->m_ConceptHistories.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_ConceptHistories.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_ConceptHistories.m_Elements.m_Tree.m_pElements = 0;
  this->m_ConceptHistories.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_flStopTalkTime = 0.0;
  this->m_flStopTalkTimeWithoutDelay = 0.0;
  this->m_flBlockedTalkTime = 0.0;
  this->m_voicePitch = 100;
  this->m_flLastTimeAcceptedSpeak = 0.0;
  this->m_pOuter = pOuter;
  if ( pOuter != 0 && g_ResponseQueueManager.m_pQueue != 0 )
    CResponseQueue::AddExpresser(g_ResponseQueueManager.m_pQueue, this);
}


// CAI_Expresser::~CAI_Expresser  (line 321, @0x0000000002172120, libserver.so)  // inlines: Purge, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlDict<ConceptHistory_t, int>::Purge, CResponseQueue::RemoveExpresser, CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge
// callers: CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer, CFlexExpresser::~CFlexExpresser
void __fastcall CAI_Expresser::~CAI_Expresser(CAI_Expresser *const this)
{
  CUtlDict<ConceptHistory_t,int> *p_m_ConceptHistories; // r12

  p_m_ConceptHistories = &this->m_ConceptHistories;
  this->_vptr_IResponseFilter = &off_4001630;
  CUtlDict<ConceptHistory_t,int>::Purge(&this->m_ConceptHistories);
  if ( this->m_pOuter != 0 && g_ResponseQueueManager.m_pQueue != 0 )
    CResponseQueue::RemoveExpresser(g_ResponseQueueManager.m_pQueue, this);
  CUtlDict<ConceptHistory_t,int>::Purge(p_m_ConceptHistories);
  CUtlRBTree<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_ConceptHistories->m_Elements.m_Tree);
  if ( (this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_ConceptHistories.m_Elements.m_Tree.m_Elements);
}


// CAI_Expresser::TestAllResponses  (line 348, @0x000000000214b340, libserver.so)
void __fastcall CAI_Expresser::TestAllResponses(CAI_Expresser *const this)
{
  ;
}


// CAI_Expresser::SetOuter  (line 371, @0x0000000002172750, libserver.so)  // inlines: GetDebugName
// calls: CEntityIdentity::GetDebugName, CResponseQueue::AddExpresser, CResponseQueue::RemoveExpresser
void __fastcall CAI_Expresser::SetOuter(CAI_Expresser *const this, CBaseFlex *pOuter)
{
  CBaseFlex *m_pOuter; // rax

  m_pOuter = this->m_pOuter;
  if ( m_pOuter != 0 )
    CEntityIdentity::GetDebugName(m_pOuter->m_pEntity);
  if ( pOuter != 0 )
  {
    CEntityIdentity::GetDebugName(pOuter->m_pEntity);
    if ( this->m_pOuter == 0 )
      CResponseQueue::AddExpresser(g_ResponseQueueManager.m_pQueue, this);
  }
  else if ( this->m_pOuter != 0 )
  {
    CResponseQueue::RemoveExpresser(g_ResponseQueueManager.m_pQueue, this);
  }
  this->m_pOuter = pOuter;
}


// CAI_Expresser::GatherCriteria  (line 395, @0x000000000214b3b0, libserver.so)  // inlines: EnsureCapacity, memcpy, operator char const*
// calls: CRR_Concept::GetStringConcept, CResponseCriteriaSet::AppendCriteria, CResponseCriteriaSet::Merge, CAI_Expresser::GatherLocalCriteria, CResponseCriteriaSet::GetCount, memcpy
// callers: CAI_Expresser::FindResponse, CResponseQueue::DispatchOneResponse_ThenANY, CAI_ExpresserWithFollowup::Speak, CAI_Expresser::Speak, CResponseQueue::DispatchOneResponse, CAI_ExpresserHost<CBasePlayer>::Speak, CAI_Expresser::SpeakIfAllowed, CAI_ExpresserHost<CBasePlayer>::SpeakIfAllowed, CAI_ExpresserHost<CFlexExpresserShim>::Speak, CAI_ExpresserHost<CFlexExpresserShim>::SpeakIfAllowed
// globals: CAI_Expresser::GatherCriteria(CResponseCriteriaSet *,CAI_Concept const&,char const*)::snPreviousCriteriaCount
void __fastcall CAI_Expresser::GatherCriteria(
        CAI_Expresser *const this,
        CResponseCriteriaSet *outputSet,
        const AIConcept_t *const concept,
        const char *modifiers)
{
  int v8; // r12d
  uint32 m_nGrowSize; // eax
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *m_pMemory; // rsi
  const char *StringConcept; // rax
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v12; // rax
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *src; // [rsp+8h] [rbp-38h]

  v8 = CAI_Expresser::GatherCriteria(CResponseCriteriaSet *,CAI_Concept const&,char const*)::snPreviousCriteriaCount
     + (CAI_Expresser::GatherCriteria(CResponseCriteriaSet *,CAI_Concept const&,char const*)::snPreviousCriteriaCount >> 2);
  if ( v8 > outputSet->m_Lookup.m_Elements.m_nAllocationCount )
  {
    m_nGrowSize = outputSet->m_Lookup.m_Elements.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        src = outputSet->m_Lookup.m_Elements.m_pMemory;
        v12 = (**g_pMemAlloc)(g_pMemAlloc, 80LL * v8);
        outputSet->m_Lookup.m_Elements.m_pMemory = v12;
        if ( src != 0 )
          memcpy(v12, src, 80LL * outputSet->m_Lookup.m_Elements.m_nAllocationCount);
        outputSet->m_Lookup.m_Elements.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        m_pMemory = outputSet->m_Lookup.m_Elements.m_pMemory;
        if ( m_pMemory != 0 )
          outputSet->m_Lookup.m_Elements.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 80LL * v8);
        else
          outputSet->m_Lookup.m_Elements.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 80LL * v8);
      }
      outputSet->m_Lookup.m_Elements.m_nAllocationCount = v8;
    }
  }
  StringConcept = CRR_Concept::GetStringConcept(concept);
  CResponseCriteriaSet::AppendCriteria(outputSet, "concept", StringConcept, 5.0);
  CResponseCriteriaSet::Merge(outputSet, modifiers);
  CAI_Expresser::GatherLocalCriteria(this, outputSet);
  CAI_Expresser::GatherCriteria(CResponseCriteriaSet *,CAI_Concept const&,char const*)::snPreviousCriteriaCount = CResponseCriteriaSet::GetCount(outputSet);
}


// CAI_Expresser::GatherLocalCriteria  (line 422, @0x000000000214b350, libserver.so)
// calls: UTIL_PlayerByIndex
// callers: CSpeechScriptBridge::Script_FindBestResponse, CAI_Expresser::GatherCriteria
void __fastcall CAI_Expresser::GatherLocalCriteria(CAI_Expresser *const this, CResponseCriteriaSet *outputCritera)
{
  CBasePlayer *v4; // rax

  (*(this->m_pOuter->_vptr_IHandleEntity + 159))(this->m_pOuter);
  if ( (*(this->m_pOuter->_vptr_IHandleEntity + 140))(this->m_pOuter) == 0 )
  {
    v4 = UTIL_PlayerByIndex(1);
    if ( v4 != 0 )
      (*(v4->_vptr_IHandleEntity + 496))(v4, outputCritera);
  }
}


// CAI_Expresser::FindResponse  (line 444, @0x000000000214b500, libserver.so)  // inlines: GetDebugName, GetInstance, GetInt, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, operator char const*
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::InterceptWorldSetContexts, CResponseCriteriaSet::~CResponseCriteriaSet, CBaseEntity::HasDebugBitsSet, CRR_Response::GetResponse, CRR_Concept::GetStringConcept, Warning, CResponseCriteriaSet::GetCount, CResponseCriteriaSet::WriteToEntity, CAI_Expresser::GatherCriteria, CEntityIdentity::GetDebugName, __stack_chk_fail (13 total)
// callers: CSpeechScriptBridge::Script_FindBestResponse, CResponseQueue::DispatchOneResponse_ThenANY, CBaseMultiplayerPlayer::SpeakConcept, CAI_ExpresserWithFollowup::Speak, CAI_Expresser::Speak, CResponseQueue::DispatchOneResponse
// strings: "RESPONSERULES: %s spoke '%s'. Found response '%s'.\n", "RESPONSERULES: %s spoke '%s'. Found no matching response.\n"
// globals: g_pAIResponseSystem
bool __fastcall CAI_Expresser::FindResponse(
        CAI_Expresser *const this,
        AI_Response *const outResponse,
        AIConcept_t *const concept,
        CResponseCriteriaSet *criteria)
{
  bool result; // al
  IResponseSystem *v8; // rdi
  char v9; // r12
  bool v10; // al
  const char *DebugName; // rax
  const char *v12; // rbx
  const char *StringConcept; // rax
  CEntityIdentity *v14; // rax
  CEntityInstance *m_pInstance; // rax
  const char *v16; // rax
  bool conceptb; // [rsp+8h] [rbp-1C8h]
  CResponseCriteriaSet localCriteriaSet; // [rsp+10h] [rbp-1C0h] BYREF
  CResponseCriteriaSet worldWritebackCriteria; // [rsp+50h] [rbp-180h] BYREF
  char response[264]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v22; // [rsp+198h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  result = (*(this->m_pOuter->_vptr_IHandleEntity + 139))(this->m_pOuter);
  if ( result )
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&localCriteriaSet);
    if ( criteria == 0 )
    {
      CAI_Expresser::GatherCriteria(this, &localCriteriaSet, concept, 0);
      criteria = &localCriteriaSet;
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&worldWritebackCriteria);
    CResponseCriteriaSet::InterceptWorldSetContexts(criteria, &worldWritebackCriteria);
    v8 = g_pAIResponseSystem;
    if ( g_pAIResponseSystem != 0 || (v8 = (*(this->m_pOuter->_vptr_IHandleEntity + 73))(this->m_pOuter)) != 0 )
    {
      v9 = (*(v8->_vptr_IResponseSystem + 2))(v8, criteria, outResponse, this);
      if ( rr_debugresponses.m_pParent->m_Value.m_nValue == 4
        && ((*(this->m_pOuter->_vptr_IHandleEntity + 144))(this->m_pOuter) != 0
         && CBaseEntity::HasDebugBitsSet(this->m_pOuter, 0x20000u)
         || (*(this->m_pOuter->_vptr_IHandleEntity + 140))(this->m_pOuter) != 0) )
      {
        if ( (*(this->m_pOuter->_vptr_IHandleEntity + 140))(this->m_pOuter) != 0 )
          DebugName = (*(this->m_pOuter->_vptr_IHandleEntity + 106))(this->m_pOuter);
        else
          DebugName = CEntityIdentity::GetDebugName(this->m_pOuter->m_pEntity);
        v12 = DebugName;
        if ( v9 != 0 )
        {
          CRR_Response::GetResponse(outResponse, response, 0x100u);
          StringConcept = CRR_Concept::GetStringConcept(concept);
          Warning("RESPONSERULES: %s spoke '%s'. Found response '%s'.\n", v12, StringConcept, response);
          goto LABEL_16;
        }
        v16 = CRR_Concept::GetStringConcept(concept);
        Warning("RESPONSERULES: %s spoke '%s'. Found no matching response.\n", v12, v16);
      }
      else if ( v9 != 0 )
      {
LABEL_16:
        if ( CResponseCriteriaSet::GetCount(&worldWritebackCriteria) > 0 )
        {
          v14 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
          if ( v14 == 0 || (v14->m_EHandle.m_Index & 0x7FFF) != 0 )
            m_pInstance = 0;
          else
            m_pInstance = v14->m_pInstance;
          CResponseCriteriaSet::WriteToEntity(&worldWritebackCriteria, m_pInstance->m_pEntity);
        }
        v10 = outResponse->m_szResponseName[0] != 0;
        goto LABEL_8;
      }
    }
    v10 = 0;
LABEL_8:
    conceptb = v10;
    CResponseCriteriaSet::~CResponseCriteriaSet(&worldWritebackCriteria);
    CResponseCriteriaSet::~CResponseCriteriaSet(&localCriteriaSet);
    return conceptb;
  }
  return result;
}


// CAI_Expresser::SpeakDispatchResponse  (line 542, @0x0000000002178320, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, CUtlSymbolLarge, CVariantBase, Call<HSCRIPT__*, HSCRIPT__*>, CallScriptExpresserFunc, EntityToHScript, Free, Get, GetBool, GetEntityName, GetInstance, GetInt, GetPublicScriptScope, GetScript, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SentenceStop, String, Term, ToBasePlayer, ToCStr, ToHScript, VM, Vector, curtime, entindex, operator HSCRIPT, operator char const*, operator=, ~CScriptAutoRef, ~CVariantBase
// calls: CRR_Response::GetResponse, CRR_Response::GetDelay, CRR_Response::GetSoundLevel, CSpeechScriptBridge::AICriteriaSetToScript, CRR_Response::ShouldntUseScene, CAI_Expresser::SpeakAutoGeneratedScene, CRR_Concept::GetStringConcept, CEntityInstance::GetEntityIndex, DevMsg, RemoveActorFromScriptedScenes, CBaseEntity::EmitSound, IsRunningScriptedScene (25 total)
// callers: CAI_ExpresserWithFollowup::SpeakDispatchResponse
// strings: "SpeakDispatchResponse:  Entity ( %i/%s ) already speaking, forcing '%s'\n", "AI_BaseNPC.SentenceStop", "SpeakDispatchResponse:  Entity ( %i/%s ) refusing to speak due to scene entity, tossing ', "%s: %s", "SpeakDispatchResponse:  Entity ( %i/%s ) playing sound '%s'\n"
// globals: jpt_21784CB
bool __fastcall CAI_Expresser::SpeakDispatchResponse(
        CAI_Expresser *const this,
        AIConcept_t *const concept,
        AI_Response *result,
        CResponseCriteriaSet *criteria,
        IRecipientFilter *filter)
{
  CBaseFlex *v9; // r13
  __int64 v10; // r14
  HSCRIPT m_hScope; // rax
  HSCRIPT m_h; // rsi
  char *v13; // r14
  char v14; // al
  float v15; // xmm1_4
  bool v16; // al
  CBaseFlex *m_pOuter; // rdi
  const char *m_pAsString; // r13
  const char *StringConcept; // rax
  char *v20; // rcx
  CEntityIndex v21; // eax
  const char *v22; // rbx
  CEntityIndex v23; // eax
  CBaseFlex *v24; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v26; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  ConVar *m_pParent; // rax
  CBaseFlex *v29; // rax
  const char *v30; // rax
  CEntityIdentity *v31; // rax
  CEntityInstance *m_pInstance; // rdi
  CBaseFlex *v33; // r13
  char v34; // al
  CBaseFlex *v35; // rdi
  __m128i v36; // xmm0
  float v37; // r14d
  CBaseFlex *v38; // rdi
  const char *v39; // r13
  CEntityIndex v40; // eax
  float v41; // xmm2_4
  const char *v42; // [rsp+8h] [rbp-2A8h]
  const char *v43; // [rsp+10h] [rbp-2A0h]
  soundlevel_t soundlevel; // [rsp+20h] [rbp-290h]
  float delay; // [rsp+24h] [rbp-28Ch]
  Vector vPrintPos; // [rsp+30h] [rbp-280h] BYREF
  Vector in; // [rsp+40h] [rbp-270h] BYREF
  __int64 v49; // [rsp+50h] [rbp-260h]
  __int16 v50; // [rsp+58h] [rbp-258h]
  __int16 v51; // [rsp+5Ah] [rbp-256h]
  char response[256]; // [rsp+60h] [rbp-250h] BYREF
  CFmtStrN<256,false> v53; // [rsp+160h] [rbp-150h] BYREF
  unsigned __int64 v54; // [rsp+278h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  CRR_Response::GetResponse(result, response, 0x100u);
  delay = CRR_Response::GetDelay(result);
  soundlevel = CRR_Response::GetSoundLevel(result);
  if ( (*(this->_vptr_IResponseFilter + 5))(this) == 0
    || *CRR_Concept::GetStringConcept(concept) == 0
    || result->m_Type == 5 )
  {
    goto LABEL_2;
  }
  m_pOuter = this->m_pOuter;
  m_pAsString = m_pOuter->m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( (*(m_pOuter->_vptr_IHandleEntity + 140))(m_pOuter) != 0 )
  {
    v33 = this->m_pOuter;
    if ( v33 != 0 )
    {
      v34 = (*(v33->_vptr_IHandleEntity + 140))(this->m_pOuter);
      v35 = 0;
      if ( v34 != 0 )
        v35 = v33;
    }
    else
    {
      v35 = 0;
    }
    m_pAsString = (*(v35->_vptr_IHandleEntity + 106))(v35);
  }
  StringConcept = CRR_Concept::GetStringConcept(concept);
  v20 = "UNKNOWN";
  v42 = StringConcept;
  if ( m_pAsString != 0 )
    v20 = m_pAsString;
  v43 = v20;
  v21.m_Data = CEntityInstance::GetEntityIndex(this->m_pOuter).m_Data;
  DevMsg(2, "SpeakDispatchResponse:  Entity ( %i/%s ) already speaking, forcing '%s'\n", v21.m_Data, v43, v42);
  RemoveActorFromScriptedScenes(this->m_pOuter, 1, 0, 0);
  CBaseEntity::EmitSound(this->m_pOuter, "AI_BaseNPC.SentenceStop", 0.0, 0);
  if ( IsRunningScriptedScene(this->m_pOuter, 1) )
  {
    v22 = CRR_Concept::GetStringConcept(concept);
    if ( m_pAsString == 0 )
      m_pAsString = "UNKNOWN";
    v23.m_Data = CEntityInstance::GetEntityIndex(this->m_pOuter).m_Data;
    DevMsg(
      "SpeakDispatchResponse:  Entity ( %i/%s ) refusing to speak due to scene entity, tossing '%s'\n",
      v23.m_Data,
      m_pAsString,
      v22);
    return 0;
  }
  else
  {
LABEL_2:
    if ( result->m_hScriptResponse.m_h != 0 )
    {
      v9 = this->m_pOuter;
      CSpeechScriptBridge::AICriteriaSetToScript(&vPrintPos, criteria);
      v10 = *&vPrintPos.x;
      if ( v9 != 0 )
      {
        m_hScope = v9->m_pEntity->m_hPublicScope.m_hScope;
        if ( m_hScope == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v9, 0);
          m_hScope = v9->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        m_hScope = 0;
      }
      v51 = 0;
      m_h = result->m_hScriptResponse.m_h;
      LODWORD(in.z) = 31;
      v50 = 31;
      *&in.x = m_hScope;
      v49 = v10;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_h, &in, 2, 0, 0, 1);
      v13 = response;
      do
      {
        v13 -= 16;
        if ( (v13[10] & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v13);
          *(v13 + 5) &= ~1u;
        }
        *v13 = 0;
        *(v13 + 4) = 0;
      }
      while ( v13 != &in );
      if ( *&vPrintPos.x != 0 )
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    switch ( result->m_Type )
    {
      case 1u:
        if ( !CRR_Response::ShouldntUseScene(result) )
        {
          v14 = CAI_Expresser::SpeakAutoGeneratedScene(this, response, COERCE_DOUBLE(LODWORD(delay)), v15);
          goto LABEL_16;
        }
        *v36.m128i_i32 = CAI_Expresser::GetResponseDuration(this, result);
        v37 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
        CBaseEntity::EmitSound(this->m_pOuter, response, 0.0, 0);
        v38 = this->m_pOuter;
        v39 = v38->m_pEntity->m_name.u.m_pAsString;
        if ( v39 == 0 )
          v39 = "";
        v40.m_Data = CEntityInstance::GetEntityIndex(v38).m_Data;
        DevMsg(2, "SpeakDispatchResponse:  Entity ( %i/%s ) playing sound '%s'\n", v40.m_Data, v39, response);
        CAI_Expresser::NoteSpeaking(this, v37, delay, v41);
        goto LABEL_36;
      case 2u:
        v14 = (*(this->_vptr_IResponseFilter + 3))(this, response, soundlevel, 0, delay, 1.0) != -1;
        goto LABEL_16;
      case 3u:
        v14 = CAI_Expresser::SpeakRawScene(this, response, delay, result, filter);
        goto LABEL_16;
      case 5u:
        if ( g_pDeveloper->m_pParent->m_Value.m_nValue > 0 )
        {
          v24 = this->m_pOuter;
          in.x = 0.5;
          in.y = 0.5;
          in.z = 1.0;
          CCollisionProperty::NormalizedToWorldSpace(&v24->m_Collision, &in, &vPrintPos);
          NDebugOverlay::Text(&vPrintPos, response, 1, 1.5);
        }
        goto LABEL_36;
      case 6u:
        return CAI_Expresser::FireEntIOFromResponse(response, this->m_pOuter);
      default:
LABEL_16:
        if ( v14 != 0 )
        {
LABEL_36:
          m_flCurrentTime = 0.0;
          v26 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            m_flCurrentTime = v26->m_flCurrentTime;
          }
          m_pParent = ai_debug_speech.m_pParent;
          this->m_flLastTimeAcceptedSpeak = m_flCurrentTime;
          if ( m_pParent->m_Value.m_nValue != 0 && g_pDeveloper->m_pParent->m_Value.m_nValue > 0 && result->m_Type != 5 )
          {
            v29 = this->m_pOuter;
            in.x = 0.5;
            in.y = 0.5;
            in.z = 1.0;
            CCollisionProperty::NormalizedToWorldSpace(&v29->m_Collision, &in, &vPrintPos);
            v30 = CRR_Concept::GetStringConcept(concept);
            CFmtStrN<256,false>::CFmtStrN(&v53, "%s: %s", v30, response);
            NDebugOverlay::Text(&vPrintPos, v53.m_szBuf, 1, 1.5);
          }
          if ( result->m_szWorldContext != 0 )
          {
            v31 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
            if ( v31 == 0 || (v31->m_EHandle.m_Index & 0x7FFF) != 0 )
              m_pInstance = 0;
            else
              m_pInstance = v31->m_pInstance;
            (*(m_pInstance->_vptr_IHandleEntity + 81))(m_pInstance);
          }
          if ( result->m_szSpeakerContext != 0 )
            (*(this->m_pOuter->_vptr_IHandleEntity + 81))(this->m_pOuter);
          LOWORD(in.x) = concept->m_iConcept.m_Id;
          LODWORD(in.y) = concept->m_hSpeaker.m_Index;
          CAI_Expresser::SetSpokeConcept(this, &in, result, 1);
          v16 = 1;
        }
        else
        {
          v16 = 0;
        }
        break;
    }
  }
  return v16;
}


// CAI_Expresser::FireEntIOFromResponse  (line 667, @0x000000000216b810, libserver.so)  // inlines: CVariantBase, CopyData, Free, SetString, String, ToCStr, operator=, ~CVariantBase
// calls: strtok_r, CGameEntitySystem::FindEntityByName, MakeEntitySystemString, CEntityInstance::AcceptInput, Warning, Msg, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CAI_Expresser::SpeakDispatchResponse
// strings: "Response was entityio but had bad value %s\n", "Response rule targeted %s with entityio, but that doesn't exist.\n"
bool __fastcall CAI_Expresser::FireEntIOFromResponse(char *response, CBaseEntity *pInitiator)
{
  char *v4; // r13
  char *v5; // r14
  char *v6; // rbx
  CBaseEntity *EntityByName; // r15
  const char *v8; // rbx
  const char *v10; // [rsp+10h] [rbp-50h]
  char *strtokContext; // [rsp+18h] [rbp-48h] BYREF
  variant_t variant; // [rsp+20h] [rbp-40h] BYREF

  strtokContext = 0;
  v4 = strtok_r(response, " ", &strtokContext);
  if ( v4 != 0 && (v5 = strtok_r(0, " ", &strtokContext)) != 0 )
  {
    v6 = strtok_r(0, " ", &strtokContext);
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v4, pInitiator, 0, 0, 0);
    if ( EntityByName != 0 )
    {
      variant.m_uint64 = 0;
      variant.m_type = 0;
      variant.m_flags = 0;
      if ( v6 != 0 )
      {
        MakeEntitySystemString(v6);
        v8 = "";
        if ( v10 != 0 )
          v8 = v10;
        if ( (variant.m_flags & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, variant.m_uint64);
          variant.m_flags &= ~1u;
        }
        variant.m_uint64 = v8;
        variant.m_type = 30;
      }
      CEntityInstance::AcceptInput(EntityByName, v5, pInitiator, pInitiator, &variant, 0);
      if ( (variant.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, variant.m_uint64);
      return 1;
    }
    else
    {
      Msg("Response rule targeted %s with entityio, but that doesn't exist.\n", v4);
      return 1;
    }
  }
  else
  {
    Warning("Response was entityio but had bad value %s\n", response);
    return 0;
  }
}


// CAI_Expresser::GetResponseDuration  (line 718, @0x000000000214b790, libserver.so)  // inlines: String, ToCStr
// calls: CRR_Response::GetResponse, GetSceneDuration, CBaseEntity::GetModelName, CBaseEntity::GetSoundDuration, __stack_chk_fail
// callers: CAI_Expresser::SpeakDispatchResponse
// globals: jpt_214B7E2
float __fastcall CAI_Expresser::GetResponseDuration(CAI_Expresser *const this, AI_Response *result)
{
  float SoundDuration; // xmm0_4
  char *v5; // rsi
  char *actormodel; // [rsp+0h] [rbp-140h] BYREF
  char response[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v8; // [rsp+118h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CRR_Response::GetResponse(result, response, 0x100u);
  switch ( result->m_Type )
  {
    case 1u:
      CBaseEntity::GetModelName(&actormodel, this->m_pOuter);
      v5 = "";
      if ( actormodel != 0 )
        v5 = actormodel;
      SoundDuration = CBaseEntity::GetSoundDuration(response, v5);
      break;
    case 2u:
      SoundDuration = 999.0;
      break;
    case 3u:
      SoundDuration = GetSceneDuration(response);
      break;
    case 5u:
      SoundDuration = 1.0;
      break;
    default:
      SoundDuration = 0.0;
      break;
  }
  return SoundDuration;
}


// CAI_Expresser::Speak  (line 767, @0x0000000002168d60, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetSpeaker, operator=
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CAI_Expresser::GatherCriteria, CAI_Expresser::Speak, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CAI_ExpresserHost<CBasePlayer>::Speak, CAI_ExpresserHost<CFlexExpresserShim>::Speak
bool __fastcall CAI_Expresser::Speak(
        CAI_Expresser *const this,
        AIConcept_t *const concept,
        const char *modifiers,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  uint32 v6; // eax
  CBaseFlex *m_pOuter; // rcx
  CEntityIdentity *m_pEntity; // rcx
  __int16 v13; // si
  bool pszOutResponseChosenb; // [rsp+8h] [rbp-78h]
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-70h] BYREF

  v6 = -1;
  m_pOuter = this->m_pOuter;
  LODWORD(criteria._vptr_CResponseCriteriaSet) = -1;
  if ( m_pOuter != 0 )
  {
    m_pEntity = m_pOuter->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v6 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
      LODWORD(criteria._vptr_CResponseCriteriaSet) = v6;
    }
  }
  concept->m_hSpeaker.m_Index = v6;
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CAI_Expresser::GatherCriteria(this, &criteria, concept, modifiers);
  pszOutResponseChosenb = CAI_Expresser::Speak(this, concept, &criteria, pszOutResponseChosen, bufsize, filter);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  return pszOutResponseChosenb;
}


// CAI_Expresser::Speak  (line 781, @0x0000000002168bc0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, curtime, operator char const*
// calls: CRR_Response::CRR_Response, CAI_Expresser::FindResponse, CRR_Concept::GetStringConcept, CAI_Expresser::SpeechMsg, CRR_Response::GetResponse, CRR_Response::~CRR_Response, __stack_chk_fail, _Unwind_Resume
// callers: CAI_Expresser::Speak, CResponseQueue::DispatchOneResponse, CAI_ExpresserHost<CBasePlayer>::Speak, CAI_Expresser::SpeakIfAllowed, CAI_ExpresserHost<CFlexExpresserShim>::Speak
// strings: "%s (%x) spoke %s (%f)"
bool __fastcall CAI_Expresser::Speak(
        CAI_Expresser *const this,
        AIConcept_t *const concept,
        CResponseCriteriaSet *criteria,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  char Response; // r15
  CGlobalVars *v10; // r15
  double m_flCurrentTime; // r15
  const char *StringConcept; // rax
  CBaseFlex *m_pOuter; // rsi
  const char *m_pAsString; // rcx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  AI_Response v20; // [rsp+20h] [rbp-200h] BYREF
  unsigned __int64 v21; // [rsp+1E8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  (*(this->m_pOuter->_vptr_IHandleEntity + 160))(this->m_pOuter, criteria);
  CRR_Response::CRR_Response(&v20);
  Response = CAI_Expresser::FindResponse(this, &v20, concept, criteria);
  if ( Response != 0 )
  {
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    StringConcept = CRR_Concept::GetStringConcept(concept);
    m_pOuter = this->m_pOuter;
    m_pAsString = "";
    if ( m_pOuter->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = m_pOuter->m_pEntity->m_name.u.m_pAsString;
    CAI_Expresser::SpeechMsg(
      this,
      m_pOuter,
      "%s (%x) spoke %s (%f)",
      m_pAsString,
      m_pOuter,
      StringConcept,
      m_flCurrentTime);
    Response = (*(this->_vptr_IResponseFilter + 2))(this, concept, &v20, criteria, filter);
    if ( pszOutResponseChosen != 0 )
      CRR_Response::GetResponse(&v20, pszOutResponseChosen, bufsize);
  }
  CRR_Response::~CRR_Response(&v20);
  return Response;
}


// CAI_Expresser::SpeakIfAllowed  (line 811, @0x000000000216d970, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetSpeaker, operator=
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CAI_Expresser::GatherCriteria, CAI_Expresser::SpeakIfAllowed, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CAI_ExpresserHost<CBasePlayer>::SpeakIfAllowed, CAI_ExpresserHost<CFlexExpresserShim>::SpeakIfAllowed
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CAI_Expresser::SpeakIfAllowed(
        CAI_Expresser *const this,
        AIConcept_t concept,
        const char *modifiers,
        bool bRespondingToPlayer,
        char *pszOutResponseChosen,
        size_t bufsize)
{
  int v6; // eax
  CBaseFlex *m_pOuter; // rcx
  CEntityIdentity *m_pEntity; // rcx
  __int16 v13; // si
  unsigned int v14; // eax
  unsigned int v18; // [rsp+Ch] [rbp-84h]
  AIConcept_t concepta; // [rsp+10h] [rbp-80h] BYREF
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-70h] BYREF
  AIConcept_t v21; // 0:kr00_8.8

  v6 = -1;
  m_pOuter = this->m_pOuter;
  LODWORD(criteria._vptr_CResponseCriteriaSet) = -1;
  if ( m_pOuter != 0 )
  {
    m_pEntity = m_pOuter->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v6 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
      LODWORD(criteria._vptr_CResponseCriteriaSet) = v6;
    }
  }
  *(*&concept + 4LL) = v6;
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CAI_Expresser::GatherCriteria(this, &criteria, *&concept, modifiers);
  concepta = **&concept;
  v21.m_iConcept.m_Id = &concepta;
  v21.m_hSpeaker.m_Index = &concepta >> 32;
  LOBYTE(v14) = CAI_Expresser::SpeakIfAllowed(this, v21, &criteria, bRespondingToPlayer, pszOutResponseChosen, bufsize);
  v18 = v14;
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  return v18;
}


// CAI_Expresser::SpeakIfAllowed  (line 824, @0x000000000216d8c0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol
// calls: CAI_Expresser::CanSpeakConcept, CAI_Expresser::CanSpeakAfterMyself, CAI_Expresser::Speak, CAI_Expresser::CanSpeak
// callers: CAI_Expresser::SpeakIfAllowed, CAI_ExpresserHost<CBasePlayer>::SpeakIfAllowed, CAI_ExpresserHost<CFlexExpresserShim>::SpeakIfAllowed
// local variable allocation has failed, the output may be wrong!
bool __fastcall CAI_Expresser::SpeakIfAllowed(
        CAI_Expresser *const this,
        AIConcept_t concept,
        CResponseCriteriaSet *criteria,
        bool bRespondingToPlayer,
        char *pszOutResponseChosen,
        size_t bufsize)
{
  AIConcept_t concepta; // [rsp+10h] [rbp-40h] BYREF

  concepta = **&concept;
  if ( CAI_Expresser::CanSpeakConcept(this, &concepta) )
  {
    if ( bRespondingToPlayer )
    {
      if ( CAI_Expresser::CanSpeakAfterMyself(this) )
        return CAI_Expresser::Speak(this, *&concept, criteria, pszOutResponseChosen, bufsize, 0);
    }
    else if ( CAI_Expresser::CanSpeak(this) )
    {
      return CAI_Expresser::Speak(this, *&concept, criteria, pszOutResponseChosen, bufsize, 0);
    }
  }
  return 0;
}


// CAI_Expresser::SpeakRawScene  (line 849, @0x00000000021687f0, libserver.so)
// calls: CAI_Expresser::SpeechMsg, CAI_Expresser::NoteSpeaking
// callers: CAI_Expresser::SpeakDispatchResponse
// strings: "SpeakRawScene( %s, %f) %f\n"
__int64 __fastcall CAI_Expresser::SpeakRawScene(
        CAI_Expresser *const this,
        const char *pszScene,
        float delay,
        AI_Response *response,
        IRecipientFilter *filter)
{
  double v7; // xmm0_8
  __int64 result; // rax
  float v9; // [rsp+8h] [rbp-18h]

  v7 = (*(this->m_pOuter->_vptr_IHandleEntity + 257))(this->m_pOuter, pszScene, response, filter);
  result = 0;
  if ( *&v7 > 0.0 )
  {
    v9 = *&v7;
    CAI_Expresser::SpeechMsg(this, this->m_pOuter, "SpeakRawScene( %s, %f) %f\n", pszScene, delay, *&v7);
    CAI_Expresser::NoteSpeaking(this, v9, delay, v9);
    return 1;
  }
  return result;
}


// CAI_Expresser::SpeakAutoGeneratedScene  (line 874, @0x0000000002168880, libserver.so)
// calls: CAI_Expresser::SpeechMsg, CAI_Expresser::NoteSpeaking
// callers: CAI_Expresser::SpeakDispatchResponse
// strings: "SpeakAutoGeneratedScene( %s, %f) %f\n"
__int64 __fastcall CAI_Expresser::SpeakAutoGeneratedScene(
        CAI_Expresser *const this,
        const char *soundname,
        double a3,
        float delay)
{
  double v6; // xmm0_8
  __int64 result; // rax
  float v8; // [rsp+8h] [rbp-18h]
  float delaya; // [rsp+Ch] [rbp-14h]

  delaya = *&a3;
  v6 = (*(this->m_pOuter->_vptr_IHandleEntity + 259))(this->m_pOuter, a3, delay);
  result = 0;
  if ( *&v6 > 0.0 )
  {
    v8 = *&v6;
    CAI_Expresser::SpeechMsg(this, this->m_pOuter, "SpeakAutoGeneratedScene( %s, %f) %f\n", soundname, delaya, *&v6);
    CAI_Expresser::NoteSpeaking(this, v8, delaya, v8);
    return 1;
  }
  return result;
}


// CAI_Expresser::SpeakRawSentence  (line 888, @0x000000000213cb90, libserver.so)
__int64 __fastcall CAI_Expresser::SpeakRawSentence(
        CAI_Expresser *const this,
        const char *pszSentence,
        float delay,
        float volume,
        soundlevel_t soundlevel,
        CBaseEntity *pListener)
{
  return 0xFFFFFFFFLL;
}


// CAI_Expresser::BlockSpeechUntil  (line 923, @0x0000000002168410, libserver.so)  // inlines: curtime
// calls: CAI_Expresser::SpeechMsg
// strings: "BlockSpeechUntil(%f) %f\n"
void __fastcall CAI_Expresser::BlockSpeechUntil(CAI_Expresser *const this, float a2, float time)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v8; // [rsp-14h] [rbp-1Ch]
  float v9; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v8 = a2;
        (m_pfnWarningFunc)(1, 0.0, time);
        a2 = v8;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  v9 = a2;
  CAI_Expresser::SpeechMsg(this, this->m_pOuter, "BlockSpeechUntil(%f) %f\n", a2, (a2 - m_flCurrentTime));
  this->m_flBlockedTalkTime = v9;
}


// CAI_Expresser::NoteSpeaking  (line 932, @0x0000000002168690, libserver.so)  // inlines: curtime
// calls: CAI_Expresser::SpeechMsg
// callers: CAI_ExpresserHost<CBasePlayer>::NoteSpeaking, CAI_Expresser::SpeakRawScene, CAI_Expresser::SpeakAutoGeneratedScene, CAI_Expresser::SpeakDispatchResponse, CAI_ExpresserHost<CFlexExpresserShim>::NoteSpeaking
// strings: "NoteSpeaking( %f, %f ) (stop at %f)\n"
void __fastcall CAI_Expresser::NoteSpeaking(CAI_Expresser *const this, float a2, float duration, float delay)
{
  float v5; // xmm0_4
  float m_flCurrentTime; // xmm3_4
  float v7; // xmm1_4
  CGlobalVars *v8; // r12
  float v9; // xmm3_4
  double v10; // xmm0_8
  double v11; // xmm2_8
  CBaseFlex *m_pOuter; // rsi
  FnGlobalVarsWarningFunc v13; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v16; // [rsp-14h] [rbp-1Ch]

  v16 = a2 + duration;
  (*(this->m_pSink->_vptr_CAI_ExpresserSink + 1))(this->m_pSink, a2 + duration, duration, delay);
  v5 = v16;
  m_flCurrentTime = 0.0;
  v7 = duration;
  v8 = gpGlobals;
  if ( v16 <= 0.0 )
  {
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v7 = duration;
        }
      }
      v9 = v8->m_flCurrentTime + 3.0;
      v11 = v9;
    }
    else
    {
      v11 = 3.0;
      v9 = 3.0;
    }
    this->m_flStopTalkTime = v9;
    v10 = 0.0;
  }
  else
  {
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v13 = gpGlobals->m_pfnWarningFunc;
        if ( v13 != 0 )
        {
          v13(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v7 = duration;
          v5 = v16;
        }
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    v9 = m_flCurrentTime + v5;
    v10 = v5;
    this->m_flStopTalkTime = v9;
    v11 = v9;
  }
  m_pOuter = this->m_pOuter;
  this->m_flStopTalkTimeWithoutDelay = v9 - v7;
  CAI_Expresser::SpeechMsg(this, m_pOuter, "NoteSpeaking( %f, %f ) (stop at %f)\n", v10, v7, v11);
  (*(this->m_pSink->_vptr_CAI_ExpresserSink + 2))(this->m_pSink);
}


// CAI_Expresser::ForceNotSpeaking  (line 965, @0x000000000214b880, libserver.so)  // inlines: curtime
void __fastcall CAI_Expresser::ForceNotSpeaking(CAI_Expresser *const this)
{
  CGlobalVars *v2; // r12
  CGlobalVars *v3; // rax
  CGlobalVars *v4; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  void (__fastcall *v6)(__int64); // rax
  float m_flCurrentTime; // xmm0_4

  if ( (*(this->_vptr_IResponseFilter + 5))(this) != 0 )
  {
    v2 = gpGlobals;
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v4 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v4 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v4 = gpGlobals;
          v3 = gpGlobals;
        }
      }
      this->m_flStopTalkTime = v2->m_flCurrentTime;
      if ( v3 != 0 )
      {
        if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
        {
          v6 = v4->m_pfnWarningFunc;
          if ( v6 != 0 )
            v6(1);
        }
        m_flCurrentTime = v4->m_flCurrentTime;
      }
      else
      {
        m_flCurrentTime = 0.0;
      }
    }
    else
    {
      m_flCurrentTime = 0.0;
      this->m_flStopTalkTime = 0.0;
    }
    this->m_flStopTalkTimeWithoutDelay = m_flCurrentTime;
  }
}


// CAI_Expresser::IsSpeaking  (line 985, @0x00000000021684b0, libserver.so)  // inlines: curtime
// calls: CAI_Expresser::SpeechMsg
// callers: CMultiplayer_Expresser::IsSpeaking
// strings: "IsSpeaking() %f\n"
bool __fastcall CAI_Expresser::IsSpeaking(CAI_Expresser *const this)
{
  float m_flStopTalkTime; // xmm0_4
  CGlobalVars *v3; // rax
  CGlobalVars *v4; // r14
  CGlobalVars *v5; // rbx
  float m_flCurrentTime; // xmm1_4
  float m_flLastTimeAcceptedSpeak; // xmm0_4
  float v8; // xmm1_4
  bool result; // al
  void (__fastcall *v10)(__int64, float, double); // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CGlobalVars *v12; // rbx
  float v13; // xmm0_4
  float v14; // xmm1_4
  FnGlobalVarsWarningFunc v15; // rax
  float v16; // xmm0_4
  float v17; // xmm1_4
  void (__fastcall *v18)(__int64, float, double); // rax
  float v19; // [rsp+Ch] [rbp-24h]
  float v20; // [rsp+Ch] [rbp-24h]
  float v21; // [rsp+Ch] [rbp-24h]
  float v22; // [rsp+Ch] [rbp-24h]

  m_flStopTalkTime = this->m_flStopTalkTime;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v4 = gpGlobals;
    v5 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      v5 = gpGlobals;
      if ( m_pfnWarningFunc != 0 )
      {
        v20 = this->m_flStopTalkTime;
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v5 = gpGlobals;
        m_flStopTalkTime = v20;
        v3 = gpGlobals;
      }
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  else
  {
    v5 = 0;
    m_flCurrentTime = 0.0;
  }
  if ( m_flStopTalkTime > m_flCurrentTime )
  {
    v16 = this->m_flStopTalkTime;
    v17 = 0.0;
    if ( v3 != 0 )
    {
      if ( !v5->m_bEnableAssertions && !v5->m_bInSimulation )
      {
        v18 = v5->m_pfnWarningFunc;
        if ( v18 != 0 )
        {
          v22 = this->m_flStopTalkTime;
          v18(1, v16, 0.0);
          v16 = v22;
        }
      }
      v17 = v5->m_flCurrentTime;
    }
    CAI_Expresser::SpeechMsg(this, this->m_pOuter, "IsSpeaking() %f\n", (v16 - v17));
    v5 = gpGlobals;
    v3 = gpGlobals;
  }
  m_flLastTimeAcceptedSpeak = this->m_flLastTimeAcceptedSpeak;
  v8 = 0.0;
  if ( v3 != 0 )
  {
    if ( !v5->m_bEnableAssertions && !v5->m_bInSimulation )
    {
      v10 = v5->m_pfnWarningFunc;
      if ( v10 != 0 )
      {
        v19 = this->m_flLastTimeAcceptedSpeak;
        v10(1, m_flLastTimeAcceptedSpeak, 0.0);
        m_flLastTimeAcceptedSpeak = v19;
      }
    }
    v8 = v5->m_flCurrentTime;
  }
  result = 1;
  if ( m_flLastTimeAcceptedSpeak != v8 )
  {
    v12 = gpGlobals;
    v13 = 0.0;
    v14 = this->m_flStopTalkTime;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v15 = gpGlobals->m_pfnWarningFunc;
        if ( v15 != 0 )
        {
          v21 = this->m_flStopTalkTime;
          (v15)(1, 0.0);
          v14 = v21;
        }
      }
      v13 = v12->m_flCurrentTime;
    }
    return v14 > v13;
  }
  return result;
}


// CAI_Expresser::CanSpeak  (line 998, @0x000000000214b950, libserver.so)  // inlines: curtime
// callers: CAI_ExpresserHost<CBasePlayer>::CanSpeak, CAI_Expresser::SpeakIfAllowed
bool __fastcall CAI_Expresser::CanSpeak(CAI_Expresser *const this)
{
  float m_flCurrentTime; // xmm1_4
  float m_flLastTimeAcceptedSpeak; // xmm0_4
  CGlobalVars *v4; // rbx
  CGlobalVars *v5; // rbx
  float v6; // xmm1_4
  float v7; // xmm0_4
  bool result; // al
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v10; // rax
  float v11; // [rsp-24h] [rbp-2Ch]
  float v12; // [rsp-24h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  m_flLastTimeAcceptedSpeak = this->m_flLastTimeAcceptedSpeak;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = this->m_flLastTimeAcceptedSpeak;
        (m_pfnWarningFunc)(1, m_flLastTimeAcceptedSpeak, 0.0);
        m_flLastTimeAcceptedSpeak = v11;
      }
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  result = 0;
  if ( m_flLastTimeAcceptedSpeak != m_flCurrentTime )
  {
    v5 = gpGlobals;
    v6 = 0.0;
    v7 = fmaxf(this->m_flStopTalkTime, this->m_flBlockedTalkTime);
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v10 = gpGlobals->m_pfnWarningFunc;
        if ( v10 != 0 )
        {
          v12 = v7;
          (v10)(1, v7, 0.0);
          v7 = v12;
        }
      }
      v6 = v5->m_flCurrentTime;
    }
    return v6 >= v7;
  }
  return result;
}


// CAI_Expresser::CanSpeakAfterMyself  (line 1013, @0x000000000214ba30, libserver.so)  // inlines: curtime
// callers: CAI_Expresser::SpeakIfAllowed
bool __fastcall CAI_Expresser::CanSpeakAfterMyself(CAI_Expresser *const this)
{
  float m_flCurrentTime; // xmm1_4
  float m_flLastTimeAcceptedSpeak; // xmm0_4
  CGlobalVars *v4; // rbx
  CGlobalVars *v5; // rbx
  float v6; // xmm1_4
  float v7; // xmm0_4
  bool result; // al
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v10; // rax
  float v11; // [rsp-24h] [rbp-2Ch]
  float v12; // [rsp-24h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  m_flLastTimeAcceptedSpeak = this->m_flLastTimeAcceptedSpeak;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = this->m_flLastTimeAcceptedSpeak;
        (m_pfnWarningFunc)(1, m_flLastTimeAcceptedSpeak, 0.0);
        m_flLastTimeAcceptedSpeak = v11;
      }
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  result = 0;
  if ( m_flLastTimeAcceptedSpeak != m_flCurrentTime )
  {
    v5 = gpGlobals;
    v6 = 0.0;
    v7 = fmaxf(this->m_flStopTalkTimeWithoutDelay, this->m_flBlockedTalkTime);
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v10 = gpGlobals->m_pfnWarningFunc;
        if ( v10 != 0 )
        {
          v12 = v7;
          (v10)(1, v7, 0.0);
          v7 = v12;
        }
      }
      v6 = v5->m_flCurrentTime;
    }
    return v6 >= v7;
  }
  return result;
}


// CAI_Expresser::CanSpeakConcept  (line 1023, @0x000000000216d7f0, libserver.so)  // inlines: Element, Find, operator char const*, operator[]
// calls: CRR_Concept::GetStringConcept, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Find, CRR_Response::GetSpeakOnce, CRR_Response::GetRespeakDelay, CGlobalVarsBase::curtime
// callers: CAI_Expresser::SpeakIfAllowed
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall CAI_Expresser::CanSpeakConcept(CAI_Expresser *const this, const CRR_Concept *concept)
{
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::IndexType_t v3; // eax
  UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v4; // rbx
  float RespeakDelay; // xmm1_4
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::KeyType_t key; // [rsp+18h] [rbp-18h] BYREF

  key = CRR_Concept::GetStringConcept(concept);
  if ( key == 0 )
    return 1;
  v3 = CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Find(
         &this->m_ConceptHistories.m_Elements,
         &key);
  if ( v3 == -1 )
    return 1;
  v4 = &this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory[v3];
  if ( v4->m_Data.elem.m_response.m_szResponseName[0] == 0 )
    return 1;
  if ( CRR_Response::GetSpeakOnce(&v4->m_Data.elem.m_response) )
    return 0;
  RespeakDelay = CRR_Response::GetRespeakDelay(&v4->m_Data.elem.m_response);
  return RespeakDelay == 0.0
      || v4->m_Data.elem.timeSpoken == -1.0
      || (RespeakDelay + v4->m_Data.elem.timeSpoken) <= CGlobalVarsBase::curtime(gpGlobals, 0);
}


// CAI_Expresser::SpokeConcept  (line 1050, @0x000000000216daf0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol
// calls: CAI_Expresser::GetTimeSpokeConcept
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CAI_Expresser::SpokeConcept(CAI_Expresser *const this, AIConcept_t *concept)
{
  float TimeSpokeConcept; // xmm0_4
  __int64 result; // rax
  unsigned int v4; // edx
  AIConcept_t concepta; // [rsp+0h] [rbp-10h] BYREF

  concepta = *concept;
  TimeSpokeConcept = CAI_Expresser::GetTimeSpokeConcept(this, &concepta);
  result = 1;
  LOBYTE(v4) = 0;
  if ( TimeSpokeConcept == -1.0 )
    return v4;
  return result;
}


// CAI_Expresser::GetTimeSpokeConcept  (line 1057, @0x000000000216da90, libserver.so)  // inlines: Element, Find, operator char const*, operator[]
// calls: CRR_Concept::GetStringConcept, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Find
// callers: CAI_Expresser::SpokeConcept
// local variable allocation has failed, the output may be wrong!
float __fastcall CAI_Expresser::GetTimeSpokeConcept(CAI_Expresser *const this, const CRR_Concept *concept)
{
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::IndexType_t v3; // eax
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::KeyType_t key; // [rsp+8h] [rbp-18h] BYREF

  key = CRR_Concept::GetStringConcept(concept);
  if ( key == 0 )
    return -1.0;
  v3 = CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Find(
         &this->m_ConceptHistories.m_Elements,
         &key);
  if ( v3 == -1 )
    return -1.0;
  else
    return this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.timeSpoken;
}


// CAI_Expresser::SetSpokeConcept  (line 1069, @0x0000000002178040, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, ConceptHistory_t, Element, Find, Insert, LeftChild, MemAlloc_StrDupFunc, Node_t, RightChild, curtime, operator char const*, operator(), operator=, operator[], strcpy, ~ConceptHistory_t, ~Node_t
// calls: CRR_Concept::GetStringConcept, CRR_Response::CRR_Response, CRR_Response::~CRR_Response, strlen, strcpy, CRR_Response::operator=, CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Insert, _Unwind_Resume, __stack_chk_fail
// callers: CAI_Expresser::SpeakDispatchResponse
// local variable allocation has failed, the output may be wrong!
void __fastcall CAI_Expresser::SetSpokeConcept(
        CAI_Expresser *const this,
        const CRR_Concept *concept,
        AI_Response *response,
        bool bCallback)
{
  const char *StringConcept; // rbx
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  const char *v10; // rax
  const char *v11; // r12
  size_t v12; // rax
  char *v13; // rax
  char *v14; // r12
  __int64 v15; // r15
  float m_flCurrentTime; // xmm0_4
  char *v17; // r15
  CGlobalVars *v18; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CAI_ExpresserSink *m_pSink; // rdi
  int (*v21)(...); // rax
  UtlSymId_t v25[2]; // [rsp+20h] [rbp-3F0h] BYREF
  int v26; // [rsp+24h] [rbp-3ECh]
  float v27; // [rsp+30h] [rbp-3E0h]
  CRR_Response v28; // [rsp+38h] [rbp-3D8h] BYREF
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t insert; // [rsp+200h] [rbp-210h] BYREF
  unsigned __int64 v30; // [rsp+3D8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  StringConcept = CRR_Concept::GetStringConcept(concept);
  if ( StringConcept == 0 )
  {
LABEL_9:
    v27 = -1.0;
    CRR_Response::CRR_Response(&v28);
    v10 = CRR_Concept::GetStringConcept(concept);
    v11 = v10;
    if ( v10 != 0 )
    {
      v12 = strlen(v10);
      v13 = (**g_pMemAlloc)(g_pMemAlloc, v12 + 1);
      v14 = strcpy(v13, v11);
    }
    else
    {
      v14 = 0;
    }
    insert.elem.timeSpoken = -1.0;
    CRR_Response::CRR_Response(&insert.elem.m_response);
    insert.key = v14;
    insert.elem.timeSpoken = v27;
    CRR_Response::operator=(&insert.elem.m_response, &v28);
    v15 = CUtlRBTree<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Insert(
            &this->m_ConceptHistories.m_Elements.m_Tree,
            &insert,
            ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
    CRR_Response::~CRR_Response(&insert.elem.m_response);
    CRR_Response::~CRR_Response(&v28);
    v9 = 480 * v15;
    goto LABEL_12;
  }
  insert.elem.timeSpoken = -1.0;
  CRR_Response::CRR_Response(&insert.elem.m_response);
  m_Root = this->m_ConceptHistories.m_Elements.m_Tree.m_Root;
  insert.key = StringConcept;
  if ( m_Root == -1 )
  {
LABEL_8:
    CRR_Response::~CRR_Response(&insert.elem.m_response);
    goto LABEL_9;
  }
  m_pMemory = this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = m_Root;
      v9 = v8 * 480;
      if ( !this->m_ConceptHistories.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&insert, &m_pMemory[v8].m_Data) )
        break;
      m_pMemory = this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == -1 )
        goto LABEL_8;
    }
    if ( !this->m_ConceptHistories.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data,
            &insert) )
      break;
    m_pMemory = this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v8].m_Right;
    if ( m_Root == -1 )
      goto LABEL_8;
  }
  CRR_Response::~CRR_Response(&insert.elem.m_response);
LABEL_12:
  m_flCurrentTime = 0.0;
  v17 = this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory + v9;
  v18 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v18->m_flCurrentTime;
  }
  *(v17 + 6) = m_flCurrentTime;
  if ( response != 0 )
    CRR_Response::operator=((v17 + 32), response);
  if ( bCallback )
  {
    m_pSink = this->m_pSink;
    v21 = *m_pSink->_vptr_CAI_ExpresserSink;
    v25[0] = concept->m_iConcept.m_Id;
    v26 = *&concept[2].m_iConcept.m_Id;
    v21(m_pSink, v25, response);
  }
}


// CAI_Expresser::ClearSpokeConcept  (line 1088, @0x0000000002178ee0, libserver.so)  // inlines: Destruct<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t>, Element, Find, FreeNode, Key, Remove, RemoveAt, SetLeftChild, SetRightChild, operator char const*, operator[], ~ConceptHistory_t, ~Node_t
// calls: CRR_Concept::GetStringConcept, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Find, CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Unlink, CRR_Response::~CRR_Response
// local variable allocation has failed, the output may be wrong!
void __fastcall CAI_Expresser::ClearSpokeConcept(CAI_Expresser *const this, const CRR_Concept *concept)
{
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::IndexType_t v3; // eax
  int v4; // r13d
  __int64 v5; // r12
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::KeyType_t key; // [rsp+8h] [rbp-28h] BYREF

  key = CRR_Concept::GetStringConcept(concept);
  if ( key != 0 )
  {
    v3 = CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Find(
           &this->m_ConceptHistories.m_Elements,
           &key);
    v4 = v3;
    if ( v3 != -1 )
    {
      v5 = v3;
      (*(*g_pMemAlloc + 16LL))(
        g_pMemAlloc,
        this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Data.key);
      CUtlRBTree<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Unlink(
        &this->m_ConceptHistories.m_Elements.m_Tree,
        v4);
      CRR_Response::~CRR_Response(&this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem.m_response);
      this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Left = v4;
      this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Right = this->m_ConceptHistories.m_Elements.m_Tree.m_FirstFree;
      --this->m_ConceptHistories.m_Elements.m_Tree.m_NumElements;
      this->m_ConceptHistories.m_Elements.m_Tree.m_FirstFree = v4;
    }
  }
}


// CAI_Expresser::DumpHistories  (line 1095, @0x0000000002172050, libserver.so)  // inlines: Element, First, FirstInorder, LeftChild, Next, NextInorder, operator[]
// calls: DevMsg(char const*,...), CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder
// strings: "%i: %s at %f\n"
void __fastcall CAI_Expresser::DumpHistories(CAI_Expresser *const this)
{
  int m_Root; // ebx
  __int64 v3; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  int m_Left; // esi
  __int64 v6; // rsi
  unsigned int v7; // r14d

  m_Root = this->m_ConceptHistories.m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    v3 = m_Root;
    m_pMemory = this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v3 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    v6 = 1;
    while ( 1 )
    {
      v7 = v6 + 1;
      DevMsg("%i: %s at %f\n", v6, m_pMemory[v3].m_Data.key, m_pMemory[v3].m_Data.elem.timeSpoken);
      m_Root = CUtlRBTree<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_ConceptHistories.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_ConceptHistories.m_Elements.m_Tree.m_Elements.m_pMemory;
      v6 = v7;
      v3 = m_Root;
    }
  }
}


// CAI_Expresser::IsValidResponse  (line 1108, @0x00000000021409a0, libserver.so)
// calls: CBaseEntity::GenderExpandString, GetSceneDuration, __stack_chk_fail
bool __fastcall CAI_Expresser::IsValidResponse(CAI_Expresser *const this, ResponseType_t type, const char *pszValue)
{
  bool result; // al
  char szInstanceFilename[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v5; // [rsp+108h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  result = 1;
  if ( type == ResponseType_t::RESPONSE_SCENE )
  {
    CBaseEntity::GenderExpandString(this->m_pOuter, pszValue, szInstanceFilename, 256);
    return GetSceneDuration(szInstanceFilename) > 0.0;
  }
  return result;
}


// CAI_Expresser::GetMySpeechSemaphore  (line 1122, @0x000000000214bb10, libserver.so)
CAI_TimedSemaphore *__fastcall CAI_Expresser::GetMySpeechSemaphore(CAI_Expresser *const this, CBaseEntity *pNpc)
{
  return 0;
}


// CAI_Expresser::SpeechMsg  (line 1137, @0x0000000002168350, libserver.so)  // inlines: GetBool, GetInt
// calls: CFmtStrN<256, false>::CFmtStrN, UTIL_LogPrintf, DevMsg(char const*,...), __stack_chk_fail
// callers: CAI_Expresser::BlockSpeechUntil, CAI_Expresser::IsSpeaking, CAI_Expresser::NoteSpeaking, CAI_Expresser::SpeakRawScene, CAI_Expresser::SpeakAutoGeneratedScene, CAI_ExpresserWithFollowup::Speak, CAI_Expresser::Speak
void CAI_Expresser::SpeechMsg(CAI_Expresser *const this, CBaseEntity *pFlex, const char *pszFormat, ...)
{
  const char *pszFormata; // [rsp+8h] [rbp-138h] BYREF
  CFmtStrN<256,false> v4; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+128h] [rbp-18h]

  pszFormata = pszFormat;
  v5 = __readfsqword(0x28u);
  if ( ai_debug_speech.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( (*(pFlex->_vptr_IHandleEntity + 144))(pFlex) == 0 )
    {
      CFmtStrN<256,false>::CFmtStrN(&v4, &pszFormata);
      DevMsg("%s", v4.m_szBuf);
    }
    CFmtStrN<256,false>::CFmtStrN(&v4, &pszFormata);
    UTIL_LogPrintf("%s", v4.m_szBuf);
  }
}


// CAI_Expresser::IsSpeechGloballySuppressed  (line 1159, @0x000000000214bb20, libserver.so)
bool __cdecl CAI_Expresser::IsSpeechGloballySuppressed()
{
  return 0;
}


// CMultiplayer_Expresser::CMultiplayer_Expresser  (line 1309, @0x0000000002172890, libserver.so)  // inlines: CAI_ExpresserWithFollowup, CEntityHandle, CFollowupTargetSpec_t, CHandle
// calls: CAI_Expresser::CAI_Expresser
void __fastcall CMultiplayer_Expresser::CMultiplayer_Expresser(CMultiplayer_Expresser *const this, CBaseFlex *pOuter)
{
  CAI_Expresser::CAI_Expresser(this, pOuter);
  this->m_bAllowMultipleScenes = 0;
  this->m_pPostponedFollowup = 0;
  this->m_followupTarget.m_iTargetType = DeferredResponseTarget_t::kDRT_MAX;
  this->m_followupTarget.m_hHandle.m_Index = -1;
  this->_vptr_IResponseFilter = &off_4001670;
}


// CMultiplayer_Expresser::IsSpeaking  (line 1314, @0x0000000002168670, libserver.so)
// calls: CAI_Expresser::IsSpeaking
bool __fastcall CMultiplayer_Expresser::IsSpeaking(CMultiplayer_Expresser *const this)
{
  return !this->m_bAllowMultipleScenes && CAI_Expresser::IsSpeaking(this);
}


// CMultiplayer_Expresser::AllowMultipleScenes  (line 1325, @0x000000000214bb30, libserver.so)
// callers: CMultiplayRules::VoiceCommand
void __fastcall CMultiplayer_Expresser::AllowMultipleScenes(CMultiplayer_Expresser *const this)
{
  this->m_bAllowMultipleScenes = 1;
}


// CMultiplayer_Expresser::DisallowMultipleScenes  (line 1330, @0x000000000214bb40, libserver.so)
// callers: CMultiplayRules::VoiceCommand
void __fastcall CMultiplayer_Expresser::DisallowMultipleScenes(CMultiplayer_Expresser *const this)
{
  this->m_bAllowMultipleScenes = 0;
}


