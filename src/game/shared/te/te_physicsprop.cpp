// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_physicsprop.cpp:20
class TEPhysicsProp_GameEvent_t : public CNetMessagePB<423, CMsgTEPhysicsProp, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEPhysicsProp_GameEvent_t(TEPhysicsProp_GameEvent_t &);
	TEPhysicsProp_GameEvent_t(const TEPhysicsProp_GameEvent_t &);
	TEPhysicsProp_GameEvent_t();
	virtual ~TEPhysicsProp_GameEvent_t();

	// sizeof = 80
};

// src/game/shared/te/te_physicsprop.cpp:32
class CTEPhysicsProp : public CBaseTempEntity {
public:

	CTEPhysicsProp(CTEPhysicsProp &);
	CTEPhysicsProp(const CTEPhysicsProp &);
	CTEPhysicsProp();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	virtual void StaticShutdown();
	bool Dispatch(const TEPhysicsProp_GameEvent_t &);
	virtual ~CTEPhysicsProp();

	// vtable[2] Create
	// vtable[3] StaticInit
	// vtable[4] StaticShutdown
	// sizeof = 152
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEPhysicsProp_GameEvent_t::~TEPhysicsProp_GameEvent_t  (line 20, @0x0000000002f5cd90, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEPhysicsProp::~CMsgTEPhysicsProp
void __fastcall TEPhysicsProp_GameEvent_t::~TEPhysicsProp_GameEvent_t(TEPhysicsProp_GameEvent_t *const this)
{
  *this = &off_47BB8F0;
  CMsgTEPhysicsProp::~CMsgTEPhysicsProp(this);
}


// TEPhysicsProp_GameEvent_t::~TEPhysicsProp_GameEvent_t  (line 20, @0x0000000002f5cdb0, libserver.so)  // inlines: ~CNetMessagePB, ~TEPhysicsProp_GameEvent_t
// calls: CMsgTEPhysicsProp::~CMsgTEPhysicsProp, operator delete
void __fastcall TEPhysicsProp_GameEvent_t::~TEPhysicsProp_GameEvent_t(TEPhysicsProp_GameEvent_t *const this)
{
  *this = &off_47BB8F0;
  CMsgTEPhysicsProp::~CMsgTEPhysicsProp(this);
  operator delete(this);
}


// CTEPhysicsProp::~CTEPhysicsProp  (line 32, @0x0000000002f60330, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEPhysicsProp_GameEvent_t
// calls: CMsgTEPhysicsProp::~CMsgTEPhysicsProp, CUtlSlot::~CUtlSlot
void __fastcall CTEPhysicsProp::~CTEPhysicsProp(CTEPhysicsProp *const this)
{
  CMsgTEPhysicsProp *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BBA70;
  *v2 = &off_47BB8F0;
  CMsgTEPhysicsProp::~CMsgTEPhysicsProp(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEPhysicsProp::~CTEPhysicsProp  (line 32, @0x0000000002f607e0, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEPhysicsProp, ~TEPhysicsProp_GameEvent_t
// calls: CMsgTEPhysicsProp::~CMsgTEPhysicsProp, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEPhysicsProp::~CTEPhysicsProp(CTEPhysicsProp *const this)
{
  CMsgTEPhysicsProp *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BBA70;
  *v2 = &off_47BB8F0;
  CMsgTEPhysicsProp::~CMsgTEPhysicsProp(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEPhysicsProp::Create  (line 39, @0x0000000002f619f0, libserver.so)  // inlines: FindGameEvent<TEPhysicsProp_GameEvent_t>, FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>, PostEvent<TEPhysicsProp_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEPhysicsProp::Create(
        CTEPhysicsProp *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 80);
}


// CTEPhysicsProp::StaticInit  (line 47, @0x0000000002f5c4e0, libserver.so)
void __fastcall CTEPhysicsProp::StaticInit(CTEPhysicsProp *const this)
{
  ;
}


// CTEPhysicsProp::StaticShutdown  (line 55, @0x0000000002f5c4f0, libserver.so)
void __fastcall CTEPhysicsProp::StaticShutdown(CTEPhysicsProp *const this)
{
  ;
}


// TE_PhysicsProp  (line 93, @0x0000000002f5ba40, libserver.so)  // inlines: Color, Create, FindGameEvent<TEPhysicsProp_GameEvent_t>, FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>, PostEvent<TEPhysicsProp_GameEvent_t>, QAngleToCMsgQAngle, SetColor, VectorToCMsgVector, clear_has_scale, clear_scale, mutable_angles, mutable_origin, mutable_velocity, set_breakmodelsnottomake, set_color, set_effects, set_flags, set_has_angles, set_has_modelindex, set_has_origin, set_has_scale, set_has_velocity, set_has_x, set_has_y, set_has_z, set_modelindex, set_scale, set_skin, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, CMsgQAngle::CMsgQAngle, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::PhysicsProp
// globals: IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_PhysicsProp(
        IRecipientFilter *const filter,
        float delay,
        HModel modelindex,
        CUtlStringToken skin,
        const Vector *const pos,
        const QAngle *const angles,
        float flScale,
        const Vector *const vel,
        int flags,
        int effects,
        char r,
        char g,
        unsigned __int8 b,
        int nBreakModelsNotToMake)
{
  __int64 v19; // rax
  int v20; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgQAngle *v23; // r13
  int v24; // eax
  vec_t v25; // xmm0_4
  vec_t v26; // xmm0_4
  CMsgVector *v27; // r12
  int v28; // eax
  vec_t v29; // xmm0_4
  vec_t v30; // xmm0_4
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r12
  IGameEventSystem *v34; // rbx
  void (__fastcall *v35)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgVector *pMem; // [rsp+8h] [rbp-48h]

  v19 = qword_4D6FE20;
  dword_4D6FE18 |= 1u;
  if ( qword_4D6FE20 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v19 = pMem;
    qword_4D6FE20 = pMem;
  }
  v20 = *(v19 + 16);
  *(v19 + 24) = pos->x;
  *(v19 + 16) = v20 | 1;
  y = pos->y;
  *(v19 + 16) = v20 | 3;
  *(v19 + 28) = y;
  z = pos->z;
  *(v19 + 16) = v20 | 7;
  *(v19 + 32) = z;
  v23 = qword_4D6FE30;
  dword_4D6FE18 |= 4u;
  if ( qword_4D6FE30 == 0 )
  {
    v23 = operator new(0x28u);
    CMsgQAngle::CMsgQAngle(v23);
    qword_4D6FE30 = v23;
  }
  v24 = *(v23 + 4);
  *(v23 + 6) = LODWORD(angles->x);
  *(v23 + 4) = v24 | 1;
  v25 = angles->y;
  *(v23 + 4) = v24 | 3;
  *(v23 + 7) = v25;
  v26 = angles->z;
  *(v23 + 4) = v24 | 7;
  *(v23 + 8) = v26;
  v27 = qword_4D6FE28;
  dword_4D6FE18 |= 2u;
  if ( qword_4D6FE28 == 0 )
  {
    v27 = operator new(0x28u);
    CMsgVector::CMsgVector(v27);
    qword_4D6FE28 = v27;
  }
  v28 = *(v27 + 4);
  *(v27 + 6) = LODWORD(vel->x);
  *(v27 + 4) = v28 | 1;
  v29 = vel->y;
  *(v27 + 4) = v28 | 3;
  *(v27 + 7) = v29;
  v30 = vel->z;
  *(v27 + 4) = v28 | 7;
  *(v27 + 8) = v30;
  v31 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, modelindex.m_pBinding->m_pData);
  dword_4D6FE38 = skin.m_nHashCode;
  qword_4D6FE48 = v31;
  dword_4D6FE3C = flags;
  dword_4D6FE40 = effects;
  LOBYTE(v31) = r;
  BYTE1(v31) = g;
  dword_4D6FE44 = (b << 16) | v31 | 0xFF000000;
  dword_4D6FE50 = nBreakModelsNotToMake;
  if ( fabs(flScale - 1.0) > 0.0099999998 )
  {
    dword_4D6FE18 |= 0x3F8u;
    dword_4D6FE54 = LODWORD(flScale);
  }
  else
  {
    dword_4D6FE54 = 0;
    v32 = dword_4D6FE18;
    BYTE1(v32) = BYTE1(dword_4D6FE18) & 0xFD;
    dword_4D6FE18 = v32 | 0x1F8;
  }
  v33 = IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent;
  v34 = g_pGameEventSystem;
  v35 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEPhysicsProp_GameEvent_t>(bool)::s_hEvent);
  v35(v34, 0xFFFFFFFFLL, 0, filter, v33, &qword_4D6FE08, 80);
}


