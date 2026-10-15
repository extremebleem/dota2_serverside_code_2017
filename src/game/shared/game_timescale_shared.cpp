
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameTimescale::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 17, @0x000000000222f420, libserver.so)
void __cdecl CGameTimescale::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameTimescale  (line 19, @0x000000000222f430, libserver.so)
// globals: g_GameTimescale
CGameTimescale *__cdecl GameTimescale()
{
  return &g_GameTimescale;
}


// CGameTimescale::CGameTimescale  (line 22, @0x000000000222f440, libserver.so)
void __fastcall CGameTimescale::CGameTimescale(CGameTimescale *const this)
{
  this->_vptr_IGameSystem = &off_404BE30;
  this->m_flLastUpdateRealtime = 0.0;
}


// CGameTimescale::Init  (line 40, @0x000000000221a590, libserver.so)  // inlines: ResetTimescale
// globals: engine
bool __fastcall CGameTimescale::Init(CGameTimescale *const this)
{
  float m_flMinBlendRate; // xmm1_4

  m_flMinBlendRate = this->m_flMinBlendRate;
  this->m_flAcceleration = 0.050000001;
  this->m_flDesiredTimescale = 1.0;
  this->m_flCurrentTimescale = 1.0;
  this->m_flBlendRate = m_flMinBlendRate;
  this->m_flMinBlendRate = 0.1;
  this->m_flBlendDeltaMultiplier = 3.0;
  this->m_flLastUpdateRealtime = 0.0;
  (*(*engine + 512LL))(engine);
  return 1;
}


// CGameTimescale::Shutdown  (line 51, @0x000000000221a5f0, libserver.so)  // inlines: ResetTimescale
// globals: engine
void __fastcall CGameTimescale::Shutdown(CGameTimescale *const this)
{
  float m_flMinBlendRate; // xmm1_4

  m_flMinBlendRate = this->m_flMinBlendRate;
  this->m_flAcceleration = 0.050000001;
  this->m_flDesiredTimescale = 1.0;
  this->m_flCurrentTimescale = 1.0;
  this->m_flBlendRate = m_flMinBlendRate;
  this->m_flMinBlendRate = 0.1;
  this->m_flBlendDeltaMultiplier = 3.0;
  this->m_flLastUpdateRealtime = 0.0;
  (*(*engine + 512LL))(engine);
}


// CGameTimescale::FrameUpdatePostEntityThink  (line 65, @0x000000000222fa90, libserver.so)
// calls: CGameTimescale::UpdateTimescale
void __fastcall CGameTimescale::FrameUpdatePostEntityThink(
        CGameTimescale *const this,
        const EventServerPostEntityThink_t *const msg)
{
  CGameTimescale::UpdateTimescale(this);
}


// CGameTimescale::PostSpawnGroupLoad  (line 71, @0x000000000221a640, libserver.so)  // inlines: ResetTimescale
// globals: engine
void __fastcall CGameTimescale::PostSpawnGroupLoad(
        CGameTimescale *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  float m_flMinBlendRate; // xmm1_4

  m_flMinBlendRate = this->m_flMinBlendRate;
  this->m_flAcceleration = 0.050000001;
  this->m_flDesiredTimescale = 1.0;
  this->m_flCurrentTimescale = 1.0;
  this->m_flBlendRate = m_flMinBlendRate;
  this->m_flMinBlendRate = 0.1;
  this->m_flBlendDeltaMultiplier = 3.0;
  this->m_flLastUpdateRealtime = 0.0;
  (*(*engine + 512LL))(engine, msg);
}


// CGameTimescale::GameShutdown  (line 76, @0x000000000221a690, libserver.so)  // inlines: ResetTimescale
// globals: engine
void __fastcall CGameTimescale::GameShutdown(CGameTimescale *const this, const EventGameShutdown_t *const msg)
{
  float m_flMinBlendRate; // xmm1_4

  m_flMinBlendRate = this->m_flMinBlendRate;
  this->m_flAcceleration = 0.050000001;
  this->m_flDesiredTimescale = 1.0;
  this->m_flCurrentTimescale = 1.0;
  this->m_flBlendRate = m_flMinBlendRate;
  this->m_flMinBlendRate = 0.1;
  this->m_flBlendDeltaMultiplier = 3.0;
  this->m_flLastUpdateRealtime = 0.0;
  (*(*engine + 512LL))(engine, msg);
}


// CGameTimescale::SetCurrentTimescale  (line 81, @0x000000000222f460, libserver.so)  // inlines: CBroadcastRecipientFilter, CEventPosterBase, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessageCurrentTimescale_t, CUserMessagePB, FindGameEvent<CUserMessageCurrentTimescale_t>, FindOrCreateGameEvent<CUserMessageCurrentTimescale_t>, PostEvent<CUserMessageCurrentTimescale_t>, set_current, set_has_current, ~CBroadcastRecipientFilter, ~CEventPosterBase, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessageCurrentTimescale_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CUserMessageCurrentTimescale::CUserMessageCurrentTimescale, CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CFuncTimescale::InputReset
// globals: engine, IGameEventSystem::FindOrCreateGameEvent<CUserMessageCurrentTimescale_t>(bool)::s_hEvent
void __fastcall CGameTimescale::SetCurrentTimescale(CGameTimescale *const this, double a2, float flTimescale)
{
  IVEngineServer2 *v4; // rdi
  float m_flCurrentTimescale; // xmm0_4
  __int64 v6; // r14
  IGameEventSystem *v7; // rbx
  void (__fastcall *v8)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v9[2]; // [rsp+18h] [rbp-198h] BYREF
  int v10; // [rsp+28h] [rbp-188h]
  float v11; // [rsp+30h] [rbp-180h]
  int v12; // [rsp+38h] [rbp-178h]
  CReliableBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+178h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( *&a2 != this->m_flCurrentTimescale )
  {
    v4 = engine;
    this->m_flDesiredTimescale = *&a2;
    this->m_flCurrentTimescale = *&a2;
    (*(*v4 + 512LL))(v4, a2, flTimescale);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    CUserMessageCurrentTimescale::CUserMessageCurrentTimescale(v9);
    m_flCurrentTimescale = this->m_flCurrentTimescale;
    v9[0] = off_403FCF0;
    v10 |= 1u;
    v11 = m_flCurrentTimescale;
    v12 = 0;
    v6 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageCurrentTimescale_t>(bool)::s_hEvent;
    v7 = g_pGameEventSystem;
    v8 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageCurrentTimescale_t>(bool)::s_hEvent);
    v8(v7, 0, 0, &filter, v6, v9, 32);
    v9[0] = &off_403FB70;
    CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale(v9);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CGameTimescale::SetDesiredTimescale  (line 101, @0x000000000222f660, libserver.so)  // inlines: CBroadcastRecipientFilter, CEventPosterBase, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessageDesiredTimescale_t, CUserMessagePB, FindGameEvent<CUserMessageDesiredTimescale_t>, FindOrCreateGameEvent<CUserMessageDesiredTimescale_t>, PostEvent<CUserMessageDesiredTimescale_t>, set_acceleration, set_blenddeltamultiplier, set_desired, set_has_blenddeltamultiplier, set_has_desired, set_minblendrate, ~CBroadcastRecipientFilter, ~CEventPosterBase, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessageDesiredTimescale_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CUserMessageDesiredTimescale::CUserMessageDesiredTimescale, CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CFuncTimescale::InputStart, CFuncTimescale::InputStop
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageDesiredTimescale_t>(bool)::s_hEvent
void __fastcall CGameTimescale::SetDesiredTimescale(
        CGameTimescale *const this,
        float a2,
        float flTimescale,
        float flAcceleration,
        float flMinBlendRate,
        float flBlendDeltaMultiplier)
{
  float m_flDesiredTimescale; // xmm0_4
  float m_flAcceleration; // xmm0_4
  float m_flMinBlendRate; // xmm0_4
  __int64 v10; // r14
  IGameEventSystem *v11; // rbx
  void (__fastcall *v12)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v13[2]; // [rsp+18h] [rbp-1A8h] BYREF
  int v14; // [rsp+28h] [rbp-198h]
  float v15; // [rsp+30h] [rbp-190h]
  float v16; // [rsp+34h] [rbp-18Ch]
  float v17; // [rsp+38h] [rbp-188h]
  float m_flBlendDeltaMultiplier; // [rsp+3Ch] [rbp-184h]
  int v19; // [rsp+40h] [rbp-180h]
  CReliableBroadcastRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+188h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( a2 != this->m_flDesiredTimescale
    || flTimescale != this->m_flAcceleration
    || flAcceleration != this->m_flMinBlendRate
    || flMinBlendRate != this->m_flBlendDeltaMultiplier )
  {
    this->m_flDesiredTimescale = a2;
    this->m_flAcceleration = flTimescale;
    this->m_flMinBlendRate = flAcceleration;
    this->m_flBlendDeltaMultiplier = flMinBlendRate;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    CUserMessageDesiredTimescale::CUserMessageDesiredTimescale(v13);
    m_flDesiredTimescale = this->m_flDesiredTimescale;
    v13[0] = off_403FF30;
    v15 = m_flDesiredTimescale;
    m_flAcceleration = this->m_flAcceleration;
    v19 = 0;
    v16 = m_flAcceleration;
    m_flMinBlendRate = this->m_flMinBlendRate;
    v10 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageDesiredTimescale_t>(bool)::s_hEvent;
    v14 |= 0xFu;
    v17 = m_flMinBlendRate;
    m_flBlendDeltaMultiplier = this->m_flBlendDeltaMultiplier;
    v11 = g_pGameEventSystem;
    v12 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageDesiredTimescale_t>(bool)::s_hEvent);
    v12(v11, 0, 0, &filter, v10, v13, 40);
    v13[0] = &off_403FDB0;
    CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale(v13);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CGameTimescale::UpdateTimescale  (line 129, @0x000000000222f920, libserver.so)  // inlines: Approach
// callers: CGameTimescale::FrameUpdatePostEntityThink
// globals: engine
void __fastcall CGameTimescale::UpdateTimescale(CGameTimescale *const this)
{
  float m_flCurrentTimescale; // xmm2_4
  float m_flDesiredTimescale; // xmm0_4
  float m_flLastUpdateRealtime; // xmm1_4
  float realtime; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm5_4
  float m_flBlendRate; // xmm4_4
  float v9; // xmm1_4
  float m_flAcceleration; // xmm6_4
  float v11; // xmm1_4
  IVEngineServer2 *v12; // rdi

  if ( (*(*engine + 88LL))(engine) == 0 )
  {
    m_flCurrentTimescale = this->m_flCurrentTimescale;
    m_flDesiredTimescale = this->m_flDesiredTimescale;
    if ( m_flCurrentTimescale == m_flDesiredTimescale || (m_flLastUpdateRealtime = this->m_flLastUpdateRealtime) == 0.0 )
    {
      this->m_flBlendRate = this->m_flMinBlendRate;
      this->m_flLastUpdateRealtime = gpGlobals->realtime;
    }
    else
    {
      realtime = gpGlobals->realtime;
      this->m_flLastUpdateRealtime = gpGlobals->realtime;
      v6 = m_flDesiredTimescale - m_flCurrentTimescale;
      v7 = realtime - m_flLastUpdateRealtime;
      m_flBlendRate = this->m_flBlendRate;
      v9 = fmaxf(this->m_flMinBlendRate, fabs(m_flDesiredTimescale - m_flCurrentTimescale))
         * this->m_flBlendDeltaMultiplier;
      if ( m_flBlendRate <= v9 )
      {
        m_flAcceleration = this->m_flAcceleration;
        if ( (v9 - m_flBlendRate) <= m_flAcceleration )
        {
          if ( -m_flAcceleration > (v9 - m_flBlendRate) )
            v9 = m_flBlendRate - m_flAcceleration;
        }
        else
        {
          v9 = m_flBlendRate + m_flAcceleration;
        }
      }
      this->m_flBlendRate = v9;
      v11 = v9 * v7;
      if ( v6 > v11 )
      {
        m_flDesiredTimescale = m_flCurrentTimescale + v11;
      }
      else if ( -v11 > v6 )
      {
        m_flDesiredTimescale = m_flCurrentTimescale - v11;
      }
      v12 = engine;
      this->m_flCurrentTimescale = m_flDesiredTimescale;
      (*(*v12 + 512LL))(v12);
    }
  }
}


// CGameTimescale::ResetTimescale  (line 165, @0x000000000222faa0, libserver.so)
// globals: engine
void __fastcall CGameTimescale::ResetTimescale(CGameTimescale *const this)
{
  float m_flMinBlendRate; // xmm1_4

  m_flMinBlendRate = this->m_flMinBlendRate;
  this->m_flAcceleration = 0.050000001;
  this->m_flDesiredTimescale = 1.0;
  this->m_flCurrentTimescale = 1.0;
  this->m_flBlendRate = m_flMinBlendRate;
  this->m_flMinBlendRate = 0.1;
  this->m_flBlendDeltaMultiplier = 3.0;
  this->m_flLastUpdateRealtime = 0.0;
  (*(*engine + 512LL))(engine);
}


