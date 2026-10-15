// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_bubbles.cpp:24
class TEBubbles_GameEvent_t : public CNetMessagePB<408, CMsgTEBubbles, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBubbles_GameEvent_t(TEBubbles_GameEvent_t &);
	TEBubbles_GameEvent_t(const TEBubbles_GameEvent_t &);
	TEBubbles_GameEvent_t();
	virtual ~TEBubbles_GameEvent_t();

	// sizeof = 56
};

// src/game/shared/te/te_bubbles.cpp:39
class CTEBubbles : public CBaseTempEntity {
public:

	CTEBubbles(CTEBubbles &);
	CTEBubbles(const CTEBubbles &);
	CTEBubbles();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEBubbles_GameEvent_t &);
	virtual ~CTEBubbles();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBubbles_GameEvent_t::~TEBubbles_GameEvent_t  (line 24, @0x0000000002f50b10, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBubbles::~CMsgTEBubbles
void __fastcall TEBubbles_GameEvent_t::~TEBubbles_GameEvent_t(TEBubbles_GameEvent_t *const this)
{
  *this = &off_47B9610;
  CMsgTEBubbles::~CMsgTEBubbles(this);
}


// TEBubbles_GameEvent_t::~TEBubbles_GameEvent_t  (line 24, @0x0000000002f50b30, libserver.so)  // inlines: ~CNetMessagePB, ~TEBubbles_GameEvent_t
// calls: CMsgTEBubbles::~CMsgTEBubbles, operator delete
void __fastcall TEBubbles_GameEvent_t::~TEBubbles_GameEvent_t(TEBubbles_GameEvent_t *const this)
{
  *this = &off_47B9610;
  CMsgTEBubbles::~CMsgTEBubbles(this);
  operator delete(this);
}


// InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>  (line 29, @0x0000000002f4bb50, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(
        PrecacheEffectBubbles_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PrecacheEffectBubbles_server::CTemplateArg>(PrecacheEffectBubbles_server::CTemplateArg &)::s_Manifest;
}


// CTEBubbles::~CTEBubbles  (line 39, @0x0000000002f55a20, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEBubbles_GameEvent_t
// calls: CMsgTEBubbles::~CMsgTEBubbles, CUtlSlot::~CUtlSlot
void __fastcall CTEBubbles::~CTEBubbles(CTEBubbles *const this)
{
  CMsgTEBubbles *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9790;
  *v2 = &off_47B9610;
  CMsgTEBubbles::~CMsgTEBubbles(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBubbles::~CTEBubbles  (line 39, @0x0000000002f55e80, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBubbles, ~TEBubbles_GameEvent_t
// calls: CMsgTEBubbles::~CMsgTEBubbles, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBubbles::~CTEBubbles(CTEBubbles *const this)
{
  CMsgTEBubbles *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9790;
  *v2 = &off_47B9610;
  CMsgTEBubbles::~CMsgTEBubbles(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBubbles::Create  (line 46, @0x0000000002f57fb0, libserver.so)  // inlines: FindGameEvent<TEBubbles_GameEvent_t>, FindOrCreateGameEvent<TEBubbles_GameEvent_t>, PostEvent<TEBubbles_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBubbles::Create(CTEBubbles *const this, IRecipientFilter *const filter, double a3, float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 56);
}


// CTEBubbles::StaticInit  (line 58, @0x0000000002f4f8b0, libserver.so)
void __fastcall CTEBubbles::StaticInit(CTEBubbles *const this)
{
  ;
}


// TE_Bubbles  (line 101, @0x0000000002f4e010, libserver.so)  // inlines: Create, FindGameEvent<TEBubbles_GameEvent_t>, FindOrCreateGameEvent<TEBubbles_GameEvent_t>, PostEvent<TEBubbles_GameEvent_t>, VectorToCMsgVector, mutable_maxs, mutable_mins, set_count, set_has_height, set_has_maxs, set_has_mins, set_has_speed, set_has_x, set_has_y, set_has_z, set_height, set_speed, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::Bubbles
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_Bubbles(
        IRecipientFilter *const filter,
        float delay,
        const Vector *mins,
        const Vector *maxs,
        float height,
        int count,
        float speed)
{
  CMsgVector *v11; // r15
  int v12; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v15; // r12
  int v16; // eax
  vec_t v17; // xmm0_4
  vec_t v18; // xmm0_4
  IGameEventSystem *v19; // rbx
  __int64 v20; // r12
  void (__fastcall *v21)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13

  v11 = qword_4D6E960;
  dword_4D6E958 |= 1u;
  if ( qword_4D6E960 == 0 )
  {
    v11 = operator new(0x28u);
    CMsgVector::CMsgVector(v11);
    qword_4D6E960 = v11;
  }
  v12 = *(v11 + 4);
  *(v11 + 6) = LODWORD(mins->x);
  *(v11 + 4) = v12 | 1;
  y = mins->y;
  *(v11 + 4) = v12 | 3;
  *(v11 + 7) = y;
  z = mins->z;
  *(v11 + 4) = v12 | 7;
  *(v11 + 8) = z;
  v15 = qword_4D6E968;
  dword_4D6E958 |= 2u;
  if ( qword_4D6E968 == 0 )
  {
    v15 = operator new(0x28u);
    CMsgVector::CMsgVector(v15);
    qword_4D6E968 = v15;
  }
  v16 = *(v15 + 4);
  *(v15 + 6) = LODWORD(maxs->x);
  *(v15 + 4) = v16 | 1;
  v17 = maxs->y;
  *(v15 + 4) = v16 | 3;
  *(v15 + 7) = v17;
  v18 = maxs->z;
  *(v15 + 4) = v16 | 7;
  v19 = g_pGameEventSystem;
  *(v15 + 8) = v18;
  v20 = IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent;
  dword_4D6E978 = LODWORD(speed);
  dword_4D6E974 = count;
  dword_4D6E970 = LODWORD(height);
  dword_4D6E958 |= 0x1Cu;
  v21 = *(*v19 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBubbles_GameEvent_t>(bool)::s_hEvent);
  v21(v19, 0xFFFFFFFFLL, 0, filter, v20, &qword_4D6E948, 56);
}


