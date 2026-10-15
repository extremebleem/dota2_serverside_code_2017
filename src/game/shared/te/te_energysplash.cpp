// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_energysplash.cpp:20
class TEEnergySplash_GameEvent_t : public CNetMessagePB<412, CMsgTEEnergySplash, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEEnergySplash_GameEvent_t(TEEnergySplash_GameEvent_t &);
	TEEnergySplash_GameEvent_t(const TEEnergySplash_GameEvent_t &);
	TEEnergySplash_GameEvent_t();
	virtual ~TEEnergySplash_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_energysplash.cpp:43
class CTEEnergySplash : public CBaseTempEntity {
public:

	CTEEnergySplash(CTEEnergySplash &);
	CTEEnergySplash(const CTEEnergySplash &);
	CTEEnergySplash();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEEnergySplash_GameEvent_t &);
	virtual ~CTEEnergySplash();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEEnergySplash_GameEvent_t::~TEEnergySplash_GameEvent_t  (line 20, @0x0000000002f50d90, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEEnergySplash::~CMsgTEEnergySplash
void __fastcall TEEnergySplash_GameEvent_t::~TEEnergySplash_GameEvent_t(TEEnergySplash_GameEvent_t *const this)
{
  *this = &off_47B9F10;
  CMsgTEEnergySplash::~CMsgTEEnergySplash(this);
}


// TEEnergySplash_GameEvent_t::~TEEnergySplash_GameEvent_t  (line 20, @0x0000000002f50db0, libserver.so)  // inlines: ~CNetMessagePB, ~TEEnergySplash_GameEvent_t
// calls: CMsgTEEnergySplash::~CMsgTEEnergySplash, operator delete
void __fastcall TEEnergySplash_GameEvent_t::~TEEnergySplash_GameEvent_t(TEEnergySplash_GameEvent_t *const this)
{
  *this = &off_47B9F10;
  CMsgTEEnergySplash::~CMsgTEEnergySplash(this);
  operator delete(this);
}


// InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>  (line 33, @0x0000000002f4bbf0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(
        PrecacheEffectEnergySplash_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PrecacheEffectEnergySplash_server::CTemplateArg>(PrecacheEffectEnergySplash_server::CTemplateArg &)::s_Manifest;
}


// CTEEnergySplash::~CTEEnergySplash  (line 43, @0x0000000002f558e0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEEnergySplash_GameEvent_t
// calls: CMsgTEEnergySplash::~CMsgTEEnergySplash, CUtlSlot::~CUtlSlot
void __fastcall CTEEnergySplash::~CTEEnergySplash(CTEEnergySplash *const this)
{
  CMsgTEEnergySplash *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BA090;
  *v2 = &off_47B9F10;
  CMsgTEEnergySplash::~CMsgTEEnergySplash(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEEnergySplash::~CTEEnergySplash  (line 43, @0x0000000002f55e30, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEEnergySplash, ~TEEnergySplash_GameEvent_t
// calls: CMsgTEEnergySplash::~CMsgTEEnergySplash, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEEnergySplash::~CTEEnergySplash(CTEEnergySplash *const this)
{
  CMsgTEEnergySplash *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BA090;
  *v2 = &off_47B9F10;
  CMsgTEEnergySplash::~CMsgTEEnergySplash(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEEnergySplash::Create  (line 49, @0x0000000002f58400, libserver.so)  // inlines: FindGameEvent<TEEnergySplash_GameEvent_t>, FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>, PostEvent<TEEnergySplash_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEEnergySplash::Create(
        CTEEnergySplash *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 48);
}


// CTEEnergySplash::StaticInit  (line 61, @0x0000000002f4f8f0, libserver.so)
void __fastcall CTEEnergySplash::StaticInit(CTEEnergySplash *const this)
{
  ;
}


// TE_EnergySplash  (line 103, @0x0000000002f4f000, libserver.so)  // inlines: Create, FindGameEvent<TEEnergySplash_GameEvent_t>, FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>, PostEvent<TEEnergySplash_GameEvent_t>, VectorToCMsgVector, mutable_dir, mutable_pos, set_explosive, set_has_dir, set_has_explosive, set_has_pos, set_has_x, set_has_y, set_has_z, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::EnergySplash
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_EnergySplash(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *dir,
        char bExplosive)
{
  __int64 v9; // rax
  int v10; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 v13; // rax
  int v14; // edx
  vec_t v15; // xmm0_4
  vec_t v16; // xmm0_4
  IGameEventSystem *v17; // rbx
  __int64 v18; // r13
  void (__fastcall *v19)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14
  CMsgVector *v20; // r15
  CMsgVector *v21; // r14

  v9 = qword_4D6E6E0;
  dword_4D6E6D8 |= 1u;
  if ( qword_4D6E6E0 == 0 )
  {
    v20 = operator new(0x28u);
    CMsgVector::CMsgVector(v20);
    qword_4D6E6E0 = v20;
    v9 = v20;
  }
  v10 = *(v9 + 16);
  *(v9 + 24) = pos->x;
  *(v9 + 16) = v10 | 1;
  y = pos->y;
  *(v9 + 16) = v10 | 3;
  *(v9 + 28) = y;
  z = pos->z;
  *(v9 + 16) = v10 | 7;
  *(v9 + 32) = z;
  v13 = qword_4D6E6E8;
  dword_4D6E6D8 |= 2u;
  if ( qword_4D6E6E8 == 0 )
  {
    v21 = operator new(0x28u);
    CMsgVector::CMsgVector(v21);
    qword_4D6E6E8 = v21;
    v13 = v21;
  }
  v14 = *(v13 + 16);
  *(v13 + 24) = dir->x;
  *(v13 + 16) = v14 | 1;
  v15 = dir->y;
  *(v13 + 16) = v14 | 3;
  *(v13 + 28) = v15;
  v16 = dir->z;
  *(v13 + 16) = v14 | 7;
  v17 = g_pGameEventSystem;
  *(v13 + 32) = v16;
  dword_4D6E6D8 |= 4u;
  byte_4D6E6F0 = bExplosive;
  v18 = IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent;
  v19 = *(*v17 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEEnergySplash_GameEvent_t>(bool)::s_hEvent);
  v19(v17, 0xFFFFFFFFLL, 0, filter, v18, &qword_4D6E6C8, 48);
}


