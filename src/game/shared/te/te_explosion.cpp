// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_explosion.cpp:108
class TEExplosion_GameEvent_t : public CNetMessagePB<419, CMsgTEExplosion, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEExplosion_GameEvent_t(TEExplosion_GameEvent_t &);
	TEExplosion_GameEvent_t(const TEExplosion_GameEvent_t &);
	TEExplosion_GameEvent_t();
	virtual ~TEExplosion_GameEvent_t();

	// sizeof = 72
};

// src/game/shared/te/te_explosion.cpp:120
class CTEExplosion : public CBaseTempEntity {
public:

private:

	CTEExplosion(CTEExplosion &);
	CTEExplosion(const CTEExplosion &);
	CTEExplosion();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEExplosion_GameEvent_t &);
	virtual void RenderParticles(CParticleRenderIterator *);
	void AffectRagdolls(const TEExplosion_GameEvent_t &);
	virtual ~CTEExplosion();

	// vtable[2] Create
	// vtable[3] StaticInit
	// vtable[5] RenderParticles
	// sizeof = 152
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEExplosion_GameEvent_t::~TEExplosion_GameEvent_t  (line 108, @0x0000000002f50e30, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEExplosion::~CMsgTEExplosion
void __fastcall TEExplosion_GameEvent_t::~TEExplosion_GameEvent_t(TEExplosion_GameEvent_t *const this)
{
  *this = &off_47BA150;
  CMsgTEExplosion::~CMsgTEExplosion(this);
}


// TEExplosion_GameEvent_t::~TEExplosion_GameEvent_t  (line 108, @0x0000000002f50e50, libserver.so)  // inlines: ~CNetMessagePB, ~TEExplosion_GameEvent_t
// calls: CMsgTEExplosion::~CMsgTEExplosion, operator delete
void __fastcall TEExplosion_GameEvent_t::~TEExplosion_GameEvent_t(TEExplosion_GameEvent_t *const this)
{
  *this = &off_47BA150;
  CMsgTEExplosion::~CMsgTEExplosion(this);
  operator delete(this);
}


// CTEExplosion::~CTEExplosion  (line 120, @0x0000000002f55890, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEExplosion_GameEvent_t
// calls: CMsgTEExplosion::~CMsgTEExplosion, CUtlSlot::~CUtlSlot
void __fastcall CTEExplosion::~CTEExplosion(CTEExplosion *const this)
{
  CMsgTEExplosion *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BA2D0;
  *v2 = &off_47BA150;
  CMsgTEExplosion::~CMsgTEExplosion(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEExplosion::~CTEExplosion  (line 120, @0x0000000002f55c50, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEExplosion, ~TEExplosion_GameEvent_t
// calls: CMsgTEExplosion::~CMsgTEExplosion, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEExplosion::~CTEExplosion(CTEExplosion *const this)
{
  CMsgTEExplosion *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BA2D0;
  *v2 = &off_47BA150;
  CMsgTEExplosion::~CMsgTEExplosion(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEExplosion::Create  (line 127, @0x0000000002f58570, libserver.so)  // inlines: FindGameEvent<TEExplosion_GameEvent_t>, FindOrCreateGameEvent<TEExplosion_GameEvent_t>, PostEvent<TEExplosion_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEExplosion::Create(CTEExplosion *const this, IRecipientFilter *const filter, double a3, float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 72);
}


// CTEExplosion::StaticInit  (line 139, @0x0000000002f4f900, libserver.so)
void __fastcall CTEExplosion::StaticInit(CTEExplosion *const this)
{
  ;
}


// CTEExplosion::CTEExplosion  (line 200, @0x0000000002f4bc40, libserver.so)  // inlines: CNetMessagePB, TEExplosion_GameEvent_t, ~CBaseTempEntity
// calls: CBaseTempEntity::CBaseTempEntity, CMsgTEExplosion::CMsgTEExplosion, CUtlSlot::~CUtlSlot, _Unwind_Resume
// callers: __static_initialization_and_destruction_0
void __fastcall CTEExplosion::CTEExplosion(CTEExplosion *const this)
{
  CBaseTempEntity::CBaseTempEntity(this);
  *this = off_47BA2D0;
  CMsgTEExplosion::CMsgTEExplosion((this + 72));
  *(this + 18) = 0;
  *(this + 9) = off_47BA210;
}


// CTEExplosion::RenderParticles  (line 204, @0x0000000002f4b3b0, libserver.so)
void __fastcall CTEExplosion::RenderParticles(CTEExplosion *const this, CParticleRenderIterator *pIterator)
{
  ;
}


// CTEExplosion::AffectRagdolls  (line 211, @0x0000000002f4bca0, libserver.so)
void __fastcall CTEExplosion::AffectRagdolls(CTEExplosion *const this, const TEExplosion_GameEvent_t *const event)
{
  ;
}


// TE_Explosion  (line 265, @0x0000000002f4f1a0, libserver.so)  // inlines: Create, FindGameEvent<TEExplosion_GameEvent_t>, FindOrCreateGameEvent<TEExplosion_GameEvent_t>, PostEvent<TEExplosion_GameEvent_t>, VectorToCMsgVector, mutable_normal, mutable_origin, set_affect_ragdolls, set_flags, set_framerate, set_has_affect_ragdolls, set_has_materialtype, set_has_normal, set_has_origin, set_has_scale, set_has_x, set_has_y, set_has_z, set_magnitude, set_materialtype, set_radius, set_scale, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::Explosion
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_Explosion(
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        float scale,
        int framerate,
        int flags,
        int radius,
        int magnitude,
        const Vector *normal,
        unsigned __int8 materialType,
        char bShouldAffectRagdolls)
{
  __int64 v15; // rax
  int v16; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int v19; // eax
  __int64 v20; // rax
  int v21; // edx
  vec_t v22; // xmm0_4
  vec_t v23; // xmm0_4
  IGameEventSystem *v24; // rbx
  __int64 v25; // r12
  void (__fastcall *v26)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, void *, __int64); // r13
  CMsgVector *v27; // rax
  int v28; // edx
  CMsgVector *v29; // r12
  CMsgVector *v30; // rbx
  CMsgVector *pMem; // [rsp+10h] [rbp-50h]

  dword_4D6E638 |= 1u;
  v15 = qword_4D6E640;
  if ( qword_4D6E640 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v15 = pMem;
    qword_4D6E640 = pMem;
  }
  v16 = *(v15 + 16);
  *(v15 + 24) = pos->x;
  *(v15 + 16) = v16 | 1;
  y = pos->y;
  *(v15 + 16) = v16 | 3;
  *(v15 + 28) = y;
  z = pos->z;
  *(v15 + 16) = v16 | 7;
  *(v15 + 32) = z;
  v19 = dword_4D6E638;
  dword_4D6E664 = LODWORD(scale);
  dword_4D6E648 = framerate;
  dword_4D6E64C = flags;
  dword_4D6E65C = radius;
  dword_4D6E660 = magnitude;
  if ( normal != 0 )
  {
    LOBYTE(v19) = dword_4D6E638 | 0xEE;
    dword_4D6E638 = v19;
    v20 = qword_4D6E650;
    if ( qword_4D6E650 == 0 )
    {
      v29 = operator new(0x28u);
      CMsgVector::CMsgVector(v29);
      qword_4D6E650 = v29;
      v20 = v29;
    }
    v21 = *(v20 + 16);
    *(v20 + 24) = normal->x;
    *(v20 + 16) = v21 | 1;
    v22 = normal->y;
    *(v20 + 16) = v21 | 3;
    *(v20 + 28) = v22;
    v23 = normal->z;
    *(v20 + 16) = v21 | 7;
    *(v20 + 32) = v23;
  }
  else
  {
    LOBYTE(v19) = dword_4D6E638 | 0xEE;
    dword_4D6E638 = v19;
    v27 = qword_4D6E650;
    if ( qword_4D6E650 == 0 )
    {
      v30 = operator new(0x28u);
      CMsgVector::CMsgVector(v30);
      qword_4D6E650 = v30;
      v27 = v30;
    }
    v28 = *(v27 + 4);
    *(v27 + 6) = 0;
    *(v27 + 7) = 0;
    *(v27 + 8) = 1065353216;
    *(v27 + 4) = v28 | 7;
  }
  v24 = g_pGameEventSystem;
  v25 = IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent;
  dword_4D6E638 |= 0x110u;
  dword_4D6E658 = materialType;
  byte_4D6E668 = bShouldAffectRagdolls;
  v26 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEExplosion_GameEvent_t>(bool)::s_hEvent);
  v26(v24, 0xFFFFFFFFLL, 0, filter, v25, &unk_4D6E628, 72);
}


