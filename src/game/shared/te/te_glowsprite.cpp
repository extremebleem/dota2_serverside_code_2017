// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_glowsprite.cpp:26
class TEGlowSprite_GameEvent_t : public CNetMessagePB<415, CMsgTEGlowSprite, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEGlowSprite_GameEvent_t(TEGlowSprite_GameEvent_t &);
	TEGlowSprite_GameEvent_t(const TEGlowSprite_GameEvent_t &);
	TEGlowSprite_GameEvent_t();
	virtual ~TEGlowSprite_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_glowsprite.cpp:47
class CTEGlowSprite : public CBaseTempEntity {
public:

	CTEGlowSprite(CTEGlowSprite &);
	CTEGlowSprite(const CTEGlowSprite &);
	CTEGlowSprite();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEGlowSprite_GameEvent_t &);
	virtual ~CTEGlowSprite();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEGlowSprite_GameEvent_t::~TEGlowSprite_GameEvent_t  (line 26, @0x0000000002f5cb10, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEGlowSprite::~CMsgTEGlowSprite
void __fastcall TEGlowSprite_GameEvent_t::~TEGlowSprite_GameEvent_t(TEGlowSprite_GameEvent_t *const this)
{
  *this = &off_47BAFD0;
  CMsgTEGlowSprite::~CMsgTEGlowSprite(this);
}


// TEGlowSprite_GameEvent_t::~TEGlowSprite_GameEvent_t  (line 26, @0x0000000002f5cb30, libserver.so)  // inlines: ~CNetMessagePB, ~TEGlowSprite_GameEvent_t
// calls: CMsgTEGlowSprite::~CMsgTEGlowSprite, operator delete
void __fastcall TEGlowSprite_GameEvent_t::~TEGlowSprite_GameEvent_t(TEGlowSprite_GameEvent_t *const this)
{
  *this = &off_47BAFD0;
  CMsgTEGlowSprite::~CMsgTEGlowSprite(this);
  operator delete(this);
}


// InitManifestDesc<CTEGlowSprite_server::CTemplateArg>  (line 37, @0x0000000002f5b140, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(
        CTEGlowSprite_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<CTEGlowSprite_server::CTemplateArg>(CTEGlowSprite_server::CTemplateArg &)::s_Manifest;
}


// CTEGlowSprite::~CTEGlowSprite  (line 47, @0x0000000002f60470, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEGlowSprite_GameEvent_t
// calls: CMsgTEGlowSprite::~CMsgTEGlowSprite, CUtlSlot::~CUtlSlot
void __fastcall CTEGlowSprite::~CTEGlowSprite(CTEGlowSprite *const this)
{
  CMsgTEGlowSprite *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BB150;
  *v2 = &off_47BAFD0;
  CMsgTEGlowSprite::~CMsgTEGlowSprite(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEGlowSprite::~CTEGlowSprite  (line 47, @0x0000000002f60830, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEGlowSprite, ~TEGlowSprite_GameEvent_t
// calls: CMsgTEGlowSprite::~CMsgTEGlowSprite, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEGlowSprite::~CTEGlowSprite(CTEGlowSprite *const this)
{
  CMsgTEGlowSprite *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BB150;
  *v2 = &off_47BAFD0;
  CMsgTEGlowSprite::~CMsgTEGlowSprite(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEGlowSprite::Create  (line 54, @0x0000000002f616b0, libserver.so)  // inlines: FindGameEvent<TEGlowSprite_GameEvent_t>, FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>, PostEvent<TEGlowSprite_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEGlowSprite::Create(
        CTEGlowSprite *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 48);
}


// CTEGlowSprite::StaticInit  (line 66, @0x0000000002f5c480, libserver.so)
void __fastcall CTEGlowSprite::StaticInit(CTEGlowSprite *const this)
{
  ;
}


// TE_GlowSprite  (line 107, @0x0000000002f5b5b0, libserver.so)  // inlines: Create, FindGameEvent<TEGlowSprite_GameEvent_t>, FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>, PostEvent<TEGlowSprite_GameEvent_t>, VectorToCMsgVector, mutable_origin, set_brightness, set_has_brightness, set_has_life, set_has_origin, set_has_x, set_has_y, set_has_z, set_life, set_scale, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::GlowSprite
// globals: IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_GlowSprite(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        __m128i life,
        float size,
        int brightness)
{
  int v6; // r15d
  CMsgVector *v10; // r14
  int v11; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 v14; // r13
  IGameEventSystem *v15; // rbx
  void (__fastcall *v16)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14

  v6 = _mm_cvtsi128_si32(life);
  v10 = qword_4D70060;
  dword_4D70058 |= 1u;
  if ( qword_4D70060 == 0 )
  {
    v10 = operator new(0x28u);
    CMsgVector::CMsgVector(v10);
    qword_4D70060 = v10;
  }
  v11 = *(v10 + 4);
  *(v10 + 6) = LODWORD(pos->x);
  *(v10 + 4) = v11 | 1;
  y = pos->y;
  *(v10 + 4) = v11 | 3;
  *(v10 + 7) = y;
  z = pos->z;
  *(v10 + 4) = v11 | 7;
  *(v10 + 8) = z;
  dword_4D7006C = v6;
  dword_4D70068 = LODWORD(size);
  dword_4D70070 = brightness;
  v14 = IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent;
  dword_4D70058 |= 0xEu;
  v15 = g_pGameEventSystem;
  v16 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEGlowSprite_GameEvent_t>(bool)::s_hEvent);
  v16(v15, 0xFFFFFFFFLL, 0, filter, v14, &qword_4D70048, 48);
}


