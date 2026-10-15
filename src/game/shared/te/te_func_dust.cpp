// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_func_dust.cpp:15
class TEDust_GameEvent_t : public CNetMessagePB<420, CMsgTEDust, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEDust_GameEvent_t(TEDust_GameEvent_t &);
	TEDust_GameEvent_t(const TEDust_GameEvent_t &);
	TEDust_GameEvent_t();
	virtual ~TEDust_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_func_dust.cpp:36
class CTEDust : public CBaseTempEntity {
public:

	CTEDust(CTEDust &);
	CTEDust(const CTEDust &);
	CTEDust();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEDust_GameEvent_t &);
	virtual ~CTEDust();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEDust_GameEvent_t::~TEDust_GameEvent_t  (line 15, @0x0000000002f50f70, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEDust::~CMsgTEDust
void __fastcall TEDust_GameEvent_t::~TEDust_GameEvent_t(TEDust_GameEvent_t *const this)
{
  *this = &off_47BA5D0;
  CMsgTEDust::~CMsgTEDust(this);
}


// TEDust_GameEvent_t::~TEDust_GameEvent_t  (line 15, @0x0000000002f50f90, libserver.so)  // inlines: ~CNetMessagePB, ~TEDust_GameEvent_t
// calls: CMsgTEDust::~CMsgTEDust, operator delete
void __fastcall TEDust_GameEvent_t::~TEDust_GameEvent_t(TEDust_GameEvent_t *const this)
{
  *this = &off_47BA5D0;
  CMsgTEDust::~CMsgTEDust(this);
  operator delete(this);
}


// CTEDust::~CTEDust  (line 36, @0x0000000002f557f0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEDust_GameEvent_t
// calls: CMsgTEDust::~CMsgTEDust, CUtlSlot::~CUtlSlot
void __fastcall CTEDust::~CTEDust(CTEDust *const this)
{
  CMsgTEDust *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BA750;
  *v2 = &off_47BA5D0;
  CMsgTEDust::~CMsgTEDust(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEDust::~CTEDust  (line 36, @0x0000000002f55bb0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEDust, ~TEDust_GameEvent_t
// calls: CMsgTEDust::~CMsgTEDust, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEDust::~CTEDust(CTEDust *const this)
{
  CMsgTEDust *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BA750;
  *v2 = &off_47BA5D0;
  CMsgTEDust::~CMsgTEDust(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEDust::Create  (line 41, @0x0000000002f587c0, libserver.so)  // inlines: FindGameEvent<TEDust_GameEvent_t>, FindOrCreateGameEvent<TEDust_GameEvent_t>, PostEvent<TEDust_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEDust_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEDust::Create(CTEDust *const this, IRecipientFilter *const filter, double a3, float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEDust_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEDust_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 48);
}


// CTEDust::StaticInit  (line 53, @0x0000000002f4f920, libserver.so)
void __fastcall CTEDust::StaticInit(CTEDust *const this)
{
  ;
}


// TE_Dust  (line 87, @0x0000000002f4f4e0, libserver.so)  // inlines: Create, FindGameEvent<TEDust_GameEvent_t>, FindOrCreateGameEvent<TEDust_GameEvent_t>, PostEvent<TEDust_GameEvent_t>, VectorToCMsgVector, mutable_direction, mutable_origin, set_has_direction, set_has_origin, set_has_size, set_has_speed, set_has_x, set_has_y, set_has_z, set_size, set_speed, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::Dust
// globals: IGameEventSystem::FindOrCreateGameEvent<TEDust_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem
void __fastcall TE_Dust(
        IRecipientFilter *const filter,
        float delay,
        const Vector *const pos,
        const Vector *const dir,
        __m128i size,
        float speed)
{
  int v6; // r15d
  CMsgVector *v10; // r14
  int v11; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r12
  vec_t v17; // xmm0_4
  vec_t v18; // xmm0_4
  IGameEventSystem *v19; // rbx
  void (__fastcall *v20)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14
  CMsgVector *v21; // r12

  v6 = _mm_cvtsi128_si32(size);
  v10 = qword_4D6E520;
  dword_4D6E518 |= 1u;
  if ( qword_4D6E520 == 0 )
  {
    v10 = operator new(0x28u);
    CMsgVector::CMsgVector(v10);
    qword_4D6E520 = v10;
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
  v14 = qword_4D6E530;
  dword_4D6E518 |= 8u;
  if ( qword_4D6E530 == 0 )
  {
    v21 = operator new(0x28u);
    CMsgVector::CMsgVector(v21);
    qword_4D6E530 = v21;
    v14 = v21;
  }
  v15 = *(v14 + 16);
  *(v14 + 24) = dir->x;
  v16 = IGameEventSystem::FindOrCreateGameEvent<TEDust_GameEvent_t>(bool)::s_hEvent;
  *(v14 + 16) = v15 | 1;
  v17 = dir->y;
  *(v14 + 16) = v15 | 3;
  *(v14 + 28) = v17;
  v18 = dir->z;
  *(v14 + 16) = v15 | 7;
  v19 = g_pGameEventSystem;
  *(v14 + 32) = v18;
  dword_4D6E528 = v6;
  dword_4D6E52C = LODWORD(speed);
  dword_4D6E518 |= 6u;
  v20 = *(*v19 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v16);
  v20(v19, 0xFFFFFFFFLL, 0, filter, v16, &qword_4D6E508, 48);
}


