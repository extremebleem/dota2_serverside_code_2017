// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_beamring.cpp:22
class TEBeamRing_GameEvent_t : public CNetMessagePB<405, CMsgTEBeamRing, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBeamRing_GameEvent_t(TEBeamRing_GameEvent_t &);
	TEBeamRing_GameEvent_t(const TEBeamRing_GameEvent_t &);
	TEBeamRing_GameEvent_t();
	virtual ~TEBeamRing_GameEvent_t();

	// sizeof = 40
};

// src/game/shared/te/te_beamring.cpp:27
class CTEBeamRing : public CTEBaseBeam {
public:

	CTEBeamRing(CTEBeamRing &);
	CTEBeamRing(const CTEBeamRing &);
	CTEBeamRing();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEBeamRing_GameEvent_t &);
	virtual ~CTEBeamRing();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 112
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBeamRing_GameEvent_t::~TEBeamRing_GameEvent_t  (line 22, @0x0000000002f50890, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBeamRing::~CMsgTEBeamRing
void __fastcall TEBeamRing_GameEvent_t::~TEBeamRing_GameEvent_t(TEBeamRing_GameEvent_t *const this)
{
  *this = &off_47B8D10;
  CMsgTEBeamRing::~CMsgTEBeamRing(this);
}


// TEBeamRing_GameEvent_t::~TEBeamRing_GameEvent_t  (line 22, @0x0000000002f508b0, libserver.so)  // inlines: ~CNetMessagePB, ~TEBeamRing_GameEvent_t
// calls: CMsgTEBeamRing::~CMsgTEBeamRing, operator delete
void __fastcall TEBeamRing_GameEvent_t::~TEBeamRing_GameEvent_t(TEBeamRing_GameEvent_t *const this)
{
  *this = &off_47B8D10;
  CMsgTEBeamRing::~CMsgTEBeamRing(this);
  operator delete(this);
}


// CTEBeamRing::~CTEBeamRing  (line 27, @0x0000000002f556b0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~TEBeamRing_GameEvent_t
// calls: CMsgTEBeamRing::~CMsgTEBeamRing, CUtlSlot::~CUtlSlot
void __fastcall CTEBeamRing::~CTEBeamRing(CTEBeamRing *const this)
{
  CMsgTEBeamRing *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B8E90;
  *v2 = &off_47B8D10;
  CMsgTEBeamRing::~CMsgTEBeamRing(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBeamRing::~CTEBeamRing  (line 27, @0x0000000002f56060, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~CTEBeamRing, ~TEBeamRing_GameEvent_t
// calls: CMsgTEBeamRing::~CMsgTEBeamRing, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBeamRing::~CTEBeamRing(CTEBeamRing *const this)
{
  CMsgTEBeamRing *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B8E90;
  *v2 = &off_47B8D10;
  CMsgTEBeamRing::~CMsgTEBeamRing(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBeamRing::Create  (line 32, @0x0000000002f57aa0, libserver.so)  // inlines: FindGameEvent<TEBeamRing_GameEvent_t>, FindOrCreateGameEvent<TEBeamRing_GameEvent_t>, PostEvent<TEBeamRing_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBeamRing_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBeamRing::Create(CTEBeamRing *const this, IRecipientFilter *const filter, double a3, float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBeamRing_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBeamRing_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 40);
}


// CTEBeamRing::StaticInit  (line 40, @0x0000000002f4f860, libserver.so)
void __fastcall CTEBeamRing::StaticInit(CTEBeamRing *const this)
{
  ;
}


// TE_BeamRing  (line 100, @0x0000000002f4d230, libserver.so)  // inlines: Color, Create, FindGameEvent<TEBeamRing_GameEvent_t>, FindOrCreateGameEvent<TEBeamRing_GameEvent_t>, PostEvent<TEBeamRing_GameEvent_t>, SetColor, mutable_base, set_amplitude, set_color, set_endentity, set_endwidth, set_fadelength, set_flags, set_framerate, set_haloindex, set_has_amplitude, set_has_base, set_has_color, set_has_endentity, set_has_endwidth, set_has_fadelength, set_has_flags, set_has_framerate, set_has_haloindex, set_has_life, set_has_modelindex, set_has_speed, set_has_startentity, set_has_startframe, set_has_width, set_life, set_modelindex, set_speed, set_startentity, set_startframe, set_width
// calls: operator new, CMsgTEBaseBeam::CMsgTEBaseBeam, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::BeamRing
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBeamRing_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_BeamRing(
        IRecipientFilter *const filter,
        double delay,
        CEntityIndex nStartEntity,
        CEntityIndex nEndEntity,
        HMaterial modelindex,
        HMaterial haloindex,
        int startframe,
        float life,
        float width,
        float amplitude,
        int framerate,
        int spread,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int speed,
        int flags)
{
  int v18; // eax
  int v22; // edx
  void *m_pData; // rsi
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  CMsgTEBaseBeam *v28; // r13
  __int64 v29; // r12
  CMsgTEBaseBeam *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int16 v38; // bx
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rax
  IGameEventSystem *v42; // rbx
  __int64 v43; // r12
  void (__fastcall *v44)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgTEBaseBeam *v45; // rbx
  CMsgTEBaseBeam *v46; // rbx
  CMsgTEBaseBeam *v47; // rbx
  CMsgTEBaseBeam *v48; // rbx
  CMsgTEBaseBeam *v49; // rbx
  CMsgTEBaseBeam *v50; // rbx
  CMsgTEBaseBeam *v51; // rbx
  CMsgTEBaseBeam *v52; // r12
  CMsgTEBaseBeam *v53; // rbx
  CMsgTEBaseBeam *pMem; // [rsp+8h] [rbp-48h]

  v18 = 0;
  if ( nStartEntity.m_Data > 0 )
  {
    v18 = nStartEntity.m_Data & 0xFFF;
    BYTE1(v18) |= 0x10u;
  }
  dword_4D6EBC8 = v18;
  if ( nEndEntity.m_Data <= 0 )
  {
    v22 = 0;
  }
  else
  {
    v22 = nEndEntity.m_Data & 0xFFF;
    BYTE1(v22) |= 0x10u;
  }
  dword_4D6EBCC = v22;
  m_pData = modelindex.m_pBinding->m_pData;
  dword_4D6EBB8 |= 6u;
  v24 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, m_pData, delay);
  dword_4D6EBB8 |= 1u;
  v25 = v24;
  v26 = qword_4D6EBC0;
  if ( qword_4D6EBC0 == 0 )
  {
    pMem = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(pMem);
    v26 = pMem;
    qword_4D6EBC0 = pMem;
  }
  *(v26 + 16) |= 1u;
  *(v26 + 24) = v25;
  v27 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, haloindex.m_pBinding->m_pData);
  v28 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  v29 = v27;
  if ( qword_4D6EBC0 == 0 )
  {
    v28 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v28);
    qword_4D6EBC0 = v28;
  }
  *(v28 + 4) |= 2u;
  *(v28 + 4) = v29;
  v30 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v30 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v30);
    qword_4D6EBC0 = v30;
  }
  *(v30 + 4) |= 4u;
  *(v30 + 10) = startframe;
  v31 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v45 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v45);
    qword_4D6EBC0 = v45;
    v31 = v45;
  }
  *(v31 + 16) |= 8u;
  *(v31 + 44) = framerate;
  v32 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v46 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v46);
    qword_4D6EBC0 = v46;
    v32 = v46;
  }
  *(v32 + 16) |= 0x10u;
  *(v32 + 48) = life;
  v33 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v47 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v47);
    qword_4D6EBC0 = v47;
    v33 = v47;
  }
  *(v33 + 16) |= 0x20u;
  *(v33 + 52) = width;
  v34 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v48 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v48);
    qword_4D6EBC0 = v48;
    v34 = v48;
  }
  *(v34 + 16) |= 0x40u;
  *(v34 + 56) = width;
  v35 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v49 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v49);
    qword_4D6EBC0 = v49;
    v35 = v49;
  }
  *(v35 + 16) |= 0x80u;
  *(v35 + 60) = 0;
  v36 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v50 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v50);
    qword_4D6EBC0 = v50;
    v36 = v50;
  }
  *(v36 + 16) |= 0x100u;
  *(v36 + 64) = amplitude;
  v37 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v51 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v51);
    qword_4D6EBC0 = v51;
    v37 = v51;
  }
  *(v37 + 16) |= 0x400u;
  LOBYTE(v38) = r;
  *(v37 + 72) = speed;
  dword_4D6EBB8 |= 1u;
  HIBYTE(v38) = g;
  v39 = qword_4D6EBC0;
  v40 = (a << 24) | (b << 16) | v38;
  if ( qword_4D6EBC0 == 0 )
  {
    v52 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v52);
    qword_4D6EBC0 = v52;
    v39 = v52;
  }
  *(v39 + 16) |= 0x200u;
  *(v39 + 68) = v40;
  v41 = qword_4D6EBC0;
  dword_4D6EBB8 |= 1u;
  if ( qword_4D6EBC0 == 0 )
  {
    v53 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v53);
    qword_4D6EBC0 = v53;
    v41 = v53;
  }
  v42 = g_pGameEventSystem;
  *(v41 + 16) |= 0x800u;
  v43 = IGameEventSystem::FindOrCreateGameEvent<TEBeamRing_GameEvent_t>(bool)::s_hEvent;
  *(v41 + 76) = flags;
  v44 = *(*v42 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v43);
  v44(v42, 0xFFFFFFFFLL, 0, filter, v43, &qword_4D6EBA8, 40);
}


