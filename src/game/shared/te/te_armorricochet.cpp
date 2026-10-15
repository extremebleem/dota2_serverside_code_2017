// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_armorricochet.cpp:31
class TEArmorRicochet_GameEvent_t : public CNetMessagePB<401, CMsgTEArmorRicochet, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEArmorRicochet_GameEvent_t(TEArmorRicochet_GameEvent_t &);
	TEArmorRicochet_GameEvent_t(const TEArmorRicochet_GameEvent_t &);
	TEArmorRicochet_GameEvent_t();
	virtual ~TEArmorRicochet_GameEvent_t();

	// sizeof = 40
};

// src/game/shared/te/te_armorricochet.cpp:33
class CTEArmorRicochet : public CBaseTempEntity {
public:

	CTEArmorRicochet(CTEArmorRicochet &);
	CTEArmorRicochet(const CTEArmorRicochet &);
	CTEArmorRicochet();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEArmorRicochet_GameEvent_t &);
	virtual ~CTEArmorRicochet();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 112
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEArmorRicochet_GameEvent_t::~TEArmorRicochet_GameEvent_t  (line 31, @0x0000000002f50610, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEArmorRicochet::~CMsgTEArmorRicochet
void __fastcall TEArmorRicochet_GameEvent_t::~TEArmorRicochet_GameEvent_t(TEArmorRicochet_GameEvent_t *const this)
{
  *this = &off_47B83D0;
  CMsgTEArmorRicochet::~CMsgTEArmorRicochet(this);
}


// TEArmorRicochet_GameEvent_t::~TEArmorRicochet_GameEvent_t  (line 31, @0x0000000002f50630, libserver.so)  // inlines: ~CNetMessagePB, ~TEArmorRicochet_GameEvent_t
// calls: CMsgTEArmorRicochet::~CMsgTEArmorRicochet, operator delete
void __fastcall TEArmorRicochet_GameEvent_t::~TEArmorRicochet_GameEvent_t(TEArmorRicochet_GameEvent_t *const this)
{
  *this = &off_47B83D0;
  CMsgTEArmorRicochet::~CMsgTEArmorRicochet(this);
  operator delete(this);
}


// CTEArmorRicochet::~CTEArmorRicochet  (line 33, @0x0000000002f55b60, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEArmorRicochet_GameEvent_t
// calls: CMsgTEArmorRicochet::~CMsgTEArmorRicochet, CUtlSlot::~CUtlSlot
void __fastcall CTEArmorRicochet::~CTEArmorRicochet(CTEArmorRicochet *const this)
{
  CMsgTEArmorRicochet *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B8550;
  *v2 = &off_47B83D0;
  CMsgTEArmorRicochet::~CMsgTEArmorRicochet(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEArmorRicochet::~CTEArmorRicochet  (line 33, @0x0000000002f55c00, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEArmorRicochet, ~TEArmorRicochet_GameEvent_t
// calls: CMsgTEArmorRicochet::~CMsgTEArmorRicochet, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEArmorRicochet::~CTEArmorRicochet(CTEArmorRicochet *const this)
{
  CMsgTEArmorRicochet *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B8550;
  *v2 = &off_47B83D0;
  CMsgTEArmorRicochet::~CMsgTEArmorRicochet(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEArmorRicochet::Create  (line 38, @0x0000000002f57450, libserver.so)  // inlines: FindGameEvent<TEArmorRicochet_GameEvent_t>, FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>, PostEvent<TEArmorRicochet_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEArmorRicochet::Create(
        CTEArmorRicochet *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 40);
}


// CTEArmorRicochet::StaticInit  (line 50, @0x0000000002f4f820, libserver.so)
void __fastcall CTEArmorRicochet::StaticInit(CTEArmorRicochet *const this)
{
  ;
}


// TE_ArmorRicochet  (line 92, @0x0000000002f4bff0, libserver.so)  // inlines: Create, FindGameEvent<TEArmorRicochet_GameEvent_t>, FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>, PostEvent<TEArmorRicochet_GameEvent_t>, VectorToCMsgVector, mutable_dir, mutable_pos, set_has_dir, set_has_pos, set_has_x, set_has_y, set_has_z, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::ArmorRicochet
// globals: IGameEventSystem::FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>(bool)::s_hEvent, g_pGameEventSystem
void __fastcall TE_ArmorRicochet(IRecipientFilter *const filter, float delay, const Vector *pos, const Vector *dir)
{
  __int64 v7; // rax
  int v8; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r12
  vec_t v14; // xmm0_4
  vec_t v15; // xmm0_4
  IGameEventSystem *v16; // rbx
  void (__fastcall *v17)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14
  CMsgVector *v18; // r14
  CMsgVector *v19; // r12

  v7 = qword_4D6EDC0;
  dword_4D6EDB8 |= 1u;
  if ( qword_4D6EDC0 == 0 )
  {
    v18 = operator new(0x28u);
    CMsgVector::CMsgVector(v18);
    qword_4D6EDC0 = v18;
    v7 = v18;
  }
  v8 = *(v7 + 16);
  *(v7 + 24) = pos->x;
  *(v7 + 16) = v8 | 1;
  y = pos->y;
  *(v7 + 16) = v8 | 3;
  *(v7 + 28) = y;
  z = pos->z;
  *(v7 + 16) = v8 | 7;
  *(v7 + 32) = z;
  v11 = qword_4D6EDC8;
  dword_4D6EDB8 |= 2u;
  if ( qword_4D6EDC8 == 0 )
  {
    v19 = operator new(0x28u);
    CMsgVector::CMsgVector(v19);
    qword_4D6EDC8 = v19;
    v11 = v19;
  }
  v12 = *(v11 + 16);
  v13 = IGameEventSystem::FindOrCreateGameEvent<TEArmorRicochet_GameEvent_t>(bool)::s_hEvent;
  *(v11 + 24) = dir->x;
  *(v11 + 16) = v12 | 1;
  v14 = dir->y;
  *(v11 + 16) = v12 | 3;
  *(v11 + 28) = v14;
  v15 = dir->z;
  *(v11 + 16) = v12 | 7;
  v16 = g_pGameEventSystem;
  *(v11 + 32) = v15;
  v17 = *(*v16 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v13);
  v17(v16, 0xFFFFFFFFLL, 0, filter, v13, &qword_4D6EDA8, 40);
}


