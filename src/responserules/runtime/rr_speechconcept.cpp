
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_rr_speechconcept.cpp  (line 0, @0x0000000001a6a760, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_rr_speechconcept_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// InitializeRRConceptTable  (line 20, @0x000000000310af30, libserver.so)
// calls: operator new, CUtlSymbolTable::CUtlSymbolTable, operator delete, _Unwind_Resume
// callers: CRR_Concept::CRR_Concept, CRR_Concept::operator=, CRR_Concept::GetStringConcept, CRR_Concept::GetStringForGenericId
// globals: g_pRRConceptTable
void __cdecl InitializeRRConceptTable()
{
  CRR_ConceptSymbolTable *v0; // rbx

  if ( g_pRRConceptTable == 0 )
  {
    v0 = operator new(0x50u);
    CUtlSymbolTable::CUtlSymbolTable(v0, 64, 64, 1);
    g_pRRConceptTable = v0;
  }
}


// CRR_Concept::CRR_Concept  (line 29, @0x000000000310af90, libserver.so)  // inlines: CUtlSymbol, operator=
// calls: InitializeRRConceptTable, CUtlSymbolTable::AddString
// callers: CSpeechScriptBridge::AIConceptFromCriteriaSet, CBaseMultiplayerPlayer::SpeakConceptIfAllowed, CAI_ExpresserHost<CBasePlayer>::DispatchResponse, CBaseMultiplayerPlayer::SpeakConcept, CAI_ExpresserWithFollowup::SpeakDispatchFollowup, CC_RR_ForceConcept_f, Script_ForceConcept, CAI_ExpresserWithFollowup::SpeakDispatchResponse, CPropDoorRotatingBreakable::Event_Killed, CDOTA_Speech::SpeakConcept, CAI_ExpresserHost<CFlexExpresserShim>::DispatchResponse, CFlexExpresser::InputSpeakResponseConcept (13 total)
// globals: g_pRRConceptTable
void __fastcall CRR_Concept::CRR_Concept(CRR_Concept *const this, const char *fromString)
{
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  this->m_iConcept.m_Id = -1;
  InitializeRRConceptTable();
  CUtlSymbolTable::AddString(v4, g_pRRConceptTable, fromString);
  this->m_iConcept.m_Id = v4[0];
}


// CRR_Concept::operator=  (line 35, @0x000000000310afe0, libserver.so)  // inlines: operator=
// calls: InitializeRRConceptTable, CUtlSymbolTable::AddString
// globals: g_pRRConceptTable
CRR_Concept *__fastcall CRR_Concept::operator=(CRR_Concept *const this, const char *fromString)
{
  UtlSymId_t v5[16]; // [rsp+0h] [rbp-20h] BYREF

  InitializeRRConceptTable();
  CUtlSymbolTable::AddString(v5, g_pRRConceptTable, fromString);
  this->m_iConcept.m_Id = v5[0];
  return this;
}


// CRR_Concept::operator==  (line 42, @0x000000000310b020, libserver.so)
// calls: CUtlSymbolTable::Find
// globals: g_pRRConceptTable
bool __fastcall CRR_Concept::operator==(CRR_Concept *const this, const char *pszConcept)
{
  bool result; // al
  unsigned __int16 v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CUtlSymbolTable::Find(v4, g_pRRConceptTable, pszConcept);
  result = 0;
  if ( v4[0] != 0xFFFF )
    return v4[0] == this->m_iConcept.m_Id;
  return result;
}


// CRR_Concept::GetStringConcept  (line 48, @0x000000000310b060, libserver.so)  // inlines: CUtlSymbol
// calls: InitializeRRConceptTable, CUtlSymbolTable::String, Warning
// callers: CAI_Expresser::GatherCriteria, CAI_Expresser::FindResponse, CAI_ExpresserWithFollowup::Speak, CAI_Expresser::Speak, CAI_Expresser::CanSpeakConcept, CAI_Expresser::GetTimeSpokeConcept, CAI_Expresser::SetSpokeConcept, CAI_Expresser::SpeakDispatchResponse, CAI_Expresser::ClearSpokeConcept, CDOTA_Speech::SpeakConcept, NextBotManager::OnSpokeConcept, CResponseSystem::SpewDebugInfo
// strings: "An RR_Concept couldn't find its string in the symbol table!\n"
// globals: g_pRRConceptTable
const char *__fastcall CRR_Concept::GetStringConcept(const CRR_Concept *const this)
{
  const char *result; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-20h] BYREF

  InitializeRRConceptTable();
  id.m_Id = this->m_iConcept.m_Id;
  result = CUtlSymbolTable::String(g_pRRConceptTable, &id.m_Id);
  if ( result == 0 )
  {
    Warning("An RR_Concept couldn't find its string in the symbol table!\n");
    return "";
  }
  return result;
}


// CRR_Concept::GetStringForGenericId  (line 62, @0x000000000310b0c0, libserver.so)  // inlines: CUtlSymbol
// calls: InitializeRRConceptTable, CUtlSymbolTable::String
// globals: g_pRRConceptTable
char *__fastcall CRR_Concept::GetStringForGenericId(UtlSymId_t *genericId)
{
  CUtlSymbol id; // [rsp+0h] [rbp-20h] BYREF

  InitializeRRConceptTable();
  id.m_Id = *genericId;
  return CUtlSymbolTable::String(g_pRRConceptTable, &id.m_Id);
}


