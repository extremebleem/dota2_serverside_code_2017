// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_worlddecal.cpp:27
class TEWorldDecal_GameEvent_t : public CNetMessagePB<411, CMsgTEWorldDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEWorldDecal_GameEvent_t(TEWorldDecal_GameEvent_t &);
	TEWorldDecal_GameEvent_t(const TEWorldDecal_GameEvent_t &);
	TEWorldDecal_GameEvent_t();
	virtual ~TEWorldDecal_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_worlddecal.cpp:32
class CTEWorldDecal : public CBaseTempEntity {
public:

	CTEWorldDecal(CTEWorldDecal &);
	CTEWorldDecal(const CTEWorldDecal &);
	CTEWorldDecal();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEWorldDecal_GameEvent_t &);
	virtual ~CTEWorldDecal();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEWorldDecal_GameEvent_t::~TEWorldDecal_GameEvent_t  (line 27, @0x0000000002f5d0b0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEWorldDecal::~CMsgTEWorldDecal
void __fastcall TEWorldDecal_GameEvent_t::~TEWorldDecal_GameEvent_t(TEWorldDecal_GameEvent_t *const this)
{
  *this = &off_47BC430;
  CMsgTEWorldDecal::~CMsgTEWorldDecal(this);
}


// TEWorldDecal_GameEvent_t::~TEWorldDecal_GameEvent_t  (line 27, @0x0000000002f5d0d0, libserver.so)  // inlines: ~CNetMessagePB, ~TEWorldDecal_GameEvent_t
// calls: CMsgTEWorldDecal::~CMsgTEWorldDecal, operator delete
void __fastcall TEWorldDecal_GameEvent_t::~TEWorldDecal_GameEvent_t(TEWorldDecal_GameEvent_t *const this)
{
  *this = &off_47BC430;
  CMsgTEWorldDecal::~CMsgTEWorldDecal(this);
  operator delete(this);
}


// CTEWorldDecal::~CTEWorldDecal  (line 32, @0x0000000002f601a0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEWorldDecal_GameEvent_t
// calls: CMsgTEWorldDecal::~CMsgTEWorldDecal, CUtlSlot::~CUtlSlot
void __fastcall CTEWorldDecal::~CTEWorldDecal(CTEWorldDecal *const this)
{
  CMsgTEWorldDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BC5B0;
  *v2 = &off_47BC430;
  CMsgTEWorldDecal::~CMsgTEWorldDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEWorldDecal::~CTEWorldDecal  (line 32, @0x0000000002f60510, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEWorldDecal, ~TEWorldDecal_GameEvent_t
// calls: CMsgTEWorldDecal::~CMsgTEWorldDecal, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEWorldDecal::~CTEWorldDecal(CTEWorldDecal *const this)
{
  CMsgTEWorldDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BC5B0;
  *v2 = &off_47BC430;
  CMsgTEWorldDecal::~CMsgTEWorldDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEWorldDecal::Create  (line 39, @0x0000000002f61d30, libserver.so)  // inlines: FindGameEvent<TEWorldDecal_GameEvent_t>, FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>, PostEvent<TEWorldDecal_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEWorldDecal::Create(
        CTEWorldDecal *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 48);
}


// CTEWorldDecal::StaticInit  (line 47, @0x0000000002f5c540, libserver.so)
void __fastcall CTEWorldDecal::StaticInit(CTEWorldDecal *const this)
{
  ;
}


// TE_WorldDecal  (line 99, @0x0000000002f5c200, libserver.so)  // inlines: Create, FindGameEvent<TEWorldDecal_GameEvent_t>, FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>, PostEvent<TEWorldDecal_GameEvent_t>, VectorToCMsgVector, mutable_normal, mutable_origin, set_has_index, set_has_normal, set_has_origin, set_has_x, set_has_y, set_has_z, set_index, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::WorldDecal
// globals: IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_WorldDecal(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *normal,
        int index)
{
  __int64 v9; // rax
  int v10; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 v13; // rax
  int v14; // edx
  vec_t v15; // xmm0_4
  vec_t v16; // xmm0_4
  __int64 v17; // r13
  IGameEventSystem *v18; // rbx
  void (__fastcall *v19)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14
  CMsgVector *v20; // r15
  CMsgVector *v21; // r14

  v9 = qword_4D6FB80;
  dword_4D6FB78 |= 1u;
  if ( qword_4D6FB80 == 0 )
  {
    v20 = operator new(0x28u);
    CMsgVector::CMsgVector(v20);
    qword_4D6FB80 = v20;
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
  v13 = qword_4D6FB88;
  dword_4D6FB78 |= 2u;
  if ( qword_4D6FB88 == 0 )
  {
    v21 = operator new(0x28u);
    CMsgVector::CMsgVector(v21);
    qword_4D6FB88 = v21;
    v13 = v21;
  }
  v14 = *(v13 + 16);
  *(v13 + 24) = normal->x;
  *(v13 + 16) = v14 | 1;
  v15 = normal->y;
  *(v13 + 16) = v14 | 3;
  *(v13 + 28) = v15;
  v16 = normal->z;
  *(v13 + 16) = v14 | 7;
  *(v13 + 32) = v16;
  dword_4D6FB78 |= 4u;
  dword_4D6FB90 = index;
  v17 = IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent;
  v18 = g_pGameEventSystem;
  v19 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEWorldDecal_GameEvent_t>(bool)::s_hEvent);
  v19(v18, 0xFFFFFFFFLL, 0, filter, v17, &qword_4D6FB68, 48);
}


