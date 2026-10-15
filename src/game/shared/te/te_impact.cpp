// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_impact.cpp:20
class TEImpact_GameEvent_t : public CNetMessagePB<416, CMsgTEImpact, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEImpact_GameEvent_t(TEImpact_GameEvent_t &);
	TEImpact_GameEvent_t(const TEImpact_GameEvent_t &);
	TEImpact_GameEvent_t();
	virtual ~TEImpact_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_impact.cpp:32
class CTEImpact : public CBaseTempEntity {
public:

	CTEImpact(CTEImpact &);
	CTEImpact(const CTEImpact &);
	CTEImpact();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEImpact_GameEvent_t &);
	virtual void PlayImpactSound(trace_t &);
	virtual void PerformCustomEffects(trace_t &, Vector &);
	virtual ~CTEImpact();

	// vtable[2] Create
	// vtable[3] StaticInit
	// vtable[5] PlayImpactSound
	// vtable[6] PerformCustomEffects
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEImpact_GameEvent_t::~TEImpact_GameEvent_t  (line 20, @0x0000000002f5cbb0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEImpact::~CMsgTEImpact
void __fastcall TEImpact_GameEvent_t::~TEImpact_GameEvent_t(TEImpact_GameEvent_t *const this)
{
  *this = &off_47BB210;
  CMsgTEImpact::~CMsgTEImpact(this);
}


// TEImpact_GameEvent_t::~TEImpact_GameEvent_t  (line 20, @0x0000000002f5cbd0, libserver.so)  // inlines: ~CNetMessagePB, ~TEImpact_GameEvent_t
// calls: CMsgTEImpact::~CMsgTEImpact, operator delete
void __fastcall TEImpact_GameEvent_t::~TEImpact_GameEvent_t(TEImpact_GameEvent_t *const this)
{
  *this = &off_47BB210;
  CMsgTEImpact::~CMsgTEImpact(this);
  operator delete(this);
}


// CTEImpact::~CTEImpact  (line 32, @0x0000000002f60420, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEImpact_GameEvent_t
// calls: CMsgTEImpact::~CMsgTEImpact, CUtlSlot::~CUtlSlot
void __fastcall CTEImpact::~CTEImpact(CTEImpact *const this)
{
  CMsgTEImpact *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BB390;
  *v2 = &off_47BB210;
  CMsgTEImpact::~CMsgTEImpact(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEImpact::~CTEImpact  (line 32, @0x0000000002f606f0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEImpact, ~TEImpact_GameEvent_t
// calls: CMsgTEImpact::~CMsgTEImpact, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEImpact::~CTEImpact(CTEImpact *const this)
{
  CMsgTEImpact *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BB390;
  *v2 = &off_47BB210;
  CMsgTEImpact::~CMsgTEImpact(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEImpact::Create  (line 39, @0x0000000002f61780, libserver.so)  // inlines: FindGameEvent<TEImpact_GameEvent_t>, FindOrCreateGameEvent<TEImpact_GameEvent_t>, PostEvent<TEImpact_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEImpact::Create(CTEImpact *const this, IRecipientFilter *const filter, double a3, float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 48);
}


// CTEImpact::StaticInit  (line 47, @0x0000000002f5c490, libserver.so)
void __fastcall CTEImpact::StaticInit(CTEImpact *const this)
{
  ;
}


// CTEImpact::PlayImpactSound  (line 62, @0x0000000002f5c4a0, libserver.so)
void __fastcall CTEImpact::PlayImpactSound(CTEImpact *const this, trace_t *const tr)
{
  ;
}


// CTEImpact::PerformCustomEffects  (line 65, @0x0000000002f5c4b0, libserver.so)
void __fastcall CTEImpact::PerformCustomEffects(CTEImpact *const this, trace_t *const tr, Vector *const shotDir)
{
  ;
}


// TE_Impact  (line 84, @0x0000000002f5b6f0, libserver.so)  // inlines: Create, FindGameEvent<TEImpact_GameEvent_t>, FindOrCreateGameEvent<TEImpact_GameEvent_t>, PostEvent<TEImpact_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_Impact(IRecipientFilter *const filter, double a2, float delay)
{
  __int64 v4; // r12
  IGameEventSystem *v5; // rbx
  void (__fastcall *v6)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14

  v4 = IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent;
  v5 = g_pGameEventSystem;
  v6 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEImpact_GameEvent_t>(bool)::s_hEvent,
    a2,
    delay);
  v6(v5, 0xFFFFFFFFLL, 0, filter, v4, &qword_4D6FFC8, 48);
}


