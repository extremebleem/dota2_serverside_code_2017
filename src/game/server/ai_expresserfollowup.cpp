
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetResponseName  (line 68, @0x000000000214ab60, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// callers: CSpeechScriptBridge::Script_GetExpressers
const char *__fastcall GetResponseName(CBaseEntity *pEnt)
{
  const char *result; // rax

  if ( pEnt == 0 )
    return "";
  result = "";
  if ( pEnt->m_pEntity->m_name.u.m_Id != 0 )
    return pEnt->m_pEntity->m_name.u.m_pAsString;
  return result;
}


// AscertainSpeechSubjectFromContext  (line 154, @0x0000000002140630, libserver.so)
// calls: CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::GetValue, CGameEntitySystem::FindEntityByName
// callers: ResolveFollowupTargetToEntity
CBaseEntity *__fastcall AscertainSpeechSubjectFromContext(
        const CResponseCriteriaSet *response,
        CResponseCriteriaSet *const criteria,
        const char *pContextName)
{
  int CriterionIndex; // eax
  const char *Value; // rax

  CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(response, criteria);
  Value = CResponseCriteriaSet::GetValue(response, CriterionIndex);
  if ( Value != 0 )
    return CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, Value, 0, 0, 0, 0);
  else
    return 0;
}


// ResolveFollowupTargetToEntity  (line 175, @0x0000000002140f50, libserver.so)  // inlines: CEntityHandle, CFollowupTargetSpec_t, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, GetSpeaker, Set
// calls: V_stricmp_fast, AscertainSpeechSubjectFromContext, CGameEntitySystem::FindEntityByName, Warning
// callers: CC_RR_ForceConcept_f, Script_ForceConcept, CAI_ExpresserWithFollowup::SpeakDispatchResponse
// strings: "subject", "any", "Couldn't resolve response target %s\n"
AIConcept_t *__fastcall ResolveFollowupTargetToEntity(
        AIConcept_t *const concept,
        CResponseCriteriaSet *const criteria,
        const CResponseCriteriaSet *szTarget,
        AI_Response *response)
{
  uint32 vptr_CResponseCriteriaSet_high; // eax
  int v9; // eax
  const char *v10; // rdx
  char *v11; // rsi
  CBaseEntity *v12; // rax
  uint32 v13; // edx
  CEntityIdentity *v14; // rcx
  __int16 v15; // si
  uint32 v16; // eax
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v19; // cx
  uint32 v20; // [rsp+10h] [rbp-30h]

  if ( V_stricmp_fast(response, "self") == 0 )
  {
    vptr_CResponseCriteriaSet_high = HIDWORD(criteria->_vptr_CResponseCriteriaSet);
    *&concept->m_iConcept.m_Id = 2;
    concept->m_hSpeaker.m_Index = vptr_CResponseCriteriaSet_high;
    return concept;
  }
  v9 = V_stricmp_fast(response, "subject");
  v11 = "Subject";
  if ( v9 != 0 )
  {
    if ( V_stricmp_fast(response, "from") != 0 )
    {
      if ( V_stricmp_fast(response, "any") != 0 )
      {
        if ( V_stricmp_fast(response, "all") != 0 )
        {
          EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, response, 0, 0, 0, 0);
          if ( EntityByName != 0 )
          {
            v20 = -1;
            m_pEntity = EntityByName->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v19 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v20 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v19 & 0x7FFF;
            }
            *&concept->m_iConcept.m_Id = 2;
            concept->m_hSpeaker.m_Index = v20;
          }
          else
          {
            Warning("Couldn't resolve response target %s\n", response);
            *&concept->m_iConcept.m_Id = 3;
            concept->m_hSpeaker.m_Index = -1;
          }
        }
        else
        {
          *&concept->m_iConcept.m_Id = 1;
          concept->m_hSpeaker.m_Index = -1;
        }
      }
      else
      {
        v16 = HIDWORD(criteria->_vptr_CResponseCriteriaSet);
        *&concept->m_iConcept.m_Id = 0;
        concept->m_hSpeaker.m_Index = v16;
      }
      return concept;
    }
    v11 = "From";
  }
  v12 = AscertainSpeechSubjectFromContext(szTarget, v11, v10);
  v13 = -1;
  if ( v12 != 0 )
  {
    v14 = v12->m_pEntity;
    if ( v14 != 0 )
    {
      v15 = 0x7FFF;
      if ( v14->m_EHandle.m_Index != -1 )
        v15 = v14->m_EHandle.m_Index & 0x7FFF;
      v13 = (((v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
  }
  *&concept->m_iConcept.m_Id = 2;
  concept->m_hSpeaker.m_Index = v13;
  return concept;
}


// CAI_ExpresserWithFollowup::Speak  (line 232, @0x0000000002168910, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlSymbolLarge, GetBool, GetDebugName, GetEHandle, GetEntityName, GetEntryIndex, GetInt, GetSerialNumber, Set, SetSpeaker, curtime, operator char const*, operator=
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CAI_Expresser::GatherCriteria, CRR_Response::CRR_Response, CAI_Expresser::FindResponse, CRR_Response::~CRR_Response, CResponseCriteriaSet::~CResponseCriteriaSet, CEntityIdentity::GetDebugName, Msg, CRR_Concept::GetStringConcept, CAI_Expresser::SpeechMsg, CRR_Response::GetResponse, __stack_chk_fail (13 total)
// strings: "TLK_IDLE: %s SUCCESSFUL FindResponse\n", "%s (%x) spoke %s (%f)", "TLK_IDLE: %s did not FindResponse\n"
bool __fastcall CAI_ExpresserWithFollowup::Speak(
        CAI_ExpresserWithFollowup *const this,
        AIConcept_t *const concept,
        const char *modifiers,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  CBaseFlex *m_pOuter; // rdx
  uint32 v10; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // cx
  char Response; // r15
  double v14; // xmm0_8
  const char *DebugName; // rax
  CGlobalVars *v17; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // r15
  const char *StringConcept; // rax
  CBaseFlex *v21; // rsi
  const char *m_pAsString; // rcx
  const char *v23; // rax
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-240h] BYREF
  AI_Response v28; // [rsp+60h] [rbp-200h] BYREF
  unsigned __int64 v29; // [rsp+228h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  m_pOuter = this->m_pOuter;
  v10 = -1;
  LODWORD(criteria._vptr_CResponseCriteriaSet) = -1;
  if ( m_pOuter != 0 )
  {
    m_pEntity = m_pOuter->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v10 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
      LODWORD(criteria._vptr_CResponseCriteriaSet) = v10;
    }
  }
  concept->m_hSpeaker.m_Index = v10;
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CAI_Expresser::GatherCriteria(this, &criteria, concept, modifiers);
  (*(this->m_pOuter->_vptr_IHandleEntity + 160))(this->m_pOuter, &criteria);
  CRR_Response::CRR_Response(&v28);
  Response = CAI_Expresser::FindResponse(this, &v28, concept, &criteria);
  if ( Response != 0 )
  {
    if ( chet_debug_idle.m_pParent->m_Value.m_nValue != 0 )
    {
      DebugName = CEntityIdentity::GetDebugName(this->m_pOuter->m_pEntity);
      *&v14 = Msg("TLK_IDLE: %s SUCCESSFUL FindResponse\n", DebugName).m128_u64[0];
    }
    v17 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v14);
      }
      m_flCurrentTime = v17->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    StringConcept = CRR_Concept::GetStringConcept(concept);
    v21 = this->m_pOuter;
    m_pAsString = "";
    if ( v21->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = v21->m_pEntity->m_name.u.m_pAsString;
    CAI_Expresser::SpeechMsg(this, v21, "%s (%x) spoke %s (%f)", m_pAsString, v21, StringConcept, m_flCurrentTime);
    Response = (*(this->_vptr_IResponseFilter + 2))(this, concept, &v28, &criteria, filter);
    if ( pszOutResponseChosen != 0 )
      CRR_Response::GetResponse(&v28, pszOutResponseChosen, bufsize);
  }
  else if ( chet_debug_idle.m_pParent->m_Value.m_nValue != 0 )
  {
    v23 = CEntityIdentity::GetDebugName(this->m_pOuter->m_pEntity);
    Msg("TLK_IDLE: %s did not FindResponse\n", v23);
  }
  CRR_Response::~CRR_Response(&v28);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  return Response;
}


// CAI_ExpresserWithFollowup::SpeakDispatchResponse  (line 329, @0x0000000002178a50, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CFollowupTargetSpec_t, CHandle, CVariantBase, Free, GetEHandle, GetEntryIndex, GetSerialNumber, GetSpeechDurationForResponse, GetType, IsValid, ResolveFollowupTargetToEntity, Set, SetSpeaker, operator=, ~CVariantBase
// calls: CAI_Expresser::SpeakDispatchResponse, CGameEntitySystem::FindEntityByName, CServerEventQueue::AddEvent, ResolveFollowupTargetToEntity, CRR_Concept::CRR_Concept, CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::~CResponseCriteriaSet, Warning, CRR_Response::GetResponse, __stack_chk_fail, CVariantBase<CVariantDefaultAllocator>::Free (13 total)
// strings: "Response %s has a followup with unsupported response type %d"
bool __fastcall CAI_ExpresserWithFollowup::SpeakDispatchResponse(
        CAI_ExpresserWithFollowup *const this,
        AIConcept_t *const concept,
        AI_Response *response,
        CResponseCriteriaSet *criteria,
        IRecipientFilter *filter)
{
  ResponseFollowup *m_pFollowup; // rbx
  const char *followup_entityiotarget; // rdx
  CBaseEntity *EntityByName; // rax
  float followup_entityiodelay; // xmm0_4
  CBaseFlex *v13; // r8
  char *followup_contexts; // rax
  float v15; // xmm0_4
  int m_Type; // edx
  AI_Response *v17; // rcx
  CBaseFlex *v18; // r15
  CBaseFlex *m_pOuter; // rdx
  uint32 v21; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v23; // cx
  AI_Response *followup_target; // rcx
  CBaseFlex *v25; // r15
  const char *v26; // r12
  char v27; // al
  CBaseEntity *pFilter; // [rsp+0h] [rbp-1C0h]
  int v29; // [rsp+8h] [rbp-1B8h]
  char *criteriaStr; // [rsp+10h] [rbp-1B0h]
  float followupTime; // [rsp+1Ch] [rbp-1A4h]
  float followupTimea; // [rsp+1Ch] [rbp-1A4h]
  AIConcept_t v33; // [rsp+20h] [rbp-1A0h] BYREF
  AIConcept_t v34; // [rsp+30h] [rbp-190h] BYREF
  CResponseCriteriaSet emptyCriteria; // [rsp+40h] [rbp-180h] BYREF
  char buf[264]; // [rsp+80h] [rbp-140h] BYREF
  unsigned __int64 v37; // [rsp+188h] [rbp-38h]
  variant_t v38; // 0:kr00_16.16

  v37 = __readfsqword(0x28u);
  if ( concept->m_hSpeaker.m_Index == -1 )
  {
    m_pOuter = this->m_pOuter;
    v21 = -1;
    LODWORD(emptyCriteria._vptr_CResponseCriteriaSet) = -1;
    if ( m_pOuter != 0 )
    {
      m_pEntity = m_pOuter->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v23 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v21 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v23 & 0x7FFF;
        LODWORD(emptyCriteria._vptr_CResponseCriteriaSet) = v21;
      }
    }
    concept->m_hSpeaker.m_Index = v21;
  }
  if ( !CAI_Expresser::SpeakDispatchResponse(this, concept, response, criteria, filter) )
    return 0;
  m_pFollowup = response->m_Params.m_pFollowup;
  if ( m_pFollowup == 0 )
    return 1;
  followup_entityiotarget = m_pFollowup->followup_entityiotarget;
  if ( followup_entityiotarget != 0 && m_pFollowup->followup_entityioinput != 0 && criteria != 0 )
  {
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     followup_entityiotarget,
                     this->m_pOuter,
                     0,
                     0,
                     0);
    if ( EntityByName != 0 )
    {
      followup_entityiodelay = m_pFollowup->followup_entityiodelay;
      v13 = this->m_pOuter;
      LODWORD(emptyCriteria.m_Lookup.m_LessFunc) = 0;
      emptyCriteria._vptr_CResponseCriteriaSet = 0;
      LODWORD(pFilter) = 0;
      v38.m_uint64 = &emptyCriteria;
      *&v38.m_type = v13;
      CServerEventQueue::AddEvent(
        &g_EventQueue,
        EntityByName,
        m_pFollowup->followup_entityioinput,
        v38,
        followup_entityiodelay,
        v13,
        pFilter,
        v29);
      if ( (BYTE2(emptyCriteria.m_Lookup.m_LessFunc) & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyCriteria._vptr_CResponseCriteriaSet);
    }
  }
  if ( m_pFollowup->followup_concept == 0 )
    return 1;
  followup_contexts = m_pFollowup->followup_contexts;
  if ( followup_contexts == 0 )
    return 1;
  v15 = 0.0;
  followupTime = m_pFollowup->followup_delay;
  if ( followupTime < 0.0 )
  {
    followupTimea = -followupTime;
LABEL_28:
    CResponseCriteriaSet::CResponseCriteriaSet(&emptyCriteria);
    followup_target = m_pFollowup->followup_target;
    if ( criteria == 0 )
      criteria = &emptyCriteria;
    v25 = this->m_pOuter;
    if ( followup_target != 0 )
    {
      ResolveFollowupTargetToEntity(&v33, concept, criteria, followup_target);
    }
    else
    {
      *&v33.m_iConcept.m_Id = 3;
      v33.m_hSpeaker.m_Index = -1;
    }
    v26 = m_pFollowup->followup_contexts;
    CRR_Concept::CRR_Concept(&v34, m_pFollowup->followup_concept);
    v34.m_hSpeaker.m_Index = -1;
    CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue(&v34, v26, &v33, followupTimea, v25);
    CResponseCriteriaSet::~CResponseCriteriaSet(&emptyCriteria);
    return 1;
  }
  m_Type = response->m_Type;
  switch ( m_Type )
  {
    case 3:
      CRR_Response::GetResponse(response, buf, 0x100u);
      v27 = (*(*scenefilecache + 104LL))(scenefilecache, buf, &emptyCriteria);
      v15 = -1.0;
      if ( v27 != 0 )
        v15 = *(&emptyCriteria._vptr_CResponseCriteriaSet + 1);
      break;
    case 7:
      break;
    case 5:
      v17 = m_pFollowup->followup_target;
      v18 = this->m_pOuter;
      if ( v17 != 0 )
      {
        ResolveFollowupTargetToEntity(&v34, concept, criteria, v17);
        followup_contexts = m_pFollowup->followup_contexts;
      }
      else
      {
        *&v34.m_iConcept.m_Id = 3;
        v34.m_hSpeaker.m_Index = -1;
      }
      criteriaStr = followup_contexts;
      CRR_Concept::CRR_Concept(&emptyCriteria, m_pFollowup->followup_concept);
      HIDWORD(emptyCriteria._vptr_CResponseCriteriaSet) = -1;
      CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue(&emptyCriteria, criteriaStr, &v34, followupTime, v18);
      return 1;
    default:
      Warning("Response %s has a followup with unsupported response type %d", response->m_szResponseName, m_Type);
      return 0;
  }
  followupTimea = v15 + followupTime;
  goto LABEL_28;
}


// CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue  (line 432, @0x00000000021756b0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, curtime
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CResponseCriteriaSet::Merge, CResponseQueue::Add, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CAI_ExpresserWithFollowup::SpeakDispatchFollowup, CAI_ExpresserWithFollowup::SpeakDispatchResponse
void __fastcall CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue(
        const AIConcept_t *const concept,
        const char *criteriaStr,
        const CResponseQueue::CFollowupTargetSpec_t *const target,
        float delay,
        CBaseEntity *pOuter)
{
  const char *m_pAsString; // rdx
  CGlobalVars *v10; // r12
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-70h] BYREF

  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  m_pAsString = "";
  if ( pOuter->m_pEntity->m_name.u.m_Id != 0 )
    m_pAsString = pOuter->m_pEntity->m_name.u.m_pAsString;
  CResponseCriteriaSet::AppendCriteria(&criteria, "From", m_pAsString, 1.0);
  CResponseCriteriaSet::Merge(&criteria, criteriaStr);
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
  CResponseQueue::Add(g_ResponseQueueManager.m_pQueue, concept, &criteria, m_flCurrentTime + delay, target, pOuter);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CAI_ExpresserWithFollowup::SpeakDispatchFollowup  (line 463, @0x00000000021757b0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CUtlSymbolLarge, CVariantBase, DispatchComeback, Free, Get, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, GetResponseName, IndexToIdentity, IsValid, LookupEntity, SetString, String, ToCStr, operator CEntityInstance*, operator=, ~CVariantBase
// calls: CRR_Concept::CRR_Concept, CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::Merge, __dynamic_cast, CResponseCriteriaSet::~CResponseCriteriaSet, MakeEntitySystemString, CVariantBase<CVariantDefaultAllocator>::CopyData, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CServerEventQueue::AddEvent (15 total)
// strings: "Response rule with a 'self' target specified negative delay, which isn't legal because th
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CBaseMultiplayerPlayer, `typeinfo for'CBaseEntity
void __fastcall CAI_ExpresserWithFollowup::SpeakDispatchFollowup(
        CAI_ExpresserWithFollowup *const this,
        AI_ResponseFollowup *const followup)
{
  float followup_delay; // xmm0_4
  CBaseFlex *m_pOuter; // r15
  const char *followup_contexts; // r14
  uint32 m_Index; // eax
  float v8; // xmm1_4
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CBaseFlex *v11; // r14
  const char *v12; // rsi
  const char *m_pAsString; // r15
  void *v14; // rax
  void *v15; // r14
  void (__fastcall *v16)(void *, CVariantBase<CVariantDefaultAllocator> *, CResponseCriteriaSet *, _QWORD, _QWORD, _QWORD); // r15
  const char *vptr_CResponseCriteriaSet; // rsi
  __m128d v18; // xmm0
  float v19; // xmm2_4
  void *v20; // rax
  void *v21; // r15
  void (__fastcall *v22)(void *, CVariantBase<CVariantDefaultAllocator> *, CResponseCriteriaSet *, _QWORD, _QWORD, _QWORD); // r14
  CBaseEntity *pCaller; // [rsp+0h] [rbp-B0h]
  int v24; // [rsp+8h] [rbp-A8h]
  float fireDelay; // [rsp+Ch] [rbp-A4h]
  CBaseEntity *lpsrc; // [rsp+10h] [rbp-A0h]
  float delaya; // [rsp+18h] [rbp-98h]
  float delay; // [rsp+18h] [rbp-98h]
  CVariantBase<CVariantDefaultAllocator> v29; // [rsp+20h] [rbp-90h] BYREF
  CVariantBase<CVariantDefaultAllocator> v30; // [rsp+30h] [rbp-80h] BYREF
  CResponseCriteriaSet v31[2]; // [rsp+40h] [rbp-70h] BYREF
  variant_t v32; // 0:rcx.8,8:r8d.4

  if ( this->m_followupTarget.m_iTargetType <= DeferredResponseTarget_t::kDRT_SPECIFIC )
  {
    if ( this->m_followupTarget.m_iTargetType != DeferredResponseTarget_t::kDRT_SPECIFIC )
    {
      followup_delay = followup->followup_delay;
LABEL_4:
      delaya = followup_delay;
      m_pOuter = this->m_pOuter;
      followup_contexts = followup->followup_contexts;
      CRR_Concept::CRR_Concept(v31, followup->followup_concept);
      HIDWORD(v31[0]._vptr_CResponseCriteriaSet) = -1;
      CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue(
        v31,
        followup_contexts,
        &this->m_followupTarget,
        delaya,
        m_pOuter);
LABEL_5:
      this->m_pPostponedFollowup = 0;
      this->m_followupTarget.m_iTargetType = DeferredResponseTarget_t::kDRT_MAX;
      return;
    }
    m_Index = this->m_followupTarget.m_hHandle.m_Index;
    if ( m_Index != -1 )
    {
      v8 = followup->followup_delay;
      delay = v8;
      if ( v8 != 0.0 )
      {
        followup_delay = followup->followup_delay;
        goto LABEL_4;
      }
      if ( m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_followupTarget.m_hHandle.m_Index) >> 9)
                                                            & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[this->m_followupTarget.m_hHandle.m_Index & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            lpsrc = v10->m_pInstance;
            if ( v10->m_pInstance != 0 )
            {
              v11 = this->m_pOuter;
              if ( v11 == v10->m_pInstance && v8 < 0.0 )
              {
                delay = 0.0;
                Warning(
                  "Response rule with a 'self' target specified negative delay, which isn't legal because that would make"
                  " someone talk over himself.");
              }
              v12 = followup->followup_contexts;
              v29.m_type = 0;
              v29.m_flags = 0;
              v29.m_uint64 = 0;
              if ( v12 != 0 && *v12 != 0 )
              {
                MakeEntitySystemString(v12);
                vptr_CResponseCriteriaSet = "";
                if ( v31[0]._vptr_CResponseCriteriaSet != 0 )
                  vptr_CResponseCriteriaSet = v31[0]._vptr_CResponseCriteriaSet;
                CVariantBase<CVariantDefaultAllocator>::CopyData(&v29, vptr_CResponseCriteriaSet, 0);
                v18 = _mm_cvtps_pd(LODWORD(delay));
                v30.m_type = 0;
                v18.m128d_f64[0] = v18.m128d_f64[0] - 0.01;
                v30.m_flags = 0;
                v19 = _mm_movedup_pd(v18).m128d_f64[0];
                fireDelay = v19;
                CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v29, &v30);
                v32.m_uint64 = &v30;
                *&v32.m_type = v11;
                LODWORD(pCaller) = 0;
                CServerEventQueue::AddEvent(&g_EventQueue, lpsrc, "AddContext", v32, fireDelay, v11, pCaller, v24);
                CVariantBase<CVariantDefaultAllocator>::Free(&v30);
              }
              CResponseCriteriaSet::CResponseCriteriaSet(v31);
              m_pAsString = "";
              if ( v11 != 0 && v11->m_pEntity->m_name.u.m_Id != 0 )
                m_pAsString = v11->m_pEntity->m_name.u.m_pAsString;
              CResponseCriteriaSet::AppendCriteria(v31, "From", m_pAsString, 1.0);
              if ( CResponseCriteriaSet::FindCriterionIndex(v31, "Subject") == -1 )
                CResponseCriteriaSet::AppendCriteria(v31, "Subject", m_pAsString, 1.0);
              CResponseCriteriaSet::Merge(v31, followup->followup_contexts);
              v14 = __dynamic_cast(lpsrc, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseMultiplayerPlayer, 0);
              v15 = v14;
              if ( v14 != 0 )
              {
                v16 = *(*v14 + 4352LL);
                CRR_Concept::CRR_Concept(&v30, followup->followup_concept);
                HIDWORD(v30.m_pszString) = -1;
                v16(v15, &v30, v31, 0, 0, 0);
              }
              else
              {
                v20 = __dynamic_cast(lpsrc, &`typeinfo for'CBaseEntity, &`typeinfo for'CFlexExpresser, 0);
                v21 = v20;
                if ( v20 != 0 )
                {
                  v22 = *(*v20 + 2120LL);
                  CRR_Concept::CRR_Concept(&v30, followup->followup_concept);
                  HIDWORD(v30.m_pszString) = -1;
                  v22(v21, &v30, v31, 0, 0, 0);
                }
              }
              CResponseCriteriaSet::~CResponseCriteriaSet(v31);
              if ( (v29.m_flags & 1) != 0 )
                (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v29.m_uint64);
              goto LABEL_5;
            }
          }
        }
      }
    }
  }
}


// CAI_ExpresserWithFollowup::OnSpeechFinished  (line 487, @0x000000000213cb60, libserver.so)  // inlines: IsValid
void __fastcall CAI_ExpresserWithFollowup::OnSpeechFinished(CAI_ExpresserWithFollowup *const this)
{
  AI_ResponseFollowup *m_pPostponedFollowup; // rsi

  m_pPostponedFollowup = this->m_pPostponedFollowup;
  if ( m_pPostponedFollowup != 0
    && m_pPostponedFollowup->followup_concept != 0
    && m_pPostponedFollowup->followup_contexts != 0 )
  {
    (*(this->_vptr_IResponseFilter + 7))(this);
  }
}


// CC_RR_ForceConcept_f  (line 498, @0x0000000002175bc0, libserver.so)  // inlines: Arg, CAI_Concept, CEntityHandle, CHandle, QueueSpeak, operator[]
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::Merge, CRR_Concept::CRR_Concept, ResolveFollowupTargetToEntity, CResponseQueue::Add, CResponseCriteriaSet::~CResponseCriteriaSet, Msg, _Unwind_Resume
// strings: "USAGE: rr_forceconcept <target> <concept> \"criteria1:value1,criteria2:value2,...\"\n"
void __fastcall CC_RR_ForceConcept_f(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // eax
  const char *v4; // rsi
  bool v5; // cc
  AI_Response *v6; // rcx
  AIConcept_t concept; // [rsp+0h] [rbp-80h] BYREF
  AIConcept_t v8; // [rsp+10h] [rbp-70h] BYREF
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-60h] BYREF

  if ( args->m_nArgc <= 2 )
  {
    Msg("USAGE: rr_forceconcept <target> <concept> \"criteria1:value1,criteria2:value2,...\"\n");
  }
  else
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    m_nArgc = args->m_nArgc;
    if ( args->m_nArgc > 3 )
    {
      CResponseCriteriaSet::Merge(&criteria, args->m_ppArgv[3]);
      m_nArgc = args->m_nArgc;
    }
    v4 = "";
    if ( m_nArgc > 2 )
      v4 = args->m_ppArgv[2];
    CRR_Concept::CRR_Concept(&concept, v4);
    v5 = args->m_nArgc <= 1;
    concept.m_hSpeaker.m_Index = -1;
    v6 = "";
    if ( !v5 )
      v6 = args->m_ppArgv[1];
    ResolveFollowupTargetToEntity(&v8, &concept, &criteria, v6);
    CResponseQueue::Add(g_ResponseQueueManager.m_pQueue, &concept, &criteria, 0.0, &v8, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
}


// Script_ForceConcept  (line 531, @0x0000000002175cb0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, QueueSpeak
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::Merge, CRR_Concept::CRR_Concept, ResolveFollowupTargetToEntity, CResponseQueue::Add, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
void __fastcall Script_ForceConcept(const char *pszConcept, const char *pszTarget, const char *pszCriteriaString)
{
  AIConcept_t concept; // [rsp+0h] [rbp-80h] BYREF
  AIConcept_t v7; // [rsp+10h] [rbp-70h] BYREF
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-60h] BYREF

  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  if ( pszCriteriaString != 0 )
    CResponseCriteriaSet::Merge(&criteria, pszCriteriaString);
  CRR_Concept::CRR_Concept(&concept, pszConcept);
  concept.m_hSpeaker.m_Index = -1;
  ResolveFollowupTargetToEntity(&v7, &concept, &criteria, pszTarget);
  CResponseQueue::Add(g_ResponseQueueManager.m_pQueue, &concept, &criteria, 0.0, &v7, 0);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


