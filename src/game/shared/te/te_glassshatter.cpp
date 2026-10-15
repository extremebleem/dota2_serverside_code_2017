// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_glassshatter.cpp:49
class TEShatterSurface_GameEvent_t : public CNetMessagePB<414, CMsgTEShatterSurface, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEShatterSurface_GameEvent_t(TEShatterSurface_GameEvent_t &);
	TEShatterSurface_GameEvent_t(const TEShatterSurface_GameEvent_t &);
	TEShatterSurface_GameEvent_t();
	virtual ~TEShatterSurface_GameEvent_t();

	// sizeof = 80
};

// src/game/shared/te/te_glassshatter.cpp:61
class CTEShatterSurface : public CBaseTempEntity {
public:

	CTEShatterSurface(CTEShatterSurface &);
	CTEShatterSurface(const CTEShatterSurface &);
	CTEShatterSurface();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEShatterSurface_GameEvent_t &);
	virtual ~CTEShatterSurface();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 152
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEShatterSurface_GameEvent_t::~TEShatterSurface_GameEvent_t  (line 49, @0x0000000002f5ca70, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEShatterSurface::~CMsgTEShatterSurface
void __fastcall TEShatterSurface_GameEvent_t::~TEShatterSurface_GameEvent_t(TEShatterSurface_GameEvent_t *const this)
{
  *this = &off_47BAD90;
  CMsgTEShatterSurface::~CMsgTEShatterSurface(this);
}


// TEShatterSurface_GameEvent_t::~TEShatterSurface_GameEvent_t  (line 49, @0x0000000002f5ca90, libserver.so)  // inlines: ~CNetMessagePB, ~TEShatterSurface_GameEvent_t
// calls: CMsgTEShatterSurface::~CMsgTEShatterSurface, operator delete
void __fastcall TEShatterSurface_GameEvent_t::~TEShatterSurface_GameEvent_t(TEShatterSurface_GameEvent_t *const this)
{
  *this = &off_47BAD90;
  CMsgTEShatterSurface::~CMsgTEShatterSurface(this);
  operator delete(this);
}


// CTEShatterSurface::~CTEShatterSurface  (line 61, @0x0000000002f604c0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEShatterSurface_GameEvent_t
// calls: CMsgTEShatterSurface::~CMsgTEShatterSurface, CUtlSlot::~CUtlSlot
void __fastcall CTEShatterSurface::~CTEShatterSurface(CTEShatterSurface *const this)
{
  CMsgTEShatterSurface *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BAF10;
  *v2 = &off_47BAD90;
  CMsgTEShatterSurface::~CMsgTEShatterSurface(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEShatterSurface::~CTEShatterSurface  (line 61, @0x0000000002f605b0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEShatterSurface, ~TEShatterSurface_GameEvent_t
// calls: CMsgTEShatterSurface::~CMsgTEShatterSurface, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEShatterSurface::~CTEShatterSurface(CTEShatterSurface *const this)
{
  CMsgTEShatterSurface *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BAF10;
  *v2 = &off_47BAD90;
  CMsgTEShatterSurface::~CMsgTEShatterSurface(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEShatterSurface::Create  (line 68, @0x0000000002f615e0, libserver.so)  // inlines: FindGameEvent<TEShatterSurface_GameEvent_t>, FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>, PostEvent<TEShatterSurface_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEShatterSurface::Create(
        CTEShatterSurface *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 80);
}


// CTEShatterSurface::StaticInit  (line 76, @0x0000000002f5c470, libserver.so)
void __fastcall CTEShatterSurface::StaticInit(CTEShatterSurface *const this)
{
  ;
}


// TE_ShatterSurface  (line 217, @0x0000000002f5b250, libserver.so)  // inlines: Color, Create, FindGameEvent<TEShatterSurface_GameEvent_t>, FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>, PostEvent<TEShatterSurface_GameEvent_t>, QAngleToCMsgQAngle, SetColor, VectorToCMsgVector, mutable_angles, mutable_force, mutable_forcepos, mutable_origin, set_backcolor, set_frontcolor, set_has_angles, set_has_backcolor, set_has_force, set_has_forcepos, set_has_origin, set_has_width, set_has_x, set_has_y, set_has_z, set_height, set_shardsize, set_surfacetype, set_width, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, CMsgQAngle::CMsgQAngle, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::ShatterSurface
// globals: IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_ShatterSurface(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const QAngle *angle,
        const Vector *force,
        const Vector *forcepos,
        float width,
        float height,
        float shardsize,
        int surfacetype,
        char front_r,
        unsigned __int8 front_g,
        int front_b,
        char back_r,
        char back_g,
        unsigned __int8 back_b)
{
  __int64 v21; // rax
  int v22; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgQAngle *v25; // r12
  int v26; // eax
  vec_t v27; // xmm0_4
  vec_t v28; // xmm0_4
  CMsgVector *v29; // r12
  int v30; // eax
  vec_t v31; // xmm0_4
  vec_t v32; // xmm0_4
  CMsgVector *v33; // r12
  int v34; // eax
  vec_t v35; // xmm0_4
  vec_t v36; // xmm0_4
  __int64 v37; // r12
  IGameEventSystem *v38; // rbx
  void (__fastcall *v39)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgVector *pMem; // [rsp+10h] [rbp-50h]

  dword_4D70118 |= 1u;
  v21 = qword_4D70120;
  if ( qword_4D70120 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v21 = pMem;
    qword_4D70120 = pMem;
  }
  v22 = *(v21 + 16);
  *(v21 + 24) = pos->x;
  *(v21 + 16) = v22 | 1;
  y = pos->y;
  *(v21 + 16) = v22 | 3;
  *(v21 + 28) = y;
  z = pos->z;
  *(v21 + 16) = v22 | 7;
  *(v21 + 32) = z;
  v25 = qword_4D70128;
  dword_4D70118 |= 2u;
  if ( qword_4D70128 == 0 )
  {
    v25 = operator new(0x28u);
    CMsgQAngle::CMsgQAngle(v25);
    qword_4D70128 = v25;
  }
  v26 = *(v25 + 4);
  *(v25 + 6) = LODWORD(angle->x);
  *(v25 + 4) = v26 | 1;
  v27 = angle->y;
  *(v25 + 4) = v26 | 3;
  *(v25 + 7) = v27;
  v28 = angle->z;
  *(v25 + 4) = v26 | 7;
  *(v25 + 8) = v28;
  v29 = qword_4D70130;
  dword_4D70118 |= 4u;
  if ( qword_4D70130 == 0 )
  {
    v29 = operator new(0x28u);
    CMsgVector::CMsgVector(v29);
    qword_4D70130 = v29;
  }
  v30 = *(v29 + 4);
  *(v29 + 6) = LODWORD(force->x);
  *(v29 + 4) = v30 | 1;
  v31 = force->y;
  *(v29 + 4) = v30 | 3;
  *(v29 + 7) = v31;
  v32 = force->z;
  *(v29 + 4) = v30 | 7;
  *(v29 + 8) = v32;
  v33 = qword_4D70138;
  dword_4D70118 |= 8u;
  if ( qword_4D70138 == 0 )
  {
    v33 = operator new(0x28u);
    CMsgVector::CMsgVector(v33);
    qword_4D70138 = v33;
  }
  v34 = *(v33 + 4);
  *(v33 + 6) = LODWORD(forcepos->x);
  *(v33 + 4) = v34 | 1;
  v35 = forcepos->y;
  *(v33 + 4) = v34 | 3;
  *(v33 + 7) = v35;
  v36 = forcepos->z;
  *(v33 + 4) = v34 | 7;
  LOBYTE(v34) = front_r;
  *(v33 + 8) = v36;
  v37 = IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent;
  dword_4D70140 = LODWORD(width);
  dword_4D70144 = LODWORD(height);
  BYTE1(v34) = front_g;
  dword_4D70148 = LODWORD(shardsize);
  dword_4D7014C = surfacetype;
  dword_4D70118 |= 0x3F0u;
  dword_4D70150 = (front_g << 16) | v34 | 0xFF000000;
  LOBYTE(v34) = back_r;
  BYTE1(v34) = back_g;
  dword_4D70154 = (back_b << 16) | v34 | 0xFF000000;
  v38 = g_pGameEventSystem;
  v39 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEShatterSurface_GameEvent_t>(bool)::s_hEvent);
  v39(v38, 0xFFFFFFFFLL, 0, filter, v37, &qword_4D70108, 80);
}


