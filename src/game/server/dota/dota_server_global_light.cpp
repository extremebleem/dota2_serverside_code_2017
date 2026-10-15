
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SetTempGlobalLightColor  (line 10, @0x000000000266bd80, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_GlobalLightColor_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_GlobalLightColor_t>, FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightColor_t>, PostEvent<CDOTAUserMsg_GlobalLightColor_t>, SendUserMessage<CDOTAUserMsg_GlobalLightColor_t>, set_color, set_duration, set_has_color, set_has_duration, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_GlobalLightColor_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CDOTAUserMsg_GlobalLightColor::CDOTAUserMsg_GlobalLightColor, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_GlobalLightColor::~CDOTAUserMsg_GlobalLightColor, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Ability_Zuus_ThundergodsWrath::OnSpellStart
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightColor_t>(bool)::s_hEvent
void __fastcall SetTempGlobalLightColor(const Color *const color, __m128i a2, float duration)
{
  int v4; // r13d
  int v5; // edx
  __int64 v6; // r14
  IGameEventSystem *v7; // r13
  void (__fastcall *v8)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v9[2]; // [rsp+10h] [rbp-190h] BYREF
  int v10; // [rsp+20h] [rbp-180h]
  int v11; // [rsp+28h] [rbp-178h]
  int durationa; // [rsp+2Ch] [rbp-174h]
  CReliableBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-38h]

  v4 = _mm_cvtsi128_si32(a2);
  v14 = __readfsqword(0x28u);
  CDOTAUserMsg_GlobalLightColor::CDOTAUserMsg_GlobalLightColor(v9);
  v9[0] = off_416BE10;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  durationa = v4;
  v5 = *color;
  v6 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightColor_t>(bool)::s_hEvent;
  v10 |= 3u;
  v11 = v5;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightColor_t>(bool)::s_hEvent);
  v8(v7, 0, 0, &filter, v6, v9, 32);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  v9[0] = &off_416BC90;
  CDOTAUserMsg_GlobalLightColor::~CDOTAUserMsg_GlobalLightColor(v9);
}


// SetTempGlobalLightDirection  (line 20, @0x000000000266bf10, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_GlobalLightDirection_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_GlobalLightDirection_t>, FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightDirection_t>, PostEvent<CDOTAUserMsg_GlobalLightDirection_t>, SendUserMessage<CDOTAUserMsg_GlobalLightDirection_t>, mutable_direction, set_duration, set_has_direction, set_has_duration, set_has_x, set_has_y, set_has_z, set_x, set_y, set_z, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_GlobalLightDirection_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CDOTAUserMsg_GlobalLightDirection::CDOTAUserMsg_GlobalLightDirection, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_GlobalLightDirection::~CDOTAUserMsg_GlobalLightDirection, operator new, CMsgVector::CMsgVector, __stack_chk_fail, operator delete, _Unwind_Resume
// callers: CDOTA_Ability_Zuus_ThundergodsWrath::OnSpellStart
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightDirection_t>(bool)::s_hEvent
void __fastcall SetTempGlobalLightDirection(const Vector *const vDir, float a2, float duration)
{
  CMsgVector *v4; // r14
  __m128i x_low; // xmm1
  int v6; // r15d
  CMsgVector *v7; // r14
  __m128i y_low; // xmm3
  int v9; // r15d
  CMsgVector *v10; // rax
  vec_t z; // r13d
  __int64 v12; // r14
  IGameEventSystem *v13; // r13
  void (__fastcall *v14)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CMsgVector *v15; // r14
  _QWORD v17[2]; // [rsp+10h] [rbp-1A0h] BYREF
  int v18; // [rsp+20h] [rbp-190h]
  CMsgVector *v19; // [rsp+28h] [rbp-188h]
  float v20; // [rsp+30h] [rbp-180h]
  CReliableBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+178h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CDOTAUserMsg_GlobalLightDirection::CDOTAUserMsg_GlobalLightDirection(v17);
  v17[0] = off_416C050;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  v4 = v19;
  x_low = LODWORD(vDir->x);
  v18 |= 1u;
  v6 = _mm_cvtsi128_si32(x_low);
  if ( v19 == 0 )
  {
    v4 = operator new(0x28u);
    CMsgVector::CMsgVector(v4);
    v19 = v4;
  }
  *(v4 + 4) |= 1u;
  *(v4 + 6) = v6;
  v7 = v19;
  y_low = LODWORD(vDir->y);
  v18 |= 1u;
  v9 = _mm_cvtsi128_si32(y_low);
  if ( v19 == 0 )
  {
    v7 = operator new(0x28u);
    CMsgVector::CMsgVector(v7);
    v19 = v7;
  }
  *(v7 + 4) |= 2u;
  *(v7 + 7) = v9;
  v10 = v19;
  v18 |= 1u;
  z = vDir->z;
  if ( v19 == 0 )
  {
    v15 = operator new(0x28u);
    CMsgVector::CMsgVector(v15);
    v19 = v15;
    v10 = v15;
  }
  *(v10 + 4) |= 4u;
  *(v10 + 8) = z;
  v12 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightDirection_t>(bool)::s_hEvent;
  v18 |= 2u;
  v20 = a2;
  v13 = g_pGameEventSystem;
  v14 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_GlobalLightDirection_t>(bool)::s_hEvent);
  v14(v13, 0, 0, &filter, v12, v17, 40);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  v17[0] = &off_416BED0;
  CDOTAUserMsg_GlobalLightDirection::~CDOTAUserMsg_GlobalLightDirection(v17);
}


