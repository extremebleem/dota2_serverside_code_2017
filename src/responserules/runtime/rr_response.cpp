
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_rr_response.cpp  (line 0, @0x0000000001a6a790, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_rr_response_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CRR_Response::CRR_Response  (line 24, @0x000000000310b0f0, libserver.so)  // inlines: CScriptAutoRef, InitEmpty, ResponseFollowup, ResponseParams, operator=
// callers: CSpeechScriptBridge::Script_FindBestResponse, CSpeechScriptBridge::Script_CommitAIResponse, CSchemaClassBinding<CRR_Response>::ConstructInPlace, CSchemaClassBinding<CRR_Response>::Allocate, CSchemaClassBinding<CRR_Response>::AllocateAndCopyConstruct, CSchemaClassBinding<ConceptHistory_t>::Allocate, CSchemaClassBinding<ConceptHistory_t>::ConstructInPlace, CSchemaClassBinding<ConceptHistory_t>::AllocateAndCopyConstruct, ConceptHistory_t::ConceptHistory_t, CResponseQueue::DispatchOneResponse_ThenANY, CBaseEntity::DispatchResponse, CAI_ExpresserWithFollowup::Speak (20 total)
void __fastcall CRR_Response::CRR_Response(CRR_Response *const this)
{
  this->m_Params.weapondelay.range.m_storage.rawWord = 0;
  this->m_Params.predelay.start.m_storage.rawWord = 0;
  this->m_hScriptResponse.m_h = 0;
  *&this->m_Params.odds = 100;
  this->m_Params.delay.start.m_storage.rawWord = 0;
  this->m_Params.delay.range.m_storage.rawWord = 0;
  this->m_Params.respeakdelay.start.m_storage.rawWord = 0;
  this->m_Params.respeakdelay.range.m_storage.rawWord = 0;
  this->m_Params.weapondelay.start.m_storage.rawWord = 0;
  this->m_Params.soundlevel = 0;
  this->m_Params.predelay.range.m_storage.rawWord = 0;
  this->m_Params.m_pFollowup = 0;
  this->m_Followup.followup_concept = 0;
  this->m_Followup.followup_contexts = 0;
  this->m_Followup.followup_delay = 0.0;
  this->m_Followup.followup_target = 0;
  this->m_Followup.followup_entityiotarget = 0;
  this->m_Followup.followup_entityioinput = 0;
  this->m_Followup.followup_entityiodelay = 0.0;
  this->m_Followup.bFired = 0;
  this->m_Type = 0;
  this->m_szResponseName[0] = 0;
  this->m_szMatchingRule[0] = 0;
  this->m_fMatchScore = 0.0;
  this->m_szSpeakerContext = 0;
  this->m_szWorldContext = 0;
}


// CRR_Response::CRR_Response  (line 29, @0x000000000310c0a0, libserver.so)  // inlines: CScriptAutoRef, InitEmpty, ResponseFollowup, ResponseParams, Term, VM, operator=, ~CScriptAutoRef
// calls: CRR_Response::CopyFrom, _Unwind_Resume
// callers: CSpeechScriptBridge::Script_FindBestResponse
void __fastcall CRR_Response::CRR_Response(CRR_Response *const this, const CRR_Response *const from)
{
  this->m_Params.flags = 0;
  this->m_Params.odds = 100;
  this->m_hScriptResponse.m_h = 0;
  this->m_Params.delay.start.m_storage.rawWord = 0;
  this->m_Params.delay.range.m_storage.rawWord = 0;
  this->m_Params.respeakdelay.start.m_storage.rawWord = 0;
  this->m_Params.respeakdelay.range.m_storage.rawWord = 0;
  this->m_Params.weapondelay.start.m_storage.rawWord = 0;
  this->m_Params.weapondelay.range.m_storage.rawWord = 0;
  this->m_Params.soundlevel = 0;
  this->m_Params.predelay.start.m_storage.rawWord = 0;
  this->m_Params.predelay.range.m_storage.rawWord = 0;
  this->m_Params.m_pFollowup = 0;
  this->m_Followup.followup_concept = 0;
  this->m_Followup.followup_contexts = 0;
  this->m_Followup.followup_delay = 0.0;
  this->m_Followup.followup_target = 0;
  this->m_Followup.followup_entityiotarget = 0;
  this->m_Followup.followup_entityioinput = 0;
  this->m_Followup.followup_entityiodelay = 0.0;
  this->m_Followup.bFired = 0;
  this->m_Type = 0;
  this->m_szResponseName[0] = 0;
  this->m_szMatchingRule[0] = 0;
  this->m_fMatchScore = 0.0;
  this->m_szSpeakerContext = 0;
  this->m_szWorldContext = 0;
  CRR_Response::CopyFrom(this, from);
}


// CRR_Response::operator=  (line 35, @0x000000000310c1f0, libserver.so)
// calls: CRR_Response::CopyFrom
// callers: CSpeechScriptBridge::UnpackScriptTableToAIResponse, CSchemaClassBinding<CRR_Response>::AllocateAndCopyConstruct, CSchemaClassBinding<CRR_Response>::Copy, CSchemaClassBinding<ConceptHistory_t>::AllocateAndCopyConstruct, CSchemaClassBinding<ConceptHistory_t>::Copy, ConceptHistory_t::ConceptHistory_t, ConceptHistory_t::operator=, CResponseQueue::DispatchOneResponse_ThenANY, CConceptHistoriesDataOps::Restore, CAI_Expresser::SetSpokeConcept, CDOTA_Speech::SpeakConcept
CRR_Response *__fastcall CRR_Response::operator=(CRR_Response *const this, const CRR_Response *const from)
{
  CRR_Response::CopyFrom(this, from);
  return this;
}


// CRR_Response::~CRR_Response  (line 44, @0x000000000310be00, libserver.so)  // inlines: Term, VM, ~CScriptAutoRef
// calls: CRR_Response::SetSpeakerContext, CRR_Response::SetWorldContext
// callers: CScriptDestructor<AI_ResponseScriptWrapper>::Destruct, AI_ResponseScriptWrapper::~AI_ResponseScriptWrapper, CSpeechScriptBridge::Script_FindBestResponse, CSpeechScriptBridge::Script_CommitAIResponse, CSchemaClassBinding<CRR_Response>::Deallocate, CSchemaClassBinding<CRR_Response>::DestructInPlace, CSchemaClassBinding<ConceptHistory_t>::Deallocate, CSchemaClassBinding<ConceptHistory_t>::DestructInPlace, ConceptHistory_t::~ConceptHistory_t, ConceptHistory_t::ConceptHistory_t, CResponseQueue::DispatchOneResponse_ThenANY, CBaseEntity::DispatchResponse (23 total)
void __fastcall CRR_Response::~CRR_Response(CRR_Response *const this)
{
  CRR_Response::SetSpeakerContext(this, 0);
  CRR_Response::SetWorldContext(this, 0);
  if ( this->m_hScriptResponse.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hScriptResponse.m_h = 0;
  }
}


// CRR_Response::InitEmpty  (line 50, @0x000000000310b200, libserver.so)  // inlines: Set, Term, VM, operator=
void __fastcall CRR_Response::InitEmpty(CRR_Response *const this)
{
  HSCRIPT m_h; // rsi

  this->m_Type = 0;
  m_h = this->m_hScriptResponse.m_h;
  this->m_szResponseName[0] = 0;
  this->m_szMatchingRule[0] = 0;
  if ( m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hScriptResponse.m_h = 0;
  }
  this->m_fMatchScore = 0.0;
  this->m_szSpeakerContext = 0;
  this->m_szWorldContext = 0;
}


// CRR_Response::CopyFrom  (line 63, @0x000000000310bf10, libserver.so)  // inlines: Get, Set, Term, VM, V_strcpy_safe<128ul>, V_strcpy_safe<192ul>, operator=
// calls: _V_strncpy, CRR_Response::SetSpeakerContext, CRR_Response::SetWorldContext
// callers: CRR_Response::CRR_Response, CRR_Response::operator=
void __fastcall CRR_Response::CopyFrom(CRR_Response *const this, const CRR_Response *const from)
{
  char *m_szResponseName; // rsi
  char *v5; // rdi
  HSCRIPT m_h; // r13

  m_szResponseName = from->m_szResponseName;
  v5 = this->m_szResponseName;
  *(v5 - 1) = *(m_szResponseName - 1);
  _V_strncpy(v5, m_szResponseName, 192);
  _V_strncpy(this->m_szMatchingRule, from->m_szMatchingRule, 128);
  m_h = from->m_hScriptResponse.m_h;
  if ( this->m_hScriptResponse.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hScriptResponse.m_h = 0;
  }
  if ( m_h != 0 )
    this->m_hScriptResponse.m_h = (*(*g_pScriptVM + 128LL))(g_pScriptVM, m_h);
  *&this->m_Params.delay.start.m_storage.rawWord = *&from->m_Params.delay.start.m_storage.rawWord;
  *&this->m_Params.weapondelay.start.m_storage.rawWord = *&from->m_Params.weapondelay.start.m_storage.rawWord;
  *&this->m_Params.odds = *&from->m_Params.odds;
  *(&this->m_Params.m_pFollowup + 3) = *(&from->m_Params.m_pFollowup + 3);
  HIBYTE(this->m_Params.m_pFollowup) = HIBYTE(from->m_Params.m_pFollowup);
  this->m_fMatchScore = from->m_fMatchScore;
  CRR_Response::SetSpeakerContext(this, from->m_szSpeakerContext);
  CRR_Response::SetWorldContext(this, from->m_szWorldContext);
  this->m_Followup.followup_concept = from->m_Followup.followup_concept;
  this->m_Followup.followup_contexts = from->m_Followup.followup_contexts;
  *&this->m_Followup.followup_delay = *&from->m_Followup.followup_delay;
  *(&this->m_Followup.followup_target + 4) = *(&from->m_Followup.followup_target + 4);
  *(&this->m_Followup.followup_entityiotarget + 4) = *(&from->m_Followup.followup_entityiotarget + 4);
  *(&this->m_Followup.followup_entityioinput + 4) = *(&from->m_Followup.followup_entityioinput + 4);
  this->m_Followup.bFired = from->m_Followup.bFired;
}


// CRR_Response::operator delete  (line 79, @0x000000000310b270, libserver.so)
// callers: CSchemaClassBinding<CRR_Response>::Allocate, CSchemaClassBinding<CRR_Response>::Deallocate, CSchemaClassBinding<CRR_Response>::AllocateAndCopyConstruct
void __fastcall CRR_Response::operator delete(void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRR_Response::Init  (line 90, @0x000000000310be50, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy, CRR_Response::SetSpeakerContext, CRR_Response::SetWorldContext
// callers: CSpeechScriptBridge::MakeOldResponse, CResponseSystem::FindBestResponse, CResponseSystem::GetAllResponses
void __fastcall CRR_Response::Init(
        CRR_Response *const this,
        ResponseType_t type,
        const char *responseName,
        const ResponseParams *const responseparams,
        const char *ruleName,
        const char *speakerContext,
        const char *worldContext)
{
  char *m_szResponseName; // rdi
  const char *v12; // rsi

  m_szResponseName = this->m_szResponseName;
  *(m_szResponseName - 1) = type;
  _V_strncpy(m_szResponseName, responseName, 192);
  v12 = "NULL";
  if ( ruleName != 0 )
    v12 = ruleName;
  _V_strncpy(this->m_szMatchingRule, v12, 128);
  *&this->m_Params.delay.start.m_storage.rawWord = *&responseparams->delay.start.m_storage.rawWord;
  *&this->m_Params.weapondelay.start.m_storage.rawWord = *&responseparams->weapondelay.start.m_storage.rawWord;
  *&this->m_Params.odds = *&responseparams->odds;
  *(&this->m_Params.m_pFollowup + 3) = *(&responseparams->m_pFollowup + 3);
  HIBYTE(this->m_Params.m_pFollowup) = HIBYTE(responseparams->m_pFollowup);
  CRR_Response::SetSpeakerContext(this, speakerContext);
  CRR_Response::SetWorldContext(this, worldContext);
}


// CRR_Response::InitFollowup  (line 102, @0x000000000310b290, libserver.so)
// calls: ResponseCopyString
// callers: CSpeechScriptBridge::AddFollowupFromScript
void __fastcall CRR_Response::InitFollowup(
        CRR_Response *const this,
        const char *target,
        const char *concept,
        float fDelay,
        const char *context)
{
  this->m_Params.m_pFollowup = &this->m_Followup;
  this->m_Followup.followup_target = ResponseCopyString(target);
  this->m_Followup.followup_concept = ResponseCopyString(concept);
  this->m_Followup.followup_contexts = ResponseCopyString(context);
  this->m_Followup.followup_delay = fDelay;
}


// CRR_Response::Describe  (line 118, @0x000000000310b3f0, libserver.so)
// calls: DevMsg(char const*,...), CResponseCriteriaSet::Describe, CRR_Response::DescribeResponse
// callers: CResponseSystem::SpewDebugInfo
// strings: "Search criteria:\n", "Speaker contexts: '%s', ", "World contexts: '%s', ", "response %s = '%s'\n", "Matched rule '%s', "
void __fastcall CRR_Response::Describe(CRR_Response *const this, const CResponseCriteriaSet *pDebugCriteria)
{
  char *m_szSpeakerContext; // rsi
  char *m_szWorldContext; // rsi
  const char *v6; // rax

  if ( pDebugCriteria != 0 )
  {
    DevMsg("Search criteria:\n");
    CResponseCriteriaSet::Describe(pDebugCriteria, 0);
  }
  if ( this->m_szMatchingRule[0] != 0 )
    DevMsg("Matched rule '%s', ", this->m_szMatchingRule);
  m_szSpeakerContext = this->m_szSpeakerContext;
  if ( m_szSpeakerContext != 0 )
    DevMsg("Speaker contexts: '%s', ", m_szSpeakerContext);
  m_szWorldContext = this->m_szWorldContext;
  if ( m_szWorldContext != 0 )
    DevMsg("World contexts: '%s', ", m_szWorldContext);
  v6 = CRR_Response::DescribeResponse(this->m_Type);
  DevMsg("response %s = '%s'\n", v6, this->m_szResponseName);
}


// CRR_Response::GetName  (line 140, @0x000000000310b300, libserver.so)  // inlines: V_strncpy<int>
// calls: _V_strncpy
// callers: CDefaultResponseSystem::FindBestResponse, CDOTA_SpeechConcept::FindResponse, CDOTA_Speech::SpeakConcept
void __fastcall CRR_Response::GetName(const CRR_Response *const this, char *buf, size_t buflen)
{
  _V_strncpy(buf, this->m_szResponseName, buflen);
}


// CRR_Response::GetResponse  (line 150, @0x000000000310b320, libserver.so)  // inlines: GetName, V_strncpy<int>
// calls: _V_strncpy
// callers: CAI_Expresser::FindResponse, CAI_Expresser::GetResponseDuration, CBaseEntity::DispatchResponse, CAI_ExpresserWithFollowup::Speak, CAI_Expresser::Speak, CAI_Expresser::SpeakDispatchResponse, CAI_ExpresserWithFollowup::SpeakDispatchResponse
void __fastcall CRR_Response::GetResponse(const CRR_Response *const this, char *buf, size_t buflen)
{
  _V_strncpy(buf, this->m_szResponseName, buflen);
}


// CRR_Response::DescribeResponse  (line 159, @0x000000000310b340, libserver.so)
// callers: CResponseSystem::DescribeResponseGroup, CRR_Response::Describe
// strings: "???CRR_Response bogus index", "RESPONSE_ENTITYIO", "RESPONSE_SPEAK", "RESPONSE_SENTENCE", "RESPONSE_SCENE", "RESPONSE_RESPONSE" (9 total)
// globals: jpt_310B360
const char *__fastcall CRR_Response::DescribeResponse(ResponseType_t type)
{
  const char *result; // rax

  result = "???CRR_Response bogus index";
  switch ( type )
  {
    case ResponseType_t::RESPONSE_NONE:
      result = "RESPONSE_NONE";
      break;
    case ResponseType_t::RESPONSE_SPEAK:
      result = "RESPONSE_SPEAK";
      break;
    case ResponseType_t::RESPONSE_SENTENCE:
      result = "RESPONSE_SENTENCE";
      break;
    case ResponseType_t::RESPONSE_SCENE:
      result = "RESPONSE_SCENE";
      break;
    case ResponseType_t::RESPONSE_RESPONSE:
      result = "RESPONSE_RESPONSE";
      break;
    case ResponseType_t::RESPONSE_PRINT:
      result = "RESPONSE_PRINT";
      break;
    case ResponseType_t::RESPONSE_ENTITYIO:
      result = "RESPONSE_ENTITYIO";
      break;
    case ResponseType_t::RESPONSE_SCRIPT:
      result = "RESPONSE_SCRIPT";
      break;
    default:
      return result;
  }
  return result;
}


// CRR_Response::GetSoundLevel  (line 197, @0x000000000310b4a0, libserver.so)
// callers: CAI_Expresser::SpeakDispatchResponse, CDOTA_Speech::SpeakConcept
soundlevel_t __fastcall CRR_Response::GetSoundLevel(const CRR_Response *const this)
{
  soundlevel_t result; // eax

  result = soundlevel_t::SNDLVL_80dB;
  if ( (this->m_Params.flags & 0x10) != 0 )
    return this->m_Params.soundlevel;
  return result;
}


// CRR_Response::GetRespeakDelay  (line 207, @0x000000000310b4d0, libserver.so)  // inlines: Convert16bitFloatTo32bits, IsInfinity, IsNaN, ToInterval, operator float
// calls: RandomInterval
// callers: CAI_Expresser::CanSpeakConcept, CDOTA_Speech::IsValidResponse, CDOTA_Speech::SpeakConcept
float __fastcall CRR_Response::GetRespeakDelay(const CRR_Response *const this)
{
  __int64 v1; // rbp
  __m128i v2; // xmm0
  float16::float16bits v3; // ax
  unsigned int v4; // edx
  float16::float16bits v5; // ax
  float v6; // xmm1_4
  int v7; // edx
  float v8; // xmm0_4
  float v9; // xmm1_4
  interval_t v11; // [rsp-8h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-8h]

  v2 = 0;
  if ( (this->m_Params.flags & 8) != 0 )
  {
    v12 = v1;
    v3.rawWord = this->m_Params.respeakdelay.start.m_storage;
    if ( (v3.rawWord & 0x7FFF) == 0x7C00 )
    {
      v2 = 0x477FE000u;
      if ( (v3.rawWord & 0x8000u) != 0 )
        v2 = 0xC77FE000;
    }
    else
    {
      if ( (HIBYTE(v3.rawWord) & 0x7C) != 0x7C )
      {
        if ( (v3.rawWord & 0x7C00) == 0 && (v3.rawWord & 0x3FF) != 0 )
        {
          v9 = 1.0;
          if ( (v3.rawWord & 0x8000u) != 0 )
            v9 = -1.0;
          *v2.m128i_i32 = (((v3.rawWord & 0x3FF) * 0.0009765625) * v9) * 0.000061035156;
          v4 = _mm_cvtsi128_si32(v2);
          goto LABEL_7;
        }
LABEL_6:
        v4 = (((((v3.rawWord >> 10) & 0x1F) + 112) * (((v3.rawWord >> 10) & 0x1F) != 0)) << 23)
           | (((v3.rawWord & 0x8000u) != 0) << 31)
           | ((v3.rawWord & 0x3FF) << 13);
LABEL_7:
        v2 = _mm_cvtsi32_si128(v4);
        goto LABEL_8;
      }
      if ( (v3.rawWord & 0x3FF) == 0 )
        goto LABEL_6;
    }
LABEL_8:
    v5.rawWord = this->m_Params.respeakdelay.range.m_storage;
    LODWORD(v11.start) = v2.m128i_i32[0];
    if ( (v5.rawWord & 0x7FFF) == 0x7C00 )
    {
      v8 = 65504.0;
      if ( (v5.rawWord & 0x8000u) != 0 )
        v8 = -65504.0;
      goto LABEL_18;
    }
    if ( (HIBYTE(v5.rawWord) & 0x7C) == 0x7C )
    {
      v8 = 0.0;
      if ( (v5.rawWord & 0x3FF) != 0 )
      {
LABEL_18:
        v11.range = v8;
        *v2.m128i_i32 = RandomInterval(&v11);
        return *v2.m128i_i32;
      }
    }
    else if ( (v5.rawWord & 0x7C00) == 0 && (v5.rawWord & 0x3FF) != 0 )
    {
      v6 = 1.0;
      if ( (v5.rawWord & 0x8000u) != 0 )
        v6 = -1.0;
      *v2.m128i_i32 = (((v5.rawWord & 0x3FF) * 0.0009765625) * v6) * 0.000061035156;
      v7 = _mm_cvtsi128_si32(v2);
      goto LABEL_17;
    }
    v7 = (((((v5.rawWord >> 10) & 0x1F) + 112) * (((v5.rawWord >> 10) & 0x1F) != 0)) << 23)
       | (((v5.rawWord & 0x8000u) != 0) << 31)
       | ((v5.rawWord & 0x3FF) << 13);
LABEL_17:
    v8 = *&v7;
    goto LABEL_18;
  }
  return *v2.m128i_i32;
}


// CRR_Response::GetWeaponDelay  (line 219, @0x000000000310b6b0, libserver.so)  // inlines: Convert16bitFloatTo32bits, IsInfinity, IsNaN, ToInterval, operator float
// calls: RandomInterval
// callers: CDOTA_Speech::SpeakConcept
float __fastcall CRR_Response::GetWeaponDelay(const CRR_Response *const this)
{
  __int64 v1; // rbp
  __m128i v2; // xmm0
  float16::float16bits v3; // ax
  unsigned int v4; // edx
  float16::float16bits v5; // ax
  float v6; // xmm1_4
  int v7; // edx
  float v8; // xmm0_4
  float v9; // xmm1_4
  interval_t v11; // [rsp-8h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-8h]

  v2 = 0;
  if ( SLOBYTE(this->m_Params.flags) < 0 )
  {
    v12 = v1;
    v3.rawWord = this->m_Params.weapondelay.start.m_storage;
    if ( (v3.rawWord & 0x7FFF) == 0x7C00 )
    {
      v2 = 0x477FE000u;
      if ( (v3.rawWord & 0x8000u) != 0 )
        v2 = 0xC77FE000;
    }
    else
    {
      if ( (HIBYTE(v3.rawWord) & 0x7C) != 0x7C )
      {
        if ( (v3.rawWord & 0x7C00) == 0 && (v3.rawWord & 0x3FF) != 0 )
        {
          v9 = 1.0;
          if ( (v3.rawWord & 0x8000u) != 0 )
            v9 = -1.0;
          *v2.m128i_i32 = (((v3.rawWord & 0x3FF) * 0.0009765625) * v9) * 0.000061035156;
          v4 = _mm_cvtsi128_si32(v2);
          goto LABEL_7;
        }
LABEL_6:
        v4 = (((((v3.rawWord >> 10) & 0x1F) + 112) * (((v3.rawWord >> 10) & 0x1F) != 0)) << 23)
           | (((v3.rawWord & 0x8000u) != 0) << 31)
           | ((v3.rawWord & 0x3FF) << 13);
LABEL_7:
        v2 = _mm_cvtsi32_si128(v4);
        goto LABEL_8;
      }
      if ( (v3.rawWord & 0x3FF) == 0 )
        goto LABEL_6;
    }
LABEL_8:
    v5.rawWord = this->m_Params.weapondelay.range.m_storage;
    LODWORD(v11.start) = v2.m128i_i32[0];
    if ( (v5.rawWord & 0x7FFF) == 0x7C00 )
    {
      v8 = 65504.0;
      if ( (v5.rawWord & 0x8000u) != 0 )
        v8 = -65504.0;
      goto LABEL_18;
    }
    if ( (HIBYTE(v5.rawWord) & 0x7C) == 0x7C )
    {
      v8 = 0.0;
      if ( (v5.rawWord & 0x3FF) != 0 )
      {
LABEL_18:
        v11.range = v8;
        *v2.m128i_i32 = RandomInterval(&v11);
        return *v2.m128i_i32;
      }
    }
    else if ( (v5.rawWord & 0x7C00) == 0 && (v5.rawWord & 0x3FF) != 0 )
    {
      v6 = 1.0;
      if ( (v5.rawWord & 0x8000u) != 0 )
        v6 = -1.0;
      *v2.m128i_i32 = (((v5.rawWord & 0x3FF) * 0.0009765625) * v6) * 0.000061035156;
      v7 = _mm_cvtsi128_si32(v2);
      goto LABEL_17;
    }
    v7 = (((((v5.rawWord >> 10) & 0x1F) + 112) * (((v5.rawWord >> 10) & 0x1F) != 0)) << 23)
       | (((v5.rawWord & 0x8000u) != 0) << 31)
       | ((v5.rawWord & 0x3FF) << 13);
LABEL_17:
    v8 = *&v7;
    goto LABEL_18;
  }
  return *v2.m128i_i32;
}


// CRR_Response::GetSpeakOnce  (line 231, @0x000000000310b890, libserver.so)
// callers: CAI_Expresser::CanSpeakConcept, CDOTA_Speech::IsValidResponse
bool __fastcall CRR_Response::GetSpeakOnce(const CRR_Response *const this)
{
  return (this->m_Params.flags & 2) != 0;
}


// CRR_Response::ShouldntUseScene  (line 241, @0x000000000310b8b0, libserver.so)
// callers: CAI_Expresser::SpeakDispatchResponse
bool __fastcall CRR_Response::ShouldntUseScene(const CRR_Response *const this)
{
  return (this->m_Params.flags & 0x20) != 0;
}


// CRR_Response::ShouldBreakOnNonIdle  (line 246, @0x000000000310b8d0, libserver.so)
// callers: InstancedScriptedScene
bool __fastcall CRR_Response::ShouldBreakOnNonIdle(const CRR_Response *const this)
{
  return (this->m_Params.flags & 0x40) != 0;
}


// CRR_Response::GetOdds  (line 251, @0x000000000310b8f0, libserver.so)
int __fastcall CRR_Response::GetOdds(const CRR_Response *const this)
{
  int result; // eax

  result = 100;
  if ( (this->m_Params.flags & 4) != 0 )
    return this->m_Params.odds;
  return result;
}


// CRR_Response::GetDelay  (line 260, @0x000000000310b920, libserver.so)  // inlines: Convert16bitFloatTo32bits, IsInfinity, IsNaN, ToInterval, operator float
// calls: RandomInterval
// callers: CAI_Expresser::SpeakDispatchResponse
float __fastcall CRR_Response::GetDelay(const CRR_Response *const this)
{
  __int64 v1; // rbp
  __m128i v2; // xmm0
  float16::float16bits v3; // ax
  unsigned int v4; // edx
  float16::float16bits v5; // ax
  float v6; // xmm1_4
  int v7; // edx
  float v8; // xmm0_4
  float v9; // xmm1_4
  interval_t v11; // [rsp-8h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-8h]

  v2 = 0;
  if ( (this->m_Params.flags & 1) != 0 )
  {
    v12 = v1;
    v3.rawWord = this->m_Params.delay.start.m_storage;
    if ( (v3.rawWord & 0x7FFF) == 0x7C00 )
    {
      v2 = 0x477FE000u;
      if ( (v3.rawWord & 0x8000u) != 0 )
        v2 = 0xC77FE000;
    }
    else
    {
      if ( (HIBYTE(v3.rawWord) & 0x7C) != 0x7C )
      {
        if ( (v3.rawWord & 0x7C00) == 0 && (v3.rawWord & 0x3FF) != 0 )
        {
          v9 = 1.0;
          if ( (v3.rawWord & 0x8000u) != 0 )
            v9 = -1.0;
          *v2.m128i_i32 = (((v3.rawWord & 0x3FF) * 0.0009765625) * v9) * 0.000061035156;
          v4 = _mm_cvtsi128_si32(v2);
          goto LABEL_7;
        }
LABEL_6:
        v4 = (((((v3.rawWord >> 10) & 0x1F) + 112) * (((v3.rawWord >> 10) & 0x1F) != 0)) << 23)
           | (((v3.rawWord & 0x8000u) != 0) << 31)
           | ((v3.rawWord & 0x3FF) << 13);
LABEL_7:
        v2 = _mm_cvtsi32_si128(v4);
        goto LABEL_8;
      }
      if ( (v3.rawWord & 0x3FF) == 0 )
        goto LABEL_6;
    }
LABEL_8:
    v5.rawWord = this->m_Params.delay.range.m_storage;
    LODWORD(v11.start) = v2.m128i_i32[0];
    if ( (v5.rawWord & 0x7FFF) == 0x7C00 )
    {
      v8 = 65504.0;
      if ( (v5.rawWord & 0x8000u) != 0 )
        v8 = -65504.0;
      goto LABEL_18;
    }
    if ( (HIBYTE(v5.rawWord) & 0x7C) == 0x7C )
    {
      v8 = 0.0;
      if ( (v5.rawWord & 0x3FF) != 0 )
      {
LABEL_18:
        v11.range = v8;
        *v2.m128i_i32 = RandomInterval(&v11);
        return *v2.m128i_i32;
      }
    }
    else if ( (v5.rawWord & 0x7C00) == 0 && (v5.rawWord & 0x3FF) != 0 )
    {
      v6 = 1.0;
      if ( (v5.rawWord & 0x8000u) != 0 )
        v6 = -1.0;
      *v2.m128i_i32 = (((v5.rawWord & 0x3FF) * 0.0009765625) * v6) * 0.000061035156;
      v7 = _mm_cvtsi128_si32(v2);
      goto LABEL_17;
    }
    v7 = (((((v5.rawWord >> 10) & 0x1F) + 112) * (((v5.rawWord >> 10) & 0x1F) != 0)) << 23)
       | (((v5.rawWord & 0x8000u) != 0) << 31)
       | ((v5.rawWord & 0x3FF) << 13);
LABEL_17:
    v8 = *&v7;
    goto LABEL_18;
  }
  return *v2.m128i_i32;
}


// CRR_Response::GetPreDelay  (line 271, @0x000000000310bb00, libserver.so)  // inlines: Convert16bitFloatTo32bits, IsInfinity, IsNaN, ToInterval, operator float
// calls: RandomInterval
// callers: InstancedScriptedScene
float __fastcall CRR_Response::GetPreDelay(const CRR_Response *const this)
{
  __int64 v1; // rbp
  __m128i v2; // xmm0
  float16::float16bits v3; // ax
  unsigned int v4; // edx
  float16::float16bits v5; // ax
  float v6; // xmm1_4
  int v7; // edx
  float v8; // xmm0_4
  float v9; // xmm1_4
  interval_t v11; // [rsp-8h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-8h]

  v2 = 0;
  if ( (this->m_Params.flags & 0x100) != 0 )
  {
    v12 = v1;
    v3.rawWord = this->m_Params.predelay.start.m_storage;
    if ( (v3.rawWord & 0x7FFF) == 0x7C00 )
    {
      v2 = 0x477FE000u;
      if ( (v3.rawWord & 0x8000u) != 0 )
        v2 = 0xC77FE000;
    }
    else
    {
      if ( (HIBYTE(v3.rawWord) & 0x7C) != 0x7C )
      {
        if ( (v3.rawWord & 0x7C00) == 0 && (v3.rawWord & 0x3FF) != 0 )
        {
          v9 = 1.0;
          if ( (v3.rawWord & 0x8000u) != 0 )
            v9 = -1.0;
          *v2.m128i_i32 = (((v3.rawWord & 0x3FF) * 0.0009765625) * v9) * 0.000061035156;
          v4 = _mm_cvtsi128_si32(v2);
          goto LABEL_7;
        }
LABEL_6:
        v4 = (((((v3.rawWord >> 10) & 0x1F) + 112) * (((v3.rawWord >> 10) & 0x1F) != 0)) << 23)
           | (((v3.rawWord & 0x8000u) != 0) << 31)
           | ((v3.rawWord & 0x3FF) << 13);
LABEL_7:
        v2 = _mm_cvtsi32_si128(v4);
        goto LABEL_8;
      }
      if ( (v3.rawWord & 0x3FF) == 0 )
        goto LABEL_6;
    }
LABEL_8:
    v5.rawWord = this->m_Params.predelay.range.m_storage;
    LODWORD(v11.start) = v2.m128i_i32[0];
    if ( (v5.rawWord & 0x7FFF) == 0x7C00 )
    {
      v8 = 65504.0;
      if ( (v5.rawWord & 0x8000u) != 0 )
        v8 = -65504.0;
      goto LABEL_18;
    }
    if ( (HIBYTE(v5.rawWord) & 0x7C) == 0x7C )
    {
      v8 = 0.0;
      if ( (v5.rawWord & 0x3FF) != 0 )
      {
LABEL_18:
        v11.range = v8;
        *v2.m128i_i32 = RandomInterval(&v11);
        return *v2.m128i_i32;
      }
    }
    else if ( (v5.rawWord & 0x7C00) == 0 && (v5.rawWord & 0x3FF) != 0 )
    {
      v6 = 1.0;
      if ( (v5.rawWord & 0x8000u) != 0 )
        v6 = -1.0;
      *v2.m128i_i32 = (((v5.rawWord & 0x3FF) * 0.0009765625) * v6) * 0.000061035156;
      v7 = _mm_cvtsi128_si32(v2);
      goto LABEL_17;
    }
    v7 = (((((v5.rawWord >> 10) & 0x1F) + 112) * (((v5.rawWord >> 10) & 0x1F) != 0)) << 23)
       | (((v5.rawWord & 0x8000u) != 0) << 31)
       | ((v5.rawWord & 0x3FF) << 13);
LABEL_17:
    v8 = *&v7;
    goto LABEL_18;
  }
  return *v2.m128i_i32;
}


// CRR_Response::SetScript  (line 282, @0x000000000310bce0, libserver.so)  // inlines: Set, Term, VM, operator=
// callers: CSpeechScriptBridge::MakeOldResponse
void __fastcall CRR_Response::SetScript(CRR_Response *const this, const HSCRIPT *const hFunc)
{
  HSCRIPT v3; // r12

  v3 = *hFunc;
  if ( this->m_hScriptResponse.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hScriptResponse.m_h = 0;
  }
  if ( v3 != 0 )
    this->m_hScriptResponse.m_h = (*(*g_pScriptVM + 128LL))(g_pScriptVM, v3);
}


// CRR_Response::SetSpeakerContext  (line 287, @0x000000000310bd40, libserver.so)  // inlines: MemAlloc_StrDupFunc, strcpy
// calls: operator delete [], strlen, strcpy
// callers: CRR_Response::~CRR_Response, CRR_Response::Init, CRR_Response::CopyFrom
void __fastcall CRR_Response::SetSpeakerContext(CRR_Response *const this, const char *context)
{
  char *m_szSpeakerContext; // rdi
  char *v5; // rax
  size_t v6; // rax
  char *v7; // rax

  m_szSpeakerContext = this->m_szSpeakerContext;
  if ( m_szSpeakerContext != 0 )
    operator delete[](m_szSpeakerContext);
  v5 = 0;
  if ( context != 0 && *context != 0 )
  {
    v6 = strlen(context);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v5 = strcpy(v7, context);
  }
  this->m_szSpeakerContext = v5;
}


// CRR_Response::SetWorldContext  (line 294, @0x000000000310bda0, libserver.so)  // inlines: MemAlloc_StrDupFunc, strcpy
// calls: operator delete [], strlen, strcpy
// callers: CRR_Response::~CRR_Response, CRR_Response::Init, CRR_Response::CopyFrom
void __fastcall CRR_Response::SetWorldContext(CRR_Response *const this, const char *context)
{
  char *m_szWorldContext; // rdi
  char *v5; // rax
  size_t v6; // rax
  char *v7; // rax

  m_szWorldContext = this->m_szWorldContext;
  if ( m_szWorldContext != 0 )
    operator delete[](m_szWorldContext);
  v5 = 0;
  if ( context != 0 && *context != 0 )
  {
    v6 = strlen(context);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v5 = strcpy(v7, context);
  }
  this->m_szWorldContext = v5;
}


