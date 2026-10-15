// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_projecteddecal.cpp:30
class TEProjectedDecal_GameEvent_t : public CNetMessagePB<425, CMsgTEProjectedDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEProjectedDecal_GameEvent_t(TEProjectedDecal_GameEvent_t &);
	TEProjectedDecal_GameEvent_t(const TEProjectedDecal_GameEvent_t &);
	TEProjectedDecal_GameEvent_t();
	virtual ~TEProjectedDecal_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_projecteddecal.cpp:42
class CTEProjectedDecal : public CBaseTempEntity {
public:

	CTEProjectedDecal(CTEProjectedDecal &);
	CTEProjectedDecal(const CTEProjectedDecal &);
	CTEProjectedDecal();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEProjectedDecal_GameEvent_t &);
	virtual ~CTEProjectedDecal();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEProjectedDecal_GameEvent_t::~TEProjectedDecal_GameEvent_t  (line 30, @0x0000000002f5ced0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEProjectedDecal::~CMsgTEProjectedDecal
void __fastcall TEProjectedDecal_GameEvent_t::~TEProjectedDecal_GameEvent_t(TEProjectedDecal_GameEvent_t *const this)
{
  *this = &off_47BBD70;
  CMsgTEProjectedDecal::~CMsgTEProjectedDecal(this);
}


// TEProjectedDecal_GameEvent_t::~TEProjectedDecal_GameEvent_t  (line 30, @0x0000000002f5cef0, libserver.so)  // inlines: ~CNetMessagePB, ~TEProjectedDecal_GameEvent_t
// calls: CMsgTEProjectedDecal::~CMsgTEProjectedDecal, operator delete
void __fastcall TEProjectedDecal_GameEvent_t::~TEProjectedDecal_GameEvent_t(TEProjectedDecal_GameEvent_t *const this)
{
  *this = &off_47BBD70;
  CMsgTEProjectedDecal::~CMsgTEProjectedDecal(this);
  operator delete(this);
}


// CTEProjectedDecal::~CTEProjectedDecal  (line 42, @0x0000000002f60290, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEProjectedDecal_GameEvent_t
// calls: CMsgTEProjectedDecal::~CMsgTEProjectedDecal, CUtlSlot::~CUtlSlot
void __fastcall CTEProjectedDecal::~CTEProjectedDecal(CTEProjectedDecal *const this)
{
  CMsgTEProjectedDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BBEF0;
  *v2 = &off_47BBD70;
  CMsgTEProjectedDecal::~CMsgTEProjectedDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEProjectedDecal::~CTEProjectedDecal  (line 42, @0x0000000002f60740, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEProjectedDecal, ~TEProjectedDecal_GameEvent_t
// calls: CMsgTEProjectedDecal::~CMsgTEProjectedDecal, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEProjectedDecal::~CTEProjectedDecal(CTEProjectedDecal *const this)
{
  CMsgTEProjectedDecal *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BBEF0;
  *v2 = &off_47BBD70;
  CMsgTEProjectedDecal::~CMsgTEProjectedDecal(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEProjectedDecal::Create  (line 49, @0x0000000002f61ac0, libserver.so)  // inlines: FindGameEvent<TEProjectedDecal_GameEvent_t>, FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>, PostEvent<TEProjectedDecal_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEProjectedDecal::Create(
        CTEProjectedDecal *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 48);
}


// CTEProjectedDecal::StaticInit  (line 57, @0x0000000002f5c510, libserver.so)
void __fastcall CTEProjectedDecal::StaticInit(CTEProjectedDecal *const this)
{
  ;
}


// TE_ProjectDecal  (line 99, @0x0000000002f5bd50, libserver.so)  // inlines: Create, FindGameEvent<TEProjectedDecal_GameEvent_t>, FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>, PostEvent<TEProjectedDecal_GameEvent_t>, QAngleToCMsgQAngle, VectorToCMsgVector, mutable_angles, mutable_origin, set_distance, set_has_angles, set_has_distance, set_has_index, set_has_origin, set_has_x, set_has_y, set_has_z, set_index, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, CMsgQAngle::CMsgQAngle, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::ProjectDecal
// globals: IGameEventSystem::FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_ProjectDecal(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const QAngle *angles,
        float distance,
        int index)
{
  CMsgVector *v10; // r15
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
  CMsgQAngle *v21; // r12

  v10 = qword_4D6FD20;
  dword_4D6FD18 |= 1u;
  if ( qword_4D6FD20 == 0 )
  {
    v10 = operator new(0x28u);
    CMsgVector::CMsgVector(v10);
    qword_4D6FD20 = v10;
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
  v14 = qword_4D6FD28;
  dword_4D6FD18 |= 2u;
  if ( qword_4D6FD28 == 0 )
  {
    v21 = operator new(0x28u);
    CMsgQAngle::CMsgQAngle(v21);
    qword_4D6FD28 = v21;
    v14 = v21;
  }
  v15 = *(v14 + 16);
  *(v14 + 24) = angles->x;
  v16 = IGameEventSystem::FindOrCreateGameEvent<TEProjectedDecal_GameEvent_t>(bool)::s_hEvent;
  *(v14 + 16) = v15 | 1;
  v17 = angles->y;
  *(v14 + 16) = v15 | 3;
  *(v14 + 28) = v17;
  v18 = angles->z;
  *(v14 + 16) = v15 | 7;
  *(v14 + 32) = v18;
  dword_4D6FD34 = LODWORD(distance);
  dword_4D6FD30 = index;
  dword_4D6FD18 |= 0xCu;
  v19 = g_pGameEventSystem;
  v20 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v16);
  v20(v19, 0xFFFFFFFFLL, 0, filter, v16, &qword_4D6FD08, 48);
}


