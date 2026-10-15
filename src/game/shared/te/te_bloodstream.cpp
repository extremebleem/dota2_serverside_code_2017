// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_bloodstream.cpp:26
class TEBloodStream_GameEvent_t : public CNetMessagePB<418, CMsgTEBloodStream, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEBloodStream_GameEvent_t(TEBloodStream_GameEvent_t &);
	TEBloodStream_GameEvent_t(const TEBloodStream_GameEvent_t &);
	TEBloodStream_GameEvent_t();
	virtual ~TEBloodStream_GameEvent_t();

	// sizeof = 48
};

// src/game/shared/te/te_bloodstream.cpp:38
class CTEBloodStream : public CBaseTempEntity {
public:

	CTEBloodStream(CTEBloodStream &);
	CTEBloodStream(const CTEBloodStream &);
	CTEBloodStream();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	bool Dispatch(const TEBloodStream_GameEvent_t &);
	virtual ~CTEBloodStream();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 120
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEBloodStream_GameEvent_t::~TEBloodStream_GameEvent_t  (line 26, @0x0000000002f50930, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEBloodStream::~CMsgTEBloodStream
void __fastcall TEBloodStream_GameEvent_t::~TEBloodStream_GameEvent_t(TEBloodStream_GameEvent_t *const this)
{
  *this = &off_47B8F50;
  CMsgTEBloodStream::~CMsgTEBloodStream(this);
}


// TEBloodStream_GameEvent_t::~TEBloodStream_GameEvent_t  (line 26, @0x0000000002f50950, libserver.so)  // inlines: ~CNetMessagePB, ~TEBloodStream_GameEvent_t
// calls: CMsgTEBloodStream::~CMsgTEBloodStream, operator delete
void __fastcall TEBloodStream_GameEvent_t::~TEBloodStream_GameEvent_t(TEBloodStream_GameEvent_t *const this)
{
  *this = &off_47B8F50;
  CMsgTEBloodStream::~CMsgTEBloodStream(this);
  operator delete(this);
}


// CTEBloodStream::~CTEBloodStream  (line 38, @0x0000000002f55b10, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEBloodStream_GameEvent_t
// calls: CMsgTEBloodStream::~CMsgTEBloodStream, CUtlSlot::~CUtlSlot
void __fastcall CTEBloodStream::~CTEBloodStream(CTEBloodStream *const this)
{
  CMsgTEBloodStream *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B90D0;
  *v2 = &off_47B8F50;
  CMsgTEBloodStream::~CMsgTEBloodStream(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEBloodStream::~CTEBloodStream  (line 38, @0x0000000002f55d40, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEBloodStream, ~TEBloodStream_GameEvent_t
// calls: CMsgTEBloodStream::~CMsgTEBloodStream, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBloodStream::~CTEBloodStream(CTEBloodStream *const this)
{
  CMsgTEBloodStream *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B90D0;
  *v2 = &off_47B8F50;
  CMsgTEBloodStream::~CMsgTEBloodStream(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEBloodStream::Create  (line 43, @0x0000000002f57bf0, libserver.so)  // inlines: FindGameEvent<TEBloodStream_GameEvent_t>, FindOrCreateGameEvent<TEBloodStream_GameEvent_t>, PostEvent<TEBloodStream_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEBloodStream::Create(
        CTEBloodStream *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 48);
}


// CTEBloodStream::StaticInit  (line 51, @0x0000000002f4f870, libserver.so)
void __fastcall CTEBloodStream::StaticInit(CTEBloodStream *const this)
{
  ;
}


// TE_BloodStream  (line 98, @0x0000000002f4d750, libserver.so)  // inlines: Color, Create, FindGameEvent<TEBloodStream_GameEvent_t>, FindOrCreateGameEvent<TEBloodStream_GameEvent_t>, PostEvent<TEBloodStream_GameEvent_t>, SetColor, VectorToCMsgVector, mutable_direction, mutable_origin, set_amount, set_color, set_has_amount, set_has_color, set_has_direction, set_has_origin, set_has_x, set_has_y, set_has_z, set_x, set_y, set_z
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CTempEntsSystem::BloodStream, TE_BloodStream
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent
void __fastcall TE_BloodStream(
        IRecipientFilter *const filter,
        float delay,
        const Vector *org,
        const Vector *direction,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int amount)
{
  __int64 v14; // rax
  int v15; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v18; // r12
  int v19; // eax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm0_4
  IGameEventSystem *v22; // rbx
  __int64 v23; // r12
  void (__fastcall *v24)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r13
  CMsgVector *pMem; // [rsp+8h] [rbp-48h]

  v14 = qword_4D6EB40;
  dword_4D6EB38 |= 1u;
  if ( qword_4D6EB40 == 0 )
  {
    pMem = operator new(0x28u);
    CMsgVector::CMsgVector(pMem);
    v14 = pMem;
    qword_4D6EB40 = pMem;
  }
  v15 = *(v14 + 16);
  *(v14 + 24) = org->x;
  *(v14 + 16) = v15 | 1;
  y = org->y;
  *(v14 + 16) = v15 | 3;
  *(v14 + 28) = y;
  z = org->z;
  *(v14 + 16) = v15 | 7;
  *(v14 + 32) = z;
  v18 = qword_4D6EB48;
  dword_4D6EB38 |= 2u;
  if ( qword_4D6EB48 == 0 )
  {
    v18 = operator new(0x28u);
    CMsgVector::CMsgVector(v18);
    qword_4D6EB48 = v18;
  }
  v19 = *(v18 + 4);
  *(v18 + 6) = LODWORD(direction->x);
  *(v18 + 4) = v19 | 1;
  v20 = direction->y;
  *(v18 + 4) = v19 | 3;
  *(v18 + 7) = v20;
  v21 = direction->z;
  *(v18 + 4) = v19 | 7;
  LOBYTE(v19) = r;
  v22 = g_pGameEventSystem;
  BYTE1(v19) = g;
  *(v18 + 8) = v21;
  v23 = IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent;
  dword_4D6EB50 = (a << 24) | (b << 16) | v19;
  dword_4D6EB38 |= 0xCu;
  dword_4D6EB54 = amount;
  v24 = *(*v22 + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEBloodStream_GameEvent_t>(bool)::s_hEvent);
  v24(v22, 0xFFFFFFFFLL, 0, filter, v23, &qword_4D6EB28, 48);
}


// TE_BloodStream  (line 209, @0x0000000002f4d940, libserver.so)  // inlines: Color, SetColor
// calls: KeyValues::GetFloat, KeyValues::GetColor, KeyValues::GetInt, TE_BloodStream, __stack_chk_fail
// strings: "originx", "originy", "originz", "directionx", "directiony", "directionz"
void __fastcall TE_BloodStream(IRecipientFilter *const filter, double a2, float delay, KeyValues *pKeyValues)
{
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  unsigned int Color; // r12d
  int amount; // eax
  _DWORD v13[2]; // [rsp+10h] [rbp-58h] BYREF
  Vector vecOrigin; // [rsp+18h] [rbp-50h] BYREF
  float Float; // [rsp+24h] [rbp-44h]
  Vector vecDirection; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v13[0] = KeyValues::GetFloat(pKeyValues, "originx", delay);
  v13[1] = KeyValues::GetFloat(pKeyValues, "originy", v6);
  vecOrigin.x = KeyValues::GetFloat(pKeyValues, "originz", v7);
  vecOrigin.z = KeyValues::GetFloat(pKeyValues, "directionx", v8);
  Float = KeyValues::GetFloat(pKeyValues, "directiony", v9);
  vecDirection.x = KeyValues::GetFloat(pKeyValues, "directionz", v10);
  vecDirection.z = 0.0;
  Color = KeyValues::GetColor(pKeyValues, "color", &vecDirection.z);
  amount = KeyValues::GetInt(pKeyValues, "amount", 0);
  TE_BloodStream(filter, 0.0, v13, &vecOrigin.z, Color, SBYTE1(Color), BYTE2(Color), HIBYTE(Color), amount);
}


