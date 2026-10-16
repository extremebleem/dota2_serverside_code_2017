
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_SpeechHandle::CDOTA_SpeechHandle  (line 181, @0x00000000026f30a0, libserver.so)
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_SpeechHandle::CDOTA_SpeechHandle(CDOTA_SpeechHandle *const this)
{
  this->m_pSpeech = 0;
}


// CDOTA_SpeechHandle::~CDOTA_SpeechHandle  (line 186, @0x00000000026ffa40, libserver.so)
// calls: CDOTA_Speech::~CDOTA_Speech, operator delete
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_SpeechHandle::~CDOTA_SpeechHandle(CDOTA_SpeechHandle *const this)
{
  CDOTA_Speech *m_pSpeech; // rbx

  m_pSpeech = this->m_pSpeech;
  if ( this->m_pSpeech != 0 )
  {
    CDOTA_Speech::~CDOTA_Speech(this->m_pSpeech);
    operator delete(m_pSpeech);
  }
}


// CDOTA_SpeechHandle::Init  (line 192, @0x00000000026ffb40, libserver.so)  // inlines: SetOuter
// calls: operator new, CDOTA_Speech::CDOTA_Speech, operator delete, _Unwind_Resume
// callers: CDOTA_BaseNPC::Precache, CDOTA_Unit_Announcer::Spawn
void __fastcall CDOTA_SpeechHandle::Init(CDOTA_SpeechHandle *const this, CDOTA_BaseNPC *pOuter)
{
  CDOTA_Speech *v4; // r13

  if ( this->m_pSpeech == 0 )
  {
    v4 = operator new(0x598u);
    CDOTA_Speech::CDOTA_Speech(v4);
    this->m_pSpeech = v4;
    v4->m_pOuter = pOuter;
  }
}


// CDOTA_Speech::CDOTA_Speech  (line 202, @0x00000000026ffa80, libserver.so)  // inlines: CDOTA_SpeechConcept, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTA_SpeechConceptQueued::CDOTA_SpeechConceptQueued, CUtlVectorBase<CDOTA_Response, CUtlMemory<CDOTA_Response, int> >::RemoveAll
// callers: CDOTA_SpeechHandle::Init
void __fastcall CDOTA_Speech::CDOTA_Speech(CDOTA_Speech *const this)
{
  CDOTA_SpeechConcept *m_Concepts; // r13
  CDOTA_SpeechConceptQueued *p_m_QueuedConcept; // rdi
  CDOTA_SpeechConcept *v4; // rbx
  CDOTA_Speech *v5; // r14
  CUtlVectorBase<CDOTA_Response,CUtlMemory<CDOTA_Response,int> >::CAllocator *p_m_Memory; // r12
  CUtlVectorBase<CDOTA_Response,CUtlMemory<CDOTA_Response,int> > *p_m_responses; // rdi
  CDOTA_SpeechConcept *v8; // rax
  signed __int64 v9; // rax

  m_Concepts = this->m_Concepts;
  this->_vptr_IResponseFilter = &off_42AA460;
  p_m_QueuedConcept = &this->m_QueuedConcept;
  v4 = m_Concepts;
  *&p_m_QueuedConcept[-1].m_CallbackTimer.m_bUseGlobalsTime = 0;
  v5 = this + 1;
  p_m_Memory = &this->m_Concepts[0].m_responses.m_Memory;
  *(&p_m_QueuedConcept[-1].m_CallbackTimer.m_bUseGlobalsTime + 1) = 0;
  LODWORD(p_m_QueuedConcept[-1].m_pCallbackAfterSpeech) = -1;
  CDOTA_SpeechConceptQueued::CDOTA_SpeechConceptQueued(p_m_QueuedConcept);
  BYTE4(p_m_Memory[-1].m_pMemory) = 0;
  p_m_responses = &m_Concepts->m_responses;
  *&p_m_Memory[-2].m_nAllocationCount = 0;
  LODWORD(p_m_Memory[-1].m_pMemory) = -1;
  while ( 1 )
  {
    v8 = v4;
    v4->m_responses.m_Size = 0;
    ++v4;
    v9 = v8 - m_Concepts;
    *(&p_m_Memory->m_pMemory + v9) = 0;
    *(&p_m_Memory->m_nAllocationCount + v9) = 0;
    *(&p_m_Memory->m_nGrowSize + v9) = 0;
    CUtlVectorBase<CDOTA_Response,CUtlMemory<CDOTA_Response,int>>::RemoveAll(p_m_responses);
    v4[-1].m_flConceptMuteTime = 0.0;
    if ( v4 == v5 )
      break;
    p_m_responses = &v4->m_responses;
  }
}


// CDOTA_Speech::ShouldSpeakConceptWhileDead  (line 213, @0x00000000026f30b0, libserver.so)
bool __fastcall CDOTA_Speech::ShouldSpeakConceptWhileDead(CDOTA_Speech *const this, int iConcept)
{
  bool result; // al

  result = 0;
  if ( (iConcept - 5) <= 9 )
    return ((1LL << (iConcept - 5)) & 0x301) != 0;
  return result;
}


// CDOTA_Speech::ModifyOrAppendGlobalCriteria  (line 227, @0x00000000026f30d0, libserver.so)  // inlines: CUtlSymbol, DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CResponseCriteriaSet::AppendCriteria, CDOTAGamerules::GetDOTATime, __cxa_guard_acquire, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CDOTA_Speech::SpeakConcept
// strings: "isdaytime"
// globals: `guard variable for'CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_isDayTime, `guard variable for'CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_GameTime, CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_isDayTime, CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_GameTime
void __fastcall CDOTA_Speech::ModifyOrAppendGlobalCriteria(
        CDOTA_Speech *const this,
        CResponseCriteriaSet *const criteria)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float DOTATime; // xmm0_4
  CResponseCriteriaSet::CritSymbol_t v6; // [rsp+0h] [rbp-30h] BYREF

  if ( `guard variable for'CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_isDayTime == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_isDayTime) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("isdaytime");
    __cxa_guard_release(&`guard variable for'CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_isDayTime);
  }
  if ( `guard variable for'CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_GameTime == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_GameTime) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("gametime");
    __cxa_guard_release(&`guard variable for'CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_GameTime);
  }
  if ( g_pGameRules != 0 )
  {
    v3 = 0.0;
    if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0 )
      goto LABEL_9;
    if ( BYTE1(g_pGameRules[14].m_nQuestPhase) != 0 )
      goto LABEL_9;
    v4 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
    if ( v4 < 0.0 )
      goto LABEL_9;
    if ( v4 <= 1.0 )
    {
      if ( (v4 + 0.0) < 0.25 || v4 >= 0.0 && (v4 > 1.0 || (v4 + 0.0) > 0.75) )
        goto LABEL_9;
    }
    else if ( v4 >= 0.0 )
    {
LABEL_9:
      v6.m_Id = CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_isDayTime.m_Id;
      CResponseCriteriaSet::AppendCriteria(criteria, &v6, v3, 1.0);
      DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      v6.m_Id = CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_GameTime.m_Id;
      CResponseCriteriaSet::AppendCriteria(criteria, &v6, DOTATime, 1.0);
      return;
    }
    v3 = 1.0;
    goto LABEL_9;
  }
  v6.m_Id = CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_isDayTime.m_Id;
  CResponseCriteriaSet::AppendCriteria(criteria, &v6, 1.0, 1.0);
  v6.m_Id = CDOTA_Speech::ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &)::s_GameTime.m_Id;
  CResponseCriteriaSet::AppendCriteria(criteria, &v6, 0.0, 1.0);
}


// CDOTA_Speech::SpeakConcept  (line 252, @0x0000000002713b50, libserver.so)  // inlines: AddToTail, CAI_Concept, CDOTA_Response, CEntityHandle, CHandle, Construct<CDOTA_Response>, DOTAGameRules, Element, GetBool, GetConceptDefaultMuteTime, GetFloat, GetGameTime, GetInt, GrowMemory, HasStarted, Invalidate, IsElapsed, NetworkStateChanged, Set, operator char const*, operator=<float>, operator><float>, operator[]
// calls: CountdownTimer::Now, CResponseCriteriaSet::CResponseCriteriaSet, CRR_Concept::CRR_Concept, CRR_Concept::GetStringConcept, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::ModifyOrAppendGlobalCriteria, CResponseQueryNetworking::NetworkSpeakConcept, CDOTA_Speech::NoteSpeaking, CResponseCriteriaSet::~CResponseCriteriaSet, CRR_Response::CRR_Response, CRR_Response::GetName, CDOTA_SpeechConcept::FindResponse (21 total)
// callers: CDOTABaseAbility::SpeakAbilityConcept, CDOTABaseAbility::CastAbility, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CEmotePlayConcept::Do, CDOTA_Modifier_Hexed::SpeakMorphConcept, CDOTAPlayer::SendChatWheelMessage, CDOTA_Speech::SpeakQueuedConceptAndSetupCallback, CDOTA_Speech::QueueConcept, CDOTA_Tutorial::StartNPCVO, CDOTA_TeamCommander::CLaningSpeech::SpeakMissing, CDOTA_BaseNPC_Hero::COtherHeroTalk::SpeakToOtherHero, CSpeechCallbackShopownerPurchaseLine::Go (69 total)
// globals: g_pszDOTAConcepts, g_ResponseQueryNetworking, CSWTCH.25800, CSWTCH.25803
bool __fastcall CDOTA_Speech::SpeakConcept(
        CDOTA_Speech *const this,
        int iConcept,
        CResponseCriteriaSet *criteria,
        int iRecipientType,
        CDOTA_Speech::SpeechSource_t *pSpeechSource,
        bool bSuppressAddCriteria,
        bool bMuteable,
        CUtlVector<CBasePlayer*,CUtlMemory<CBasePlayer*,int> > *pVecAdditionalRecipients)
{
  CDOTA_BaseNPC *m_pOuter; // rdi
  IResponseSystem *v10; // r12
  unsigned __int64 v11; // r15
  float v14; // xmm0_4
  char m_bNetworkToClient; // r14
  float m_Value; // xmm1_4
  float v18; // xmm0_4
  const char *StringConcept; // rax
  int v20; // r8d
  float v21; // xmm2_4
  EHANDLE *v22; // r12
  float RespeakDelay; // xmm0_4
  float v24; // xmm1_4
  __int64 v25; // rax
  soundlevel_t SoundLevel; // eax
  float v27; // xmm0_4
  __int64 v28; // rax
  CGameRules *v29; // rax
  float v30; // xmm0_4
  float m_flStopTalkTime; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  signed int m_Index; // r12d
  __int64 v36; // r12
  CDOTA_Response *v37; // r13
  CDOTA_Response *v38; // rdi
  float v39; // xmm0_4
  float flDelay; // [rsp+24h] [rbp-35Ch]
  CDOTA_SpeechConcept *v41; // [rsp+28h] [rbp-358h]
  unsigned int pFollowup; // [rsp+40h] [rbp-340h]
  ResponseFollowup *pFollowupa; // [rsp+40h] [rbp-340h]
  float *v44; // [rsp+48h] [rbp-338h]
  CDOTA_Response *pResponse; // [rsp+50h] [rbp-330h]
  CDOTA_Response *pResponsea; // [rsp+50h] [rbp-330h]
  float flMuteTimea; // [rsp+68h] [rbp-318h]
  CAI_Concept concept; // [rsp+70h] [rbp-310h] BYREF
  CResponseCriteriaSet localCriteriaSet; // [rsp+80h] [rbp-300h] BYREF
  char szName[192]; // [rsp+C0h] [rbp-2C0h] BYREF
  AI_Response outResponse; // [rsp+180h] [rbp-200h] BYREF
  unsigned __int64 v54; // [rsp+348h] [rbp-38h]

  m_pOuter = this->m_pOuter;
  v54 = __readfsqword(0x28u);
  if ( m_pOuter != 0 )
  {
    v10 = g_pResponseSystem;
    if ( g_pResponseSystem != 0 )
    {
      v11 = iConcept;
      pResponse = iConcept;
      v14 = 0.0;
      v44 = (this + 32 * iConcept);
      if ( g_pGameRules != 0 )
        v14 = *&g_pGameRules[18].m_szQuestName[20];
      if ( v44[52] <= v14 )
      {
        if ( (pFollowup = iConcept - 5, (iConcept - 5) <= 9) && ((1LL << pFollowup) & 0x301) != 0
          || (*(m_pOuter->_vptr_IHandleEntity + 408))(m_pOuter) != 0 )
        {
          m_Value = this->m_QueuedConcept.m_Timer.m_timestamp.m_Value;
          if ( m_Value <= 0.0
            || (v18 = CountdownTimer::Now(&this->m_QueuedConcept.m_Timer),
                m_Value = this->m_QueuedConcept.m_Timer.m_timestamp.m_Value,
                v18 >= m_Value)
            || this->m_QueuedConcept.m_bInvalidatedByConcepts
            || v11 <= 0x24 && (v25 = 0x170015ECF1LL, _bittest64(&v25, v11)) )
          {
            if ( m_Value != -1.0 )
            {
              (*(this->m_QueuedConcept.m_Timer._vptr_CountdownTimer + 2))(
                &this->m_QueuedConcept.m_Timer,
                12,
                0xFFFFFFFFLL,
                0xFFFFFFFFLL);
              this->m_QueuedConcept.m_Timer.m_timestamp.m_Value = -1.0;
            }
            CResponseCriteriaSet::CResponseCriteriaSet(&localCriteriaSet);
            CRR_Concept::CRR_Concept(&concept, g_pszDOTAConcepts[pResponse]);
            concept.m_hSpeaker.m_Index = -1;
            if ( criteria == 0 )
              criteria = &localCriteriaSet;
            if ( !bSuppressAddCriteria )
            {
              StringConcept = CRR_Concept::GetStringConcept(&concept);
              CResponseCriteriaSet::AppendCriteria(criteria, "concept", StringConcept, 5.0);
            }
            this->m_iActiveConcept = v11;
            CDOTA_Speech::ModifyOrAppendGlobalCriteria(this, criteria);
            (*(this->m_pOuter->_vptr_IHandleEntity + 159))(this->m_pOuter, criteria);
            m_bNetworkToClient = this->m_bNetworkToClient;
            if ( m_bNetworkToClient != 0 && sv_dota_speech_announcer_networking.m_pParent->m_Value.m_nValue != 0 )
            {
              if ( iRecipientType != 0 )
              {
                v20 = iRecipientType;
              }
              else
              {
                v20 = 1;
                if ( pFollowup <= 0x16 )
                  v20 = CSWTCH_25800[pFollowup];
              }
              CResponseQueryNetworking::NetworkSpeakConcept(
                &g_ResponseQueryNetworking,
                this->m_pOuter,
                criteria,
                v11,
                v20,
                pSpeechSource,
                pVecAdditionalRecipients);
              CDOTA_Speech::NoteSpeaking(this, 0.0, 0.0, v21);
              goto LABEL_25;
            }
            CRR_Response::CRR_Response(&outResponse);
            if ( (*(v10->_vptr_IResponseSystem + 2))(v10, criteria, &outResponse, this) != 0 )
            {
              CRR_Response::GetName(&outResponse, szName, 0xC0u);
              v22 = &this->m_hScene + 8 * pResponse;
              v41 = &this->m_Concepts[pResponse];
              pResponsea = CDOTA_SpeechConcept::FindResponse(v41, szName);
              if ( pResponsea != 0 )
              {
                RespeakDelay = CRR_Response::GetRespeakDelay(&pResponsea->m_Response);
                if ( RespeakDelay != 0.0 )
                {
                  v24 = 0.0;
                  if ( g_pGameRules != 0 )
                    v24 = *&g_pGameRules[18].m_szQuestName[20];
                  if ( (RespeakDelay + pResponsea->m_flLastSpokenTime) > v24 )
                  {
                    m_bNetworkToClient = 0;
LABEL_33:
                    CRR_Response::~CRR_Response(&outResponse);
LABEL_25:
                    CResponseCriteriaSet::~CResponseCriteriaSet(&localCriteriaSet);
                    return m_bNetworkToClient;
                  }
                }
              }
              flDelay = dota_speech_mute_time.m_pParent->m_Value.m_fValue;
              if ( iRecipientType == 0 )
              {
                iRecipientType = 1;
                if ( pFollowup <= 0x16 )
                  iRecipientType = CSWTCH_25800[pFollowup];
              }
              if ( outResponse.m_szResponseName[0] != 0 )
              {
                pFollowupa = outResponse.m_Params.m_pFollowup;
                SoundLevel = CRR_Response::GetSoundLevel(&outResponse);
                m_bNetworkToClient = CDOTA_Speech::Speak(
                                       this,
                                       szName,
                                       flDelay,
                                       v11,
                                       iRecipientType,
                                       SoundLevel,
                                       pSpeechSource,
                                       pFollowupa,
                                       criteria,
                                       bMuteable,
                                       pVecAdditionalRecipients);
                if ( m_bNetworkToClient != 0 )
                {
                  if ( pResponsea != 0 )
                  {
                    v27 = 0.0;
                    if ( g_pGameRules != 0 )
                      v27 = *&g_pGameRules[18].m_szQuestName[20];
                    pResponsea->m_flLastSpokenTime = v27;
                  }
                  else
                  {
                    m_Index = v22[2].m_Index;
                    if ( m_Index == v41->m_responses.m_Memory.m_nAllocationCount )
                      CUtlMemory<CDOTA_Response,int>::Grow(&v41->m_responses.m_Memory, 1);
                    v36 = m_Index;
                    ++v41->m_responses.m_Size;
                    v37 = &v41->m_responses.m_Memory.m_pMemory[v36];
                    if ( v37 != 0 )
                    {
                      CRR_Response::CRR_Response(&v41->m_responses.m_Memory.m_pMemory[v36].m_Response);
                      v37->m_flLastSpokenTime = 0.0;
                      v38 = &v41->m_responses.m_Memory.m_pMemory[v36];
                      if ( v38 != 0 )
                      {
                        v39 = 0.0;
                        if ( g_pGameRules != 0 )
                          v39 = *&g_pGameRules[18].m_szQuestName[20];
                        v38->m_flLastSpokenTime = v39;
                        CRR_Response::operator=(&v38->m_Response, &outResponse);
                      }
                    }
                  }
                  flMuteTimea = 0.0;
                  if ( dota_speech_hardcoded_respeak_delay.m_pParent->m_Value.m_nValue != 0 )
                  {
                    v28 = (v11 - 1);
                    if ( v28 <= 0x1D )
                      flMuteTimea = CSWTCH_25803[v28];
                  }
                  if ( CRR_Response::GetWeaponDelay(&outResponse) > 0.0 )
                    flMuteTimea = CRR_Response::GetWeaponDelay(&outResponse);
                  if ( flMuteTimea > 0.0 )
                  {
                    v29 = g_pGameRules;
                    if ( g_pGameRules != 0 )
                    {
                      v30 = *&g_pGameRules[18].m_szQuestName[20];
                      m_flStopTalkTime = this->m_flStopTalkTime;
                      v32 = flMuteTimea + v30;
                    }
                    else
                    {
                      m_flStopTalkTime = this->m_flStopTalkTime;
                      v30 = 0.0;
                      v32 = flMuteTimea + 0.0;
                    }
                    v44[52] = (m_flStopTalkTime - v30) + v32;
                    if ( (v11 - 1) <= 1 )
                    {
                      if ( v29 != 0 )
                      {
                        v33 = *&v29[18].m_szQuestName[20];
                        v34 = flMuteTimea + v33;
                      }
                      else
                      {
                        v33 = 0.0;
                        v34 = flMuteTimea + 0.0;
                      }
                      *(&this->m_Concepts[(v11 == 1) + 1].m_responses.m_Memory + 4) = (m_flStopTalkTime - v33) + v34;
                    }
                  }
                  goto LABEL_33;
                }
              }
            }
            m_bNetworkToClient = 0;
            CRR_Response::~CRR_Response(&outResponse);
            CResponseCriteriaSet::~CResponseCriteriaSet(&localCriteriaSet);
            return m_bNetworkToClient;
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Speech::CanSpeak  (line 396, @0x00000000026f3300, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: HeroRecorder, CBaseEntity::GetLifeState
// callers: CDOTAVictoryPrediction::CanUse
bool __fastcall CDOTA_Speech::CanSpeak(CDOTA_Speech *const this, int iConcept, int iRecipientType)
{
  unsigned __int64 v3; // r12
  bool result; // al
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  __int64 v9; // rdx

  v3 = iConcept;
  if ( HeroRecorder() == 0 )
  {
    v6 = 0.0;
    if ( g_pGameRules != 0 )
      v6 = *&g_pGameRules[18].m_szQuestName[20];
    if ( this->m_flLastTimeAcceptedSpeak != v6 )
    {
      result = (*(this->m_pOuter->_vptr_IHandleEntity + 459))(this->m_pOuter, v3);
      if ( result )
      {
        if ( v3 <= 0x24 )
        {
          v9 = 0x170015ECF1LL;
          if ( _bittest64(&v9, v3) )
            return result;
        }
        if ( CBaseEntity::GetLifeState(this->m_pOuter) != LifeState_t::LIFE_DEAD )
        {
          v7 = 0.0;
          if ( g_pGameRules != 0 )
            v7 = *&g_pGameRules[18].m_szQuestName[20];
          if ( this->m_flStopTalkTime <= v7
            || this->m_iActiveConcept != v3 && ((v3 - 1) > 0x14 || ((1LL << (v3 - 1)) & 0x100C03) == 0) )
          {
            v8 = 0.0;
            if ( g_pGameRules != 0 )
              v8 = *&g_pGameRules[18].m_szQuestName[20];
            return *(&this->m_Concepts[v3].m_responses.m_Memory + 4) <= v8;
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Speech::IsSpeaking  (line 441, @0x00000000026f3420, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTABaseAbility::CastAbility, CDOTA_Ability_Pudge_Rot::ShouldSpeakAbilityConcept, UseEconItem
bool __fastcall CDOTA_Speech::IsSpeaking(CDOTA_Speech *const this)
{
  float v1; // xmm1_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  return this->m_flStopTalkTime > v1;
}


// CDOTA_Speech::GetRemainingSpeechTime  (line 446, @0x00000000026f3450, libserver.so)  // inlines: DOTAGameRules, GetGameTime
float __fastcall CDOTA_Speech::GetRemainingSpeechTime(CDOTA_Speech *const this)
{
  float v1; // xmm1_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  return this->m_flStopTalkTime - v1;
}


// CDOTA_Speech::NoteSpeaking  (line 453, @0x00000000026f3480, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTA_Speech::Speak, CDOTA_Speech::SpeakConcept
void __fastcall CDOTA_Speech::NoteSpeaking(CDOTA_Speech *const this, float a2, float duration, float delay)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  CGameRules *v6; // rax
  float v7; // xmm2_4
  float v8; // xmm0_4

  v4 = a2 + duration;
  v5 = 0.0;
  v6 = g_pGameRules;
  if ( v4 <= 0.0 )
  {
    v8 = 3.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20] + 3.0;
  }
  else
  {
    if ( g_pGameRules != 0 )
      v7 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v7 = 0.0;
    v8 = v4 + v7;
  }
  this->m_flStopTalkTime = v8;
  if ( v6 != 0 )
    v5 = *&v6[18].m_szQuestName[20];
  this->m_flLastTimeAcceptedSpeak = v5;
}


// GetSpeechDuration  (line 472, @0x00000000026f34f0, libserver.so)
// callers: CDOTA_Speech::Speak
float __fastcall GetSpeechDuration(const char *pszScene)
{
  SceneCachedData_t cachedData; // [rsp+0h] [rbp-10h] BYREF

  if ( (*(*scenefilecache + 104LL))(scenefilecache, pszScene, &cachedData) != 0 )
    return cachedData.msecs * 0.001;
  else
    return 3.0;
}


// CDOTA_Speech::Speak  (line 571, @0x00000000027116d0, libserver.so)  // inlines: CDOTAUserMsg_UnitEvent_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_UnitEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>, PostEvent<CDOTAUserMsg_UnitEvent_t>, SendUserMessage<CDOTAUserMsg_UnitEvent_t>, ToDOTABaseNPC, assign, entindex, length, mutable_speech, set_concept, set_entity_index, set_has_concept, set_has_entity_index, set_has_level, set_has_msg_type, set_has_muteable, set_has_recipient_type, set_has_response, set_has_speech, set_level, set_msg_type, set_muteable, set_recipient_type, set_response, ~CDOTAPASFilter, ~CDOTAUserMsg_UnitEvent_t, ~CNetMessagePB, ~CPASFilter, ~CUserMessagePB
// calls: Warning, GetSpeechDuration, CDOTAPASFilter::CDOTAPASFilter, CDOTA_Speech::SpeechSourceToNetFilter, CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent, CEntityInstance::GetEntityIndex, strlen, std::string::assign(char const*,ulong), CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent, CRecipientFilter::~CRecipientFilter, CDOTA_Speech::NoteSpeaking, operator new (16 total)
// callers: CDOTA_Speech::SpeakConcept, CDOTA_Tutorial::StartNPCVO, CDOTA_BaseNPC::Script_PlayVCD, CDOTA_BaseNPC::Input_PlayVCD
// strings: "Problem with response rule %s: 'then' clauses are not supported on the Dota server.\n"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_Speech::Speak(
        CDOTA_Speech *const this,
        const char *pszResponse,
        float flDelay,
        int iConcept,
        int iRecipientType,
        soundlevel_t level,
        CDOTA_Speech::SpeechSource_t *pSpeechSource,
        AI_ResponseFollowup *pFollowup,
        const CResponseCriteriaSet *pQueryCriteria,
        bool bMuteable,
        CUtlVector<CBasePlayer*,CUtlMemory<CBasePlayer*,int> > *pVecAdditionalRecipients)
{
  CDOTAUserMsg_UnitEvent_Speech *v14; // r12
  std::string **v15; // r12
  size_t v16; // rax
  CDOTAUserMsg_UnitEvent_Speech *v17; // r12
  CDOTAUserMsg_UnitEvent_Speech *v18; // r12
  CDOTAUserMsg_UnitEvent_Speech *v19; // r12
  __int64 v20; // r13
  IGameEventSystem *v21; // r12
  void (__fastcall *v22)(IGameEventSystem *, _QWORD, _QWORD, CDOTAPASFilter *, __int64, _QWORD *, __int64); // r14
  float v23; // xmm2_4
  CDOTA_BaseNPC *m_pOuter; // rax
  float flDuration; // [rsp+14h] [rbp-1ECh]
  _QWORD v31[2]; // [rsp+30h] [rbp-1D0h] BYREF
  int v32; // [rsp+40h] [rbp-1C0h]
  int v33; // [rsp+48h] [rbp-1B8h]
  CEntityIndex v34; // [rsp+4Ch] [rbp-1B4h]
  CDOTAUserMsg_UnitEvent_Speech *v35; // [rsp+50h] [rbp-1B0h]
  CDOTAPASFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v37; // [rsp+1C8h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  if ( this->m_pOuter == 0 )
    return 0;
  if ( pFollowup != 0 && pFollowup->followup_concept != 0 )
    Warning("Problem with response rule %s: 'then' clauses are not supported on the Dota server.\n", pszResponse);
  flDuration = GetSpeechDuration(pszResponse);
  if ( pSpeechSource == 0 )
  {
    m_pOuter = this->m_pOuter;
    if ( m_pOuter != 0 && m_pOuter->m_bIsDOTANPC )
      pSpeechSource = this->m_pOuter;
  }
  CDOTAPASFilter::CDOTAPASFilter(&filter, pSpeechSource);
  CDOTA_Speech::SpeechSourceToNetFilter(&filter, iRecipientType, pSpeechSource, pVecAdditionalRecipients);
  if ( pVecAdditionalRecipients != 0 )
    iRecipientType = 5;
  CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent(v31);
  v33 = 0;
  v32 |= 1u;
  v31[0] = off_41863D0;
  v34.m_Data = CEntityInstance::GetEntityIndex(pSpeechSource).m_Data;
  v14 = v35;
  v32 |= 6u;
  if ( v35 == 0 )
  {
    v14 = operator new(0x30u);
    CDOTAUserMsg_UnitEvent_Speech::CDOTAUserMsg_UnitEvent_Speech(v14);
    v35 = v14;
  }
  *(v14 + 4) |= 1u;
  *(v14 + 8) = iConcept;
  v15 = v35;
  v32 |= 4u;
  if ( v35 == 0 )
  {
    v15 = operator new(0x30u);
    CDOTAUserMsg_UnitEvent_Speech::CDOTAUserMsg_UnitEvent_Speech(v15);
    v35 = v15;
  }
  *(v15 + 4) |= 2u;
  v16 = strlen(pszResponse);
  std::string::assign(v15[3], pszResponse, v16);
  v17 = v35;
  v32 |= 4u;
  if ( v35 == 0 )
  {
    v17 = operator new(0x30u);
    CDOTAUserMsg_UnitEvent_Speech::CDOTAUserMsg_UnitEvent_Speech(v17);
    v35 = v17;
  }
  *(v17 + 4) |= 4u;
  *(v17 + 9) = iRecipientType;
  v18 = v35;
  v32 |= 4u;
  if ( v35 == 0 )
  {
    v18 = operator new(0x30u);
    CDOTAUserMsg_UnitEvent_Speech::CDOTAUserMsg_UnitEvent_Speech(v18);
    v35 = v18;
  }
  *(v18 + 4) |= 8u;
  v32 |= 4u;
  *(v18 + 10) = level;
  v19 = v35;
  if ( v35 == 0 )
  {
    v19 = operator new(0x30u);
    CDOTAUserMsg_UnitEvent_Speech::CDOTAUserMsg_UnitEvent_Speech(v19);
    v35 = v19;
  }
  *(v19 + 4) |= 0x10u;
  v20 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent;
  *(v19 + 44) = bMuteable;
  v21 = g_pGameEventSystem;
  v22 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v20);
  v22(v21, 0, 0, &filter, v20, v31, 88);
  v31[0] = &off_4186250;
  CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(v31);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  CDOTA_Speech::NoteSpeaking(this, flDuration, flDelay, v23);
  return 1;
}


// CDOTA_Speech::IsValidResponse  (line 675, @0x00000000026f3b20, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_SpeechConcept::FindResponse, CRR_Response::GetSpeakOnce, CRR_Response::GetRespeakDelay
bool __fastcall CDOTA_Speech::IsValidResponse(CDOTA_Speech *const this, ResponseType_t type, const char *pszValue)
{
  CDOTA_Response *Response; // rax
  CDOTA_Response *v4; // rbx
  float RespeakDelay; // xmm0_4
  float v7; // xmm1_4

  Response = CDOTA_SpeechConcept::FindResponse(&this->m_Concepts[this->m_iActiveConcept], pszValue);
  v4 = Response;
  if ( Response == 0 || Response->m_Response.m_szResponseName[0] == 0 )
    return 1;
  if ( CRR_Response::GetSpeakOnce(&Response->m_Response) )
    return 0;
  RespeakDelay = CRR_Response::GetRespeakDelay(&v4->m_Response);
  v7 = 0.0;
  if ( RespeakDelay == 0.0 )
    return 1;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  return (RespeakDelay + v4->m_flLastSpokenTime) <= v7;
}


// CDOTA_Speech::GetUserMessageTypeForConcept  (line 759, @0x00000000026f3540, libserver.so)
// globals: CSWTCH.25800
int __fastcall CDOTA_Speech::GetUserMessageTypeForConcept(CDOTA_Speech *const this, int iConcept)
{
  __int64 v2; // rsi
  int result; // eax

  v2 = (iConcept - 5);
  result = 1;
  if ( v2 <= 0x16 )
    return CSWTCH_25800[v2];
  return result;
}


// CDOTA_Speech::IsConceptHighPriority  (line 808, @0x00000000026f3560, libserver.so)
bool __fastcall CDOTA_Speech::IsConceptHighPriority(CDOTA_Speech *const this, int iConcept)
{
  bool result; // al

  result = 0;
  if ( iConcept <= 0x24 )
    return ((1LL << iConcept) & 0x170015ECF1LL) != 0;
  return result;
}


// CDOTA_SpeechConceptQueued::CDOTA_SpeechConceptQueued  (line 899, @0x00000000026f3590, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlString, ~CUtlString
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CountdownTimer::CountdownTimer, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume, CUtlString::FreeMemoryBlock
// callers: CDOTA_Speech::CDOTA_Speech
void __fastcall CDOTA_SpeechConceptQueued::CDOTA_SpeechConceptQueued(CDOTA_SpeechConceptQueued *const this)
{
  CResponseCriteriaSet::CResponseCriteriaSet(&this->criteria);
  CountdownTimer::CountdownTimer(&this->m_Timer);
  this->m_hSpeechSource.m_Index = -1;
  this->m_szBaseName.m_pString = 0;
  this->m_szOriginalName.m_pString = 0;
  CountdownTimer::CountdownTimer(&this->m_CallbackTimer);
  this->iConcept = 0;
  this->iRecipientType = 0;
  this->m_bInvalidatedByConcepts = 0;
  this->m_bMuteable = 0;
  this->m_pCallbackAfterSpeech = 0;
}


// CDOTA_SpeechConceptQueued::AddCallback  (line 908, @0x00000000026f3630, libserver.so)  // inlines: Invalidate, NetworkStateChanged, RemoveCallback, Set, operator=<float>
// callers: CDOTA_Speech::PopulateQueuedConceptStruct
void __fastcall CDOTA_SpeechConceptQueued::AddCallback(
        CDOTA_SpeechConceptQueued *const this,
        IDOTA_SpeechQueuedCallback *pCallback)
{
  IDOTA_SpeechQueuedCallback *m_pCallbackAfterSpeech; // rdi
  IDOTA_SpeechQueuedCallback *v5; // rdi

  if ( this->m_CallbackTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_CallbackTimer._vptr_CountdownTimer + 2))(&this->m_CallbackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CallbackTimer.m_timestamp.m_Value = -1.0;
  }
  if ( pCallback != 0 )
  {
    m_pCallbackAfterSpeech = this->m_pCallbackAfterSpeech;
    if ( m_pCallbackAfterSpeech != 0 )
    {
      if ( this->m_CallbackTimer.m_timestamp.m_Value == -1.0
        || ((*(this->m_CallbackTimer._vptr_CountdownTimer + 2))(&this->m_CallbackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL),
            m_pCallbackAfterSpeech = this->m_pCallbackAfterSpeech,
            this->m_CallbackTimer.m_timestamp.m_Value = -1.0,
            m_pCallbackAfterSpeech != 0) )
      {
        (*(m_pCallbackAfterSpeech->_vptr_IDOTA_SpeechQueuedCallback + 2))(m_pCallbackAfterSpeech);
      }
    }
    this->m_pCallbackAfterSpeech = pCallback;
  }
  else
  {
    if ( this->m_CallbackTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_CallbackTimer._vptr_CountdownTimer + 2))(&this->m_CallbackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_CallbackTimer.m_timestamp.m_Value = -1.0;
    }
    v5 = this->m_pCallbackAfterSpeech;
    if ( v5 != 0 )
      (*(v5->_vptr_IDOTA_SpeechQueuedCallback + 2))(v5);
    this->m_pCallbackAfterSpeech = 0;
  }
}


// CDOTA_SpeechConceptQueued::~CDOTA_SpeechConceptQueued  (line 930, @0x00000000026f3750, libserver.so)  // inlines: Invalidate, NetworkStateChanged, RemoveCallback, Set, operator=<float>, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CResponseCriteriaSet::~CResponseCriteriaSet
// callers: CDOTA_Speech::~CDOTA_Speech
void __fastcall CDOTA_SpeechConceptQueued::~CDOTA_SpeechConceptQueued(CDOTA_SpeechConceptQueued *const this)
{
  __int64 v2; // xmm0_8
  IDOTA_SpeechQueuedCallback *m_pCallbackAfterSpeech; // rdi

  v2 = 3212836864LL;
  if ( this->m_CallbackTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_CallbackTimer._vptr_CountdownTimer + 2))(&this->m_CallbackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_CallbackTimer.m_timestamp.m_Value = -1.0;
  }
  m_pCallbackAfterSpeech = this->m_pCallbackAfterSpeech;
  if ( m_pCallbackAfterSpeech != 0 )
    (*(m_pCallbackAfterSpeech->_vptr_IDOTA_SpeechQueuedCallback + 2))(m_pCallbackAfterSpeech, *&v2);
  this->m_pCallbackAfterSpeech = 0;
  if ( this->m_szOriginalName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szOriginalName);
  if ( this->m_szBaseName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szBaseName);
  CResponseCriteriaSet::~CResponseCriteriaSet(&this->criteria);
}


// CDOTA_Speech::PopulateQueuedConceptStruct  (line 936, @0x00000000026f37f0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Invalidate, NetworkStateChanged, Set, Start, operator=, operator=<float>
// calls: CountdownTimer::Now, CDOTA_SpeechConceptQueued::AddCallback, CResponseCriteriaSet::Reset, CResponseCriteriaSet::Merge
// callers: CDOTA_Speech::QueueConcept
void __fastcall CDOTA_Speech::PopulateQueuedConceptStruct(
        CDOTA_Speech *const this,
        int iConcept,
        float flDelay,
        CResponseCriteriaSet *criteria,
        int iRecipientType,
        bool bInvalidatedByConcepts,
        IDOTA_SpeechQueuedCallback *pCallbackAfterSaid,
        CDOTA_Speech::SpeechSource_t *pSpeechSource,
        bool bMuteable)
{
  CountdownTimer *p_m_Timer; // r12
  double v13; // xmm0_8
  CEntityIdentity *m_pEntity; // rcx
  int v15; // edx
  __int16 v16; // si
  float v18; // [rsp+8h] [rbp-38h]

  p_m_Timer = &this->m_QueuedConcept.m_Timer;
  this->m_QueuedConcept.iConcept = iConcept;
  this->m_QueuedConcept.iRecipientType = iRecipientType;
  *&v13 = CountdownTimer::Now(&this->m_QueuedConcept.m_Timer) + flDelay;
  if ( *&v13 != this->m_QueuedConcept.m_Timer.m_timestamp.m_Value )
  {
    v18 = *&v13;
    (*(this->m_QueuedConcept.m_Timer._vptr_CountdownTimer + 2))(p_m_Timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v13 = LODWORD(v18);
    this->m_QueuedConcept.m_Timer.m_timestamp.m_Value = v18;
  }
  if ( flDelay == this->m_QueuedConcept.m_Timer.m_duration.m_Value )
  {
    this->m_QueuedConcept.m_bInvalidatedByConcepts = bInvalidatedByConcepts;
    if ( pSpeechSource == 0 )
    {
LABEL_14:
      this->m_QueuedConcept.m_hSpeechSource.m_Index = -1;
      goto LABEL_9;
    }
  }
  else
  {
    (*(this->m_QueuedConcept.m_Timer._vptr_CountdownTimer + 2))(p_m_Timer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v13, flDelay);
    this->m_QueuedConcept.m_bInvalidatedByConcepts = bInvalidatedByConcepts;
    this->m_QueuedConcept.m_Timer.m_duration.m_Value = flDelay;
    if ( pSpeechSource == 0 )
      goto LABEL_14;
  }
  m_pEntity = pSpeechSource->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_14;
  v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v16 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_QueuedConcept.m_hSpeechSource.m_Index) = v16 | this->m_QueuedConcept.m_hSpeechSource.m_Index & 0x8000;
  this->m_QueuedConcept.m_hSpeechSource.m_Index = (v15 << 15) | this->m_QueuedConcept.m_hSpeechSource.m_Index & 0x7FFF;
LABEL_9:
  CDOTA_SpeechConceptQueued::AddCallback(&this->m_QueuedConcept, pCallbackAfterSaid);
  this->m_QueuedConcept.m_bMuteable = bMuteable;
  CResponseCriteriaSet::Reset(&this->m_QueuedConcept.criteria);
  if ( criteria != 0 )
    CResponseCriteriaSet::Merge(&this->m_QueuedConcept.criteria, criteria);
  if ( this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_QueuedConcept.m_CallbackTimer._vptr_CountdownTimer + 2))(
      &this->m_QueuedConcept.m_CallbackTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      -1.0);
    this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value = -1.0;
  }
}


// CDOTA_Speech::SpeakQueuedConceptAndSetupCallback  (line 955, @0x0000000002714270, libserver.so)  // inlines: DOTAGameRules, ExecuteCallback, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, RemoveCallback, Set, Start, operator CDOTA_BaseNPC*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_Speech::SpeakConcept, CountdownTimer::Now
// callers: CDOTA_Speech::Think, CDOTA_Speech::QueueConcept
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Speech::SpeakQueuedConceptAndSetupCallback(CDOTA_Speech *const this)
{
  CDOTA_Speech::SpeechSource_t *m_pInstance; // r8
  uint32 m_Index; // eax
  bool bMuteable; // di
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  float v7; // xmm0_4
  float m_flStopTalkTime; // xmm1_4
  float v9; // xmm0_4
  bool v10; // zf
  IDOTA_SpeechQueuedCallback *m_pCallbackAfterSpeech; // rdi
  __int64 v12; // xmm0_8
  IDOTA_SpeechQueuedCallback *v13; // rdi
  float v14; // [rsp+18h] [rbp-18h]
  float v15; // [rsp+1Ch] [rbp-14h]

  m_pInstance = 0;
  m_Index = this->m_QueuedConcept.m_hSpeechSource.m_Index;
  bMuteable = this->m_QueuedConcept.m_bMuteable;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_QueuedConcept.m_hSpeechSource.m_Index) >> 9)
                                                        & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_QueuedConcept.m_hSpeechSource.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Speech::SpeakConcept(
         this,
         this->m_QueuedConcept.iConcept,
         &this->m_QueuedConcept.criteria,
         this->m_QueuedConcept.iRecipientType,
         m_pInstance,
         0,
         bMuteable,
         0) )
  {
    v7 = 0.0;
    m_flStopTalkTime = this->m_flStopTalkTime;
    if ( g_pGameRules != 0 )
      v7 = *&g_pGameRules[18].m_szQuestName[20];
    v15 = m_flStopTalkTime - v7;
    v9 = CountdownTimer::Now(&this->m_QueuedConcept.m_CallbackTimer) + (m_flStopTalkTime - v7);
    if ( v9 == this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value )
    {
      v10 = v15 == this->m_QueuedConcept.m_CallbackTimer.m_duration.m_Value;
    }
    else
    {
      v14 = v9;
      (*(this->m_QueuedConcept.m_CallbackTimer._vptr_CountdownTimer + 2))(
        &this->m_QueuedConcept.m_CallbackTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      v10 = v15 == this->m_QueuedConcept.m_CallbackTimer.m_duration.m_Value;
      this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value = v14;
    }
    if ( !v10 )
    {
      (*(this->m_QueuedConcept.m_CallbackTimer._vptr_CountdownTimer + 2))(
        &this->m_QueuedConcept.m_CallbackTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      this->m_QueuedConcept.m_CallbackTimer.m_duration.m_Value = v15;
    }
  }
  else
  {
    m_pCallbackAfterSpeech = this->m_QueuedConcept.m_pCallbackAfterSpeech;
    if ( m_pCallbackAfterSpeech != 0 )
    {
      m_pCallbackAfterSpeech->Go(this,
        0,
        &this->m_QueuedConcept);
      v12 = 3212836864LL;
      if ( this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_QueuedConcept.m_CallbackTimer._vptr_CountdownTimer + 2))(
          &this->m_QueuedConcept.m_CallbackTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          -1.0);
        this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value = -1.0;
      }
      v13 = this->m_QueuedConcept.m_pCallbackAfterSpeech;
      if ( v13 != 0 )
        (*(v13->_vptr_IDOTA_SpeechQueuedCallback + 2))(v13, *&v12);
      this->m_QueuedConcept.m_pCallbackAfterSpeech = 0;
    }
  }
}


// CDOTA_Speech::QueueConcept  (line 970, @0x0000000002714560, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_UnitEvent_t, CEntityHandle, CNetMessagePB, CUserMessagePB, CloseEnough, DOTAGameRules, FindGameEvent<CDOTAUserMsg_UnitEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>, Get, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, Max<float>, PostEvent<CDOTAUserMsg_UnitEvent_t>, SendUserMessage<CDOTAUserMsg_UnitEvent_t>, entindex, mutable_speech_mute, set_delay, set_entity_index, set_has_delay, set_has_entity_index, set_has_msg_type, set_has_speech_mute, set_msg_type, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_UnitEvent_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_Speech::PopulateQueuedConceptStruct, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent, CEntityInstance::GetEntityIndex, CDOTAUserMsg_UnitEvent_SpeechMute::default_instance, CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent, CRecipientFilter::~CRecipientFilter, CDOTA_Speech::SpeakQueuedConceptAndSetupCallback, CRecipientFilter::AddRecipient (18 total)
// callers: CDOTA_Item_GreaterClarity::OnSpellStart, CDOTAGamerules::QueueConceptForAnnouncer, CDOTA_Item::TryToComment, CDOTA_BaseNPC::InitialSpawn, CDOTA_BaseNPC_Hero::UpgradeAbility, CDOTA_BaseNPC_Building::AnnounceBuildingEvent, CDOTAHeroList::GameStarted, CDOTAHeroList::GameEnded, CDOTA_BaseNPC_Hero::OnHeroEnterShopSpeech, CDOTA_BaseNPC_Hero::OnHeroLeaveShopSpeech, CDOTA_BaseNPC_Hero::TestHeroDawdlingInShop, CDOTA_BaseNPC::ActivateRuneEffect (43 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent
void __fastcall CDOTA_Speech::QueueConcept(
        CDOTA_Speech *const this,
        int iConcept,
        float flDelay,
        CResponseCriteriaSet *criteria,
        int iRecipientType,
        bool bInvalidatedByConcepts,
        IDOTA_SpeechQueuedCallback *pCallbackAfterSaid,
        CDOTA_Speech::SpeechSource_t *pSpeechSource,
        bool bMuteable)
{
  CDOTA_BaseNPC *m_pOuter; // rax
  unsigned __int16 v11; // dx
  int v12; // esi
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v16; // rdi
  CEntityIndex v17; // eax
  __int64 v18; // r14
  IGameEventSystem *v19; // r12
  void (__fastcall *v20)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_UnitEvent_SpeechMute *v21; // rax
  float m_flStopTalkTime; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  unsigned __int16 v27; // dx
  int v28; // edi
  const CEntityInstance *m_pInstance; // rsi
  int v30; // eax
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTAUserMsg_UnitEvent_SpeechMute *v33; // r12
  float flDelaya; // [rsp+1Ch] [rbp-1D4h]
  _QWORD v35[2]; // [rsp+20h] [rbp-1D0h] BYREF
  int v36; // [rsp+30h] [rbp-1C0h]
  int v37; // [rsp+38h] [rbp-1B8h]
  int32 m_Data; // [rsp+3Ch] [rbp-1B4h]
  CDOTAUserMsg_UnitEvent_SpeechMute *v39; // [rsp+48h] [rbp-1A8h]
  CBroadcastRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v41; // [rsp+1B8h] [rbp-38h]

  flDelaya = flDelay;
  v41 = __readfsqword(0x28u);
  if ( flDelay <= 0.0 )
  {
    m_flStopTalkTime = this->m_flStopTalkTime;
    if ( g_pGameRules != 0 )
      v23 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v23 = 0.0;
    if ( v23 >= m_flStopTalkTime || flDelay == 0.0 )
    {
      if ( pCallbackAfterSaid != 0 )
      {
        CDOTA_Speech::PopulateQueuedConceptStruct(
          this,
          iConcept,
          flDelay,
          criteria,
          iRecipientType,
          bInvalidatedByConcepts,
          pCallbackAfterSaid,
          pSpeechSource,
          bMuteable);
        CDOTA_Speech::SpeakQueuedConceptAndSetupCallback(this);
      }
      else
      {
        CDOTA_Speech::SpeakConcept(this, iConcept, criteria, iRecipientType, pSpeechSource, 0, bMuteable, 0);
      }
      return;
    }
    v24 = 0.0;
    if ( g_pGameRules != 0 )
      v24 = *&g_pGameRules[18].m_szQuestName[20];
    v25 = m_flStopTalkTime - v24;
    if ( v25 < 0.0 )
    {
      flDelaya = 0.1;
      CDOTA_Speech::PopulateQueuedConceptStruct(
        this,
        iConcept,
        0.1,
        criteria,
        iRecipientType,
        bInvalidatedByConcepts,
        pCallbackAfterSaid,
        pSpeechSource,
        bMuteable);
    }
    else
    {
      flDelaya = v25 + 0.1;
      CDOTA_Speech::PopulateQueuedConceptStruct(
        this,
        iConcept,
        v25 + 0.1,
        criteria,
        iRecipientType,
        bInvalidatedByConcepts,
        pCallbackAfterSaid,
        pSpeechSource,
        bMuteable);
    }
  }
  else
  {
    CDOTA_Speech::PopulateQueuedConceptStruct(
      this,
      iConcept,
      flDelay,
      criteria,
      iRecipientType,
      bInvalidatedByConcepts,
      pCallbackAfterSaid,
      pSpeechSource,
      bMuteable);
  }
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  CRecipientFilter::MakeReliable(&filter);
  CRecipientFilter::RemoveAllRecipients(&filter);
  m_pOuter = this->m_pOuter;
  if ( m_pOuter->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = m_pOuter->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  v13 = (m_pOuter->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  LODWORD(v35[0]) = v13;
  if ( (v13 + 2) > 1 )
  {
    v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
    if ( v14 != 0 )
    {
      v15 = &v14[v12 & 0x1FF];
      if ( v15 != 0
        && v13 == v15->m_EHandle.m_Index
        && v15->m_pInstance != 0
        && (*(v15->m_pInstance->_vptr_IHandleEntity + 140))(v15->m_pInstance) != 0 )
      {
        v26 = this->m_pOuter;
        if ( v26->m_hOwnerEntity.m_Value.m_Index == -1 )
        {
          v27 = 0x7FFF;
          v28 = 0x7FFF;
        }
        else
        {
          v27 = v26->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
          v28 = v27;
        }
        m_pInstance = 0;
        v30 = (v26->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v27 & 0x7FFF;
        LODWORD(v35[0]) = v30;
        if ( (v30 + 2) > 1 )
        {
          v31 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v28 >> 9];
          if ( v31 != 0 )
          {
            v32 = &v31[v28 & 0x1FF];
            if ( v32 != 0 && v30 == v32->m_EHandle.m_Index )
              m_pInstance = v32->m_pInstance;
          }
        }
        CRecipientFilter::AddRecipient(&filter, m_pInstance);
      }
    }
  }
  CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent(v35);
  v16 = this->m_pOuter;
  v37 = 1;
  v36 |= 1u;
  v35[0] = off_41863D0;
  v17.m_Data = CEntityInstance::GetEntityIndex(v16).m_Data;
  v36 |= 2u;
  m_Data = v17.m_Data;
  if ( fabs(flDelaya - *(CDOTAUserMsg_UnitEvent_SpeechMute::default_instance() + 6)) > 0.001 )
  {
    v21 = v39;
    v36 |= 8u;
    if ( v39 == 0 )
    {
      v33 = operator new(0x20u);
      CDOTAUserMsg_UnitEvent_SpeechMute::CDOTAUserMsg_UnitEvent_SpeechMute(v33);
      v39 = v33;
      v21 = v33;
    }
    *(v21 + 4) |= 1u;
    *(v21 + 6) = flDelaya;
  }
  v18 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent;
  v19 = g_pGameEventSystem;
  v20 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent);
  v20(v19, 0, 0, &filter, v18, v35, 88);
  v35[0] = &off_4186250;
  CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(v35);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Speech::Think  (line 1022, @0x0000000002714480, libserver.so)  // inlines: ExecuteCallback, Invalidate, IsElapsed, NetworkStateChanged, RemoveCallback, Set, operator=<float>
// calls: CountdownTimer::Now, CDOTA_Speech::SpeakQueuedConceptAndSetupCallback
// callers: CDOTA_BaseNPC::UnitThink
void __fastcall CDOTA_Speech::Think(CDOTA_Speech *const this)
{
  IDOTA_SpeechQueuedCallback *m_pCallbackAfterSpeech; // rdi
  __int64 v3; // xmm0_8
  IDOTA_SpeechQueuedCallback *v4; // rdi

  if ( this->m_QueuedConcept.m_Timer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_QueuedConcept.m_Timer) >= this->m_QueuedConcept.m_Timer.m_timestamp.m_Value )
  {
    CDOTA_Speech::SpeakQueuedConceptAndSetupCallback(this);
  }
  if ( this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_QueuedConcept.m_CallbackTimer) >= this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value )
  {
    m_pCallbackAfterSpeech = this->m_QueuedConcept.m_pCallbackAfterSpeech;
    if ( m_pCallbackAfterSpeech != 0 )
    {
      m_pCallbackAfterSpeech->Go(this,
        1,
        &this->m_QueuedConcept);
      v3 = 3212836864LL;
      if ( this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_QueuedConcept.m_CallbackTimer._vptr_CountdownTimer + 2))(
          &this->m_QueuedConcept.m_CallbackTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          -1.0);
        this->m_QueuedConcept.m_CallbackTimer.m_timestamp.m_Value = -1.0;
      }
      v4 = this->m_QueuedConcept.m_pCallbackAfterSpeech;
      if ( v4 != 0 )
        (*(v4->_vptr_IDOTA_SpeechQueuedCallback + 2))(v4, *&v3);
      this->m_QueuedConcept.m_pCallbackAfterSpeech = 0;
    }
  }
}


// CDOTA_Speech::GetConceptDefaultMuteTime  (line 1048, @0x00000000026f39d0, libserver.so)  // inlines: GetBool, GetInt
// globals: CSWTCH.25803
float __fastcall CDOTA_Speech::GetConceptDefaultMuteTime(CDOTA_Speech *const this, int iConcept)
{
  __int64 v2; // rsi

  if ( dota_speech_hardcoded_respeak_delay.m_pParent->m_Value.m_nValue != 0 && (v2 = (iConcept - 1)) <= 0x1D )
    return CSWTCH_25803[v2];
  else
    return 0.0;
}


// CDOTA_Speech::IsConceptLowPriority  (line 1095, @0x00000000026f3a10, libserver.so)
bool __fastcall CDOTA_Speech::IsConceptLowPriority(CDOTA_Speech *const this, int iConcept)
{
  bool result; // al

  result = 0;
  if ( (iConcept - 1) <= 0x14 )
    return ((1LL << (iConcept - 1)) & 0x100C03) != 0;
  return result;
}


// CDOTA_Speech::GetSoundLevelForConcept  (line 1113, @0x00000000026f3a30, libserver.so)
float __fastcall CDOTA_Speech::GetSoundLevelForConcept(CDOTA_Speech *const this, int iConcept)
{
  float result; // xmm0_4

  result = 0.80000001;
  if ( (iConcept - 5) <= 0x12 && ((1LL << (iConcept - 5)) & 0x60B23) != 0 )
    return 1.0;
  return result;
}


// CDOTA_Speech::~CDOTA_Speech  (line 1134, @0x00000000026ff9c0, libserver.so)  // inlines: Purge, ~CDOTA_SpeechConcept, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_Response, CUtlMemory<CDOTA_Response, int> >::RemoveAll, CUtlMemory<CDOTA_Response, int>::Purge, CDOTA_SpeechConceptQueued::~CDOTA_SpeechConceptQueued
// callers: CDOTA_SpeechHandle::~CDOTA_SpeechHandle
void __fastcall CDOTA_Speech::~CDOTA_Speech(CDOTA_Speech *const this)
{
  CDOTA_SpeechConcept *m_Concepts; // r13
  CUtlVectorBase<CDOTA_Response,CUtlMemory<CDOTA_Response,int> > *v3; // rbx

  m_Concepts = this->m_Concepts;
  v3 = (this + 1);
  this->_vptr_IResponseFilter = &off_42AA460;
  do
  {
    while ( 1 )
    {
      v3 = (v3 - 32);
      CUtlVectorBase<CDOTA_Response,CUtlMemory<CDOTA_Response,int>>::RemoveAll(v3);
      if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Response,int>::Purge(&v3->m_Memory);
        if ( (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_Concepts == v3 )
        goto LABEL_6;
    }
    CUtlMemory<CDOTA_Response,int>::Purge(&v3->m_Memory);
  }
  while ( m_Concepts != v3 );
LABEL_6:
  CDOTA_SpeechConceptQueued::~CDOTA_SpeechConceptQueued(&this->m_QueuedConcept);
}


// CDOTA_SpeechConcept::FindResponse  (line 1141, @0x00000000026f3a70, libserver.so)  // inlines: FStrEq, _V_strcmp, operator[]
// calls: CRR_Response::GetName, strcmp, __stack_chk_fail
// callers: CDOTA_Speech::IsValidResponse, CDOTA_Speech::SpeakConcept
CDOTA_Response *__fastcall CDOTA_SpeechConcept::FindResponse(
        CDOTA_SpeechConcept *const this,
        const char *pszResponseName)
{
  __int64 v4; // rbx
  int v5; // r12d
  char szName[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v8; // [rsp+108h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  if ( this->m_responses.m_Size <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    CRR_Response::GetName(&this->m_responses.m_Memory.m_pMemory[v4].m_Response, szName, 0x104u);
    if ( strcmp(szName, pszResponseName) == 0 )
      break;
    ++v5;
    ++v4;
    if ( this->m_responses.m_Size <= v5 )
      return 0;
  }
  return &this->m_responses.m_Memory.m_pMemory[v4];
}


// CResponseQueryNetworking_InitializeStringTable  (line 1321, @0x00000000026f3cc0, libserver.so)
// calls: CResponseQueryNetworking::PrecacheKnownSymbols
// globals: g_ResponseQueryNetworking
void __fastcall CResponseQueryNetworking_InitializeStringTable(const char *pTableName, INetworkStringTable *pTable)
{
  CResponseQueryNetworking::PrecacheKnownSymbols(&g_ResponseQueryNetworking);
}


// CResponseQueryNetworking::CResponseQueryNetworking  (line 1328, @0x00000000026f3bc0, libserver.so)
void __fastcall CResponseQueryNetworking::CResponseQueryNetworking(CResponseQueryNetworking *const this)
{
  ;
}


// CResponseQueryNetworking::CritSymbolToNetworkIdx  (line 1336, @0x00000000026f3bd0, libserver.so)  // inlines: CUtlSymbol, SymbolToStr
// calls: CUtlSymbolTable::String
// callers: CResponseQueryNetworking::PopulateNetworkedQuery
// globals: CResponseQueryNetworking::sm_pStringTableResponseKeys
int __fastcall CResponseQueryNetworking::CritSymbolToNetworkIdx(
        CResponseQueryNetworking *const this,
        const CResponseCriteriaSet::CritSymbol_t *const sym)
{
  int (__fastcall *v2)(INetworkStringTable *, __int64, const char *, __int64, _QWORD); // rbx
  const char *v3; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-20h] BYREF

  v2 = *(CResponseQueryNetworking::sm_pStringTableResponseKeys->_vptr_INetworkStringTable + 8);
  id.m_Id = sym->m_Id;
  v3 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &id);
  return v2(CResponseQueryNetworking::sm_pStringTableResponseKeys, 1, v3, 0xFFFFFFFFLL, 0);
}


// CResponseQueryNetworking::NetworkIdxToCritSymbol  (line 1342, @0x00000000026f3c30, libserver.so)
// calls: CResponseCriteriaSet::ComputeCriteriaSymbol
// globals: CResponseQueryNetworking::sm_pStringTableResponseKeys
__int64 __fastcall CResponseQueryNetworking::NetworkIdxToCritSymbol(
        __int64 a1,
        CResponseQueryNetworking *const this,
        unsigned int netIdx)
{
  const char *v4; // rax

  v4 = (*(CResponseQueryNetworking::sm_pStringTableResponseKeys->_vptr_INetworkStringTable + 9))(
         CResponseQueryNetworking::sm_pStringTableResponseKeys,
         netIdx,
         0);
  CResponseCriteriaSet::ComputeCriteriaSymbol(v4);
  return a1;
}


// CResponseQueryNetworking::NetworkIdxToString  (line 1347, @0x00000000026f3c70, libserver.so)
// globals: CResponseQueryNetworking::sm_pStringTableResponseKeys
const char *__fastcall CResponseQueryNetworking::NetworkIdxToString(CResponseQueryNetworking *const this, int netIdx)
{
  return (*(CResponseQueryNetworking::sm_pStringTableResponseKeys->_vptr_INetworkStringTable + 9))(
           CResponseQueryNetworking::sm_pStringTableResponseKeys,
           netIdx,
           0);
}


// CResponseQueryNetworking::PrecacheKnownSymbols  (line 1355, @0x00000000026f3c90, libserver.so)  // inlines: CUtlDelegate<CResponseQueryNetworking, CResponseQueryNetworking>, Convert<CResponseQueryNetworking, bool (CResponseQueryNetworking::*)(CUtlSymbol, char const*), void (detail::GenericClass::*)()>, FastDelegate2<CResponseQueryNetworking, CResponseQueryNetworking>, bindmemfunc<CResponseQueryNetworking, bool (CResponseQueryNetworking::*)(CUtlSymbol, char const*)>
// calls: CResponseCriteriaSet::IterateOverAllSymbols
// callers: CResponseQueryNetworking_InitializeStringTable
// globals: CResponseQueryNetworking::lambdaAddKeyToNetworkStringTable(CUtlSymbol,char const*)
void __fastcall CResponseQueryNetworking::PrecacheKnownSymbols(CResponseQueryNetworking *const this)
{
  CUtlDelegate<bool(CUtlSymbol,char const*)> func; // [rsp+0h] [rbp-20h] BYREF

  func.m_Closure.m_pthis = this;
  func.m_Closure.m_pFunction.__pfn = CResponseQueryNetworking::lambdaAddKeyToNetworkStringTable;
  func.m_Closure.m_pFunction.__delta = 0;
  CResponseCriteriaSet::IterateOverAllSymbols(&func);
}


// CResponseQueryNetworking::lambdaAddKeyToNetworkStringTable  (line 1365, @0x00000000026bcf40, libserver.so)
// globals: CResponseQueryNetworking::sm_pStringTableResponseKeys
__int64 __fastcall CResponseQueryNetworking::lambdaAddKeyToNetworkStringTable(
        CResponseQueryNetworking *const this,
        CResponseCriteriaSet::CritSymbol_t sym,
        const char *pszString)
{
  (*(CResponseQueryNetworking::sm_pStringTableResponseKeys->_vptr_INetworkStringTable + 8))(
    CResponseQueryNetworking::sm_pStringTableResponseKeys,
    1,
    pszString,
    0xFFFFFFFFLL,
    0);
  return 1;
}


// CResponseQueryNetworking::PopulateNetworkedQuery  (line 1371, @0x00000000026f3ce0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAResponseQuerySerialized_Fact>::TypeHandler>, New, add_facts, assign, length, set_has_key, set_has_val_numeric, set_has_val_string, set_has_valtype, set_key, set_val_numeric, set_val_string, set_valtype
// calls: CResponseCriteriaSet::GetCount, operator new, CDOTAResponseQuerySerialized_Fact::CDOTAResponseQuerySerialized_Fact, CResponseCriteriaSet::GetNameSymbol, CResponseQueryNetworking::CritSymbolToNetworkIdx, CResponseCriteriaSet::GetValue, strtod, strlen, std::string::assign(char const*,ulong), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CResponseQueryNetworking::NetworkSpeakConcept
void __fastcall CResponseQueryNetworking::PopulateNetworkedQuery(
        CResponseQueryNetworking *const this,
        CDOTAResponseQuerySerialized *pNetQuery,
        CResponseCriteriaSet *const facts)
{
  int v3; // r12d
  std::string **v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  const char *Value; // r15
  __m128d v10; // xmm0
  int v11; // eax
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rdx
  int v15; // eax
  size_t v16; // rax
  int nFactCount; // [rsp+1Ch] [rbp-44h]
  char *endptr; // [rsp+20h] [rbp-40h] BYREF

  v3 = 0;
  nFactCount = CResponseCriteriaSet::GetCount(facts);
  if ( nFactCount > 0 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *(pNetQuery + 8);
        v13 = *(pNetQuery + 9);
        if ( v12 >= v13 )
        {
          if ( v13 == *(pNetQuery + 10) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(pNetQuery + 1, v13 + 1);
          v5 = operator new(0x30u);
          CDOTAResponseQuerySerialized_Fact::CDOTAResponseQuerySerialized_Fact(v5);
          v6 = *(pNetQuery + 8);
          v7 = *(pNetQuery + 3);
          ++*(pNetQuery + 9);
          *(pNetQuery + 8) = v6 + 1;
          *(v7 + 8 * v6) = v5;
        }
        else
        {
          v14 = *(pNetQuery + 3);
          *(pNetQuery + 8) = v12 + 1;
          v5 = *(v14 + 8 * v12);
        }
        CResponseCriteriaSet::GetNameSymbol(facts, v3);
        v8 = CResponseQueryNetworking::CritSymbolToNetworkIdx(this, &endptr);
        *(v5 + 4) |= 1u;
        *(v5 + 6) = v8;
        endptr = 0;
        Value = CResponseCriteriaSet::GetValue(facts, v3);
        v10.m128d_f64[0] = strtod(Value, &endptr);
        if ( (endptr == 0 || Value == endptr) && v10.m128d_f64[0] == 0.0 )
          break;
        v11 = *(v5 + 4);
        ++v3;
        *(v5 + 7) = 1;
        *(v5 + 10) = _mm_movedup_pd(v10).m128d_f64[0];
        *(v5 + 4) = v11 | 6;
        if ( v3 == nFactCount )
          return;
      }
      v15 = *(v5 + 4);
      *(v5 + 7) = 2;
      ++v3;
      *(v5 + 4) = v15 | 0xA;
      v16 = strlen(Value);
      std::string::assign(v5[4], Value, v16);
    }
    while ( v3 != nFactCount );
  }
}


// CDOTA_Speech::SpeechSourceToNetFilter  (line 1400, @0x00000000026f3e80, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CRecipientFilter::MakeReliable, CRecipientFilter::AddRecipient, CRecipientFilter::RemoveAllRecipients, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam, CBaseEntity::GetTeam, CRecipientFilter::AddAllPlayers
// callers: CDOTA_Speech::Speak, CResponseQueryNetworking::NetworkSpeakConcept
void __fastcall CDOTA_Speech::SpeechSourceToNetFilter(
        CRecipientFilter *pOutFilter,
        int iRecipientType,
        CDOTA_Speech::SpeechSource_t *pSpeechSource,
        CUtlVector<CBasePlayer*,CUtlMemory<CBasePlayer*,int> > *pVecAdditionalRecipients)
{
  unsigned __int16 v8; // dx
  int v9; // esi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  __int64 v13; // rbx
  CBasePlayer *v14; // rsi
  CTeam *v15; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  CTeam *v18; // rax
  unsigned __int16 v19; // cx
  int v20; // edi
  const CEntityInstance *m_pInstance; // rsi
  uint32 v22; // eax
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx

  CRecipientFilter::MakeReliable(pOutFilter);
  if ( iRecipientType == 1 || pVecAdditionalRecipients != 0 )
  {
    CRecipientFilter::RemoveAllRecipients(pOutFilter);
    goto LABEL_9;
  }
  if ( (iRecipientType - 2) <= 1 )
  {
    CRecipientFilter::RemoveAllRecipients(pOutFilter);
    Team = CBaseEntity::GetTeam(pSpeechSource);
    CRecipientFilter::AddRecipientsByTeam(pOutFilter, Team);
LABEL_26:
    GlobalTeam = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(pOutFilter, GlobalTeam);
    goto LABEL_9;
  }
  switch ( iRecipientType )
  {
    case 6:
      CRecipientFilter::RemoveAllRecipients(pOutFilter);
      v18 = GetGlobalTeam(2);
      CRecipientFilter::AddRecipientsByTeam(pOutFilter, v18);
      break;
    case 7:
      CRecipientFilter::RemoveAllRecipients(pOutFilter);
      v15 = GetGlobalTeam(3);
      CRecipientFilter::AddRecipientsByTeam(pOutFilter, v15);
      break;
    case 8:
      CRecipientFilter::RemoveAllRecipients(pOutFilter);
      goto LABEL_26;
    case 5:
      CRecipientFilter::AddAllPlayers(pOutFilter);
      break;
    default:
      break;
  }
LABEL_9:
  if ( pSpeechSource->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v8 = 0x7FFF;
    v9 = 0x7FFF;
  }
  else
  {
    v8 = pSpeechSource->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v9 = v8;
  }
  v10 = (pSpeechSource->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v8 & 0x7FFF;
  if ( v10 + 2 > 1 )
  {
    v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
    if ( v11 != 0 )
    {
      v12 = &v11[v9 & 0x1FF];
      if ( v12 != 0
        && v10 == v12->m_EHandle.m_Index
        && v12->m_pInstance != 0
        && (*(v12->m_pInstance->_vptr_IHandleEntity + 140))(v12->m_pInstance) != 0 )
      {
        if ( pSpeechSource->m_hOwnerEntity.m_Value.m_Index == -1 )
        {
          v19 = 0x7FFF;
          v20 = 0x7FFF;
        }
        else
        {
          v19 = pSpeechSource->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
          v20 = v19;
        }
        m_pInstance = 0;
        v22 = (pSpeechSource->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v19 & 0x7FFF;
        if ( v22 + 2 > 1 )
        {
          v23 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v20 >> 9];
          if ( v23 != 0 )
          {
            v24 = &v23[v20 & 0x1FF];
            if ( v24 != 0 && v22 == v24->m_EHandle.m_Index )
              m_pInstance = v24->m_pInstance;
          }
        }
        CRecipientFilter::AddRecipient(pOutFilter, m_pInstance);
      }
    }
  }
  if ( pVecAdditionalRecipients != 0 && pVecAdditionalRecipients->m_Size > 0 )
  {
    v13 = 0;
    do
    {
      v14 = pVecAdditionalRecipients->m_Memory.m_pMemory[v13];
      if ( v14 != 0 )
        CRecipientFilter::AddRecipient(pOutFilter, v14);
      ++v13;
    }
    while ( pVecAdditionalRecipients->m_Size > v13 );
  }
}


// CDOTA_SpeechCallbackForwardToPlayersAnnouncer::MakeNetworkFilter  (line 1457, @0x00000000026f4150, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, CRecipientFilter::AddRecipient
// callers: CDOTA_SpeechCallbackForwardToPlayersAnnouncer::Go
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_SpeechCallbackForwardToPlayersAnnouncer::MakeNetworkFilter(
        CDOTA_SpeechCallbackForwardToPlayersAnnouncer *const this,
        CRecipientFilter *const outFilter)
{
  uint32 m_Index; // eax
  const CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  CRecipientFilter::MakeReliable(outFilter);
  CRecipientFilter::RemoveAllRecipients(outFilter);
  m_Index = this->m_hPlayer.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hPlayer.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  CRecipientFilter::AddRecipient(outFilter, m_pInstance);
}


// CDOTA_SpeechCallbackForwardToPlayersAnnouncer::Go  (line 1465, @0x0000000002713920, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator CBasePlayer*, operator CEntityInstance*
// calls: CDOTAGamerules::GetAnnouncer, CResponseCriteriaSet::AppendCriteria, CRecipientFilter::CRecipientFilter, CDOTA_SpeechCallbackForwardToPlayersAnnouncer::MakeNetworkFilter, CResponseQueryNetworking::NetworkSpeakConcept, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// strings: "heroname"
// globals: CEntityHandle::gm_pEntityList, g_ResponseQueryNetworking
void __fastcall CDOTA_SpeechCallbackForwardToPlayersAnnouncer::Go(
        CDOTA_SpeechCallbackForwardToPlayersAnnouncer *const this,
        CDOTA_Speech *pSpeech,
        bool bQueuedConceptWasPlayed,
        CDOTA_SpeechConceptQueued *const queuedConcept)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *Announcer; // r14
  CDOTA_BaseNPC *m_pOuter; // rax
  const char *m_pAsString; // rdx
  CRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v14; // [rsp+138h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( bQueuedConceptWasPlayed )
  {
    m_Index = this->m_hPlayer.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[this->m_hPlayer.m_Index & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          Announcer = CDOTAGamerules::GetAnnouncer(g_pGameRules, HIBYTE(v9->m_pInstance[7].m_CScriptComponent));
          if ( Announcer != 0 )
          {
            if ( pSpeech != 0 )
            {
              m_pOuter = pSpeech->m_pOuter;
              m_pAsString = "";
              if ( m_pOuter->m_iszUnitName.m_Value.u.m_Id != 0 )
                m_pAsString = m_pOuter->m_iszUnitName.m_Value.u.m_pAsString;
              CResponseCriteriaSet::AppendCriteria(&queuedConcept->criteria, "heroname", m_pAsString, 1.0);
            }
            CRecipientFilter::CRecipientFilter(&filter);
            CDOTA_SpeechCallbackForwardToPlayersAnnouncer::MakeNetworkFilter(this, &filter);
            CResponseQueryNetworking::NetworkSpeakConcept(
              &g_ResponseQueryNetworking,
              Announcer,
              &queuedConcept->criteria,
              &filter,
              queuedConcept->iConcept,
              queuedConcept->iRecipientType);
            CRecipientFilter::~CRecipientFilter(&filter);
          }
        }
      }
    }
  }
}


// CResponseQueryNetworking::NetworkSpeakConcept  (line 1495, @0x0000000002713a80, libserver.so)
// calls: CRecipientFilter::CRecipientFilter, CDOTA_Speech::SpeechSourceToNetFilter, CResponseQueryNetworking::NetworkSpeakConcept, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Speech::SpeakConcept
void __fastcall CResponseQueryNetworking::NetworkSpeakConcept(
        CResponseQueryNetworking *const this,
        CBaseEntity *pEntity,
        CResponseCriteriaSet *const query,
        int iConcept,
        int iRecipientType,
        CDOTA_Speech::SpeechSource_t *pSpeechSource,
        CUtlVector<CBasePlayer*,CUtlMemory<CBasePlayer*,int> > *pVecAdditionalRecipients)
{
  CDOTA_Speech::SpeechSource_t *v11; // rdx
  CRecipientFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+148h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  v11 = pSpeechSource;
  if ( pSpeechSource == 0 )
    v11 = pEntity;
  CDOTA_Speech::SpeechSourceToNetFilter(&filter, iRecipientType, v11, 0);
  CResponseQueryNetworking::NetworkSpeakConcept(this, pEntity, query, &filter, iConcept, iRecipientType);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CResponseQueryNetworking::NetworkSpeakConcept  (line 1506, @0x0000000002711ad0, libserver.so)  // inlines: CDOTAUserMsg_UnitEvent_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_UnitEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>, PostEvent<CDOTAUserMsg_UnitEvent_t>, SendUserMessage<CDOTAUserMsg_UnitEvent_t>, entindex, mutable_responsequery, mutable_speech_match_on_client, set_concept, set_entity_index, set_has_concept, set_has_entity_index, set_has_msg_type, set_has_randomseed, set_has_recipient_type, set_has_responsequery, set_has_speech_match_on_client, set_msg_type, set_randomseed, set_recipient_type, ~CDOTAUserMsg_UnitEvent_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent, CEntityInstance::GetEntityIndex, CResponseQueryNetworking::PopulateNetworkedQuery, CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent, operator new, CDOTASpeechMatchOnClient::CDOTASpeechMatchOnClient, CDOTAResponseQuerySerialized::CDOTAResponseQuerySerialized, operator delete, _Unwind_Resume
// callers: CDOTA_SpeechCallbackForwardToPlayersAnnouncer::Go, CResponseQueryNetworking::NetworkSpeakConcept
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent
void __fastcall CResponseQueryNetworking::NetworkSpeakConcept(
        CResponseQueryNetworking *const this,
        CBaseEntity *pEntity,
        CResponseCriteriaSet *const query,
        IRecipientFilter *const filter,
        int iConcept,
        int iRecipientType)
{
  CDOTAResponseQuerySerialized **v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  CDOTAResponseQuerySerialized *v15; // rsi
  __int64 v16; // r13
  IGameEventSystem *v17; // rbx
  void (__fastcall *v18)(IGameEventSystem *, _QWORD, _QWORD, IRecipientFilter *const, __int64, _QWORD *, __int64); // r14
  CDOTAResponseQuerySerialized *v19; // r14
  _QWORD v22[2]; // [rsp+20h] [rbp-90h] BYREF
  int v23; // [rsp+30h] [rbp-80h]
  int v24; // [rsp+38h] [rbp-78h]
  CEntityIndex v25; // [rsp+3Ch] [rbp-74h]
  CDOTAResponseQuerySerialized **v26; // [rsp+70h] [rbp-40h]

  CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent(v22);
  v23 |= 1u;
  v22[0] = off_41863D0;
  v24 = 7;
  v25.m_Data = CEntityInstance::GetEntityIndex(pEntity).m_Data;
  v10 = v26;
  v23 |= 0x102u;
  if ( v26 == 0 )
  {
    v10 = operator new(0x30u);
    CDOTASpeechMatchOnClient::CDOTASpeechMatchOnClient(v10);
    v26 = v10;
  }
  v11 = *(v10 + 4);
  *(v10 + 6) = iConcept;
  *(v10 + 7) = iRecipientType;
  *(v10 + 4) = v11 | 3;
  v12 = (*(*responserulesfilecache + 112LL))(responserulesfilecache);
  v13 = (*(*v12 + 16LL))(v12, 0, 0x7FFFFFFF);
  v14 = *(v10 + 4);
  *(v10 + 10) = v13;
  v15 = v10[4];
  *(v10 + 4) = v14 | 0xC;
  if ( v15 == 0 )
  {
    v19 = operator new(0x30u);
    CDOTAResponseQuerySerialized::CDOTAResponseQuerySerialized(v19);
    v10[4] = v19;
    v15 = v19;
  }
  CResponseQueryNetworking::PopulateNetworkedQuery(this, v15, query);
  v16 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent;
  v17 = g_pGameEventSystem;
  v18 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent);
  v18(v17, 0, 0, filter, v16, v22, 88);
  v22[0] = &off_4186250;
  CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(v22);
}


