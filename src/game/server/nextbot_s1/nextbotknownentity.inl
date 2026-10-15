
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CKnownEntity::~CKnownEntity  (line 32, @0x0000000002f364b0, libserver.so)
void __fastcall CKnownEntity::~CKnownEntity(CKnownEntity *const this)
{
  this->_vptr_CKnownEntity = off_47B4DD0;
}


// CKnownEntity::~CKnownEntity  (line 32, @0x0000000002f36aa0, libserver.so)  // inlines: ~CKnownEntity
// calls: operator delete
void __fastcall CKnownEntity::~CKnownEntity(CKnownEntity *const this)
{
  this->_vptr_CKnownEntity = off_47B4DD0;
  operator delete(this);
}


// CKnownEntity::Destroy  (line 34, @0x0000000002f364c0, libserver.so)  // inlines: Set, operator=
void __fastcall CKnownEntity::Destroy(CKnownEntity *const this)
{
  this->m_who.m_Index = -1;
  this->m_isVisible = 0;
}


// CKnownEntity::UpdatePosition  (line 40, @0x0000000002f37480, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CEntityInstance*, operator->, operator=
// calls: CBaseEntity::GetAbsOrigin
// callers: IVision::UpdateKnownEntities
// globals: CEntityHandle::gm_pEntityList
void __fastcall CKnownEntity::UpdatePosition(CKnownEntity *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const Vector *AbsOrigin; // rax
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v7; // rsi
  vec_t z; // xmm0_4
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  __int64 v11; // rcx
  CEntityIdentity *v12; // rdx
  __int64 v13; // rdi
  CNavArea *v14; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v16; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_Index = this->m_who.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_who.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_who.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4->m_pInstance);
        m_pInstance = 0;
        v7 = CEntityHandle::gm_pEntityList;
        this->m_lastKnownPostion.x = AbsOrigin->x;
        this->m_lastKnownPostion.y = AbsOrigin->y;
        z = AbsOrigin->z;
        v9 = this->m_who.m_Index;
        this->m_lastKnownPostion.z = z;
        if ( v9 + 2 > 1 )
        {
          v10 = v7->m_pIdentityChunks[(LOWORD(this->m_who.m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = this->m_who.m_Index & 0x1FF;
            v7 = (8 * v11);
            v12 = &v10[v11];
            if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
              m_pInstance = v12->m_pInstance;
          }
        }
        v13 = (*(m_pInstance->_vptr_IHandleEntity + 147))(m_pInstance, v7);
        v14 = 0;
        if ( v13 != 0 )
          v14 = (*(*v13 + 2888LL))(v13);
        this->m_lastKnownArea = v14;
        m_flCurrentTime = 0.0;
        v16 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, 0.0);
          }
          m_flCurrentTime = v16->m_flCurrentTime;
        }
        this->m_whenLastKnown = m_flCurrentTime;
      }
    }
  }
}


// CKnownEntity::GetEntity  (line 51, @0x0000000002f37290, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CKnownEntity::GetEntity(const CKnownEntity *const this)
{
  CBaseEntity *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_who.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_who.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_who.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// CKnownEntity::GetLastKnownPosition  (line 56, @0x0000000002f364e0, libserver.so)
const Vector *__fastcall CKnownEntity::GetLastKnownPosition(const CKnownEntity *const this)
{
  return &this->m_lastKnownPostion;
}


// CKnownEntity::HasLastKnownPositionBeenSeen  (line 63, @0x0000000002f364f0, libserver.so)
bool __fastcall CKnownEntity::HasLastKnownPositionBeenSeen(const CKnownEntity *const this)
{
  return this->m_hasLastKnownPositionBeenSeen;
}


// CKnownEntity::MarkLastKnownPositionAsSeen  (line 68, @0x0000000002f36500, libserver.so)
void __fastcall CKnownEntity::MarkLastKnownPositionAsSeen(CKnownEntity *const this)
{
  this->m_hasLastKnownPositionBeenSeen = 1;
}


// CKnownEntity::GetLastKnownArea  (line 73, @0x0000000002f36510, libserver.so)
const CNavArea *__fastcall CKnownEntity::GetLastKnownArea(const CKnownEntity *const this)
{
  return this->m_lastKnownArea;
}


// CKnownEntity::GetTimeSinceLastKnown  (line 78, @0x0000000002f371d0, libserver.so)  // inlines: curtime
float __fastcall CKnownEntity::GetTimeSinceLastKnown(const CKnownEntity *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  return m_flCurrentTime - this->m_whenLastKnown;
}


// CKnownEntity::GetTimeSinceBecameKnown  (line 83, @0x0000000002f37230, libserver.so)  // inlines: curtime
float __fastcall CKnownEntity::GetTimeSinceBecameKnown(const CKnownEntity *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  return m_flCurrentTime - this->m_whenBecameKnown;
}


// CKnownEntity::UpdateVisibilityStatus  (line 88, @0x0000000002f37390, libserver.so)  // inlines: curtime
void __fastcall CKnownEntity::UpdateVisibilityStatus(CKnownEntity *const this, bool visible)
{
  CGlobalVars *v3; // r12
  CGlobalVars *v4; // rax
  float v5; // xmm0_4
  void (__fastcall *v6)(__int64, double); // rax
  CGlobalVars *v7; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float m_flCurrentTime; // xmm0_4
  bool v10; // [rsp+Ch] [rbp-24h]
  bool v11; // [rsp+Ch] [rbp-24h]

  if ( visible )
  {
    if ( this->m_isVisible )
    {
      v3 = gpGlobals;
      v4 = gpGlobals;
    }
    else
    {
      v4 = gpGlobals;
      v7 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        v3 = gpGlobals;
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          v3 = gpGlobals;
          if ( m_pfnWarningFunc != 0 )
          {
            v11 = visible;
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            v3 = gpGlobals;
            visible = v11;
            v4 = gpGlobals;
          }
        }
        m_flCurrentTime = v7->m_flCurrentTime;
      }
      else
      {
        v3 = 0;
        m_flCurrentTime = 0.0;
      }
      this->m_whenLastBecameVisible = m_flCurrentTime;
    }
    v5 = 0.0;
    if ( v4 != 0 )
    {
      if ( !v3->m_bEnableAssertions && !v3->m_bInSimulation )
      {
        v6 = v3->m_pfnWarningFunc;
        if ( v6 != 0 )
        {
          v10 = visible;
          v6(1, 0.0);
          visible = v10;
        }
      }
      v5 = v3->m_flCurrentTime;
    }
    this->m_whenLastSeen = v5;
  }
  this->m_isVisible = visible;
}


// CKnownEntity::IsVisible  (line 104, @0x0000000002f36520, libserver.so)
bool __fastcall CKnownEntity::IsVisible(const CKnownEntity *const this)
{
  return this->m_isVisible;
}


// CKnownEntity::GetTimeSinceBecameVisible  (line 109, @0x0000000002f37110, libserver.so)  // inlines: curtime
float __fastcall CKnownEntity::GetTimeSinceBecameVisible(const CKnownEntity *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  return m_flCurrentTime - this->m_whenLastBecameVisible;
}


// CKnownEntity::GetTimeWhenBecameVisible  (line 114, @0x0000000002f36530, libserver.so)
float __fastcall CKnownEntity::GetTimeWhenBecameVisible(const CKnownEntity *const this)
{
  return this->m_whenLastBecameVisible;
}


// CKnownEntity::GetTimeSinceLastSeen  (line 119, @0x0000000002f37170, libserver.so)  // inlines: curtime
float __fastcall CKnownEntity::GetTimeSinceLastSeen(const CKnownEntity *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  return m_flCurrentTime - this->m_whenLastSeen;
}


// CKnownEntity::WasEverVisible  (line 124, @0x0000000002f36540, libserver.so)
bool __fastcall CKnownEntity::WasEverVisible(const CKnownEntity *const this)
{
  return this->m_whenLastSeen > 0.0;
}


// CKnownEntity::IsObsolete  (line 130, @0x0000000002f372f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CKnownEntity::IsObsolete(const CKnownEntity *const this)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v4; // rsi
  CEntityIdentity *v5; // rdx
  __int64 v6; // rcx
  CEntityIdentity *v7; // rdx

  if ( (*(this->_vptr_CKnownEntity + 4))(this) == 0 )
    return 1;
  m_Index = this->m_who.m_Index;
  m_pInstance = 0;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_who.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = this->m_who.m_Index & 0x1FF;
      v4 = (8 * v6);
      v7 = &v5[v6];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  return (*(m_pInstance->_vptr_IHandleEntity + 139))(m_pInstance, v4) == 0
      || (*(this->_vptr_CKnownEntity + 9))(this) > 10.0;
}


// CKnownEntity::operator==  (line 135, @0x0000000002f36e90, libserver.so)
bool __fastcall CKnownEntity::operator==(const CKnownEntity *const this, const CKnownEntity *const other)
{
  __int64 v4; // rbx

  if ( (*(this->_vptr_CKnownEntity + 4))(this) == 0 || (*(other->_vptr_CKnownEntity + 4))(other) == 0 )
    return 0;
  v4 = (*(this->_vptr_CKnownEntity + 4))(this);
  return v4 == (*(other->_vptr_CKnownEntity + 4))(other);
}


