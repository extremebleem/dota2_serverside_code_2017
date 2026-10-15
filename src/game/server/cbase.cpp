
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CServerEventQueue::CServerEventQueue  (line 94, @0x0000000002194680, libserver.so)
void __fastcall CServerEventQueue::CServerEventQueue(CServerEventQueue *const this)
{
  ;
}


// CServerEventQueue::~CServerEventQueue  (line 98, @0x00000000021876e0, libserver.so)
void __fastcall CServerEventQueue::~CServerEventQueue(CServerEventQueue *const this)
{
  ;
}


// CServerEventQueue::Init  (line 102, @0x0000000002194690, libserver.so)  // inlines: Clear
// calls: CEntitySystem::ClearEntityIOEvents
// callers: CSource1GameConfiguration::InitGameSession
void __fastcall CServerEventQueue::Init(CServerEventQueue *const this)
{
  if ( g_pEntitySystem != 0 )
    CEntitySystem::ClearEntityIOEvents(g_pEntitySystem);
}


// CServerEventQueue::Clear  (line 107, @0x00000000021946c0, libserver.so)
// calls: CEntitySystem::ClearEntityIOEvents
void __fastcall CServerEventQueue::Clear(CServerEventQueue *const this)
{
  if ( g_pEntitySystem != 0 )
    CEntitySystem::ClearEntityIOEvents(g_pEntitySystem);
}


// CServerEventQueue::AddEvent  (line 118, @0x00000000021946f0, libserver.so)
// calls: CEntitySystem::AddEntityIOEvent
// callers: DoEntFire, CEntFireAutoCompletionFunctor::CommandCallback
// local variable allocation has failed, the output may be wrong!
void __fastcall CServerEventQueue::AddEvent(
        CServerEventQueue *const this,
        const char *target,
        const char *targetInput,
        variant_t Value,
        float fireDelay,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CEntitySystem::AddEntityIOEvent(
    g_pEntitySystem,
    EntityIOTargetType_t::ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME,
    target,
    targetInput,
    *&Value.m_type,
    pActivator,
    Value.m_pszString,
    fireDelay,
    pCaller);
}


// CServerEventQueue::AddEvent  (line 124, @0x0000000002194720, libserver.so)
// calls: CEntitySystem::AddEntityIOEvent
// callers: DoEntFireByInstanceHandle, CAI_ExpresserWithFollowup::SpeakDispatchFollowup, CAI_ExpresserWithFollowup::SpeakDispatchResponse, CSoundEventEntity::Spawn
// local variable allocation has failed, the output may be wrong!
void __fastcall CServerEventQueue::AddEvent(
        CServerEventQueue *const this,
        CBaseEntity *target,
        const char *targetInput,
        variant_t Value,
        float fireDelay,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CEntitySystem::AddEntityIOEvent(
    g_pEntitySystem,
    target,
    targetInput,
    *&Value.m_type,
    pActivator,
    Value.m_pszString,
    fireDelay,
    pCaller);
}


// CServerEventQueue::AddEvent  (line 130, @0x0000000002194740, libserver.so)
// calls: CEntitySystem::AddEntityIOEvent
// callers: CBaseCombatCharacter::Event_Killed, CLogicBranch::UpdateOnRemove, CLogicBranch::UpdateValue
void __fastcall CServerEventQueue::AddEvent(
        CServerEventQueue *const this,
        CBaseEntity *target,
        const char *targetInput,
        float fireDelay,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        int outputID)
{
  CEntitySystem::AddEntityIOEvent(g_pEntitySystem, target, targetInput, pActivator, pCaller, fireDelay, outputID);
}


