// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_beampoints.cpp:22
class TEBeamPoints_GameEvent_t : public CNetMessagePB<404, CMsgTEBeamPoints, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBeamPoints_GameEvent_t(TEBeamPoints_GameEvent_t &);
	TEBeamPoints_GameEvent_t(const TEBeamPoints_GameEvent_t &);
	TEBeamPoints_GameEvent_t();
	virtual ~TEBeamPoints_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_beampoints.cpp:27
class CTEBeamPoints : public CTEBaseBeam {
public:

	CTEBeamPoints(CTEBeamPoints &);
	CTEBeamPoints(const CTEBeamPoints &);
	CTEBeamPoints();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEBeamPoints_GameEvent_t &);
	virtual ~CTEBeamPoints();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBeamPoints_GameEvent_t::~TEBeamPoints_GameEvent_t  (line 22, @0x0000000002f507f0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBeamPoints::~CMsgTEBeamPoints
void __fastcall TEBeamPoints_GameEvent_t::~TEBeamPoints_GameEvent_t(TEBeamPoints_GameEvent_t *const this)
{
  *this = &off_47B8AD0;
  CMsgTEBeamPoints::~CMsgTEBeamPoints(this);
}


// TEBeamPoints_GameEvent_t::~TEBeamPoints_GameEvent_t  (line 22, @0x0000000002f50810, libserver.so)  // inlines: ~CNetMessagePB, ~TEBeamPoints_GameEvent_t
// calls: CMsgTEBeamPoints::~CMsgTEBeamPoints, operator delete
void __fastcall TEBeamPoints_GameEvent_t::~TEBeamPoints_GameEvent_t(TEBeamPoints_GameEvent_t *const this)
{
  *this = &off_47B8AD0;
  CMsgTEBeamPoints::~CMsgTEBeamPoints(this);
  operator delete(this);
}


// CTEBeamPoints::~CTEBeamPoints  (line 27, @0x0000000002f55700, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~TEBeamPoints_GameEvent_t
// calls: CMsgTEBeamPoints::~CMsgTEBeamPoints, CUtlSlot::~CUtlSlot
void __fastcall CTEBeamPoints::~CTEBeamPoints(CTEBeamPoints *const this)
{
  CMsgTEBeamPoints *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B8C50;
  *v2 = &off_47B8AD0;
  CMsgTEBeamPoints::~CMsgTEBeamPoints(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBeamPoints::~CTEBeamPoints  (line 27, @0x0000000002f55f70, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~CTEBeamPoints, ~TEBeamPoints_GameEvent_t
// calls: CMsgTEBeamPoints::~CMsgTEBeamPoints, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBeamPoints::~CTEBeamPoints(CTEBeamPoints *const this)
{
  CMsgTEBeamPoints *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B8C50;
  *v2 = &off_47B8AD0;
  CMsgTEBeamPoints::~CMsgTEBeamPoints(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBeamPoints::Create  (line 32, @0x0000000002f57910, libserver.so)  // inlines: FindGameEvent<TEBeamPoints_GameEvent_t>, FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>, PostEvent<TEBeamPoints_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBeamPoints::Create(
        CTEBeamPoints *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 48);
}


// CTEBeamPoints::StaticInit  (line 40, @0x0000000002f4f850, libserver.so)
void __fastcall CTEBeamPoints::StaticInit(CTEBeamPoints *const this)
{
  ;
}


// TE_BeamPoints  (line 99, @0x0000000002f4cc50, libserver.so)  // inlines: Color, Create, FindGameEvent<TEBeamPoints_GameEvent_t>, FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>, PostEvent<TEBeamPoints_GameEvent_t>, SetColor, VectorToCMsgVector, mutable_base, mutable_end, mutable_start, set_amplitude, set_color, set_endwidth, set_fadelength, set_framerate, set_haloindex, set_has_amplitude, set_has_base, set_has_color, set_has_end, set_has_endwidth, set_has_fadelength, set_has_framerate, set_has_haloindex, set_has_life, set_has_modelindex, set_has_speed, set_has_start, set_has_startframe, set_has_width, set_has_x, set_has_y, set_has_z, set_life, set_modelindex, set_speed, set_startframe, set_width, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, CMsgTEBaseBeam::CMsgTEBaseBeam, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::BeamPoints
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_BeamPoints(
        IRecipientFilter *const filter,
        float delay,
        const Vector *start,
        const Vector *end,
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
  __int64 v23; // rax
  int v24; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v27; // r14
  int v28; // eax
  vec_t v29; // xmm0_4
  vec_t v30; // xmm0_4
  __int64 v31; // rax
  CMsgTEBaseBeam *v32; // r15
  __int64 v33; // r13
  __int64 v34; // rax
  CMsgTEBaseBeam *v35; // r13
  __int64 v36; // rbx
  CMsgTEBaseBeam *v37; // rbx
  CMsgTEBaseBeam *v38; // rbx
  CMsgTEBaseBeam *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int16 v45; // bx
  __int64 v46; // rax
  int v47; // ebx
  IGameEventSystem *v48; // rbx
  __int64 v49; // r12
  void (__fastcall *v50)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgTEBaseBeam *v51; // rbx
  CMsgTEBaseBeam *v52; // rbx
  CMsgTEBaseBeam *v53; // rbx
  CMsgTEBaseBeam *v54; // r12
  CMsgTEBaseBeam *v55; // rbx
  CMsgTEBaseBeam *v56; // rbx
  CMsgVector *pMem; // [rsp+10h] [rbp-50h]

  v23 = qword_4D6EC48;
  dword_4D6EC38 |= 2u;
  if ( qword_4D6EC48 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v23 = pMem;
    qword_4D6EC48 = pMem;
  }
  if ( start == 0 )
    start = &vec3_origin;
  v24 = *(v23 + 16);
  *(v23 + 24) = start->x;
  *(v23 + 16) = v24 | 1;
  y = start->y;
  *(v23 + 16) = v24 | 3;
  *(v23 + 28) = y;
  z = start->z;
  *(v23 + 16) = v24 | 7;
  *(v23 + 32) = z;
  v27 = qword_4D6EC50;
  dword_4D6EC38 |= 4u;
  if ( qword_4D6EC50 == 0 )
  {
    v27 = operator new(0x28u);
    CMsgVector::CMsgVector(v27);
    qword_4D6EC50 = v27;
  }
  if ( end == 0 )
    end = &vec3_origin;
  v28 = *(v27 + 4);
  *(v27 + 6) = LODWORD(end->x);
  *(v27 + 4) = v28 | 1;
  v29 = end->y;
  *(v27 + 4) = v28 | 3;
  *(v27 + 7) = v29;
  v30 = end->z;
  *(v27 + 4) = v28 | 7;
  *(v27 + 8) = v30;
  v31 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, modelindex.m_pBinding->m_pData);
  v32 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  v33 = v31;
  if ( qword_4D6EC40 == 0 )
  {
    v32 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v32);
    qword_4D6EC40 = v32;
  }
  *(v32 + 4) |= 1u;
  *(v32 + 3) = v33;
  v34 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, haloindex.m_pBinding->m_pData);
  v35 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  v36 = v34;
  if ( qword_4D6EC40 == 0 )
  {
    v35 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v35);
    qword_4D6EC40 = v35;
  }
  *(v35 + 4) |= 2u;
  *(v35 + 4) = v36;
  v37 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  if ( qword_4D6EC40 == 0 )
  {
    v37 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v37);
    qword_4D6EC40 = v37;
  }
  *(v37 + 4) |= 4u;
  *(v37 + 10) = startframe;
  v38 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  if ( qword_4D6EC40 == 0 )
  {
    v38 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v38);
    qword_4D6EC40 = v38;
  }
  *(v38 + 4) |= 8u;
  *(v38 + 11) = framerate;
  v39 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  if ( qword_4D6EC40 == 0 )
  {
    v39 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v39);
    qword_4D6EC40 = v39;
  }
  *(v39 + 4) |= 0x10u;
  *(v39 + 12) = life;
  v40 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  if ( qword_4D6EC40 == 0 )
  {
    v51 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v51);
    qword_4D6EC40 = v51;
    v40 = v51;
  }
  *(v40 + 16) |= 0x20u;
  *(v40 + 52) = width;
  v41 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  if ( qword_4D6EC40 == 0 )
  {
    v55 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v55);
    qword_4D6EC40 = v55;
    v41 = v55;
  }
  *(v41 + 16) |= 0x40u;
  *(v41 + 56) = endWidth;
  v42 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  if ( qword_4D6EC40 == 0 )
  {
    v56 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v56);
    qword_4D6EC40 = v56;
    v42 = v56;
  }
  *(v42 + 16) |= 0x80u;
  *(v42 + 60) = fadeLength;
  v43 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  if ( qword_4D6EC40 == 0 )
  {
    v52 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v52);
    qword_4D6EC40 = v52;
    v43 = v52;
  }
  *(v43 + 16) |= 0x100u;
  *(v43 + 64) = amplitude;
  v44 = qword_4D6EC40;
  dword_4D6EC38 |= 1u;
  if ( qword_4D6EC40 == 0 )
  {
    v53 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v53);
    qword_4D6EC40 = v53;
    v44 = v53;
  }
  *(v44 + 16) |= 0x400u;
  LOBYTE(v45) = r;
  *(v44 + 72) = speed;
  dword_4D6EC38 |= 1u;
  HIBYTE(v45) = g;
  v46 = qword_4D6EC40;
  v47 = (a << 24) | (b << 16) | v45;
  if ( qword_4D6EC40 == 0 )
  {
    v54 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v54);
    qword_4D6EC40 = v54;
    v46 = v54;
  }
  *(v46 + 68) = v47;
  v48 = g_pGameEventSystem;
  *(v46 + 16) |= 0x200u;
  v49 = IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent;
  v50 = *(*v48 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBeamPoints_GameEvent_t>(bool)::s_hEvent);
  v50(v48, 0xFFFFFFFFLL, 0, filter, v49, &qword_4D6EC28, 48);
}


