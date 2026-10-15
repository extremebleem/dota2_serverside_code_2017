// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_largefunnel.cpp:19
class TELargeFunnel_GameEvent_t : public CNetMessagePB<421, CMsgTELargeFunnel, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TELargeFunnel_GameEvent_t(TELargeFunnel_GameEvent_t &);
	TELargeFunnel_GameEvent_t(const TELargeFunnel_GameEvent_t &);
	TELargeFunnel_GameEvent_t();
	virtual ~TELargeFunnel_GameEvent_t();

	// sizeof = 40
};

// src/game/shared/te/te_largefunnel.cpp:39
class CTELargeFunnel : public CBaseTempEntity {
public:

	CTELargeFunnel(CTELargeFunnel &);
	CTELargeFunnel(const CTELargeFunnel &);
	CTELargeFunnel();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TELargeFunnel_GameEvent_t &);

private:

	void CreateFunnel(const TELargeFunnel_GameEvent_t &);
	virtual ~CTELargeFunnel();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 112
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TELargeFunnel_GameEvent_t::~TELargeFunnel_GameEvent_t  (line 19, @0x0000000002f5cc50, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTELargeFunnel::~CMsgTELargeFunnel
void __fastcall TELargeFunnel_GameEvent_t::~TELargeFunnel_GameEvent_t(TELargeFunnel_GameEvent_t *const this)
{
  *this = &off_47BB470;
  CMsgTELargeFunnel::~CMsgTELargeFunnel(this);
}


// TELargeFunnel_GameEvent_t::~TELargeFunnel_GameEvent_t  (line 19, @0x0000000002f5cc70, libserver.so)  // inlines: ~CNetMessagePB, ~TELargeFunnel_GameEvent_t
// calls: CMsgTELargeFunnel::~CMsgTELargeFunnel, operator delete
void __fastcall TELargeFunnel_GameEvent_t::~TELargeFunnel_GameEvent_t(TELargeFunnel_GameEvent_t *const this)
{
  *this = &off_47BB470;
  CMsgTELargeFunnel::~CMsgTELargeFunnel(this);
  operator delete(this);
}


// InitManifestDesc<CTELargeFunnel_server::CTemplateArg>  (line 30, @0x0000000002f5b190, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(
        CTELargeFunnel_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<CTELargeFunnel_server::CTemplateArg>(CTELargeFunnel_server::CTemplateArg &)::s_Manifest;
}


// CTELargeFunnel::~CTELargeFunnel  (line 39, @0x0000000002f603d0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TELargeFunnel_GameEvent_t
// calls: CMsgTELargeFunnel::~CMsgTELargeFunnel, CUtlSlot::~CUtlSlot
void __fastcall CTELargeFunnel::~CTELargeFunnel(CTELargeFunnel *const this)
{
  CMsgTELargeFunnel *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BB5F0;
  *v2 = &off_47BB470;
  CMsgTELargeFunnel::~CMsgTELargeFunnel(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTELargeFunnel::~CTELargeFunnel  (line 39, @0x0000000002f60790, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTELargeFunnel, ~TELargeFunnel_GameEvent_t
// calls: CMsgTELargeFunnel::~CMsgTELargeFunnel, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTELargeFunnel::~CTELargeFunnel(CTELargeFunnel *const this)
{
  CMsgTELargeFunnel *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BB5F0;
  *v2 = &off_47BB470;
  CMsgTELargeFunnel::~CMsgTELargeFunnel(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTELargeFunnel::Create  (line 44, @0x0000000002f61850, libserver.so)  // inlines: FindGameEvent<TELargeFunnel_GameEvent_t>, FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>, PostEvent<TELargeFunnel_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent
void __fastcall CTELargeFunnel::Create(
        CTELargeFunnel *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 40);
}


// CTELargeFunnel::StaticInit  (line 56, @0x0000000002f5c4c0, libserver.so)
void __fastcall CTELargeFunnel::StaticInit(CTELargeFunnel *const this)
{
  ;
}


// CTELargeFunnel::CreateFunnel  (line 83, @0x0000000002f5b1e0, libserver.so)
void __fastcall CTELargeFunnel::CreateFunnel(CTELargeFunnel *const this, const TELargeFunnel_GameEvent_t *const msg)
{
  ;
}


// TE_LargeFunnel  (line 96, @0x0000000002f5b760, libserver.so)  // inlines: Create, FindGameEvent<TELargeFunnel_GameEvent_t>, FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>, PostEvent<TELargeFunnel_GameEvent_t>, VectorToCMsgVector, mutable_origin, set_has_origin, set_has_reversed, set_has_x, set_has_y, set_has_z, set_reversed, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::LargeFunnel
// globals: IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_LargeFunnel(IRecipientFilter *const filter, float delay, const Vector *pos, int reversed)
{
  __int64 v7; // rax
  int v8; // esi
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 v11; // r13
  IGameEventSystem *v12; // rbx
  void (__fastcall *v13)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14
  CMsgVector *v14; // r14

  v7 = qword_4D6FF40;
  dword_4D6FF38 |= 1u;
  if ( qword_4D6FF40 == 0 )
  {
    v14 = operator new(0x28u);
    CMsgVector::CMsgVector(v14);
    qword_4D6FF40 = v14;
    v7 = v14;
  }
  v8 = *(v7 + 16);
  *(v7 + 24) = pos->x;
  *(v7 + 16) = v8 | 1;
  y = pos->y;
  *(v7 + 16) = v8 | 3;
  *(v7 + 28) = y;
  z = pos->z;
  *(v7 + 16) = v8 | 7;
  *(v7 + 32) = z;
  dword_4D6FF38 |= 2u;
  dword_4D6FF48 = reversed;
  v11 = IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent;
  v12 = g_pGameEventSystem;
  v13 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TELargeFunnel_GameEvent_t>(bool)::s_hEvent);
  v13(v12, 0xFFFFFFFFLL, 0, filter, v11, &qword_4D6FF28, 40);
}


