
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAI_ExpresserSink::OnSpokeConcept  (line 110, @0x000000000217a290, libserver.so)
void __fastcall CAI_ExpresserSink::OnSpokeConcept(
        CAI_ExpresserSink *const this,
        AIConcept_t concept,
        AI_Response *response)
{
  ;
}


// CAI_ExpresserSink::OnStartSpeaking  (line 111, @0x000000000217a2a0, libserver.so)
void __fastcall CAI_ExpresserSink::OnStartSpeaking(CAI_ExpresserSink *const this)
{
  ;
}


// CAI_ExpresserSink::UseSemaphore  (line 112, @0x000000000217a2b0, libserver.so)
bool __fastcall CAI_ExpresserSink::UseSemaphore(CAI_ExpresserSink *const this)
{
  return 1;
}


// CAI_Expresser::Schema_DynamicBinding  (line 139, @0x000000000217a2c0, libserver.so)
// globals: CAI_Expresser::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAI_Expresser::Schema_DynamicBinding(const CAI_Expresser *const this)
{
  return CAI_Expresser::s_pSchemaBinding;
}


// CAI_Expresser::OnSpeechFinished  (line 179, @0x000000000217a2d0, libserver.so)
void __fastcall CAI_Expresser::OnSpeechFinished(CAI_Expresser *const this)
{
  ;
}


// CAI_ExpresserHost<CBasePlayer>::~CAI_ExpresserHost  (line 279, @0x000000000217b750, libserver.so)
// calls: CBasePlayer::~CBasePlayer
void __fastcall CAI_ExpresserHost<CBasePlayer>::~CAI_ExpresserHost(CAI_ExpresserHost<CBasePlayer> *const this)
{
  this->_vptr_IHandleEntity = &off_4000290;
  this->_vptr_CAI_ExpresserSink = &off_40013C8;
  CBasePlayer::~CBasePlayer(this);
}


// CAI_ExpresserHost<CBasePlayer>::~CAI_ExpresserHost  (line 279, @0x000000000217b780, libserver.so)  // inlines: operator delete, ~CAI_ExpresserHost
// calls: CBasePlayer::~CBasePlayer
void __fastcall CAI_ExpresserHost<CBasePlayer>::~CAI_ExpresserHost(CAI_ExpresserHost<CBasePlayer> *const this)
{
  this->_vptr_IHandleEntity = &off_4000290;
  this->_vptr_CAI_ExpresserSink = &off_40013C8;
  CBasePlayer::~CBasePlayer(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CAI_ExpresserHost<CFlexExpresserShim>::~CAI_ExpresserHost  (line 279, @0x0000000002ec4c10, libserver.so)  // inlines: ~CFlexCycler, ~CFlexExpresserShim
// calls: CBaseFlex::~CBaseFlex
void __fastcall CAI_ExpresserHost<CFlexExpresserShim>::~CAI_ExpresserHost(
        CAI_ExpresserHost<CFlexExpresserShim> *const this)
{
  this->_vptr_CAI_ExpresserSink = &off_47AC2F0;
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
}


// CAI_ExpresserHost<CFlexExpresserShim>::~CAI_ExpresserHost  (line 279, @0x0000000002ec4c40, libserver.so)  // inlines: ~CAI_ExpresserHost, ~CFlexCycler, ~CFlexExpresserShim
// calls: CBaseFlex::~CBaseFlex, CBaseEntity::operator delete
void __fastcall CAI_ExpresserHost<CFlexExpresserShim>::~CAI_ExpresserHost(
        CAI_ExpresserHost<CFlexExpresserShim> *const this)
{
  this->_vptr_CAI_ExpresserSink = &off_47AC2F0;
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
  CBaseEntity::operator delete(this);
}


// CAI_ExpresserHost<CBasePlayer>::PostSpeakDispatchResponse  (line 299, @0x000000000217a9c0, libserver.so)
void __fastcall CAI_ExpresserHost<CBasePlayer>::PostSpeakDispatchResponse(
        CAI_ExpresserHost<CBasePlayer> *const this,
        AIConcept_t concept,
        AI_Response *response)
{
  ;
}


// CAI_ExpresserHost<CFlexExpresserShim>::PostSpeakDispatchResponse  (line 299, @0x0000000002ec4a10, libserver.so)
void __fastcall CAI_ExpresserHost<CFlexExpresserShim>::PostSpeakDispatchResponse(
        CAI_ExpresserHost<CFlexExpresserShim> *const this,
        AIConcept_t concept,
        AI_Response *response)
{
  ;
}


// CAI_ExpresserHost<CBasePlayer>::CanSpeak  (line 305, @0x000000000217d880, libserver.so)
// calls: CAI_Expresser::CanSpeak
bool __fastcall CAI_ExpresserHost<CBasePlayer>::CanSpeak(CAI_ExpresserHost<CBasePlayer> *const this)
{
  CAI_Expresser *v1; // rax

  v1 = (*(this->_vptr_IHandleEntity + 522))(this);
  return CAI_Expresser::CanSpeak(v1);
}


// CAI_ExpresserHost<CBasePlayer>::NoteSpeaking  (line 327, @0x000000000217e260, libserver.so)
// calls: CAI_Expresser::NoteSpeaking
void __fastcall CAI_ExpresserHost<CBasePlayer>::NoteSpeaking(
        CAI_ExpresserHost<CBasePlayer> *const this,
        double a2,
        float duration,
        float delay)
{
  CAI_Expresser *v4; // rax
  float v5; // xmm2_4
  float durationa; // [rsp+8h] [rbp-8h]

  durationa = *&a2;
  v4 = (*(this->_vptr_IHandleEntity + 522))(this, a2, duration, delay);
  CAI_Expresser::NoteSpeaking(v4, durationa, duration, v5);
}


// CAI_ExpresserHost<CFlexExpresserShim>::NoteSpeaking  (line 327, @0x0000000002ec4d00, libserver.so)
// calls: CAI_Expresser::NoteSpeaking
void __fastcall CAI_ExpresserHost<CFlexExpresserShim>::NoteSpeaking(
        CAI_ExpresserHost<CFlexExpresserShim> *const this,
        double a2,
        float duration,
        float delay)
{
  CAI_Expresser::NoteSpeaking(this->m_pExpresser, duration, delay);
}


// CAI_ExpresserHost<CBasePlayer>::Speak  (line 335, @0x000000000217e290, libserver.so)
// calls: CAI_Expresser::Speak
// local variable allocation has failed, the output may be wrong!
bool __fastcall CAI_ExpresserHost<CBasePlayer>::Speak(
        CAI_ExpresserHost<CBasePlayer> *const this,
        AIConcept_t *concept,
        const char *modifiers,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  CAI_Expresser *v9; // rax

  v9 = (*(this->_vptr_IHandleEntity + 522))(this);
  return CAI_Expresser::Speak(v9, concept, modifiers, pszOutResponseChosen, bufsize, filter);
}


// CAI_ExpresserHost<CFlexExpresserShim>::Speak  (line 335, @0x0000000002ec4cd0, libserver.so)
// calls: CAI_Expresser::Speak
// local variable allocation has failed, the output may be wrong!
bool __fastcall CAI_ExpresserHost<CFlexExpresserShim>::Speak(
        CAI_ExpresserHost<CFlexExpresserShim> *const this,
        AIConcept_t *concept,
        const char *modifiers,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  return CAI_Expresser::Speak(this->m_pExpresser, concept, modifiers, pszOutResponseChosen, bufsize, filter);
}


// CAI_ExpresserHost<CBasePlayer>::Speak  (line 344, @0x000000000217e2e0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetSpeaker, operator=
// calls: CAI_Expresser::GatherCriteria, CAI_Expresser::Speak
// local variable allocation has failed, the output may be wrong!
bool __fastcall CAI_ExpresserHost<CBasePlayer>::Speak(
        CAI_ExpresserHost<CBasePlayer> *const this,
        const AIConcept_t *concept,
        CResponseCriteriaSet *pCriteria,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  CAI_Expresser *v11; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v13; // si
  CAI_Expresser *pExpresser; // [rsp+0h] [rbp-50h]
  int v17; // [rsp+10h] [rbp-40h]

  v11 = (*(this->_vptr_IHandleEntity + 522))(this);
  m_pEntity = this->m_pEntity;
  v17 = -1;
  if ( m_pEntity != 0 )
  {
    v13 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v17 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
  }
  pExpresser = v11;
  concept->m_hSpeaker.m_Index = v17;
  CAI_Expresser::GatherCriteria(v11, pCriteria, concept, 0);
  return CAI_Expresser::Speak(pExpresser, concept, pCriteria, pszOutResponseChosen, bufsize, filter);
}


// CAI_ExpresserHost<CFlexExpresserShim>::Speak  (line 344, @0x0000000002ec4d20, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetSpeaker, operator=
// calls: CAI_Expresser::GatherCriteria, CAI_Expresser::Speak
// local variable allocation has failed, the output may be wrong!
bool __fastcall CAI_ExpresserHost<CFlexExpresserShim>::Speak(
        CAI_ExpresserHost<CFlexExpresserShim> *const this,
        const AIConcept_t *concept,
        CResponseCriteriaSet *pCriteria,
        char *pszOutResponseChosen,
        size_t bufsize,
        IRecipientFilter *filter)
{
  CEntityIdentity *m_pEntity; // rdx
  CAI_Expresser *m_pExpresser; // r13
  __int16 v11; // cx
  int v15; // [rsp+10h] [rbp-30h]

  v15 = -1;
  m_pEntity = this->m_pEntity;
  m_pExpresser = this->m_pExpresser;
  if ( m_pEntity != 0 )
  {
    v11 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
  }
  concept->m_hSpeaker.m_Index = v15;
  CAI_Expresser::GatherCriteria(m_pExpresser, pCriteria, concept, 0);
  return CAI_Expresser::Speak(m_pExpresser, concept, pCriteria, pszOutResponseChosen, bufsize, filter);
}


// CAI_ExpresserHost<CBasePlayer>::SpeakIfAllowed  (line 358, @0x000000000217f5e0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol
// calls: CAI_Expresser::SpeakIfAllowed
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CAI_ExpresserHost<CBasePlayer>::SpeakIfAllowed(
        CAI_ExpresserHost<CBasePlayer> *const this,
        AIConcept_t *concept,
        const char *modifiers,
        bool bRespondingToPlayer,
        char *pszOutResponseChosen,
        size_t bufsize)
{
  CAI_Expresser *v8; // rax
  AIConcept_t concepta; // [rsp+10h] [rbp-20h] BYREF
  AIConcept_t v13; // 0:kr00_8.8

  concepta = *concept;
  v8 = (*(this->_vptr_IHandleEntity + 522))(this);
  v13.m_iConcept.m_Id = &concepta;
  v13.m_hSpeaker.m_Index = &concepta >> 32;
  return CAI_Expresser::SpeakIfAllowed(v8, v13, modifiers, bRespondingToPlayer, pszOutResponseChosen, bufsize);
}


// CAI_ExpresserHost<CFlexExpresserShim>::SpeakIfAllowed  (line 358, @0x0000000002ec4de0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol
// calls: CAI_Expresser::SpeakIfAllowed
// local variable allocation has failed, the output may be wrong!
bool __fastcall CAI_ExpresserHost<CFlexExpresserShim>::SpeakIfAllowed(
        CAI_ExpresserHost<CFlexExpresserShim> *const this,
        AIConcept_t *concept,
        const char *modifiers,
        bool bRespondingToPlayer,
        char *pszOutResponseChosen,
        size_t bufsize)
{
  CAI_Expresser *m_pExpresser; // rdi
  AIConcept_t concepta; // [rsp+0h] [rbp-10h] BYREF
  AIConcept_t v9; // 0:kr00_8.8

  m_pExpresser = this->m_pExpresser;
  concepta = *concept;
  v9.m_iConcept.m_Id = &concepta;
  v9.m_hSpeaker.m_Index = &concepta >> 32;
  return CAI_Expresser::SpeakIfAllowed(m_pExpresser, v9, modifiers, bRespondingToPlayer, pszOutResponseChosen, bufsize);
}


// CAI_ExpresserHost<CBasePlayer>::SpeakIfAllowed  (line 367, @0x000000000217f640, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetSpeaker, operator=
// calls: CAI_Expresser::GatherCriteria, CAI_Expresser::SpeakIfAllowed
// local variable allocation has failed, the output may be wrong!
bool __fastcall CAI_ExpresserHost<CBasePlayer>::SpeakIfAllowed(
        CAI_ExpresserHost<CBasePlayer> *const this,
        AIConcept_t concept,
        CResponseCriteriaSet *pCriteria,
        bool bRespondingToPlayer,
        char *pszOutResponseChosen,
        size_t bufsize)
{
  CAI_Expresser *v11; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // si
  CAI_Expresser *pExpresser; // [rsp+0h] [rbp-50h]
  AIConcept_t concepta; // [rsp+10h] [rbp-40h] BYREF
  AIConcept_t v18; // 0:kr00_8.8

  v11 = (*(this->_vptr_IHandleEntity + 522))(this);
  m_pEntity = this->m_pEntity;
  *&concepta.m_iConcept.m_Id = -1;
  if ( m_pEntity != 0 )
  {
    v13 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *&concepta.m_iConcept.m_Id = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                               | v13 & 0x7FFF;
  }
  pExpresser = v11;
  *(*&concept + 4LL) = *&concepta.m_iConcept.m_Id;
  CAI_Expresser::GatherCriteria(v11, pCriteria, *&concept, 0);
  concepta = **&concept;
  v18.m_iConcept.m_Id = &concepta;
  v18.m_hSpeaker.m_Index = &concepta >> 32;
  return CAI_Expresser::SpeakIfAllowed(pExpresser, v18, pCriteria, bRespondingToPlayer, pszOutResponseChosen, bufsize);
}


// CAI_ExpresserHost<CFlexExpresserShim>::SpeakIfAllowed  (line 367, @0x0000000002ec4e10, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetSpeaker, operator=
// calls: CAI_Expresser::GatherCriteria, CAI_Expresser::SpeakIfAllowed
// local variable allocation has failed, the output may be wrong!
bool __fastcall CAI_ExpresserHost<CFlexExpresserShim>::SpeakIfAllowed(
        CAI_ExpresserHost<CFlexExpresserShim> *const this,
        AIConcept_t concept,
        CResponseCriteriaSet *pCriteria,
        bool bRespondingToPlayer,
        char *pszOutResponseChosen,
        size_t bufsize)
{
  CEntityIdentity *m_pEntity; // rdx
  CAI_Expresser *m_pExpresser; // r13
  __int16 v11; // cx
  AIConcept_t concepta; // [rsp+10h] [rbp-30h] BYREF
  AIConcept_t v16; // 0:kr00_8.8

  *&concepta.m_iConcept.m_Id = -1;
  m_pEntity = this->m_pEntity;
  m_pExpresser = this->m_pExpresser;
  if ( m_pEntity != 0 )
  {
    v11 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *&concepta.m_iConcept.m_Id = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                               | v11 & 0x7FFF;
  }
  *(*&concept + 4LL) = *&concepta.m_iConcept.m_Id;
  CAI_Expresser::GatherCriteria(m_pExpresser, pCriteria, *&concept, 0);
  concepta = **&concept;
  v16.m_iConcept.m_Id = &concepta;
  v16.m_hSpeaker.m_Index = &concepta >> 32;
  return CAI_Expresser::SpeakIfAllowed(m_pExpresser, v16, pCriteria, bRespondingToPlayer, pszOutResponseChosen, bufsize);
}


// CAI_ExpresserHost<CBasePlayer>::ModifyOrAppendCriteria  (line 395, @0x000000000217b550, libserver.so)
// calls: CBaseEntity::ModifyOrAppendCriteria
void __fastcall CAI_ExpresserHost<CBasePlayer>::ModifyOrAppendCriteria(
        CAI_ExpresserHost<CBasePlayer> *const this,
        CResponseCriteriaSet *const criteriaSet)
{
  CBaseEntity::ModifyOrAppendCriteria(this, criteriaSet);
}


// CAI_ExpresserHost<CFlexExpresserShim>::ModifyOrAppendCriteria  (line 395, @0x0000000002ec4b60, libserver.so)
// calls: CBaseEntity::ModifyOrAppendCriteria
void __fastcall CAI_ExpresserHost<CFlexExpresserShim>::ModifyOrAppendCriteria(
        CAI_ExpresserHost<CFlexExpresserShim> *const this,
        CResponseCriteriaSet *const criteriaSet)
{
  CBaseEntity::ModifyOrAppendCriteria(this, criteriaSet);
}


// CAI_ExpresserHost<CBasePlayer>::GetResponseSystem  (line 410, @0x000000000217b9b0, libserver.so)
// calls: GetDefaultResponseSystem
IResponseSystem *__fastcall CAI_ExpresserHost<CBasePlayer>::GetResponseSystem(
        CAI_ExpresserHost<CBasePlayer> *const this)
{
  return GetDefaultResponseSystem();
}


// CAI_ExpresserHost<CFlexExpresserShim>::GetResponseSystem  (line 410, @0x0000000002ec4cf0, libserver.so)
// calls: GetDefaultResponseSystem
IResponseSystem *__fastcall CAI_ExpresserHost<CFlexExpresserShim>::GetResponseSystem(
        CAI_ExpresserHost<CFlexExpresserShim> *const this)
{
  return GetDefaultResponseSystem();
}


// CAI_ExpresserHost<CBasePlayer>::DispatchResponse  (line 460, @0x000000000217b620, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle
// calls: CRR_Concept::CRR_Concept
void __fastcall CAI_ExpresserHost<CBasePlayer>::DispatchResponse(
        CAI_ExpresserHost<CBasePlayer> *const this,
        const char *conceptName)
{
  void (__fastcall *v3)(CAI_ExpresserHost<CBasePlayer> *const, CRR_Concept *, _QWORD, _QWORD, _QWORD, _QWORD); // r13
  CRR_Concept v4; // [rsp+0h] [rbp-30h] BYREF
  int v5; // [rsp+4h] [rbp-2Ch]

  v3 = *(this->_vptr_IHandleEntity + 543);
  CRR_Concept::CRR_Concept(&v4, conceptName);
  v5 = -1;
  v3(this, &v4, 0, 0, 0, 0);
}


// CAI_ExpresserHost<CFlexExpresserShim>::DispatchResponse  (line 460, @0x0000000002ec4c80, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle
// calls: CRR_Concept::CRR_Concept
void __fastcall CAI_ExpresserHost<CFlexExpresserShim>::DispatchResponse(
        CAI_ExpresserHost<CFlexExpresserShim> *const this,
        const char *conceptName)
{
  void (__fastcall *v3)(CAI_ExpresserHost<CFlexExpresserShim> *const, CRR_Concept *, _QWORD, _QWORD, _QWORD, _QWORD); // r13
  CRR_Concept v4; // [rsp+0h] [rbp-30h] BYREF
  int v5; // [rsp+4h] [rbp-2Ch]

  v3 = *(this->_vptr_IHandleEntity + 264);
  CRR_Concept::CRR_Concept(&v4, conceptName);
  v5 = -1;
  v3(this, &v4, 0, 0, 0, 0);
}


