
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SDOTAEventGoalDefinition::~SDOTAEventGoalDefinition  (line 38, @0x0000000002568180, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CDOTAEventDefinition::InitFromKeyValues
void __fastcall SDOTAEventGoalDefinition::~SDOTAEventGoalDefinition(SDOTAEventGoalDefinition *const this)
{
  if ( this->szTooltipImagePath.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->szTooltipImagePath);
  if ( this->szGoalLocDescription.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->szGoalLocDescription);
  if ( this->szGoalLocName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->szGoalLocName);
  if ( this->szGoalName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->szGoalName);
}


// SDOTAEventGoalDefinition::SDOTAEventGoalDefinition  (line 38, @0x000000000257e6c0, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall SDOTAEventGoalDefinition::SDOTAEventGoalDefinition(SDOTAEventGoalDefinition *const this, __int64 a2)
{
  CUtlString *p_szGoalName; // r13
  CUtlString *p_szGoalLocName; // r14
  EventGoalID_t v6; // ax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax

  p_szGoalName = &this->szGoalName;
  p_szGoalLocName = &this->szGoalLocName;
  v6 = *a2;
  this->szGoalName.m_pString = 0;
  this->unGoalID = v6;
  v7 = CUtlString::Get((a2 + 8));
  CUtlString::Set(p_szGoalName, v7);
  this->szGoalLocName.m_pString = 0;
  v8 = CUtlString::Get((a2 + 16));
  CUtlString::Set(p_szGoalLocName, v8);
  this->szGoalLocDescription.m_pString = 0;
  v9 = CUtlString::Get((a2 + 24));
  CUtlString::Set(&this->szGoalLocDescription, v9);
  this->szTooltipImagePath.m_pString = 0;
  v10 = CUtlString::Get((a2 + 32));
  CUtlString::Set(&this->szTooltipImagePath, v10);
  this->unGoalTargetValue = *(a2 + 40);
  this->unPrerequisiteGoalID = *(a2 + 48);
  this->unLinaPlaysGranted = *(a2 + 52);
}


