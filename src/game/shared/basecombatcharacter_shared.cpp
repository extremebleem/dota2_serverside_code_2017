// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/basecombatcharacter_shared.cpp:456
class CCombatCharVisCache : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct VisCacheEntry_t {
		float m_flTime;  // +0x8
		bool m_bEntity1CanSeeEntity2;  // +0xc
		bool m_bEntity2CanSeeEntity1;  // +0xd
		VisCacheEntry_t();
		VisCacheEntry_t(const VisCacheEntry_t &);

		// sizeof = 16
	};

	class CVisCacheEntryLess {
		bool operator!();
		bool operator()(const VisCacheEntry_t &, const VisCacheEntry_t &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nTestCount;  // +0x40
	int m_nHitCount;  // +0x44
	typedef CAutoGameSystem BaseClass;
	CCombatCharVisCache(CCombatCharVisCache &);
	CCombatCharVisCache(const CCombatCharVisCache &);
	CCombatCharVisCache();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CCombatCharVisCache *);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	int LookupVisibility(const CBaseCombatCharacter *, CBaseCombatCharacter *);
	VisCacheResult_t HasVisibility(int);
	void RegisterVisibility(int, bool, bool);
	virtual ~CCombatCharVisCache();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[24] FrameUpdatePreEntityThink
	// vtable[11] GameDeactivate
	// sizeof = 72
};

// src/game/shared/basecombatcharacter_shared.cpp:742
class CTraceFilterNoCombatCharacters : public CTraceFilterSimple {
public:

	CTraceFilterNoCombatCharacters(CTraceFilterNoCombatCharacters &);
	CTraceFilterNoCombatCharacters(const CTraceFilterNoCombatCharacters &);
	CTraceFilterNoCombatCharacters(const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterNoCombatCharacters();

	// vtable[2] ShouldHitEntity
	// sizeof = 64
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseCombatCharacter::UpdateOnRemove  (line 49, @0x00000000021524f0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Purge, RemoveAll, ReportDeathEvent, notify_system_event_params_t, operator CEntityInstance*, operator!=<CBaseCombatWeapon>, operator[]
// calls: UTIL_Remove, CUtlMemory<CHandle<CBaseCombatWeapon>, int>::Purge, CBaseCombatCharacter::RemoveAllWearables, CBaseAnimating::UpdateOnRemove
// callers: CBasePlayer::UpdateOnRemove, CDOTA_BaseNPC::UpdateOnRemove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::UpdateOnRemove(CBaseCombatCharacter *const this)
{
  int m_Size; // r12d
  __int64 v3; // r13
  int i; // r14d
  CHandle<CBaseCombatWeapon> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  bool v10; // zf
  unsigned __int16 v11; // dx
  int v12; // esi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  void (__fastcall *v16)(INotify *, CBaseCombatCharacter *const, __int64, char **); // rax
  char v17; // [rsp+Fh] [rbp-31h] BYREF
  char *v18; // [rsp+10h] [rbp-30h] BYREF

  m_Size = this->m_hMyWeapons.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    for ( i = 0; i < m_Size; ++i )
    {
      v5 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v3];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
          {
            UTIL_Remove(v9->m_pInstance);
            m_Size = this->m_hMyWeapons.m_Vector.m_Size;
          }
        }
      }
      ++v3;
    }
  }
  v10 = (this->m_hMyWeapons.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hMyWeapons.m_Vector.m_Size = 0;
  if ( v10 )
    CUtlMemory<CHandle<CBaseCombatWeapon>,int>::Purge(&this->m_hMyWeapons.m_Vector.m_Memory);
  if ( m_Size > 0 )
    (*(this->_vptr_IHandleEntity + 22))(this, 1624, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  CBaseCombatCharacter::RemoveAllWearables(this);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  v13 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  LODWORD(v18) = v13;
  if ( v13 + 2 > 1 )
  {
    v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
    if ( v14 != 0 )
    {
      v15 = &v14[v12 & 0x1FF];
      if ( v15 != 0 && v13 == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
      {
        (*(v15->m_pInstance->_vptr_IHandleEntity + 84))(v15->m_pInstance, this);
        (*(this->_vptr_IHandleEntity + 40))(this, 0);
      }
    }
  }
  v16 = *(g_pNotify->_vptr_INotify + 3);
  v18 = &v17;
  v16(g_pNotify, this, 1, &v18);
  CBaseAnimating::UpdateOnRemove(this);
}


// CBaseCombatCharacter::SwitchToNextBestWeapon  (line 91, @0x0000000002151f20, libserver.so)
// calls: CBaseEntity::GetLifeState
// callers: CBasePlayer::Weapon_Drop
bool __fastcall CBaseCombatCharacter::SwitchToNextBestWeapon(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pCurrent)
{
  bool result; // al
  CBaseCombatWeapon *v5; // rax

  result = CBaseEntity::GetLifeState(this) != LifeState_t::LIFE_DEAD
        && (pCurrent == 0 || (*(pCurrent->_vptr_IHandleEntity + 288))(pCurrent) != 0)
        && (v5 = (*(g_pGameRules->_vptr_CGameRules + 33))(g_pGameRules, this, pCurrent), pCurrent != v5)
        && v5 != 0
        && (*(this->_vptr_IHandleEntity + 310))(this, v5, 0);
  return result;
}


// CBaseCombatCharacter::Weapon_Switch  (line 115, @0x0000000002148e50, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator CBaseCombatWeapon*, operator!=, operator->, operator=
// callers: CBasePlayer::Weapon_Switch
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseCombatCharacter::Weapon_Switch(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pWeapon,
        int viewmodelindex)
{
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntitySystem *v9; // rcx
  __int64 v10; // rsi
  uint32 m_Index; // edx
  unsigned __int16 v12; // cx
  int v13; // esi
  uint32 v14; // eax
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  CEntityIdentity *m_pEntity; // rax
  int v20; // edx
  __int16 v21; // cx
  unsigned __int16 v23; // dx
  int v24; // esi
  CEntityInstance *m_pInstance; // rdi
  uint32 v26; // eax
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx

  if ( pWeapon == 0 )
    return 0;
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
  v8 = (v7 + 2);
  v9 = g_pEntitySystem;
  if ( v8 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v8 != 0 )
    {
      v10 = v6 & 0x1FF;
      v9 = (8 * v10);
      v8 += v10;
      if ( v8 != 0 && v7 == v8->m_EHandle.m_Index && pWeapon == v8->m_pInstance )
      {
        if ( (*(pWeapon->_vptr_IHandleEntity + 286))(pWeapon) == 0 )
        {
          if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
          {
            v23 = 0x7FFF;
            v24 = 0x7FFF;
          }
          else
          {
            v23 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
            v24 = v23;
          }
          m_pInstance = 0;
          v26 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v23 & 0x7FFF;
          if ( v26 + 2 > 1 )
          {
            v27 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9];
            if ( v27 != 0 )
            {
              v28 = &v27[v24 & 0x1FF];
              if ( v28 != 0 && v26 == v28->m_EHandle.m_Index )
                m_pInstance = v28->m_pInstance;
            }
          }
          return (*(m_pInstance->_vptr_IHandleEntity + 282))(m_pInstance);
        }
        return 0;
      }
    }
  }
  if ( (*(this->_vptr_IHandleEntity + 313))(this, pWeapon, v8, v9) == 0 )
    return 0;
  m_Index = this->m_hActiveWeapon.m_Value.m_Index;
  if ( m_Index == -1 )
  {
    v12 = 0x7FFF;
    v13 = 0x7FFF;
  }
  else
  {
    v12 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v13 = v12;
  }
  v14 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v12 & 0x7FFF;
  if ( v14 + 2 > 1 )
  {
    v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
    if ( v15 != 0 )
    {
      v16 = &v15[v13 & 0x1FF];
      if ( v16 != 0 && v14 == v16->m_EHandle.m_Index && v16->m_pInstance != 0 )
      {
        if ( (*(v16->m_pInstance->_vptr_IHandleEntity + 283))(v16->m_pInstance, pWeapon) == 0 )
          return 0;
        m_Index = this->m_hActiveWeapon.m_Value.m_Index;
      }
    }
  }
  if ( m_Index + 2 <= 1
    || (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActiveWeapon.m_Value.m_Index) >> 9)
                                                             & 0x3F]) == 0
    || (v18 = &v17[this->m_hActiveWeapon.m_Value.m_Index & 0x1FF]) == 0
    || m_Index != v18->m_EHandle.m_Index
    || pWeapon != v18->m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1648, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pEntity = pWeapon->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v21 = 0x7FFF;
      else
        v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActiveWeapon.m_Value.m_Index) = v21 | this->m_hActiveWeapon.m_Value.m_Index & 0x8000;
      this->m_hActiveWeapon.m_Value.m_Index = (v20 << 15) | this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActiveWeapon.m_Value.m_Index = -1;
    }
  }
  return (*(pWeapon->_vptr_IHandleEntity + 282))(pWeapon);
}


// CBaseCombatCharacter::Weapon_CanSwitchTo  (line 147, @0x00000000021629f0, libserver.so)  // inlines: CEntityHandle, GetAmmoCount, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToBasePlayer, operator CBaseCombatWeapon*
// calls: CBasePlayer::UsingStandardWeaponsInVehicle, CBaseCombatCharacter::GetAmmoCount
bool __fastcall CBaseCombatCharacter::Weapon_CanSwitchTo(CBaseCombatCharacter *const this, CBaseCombatWeapon *pWeapon)
{
  char v4; // r12
  int m_Value; // esi
  unsigned __int16 v7; // dx
  int v8; // esi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  if ( this != 0 && (*(this->_vptr_IHandleEntity + 140))(this) != 0 && (*(this->_vptr_IHandleEntity + 348))(this) != 0 )
  {
    v4 = CBasePlayer::UsingStandardWeaponsInVehicle(this);
    if ( v4 == 0 )
      return v4;
  }
  v4 = (*(pWeapon->_vptr_IHandleEntity + 276))(pWeapon);
  if ( v4 == 0 )
  {
    m_Value = pWeapon->m_iPrimaryAmmoType.m_Value;
    if ( m_Value == -1 || CBaseCombatCharacter::GetAmmoCount(this, m_Value) == 0 )
      return v4;
  }
  v4 = (*(pWeapon->_vptr_IHandleEntity + 281))(pWeapon);
  if ( v4 != 0
    && (this->m_hActiveWeapon.m_Value.m_Index == -1
      ? (v7 = 0x7FFF, v8 = 0x7FFF)
      : (v7 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF, v8 = v7),
        (v9 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF) + 2 > 1
     && (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) != 0
     && (v11 = &v10[v8 & 0x1FF]) != 0
     && v9 == v11->m_EHandle.m_Index
     && v11->m_pInstance != 0) )
  {
    return (*(v11->m_pInstance->_vptr_IHandleEntity + 279))(v11->m_pInstance);
  }
  else
  {
    return v4;
  }
}


// CBaseCombatCharacter::Weapon_GetSlot  (line 181, @0x00000000021493d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseCombatWeapon*, operator CEntityInstance*, operator!=<CBaseCombatWeapon>, operator[]
// globals: CEntityHandle::gm_pEntityList
CBaseCombatWeapon *__fastcall CBaseCombatCharacter::Weapon_GetSlot(const CBaseCombatCharacter *const this, int slot)
{
  __int64 v4; // rbx
  CHandle<CBaseCombatWeapon> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CHandle<CBaseCombatWeapon> *v10; // r14
  CBaseCombatWeapon *result; // rax
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx

  v4 = 0;
  if ( this->m_hMyWeapons.m_Vector.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v4];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0
          && m_Index == v9->m_EHandle.m_Index
          && v9->m_pInstance != 0
          && slot == (*(v9->m_pInstance->_vptr_IHandleEntity + 345))(v9->m_pInstance) )
        {
          break;
        }
      }
    }
    if ( this->m_hMyWeapons.m_Vector.m_Size <= ++v4 )
      return 0;
  }
  v10 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v4];
  result = 0;
  if ( v10->m_Index + 2 > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[v10->m_Index & 0x1FF];
      if ( v13 != 0 && v10->m_Index == v13->m_EHandle.m_Index )
        return v13->m_pInstance;
    }
  }
  return result;
}


// CBaseCombatCharacter::GetActiveWeapon  (line 203, @0x0000000002151fa0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
// callers: CBaseEntity::ComputeTracerStartPosition, CBaseEntity::DrawAutoAimOverlay, CBaseEntity::FireBullets, CC_Player_BugBaitSwap, CPointCommentaryNode::UpdateViewThink, CPointCommentaryNode::CleanupPostCommentary, CGameUI::Deactivate, CGameUI::InputActivate, CGameRules::RadiusDamage, CMultiplayRules::FShouldSwitchWeapon, CMultiplayRules::DeathNotice, CBasePlayer::DoImpactEffect (34 total)
CBaseCombatWeapon *__fastcall CBaseCombatCharacter::GetActiveWeapon(const CBaseCombatCharacter *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseCombatWeapon *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

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
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CBaseCombatCharacter::RemoveAmmo  (line 213, @0x0000000002142a90, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: GetAmmoDef, CAmmoDef::CanCarryInfiniteAmmo, memcmp
void __fastcall CBaseCombatCharacter::RemoveAmmo(CBaseCombatCharacter *const this, int iCount, int iAmmoIndex)
{
  CAmmoDef *AmmoDef; // rax
  int v7; // r14d
  char *v8; // r15
  int s2[13]; // [rsp+Ch] [rbp-34h] BYREF

  if ( iCount > 0 && iAmmoIndex >= 0 )
  {
    AmmoDef = GetAmmoDef();
    if ( !CAmmoDef::CanCarryInfiniteAmmo(AmmoDef, iAmmoIndex) )
    {
      v7 = 0;
      v8 = this + 4 * iAmmoIndex;
      if ( *(v8 + 373) != iCount )
        v7 = *(v8 + 373) - iCount;
      s2[0] = v7;
      if ( memcmp(v8 + 1492, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1492, iAmmoIndex, 0xFFFFFFFFLL);
        *(v8 + 373) = v7;
      }
    }
  }
}


// CBaseCombatCharacter::RemoveAmmo  (line 229, @0x0000000002152050, libserver.so)
// calls: GetAmmoDef, CAmmoDef::Index
void __fastcall CBaseCombatCharacter::RemoveAmmo(CBaseCombatCharacter *const this, int iCount, const char *szName)
{
  void (__fastcall *v6)(CBaseCombatCharacter *const, _QWORD, _QWORD); // r14
  CAmmoDef *AmmoDef; // rax
  unsigned int v8; // eax

  v6 = *(this->_vptr_IHandleEntity + 299);
  AmmoDef = GetAmmoDef();
  v8 = CAmmoDef::Index(AmmoDef, szName);
  v6(this, iCount, v8);
}


// CBaseCombatCharacter::RemoveAllAmmo  (line 237, @0x00000000021520a0, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
// callers: CBaseCombatCharacter::CBaseCombatCharacter, CBasePlayer::RemoveAllItems
void __fastcall CBaseCombatCharacter::RemoveAllAmmo(CBaseCombatCharacter *const this)
{
  CNetworkArrayBase<unsigned int,32,CBaseCombatCharacter::NetworkVar_m_iAmmo> *p_m_iAmmo; // r15
  CNetworkArrayBase<unsigned int,32,CBaseCombatCharacter::NetworkVar_m_iAmmo> *v3; // r12
  unsigned int i; // ebx
  _DWORD s2[13]; // [rsp+Ch] [rbp-34h] BYREF

  p_m_iAmmo = &this->m_iAmmo;
  v3 = &this->m_iAmmo;
  for ( i = 0; i != 32; ++i )
  {
    s2[0] = 0;
    if ( memcmp(v3, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1492, i, 0xFFFFFFFFLL);
      *(&p_m_iAmmo[-11] + v3 - this - 84) = 0;
    }
    v3 = (v3 + 4);
  }
}


// CBaseCombatCharacter::SetAmmoCount  (line 248, @0x0000000002152130, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
void __fastcall CBaseCombatCharacter::SetAmmoCount(CBaseCombatCharacter *const this, int iCount, int iAmmoIndex)
{
  __int64 v5; // r12
  int s2[9]; // [rsp+Ch] [rbp-24h] BYREF

  v5 = iAmmoIndex;
  s2[0] = iCount;
  if ( memcmp(&this->m_iAmmo.m_Value[iAmmoIndex], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1492, iAmmoIndex, 0xFFFFFFFFLL);
    this->m_iAmmo.m_Value[v5] = iCount;
  }
}


// CBaseCombatCharacter::GetAmmoCount  (line 261, @0x0000000002140e40, libserver.so)
// calls: GetAmmoDef, CAmmoDef::CanCarryInfiniteAmmo
// callers: CBaseCombatWeapon::BaseForceFire, CBaseCombatCharacter::GetAmmoCount, CBaseCombatWeapon::HasPrimaryAmmo, CBaseCombatWeapon::HasAmmo, CBaseCombatWeapon::HasSecondaryAmmo, CBaseCombatWeapon::ShouldDisplayReloadHUDHint, CBaseCombatWeapon::PrimaryAttack, CBaseCombatWeapon::CheckReload, CBaseCombatWeapon::FinishReload, CBaseCombatWeapon::ItemPostFrame, CBaseCombatWeapon::DefaultReload, CBaseCombatCharacter::Weapon_CanSwitchTo
int __fastcall CBaseCombatCharacter::GetAmmoCount(const CBaseCombatCharacter *const this, int iAmmoIndex)
{
  __int64 v3; // rbx
  CAmmoDef *AmmoDef; // rax

  v3 = iAmmoIndex;
  AmmoDef = GetAmmoDef();
  if ( CAmmoDef::CanCarryInfiniteAmmo(AmmoDef, v3) )
    return 999;
  else
    return this->m_iAmmo.m_Value[v3];
}


// CBaseCombatCharacter::GetAmmoCount  (line 261, @0x00000000021521a0, libserver.so)
// calls: CBaseCombatCharacter::GetAmmoCount
// callers: CGameRules::CanHaveAmmo, CBasePlayer::PackDeadPlayerItems, CBasePlayer::HasAnyAmmoOfType, CSingleplayRules::FShouldSwitchWeapon, CSingleplayRules::GetNextBestWeapon
int __fastcall CBaseCombatCharacter::GetAmmoCount(const CBaseCombatCharacter *const this, int iAmmoIndex)
{
  if ( iAmmoIndex == -1 )
    return 0;
  else
    return CBaseCombatCharacter::GetAmmoCount(this, iAmmoIndex);
}


// CBaseCombatCharacter::GetAmmoCount  (line 276, @0x00000000021521c0, libserver.so)  // inlines: GetAmmoCount
// calls: GetAmmoDef, CAmmoDef::Index, CBaseCombatCharacter::GetAmmoCount
int __fastcall CBaseCombatCharacter::GetAmmoCount(const CBaseCombatCharacter *const this, char *szName)
{
  CAmmoDef *AmmoDef; // rax
  int v5; // eax

  AmmoDef = GetAmmoDef();
  v5 = CAmmoDef::Index(AmmoDef, szName);
  if ( v5 == -1 )
    return 0;
  else
    return CBaseCombatCharacter::GetAmmoCount(this, v5);
}


// CBaseCombatCharacter::Weapon_OwnsThisType  (line 284, @0x000000000214a960, libserver.so)  // inlines: ClassMatches, FClassnameIs, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseCombatWeapon*, operator CEntityInstance*, operator->, operator[]
// calls: CEntityIdentity::ClassMatches, CEntityHandle::operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseCombatWeapon *__fastcall CBaseCombatCharacter::Weapon_OwnsThisType(
        const CBaseCombatCharacter *const this,
        const char *pszWeapon,
        int iSubType)
{
  int v6; // r12d
  __int64 v7; // rbx
  CHandle<CBaseCombatWeapon> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v14; // rsi
  CHandle<CBaseCombatWeapon> *v15; // rax
  uint32 v16; // ecx
  __int16 v17; // dx
  CEntityIdentity *v18; // rax
  __int64 v19; // rdx
  CEntityIdentity *v20; // rax

  v6 = 0;
  v7 = 0;
  if ( this->m_hMyWeapons.m_Vector.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v8 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v7];
    m_Index = v8->m_Index;
    if ( v8->m_Index + 2 > 1 )
    {
      v10 = v8->m_Index;
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[v10 & 0x1FF];
        if ( v12 != 0
          && m_Index == v12->m_EHandle.m_Index
          && v12->m_pInstance != 0
          && CEntityIdentity::ClassMatches(v12->m_pInstance->m_pEntity, pszWeapon) )
        {
          m_pInstance = 0;
          v14 = CEntityHandle::gm_pEntityList;
          v15 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v7];
          v16 = v15->m_Index;
          if ( v15->m_Index + 2 > 1 )
          {
            v17 = v15->m_Index;
            v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
            if ( v18 != 0 )
            {
              v19 = v17 & 0x1FF;
              v14 = (8 * v19);
              v20 = &v18[v19];
              if ( v20 != 0 && v16 == v20->m_EHandle.m_Index )
                m_pInstance = v20->m_pInstance;
            }
          }
          if ( (*(m_pInstance->_vptr_IHandleEntity + 252))(m_pInstance, v14) == iSubType )
            break;
        }
      }
    }
    ++v6;
    ++v7;
    if ( v6 >= this->m_hMyWeapons.m_Vector.m_Size )
      return 0;
  }
  return CEntityHandle::operator CEntityInstance *(&this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v7]);
}


// CBaseCombatCharacter::Weapon_GetSlot  (line 302, @0x0000000002147590, libserver.so)  // inlines: ClassMatches, FClassnameIs, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->, operator[]
// calls: CEntityIdentity::ClassMatches
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseCombatCharacter::Weapon_GetSlot(
        const CBaseCombatCharacter *const this,
        const char *pszWeapon,
        int iSubType)
{
  int v6; // r12d
  __int64 v7; // rbx
  CHandle<CBaseCombatWeapon> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v14; // rsi
  CHandle<CBaseCombatWeapon> *v15; // rax
  uint32 v16; // ecx
  __int16 v17; // dx
  CEntityIdentity *v18; // rax
  __int64 v19; // rdx
  CEntityIdentity *v20; // rax

  v6 = 0;
  v7 = 0;
  if ( this->m_hMyWeapons.m_Vector.m_Size <= 0 )
    return -1;
  while ( 1 )
  {
    v8 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v7];
    m_Index = v8->m_Index;
    if ( v8->m_Index + 2 > 1 )
    {
      v10 = v8->m_Index;
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[v10 & 0x1FF];
        if ( v12 != 0
          && m_Index == v12->m_EHandle.m_Index
          && v12->m_pInstance != 0
          && CEntityIdentity::ClassMatches(v12->m_pInstance->m_pEntity, pszWeapon) )
        {
          m_pInstance = 0;
          v14 = CEntityHandle::gm_pEntityList;
          v15 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v7];
          v16 = v15->m_Index;
          if ( v15->m_Index + 2 > 1 )
          {
            v17 = v15->m_Index;
            v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
            if ( v18 != 0 )
            {
              v19 = v17 & 0x1FF;
              v14 = (8 * v19);
              v20 = &v18[v19];
              if ( v20 != 0 && v16 == v20->m_EHandle.m_Index )
                m_pInstance = v20->m_pInstance;
            }
          }
          if ( (*(m_pInstance->_vptr_IHandleEntity + 252))(m_pInstance, v14) == iSubType )
            break;
        }
      }
    }
    ++v6;
    ++v7;
    if ( v6 >= this->m_hMyWeapons.m_Vector.m_Size )
      return -1;
  }
  return v6;
}


// CBaseCombatCharacter::BloodColor  (line 320, @0x000000000213d190, libserver.so)
int __fastcall CBaseCombatCharacter::BloodColor(CBaseCombatCharacter *const this)
{
  return this->m_bloodColor;
}


// CBaseCombatCharacter::SetBloodColor  (line 329, @0x0000000002152200, libserver.so)
// callers: CBasePlayer::Restore, CPhysicsCannister::Spawn, CDOTA_BaseNPC::Spawn
void __fastcall CBaseCombatCharacter::SetBloodColor(CBaseCombatCharacter *const this, int nBloodColor)
{
  this->m_bloodColor = nBloodColor;
}


// CBaseCombatCharacter::EquipWearable  (line 339, @0x0000000002176d40, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CEconWearable> >, DirtyWearablesForNetworking, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, NetworkStateChanged, Set, operator[]
// calls: CEntityInstance::IsAuthoritative, CBaseEntity::SetLocalScale, CUtlMemory<CHandle<CEconWearable>, int>::Grow
// callers: CDOTA_BaseNPC::EquipWearable, CEconWearable::GiveTo
void __fastcall CBaseCombatCharacter::EquipWearable(CBaseCombatCharacter *const this, CEconWearable *pItem)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  unsigned int m_Size; // r13d
  int v7; // eax
  CHandle<CEconWearable> *v8; // rax
  float v9; // xmm1_4
  int v10; // [rsp+0h] [rbp-30h]

  if ( pItem != 0 && CEntityInstance::IsAuthoritative(this) && CEntityInstance::IsAuthoritative(pItem) )
  {
    m_pEntity = pItem->m_pEntity;
    v10 = -1;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v10 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
    m_Size = this->m_hMyWearables.m_Vector.m_Size;
    v7 = m_Size;
    if ( m_Size == this->m_hMyWearables.m_Vector.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CEconWearable>,int>::Grow(&this->m_hMyWearables.m_Vector.m_Memory, 1);
      v7 = this->m_hMyWearables.m_Vector.m_Size;
    }
    this->m_hMyWearables.m_Vector.m_Size = v7 + 1;
    v8 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
      v8->m_Index = v10;
    (*(this->_vptr_IHandleEntity + 22))(this, 1864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    (*(this->_vptr_IHandleEntity + 22))(this, 1864, m_Size, 0xFFFFFFFFLL);
    (*(this->_vptr_IHandleEntity + 21))(this);
    (*(pItem->_vptr_IHandleEntity + 274))(pItem, this);
    CBaseEntity::SetLocalScale(pItem, COERCE_DOUBLE(1065353216), v9);
  }
}


// CBaseCombatCharacter::DirtyWearablesForNetworking  (line 366, @0x0000000002152210, libserver.so)
void __fastcall CBaseCombatCharacter::DirtyWearablesForNetworking(CBaseCombatCharacter *const this)
{
  (*(this->_vptr_IHandleEntity + 21))(this);
}


// CBaseCombatCharacter::RemoveWearable  (line 377, @0x0000000002152230, libserver.so)  // inlines: DirtyWearablesForNetworking, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Remove, ShiftElementsLeft, V_memmove, memmove, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CEntityInstance::IsAuthoritative, UTIL_Remove, memmove
// callers: CDOTA_BaseNPC_Hero::ValidateEconItems, CDOTA_Unit_Courier::AddCourierWearables, CEconWearable::RemoveFrom
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::RemoveWearable(CBaseCombatCharacter *const this, CEconWearable *pItem)
{
  int v4; // ebx
  CHandle<CEconWearable> *m_pMemory; // rsi
  char *i; // rax
  CEconWearable *m_pInstance; // r8
  signed __int64 v8; // r14
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  int m_Size; // eax
  __int64 v12; // rdx

  if ( CEntityInstance::IsAuthoritative(this) && CEntityInstance::IsAuthoritative(pItem) )
  {
    v4 = this->m_hMyWearables.m_Vector.m_Size - 1;
    if ( v4 >= 0 )
    {
      m_pMemory = this->m_hMyWearables.m_Vector.m_Memory.m_pMemory;
      for ( i = &m_pMemory[v4]; ; i -= 4 )
      {
        m_pInstance = 0;
        v8 = i - m_pMemory;
        if ( (*i + 2) > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*i >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[*i & 0x1FF];
            if ( v10 != 0 && *i == v10->m_EHandle.m_Index )
              m_pInstance = v10->m_pInstance;
          }
        }
        if ( pItem == m_pInstance )
          break;
        if ( --v4 == -1 )
          return;
      }
      (*(pItem->_vptr_IHandleEntity + 275))(pItem, this);
      UTIL_Remove(pItem);
      m_Size = this->m_hMyWearables.m_Vector.m_Size;
      if ( m_Size - v4 - 1 > 0 )
      {
        memmove(
          this->m_hMyWearables.m_Vector.m_Memory.m_pMemory + v8,
          &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v4 + 1],
          4LL * (this->m_hMyWearables.m_Vector.m_Size - v4 - 1));
        m_Size = this->m_hMyWearables.m_Vector.m_Size;
      }
      this->m_hMyWearables.m_Vector.m_Size = m_Size - 1;
      (*(this->_vptr_IHandleEntity + 22))(this, 1864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      while ( v4 < this->m_hMyWearables.m_Vector.m_Size )
      {
        v12 = v4++;
        (*(this->_vptr_IHandleEntity + 22))(this, 1864, v12, 0xFFFFFFFFLL);
      }
      (*(this->_vptr_IHandleEntity + 21))(this);
    }
  }
}


// CBaseCombatCharacter::RemoveAllWearables  (line 410, @0x00000000021523c0, libserver.so)  // inlines: DirtyWearablesForNetworking, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Purge, RemoveAll, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CEntityInstance::IsAuthoritative, CUtlMemory<CHandle<CEconWearable>, int>::Purge, UTIL_Remove
// callers: CBaseCombatCharacter::UpdateOnRemove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::RemoveAllWearables(CBaseCombatCharacter *const this)
{
  int m_Size; // r12d
  __int64 v3; // r13
  int i; // r14d
  CHandle<CEconWearable> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  bool v10; // zf
  CEntityInstance *m_pInstance; // r15

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    m_Size = this->m_hMyWearables.m_Vector.m_Size;
    if ( m_Size > 0 )
    {
      v3 = 0;
      for ( i = 0; i < m_Size; ++i )
      {
        v5 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v3];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 )
              {
                (*(m_pInstance->_vptr_IHandleEntity + 275))(v9->m_pInstance, this);
                UTIL_Remove(m_pInstance);
                m_Size = this->m_hMyWearables.m_Vector.m_Size;
              }
            }
          }
        }
        ++v3;
      }
    }
    v10 = (this->m_hMyWearables.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_hMyWearables.m_Vector.m_Size = 0;
    if ( v10 )
      CUtlMemory<CHandle<CEconWearable>,int>::Purge(&this->m_hMyWearables.m_Vector.m_Memory);
    if ( m_Size > 0 )
      (*(this->_vptr_IHandleEntity + 22))(this, 1864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    (*(this->_vptr_IHandleEntity + 21))(this);
  }
}


// CCombatCharVisCache::~CCombatCharVisCache  (line 456, @0x000000000217e8e0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t, short unsigned int, CCombatCharVisCache::CVisCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem
void __fastcall CCombatCharVisCache::~CCombatCharVisCache(CCombatCharVisCache *const this)
{
  CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,short unsigned int,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int>,short unsigned int> > *p_m_VisCache; // rdi

  p_m_VisCache = &this->m_VisCache;
  *&p_m_VisCache[-1].m_Elements.m_nAllocationCount = off_4003C50;
  CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,unsigned short,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,unsigned short>,unsigned short>>::Purge(p_m_VisCache);
  if ( (this->m_VisCache.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,unsigned short>,unsigned short>::Purge(&this->m_VisCache.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CCombatCharVisCache::~CCombatCharVisCache  (line 456, @0x000000000217e930, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CCombatCharVisCache, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t, short unsigned int, CCombatCharVisCache::CVisCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem, operator delete
void __fastcall CCombatCharVisCache::~CCombatCharVisCache(CCombatCharVisCache *const this)
{
  CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,short unsigned int,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int>,short unsigned int> > *p_m_VisCache; // rdi

  p_m_VisCache = &this->m_VisCache;
  *&p_m_VisCache[-1].m_Elements.m_nAllocationCount = off_4003C50;
  CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,unsigned short,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,unsigned short>,unsigned short>>::Purge(p_m_VisCache);
  if ( (this->m_VisCache.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,unsigned short>,unsigned short>::Purge(&this->m_VisCache.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CCombatCharVisCache::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 458, @0x000000000217a6f0, libserver.so)
void __fastcall CCombatCharVisCache::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CCombatCharVisCache *const this)
{
  ;
}


// CCombatCharVisCache::DoesGameSystemReallocate  (line 458, @0x000000000217a700, libserver.so)
// globals: CCombatCharVisCache::sm_Factory
bool __fastcall CCombatCharVisCache::DoesGameSystemReallocate(const CCombatCharVisCache *const this)
{
  return (*(CCombatCharVisCache::sm_Factory->_vptr_IGameSystemFactory + 8))(CCombatCharVisCache::sm_Factory);
}


// CCombatCharVisCache::SetGameSystemGlobalPtrs  (line 458, @0x000000000217a720, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CCombatCharVisCache::sm_Factory
void __fastcall CCombatCharVisCache::SetGameSystemGlobalPtrs(CCombatCharVisCache *const this, void *pValue)
{
  if ( CCombatCharVisCache::sm_Factory != 0 )
    (*(CCombatCharVisCache::sm_Factory->_vptr_IGameSystemFactory + 7))(CCombatCharVisCache::sm_Factory, pValue);
}


// CCombatCharVisCache::FrameUpdatePreEntityThink  (line 494, @0x0000000002176ea0, libserver.so)  // inlines: Element, FreeNode, IsIdxValid, IsValidIndex, LeftChild, RemoveAt, SetLeftChild, SetRightChild, curtime, operator[]
// calls: RandomInt, CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t, short unsigned int, CCombatCharVisCache::CVisCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int> >::Unlink
void __fastcall CCombatCharVisCache::FrameUpdatePreEntityThink(
        CCombatCharVisCache *const this,
        const EventServerPreEntityThink_t *const msg)
{
  int v3; // r13d
  int v4; // ebx
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *m_pMemory; // rax
  __int64 v6; // r15
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *v7; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // r8
  CGlobalVars *v11; // [rsp+0h] [rbp-50h]
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *v12; // [rsp+8h] [rbp-48h]
  CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,short unsigned int,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int>,short unsigned int> > *p_m_VisCache; // [rsp+10h] [rbp-40h]
  unsigned int nMaxIndex; // [rsp+1Ch] [rbp-34h]

  if ( this->m_VisCache.m_NumElements > 0xFFu )
  {
    v3 = 8;
    nMaxIndex = LOWORD(this->m_VisCache.m_Elements.m_nAllocationCount) - 1;
    p_m_VisCache = &this->m_VisCache;
    do
    {
      v4 = RandomInt(0, nMaxIndex);
      if ( v4 < this->m_VisCache.m_Elements.m_nAllocationCount
        && v4 <= this->m_VisCache.m_LastAlloc.index
        && v4 != 0xFFFF )
      {
        m_pMemory = this->m_VisCache.m_Elements.m_pMemory;
        if ( m_pMemory[v4].m_Left != v4 )
        {
          v6 = v4;
          v7 = &m_pMemory[v6];
          if ( v7->m_Data.m_hEntity1.m_Index == -1 || v7->m_Data.m_hEntity2.m_Index == -1 )
            goto LABEL_16;
          m_flCurrentTime = 0.0;
          v9 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v11 = gpGlobals;
                v12 = v7;
                (m_pfnWarningFunc)(1, 0.0);
                v9 = v11;
                v7 = v12;
              }
            }
            m_flCurrentTime = v9->m_flCurrentTime;
          }
          if ( (m_flCurrentTime - v7->m_Data.m_flTime) > 10.0 )
          {
LABEL_16:
            CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,unsigned short,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,unsigned short>,unsigned short>>::Unlink(
              p_m_VisCache,
              v4);
            this->m_VisCache.m_Elements.m_pMemory[v4].m_Left = v4;
            this->m_VisCache.m_Elements.m_pMemory[v6].m_Right = this->m_VisCache.m_FirstFree;
            --this->m_VisCache.m_NumElements;
            this->m_VisCache.m_FirstFree = v4;
          }
        }
      }
      --v3;
    }
    while ( v3 != 0 );
  }
}


// CCombatCharVisCache::GameDeactivate  (line 519, @0x00000000021699e0, libserver.so)
// calls: CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t, short unsigned int, CCombatCharVisCache::CVisCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int> >::Purge
void __fastcall CCombatCharVisCache::GameDeactivate(
        CCombatCharVisCache *const this,
        const EventGameDeactivate_t *const msg)
{
  CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,unsigned short,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,unsigned short>,unsigned short>>::Purge(&this->m_VisCache);
}


// CCombatCharVisCache::LookupVisibility  (line 524, @0x0000000002176ff0, libserver.so)  // inlines: CEntityHandle, CHandle, Element, Find, FindInsertionPosition, GetEHandle, GetEntryIndex, GetSerialNumber, Insert, InsertAt, LeftChild, RightChild, Set, VisCacheEntry_t, curtime, operator(), operator=, operator[]
// calls: memcmp, CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t, short unsigned int, CCombatCharVisCache::CVisCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t, short unsigned int, CCombatCharVisCache::CVisCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CBaseCombatCharacter::IsAbleToSee
int __fastcall CCombatCharVisCache::LookupVisibility(
        CCombatCharVisCache *const this,
        const CBaseCombatCharacter *pChar1,
        CBaseCombatCharacter *pChar2)
{
  CEntityIdentity *v3; // rdx
  __int16 v4; // cx
  const CBaseCombatCharacter *v5; // rax
  CEntityIdentity *v6; // rdx
  __int16 v7; // cx
  unsigned __int16 m_Root; // ax
  int m_Left; // ebx
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *m_pMemory; // r14
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *v11; // r12
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *v12; // rbx
  int v13; // eax
  unsigned __int16 m_Right; // dx
  unsigned int v15; // eax
  bool v16; // r12
  unsigned __int16 v17; // r15
  CEntityIdentity *m_pEntity; // rdx
  __int16 v19; // cx
  int result; // eax
  unsigned __int16 v21; // ax
  __int64 v22; // r13
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *v23; // r13
  CGlobalVars *v24; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v26; // xmm0_4
  unsigned __int16 v30; // [rsp+1Eh] [rbp-42h]
  CCombatCharVisCache::VisCacheEntry_t cacheEntry; // [rsp+20h] [rbp-40h] BYREF

  cacheEntry.m_hEntity1.m_Index = -1;
  cacheEntry.m_hEntity2.m_Index = -1;
  if ( pChar1 >= pChar2 )
  {
    if ( pChar2 != 0 )
    {
      m_pEntity = pChar2->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v19 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        cacheEntry.m_hEntity1.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                      | v19 & 0x7FFF;
      }
    }
    v5 = pChar1;
    if ( pChar1 != 0 )
      goto LABEL_8;
  }
  else
  {
    if ( pChar1 != 0 )
    {
      v3 = pChar1->m_pEntity;
      if ( v3 != 0 )
      {
        v4 = 0x7FFF;
        if ( v3->m_EHandle.m_Index != -1 )
          v4 = v3->m_EHandle.m_Index & 0x7FFF;
        cacheEntry.m_hEntity1.m_Index = (((v3->m_EHandle.m_Index >> 15) - (v3->m_flags & 1)) << 15) | v4 & 0x7FFF;
      }
    }
    v5 = pChar2;
    if ( pChar2 != 0 )
    {
LABEL_8:
      v6 = v5->m_pEntity;
      if ( v6 != 0 )
      {
        v7 = 0x7FFF;
        if ( v6->m_EHandle.m_Index != -1 )
          v7 = v6->m_EHandle.m_Index & 0x7FFF;
        cacheEntry.m_hEntity2.m_Index = (((v6->m_EHandle.m_Index >> 15) - (v6->m_flags & 1)) << 15) | v7 & 0x7FFF;
      }
    }
  }
  m_Root = this->m_VisCache.m_Root;
  m_Left = m_Root;
  v30 = m_Root;
  if ( m_Root == 0xFFFF )
  {
    if ( this->m_VisCache.m_NumElements == 0xFFFF )
      return 0x80000000;
    v17 = -1;
    v16 = 0;
  }
  else
  {
    m_pMemory = this->m_VisCache.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = &m_pMemory[m_Left];
        if ( memcmp(&cacheEntry, &v11->m_Data, 8u) >= 0 )
          break;
        m_Left = v11->m_Left;
        if ( m_Left == 0xFFFF )
          goto LABEL_18;
      }
      if ( memcmp(&v11->m_Data, &cacheEntry, 8u) >= 0 )
        break;
      m_Left = v11->m_Right;
      if ( m_Left == 0xFFFF )
        goto LABEL_18;
    }
    if ( m_Left != 0xFFFF )
      goto LABEL_33;
LABEL_18:
    if ( this->m_VisCache.m_NumElements == 0xFFFF )
      return 0x80000000;
    while ( 1 )
    {
      v12 = &m_pMemory[v30];
      v13 = memcmp(&cacheEntry, &v12->m_Data, 8u);
      m_Right = v12->m_Right;
      if ( v13 < 0 )
        m_Right = v12->m_Left;
      v15 = v13 >> 31;
      if ( m_Right == 0xFFFF )
        break;
      v30 = m_Right;
    }
    v16 = v15;
    v17 = v30;
  }
  v21 = CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,unsigned short,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_VisCache,
          &cacheEntry);
  v22 = v21;
  m_Left = v21;
  CUtlRBTree<CCombatCharVisCache::VisCacheEntry_t,unsigned short,CCombatCharVisCache::CVisCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_VisCache,
    v21,
    v17,
    v16);
  ++this->m_VisCache.m_NumElements;
  v23 = &this->m_VisCache.m_Elements.m_pMemory[v22];
  v24 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v26 = v24->m_flCurrentTime - 0.18000001;
  }
  else
  {
    v26 = -0.18000001;
  }
  v23->m_Data.m_flTime = v26;
LABEL_33:
  result = ~m_Left;
  if ( pChar1 < pChar2 )
    return m_Left;
  return result;
}


// CCombatCharVisCache::HasVisibility  (line 551, @0x00000000021526e0, libserver.so)  // inlines: Element, curtime, operator[]
// callers: CBaseCombatCharacter::IsAbleToSee
VisCacheResult_t __fastcall CCombatCharVisCache::HasVisibility(const CCombatCharVisCache *const this, int iCache)
{
  float m_flCurrentTime; // xmm0_4
  unsigned int v3; // r14d
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *v5; // r13
  CGlobalVars *v6; // r12
  VisCacheResult_t result; // eax
  bool m_bEntity2CanSeeEntity1; // al
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( iCache == 0x80000000 )
    return VisCacheResult_t::VISCACHE_UNKNOWN;
  m_flCurrentTime = 0.0;
  v3 = iCache >> 31;
  ++this->m_nTestCount;
  if ( iCache < 0 )
    LOWORD(iCache) = ~iCache;
  v5 = &this->m_VisCache.m_Elements.m_pMemory[iCache];
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  result = VisCacheResult_t::VISCACHE_UNKNOWN;
  if ( (m_flCurrentTime - v5->m_Data.m_flTime) <= 0.090000004 )
  {
    ++this->m_nHitCount;
    m_bEntity2CanSeeEntity1 = v5->m_Data.m_bEntity2CanSeeEntity1;
    if ( v3 == 0 )
      m_bEntity2CanSeeEntity1 = v5->m_Data.m_bEntity1CanSeeEntity2;
    return 2 - m_bEntity2CanSeeEntity1;
  }
  return result;
}


// CCombatCharVisCache::RegisterVisibility  (line 574, @0x00000000021527b0, libserver.so)  // inlines: Element, curtime, operator[]
// callers: CBaseCombatCharacter::IsAbleToSee
void __fastcall CCombatCharVisCache::RegisterVisibility(
        CCombatCharVisCache *const this,
        int iCache,
        bool bEntity1CanSeeEntity2,
        bool bEntity2CanSeeEntity1)
{
  float m_flCurrentTime; // xmm0_4
  unsigned int v5; // r13d
  UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t,short unsigned int> *v6; // r12
  CGlobalVars *v7; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool v9; // [rsp-30h] [rbp-30h]
  bool v10; // [rsp-2Ch] [rbp-2Ch]

  if ( iCache != 0x80000000 )
  {
    m_flCurrentTime = 0.0;
    v5 = iCache >> 31;
    if ( iCache < 0 )
      LOWORD(iCache) = ~iCache;
    v6 = &this->m_VisCache.m_Elements.m_pMemory[iCache];
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v9 = bEntity2CanSeeEntity1;
          v10 = bEntity1CanSeeEntity2;
          (m_pfnWarningFunc)(1, 0.0);
          bEntity2CanSeeEntity1 = v9;
          bEntity1CanSeeEntity2 = v10;
        }
      }
      m_flCurrentTime = v7->m_flCurrentTime;
    }
    v6->m_Data.m_flTime = m_flCurrentTime;
    if ( v5 != 0 )
    {
      v6->m_Data.m_bEntity1CanSeeEntity2 = bEntity2CanSeeEntity1;
      v6->m_Data.m_bEntity2CanSeeEntity1 = bEntity1CanSeeEntity2;
    }
    else
    {
      v6->m_Data.m_bEntity1CanSeeEntity2 = bEntity1CanSeeEntity2;
      v6->m_Data.m_bEntity2CanSeeEntity1 = bEntity2CanSeeEntity1;
    }
  }
}


// CCombatCharVisCache::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 602, @0x0000000002152860, libserver.so)
void __cdecl CCombatCharVisCache::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CBaseCombatCharacter::IsAbleToSee  (line 604, @0x0000000002177420, libserver.so)
// calls: CBaseCombatCharacter::IsAbleToSee, CBaseCombatCharacter::ComputeLOS
bool __fastcall CBaseCombatCharacter::IsAbleToSee(
        CBaseCombatCharacter *const this,
        const CBaseEntity *pEntity,
        CBaseCombatCharacter::FieldOfViewCheckType checkFOV)
{
  CBaseCombatCharacter *v6; // rax
  bool result; // al
  vec_t v8; // xmm1_4
  Vector vTargetPosition; // [rsp+10h] [rbp-30h] BYREF

  v6 = (*(pEntity->_vptr_IHandleEntity + 147))(pEntity);
  if ( v6 != 0 )
    return CBaseCombatCharacter::IsAbleToSee(this, v6, checkFOV);
  (*(this->_vptr_IHandleEntity + 164))(this);
  *&vTargetPosition.x = (*(pEntity->_vptr_IHandleEntity + 62))(pEntity);
  vTargetPosition.z = v8;
  result = CBaseCombatCharacter::ComputeLOS(
             this,
             this,
             EEntityOffsetMode_t::EOFFSET_MODE_EYEPOSITION,
             pEntity,
             EEntityOffsetMode_t::EOFFSET_MODE_WORLDSPACE_CENTER);
  if ( result && checkFOV == CBaseCombatCharacter::FieldOfViewCheckType::USE_FOV )
    return (*(this->_vptr_IHandleEntity + 289))(this, &vTargetPosition);
  return result;
}


// CBaseCombatCharacter::IsAbleToSee  (line 671, @0x0000000002177310, libserver.so)  // inlines: ComputeSeeTestPosition
// calls: CCombatCharVisCache::LookupVisibility, CCombatCharVisCache::HasVisibility, CBaseCombatCharacter::ComputeLOS, CCombatCharVisCache::RegisterVisibility
// callers: CBaseCombatCharacter::IsAbleToSee, TargetScan::IsTargetVisible, NextBotManager::GetBotUnderCrosshair
// globals: s_CombatCharVisCache
bool __fastcall CBaseCombatCharacter::IsAbleToSee(
        CBaseCombatCharacter *const this,
        CBaseCombatCharacter *pBCC,
        CBaseCombatCharacter::FieldOfViewCheckType checkFOV)
{
  int v6; // r14d
  VisCacheResult_t v7; // ecx
  bool result; // al

  (*(this->_vptr_IHandleEntity + 164))(this);
  (*(pBCC->_vptr_IHandleEntity + 164))(pBCC);
  v6 = CCombatCharVisCache::LookupVisibility(&s_CombatCharVisCache, this, pBCC);
  v7 = CCombatCharVisCache::HasVisibility(&s_CombatCharVisCache, v6);
  if ( v7 != VisCacheResult_t::VISCACHE_UNKNOWN )
  {
    result = 0;
    if ( v7 != VisCacheResult_t::VISCACHE_IS_VISIBLE )
      return result;
  }
  else
  {
    if ( !CBaseCombatCharacter::ComputeLOS(
            this,
            this,
            EEntityOffsetMode_t::EOFFSET_MODE_EYE_OR_DEATH_POSITION,
            pBCC,
            EEntityOffsetMode_t::EOFFSET_MODE_EYE_OR_DEATH_POSITION) )
    {
      CCombatCharVisCache::RegisterVisibility(&s_CombatCharVisCache, v6, 0, 0);
      return 0;
    }
    CCombatCharVisCache::RegisterVisibility(&s_CombatCharVisCache, v6, 1, 1);
  }
  result = 1;
  if ( checkFOV == CBaseCombatCharacter::FieldOfViewCheckType::USE_FOV )
    return (*(this->_vptr_IHandleEntity + 288))(this, pBCC);
  return result;
}


// CTraceFilterNoCombatCharacters::~CTraceFilterNoCombatCharacters  (line 742, @0x000000000217a860, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterNoCombatCharacters::~CTraceFilterNoCombatCharacters(
        CTraceFilterNoCombatCharacters *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterNoCombatCharacters::~CTraceFilterNoCombatCharacters  (line 742, @0x000000000217b090, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterNoCombatCharacters, ~CTraceFilterSimple
// calls: operator delete
void __fastcall CTraceFilterNoCombatCharacters::~CTraceFilterNoCombatCharacters(
        CTraceFilterNoCombatCharacters *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterNoCombatCharacters::ShouldHitEntity  (line 755, @0x000000000217b9c0, libserver.so)
// calls: CTraceFilterSimple::ShouldHitEntity, CBaseEntity::BlocksLOS
bool __fastcall CTraceFilterNoCombatCharacters::ShouldHitEntity(
        CTraceFilterNoCombatCharacters *const this,
        CBaseEntity *pEntity)
{
  return CTraceFilterSimple::ShouldHitEntity(this, pEntity)
      && (*(pEntity->_vptr_IHandleEntity + 147))(pEntity) == 0
      && (*(pEntity->_vptr_IHandleEntity + 150))(pEntity) == 0
      && CBaseEntity::BlocksLOS(pEntity);
}


// CTraceFilterNoCombatCharacters_ShouldHitEntity  (line 776, @0x0000000002140690, libserver.so)
// calls: CBaseEntity::BlocksLOS
bool __fastcall CTraceFilterNoCombatCharacters_ShouldHitEntity(CBaseEntity *pEntity, uint64 contentsMask)
{
  return (*(pEntity->_vptr_IHandleEntity + 147))(pEntity, contentsMask) == 0
      && (*(pEntity->_vptr_IHandleEntity + 150))(pEntity) == 0
      && CBaseEntity::BlocksLOS(pEntity);
}


// CBaseCombatCharacter::ComputeLOS  (line 790, @0x0000000002152870, libserver.so)  // inlines: CGameTrace, CTraceFilterNoCombatCharacters, EnableInteractsExclude, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
bool __fastcall CBaseCombatCharacter::ComputeLOS(
        const CBaseCombatCharacter *const this,
        const Vector *const vecEyePosition,
        const Vector *const vecTarget)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v7; // xmm3_4
  float z; // xmm4_4
  ConVar *m_pParent; // rax
  float v10; // xmm2_4
  float v11; // xmm1_4
  CTraceFilterNoCombatCharacters traceFilter; // [rsp+0h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-120h] BYREF
  trace_t v15; // [rsp+90h] [rbp-D0h] BYREF

  memset(&v15.m_ShapeAttributes, 0, 31);
  v15.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v15);
  CTraceFilterSimple::CTraceFilterSimple(&traceFilter, 0, 4, 0);
  traceFilter._vptr_CTraceFilter = off_4003E10;
  x = vecEyePosition->x;
  ray.m_Start.w = 0.0;
  y = vecEyePosition->y;
  memset(&ray.m_Delta.w, 0, 36);
  v7 = vecTarget->y;
  z = vecEyePosition->z;
  m_pParent = phys_traceline_radius.m_pParent;
  v10 = vecTarget->z;
  traceFilter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
  ray.m_Delta.y = v7 - y;
  ray.m_flRadius = m_pParent->m_Value.m_fValue;
  v11 = vecTarget->x;
  ray.m_Delta.z = v10 - z;
  ray.m_Start.x = x;
  ray.m_Delta.x = v11 - x;
  ray.m_Start.y = y;
  ray.m_Start.z = z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  traceFilter.m_attr.m_nInteractsWith |= 0x84001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &v15);
  return v15.fraction == 1.0;
}


// CBaseCombatCharacter::ComputeLOS  (line 801, @0x0000000002152a40, libserver.so)  // inlines: CGameTrace, CTraceFilterNoCombatCharacters, EnableInteractsExclude, EnableInteractsWith, GetBool, GetFloat, GetInt, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CalculateOffsettedPosition, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, IsLineOfSightBetweenTwoEntitiesClear
// callers: CBaseCombatCharacter::IsAbleToSee
// globals: CTraceFilterNoCombatCharacters_ShouldHitEntity(CBaseEntity *,ulong long)
bool __fastcall CBaseCombatCharacter::ComputeLOS(
        const CBaseCombatCharacter *const this,
        const CBaseEntity *pEntity,
        EEntityOffsetMode_t entityOffsetMode,
        const CBaseEntity *pTargetEntity,
        EEntityOffsetMode_t targetEntityOffsetMode)
{
  ConVar *m_pParent; // rax
  Vector vEntityPosition; // [rsp+20h] [rbp-170h] BYREF
  Vector vTargetEntityPosition; // [rsp+30h] [rbp-160h] BYREF
  CTraceFilterNoCombatCharacters traceFilter; // [rsp+40h] [rbp-150h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-110h] BYREF
  trace_t v13; // [rsp+D0h] [rbp-C0h] BYREF

  if ( target_scan_use_query_cache.m_pParent->m_Value.m_nValue != 0 )
    return IsLineOfSightBetweenTwoEntitiesClear(
             pEntity,
             entityOffsetMode,
             pTargetEntity,
             targetEntityOffsetMode,
             0,
             4,
             0x84001u,
             CTraceFilterNoCombatCharacters_ShouldHitEntity,
             1.0,
             0);
  CalculateOffsettedPosition(pEntity, entityOffsetMode, &vEntityPosition);
  CalculateOffsettedPosition(pTargetEntity, targetEntityOffsetMode, &vTargetEntityPosition);
  memset(&v13.m_ShapeAttributes, 0, 31);
  v13.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v13);
  CTraceFilterSimple::CTraceFilterSimple(&traceFilter, 0, 4, 0);
  traceFilter._vptr_CTraceFilter = off_4003E10;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  m_pParent = phys_traceline_radius.m_pParent;
  traceFilter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
  ray.m_flRadius = m_pParent->m_Value.m_fValue;
  ray.m_Delta.y = vTargetEntityPosition.y - vEntityPosition.y;
  ray.m_Delta.z = vTargetEntityPosition.z - vEntityPosition.z;
  ray.m_Delta.x = vTargetEntityPosition.x - vEntityPosition.x;
  ray.m_Start.Vector = vEntityPosition;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  traceFilter.m_attr.m_nInteractsWith |= 0x84001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &v13);
  return v13.fraction == 1.0;
}


// CBaseCombatCharacter::IsLookingTowards  (line 881, @0x000000000213de00, libserver.so)  // inlines: EyePosition
// calls: CBaseEntity::GetAbsOrigin, _Unwind_Resume
__int64 __fastcall CBaseCombatCharacter::IsLookingTowards(
        const CBaseCombatCharacter *const this,
        const CBaseEntity *target,
        double a3,
        float cosTolerance)
{
  __int64 (__fastcall *v6)(const CBaseCombatCharacter *const, double *, float); // r13
  int v7; // xmm1_4
  char v8; // al
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 (__fastcall *v12)(const CBaseCombatCharacter *const, double *, float); // r13
  int v13; // xmm1_4
  char v14; // al
  unsigned int (__fastcall *v15)(const CBaseCombatCharacter *const, const Vector *, float); // r13
  const Vector *AbsOrigin; // rax
  float cosTolerancea; // [rsp+Ch] [rbp-54h]
  double v18; // [rsp+10h] [rbp-50h] BYREF
  int v19; // [rsp+18h] [rbp-48h]
  double v20; // [rsp+20h] [rbp-40h] BYREF
  int v21; // [rsp+28h] [rbp-38h]
  double v22; // [rsp+30h] [rbp-30h]
  int v23; // [rsp+38h] [rbp-28h]

  cosTolerancea = *&a3;
  v6 = *(this->_vptr_IHandleEntity + 286);
  v18 = (*(target->_vptr_IHandleEntity + 62))(target, a3, cosTolerance);
  v19 = v7;
  v8 = v6(this, &v18, cosTolerancea);
  v10 = 1;
  if ( v8 == 0 )
  {
    v12 = *(this->_vptr_IHandleEntity + 286);
    v22 = (*(target->_vptr_IHandleEntity + 164))(target, v9, 1);
    v23 = v13;
    v21 = v13;
    v20 = v22;
    v14 = v12(this, &v20, cosTolerancea);
    v10 = 1;
    if ( v14 == 0 )
    {
      v15 = *(this->_vptr_IHandleEntity + 286);
      AbsOrigin = CBaseEntity::GetAbsOrigin(target);
      return v15(this, AbsOrigin, cosTolerancea);
    }
  }
  return v10;
}


// CBaseCombatCharacter::IsLookingTowards  (line 892, @0x000000000213f0a0, libserver.so)  // inlines: DotProduct, EyeAngles, EyePosition, NormalizeInPlace, VectorSubtract, operator-
// calls: VectorNormalize, AngleVectors
bool __fastcall CBaseCombatCharacter::IsLookingTowards(
        const CBaseCombatCharacter *const this,
        const Vector *const target,
        double a3,
        float cosTolerance)
{
  double v6; // xmm0_8
  float y; // xmm2_4
  float v8; // xmm1_4
  vec_t v9; // xmm1_4
  float v10; // xmm0_4
  const QAngle *v11; // rax
  float cosTolerancea; // [rsp+Ch] [rbp-44h]
  Vector toTarget; // [rsp+10h] [rbp-40h] BYREF
  Vector forward; // [rsp+20h] [rbp-30h] BYREF
  double v16; // [rsp+30h] [rbp-20h]
  float v17; // [rsp+38h] [rbp-18h]

  cosTolerancea = *&a3;
  v6 = (*(this->_vptr_IHandleEntity + 164))(this, a3, cosTolerance);
  y = target->y;
  v16 = v6;
  *&v6 = target->z;
  v17 = v8;
  *&v6 = *&v6 - v8;
  v9 = target->x - *&v16;
  toTarget.y = y - *(&v16 + 1);
  toTarget.z = *&v6;
  toTarget.x = v9;
  v10 = VectorNormalize(&toTarget);
  v11 = (*(this->_vptr_IHandleEntity + 165))(this, v10);
  AngleVectors(v11, &forward, 0, 0);
  return (((forward.x * toTarget.x) + (forward.y * toTarget.y)) + (forward.z * toTarget.z)) >= cosTolerancea;
}


// CBaseCombatCharacter::IsInFieldOfView  (line 906, @0x000000000213f3e0, libserver.so)  // inlines: DEG2RAD, DotProduct, EyeAngles, EyePosition, NormalizeInPlace, ToBasePlayer, VectorSubtract, operator-, operator=
// calls: CBasePlayer::GetFOV, cos, AngleVectors, CBaseEntity::GetAbsOrigin, VectorNormalize
bool __fastcall CBaseCombatCharacter::IsInFieldOfView(
        const CBaseCombatCharacter *const this,
        const CBaseEntity *const entity)
{
  float FOV; // xmm0_4
  __m128d v5; // xmm0
  double v6; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v8; // xmm1_4
  const QAngle *v9; // rax
  const Vector *AbsOrigin; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  double v16; // [rsp+0h] [rbp-60h]
  float flTolerance; // [rsp+8h] [rbp-58h]
  float v18; // [rsp+Ch] [rbp-54h]
  Vector vecForward; // [rsp+10h] [rbp-50h] BYREF
  Vector vecToTarget; // [rsp+20h] [rbp-40h] BYREF
  double v21; // [rsp+30h] [rbp-30h]
  float v22; // [rsp+38h] [rbp-28h]
  double v23; // [rsp+40h] [rbp-20h]
  float v24; // [rsp+48h] [rbp-18h]

  if ( this != 0 && (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
  {
    FOV = CBasePlayer::GetFOV(this);
    v5.m128d_f64[0] = cos(((FOV * 0.5) * 0.017453292));
    flTolerance = _mm_movedup_pd(v5).m128d_f64[0];
  }
  else
  {
    flTolerance = 0.89999998;
  }
  v6 = (*(this->_vptr_IHandleEntity + 164))(this);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  v21 = v6;
  v18 = v8;
  v22 = v8;
  v16 = v6;
  v9 = (vptr_IHandleEntity[165])(this);
  AngleVectors(v9, &vecForward, 0, 0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(entity);
  v11 = AbsOrigin->z - v18;
  v12 = AbsOrigin->x - *&v16;
  vecToTarget.y = AbsOrigin->y - *(&v16 + 1);
  vecToTarget.z = v11;
  vecToTarget.x = v12;
  VectorNormalize(&vecToTarget);
  if ( (((vecForward.x * vecToTarget.x) + (vecForward.y * vecToTarget.y)) + (vecForward.z * vecToTarget.z)) >= flTolerance )
    return 1;
  v23 = (*(entity->_vptr_IHandleEntity + 62))(entity);
  v24 = v14;
  vecToTarget.z = v14 - v18;
  vecToTarget.y = *(&v23 + 1) - *(&v16 + 1);
  vecToTarget.x = *&v23 - *&v16;
  VectorNormalize(&vecToTarget);
  if ( (((vecForward.x * vecToTarget.x) + (vecForward.y * vecToTarget.y)) + (vecForward.z * vecToTarget.z)) >= flTolerance )
    return 1;
  v23 = (*(entity->_vptr_IHandleEntity + 164))(entity);
  vecToTarget.z = v15 - v18;
  vecToTarget.y = *(&v23 + 1) - *(&v16 + 1);
  vecToTarget.x = *&v23 - *&v16;
  VectorNormalize(&vecToTarget);
  return (((vecForward.x * vecToTarget.x) + (vecForward.y * vecToTarget.y)) + (vecForward.z * vecToTarget.z)) >= flTolerance;
}


// CBaseCombatCharacter::IsInFieldOfView  (line 939, @0x00000000021429f0, libserver.so)  // inlines: DEG2RAD, ToBasePlayer
// calls: CBasePlayer::GetFOV, cosf
bool __fastcall CBaseCombatCharacter::IsInFieldOfView(const CBaseCombatCharacter *const this, const Vector *const pos)
{
  bool (__fastcall *v4)(const CBaseCombatCharacter *const, const Vector *const, float); // r13
  char v5; // al
  const CBasePlayer *v6; // rdi
  float FOV; // xmm0_4
  float v8; // xmm0_4

  if ( this == 0 || (*(this->_vptr_IHandleEntity + 140))(this) == 0 )
    return (*(this->_vptr_IHandleEntity + 286))(this, pos, 0.89999998);
  v4 = *(this->_vptr_IHandleEntity + 286);
  v5 = (*(this->_vptr_IHandleEntity + 140))(this);
  v6 = 0;
  if ( v5 != 0 )
    v6 = this;
  FOV = CBasePlayer::GetFOV(v6);
  v8 = cosf((FOV * 0.5) * 0.017453292);
  return v4(this, pos, v8);
}


// CBaseCombatCharacter::IsLineOfSightClear  (line 952, @0x000000000213dd20, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, _Unwind_Resume
bool __fastcall CBaseCombatCharacter::IsLineOfSightClear(
        const CBaseCombatCharacter *const this,
        CBaseEntity *entity,
        CBaseCombatCharacter::LineOfSightCheckType checkType)
{
  __int64 (__fastcall *v6)(const CBaseCombatCharacter *const, double *, _QWORD, CBaseEntity *); // r14
  int v7; // xmm1_4
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rsi
  bool v11; // cl
  __int64 (__fastcall *v13)(const CBaseCombatCharacter *const, double *, _QWORD, CBaseEntity *); // r14
  int v14; // xmm1_4
  char v15; // al
  __int64 (__fastcall *v16)(const CBaseCombatCharacter *const, const Vector *, _QWORD, CBaseEntity *); // r14
  const Vector *AbsOrigin; // rax
  double v18; // [rsp+0h] [rbp-40h] BYREF
  int v19; // [rsp+8h] [rbp-38h]
  double v20; // [rsp+10h] [rbp-30h] BYREF
  int v21; // [rsp+18h] [rbp-28h]

  v6 = *(this->_vptr_IHandleEntity + 291);
  v18 = (*(entity->_vptr_IHandleEntity + 62))(entity);
  v19 = v7;
  v8 = v6(this, &v18, checkType, entity);
  v11 = 1;
  if ( v8 == 0 )
  {
    v13 = *(this->_vptr_IHandleEntity + 291);
    v20 = (*(entity->_vptr_IHandleEntity + 164))(entity, v10, v9, 1);
    v21 = v14;
    v15 = v13(this, &v20, checkType, entity);
    v11 = 1;
    if ( v15 == 0 )
    {
      v16 = *(this->_vptr_IHandleEntity + 291);
      AbsOrigin = CBaseEntity::GetAbsOrigin(entity);
      return v16(this, AbsOrigin, checkType, entity);
    }
  }
  return v11;
}


// TraceFilterNoCombatCharacters  (line 968, @0x00000000021406e0, libserver.so)
// calls: CBaseEntity::BlocksLOS
bool __fastcall TraceFilterNoCombatCharacters(CBaseEntity *pServerEntity, uint64 contentsMask)
{
  return (*(pServerEntity->_vptr_IHandleEntity + 147))(pServerEntity, contentsMask) == 0
      && (*(pServerEntity->_vptr_IHandleEntity + 150))(pServerEntity) == 0
      && CBaseEntity::BlocksLOS(pServerEntity);
}


// CBaseCombatCharacter::IsLineOfSightClear  (line 976, @0x0000000002142f20, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, EyePosition, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CGameTrace::Init, CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities, CGamePhysicsQueryInterface::TraceRay, IsLineOfSightBetweenTwoEntitiesClear
// globals: TraceFilterNoCombatCharacters(CBaseEntity *,ulong long)
bool __fastcall CBaseCombatCharacter::IsLineOfSightClear(
        const CBaseCombatCharacter *const this,
        const Vector *const pos,
        CBaseCombatCharacter::LineOfSightCheckType checkType,
        CBaseEntity *entityToIgnore)
{
  double v7; // xmm0_8
  float y; // xmm4_4
  float z; // xmm3_4
  float m_fValue; // xmm2_4
  float x; // xmm2_4
  vec_t v12; // xmm1_4
  CTraceFilterSkipTwoEntities traceFilter; // [rsp+30h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t trace; // [rsp+D0h] [rbp-E0h] BYREF

  if ( checkType == CBaseCombatCharacter::LineOfSightCheckType::IGNORE_ACTORS )
    return IsLineOfSightBetweenTwoEntitiesClear(
             this,
             EEntityOffsetMode_t::EOFFSET_MODE_EYEPOSITION,
             entityToIgnore,
             EEntityOffsetMode_t::EOFFSET_MODE_WORLDSPACE_CENTER,
             entityToIgnore,
             4,
             0x84041u,
             TraceFilterNoCombatCharacters,
             1.0,
             0);
  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities(&traceFilter, this, entityToIgnore, 4);
  v7 = (*(this->_vptr_IHandleEntity + 164))(this);
  y = pos->y;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  z = pos->z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.y = y - *(&v7 + 1);
  ray.m_flRadius = m_fValue;
  x = pos->x;
  ray.m_Delta.z = z - v12;
  ray.m_Delta.x = x - *&v7;
  ray.m_IsRay = 1;
  *&ray.m_Start.x = v7;
  ray.m_Start.z = v12;
  traceFilter.m_attr.m_nInteractsWith |= 0x4001uLL;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &trace);
  return trace.fraction == 1.0;
}


// CBaseCombatCharacter::GetGroundSurface  (line 1016, @0x0000000002143430, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceRay, VectorAdd, VectorAligned, VectorSubtract, WorldSpaceAABB, operator*=
// calls: CCollisionProperty::CollisionAABBToWorldAABB, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
const CPhysSurfaceProperties *__fastcall CBaseCombatCharacter::GetGroundSurface(const CBaseCombatCharacter *const this)
{
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm1_4
  const CPhysSurfaceProperties *result; // rax
  Vector vecMins; // [rsp+10h] [rbp-180h] BYREF
  Vector vecMaxs; // [rsp+20h] [rbp-170h] BYREF
  CTraceFilterSimple v8; // [rsp+30h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-120h] BYREF
  trace_t trace; // [rsp+C0h] [rbp-D0h] BYREF
  Vector v11; // 0:^4.12

  v11 = vec3_origin;
  CCollisionProperty::CollisionAABBToWorldAABB(
    &this->m_Collision,
    &this->m_Collision.m_vecMins.m_Value,
    &this->m_Collision.m_vecMaxs.m_Value,
    &vecMins,
    &vecMaxs);
  ray.m_Start.w = 0.0;
  ray.m_Delta.x = 0.0 - v11.x;
  ray.m_Delta.y = 0.0 - v11.y;
  ray.m_Delta.w = 0.0;
  ray.m_Delta.z = -64.0 - v11.z;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  memset(&trace.m_ShapeAttributes, 0, 31);
  ray.m_Extents.y = (vecMaxs.y - vecMins.y) * 0.5;
  ray.m_Extents.z = (vecMaxs.z - vecMins.z) * 0.5;
  ray.m_Extents.x = (vecMaxs.x - vecMins.x) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v2 = (vecMaxs.x + vecMins.x) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v3 = (vecMaxs.y + vecMins.y) * 0.5;
  v4 = (vecMaxs.z + vecMins.z) * 0.5;
  ray.m_Start.x = v11.x + v2;
  ray.m_StartOffset.x = -v2;
  ray.m_StartOffset.y = -v3;
  ray.m_StartOffset.z = -v4;
  ray.m_Start.y = v11.y + v3;
  ray.m_Start.z = v11.z + v4;
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  CTraceFilterSimple::CTraceFilterSimple(&v8, this, 11, 0);
  v8.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v8, &trace);
  if ( trace.fraction < 1.0 )
    return trace.m_pSurfaceProperties;
  result = 0;
  if ( trace.startsolid )
    return trace.m_pSurfaceProperties;
  return result;
}


// SendProxyBaseCombatCharacterLocalOnly_RecipientsFilter  (line 1035, @0x0000000002152ca0, libserver.so)  // inlines: Bitvec_Set, ClearAll, ClearAllRecipients, Set, SetRecipient, entindex, memset
// calls: CEntityInstance::GetEntityIndex
void __fastcall SendProxyBaseCombatCharacterLocalOnly_RecipientsFilter(
        void *pRootObjectBase,
        void *pStructBase,
        void *pCurrentField,
        CSendProxyRecipients *pRecipients,
        int objectid)
{
  __int64 v6; // rax
  void *v7; // rax
  CEntityIndex v8; // eax

  *pRecipients = 0;
  if ( pRootObjectBase )
  {
    if ( (*(*pRootObjectBase + 1120LL))(pRootObjectBase, pStructBase, pCurrentField, pRecipients, objectid) )
    {
LABEL_6:
      v8.m_Data = CEntityInstance::GetEntityIndex(pRootObjectBase).m_Data;
      pRecipients->m_Bits.m_Ints[(v8.m_Data - 1) >> 5] |= 1 << (LOBYTE(v8.m_Data) - 1);
      return;
    }
    v6 = (*(*pRootObjectBase + 808LL))(pRootObjectBase);
    if ( v6 )
    {
      v7 = (*(*v6 + 8LL))(v6, 0);
      if ( v7 )
      {
        pRootObjectBase = v7;
        goto LABEL_6;
      }
    }
  }
}


// CBaseCombatCharacter::FInViewCone  (line 1070, @0x000000000213d1a0, libserver.so)
bool __fastcall CBaseCombatCharacter::FInViewCone(CBaseCombatCharacter *const this, CBaseEntity *pEntity)
{
  bool (__fastcall *v3)(CBaseCombatCharacter *const, double *); // r12
  int v4; // xmm1_4
  double v6; // [rsp+0h] [rbp-20h] BYREF
  int v7; // [rsp+8h] [rbp-18h]

  v3 = *(this->_vptr_IHandleEntity + 265);
  v6 = (*(pEntity->_vptr_IHandleEntity + 62))(pEntity);
  v7 = v4;
  return v3(this, &v6);
}


// CBaseCombatCharacter::FInViewCone  (line 1080, @0x000000000213d1f0, libserver.so)  // inlines: DotProduct, LengthSqr, PointWithinViewAngle, VectorSubtract, operator-
bool __fastcall CBaseCombatCharacter::FInViewCone(CBaseCombatCharacter *const this, const Vector *const vecSpot)
{
  double v4; // xmm0_8
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  bool result; // al
  float m_Value; // [rsp+8h] [rbp-38h]
  float z; // [rsp+Ch] [rbp-34h]
  double eyepos; // [rsp+10h] [rbp-30h]

  eyepos = (*(this->_vptr_IHandleEntity + 164))(this);
  m_Value = this->m_flFieldOfView.m_Value;
  z = vecSpot->z;
  v4 = (*(this->_vptr_IHandleEntity + 276))(this);
  v5 = vecSpot->x - *&eyepos;
  v6 = vecSpot->y - *(&eyepos + 1);
  v7 = vecSpot->z - z;
  v9 = ((*&v4 * v5) + (*(&v4 + 1) * v6)) + (v8 * v7);
  if ( m_Value > 0.0 )
    return v9 >= 0.0 && (v9 * v9) >= (((((v5 * v5) + (v6 * v6)) + (v7 * v7)) * m_Value) * m_Value);
  result = 1;
  if ( v9 <= 0.0 )
    return (((((v5 * v5) + (v6 * v6)) + (v7 * v7)) * m_Value) * m_Value) >= (v9 * v9);
  return result;
}


// CBaseCombatCharacter::BodyAngles  (line 1094, @0x000000000213df00, libserver.so)
// calls: CBaseEntity::GetAbsAngles
QAngle __fastcall CBaseCombatCharacter::BodyAngles(CBaseCombatCharacter *const this)
{
  const QAngle *AbsAngles; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsAngles = CBaseEntity::GetAbsAngles(this);
  *&result.x = *&AbsAngles->x;
  result.z = AbsAngles->z;
  return result;
}


// CBaseCombatCharacter::BodyDirection2D  (line 1101, @0x000000000213e560, libserver.so)  // inlines: FastSqrt, Length, NormalizeInPlace, Vector2DLength, Vector2DNormalize, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator/=
Vector __fastcall CBaseCombatCharacter::BodyDirection2D(CBaseCombatCharacter *const this)
{
  float v2; // xmm0_4
  float v3; // xmm2_4
  float v4; // xmm3_4
  double v6; // [rsp+20h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v6 = (*(this->_vptr_IHandleEntity + 273))(this);
  result.z = 0.0;
  v2 = fsqrt((*&v6 * *&v6) + (*(&v6 + 1) * *(&v6 + 1)));
  if ( v2 == 0.0 )
  {
    v3 = 0.0;
    v4 = 0.0;
  }
  else
  {
    v4 = *&v6 * (1.0 / v2);
    v3 = *(&v6 + 1) * (1.0 / v2);
  }
  *&result.x = __PAIR64__(LODWORD(v3), LODWORD(v4));
  return result;
}


// CBaseCombatCharacter::BodyDirection3D  (line 1111, @0x000000000213ec20, libserver.so)
// calls: AngleVectors
Vector __fastcall CBaseCombatCharacter::BodyDirection3D(CBaseCombatCharacter *const this)
{
  vec_t v1; // xmm1_4
  QAngle angles; // [rsp+10h] [rbp-30h] BYREF
  Vector vBodyDir; // [rsp+20h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&angles.x = (*(this->_vptr_IHandleEntity + 271))(this);
  angles.z = v1;
  AngleVectors(&angles, &vBodyDir, 0, 0);
  *&result.x = *&vBodyDir.x;
  result.z = vBodyDir.z;
  return result;
}


