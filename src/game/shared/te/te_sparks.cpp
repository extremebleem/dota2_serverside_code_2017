// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_sparks.cpp:21
class TESparks_GameEvent_t : public CNetMessagePB<422, CMsgTESparks, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TESparks_GameEvent_t(TESparks_GameEvent_t &);
	TESparks_GameEvent_t(const TESparks_GameEvent_t &);
	TESparks_GameEvent_t();
	virtual ~TESparks_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_sparks.cpp:34
class CTESparks : public CBaseTempEntity {
public:

	CTESparks(CTESparks &);
	CTESparks(const CTESparks &);
	CTESparks();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TESparks_GameEvent_t &);
	virtual ~CTESparks();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TESparks_GameEvent_t::~TESparks_GameEvent_t  (line 21, @0x0000000002f5d010, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTESparks::~CMsgTESparks
void __fastcall TESparks_GameEvent_t::~TESparks_GameEvent_t(TESparks_GameEvent_t *const this)
{
  *this = &off_47BC1F0;
  CMsgTESparks::~CMsgTESparks(this);
}


// TESparks_GameEvent_t::~TESparks_GameEvent_t  (line 21, @0x0000000002f5d030, libserver.so)  // inlines: ~CNetMessagePB, ~TESparks_GameEvent_t
// calls: CMsgTESparks::~CMsgTESparks, operator delete
void __fastcall TESparks_GameEvent_t::~TESparks_GameEvent_t(TESparks_GameEvent_t *const this)
{
  *this = &off_47BC1F0;
  CMsgTESparks::~CMsgTESparks(this);
  operator delete(this);
}


// CTESparks::~CTESparks  (line 34, @0x0000000002f601f0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TESparks_GameEvent_t
// calls: CMsgTESparks::~CMsgTESparks, CUtlSlot::~CUtlSlot
void __fastcall CTESparks::~CTESparks(CTESparks *const this)
{
  CMsgTESparks *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BC370;
  *v2 = &off_47BC1F0;
  CMsgTESparks::~CMsgTESparks(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTESparks::~CTESparks  (line 34, @0x0000000002f60560, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTESparks, ~TESparks_GameEvent_t
// calls: CMsgTESparks::~CMsgTESparks, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTESparks::~CTESparks(CTESparks *const this)
{
  CMsgTESparks *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BC370;
  *v2 = &off_47BC1F0;
  CMsgTESparks::~CMsgTESparks(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTESparks::Create  (line 39, @0x0000000002f61c60, libserver.so)  // inlines: FindGameEvent<TESparks_GameEvent_t>, FindOrCreateGameEvent<TESparks_GameEvent_t>, PostEvent<TESparks_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TESparks_GameEvent_t>(bool)::s_hEvent
void __fastcall CTESparks::Create(CTESparks *const this, IRecipientFilter *const filter, double a3, float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TESparks_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TESparks_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 48);
}


// CTESparks::StaticInit  (line 51, @0x0000000002f5c530, libserver.so)
void __fastcall CTESparks::StaticInit(CTESparks *const this)
{
  ;
}


// TE_Sparks  (line 79, @0x0000000002f5c030, libserver.so)  // inlines: Create, FindGameEvent<TESparks_GameEvent_t>, FindOrCreateGameEvent<TESparks_GameEvent_t>, PostEvent<TESparks_GameEvent_t>, Vector, VectorToCMsgVector, mutable_direction, mutable_origin, operator=, set_has_direction, set_has_length, set_has_magnitude, set_has_origin, set_has_x, set_has_y, set_has_z, set_length, set_magnitude, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::Sparks
// globals: IGameEventSystem::FindOrCreateGameEvent<TESparks_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_Sparks(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        int nMagnitude,
        int nTrailLength,
        const Vector *pDir)
{
  __int64 v11; // rax
  int v12; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int v15; // eax
  vec_t x; // r14d
  vec_t v17; // r12d
  vec_t v18; // ebx
  vec_t *v19; // rax
  int v20; // edx
  __int64 v21; // r12
  IGameEventSystem *v22; // rbx
  void (__fastcall *v23)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14
  CMsgVector *v24; // r15
  CMsgVector *pMem; // [rsp+8h] [rbp-38h]

  v11 = qword_4D6FC00;
  dword_4D6FBF8 |= 1u;
  if ( qword_4D6FC00 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v11 = pMem;
    qword_4D6FC00 = pMem;
  }
  v12 = *(v11 + 16);
  *(v11 + 24) = pos->x;
  *(v11 + 16) = v12 | 1;
  y = pos->y;
  *(v11 + 16) = v12 | 3;
  *(v11 + 28) = y;
  z = pos->z;
  *(v11 + 16) = v12 | 7;
  *(v11 + 32) = z;
  v15 = dword_4D6FBF8;
  dword_4D6FC08 = nMagnitude;
  dword_4D6FC0C = nTrailLength;
  dword_4D6FBF8 |= 6u;
  if ( pDir != 0 )
  {
    x = pDir->x;
    v17 = pDir->y;
    v18 = pDir->z;
  }
  else
  {
    v18 = 0.0;
    v17 = 0.0;
    x = 0.0;
  }
  dword_4D6FBF8 = v15 | 0xE;
  v19 = qword_4D6FC10;
  if ( qword_4D6FC10 == 0 )
  {
    v24 = operator new(0x28u);
    CMsgVector::CMsgVector(v24);
    qword_4D6FC10 = v24;
    v19 = v24;
  }
  v20 = *(v19 + 4);
  v19[6] = x;
  v19[7] = v17;
  v21 = IGameEventSystem::FindOrCreateGameEvent<TESparks_GameEvent_t>(bool)::s_hEvent;
  v19[8] = v18;
  *(v19 + 4) = v20 | 7;
  v22 = g_pGameEventSystem;
  v23 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v21);
  v23(v22, 0xFFFFFFFFLL, 0, filter, v21, &qword_4D6FBE8, 48);
}


