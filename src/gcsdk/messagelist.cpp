
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_messagelist.cpp  (line 0, @0x0000000001a6e470, libserver.so)  // inlines: CGCEmitGroup, Color, SetColor, __static_initialization_and_destruction_0
// calls: GCSDK::CMessageList::CMessageList, __cxa_atexit
// globals: UNSPECIFIED_LOGGING_COLOR, GCSDK::g_theMessageList, GCSDK::g_EGMessages, __dso_handle, GCSDK::CMessageList::~CMessageList()
void __cdecl GLOBAL__sub_I_messagelist_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  GCSDK::g_EGMessages.m_pszGroupName = "messages";
  GCSDK::CMessageList::CMessageList(&GCSDK::g_theMessageList);
  __cxa_atexit(GCSDK::CMessageList::~CMessageList, &GCSDK::g_theMessageList, &_dso_handle);
}


// GCSDK::CMessageListRegistration::CMessageListRegistration  (line 45, @0x0000000003232210, libserver.so)
// globals: GCSDK::CMessageListRegistration::sm_pFirst
void __fastcall GCSDK::CMessageListRegistration::CMessageListRegistration(
        GCSDK::CMessageListRegistration *const this,
        GCSDK::MsgInfo_t *pMsgInfo,
        int cMsgInfo,
        void *pExtra)
{
  GCSDK::CMessageListRegistration *v4; // rax

  v4 = GCSDK::CMessageListRegistration::sm_pFirst;
  this->m_pMsgInfo = pMsgInfo;
  this->m_cMsgInfo = cMsgInfo;
  this->m_pNext = v4;
  GCSDK::CMessageListRegistration::sm_pFirst = this;
}


// GCSDK::PchMsgNameFromEMsg  (line 58, @0x0000000003233c60, libserver.so)
// calls: GCSDK::CMessageList::GetMessage
// callers: GCSDK::CGCClient::BSendMessage, GCSDK::GCMsgHdr_t::GetHeaderDescription, GCSDK::GCMsgHdrEx_t::GetHeaderDescription, GCSDK::GCMsgInterHdr_t::GetHeaderDescription, GCSDK::CJobMgr::DumpOrphanedMessages, GCSDK::CJobMgr::PassMsgToJob, GCSDK::CJobMgr::RecordOrphanedMessage
// strings: "Unknown"
// globals: GCSDK::g_theMessageList
const char *__fastcall GCSDK::PchMsgNameFromEMsg(GCSDK::MsgType_t eMsg)
{
  const char *pchMsgName; // [rsp+8h] [rbp-8h] BYREF

  pchMsgName = "Unknown";
  GCSDK::CMessageList::GetMessage(&GCSDK::g_theMessageList, eMsg, &pchMsgName, 1);
  return pchMsgName;
}


// GCSDK::MsgRegistrationFromEnumDescriptor  (line 67, @0x0000000003232230, libserver.so)  // inlines: CMessageListRegistration, Clear, MsgInfo_t, Stats_t, _M_data, c_str, memset, value
// calls: operator new [], memset, operator new
// callers: GCSDK::CGCClient::BInit
// globals: GCSDK::CMessageListRegistration::sm_pFirst
void __fastcall GCSDK::MsgRegistrationFromEnumDescriptor(
        const google::protobuf::EnumDescriptor *pEnumDescriptor,
        int nTypeMask)
{
  unsigned __int64 value_count; // r14
  size_t v5; // rdi
  GCSDK::MsgInfo_t *v6; // rax
  GCSDK::MsgInfo_t *v7; // r8
  GCSDK::MsgInfo_t *v8; // r13
  unsigned __int64 v9; // rax
  GCSDK::MsgInfo_t *v10; // rdx
  GCSDK::MsgInfo_t *p_nMax; // rcx
  int v12; // r14d
  __int64 v13; // r8
  int v14; // ecx
  GCSDK::MsgInfo_t *i; // rdx
  __int64 v16; // rax
  char *v17; // rax
  const char *v18; // rax
  GCSDK::CMessageListRegistration *v19; // rax
  GCSDK::CMessageListRegistration *v20; // rdx

  value_count = pEnumDescriptor->value_count_;
  v5 = -1;
  if ( value_count <= 0x51000000000000LL )
    v5 = 400 * value_count;
  v6 = operator new[](v5);
  v7 = v6 + 1;
  v8 = v6;
  v9 = value_count - 2;
  if ( value_count != 0 )
  {
    do
    {
      v10 = (v7 - 384);
      do
      {
        p_nMax = &v10->stats[0][3].nMax;
        do
        {
          v10->eMsg = 0;
          v10 = (v10 + 24);
          v10[-1].stats[3][3].nCount = 0;
          v10[-1].stats[3][3].uBytes = 0;
          v10[-1].stats[3][3].nMax = 0;
        }
        while ( v10 != p_nMax );
      }
      while ( v10 != v7 );
      --v9;
      ++v7;
    }
    while ( v9 != -2 );
  }
  memset(v8, 0, 400LL * pEnumDescriptor->value_count_);
  v12 = pEnumDescriptor->value_count_;
  v13 = 0;
  v14 = 0;
  for ( i = v8; v12 > v14; v12 = pEnumDescriptor->value_count_ )
  {
    v16 = v13;
    ++v14;
    v13 += 40;
    v17 = pEnumDescriptor->values_ + v16;
    ++i;
    i[-1].eMsg = *(v17 + 4);
    v18 = **v17;
    i[-1].nFlags = nTypeMask;
    i[-1].pchMsgName = v18;
  }
  v19 = operator new(0x18u);
  v20 = GCSDK::CMessageListRegistration::sm_pFirst;
  v19->m_pMsgInfo = v8;
  v19->m_cMsgInfo = v12;
  v19->m_pNext = v20;
  GCSDK::CMessageListRegistration::sm_pFirst = v19;
}


// GCSDK::CMessageList::CMessageList  (line 95, @0x0000000003232360, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: GCSDK::CJobTime::CJobTime
// callers: _GLOBAL__sub_I_messagelist.cpp
void __fastcall GCSDK::CMessageList::CMessageList(GCSDK::CMessageList *const this)
{
  bool *p_m_bProfiling; // r13
  GCSDK::CMessageList *v3; // rbx
  GCSDK::CJobTime *v4; // rdi

  p_m_bProfiling = &this->m_bProfiling;
  v3 = this;
  do
  {
    v4 = v3;
    v3 = (v3 + 8);
    GCSDK::CJobTime::CJobTime(v4);
  }
  while ( v3 != p_m_bProfiling );
  this->m_bProfiling = 0;
  this->m_ulProfileMicrosecs = 0;
  this->m_vecMessageInfoBuckets.m_Size = 0;
  this->m_vecMessageInfoBuckets.m_Memory.m_pMemory = 0;
  this->m_vecMessageInfoBuckets.m_Memory.m_nAllocationCount = 0;
  this->m_vecMessageInfoBuckets.m_Memory.m_nGrowSize = 0;
  this->m_vecMsgInfo.m_Size = 0;
  this->m_vecMsgInfo.m_Memory.m_pMemory = 0;
  this->m_vecMsgInfo.m_Memory.m_nAllocationCount = 0;
  this->m_vecMsgInfo.m_Memory.m_nGrowSize = 0;
}


// GCSDK::CMessageList::BInit  (line 106, @0x0000000003233e80, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::MsgInfo_t>, Element, EnsureCapacity, GrowMemory, HashMessage, RemoveAll, memcpy, operator[]
// calls: CUtlVectorBase<GCSDK::MsgInfo_t, CUtlMemory<GCSDK::MsgInfo_t, int> >::RemoveAll, AssertMsg_ConditionFailed, memcpy, GCSDK::CMessageList::AssureBucket, CUtlMemory<GCSDK::MsgInfo_t, int>::Grow, GCSDK::CMessageList::ResetWindow, GCSDK::CJobTime::SetToJobTime
// strings: "Message collision: %s redefined as %s"
// globals: GCSDK::CMessageListRegistration::sm_pFirst, GCSDK::CMessageList::BInit(void)::_assertionConstants
bool __fastcall GCSDK::CMessageList::BInit(GCSDK::CMessageList *const this)
{
  int v1; // r12d
  GCSDK::CMessageListRegistration *v3; // rax
  uint32 m_nGrowSize; // eax
  GCSDK::MsgInfo_t *v5; // rsi
  GCSDK::CMessageListRegistration *v6; // r15
  __int64 v7; // r12
  int v8; // r14d
  int m_Size; // r13d
  GCSDK::MsgInfo_t *v10; // rcx
  int v11; // eax
  GCSDK::MsgInfo_t *v12; // rdi
  __int16 *v13; // rdx
  __int64 v14; // rax
  GCSDK::MsgInfo_t *m_pMemory; // r13
  GCSDK::MsgInfo_t *v17; // rax
  GCSDK::MsgType_t eMsg; // [rsp+14h] [rbp-3Ch]
  GCSDK::MsgInfo_t *v19; // [rsp+18h] [rbp-38h]

  v1 = 0;
  this->m_bProfiling = 0;
  v3 = GCSDK::CMessageListRegistration::sm_pFirst;
  for ( this->m_ulProfileMicrosecs = 0; v3 != 0; v3 = v3->m_pNext )
    v1 += v3->m_cMsgInfo;
  if ( this->m_vecMsgInfo.m_Memory.m_nAllocationCount < v1 )
  {
    m_nGrowSize = this->m_vecMsgInfo.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_vecMsgInfo.m_Memory.m_pMemory;
        v17 = (**g_pMemAlloc)(g_pMemAlloc, 400LL * v1);
        this->m_vecMsgInfo.m_Memory.m_pMemory = v17;
        if ( m_pMemory != 0 )
          memcpy(v17, m_pMemory, 400LL * this->m_vecMsgInfo.m_Memory.m_nAllocationCount);
        this->m_vecMsgInfo.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_vecMsgInfo.m_Memory.m_pMemory;
        if ( v5 != 0 )
          this->m_vecMsgInfo.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v5, 400LL * v1);
        else
          this->m_vecMsgInfo.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 400LL * v1);
      }
      this->m_vecMsgInfo.m_Memory.m_nAllocationCount = v1;
    }
  }
  CUtlVectorBase<GCSDK::MsgInfo_t,CUtlMemory<GCSDK::MsgInfo_t,int>>::RemoveAll(&this->m_vecMsgInfo);
  v6 = GCSDK::CMessageListRegistration::sm_pFirst;
  for ( this->m_vecMessageInfoBuckets.m_Size = 0; v6 != 0; v6 = v6->m_pNext )
  {
    if ( v6->m_cMsgInfo > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        m_Size = this->m_vecMsgInfo.m_Size;
        v10 = &v6->m_pMsgInfo[v7];
        v11 = m_Size;
        if ( m_Size == this->m_vecMsgInfo.m_Memory.m_nAllocationCount )
        {
          v19 = &v6->m_pMsgInfo[v7];
          CUtlMemory<GCSDK::MsgInfo_t,int>::Grow(&this->m_vecMsgInfo.m_Memory, 1);
          v11 = this->m_vecMsgInfo.m_Size;
          v10 = v19;
        }
        this->m_vecMsgInfo.m_Size = v11 + 1;
        v12 = &this->m_vecMsgInfo.m_Memory.m_pMemory[m_Size];
        if ( v12 != 0 )
          memcpy(v12, v10, sizeof(GCSDK::MsgInfo_t));
        eMsg = v6->m_pMsgInfo[v7].eMsg;
        GCSDK::CMessageList::AssureBucket(this, eMsg >> 4);
        v13 = &this->m_vecMessageInfoBuckets.m_Memory.m_pMemory[eMsg >> 4][eMsg & 0xF];
        v14 = *v13;
        if ( v14 == 0xFFFF )
        {
          *v13 = m_Size;
        }
        else if ( AssertMsg_ConditionFailed(
                    &GCSDK::CMessageList::BInit(void)::_assertionConstants,
                    "Message collision: %s redefined as %s",
                    this->m_vecMsgInfo.m_Memory.m_pMemory[v14].pchMsgName,
                    v6->m_pMsgInfo[v7].pchMsgName) != 0 )
        {
          __debugbreak();
        }
        ++v8;
        ++v7;
      }
      while ( v6->m_cMsgInfo > v8 );
    }
  }
  GCSDK::CMessageList::ResetWindow(this);
  GCSDK::CJobTime::SetToJobTime(this->m_sCollectTime);
  return 1;
}


// GCSDK::CMessageList::TallySendMessage  (line 164, @0x0000000003233850, libserver.so)  // inlines: operator[]
// calls: GCSDK::CMessageList::GetMessageIndex, GCSDK::CMessageList::TallyMessageInternal
// callers: GCSDK::CGCClient::BSendMessage
void __fastcall GCSDK::CMessageList::TallySendMessage(
        GCSDK::CMessageList *const this,
        GCSDK::MsgType_t eMsgType,
        uint32 unMsgSize,
        uint32 nSourceMask)
{
  __int16 MessageIndex; // ax

  MessageIndex = GCSDK::CMessageList::GetMessageIndex(this, eMsgType);
  if ( MessageIndex != -1 )
    GCSDK::CMessageList::TallyMessageInternal(
      this,
      &this->m_vecMsgInfo.m_Memory.m_pMemory[MessageIndex],
      GCSDK::MsgInfo_t::EStatsType::k_EStatsTypeSent,
      unMsgSize,
      nSourceMask,
      1u);
}


// GCSDK::CMessageList::TallyReceiveMessage  (line 180, @0x00000000032338b0, libserver.so)  // inlines: operator[]
// calls: GCSDK::CMessageList::GetMessageIndex, GCSDK::CMessageList::TallyMessageInternal
// callers: GCSDK::CGCClient::DispatchPacket
void __fastcall GCSDK::CMessageList::TallyReceiveMessage(
        GCSDK::CMessageList *const this,
        GCSDK::MsgType_t eMsgType,
        uint32 unMsgSize,
        uint32 nSourceMask)
{
  __int16 MessageIndex; // ax

  MessageIndex = GCSDK::CMessageList::GetMessageIndex(this, eMsgType);
  if ( MessageIndex != -1 )
    GCSDK::CMessageList::TallyMessageInternal(
      this,
      &this->m_vecMsgInfo.m_Memory.m_pMemory[MessageIndex],
      GCSDK::MsgInfo_t::EStatsType::k_EStatsTypeReceived,
      unMsgSize,
      nSourceMask,
      1u);
}


// GCSDK::CMessageList::TallyMultiplexedMessage  (line 196, @0x0000000003233910, libserver.so)  // inlines: operator[]
// calls: GCSDK::CMessageList::GetMessageIndex, GCSDK::CMessageList::TallyMessageInternal
void __fastcall GCSDK::CMessageList::TallyMultiplexedMessage(
        GCSDK::CMessageList *const this,
        GCSDK::MsgType_t eMsgType,
        uint32 uSent,
        uint32 cRecipients,
        uint32 uMsgSize,
        uint32 nSourceMask)
{
  __int16 MessageIndex; // ax
  GCSDK::MsgInfo_t *v11; // rbx

  MessageIndex = GCSDK::CMessageList::GetMessageIndex(this, eMsgType);
  if ( MessageIndex != -1 )
  {
    v11 = &this->m_vecMsgInfo.m_Memory.m_pMemory[MessageIndex];
    GCSDK::CMessageList::TallyMessageInternal(
      this,
      v11,
      GCSDK::MsgInfo_t::EStatsType::k_EStatsTypeMultiplexedSends,
      uSent,
      nSourceMask,
      1u);
    GCSDK::CMessageList::TallyMessageInternal(
      this,
      v11,
      GCSDK::MsgInfo_t::EStatsType::k_EStatsTypeMultiplexedSendsRaw,
      cRecipients * uMsgSize,
      nSourceMask,
      cRecipients);
  }
}


// GCSDK::CMessageList::TallyMessageInternal  (line 223, @0x00000000032323f0, libserver.so)  // inlines: AddStats
// callers: GCSDK::CMessageList::TallySendMessage, GCSDK::CMessageList::TallyReceiveMessage, GCSDK::CMessageList::TallyMultiplexedMessage
void __fastcall GCSDK::CMessageList::TallyMessageInternal(
        GCSDK::CMessageList *const this,
        GCSDK::MsgInfo_t *const msgInfo,
        GCSDK::MsgInfo_t::EStatsType eBucket,
        uint32 unMsgSize,
        uint32 nSourceMask,
        uint32 cMessages)
{
  __int64 v6; // r10
  char *v7; // rax
  uint32 nMax; // r11d
  GCSDK::MsgInfo_t::Stats_t *v9; // rax
  uint32 v10; // r11d
  GCSDK::MsgInfo_t::Stats_t *v11; // rax
  uint32 v12; // edx

  v6 = eBucket;
  v7 = msgInfo->stats + v6 * 24;
  nMax = msgInfo->stats[0][v6].nMax;
  *(v7 + 1) += cMessages;
  *(v7 + 2) += unMsgSize;
  *v7 |= nSourceMask;
  if ( unMsgSize >= nMax )
    nMax = unMsgSize;
  msgInfo->stats[0][v6].nMax = nMax;
  v9 = &msgInfo->stats[2][v6];
  v10 = msgInfo->stats[2][v6].nMax;
  v9->nCount += cMessages;
  v9->uBytes += unMsgSize;
  v9->nSourceMask |= nSourceMask;
  if ( unMsgSize >= v10 )
    v10 = unMsgSize;
  msgInfo->stats[2][v6].nMax = v10;
  if ( this->m_bProfiling )
  {
    v11 = &msgInfo->stats[1][v6];
    v11->uBytes += unMsgSize;
    v12 = msgInfo->stats[1][v6].nMax;
    v11->nCount += cMessages;
    v11->nSourceMask |= nSourceMask;
    if ( unMsgSize < v12 )
      unMsgSize = v12;
    msgInfo->stats[1][v6].nMax = unMsgSize;
  }
}


// GCSDK::CMessageList::GetTotalBytes  (line 239, @0x0000000003232470, libserver.so)
uint64 __fastcall GCSDK::CMessageList::GetTotalBytes(
        const GCSDK::CMessageList *const this,
        GCSDK::MsgInfo_t::EStatsGroup eGroup,
        GCSDK::MsgInfo_t::EStatsType eType)
{
  int m_Size; // r8d
  GCSDK::MsgInfo_t *m_pMemory; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  uint64 *p_uBytes; // rdx
  __int64 v8; // rcx
  uint64 result; // rax

  m_Size = this->m_vecMsgInfo.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_vecMsgInfo.m_Memory.m_pMemory;
  v5 = eType;
  v6 = 4LL * eGroup;
  p_uBytes = &m_pMemory->stats[0][v5 + v6].uBytes;
  v8 = &m_pMemory[(m_Size - 1) + 1].stats[0][v5 + v6].uBytes;
  result = 0;
  do
  {
    result += *p_uBytes;
    p_uBytes += 50;
  }
  while ( p_uBytes != v8 );
  return result;
}


// GCSDK::CMessageList::ResetWindow  (line 250, @0x00000000032324e0, libserver.so)  // inlines: Clear, operator[]
// calls: GCSDK::CJobTime::SetToJobTime
// callers: GCSDK::CMessageList::BInit
void __fastcall GCSDK::CMessageList::ResetWindow(GCSDK::CMessageList *const this)
{
  GCSDK::CJobTime *v2; // rdi
  __int64 v3; // r9
  int i; // r10d
  unsigned int v5; // edx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  char *v8; // rax

  v2 = &this->m_sCollectTime[2];
  v2[1].m_lTime = v2->m_lTime;
  GCSDK::CJobTime::SetToJobTime(v2);
  v3 = 0;
  for ( i = 0; this->m_vecMsgInfo.m_Size > i; ++v3 )
  {
    v5 = 0;
    do
    {
      v6 = v5++;
      v6 *= 24;
      v7 = (&this->m_vecMsgInfo.m_Memory.m_pMemory[v3].eMsg + v6);
      v7[38] = v7[26];
      v7[39] = v7[27];
      v7[40] = v7[28];
      v8 = this->m_vecMsgInfo.m_Memory.m_pMemory[v3].stats[2] + v6;
      *v8 = 0;
      *(v8 + 1) = 0;
      *(v8 + 2) = 0;
      *(v8 + 2) = 0;
    }
    while ( v5 != 4 );
    ++i;
  }
}


// GCSDK::CMessageList::EnableProfiling  (line 271, @0x00000000032325b0, libserver.so)  // inlines: Clear, operator[]
// calls: GCSDK::CJobTime::SetToJobTime, GCSDK::CJobTime::CServerMicroSecsPassed
void __fastcall GCSDK::CMessageList::EnableProfiling(GCSDK::CMessageList *const this, bool bEnableProfiling)
{
  GCSDK::CJobTime *v3; // rdi
  __int64 v4; // rsi
  int i; // edi
  unsigned int v6; // edx
  __int64 v7; // rax
  GCSDK::MsgInfo_t::Stats_t *v8; // rax

  v3 = &this->m_sCollectTime[1];
  LOBYTE(v3[3].m_lTime) = bEnableProfiling;
  if ( bEnableProfiling )
  {
    GCSDK::CJobTime::SetToJobTime(v3);
    v4 = 0;
    for ( i = 0; this->m_vecMsgInfo.m_Size > i; ++v4 )
    {
      v6 = 0;
      do
      {
        v7 = v6++;
        v8 = &this->m_vecMsgInfo.m_Memory.m_pMemory[v4].stats[1][v7];
        v8->nSourceMask = 0;
        v8->nCount = 0;
        v8->uBytes = 0;
        v8->nMax = 0;
      }
      while ( v6 != 4 );
      ++i;
    }
  }
  else
  {
    this->m_ulProfileMicrosecs = GCSDK::CJobTime::CServerMicroSecsPassed(v3);
  }
}


// GCSDK::CMessageList::GetGroupDuration  (line 294, @0x0000000003232640, libserver.so)
// calls: GCSDK::CJobTime::CServerMicroSecsPassed
uint64 __fastcall GCSDK::CMessageList::GetGroupDuration(
        const GCSDK::CMessageList *const this,
        GCSDK::MsgInfo_t::EStatsGroup eGroup)
{
  if ( eGroup != GCSDK::MsgInfo_t::EStatsGroup::k_EStatsGroupProfile || this->m_bProfiling )
    return GCSDK::CJobTime::CServerMicroSecsPassed(&this->m_sCollectTime[eGroup]);
  else
    return this->m_ulProfileMicrosecs;
}


// GCSDK::ReportMessageSummary  (line 310, @0x0000000003232080, libserver.so)
// calls: GCSDK::CGCReportPrinter::StrValue, GCSDK::CGCReportPrinter::IntValue, GCSDK::CGCReportPrinter::FloatValue, GCSDK::CGCReportPrinter::CommitRow
// callers: GCSDK::CMessageList::PrintSummary
void __fastcall GCSDK::ReportMessageSummary(
        GCSDK::CGCReportPrinter *const rp,
        const char *pszName,
        const GCSDK::MsgInfo_t::Stats_t *const stats,
        const GCSDK::MsgInfo_t::Stats_t *const a4,
        double fPerSecond)
{
  double v8; // xmm1_8
  unsigned __int64 nSourceMask; // rdi
  double v10; // xmm1_8
  double v11; // xmm1_8

  GCSDK::CGCReportPrinter::StrValue(rp, pszName, 0);
  GCSDK::CGCReportPrinter::IntValue(rp, stats->nSourceMask, 0);
  GCSDK::CGCReportPrinter::FloatValue(rp, v8, 0);
  nSourceMask = 1;
  if ( stats->nSourceMask != 0 )
    nSourceMask = stats->nSourceMask;
  GCSDK::CGCReportPrinter::IntValue(rp, *&a4->nSourceMask / nSourceMask, 0);
  GCSDK::CGCReportPrinter::FloatValue(rp, v10, 0);
  GCSDK::CGCReportPrinter::FloatValue(rp, v11, 0);
  GCSDK::CGCReportPrinter::CommitRow(rp);
}


// GCSDK::CMessageList::PrintSummary  (line 321, @0x0000000003232670, libserver.so)  // inlines: Clear, GetGroupDuration, Stats_t
// calls: GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::CGCReportPrinter::CGCReportPrinter, GCSDK::CGCReportPrinter::AddStringColumn, GCSDK::CGCReportPrinter::AddIntColumn, GCSDK::CGCReportPrinter::AddFloatColumn, GCSDK::ReportMessageSummary, GCSDK::CGCReportPrinter::PrintReport, GCSDK::CGCReportPrinter::~CGCReportPrinter, _Unwind_Resume
// strings: "Avg/Msg", "MsgPS", "KBPS", "Receive", "GC Send", "GCH Send"
void __fastcall GCSDK::CMessageList::PrintSummary(
        const GCSDK::CMessageList *const this,
        GCSDK::MsgInfo_t::EStatsGroup eGroup,
        uint32 nSourceMask)
{
  GCSDK::MsgInfo_t::Stats_t *v3; // rax
  int m_Size; // ecx
  GCSDK::MsgInfo_t *m_pMemory; // r8
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  uint32 *p_nCount; // rax
  __int64 v10; // rcx
  __int64 m_ulProfileMicrosecs; // rax
  double v12; // r14
  double v13; // xmm0_8
  GCSDK::MsgInfo_t::Stats_t gchStats; // [rsp+0h] [rbp-F0h] BYREF
  GCSDK::CGCReportPrinter rp; // [rsp+20h] [rbp-D0h] BYREF
  GCSDK::MsgInfo_t::Stats_t rgTotals[4]; // [rsp+70h] [rbp-80h] BYREF
  char v17; // [rsp+D0h] [rbp-20h] BYREF
  int v18; // [rsp+D4h] [rbp-1Ch] BYREF

  v3 = rgTotals;
  do
  {
    v3->nSourceMask = 0;
    ++v3;
    v3[-1].nCount = 0;
    v3[-1].uBytes = 0;
    v3[-1].nMax = 0;
  }
  while ( v3 != &v17 );
  m_Size = this->m_vecMsgInfo.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_vecMsgInfo.m_Memory.m_pMemory;
    v6 = eGroup;
    v7 = m_pMemory->stats[v6];
    v8 = m_pMemory[(m_Size - 1) + 1].stats[v6];
    do
    {
      p_nCount = &rgTotals[0].nCount;
      v10 = v7;
      do
      {
        if ( nSourceMask == 0 || (nSourceMask & *v10) != 0 )
        {
          *p_nCount += *(v10 + 4);
          *(p_nCount + 3) += *(v10 + 16);
        }
        p_nCount += 6;
        v10 += 24;
      }
      while ( p_nCount != &v18 );
      v7 += 400;
    }
    while ( v7 != v8 );
  }
  if ( eGroup != GCSDK::MsgInfo_t::EStatsGroup::k_EStatsGroupProfile || this->m_bProfiling )
    m_ulProfileMicrosecs = GCSDK::CJobTime::CServerMicroSecsPassed(&this->m_sCollectTime[eGroup]);
  else
    m_ulProfileMicrosecs = this->m_ulProfileMicrosecs;
  v12 = 0.0;
  if ( m_ulProfileMicrosecs != 0 )
  {
    if ( m_ulProfileMicrosecs < 0 )
      v13 = (m_ulProfileMicrosecs & 1 | (m_ulProfileMicrosecs >> 1))
          + (m_ulProfileMicrosecs & 1 | (m_ulProfileMicrosecs >> 1));
    else
      v13 = m_ulProfileMicrosecs;
    v12 = 1000000.0 / v13;
  }
  GCSDK::CGCReportPrinter::CGCReportPrinter(&rp);
  GCSDK::CGCReportPrinter::AddStringColumn(&rp, "Type", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rp,
    "Count",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_None,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rp, "KB", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rp,
    "Avg/Msg",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_None,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rp, "MsgPS", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rp, "KBPS", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::ReportMessageSummary(&rp, "Receive", &rgTotals[1].nCount, &rgTotals[1].uBytes, v12);
  GCSDK::ReportMessageSummary(&rp, "GC Send", &rgTotals[0].nCount, &rgTotals[0].uBytes, v12);
  gchStats.nMax = 0;
  gchStats.nCount = rgTotals[0].nCount + rgTotals[3].nCount - rgTotals[2].nCount;
  gchStats.uBytes = rgTotals[0].uBytes + rgTotals[3].uBytes - rgTotals[2].uBytes;
  GCSDK::ReportMessageSummary(&rp, "GCH Send", &gchStats.nCount, &gchStats.uBytes, v12);
  GCSDK::CGCReportPrinter::PrintReport(&rp, &GCSDK::SPEW_CONSOLE, 0, 1);
  GCSDK::CGCReportPrinter::~CGCReportPrinter(&rp);
}


// GCSDK::CMessageList::PrintStats  (line 368, @0x00000000032328f0, libserver.so)  // inlines: GetGroupDuration, operator[]
// calls: GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::CGCReportPrinter::CGCReportPrinter, GCSDK::CGCReportPrinter::AddIntColumn, GCSDK::CGCReportPrinter::AddStringColumn, GCSDK::CGCReportPrinter::AddFloatColumn, GCSDK::CGCReportPrinter::IntValue, GCSDK::CGCReportPrinter::StrValue, GCSDK::CGCReportPrinter::FloatValue, GCSDK::CGCReportPrinter::CommitRow, GCSDK::CGCReportPrinter::SortReport, GCSDK::CGCReportPrinter::PrintReport, GCSDK::CGCReportPrinter::~CGCReportPrinter (13 total)
// strings: "EMsg", "Message Name", "MsgPS", "Avg/Msg", "KBPS", "MaxSize"
void __fastcall GCSDK::CMessageList::PrintStats(
        const GCSDK::CMessageList *const this,
        bool bShowAll,
        bool bSortByFrequency,
        GCSDK::MsgInfo_t::EStatsGroup eGroup,
        GCSDK::MsgInfo_t::EStatsType eType,
        uint32 nSourceMask)
{
  int m_Size; // eax
  int v10; // r9d
  __int64 v11; // rsi
  GCSDK::MsgInfo_t *m_pMemory; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  char *v18; // rdx
  GCSDK::MsgInfo_t *v19; // rdx
  __int64 v20; // rbx
  int v21; // r14d
  __int64 v22; // r12
  GCSDK::MsgInfo_t *v23; // rcx
  char *v24; // rax
  unsigned __int64 v25; // r15
  double v26; // xmm1_8
  double v27; // xmm1_8
  double v28; // xmm1_8
  double v29; // xmm1_8
  double v30; // xmm1_8
  const char *v31; // rsi
  unsigned __int64 uAvgMsg; // [rsp+10h] [rbp-D0h]
  unsigned __int64 eTypeb; // [rsp+48h] [rbp-98h]
  GCSDK::CGCReportPrinter rp; // [rsp+60h] [rbp-80h] BYREF

  m_Size = this->m_vecMsgInfo.m_Size;
  if ( m_Size > 0 )
  {
    v10 = 0;
    v11 = 3LL * eType;
    m_pMemory = this->m_vecMsgInfo.m_Memory.m_pMemory;
    v13 = 0;
    v14 = 5 * (5LL * (m_Size - 1) + 5);
    v15 = 0;
    v16 = 96LL * eGroup + 8 * v11;
    v17 = 16 * v14;
    do
    {
      while ( 1 )
      {
        v19 = &m_pMemory[v15 / 0x190];
        if ( nSourceMask != 0 && (nSourceMask & *(&v19->stats[0][0].nSourceMask + v16)) == 0 )
          break;
        v18 = v19 + v16;
        v15 += 400LL;
        v10 += *(v18 + 5);
        v13 += *(v18 + 4);
        if ( v15 == v17 )
          goto LABEL_7;
      }
      v15 += 400LL;
    }
    while ( v15 != v17 );
  }
LABEL_7:
  if ( eGroup != GCSDK::MsgInfo_t::EStatsGroup::k_EStatsGroupProfile || this->m_bProfiling )
    GCSDK::CJobTime::CServerMicroSecsPassed(&this->m_sCollectTime[eGroup]);
  GCSDK::CGCReportPrinter::CGCReportPrinter(&rp);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rp,
    "EMsg",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_None,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddStringColumn(&rp, "Message Name", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rp,
    "Count",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rp, "%", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rp, "KB", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rp, "%", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rp, "MsgPS", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rp,
    "Avg/Msg",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_None,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rp, "KBPS", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rp,
    "MaxSize",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_Max,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  if ( this->m_vecMsgInfo.m_Size > 0 )
  {
    v20 = 0;
    v21 = 0;
    v22 = eGroup;
    eTypeb = eType;
    do
    {
      v23 = &this->m_vecMsgInfo.m_Memory.m_pMemory[v20];
      if ( nSourceMask == 0 || (nSourceMask & v23->stats[v22][eTypeb].nSourceMask) != 0 )
      {
        v24 = v23 + 96 * v22 + eTypeb * 24;
        v25 = *(v24 + 5);
        if ( v25 != 0 )
        {
          uAvgMsg = *(v24 + 4) / v25;
          GCSDK::CGCReportPrinter::IntValue(&rp, v23->eMsg, 0);
          GCSDK::CGCReportPrinter::StrValue(&rp, this->m_vecMsgInfo.m_Memory.m_pMemory[v20].pchMsgName, 0);
          GCSDK::CGCReportPrinter::IntValue(&rp, v25, 0);
          GCSDK::CGCReportPrinter::FloatValue(&rp, v26, 0);
          GCSDK::CGCReportPrinter::FloatValue(&rp, v27, 0);
          GCSDK::CGCReportPrinter::FloatValue(&rp, v28, 0);
          GCSDK::CGCReportPrinter::FloatValue(&rp, v29, 0);
          GCSDK::CGCReportPrinter::IntValue(&rp, uAvgMsg, 0);
          GCSDK::CGCReportPrinter::FloatValue(&rp, v30, 0);
          GCSDK::CGCReportPrinter::IntValue(
            &rp,
            *(&this->m_vecMsgInfo.m_Memory.m_pMemory->stats[v22][eTypeb].nMax + v20 * 400),
            0);
          GCSDK::CGCReportPrinter::CommitRow(&rp);
        }
      }
      ++v21;
      ++v20;
    }
    while ( this->m_vecMsgInfo.m_Size > v21 );
  }
  v31 = "KB";
  if ( bSortByFrequency )
    v31 = "Count";
  GCSDK::CGCReportPrinter::SortReport(&rp, v31, 1);
  GCSDK::CGCReportPrinter::PrintReport(&rp, &GCSDK::SPEW_CONSOLE, 0, 1);
  GCSDK::CGCReportPrinter::~CGCReportPrinter(&rp);
}


// GCSDK::CMessageList::PrintMultiplexStats  (line 440, @0x0000000003232e50, libserver.so)  // inlines: Clear, GetGroupDuration, Stats_t, operator[]
// calls: GCSDK::CGCReportPrinter::CGCReportPrinter, GCSDK::CGCReportPrinter::AddIntColumn, GCSDK::CGCReportPrinter::AddStringColumn, GCSDK::CGCReportPrinter::AddFloatColumn, GCSDK::CJobTime::CServerMicroSecsPassed, GCSDK::CGCReportPrinter::IntValue, GCSDK::CGCReportPrinter::StrValue, GCSDK::CGCReportPrinter::FloatValue, GCSDK::CGCReportPrinter::CommitRow, GCSDK::CGCReportPrinter::SortReport, GCSDK::CGCEmitGroup::Internal_Msg, GCSDK::CGCReportPrinter::PrintReport (14 total)
// strings: "EMsg", "Messge Name", "MsgPS", "Avg/Msg", "KBPS", "MaxSize" (10 total)
void __fastcall GCSDK::CMessageList::PrintMultiplexStats(
        const GCSDK::CMessageList *const this,
        GCSDK::MsgInfo_t::EStatsGroup eGroup,
        bool bSortByFrequency,
        uint32 nSourceMask)
{
  GCSDK::MsgInfo_t::Stats_t *v4; // rax
  int m_Size; // r9d
  uint32 nCount; // edi
  uint64 uBytes; // rsi
  uint32 v9; // ecx
  GCSDK::MsgInfo_t *m_pMemory; // r10
  uint64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r12
  int v16; // r13d
  GCSDK::MsgInfo_t *v17; // r14
  GCSDK::MsgInfo_t::Stats_t *v18; // rbx
  double v19; // xmm1_8
  double v20; // xmm1_8
  double uBytes_low; // xmm1_8
  double v22; // xmm1_8
  unsigned __int64 v23; // rcx
  double v24; // xmm1_8
  double v25; // xmm1_8
  int v26; // eax
  __int64 v27; // rax
  double v28; // xmm1_8
  double v29; // xmm1_8
  double v30; // xmm1_8
  double v31; // xmm1_8
  double v32; // xmm1_8
  unsigned __int64 v33; // rcx
  double v34; // xmm1_8
  const char *v35; // rsi
  const char *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // [rsp+8h] [rbp-168h]
  GCSDK::CGCReportPrinter rpGC; // [rsp+40h] [rbp-130h] BYREF
  GCSDK::CGCReportPrinter rpGCH; // [rsp+90h] [rbp-E0h] BYREF
  GCSDK::MsgInfo_t::Stats_t rgTotals[4]; // [rsp+E0h] [rbp-90h] BYREF
  char v45; // [rsp+140h] [rbp-30h] BYREF

  v4 = rgTotals;
  do
  {
    v4->nSourceMask = 0;
    ++v4;
    v4[-1].nCount = 0;
    v4[-1].uBytes = 0;
    v4[-1].nMax = 0;
  }
  while ( v4 != &v45 );
  m_Size = this->m_vecMsgInfo.m_Size;
  if ( m_Size > 0 )
  {
    nCount = rgTotals[2].nCount;
    uBytes = rgTotals[2].uBytes;
    v9 = rgTotals[3].nCount;
    m_pMemory = this->m_vecMsgInfo.m_Memory.m_pMemory;
    v11 = rgTotals[3].uBytes;
    v12 = eGroup;
    v13 = &m_pMemory->stats[v12][2];
    v14 = &m_pMemory[(m_Size - 1) + 1].stats[v12][2];
    do
    {
      if ( nSourceMask == 0 || (nSourceMask & *v13) != 0 )
      {
        v11 += *(v13 + 40);
        v9 += *(v13 + 28);
        uBytes += *(v13 + 16);
        nCount += *(v13 + 4);
      }
      v13 += 400;
    }
    while ( v13 != v14 );
    rgTotals[2].nCount = nCount;
    rgTotals[2].uBytes = uBytes;
    rgTotals[3].nCount = v9;
    rgTotals[3].uBytes = v11;
  }
  GCSDK::CGCReportPrinter::CGCReportPrinter(&rpGC);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rpGC,
    "EMsg",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_None,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddStringColumn(&rpGC, "Messge Name", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rpGC,
    "Count",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGC, "%", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGC, "KB", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGC, "%", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGC, "MsgPS", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rpGC,
    "Avg/Msg",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_None,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGC, "KBPS", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rpGC,
    "MaxSize",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_Max,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGC, "MsgSaved%", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGC, "KBSaved%", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::CGCReportPrinter(&rpGCH);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rpGCH,
    "EMsg",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_None,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddStringColumn(&rpGCH, "Messge Name", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rpGCH,
    "Count",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGCH, "%", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGCH, "KB", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGCH, "%", GCSDK::CGCReportPrinter::ESummaryType::eSummary_None, 1u);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGCH, "MsgPS", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rpGCH,
    "Avg/Msg",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_None,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  GCSDK::CGCReportPrinter::AddFloatColumn(&rpGCH, "KBPS", GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total, 1u);
  GCSDK::CGCReportPrinter::AddIntColumn(
    &rpGCH,
    "MaxSize",
    GCSDK::CGCReportPrinter::ESummaryType::eSummary_Max,
    GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Normal);
  if ( eGroup != GCSDK::MsgInfo_t::EStatsGroup::k_EStatsGroupProfile || this->m_bProfiling )
    GCSDK::CJobTime::CServerMicroSecsPassed(&this->m_sCollectTime[eGroup]);
  if ( this->m_vecMsgInfo.m_Size > 0 )
  {
    v15 = 0;
    v16 = 0;
    v38 = eGroup;
    do
    {
      v17 = &this->m_vecMsgInfo.m_Memory.m_pMemory[v15];
      v18 = &v17->stats[v38][2];
      if ( (nSourceMask == 0 || (nSourceMask & v18->nSourceMask) != 0)
        && v18->nCount != 0
        && v17->stats[v38][3].nCount != 0 )
      {
        GCSDK::CGCReportPrinter::IntValue(&rpGC, v17->eMsg, 0);
        GCSDK::CGCReportPrinter::StrValue(&rpGC, v17->pchMsgName, 0);
        GCSDK::CGCReportPrinter::IntValue(&rpGC, v18->nCount, 0);
        v19 = 1.0;
        if ( rgTotals[2].nCount != 0 )
          v19 = rgTotals[2].nCount;
        GCSDK::CGCReportPrinter::FloatValue(&rpGC, v19, 0);
        GCSDK::CGCReportPrinter::FloatValue(&rpGC, v20, 0);
        uBytes_low = 1.0;
        if ( rgTotals[2].uBytes != 0 )
        {
          if ( (rgTotals[2].uBytes & 0x8000000000000000LL) != 0LL )
            uBytes_low = (rgTotals[2].uBytes & 1 | (rgTotals[2].uBytes >> 1))
                       + (rgTotals[2].uBytes & 1 | (rgTotals[2].uBytes >> 1));
          else
            uBytes_low = SLODWORD(rgTotals[2].uBytes);
        }
        GCSDK::CGCReportPrinter::FloatValue(&rpGC, uBytes_low, 0);
        GCSDK::CGCReportPrinter::FloatValue(&rpGC, v22, 0);
        v23 = 1;
        if ( v18->nCount != 0 )
          v23 = v18->nCount;
        GCSDK::CGCReportPrinter::IntValue(&rpGC, v18->uBytes / v23, 0);
        GCSDK::CGCReportPrinter::FloatValue(&rpGC, v24, 0);
        GCSDK::CGCReportPrinter::IntValue(&rpGC, v18->nMax, 0);
        v25 = 1.0;
        v26 = v17->stats[v38][3].nCount;
        if ( v26 != 0 )
          v25 = v26;
        GCSDK::CGCReportPrinter::FloatValue(&rpGC, v25, 0);
        v27 = v17->stats[v38][3].uBytes;
        v28 = 1.0;
        if ( v27 != 0 )
        {
          if ( v27 < 0 )
          {
            v37 = v17->stats[v38][3].uBytes & 1 | (v17->stats[v38][3].uBytes >> 1);
            v28 = v37 + v37;
          }
          else
          {
            v28 = v27;
          }
        }
        GCSDK::CGCReportPrinter::FloatValue(&rpGC, v28, 0);
        GCSDK::CGCReportPrinter::CommitRow(&rpGC);
        GCSDK::CGCReportPrinter::IntValue(&rpGCH, v17->eMsg, 0);
        GCSDK::CGCReportPrinter::StrValue(&rpGCH, v17->pchMsgName, 0);
        GCSDK::CGCReportPrinter::IntValue(&rpGCH, v17->stats[v38][3].nCount, 0);
        v29 = 1.0;
        if ( rgTotals[3].nCount != 0 )
          v29 = rgTotals[3].nCount;
        GCSDK::CGCReportPrinter::FloatValue(&rpGCH, v29, 0);
        GCSDK::CGCReportPrinter::FloatValue(&rpGCH, v30, 0);
        v31 = 1.0;
        if ( rgTotals[3].uBytes != 0 )
        {
          if ( (rgTotals[3].uBytes & 0x8000000000000000LL) != 0LL )
            v31 = (rgTotals[3].uBytes & 1 | (rgTotals[3].uBytes >> 1))
                + (rgTotals[3].uBytes & 1 | (rgTotals[3].uBytes >> 1));
          else
            v31 = SLODWORD(rgTotals[3].uBytes);
        }
        GCSDK::CGCReportPrinter::FloatValue(&rpGCH, v31, 0);
        GCSDK::CGCReportPrinter::FloatValue(&rpGCH, v32, 0);
        v33 = 1;
        if ( v17->stats[v38][3].nCount != 0 )
          v33 = v17->stats[v38][3].nCount;
        GCSDK::CGCReportPrinter::IntValue(&rpGCH, v17->stats[v38][3].uBytes / v33, 0);
        GCSDK::CGCReportPrinter::FloatValue(&rpGCH, v34, 0);
        GCSDK::CGCReportPrinter::IntValue(&rpGCH, v17->stats[v38][3].nMax, 0);
        GCSDK::CGCReportPrinter::CommitRow(&rpGCH);
      }
      ++v16;
      ++v15;
    }
    while ( this->m_vecMsgInfo.m_Size > v16 );
  }
  v35 = "Count";
  if ( !bSortByFrequency )
    v35 = "KB";
  GCSDK::CGCReportPrinter::SortReport(&rpGC, v35, 1);
  v36 = "Count";
  if ( !bSortByFrequency )
    v36 = "KB";
  GCSDK::CGCReportPrinter::SortReport(&rpGCH, v36, 1);
  GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "GC->GCH Multiplex Message Bandwidth\n");
  GCSDK::CGCReportPrinter::PrintReport(&rpGC, &GCSDK::SPEW_CONSOLE, 0, 1);
  GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "GCH->Network Multiplex Message Output\n");
  GCSDK::CGCReportPrinter::PrintReport(&rpGCH, &GCSDK::SPEW_CONSOLE, 0, 1);
  GCSDK::CGCReportPrinter::~CGCReportPrinter(&rpGCH);
  GCSDK::CGCReportPrinter::~CGCReportPrinter(&rpGC);
}


// GCSDK::CMessageList::~CMessageList  (line 549, @0x0000000003233c90, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<GCSDK::MsgInfo_t, CUtlMemory<GCSDK::MsgInfo_t, int> >::RemoveAll, CUtlMemory<GCSDK::MsgInfo_t, int>::Purge, CUtlMemory<short int*, int>::Purge
void __fastcall GCSDK::CMessageList::~CMessageList(GCSDK::CMessageList *const this)
{
  int v1; // r13d
  __int64 i; // rbx
  bool v4; // zf

  v1 = 0;
  for ( i = 0; this->m_vecMessageInfoBuckets.m_Size > v1; ++i )
  {
    if ( this->m_vecMessageInfoBuckets.m_Memory.m_pMemory[i] != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_vecMessageInfoBuckets.m_Memory.m_pMemory[i] = 0;
    }
    ++v1;
  }
  this->m_vecMessageInfoBuckets.m_Size = 0;
  CUtlVectorBase<GCSDK::MsgInfo_t,CUtlMemory<GCSDK::MsgInfo_t,int>>::RemoveAll(&this->m_vecMsgInfo);
  if ( (this->m_vecMsgInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<GCSDK::MsgInfo_t,int>::Purge(&this->m_vecMsgInfo.m_Memory);
    if ( (this->m_vecMsgInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::MsgInfo_t,int>::Purge(&this->m_vecMsgInfo.m_Memory);
  }
  v4 = (this->m_vecMessageInfoBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecMessageInfoBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<short *,int>::Purge(&this->m_vecMessageInfoBuckets.m_Memory);
    if ( (this->m_vecMessageInfoBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short *,int>::Purge(&this->m_vecMessageInfoBuckets.m_Memory);
  }
}


// GCSDK::CMessageList::AssureBucket  (line 568, @0x0000000003233d90, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, operator[]
// calls: CUtlMemory<short int*, int>::Grow
// callers: GCSDK::CMessageList::BInit
void __fastcall GCSDK::CMessageList::AssureBucket(GCSDK::CMessageList *const this, int nBucket)
{
  __int64 v2; // r12
  int m_Size; // r13d
  int v5; // r14d
  __int64 v6; // r12
  __int16 **v7; // r13
  int m_nAllocationCount; // eax
  __int64 v9; // rax
  __int64 i; // rax

  v2 = nBucket;
  m_Size = this->m_vecMessageInfoBuckets.m_Size;
  if ( m_Size <= nBucket )
  {
    v5 = nBucket + 7;
    if ( m_Size < nBucket + 7 )
    {
      m_nAllocationCount = this->m_vecMessageInfoBuckets.m_Memory.m_nAllocationCount;
      if ( v5 > m_nAllocationCount )
        CUtlMemory<short *,int>::Grow(&this->m_vecMessageInfoBuckets.m_Memory, v5 - m_nAllocationCount);
      this->m_vecMessageInfoBuckets.m_Size = v5;
      v9 = m_Size;
      do
        this->m_vecMessageInfoBuckets.m_Memory.m_pMemory[v9++] = 0;
      while ( v9 != m_Size + (v2 + 6 - m_Size) + 1 );
    }
  }
  v6 = v2;
  v7 = &this->m_vecMessageInfoBuckets.m_Memory.m_pMemory[v6];
  if ( *v7 == 0 )
  {
    *v7 = (**g_pMemAlloc)(g_pMemAlloc, 32);
    for ( i = 0; i != 16; ++i )
      this->m_vecMessageInfoBuckets.m_Memory.m_pMemory[v6][i] = -1;
  }
}


// GCSDK::CMessageList::GetMessageIndex  (line 606, @0x0000000003233820, libserver.so)  // inlines: HashMessage, operator[]
// callers: GCSDK::CMessageList::TallySendMessage, GCSDK::CMessageList::TallyReceiveMessage, GCSDK::CMessageList::TallyMultiplexedMessage, GCSDK::CMessageList::GetMessage
__int16 __fastcall GCSDK::CMessageList::GetMessageIndex(GCSDK::CMessageList *const this, GCSDK::MsgType_t eMsg)
{
  signed int v3; // esi
  signed int v4; // edx
  __int16 result; // ax
  __int16 *v6; // rdx

  v3 = eMsg & 0xF;
  v4 = eMsg >> 4;
  result = -1;
  if ( this->m_vecMessageInfoBuckets.m_Size > v4 )
  {
    v6 = this->m_vecMessageInfoBuckets.m_Memory.m_pMemory[v4];
    if ( v6 != 0 )
      return v6[v3];
  }
  return result;
}


// GCSDK::CMessageList::GetMessage  (line 633, @0x00000000032339b0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CMessageList::GetMessageIndex, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), std::terminate(void), _Unwind_Resume
// callers: GCSDK::CJob::GetPauseReasonDescription, GCSDK::CJobMgr::GetJobInfoForMsg, GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob, GCSDK::PchMsgNameFromEMsg
// strings: "Unknown", "Unknown MsgType - Not Found", "GetMessage", "Jobs/Coroutines"
bool __fastcall GCSDK::CMessageList::GetMessage(
        GCSDK::CMessageList *const this,
        GCSDK::MsgType_t eMsg,
        const char **ppMsgName,
        int nTypeMask)
{
  int m_enabled; // eax
  bool v8; // r14
  __int16 v9; // ax
  __int64 v10; // rdi
  GCSDK::MsgInfo_t *v11; // rax
  bool v12; // r12
  unsigned __int64 v14; // r13
  ThreadId_t v15; // r14
  uint64 v16; // rcx
  unsigned __int64 v17; // rax
  uint64 m_numTimeBaseTicks; // rcx
  __int16 MessageIndex; // ax
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v22; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-48h]
  unsigned __int64 v24; // [rsp+10h] [rbp-40h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v8 = m_enabled != 0;
  if ( m_enabled == 0 )
  {
    if ( ppMsgName != 0 )
      goto LABEL_3;
LABEL_15:
    v12 = 0;
    MessageIndex = GCSDK::CMessageList::GetMessageIndex(this, eMsg);
    if ( MessageIndex == -1 )
    {
LABEL_6:
      if ( !v8 )
        return v12;
      goto LABEL_9;
    }
    v11 = &this->m_vecMsgInfo.m_Memory.m_pMemory[MessageIndex];
LABEL_5:
    v12 = (nTypeMask & v11->nFlags) != 0;
    goto LABEL_6;
  }
  v24 = __rdtsc();
  m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
  if ( m_TargetThreadId == ThreadGetCurrentId(this) )
  {
    m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
    if ( m_pCurNode->m_pszName != "GetMessage" )
    {
      m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "GetMessage", 0, "Jobs/Coroutines", 4);
      g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
    }
    v22 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
    v22->m_BudgetFlags |= 4u;
    CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
    g_VProfCurrentProfile.m_fAtRoot = 0;
  }
  v17 = __rdtsc();
  m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
  ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v24 + (v17 | (HIDWORD(v17) << 32));
  if ( ppMsgName == 0 )
    goto LABEL_15;
LABEL_3:
  *ppMsgName = "Unknown";
  v9 = GCSDK::CMessageList::GetMessageIndex(this, eMsg);
  if ( v9 != -1 )
  {
    v11 = &this->m_vecMsgInfo.m_Memory.m_pMemory[v9];
    *ppMsgName = v11->pchMsgName;
    goto LABEL_5;
  }
  *ppMsgName = "Unknown MsgType - Not Found";
  v12 = 0;
  if ( !v8 )
    return v12;
LABEL_9:
  v14 = __rdtsc();
  if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
  {
    v15 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v15 == ThreadGetCurrentId(v10) )
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
  v16 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
  ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v16 - v14 + __rdtsc();
  return v12;
}


