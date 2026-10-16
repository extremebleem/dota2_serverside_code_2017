
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// UseHWMorphModels  (line 108, @0x0000000002162790, libserver.so)
bool __cdecl UseHWMorphModels()
{
  return 0;
}


// CBasePlayer::GetTimeBase  (line 122, @0x00000000021627a0, libserver.so)
float __fastcall CBasePlayer::GetTimeBase(const CBasePlayer *const this)
{
  return this->m_nTickBase.m_Value * gpGlobals->interval_per_tick;
}


// CBasePlayer::ItemPreFrame  (line 131, @0x00000000021627c0, libserver.so)  // inlines: CEntityHandle, Get, GetActiveWeapon, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetWeapon, IndexToIdentity, Init, IsValid, LookupEntity, curtime, operator CBaseCombatWeapon*, operator CEntityInstance*, operator[]
// callers: CBasePlayer::PreThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::ItemPreFrame(CBasePlayer *const this)
{
  unsigned __int16 v2; // dx
  __int64 v3; // rsi
  CEntityInstance *m_pInstance; // r13
  uint32 v5; // eax
  unsigned __int64 m_pInstance_low; // rcx
  CEntityIdentity *v7; // rdx
  __int64 v8; // rsi
  __int64 i; // rbx
  int v10; // eax
  unsigned __int64 v11; // rcx
  CEntityInstance *v12; // rdi
  CGlobalVars *v13; // rbx
  float m_flCurrentTime; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  (*(this->_vptr_IHandleEntity + 472))(this, 0);
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  m_pInstance = 0;
  v5 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  m_pInstance_low = g_pEntitySystem;
  v7 = (v5 + 2);
  if ( v7 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v7 != 0 )
    {
      v8 = v3 & 0x1FF;
      m_pInstance_low = 8 * v8;
      v3 = 120 * v8;
      v7 = (v7 + v3);
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  for ( i = 0; this->m_hMyWeapons.m_Vector.m_Size > i; ++i )
  {
    v3 = CEntityHandle::gm_pEntityList;
    v7 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[i];
    v10 = v7->m_pInstance;
    m_pInstance_low = (LODWORD(v7->m_pInstance) + 2);
    if ( m_pInstance_low > 1 )
    {
      m_pInstance_low = LOWORD(v7->m_pInstance);
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_pInstance_low >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v11 = m_pInstance_low & 0x1FF;
        v3 = 8 * v11;
        m_pInstance_low = 120 * v11;
        v7 = (v7 + m_pInstance_low);
        if ( v7 != 0 && v10 == v7->m_EHandle.m_Index )
        {
          v12 = v7->m_pInstance;
          if ( v7->m_pInstance != 0 && m_pInstance != v12 )
            (*(v12->_vptr_IHandleEntity + 292))(v12);
        }
      }
    }
  }
  v13 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v3, v7, m_pInstance_low);
    }
    m_flCurrentTime = v13->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  if ( this->m_flNextAttack.m_Value <= m_flCurrentTime && m_pInstance != 0 )
    (*(m_pInstance->_vptr_IHandleEntity + 289))(m_pInstance, v3, v7, m_pInstance_low);
}


// CBasePlayer::UsingStandardWeaponsInVehicle  (line 172, @0x00000000021629a0, libserver.so)
// callers: CBaseCombatCharacter::Weapon_CanSwitchTo, CBasePlayer::ItemPostFrame, CPlayerMove::RunCommand
bool __fastcall CBasePlayer::UsingStandardWeaponsInVehicle(const CBasePlayer *const this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // eax

  v2 = (*(this->_vptr_IHandleEntity + 348))(this);
  v3 = v2;
  if ( v2 == 0 )
    return 1;
  v4 = (*(*v2 + 16LL))(v2, this);
  return (*(*v3 + 32LL))(v3, v4);
}


// CBasePlayer::ItemPostFrame  (line 201, @0x0000000002162b60, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetAmmoCount, curtime, operator CBaseCombatWeapon*, operator=<int>
// calls: CBasePlayer::GetViewModel, CBasePlayer::UsingStandardWeaponsInVehicle, GetAmmoDef, memcmp, CEntityHandle::GetHandleEntity
void __fastcall CBasePlayer::ItemPostFrame(CBasePlayer *const this)
{
  int i; // r12d
  CBaseViewModel *ViewModel; // rax
  CBaseViewModel *v4; // r13
  void (__fastcall *v5)(CBaseViewModel *, CBasePlayer *const, double *, __int64); // r15
  __int64 v6; // r14
  int v7; // xmm1_4
  __int64 v8; // r12
  bool v9; // r13
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint32 m_Index; // ecx
  uint32 v14; // ecx
  unsigned __int16 v15; // dx
  __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rdx
  CEntitySystem *v19; // rcx
  __int64 v20; // rsi
  uint32 v21; // ecx
  unsigned __int16 v22; // dx
  int v23; // eax
  __int64 v24; // rsi
  unsigned __int16 v25; // dx
  int v26; // esi
  uint32 v27; // eax
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CEntityInstance *m_pInstance; // r12
  int v31; // r13d
  int v32; // r13d
  CAmmoDef *AmmoDef; // rax
  int v34; // eax
  unsigned int v35; // r14d
  uint32 v36; // r13d
  int v37; // r12d
  CAmmoDef *v38; // rax
  unsigned int v39; // r14d
  IHandleEntity *HandleEntity; // rax
  double s2; // [rsp+10h] [rbp-40h] BYREF
  int v42; // [rsp+18h] [rbp-38h]

  for ( i = 0; i != 2; ++i )
  {
    ViewModel = CBasePlayer::GetViewModel(this, i);
    v4 = ViewModel;
    if ( ViewModel != 0 )
    {
      v5 = *(ViewModel->_vptr_IHandleEntity + 255);
      v6 = (*(this->_vptr_IHandleEntity + 165))(this);
      s2 = (*(this->_vptr_IHandleEntity + 164))(this);
      v42 = v7;
      v5(v4, this, &s2, v6);
    }
  }
  if ( (*(this->_vptr_IHandleEntity + 347))(this) == 0
    || (v8 = (*(this->_vptr_IHandleEntity + 347))(this),
        v9 = CBasePlayer::UsingStandardWeaponsInVehicle(this),
        (*(*v8 + 64LL))(v8, this),
        v9)
    && (*(this->_vptr_IHandleEntity + 347))(this) != 0 )
  {
    if ( (*(this->_vptr_IHandleEntity + 478))(this) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 429))(this);
    }
    else
    {
      m_flCurrentTime = 0.0;
      v11 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        m_flCurrentTime = v11->m_flCurrentTime;
      }
      m_Index = this->m_hActiveWeapon.m_Value.m_Index;
      if ( this->m_flNextAttack.m_Value <= m_flCurrentTime )
      {
        v21 = m_Index >> 15;
        if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
        {
          v22 = 0x7FFF;
          v16 = 0x7FFF;
        }
        else
        {
          v22 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
          v16 = v22;
        }
        v23 = (v21 << 15) | v22 & 0x7FFF;
        v18 = (v23 + 2);
        LODWORD(s2) = v23;
        v19 = g_pEntitySystem;
        if ( v18 > 1 )
        {
          v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
          if ( v18 != 0 )
          {
            v24 = v16 & 0x1FF;
            v19 = (8 * v24);
            v16 = 120 * v24;
            v18 += v16;
            if ( v18 != 0
              && v23 == *(v18 + 16)
              && *v18 != 0
              && ((*(this->_vptr_IHandleEntity + 346))(this) == 0 || CBasePlayer::UsingStandardWeaponsInVehicle(this)) )
            {
              HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hActiveWeapon.m_Value);
              (*(HandleEntity->_vptr_IHandleEntity + 290))(HandleEntity);
            }
          }
        }
      }
      else
      {
        v14 = m_Index >> 15;
        if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
        {
          v15 = 0x7FFF;
          v16 = 0x7FFF;
        }
        else
        {
          v15 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
          v16 = v15;
        }
        v17 = (v14 << 15) | v15 & 0x7FFF;
        v18 = (v17 + 2);
        LODWORD(s2) = v17;
        v19 = g_pEntitySystem;
        if ( v18 > 1 )
        {
          v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
          if ( v18 != 0 )
          {
            v20 = v16 & 0x1FF;
            v19 = (8 * v20);
            v16 = 120 * v20;
            v18 += v16;
            if ( v18 != 0 && v17 == *(v18 + 16) && *v18 != 0 )
              (*(**v18 + 2328LL))(*v18);
          }
        }
      }
      (*(this->_vptr_IHandleEntity + 429))(this, v16, v18, v19);
      if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
      {
        v25 = 0x7FFF;
        v26 = 0x7FFF;
      }
      else
      {
        v25 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
        v26 = v25;
      }
      v27 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v25 & 0x7FFF;
      LODWORD(s2) = v27;
      if ( v27 + 2 > 1 )
      {
        v28 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v26 >> 9];
        if ( v28 != 0 )
        {
          v29 = &v28[v26 & 0x1FF];
          if ( v29 != 0 && v27 == v29->m_EHandle.m_Index )
          {
            m_pInstance = v29->m_pInstance;
            if ( v29->m_pInstance != 0 && (*(this->_vptr_IHandleEntity + 424))(this, v29->m_pInstance) != 0 )
            {
              v31 = (*(m_pInstance->_vptr_IHandleEntity + 337))(m_pInstance);
              if ( v31 != HIDWORD(m_pInstance[26].m_iszPrivateVScripts.u.m_pAsString) )
              {
                (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                HIDWORD(m_pInstance[26].m_iszPrivateVScripts.u.m_pAsString) = v31;
              }
              v32 = (*(m_pInstance->_vptr_IHandleEntity + 359))(m_pInstance);
              if ( v32 >= 0 )
              {
                AmmoDef = GetAmmoDef();
                v34 = AmmoDef->MaxCarry(v32, this);
                v35 = v34;
                if ( v34 > 0 )
                {
                  LODWORD(s2) = v34;
                  if ( memcmp(&this->m_iAmmo.m_Value[v32], &s2, 4u) != 0 )
                  {
                    (*(this->_vptr_IHandleEntity + 22))(this, 1492, v32, 0xFFFFFFFFLL);
                    this->m_iAmmo.m_Value[v32] = v35;
                  }
                }
              }
              v36 = (*(m_pInstance->_vptr_IHandleEntity + 338))(m_pInstance);
              if ( v36 != m_pInstance[26].m_worldGroupId.m_nHashCode )
              {
                (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                m_pInstance[26].m_worldGroupId.m_nHashCode = v36;
              }
              v37 = (*(m_pInstance->_vptr_IHandleEntity + 360))(m_pInstance);
              if ( v37 >= 0 )
              {
                v38 = GetAmmoDef();
                v39 = v38->MaxCarry(v37, this);
                LODWORD(s2) = v39;
                if ( memcmp(&this->m_iAmmo.m_Value[v37], &s2, 4u) != 0 )
                {
                  (*(this->_vptr_IHandleEntity + 22))(this, 1492, v37, 0xFFFFFFFFLL);
                  this->m_iAmmo.m_Value[v37] = v39;
                }
              }
            }
          }
        }
      }
    }
  }
}


// CBasePlayer::EyeAngles  (line 306, @0x0000000002146230, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetViewEntity, IndexToIdentity, Init, LookupEntity
// calls: CBaseEntity::GetMoveParent, AngleMatrix, CBaseEntity::EntityToWorldTransform, ConcatTransforms, MatrixAngles, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBasePlayer::EyeAngles(void)::angEyeWorld, CBasePlayer::EyeAngles(void)::angEyeWorld
const QAngle *__fastcall CBasePlayer::EyeAngles(CBasePlayer *const this)
{
  CBaseEntity *MoveParent; // rax
  CBaseEntity *v3; // r12
  matrix3x4_t *v4; // rax
  unsigned __int16 v6; // dx
  __int64 v7; // rsi
  uint32 v8; // eax
  CEntitySystem *v9; // rcx
  CEntityIdentity *v10; // rdx
  __int64 v11; // rsi
  matrix3x4_t eyesToParent; // [rsp+0h] [rbp-80h] BYREF
  matrix3x4_t eyesToWorld; // [rsp+30h] [rbp-50h] BYREF

  MoveParent = CBaseEntity::GetMoveParent(this);
  v3 = MoveParent;
  if ( MoveParent == 0 || (*(MoveParent->_vptr_IHandleEntity + 142))(MoveParent) != 0 )
  {
    if ( this->m_hViewEntity.m_Value.m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = this->m_hViewEntity.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (this->m_hViewEntity.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
    LODWORD(eyesToWorld.m_flMatVal[0][0]) = v8;
    v9 = g_pEntitySystem;
    v10 = (v8 + 2);
    if ( v10 > 1
      && (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9]) != 0
      && (v11 = v7 & 0x1FF, v9 = (8 * v11), v7 = 120 * v11, (v10 = (v10 + v7)) != 0)
      && v8 == v10->m_EHandle.m_Index
      && v10->m_pInstance != 0 )
    {
      return (*(v10->m_pInstance->_vptr_IHandleEntity + 165))(v10->m_pInstance);
    }
    else
    {
      return (*(this->_vptr_IHandleEntity + 166))(this, v7, v10, v9);
    }
  }
  else
  {
    AngleMatrix(&this->m_pl.v_angle, &eyesToParent);
    v4 = CBaseEntity::EntityToWorldTransform(v3);
    ConcatTransforms(v4, &eyesToParent, &eyesToWorld);
    if ( `guard variable for'CBasePlayer::EyeAngles(void)::angEyeWorld == 0
      && __cxa_guard_acquire(&`guard variable for'CBasePlayer::EyeAngles(void)::angEyeWorld) != 0 )
    {
      __cxa_guard_release(&`guard variable for'CBasePlayer::EyeAngles(void)::angEyeWorld);
    }
    MatrixAngles(&eyesToWorld, &CBasePlayer::EyeAngles(void)::angEyeWorld);
    return &CBasePlayer::EyeAngles(void)::angEyeWorld;
  }
}


// CBasePlayer::LocalEyeAngles  (line 355, @0x000000000213d990, libserver.so)
const QAngle *__fastcall CBasePlayer::LocalEyeAngles(CBasePlayer *const this)
{
  return &this->m_pl.v_angle;
}


// CBasePlayer::EyePosition  (line 369, @0x0000000002147840, libserver.so)  // inlines: CEntityHandle, CacheVehicleView, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetViewEntity, IndexToIdentity, Init, LookupEntity
// calls: CBasePlayer::CacheVehicleView, CBaseEntity::EyePosition
Vector __fastcall CBasePlayer::EyePosition(CBasePlayer *const this)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  vec_t v9; // xmm1_4
  Vector m_vecVehicleViewOrigin; // [rsp+10h] [rbp-30h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (*(this->_vptr_IHandleEntity + 347))(this) != 0 )
  {
    if ( this->m_nVehicleViewSavedFrame != gpGlobals->framecount )
      CBasePlayer::CacheVehicleView(this);
    m_vecVehicleViewOrigin = this->m_vecVehicleViewOrigin;
  }
  else
  {
    if ( this->m_hViewEntity.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hViewEntity.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (this->m_hViewEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    if ( v6 + 2 > 1
      && (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
      && (v8 = &v7[v5 & 0x1FF]) != 0
      && v6 == v8->m_EHandle.m_Index
      && v8->m_pInstance != 0 )
    {
      *&m_vecVehicleViewOrigin.x = (*(v8->m_pInstance->_vptr_IHandleEntity + 164))(v8->m_pInstance);
      m_vecVehicleViewOrigin.z = v9;
    }
    else
    {
      m_vecVehicleViewOrigin = CBaseEntity::EyePosition(this);
    }
  }
  *&result.x = *&m_vecVehicleViewOrigin.x;
  result.z = m_vecVehicleViewOrigin.z;
  return result;
}


// CBasePlayer::EarPosition  (line 406, @0x000000000213d9a0, libserver.so)  // inlines: EarPosition
Vector __fastcall CBasePlayer::EarPosition(CBasePlayer *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  (*(this->_vptr_IHandleEntity + 164))(this);
  return result;
}


// CBasePlayer::GetPlayerMins  (line 422, @0x0000000002140bb0, libserver.so)
// calls: SafeGetViewVectors
Vector __fastcall CBasePlayer::GetPlayerMins(const CBasePlayer *const this)
{
  const CViewVectors *v1; // rax
  const CViewVectors *v4; // rax
  const CViewVectors *ViewVectors; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (this->m_afPhysicsFlags & 8) != 0 )
  {
    ViewVectors = SafeGetViewVectors();
    result.z = ViewVectors->m_vObsHullMin.z;
    *&result.x = *&ViewVectors->m_vObsHullMin.x;
  }
  else if ( (this->m_fFlags.m_Value & 2) != 0 )
  {
    v4 = SafeGetViewVectors();
    *&result.x = *&v4->m_vDuckHullMin.x;
    result.z = v4->m_vDuckHullMin.z;
  }
  else
  {
    v1 = SafeGetViewVectors();
    *&result.x = *&v1->m_vHullMin.x;
    result.z = v1->m_vHullMin.z;
  }
  return result;
}


// CBasePlayer::GetPlayerMaxs  (line 446, @0x0000000002140c40, libserver.so)
// calls: SafeGetViewVectors
Vector __fastcall CBasePlayer::GetPlayerMaxs(const CBasePlayer *const this)
{
  const CViewVectors *v1; // rax
  const CViewVectors *v4; // rax
  const CViewVectors *ViewVectors; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (this->m_afPhysicsFlags & 8) != 0 )
  {
    ViewVectors = SafeGetViewVectors();
    result.z = ViewVectors->m_vObsHullMax.z;
    *&result.x = *&ViewVectors->m_vObsHullMax.x;
  }
  else if ( (this->m_fFlags.m_Value & 2) != 0 )
  {
    v4 = SafeGetViewVectors();
    *&result.x = *&v4->m_vDuckHullMax.x;
    result.z = v4->m_vDuckHullMax.z;
  }
  else
  {
    v1 = SafeGetViewVectors();
    *&result.x = *&v1->m_vHullMax.x;
    result.z = v1->m_vHullMax.z;
  }
  return result;
}


// CBasePlayer::UpdateCollisionBounds  (line 468, @0x0000000002140cd0, libserver.so)  // inlines: SetCollisionBounds
// calls: SafeGetViewVectors, CCollisionProperty::SetCollisionBounds
void __fastcall CBasePlayer::UpdateCollisionBounds(CBasePlayer *const this)
{
  const CViewVectors *v2; // r12
  const CViewVectors *v3; // rax
  const CViewVectors *ViewVectors; // r12
  const CViewVectors *v5; // rax

  if ( (this->m_fFlags.m_Value & 2) != 0 )
  {
    ViewVectors = SafeGetViewVectors();
    v5 = SafeGetViewVectors();
    CCollisionProperty::SetCollisionBounds(&this->m_Collision, &v5->m_vDuckHullMin, &ViewVectors->m_vDuckHullMax);
  }
  else
  {
    v2 = SafeGetViewVectors();
    v3 = SafeGetViewVectors();
    CCollisionProperty::SetCollisionBounds(&this->m_Collision, &v3->m_vHullMin, &v2->m_vHullMax);
  }
}


// CBasePlayer::CreatePlayerHullExtension  (line 498, @0x00000000021630d0, libserver.so)
// callers: CBasePlayer::OnRestore, CBasePlayer::SetOrResetInitialState
void __fastcall CBasePlayer::CreatePlayerHullExtension(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::CacheVehicleView  (line 520, @0x0000000002140ac0, libserver.so)
// callers: CBasePlayer::EyePosition, CBasePlayer::CacheVehicleView, CBasePlayer::EyeVectors, CBasePlayer::EyePositionAndVectors, CBasePlayer::CalcVehicleView
void __fastcall CBasePlayer::CacheVehicleView(CBasePlayer *const this)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned int v4; // eax

  v2 = (*(this->_vptr_IHandleEntity + 347))(this);
  v3 = v2;
  if ( v2 != 0 )
  {
    v4 = (*(*v2 + 16LL))(v2, this);
    (*(*v3 + 24LL))(v3, v4, &this->m_vecVehicleViewOrigin, &this->m_vecVehicleViewAngles, &this->m_flVehicleViewFOV);
    this->m_nVehicleViewSavedFrame = gpGlobals->framecount;
  }
}


// CBasePlayer::CacheVehicleView  (line 520, @0x00000000021630e0, libserver.so)
// calls: CBasePlayer::CacheVehicleView
// callers: CBasePlayer::GetFOV, CBasePlayer::GetFOVForNetworking
void __fastcall CBasePlayer::CacheVehicleView(CBasePlayer *const this)
{
  if ( this->m_nVehicleViewSavedFrame != gpGlobals->framecount )
    CBasePlayer::CacheVehicleView(this);
}


// CBasePlayer::EyeVectors  (line 545, @0x0000000002163110, libserver.so)  // inlines: CacheVehicleView
// calls: CBasePlayer::CacheVehicleView, AngleVectors
// callers: CBaseEntity::ComputeTracerStartPosition, CDecalGameSystem::TraceDebugRay, UpdateDebugEntGrab, ent_grab, CC_GetCommandEnt, CBasePlayer::FindEntityClassForward, CBasePlayer::FindEntityForward, CBasePlayer::FindPickerEntityClass, CBasePlayer::FindPickerEntity, CBasePlayer::FindEntityInheritingFromForward, CBasePlayer::FindPickerEntityInheritingFrom, CBaseEntity::SUB_Vanish (37 total)
void __fastcall CBasePlayer::EyeVectors(CBasePlayer *const this, Vector *pForward, Vector *pRight, Vector *pUp)
{
  const QAngle *v8; // rax

  if ( (*(this->_vptr_IHandleEntity + 347))(this) != 0 )
  {
    if ( this->m_nVehicleViewSavedFrame != gpGlobals->framecount )
      CBasePlayer::CacheVehicleView(this);
    AngleVectors(&this->m_vecVehicleViewAngles, pForward, pRight, pUp);
  }
  else
  {
    v8 = (*(this->_vptr_IHandleEntity + 165))(this);
    AngleVectors(v8, pForward, pRight, pUp);
  }
}


// CBasePlayer::EyePositionAndVectors  (line 562, @0x0000000002164370, libserver.so)  // inlines: CacheVehicleView, VectorCopy, operator=
// calls: CBasePlayer::CacheVehicleView, AngleVectors
// callers: IsPlayerAbleToLockOrUnlockDoor
void __fastcall CBasePlayer::EyePositionAndVectors(
        CBasePlayer *const this,
        Vector *pPosition,
        Vector *pForward,
        Vector *pRight,
        Vector *pUp)
{
  vec_t v10; // xmm1_4
  const QAngle *v11; // rax
  double v12; // [rsp+0h] [rbp-40h]

  if ( (*(this->_vptr_IHandleEntity + 347))(this) != 0 )
  {
    if ( this->m_nVehicleViewSavedFrame != gpGlobals->framecount )
      CBasePlayer::CacheVehicleView(this);
    AngleVectors(&this->m_vecVehicleViewAngles, pForward, pRight, pUp);
    if ( pPosition != 0 )
    {
      pPosition->x = this->m_vecVehicleViewOrigin.x;
      pPosition->y = this->m_vecVehicleViewOrigin.y;
      pPosition->z = this->m_vecVehicleViewOrigin.z;
    }
  }
  else
  {
    v12 = (*(this->_vptr_IHandleEntity + 164))(this);
    pPosition->z = v10;
    *&pPosition->x = v12;
    v11 = (*(this->_vptr_IHandleEntity + 165))(this);
    AngleVectors(v11, pForward, pRight, pUp);
  }
}


// CBasePlayer::GetLadderSurface  (line 590, @0x000000000213d9d0, libserver.so)
const CPhysSurfaceProperties *__fastcall CBasePlayer::GetLadderSurface(
        CBasePlayer *const this,
        const Vector *const origin)
{
  __int64 v2; // rax

  v2 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2, origin);
  return (*(*v2 + 16LL))(v2, 3802511415LL, 0);
}


// CBasePlayer::UpdateStepSound  (line 599, @0x000000000213e820, libserver.so)  // inlines: FastSqrt, GetFlags, GetFloat, GetMoveType, GetWaterLevel, Vector2DLength, VectorCopy, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// globals: jpt_213EA17, CBasePlayer::UpdateStepSound(CPhysSurfaceProperties const*,Vector const&,Vector const&)::iSkipStep
// local variable allocation has failed, the output may be wrong!
void __fastcall CBasePlayer::UpdateStepSound(
        CBasePlayer *const this,
        const CPhysSurfaceProperties *psurface,
        const Vector *const vecOrigin,
        const Vector *const vecVelocity)
{
  float m_flStepSoundTime; // xmm0_4
  MoveType_t m_Value; // r14
  bool v9; // r15
  int (**vptr_IHandleEntity)(...); // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  bool v13; // r14
  double v14; // xmm0_8
  int (**v15)(...); // rax
  int v16; // xmm1_4
  int v17; // xmm1_4
  unsigned __int8 v18; // al
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // xmm0_4
  float v23; // [rsp-8h] [rbp-8Ch]
  float v24; // [rsp-4h] [rbp-88h]
  unsigned int v25; // [rsp-4h] [rbp-88h]
  float v26; // [rsp+14h] [rbp-70h] BYREF
  float v27; // [rsp+18h] [rbp-6Ch] BYREF
  vec_t velrun; // [rsp+1Ch] [rbp-68h] BYREF
  vec_t velwalk; // [rsp+20h] [rbp-64h]
  __int128 feet; // [rsp+24h] [rbp-60h] OVERLAPPED
  int v31; // [rsp+34h] [rbp-50h]
  double v32; // [rsp+3Ch] [rbp-48h]
  int v33; // [rsp+44h] [rbp-40h]

  m_flStepSoundTime = this->m_flStepSoundTime;
  if ( m_flStepSoundTime > 0.0 )
  {
    m_flStepSoundTime = m_flStepSoundTime - (1000.0 * gpGlobals->frametime);
    if ( m_flStepSoundTime < 0.0 )
    {
      this->m_flStepSoundTime = 0.0;
      goto LABEL_7;
    }
    this->m_flStepSoundTime = m_flStepSoundTime;
  }
  if ( m_flStepSoundTime > 0.0 )
    return;
LABEL_7:
  if ( (this->m_fFlags.m_Value & 0x60) == 0 )
  {
    m_Value = this->m_MoveType.m_Value;
    if ( (m_Value & 0xFD) != 8 && sv_footsteps.m_pParent->m_Value.m_fValue != 0.0 )
    {
      v23 = fsqrt(
              (vecVelocity->z * vecVelocity->z)
            + ((vecVelocity->x * vecVelocity->x) + (vecVelocity->y * vecVelocity->y)));
      v24 = fsqrt((vecVelocity->x * vecVelocity->x) + (vecVelocity->y * vecVelocity->y));
      (*(this->_vptr_IHandleEntity + 420))(this, &v27, &v26);
      if ( v23 >= v27 )
      {
        v9 = m_Value == MoveType_t::MOVETYPE_LADDER;
        if ( m_Value == MoveType_t::MOVETYPE_LADDER || v24 > 0.000099999997 && (this->m_fFlags.m_Value & 1) != 0 )
        {
          vptr_IHandleEntity = this->_vptr_IHandleEntity;
          y = vecOrigin->y;
          z = vecOrigin->z;
          velrun = vecOrigin->x;
          velwalk = y;
          v13 = v26 > v23;
          *&feet = z;
          v14 = (vptr_IHandleEntity[395])(this);
          v15 = this->_vptr_IHandleEntity;
          *(&feet + 1) = v14;
          v31 = v16;
          v32 = (v15[394])(this);
          v33 = v17;
          if ( v9 )
          {
            psurface = (*(this->_vptr_IHandleEntity + 410))(this, vecOrigin);
            (*(this->_vptr_IHandleEntity + 421))(this, 1, v13);
            v19 = 1056964608;
          }
          else
          {
            v18 = this->m_nWaterLevel.m_Value;
            if ( v18 == 2 )
            {
              if ( CBasePlayer::UpdateStepSound(CPhysSurfaceProperties const*,Vector const&,Vector const&)::iSkipStep == 0 )
              {
                CBasePlayer::UpdateStepSound(CPhysSurfaceProperties const*,Vector const&,Vector const&)::iSkipStep = 1;
                return;
              }
              if ( CBasePlayer::UpdateStepSound(CPhysSurfaceProperties const*,Vector const&,Vector const&)::iSkipStep == 3 )
                CBasePlayer::UpdateStepSound(CPhysSurfaceProperties const*,Vector const&,Vector const&)::iSkipStep = 0;
              else
                ++CBasePlayer::UpdateStepSound(CPhysSurfaceProperties const*,Vector const&,Vector const&)::iSkipStep;
              v20 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
              psurface = (*(*v20 + 16LL))(v20, 1594497082, 0);
              (*(this->_vptr_IHandleEntity + 421))(this, 2, v13);
              v19 = 1059481190;
            }
            else if ( v18 == 1 )
            {
              v21 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
              psurface = (*(*v21 + 16LL))(v21, 1702216732, 0);
              if ( v13 )
                v22 = 1045220557;
              else
                v22 = 1056964608;
              v25 = v22;
              (*(this->_vptr_IHandleEntity + 421))(this, 3, v13);
              v19 = v25;
            }
            else
            {
              if ( psurface == 0 )
                return;
              (*(this->_vptr_IHandleEntity + 421))(this, 0, v13);
              switch ( psurface->m_gameProperties.m_nMaterial )
              {
                case 'D':
                  if ( v13 )
                    v19 = 1048576000;
                  else
                    v19 = 1057803469;
                  break;
                case 'V':
                  if ( v13 )
                    v19 = 1053609165;
                  else
                    v19 = 1060320051;
                  break;
                default:
                  v19 = 1056964608;
                  if ( v13 )
                    v19 = 1045220557;
                  break;
              }
            }
          }
          if ( (this->m_fFlags.m_Value & 2) != 0 )
            *&v19 = *&v19 * 0.65;
          (*(this->_vptr_IHandleEntity + 419))(this, &velrun, psurface, 0, *&v19);
        }
      }
    }
  }
}


// CBasePlayer::PlayStepSound  (line 760, @0x0000000002179460, libserver.so)  // inlines: GetFloat, entindex, operator char const*, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CBaseEntity::InPrediction, CUtlString::Get, CBaseEntity::IsFirstTimePredicted, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CRecipientFilter::RemoveRecipientsByPVS, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CSosFieldDataFloat::CSosFieldDataFloat, CSoundOpGameSystem::SetSoundEventParam, CSosFieldData::ClearData, CRecipientFilter::~CRecipientFilter (14 total)
// strings: "volume_atten"
void __fastcall CBasePlayer::PlayStepSound(
        CBasePlayer *const this,
        Vector *const vecOrigin,
        const CPhysSurfaceProperties *psurface,
        float fvol,
        bool force)
{
  int m_nStepside; // r15d
  CUtlString *p_m_runStepLeft; // rdi
  CUtlString *p_m_runStepRight; // r14
  const char *v11; // rax
  const char *v12; // r14
  CEntityIndex v13; // eax
  SndOpEventGuid_t v14; // r12
  float v15; // xmm1_4
  CSosFieldDataFloat v17; // [rsp+10h] [rbp-190h] BYREF
  CRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+168h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( gpGlobals->maxClients > 1 )
  {
    if ( sv_footsteps.m_pParent->m_Value.m_fValue == 0.0 )
      return;
    if ( !CBaseEntity::InPrediction() )
      goto LABEL_3;
LABEL_11:
    if ( !CBaseEntity::IsFirstTimePredicted() )
      return;
    goto LABEL_3;
  }
  if ( CBaseEntity::InPrediction() )
    goto LABEL_11;
LABEL_3:
  if ( psurface != 0 )
  {
    m_nStepside = this->m_Local.m_nStepside;
    p_m_runStepLeft = &psurface->m_audioSounds.m_runStepLeft;
    p_m_runStepRight = &psurface->m_audioSounds.m_runStepRight;
    if ( m_nStepside == 0 )
      p_m_runStepLeft = p_m_runStepRight;
    v11 = CUtlString::Get(p_m_runStepLeft);
    v12 = v11;
    if ( v11 != 0 && *v11 != 0 )
    {
      this->m_Local.m_nStepside = m_nStepside == 0;
      CRecipientFilter::CRecipientFilter(&filter);
      CRecipientFilter::AddRecipientsByPAS(&filter, vecOrigin);
      if ( gpGlobals->maxClients > 1 )
        CRecipientFilter::RemoveRecipientsByPVS(&filter, vecOrigin);
      v13.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      v14 = CBaseEntity::EmitSound(&filter, v13, v12, vecOrigin, 0.0, 0);
      CSosFieldDataFloat::CSosFieldDataFloat(&v17, LODWORD(fvol), v15);
      CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v14, "volume_atten", &v17, 0, 0);
      CSosFieldData::ClearData(&v17);
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CBasePlayer::UpdateButtonState  (line 795, @0x0000000002164470, libserver.so)
// callers: CPlayerMove::RunCommand, CDOTAPlayerMove::RunCommand
void __fastcall CBasePlayer::UpdateButtonState(CBasePlayer *const this, ButtonBitMask_t nUserCmdButtonMask)
{
  uint64 m_nButtons; // rax
  ButtonBitMask_t v3; // rax

  m_nButtons = this->m_nButtons;
  this->m_nButtons = nUserCmdButtonMask;
  this->m_afButtonLast = m_nButtons;
  v3 = nUserCmdButtonMask ^ m_nButtons;
  this->m_afButtonPressed = nUserCmdButtonMask & v3;
  this->m_afButtonReleased = v3 & ~nUserCmdButtonMask;
}


// CBasePlayer::GetStepSoundVelocities  (line 813, @0x000000000213da00, libserver.so)
void __fastcall CBasePlayer::GetStepSoundVelocities(CBasePlayer *const this, float *velwalk, float *velrun)
{
  if ( (this->m_fFlags.m_Value & 2) != 0 || this->m_MoveType.m_Value == MoveType_t::MOVETYPE_LADDER )
  {
    *velwalk = 60.0;
    *velrun = 80.0;
  }
  else
  {
    *velwalk = 90.0;
    *velrun = 220.0;
  }
}


// CBasePlayer::SetStepSoundTime  (line 831, @0x000000000213da40, libserver.so)
void __fastcall CBasePlayer::SetStepSoundTime(CBasePlayer *const this, stepsoundtimes_t iStepSoundTime, bool bWalking)
{
  float v3; // xmm0_4
  bool v4; // zf

  if ( iStepSoundTime == stepsoundtimes_t::STEPSOUNDTIME_ON_LADDER )
  {
    this->m_flStepSoundTime = 350.0;
  }
  else if ( iStepSoundTime <= stepsoundtimes_t::STEPSOUNDTIME_ON_LADDER )
  {
    if ( iStepSoundTime == stepsoundtimes_t::STEPSOUNDTIME_NORMAL )
    {
      v3 = 300.0;
      if ( !bWalking )
      {
LABEL_11:
        v4 = (this->m_fFlags.m_Value & 2) == 0;
        this->m_flStepSoundTime = v3;
        if ( !v4 )
          goto LABEL_12;
        goto LABEL_6;
      }
LABEL_10:
      v3 = 400.0;
      goto LABEL_11;
    }
  }
  else
  {
    if ( iStepSoundTime == stepsoundtimes_t::STEPSOUNDTIME_WATER_KNEE )
    {
      this->m_flStepSoundTime = 600.0;
      goto LABEL_5;
    }
    if ( iStepSoundTime == stepsoundtimes_t::STEPSOUNDTIME_WATER_FOOT )
    {
      v3 = 300.0;
      if ( !bWalking )
        goto LABEL_11;
      goto LABEL_10;
    }
  }
LABEL_5:
  if ( (this->m_fFlags.m_Value & 2) != 0 )
  {
LABEL_12:
    this->m_flStepSoundTime = this->m_flStepSoundTime + 100.0;
    return;
  }
LABEL_6:
  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_LADDER )
    goto LABEL_12;
}


// CBasePlayer::Weapon_ShootPosition  (line 860, @0x000000000213daf0, libserver.so)
Vector __fastcall CBasePlayer::Weapon_ShootPosition(CBasePlayer *const this, int nHand)
{
  return (*(this->_vptr_IHandleEntity + 164))(this, nHand);
}


// CBasePlayer::Weapon_ThrowInfo  (line 877, @0x000000000213db10, libserver.so)  // inlines: operator=
void __fastcall CBasePlayer::Weapon_ThrowInfo(
        CBasePlayer *const this,
        Vector *pOutPos,
        Vector *pOutVel,
        QAngle *pOutAng,
        AngularImpulse *pOutAngImpuse,
        int nHand)
{
  double v10; // xmm0_8
  vec_t v11; // xmm1_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4

  v10 = (*(this->_vptr_IHandleEntity + 164))(this, pOutPos, pOutVel, pOutAng, pOutAngImpuse, nHand);
  pOutPos->z = v11;
  pOutPos->x = *&v10;
  x = vec3_origin.x;
  pOutPos->y = *(&v10 + 1);
  y = vec3_origin.y;
  *&v10 = vec3_origin.z;
  pOutVel->x = x;
  pOutVel->y = y;
  pOutVel->z = *&v10;
  *pOutAng = vec3_angle;
  pOutAngImpuse->x = x;
  pOutAngImpuse->y = y;
  pOutAngImpuse->z = *&v10;
}


// CBasePlayer::Weapon_ShootAngles  (line 913, @0x000000000213dbc0, libserver.so)
QAngle __fastcall CBasePlayer::Weapon_ShootAngles(CBasePlayer *const this, int nHand)
{
  __int64 v2; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (*(this->_vptr_IHandleEntity + 165))(this, nHand);
  *&result.x = *v2;
  result.z = *(v2 + 8);
  return result;
}


// CBasePlayer::Weapon_CanUse  (line 923, @0x000000000213dbf0, libserver.so)
bool __fastcall CBasePlayer::Weapon_CanUse(CBasePlayer *const this, CBaseCombatWeapon *pWeapon)
{
  return 1;
}


// CBasePlayer::SetAnimationExtension  (line 928, @0x00000000021644b0, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy
void __fastcall CBasePlayer::SetAnimationExtension(CBasePlayer *const this, const char *pExtension)
{
  _V_strncpy(this->m_szAnimExtension, pExtension, 32);
}


// CBasePlayer::Weapon_SetLast  (line 937, @0x0000000002144980, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// callers: CBasePlayer::CBasePlayer
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::Weapon_SetLast(CBasePlayer *const this, CBaseCombatWeapon *pWeapon)
{
  uint32 m_Index; // edx
  unsigned __int16 v5; // cx
  int v6; // esi
  CBaseCombatWeapon *m_pInstance; // rdi
  int v8; // eax
  CEntitySystem *v9; // r8
  CEntityIdentity *v10; // rcx
  __int64 v11; // rsi
  CEntityIdentity *v12; // rcx
  CBaseCombatWeapon *v13; // rcx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx

  m_Index = this->m_hLastWeapon.m_Value.m_Index;
  if ( m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hLastWeapon.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  m_pInstance = 0;
  v8 = (m_Index >> 15 << 15) | v5 & 0x7FFF;
  v9 = g_pEntitySystem;
  if ( (v8 + 2) > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v10 != 0 )
    {
      v11 = v6 & 0x1FF;
      v9 = (8 * v11);
      v12 = &v10[v11];
      if ( v12 != 0 && v8 == v12->m_EHandle.m_Index )
        m_pInstance = v12->m_pInstance;
    }
  }
  if ( pWeapon != m_pInstance )
  {
    v13 = 0;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLastWeapon.m_Value.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hLastWeapon.m_Value.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          v13 = v15->m_pInstance;
      }
    }
    if ( pWeapon != v13 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3840, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9);
      if ( pWeapon != 0 && (m_pEntity = pWeapon->m_pEntity) != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v18 = 0x7FFF;
        else
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hLastWeapon.m_Value.m_Index) = v18 | this->m_hLastWeapon.m_Value.m_Index & 0x8000;
        this->m_hLastWeapon.m_Value.m_Index = (v17 << 15) | this->m_hLastWeapon.m_Value.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hLastWeapon.m_Value.m_Index = -1;
      }
    }
  }
}


// CBasePlayer::Weapon_Switch  (line 950, @0x00000000021491c0, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
// calls: CBaseCombatCharacter::Weapon_Switch, CBasePlayer::GetViewModel, CBasePlayer::ResetAutoaim
bool __fastcall CBasePlayer::Weapon_Switch(CBasePlayer *const this, CBaseCombatWeapon *pWeapon, int viewmodelindex)
{
  uint32 v5; // edi
  unsigned __int16 v6; // cx
  int v7; // r8d
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CBaseViewModel *ViewModel; // rax
  CEntityInstance *m_pInstance; // r14
  unsigned __int16 v14; // dx
  int v15; // esi
  uint32 v16; // eax
  CEntityInstance *v17; // rdx
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx
  void (__fastcall *v20)(CBasePlayer *const, __int64); // r12
  __int64 v21; // rax

  v5 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  v8 = (v5 << 15) | v6 & 0x7FFF;
  if ( (v8 + 2) > 1
    && (v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9]) != 0
    && (v10 = &v9[v7 & 0x1FF]) != 0
    && v8 == v10->m_EHandle.m_Index )
  {
    m_pInstance = v10->m_pInstance;
    if ( CBaseCombatCharacter::Weapon_Switch(this, pWeapon, viewmodelindex) )
    {
      if ( m_pInstance != 0 )
      {
        if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
        {
          v14 = 0x7FFF;
          v15 = 0x7FFF;
        }
        else
        {
          v14 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
          v15 = v14;
        }
        v16 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v14 & 0x7FFF;
        v17 = 0;
        if ( v16 + 2 > 1 )
        {
          v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
          if ( v18 != 0 )
          {
            v19 = &v18[v15 & 0x1FF];
            if ( v19 != 0 && v16 == v19->m_EHandle.m_Index )
              v17 = v19->m_pInstance;
          }
        }
        if ( (*(this->_vptr_IHandleEntity + 404))(this, m_pInstance, v17) != 0 )
        {
          v20 = *(this->_vptr_IHandleEntity + 403);
          v21 = (*(m_pInstance->_vptr_IHandleEntity + 284))(m_pInstance);
          v20(this, v21);
          ViewModel = CBasePlayer::GetViewModel(this, viewmodelindex);
          if ( ViewModel == 0 )
            goto LABEL_10;
          goto LABEL_9;
        }
      }
LABEL_8:
      ViewModel = CBasePlayer::GetViewModel(this, viewmodelindex);
      if ( ViewModel == 0 )
      {
LABEL_10:
        CBasePlayer::ResetAutoaim(this);
        return 1;
      }
LABEL_9:
      (*(ViewModel->_vptr_IHandleEntity + 258))(ViewModel, &stru_10.m_pIdentityChunks[1]);
      goto LABEL_10;
    }
  }
  else if ( CBaseCombatCharacter::Weapon_Switch(this, pWeapon, viewmodelindex) )
  {
    goto LABEL_8;
  }
  return 0;
}


// CBasePlayer::SelectLastItem  (line 971, @0x0000000002147110, libserver.so)  // inlines: CEntityHandle, Get, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
void __fastcall CBasePlayer::SelectLastItem(CBasePlayer *const this)
{
  uint32 m_Index; // ecx
  uint32 v3; // r9d
  unsigned __int16 v4; // dx
  int v5; // esi
  int v6; // eax
  CEntitySystem *v7; // r8
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  uint32 v10; // esi
  unsigned __int16 v11; // dx
  int v12; // edi
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  unsigned __int16 v16; // dx
  __int64 v17; // rcx
  CEntityInstance *m_pInstance; // rsi
  int v19; // eax
  CEntityIdentity *v20; // rdx

  m_Index = this->m_hLastWeapon.m_Value.m_Index;
  v3 = m_Index >> 15;
  if ( m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hLastWeapon.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (v3 << 15) | v4 & 0x7FFF;
  v7 = g_pEntitySystem;
  if ( (v6 + 2) > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v5 & 0x1FF];
      if ( v9 != 0 && v6 == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
      {
        v10 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
        if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
        {
          v11 = 0x7FFF;
          v12 = 0x7FFF;
        }
        else
        {
          v11 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
          v12 = v11;
        }
        v13 = (v10 << 15) | v11 & 0x7FFF;
        if ( (v13 + 2) > 1 )
        {
          v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
          if ( v14 != 0 )
          {
            v15 = &v14[v12 & 0x1FF];
            if ( v15 != 0 && v13 == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
            {
              if ( (*(v15->m_pInstance->_vptr_IHandleEntity + 279))(v15->m_pInstance) == 0 )
                return;
              m_Index = this->m_hLastWeapon.m_Value.m_Index;
              v7 = g_pEntitySystem;
              v3 = m_Index >> 15;
            }
          }
        }
        if ( m_Index == -1 )
        {
          v16 = 0x7FFF;
          v17 = 0x7FFF;
        }
        else
        {
          v16 = this->m_hLastWeapon.m_Value.m_Index & 0x7FFF;
          v17 = v16;
        }
        m_pInstance = 0;
        v19 = (v3 << 15) | v16 & 0x7FFF;
        v20 = (v19 + 2);
        if ( v20 > 1 )
        {
          v20 = v7->m_EntityList.m_pIdentityChunks[v17 >> 9];
          if ( v20 != 0 )
          {
            v17 = 120 * (v17 & 0x1FF);
            v20 = (v20 + v17);
            if ( v20 != 0 && v19 == v20->m_EHandle.m_Index )
              m_pInstance = v20->m_pInstance;
          }
        }
        (*(this->_vptr_IHandleEntity + 464))(this, m_pInstance, v20, v17, v7);
      }
    }
  }
}


// CBasePlayer::AbortReload  (line 986, @0x00000000021644d0, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
void __fastcall CBasePlayer::AbortReload(CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1 )
  {
    v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v4 != 0 )
    {
      v5 = &v4[v2 & 0x1FF];
      if ( v5 != 0 && v3 == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        (*(v5->m_pInstance->_vptr_IHandleEntity + 298))(v5->m_pInstance);
    }
  }
}


// CBasePlayer::Weapon_ShouldSelectItem  (line 997, @0x0000000002143900, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
bool __fastcall CBasePlayer::Weapon_ShouldSelectItem(CBasePlayer *const this, CBaseCombatWeapon *pWeapon)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // edi
  __int16 v5; // ax
  uint32 v6; // edx
  CBaseCombatWeapon *m_pInstance; // rcx
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  __int16 v12; // [rsp+0h] [rbp-10h]

  v2 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = v3 | v12 & 0x8000;
  v6 = v2;
  m_pInstance = 0;
  v8 = (v6 << 15) | v5 & 0x7FFF;
  if ( (v8 + 2) > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v4 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  return pWeapon != m_pInstance;
}


// CBasePlayer::SelectItem  (line 1005, @0x000000000213dc00, libserver.so)
void __fastcall CBasePlayer::SelectItem(CBasePlayer *const this, const char *pstr, int iSubType)
{
  __int64 v4; // rax

  if ( pstr != 0 )
  {
    v4 = (*(this->_vptr_IHandleEntity + 304))(this, pstr, iSubType);
    if ( v4 != 0 )
      (*(this->_vptr_IHandleEntity + 464))(this, v4);
  }
}


// CBasePlayer::SelectItem  (line 1020, @0x0000000002147460, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
// calls: CBasePlayer::ResetAutoaim
void __fastcall CBasePlayer::SelectItem(CBasePlayer *const this, CBaseCombatWeapon *pWeapon)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntitySystem *v7; // rcx
  CEntityIdentity *v8; // rdx
  __int64 v9; // rsi
  CEntityIdentity *v10; // rdx

  if ( (*(this->_vptr_IHandleEntity + 436))(this) == 0 && (*(this->_vptr_IHandleEntity + 405))(this, pWeapon) != 0 )
  {
    if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    v7 = g_pEntitySystem;
    if ( v6 + 2 <= 1 )
      goto LABEL_10;
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v8 == 0 )
      goto LABEL_10;
    v9 = v5 & 0x1FF;
    v7 = (8 * v9);
    v10 = &v8[v9];
    if ( v10 == 0 || v6 != v10->m_EHandle.m_Index || v10->m_pInstance == 0 )
      goto LABEL_10;
    if ( (*(v10->m_pInstance->_vptr_IHandleEntity + 279))(v10->m_pInstance) != 0 )
    {
      CBasePlayer::ResetAutoaim(this);
LABEL_10:
      (*(this->_vptr_IHandleEntity + 310))(this, pWeapon, 0, v7);
    }
  }
}


// IntervalDistance  (line 1047, @0x0000000002164590, libserver.so)
float __fastcall IntervalDistance(float a1, float x, float x0, float x1)
{
  float v4; // xmm3_4

  if ( x > x0 )
  {
    v4 = x;
    x = x0;
    x0 = v4;
  }
  if ( x > a1 )
    return x - a1;
  if ( a1 <= x0 )
    return 0.0;
  return a1 - x0;
}


// CBasePlayer::FindUseEntity  (line 1066, @0x0000000002165eb0, libserver.so)  // inlines: CGameTrace, CalcNearestPoint, CollisionToWorldSpace, ConvertToExternalMemory, DotProduct, EnableInteractsWith, FastSqrt, GetBool, GetDebugName, GetFloat, GetInt, Init, IntervalDistance, IsBoundsDefinedInEntitySpace, Length, LengthSqr, NextEntity, Purge, Purge_FixedGrowable, Ray_t, RemoveAll, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMA, VectorMultiply, VectorSubtract, VectorTransform, WorldSpaceAABB, WorldSpaceCenter, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator*, operator+, operator-, operator=, operator==, ~CEntitySphereQuery, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: AngleVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, VectorTransform, CBaseEntity::GetGroundEntity, CEntitySphereQuery::CEntitySphereQuery, CEntitySphereQuery::GetCurrentEntity, CCollisionProperty::CollisionAABBToWorldAABB, IntersectRayWithBox, CCollisionProperty::CalcNearestPoint, NDebugOverlay::Cross3D (22 total)
// strings: "Radial using: %s\n", "no usable entity found", "Trace using: %s\n"
CBaseEntity *__fastcall CBasePlayer::FindUseEntity(
        CBasePlayer *const this,
        float useRange,
        float flPreferredUseRange,
        float flTolerance,
        bool *pInPreferredRange,
        __int64 bPreferPlayerInteractions)
{
  float m_flCurrentTime; // xmm0_4
  float m_flPreventUseTime; // xmm1_4
  CGlobalVars *v9; // rbx
  double v10; // xmm0_8
  vec_t v11; // xmm1_4
  double v12; // xmm0_8
  float v13; // xmm1_4
  float m_fValue; // xmm6_4
  double v15; // xmm0_8
  bool v16; // zf
  vec_t v17; // xmm1_4
  float *v18; // rax
  const matrix3x4_t *v19; // rax
  float z; // xmm0_4
  float v21; // xmm1_4
  unsigned __int8 (__fastcall *v22)(CBasePlayer *const, CBaseEntity *, __int64); // rbx
  CBaseEntity *GroundEntity; // rax
  CBasePlayer *CurrentEntity; // rax
  CBaseEntity *v25; // rbx
  const CCollisionProperty *m_pCollision; // rdi
  const CCollisionProperty *v27; // rdi
  float v28; // xmm0_4
  float v29; // xmm0_4
  double v30; // xmm0_8
  double v31; // xmm1_8
  double v32; // xmm2_8
  double v33; // xmm0_8
  float v34; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint32 v36; // eax
  CBaseEntity *result; // rax
  vec_t v38; // xmm1_4
  const char *v39; // rsi
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm1_4
  vec_t v42; // xmm0_4
  __int64 v43; // rax
  __int64 v44; // rax
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  const char *DebugName; // rsi
  CBaseEntity *pFoundByTrace; // [rsp+18h] [rbp-1458h]
  CBaseEntity *pNearest; // [rsp+20h] [rbp-1450h]
  float vecRayStart; // [rsp+28h] [rbp-1448h]
  float nearestDot; // [rsp+30h] [rbp-1440h]
  float centerZa; // [rsp+40h] [rbp-1430h]
  float centerZ; // [rsp+40h] [rbp-1430h]
  float vecWorldPt; // [rsp+48h] [rbp-1428h]
  float nearestDot_0; // [rsp+50h] [rbp-1420h]
  float nearestDot_0a; // [rsp+50h] [rbp-1420h]
  float out; // [rsp+58h] [rbp-1418h]
  Vector forward; // [rsp+60h] [rbp-1410h] BYREF
  Vector up; // [rsp+70h] [rbp-1400h] BYREF
  Vector searchCenter; // [rsp+80h] [rbp-13F0h] BYREF
  Vector testPos; // [rsp+90h] [rbp-13E0h] BYREF
  Vector point; // [rsp+A0h] [rbp-13D0h] BYREF
  Vector objMins; // [rsp+B0h] [rbp-13C0h] BYREF
  Vector objMaxs; // [rsp+C0h] [rbp-13B0h] BYREF
  Vector dir; // [rsp+D0h] [rbp-13A0h] BYREF
  CTraceFilterSimple v69; // [rsp+E0h] [rbp-1390h] BYREF
  CTraceFilterSimple v70; // [rsp+120h] [rbp-1350h] BYREF
  Ray_t ray; // [rsp+160h] [rbp-1310h] BYREF
  Ray_t v72; // [rsp+1B0h] [rbp-12C0h] BYREF
  trace_t tr; // [rsp+200h] [rbp-1270h] BYREF
  trace_t trAABBPoint; // [rsp+2B0h] [rbp-11C0h] BYREF
  trace_t trCheckOccluded; // [rsp+360h] [rbp-1110h] BYREF
  CEntitySphereQuery sphere; // [rsp+410h] [rbp-1060h] BYREF
  unsigned __int64 v77; // [rsp+1438h] [rbp-38h]

  m_flCurrentTime = 0.0;
  v77 = __readfsqword(0x28u);
  m_flPreventUseTime = this->m_flPreventUseTime;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        out = this->m_flPreventUseTime;
        (m_pfnWarningFunc)(1, pInPreferredRange, bPreferPlayerInteractions, 0.0);
        m_flPreventUseTime = out;
      }
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  if ( m_flPreventUseTime > m_flCurrentTime )
    return 0;
  v10 = (*(this->_vptr_IHandleEntity + 312))(this, 0, bPreferPlayerInteractions);
  trCheckOccluded.startpos.z = v11;
  *&trCheckOccluded.startpos.x = v10;
  AngleVectors(&trCheckOccluded, &forward, 0, &up);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v12 = (*(this->_vptr_IHandleEntity + 311))(this, 0);
  searchCenter.z = v13;
  *&searchCenter.x = v12;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  *&trCheckOccluded.startpos.x = v12;
  *&trCheckOccluded.m_pSurfaceProperties = m_fValue;
  trCheckOccluded.startpos.z = v13;
  trCheckOccluded.endpos.y = ((forward.x * 1024.0) + searchCenter.x) - searchCenter.x;
  trCheckOccluded.endpos.z = ((forward.y * 1024.0) + *(&v12 + 1)) - *(&v12 + 1);
  trCheckOccluded.plane.normal.x = ((1024.0 * forward.z) + v13) - v13;
  trCheckOccluded.endpos.x = 0.0;
  memset(&trCheckOccluded.plane.normal.y, 0, 36);
  BYTE4(trCheckOccluded.m_pSurfaceProperties) = 1;
  BYTE5(trCheckOccluded.m_pSurfaceProperties) = (((trCheckOccluded.endpos.y * trCheckOccluded.endpos.y)
                                                + (trCheckOccluded.endpos.z * trCheckOccluded.endpos.z))
                                               + (trCheckOccluded.plane.normal.x * trCheckOccluded.plane.normal.x)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&trAABBPoint, this, 4, 0);
  *&trAABBPoint.startpos.z |= 0x187011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &trCheckOccluded, &trAABBPoint, &tr);
  pFoundByTrace = tr.m_pEnt;
  if ( (*(this->_vptr_IHandleEntity + 475))(this, tr.m_pEnt, 0) != 0 )
  {
    nearestDot_0 = tr.endpos.x - tr.startpos.x;
    vecWorldPt = tr.endpos.y - tr.startpos.y;
    v15 = (*(this->m_Collision._vptr_ICollideable + 19))(&this->m_Collision);
    v16 = (this->m_Collision.m_nSolidType.m_Value & 0xFD) == 0;
    *&trCheckOccluded.startpos.x = v15;
    trCheckOccluded.startpos.z = v17;
    if ( v16
      || (v18 = (*(this->m_Collision._vptr_ICollideable + 5))(&this->m_Collision),
          vec3_angle.x == *v18 && vec3_angle.y == v18[1] && vec3_angle.z == v18[2]) )
    {
      centerZa = (*(this->m_Collision._vptr_ICollideable + 27))(&this->m_Collision);
      v43 = (*(this->m_Collision._vptr_ICollideable + 4))(&this->m_Collision);
      z = (centerZa * trCheckOccluded.startpos.z) + *(v43 + 8);
    }
    else
    {
      v19 = (*(this->m_Collision._vptr_ICollideable + 6))(&this->m_Collision);
      VectorTransform(&trCheckOccluded.startpos.x, v19, &trAABBPoint.startpos.x);
      z = trAABBPoint.startpos.z;
    }
    vecRayStart = z;
    centerZ = z + *((*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision) + 8);
    v44 = (*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
    v45 = centerZ;
    v46 = vecRayStart + *(v44 + 8);
    if ( v46 <= centerZ )
    {
      v45 = vecRayStart + *(v44 + 8);
      v46 = centerZ;
    }
    if ( v45 <= tr.endpos.z )
    {
      v47 = 0.0;
      if ( tr.endpos.z > v46 )
        v47 = (tr.endpos.z - v46) * (tr.endpos.z - v46);
    }
    else
    {
      v47 = (v45 - tr.endpos.z) * (v45 - tr.endpos.z);
    }
    if ( useRange > fsqrt(((nearestDot_0 * nearestDot_0) + (vecWorldPt * vecWorldPt)) + v47) )
    {
      result = pFoundByTrace;
      if ( sv_debug_player_use.m_pParent->m_Value.m_nValue != 0 )
      {
        NDebugOverlay::Line(&searchCenter, &tr.endpos, 0, 255, 0, 1, 30.0);
        NDebugOverlay::Cross3D(&tr.endpos, 16.0, 0, 255, 0, 1, 30.0);
        result = pFoundByTrace;
        if ( sv_debug_player_use.m_pParent->m_Value.m_nValue != 0 )
        {
          DebugName = "no usable entity found";
          if ( pFoundByTrace != 0 )
            DebugName = CEntityIdentity::GetDebugName(pFoundByTrace->m_pEntity);
          Msg("Trace using: %s\n", DebugName);
          return pFoundByTrace;
        }
      }
      return result;
    }
  }
  if ( CBaseEntity::GetGroundEntity(this) != 0
    && (v22 = *(this->_vptr_IHandleEntity + 475),
        GroundEntity = CBaseEntity::GetGroundEntity(this),
        v22(this, GroundEntity, 16) != 0) )
  {
    pNearest = CBaseEntity::GetGroundEntity(this);
    nearestDot = 0.70700002;
  }
  else
  {
    nearestDot = 0.0;
    pNearest = 0;
  }
  CEntitySphereQuery::CEntitySphereQuery(&sphere, &searchCenter, useRange, v21);
  while ( 1 )
  {
    CurrentEntity = CEntitySphereQuery::GetCurrentEntity(&sphere);
    v25 = CurrentEntity;
    if ( CurrentEntity == 0 )
      break;
    if ( this == CurrentEntity || (*(this->_vptr_IHandleEntity + 475))(this, CurrentEntity, 32) == 0 )
      goto LABEL_13;
    memset(&trAABBPoint.m_ShapeAttributes, 0, 31);
    trAABBPoint.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&trAABBPoint);
    m_pCollision = v25->m_pCollision;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::CollisionAABBToWorldAABB(
        m_pCollision,
        &m_pCollision->m_vecMins.m_Value,
        &m_pCollision->m_vecMaxs.m_Value,
        &objMins,
        &objMaxs);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v25);
      y = AbsOrigin->y;
      v42 = AbsOrigin->z;
      objMins.x = AbsOrigin->x;
      objMins.y = y;
      objMins.z = v42;
      objMaxs = objMins;
    }
    trCheckOccluded.startpos.z = forward.z * useRange;
    trCheckOccluded.startpos.y = forward.y * useRange;
    trCheckOccluded.startpos.x = useRange * forward.x;
    if ( IntersectRayWithBox(&searchCenter, &trCheckOccluded.startpos, &objMins, &objMaxs, 1.0, &trAABBPoint, 0) )
    {
      v27 = v25->m_pCollision;
      testPos = trAABBPoint.endpos;
      if ( v27 == 0 )
        goto LABEL_37;
    }
    else
    {
      v27 = v25->m_pCollision;
      testPos.y = ((forward.y * useRange) * 0.5) + searchCenter.y;
      testPos.z = ((forward.z * useRange) * 0.5) + searchCenter.z;
      testPos.x = ((useRange * forward.x) * 0.5) + searchCenter.x;
      if ( v27 == 0 )
      {
LABEL_37:
        point = *CBaseEntity::GetAbsOrigin(v25);
        goto LABEL_22;
      }
    }
    CCollisionProperty::CalcNearestPoint(v27, &testPos, &point);
LABEL_22:
    if ( sv_debug_player_use.m_pParent->m_Value.m_nValue != 0 )
    {
      NDebugOverlay::Cross3D(&testPos, 5.0, 0, 255, 0, 1, 0.1);
      NDebugOverlay::Cross3D(&point, 5.0, 0, 0, 255, 1, 0.1);
    }
    dir.y = point.y - searchCenter.y;
    dir.z = point.z - searchCenter.z;
    dir.x = point.x - searchCenter.x;
    VectorNormalize(&dir);
    v28 = (dir.z * forward.z) + ((dir.y * forward.y) + (dir.x * forward.x));
    nearestDot_0a = v28;
    if ( flTolerance <= v28 && v28 > nearestDot )
    {
      memset(&trCheckOccluded.m_ShapeAttributes, 0, 31);
      trCheckOccluded.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&trCheckOccluded);
      v29 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      ray.m_Delta.y = point.y - searchCenter.y;
      ray.m_flRadius = v29;
      ray.m_Delta.z = point.z - searchCenter.z;
      ray.m_Start.w = 0.0;
      memset(&ray.m_Delta.w, 0, 36);
      ray.m_Delta.x = point.x - searchCenter.x;
      ray.m_IsRay = 1;
      ray.m_Start.Vector = searchCenter;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&v69, this, 4, 0);
      v69.m_attr.m_nInteractsWith |= 0x187011uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v69, &trCheckOccluded);
      if ( trCheckOccluded.fraction != 1.0 && v25 != trCheckOccluded.m_pEnt )
      {
        v33 = (*(v25->_vptr_IHandleEntity + 62))(v25, v30, v31, v32, 1.0);
        *&ray.m_Start.x = v33;
        ray.m_Start.z = v34;
        *&v33 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        v72.m_Delta.y = *(&v33 + 1) - searchCenter.y;
        v72.m_Start.w = 0.0;
        v72.m_flRadius = *&v33;
        v72.m_Delta.z = v34 - searchCenter.z;
        memset(&v72.m_Delta.w, 0, 36);
        v72.m_Delta.x = ray.m_Start.x - searchCenter.x;
        v72.m_IsRay = 1;
        v72.m_Start.Vector = searchCenter;
        v72.m_IsSwept = (((v72.m_Delta.x * v72.m_Delta.x) + (v72.m_Delta.y * v72.m_Delta.y))
                       + (v72.m_Delta.z * v72.m_Delta.z)) != 0.0;
        CTraceFilterSimple::CTraceFilterSimple(&v70, this, 4, 0);
        v70.m_attr.m_nInteractsWith |= 0x187011uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v72, &v70, &trCheckOccluded);
        if ( trCheckOccluded.fraction != 1.0 && v25 != trCheckOccluded.m_pEnt )
        {
          v25 = pNearest;
          nearestDot_0a = nearestDot;
        }
      }
      pNearest = v25;
      nearestDot = nearestDot_0a;
    }
LABEL_13:
    ++sphere.m_listIndex;
  }
  sphere.m_results.m_list.m_Size = 0;
  v36 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount < 0
    || sphere.m_results.m_list.m_Memory.m_pMemory == &sphere.m_results.m_list.m_Memory.m_FixedMemory )
  {
    if ( v36 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
  }
  else if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v36 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  result = pNearest;
  if ( sv_debug_player_use.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( pNearest != 0 )
    {
      if ( pNearest == pFoundByTrace )
      {
        NDebugOverlay::Line(&searchCenter, &tr.endpos, 0, 255, 0, 1, 30.0);
        NDebugOverlay::Cross3D(&tr.endpos, 16.0, 0, 255, 0, 1, 30.0);
      }
      else
      {
        trCheckOccluded.startpos.x = 8.0;
        trCheckOccluded.startpos.y = 8.0;
        trCheckOccluded.startpos.z = 8.0;
        trAABBPoint.startpos.x = -8.0;
        trAABBPoint.startpos.y = -8.0;
        trAABBPoint.startpos.z = -8.0;
        *&v72.m_Start.x = (*(pNearest->_vptr_IHandleEntity + 62))(pNearest);
        v72.m_Start.z = v38;
        NDebugOverlay::Box(&v72.m_Start, &trAABBPoint.startpos, &trCheckOccluded.startpos, 0, 255, 0, 1, 30.0);
      }
      result = pNearest;
      if ( sv_debug_player_use.m_pParent->m_Value.m_nValue != 0 )
      {
        v39 = CEntityIdentity::GetDebugName(pNearest->m_pEntity);
        goto LABEL_49;
      }
    }
    else
    {
      NDebugOverlay::Line(&searchCenter, &tr.endpos, 255, 0, 0, 1, 30.0);
      NDebugOverlay::Cross3D(&tr.endpos, 16.0, 255, 0, 0, 1, 30.0);
      result = 0;
      if ( sv_debug_player_use.m_pParent->m_Value.m_nValue != 0 )
      {
        v39 = "no usable entity found";
LABEL_49:
        Msg("Radial using: %s\n", v39);
        return pNearest;
      }
    }
  }
  return result;
}


// CBasePlayer::PlayerUse  (line 1298, @0x000000000216b450, libserver.so)  // inlines: CVariantBase, CreateEvent, Free, GetFloat, GetUserID, SetInt, entindex, operator=, ~CVariantBase
// calls: CEntityInstance::AcceptInput, CBaseEntity::GetGroundEntity, TrainSpeed, CBaseEntity::EmitSound, CEntityInstance::GetEntityIndex, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Player.UseTrain", "player_use_miss"
void __fastcall CBasePlayer::PlayerUse(CBasePlayer *const this, CBaseEntity *pUseEntity)
{
  uint64 m_afButtonReleased; // r8
  __int64 v4; // rdx
  uint64 v5; // rcx
  CBaseEntity *v6; // r12
  char v7; // al
  bool v8; // zf
  uint32 m_afPhysicsFlags; // eax
  CBaseEntity *GroundEntity; // rax
  float *v11; // r13
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  void (__fastcall *v15)(__int64, char *, _QWORD); // r14
  CEntityIndex v16; // eax
  unsigned int v17; // eax
  variant_t sVariant; // [rsp+0h] [rbp-30h] BYREF

  m_afButtonReleased = this->m_afButtonReleased;
  v4 = (m_afButtonReleased | (LOBYTE(this->m_nButtons) | LOBYTE(this->m_afButtonPressed))) & 0x20;
  if ( ((m_afButtonReleased | (LOBYTE(this->m_nButtons) | LOBYTE(this->m_afButtonPressed))) & 0x20) == 0 )
    return;
  if ( (this->m_afPhysicsFlags & 8) == 0 )
  {
    v5 = this->m_afButtonPressed & 0x20;
    v6 = pUseEntity;
    if ( v5 != 0 )
    {
      if ( (*(this->_vptr_IHandleEntity + 477))(this, 0, v4, v5) != 0 )
        return;
      m_afPhysicsFlags = this->m_afPhysicsFlags;
      if ( (m_afPhysicsFlags & 1) != 0 )
      {
        this->m_iTrain = 192;
        this->m_afPhysicsFlags = m_afPhysicsFlags & 0xFFFFFFFE;
        return;
      }
      GroundEntity = CBaseEntity::GetGroundEntity(this);
      v11 = GroundEntity;
      if ( GroundEntity != 0
        && (this->m_nButtons & 2) == 0
        && (this->m_fFlags.m_Value & 1) != 0
        && ((*(GroundEntity->_vptr_IHandleEntity + 19))(GroundEntity) & 8) != 0
        && (*(*v11 + 784LL))(v11, this) != 0 )
      {
        this->m_afPhysicsFlags |= 1u;
        v12 = TrainSpeed(v11[99], v11[306]);
        LOBYTE(v12) = v12 | 0xC0;
        this->m_iTrain = v12;
        CBaseEntity::EmitSound(this, "Player.UseTrain", 0.0, 0);
        return;
      }
    }
    if ( v6 == 0 )
    {
      v6 = (*(this->_vptr_IHandleEntity + 474))(this, 0, 0, v5, player_use_radius.m_pParent->m_Value.m_fValue, 0.0);
      if ( v6 == 0 )
      {
        if ( (this->m_afButtonPressed & 0x20) != 0 )
        {
          v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_use_miss", 0, 0);
          v14 = v13;
          if ( v13 != 0 )
          {
            v15 = *(*v13 + 112LL);
            v16.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
            v17 = (*(*engine + 224LL))(engine, (v16.m_Data - 1));
            v15(v14, "userid", v17);
            (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v14, 0);
          }
          (*(this->_vptr_IHandleEntity + 473))(this);
        }
        return;
      }
    }
    v7 = (*(v6->_vptr_IHandleEntity + 19))(v6, pUseEntity, v4, v5);
    v8 = (this->m_nButtons & 0x20) == 0;
    sVariant.m_flags = 0;
    sVariant.m_uint64 = 0;
    sVariant.m_type = 5;
    if ( !v8 && (v7 & 2) != 0 )
      goto LABEL_9;
    if ( (this->m_afButtonPressed & 0x20) == 0 || (v7 & 5) == 0 )
    {
      if ( (this->m_afButtonReleased & 0x20) == 0 )
        return;
      if ( ((*(v6->_vptr_IHandleEntity + 19))(v6) & 4) != 0 )
      {
        CEntityInstance::AcceptInput(v6, "Use", this, this, &sVariant, 0);
        (*(this->_vptr_IHandleEntity + 476))(this, v6, 0);
      }
      goto LABEL_12;
    }
    if ( (v7 & 2) != 0 )
LABEL_9:
      this->m_afPhysicsFlags |= 4u;
    if ( ((*(v6->_vptr_IHandleEntity + 19))(v6) & 4) != 0 )
    {
      CEntityInstance::AcceptInput(v6, "Use", this, this, &sVariant, 1);
      (*(this->_vptr_IHandleEntity + 476))(this, v6, 1);
    }
    else
    {
      CEntityInstance::AcceptInput(v6, "Use", this, this, &sVariant, 3);
      (*(this->_vptr_IHandleEntity + 476))(this, v6, 3);
    }
LABEL_12:
    if ( (sVariant.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, sVariant.m_uint64);
    return;
  }
  if ( (this->m_afButtonPressed & 0x20) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 438))(this, 1);
  }
  else if ( (m_afButtonReleased & 0x20) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 438))(this, 0);
  }
}


// CBasePlayer::ViewPunch  (line 1410, @0x00000000021645d0, libserver.so)  // inlines: GetBool, GetInt
// callers: CBasePlayer::DamageEffect
void __fastcall CBasePlayer::ViewPunch(CBasePlayer *const this, const QAngle *const angleOffset)
{
  if ( sv_suppress_viewpunch.m_pParent->m_Value.m_nValue == 0 )
    (*(this->_vptr_IHandleEntity + 346))(this);
}


// CBasePlayer::ViewPunchReset  (line 1427, @0x0000000002164600, libserver.so)
// callers: CBasePlayer::GetInVehicle
void __fastcall CBasePlayer::ViewPunchReset(CBasePlayer *const this, double a2, float tolerance)
{
  ;
}


// CBasePlayer::SmoothViewOnStairs  (line 1453, @0x0000000002164610, libserver.so)  // inlines: GetBool, GetInt
// calls: CBaseEntity::GetGroundEntity, CBaseEntity::GetLocalOrigin
// callers: CBasePlayer::CalcPlayerView
void __fastcall CBasePlayer::SmoothViewOnStairs(CBasePlayer *const this, Vector *const eyeOrigin)
{
  CBaseEntity *GroundEntity; // r12
  float v5; // xmm1_4
  float m_flOldPlayerZ; // xmm2_4
  float v7; // xmm4_4
  int v8; // edx
  float v9; // xmm1_4
  float frametime; // xmm3_4
  float v11; // xmm1_4
  vec_t flCurrentPlayerZ; // [rsp+Ch] [rbp-24h]

  GroundEntity = CBaseEntity::GetGroundEntity(this);
  flCurrentPlayerZ = CBaseEntity::GetLocalOrigin(this)->z;
  v5 = *((*(this->_vptr_IHandleEntity + 171))(this) + 8);
  if ( GroundEntity != 0
    && GroundEntity->m_MoveType.m_Value == MoveType_t::MOVETYPE_NONE
    && (m_flOldPlayerZ = this->m_flOldPlayerZ) != flCurrentPlayerZ
    && smoothstairs.m_pParent->m_Value.m_nValue != 0
    && v5 == this->m_flOldPlayerViewOffsetZ )
  {
    if ( flCurrentPlayerZ > m_flOldPlayerZ )
    {
      v7 = 1.0;
      v8 = 1;
    }
    else
    {
      v7 = -1.0;
      v8 = -1;
    }
    v9 = 0.0;
    frametime = gpGlobals->frametime;
    if ( frametime >= 0.0 )
      v9 = frametime * 150.0;
    v11 = (v9 * v7) + m_flOldPlayerZ;
    this->m_flOldPlayerZ = v11;
    if ( v8 == 1 )
    {
      if ( v11 > flCurrentPlayerZ )
      {
        this->m_flOldPlayerZ = flCurrentPlayerZ;
        v11 = flCurrentPlayerZ;
      }
      if ( (flCurrentPlayerZ - v11) > 18.0 )
      {
        v11 = flCurrentPlayerZ - 18.0;
        this->m_flOldPlayerZ = flCurrentPlayerZ - 18.0;
      }
    }
    else
    {
      if ( flCurrentPlayerZ > v11 )
      {
        this->m_flOldPlayerZ = flCurrentPlayerZ;
        v11 = flCurrentPlayerZ;
      }
      if ( (flCurrentPlayerZ - v11) < -18.0 )
      {
        v11 = flCurrentPlayerZ + 18.0;
        this->m_flOldPlayerZ = flCurrentPlayerZ + 18.0;
      }
    }
    eyeOrigin->z = (v11 - flCurrentPlayerZ) + eyeOrigin->z;
  }
  else
  {
    this->m_flOldPlayerZ = flCurrentPlayerZ;
    this->m_flOldPlayerViewOffsetZ = v5;
  }
}


// CBasePlayer::ResetObserverMode  (line 1523, @0x0000000002143360, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=, operator=<int>
// callers: CBasePlayer::CBasePlayer
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::ResetObserverMode(CBasePlayer *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hObserverTarget.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hObserverTarget.m_Value.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hObserverTarget.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hObserverTarget.m_Value.m_Index = -1;
      }
    }
  }
  if ( this->m_iObserverMode.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iObserverMode.m_Value = 0;
  }
  this->m_afPhysicsFlags &= ~8u;
  this->m_bForcedObserverMode = 0;
  this->m_iObserverLastMode = 6;
}


// CBasePlayer::CalcView  (line 1538, @0x0000000002164b00, libserver.so)
// calls: CBasePlayer::CalcVehicleView, CBasePlayer::CalcObserverView
// callers: CBasePlayer::IsBoundingBoxInView
void __fastcall CBasePlayer::CalcView(
        CBasePlayer *const this,
        Vector *const eyeOrigin,
        QAngle *const eyeAngles,
        float *const zNear,
        float *const zFar,
        float *const fov)
{
  IServerVehicle *v11; // rax

  v11 = (*(this->_vptr_IHandleEntity + 347))(this);
  if ( v11 != 0 )
  {
    CBasePlayer::CalcVehicleView(this, v11, eyeOrigin, eyeAngles, zNear, zFar, fov);
  }
  else if ( (this->m_afPhysicsFlags & 8) != 0 )
  {
    CBasePlayer::CalcObserverView(this, eyeOrigin, eyeAngles, fov);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 524))(this, eyeOrigin, eyeAngles, fov);
  }
}


// CBasePlayer::CalcViewModelView  (line 1600, @0x00000000021647b0, libserver.so)
// calls: CBasePlayer::GetViewModel
void __fastcall CBasePlayer::CalcViewModelView(
        CBasePlayer *const this,
        const Vector *const eyeOrigin,
        const QAngle *const eyeAngles)
{
  int i; // ebx
  CBaseViewModel *ViewModel; // rax

  for ( i = 0; i != 2; ++i )
  {
    ViewModel = CBasePlayer::GetViewModel(this, i);
    if ( ViewModel != 0 )
      (*(ViewModel->_vptr_IHandleEntity + 254))(ViewModel, this, eyeOrigin, eyeAngles);
  }
}


// CBasePlayer::CalcPlayerView  (line 1614, @0x0000000002164940, libserver.so)  // inlines: VectorAdd, VectorCopy
// calls: CBaseEntity::InPrediction, CBasePlayer::SmoothViewOnStairs, CBasePlayer::CalcViewRoll, CBasePlayer::GetFOV
void __fastcall CBasePlayer::CalcPlayerView(
        CBasePlayer *const this,
        Vector *const eyeOrigin,
        QAngle *const eyeAngles,
        float *const fov)
{
  vec_t v8; // xmm1_4
  double v9; // [rsp+0h] [rbp-30h]

  v9 = (*(this->_vptr_IHandleEntity + 164))(this);
  eyeOrigin->z = v8;
  *&eyeOrigin->x = v9;
  *eyeAngles = *(*(this->_vptr_IHandleEntity + 165))(this);
  if ( !CBaseEntity::InPrediction() )
    CBasePlayer::SmoothViewOnStairs(this, eyeOrigin);
  CBasePlayer::CalcViewRoll(this, eyeAngles);
  eyeAngles->x = eyeAngles->x + vec3_angle.x;
  eyeAngles->y = eyeAngles->y + vec3_angle.y;
  eyeAngles->z = eyeAngles->z + vec3_angle.z;
  *fov = CBasePlayer::GetFOV(this);
}


// CBasePlayer::CalcVehicleView  (line 1669, @0x0000000002164a20, libserver.so)  // inlines: CacheVehicleView, VectorAdd, operator=
// calls: CBasePlayer::CacheVehicleView, CBasePlayer::CalcViewRoll
// callers: CBasePlayer::CalcView
void __fastcall CBasePlayer::CalcVehicleView(
        CBasePlayer *const this,
        IServerVehicle *pVehicle,
        Vector *const eyeOrigin,
        QAngle *const eyeAngles,
        float *const zNear,
        float *const zFar,
        float *const fov)
{
  if ( this->m_nVehicleViewSavedFrame != gpGlobals->framecount )
    CBasePlayer::CacheVehicleView(this);
  eyeOrigin->x = this->m_vecVehicleViewOrigin.x;
  eyeOrigin->y = this->m_vecVehicleViewOrigin.y;
  eyeOrigin->z = this->m_vecVehicleViewOrigin.z;
  eyeAngles->x = this->m_vecVehicleViewAngles.x;
  eyeAngles->y = this->m_vecVehicleViewAngles.y;
  eyeAngles->z = this->m_vecVehicleViewAngles.z;
  CBasePlayer::CalcViewRoll(this, eyeAngles);
  eyeAngles->x = eyeAngles->x + vec3_angle.x;
  eyeAngles->y = eyeAngles->y + vec3_angle.y;
  eyeAngles->z = eyeAngles->z + vec3_angle.z;
}


// CBasePlayer::CalcObserverView  (line 1714, @0x0000000002164800, libserver.so)  // inlines: VectorCopy
// callers: CBasePlayer::CalcView
void __fastcall CBasePlayer::CalcObserverView(
        CBasePlayer *const this,
        Vector *const eyeOrigin,
        QAngle *const eyeAngles,
        float *const fov)
{
  vec_t v7; // xmm1_4
  double v8; // [rsp+0h] [rbp-30h]

  v8 = (*(this->_vptr_IHandleEntity + 164))(this, eyeOrigin, eyeAngles, fov);
  eyeOrigin->z = v7;
  *&eyeOrigin->x = v8;
  *eyeAngles = *(*(this->_vptr_IHandleEntity + 165))(this);
}


// CBasePlayer::CalcRoll  (line 1752, @0x000000000213ec60, libserver.so)  // inlines: DotProduct
// calls: AngleVectors
float __fastcall CBasePlayer::CalcRoll(
        CBasePlayer *const this,
        const QAngle *const angles,
        const Vector *const velocity,
        float rollangle,
        float rollspeed)
{
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  Vector forward; // [rsp+10h] [rbp-40h] BYREF
  Vector right; // [rsp+20h] [rbp-30h] BYREF
  Vector up; // [rsp+30h] [rbp-20h] BYREF

  AngleVectors(angles, &forward, &right, &up);
  v6 = rollangle;
  v7 = ((velocity->x * right.x) + (velocity->y * right.y)) + (velocity->z * right.z);
  if ( v7 < 0.0 )
    v8 = -1.0;
  else
    v8 = 1.0;
  v9 = fabs(v7);
  if ( rollspeed > v9 )
    v6 = (rollangle * v9) / rollspeed;
  return v6 * v8;
}


// CBasePlayer::CalcViewRoll  (line 1787, @0x0000000002164880, libserver.so)  // inlines: GetAbsVelocity, GetFloat
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::CalcAbsoluteVelocity
// callers: CBasePlayer::CalcPlayerView, CBasePlayer::CalcVehicleView
void __fastcall CBasePlayer::CalcViewRoll(CBasePlayer *const this, QAngle *const eyeAngles)
{
  float (__fastcall *v4)(CBasePlayer *const, const QAngle *, CNetworkVectorBase<Vector,CBaseEntity::NetworkVar_m_vecAbsVelocity> *, float, float); // r13
  float m_fValue; // xmm1_4
  ConVar *m_pParent; // rax
  float v7; // xmm0_4
  const QAngle *AbsAngles; // rax
  float v9; // [rsp+8h] [rbp-28h]
  float v10; // [rsp+8h] [rbp-28h]
  float v11; // [rsp+Ch] [rbp-24h]
  float v12; // [rsp+Ch] [rbp-24h]

  if ( this->m_MoveType.m_Value != MoveType_t::MOVETYPE_NOCLIP )
  {
    v4 = *(this->_vptr_IHandleEntity + 398);
    m_fValue = sv_rollspeed.m_pParent->m_Value.m_fValue;
    m_pParent = sv_rollangle.m_pParent;
    v7 = m_pParent->m_Value.m_fValue;
    if ( (this->m_iEFlags & 0x1000) != 0 )
    {
      v10 = m_pParent->m_Value.m_fValue;
      v12 = sv_rollspeed.m_pParent->m_Value.m_fValue;
      CBaseEntity::CalcAbsoluteVelocity(this);
      v7 = v10;
      m_fValue = v12;
    }
    v9 = v7;
    v11 = m_fValue;
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    eyeAngles->z = v4(this, AbsAngles, &this->m_vecAbsVelocity, v9, v11) + eyeAngles->z;
  }
}


// CBasePlayer::DoMuzzleFlash  (line 1798, @0x0000000002143da0, libserver.so)
// calls: CBasePlayer::GetViewModel, CBaseAnimating::DoMuzzleFlash, CBaseCombatCharacter::DoMuzzleFlash
void __fastcall CBasePlayer::DoMuzzleFlash(CBasePlayer *const this)
{
  CBaseViewModel *ViewModel; // rax
  CBaseViewModel *v3; // rax

  ViewModel = CBasePlayer::GetViewModel(this, 0);
  if ( ViewModel != 0 )
    CBaseAnimating::DoMuzzleFlash(ViewModel);
  v3 = CBasePlayer::GetViewModel(this, 1);
  if ( v3 != 0 )
    CBaseAnimating::DoMuzzleFlash(v3);
  CBaseCombatCharacter::DoMuzzleFlash(this);
}


// CBasePlayer::GetFOVDistanceAdjustFactor  (line 1814, @0x0000000002164bc0, libserver.so)  // inlines: GetDefaultFOV, operator==<unsigned int>
// calls: CBasePlayer::GetFOV
float __fastcall CBasePlayer::GetFOVDistanceAdjustFactor(CBasePlayer *const this)
{
  signed int m_Value; // eax
  float FOV; // xmm0_4
  float defaultFOV; // [rsp+Ch] [rbp-14h]

  m_Value = this->m_iDefaultFOV.m_Value;
  if ( m_Value == 0 )
    m_Value = (*(g_pGameRules->_vptr_CGameRules + 35))(g_pGameRules);
  defaultFOV = m_Value;
  FOV = CBasePlayer::GetFOV(this);
  if ( FOV == defaultFOV || defaultFOV < 0.001 )
    return 1.0;
  else
    return FOV / defaultFOV;
}


// CBasePlayer::MakeTracer  (line 1836, @0x00000000021442c0, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
// calls: CBaseEntity::MakeTracer
void __fastcall CBasePlayer::MakeTracer(
        CBasePlayer *const this,
        const Vector *const vecTracerSrc,
        const trace_t *const tr,
        int iTracerType)
{
  unsigned __int16 v5; // r8
  int v6; // r11d
  uint32 v7; // eax
  CEntityIdentity *v8; // rdi
  CEntityIdentity *v9; // rdi
  CEntityInstance *m_pInstance; // rdi

  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
  if ( v7 + 2 > 1
    && (v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9]) != 0
    && (v9 = &v8[v6 & 0x1FF]) != 0
    && v7 == v9->m_EHandle.m_Index
    && (m_pInstance = v9->m_pInstance) != 0 )
  {
    (*(m_pInstance->_vptr_IHandleEntity + 131))(m_pInstance, vecTracerSrc, tr, iTracerType);
  }
  else
  {
    CBaseEntity::MakeTracer(this, vecTracerSrc, tr, iTracerType);
  }
}


// CBasePlayer::SharedSpawn  (line 1860, @0x0000000002164c40, libserver.so)  // inlines: AddSolidFlags, GetFloat, NetworkStateChanged, Set, SetBloodColor, SetCollisionBounds, SetRenderFX, SetSolid, curtime, operator=<RenderFx_t>, operator=<bool>, operator=<float>, operator=<int>
// calls: CBaseEntity::SetMoveType, CCollisionProperty::SetSolidFlags, CBaseEntity::SetFriction, CBaseEntity::SetLifeState, CBaseEntity::SetDamageOptions, CBaseAnimating::GetModelPtr, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SetSequence, SafeGetViewVectors, CCollisionProperty::SetCollisionBounds
// callers: CBasePlayer::SetOrResetInitialState
void __fastcall CBasePlayer::SharedSpawn(CBasePlayer *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  float v3; // xmm1_4
  ConVar *m_pParent; // rax
  CGlobalVars *v5; // r12
  float m_flCurrentTime; // xmm0_4
  HSequence v7; // eax
  const CViewVectors *ViewVectors; // r14
  const CViewVectors *v9; // rax
  const CViewVectors *v10; // r14
  const CViewVectors *v11; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_fValue; // [rsp+Ch] [rbp-24h]
  float v14; // [rsp+Ch] [rbp-24h]

  p_m_Collision = &this->m_Collision;
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 2);
  CCollisionProperty::SetSolidFlags(p_m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CBaseEntity::SetFriction(this, COERCE_DOUBLE(1065353216), v3);
  this->m_pl.deadflag = 0;
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  (*(this->_vptr_IHandleEntity + 157))(this, 100);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  if ( !this->m_Local.m_bDrawViewmodel.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 136, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bDrawViewmodel.m_Value = 1;
  }
  m_pParent = sv_stepsize.m_pParent;
  if ( m_pParent->m_Value.m_fValue != this->m_Local.m_flStepSize.m_Value )
  {
    m_fValue = m_pParent->m_Value.m_fValue;
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 140, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_flStepSize.m_Value = m_fValue;
  }
  if ( !this->m_Local.m_bAllowAutoMovement.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bAllowAutoMovement.m_Value = 1;
  }
  if ( this->m_nRenderFX.m_Value != RenderFx_t::kRenderFxNone )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 814, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderFX.m_Value = RenderFx_t::kRenderFxNone;
  }
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  if ( m_flCurrentTime != this->m_flNextAttack.m_Value )
  {
    v14 = m_flCurrentTime;
    (*(this->_vptr_IHandleEntity + 22))(this, 1356, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNextAttack.m_Value = v14;
  }
  if ( this->m_flMaxspeed.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3736, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMaxspeed.m_Value = 0.0;
  }
  if ( CBaseAnimating::GetModelPtr(this) != 0 )
  {
    v7.m_Data = CBaseAnimating::SelectWeightedSequence(this, 1).m_Data;
    CBaseAnimating::SetSequence(this, v7, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
  }
  if ( (this->m_fFlags.m_Value & 2) != 0 )
  {
    ViewVectors = SafeGetViewVectors();
    v9 = SafeGetViewVectors();
    CCollisionProperty::SetCollisionBounds(p_m_Collision, &v9->m_vDuckHullMin, &ViewVectors->m_vDuckHullMax);
  }
  else
  {
    v10 = SafeGetViewVectors();
    v11 = SafeGetViewVectors();
    CCollisionProperty::SetCollisionBounds(p_m_Collision, &v11->m_vHullMin, &v10->m_vHullMax);
  }
  if ( this->m_Local.m_flFallVelocity.m_Value != 0.0 )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_flFallVelocity.m_Value = 0.0;
  }
  this->m_bloodColor = 0;
}


// CBasePlayer::GetDefaultFOV  (line 1909, @0x0000000002164fa0, libserver.so)  // inlines: operator==<unsigned int>
// callers: CBasePlayer::GetFOV, CBasePlayer::GetFOVForNetworking, CBasePlayer::GetFOVDistanceAdjustFactorForNetworking, SharedVehicleViewSmoothing
float __fastcall CBasePlayer::GetDefaultFOV(const CBasePlayer *const this)
{
  signed int m_Value; // eax

  m_Value = this->m_iDefaultFOV.m_Value;
  if ( m_Value != 0 )
    return m_Value;
  else
    return (*(g_pGameRules->_vptr_CGameRules + 35))(g_pGameRules);
}


// CBasePlayer::AvoidPhysicsProps  (line 1928, @0x0000000002164fd0, libserver.so)  // inlines: GetMoveType
// calls: AvoidPushawayProps
void __fastcall CBasePlayer::AvoidPhysicsProps(CBasePlayer *const this, CUserCmd *pCmd)
{
  MoveType_t m_Value; // cl

  m_Value = this->m_MoveType.m_Value;
  if ( (m_Value > MoveType_t::MOVETYPE_OBSERVER || ((1LL << m_Value) & 0x501) == 0)
    && (*(this->_vptr_IHandleEntity + 436))(this) == 0
    && (*(this->_vptr_IHandleEntity + 139))(this) != 0 )
  {
    AvoidPushawayProps(this, pCmd);
  }
}


// CBasePlayer::GetTracerType  (line 1951, @0x0000000002144200, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
// calls: CBaseEntity::GetTracerType
const char *__fastcall CBasePlayer::GetTracerType(const CBasePlayer *const this)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // edi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  v2 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (v2 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) > 1
    && (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) != 0
    && (v7 = &v6[v4 & 0x1FF]) != 0
    && v5 == v7->m_EHandle.m_Index
    && v7->m_pInstance != 0 )
  {
    return (*(v7->m_pInstance->_vptr_IHandleEntity + 133))(v7->m_pInstance, this);
  }
  else
  {
    return CBaseEntity::GetTracerType(this);
  }
}


// CBasePlayer::ClearZoomOwner  (line 1964, @0x0000000002165030, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// callers: CEnvZoom::InputZoom, CTriggerCamera::Enable
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::ClearZoomOwner(CBasePlayer *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hZoomOwner.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hZoomOwner.m_Value.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hZoomOwner.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hZoomOwner.m_Value.m_Index = -1;
      }
    }
  }
}


// CBasePlayer::SetFOV  (line 1974, @0x00000000021650d0, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, curtime, operator!=, operator=, operator=<float>, operator=<int>
// calls: CBasePlayer::GetFOV, CanOverrideEnvZoomOwner
// callers: CEnvZoom::InputUnZoom, CEnvZoom::InputZoom, CBasePlayer::SetObserverTarget, CBasePlayer::Event_Killed, CBasePlayer::SetObserverMode, CBasePlayer::SetOrResetInitialState, CTriggerCamera::Disable, CTriggerCamera::Enable
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CBasePlayer::SetFOV(
        CBasePlayer *const this,
        CBaseEntity *pRequester,
        unsigned int FOV,
        __m128i zoomRate,
        int iZoomStart)
{
  uint32 m_Index; // edx
  float v10; // r15d
  unsigned __int16 v11; // di
  int v12; // esi
  int v13; // eax
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  CConcreteEntityList *v16; // rsi
  CEntityIdentity *v17; // rax
  __int64 v18; // rcx
  CEntityIdentity *v19; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v21; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CEntityIdentity *v24; // rax
  __int64 v25; // rcx
  CEntityIdentity *v26; // rax
  CEntityIdentity *m_pEntity; // rax
  int v28; // edx
  __int16 v29; // cx
  CBaseEntity *m_pInstance; // rdi
  float v31; // [rsp+Ch] [rbp-44h]

  if ( pRequester == 0 )
    return 0;
  m_Index = this->m_hZoomOwner.m_Value.m_Index;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(zoomRate));
  if ( m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hZoomOwner.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  v13 = (m_Index >> 15 << 15) | v11 & 0x7FFF;
  if ( (v13 + 2) > 1
    && (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9]) != 0
    && (v15 = &v14[v12 & 0x1FF]) != 0
    && v13 == v15->m_EHandle.m_Index
    && (m_pInstance = v15->m_pInstance, v15->m_pInstance != 0)
    && pRequester != m_pInstance )
  {
    if ( !CanOverrideEnvZoomOwner(m_pInstance) )
      return 0;
  }
  else if ( FOV != 0 )
  {
    if ( m_Index + 2 <= 1
      || (v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hZoomOwner.m_Value.m_Index) >> 9)
                                                               & 0x3F]) == 0
      || (v25 = this->m_hZoomOwner.m_Value.m_Index & 0x1FF, v16 = (8 * v25), (v26 = &v24[v25]) == 0)
      || m_Index != v26->m_EHandle.m_Index
      || pRequester != v26->m_pInstance )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_pEntity = pRequester->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v28 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v29 = 0x7FFF;
        else
          v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hZoomOwner.m_Value.m_Index) = v29 | this->m_hZoomOwner.m_Value.m_Index & 0x8000;
        this->m_hZoomOwner.m_Value.m_Index = (v28 << 15) | this->m_hZoomOwner.m_Value.m_Index & 0x7FFF;
        if ( iZoomStart > 0 )
          goto LABEL_16;
        goto LABEL_39;
      }
      this->m_hZoomOwner.m_Value.m_Index = -1;
    }
  }
  else
  {
    v16 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hZoomOwner.m_Value.m_Index) >> 9) & 0x3F];
      if ( v17 != 0 )
      {
        v18 = this->m_hZoomOwner.m_Value.m_Index & 0x1FF;
        v16 = (8 * v18);
        v19 = &v17[v18];
        if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index && v19->m_pInstance != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 2828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_hZoomOwner.m_Value.m_Index = -1;
        }
      }
    }
  }
  if ( iZoomStart <= 0 )
LABEL_39:
    iZoomStart = CBasePlayer::GetFOV(this);
LABEL_16:
  if ( iZoomStart != this->m_iFOVStart.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iFOVStart.m_Value = iZoomStart;
  }
  m_flCurrentTime = 0.0;
  v21 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v16, 0.0);
    }
    m_flCurrentTime = v21->m_flCurrentTime;
  }
  if ( m_flCurrentTime != this->m_flFOVTime.m_Value )
  {
    v31 = m_flCurrentTime;
    (*(this->_vptr_IHandleEntity + 22))(this, 2812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFOVTime.m_Value = v31;
  }
  if ( FOV != this->m_iFOV.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iFOV.m_Value = FOV;
  }
  if ( v10 != this->m_Local.m_flFOVRate.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 92, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_flFOVRate.m_Value = v10;
  }
  return 1;
}


// CBasePlayer::PlayWadeSound  (line 2022, @0x000000000213e170, libserver.so)
// calls: CBaseEntity::EmitSound
// strings: "Player.Wade"
void __fastcall CBasePlayer::PlayWadeSound(CBasePlayer *const this)
{
  CBaseEntity::EmitSound(this, "Player.Wade", 0.0, 0);
}


// CBasePlayer::UpdateUnderwaterState  (line 2030, @0x00000000021654b0, libserver.so)  // inlines: GetWaterLevel
// calls: CBaseEntity::RemoveFlag, CBaseEntity::GetWaterType, CBaseEntity::AddFlag
// callers: CBasePlayer::WaterMove
void __fastcall CBasePlayer::UpdateUnderwaterState(CBasePlayer *const this)
{
  unsigned __int8 m_Value; // al

  m_Value = this->m_nWaterLevel.m_Value;
  if ( m_Value == 3 )
  {
    if ( !this->m_bPlayerUnderwater )
      (*(this->_vptr_IHandleEntity + 468))(this, 1);
  }
  else
  {
    if ( this->m_bPlayerUnderwater )
    {
      (*(this->_vptr_IHandleEntity + 468))(this, 0);
      m_Value = this->m_nWaterLevel.m_Value;
    }
    if ( m_Value != 0 )
    {
      if ( (this->m_fFlags.m_Value & 0x200) == 0 )
      {
        if ( CBaseEntity::GetWaterType(this) == 0x8000 )
          (*(this->_vptr_IHandleEntity + 469))(this);
        CBaseEntity::AddFlag(this, 512);
      }
    }
    else if ( (this->m_fFlags.m_Value & 0x200) != 0 )
    {
      if ( this->m_iHealth.m_Value > 0 && (*(this->_vptr_IHandleEntity + 139))(this) != 0 )
        (*(this->_vptr_IHandleEntity + 469))(this);
      CBaseEntity::RemoveFlag(this, 512);
    }
  }
}


// CBasePlayer::SetPlayerUnderwater  (line 2077, @0x000000000213dc50, libserver.so)
void __fastcall CBasePlayer::SetPlayerUnderwater(CBasePlayer *const this, bool state)
{
  if ( this->m_bPlayerUnderwater != state )
    this->m_bPlayerUnderwater = state;
}


// CBasePlayer::SetPreviouslyPredictedOrigin  (line 2093, @0x00000000021655b0, libserver.so)  // inlines: operator=
// callers: CPlayerMove::FinishMove
void __fastcall CBasePlayer::SetPreviouslyPredictedOrigin(CBasePlayer *const this, const Vector *const vecAbsOrigin)
{
  this->m_vecPreviouslyPredictedOrigin = *vecAbsOrigin;
}


// CBasePlayer::GetPreviouslyPredictedOrigin  (line 2098, @0x00000000021655e0, libserver.so)
// callers: CPlayerMove::SetupMove
const Vector *__fastcall CBasePlayer::GetPreviouslyPredictedOrigin(const CBasePlayer *const this)
{
  return &this->m_vecPreviouslyPredictedOrigin;
}


// CBasePlayer::AddSplitScreenPlayer  (line 2103, @0x0000000002175340, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBasePlayer> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator=, operator[]
// calls: CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::Find, CUtlMemory<CHandle<CBasePlayer>, int>::Grow
// callers: CBasePlayer::SetSplitScreenPlayer
void __fastcall CBasePlayer::AddSplitScreenPlayer(CBasePlayer *const this, CBasePlayer *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // r12
  int v6; // eax
  CHandle<CBasePlayer> *v7; // rax
  CHandle<CBasePlayer> h; // [rsp+0h] [rbp-20h] BYREF

  h.m_Index = -1;
  if ( pOther != 0 )
  {
    m_pEntity = pOther->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::Find(&this->m_hSplitScreenPlayers, &h) == -1 )
  {
    m_Size = this->m_hSplitScreenPlayers.m_Size;
    v6 = this->m_hSplitScreenPlayers.m_Size;
    if ( m_Size == this->m_hSplitScreenPlayers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBasePlayer>,int>::Grow(&this->m_hSplitScreenPlayers.m_Memory, 1);
      v6 = this->m_hSplitScreenPlayers.m_Size;
    }
    this->m_hSplitScreenPlayers.m_Size = v6 + 1;
    v7 = &this->m_hSplitScreenPlayers.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      v7->m_Index = h.m_Index;
  }
}


// CBasePlayer::RemoveSplitScreenPlayer  (line 2113, @0x000000000216b260, libserver.so)  // inlines: CEntityHandle, CHandle, Element, FindAndRemove, GetEHandle, GetEntryIndex, GetSerialNumber, Remove, Set, ShiftElementsLeft, V_memmove, memmove, operator=, operator[]
// calls: CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::Find, memmove
// callers: CBasePlayer::UpdateOnRemove
void __fastcall CBasePlayer::RemoveSplitScreenPlayer(CBasePlayer *const this, CBasePlayer *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  int v5; // eax
  int m_Size; // ecx
  CHandle<CBasePlayer> *v7; // rsi
  CHandle<CBasePlayer> h; // [rsp+0h] [rbp-20h] BYREF

  h.m_Index = -1;
  if ( pOther != 0 )
  {
    m_pEntity = pOther->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  v5 = CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::Find(&this->m_hSplitScreenPlayers, &h);
  if ( v5 != -1 )
  {
    m_Size = this->m_hSplitScreenPlayers.m_Size;
    if ( m_Size - v5 - 1 > 0 )
    {
      v7 = &this->m_hSplitScreenPlayers.m_Memory.m_pMemory[v5 + 1];
      memmove(&v7[-1], v7, 4LL * (this->m_hSplitScreenPlayers.m_Size - v5 - 1));
      m_Size = this->m_hSplitScreenPlayers.m_Size;
    }
    this->m_hSplitScreenPlayers.m_Size = m_Size - 1;
  }
}


// CBasePlayer::GetSplitScreenPlayers  (line 2120, @0x00000000021655f0, libserver.so)
// callers: CRecipientFilter::UsePredictionRules, CPASAttenuationFilter::Filter, CBaseViewModel::ShouldTransmit, CPlayerLocalData::UpdateAreaBits
CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > *__fastcall CBasePlayer::GetSplitScreenPlayers(
        CBasePlayer *const this)
{
  return &this->m_hSplitScreenPlayers;
}


// CBasePlayer::DisableButtons  (line 2128, @0x0000000002165600, libserver.so)
// callers: CMovementSpeedMod::InputSpeedMod, CTriggerPlayerMovement::StartTouch
void __fastcall CBasePlayer::DisableButtons(CBasePlayer *const this, ButtonBitMask_t nButtons)
{
  this->m_afButtonDisabled |= nButtons;
}


// CBasePlayer::EnableButtons  (line 2136, @0x0000000002165610, libserver.so)
// callers: CMovementSpeedMod::InputSpeedMod, CTriggerPlayerMovement::EndTouch
void __fastcall CBasePlayer::EnableButtons(CBasePlayer *const this, ButtonBitMask_t nButtons)
{
  this->m_afButtonDisabled &= ~nButtons;
}


// CBasePlayer::ForceButtons  (line 2144, @0x0000000002165620, libserver.so)
// callers: CTriggerPlayerMovement::StartTouch
void __fastcall CBasePlayer::ForceButtons(CBasePlayer *const this, ButtonBitMask_t nButtons)
{
  this->m_afButtonForced |= nButtons;
}


// CBasePlayer::UnforceButtons  (line 2152, @0x0000000002165630, libserver.so)
// callers: CTriggerPlayerMovement::EndTouch
void __fastcall CBasePlayer::UnforceButtons(CBasePlayer *const this, ButtonBitMask_t nButtons)
{
  this->m_afButtonForced &= ~nButtons;
}


// CBasePlayer::GetSoundscapeListener  (line 2157, @0x000000000213dc70, libserver.so)
CBaseEntity *__fastcall CBasePlayer::GetSoundscapeListener(CBasePlayer *const this)
{
  return this;
}


// CBasePlayer::WeaponHasInfiniteAmmo  (line 2165, @0x000000000213dc80, libserver.so)  // inlines: GetBool, GetInt
bool __fastcall CBasePlayer::WeaponHasInfiniteAmmo(CBasePlayer *const this, CBaseCombatWeapon *pWeapon)
{
  return sv_infinite_ammo.m_pParent->m_Value.m_nValue != 0;
}


// LocalPlayerOnly_RecipientsFilter  (line 2170, @0x0000000002165640, libserver.so)  // inlines: Bitvec_Set, ClearAll, Set, SetOnly, memset
void __fastcall LocalPlayerOnly_RecipientsFilter(
        void *pRootObjectBase,
        void *pStructBase,
        void *pCurrentField,
        CSendProxyRecipients *pRecipients,
        int objectid)
{
  *pRecipients = 0;
  pRecipients->m_Bits.m_Ints[(objectid - 1) >> 5] |= 1 << (objectid - 1);
}


// LocalPlayerOnly_UserGroupFunc  (line 2175, @0x0000000002165670, libserver.so)  // inlines: Bitvec_Set, ClearAll, Set, SetOnly, memset
void __fastcall LocalPlayerOnly_UserGroupFunc(
        const char *pUserGroupName,
        const void *pStructBase,
        CSendProxyRecipients *pRecipients,
        int objectID)
{
  *pRecipients = 0;
  pRecipients->m_Bits.m_Ints[(objectID - 1) >> 5] |= 1 << (objectID - 1);
}


// CBasePlayer::FindEntityClassForward  (line 2188, @0x0000000002163720, libserver.so)  // inlines: CGameTrace, ClassMatches, DidHit, DidHitNonWorldEntity, EnableInteractsWith, FClassnameIs, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CEntityIdentity::ClassMatches
CBaseEntity *__fastcall CBasePlayer::FindEntityClassForward(CBasePlayer *const this, char *classname)
{
  double v4; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  ConVar *m_pParent; // rax
  CBaseEntity *m_pEnt; // rbx
  float v11; // [rsp+4h] [rbp-19Ch]
  float v12; // [rsp+4h] [rbp-19Ch]
  float v13; // [rsp+8h] [rbp-198h]
  float v14; // [rsp+8h] [rbp-198h]
  float v15; // [rsp+Ch] [rbp-194h]
  float v16; // [rsp+Ch] [rbp-194h]
  Vector forward; // [rsp+10h] [rbp-190h] BYREF
  double v18; // [rsp+20h] [rbp-180h]
  float v19; // [rsp+28h] [rbp-178h]
  double v20; // [rsp+30h] [rbp-170h]
  float v21; // [rsp+38h] [rbp-168h]
  CTraceFilterSimple v22; // [rsp+40h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-120h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBasePlayer::EyeVectors(this, &forward, 0, 0);
  v11 = forward.x * 16384.0;
  v13 = forward.y * 16384.0;
  v15 = 16384.0 * forward.z;
  v4 = (*(this->_vptr_IHandleEntity + 164))(this);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  v20 = v4;
  v21 = v6;
  v12 = v11 + *&v4;
  v16 = v6 + v15;
  v14 = v13 + *(&v4 + 1);
  v18 = (vptr_IHandleEntity[164])(this);
  v19 = v7;
  ray.m_Start.w = 0.0;
  m_pParent = phys_traceline_radius.m_pParent;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = v12 - *&v18;
  ray.m_Delta.y = v14 - *(&v18 + 1);
  ray.m_Delta.z = v16 - v7;
  ray.m_Start.z = v7;
  *&ray.m_Start.x = v18;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v22, this, 4, 0);
  v22.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v22, &tr);
  if ( tr.fraction != 1.0
    && (tr.fraction < 1.0 || tr.startsolid)
    && tr.m_ShapeAttributes.m_nEntityId != 0x8000
    && (m_pEnt = tr.m_pEnt, tr.m_pEnt != 0)
    && CEntityIdentity::ClassMatches(tr.m_pEnt->m_pEntity, classname) )
  {
    return m_pEnt;
  }
  else
  {
    return 0;
  }
}


// CBasePlayer::FindEntityForward  (line 2216, @0x0000000002163a00, libserver.so)  // inlines: CGameTrace, DidHit, DidHitNonWorldEntity, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
CBaseEntity *__fastcall CBasePlayer::FindEntityForward(CBasePlayer *const this, bool fHull)
{
  double v4; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  ConVar *m_pParent; // rax
  CBaseEntity *result; // rax
  float v10; // [rsp+4h] [rbp-19Ch]
  float v11; // [rsp+4h] [rbp-19Ch]
  float v12; // [rsp+8h] [rbp-198h]
  float v13; // [rsp+8h] [rbp-198h]
  float v14; // [rsp+Ch] [rbp-194h]
  float v15; // [rsp+Ch] [rbp-194h]
  Vector forward; // [rsp+10h] [rbp-190h] BYREF
  double v17; // [rsp+20h] [rbp-180h]
  float v18; // [rsp+28h] [rbp-178h]
  double v19; // [rsp+30h] [rbp-170h]
  float v20; // [rsp+38h] [rbp-168h]
  CTraceFilterSimple v21; // [rsp+40h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-120h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBasePlayer::EyeVectors(this, &forward, 0, 0);
  v10 = forward.x * 16384.0;
  v12 = forward.y * 16384.0;
  v14 = 16384.0 * forward.z;
  v4 = (*(this->_vptr_IHandleEntity + 164))(this);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  v19 = v4;
  v20 = v6;
  v11 = v10 + *&v4;
  v15 = v6 + v14;
  v13 = v12 + *(&v4 + 1);
  v17 = (vptr_IHandleEntity[164])(this);
  v18 = v7;
  ray.m_Start.w = 0.0;
  m_pParent = phys_traceline_radius.m_pParent;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = v11 - *&v17;
  ray.m_Delta.y = v13 - *(&v17 + 1);
  ray.m_Delta.z = v15 - v7;
  ray.m_Start.z = v7;
  *&ray.m_Start.x = v17;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v21, this, 4, 0);
  v21.m_attr.m_nInteractsWith |= !fHull ? 1593347LL : 552961LL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v21, &tr);
  result = 0;
  if ( tr.fraction != 1.0 && (tr.fraction < 1.0 || tr.startsolid) && tr.m_ShapeAttributes.m_nEntityId != 0x8000 )
    return tr.m_pEnt;
  return result;
}


// CBasePlayer::FindPickerEntityClass  (line 2250, @0x0000000002163cc0, libserver.so)  // inlines: operator=
// calls: CBasePlayer::EyeVectors, CGameEntitySystem::FindEntityClassNearestFacing
CBaseEntity *__fastcall CBasePlayer::FindPickerEntityClass(CBasePlayer *const this, char *classname)
{
  CBaseEntity *result; // rax
  vec_t v5; // xmm1_4
  Vector forward; // [rsp+0h] [rbp-50h] BYREF
  Vector origin; // [rsp+10h] [rbp-40h] BYREF
  Vector v8; // [rsp+20h] [rbp-30h]

  result = (*(this->_vptr_IHandleEntity + 528))(this);
  if ( result == 0 )
  {
    CBasePlayer::EyeVectors(this, &forward, 0, 0);
    *&v8.x = (*(this->_vptr_IHandleEntity + 62))(this);
    v8.z = v5;
    origin = v8;
    return CGameEntitySystem::FindEntityClassNearestFacing(
             g_pGameEntitySystem,
             &origin,
             &forward,
             0.94999999,
             classname);
  }
  return result;
}


// CBasePlayer::FindPickerEntity  (line 2274, @0x0000000002163d60, libserver.so)
// calls: CBasePlayer::EyeVectors, CGameEntitySystem::FindEntityNearestFacing
CBaseEntity *__fastcall CBasePlayer::FindPickerEntity(CBasePlayer *const this)
{
  CBaseEntity *result; // rax
  vec_t v3; // xmm1_4
  Vector forward; // [rsp+0h] [rbp-30h] BYREF
  Vector origin; // [rsp+10h] [rbp-20h] BYREF

  result = (*(this->_vptr_IHandleEntity + 529))(this, 1);
  if ( result == 0 )
  {
    CBasePlayer::EyeVectors(this, &forward, 0, 0);
    *&origin.x = (*(this->_vptr_IHandleEntity + 62))(this);
    origin.z = v3;
    return CGameEntitySystem::FindEntityNearestFacing(g_pGameEntitySystem, &origin, &forward, 0.94999999);
  }
  return result;
}


// CBasePlayer::FindEntityInheritingFromForward  (line 2319, @0x0000000002163de0, libserver.so)  // inlines: CGameTrace, DidHit, DidHitNonWorldEntity, EnableInteractsWith, GetFloat, GetSingleInheritanceBaseClass, Init, LengthSqr, Ray_t, RnCollisionAttr_t, SchemaSingleInheritanceDepth, SingleInheritsFromOrIs, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
CBaseEntity *__fastcall CBasePlayer::FindEntityInheritingFromForward(
        CBasePlayer *const this,
        const CSchemaClassBindingBase *pInheritsFrom)
{
  double v4; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  ConVar *m_pParent; // rax
  CBaseEntity *m_pEnt; // rbx
  __int64 v11; // rax
  CSchemaClassInfo *m_pClassInfo_N; // rcx
  CSchemaClassInfo *v13; // rdx
  float v14; // [rsp+4h] [rbp-19Ch]
  float v15; // [rsp+4h] [rbp-19Ch]
  float v16; // [rsp+8h] [rbp-198h]
  float v17; // [rsp+8h] [rbp-198h]
  float v18; // [rsp+Ch] [rbp-194h]
  float v19; // [rsp+Ch] [rbp-194h]
  Vector forward; // [rsp+10h] [rbp-190h] BYREF
  double v21; // [rsp+20h] [rbp-180h]
  float v22; // [rsp+28h] [rbp-178h]
  double v23; // [rsp+30h] [rbp-170h]
  float v24; // [rsp+38h] [rbp-168h]
  CTraceFilterSimple v25; // [rsp+40h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-120h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBasePlayer::EyeVectors(this, &forward, 0, 0);
  v14 = forward.x * 16384.0;
  v16 = forward.y * 16384.0;
  v18 = 16384.0 * forward.z;
  v4 = (*(this->_vptr_IHandleEntity + 164))(this);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  v23 = v4;
  v24 = v6;
  v15 = v14 + *&v4;
  v19 = v6 + v18;
  v17 = v16 + *(&v4 + 1);
  v21 = (vptr_IHandleEntity[164])(this);
  v22 = v7;
  ray.m_Start.w = 0.0;
  m_pParent = phys_traceline_radius.m_pParent;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = v15 - *&v21;
  ray.m_Delta.y = v17 - *(&v21 + 1);
  ray.m_Delta.z = v19 - v7;
  ray.m_Start.z = v7;
  *&ray.m_Start.x = v21;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v25, this, 4, 0);
  v25.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v25, &tr);
  if ( tr.fraction == 1.0 || tr.fraction >= 1.0 && !tr.startsolid )
    return 0;
  if ( tr.m_ShapeAttributes.m_nEntityId == 0x8000 )
    return 0;
  m_pEnt = tr.m_pEnt;
  v11 = tr.m_pEnt->Schema_DynamicBinding();
  m_pClassInfo_N = pInheritsFrom->m_pClassInfo_N;
  v13 = *(v11 + 40);
  if ( v13 == 0 )
    return 0;
  if ( v13 != m_pClassInfo_N )
  {
    while ( v13->m_BaseClasses.m_Data.m_nImplLength != 0 )
    {
      v13 = *(v13->m_BaseClasses.m_Data.m_pImplElements + 1);
      if ( v13 == 0 )
        break;
      if ( m_pClassInfo_N == v13 )
        return m_pEnt;
    }
    return 0;
  }
  return m_pEnt;
}


// CBasePlayer::FindPickerEntityInheritingFrom  (line 2341, @0x00000000021640f0, libserver.so)
// calls: CBasePlayer::EyeVectors, CGameEntitySystem::FindEntityInheritingFromNearestFacing
CBaseEntity *__fastcall CBasePlayer::FindPickerEntityInheritingFrom(
        CBasePlayer *const this,
        const CSchemaClassBindingBase *pInheritsFrom)
{
  CBaseEntity *result; // rax
  vec_t v5; // xmm1_4
  Vector vForward; // [rsp+0h] [rbp-40h] BYREF
  Vector vOrigin; // [rsp+10h] [rbp-30h] BYREF

  result = (*(this->_vptr_IHandleEntity + 532))(this);
  if ( result == 0 )
  {
    CBasePlayer::EyeVectors(this, &vForward, 0, 0);
    *&vOrigin.x = (*(this->_vptr_IHandleEntity + 62))(this);
    vOrigin.z = v5;
    return CGameEntitySystem::FindEntityInheritingFromNearestFacing(
             g_pGameEntitySystem,
             &vOrigin,
             &vForward,
             0.94999999,
             pInheritsFrom);
  }
  return result;
}


