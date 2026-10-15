// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_breakmodel.cpp:21
class TEBreakModel_GameEvent_t : public CNetMessagePB<406, CMsgTEBreakModel, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBreakModel_GameEvent_t(TEBreakModel_GameEvent_t &);
	TEBreakModel_GameEvent_t(const TEBreakModel_GameEvent_t &);
	TEBreakModel_GameEvent_t();
	virtual ~TEBreakModel_GameEvent_t();

	// sizeof = 80
};

// src/game/shared/te/te_breakmodel.cpp:26
class CTEBreakModel : public CBaseTempEntity {
public:

	CTEBreakModel(CTEBreakModel &);
	CTEBreakModel(const CTEBreakModel &);
	CTEBreakModel();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	virtual void StaticShutdown();
	bool Dispatch(const TEBreakModel_GameEvent_t &);
	virtual ~CTEBreakModel();

	// vtable[2] Create
	// vtable[3] StaticInit
	// vtable[4] StaticShutdown
	// sizeof = 152
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBreakModel_GameEvent_t::~TEBreakModel_GameEvent_t  (line 21, @0x0000000002f509d0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBreakModel::~CMsgTEBreakModel
void __fastcall TEBreakModel_GameEvent_t::~TEBreakModel_GameEvent_t(TEBreakModel_GameEvent_t *const this)
{
  *this = &off_47B9190;
  CMsgTEBreakModel::~CMsgTEBreakModel(this);
}


// TEBreakModel_GameEvent_t::~TEBreakModel_GameEvent_t  (line 21, @0x0000000002f509f0, libserver.so)  // inlines: ~CNetMessagePB, ~TEBreakModel_GameEvent_t
// calls: CMsgTEBreakModel::~CMsgTEBreakModel, operator delete
void __fastcall TEBreakModel_GameEvent_t::~TEBreakModel_GameEvent_t(TEBreakModel_GameEvent_t *const this)
{
  *this = &off_47B9190;
  CMsgTEBreakModel::~CMsgTEBreakModel(this);
  operator delete(this);
}


// CTEBreakModel::~CTEBreakModel  (line 26, @0x0000000002f55ac0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEBreakModel_GameEvent_t
// calls: CMsgTEBreakModel::~CMsgTEBreakModel, CUtlSlot::~CUtlSlot
void __fastcall CTEBreakModel::~CTEBreakModel(CTEBreakModel *const this)
{
  CMsgTEBreakModel *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9310;
  *v2 = &off_47B9190;
  CMsgTEBreakModel::~CMsgTEBreakModel(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBreakModel::~CTEBreakModel  (line 26, @0x0000000002f55f20, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBreakModel, ~TEBreakModel_GameEvent_t
// calls: CMsgTEBreakModel::~CMsgTEBreakModel, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBreakModel::~CTEBreakModel(CTEBreakModel *const this)
{
  CMsgTEBreakModel *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9310;
  *v2 = &off_47B9190;
  CMsgTEBreakModel::~CMsgTEBreakModel(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBreakModel::Create  (line 33, @0x0000000002f57d40, libserver.so)  // inlines: FindGameEvent<TEBreakModel_GameEvent_t>, FindOrCreateGameEvent<TEBreakModel_GameEvent_t>, PostEvent<TEBreakModel_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBreakModel::Create(
        CTEBreakModel *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 80);
}


// CTEBreakModel::StaticInit  (line 41, @0x0000000002f4f880, libserver.so)
void __fastcall CTEBreakModel::StaticInit(CTEBreakModel *const this)
{
  ;
}


// CTEBreakModel::StaticShutdown  (line 49, @0x0000000002f4f890, libserver.so)
void __fastcall CTEBreakModel::StaticShutdown(CTEBreakModel *const this)
{
  ;
}


// TE_BreakModel  (line 85, @0x0000000002f4da80, libserver.so)  // inlines: Create, FindGameEvent<TEBreakModel_GameEvent_t>, FindOrCreateGameEvent<TEBreakModel_GameEvent_t>, PostEvent<TEBreakModel_GameEvent_t>, QAngleToCMsgQAngle, VectorToCMsgVector, mutable_angles, mutable_origin, mutable_size, mutable_velocity, set_count, set_flags, set_has_angles, set_has_flags, set_has_modelindex, set_has_origin, set_has_size, set_has_velocity, set_has_x, set_has_y, set_has_z, set_modelindex, set_randomization, set_time, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, CMsgQAngle::CMsgQAngle, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::BreakModel
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_BreakModel(
        IRecipientFilter *const filter,
        float delay,
        const Vector *const pos,
        const QAngle *const angles,
        const Vector *const size,
        const Vector *const vel,
        HModel modelindex,
        float time,
        int randomization,
        int count,
        int flags)
{
  __int64 v16; // rax
  int v17; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgQAngle *v20; // r14
  int v21; // eax
  vec_t v22; // xmm0_4
  vec_t v23; // xmm0_4
  CMsgVector *v24; // r13
  int v25; // eax
  vec_t v26; // xmm0_4
  vec_t v27; // xmm0_4
  __int64 v28; // rax
  int v29; // edx
  vec_t v30; // xmm0_4
  vec_t v31; // xmm0_4
  IGameEventSystem *v32; // rbx
  __int64 v33; // r12
  void (__fastcall *v34)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgVector *v35; // r12
  CMsgVector *pMem; // [rsp+8h] [rbp-48h]

  v16 = qword_4D6EAA0;
  dword_4D6EA98 |= 1u;
  if ( qword_4D6EAA0 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v16 = pMem;
    qword_4D6EAA0 = pMem;
  }
  v17 = *(v16 + 16);
  *(v16 + 24) = pos->x;
  *(v16 + 16) = v17 | 1;
  y = pos->y;
  *(v16 + 16) = v17 | 3;
  *(v16 + 28) = y;
  z = pos->z;
  *(v16 + 16) = v17 | 7;
  *(v16 + 32) = z;
  v20 = qword_4D6EAA8;
  dword_4D6EA98 |= 2u;
  if ( qword_4D6EAA8 == 0 )
  {
    v20 = operator new(0x28u);
    CMsgQAngle::CMsgQAngle(v20);
    qword_4D6EAA8 = v20;
  }
  v21 = *(v20 + 4);
  *(v20 + 6) = LODWORD(angles->x);
  *(v20 + 4) = v21 | 1;
  v22 = angles->y;
  *(v20 + 4) = v21 | 3;
  *(v20 + 7) = v22;
  v23 = angles->z;
  *(v20 + 4) = v21 | 7;
  *(v20 + 8) = v23;
  v24 = qword_4D6EAB0;
  dword_4D6EA98 |= 4u;
  if ( qword_4D6EAB0 == 0 )
  {
    v24 = operator new(0x28u);
    CMsgVector::CMsgVector(v24);
    qword_4D6EAB0 = v24;
  }
  v25 = *(v24 + 4);
  *(v24 + 6) = LODWORD(size->x);
  *(v24 + 4) = v25 | 1;
  v26 = size->y;
  *(v24 + 4) = v25 | 3;
  *(v24 + 7) = v26;
  v27 = size->z;
  *(v24 + 4) = v25 | 7;
  *(v24 + 8) = v27;
  v28 = qword_4D6EAB8;
  dword_4D6EA98 |= 8u;
  if ( qword_4D6EAB8 == 0 )
  {
    v35 = operator new(0x28u);
    CMsgVector::CMsgVector(v35);
    qword_4D6EAB8 = v35;
    v28 = v35;
  }
  v29 = *(v28 + 16);
  *(v28 + 24) = vel->x;
  *(v28 + 16) = v29 | 1;
  v30 = vel->y;
  *(v28 + 16) = v29 | 3;
  *(v28 + 28) = v30;
  v31 = vel->z;
  *(v28 + 16) = v29 | 7;
  *(v28 + 32) = v31;
  qword_4D6EAC0 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, modelindex.m_pBinding->m_pData);
  v32 = g_pGameEventSystem;
  v33 = IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent;
  dword_4D6EAC8 = randomization;
  dword_4D6EAD0 = LODWORD(time);
  dword_4D6EA98 |= 0x1F0u;
  dword_4D6EACC = count;
  dword_4D6EAD4 = flags;
  v34 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBreakModel_GameEvent_t>(bool)::s_hEvent);
  v34(v32, 0xFFFFFFFFLL, 0, filter, v33, &qword_4D6EA88, 80);
}


