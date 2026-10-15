// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_playerdecal.cpp:118
class TEPlayerDecal_GameEvent_t : public CNetMessagePB<424, CMsgTEPlayerDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEPlayerDecal_GameEvent_t(TEPlayerDecal_GameEvent_t &);
	TEPlayerDecal_GameEvent_t(const TEPlayerDecal_GameEvent_t &);
	TEPlayerDecal_GameEvent_t();
	virtual ~TEPlayerDecal_GameEvent_t();

	// sizeof = 40
};

// src/game/shared/te/te_playerdecal.cpp:130
class CTEPlayerDecal : public CBaseTempEntity {
public:

	CTEPlayerDecal(CTEPlayerDecal &);
	CTEPlayerDecal(const CTEPlayerDecal &);
	CTEPlayerDecal();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEPlayerDecal_GameEvent_t &);
	virtual ~CTEPlayerDecal();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 112
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEPlayerDecal_GameEvent_t::~TEPlayerDecal_GameEvent_t  (line 118, @0x0000000002f5ce30, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEPlayerDecal::~CMsgTEPlayerDecal
void __fastcall TEPlayerDecal_GameEvent_t::~TEPlayerDecal_GameEvent_t(TEPlayerDecal_GameEvent_t *const this)
{
  *this = &off_47BBB30;
  CMsgTEPlayerDecal::~CMsgTEPlayerDecal(this);
}


// TEPlayerDecal_GameEvent_t::~TEPlayerDecal_GameEvent_t  (line 118, @0x0000000002f5ce50, libserver.so)  // inlines: ~CNetMessagePB, ~TEPlayerDecal_GameEvent_t
// calls: CMsgTEPlayerDecal::~CMsgTEPlayerDecal, operator delete
void __fastcall TEPlayerDecal_GameEvent_t::~TEPlayerDecal_GameEvent_t(TEPlayerDecal_GameEvent_t *const this)
{
  *this = &off_47BBB30;
  CMsgTEPlayerDecal::~CMsgTEPlayerDecal(this);
  operator delete(this);
}


// CTEPlayerDecal::~CTEPlayerDecal  (line 130, @0x0000000002f602e0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEPlayerDecal_GameEvent_t
// calls: CMsgTEPlayerDecal::~CMsgTEPlayerDecal, CUtlSlot::~CUtlSlot
void __fastcall CTEPlayerDecal::~CTEPlayerDecal(CTEPlayerDecal *const this)
{
  CMsgTEPlayerDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BBCB0;
  *v2 = &off_47BBB30;
  CMsgTEPlayerDecal::~CMsgTEPlayerDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEPlayerDecal::~CTEPlayerDecal  (line 130, @0x0000000002f606a0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEPlayerDecal, ~TEPlayerDecal_GameEvent_t
// calls: CMsgTEPlayerDecal::~CMsgTEPlayerDecal, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEPlayerDecal::~CTEPlayerDecal(CTEPlayerDecal *const this)
{
  CMsgTEPlayerDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BBCB0;
  *v2 = &off_47BBB30;
  CMsgTEPlayerDecal::~CMsgTEPlayerDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEPlayerDecal::Create  (line 137, @0x0000000002f5d730, libserver.so)  // inlines: FindGameEvent<TEPlayerDecal_GameEvent_t>, FindOrCreateGameEvent<TEPlayerDecal_GameEvent_t>, PostEvent<TEPlayerDecal_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEPlayerDecal_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEPlayerDecal::Create(
        CTEPlayerDecal *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TEPlayerDecal_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEPlayerDecal_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 40);
}


// CTEPlayerDecal::StaticInit  (line 145, @0x0000000002f5c500, libserver.so)
void __fastcall CTEPlayerDecal::StaticInit(CTEPlayerDecal *const this)
{
  ;
}


// TE_PlayerDecal  (line 190, @0x0000000002f5b1f0, libserver.so)
// callers: CTempEntsSystem::PlayerDecal
void __fastcall TE_PlayerDecal(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        CEntityIndex player,
        CEntityIndex entity)
{
  ;
}


