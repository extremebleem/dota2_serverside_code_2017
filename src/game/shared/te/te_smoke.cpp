// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_smoke.cpp:20
class TESmoke_GameEvent_t : public CNetMessagePB<426, CMsgTESmoke, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TESmoke_GameEvent_t(TESmoke_GameEvent_t &);
	TESmoke_GameEvent_t(const TESmoke_GameEvent_t &);
	TESmoke_GameEvent_t();
	virtual ~TESmoke_GameEvent_t();

	// sizeof = 40
};

// src/game/shared/te/te_smoke.cpp:41
class CTESmoke : public CBaseTempEntity {
public:

	CTESmoke(CTESmoke &);
	CTESmoke(const CTESmoke &);
	CTESmoke();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TESmoke_GameEvent_t &);
	virtual ~CTESmoke();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 112
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TESmoke_GameEvent_t::~TESmoke_GameEvent_t  (line 20, @0x0000000002f5cf70, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTESmoke::~CMsgTESmoke
void __fastcall TESmoke_GameEvent_t::~TESmoke_GameEvent_t(TESmoke_GameEvent_t *const this)
{
  *this = &off_47BBFB0;
  CMsgTESmoke::~CMsgTESmoke(this);
}


// TESmoke_GameEvent_t::~TESmoke_GameEvent_t  (line 20, @0x0000000002f5cf90, libserver.so)  // inlines: ~CNetMessagePB, ~TESmoke_GameEvent_t
// calls: CMsgTESmoke::~CMsgTESmoke, operator delete
void __fastcall TESmoke_GameEvent_t::~TESmoke_GameEvent_t(TESmoke_GameEvent_t *const this)
{
  *this = &off_47BBFB0;
  CMsgTESmoke::~CMsgTESmoke(this);
  operator delete(this);
}


// InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>  (line 31, @0x0000000002f5b200, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(
        PrecacheTESmoke_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PrecacheTESmoke_server::CTemplateArg>(PrecacheTESmoke_server::CTemplateArg &)::s_Manifest;
}


// CTESmoke::~CTESmoke  (line 41, @0x0000000002f60240, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TESmoke_GameEvent_t
// calls: CMsgTESmoke::~CMsgTESmoke, CUtlSlot::~CUtlSlot
void __fastcall CTESmoke::~CTESmoke(CTESmoke *const this)
{
  CMsgTESmoke *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BC130;
  *v2 = &off_47BBFB0;
  CMsgTESmoke::~CMsgTESmoke(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTESmoke::~CTESmoke  (line 41, @0x0000000002f60600, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTESmoke, ~TESmoke_GameEvent_t
// calls: CMsgTESmoke::~CMsgTESmoke, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTESmoke::~CTESmoke(CTESmoke *const this)
{
  CMsgTESmoke *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BC130;
  *v2 = &off_47BBFB0;
  CMsgTESmoke::~CMsgTESmoke(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTESmoke::Create  (line 48, @0x0000000002f61b90, libserver.so)  // inlines: FindGameEvent<TESmoke_GameEvent_t>, FindOrCreateGameEvent<TESmoke_GameEvent_t>, PostEvent<TESmoke_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent
void __fastcall CTESmoke::Create(CTESmoke *const this, IRecipientFilter *const filter, double a3, float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 40);
}


// CTESmoke::StaticInit  (line 60, @0x0000000002f5c520, libserver.so)
void __fastcall CTESmoke::StaticInit(CTESmoke *const this)
{
  ;
}


// TE_Smoke  (line 100, @0x0000000002f5bf20, libserver.so)  // inlines: Create, FindGameEvent<TESmoke_GameEvent_t>, FindOrCreateGameEvent<TESmoke_GameEvent_t>, PostEvent<TESmoke_GameEvent_t>, VectorToCMsgVector, mutable_origin, set_has_origin, set_has_scale, set_has_x, set_has_y, set_has_z, set_scale, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::Smoke
// globals: IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_Smoke(IRecipientFilter *const filter, double a2, __m128i delay, const Vector *pos, double scale)
{
  int v5; // r13d
  __int64 v8; // rax
  int v9; // edx
  vec_t y; // xmm0_4
  float z; // xmm0_4
  __int64 v12; // r13
  IGameEventSystem *v13; // rbx
  void (__fastcall *v14)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14
  CMsgVector *v15; // r14

  v5 = _mm_cvtsi128_si32(delay);
  v8 = qword_4D6FC80;
  dword_4D6FC78 |= 1u;
  if ( qword_4D6FC80 == 0 )
  {
    v15 = operator new(0x28u);
    CMsgVector::CMsgVector(v15);
    qword_4D6FC80 = v15;
    v8 = v15;
  }
  v9 = *(v8 + 16);
  *(v8 + 24) = pos->x;
  *(v8 + 16) = v9 | 1;
  y = pos->y;
  *(v8 + 16) = v9 | 3;
  *(v8 + 28) = y;
  z = pos->z;
  *(v8 + 16) = v9 | 7;
  *(v8 + 32) = z;
  dword_4D6FC78 |= 2u;
  LODWORD(flt_4D6FC88) = v5;
  v12 = IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent;
  v13 = g_pGameEventSystem;
  v14 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TESmoke_GameEvent_t>(bool)::s_hEvent,
    z,
    *delay.m128i_i64,
    scale);
  v14(v13, 0xFFFFFFFFLL, 0, filter, v12, &qword_4D6FC68, 40);
}


