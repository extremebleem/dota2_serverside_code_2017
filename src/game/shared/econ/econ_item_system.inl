
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconItemSystem::GetItemSchemaInterface  (line 67, @0x0000000002e4ef20, libserver.so)
IEconItemSchema *__fastcall CEconItemSystem::GetItemSchemaInterface(CEconItemSystem *const this)
{
  return &this->m_itemSchema;
}


// CEconItemSystem::RequestReservedItemDefinitionList  (line 68, @0x0000000002ea1d50, libserver.so)
void __fastcall CEconItemSystem::RequestReservedItemDefinitionList(CEconItemSystem *const this)
{
  ;
}


// CEconItemSystem::ReserveItemDefinition  (line 69, @0x0000000002ea1d60, libserver.so)
void __fastcall CEconItemSystem::ReserveItemDefinition(
        CEconItemSystem *const this,
        item_definition_index_t nDefIndex,
        const char *pszUserName)
{
  ;
}


// CEconItemSystem::ReleaseItemDefReservation  (line 70, @0x0000000002ea1d70, libserver.so)
void __fastcall CEconItemSystem::ReleaseItemDefReservation(
        CEconItemSystem *const this,
        item_definition_index_t nDefIndex,
        const char *pszUserName)
{
  ;
}


// CEconItemSystem::RequestLeagueInfo  (line 71, @0x0000000002ea1d80, libserver.so)
void __fastcall CEconItemSystem::RequestLeagueInfo(CEconItemSystem *const this, uint32 nLeagueID)
{
  ;
}


// CEconItemSystem::ItemTesting_TestItems  (line 72, @0x0000000002ea1d90, libserver.so)
void __fastcall CEconItemSystem::ItemTesting_TestItems(
        CEconItemSystem *const this,
        KeyValues *pItemKeyValues,
        bool bBringEngineWindowToFront)
{
  ;
}


// CEconItemSystem::GetInGameEventIds  (line 77, @0x0000000002ea1da0, libserver.so)
void __fastcall CEconItemSystem::GetInGameEventIds(
        const CEconItemSystem *const this,
        CUtlVector<IEconItemSystem::InGameEventDesc_t,CUtlMemory<IEconItemSystem::InGameEventDesc_t,int> > *const events)
{
  ;
}


