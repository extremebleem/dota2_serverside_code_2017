// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_system.cpp:442
class DelayedSchemaData_GCDirectData : public IDelayedSchemaData {
public:

private:

	DelayedSchemaData_GCDirectData(const string &);
	virtual bool InitializeSchema(CEconItemSchema *);
	virtual ~DelayedSchemaData_GCDirectData();

	// vtable[2] InitializeSchema
	// sizeof = 88
};

// src/game/shared/econ/econ_item_system.cpp:463
class DelayedSchemaData_HTTPResponseData : public IDelayedSchemaData {
public:

private:

	bool m_bValid;  // +0x8

	uint32 m_nExpectedVersion;  // +0x60
	DelayedSchemaData_HTTPResponseData(DelayedSchemaData_HTTPResponseData &);
	DelayedSchemaData_HTTPResponseData(const DelayedSchemaData_HTTPResponseData &);
	DelayedSchemaData_HTTPResponseData(ISteamHTTP *, HTTPRequestHandle, uint32, uint32);
	virtual bool InitializeSchema(CEconItemSchema *);
	virtual ~DelayedSchemaData_HTTPResponseData();

	// vtable[2] InitializeSchema
	// sizeof = 104
};

// src/game/shared/econ/econ_item_system.cpp:494
class CGCUpdateItemSchema : public CGCClientJob {
public:

	char m_szUrl[512];  // +0x13c
	uint32 m_nExpectedVersion;  // +0x33c
	bool bHTTPCompleted;  // +0x340

	CGCUpdateItemSchema(CGCUpdateItemSchema &);
	CGCUpdateItemSchema(CGCUpdateItemSchema &);
	CGCUpdateItemSchema(CGCClient *);
	virtual bool BYieldingRunGCJob(IMsgNetPacket *);
	void OnHTTPCompleted(HTTPRequestCompleted_t *, bool);
	virtual ~CGCUpdateItemSchema();

	// vtable[5] BYieldingRunGCJob
	// sizeof = 888
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ItemSystem  (line 75, @0x0000000002e8c630, libserver.so)  // inlines: CGameEventListener, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: operator new, memset, CEconItemSystem::CEconItemSystem, operator delete, _Unwind_Resume
// callers: CSource2Server::GetEconItemSystem, CSource2Server::GetEconItemNamesForCharacter, CSource2Server::GetDefaultControlPointAutoUpdates, CSource2Server::FindUnitDataByModelNameCheckModelModifiers, AddInfoForEconItem, CSource2Server::GetEconItemsInfoForCharacter, CDOTA_BaseNPC::OnSpawnWearable, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::CreateAttachedParticle, OnCreateBotWearingSetSpawnComplete, dota_create_bot_wearing_set, dota_create_bot_wearing_item (156 total)
// globals: ItemSystem(void)::pSystem
CEconItemSystem *__cdecl ItemSystem()
{
  CEconItemSystem *result; // rax
  GameItemSystem_t *v1; // rbx

  result = ItemSystem(void)::pSystem;
  if ( ItemSystem(void)::pSystem == 0 )
  {
    v1 = operator new(0x858u);
    memset(v1, 0, sizeof(GameItemSystem_t));
    CEconItemSystem::CEconItemSystem(v1);
    v1->m_bRegisteredForEvents = 0;
    v1->m_vecLeagueImageNames.m_Size = 0;
    v1->m_vecLeagueImageNames.m_Memory.m_pMemory = 0;
    v1->m_vecLeagueImageNames.m_Memory.m_nAllocationCount = 0;
    ItemSystem(void)::pSystem = v1;
    v1->_vptr_IEconItemSystem = off_47A0C50;
    v1->_vptr_IGameEventListener2 = off_47A0D18;
    v1->_vptr_IDotaItemSystem = &off_47A0CF0;
    v1->m_vecLeagueImageNames.m_Memory.m_nGrowSize = 0;
    return v1;
  }
  return result;
}


// GetItemSchema  (line 89, @0x0000000002e8df00, libserver.so)
// calls: ItemSystem
// callers: CDOTA_Unit_Courier::PrecacheCourierWearables, CEconTool_Gift::BFinishInitialization, CEconItem::GetItemDefinition, CEconItem::IterateAttributes, ComputeItemCountInSetWithNoSpecialPreview, CDOTAItemDefinition::IsValidForNexonPCBang, DoesItemMatchAttribute, CEconItem::CopyAttributesFrom, CEconItem::IsEquipped, CEconItem::IterateDynamicAttributes, CEconItemCustomData::FreeAttributeMemory, CEconItem::SerializeToProtoBufItem (25 total)
GameItemSchema_t *__cdecl GetItemSchema()
{
  return &ItemSystem()->m_itemSchema;
}


// CEconItemSystem::CEconItemSystem  (line 97, @0x0000000002e6f5e0, libserver.so)
// calls: CDOTAItemSchema::CDOTAItemSchema
// callers: ItemSystem
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CEconItemSystem::CEconItemSystem(CEconItemSystem *const this)
{
  CDOTAItemSchema *p_m_itemSchema; // rdi
  uint16 m_Data; // ax

  p_m_itemSchema = &this->m_itemSchema;
  *&p_m_itemSchema[-1].m_mapCustomGameTickets.m_nMaxRehashedBucket = off_47A8C90;
  CDOTAItemSchema::CDOTAItemSchema(p_m_itemSchema);
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  this->m_nTestIndex = INVALID_ITEM_DEF_INDEX;
  this->m_nActualIndex.m_Data = m_Data;
}


// CEconItemSystem::~CEconItemSystem  (line 106, @0x0000000002e8c5e0, libserver.so)
// calls: CDOTAItemSchema::~CDOTAItemSchema
// callers: CDOTAItemSystem::~CDOTAItemSystem
void __fastcall CEconItemSystem::~CEconItemSystem(CEconItemSystem *const this)
{
  CDOTAItemSchema *p_m_itemSchema; // rdi

  p_m_itemSchema = &this->m_itemSchema;
  *&p_m_itemSchema[-1].m_mapCustomGameTickets.m_nMaxRehashedBucket = off_47A8C90;
  CDOTAItemSchema::~CDOTAItemSchema(p_m_itemSchema);
}


// CEconItemSystem::~CEconItemSystem  (line 106, @0x0000000002e8c600, libserver.so)  // inlines: ~CEconItemSystem
// calls: CDOTAItemSchema::~CDOTAItemSchema, operator delete
void __fastcall CEconItemSystem::~CEconItemSystem(CEconItemSystem *const this)
{
  CDOTAItemSchema *p_m_itemSchema; // rdi

  p_m_itemSchema = &this->m_itemSchema;
  *&p_m_itemSchema[-1].m_mapCustomGameTickets.m_nMaxRehashedBucket = off_47A8C90;
  CDOTAItemSchema::~CDOTAItemSchema(p_m_itemSchema);
  operator delete(this);
}


// CEconItemSystem::Init  (line 115, @0x0000000002e72250, libserver.so)  // inlines: CHangWatchdogScope, End, GetMillisecondsF, PLAT_CPU_TIME, Sample, Start, ~CHangWatchdogScope
// calls: HangWatchdogInternal_BeginScope, CEconItemSystem::ParseItemSchemaFile, LoggingSystem_IsChannelEnabled, Plat_GetCPUFrequency, LoggingSystem_Log, HangWatchdogInternal_EndScope, _Unwind_Resume
// callers: CInventoryManager::PostInit
// strings: "CEconItemSystem::Init", "scripts/items/items_game.txt", "SV", "%s:  parsing 'scripts/items/items_game.txt' took %.3f msec\n"
void __fastcall CEconItemSystem::Init(CEconItemSystem *const this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r15
  __int64 CPUFrequency; // rax
  double v10; // xmm1_8
  double v11; // xmm3_8
  double v12; // [rsp+8h] [rbp-48h]
  CHangWatchdogScope hang_watchdog_scope_check_object; // [rsp+10h] [rbp-40h] BYREF

  hang_watchdog_scope_check_object.m_pScopeName = "CEconItemSystem::Init";
  hang_watchdog_scope_check_object.m_bDisableDetection = 0;
  HangWatchdogInternal_BeginScope(&hang_watchdog_scope_check_object);
  v2 = __rdtsc();
  v3 = HIDWORD(v2);
  v4 = v2;
  CEconItemSystem::ParseItemSchemaFile(this, "scripts/items/items_game.txt");
  v5 = __rdtsc();
  v6 = v5;
  v7 = HIDWORD(v5);
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v8 = (v6 | (v7 << 32)) - (v4 | (v3 << 32));
    if ( v8 < 0 )
    {
      v11 = (v8 & 1 | (v8 >> 1));
      v12 = v11 + v11;
    }
    else
    {
      v12 = v8;
    }
    CPUFrequency = Plat_GetCPUFrequency();
    if ( CPUFrequency < 0 )
      v10 = (CPUFrequency & 1 | (CPUFrequency >> 1)) + (CPUFrequency & 1 | (CPUFrequency >> 1));
    else
      v10 = CPUFrequency;
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  parsing 'scripts/items/items_game.txt' took %.3f msec\n",
      "SV",
      1000.0 / v10 * v12);
  }
  HangWatchdogInternal_EndScope(&hang_watchdog_scope_check_object);
}


// CEconItemSystem::Shutdown  (line 143, @0x0000000002e6f620, libserver.so)
void __fastcall CEconItemSystem::Shutdown(CEconItemSystem *const this)
{
  ;
}


// CEconItemSystem::AddEconItemTool  (line 158, @0x0000000002e76840, libserver.so)  // inlines: AddToTail, CopyConstruct<IEconItemTool*>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<IEconItemTool*, CUtlMemory<IEconItemTool*, int> >::Find, CUtlMemory<IEconItemTool*, int>::Grow
// globals: CEconItemSystem::sm_EconItemTools
void __fastcall CEconItemSystem::AddEconItemTool(CEconItemSystem *const this, IEconItemTool *pTool)
{
  __int64 m_Size; // rbx
  int v3; // eax
  IEconItemTool **v4; // rax
  IEconItemTool *pToola; // [rsp+8h] [rbp-18h] BYREF

  pToola = pTool;
  if ( CUtlVectorBase<IEconItemTool *,CUtlMemory<IEconItemTool *,int>>::Find(
         &CEconItemSystem::sm_EconItemTools,
         &pToola) == -1 )
  {
    m_Size = CEconItemSystem::sm_EconItemTools.m_Size;
    v3 = CEconItemSystem::sm_EconItemTools.m_Size;
    if ( CEconItemSystem::sm_EconItemTools.m_Size == CEconItemSystem::sm_EconItemTools.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<IEconItemTool *,int>::Grow(&CEconItemSystem::sm_EconItemTools.m_Memory, 1);
      v3 = CEconItemSystem::sm_EconItemTools.m_Size;
    }
    CEconItemSystem::sm_EconItemTools.m_Size = v3 + 1;
    v4 = &CEconItemSystem::sm_EconItemTools.m_Memory.m_pMemory[m_Size];
    if ( v4 != 0 )
      *v4 = pToola;
  }
}


// CEconItemSystem::RemoveEconItemTool  (line 168, @0x0000000002e72870, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CUtlVectorBase<IEconItemTool*, CUtlMemory<IEconItemTool*, int> >::Find, memmove
// globals: CEconItemSystem::sm_EconItemTools
void __fastcall CEconItemSystem::RemoveEconItemTool(CEconItemSystem *const this, IEconItemTool *pTool)
{
  int v2; // eax
  IEconItemTool *pToola; // [rsp+8h] [rbp-8h] BYREF

  pToola = pTool;
  v2 = CUtlVectorBase<IEconItemTool *,CUtlMemory<IEconItemTool *,int>>::Find(
         &CEconItemSystem::sm_EconItemTools,
         &pToola);
  if ( v2 != -1 )
  {
    if ( CEconItemSystem::sm_EconItemTools.m_Size - v2 - 1 > 0 )
    {
      memmove(
        &CEconItemSystem::sm_EconItemTools.m_Memory.m_pMemory[v2],
        &CEconItemSystem::sm_EconItemTools.m_Memory.m_pMemory[v2 + 1],
        8LL * (CEconItemSystem::sm_EconItemTools.m_Size - v2 - 1));
      --CEconItemSystem::sm_EconItemTools.m_Size;
    }
    else
    {
      --CEconItemSystem::sm_EconItemTools.m_Size;
    }
  }
}


// CEconItemSystem::GetEconItemTools  (line 178, @0x0000000002e6f630, libserver.so)
// globals: CEconItemSystem::sm_EconItemTools
const CUtlVector<IEconItemTool*,CUtlMemory<IEconItemTool*,int> > *__cdecl CEconItemSystem::GetEconItemTools()
{
  return &CEconItemSystem::sm_EconItemTools;
}


// CEconItemSystem::SetTestStoreItemDetailsItemDef  (line 184, @0x0000000002e69500, libserver.so)
void __fastcall CEconItemSystem::SetTestStoreItemDetailsItemDef(
        CEconItemSystem *const this,
        item_definition_index_t nTestIndex,
        item_definition_index_t nActualIndex)
{
  this->m_nTestIndex = nTestIndex;
  this->m_nActualIndex = nActualIndex;
}


// CEconItemSystem::GetTestStoreItemDetailsURL  (line 190, @0x0000000002e697e0, libserver.so)
// calls: CUtlString::Clear
void __fastcall CEconItemSystem::GetTestStoreItemDetailsURL(
        CEconItemSystem *const this,
        item_definition_index_t nDefIndex,
        bool bCustomOnly,
        CUtlString *pURL)
{
  CUtlString::Clear(pURL);
}


// CEconItemSystem::ReloadWhitelist  (line 210, @0x0000000002e6f640, libserver.so)  // inlines: FStrEq, GetBool, GetInt, GetString, IsValidIndex, SetAllowedInMatch, _V_strcmp, operator[]
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, Msg, KeyValues::GetFirstSubKey, KeyValues::GetInt, KeyValues::GetName, KeyValues::GetNextKey, Warning, KeyValues::operator delete, _Unwind_Resume
// callers: CInventoryManager::GameInit
// strings: "item_whitelist", "FCVAR_NEVER_AS_STRING", "disallowed", "Parsing item whitelist (default: %s)\n", "unlisted_items_default_to", "Removing" (11 total)
void __fastcall CEconItemSystem::ReloadWhitelist(CEconItemSystem *const this)
{
  KeyValues *v2; // rbx
  char *m_pszString; // r13
  IBaseFileSystem *v4; // rsi
  char v5; // r9
  char v6; // r8
  __int64 v7; // rcx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t i; // edx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v9; // rsi
  const char *v10; // rsi
  KeyValues *j; // rbx
  int v12; // r13d
  const char *Name; // rax
  __int64 v14; // rax
  const char *v15; // rsi
  int Int; // eax
  const char *v17; // [rsp+8h] [rbp-38h]

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "item_whitelist");
  if ( mp_tournament.m_pParent->m_Value.m_nValue == 0 )
  {
LABEL_8:
    v5 = 0;
    v6 = 1;
    goto LABEL_9;
  }
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (mp_tournament_whitelist.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( mp_tournament_whitelist.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = mp_tournament_whitelist.m_pParent->m_Value.m_pszString;
  }
  v4 = 0;
  if ( filesystem != 0 )
    v4 = &filesystem->IBaseFileSystem;
  if ( !KeyValues::LoadFromFile(v2, v4, m_pszString, 0, 0) )
  {
    if ( *m_pszString != 0 )
      Msg("Item Whitelist file '%s' could not be found. All items will be allowed.\n", m_pszString);
    goto LABEL_8;
  }
  Int = KeyValues::GetInt(v2, "unlisted_items_default_to", 0);
  v5 = 1;
  v6 = Int != 0;
LABEL_9:
  v7 = 0;
  for ( i = 0; this->m_itemSchema.m_mapItems.m_nMaxElement > i; ++v7 )
  {
    v9 = &this->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v7];
    if ( v9->m_iNextNode >= -1 )
      *(v9->m_elem + 273) = (v6 << 6) | *(v9->m_elem + 273) & 0xBF;
    ++i;
  }
  if ( v5 != 0 )
  {
    v10 = "allowed";
    if ( v6 == 0 )
      v10 = "disallowed";
    Msg("Parsing item whitelist (default: %s)\n", v10);
    for ( j = KeyValues::GetFirstSubKey(v2); j != 0; j = KeyValues::GetNextKey(j) )
    {
      v12 = KeyValues::GetInt(j, 0, 0);
      Name = KeyValues::GetName(j);
      if ( Name != 0
        && *Name != 0
        && Name != "unlisted_items_default_to"
        && strcmp("unlisted_items_default_to", Name) != 0 )
      {
        v17 = Name;
        v14 = (*(this->m_itemSchema._vptr_IEconItemSchema + 41))(&this->m_itemSchema, Name);
        if ( v14 != 0 )
        {
          v15 = "Allowing";
          *(v14 + 273) = ((v12 != 0) << 6) | *(v14 + 273) & 0xBF;
          if ( v12 == 0 )
            v15 = "Removing";
          Msg(" -> %s '%s'\n", v15, v17);
        }
        else
        {
          Warning(" -> Could not find an item definition named '%s'\n", v17);
        }
      }
    }
    Msg("Finished.\n");
  }
}


// item_show_whitelistable_definitions  (line 276, @0x0000000002e9b8d0, libserver.so)  // inlines: GetDefinitionName, GetWithNull, IsValidIndex, String, operator[]
// calls: Msg, ItemSystem
// strings: "Available item definitions for whitelisting:\n", "   %d: '%s'\n"
void __fastcall item_show_whitelistable_definitions(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v2; // r12
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v3; // ebx
  CEconItemSystem *v4; // r13
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v5; // rdx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::ElemType_t m_elem; // rdi
  const char *m_pAsString; // r14
  unsigned __int16 v8; // ax

  v2 = 0;
  v3 = 0;
  Msg("Available item definitions for whitelisting:\n", args);
  v4 = ItemSystem();
  if ( v4->m_itemSchema.m_mapItems.m_nMaxElement > 0 )
  {
    do
    {
      v5 = &v4->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v2];
      if ( v5->m_iNextNode >= -1 )
      {
        m_elem = v5->m_elem;
        if ( m_elem != 0 && m_elem->m_nItemQuality != 0 && (*(m_elem + 272) & 2) == 0 )
        {
          m_pAsString = m_elem->m_symDefinitionName.u.m_pAsString;
          v8 = (*m_elem->_vptr_IEconItemDefinition)(m_elem);
          Msg("   %d: '%s'\n", v8, m_pAsString);
        }
      }
      ++v3;
      ++v2;
    }
    while ( v4->m_itemSchema.m_mapItems.m_nMaxElement > v3 );
  }
}


// CEconItemSystem::ResetAttribStringCache  (line 294, @0x0000000002e6f8f0, libserver.so)  // inlines: ClearStringCache, IsIdxValid, IsValidIndex, LeftChild, operator=, operator[]
// callers: CInventoryManager::GameInit, CInventoryManager::GameShutdown
void __fastcall CEconItemSystem::ResetAttribStringCache(CEconItemSystem *const this)
{
  int m_nAllocationCount; // edx
  __int64 v2; // rcx
  __int64 i; // rax
  UtlRBTreeNode_t<CUtlMap<int,CEconItemAttributeDefinition,int>::Node_t,int> *v4; // rsi

  m_nAllocationCount = this->m_itemSchema.m_mapAttributes.m_Tree.m_Elements.m_nAllocationCount;
  v2 = 0;
  for ( i = 0; i < m_nAllocationCount; ++i )
  {
    if ( i < m_nAllocationCount && this->m_itemSchema.m_mapAttributes.m_Tree.m_LastAlloc.index >= i )
    {
      v4 = &this->m_itemSchema.m_mapAttributes.m_Tree.m_Elements.m_pMemory[v2];
      if ( v4->m_Left != i )
      {
        v4->m_Data.elem.m_iszAttributeClass.u.m_Id = 0;
        m_nAllocationCount = this->m_itemSchema.m_mapAttributes.m_Tree.m_Elements.m_nAllocationCount;
      }
    }
    ++v2;
  }
}


// CEconItemSystem::DecryptItemFiles  (line 306, @0x0000000002e6f950, libserver.so)
// calls: V_snprintf, MemAllocScratch, UTIL_DecodeICE, KeyValues::LoadFromBuffer, MemFreeScratch, Warning, __stack_chk_fail
// strings: "%s.ctx", "A5fSXbf7", "No %s file found. May be unable to create items.\n"
bool __fastcall CEconItemSystem::DecryptItemFiles(CEconItemSystem *const this, KeyValues *pKV, const char *pName)
{
  __int64 v4; // rax
  __int64 v5; // r15
  int v6; // r13d
  unsigned __int8 *v7; // r12
  IBaseFileSystem *v8; // rcx
  bool v9; // bl
  char szFullName[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v13; // [rsp+218h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  V_snprintf(szFullName, 512, "%s.ctx", pName);
  v4 = (*(filesystem->_vptr_IBaseFileSystem + 2))(&filesystem->IBaseFileSystem, szFullName, "rb", "MOD");
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = (*(filesystem->_vptr_IBaseFileSystem + 6))(&filesystem->IBaseFileSystem, v4);
    v7 = MemAllocScratch((v6 + 1));
    (*filesystem->_vptr_IBaseFileSystem)(&filesystem->IBaseFileSystem, v7, v6, v5);
    v7[v6] = 0;
    (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem, v5);
    UTIL_DecodeICE(v7, v6, "A5fSXbf7");
    v8 = 0;
    if ( filesystem != 0 )
      v8 = &filesystem->IBaseFileSystem;
    v9 = KeyValues::LoadFromBuffer(pKV, szFullName, v7, v8, 0, 0, 0);
    MemFreeScratch();
    return v9;
  }
  else
  {
    Warning("No %s file found. May be unable to create items.\n", pName);
    return 0;
  }
}


// CEconItemSystem::ParseItemSchemaFile  (line 346, @0x0000000002e72140, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, String, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::Get, Msg, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEconItemSystem::Init
void __fastcall CEconItemSystem::ParseItemSchemaFile(CEconItemSystem *const this, const char *pFilename)
{
  int (**vptr_IEconItemSchema)(...); // rax
  char v3; // al
  int m_Size; // ebx
  __int64 v5; // r12
  int v6; // ebx
  const char *v7; // rax
  __int64 i; // r12
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > vecErrors; // [rsp+0h] [rbp-40h] BYREF

  vecErrors.m_Size = 0;
  vptr_IEconItemSchema = this->m_itemSchema._vptr_IEconItemSchema;
  vecErrors.m_Memory.m_pMemory = 0;
  vecErrors.m_Memory.m_nAllocationCount = 0;
  vecErrors.m_Memory.m_nGrowSize = 0;
  v3 = (*vptr_IEconItemSchema)(&this->m_itemSchema, pFilename, "MOD", &vecErrors);
  m_Size = vecErrors.m_Size;
  if ( v3 == 0 && vecErrors.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = CUtlString::Get(&vecErrors.m_Memory.m_pMemory[v5]);
      Msg("%s", v7);
      ++v6;
      ++v5;
    }
    while ( vecErrors.m_Size > v6 );
    m_Size = vecErrors.m_Size;
  }
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    if ( *(&vecErrors.m_Memory.m_pMemory->m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((vecErrors.m_Memory.m_pMemory + i));
  }
  vecErrors.m_Size = 0;
  if ( (vecErrors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&vecErrors.m_Memory);
    if ( (vecErrors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&vecErrors.m_Memory);
  }
}


// GetISteamHTTP  (line 361, @0x0000000002e6a020, libserver.so)
// callers: CGCUpdateItemSchema::BYieldingRunGCJob, CGCUpdateItemSchema::OnHTTPCompleted
ISteamHTTP *__cdecl GetISteamHTTP()
{
  ISteamHTTP *result; // rax

  if ( steamapicontext == 0 || (result = steamapicontext->m_pSteamHTTP) == 0 )
  {
    result = steamgameserverapicontext;
    if ( steamgameserverapicontext != 0 )
      return steamgameserverapicontext->m_pSteamHTTP;
  }
  return result;
}


// LoadLocalSchema  (line 378, @0x0000000002e739a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::KeyValues, KeyValues::LoadFromFile, CUtlBuffer::CUtlBuffer, KeyValues::WriteAsBinary, CEconItemSchema::BInitBinaryBuffer, CUtlString::Get, Warning, CUtlString::FreeMemoryBlock, CUtlMemory<unsigned char, int>::Purge, KeyValues::~KeyValues, CUtlMemory<CUtlString, int>::Purge, __stack_chk_fail (14 total)
// callers: IDelayedSchemaData::InitializeSchemaInternal
// strings: "ItemsGameFile", "scripts/items/items_game.txt"
bool __fastcall LoadLocalSchema(CEconItemSchema *pItemSchema)
{
  IBaseFileSystem *v2; // rsi
  bool v3; // r15
  int m_Size; // ebx
  __int64 v5; // r12
  int v6; // ebx
  const char *v7; // rax
  __int64 i; // r12
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > vecErrors; // [rsp+10h] [rbp-C0h] BYREF
  CUtlBuffer buffer; // [rsp+30h] [rbp-A0h] BYREF
  KeyValues kvItemsGame; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+98h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kvItemsGame, "ItemsGameFile");
  v2 = 0;
  if ( g_pFullFileSystem != 0 )
    v2 = &g_pFullFileSystem->IBaseFileSystem;
  v3 = KeyValues::LoadFromFile(&kvItemsGame, v2, "scripts/items/items_game.txt", "GAME", 0);
  if ( v3 )
  {
    CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
    KeyValues::WriteAsBinary(&kvItemsGame, &buffer);
    vecErrors.m_Size = 0;
    vecErrors.m_Memory.m_pMemory = 0;
    vecErrors.m_Memory.m_nAllocationCount = 0;
    vecErrors.m_Memory.m_nGrowSize = 0;
    v3 = CEconItemSchema::BInitBinaryBuffer(pItemSchema, &buffer, &vecErrors);
    m_Size = vecErrors.m_Size;
    if ( !v3 && vecErrors.m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = CUtlString::Get(&vecErrors.m_Memory.m_pMemory[v5]);
        Warning("%s\n", v7);
        ++v6;
        ++v5;
      }
      while ( vecErrors.m_Size > v6 );
      m_Size = vecErrors.m_Size;
    }
    for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
    {
      if ( *(&vecErrors.m_Memory.m_pMemory->m_pString + i) != 0 )
        CUtlString::FreeMemoryBlock((vecErrors.m_Memory.m_pMemory + i));
    }
    vecErrors.m_Size = 0;
    if ( (vecErrors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CUtlString,int>::Purge(&vecErrors.m_Memory);
      if ( (vecErrors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlString,int>::Purge(&vecErrors.m_Memory);
    }
    CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
  }
  KeyValues::~KeyValues(&kvItemsGame);
  return v3;
}


// IDelayedSchemaData::InitializeSchemaInternal  (line 405, @0x0000000002e73d70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: DevMsg, CEconItemSchema::BInitBinaryBuffer, CUtlString::FreeMemoryBlock, CEconItemSchema::BInitTextBuffer, Warning, CUtlString::Get, LoadLocalSchema, CUtlMemory<CUtlString, int>::Purge, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: DelayedSchemaData_HTTPResponseData::InitializeSchema
// strings: "Applying new item schema, version %08X\n", "**WARNING** Failed to apply item schema, falling back to local copy!\n", "**WARNING** Failed to apply local copy of item schema. We have no valid schema. Economy w, "**WARNING** Item schema mismatch after update!\n", "GC told us to expect %08X, we got %08X\n"
bool __fastcall IDelayedSchemaData::InitializeSchemaInternal(
        IDelayedSchemaData *const this,
        CEconItemSchema *pItemSchema,
        CUtlBuffer *const bufRawData,
        bool bInitAsBinary,
        uint32 nExpectedVersion)
{
  bool v9; // r13
  uint32 m_unVersion; // r12d
  int m_Size; // ebx
  __int64 j; // r12
  __int64 v14; // r12
  int i; // ebx
  const char *v16; // rax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > vecErrors; // [rsp+0h] [rbp-50h] BYREF

  DevMsg(2, "Applying new item schema, version %08X\n", nExpectedVersion);
  vecErrors.m_Size = 0;
  vecErrors.m_Memory.m_pMemory = 0;
  vecErrors.m_Memory.m_nAllocationCount = 0;
  vecErrors.m_Memory.m_nGrowSize = 0;
  if ( bInitAsBinary )
  {
    v9 = CEconItemSchema::BInitBinaryBuffer(pItemSchema, bufRawData, &vecErrors);
    if ( v9 )
    {
LABEL_3:
      m_unVersion = pItemSchema->m_unVersion;
      if ( nExpectedVersion != m_unVersion && nExpectedVersion != 0 )
      {
        Warning("**WARNING** Item schema mismatch after update!\n");
        Warning("GC told us to expect %08X, we got %08X\n", nExpectedVersion, m_unVersion);
      }
      goto LABEL_4;
    }
  }
  else
  {
    v9 = CEconItemSchema::BInitTextBuffer(pItemSchema, bufRawData, &vecErrors);
    if ( v9 )
      goto LABEL_3;
  }
  Warning("**WARNING** Failed to apply item schema, falling back to local copy!\n");
  v14 = 0;
  for ( i = 0; vecErrors.m_Size > i; ++v14 )
  {
    v16 = CUtlString::Get(&vecErrors.m_Memory.m_pMemory[v14]);
    Warning("%s\n", v16);
    ++i;
  }
  if ( !LoadLocalSchema(pItemSchema) )
    Warning("**WARNING** Failed to apply local copy of item schema. We have no valid schema. Economy will not function.\n");
LABEL_4:
  m_Size = vecErrors.m_Size;
  for ( j = 8LL * vecErrors.m_Size - 8; --m_Size >= 0; j -= 8 )
  {
    if ( *(&vecErrors.m_Memory.m_pMemory->m_pString + j) != 0 )
      CUtlString::FreeMemoryBlock((vecErrors.m_Memory.m_pMemory + j));
  }
  vecErrors.m_Size = 0;
  if ( (vecErrors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&vecErrors.m_Memory);
    if ( (vecErrors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&vecErrors.m_Memory);
  }
  return v9;
}


// DelayedSchemaData_HTTPResponseData::~DelayedSchemaData_HTTPResponseData  (line 463, @0x0000000002ea7320, libserver.so)  // inlines: ~CUtlBuffer, ~CUtlMemory, ~IDelayedSchemaData
// calls: CUtlMemory<unsigned char, int>::Purge
void __fastcall DelayedSchemaData_HTTPResponseData::~DelayedSchemaData_HTTPResponseData(
        DelayedSchemaData_HTTPResponseData *const this)
{
  CUtlBuffer *p_m_bufRawData; // rdi

  p_m_bufRawData = &this->m_bufRawData;
  p_m_bufRawData[-1].m_PutOverflowFunc.__delta = off_47A8D10;
  CUtlMemory<unsigned char,int>::Purge(&p_m_bufRawData->m_Memory);
  this->_vptr_IDelayedSchemaData = off_47A5DB0;
}


// DelayedSchemaData_HTTPResponseData::~DelayedSchemaData_HTTPResponseData  (line 463, @0x0000000002ea7360, libserver.so)  // inlines: ~CUtlBuffer, ~CUtlMemory, ~DelayedSchemaData_HTTPResponseData, ~IDelayedSchemaData
// calls: CUtlMemory<unsigned char, int>::Purge, operator delete
void __fastcall DelayedSchemaData_HTTPResponseData::~DelayedSchemaData_HTTPResponseData(
        DelayedSchemaData_HTTPResponseData *const this)
{
  CUtlBuffer *p_m_bufRawData; // rdi

  p_m_bufRawData = &this->m_bufRawData;
  p_m_bufRawData[-1].m_PutOverflowFunc.__delta = off_47A8D10;
  CUtlMemory<unsigned char,int>::Purge(&p_m_bufRawData->m_Memory);
  this->_vptr_IDelayedSchemaData = off_47A5DB0;
  operator delete(this);
}


// DelayedSchemaData_HTTPResponseData::InitializeSchema  (line 477, @0x0000000002eac1b0, libserver.so)
// calls: IDelayedSchemaData::InitializeSchemaInternal
bool __fastcall DelayedSchemaData_HTTPResponseData::InitializeSchema(
        DelayedSchemaData_HTTPResponseData *const this,
        CEconItemSchema *pItemSchema)
{
  return this->m_bValid
      && IDelayedSchemaData::InitializeSchemaInternal(
           this,
           pItemSchema,
           &this->m_bufRawData,
           0,
           this->m_nExpectedVersion);
}


// CGCUpdateItemSchema::~CGCUpdateItemSchema  (line 494, @0x0000000002ea3c80, libserver.so)  // inlines: Cancel, ~CCallResult, ~CGCClientJob
// calls: SteamAPI_UnregisterCallResult, GCSDK::CJob::~CJob
void __fastcall CGCUpdateItemSchema::~CGCUpdateItemSchema(CGCUpdateItemSchema *const this)
{
  SteamAPICall_t m_hAPICall; // rsi

  this->_vptr_CJob = off_47A8D90;
  m_hAPICall = this->callback.m_hAPICall;
  this->callback._vptr_CCallbackBase = off_47A8D50;
  if ( m_hAPICall != 0 )
  {
    SteamAPI_UnregisterCallResult(&this->callback);
    this->callback.m_hAPICall = 0;
  }
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// CGCUpdateItemSchema::~CGCUpdateItemSchema  (line 494, @0x0000000002ea4420, libserver.so)  // inlines: Cancel, ~CCallResult, ~CGCClientJob, ~CGCUpdateItemSchema
// calls: SteamAPI_UnregisterCallResult, GCSDK::CJob::~CJob, operator delete
void __fastcall CGCUpdateItemSchema::~CGCUpdateItemSchema(CGCUpdateItemSchema *const this)
{
  SteamAPICall_t m_hAPICall; // rsi

  this->_vptr_CJob = off_47A8D90;
  m_hAPICall = this->callback.m_hAPICall;
  this->callback._vptr_CCallbackBase = off_47A8D50;
  if ( m_hAPICall != 0 )
  {
    SteamAPI_UnregisterCallResult(&this->callback);
    this->callback.m_hAPICall = 0;
  }
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCUpdateItemSchema::BYieldingRunGCJob  (line 508, @0x0000000002ebf560, libserver.so)  // inlines: AllocProto, CProtoBufMsg, FreeProto, Get, GetBool, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInt, Lock, Set, SetGameserverFlag, Unlock, V_strncpy<long unsigned int>, _M_data, c_str, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, pthread_mutex_lock, operator new, CMsgUpdateItemSchema::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, GCSDK::CProtoBufMsgBase::InitFromPacketInternal, ItemSystem (24 total)
// strings: "GC sent malformed CGCUpdateItemSchema message: No schema data, no URL\n", "NOTE: Not updating item schema.  Using version %08X; latest version is %08X\n", "Current item schema is up-to-date with version %08X.\n", "Failed to update item schema: couldn't fetch %s\n", "ISteamHTTP not available to update item schema, requesting direct data for version %08X\n
// globals: GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_pMemoryPool, CGCUpdateItemSchema::OnHTTPCompleted(HTTPRequestCompleted_t *,bool)
bool __fastcall CGCUpdateItemSchema::BYieldingRunGCJob(
        CGCUpdateItemSchema *const this,
        GCSDK::IMsgNetPacket *pNetPacket)
{
  GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema> *v4; // r14
  const google::protobuf::Descriptor *v5; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v7; // rax
  uint32 v8; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v9; // rax
  ISteamUtils *m_pSteamUtils; // rdi
  bool v11; // r13
  CEconItemSystem *v12; // rax
  uint32 m_nExpectedVersion; // edx
  uint32 m_unVersion; // esi
  _BYTE *v15; // rsi
  ISteamHTTP *ISteamHTTP; // rax
  ISteamHTTP *v18; // r13
  __int64 v19; // r15
  SteamAPICall_t v20; // r13
  SteamAPICall_t hCall; // [rsp+8h] [rbp-68h] BYREF
  GCSDK::CProtoBufMsg<CMsgUpdateItemSchema> msg; // [rsp+10h] [rbp-60h] BYREF

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg);
  msg._vptr_CProtoBufMsgBase = &off_47A8DF0;
  msg.m_pProtoBufBody = 0;
  if ( !GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_bRegisteredWithMemoryPoolMgr )
    {
      v4 = operator new(0x28u);
      v5 = CMsgUpdateItemSchema::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v5->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v7 = CMsgUpdateItemSchema::descriptor();
      v8 = google::protobuf::internal::ExtensionSet::GetInt32(
             (v7->options_ + 8),
             msgpool_soft_limit.number_,
             msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v4, v8, Int32);
      v4->_vptr_CProtoBufMsgMemoryPoolBase = &off_47AAE90;
      GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_pMemoryPool = v4;
      v9 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v9, v4);
      GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  msg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_pMemoryPool);
  GCSDK::CProtoBufMsgBase::InitFromPacketInternal(&msg, pNetPacket);
  v11 = steamapicontext == 0
     || (m_pSteamUtils = steamapicontext->m_pSteamUtils) == 0
     || (*(*m_pSteamUtils + 16LL))(m_pSteamUtils) == 1
     || items_game_use_gc_copy.m_pParent->m_Value.m_nValue != 0;
  if ( (*(*engine + 160LL))(engine) != 0 )
    v11 = 0;
  this->m_nExpectedVersion = *(msg.m_pProtoBufBody + 10);
  v12 = ItemSystem();
  m_nExpectedVersion = this->m_nExpectedVersion;
  m_unVersion = v12->m_itemSchema.m_unVersion;
  if ( m_nExpectedVersion != 0 && m_unVersion == m_nExpectedVersion )
  {
    Msg("Current item schema is up-to-date with version %08X.\n", m_unVersion);
  }
  else if ( v11 )
  {
    v15 = **(msg.m_pProtoBufBody + 4);
    if ( v15 != 0 && *v15 != 0 )
    {
      _V_strncpy(this->m_szUrl, v15, 512);
      ISteamHTTP = GetISteamHTTP();
      v18 = ISteamHTTP;
      if ( ISteamHTTP != 0 )
      {
        v19 = (**ISteamHTTP)(ISteamHTTP, 1, this->m_szUrl);
        (*(*v18 + 16LL))(v18, v19, 10);
        if ( (*(*v18 + 40LL))(v18, v19, &hCall) != 0 )
        {
          this->bHTTPCompleted = 0;
          if ( steamgameserverapicontext != 0 && v18 == steamgameserverapicontext->m_pSteamHTTP )
            this->callback.m_nCallbackFlags |= 2u;
          v20 = hCall;
          if ( this->callback.m_hAPICall != 0 )
            SteamAPI_UnregisterCallResult(&this->callback);
          this->callback.m_hAPICall = v20;
          this->callback.m_pObj = this;
          this->callback.m_Func.__pfn = CGCUpdateItemSchema::OnHTTPCompleted;
          this->callback.m_Func.__delta = 0;
          if ( v20 != 0 )
            SteamAPI_RegisterCallResult(&this->callback, v20);
          while ( !this->bHTTPCompleted )
            GCSDK::CJob::BYieldingWaitOneFrame(this);
        }
        else
        {
          Warning("Failed to update item schema: couldn't fetch %s\n", this->m_szUrl);
        }
      }
      else
      {
        Msg(
          "ISteamHTTP not available to update item schema, requesting direct data for version %08X\n",
          this->m_nExpectedVersion);
      }
    }
    else
    {
      Warning("GC sent malformed CGCUpdateItemSchema message: No schema data, no URL\n");
    }
  }
  else
  {
    Msg(
      "NOTE: Not updating item schema.  Using version %08X; latest version is %08X\n",
      m_unVersion,
      m_nExpectedVersion);
  }
  msg._vptr_CProtoBufMsgBase = &off_47A8DF0;
  if ( msg.m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_pMemoryPool,
      msg.m_pProtoBufBody);
    msg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
  return 1;
}


// CGCUpdateItemSchema::OnHTTPCompleted  (line 625, @0x0000000002ebf900, libserver.so)  // inlines: DelayedSchemaData_HTTPResponseData, MaybeInitFromBuffer, ~CUtlBuffer, ~CUtlMemory, ~IDelayedSchemaData
// calls: GetISteamHTTP, Warning, DevMsg, operator new, CUtlBuffer::CUtlBuffer, CUtlBuffer::SetBufferType, CUtlBuffer::SeekPut, ItemSystem, CUtlMemory<unsigned char, int>::Purge, operator delete, _Unwind_Resume
// strings: "Failed to update item schema: HTTP status %d fetching %s\n", "Failed to update item schema from %s\n", "Fetched %d bytes item schema version %08X via HTTP; update is queued.\n"
void __fastcall CGCUpdateItemSchema::OnHTTPCompleted(
        CGCUpdateItemSchema *const this,
        HTTPRequestCompleted_t *arg,
        bool bFailed)
{
  ISteamHTTP *ISteamHTTP; // rax
  ISteamHTTP *v7; // rbx
  EHTTPStatusCode m_eStatusCode; // esi
  char *v9; // rax
  HTTPRequestHandle m_hRequest; // ecx
  char *v11; // r13
  uint32 m_nExpectedVersion; // r15d
  CEconItemSystem *v13; // rax
  IDelayedSchemaData *m_pDelayedSchemaData; // rdi
  CEconItemSystem *v15; // r14
  HTTPRequestHandle v16; // [rsp+8h] [rbp-48h]
  int offset; // [rsp+Ch] [rbp-44h]
  uint32 unBodySize[13]; // [rsp+1Ch] [rbp-34h] BYREF

  this->bHTTPCompleted = 1;
  ISteamHTTP = GetISteamHTTP();
  v7 = ISteamHTTP;
  if ( ISteamHTTP != 0 )
  {
    m_eStatusCode = arg->m_eStatusCode;
    if ( m_eStatusCode == EHTTPStatusCode::k_EHTTPStatusCode200OK )
    {
      if ( arg->m_bRequestSuccessful
        && !bFailed
        && (*(*ISteamHTTP + 88LL))(ISteamHTTP, arg->m_hRequest, unBodySize) != 0 )
      {
        DevMsg(
          2,
          "Fetched %d bytes item schema version %08X via HTTP; update is queued.\n",
          unBodySize[0],
          this->m_nExpectedVersion);
        v9 = operator new(0x68u);
        m_hRequest = arg->m_hRequest;
        v11 = v9;
        LODWORD(v9) = unBodySize[0];
        m_nExpectedVersion = this->m_nExpectedVersion;
        *v11 = off_47A8D10;
        v16 = m_hRequest;
        offset = v9;
        CUtlBuffer::CUtlBuffer((v11 + 16), 0, 0, 0);
        *(v11 + 24) = m_nExpectedVersion;
        CUtlBuffer::SetBufferType((v11 + 16), 1, 1);
        CUtlBuffer::SeekPut((v11 + 16), CUtlBuffer::SeekType_t::SEEK_HEAD, offset);
        v11[8] = (*(*v7 + 96LL))(v7, v16, *(v11 + 2), *(v11 + 9));
        v13 = ItemSystem();
        m_pDelayedSchemaData = v13->m_itemSchema.m_pDelayedSchemaData;
        v15 = v13;
        if ( m_pDelayedSchemaData != 0 )
          (*(m_pDelayedSchemaData->_vptr_IDelayedSchemaData + 1))(m_pDelayedSchemaData);
        v15->m_itemSchema.m_pDelayedSchemaData = v11;
      }
      else
      {
        Warning("Failed to update item schema from %s\n", this->m_szUrl);
      }
    }
    else
    {
      Warning("Failed to update item schema: HTTP status %d fetching %s\n", m_eStatusCode, this->m_szUrl);
    }
    (*(*v7 + 112LL))(v7, arg->m_hRequest);
  }
}


// CreateJob_CGCUpdateItemSchema  (line 667, @0x0000000002e6bca0, libserver.so)  // inlines: AllocateJob<CGCUpdateItemSchema, GCSDK::CGCClient>, CCallResult, CCallbackBase, CGCClientJob, CGCUpdateItemSchema, JobMgrAllocateJobClass<CGCUpdateItemSchema, GCSDK::CGCClient>, Job_SetJobType
// calls: operator new, GCSDK::CJob::CJob, operator delete, _Unwind_Resume
// globals: g_JobType_CGCUpdateItemSchema
GCSDK::CJob *__fastcall CreateJob_CGCUpdateItemSchema(GCSDK::CGCClient *pGC)
{
  GCSDK::CJob *v2; // rbx

  v2 = operator new(0x378u);
  GCSDK::CJob::CJob(v2, (pGC + 48));
  v2[1]._vptr_CJob = pGC;
  v2->_vptr_CJob = off_47A8D90;
  v2[2].m_JobMgr = off_47A8D50;
  v2->m_pJobType = &g_JobType_CGCUpdateItemSchema;
  *(&v2[1] + 2) = 4;
  LOBYTE(v2[2].m_vecNetPackets.m_Size) = 0;
  v2[2].m_vecNetPackets.m_Memory.m_pMemory = 0;
  *&v2[2].m_vecNetPackets.m_Memory.m_nAllocationCount = 0;
  v2[2].m_vecNetPackets.m_Memory.m_FixedMemory = 0;
  v2[2].m_pJobType = 0;
  *(&v2[2].m_vecNetPackets.m_Size + 1) = 2101;
  *(&v2[1] + 12) = 0;
  HIDWORD(v2[2].m_pFirstJobWaitingOnThis) = 0;
  LOBYTE(v2[2].m_pJobWaitingOnNext) = 0;
  return v2;
}


