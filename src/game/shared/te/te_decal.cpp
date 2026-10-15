// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_decal.cpp:27
class TEDecal_GameEvent_t : public CNetMessagePB<410, CMsgTEDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEDecal_GameEvent_t(TEDecal_GameEvent_t &);
	TEDecal_GameEvent_t(const TEDecal_GameEvent_t &);
	TEDecal_GameEvent_t();
	virtual ~TEDecal_GameEvent_t();

	// sizeof = 56
};

// src/game/shared/te/te_decal.cpp:32
class CTEDecal : public CBaseTempEntity {
public:

	CTEDecal(CTEDecal &);
	CTEDecal(const CTEDecal &);
	CTEDecal();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEDecal_GameEvent_t &);
	virtual ~CTEDecal();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEDecal_GameEvent_t::~TEDecal_GameEvent_t  (line 27, @0x0000000002f50c50, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEDecal::~CMsgTEDecal
void __fastcall TEDecal_GameEvent_t::~TEDecal_GameEvent_t(TEDecal_GameEvent_t *const this)
{
  *this = &off_47B9A90;
  CMsgTEDecal::~CMsgTEDecal(this);
}


// TEDecal_GameEvent_t::~TEDecal_GameEvent_t  (line 27, @0x0000000002f50c70, libserver.so)  // inlines: ~CNetMessagePB, ~TEDecal_GameEvent_t
// calls: CMsgTEDecal::~CMsgTEDecal, operator delete
void __fastcall TEDecal_GameEvent_t::~TEDecal_GameEvent_t(TEDecal_GameEvent_t *const this)
{
  *this = &off_47B9A90;
  CMsgTEDecal::~CMsgTEDecal(this);
  operator delete(this);
}


// CTEDecal::~CTEDecal  (line 32, @0x0000000002f55980, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEDecal_GameEvent_t
// calls: CMsgTEDecal::~CMsgTEDecal, CUtlSlot::~CUtlSlot
void __fastcall CTEDecal::~CTEDecal(CTEDecal *const this)
{
  CMsgTEDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9C10;
  *v2 = &off_47B9A90;
  CMsgTEDecal::~CMsgTEDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEDecal::~CTEDecal  (line 32, @0x0000000002f55ed0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEDecal, ~TEDecal_GameEvent_t
// calls: CMsgTEDecal::~CMsgTEDecal, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEDecal::~CTEDecal(CTEDecal *const this)
{
  CMsgTEDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9C10;
  *v2 = &off_47B9A90;
  CMsgTEDecal::~CMsgTEDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEDecal::Create  (line 39, @0x0000000002f58220, libserver.so)  // inlines: FindGameEvent<TEDecal_GameEvent_t>, FindOrCreateGameEvent<TEDecal_GameEvent_t>, PostEvent<TEDecal_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEDecal::Create(CTEDecal *const this, IRecipientFilter *const filter, double a3, float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 56);
}


// CTEDecal::StaticInit  (line 47, @0x0000000002f4f8d0, libserver.so)
void __fastcall CTEDecal::StaticInit(CTEDecal *const this)
{
  ;
}


// TE_Decal  (line 87, @0x0000000002f4e3e0, libserver.so)  // inlines: Create, FindGameEvent<TEDecal_GameEvent_t>, FindOrCreateGameEvent<TEDecal_GameEvent_t>, PostEvent<TEDecal_GameEvent_t>, VectorToCMsgVector, mutable_origin, mutable_start, set_entity, set_has_entity, set_has_index, set_has_origin, set_has_start, set_has_x, set_has_y, set_has_z, set_hitbox, set_index, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::Decal
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_Decal(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *start,
        CEntityIndex entity,
        int hitbox,
        int index)
{
  __int64 v12; // rax
  int v13; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v16; // r12
  int v17; // eax
  vec_t v18; // xmm0_4
  vec_t v19; // xmm0_4
  IGameEventSystem *v20; // rbx
  __int64 v21; // r12
  void (__fastcall *v22)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgVector *pMem; // [rsp+10h] [rbp-40h]

  v12 = qword_4D6E820;
  dword_4D6E818 |= 1u;
  if ( qword_4D6E820 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v12 = pMem;
    qword_4D6E820 = pMem;
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
  v16 = qword_4D6E828;
  dword_4D6E818 |= 2u;
  if ( qword_4D6E828 == 0 )
  {
    v16 = operator new(0x28u);
    CMsgVector::CMsgVector(v16);
    qword_4D6E828 = v16;
  }
  v17 = *(v16 + 4);
  *(v16 + 6) = LODWORD(start->x);
  *(v16 + 4) = v17 | 1;
  v18 = start->y;
  *(v16 + 4) = v17 | 3;
  *(v16 + 7) = v18;
  v19 = start->z;
  *(v16 + 4) = v17 | 7;
  v20 = g_pGameEventSystem;
  *(v16 + 8) = v19;
  v21 = IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent;
  dword_4D6E830 = entity.m_Data;
  dword_4D6E834 = hitbox;
  dword_4D6E838 = index;
  dword_4D6E818 |= 0x1Cu;
  v22 = *(*v20 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEDecal_GameEvent_t>(bool)::s_hEvent);
  v22(v20, 0xFFFFFFFFLL, 0, filter, v21, &qword_4D6E808, 56);
}


