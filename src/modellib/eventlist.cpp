// Reconstructed from DWARF by pahole; not original source.

// src/modellib/eventlist.cpp:19
struct EventList_t {
	int m_nType;  // +0x4
	short unsigned int m_nStringKey;  // +0x8
	short int m_bIsPrivate;  // +0xa
	EventList_t();

	// sizeof = 12
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_eventlist.cpp  (line 0, @0x0000000001a6b320, libserver.so)  // inlines: AnimEventIndex_t, CUtlMemory, CUtlVector, CUtlVectorBase, Color, SetColor, __static_initialization_and_destruction_0
// calls: __cxa_atexit, CStringRegistry::CStringRegistry
// globals: __dso_handle, UNSPECIFIED_LOGGING_COLOR, g_EventList, CUtlVector<EventList_t,CUtlMemory<EventList_t,int>>::~CUtlVector(), g_EventStrings, g_HighestEvent
void __cdecl GLOBAL__sub_I_eventlist_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  g_EventList.m_Size = 0;
  g_EventList.m_Memory.m_pMemory = 0;
  g_EventList.m_Memory.m_nAllocationCount = 0;
  g_EventList.m_Memory.m_nGrowSize = 0;
  __cxa_atexit(CUtlVector<EventList_t,CUtlMemory<EventList_t,int>>::~CUtlVector, &g_EventList, &_dso_handle);
  CStringRegistry::CStringRegistry(&g_EventStrings);
  __cxa_atexit(CStringRegistry::~CStringRegistry, &g_EventStrings, &_dso_handle);
  g_HighestEvent.m_Data = 0;
}


// EventList_Init  (line 39, @0x00000000031639b0, libserver.so)
// callers: CSource1GameConfiguration::InitGameSession
// globals: g_HighestEvent
void __cdecl EventList_Init()
{
  g_HighestEvent.m_Data = 0;
}


// EventList_Free  (line 44, @0x00000000031639c0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CStringRegistry::ClearStrings, CUtlMemory<EventList_t, int>::Purge
// callers: CSource1GameConfiguration::InitGameSession
// globals: g_EventStrings, g_EventList, g_nEventListVersion
void __cdecl EventList_Free()
{
  CStringRegistry::ClearStrings(&g_EventStrings);
  g_EventList.m_Size = 0;
  if ( (g_EventList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<EventList_t,int>::Purge(&g_EventList.m_Memory);
  ++g_nEventListVersion;
}


// EventList_AddEventEntry  (line 54, @0x0000000003163a80, libserver.so)  // inlines: AddToTail, AnimEventIndex_t, Construct<EventList_t>, Element, EventList_t, GrowMemory, operator[]
// calls: CStringRegistry::AddString, CUtlMemory<EventList_t, int>::Grow
// callers: EventList_RegisterSharedEvent, EventList_RegisterPrivateEvent
// globals: g_EventList, g_EventStrings, g_HighestEvent
EventList_t *__fastcall EventList_AddEventEntry(
        const char *pName,
        AnimEventIndex_t nEventIndex,
        bool bIsPrivate,
        int nType)
{
  const char *v4; // r8
  int m_Size; // edx
  int v9; // eax
  EventList_t *v10; // rax
  EventList_t *v11; // rbx
  unsigned __int16 v12; // ax
  bool v13; // cc
  int v16; // [rsp+Ch] [rbp-24h]

  v4 = pName;
  m_Size = g_EventList.m_Size;
  v9 = g_EventList.m_Size;
  if ( g_EventList.m_Size == g_EventList.m_Memory.m_nAllocationCount )
  {
    v16 = g_EventList.m_Size;
    CUtlMemory<EventList_t,int>::Grow(&g_EventList.m_Memory, 1);
    v9 = g_EventList.m_Size;
    v4 = pName;
    m_Size = v16;
  }
  g_EventList.m_Size = v9 + 1;
  v10 = &g_EventList.m_Memory.m_pMemory[m_Size];
  if ( v10 != 0 )
  {
    v10->m_nEventIndex.m_Data = -1;
    v11 = &g_EventList.m_Memory.m_pMemory[m_Size];
  }
  else
  {
    v11 = 0;
  }
  v11->m_nEventIndex = nEventIndex;
  v12 = CStringRegistry::AddString(&g_EventStrings, v4, m_Size);
  v13 = nEventIndex.m_Data <= g_HighestEvent.m_Data;
  v11->m_nType = nType;
  v11->m_nStringKey = v12;
  v11->m_bIsPrivate = bIsPrivate;
  if ( !v13 )
    g_HighestEvent.m_Data = nEventIndex.m_Data;
  return v11;
}


// EventListFromString  (line 75, @0x0000000003163970, libserver.so)  // inlines: operator[]
// calls: CStringRegistry::GetStringID
// callers: EventList_IndexForName, EventList_RegisterSharedEvent, EventList_RegisterPrivateEvent
// globals: g_EventStrings
EventList_t *__fastcall EventListFromString(const char *pString)
{
  int StringID; // eax

  StringID = CStringRegistry::GetStringID(&g_EventStrings, pString);
  if ( StringID < 0 )
    return 0;
  else
    return &g_EventList.m_Memory.m_pMemory[StringID];
}


// EventListFromEvent  (line 86, @0x0000000003163920, libserver.so)  // inlines: operator[]
// callers: EventList_GetEventType, EventList_NameForIndex, EventList_RegisterSharedEvent
// globals: g_EventList
EventList_t *__fastcall EventListFromEvent(AnimEventIndex_t nEventIndex)
{
  EventList_t *v1; // rdx
  EventList_t *result; // rax

  if ( g_EventList.m_Size > 0 )
  {
    if ( nEventIndex.m_Data == g_EventList.m_Memory.m_pMemory->m_nEventIndex.m_Data )
      return g_EventList.m_Memory.m_pMemory;
    v1 = g_EventList.m_Memory.m_pMemory + 1;
    while ( v1 != &g_EventList.m_Memory.m_pMemory[(g_EventList.m_Size - 1) + 1] )
    {
      result = v1++;
      if ( nEventIndex.m_Data == v1[-1].m_nEventIndex.m_Data )
        return result;
    }
  }
  return 0;
}


// EventList_GetEventType  (line 100, @0x0000000003163a00, libserver.so)
// calls: EventListFromEvent
// callers: SetEventIndexForSequence
int __fastcall EventList_GetEventType(AnimEventIndex_t nEventIndex)
{
  EventList_t *v1; // rax

  v1 = EventListFromEvent(nEventIndex);
  if ( v1 != 0 )
    return v1->m_nType;
  else
    return 0;
}


// EventList_RegisterSharedEvent  (line 112, @0x0000000003163b60, libserver.so)
// calls: EventListFromString, EventListFromEvent, EventList_AddEventEntry
// callers: EventList_RegisterSharedEvents
bool __fastcall EventList_RegisterSharedEvent(const char *pszEventName, AnimEventIndex_t nEventIndex, int nType)
{
  if ( EventListFromString(pszEventName) != 0 || EventListFromEvent(nEventIndex) != 0 )
    return 0;
  EventList_AddEventEntry(pszEventName, nEventIndex, 0, nType);
  return 1;
}


// EventList_RegisterPrivateEvent  (line 137, @0x0000000003163bc0, libserver.so)
// calls: EventListFromString, Warning, EventList_AddEventEntry
// callers: CDOTA_BaseNPC::PrecacheShared, CDOTA_BaseNPC_Pet::Precache, CDOTA_Unit_Hero_PhantomLancer::Precache, SetEventIndexForSequence
// strings: "***\nShared<->Private Event collision!\n***\n"
// globals: g_HighestEvent
AnimEventIndex_t __fastcall EventList_RegisterPrivateEvent(const char *pszEventName, int iType)
{
  EventList_t *v4; // rax

  v4 = EventListFromString(pszEventName);
  if ( v4 == 0 )
  {
    v4 = EventList_AddEventEntry(pszEventName, (g_HighestEvent.m_Data + 1), 1, iType);
  }
  else if ( v4->m_bIsPrivate == 0 )
  {
    Warning("***\nShared<->Private Event collision!\n***\n");
    return -1;
  }
  return v4->m_nEventIndex.m_Data;
}


// EventList_IndexForName  (line 163, @0x0000000003163a20, libserver.so)
// calls: EventListFromString
// callers: SetEventIndexForSequence
AnimEventIndex_t __fastcall EventList_IndexForName(const char *pszEventName)
{
  EventList_t *v1; // rax
  AnimEventIndex_t v2; // edx

  v1 = EventListFromString(pszEventName);
  v2.m_Data = -1;
  if ( v1 != 0 )
    return v1->m_nEventIndex.m_Data;
  return v2;
}


// EventList_NameForIndex  (line 179, @0x0000000003163a40, libserver.so)
// calls: EventListFromEvent, CStringRegistry::GetStringForKey
// callers: CVScriptGameSystem::InstallScriptBindings, CC_AnimEvents_Dump, CBaseAnimating::HandleAnimEvent, CBaseAnimatingController::DispatchAnimEvents, CBaseAnimatingOverlayController::DispatchAnimEvents, CGenericFlexCycler::HandleAnimEvent, CSource2Server::GetAnimationEventList
// globals: g_EventStrings
const char *__fastcall EventList_NameForIndex(AnimEventIndex_t nEventIndex)
{
  EventList_t *v1; // rax

  v1 = EventListFromEvent(nEventIndex);
  if ( v1 != 0 )
    return CStringRegistry::GetStringForKey(&g_EventStrings, v1->m_nStringKey);
  else
    return 0;
}


// EventList_HighestIndex  (line 189, @0x0000000003163a70, libserver.so)
// callers: CVScriptGameSystem::InstallScriptBindings, CC_AnimEvents_Dump, CSource2Server::GetAnimationEventList
// globals: g_HighestEvent
AnimEventIndex_t __cdecl EventList_HighestIndex()
{
  return g_HighestEvent;
}


