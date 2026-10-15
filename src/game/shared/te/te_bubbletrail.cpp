// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_bubbletrail.cpp:28
class TEBubbleTrail_GameEvent_t : public CNetMessagePB<409, CMsgTEBubbleTrail, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBubbleTrail_GameEvent_t(TEBubbleTrail_GameEvent_t &);
	TEBubbleTrail_GameEvent_t(const TEBubbleTrail_GameEvent_t &);
	TEBubbleTrail_GameEvent_t();
	virtual ~TEBubbleTrail_GameEvent_t();

	// sizeof = 56
};

// src/game/shared/te/te_bubbletrail.cpp:43
class CTEBubbleTrail : public CBaseTempEntity {
public:

	CTEBubbleTrail(CTEBubbleTrail &);
	CTEBubbleTrail(const CTEBubbleTrail &);
	CTEBubbleTrail();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEBubbleTrail_GameEvent_t &);
	virtual ~CTEBubbleTrail();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBubbleTrail_GameEvent_t::~TEBubbleTrail_GameEvent_t  (line 28, @0x0000000002f50bb0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBubbleTrail::~CMsgTEBubbleTrail
void __fastcall TEBubbleTrail_GameEvent_t::~TEBubbleTrail_GameEvent_t(TEBubbleTrail_GameEvent_t *const this)
{
  *this = &off_47B9850;
  CMsgTEBubbleTrail::~CMsgTEBubbleTrail(this);
}


// TEBubbleTrail_GameEvent_t::~TEBubbleTrail_GameEvent_t  (line 28, @0x0000000002f50bd0, libserver.so)  // inlines: ~CNetMessagePB, ~TEBubbleTrail_GameEvent_t
// calls: CMsgTEBubbleTrail::~CMsgTEBubbleTrail, operator delete
void __fastcall TEBubbleTrail_GameEvent_t::~TEBubbleTrail_GameEvent_t(TEBubbleTrail_GameEvent_t *const this)
{
  *this = &off_47B9850;
  CMsgTEBubbleTrail::~CMsgTEBubbleTrail(this);
  operator delete(this);
}


// InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>  (line 33, @0x0000000002f4bba0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(
        PrecacheEffectBubbleTrail_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PrecacheEffectBubbleTrail_server::CTemplateArg>(PrecacheEffectBubbleTrail_server::CTemplateArg &)::s_Manifest;
}


// CTEBubbleTrail::~CTEBubbleTrail  (line 43, @0x0000000002f559d0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEBubbleTrail_GameEvent_t
// calls: CMsgTEBubbleTrail::~CMsgTEBubbleTrail, CUtlSlot::~CUtlSlot
void __fastcall CTEBubbleTrail::~CTEBubbleTrail(CTEBubbleTrail *const this)
{
  CMsgTEBubbleTrail *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B99D0;
  *v2 = &off_47B9850;
  CMsgTEBubbleTrail::~CMsgTEBubbleTrail(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBubbleTrail::~CTEBubbleTrail  (line 43, @0x0000000002f55ca0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBubbleTrail, ~TEBubbleTrail_GameEvent_t
// calls: CMsgTEBubbleTrail::~CMsgTEBubbleTrail, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBubbleTrail::~CTEBubbleTrail(CTEBubbleTrail *const this)
{
  CMsgTEBubbleTrail *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B99D0;
  *v2 = &off_47B9850;
  CMsgTEBubbleTrail::~CMsgTEBubbleTrail(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBubbleTrail::Create  (line 50, @0x0000000002f580e0, libserver.so)  // inlines: FindGameEvent<TEBubbleTrail_GameEvent_t>, FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>, PostEvent<TEBubbleTrail_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBubbleTrail::Create(
        CTEBubbleTrail *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 56);
}


// CTEBubbleTrail::StaticInit  (line 62, @0x0000000002f4f8c0, libserver.so)
void __fastcall CTEBubbleTrail::StaticInit(CTEBubbleTrail *const this)
{
  ;
}


// TE_BubbleTrail  (line 105, @0x0000000002f4e1f0, libserver.so)  // inlines: Create, FindGameEvent<TEBubbleTrail_GameEvent_t>, FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>, PostEvent<TEBubbleTrail_GameEvent_t>, VectorToCMsgVector, mutable_maxs, mutable_mins, set_count, set_has_maxs, set_has_mins, set_has_speed, set_has_waterz, set_has_x, set_has_y, set_has_z, set_speed, set_waterz, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::BubbleTrail
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_BubbleTrail(
        IRecipientFilter *const filter,
        float delay,
        const Vector *mins,
        const Vector *maxs,
        float flWaterZ,
        int count,
        float speed)
{
  CMsgVector *v11; // r15
  int v12; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v15; // r12
  int v16; // eax
  int v17; // edx
  int v18; // eax
  vec_t v19; // xmm0_4
  int v20; // edx
  vec_t v21; // xmm0_4
  IGameEventSystem *v22; // rbx
  __int64 v23; // r12
  void (__fastcall *v24)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13

  v11 = qword_4D6E8A0;
  dword_4D6E898 |= 1u;
  if ( qword_4D6E8A0 == 0 )
  {
    v11 = operator new(0x28u);
    CMsgVector::CMsgVector(v11);
    qword_4D6E8A0 = v11;
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
  v15 = qword_4D6E8A8;
  dword_4D6E898 |= 2u;
  if ( qword_4D6E8A8 == 0 )
  {
    v15 = operator new(0x28u);
    CMsgVector::CMsgVector(v15);
    qword_4D6E8A8 = v15;
  }
  v16 = *(v15 + 4);
  *(v15 + 6) = LODWORD(maxs->x);
  *(v15 + 4) = v16 | 1;
  v17 = v16;
  v18 = v16 | 7;
  v19 = maxs->y;
  *(v15 + 4) = v17 | 3;
  v20 = 255;
  if ( count <= 255 )
    v20 = count;
  *(v15 + 7) = v19;
  v21 = maxs->z;
  *(v15 + 4) = v18;
  v22 = g_pGameEventSystem;
  *(v15 + 8) = v21;
  v23 = IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent;
  dword_4D6E8B8 = LODWORD(speed);
  dword_4D6E8B4 = v20;
  dword_4D6E8B0 = LODWORD(flWaterZ);
  dword_4D6E898 |= 0x1Cu;
  v24 = *(*v22 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBubbleTrail_GameEvent_t>(bool)::s_hEvent);
  v24(v22, 0xFFFFFFFFLL, 0, filter, v23, &qword_4D6E888, 56);
}


