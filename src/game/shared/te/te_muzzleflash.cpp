// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_muzzleflash.cpp:19
class TEMuzzleFlash_GameEvent_t : public CNetMessagePB<417, CMsgTEMuzzleFlash, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEMuzzleFlash_GameEvent_t(TEMuzzleFlash_GameEvent_t &);
	TEMuzzleFlash_GameEvent_t(const TEMuzzleFlash_GameEvent_t &);
	TEMuzzleFlash_GameEvent_t();
	virtual ~TEMuzzleFlash_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_muzzleflash.cpp:45
class CTEMuzzleFlash : public CBaseTempEntity {
public:

	CTEMuzzleFlash(CTEMuzzleFlash &);
	CTEMuzzleFlash(const CTEMuzzleFlash &);
	CTEMuzzleFlash();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEMuzzleFlash_GameEvent_t &);
	virtual ~CTEMuzzleFlash();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEMuzzleFlash_GameEvent_t::~TEMuzzleFlash_GameEvent_t  (line 19, @0x0000000002f5ccf0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEMuzzleFlash::~CMsgTEMuzzleFlash
void __fastcall TEMuzzleFlash_GameEvent_t::~TEMuzzleFlash_GameEvent_t(TEMuzzleFlash_GameEvent_t *const this)
{
  *this = &off_47BB6B0;
  CMsgTEMuzzleFlash::~CMsgTEMuzzleFlash(this);
}


// TEMuzzleFlash_GameEvent_t::~TEMuzzleFlash_GameEvent_t  (line 19, @0x0000000002f5cd10, libserver.so)  // inlines: ~CNetMessagePB, ~TEMuzzleFlash_GameEvent_t
// calls: CMsgTEMuzzleFlash::~CMsgTEMuzzleFlash, operator delete
void __fastcall TEMuzzleFlash_GameEvent_t::~TEMuzzleFlash_GameEvent_t(TEMuzzleFlash_GameEvent_t *const this)
{
  *this = &off_47BB6B0;
  CMsgTEMuzzleFlash::~CMsgTEMuzzleFlash(this);
  operator delete(this);
}


// CTEMuzzleFlash::~CTEMuzzleFlash  (line 45, @0x0000000002f60380, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEMuzzleFlash_GameEvent_t
// calls: CMsgTEMuzzleFlash::~CMsgTEMuzzleFlash, CUtlSlot::~CUtlSlot
void __fastcall CTEMuzzleFlash::~CTEMuzzleFlash(CTEMuzzleFlash *const this)
{
  CMsgTEMuzzleFlash *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BB830;
  *v2 = &off_47BB6B0;
  CMsgTEMuzzleFlash::~CMsgTEMuzzleFlash(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEMuzzleFlash::~CTEMuzzleFlash  (line 45, @0x0000000002f60650, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEMuzzleFlash, ~TEMuzzleFlash_GameEvent_t
// calls: CMsgTEMuzzleFlash::~CMsgTEMuzzleFlash, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEMuzzleFlash::~CTEMuzzleFlash(CTEMuzzleFlash *const this)
{
  CMsgTEMuzzleFlash *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47BB830;
  *v2 = &off_47BB6B0;
  CMsgTEMuzzleFlash::~CMsgTEMuzzleFlash(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEMuzzleFlash::Create  (line 52, @0x0000000002f61920, libserver.so)  // inlines: FindGameEvent<TEMuzzleFlash_GameEvent_t>, FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>, PostEvent<TEMuzzleFlash_GameEvent_t>
// globals: IGameEventSystem::FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEMuzzleFlash::Create(
        CTEMuzzleFlash *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  __int64 v6; // r12
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = IGameEventSystem::FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v7, 0xFFFFFFFFLL, 0, filter, v6, this + 72, 48);
}


// CTEMuzzleFlash::StaticInit  (line 64, @0x0000000002f5c4d0, libserver.so)
void __fastcall CTEMuzzleFlash::StaticInit(CTEMuzzleFlash *const this)
{
  ;
}


// TE_MuzzleFlash  (line 119, @0x0000000002f5b870, libserver.so)  // inlines: Create, FindGameEvent<TEMuzzleFlash_GameEvent_t>, FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>, PostEvent<TEMuzzleFlash_GameEvent_t>, QAngleToCMsgQAngle, VectorToCMsgVector, mutable_angles, mutable_origin, set_has_angles, set_has_origin, set_has_scale, set_has_type, set_has_x, set_has_y, set_has_z, set_scale, set_type, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, CMsgQAngle::CMsgQAngle, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::MuzzleFlash
// globals: IGameEventSystem::FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_MuzzleFlash(
        IRecipientFilter *const filter,
        float delay,
        const Vector *const start,
        const QAngle *const angles,
        float scale,
        int type)
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

  v10 = qword_4D6FEC0;
  dword_4D6FEB8 |= 1u;
  if ( qword_4D6FEC0 == 0 )
  {
    v10 = operator new(0x28u);
    CMsgVector::CMsgVector(v10);
    qword_4D6FEC0 = v10;
  }
  v11 = *(v10 + 4);
  *(v10 + 6) = LODWORD(start->x);
  *(v10 + 4) = v11 | 1;
  y = start->y;
  *(v10 + 4) = v11 | 3;
  *(v10 + 7) = y;
  z = start->z;
  *(v10 + 4) = v11 | 7;
  *(v10 + 8) = z;
  v14 = qword_4D6FEC8;
  dword_4D6FEB8 |= 2u;
  if ( qword_4D6FEC8 == 0 )
  {
    v21 = operator new(0x28u);
    CMsgQAngle::CMsgQAngle(v21);
    qword_4D6FEC8 = v21;
    v14 = v21;
  }
  v15 = *(v14 + 16);
  *(v14 + 24) = angles->x;
  v16 = IGameEventSystem::FindOrCreateGameEvent<TEMuzzleFlash_GameEvent_t>(bool)::s_hEvent;
  *(v14 + 16) = v15 | 1;
  v17 = angles->y;
  *(v14 + 16) = v15 | 3;
  *(v14 + 28) = v17;
  v18 = angles->z;
  *(v14 + 16) = v15 | 7;
  *(v14 + 32) = v18;
  dword_4D6FED0 = LODWORD(scale);
  dword_4D6FED4 = type;
  dword_4D6FEB8 |= 0xCu;
  v19 = g_pGameEventSystem;
  v20 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v16);
  v20(v19, 0xFFFFFFFFLL, 0, filter, v16, &qword_4D6FEA8, 48);
}


