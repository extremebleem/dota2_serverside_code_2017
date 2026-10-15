// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_bspdecal.cpp:26
class TEBSPDecal_GameEvent_t : public CNetMessagePB<407, CMsgTEBSPDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBSPDecal_GameEvent_t(TEBSPDecal_GameEvent_t &);
	TEBSPDecal_GameEvent_t(const TEBSPDecal_GameEvent_t &);
	TEBSPDecal_GameEvent_t();
	virtual ~TEBSPDecal_GameEvent_t();

	// sizeof = 56
};

// src/game/shared/te/te_bspdecal.cpp:34
class CTEBSPDecal : public CBaseTempEntity {
public:

	CTEBSPDecal(CTEBSPDecal &);
	CTEBSPDecal(const CTEBSPDecal &);
	CTEBSPDecal();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEBSPDecal_GameEvent_t &);
	virtual ~CTEBSPDecal();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBSPDecal_GameEvent_t::~TEBSPDecal_GameEvent_t  (line 26, @0x0000000002f50a70, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBSPDecal::~CMsgTEBSPDecal
void __fastcall TEBSPDecal_GameEvent_t::~TEBSPDecal_GameEvent_t(TEBSPDecal_GameEvent_t *const this)
{
  *this = &off_47B93D0;
  CMsgTEBSPDecal::~CMsgTEBSPDecal(this);
}


// TEBSPDecal_GameEvent_t::~TEBSPDecal_GameEvent_t  (line 26, @0x0000000002f50a90, libserver.so)  // inlines: ~CNetMessagePB, ~TEBSPDecal_GameEvent_t
// calls: CMsgTEBSPDecal::~CMsgTEBSPDecal, operator delete
void __fastcall TEBSPDecal_GameEvent_t::~TEBSPDecal_GameEvent_t(TEBSPDecal_GameEvent_t *const this)
{
  *this = &off_47B93D0;
  CMsgTEBSPDecal::~CMsgTEBSPDecal(this);
  operator delete(this);
}


// CTEBSPDecal::~CTEBSPDecal  (line 34, @0x0000000002f55a70, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEBSPDecal_GameEvent_t
// calls: CMsgTEBSPDecal::~CMsgTEBSPDecal, CUtlSlot::~CUtlSlot
void __fastcall CTEBSPDecal::~CTEBSPDecal(CTEBSPDecal *const this)
{
  CMsgTEBSPDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9550;
  *v2 = &off_47B93D0;
  CMsgTEBSPDecal::~CMsgTEBSPDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBSPDecal::~CTEBSPDecal  (line 34, @0x0000000002f55de0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBSPDecal, ~TEBSPDecal_GameEvent_t
// calls: CMsgTEBSPDecal::~CMsgTEBSPDecal, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBSPDecal::~CTEBSPDecal(CTEBSPDecal *const this)
{
  CMsgTEBSPDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9550;
  *v2 = &off_47B93D0;
  CMsgTEBSPDecal::~CMsgTEBSPDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBSPDecal::Create  (line 41, @0x0000000002f57e80, libserver.so)  // inlines: FindGameEvent<TEBSPDecal_GameEvent_t>, FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>, PostEvent<TEBSPDecal_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBSPDecal::Create(CTEBSPDecal *const this, IRecipientFilter *const filter, double a3, float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 56);
}


// CTEBSPDecal::StaticInit  (line 49, @0x0000000002f4f8a0, libserver.so)
void __fastcall CTEBSPDecal::StaticInit(CTEBSPDecal *const this)
{
  ;
}


// TE_BSPDecal  (line 102, @0x0000000002f4ddb0, libserver.so)  // inlines: Create, FindGameEvent<TEBSPDecal_GameEvent_t>, FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>, PostEvent<TEBSPDecal_GameEvent_t>, VectorToCMsgVector, mutable_normal, mutable_origin, mutable_saxis, set_entity, set_has_entity, set_has_index, set_has_normal, set_has_origin, set_has_saxis, set_has_x, set_has_y, set_has_z, set_index, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::BSPDecal
// globals: IGameEventSystem::FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem
void __fastcall TE_BSPDecal(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *normal,
        const Vector *saxis,
        CEntityIndex entity,
        int index)
{
  __int64 v12; // rax
  int v13; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v16; // r13
  int v17; // eax
  vec_t v18; // xmm0_4
  vec_t v19; // xmm0_4
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r12
  vec_t v23; // xmm0_4
  vec_t v24; // xmm0_4
  IGameEventSystem *v25; // rbx
  void (__fastcall *v26)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgVector *v27; // r12
  CMsgVector *pMem; // [rsp+10h] [rbp-40h]

  v12 = qword_4D6EA20;
  dword_4D6EA18 |= 1u;
  if ( qword_4D6EA20 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v12 = pMem;
    qword_4D6EA20 = pMem;
  }
  v13 = *(v12 + 16);
  *(v12 + 24) = pos->x;
  *(v12 + 16) = v13 | 1;
  y = pos->y;
  *(v12 + 16) = v13 | 3;
  *(v12 + 28) = y;
  z = pos->z;
  *(v12 + 16) = v13 | 7;
  *(v12 + 32) = z;
  v16 = qword_4D6EA28;
  dword_4D6EA18 |= 2u;
  if ( qword_4D6EA28 == 0 )
  {
    v16 = operator new(0x28u);
    CMsgVector::CMsgVector(v16);
    qword_4D6EA28 = v16;
  }
  v17 = *(v16 + 4);
  *(v16 + 6) = LODWORD(normal->x);
  *(v16 + 4) = v17 | 1;
  v18 = normal->y;
  *(v16 + 4) = v17 | 3;
  *(v16 + 7) = v18;
  v19 = normal->z;
  *(v16 + 4) = v17 | 7;
  *(v16 + 8) = v19;
  v20 = qword_4D6EA30;
  dword_4D6EA18 |= 4u;
  if ( qword_4D6EA30 == 0 )
  {
    v27 = operator new(0x28u);
    CMsgVector::CMsgVector(v27);
    qword_4D6EA30 = v27;
    v20 = v27;
  }
  v21 = *(v20 + 16);
  v22 = IGameEventSystem::FindOrCreateGameEvent<TEBSPDecal_GameEvent_t>(bool)::s_hEvent;
  *(v20 + 24) = saxis->x;
  *(v20 + 16) = v21 | 1;
  v23 = saxis->y;
  *(v20 + 16) = v21 | 3;
  *(v20 + 28) = v23;
  v24 = saxis->z;
  *(v20 + 16) = v21 | 7;
  v25 = g_pGameEventSystem;
  *(v20 + 32) = v24;
  dword_4D6EA38 = entity.m_Data;
  dword_4D6EA3C = index;
  dword_4D6EA18 |= 0x18u;
  v26 = *(*v25 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v22);
  v26(v25, 0xFFFFFFFFLL, 0, filter, v22, &qword_4D6EA08, 56);
}


