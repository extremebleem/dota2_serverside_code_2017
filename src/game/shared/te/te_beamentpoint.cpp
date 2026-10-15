// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_beamentpoint.cpp:22
class TEBeamEntPoint_GameEvent_t : public CNetMessagePB<402, CMsgTEBeamEntPoint, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBeamEntPoint_GameEvent_t(TEBeamEntPoint_GameEvent_t &);
	TEBeamEntPoint_GameEvent_t(const TEBeamEntPoint_GameEvent_t &);
	TEBeamEntPoint_GameEvent_t();
	virtual ~TEBeamEntPoint_GameEvent_t();

	// sizeof = 56
};

// src/game/shared/te/te_beamentpoint.cpp:28
class CTEBeamEntPoint : public CTEBaseBeam {
public:

	CTEBeamEntPoint(CTEBeamEntPoint &);
	CTEBeamEntPoint(const CTEBeamEntPoint &);
	CTEBeamEntPoint();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEBeamEntPoint_GameEvent_t &);
	virtual ~CTEBeamEntPoint();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBeamEntPoint_GameEvent_t::~TEBeamEntPoint_GameEvent_t  (line 22, @0x0000000002f506b0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint
void __fastcall TEBeamEntPoint_GameEvent_t::~TEBeamEntPoint_GameEvent_t(TEBeamEntPoint_GameEvent_t *const this)
{
  *this = &off_47B8650;
  CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint(this);
}


// TEBeamEntPoint_GameEvent_t::~TEBeamEntPoint_GameEvent_t  (line 22, @0x0000000002f506d0, libserver.so)  // inlines: ~CNetMessagePB, ~TEBeamEntPoint_GameEvent_t
// calls: CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint, operator delete
void __fastcall TEBeamEntPoint_GameEvent_t::~TEBeamEntPoint_GameEvent_t(TEBeamEntPoint_GameEvent_t *const this)
{
  *this = &off_47B8650;
  CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint(this);
  operator delete(this);
}


// CTEBeamEntPoint::~CTEBeamEntPoint  (line 28, @0x0000000002f557a0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~TEBeamEntPoint_GameEvent_t
// calls: CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint, CUtlSlot::~CUtlSlot
void __fastcall CTEBeamEntPoint::~CTEBeamEntPoint(CTEBeamEntPoint *const this)
{
  CMsgTEBeamEntPoint *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B87D0;
  *v2 = &off_47B8650;
  CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBeamEntPoint::~CTEBeamEntPoint  (line 28, @0x0000000002f56010, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~CTEBeamEntPoint, ~TEBeamEntPoint_GameEvent_t
// calls: CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBeamEntPoint::~CTEBeamEntPoint(CTEBeamEntPoint *const this)
{
  CMsgTEBeamEntPoint *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B87D0;
  *v2 = &off_47B8650;
  CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBeamEntPoint::Create  (line 37, @0x0000000002f575f0, libserver.so)  // inlines: FindGameEvent<TEBeamEntPoint_GameEvent_t>, FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>, PostEvent<TEBeamEntPoint_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBeamEntPoint::Create(
        CTEBeamEntPoint *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 56);
}


// CTEBeamEntPoint::StaticInit  (line 45, @0x0000000002f4f830, libserver.so)
void __fastcall CTEBeamEntPoint::StaticInit(CTEBeamEntPoint *const this)
{
  ;
}


// CTEBeamEntPoint::CTEBeamEntPoint  (line 91, @0x0000000002f4b9e0, libserver.so)  // inlines: CNetMessagePB, CTEBaseBeam, TEBeamEntPoint_GameEvent_t, VectorToCMsgVector, mutable_end, mutable_start, set_endentity, set_has_end, set_has_start, set_has_startentity, set_has_x, set_has_z, set_startentity, set_x, set_y, set_z, ~CBaseTempEntity, ~CNetMessagePB, ~CTEBaseBeam, ~TEBeamEntPoint_GameEvent_t
// calls: CBaseTempEntity::CBaseTempEntity, CMsgTEBeamEntPoint::CMsgTEBeamEntPoint, operator new, CMsgVector::CMsgVector, CMsgTEBeamEntPoint::~CMsgTEBeamEntPoint, CUtlSlot::~CUtlSlot, _Unwind_Resume, operator delete
// callers: __static_initialization_and_destruction_0
void __fastcall CTEBeamEntPoint::CTEBeamEntPoint(CTEBeamEntPoint *const this)
{
  int v2; // eax
  CMsgVector *v3; // rax
  vec_t x; // xmm0_4
  vec_t y; // xmm1_4
  int v6; // edx
  vec_t z; // xmm2_4
  vec_t *v8; // rax
  int v9; // edx
  CMsgVector *v10; // r12
  CMsgVector *v11; // r14

  CBaseTempEntity::CBaseTempEntity(this);
  *this = off_47B87D0;
  CMsgTEBeamEntPoint::CMsgTEBeamEntPoint((this + 72));
  *(this + 26) = 0;
  *(this + 9) = off_47B8710;
  v2 = *(this + 22);
  *(this + 27) = 0;
  *(this + 22) = v2 | 0xE;
  v3 = *(this + 14);
  if ( v3 == 0 )
  {
    v10 = operator new(0x28u);
    CMsgVector::CMsgVector(v10);
    *(this + 14) = v10;
    v3 = v10;
  }
  x = vec3_origin.x;
  y = vec3_origin.y;
  v6 = *(v3 + 4) | 7;
  z = vec3_origin.z;
  *(v3 + 6) = LODWORD(vec3_origin.x);
  *(v3 + 7) = y;
  *(v3 + 4) = v6;
  *(v3 + 8) = z;
  v8 = *(this + 15);
  *(this + 22) |= 0x10u;
  if ( v8 == 0 )
  {
    v11 = operator new(0x28u);
    CMsgVector::CMsgVector(v11);
    *(this + 15) = v11;
    x = vec3_origin.x;
    v8 = v11;
    y = vec3_origin.y;
    z = vec3_origin.z;
  }
  v9 = *(v8 + 4);
  v8[6] = x;
  v8[7] = y;
  v8[8] = z;
  *(v8 + 4) = v9 | 7;
}


// TE_BeamEntPoint  (line 118, @0x0000000002f4c180, libserver.so)  // inlines: Color, Create, FindGameEvent<TEBeamEntPoint_GameEvent_t>, FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>, PostEvent<TEBeamEntPoint_GameEvent_t>, SetColor, VectorToCMsgVector, mutable_base, mutable_end, mutable_start, set_amplitude, set_color, set_endentity, set_endwidth, set_fadelength, set_framerate, set_haloindex, set_has_amplitude, set_has_base, set_has_color, set_has_end, set_has_endwidth, set_has_fadelength, set_has_framerate, set_has_haloindex, set_has_life, set_has_modelindex, set_has_speed, set_has_start, set_has_startentity, set_has_startframe, set_has_width, set_has_x, set_has_y, set_has_z, set_life, set_modelindex, set_speed, set_startentity, set_startframe, set_width, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, CMsgTEBaseBeam::CMsgTEBaseBeam, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::BeamEntPoint
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_BeamEntPoint(
        IRecipientFilter *const filter,
        float delay,
        CEntityIndex nStartEntity,
        const Vector *start,
        CEntityIndex nEndEntity,
        const Vector *end,
        HMaterial modelindex,
        float life,
        float width,
        float endWidth,
        float amplitude,
        HMaterial *p_haloindex,
        int startframe,
        int framerate,
        int fadeLength,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int speed)
{
  int v20; // eax
  int v25; // eax
  CMsgVector *v26; // r15
  int v27; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v30; // r13
  int v31; // eax
  vec_t v32; // xmm0_4
  vec_t v33; // xmm0_4
  __int64 v34; // rax
  CMsgTEBaseBeam *v35; // r13
  __int64 v36; // rbx
  __int64 v37; // rax
  CMsgTEBaseBeam *v38; // r12
  __int64 v39; // rbx
  CMsgTEBaseBeam *v40; // rbx
  CMsgTEBaseBeam *v41; // rbx
  CMsgTEBaseBeam *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int16 v48; // bx
  __int64 v49; // rax
  int v50; // ebx
  IGameEventSystem *v51; // rbx
  __int64 v52; // r12
  void (__fastcall *v53)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, void *, __int64); // r13
  CMsgTEBaseBeam *v54; // rbx
  CMsgTEBaseBeam *v55; // rbx
  CMsgTEBaseBeam *v56; // rbx
  CMsgTEBaseBeam *v57; // r12
  CMsgTEBaseBeam *v58; // rbx
  CMsgTEBaseBeam *v59; // rbx

  v20 = 0;
  if ( nStartEntity.m_Data > 0 )
  {
    v20 = nStartEntity.m_Data & 0xFFF;
    BYTE1(v20) |= 0x10u;
  }
  dword_4D6ED48 = v20;
  v25 = 0;
  if ( nEndEntity.m_Data > 0 )
  {
    v25 = nEndEntity.m_Data & 0xFFF;
    BYTE1(v25) |= 0x10u;
  }
  v26 = qword_4D6ED50;
  dword_4D6ED4C = v25;
  dword_4D6ED38 |= 0xEu;
  if ( qword_4D6ED50 == 0 )
  {
    v26 = operator new(0x28u);
    CMsgVector::CMsgVector(v26);
    qword_4D6ED50 = v26;
  }
  if ( start == 0 )
    start = &vec3_origin;
  v27 = *(v26 + 4);
  *(v26 + 6) = LODWORD(start->x);
  *(v26 + 4) = v27 | 1;
  y = start->y;
  *(v26 + 4) = v27 | 3;
  *(v26 + 7) = y;
  z = start->z;
  *(v26 + 4) = v27 | 7;
  *(v26 + 8) = z;
  v30 = qword_4D6ED58;
  dword_4D6ED38 |= 0x10u;
  if ( qword_4D6ED58 == 0 )
  {
    v30 = operator new(0x28u);
    CMsgVector::CMsgVector(v30);
    qword_4D6ED58 = v30;
  }
  if ( end == 0 )
    end = &vec3_origin;
  v31 = *(v30 + 4);
  *(v30 + 6) = LODWORD(end->x);
  *(v30 + 4) = v31 | 1;
  v32 = end->y;
  *(v30 + 4) = v31 | 3;
  *(v30 + 7) = v32;
  v33 = end->z;
  *(v30 + 4) = v31 | 7;
  *(v30 + 8) = v33;
  v34 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, modelindex.m_pBinding->m_pData);
  v35 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  v36 = v34;
  if ( qword_4D6ED40 == 0 )
  {
    v35 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v35);
    qword_4D6ED40 = v35;
  }
  *(v35 + 4) |= 1u;
  *(v35 + 3) = v36;
  v37 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, p_haloindex->m_pBinding);
  v38 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  v39 = v37;
  if ( qword_4D6ED40 == 0 )
  {
    v38 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v38);
    qword_4D6ED40 = v38;
  }
  *(v38 + 4) |= 2u;
  *(v38 + 4) = v39;
  v40 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  if ( qword_4D6ED40 == 0 )
  {
    v40 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v40);
    qword_4D6ED40 = v40;
  }
  *(v40 + 4) |= 4u;
  *(v40 + 10) = startframe;
  v41 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  if ( qword_4D6ED40 == 0 )
  {
    v41 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v41);
    qword_4D6ED40 = v41;
  }
  *(v41 + 4) |= 8u;
  *(v41 + 11) = framerate;
  v42 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  if ( qword_4D6ED40 == 0 )
  {
    v42 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v42);
    qword_4D6ED40 = v42;
  }
  *(v42 + 4) |= 0x10u;
  *(v42 + 12) = life;
  v43 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  if ( qword_4D6ED40 == 0 )
  {
    v54 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v54);
    qword_4D6ED40 = v54;
    v43 = v54;
  }
  *(v43 + 16) |= 0x20u;
  *(v43 + 52) = width;
  v44 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  if ( qword_4D6ED40 == 0 )
  {
    v58 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v58);
    qword_4D6ED40 = v58;
    v44 = v58;
  }
  *(v44 + 16) |= 0x40u;
  *(v44 + 56) = endWidth;
  v45 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  if ( qword_4D6ED40 == 0 )
  {
    v59 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v59);
    qword_4D6ED40 = v59;
    v45 = v59;
  }
  *(v45 + 16) |= 0x80u;
  *(v45 + 60) = fadeLength;
  v46 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  if ( qword_4D6ED40 == 0 )
  {
    v55 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v55);
    qword_4D6ED40 = v55;
    v46 = v55;
  }
  *(v46 + 16) |= 0x100u;
  *(v46 + 64) = amplitude;
  v47 = qword_4D6ED40;
  dword_4D6ED38 |= 1u;
  if ( qword_4D6ED40 == 0 )
  {
    v56 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v56);
    qword_4D6ED40 = v56;
    v47 = v56;
  }
  *(v47 + 16) |= 0x400u;
  LOBYTE(v48) = r;
  *(v47 + 72) = speed;
  dword_4D6ED38 |= 1u;
  HIBYTE(v48) = g;
  v49 = qword_4D6ED40;
  v50 = (a << 24) | (b << 16) | v48;
  if ( qword_4D6ED40 == 0 )
  {
    v57 = operator new(0x50u);
    CMsgTEBaseBeam::CMsgTEBaseBeam(v57);
    qword_4D6ED40 = v57;
    v49 = v57;
  }
  *(v49 + 68) = v50;
  v51 = g_pGameEventSystem;
  *(v49 + 16) |= 0x200u;
  v52 = IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent;
  v53 = *(*v51 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBeamEntPoint_GameEvent_t>(bool)::s_hEvent);
  v53(v51, 0xFFFFFFFFLL, 0, filter, v52, &unk_4D6ED28, 56);
}


