// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_fizz.cpp:24
class TEFizz_GameEvent_t : public CNetMessagePB<413, CMsgTEFizz, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEFizz_GameEvent_t(TEFizz_GameEvent_t &);
	TEFizz_GameEvent_t(const TEFizz_GameEvent_t &);
	TEFizz_GameEvent_t();
	virtual ~TEFizz_GameEvent_t();

	// sizeof = 40
};

// src/game/shared/te/te_fizz.cpp:45
class CTEFizz : public CBaseTempEntity {
public:

	CTEFizz(CTEFizz &);
	CTEFizz(const CTEFizz &);
	CTEFizz();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEFizz_GameEvent_t &);
	virtual ~CTEFizz();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 112
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEFizz_GameEvent_t::~TEFizz_GameEvent_t  (line 24, @0x0000000002f50ed0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEFizz::~CMsgTEFizz
void __fastcall TEFizz_GameEvent_t::~TEFizz_GameEvent_t(TEFizz_GameEvent_t *const this)
{
  *this = &off_47BA390;
  CMsgTEFizz::~CMsgTEFizz(this);
}


// TEFizz_GameEvent_t::~TEFizz_GameEvent_t  (line 24, @0x0000000002f50ef0, libserver.so)  // inlines: ~CNetMessagePB, ~TEFizz_GameEvent_t
// calls: CMsgTEFizz::~CMsgTEFizz, operator delete
void __fastcall TEFizz_GameEvent_t::~TEFizz_GameEvent_t(TEFizz_GameEvent_t *const this)
{
  *this = &off_47BA390;
  CMsgTEFizz::~CMsgTEFizz(this);
  operator delete(this);
}


// InitManifestDesc<CTEFizz_server::CTemplateArg>  (line 35, @0x0000000002f4bcb0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<CTEFizz_server::CTemplateArg>(
        CTEFizz_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<CTEFizz_server::CTemplateArg>(CTEFizz_server::CTemplateArg &)::s_Manifest;
}


// CTEFizz::~CTEFizz  (line 45, @0x0000000002f55840, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEFizz_GameEvent_t
// calls: CMsgTEFizz::~CMsgTEFizz, CUtlSlot::~CUtlSlot
void __fastcall CTEFizz::~CTEFizz(CTEFizz *const this)
{
  CMsgTEFizz *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BA510;
  *v2 = &off_47BA390;
  CMsgTEFizz::~CMsgTEFizz(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEFizz::~CTEFizz  (line 45, @0x0000000002f55cf0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEFizz, ~TEFizz_GameEvent_t
// calls: CMsgTEFizz::~CMsgTEFizz, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEFizz::~CTEFizz(CTEFizz *const this)
{
  CMsgTEFizz *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BA510;
  *v2 = &off_47BA390;
  CMsgTEFizz::~CMsgTEFizz(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEFizz::Create  (line 52, @0x0000000002f58690, libserver.so)  // inlines: FindGameEvent<TEFizz_GameEvent_t>, FindOrCreateGameEvent<TEFizz_GameEvent_t>, PostEvent<TEFizz_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEFizz::Create(CTEFizz *const this, IRecipientFilter *const filter, double a3, float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 40);
}


// CTEFizz::StaticInit  (line 64, @0x0000000002f4f910, libserver.so)
void __fastcall CTEFizz::StaticInit(CTEFizz *const this)
{
  ;
}


// TE_Fizz  (line 95, @0x0000000002f4f440, libserver.so)  // inlines: Create, FindGameEvent<TEFizz_GameEvent_t>, FindOrCreateGameEvent<TEFizz_GameEvent_t>, PostEvent<TEFizz_GameEvent_t>, entindex, set_current, set_density, set_entity, set_has_current, set_has_density
// calls: CEntityInstance::GetEntityIndex
// callers: CTempEntsSystem::Fizz
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_Fizz(
        IRecipientFilter *const filter,
        float delay,
        const CBaseEntity *entity,
        int density,
        int current)
{
  CEntityIndex v8; // eax
  IGameEventSystem *v9; // rbx
  __int64 v10; // r12
  void (__fastcall *v11)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14

  v8.m_Data = CEntityInstance::GetEntityIndex(entity).m_Data;
  dword_4D6E5A0 = density;
  v9 = g_pGameEventSystem;
  dword_4D6E5A8 = current;
  dword_4D6E5A4 = v8.m_Data;
  v10 = IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent;
  dword_4D6E598 |= 7u;
  v11 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEFizz_GameEvent_t>(bool)::s_hEvent);
  v11(v9, 0xFFFFFFFFLL, 0, filter, v10, &qword_4D6E588, 40);
}


