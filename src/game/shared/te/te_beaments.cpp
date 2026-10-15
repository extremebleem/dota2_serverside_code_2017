// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_beaments.cpp:24
class TEBeamEnts_GameEvent_t : public CNetMessagePB<403, CMsgTEBeamEnts, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBeamEnts_GameEvent_t(TEBeamEnts_GameEvent_t &);
	TEBeamEnts_GameEvent_t(const TEBeamEnts_GameEvent_t &);
	TEBeamEnts_GameEvent_t();
	virtual ~TEBeamEnts_GameEvent_t();

	// sizeof = 40
};

// src/game/shared/te/te_beaments.cpp:30
class CTEBeamEnts : public CTEBaseBeam {
public:

	CTEBeamEnts(CTEBeamEnts &);
	CTEBeamEnts(const CTEBeamEnts &);
	CTEBeamEnts();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEBeamEnts_GameEvent_t &);
	virtual ~CTEBeamEnts();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 112
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBeamEnts_GameEvent_t::~TEBeamEnts_GameEvent_t  (line 24, @0x0000000002f50750, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBeamEnts::~CMsgTEBeamEnts
void __fastcall TEBeamEnts_GameEvent_t::~TEBeamEnts_GameEvent_t(TEBeamEnts_GameEvent_t *const this)
{
  *this = &off_47B8890;
  CMsgTEBeamEnts::~CMsgTEBeamEnts(this);
}


// TEBeamEnts_GameEvent_t::~TEBeamEnts_GameEvent_t  (line 24, @0x0000000002f50770, libserver.so)  // inlines: ~CNetMessagePB, ~TEBeamEnts_GameEvent_t
// calls: CMsgTEBeamEnts::~CMsgTEBeamEnts, operator delete
void __fastcall TEBeamEnts_GameEvent_t::~TEBeamEnts_GameEvent_t(TEBeamEnts_GameEvent_t *const this)
{
  *this = &off_47B8890;
  CMsgTEBeamEnts::~CMsgTEBeamEnts(this);
  operator delete(this);
}


// CTEBeamEnts::~CTEBeamEnts  (line 30, @0x0000000002f55750, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~TEBeamEnts_GameEvent_t
// calls: CMsgTEBeamEnts::~CMsgTEBeamEnts, CUtlSlot::~CUtlSlot
void __fastcall CTEBeamEnts::~CTEBeamEnts(CTEBeamEnts *const this)
{
  CMsgTEBeamEnts *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B8A10;
  *v2 = &off_47B8890;
  CMsgTEBeamEnts::~CMsgTEBeamEnts(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBeamEnts::~CTEBeamEnts  (line 30, @0x0000000002f55fc0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~CTEBeamEnts, ~TEBeamEnts_GameEvent_t
// calls: CMsgTEBeamEnts::~CMsgTEBeamEnts, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBeamEnts::~CTEBeamEnts(CTEBeamEnts *const this)
{
  CMsgTEBeamEnts *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B8A10;
  *v2 = &off_47B8890;
  CMsgTEBeamEnts::~CMsgTEBeamEnts(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBeamEnts::Create  (line 35, @0x0000000002f57780, libserver.so)  // inlines: FindGameEvent<TEBeamEnts_GameEvent_t>, FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>, PostEvent<TEBeamEnts_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBeamEnts::Create(CTEBeamEnts *const this, IRecipientFilter *const filter, double a3, float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 40);
}


// CTEBeamEnts::StaticInit  (line 43, @0x0000000002f4f840, libserver.so)
void __fastcall CTEBeamEnts::StaticInit(CTEBeamEnts *const this)
{
  ;
}


// TE_BeamEnts  (line 102, @0x0000000002f4c780, libserver.so)  // inlines: Color, Create, FindGameEvent<TEBeamEnts_GameEvent_t>, FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>, PostEvent<TEBeamEnts_GameEvent_t>, SetColor, mutable_base, set_amplitude, set_color, set_endentity, set_endwidth, set_fadelength, set_framerate, set_haloindex, set_has_amplitude, set_has_base, set_has_color, set_has_endentity, set_has_endwidth, set_has_fadelength, set_has_framerate, set_has_haloindex, set_has_life, set_has_modelindex, set_has_speed, set_has_startentity, set_has_startframe, set_has_width, set_life, set_modelindex, set_speed, set_startentity, set_startframe, set_width
// calls: operator new, CMsgTEBaseBeam::CMsgTEBaseBeam, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::BeamEnts
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_BeamEnts(
        IRecipientFilter *const filter,
        double delay,
        CEntityIndex nStartEntity,
        CEntityIndex nEndEntity,
        HMaterial modelindex,
        HMaterial haloindex,
        int startframe,
        float life,
        float width,
        float endWidth,
        float amplitude,
        int framerate,
        int fadeLength,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int speed)
{
  int v18; // eax
  int v22; // edx
  void *m_pData; // rsi
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  CMsgTEBaseBeam *v28; // r13
  __int64 v29; // rbx
  CMsgTEBaseBeam *v30; // rbx
  CMsgTEBaseBeam *v31; // rbx
  CMsgTEBaseBeam *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int16 v38; // bx
  __int64 v39; // rax
  int v40; // ebx
  IGameEventSystem *v41; // rbx
  __int64 v42; // r12
  void (__fastcall *v43)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgTEBaseBeam *v44; // rbx
  CMsgTEBaseBeam *v45; // rbx
  CMsgTEBaseBeam *v46; // rbx
  CMsgTEBaseBeam *v47; // rbx
  CMsgTEBaseBeam *v48; // rbx
  CMsgTEBaseBeam *v49; // r12
  CMsgTEBaseBeam *pMem; // [rsp+8h] [rbp-48h]

  v18 = 0;
  if ( nStartEntity.m_Data > 0 )
  {
    v18 = nStartEntity.m_Data & 0xFFF;
    BYTE1(v18) |= 0x10u;
  }
  dword_4D6ECC8 = v18;
  if ( nEndEntity.m_Data <= 0 )
  {
    v22 = 0;
  }
  else
  {
    v22 = nEndEntity.m_Data & 0xFFF;
    BYTE1(v22) |= 0x10u;
  }
  dword_4D6ECCC = v22;
  m_pData = modelindex.m_pBinding->m_pData;
  dword_4D6ECB8 |= 6u;
  v24 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, m_pData, delay);
  dword_4D6ECB8 |= 1u;
  v25 = v24;
  v26 = qword_4D6ECC0;
  if ( qword_4D6ECC0 == 0 )
  {
    pMem = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(pMem);
    v26 = pMem;
    qword_4D6ECC0 = pMem;
  }
  *(v26 + 16) |= 1u;
  *(v26 + 24) = v25;
  v27 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, haloindex.m_pBinding->m_pData);
  v28 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  v29 = v27;
  if ( qword_4D6ECC0 == 0 )
  {
    v28 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v28);
    qword_4D6ECC0 = v28;
  }
  *(v28 + 4) |= 2u;
  *(v28 + 4) = v29;
  v30 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  if ( qword_4D6ECC0 == 0 )
  {
    v30 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v30);
    qword_4D6ECC0 = v30;
  }
  *(v30 + 4) |= 4u;
  *(v30 + 10) = startframe;
  v31 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  if ( qword_4D6ECC0 == 0 )
  {
    v31 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v31);
    qword_4D6ECC0 = v31;
  }
  *(v31 + 4) |= 8u;
  *(v31 + 11) = framerate;
  v32 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  if ( qword_4D6ECC0 == 0 )
  {
    v32 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v32);
    qword_4D6ECC0 = v32;
  }
  *(v32 + 4) |= 0x10u;
  *(v32 + 12) = life;
  v33 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  if ( qword_4D6ECC0 == 0 )
  {
    v44 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v44);
    qword_4D6ECC0 = v44;
    v33 = v44;
  }
  *(v33 + 16) |= 0x20u;
  *(v33 + 52) = width;
  v34 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  if ( qword_4D6ECC0 == 0 )
  {
    v45 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v45);
    qword_4D6ECC0 = v45;
    v34 = v45;
  }
  *(v34 + 16) |= 0x40u;
  *(v34 + 56) = endWidth;
  v35 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  if ( qword_4D6ECC0 == 0 )
  {
    v46 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v46);
    qword_4D6ECC0 = v46;
    v35 = v46;
  }
  *(v35 + 16) |= 0x80u;
  *(v35 + 60) = fadeLength;
  v36 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  if ( qword_4D6ECC0 == 0 )
  {
    v47 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v47);
    qword_4D6ECC0 = v47;
    v36 = v47;
  }
  *(v36 + 16) |= 0x100u;
  *(v36 + 64) = amplitude;
  v37 = qword_4D6ECC0;
  dword_4D6ECB8 |= 1u;
  if ( qword_4D6ECC0 == 0 )
  {
    v48 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v48);
    qword_4D6ECC0 = v48;
    v37 = v48;
  }
  *(v37 + 16) |= 0x400u;
  LOBYTE(v38) = r;
  *(v37 + 72) = speed;
  dword_4D6ECB8 |= 1u;
  HIBYTE(v38) = g;
  v39 = qword_4D6ECC0;
  v40 = (a << 24) | (b << 16) | v38;
  if ( qword_4D6ECC0 == 0 )
  {
    v49 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v49);
    qword_4D6ECC0 = v49;
    v39 = v49;
  }
  *(v39 + 68) = v40;
  v41 = g_pGameEventSystem;
  *(v39 + 16) |= 0x200u;
  v42 = IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent;
  v43 = *(*v41 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBeamEnts_GameEvent_t>(bool)::s_hEvent);
  v43(v41, 0xFFFFFFFFLL, 0, filter, v42, &qword_4D6ECA8, 40);
}


