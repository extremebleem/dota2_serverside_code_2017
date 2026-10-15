// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/basecombatweapon_shared.cpp:2723
class CWeaponList : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	typedef CAutoGameSystem BaseClass;
	CWeaponList(CWeaponList &);
	CWeaponList(const CWeaponList &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CWeaponList *);
	CWeaponList();
	virtual void GameShutdown(const EventGameShutdown_t &);
	void AddWeapon(CBaseCombatWeapon *);
	void RemoveWeapon(CBaseCombatWeapon *);
	virtual ~CWeaponList();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[4] GameShutdown
	// sizeof = 64
};

// src/game/shared/basecombatweapon_shared.cpp:2858
class C_CBaseCombatWeapon_MapInstall {
	C_CBaseCombatWeapon_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseCombatWeapon::CBaseCombatWeapon  (line 57, @0x00000000021774f0, libserver.so)  // inlines: AddToTail, AddWeapon, CEntityHandle, CEntityIOOutput, CHandle, CNetworkHandleBase, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, EnsureValidValue<WeaponState_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<unsigned int>, HSequence, NetworkStateChanged, OnBaseCombatWeaponCreated, Set, operator=<WeaponState_t>, operator=<int>, ~CBaseAnimating, ~CNetworkVarBase, ~CStrongHandle
// calls: CBaseAnimating::CBaseAnimating, CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::InsertBefore, CBaseEntity::SetDamageOptions, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CBaseCombatWeapon::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CBaseCombatWeapon::CBaseCombatWeapon(CBaseCombatWeapon *const this)
{
  WeaponState_t m_Value; // r8d
  CBaseCombatWeapon *src; // [rsp+8h] [rbp-18h] BYREF

  CBaseAnimating::CBaseAnimating(this);
  src = this;
  this->_vptr_IHandleEntity = &off_4004010;
  this->_vptr_IAttachmentOverride = &off_4004C78;
  this->m_hOwner.m_Value.m_Index = -1;
  this->m_nViewModelIndex.m_Value = 0;
  this->m_flNextPrimaryAttack.m_Value = 0.0;
  this->m_flNextSecondaryAttack.m_Value = 0.0;
  this->m_nQueuedAttack.m_Value = 0;
  this->m_flTimeAttackQueued.m_Value = 0.0;
  this->m_iViewModelIndex.m_Value.m_pBinding = 0;
  this->m_iWorldModelIndex.m_Value.m_pBinding = 0;
  this->m_iState.m_Value = WeaponState_t::WEAPON_NOT_CARRIED;
  this->m_iPrimaryAmmoType.m_Value = 0;
  this->m_iSecondaryAmmoType.m_Value = 0;
  this->m_iClip1.m_Value = 0;
  this->m_iClip2.m_Value = 0;
  this->m_bOnlyPump.m_Value = 0;
  this->m_flTimeWeaponIdle.m_Value = 0.0;
  this->m_iszName.u.m_Id = 0;
  this->m_bInReload.m_Value = 0;
  this->m_hIdealSequence.m_Data = -1;
  this->m_hLocker.m_Index = -1;
  this->m_OnPlayerUse._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPlayerPickup._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnNPCPickup._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnCacheInteraction._vptr_CEntityIOOutput = off_3F7C190;
  this->m_fMinRange1 = 65.0;
  this->m_fMinRange2 = 65.0;
  this->m_fMaxRange1 = 1024.0;
  this->m_fMaxRange2 = 1024.0;
  this->m_bReloadsSingly = 0;
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::InsertBefore(
    &g_WeaponList.m_list,
    0xFFFFu,
    &src);
  m_Value = this->m_iState.m_Value;
  this->m_hWeaponFileInfo = 0;
  this->m_flNextEmptySoundTime = 0.0;
  if ( m_Value != WeaponState_t::WEAPON_NOT_CARRIED )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1264, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iState.m_Value = WeaponState_t::WEAPON_NOT_CARRIED;
  }
  if ( this->m_nViewModelIndex.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1228, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nViewModelIndex.m_Value = 0;
  }
  this->m_iReloadHudHintCount = 0;
  this->m_iAltFireHudHintCount = 0;
  this->m_flHudHintMinDisplayTime = 0.0;
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
  this->m_nTracerAttachmentIndex = -2;
}


// CBaseCombatWeapon::~CBaseCombatWeapon  (line 109, @0x0000000002177770, libserver.so)  // inlines: OnBaseCombatWeaponDestroyed, RemoveWeapon, ~CBaseAnimating, ~CNetworkVarBase, ~CStrongHandle
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::FindAndRemove, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
// callers: CBaseCombatWeapon::~CBaseCombatWeapon
void __fastcall CBaseCombatWeapon::~CBaseCombatWeapon(CBaseCombatWeapon *const this)
{
  CBaseCombatWeapon *src; // [rsp+8h] [rbp-18h] BYREF

  this->_vptr_IHandleEntity = &off_4004010;
  src = this;
  this->_vptr_IAttachmentOverride = &off_4004C78;
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::FindAndRemove(
    &g_WeaponList.m_list,
    &src);
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_iWorldModelIndex.m_Value);
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_iViewModelIndex.m_Value);
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseCombatWeapon::~CBaseCombatWeapon  (line 109, @0x00000000021777f0, libserver.so)  // inlines: operator delete
// calls: CBaseCombatWeapon::~CBaseCombatWeapon
void __fastcall CBaseCombatWeapon::~CBaseCombatWeapon(CBaseCombatWeapon *const this)
{
  CBaseCombatWeapon::~CBaseCombatWeapon(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CBaseCombatWeapon::Activate  (line 114, @0x0000000002173480, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseAnimating::Activate, CBaseCombatWeapon::SetupWeaponFileInfo, UTIL_Remove
void __fastcall CBaseCombatWeapon::Activate(CBaseCombatWeapon *const this, ActivateType_t activateType)
{
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntitySystem *v6; // rcx
  CEntityIdentity *v7; // rdx
  __int64 v8; // rsi

  CBaseAnimating::Activate(this, activateType);
  if ( this->m_hWeaponFileInfo == 0 )
    CBaseCombatWeapon::SetupWeaponFileInfo(this);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  v6 = g_pEntitySystem;
  v7 = (v5 + 2);
  if ( v7 <= 1
    || (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) == 0
    || (v8 = v4 & 0x1FF, v6 = (8 * v8), v7 += v8, v7 == 0)
    || v5 != v7->m_EHandle.m_Index
    || v7->m_pInstance == 0 )
  {
    if ( (*(g_pGameRules->_vptr_CGameRules + 51))(g_pGameRules, this, v7, v6) == 0 )
      UTIL_Remove(this);
  }
}


// CBaseCombatWeapon::GiveDefaultAmmo  (line 137, @0x0000000002152d80, libserver.so)  // inlines: NetworkStateChanged, Set, SetPrimaryAmmoCount, SetSecondaryAmmoCount, operator=<int>
// callers: CBaseCombatWeapon::PreFirstNetworkUpdate, CBaseCombatWeapon::Spawn
void __fastcall CBaseCombatWeapon::GiveDefaultAmmo(CBaseCombatWeapon *const this)
{
  bool v2; // zf
  int (**vptr_IHandleEntity)(...); // rax
  int v4; // r12d
  int (**v5)(...); // rax
  int v6; // r12d
  int v7; // eax
  int v8; // eax

  v2 = (*(this->_vptr_IHandleEntity + 351))(this) == 0;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  if ( v2 )
  {
    v8 = vptr_IHandleEntity[339](this);
    v2 = this->m_iClip1.m_Value == -1;
    this->m_iPrimaryAmmoCount = v8;
    if ( !v2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iClip1.m_Value = -1;
    }
  }
  else
  {
    v4 = vptr_IHandleEntity[339](this);
    if ( v4 != this->m_iClip1.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iClip1.m_Value = v4;
    }
  }
  v2 = (*(this->_vptr_IHandleEntity + 352))(this) == 0;
  v5 = this->_vptr_IHandleEntity;
  if ( v2 )
  {
    v7 = v5[340](this);
    v2 = this->m_iClip2.m_Value == -1;
    this->m_iSecondaryAmmoCount = v7;
    if ( !v2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iClip2.m_Value = -1;
    }
  }
  else
  {
    v6 = v5[340](this);
    if ( v6 != this->m_iClip2.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iClip2.m_Value = v6;
    }
  }
}


// CBaseCombatWeapon::PreFirstNetworkUpdate  (line 160, @0x0000000002152ec0, libserver.so)  // inlines: NetworkStateChanged, RemoveEFlags, Set, SetGlobalFadeScale, SetSolid, operator=<float>
// calls: CCollisionProperty::UpdateLocateHandle, CBaseCombatWeapon::GiveDefaultAmmo, CCollisionProperty::UseTriggerBounds
void __fastcall CBaseCombatWeapon::PreFirstNetworkUpdate(CBaseCombatWeapon *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  CCollisionProperty *m_pCollision; // rdi
  float v4; // xmm1_4

  p_m_Collision = &this->m_Collision;
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  m_pCollision = this->m_pCollision;
  this->m_iEFlags &= ~0x40000u;
  if ( m_pCollision != 0 )
    CCollisionProperty::UpdateLocateHandle(m_pCollision);
  if ( this->m_flFadeScale.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flFadeScale.m_Value = 0.0;
  }
  CBaseCombatWeapon::GiveDefaultAmmo(this);
  CCollisionProperty::UseTriggerBounds(p_m_Collision, 1, v4);
}


// CBaseCombatWeapon::SetupWeaponFileInfo  (line 188, @0x0000000002173030, libserver.so)  // inlines: CStrongHandle, Length, NetworkStateChanged, Set, String, V_strlen, operator char const*, operator=, operator=<CWeakHandle<InfoForResourceTypeCModel> >, operator=<int>, ~CStrongHandle
// calls: GetFileWeaponInfoFromHandle, strlen, CUtlString::Get, GetAmmoDef, CAmmoDef::Index, CStrongHandle<InfoForResourceTypeCModel>::Init, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, Msg, Warning, _Unwind_Resume
// callers: CBaseCombatWeapon::Activate, CBaseCombatWeapon::Spawn
// strings: "ERROR: Weapon (%s) using undefined primary ammo type (%s)\n", "ERROR: Weapon (%s) using undefined secondary ammo type (%s)\n", "Error retrieving weapon handle for: %s\n"
void __fastcall CBaseCombatWeapon::SetupWeaponFileInfo(CBaseCombatWeapon *const this)
{
  const char *v2; // r13
  HWeaponInfo v3; // rax
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax
  const CUtlString *v5; // r12
  const char *m_pString; // rdi
  const char *v7; // r14
  CAmmoDef *AmmoDef; // rax
  int v9; // r14d
  const char *v10; // rdi
  const CUtlString *v11; // r12
  const char *v12; // r14
  CAmmoDef *v13; // rax
  int v14; // r14d
  void (__fastcall *v15)(CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t *, IGameModelInfo *, __int64); // r15
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  void (__fastcall *v20)(CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t *, IGameModelInfo *, __int64); // [rsp+8h] [rbp-58h]
  CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t hResource[2]; // [rsp+10h] [rbp-50h] BYREF
  CStrongHandle<InfoForResourceTypeCModel> src; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_iSecondaryAmmoType.m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1272, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iSecondaryAmmoType.m_Value = -1;
  }
  if ( this->m_iPrimaryAmmoType.m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1268, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPrimaryAmmoType.m_Value = -1;
  }
  v2 = (*(this->_vptr_IHandleEntity + 356))(this);
  v3 = (*(g_pWeaponInfo->_vptr_IWeaponInfo + 1))(g_pWeaponInfo, v2);
  this->m_hWeaponFileInfo = v3;
  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(v3);
  v5 = FileWeaponInfoFromHandle;
  if ( FileWeaponInfoFromHandle != 0 )
  {
    m_pString = FileWeaponInfoFromHandle->m_szAmmo1.m_pString;
    if ( m_pString != 0 && strlen(m_pString) > 0 )
    {
      v7 = CUtlString::Get(v5 + 12);
      AmmoDef = GetAmmoDef();
      v9 = CAmmoDef::Index(AmmoDef, v7);
      if ( v9 != this->m_iPrimaryAmmoType.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1268, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iPrimaryAmmoType.m_Value = v9;
      }
      if ( v9 == -1 )
      {
        v18 = CUtlString::Get(v5 + 12);
        Msg("ERROR: Weapon (%s) using undefined primary ammo type (%s)\n", v2, v18);
      }
    }
    v10 = v5[13].m_pString;
    if ( v10 != 0 && strlen(v10) > 0 )
    {
      v11 = v5 + 13;
      v12 = CUtlString::Get(v11);
      v13 = GetAmmoDef();
      v14 = CAmmoDef::Index(v13, v12);
      if ( v14 != this->m_iSecondaryAmmoType.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1272, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iSecondaryAmmoType.m_Value = v14;
      }
      if ( v14 == -1 )
      {
        v19 = CUtlString::Get(v11);
        Msg("ERROR: Weapon (%s) using undefined secondary ammo type (%s)\n", v2, v19);
      }
    }
    src.m_pBinding = 0;
    CStrongHandle<InfoForResourceTypeCModel>::Init(&src, 0);
    if ( this->m_iViewModelIndex.m_Value.m_pBinding != src.m_pBinding )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1248, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_iViewModelIndex.m_Value, &src);
    }
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&src);
    src.m_pBinding = 0;
    CStrongHandle<InfoForResourceTypeCModel>::Init(&src, 0);
    if ( this->m_iWorldModelIndex.m_Value.m_pBinding != src.m_pBinding )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_iWorldModelIndex.m_Value, &src);
    }
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&src);
    if ( (*(this->_vptr_IHandleEntity + 334))(this, 0) != 0 && *(*(this->_vptr_IHandleEntity + 334))(this, 0) != 0 )
    {
      v20 = *(modelinfo->_vptr_IAppSystem + 13);
      v17 = (*(this->_vptr_IHandleEntity + 334))(this, 0);
      v20(hResource, modelinfo, v17);
      src.m_pBinding = 0;
      CStrongHandle<InfoForResourceTypeCModel>::Init(&src, hResource[0]);
      if ( this->m_iViewModelIndex.m_Value.m_pBinding != src.m_pBinding )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1248, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_iViewModelIndex.m_Value, &src);
      }
      CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&src);
    }
    if ( (*(this->_vptr_IHandleEntity + 335))(this) != 0 && *(*(this->_vptr_IHandleEntity + 335))(this) != 0 )
    {
      v15 = *(modelinfo->_vptr_IAppSystem + 13);
      v16 = (*(this->_vptr_IHandleEntity + 335))(this);
      v15(hResource, modelinfo, v16);
      src.m_pBinding = 0;
      CStrongHandle<InfoForResourceTypeCModel>::Init(&src, hResource[0]);
      if ( this->m_iWorldModelIndex.m_Value.m_pBinding != src.m_pBinding )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_iWorldModelIndex.m_Value, &src);
      }
      CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&src);
    }
  }
  else
  {
    Warning("Error retrieving weapon handle for: %s\n", v2);
  }
}


// CBaseCombatWeapon::Spawn  (line 240, @0x0000000002173590, libserver.so)  // inlines: GetWpnData, NetworkStateChanged, RemoveEFlags, Set, SetAIAddOn, SetCollisionGroup, SetGlobalFadeScale, SetRemoveable, SetSolid, operator char const*, operator=, operator=<float>
// calls: CBaseAnimating::Spawn, CBaseCombatWeapon::SetupWeaponFileInfo, CCollisionProperty::UpdateLocateHandle, CBaseCombatWeapon::GiveDefaultAmmo, CBaseModelEntity::SetModel, GetFileWeaponInfoFromHandle, CUtlString::operator[], CUtlString::Get, AllocPooledString, CCollisionProperty::SetCollisionGroup, CBaseEntity::SetBlocksLOS, CCollisionProperty::UseTriggerBounds
void __fastcall CBaseCombatWeapon::Spawn(CBaseCombatWeapon *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  CCollisionProperty *m_pCollision; // rdi
  const char *v5; // rax
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax
  FileWeaponInfo_t *v7; // rax
  const char *v8; // rax
  float v9; // xmm1_4
  UtlSymLargeId_t v10[4]; // [rsp+0h] [rbp-20h] BYREF

  p_m_Collision = &this->m_Collision;
  CBaseAnimating::Spawn(this, pKeyValues);
  CBaseCombatWeapon::SetupWeaponFileInfo(this);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 2);
  m_pCollision = this->m_pCollision;
  this->m_iEFlags &= ~0x40000u;
  if ( m_pCollision != 0 )
    CCollisionProperty::UpdateLocateHandle(m_pCollision);
  if ( this->m_flFadeScale.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flFadeScale.m_Value = 0.0;
  }
  CBaseCombatWeapon::GiveDefaultAmmo(this);
  v5 = (*(this->_vptr_IHandleEntity + 335))(this);
  CBaseModelEntity::SetModel(this, v5);
  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
  if ( CUtlString::operator[](&FileWeaponInfoFromHandle->m_szAIAddOn, 0) != 0 )
  {
    v7 = GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
    v8 = CUtlString::Get(&v7->m_szAIAddOn);
    AllocPooledString(v10, v8);
    this->m_AIAddOn.u.m_Id = v10[0];
  }
  (*(this->_vptr_IHandleEntity + 379))(this);
  CCollisionProperty::SetCollisionGroup(p_m_Collision, 14);
  CBaseEntity::SetBlocksLOS(this, 0);
  this->m_bRemoveable = 0;
  CCollisionProperty::UseTriggerBounds(p_m_Collision, 1, v9);
}


// CBaseCombatWeapon::GetEncryptionKey  (line 295, @0x000000000213d310, libserver.so)
const unsigned __int8 *__fastcall CBaseCombatWeapon::GetEncryptionKey(const CBaseCombatWeapon *const this)
{
  return (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 18))(g_pGameConfiguration);
}


// CBaseCombatWeapon::Precache  (line 303, @0x000000000213fb40, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, GetFileWeaponInfoFromHandle, PrecacheEffect, PrecacheParticleSystem, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "ParticleTracer", "particles/tracer_fx/weapon_tracers.vpcf", "weapon entry scripts/%s.txt missing or not in scripts/weapons_manifest.txt\n"
void __fastcall CBaseCombatWeapon::Precache(CBaseCombatWeapon *const this, const CEntityPrecacheContext *pContext)
{
  __int64 (__fastcall *v4)(IWeaponInfo *, __int64); // r14
  __int64 v5; // rax
  HWeaponInfo v6; // r13
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax
  const char *v8; // rax
  const char *v9; // rax

  CEntityInstance::Precache(this, pContext);
  v4 = *(g_pWeaponInfo->_vptr_IWeaponInfo + 1);
  v5 = (*(this->_vptr_IHandleEntity + 356))(this);
  v6 = v4(g_pWeaponInfo, v5);
  if ( v6 == 0 && LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    v9 = (*(this->_vptr_IHandleEntity + 356))(this);
    LoggingSystem_Log(LOG_SERVER, 2, "weapon entry scripts/%s.txt missing or not in scripts/weapons_manifest.txt\n", v9);
  }
  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(v6);
  (*(FileWeaponInfoFromHandle->_vptr_FileWeaponInfo_t + 1))(FileWeaponInfoFromHandle, pContext);
  v8 = (*(this->_vptr_IHandleEntity + 133))(this);
  if ( v8 != 0 )
    PrecacheEffect(v8, 0);
  PrecacheEffect("ParticleTracer", 0);
  PrecacheParticleSystem("particles/tracer_fx/weapon_tracers.vpcf", pContext);
}


// CBaseCombatWeapon::GetWpnData  (line 357, @0x0000000002152f60, libserver.so)
// calls: GetFileWeaponInfoFromHandle
const GameFileWeaponInfo_t *__fastcall CBaseCombatWeapon::GetWpnData(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
}


// CBaseCombatWeapon::GetViewModel  (line 365, @0x000000000213f7c0, libserver.so)  // inlines: GetWpnData, operator char const*
// calls: GetFileWeaponInfoFromHandle, CUtlString::Get
const char *__fastcall CBaseCombatWeapon::GetViewModel(const CBaseCombatWeapon *const this, int a2)
{
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax

  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
  return CUtlString::Get(&FileWeaponInfoFromHandle->m_szViewModel);
}


// CBaseCombatWeapon::GetWorldModel  (line 373, @0x000000000213f7e0, libserver.so)  // inlines: GetWpnData, operator char const*
// calls: GetFileWeaponInfoFromHandle, CUtlString::Get
const char *__fastcall CBaseCombatWeapon::GetWorldModel(const CBaseCombatWeapon *const this)
{
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax

  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
  return CUtlString::Get(&FileWeaponInfoFromHandle->m_szWorldModel);
}


// CBaseCombatWeapon::GetAnimPrefix  (line 381, @0x000000000213f800, libserver.so)  // inlines: GetWpnData, operator char const*
// calls: GetFileWeaponInfoFromHandle, CUtlString::Get
const char *__fastcall CBaseCombatWeapon::GetAnimPrefix(const CBaseCombatWeapon *const this)
{
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax

  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
  return CUtlString::Get(&FileWeaponInfoFromHandle->m_szAnimationPrefix);
}


// CBaseCombatWeapon::GetPrintName  (line 390, @0x000000000213f820, libserver.so)  // inlines: GetWpnData, operator char const*
// calls: GetFileWeaponInfoFromHandle, CUtlString::Get
const char *__fastcall CBaseCombatWeapon::GetPrintName(const CBaseCombatWeapon *const this)
{
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax

  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
  return CUtlString::Get(&FileWeaponInfoFromHandle->m_szPrintName);
}


// CBaseCombatWeapon::GetMaxClip1  (line 398, @0x000000000213f840, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetMaxClip1(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iMaxClip1;
}


// CBaseCombatWeapon::GetMaxClip2  (line 406, @0x000000000213f860, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetMaxClip2(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iMaxClip2;
}


// CBaseCombatWeapon::GetDefaultClip1  (line 414, @0x000000000213f880, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetDefaultClip1(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iDefaultClip1;
}


// CBaseCombatWeapon::GetDefaultClip2  (line 422, @0x000000000213f8a0, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetDefaultClip2(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iDefaultClip2;
}


// CBaseCombatWeapon::UsesClipsForAmmo1  (line 430, @0x000000000213d330, libserver.so)
bool __fastcall CBaseCombatWeapon::UsesClipsForAmmo1(const CBaseCombatWeapon *const this)
{
  return (*(this->_vptr_IHandleEntity + 337))(this) != -1;
}


// CBaseCombatWeapon::IsMeleeWeapon  (line 438, @0x000000000213f8c0, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
bool __fastcall CBaseCombatWeapon::IsMeleeWeapon(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_bMeleeWeapon;
}


// CBaseCombatWeapon::IsGrenade  (line 446, @0x000000000213d350, libserver.so)
bool __fastcall CBaseCombatWeapon::IsGrenade(const CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::UsesClipsForAmmo2  (line 454, @0x000000000213d360, libserver.so)
bool __fastcall CBaseCombatWeapon::UsesClipsForAmmo2(const CBaseCombatWeapon *const this)
{
  return (*(this->_vptr_IHandleEntity + 338))(this) != -1;
}


// CBaseCombatWeapon::GetWeight  (line 462, @0x000000000213f8e0, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetWeight(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iWeight;
}


// CBaseCombatWeapon::AllowsAutoSwitchTo  (line 471, @0x000000000213f900, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
bool __fastcall CBaseCombatWeapon::AllowsAutoSwitchTo(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_bAutoSwitchTo;
}


// CBaseCombatWeapon::AllowsAutoSwitchFrom  (line 480, @0x000000000213f920, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
bool __fastcall CBaseCombatWeapon::AllowsAutoSwitchFrom(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_bAutoSwitchFrom;
}


// CBaseCombatWeapon::GetWeaponFlags  (line 488, @0x000000000213f940, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetWeaponFlags(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iFlags;
}


// CBaseCombatWeapon::GetSlot  (line 496, @0x000000000213f960, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetSlot(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iSlot;
}


// CBaseCombatWeapon::GetPosition  (line 504, @0x000000000213f980, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetPosition(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iPosition;
}


// CBaseCombatWeapon::GetName  (line 512, @0x000000000213f9a0, libserver.so)  // inlines: GetWpnData, operator char const*
// calls: GetFileWeaponInfoFromHandle, CUtlString::Get
const char *__fastcall CBaseCombatWeapon::GetName(const CBaseCombatWeapon *const this)
{
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax

  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
  return CUtlString::Get(&FileWeaponInfoFromHandle->m_szClassName);
}


// CBaseCombatWeapon::GetSpriteActive  (line 520, @0x000000000213f9c0, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteActive(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconActive;
}


// CBaseCombatWeapon::GetSpriteInactive  (line 528, @0x000000000213f9e0, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteInactive(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconInactive;
}


// CBaseCombatWeapon::GetSpriteSmall  (line 536, @0x000000000213fa00, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteSmall(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconSmall;
}


// CBaseCombatWeapon::GetSpriteAmmo  (line 544, @0x000000000213fa20, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteAmmo(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconAmmo;
}


// CBaseCombatWeapon::GetSpriteAmmo2  (line 552, @0x000000000213fa40, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteAmmo2(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconAmmo2;
}


// CBaseCombatWeapon::GetSpriteDualActive  (line 560, @0x000000000213fa60, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteDualActive(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconActive;
}


// CBaseCombatWeapon::GetSpriteDualInactive  (line 572, @0x000000000213fa80, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteDualInactive(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconInactive;
}


// CBaseCombatWeapon::GetSpriteCrosshair  (line 584, @0x000000000213faa0, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteCrosshair(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconCrosshair;
}


// CBaseCombatWeapon::GetSpriteAutoaim  (line 592, @0x000000000213fac0, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteAutoaim(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconAutoaim;
}


// CBaseCombatWeapon::GetSpriteZoomedCrosshair  (line 600, @0x000000000213fae0, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteZoomedCrosshair(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconZoomedCrosshair;
}


// CBaseCombatWeapon::GetSpriteZoomedAutoaim  (line 608, @0x000000000213fb00, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
const CHudTexture *__fastcall CBaseCombatWeapon::GetSpriteZoomedAutoaim(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iconZoomedAutoaim;
}


// CBaseCombatWeapon::GetShootSound  (line 616, @0x0000000002141220, libserver.so)  // inlines: GetShootSound, GetWpnData, operator char const*, operator[]
// calls: GetFileWeaponInfoFromHandle, CUtlString::Get
const char *__fastcall CBaseCombatWeapon::GetShootSound(const CBaseCombatWeapon *const this, int iIndex)
{
  FileWeaponInfo_t *FileWeaponInfoFromHandle; // rax
  int m_Size; // edx
  WeaponSoundData_t *m_pMemory; // rax
  const CUtlString *v6; // rax
  const CUtlString *v7; // rdx
  const CUtlString *v8; // rdi

  FileWeaponInfoFromHandle = GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo);
  m_Size = FileWeaponInfoFromHandle->m_aShootSounds.m_Size;
  if ( m_Size <= 0 )
    return "";
  m_pMemory = FileWeaponInfoFromHandle->m_aShootSounds.m_Memory.m_pMemory;
  if ( iIndex != m_pMemory->m_Type )
  {
    v6 = &m_pMemory[1];
    v7 = &v6[2 * (m_Size - 1)];
    while ( v6 != v7 )
    {
      v8 = v6;
      v6 += 2;
      if ( iIndex == LODWORD(v6[-2].m_pString) )
        return CUtlString::Get(v8 + 1);
    }
    return "";
  }
  v8 = m_pMemory;
  return CUtlString::Get(v8 + 1);
}


// CBaseCombatWeapon::GetRumbleEffect  (line 624, @0x000000000213fb20, libserver.so)  // inlines: GetWpnData
// calls: GetFileWeaponInfoFromHandle
int __fastcall CBaseCombatWeapon::GetRumbleEffect(const CBaseCombatWeapon *const this)
{
  return GetFileWeaponInfoFromHandle(this->m_hWeaponFileInfo)->m_iRumbleEffect;
}


// CBaseCombatWeapon::GetOwner  (line 632, @0x0000000002152f80, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToBaseCombatCharacter
// callers: CBaseCombatWeapon::UpdateTransmitState, CBaseCombatWeapon::HandleAnimEvent, CBaseCombatWeapon::MakeTracer, CBaseCombatWeapon::RescindAltFireHudHint, CBaseCombatWeapon::DisplayReloadHudHint, CBaseCombatWeapon::RescindReloadHudHint, CBaseCombatWeapon::SendViewModelAnim, CBaseCombatWeapon::SetWeaponVisible, CBaseCombatWeapon::IsWeaponVisible, CBaseCombatWeapon::InputHideWeapon, CBaseCombatWeapon::HideThink, CBaseCombatWeapon::WeaponSound (34 total)
CBaseCombatCharacter *__fastcall CBaseCombatWeapon::GetOwner(const CBaseCombatWeapon *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( this->m_hOwner.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwner.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwner.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    return (*(v5->m_pInstance->_vptr_IHandleEntity + 147))(v5->m_pInstance);
  }
  else
  {
    return 0;
  }
}


// CBaseCombatWeapon::SetOwner  (line 641, @0x0000000002154c90, libserver.so)  // inlines: DispatchUpdateTransmitState, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: CBaseEntity::DispatchUpdateTransmitState
// callers: CBaseCombatCharacter::Weapon_Detach, CBaseCombatWeapon::Equip, CBaseCombatWeapon::Drop
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatWeapon::SetOwner(CBaseCombatWeapon *const this, CBaseCombatCharacter *owner)
{
  CBaseCombatCharacter *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  bool v11; // zf

  m_pInstance = 0;
  m_Index = this->m_hOwner.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hOwner.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( owner != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1224, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( owner != 0 )
    {
      m_pEntity = owner->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v10 = 0x7FFF;
        else
          v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hOwner.m_Value.m_Index) = v10 | this->m_hOwner.m_Value.m_Index & 0x8000;
        v11 = this->m_pEntity == 0;
        this->m_hOwner.m_Value.m_Index = (v9 << 15) | this->m_hOwner.m_Value.m_Index & 0x7FFF;
        if ( !v11 )
          goto LABEL_8;
        return;
      }
    }
    this->m_hOwner.m_Value.m_Index = -1;
  }
  if ( this->m_pEntity != 0 )
LABEL_8:
    CBaseEntity::DispatchUpdateTransmitState(this);
}


// CBaseCombatWeapon::IsAllowedToSwitch  (line 655, @0x000000000213d380, libserver.so)
bool __fastcall CBaseCombatWeapon::IsAllowedToSwitch(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::CanBeSelected  (line 663, @0x00000000021405b0, libserver.so)
bool __fastcall CBaseCombatWeapon::CanBeSelected(CBaseCombatWeapon *const this)
{
  return (*(this->_vptr_IHandleEntity + 259))(this) != 0 && (*(this->_vptr_IHandleEntity + 260))(this);
}


// CBaseCombatWeapon::HasAmmo  (line 674, @0x0000000002153a80, libserver.so)  // inlines: GetAmmoCount, ToBasePlayer
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatCharacter::GetAmmoCount
bool __fastcall CBaseCombatWeapon::HasAmmo(CBaseCombatWeapon *const this)
{
  bool result; // al
  CBaseCombatCharacter *Owner; // rax
  const CBaseCombatCharacter *v4; // r12
  int m_Value; // esi
  int v6; // esi

  if ( this->m_iPrimaryAmmoType.m_Value == -1 )
  {
    if ( this->m_iSecondaryAmmoType.m_Value == -1 || ((*(this->_vptr_IHandleEntity + 344))(this) & 1) != 0 )
      return 1;
  }
  else if ( ((*(this->_vptr_IHandleEntity + 344))(this) & 1) != 0 )
  {
    return 1;
  }
  Owner = CBaseCombatWeapon::GetOwner(this);
  v4 = Owner;
  if ( Owner == 0 || (*(Owner->_vptr_IHandleEntity + 140))(Owner) == 0 )
    return 0;
  if ( this->m_iClip1.m_Value > 0 )
    return 1;
  m_Value = this->m_iPrimaryAmmoType.m_Value;
  if ( m_Value != -1 && CBaseCombatCharacter::GetAmmoCount(v4, m_Value) != 0 )
    return 1;
  if ( this->m_iClip2.m_Value > 0 )
    return 1;
  v6 = this->m_iSecondaryAmmoType.m_Value;
  result = 0;
  if ( v6 != -1 )
    return CBaseCombatCharacter::GetAmmoCount(v4, v6) != 0;
  return result;
}


// CBaseCombatWeapon::VisibleInWeaponSelection  (line 691, @0x000000000213d390, libserver.so)
bool __fastcall CBaseCombatWeapon::VisibleInWeaponSelection(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::HasWeaponIdleTimeElapsed  (line 701, @0x00000000021438a0, libserver.so)  // inlines: curtime
bool __fastcall CBaseCombatWeapon::HasWeaponIdleTimeElapsed(CBaseCombatWeapon *const this)
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
  return m_flCurrentTime > this->m_flTimeWeaponIdle.m_Value;
}


// CBaseCombatWeapon::SetWeaponIdleTime  (line 713, @0x0000000002142170, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CBaseCombatWeapon::SetWeaponIdleTime(CBaseCombatWeapon *const this, double a2, float time)
{
  float timea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flTimeWeaponIdle.m_Value )
  {
    timea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1288, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, time);
    this->m_flTimeWeaponIdle.m_Value = timea;
  }
}


// CBaseCombatWeapon::GetWeaponIdleTime  (line 722, @0x000000000213d3a0, libserver.so)
float __fastcall CBaseCombatWeapon::GetWeaponIdleTime(CBaseCombatWeapon *const this)
{
  return this->m_flTimeWeaponIdle.m_Value;
}


// CBaseCombatWeapon::Drop  (line 730, @0x000000000215a790, libserver.so)  // inlines: AddSpawnFlags, CEntityHandle, DispatchUpdateTransmitState, Get, GetBool, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, MarkPVSInformationDirty, NetworkStateChanged, RemoveEffects, RemoveSpawnFlags, Set, SetGravity, SetPlaybackRate, SetRemoveable, StopAnimation, Vector, curtime, operator&=<int>, operator=<WeaponState_t>, operator|=<int>
// calls: WeaponManager_AmmoMod, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::StopFollowingEntity, CBaseEntity::SetMoveType, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::SetGroundEntity, CBaseEntity::ThinkSet, CCollisionProperty::DisableTouchPersistsNotification, CBaseEntity::VPhysicsGetObject, CBaseEntity::SetNextThink, CBaseCombatWeapon::SetOwner, CBaseEntity::SetAbsVelocity (13 total)
void __fastcall CBaseCombatWeapon::Drop(CBaseCombatWeapon *const this, const Vector *const vVelocity)
{
  unsigned int v4; // r12d
  CBaseAnimatingController *BaseAnimatingController; // rax
  WeaponState_t m_Value; // r12d
  IPhysicsObject *Object; // rax
  IPhysicsObject *v8; // r12
  double v9; // xmm1_8
  unsigned __int16 v10; // dx
  __int64 v11; // rsi
  CEntityInstance *v12; // r13
  vec_t v13; // eax
  CEntitySystem *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  CGlobalVars *v17; // r12
  double v18; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int v20; // r12d
  AngularImpulse angImp; // [rsp+0h] [rbp-30h] BYREF

  this->m_bRemoveable = 1;
  WeaponManager_AmmoMod(this);
  v4 = this->m_spawnflags.m_Value | 0x40000000;
  if ( this->m_spawnflags.m_Value != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v4;
  }
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 0.0);
  CBaseEntity::StopFollowingEntity(this);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_FLYGRAVITY, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_Value = this->m_iState.m_Value;
  this->m_flGravity = 1.0;
  if ( m_Value != WeaponState_t::WEAPON_NOT_CARRIED )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1264, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iState.m_Value = WeaponState_t::WEAPON_NOT_CARRIED;
  }
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  if ( this->m_pEntity != 0 )
    CBaseEntity::DispatchUpdateTransmitState(this);
  (*(this->_vptr_IHandleEntity + 379))(this);
  CBaseEntity::SetGroundEntity(this, 0);
  CBaseEntity::ThinkSet(this, 0x829uLL, 0.0, 0, 0);
  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  CCollisionProperty::DisableTouchPersistsNotification(&this->m_Collision);
  if ( hl2_episodic.m_pParent->m_Value.m_nValue != 0 )
  {
    v20 = this->m_spawnflags.m_Value & 0xFFFFFFFD;
    if ( this->m_spawnflags.m_Value != v20 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v20;
      Object = CBaseEntity::VPhysicsGetObject(this);
      v8 = Object;
      if ( Object == 0 )
        goto LABEL_29;
LABEL_9:
      angImp.x = 200.0;
      angImp.y = 200.0;
      angImp.z = 200.0;
      (*(*Object + 552LL))(v8, vVelocity);
      (*(*v8 + 1712LL))(v8, &angImp);
      goto LABEL_10;
    }
  }
  Object = CBaseEntity::VPhysicsGetObject(this);
  v8 = Object;
  if ( Object != 0 )
    goto LABEL_9;
LABEL_29:
  CBaseEntity::SetAbsVelocity(this, vVelocity);
LABEL_10:
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v10 = 0x7FFF;
    v11 = 0x7FFF;
  }
  else
  {
    v10 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v11 = v10;
  }
  v12 = 0;
  LODWORD(v13) = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v10 & 0x7FFF;
  angImp.x = v13;
  v14 = g_pEntitySystem;
  v15 = (LODWORD(v13) + 2);
  if ( v15 > 1 )
  {
    v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9];
    if ( v15 != 0 )
    {
      v16 = v11 & 0x1FF;
      v14 = (8 * v16);
      v11 = 120 * v16;
      v15 += v11;
      if ( v15 != 0 && LODWORD(v13) == *(v15 + 16) )
        v12 = *v15;
    }
  }
  v17 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v11, v15, v14);
    }
    HIDWORD(v18) = 0;
    *&v18 = v17->m_flCurrentTime + 1.0;
  }
  else
  {
    *&v18 = 1065353216;
  }
  CBaseEntity::SetNextThink(this, v18, v9, 0);
  (*(this->_vptr_IHandleEntity + 40))(this, 0);
  CBaseCombatWeapon::SetOwner(this, 0);
  if ( v12 != 0
    && BYTE2(v12[7]._vptr_IHandleEntity) != 0
    && (*(g_pGameRules->_vptr_CGameRules + 51))(g_pGameRules, this) == 0 )
  {
    UTIL_Remove(this);
  }
}


// CBaseCombatWeapon::OnPickedUp  (line 796, @0x00000000021791f0, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, FireOutput, Free, RemoveEffects, SetEntityName, SetRemoveable, entindex, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CRecipientFilter::CRecipientFilter, UTIL_PlayerByIndex, CRecipientFilter::AddRecipient, CRecipientFilter::GetRecipientCount, CEntityIdentity::SetEntityName, CRecipientFilter::~CRecipientFilter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, __stack_chk_fail, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Player.PickupWeapon"
void __fastcall CBaseCombatWeapon::OnPickedUp(CBaseCombatWeapon *const this, CBaseCombatCharacter *pNewOwner)
{
  char v4; // al
  int v5; // ebx
  CBasePlayer *v6; // rax
  const CEntityInstance *v7; // r12
  CEntityIndex v8; // eax
  CVariant value; // [rsp+10h] [rbp-180h] BYREF
  CRecipientFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+158h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFEFF);
  v4 = (*(pNewOwner->_vptr_IHandleEntity + 140))(pNewOwner);
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( v4 != 0 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerPickup, pNewOwner, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    CRecipientFilter::CRecipientFilter(&filter);
    if ( gpGlobals->maxClients > 0 )
    {
      v5 = 1;
      do
      {
        while ( 1 )
        {
          v6 = UTIL_PlayerByIndex(v5);
          v7 = v6;
          if ( v6 != 0 && (*(v6->_vptr_IHandleEntity + 139))(v6) == 0 && (*(v7->_vptr_IHandleEntity + 436))(v7) == 4 )
            break;
          if ( gpGlobals->maxClients < ++v5 )
            goto LABEL_11;
        }
        CRecipientFilter::AddRecipient(&filter, v7);
        ++v5;
      }
      while ( gpGlobals->maxClients >= v5 );
    }
LABEL_11:
    if ( CRecipientFilter::GetRecipientCount(&filter) != 0 )
    {
      v8.m_Data = CEntityInstance::GetEntityIndex(pNewOwner).m_Data;
      CBaseEntity::EmitSound(&filter, v8, "Player.PickupWeapon", 0, 0.0, 0);
    }
    value.m_uint64 = 0;
    CEntityIdentity::SetEntityName(this->m_pEntity, &value);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnNPCPickup, pNewOwner, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  this->m_bRemoveable = 0;
}


// CBaseCombatWeapon::MakeTracer  (line 872, @0x00000000021530e0, libserver.so)  // inlines: entindex
// calls: CBaseCombatWeapon::GetOwner, CEntityInstance::GetEntityIndex, UTIL_ParticleTracer, CBaseEntity::MakeTracer
// strings: "particles/tracer_fx/weapon_tracers.vpcf"
void __fastcall CBaseCombatWeapon::MakeTracer(
        CBaseCombatWeapon *const this,
        const Vector *const vecTracerSrc,
        const trace_t *const tr,
        int iTracerType)
{
  CBaseCombatCharacter *Owner; // r13
  const char *v9; // r12
  CEntityIndex v10; // r13d
  int v11; // eax
  Vector vNewSrc; // [rsp+0h] [rbp-40h] BYREF

  Owner = CBaseCombatWeapon::GetOwner(this);
  if ( Owner != 0 )
  {
    v9 = (*(this->_vptr_IHandleEntity + 133))(this);
    if ( v9 == 0 )
      v9 = "particles/tracer_fx/weapon_tracers.vpcf";
    vNewSrc = *vecTracerSrc;
    v10.m_Data = CEntityInstance::GetEntityIndex(Owner).m_Data;
    if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
      v10.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v11 = (*(this->_vptr_IHandleEntity + 132))(this);
    UTIL_ParticleTracer(v9, &vNewSrc, &tr->endpos, v10, v11, 1);
  }
  else
  {
    CBaseEntity::MakeTracer(this, vecTracerSrc, tr, iTracerType);
  }
}


// CBaseCombatWeapon::DefaultTouch  (line 973, @0x000000000216c390, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ToBasePlayer, ~CVariantBase
// calls: UTIL_ItemCanBeTouchedByPlayer, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseCombatWeapon::DefaultTouch(CBaseCombatWeapon *const this, CBaseEntity *pOther)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( (this->m_fFlags.m_Value & 0x10000000) == 0 && pOther != 0 && (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
  {
    if ( UTIL_ItemCanBeTouchedByPlayer(this, pOther) )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnCacheInteraction, pOther, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
    if ( (this->m_spawnflags.m_Value & 2) == 0 && (*(pOther->_vptr_IHandleEntity + 461))(pOther, this) != 0 )
      (*(this->_vptr_IHandleEntity + 329))(this, pOther);
  }
}


// CBaseCombatWeapon::ShouldDisplayAltFireHUDHint  (line 1016, @0x0000000002140e80, libserver.so)  // inlines: UsesSecondaryAmmo
bool __fastcall CBaseCombatWeapon::ShouldDisplayAltFireHUDHint(CBaseCombatWeapon *const this)
{
  bool result; // al

  result = 0;
  if ( this->m_iAltFireHudHintCount <= 0 )
  {
    if ( this->m_iSecondaryAmmoType.m_Value < 0 )
      goto LABEL_7;
    result = (*(this->_vptr_IHandleEntity + 278))(this);
    if ( result )
      return result;
    if ( this->m_iSecondaryAmmoType.m_Value < 0 )
    {
LABEL_7:
      result = (*(this->_vptr_IHandleEntity + 277))(this);
      if ( result )
        return result;
    }
    return 0;
  }
  return result;
}


// CBaseCombatWeapon::DisplayAltFireHudHint  (line 1036, @0x00000000021699f0, libserver.so)  // inlines: CFmtStrN, GetClassNameAsCStr, GetClassname, InitQuietTruncation, String, curtime
// calls: CFmtStrN<256, false>::sprintf, CBaseCombatWeapon::GetOwner, UTIL_HudHintText, __stack_chk_fail
// strings: "#valve_hint_alt_%s"
void __fastcall CBaseCombatWeapon::DisplayAltFireHudHint(CBaseCombatWeapon *const this)
{
  const char *m_pAsString; // rdx
  CEntityIdentity *m_pEntity; // rax
  CBaseCombatCharacter *Owner; // rax
  CGlobalVars *v5; // r12
  float v6; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CFmtStr hint; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+118h] [rbp-18h]

  m_pAsString = "";
  hint.m_szBuf[0] = 0;
  v9 = __readfsqword(0x28u);
  hint.m_nLength = 0;
  hint._vptr_CFmtStrN = &off_3F6E1A0;
  m_pEntity = this->m_pEntity;
  hint.m_bQuietTruncation = 0;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  CFmtStrN<256,false>::sprintf(&hint, "#valve_hint_alt_%s", m_pAsString);
  Owner = CBaseCombatWeapon::GetOwner(this);
  UTIL_HudHintText(Owner, hint.m_szBuf);
  this->m_bAltFireHudHintDisplayed = 1;
  ++this->m_iAltFireHudHintCount;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v6 = v5->m_flCurrentTime + 7.0;
  }
  else
  {
    v6 = 7.0;
  }
  this->m_flHudHintMinDisplayTime = v6;
}


// CBaseCombatWeapon::RescindAltFireHudHint  (line 1050, @0x00000000021531d0, libserver.so)
// calls: CBaseCombatWeapon::GetOwner, UTIL_HudHintText
void __fastcall CBaseCombatWeapon::RescindAltFireHudHint(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax

  Owner = CBaseCombatWeapon::GetOwner(this);
  UTIL_HudHintText(Owner, "");
  this->m_bAltFireHudHintDisplayed = 0;
  --this->m_iAltFireHudHintCount;
}


// CBaseCombatWeapon::ShouldDisplayReloadHUDHint  (line 1063, @0x0000000002153bc0, libserver.so)  // inlines: GetAmmoCount
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatCharacter::GetAmmoCount
bool __fastcall CBaseCombatWeapon::ShouldDisplayReloadHUDHint(CBaseCombatWeapon *const this)
{
  char v2; // bl
  CBaseCombatCharacter *Owner; // rax
  const CBaseCombatCharacter *v5; // r13
  int m_Value; // esi

  v2 = 0;
  if ( this->m_iReloadHudHintCount > 0 )
    return v2;
  Owner = CBaseCombatWeapon::GetOwner(this);
  v5 = Owner;
  if ( Owner != 0
    && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0
    && (v2 = (*(this->_vptr_IHandleEntity + 351))(this)) != 0
    && (*(this->_vptr_IHandleEntity + 337))(this) / 2 > this->m_iClip1.m_Value
    && (m_Value = this->m_iPrimaryAmmoType.m_Value) != -1
    && CBaseCombatCharacter::GetAmmoCount(v5, m_Value) > 0 )
  {
    return v2;
  }
  else
  {
    return 0;
  }
}


// CBaseCombatWeapon::DisplayReloadHudHint  (line 1084, @0x0000000002153210, libserver.so)  // inlines: curtime
// calls: CBaseCombatWeapon::GetOwner, UTIL_HudHintText
// strings: "valve_hint_reload"
void __fastcall CBaseCombatWeapon::DisplayReloadHudHint(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  Owner = CBaseCombatWeapon::GetOwner(this);
  UTIL_HudHintText(Owner, "valve_hint_reload");
  this->m_bReloadHudHintDisplayed = 1;
  ++this->m_iReloadHudHintCount;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    this->m_flHudHintMinDisplayTime = v3->m_flCurrentTime + 7.0;
  }
  else
  {
    this->m_flHudHintMinDisplayTime = 7.0;
  }
}


// CBaseCombatWeapon::RescindReloadHudHint  (line 1095, @0x00000000021532b0, libserver.so)
// calls: CBaseCombatWeapon::GetOwner, UTIL_HudHintText
void __fastcall CBaseCombatWeapon::RescindReloadHudHint(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax

  Owner = CBaseCombatWeapon::GetOwner(this);
  UTIL_HudHintText(Owner, "");
  this->m_bReloadHudHintDisplayed = 0;
  --this->m_iReloadHudHintCount;
}


// CBaseCombatWeapon::SetPickupTouch  (line 1107, @0x0000000002146ae0, libserver.so)  // inlines: curtime
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CBaseCombatWeapon::SetPickupTouch(CBaseCombatWeapon *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v5; // xmm0_8

  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  this->m_pfnTouch.__pfn = (&stru_10 + 2081);
  this->m_pfnTouch.__delta = 0;
  if ( gpGlobals->maxClients > 1 && (this->m_spawnflags.m_Value & 0x40000000) != 0 )
  {
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v5) = 0;
      *&v5 = v3->m_flCurrentTime + 30.0;
    }
    else
    {
      *&v5 = 1106247680;
    }
    CBaseEntity::SetNextThink(this, v5, v2, 0);
  }
}


// CBaseCombatWeapon::Equip  (line 1132, @0x0000000002155e50, libserver.so)  // inlines: NetworkStateChanged, RemoveEffects, Set, curtime, operator=<float>
// calls: CBaseEntity::SetAbsVelocity, CCollisionProperty::RemoveTriggerCollisionGroup, CBaseEntity::FollowEntity, CBaseCombatWeapon::SetOwner, CCollisionProperty::DisableTouchPersistsNotification, CBaseEntity::ThinkSet, CBaseModelEntity::SetModel
void __fastcall CBaseCombatWeapon::Equip(CBaseCombatWeapon *const this, CBaseCombatCharacter *pOwner)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r15
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r13
  CGlobalVars *v7; // r13
  float v8; // xmm0_4
  FnGlobalVarsWarningFunc v9; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v11; // r12
  float v12; // xmm0_4
  FnGlobalVarsWarningFunc v13; // rax
  CGlobalVars *v14; // r12
  float v15; // xmm0_4
  FnGlobalVarsWarningFunc v16; // rax
  const char *v17; // rax
  float v18; // [rsp+Ch] [rbp-34h]
  float v19; // [rsp+Ch] [rbp-34h]
  float v20; // [rsp+Ch] [rbp-34h]
  float v21; // [rsp+Ch] [rbp-34h]

  p_m_Collision = &this->m_Collision;
  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  CCollisionProperty::RemoveTriggerCollisionGroup(p_m_Collision);
  CBaseEntity::FollowEntity(this, pOwner, 1);
  CBaseCombatWeapon::SetOwner(this, pOwner);
  (*(this->_vptr_IHandleEntity + 40))(this, pOwner);
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFEFF);
  m_flCurrentTime = 0.0;
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
  if ( m_flCurrentTime != this->m_flNextPrimaryAttack.m_Value )
  {
    v18 = m_flCurrentTime;
    (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNextPrimaryAttack.m_Value = v18;
  }
  v7 = gpGlobals;
  v8 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v9 = gpGlobals->m_pfnWarningFunc;
      if ( v9 != 0 )
        (v9)(1, 0.0);
    }
    v8 = v7->m_flCurrentTime;
  }
  if ( v8 != this->m_flNextSecondaryAttack.m_Value )
  {
    v19 = v8;
    (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNextSecondaryAttack.m_Value = v19;
  }
  CCollisionProperty::DisableTouchPersistsNotification(p_m_Collision);
  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  (*(this->_vptr_IHandleEntity + 51))(this);
  if ( (*(pOwner->_vptr_IHandleEntity + 140))(pOwner) == 0 )
  {
    v11 = gpGlobals;
    v12 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v13 = gpGlobals->m_pfnWarningFunc;
        if ( v13 != 0 )
          (v13)(1, 0.0);
      }
      v12 = v11->m_flCurrentTime;
    }
    if ( v12 != this->m_flNextPrimaryAttack.m_Value )
    {
      v20 = v12;
      (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flNextPrimaryAttack.m_Value = v20;
    }
    v14 = gpGlobals;
    v15 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v16 = gpGlobals->m_pfnWarningFunc;
        if ( v16 != 0 )
          (v16)(1, 0.0);
      }
      v15 = v14->m_flCurrentTime;
    }
    if ( v15 != this->m_flNextSecondaryAttack.m_Value )
    {
      v21 = v15;
      (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flNextSecondaryAttack.m_Value = v21;
    }
    v17 = (*(this->_vptr_IHandleEntity + 335))(this);
    CBaseModelEntity::SetModel(this, v17);
  }
}


// CBaseCombatWeapon::SetActivity  (line 1166, @0x0000000002143150, libserver.so)  // inlines: SetActivity, SetPlaybackRate, fpmin
// calls: CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SetSequence, CBaseAnimating::SetCycle, CBaseAnimating::ResetSequenceInfo, CBaseAnimating::SequenceDuration, CBaseAnimating::GetBaseAnimatingController
void __fastcall CBaseCombatWeapon::SetActivity(CBaseCombatWeapon *const this, Activity act, float a3, float duration)
{
  HSequence v6; // r12d
  float v7; // xmm1_4
  CBaseAnimatingController *v8; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  float durationb; // [rsp+Ch] [rbp-24h]

  v6.m_Data = CBaseAnimating::SelectWeightedSequence(this, act).m_Data;
  if ( v6.m_Data != -1 || (v6.m_Data = CBaseAnimating::SelectWeightedSequence(this, 185).m_Data) != -1 )
  {
    CBaseAnimating::SetSequence(this, v6, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
    this->m_Activity = act;
    CBaseAnimating::SetCycle(this, 0.0, v7);
    CBaseAnimating::ResetSequenceInfo(this);
    if ( a3 <= 0.0 )
    {
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
      (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
    }
    else
    {
      durationb = fminf(CBaseAnimating::SequenceDuration(this, v6) / a3, 12.0);
      v8 = CBaseAnimating::GetBaseAnimatingController(this);
      (*(v8->_vptr_CSkeletonAnimationController + 22))(v8, durationb);
    }
  }
}


// CBaseCombatWeapon::UpdateClientData  (line 1209, @0x0000000002144100, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator CBaseCombatWeapon*, operator=<WeaponState_t>
int __fastcall CBaseCombatWeapon::UpdateClientData(CBaseCombatWeapon *const this, CBasePlayer *pPlayer)
{
  uint32 v3; // ecx
  unsigned __int16 v4; // dx
  int v5; // esi
  __int16 v6; // ax
  uint32 v7; // edx
  CBaseCombatWeapon *m_pInstance; // rcx
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  WeaponState_t v12; // ebx
  __int16 v14; // [rsp+0h] [rbp-20h]

  v3 = pPlayer->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( pPlayer->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = pPlayer->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = v4 | v14 & 0x8000;
  v7 = v3;
  m_pInstance = 0;
  v9 = (v7 << 15) | v6 & 0x7FFF;
  if ( (v9 + 2) > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v10 != 0 )
    {
      v11 = &v10[v5 & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  v12 = (this == m_pInstance) + 1;
  if ( v12 != this->m_iState.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1264, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iState.m_Value = v12;
  }
  return 1;
}


// CBaseCombatWeapon::SetViewModelIndex  (line 1233, @0x0000000002142460, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CBaseCombatWeapon::SetViewModelIndex(CBaseCombatWeapon *const this, int index)
{
  if ( index != this->m_nViewModelIndex.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1228, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nViewModelIndex.m_Value = index;
  }
}


// CBaseCombatWeapon::SendViewModelAnim  (line 1243, @0x00000000021532f0, libserver.so)  // inlines: ToBasePlayer
// calls: CBaseCombatWeapon::GetOwner, CBasePlayer::GetViewModel
void __fastcall CBaseCombatWeapon::SendViewModelAnim(CBaseCombatWeapon *const this, HSequence hSequence)
{
  CBaseCombatCharacter *Owner; // rax
  CBasePlayer *v5; // rbx
  CBaseViewModel *ViewModel; // rax

  if ( hSequence.m_Data != -1 )
  {
    Owner = CBaseCombatWeapon::GetOwner(this);
    v5 = Owner;
    if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
    {
      ViewModel = CBasePlayer::GetViewModel(v5, this->m_nViewModelIndex.m_Value);
      if ( ViewModel != 0 )
        (*(ViewModel->_vptr_IHandleEntity + 251))(ViewModel, hSequence.m_Data);
    }
  }
}


// CBaseCombatWeapon::GetViewModelSequenceDuration  (line 1267, @0x0000000002156170, libserver.so)  // inlines: ToBasePlayer
// calls: CBaseCombatWeapon::GetOwner, CBasePlayer::GetViewModel, CBaseViewModel::GetViewModelSequenceDurationForLayer
float __fastcall CBaseCombatWeapon::GetViewModelSequenceDuration(
        CBaseCombatWeapon *const this,
        ViewmodelLayer_t nLayer)
{
  CBaseCombatCharacter *Owner; // rax
  CBasePlayer *v5; // rbx
  CBaseViewModel *ViewModel; // rbx

  Owner = CBaseCombatWeapon::GetOwner(this);
  v5 = Owner;
  if ( Owner == 0 )
    return 0.0;
  if ( (*(Owner->_vptr_IHandleEntity + 140))(Owner) == 0 )
    return 0.0;
  ViewModel = CBasePlayer::GetViewModel(v5, this->m_nViewModelIndex.m_Value);
  if ( ViewModel == 0 )
    return 0.0;
  (*(this->_vptr_IHandleEntity + 272))(this);
  return CBaseViewModel::GetViewModelSequenceDurationForLayer(ViewModel, nLayer);
}


// CBaseCombatWeapon::IsViewModelSequenceFinished  (line 1289, @0x00000000021561f0, libserver.so)  // inlines: ToBasePlayer
// calls: CBaseCombatWeapon::GetOwner, CBasePlayer::GetViewModel, CBaseViewModel::IsViewModelSequenceFinishedForLayer
// callers: CBaseCombatWeapon::MaintainIdealActivity
bool __fastcall CBaseCombatWeapon::IsViewModelSequenceFinished(CBaseCombatWeapon *const this, ViewmodelLayer_t nLayer)
{
  CBasePlayer *Owner; // r12
  CBaseViewModel *ViewModel; // rax

  if ( (this->m_Activity + 1) <= 1 )
    return 1;
  Owner = CBaseCombatWeapon::GetOwner(this);
  return Owner != 0
      && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0
      && (ViewModel = CBasePlayer::GetViewModel(Owner, this->m_nViewModelIndex.m_Value)) != 0
      && CBaseViewModel::IsViewModelSequenceFinishedForLayer(ViewModel, nLayer);
}


// CBaseCombatWeapon::GetTracerAttachment  (line 1313, @0x000000000213fc30, libserver.so)
// calls: CBaseAnimating::LookupAttachment
// strings: "muzzle"
int __fastcall CBaseCombatWeapon::GetTracerAttachment(CBaseCombatWeapon *const this)
{
  int result; // eax

  result = this->m_nTracerAttachmentIndex;
  if ( result == -2 )
  {
    result = CBaseAnimating::LookupAttachment(this, "muzzle");
    this->m_nTracerAttachmentIndex = result;
  }
  return result;
}


// CBaseCombatWeapon::SetViewModel  (line 1326, @0x0000000002154b30, libserver.so)  // inlines: GetRenderColor, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, ToBasePlayer, a, b, g, r
// calls: CBaseCombatWeapon::GetOwner, CBasePlayer::GetViewModel
void __fastcall CBaseCombatWeapon::SetViewModel(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  CBasePlayer *v3; // rbx
  CBaseViewModel *ViewModel; // rax
  CBaseViewModel *v5; // rbx
  void (__fastcall *v6)(CBaseViewModel *, __int64, CBaseCombatWeapon *const); // r13
  __int64 v7; // rax
  unsigned __int8 v8; // r15
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // r13
  unsigned __int8 v11; // r12

  Owner = CBaseCombatWeapon::GetOwner(this);
  v3 = Owner;
  if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
  {
    ViewModel = CBasePlayer::GetViewModel(v3, this->m_nViewModelIndex.m_Value);
    v5 = ViewModel;
    if ( ViewModel != 0 )
    {
      v6 = *(ViewModel->_vptr_IHandleEntity + 252);
      v7 = (*(this->_vptr_IHandleEntity + 334))(this, this->m_nViewModelIndex.m_Value);
      v6(v5, v7, this);
      v8 = this->m_clrRender.m_Value._color[0];
      v9 = this->m_clrRender.m_Value._color[1];
      v10 = this->m_clrRender.m_Value._color[2];
      v11 = v5->m_clrRender.m_Value._color[3];
      if ( v8 != v5->m_clrRender.m_Value._color[0] )
      {
        (*(v5->_vptr_IHandleEntity + 22))(v5, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v5->m_clrRender.m_Value._color[0] = v8;
      }
      if ( v9 != v5->m_clrRender.m_Value._color[1] )
      {
        (*(v5->_vptr_IHandleEntity + 22))(v5, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v5->m_clrRender.m_Value._color[1] = v9;
      }
      if ( v10 != v5->m_clrRender.m_Value._color[2] )
      {
        (*(v5->_vptr_IHandleEntity + 22))(v5, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v5->m_clrRender.m_Value._color[2] = v10;
      }
      if ( v11 != v5->m_clrRender.m_Value._color[3] )
      {
        (*(v5->_vptr_IHandleEntity + 22))(v5, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v5->m_clrRender.m_Value._color[3] = v11;
      }
    }
  }
}


// CBaseCombatWeapon::SendWeaponAnim  (line 1343, @0x0000000002157ab0, libserver.so)
// calls: CBaseCombatWeapon::SetIdealActivity
bool __fastcall CBaseCombatWeapon::SendWeaponAnim(CBaseCombatWeapon *const this, Activity iActivity)
{
  float v2; // xmm1_4

  return CBaseCombatWeapon::SetIdealActivity(this, iActivity, 0.0, v2);
}


// CBaseCombatWeapon::HasAnyAmmo  (line 1361, @0x0000000002140ee0, libserver.so)  // inlines: UsesPrimaryAmmo, UsesSecondaryAmmo
bool __fastcall CBaseCombatWeapon::HasAnyAmmo(CBaseCombatWeapon *const this)
{
  if ( this->m_iPrimaryAmmoType.m_Value < 0 )
  {
    if ( this->m_iSecondaryAmmoType.m_Value < 0 || (*(this->_vptr_IHandleEntity + 277))(this) != 0 )
      return 1;
  }
  else if ( (*(this->_vptr_IHandleEntity + 277))(this) != 0 )
  {
    return 1;
  }
  return (*(this->_vptr_IHandleEntity + 278))(this);
}


// CBaseCombatWeapon::HasPrimaryAmmo  (line 1375, @0x0000000002153a00, libserver.so)  // inlines: GetAmmoCount
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatCharacter::GetAmmoCount
bool __fastcall CBaseCombatWeapon::HasPrimaryAmmo(CBaseCombatWeapon *const this)
{
  __int64 v2; // rax
  CBaseCombatCharacter *Owner; // rax
  int m_Value; // esi

  LOBYTE(v2) = (*(this->_vptr_IHandleEntity + 351))(this);
  if ( v2 == 0 || this->m_iClip1.m_Value <= 0 )
  {
    Owner = CBaseCombatWeapon::GetOwner(this);
    if ( Owner != 0 )
    {
      m_Value = this->m_iPrimaryAmmoType.m_Value;
      LOBYTE(v2) = m_Value != -1 && CBaseCombatCharacter::GetAmmoCount(Owner, m_Value) > 0;
    }
    else
    {
      return this->m_iPrimaryAmmoCount > 0;
    }
  }
  return v2;
}


// CBaseCombatWeapon::HasSecondaryAmmo  (line 1405, @0x0000000002153b50, libserver.so)  // inlines: GetAmmoCount
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatCharacter::GetAmmoCount
bool __fastcall CBaseCombatWeapon::HasSecondaryAmmo(CBaseCombatWeapon *const this)
{
  bool result; // al
  CBaseCombatCharacter *Owner; // rax
  int m_Value; // esi

  result = (*(this->_vptr_IHandleEntity + 352))(this);
  if ( !result || this->m_iClip2.m_Value <= 0 )
  {
    Owner = CBaseCombatWeapon::GetOwner(this);
    result = 0;
    if ( Owner != 0 )
    {
      m_Value = this->m_iSecondaryAmmoType.m_Value;
      if ( m_Value != -1 && CBaseCombatCharacter::GetAmmoCount(Owner, m_Value) > 0 )
        return 1;
    }
  }
  return result;
}


// CBaseCombatWeapon::UsesPrimaryAmmo  (line 1428, @0x0000000002156280, libserver.so)
// callers: CC_GiveCurrentAmmo
bool __fastcall CBaseCombatWeapon::UsesPrimaryAmmo(CBaseCombatWeapon *const this)
{
  return this->m_iPrimaryAmmoType.m_Value >= 0;
}


// CBaseCombatWeapon::UsesSecondaryAmmo  (line 1438, @0x00000000021562a0, libserver.so)
// callers: CC_GiveCurrentAmmo
bool __fastcall CBaseCombatWeapon::UsesSecondaryAmmo(CBaseCombatWeapon *const this)
{
  return this->m_iSecondaryAmmoType.m_Value >= 0;
}


// CBaseCombatWeapon::SetWeaponVisible  (line 1449, @0x0000000002153360, libserver.so)  // inlines: DispatchUpdateTransmitState, MarkPVSInformationDirty, RemoveEffects, ToBasePlayer
// calls: CBaseCombatWeapon::GetOwner, CBasePlayer::GetViewModel, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::AddEffects
void __fastcall CBaseCombatWeapon::SetWeaponVisible(CBaseCombatWeapon *const this, bool visible)
{
  CBaseCombatCharacter *Owner; // rax
  CBasePlayer *v5; // r12
  CBaseViewModel *ViewModel; // r12

  Owner = CBaseCombatWeapon::GetOwner(this);
  v5 = Owner;
  if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
    ViewModel = CBasePlayer::GetViewModel(v5, this->m_nViewModelIndex.m_Value);
  else
    ViewModel = 0;
  if ( visible )
  {
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    if ( this->m_pEntity != 0 )
      CBaseEntity::DispatchUpdateTransmitState(this);
    if ( ViewModel != 0 )
      (*(ViewModel->_vptr_IHandleEntity + 258))(ViewModel, 32);
  }
  else
  {
    CBaseEntity::AddEffects(this, 32);
    if ( ViewModel != 0 )
      (*(ViewModel->_vptr_IHandleEntity + 257))(ViewModel, 32);
  }
}


// CBaseCombatWeapon::IsWeaponVisible  (line 1484, @0x0000000002153440, libserver.so)  // inlines: ToBasePlayer
// calls: CBaseCombatWeapon::GetOwner, CBasePlayer::GetViewModel
bool __fastcall CBaseCombatWeapon::IsWeaponVisible(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  CBasePlayer *v3; // rbx
  CBaseViewModel *ViewModel; // rax

  Owner = CBaseCombatWeapon::GetOwner(this);
  v3 = Owner;
  if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
  {
    ViewModel = CBasePlayer::GetViewModel(v3, this->m_nViewModelIndex.m_Value);
    if ( ViewModel != 0 )
      LOBYTE(ViewModel) = ((ViewModel->m_fEffects.m_Value >> 5) ^ 1) & 1;
  }
  else
  {
    LOBYTE(ViewModel) = 0;
  }
  return ViewModel;
}


// CBaseCombatWeapon::ReloadOrSwitchWeapons  (line 1508, @0x00000000021541a0, libserver.so)  // inlines: NetworkStateChanged, Set, ToBasePlayer, curtime, operator=<double>
// calls: CBaseCombatWeapon::GetOwner, CGlobalVarsBase::curtime
bool __fastcall CBaseCombatWeapon::ReloadOrSwitchWeapons(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  CBaseCombatCharacter *v3; // r12
  CBaseCombatCharacter *v4; // r13
  int (**vptr_IHandleEntity)(...); // rax
  bool result; // al
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  FnGlobalVarsWarningFunc v12; // rax
  CGlobalVars *v13; // r12
  FnGlobalVarsWarningFunc v14; // rdx
  float v15; // xmm0_4
  float v16; // [rsp+8h] [rbp-28h]
  bool v17; // [rsp+Ch] [rbp-24h]
  bool v18; // [rsp+Ch] [rbp-24h]

  Owner = CBaseCombatWeapon::GetOwner(this);
  v3 = Owner;
  if ( Owner != 0 )
  {
    v4 = 0;
    if ( (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
      v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_bFireOnEmpty = 0;
  if ( vptr_IHandleEntity[276](this) == 0 )
  {
    m_flCurrentTime = 0.0;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    if ( m_flCurrentTime > this->m_flNextPrimaryAttack.m_Value )
    {
      v10 = gpGlobals;
      v11 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v12 = gpGlobals->m_pfnWarningFunc;
          if ( v12 != 0 )
            (v12)(1, 0.0);
        }
        v11 = v10->m_flCurrentTime;
      }
      if ( v11 > this->m_flNextSecondaryAttack.m_Value )
      {
        if ( ((*(this->_vptr_IHandleEntity + 344))(this) & 4) != 0 )
          return 0;
        result = (*(g_pGameRules->_vptr_CGameRules + 32))(g_pGameRules, v4, this);
        if ( !result )
          return 0;
        v13 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v14 = gpGlobals->m_pfnWarningFunc;
            if ( v14 != 0 )
            {
              v17 = result;
              v14(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              result = v17;
            }
          }
          v15 = v13->m_flCurrentTime + 0.3;
        }
        else
        {
          v15 = 0.30000001;
        }
        if ( v15 != this->m_flNextPrimaryAttack.m_Value )
        {
          v16 = v15;
          v18 = result;
          (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_flNextPrimaryAttack.m_Value = v16;
          return v18;
        }
        return result;
      }
    }
  }
  if ( (*(this->_vptr_IHandleEntity + 351))(this) != 0
    && this->m_iClip1.m_Value == 0
    && ((*(this->_vptr_IHandleEntity + 344))(this) & 2) == 0
    && CGlobalVarsBase::curtime(gpGlobals, 0) > this->m_flNextPrimaryAttack.m_Value
    && CGlobalVarsBase::curtime(gpGlobals, 0) > this->m_flNextSecondaryAttack.m_Value )
  {
    return (*(this->_vptr_IHandleEntity + 299))(this);
  }
  return 0;
}


// CBaseCombatWeapon::CanSwitchAwayFrom  (line 1547, @0x000000000213d3b0, libserver.so)
bool __fastcall CBaseCombatWeapon::CanSwitchAwayFrom(CBaseCombatWeapon *const this)
{
  return 1;
}


// CBaseCombatWeapon::DefaultDeploy  (line 1560, @0x0000000002156390, libserver.so)  // inlines: NetworkStateChanged, Set, SetAnimationExtension, SetNextAttack, ToBasePlayer, V_strncpy<long unsigned int>, curtime, operator=<float>
// calls: CBaseCombatWeapon::GetOwner, CBaseAnimating::SequenceDuration, CBaseCombatWeapon::QueueAttack, CBaseEntity::ThinkSet, _V_strncpy
bool __fastcall CBaseCombatWeapon::DefaultDeploy(
        CBaseCombatWeapon *const this,
        char *szViewModel,
        char *szWeaponModel,
        Activity iActivity,
        char *szAnimExt)
{
  char v8; // r12
  CBaseCombatCharacter *Owner; // r13
  CGlobalVars *v10; // r13
  FnGlobalVarsWarningFunc v11; // rax
  float v12; // xmm0_4
  CGlobalVars *v13; // r13
  FnGlobalVarsWarningFunc v14; // rax
  float v15; // xmm0_4
  CGlobalVars *v16; // r12
  void (__fastcall *v17)(__int64); // rax
  float v18; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CGlobalVars *v21; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v23; // xmm0_4
  float v24; // [rsp+Ch] [rbp-34h]
  float v25; // [rsp+Ch] [rbp-34h]
  float m_flCurrentTime; // [rsp+Ch] [rbp-34h]
  float v27; // [rsp+Ch] [rbp-34h]
  float v28; // [rsp+Ch] [rbp-34h]
  float v29; // [rsp+Ch] [rbp-34h]

  v8 = (*(this->_vptr_IHandleEntity + 276))(this, szViewModel, szWeaponModel);
  if ( v8 != 0 || (*(this->_vptr_IHandleEntity + 343))(this) == 0 )
  {
    Owner = CBaseCombatWeapon::GetOwner(this);
    if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
    {
      v8 = (*(Owner->_vptr_IHandleEntity + 139))(Owner);
      if ( v8 == 0 )
        return v8;
      _V_strncpy(&Owner[1].m_vecAngVelocity.z + 1, szAnimExt, 32);
      (*(this->_vptr_IHandleEntity + 272))(this);
      (*(this->_vptr_IHandleEntity + 270))(this, iActivity);
      v21 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        m_flCurrentTime = v21->m_flCurrentTime;
      }
      else
      {
        m_flCurrentTime = 0.0;
      }
      v23 = CBaseAnimating::SequenceDuration(this) + m_flCurrentTime;
      if ( v23 != Owner->m_flNextAttack.m_Value )
      {
        v27 = v23;
        (*(Owner->_vptr_IHandleEntity + 22))(Owner, 1356, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        Owner->m_flNextAttack.m_Value = v27;
      }
    }
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v11 = gpGlobals->m_pfnWarningFunc;
        if ( v11 != 0 )
          v11(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v24 = v10->m_flCurrentTime;
    }
    else
    {
      v24 = 0.0;
    }
    v12 = CBaseAnimating::SequenceDuration(this) + v24;
    if ( v12 != this->m_flNextPrimaryAttack.m_Value )
    {
      v29 = v12;
      (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flNextPrimaryAttack.m_Value = v29;
    }
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v14 = gpGlobals->m_pfnWarningFunc;
        if ( v14 != 0 )
          v14(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v25 = v13->m_flCurrentTime;
    }
    else
    {
      v25 = 0.0;
    }
    v15 = CBaseAnimating::SequenceDuration(this) + v25;
    if ( v15 != this->m_flNextSecondaryAttack.m_Value )
    {
      v28 = v15;
      (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flNextSecondaryAttack.m_Value = v28;
    }
    v16 = gpGlobals;
    this->m_bAltFireHudHintDisplayed = 0;
    this->m_flHudHintMinDisplayTime = 0.0;
    this->m_bReloadHudHintDisplayed = 0;
    if ( v16 != 0 )
    {
      if ( !v16->m_bEnableAssertions && !v16->m_bInSimulation )
      {
        v17 = v16->m_pfnWarningFunc;
        if ( v17 != 0 )
          v17(1);
      }
      v18 = v16->m_flCurrentTime + 5.0;
    }
    else
    {
      v18 = 5.0;
    }
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_flHudHintPollTime = v18;
    v8 = 1;
    vptr_IHandleEntity[285](this, 1);
    CBaseCombatWeapon::QueueAttack(this, 0);
    CBaseEntity::ThinkSet(this, 0LL, -1.0, -713055941, 0);
  }
  return v8;
}


// CBaseCombatWeapon::Deploy  (line 1611, @0x000000000213d3c0, libserver.so)
bool __fastcall CBaseCombatWeapon::Deploy(CBaseCombatWeapon *const this)
{
  bool (__fastcall *v2)(CBaseCombatWeapon *const, __int64, __int64, _QWORD, __int64); // r15
  __int64 v3; // r14
  unsigned int v4; // r13d
  __int64 v5; // r12
  __int64 v6; // rax

  v2 = *(this->_vptr_IHandleEntity + 280);
  v3 = (*(this->_vptr_IHandleEntity + 336))(this);
  v4 = (*(this->_vptr_IHandleEntity + 306))(this);
  v5 = (*(this->_vptr_IHandleEntity + 335))(this);
  v6 = (*(this->_vptr_IHandleEntity + 334))(this, 0);
  return v2(this, v6, v5, v4, v3);
}


// CBaseCombatWeapon::GetDrawActivity  (line 1616, @0x000000000213d440, libserver.so)
Activity __fastcall CBaseCombatWeapon::GetDrawActivity(CBaseCombatWeapon *const this)
{
  return 183;
}


// CBaseCombatWeapon::Holster  (line 1624, @0x00000000021566f0, libserver.so)  // inlines: NetworkStateChanged, Set, SetNextAttack, curtime, operator=<bool>, operator=<float>
// calls: CBaseCombatWeapon::QueueAttack, CBaseEntity::ThinkSet, CBaseCombatWeapon::GetOwner, CBaseAnimating::SequenceDuration
bool __fastcall CBaseCombatWeapon::Holster(CBaseCombatWeapon *const this, CBaseCombatWeapon *pSwitchingTo)
{
  float v3; // xmm0_4
  CBaseCombatCharacter *Owner; // rax
  double v5; // xmm1_8
  double v6; // xmm0_8
  float *v7; // r12
  CGlobalVars *v8; // r13
  double v9; // xmm0_8
  bool v10; // zf
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v13; // r12
  FnGlobalVarsWarningFunc v14; // rax
  float v15; // xmm1_4
  CGlobalVars *v16; // r12
  FnGlobalVarsWarningFunc v17; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int v19; // [rsp+8h] [rbp-28h]
  float flSequenceDuration; // [rsp+Ch] [rbp-24h]
  int flSequenceDurationb; // [rsp+Ch] [rbp-24h]
  unsigned int flSequenceDurationa; // [rsp+Ch] [rbp-24h]

  if ( this->m_bInReload.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1337, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInReload.m_Value = 0;
  }
  CBaseCombatWeapon::QueueAttack(this, 0);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  (*(this->_vptr_IHandleEntity + 270))(this, 184);
  v3 = 0.0;
  if ( this->m_Activity == 184 )
    v3 = CBaseAnimating::SequenceDuration(this);
  flSequenceDuration = v3;
  Owner = CBaseCombatWeapon::GetOwner(this);
  *&v6 = LODWORD(flSequenceDuration);
  v7 = Owner;
  if ( Owner != 0 )
  {
    v5 = 0.0;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          (m_pfnWarningFunc)(1, flSequenceDuration, 0.0);
          *&v6 = LODWORD(flSequenceDuration);
        }
      }
      *&v5 = LODWORD(v8->m_flCurrentTime);
    }
    *&v5 = *&v5 + *&v6;
    if ( *&v5 != v7[339] )
    {
      v19 = LODWORD(v5);
      flSequenceDurationa = LODWORD(v6);
      (*(*v7 + 176LL))(v7, 1356, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v5 = v19;
      *&v6 = flSequenceDurationa;
      *(v7 + 339) = v19;
    }
  }
  if ( *&v6 == 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 285))(this, 0, v6, v5, 0.0);
    *&v9 = LODWORD(this->m_flHudHintMinDisplayTime);
    v10 = *&v9 == 0.0;
  }
  else
  {
    m_flCurrentTime = 0.0;
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v14 = gpGlobals->m_pfnWarningFunc;
        if ( v14 != 0 )
        {
          flSequenceDurationb = LODWORD(v6);
          (v14)(1, v6, 0.0, 0.0);
          LODWORD(v6) = flSequenceDurationb;
        }
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    CBaseEntity::ThinkSet(this, 0xC51uLL, *&v6 + m_flCurrentTime, -713055941, 0);
    *&v9 = LODWORD(this->m_flHudHintMinDisplayTime);
    v10 = *&v9 == 0.0;
  }
  if ( v10 )
    return 1;
  v15 = 0.0;
  v16 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v17 = gpGlobals->m_pfnWarningFunc;
      if ( v17 != 0 )
      {
        (v17)(1, v9, 0.0);
        *&v9 = this->m_flHudHintMinDisplayTime;
      }
    }
    v15 = v16->m_flCurrentTime;
  }
  if ( *&v9 <= v15 )
    return 1;
  if ( this->m_bAltFireHudHintDisplayed )
    (*(this->_vptr_IHandleEntity + 265))(this);
  if ( !this->m_bReloadHudHintDisplayed )
    return 1;
  (*(this->_vptr_IHandleEntity + 268))(this);
  return 1;
}


// CBaseCombatWeapon::InputHideWeapon  (line 1692, @0x00000000021534a0, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
// calls: CBaseCombatWeapon::GetOwner
void __fastcall CBaseCombatWeapon::InputHideWeapon(CBaseCombatWeapon *const this, inputdata_t *const inputdata)
{
  CBaseCombatCharacter *Owner; // rax
  uint32 v4; // ecx
  unsigned __int16 v5; // dx
  int v6; // esi
  __int16 v7; // ax
  uint32 v8; // edx
  CBaseCombatWeapon *m_pInstance; // rcx
  int v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  __int16 v13; // [rsp+0h] [rbp-20h]

  if ( CBaseCombatWeapon::GetOwner(this) != 0 )
  {
    Owner = CBaseCombatWeapon::GetOwner(this);
    v4 = Owner->m_hActiveWeapon.m_Value.m_Index >> 15;
    if ( Owner->m_hActiveWeapon.m_Value.m_Index == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = Owner->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      v6 = v5;
    }
    v7 = v5 | v13 & 0x8000;
    v8 = v4;
    m_pInstance = 0;
    v10 = (v8 << 15) | v7 & 0x7FFF;
    if ( (v10 + 2) > 1 )
    {
      v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v11 != 0 )
      {
        v12 = &v11[v6 & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
          m_pInstance = v12->m_pInstance;
      }
    }
    if ( this == m_pInstance )
      (*(this->_vptr_IHandleEntity + 285))(this, 0);
  }
}


// CBaseCombatWeapon::HideThink  (line 1705, @0x0000000002153590, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
// calls: CBaseCombatWeapon::GetOwner
void __fastcall CBaseCombatWeapon::HideThink(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  uint32 v3; // ecx
  unsigned __int16 v4; // dx
  int v5; // esi
  __int16 v6; // ax
  uint32 v7; // edx
  CBaseCombatWeapon *m_pInstance; // rcx
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  __int16 v12; // [rsp+0h] [rbp-20h]

  if ( CBaseCombatWeapon::GetOwner(this) != 0 )
  {
    Owner = CBaseCombatWeapon::GetOwner(this);
    v3 = Owner->m_hActiveWeapon.m_Value.m_Index >> 15;
    if ( Owner->m_hActiveWeapon.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = Owner->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = v4 | v12 & 0x8000;
    v7 = v3;
    m_pInstance = 0;
    v9 = (v7 << 15) | v6 & 0x7FFF;
    if ( (v9 + 2) > 1 )
    {
      v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v10 != 0 )
      {
        v11 = &v10[v5 & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
          m_pInstance = v11->m_pInstance;
      }
    }
    if ( this == m_pInstance )
      (*(this->_vptr_IHandleEntity + 285))(this, 0);
  }
}


// CBaseCombatWeapon::ItemPreFrame  (line 1717, @0x00000000021576e0, libserver.so)
// calls: CBaseCombatWeapon::MaintainIdealActivity
void __fastcall CBaseCombatWeapon::ItemPreFrame(CBaseCombatWeapon *const this)
{
  CBaseCombatWeapon::MaintainIdealActivity(this);
}


// CBaseCombatWeapon::QueueAttack  (line 1756, @0x00000000021562c0, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<float>, operator=<int>
// callers: CBaseCombatWeapon::DefaultDeploy, CBaseCombatWeapon::Holster, CBaseCombatWeapon::ItemPostFrame, CBaseCombatWeapon::ItemBusyFrame
void __fastcall CBaseCombatWeapon::QueueAttack(CBaseCombatWeapon *const this, int button)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v7; // [rsp+Ch] [rbp-14h]

  if ( button != this->m_nQueuedAttack.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nQueuedAttack.m_Value = button;
  }
  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( m_flCurrentTime != this->m_flTimeAttackQueued.m_Value )
  {
    v7 = m_flCurrentTime;
    (*(this->_vptr_IHandleEntity + 22))(this, 1244, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flTimeAttackQueued.m_Value = v7;
  }
}


// CBaseCombatWeapon::ItemPostFrame  (line 1765, @0x00000000021569b0, libserver.so)  // inlines: GetAmmoCount, NetworkStateChanged, Set, ToBasePlayer, UsesSecondaryAmmo, curtime, operator< <int>, operator=<double>, operator=<float>, operator=<int>
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatCharacter::GetAmmoCount, CBaseCombatWeapon::QueueAttack, CGlobalVarsBase::curtime, CBaseCombatWeapon::NetworkVar_m_flNextSecondaryAttack::NetworkStateChanged
void __fastcall CBaseCombatWeapon::ItemPostFrame(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  CBaseCombatCharacter *v3; // r12
  float v4; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CGlobalVars *v6; // r13
  float m_flCurrentTime; // xmm1_4
  float v8; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 m_Value; // r13
  __int64 m_pDesc; // rax
  CGlobalVars *v12; // r13
  float v13; // xmm0_4
  FnGlobalVarsWarningFunc v14; // rax
  int v15; // esi
  CGlobalVars *v16; // r13
  float m_flNextEmptySoundTime; // xmm0_4
  FnGlobalVarsWarningFunc v18; // rax
  float v19; // xmm1_4
  CGlobalVars *v20; // r13
  float v21; // xmm0_4
  FnGlobalVarsWarningFunc v22; // rax
  CGlobalVars *v23; // r13
  float v24; // xmm0_4
  FnGlobalVarsWarningFunc v25; // rax
  CGlobalVars *v26; // r12
  FnGlobalVarsWarningFunc v27; // rax
  float v28; // xmm0_4
  float v29; // xmm0_4
  bool v30; // zf
  int v31; // esi
  CGlobalVars *v32; // r12
  FnGlobalVarsWarningFunc v33; // rax
  float v34; // xmm0_4
  int v35; // r13d
  float v36; // [rsp+Ch] [rbp-24h]
  float v37; // [rsp+Ch] [rbp-24h]
  float v38; // [rsp+Ch] [rbp-24h]
  float v39; // [rsp+Ch] [rbp-24h]
  float v40; // [rsp+Ch] [rbp-24h]
  float v41; // [rsp+Ch] [rbp-24h]

  Owner = CBaseCombatWeapon::GetOwner(this);
  v3 = Owner;
  if ( Owner == 0 || (*(Owner->_vptr_IHandleEntity + 140))(Owner) == 0 )
    return;
  (*(this->_vptr_IHandleEntity + 272))(this);
  if ( (v3[1].m_OnUser3.m_pDesc & 1) != 0 )
    v4 = this->m_fFireDuration + gpGlobals->frametime;
  else
    v4 = 0.0;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_fFireDuration = v4;
  if ( vptr_IHandleEntity[351](this) != 0 )
    (*(this->_vptr_IHandleEntity + 296))(this);
  v6 = gpGlobals;
  m_flCurrentTime = 0.0;
  v8 = this->m_flTimeAttackQueued.m_Value + 0.5;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v36 = this->m_flTimeAttackQueued.m_Value + 0.5;
        (m_pfnWarningFunc)(1, v8, 0.0);
        v8 = v36;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( m_flCurrentTime > v8 )
  {
    m_Value = 0;
    if ( this->m_nQueuedAttack.m_Value != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nQueuedAttack.m_Value = 0;
    }
  }
  else
  {
    m_Value = this->m_nQueuedAttack.m_Value;
  }
  m_pDesc = v3[1].m_OnUser3.m_pDesc | m_Value;
  v3[1].m_OnUser3.m_pDesc = m_pDesc;
  if ( (m_pDesc & 0x800) == 0 )
  {
LABEL_17:
    if ( (m_pDesc & 1) == 0 )
      goto LABEL_18;
LABEL_51:
    v20 = gpGlobals;
    v21 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v22 = gpGlobals->m_pfnWarningFunc;
        if ( v22 != 0 )
          (v22)(1, 0.0);
      }
      v21 = v20->m_flCurrentTime;
    }
    if ( v21 < this->m_flNextPrimaryAttack.m_Value )
    {
LABEL_18:
      if ( (BYTE1(v3[1].m_OnUser3.m_pDesc) & 0x20) == 0 )
      {
LABEL_19:
        if ( (v3[1].m_OnUser3.m_pDesc & 0x2801) == 0
          && !this->m_bInReload.m_Value
          && (*(this->_vptr_IHandleEntity + 287))(this) == 0 )
        {
          (*(this->_vptr_IHandleEntity + 293))(this);
        }
        return;
      }
LABEL_40:
      if ( (*(this->_vptr_IHandleEntity + 351))(this) != 0 && !this->m_bInReload.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 299))(this);
        this->m_fFireDuration = 0.0;
      }
      goto LABEL_19;
    }
    if ( (*(this->_vptr_IHandleEntity + 353))(this) == 0
      && ((*(this->_vptr_IHandleEntity + 351))(this) != 0 && this->m_iClip1.m_Value <= 0
       || (*(this->_vptr_IHandleEntity + 351))(this) == 0
       && ((v31 = this->m_iPrimaryAmmoType.m_Value) == -1 || CBaseCombatCharacter::GetAmmoCount(v3, v31) <= 0)) )
    {
      (*(this->_vptr_IHandleEntity + 294))(this);
      goto LABEL_18;
    }
    if ( v3->m_nWaterLevel.m_Value == 3 && !this->m_bFiresUnderwater )
    {
      (*(this->_vptr_IHandleEntity + 319))(this, 0, 0.0);
      v32 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v33 = gpGlobals->m_pfnWarningFunc;
          if ( v33 != 0 )
            v33(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v34 = v32->m_flCurrentTime + 0.2;
      }
      else
      {
        v34 = 0.2;
      }
      if ( v34 != this->m_flNextPrimaryAttack.m_Value )
      {
        v41 = v34;
        (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flNextPrimaryAttack.m_Value = v41;
      }
      CBaseCombatWeapon::QueueAttack(this, 0);
      return;
    }
    if ( (v3[1].m_OnUser4._vptr_CEntityIOOutput & 1) != 0 || (BYTE1(v3[1].m_OnUser4.m_pConnections) & 8) != 0 )
    {
      v23 = gpGlobals;
      v24 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v25 = gpGlobals->m_pfnWarningFunc;
          if ( v25 != 0 )
            (v25)(1, 0.0);
        }
        v24 = v23->m_flCurrentTime;
      }
      if ( v24 != this->m_flNextPrimaryAttack.m_Value )
      {
        v40 = v24;
        (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flNextPrimaryAttack.m_Value = v40;
      }
    }
    (*(this->_vptr_IHandleEntity + 300))(this);
LABEL_39:
    CBaseCombatWeapon::QueueAttack(this, 0);
    if ( (BYTE1(v3[1].m_OnUser3.m_pDesc) & 0x20) == 0 )
      goto LABEL_19;
    goto LABEL_40;
  }
  v12 = gpGlobals;
  v13 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v14 = gpGlobals->m_pfnWarningFunc;
      if ( v14 != 0 )
        (v14)(1, 0.0);
    }
    v13 = v12->m_flCurrentTime;
  }
  if ( v13 < this->m_flNextSecondaryAttack.m_Value )
  {
LABEL_50:
    if ( (v3[1].m_OnUser3.m_pDesc & 1) == 0 )
      goto LABEL_18;
    goto LABEL_51;
  }
  v15 = this->m_iSecondaryAmmoType.m_Value;
  if ( v15 >= 0 && CBaseCombatCharacter::GetAmmoCount(v3, v15) <= 0 )
  {
    v16 = gpGlobals;
    m_flNextEmptySoundTime = this->m_flNextEmptySoundTime;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v18 = gpGlobals->m_pfnWarningFunc;
        if ( v18 != 0 )
        {
          v37 = this->m_flNextEmptySoundTime;
          v18(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          m_flNextEmptySoundTime = v37;
        }
      }
      v19 = v16->m_flCurrentTime;
    }
    else
    {
      v19 = 0.0;
    }
    if ( v19 > m_flNextEmptySoundTime )
    {
      (*(this->_vptr_IHandleEntity + 319))(this, 0, 0.0);
      v29 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.5;
      v30 = v29 == this->m_flNextSecondaryAttack.m_Value;
      this->m_flNextEmptySoundTime = v29;
      if ( !v30 )
      {
        v39 = v29;
        CBaseCombatWeapon::NetworkVar_m_flNextSecondaryAttack::NetworkStateChanged(
          &this->m_flNextSecondaryAttack,
          -1,
          -1);
        this->m_flNextSecondaryAttack.m_Value = v39;
        m_pDesc = v3[1].m_OnUser3.m_pDesc;
        goto LABEL_17;
      }
    }
    goto LABEL_50;
  }
  if ( v3->m_nWaterLevel.m_Value != 3 || this->m_bAltFiresUnderwater )
  {
    (*(this->_vptr_IHandleEntity + 301))(this);
    if ( (*(this->_vptr_IHandleEntity + 352))(this) != 0 && this->m_iClip2.m_Value <= 0 )
    {
      (*(v3->_vptr_IHandleEntity + 299))(v3, 1, this->m_iSecondaryAmmoType.m_Value);
      v35 = this->m_iClip2.m_Value + 1;
      (*(this->_vptr_IHandleEntity + 22))(this, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iClip2.m_Value = v35;
    }
    goto LABEL_39;
  }
  (*(this->_vptr_IHandleEntity + 319))(this, 0, 0.0);
  v26 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v27 = gpGlobals->m_pfnWarningFunc;
      if ( v27 != 0 )
        v27(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v28 = v26->m_flCurrentTime + 0.2;
  }
  else
  {
    v28 = 0.2;
  }
  if ( v28 != this->m_flNextPrimaryAttack.m_Value )
  {
    v38 = v28;
    (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNextPrimaryAttack.m_Value = v38;
  }
}


// CBaseCombatWeapon::HandleFireOnEmpty  (line 1903, @0x0000000002147340, libserver.so)  // inlines: curtime
void __fastcall CBaseCombatWeapon::HandleFireOnEmpty(CBaseCombatWeapon *const this)
{
  float m_flCurrentTime; // xmm1_4
  float m_flNextEmptySoundTime; // xmm0_4
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc v7; // rax
  float v8; // xmm0_4
  float v9; // [rsp+Ch] [rbp-24h]

  if ( this->m_bFireOnEmpty )
  {
    (*(this->_vptr_IHandleEntity + 287))(this);
    this->m_fFireDuration = 0.0;
  }
  else
  {
    m_flCurrentTime = 0.0;
    m_flNextEmptySoundTime = this->m_flNextEmptySoundTime;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v9 = this->m_flNextEmptySoundTime;
          (m_pfnWarningFunc)(1, m_flNextEmptySoundTime, 0.0);
          m_flNextEmptySoundTime = v9;
        }
      }
      m_flCurrentTime = v4->m_flCurrentTime;
    }
    if ( m_flCurrentTime > m_flNextEmptySoundTime )
    {
      (*(this->_vptr_IHandleEntity + 319))(this, 0, 0.0);
      v6 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v7 = gpGlobals->m_pfnWarningFunc;
          if ( v7 != 0 )
            v7(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v8 = v6->m_flCurrentTime + 0.5;
      }
      else
      {
        v8 = 0.5;
      }
      this->m_flNextEmptySoundTime = v8;
    }
    this->m_bFireOnEmpty = 1;
  }
}


// CBaseCombatWeapon::ItemBusyFrame  (line 1925, @0x00000000021570b0, libserver.so)  // inlines: NetworkStateChanged, Set, ToBasePlayer, curtime, operator=<int>
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatWeapon::QueueAttack
void __fastcall CBaseCombatWeapon::ItemBusyFrame(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  CBaseCombatCharacter *v3; // r13
  float v4; // xmm0_4
  CGlobalVars *v5; // r12
  float m_flCurrentTime; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool v8; // zf
  float v9; // [rsp+Ch] [rbp-24h]

  Owner = CBaseCombatWeapon::GetOwner(this);
  v3 = Owner;
  if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
  {
    v4 = this->m_flTimeAttackQueued.m_Value + 0.5;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v9 = this->m_flTimeAttackQueued.m_Value + 0.5;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v4 = v9;
        }
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    if ( m_flCurrentTime > v4 && this->m_nQueuedAttack.m_Value != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v8 = !this->m_bInReload.m_Value;
      this->m_nQueuedAttack.m_Value = 0;
      if ( v8 )
        return;
    }
    else if ( !this->m_bInReload.m_Value )
    {
      return;
    }
    if ( this->m_nQueuedAttack.m_Value == 0 && this->m_bReloadsSingly && (v3[1].m_OnUser3.m_pDesc & 0x801) != 0 )
      CBaseCombatWeapon::QueueAttack(this, v3[1].m_OnUser3.m_pDesc & 0x801);
  }
}


// CBaseCombatWeapon::GetBulletType  (line 1950, @0x000000000213d450, libserver.so)
int __fastcall CBaseCombatWeapon::GetBulletType(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::GetBulletSpread  (line 1960, @0x0000000002140810, libserver.so)  // inlines: Vector
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseCombatWeapon::GetBulletSpread(void)::cone, CBaseCombatWeapon::GetBulletSpread(void)::cone
const Vector *__fastcall CBaseCombatWeapon::GetBulletSpread(CBaseCombatWeapon *const this)
{
  if ( `guard variable for'CBaseCombatWeapon::GetBulletSpread(void)::cone != 0 )
    return &CBaseCombatWeapon::GetBulletSpread(void)::cone;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseCombatWeapon::GetBulletSpread(void)::cone) != 0 )
  {
    CBaseCombatWeapon::GetBulletSpread(void)::cone.x = 0.13053;
    CBaseCombatWeapon::GetBulletSpread(void)::cone.y = 0.13053;
    CBaseCombatWeapon::GetBulletSpread(void)::cone.z = 0.13053;
    __cxa_guard_release(&`guard variable for'CBaseCombatWeapon::GetBulletSpread(void)::cone);
  }
  return &CBaseCombatWeapon::GetBulletSpread(void)::cone;
}


// CBaseCombatWeapon::GetProficiencyValues  (line 1967, @0x000000000213d460, libserver.so)
// globals: CBaseCombatWeapon::GetProficiencyValues(void)::defaultWeaponProficiencyTable
const WeaponProficiencyInfo_t *__fastcall CBaseCombatWeapon::GetProficiencyValues(CBaseCombatWeapon *const this)
{
  return &CBaseCombatWeapon::GetProficiencyValues(void)::defaultWeaponProficiencyTable;
}


// CBaseCombatWeapon::GetFireRate  (line 1987, @0x000000000213d470, libserver.so)
float __fastcall CBaseCombatWeapon::GetFireRate(CBaseCombatWeapon *const this)
{
  return 0.0;
}


// CBaseCombatWeapon::WeaponSound  (line 1997, @0x0000000002153680, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, entindex, ~CPASAttenuationFilter, ~CPASFilter
// calls: CBaseCombatWeapon::GetOwner, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CBaseEntity::GetAbsOrigin, CSoundEnt::InsertSound, CRecipientFilter::~CRecipientFilter, CRecipientFilter::UsePredictionRules, __stack_chk_fail, _Unwind_Resume
// globals: CBaseEntity::m_pPredictionPlayer
void __fastcall CBaseCombatWeapon::WeaponSound(
        CBaseCombatWeapon *const this,
        WeaponSound_t sound_type,
        double a3,
        float soundtime)
{
  const char *v6; // rax
  const char *v7; // r12
  CBaseCombatCharacter *Owner; // r15
  vec_t v9; // xmm1_4
  double v10; // xmm0_8
  float v11; // xmm1_4
  CBaseCombatCharacter *v12; // rax
  CEntityIndex v13; // eax
  CBaseCombatCharacter *v14; // r12
  CBaseCombatCharacter *v15; // rax
  const Vector *AbsOrigin; // rax
  vec_t v17; // xmm1_4
  double v18; // xmm0_8
  float v19; // xmm1_4
  CEntityIndex v20; // eax
  float soundtimea; // [rsp+Ch] [rbp-184h]
  Vector origin; // [rsp+10h] [rbp-180h] BYREF
  CPASAttenuationFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v24; // [rsp+158h] [rbp-38h]

  soundtimea = *&a3;
  v24 = __readfsqword(0x28u);
  v6 = (*(this->_vptr_IHandleEntity + 349))(this, a3, soundtime);
  v7 = v6;
  if ( v6 != 0 && *v6 != 0 )
  {
    if ( CBaseCombatWeapon::GetOwner(this) != 0 )
    {
      Owner = CBaseCombatWeapon::GetOwner(this);
      *&origin.x = (*(Owner->_vptr_IHandleEntity + 186))(Owner);
      origin.z = v9;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      v10 = (*(Owner->_vptr_IHandleEntity + 186))(Owner);
      origin.z = v11;
      *&origin.x = v10;
      CPASAttenuationFilter::Filter(&filter, &origin, 0.22222222, v11);
      if ( (*(this->_vptr_IHandleEntity + 251))(this) != 0 && CBaseEntity::m_pPredictionPlayer != 0 )
        CRecipientFilter::UsePredictionRules(&filter);
      v12 = CBaseCombatWeapon::GetOwner(this);
      v13.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
      CBaseEntity::EmitSound(&filter, v13, v7, 0, soundtimea, 0);
      if ( sound_type == WeaponSound_t::WEAPON_SOUND_EMPTY )
      {
        v14 = CBaseCombatWeapon::GetOwner(this);
        v15 = CBaseCombatWeapon::GetOwner(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
        CSoundEnt::InsertSound(1, AbsOrigin, 500, 0.2, v14, 0, 0);
      }
    }
    else
    {
      *&origin.x = (*(this->_vptr_IHandleEntity + 186))(this);
      origin.z = v17;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      v18 = (*(this->_vptr_IHandleEntity + 186))(this);
      origin.z = v19;
      *&origin.x = v18;
      CPASAttenuationFilter::Filter(&filter, &origin, 0.22222222, v19);
      if ( (*(this->_vptr_IHandleEntity + 251))(this) != 0 && CBaseEntity::m_pPredictionPlayer != 0 )
        CRecipientFilter::UsePredictionRules(&filter);
      v20.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CBaseEntity::EmitSound(&filter, v20, v7, 0, soundtimea, 0);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CBaseCombatWeapon::GetReloadDurationModifier  (line 2082, @0x000000000213d480, libserver.so)
float __fastcall CBaseCombatWeapon::GetReloadDurationModifier(CBaseCombatWeapon *const this)
{
  return 1.0;
}


// CBaseCombatWeapon::GetDeployDurationModifier  (line 2090, @0x000000000213d490, libserver.so)
float __fastcall CBaseCombatWeapon::GetDeployDurationModifier(CBaseCombatWeapon *const this)
{
  return 1.0;
}


// CBaseCombatWeapon::DefaultReload  (line 2098, @0x00000000021571e0, libserver.so)  // inlines: GetAmmoCount, NetworkStateChanged, Set, SetNextAttack, SetPlaybackRate, ToBasePlayer, curtime, operator=<bool>, operator=<float>
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatCharacter::GetAmmoCount, CBaseAnimating::SequenceDuration, CBaseAnimating::GetBaseAnimatingController, CBasePlayer::GetViewModel, CBaseViewModel::GetViewModelSequenceDurationForLayer
// callers: CBaseCombatWeapon::Reload
bool __fastcall CBaseCombatWeapon::DefaultReload(
        CBaseCombatWeapon *const this,
        int iClipSize1,
        int iClipSize2,
        Activity iActivity)
{
  CBaseCombatCharacter *Owner; // rax
  const CBaseCombatCharacter *v9; // r12
  int m_Value; // esi
  int v11; // esi
  int AmmoCount; // eax
  int v13; // edx
  int v14; // esi
  int v15; // eax
  bool v16; // r14
  int v18; // esi
  int v19; // eax
  int v20; // edx
  int v21; // esi
  int v22; // eax
  float ViewModelSequenceDurationForLayer; // xmm2_4
  CGlobalVars *v24; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v26; // xmm0_8
  CBaseAnimatingController *BaseAnimatingController; // rax
  float v28; // xmm1_4
  float v29; // xmm0_4
  CBasePlayer *v30; // r13
  CBaseViewModel *ViewModel; // rdi
  float flSequenceEndTimea; // [rsp+8h] [rbp-38h]
  float flSequenceEndTime; // [rsp+8h] [rbp-38h]
  int flDurationa; // [rsp+Ch] [rbp-34h]
  bool flDurationb; // [rsp+Ch] [rbp-34h]
  int flDurationc; // [rsp+Ch] [rbp-34h]
  float flDurationd; // [rsp+Ch] [rbp-34h]
  float flDuration; // [rsp+Ch] [rbp-34h]
  float flDuratione; // [rsp+Ch] [rbp-34h]
  float flDurationg; // [rsp+Ch] [rbp-34h]
  float flDurationf; // [rsp+Ch] [rbp-34h]

  Owner = CBaseCombatWeapon::GetOwner(this);
  v9 = Owner;
  if ( Owner == 0 )
    return 0;
  m_Value = this->m_iPrimaryAmmoType.m_Value;
  if ( m_Value == -1 || CBaseCombatCharacter::GetAmmoCount(Owner, m_Value) <= 0 )
    return 0;
  if ( (*(this->_vptr_IHandleEntity + 351))(this) == 0 )
    goto LABEL_16;
  v11 = this->m_iPrimaryAmmoType.m_Value;
  AmmoCount = 0;
  v13 = iClipSize1 - this->m_iClip1.m_Value;
  if ( v11 != -1 )
  {
    flDurationa = iClipSize1 - this->m_iClip1.m_Value;
    AmmoCount = CBaseCombatCharacter::GetAmmoCount(v9, v11);
    v13 = flDurationa;
  }
  if ( v13 >= AmmoCount )
  {
    v14 = this->m_iPrimaryAmmoType.m_Value;
    if ( v14 != -1 )
    {
      v15 = CBaseCombatCharacter::GetAmmoCount(v9, v14);
      goto LABEL_10;
    }
LABEL_16:
    v16 = 0;
    if ( (*(this->_vptr_IHandleEntity + 352))(this) == 0 )
      goto LABEL_11;
    goto LABEL_17;
  }
  v15 = iClipSize1 - this->m_iClip1.m_Value;
LABEL_10:
  v16 = v15 != 0;
  if ( (*(this->_vptr_IHandleEntity + 352))(this) == 0 )
    goto LABEL_11;
LABEL_17:
  v18 = this->m_iSecondaryAmmoType.m_Value;
  v19 = 0;
  v20 = iClipSize2 - this->m_iClip2.m_Value;
  if ( v18 != -1 )
  {
    flDurationc = iClipSize2 - this->m_iClip2.m_Value;
    v19 = CBaseCombatCharacter::GetAmmoCount(v9, v18);
    v20 = flDurationc;
  }
  if ( v20 < v19 )
  {
    v22 = iClipSize2 - this->m_iClip2.m_Value;
LABEL_22:
    if ( v22 != 0 )
      goto LABEL_23;
    goto LABEL_11;
  }
  v21 = this->m_iSecondaryAmmoType.m_Value;
  if ( v21 != -1 )
  {
    v22 = CBaseCombatCharacter::GetAmmoCount(v9, v21);
    goto LABEL_22;
  }
LABEL_11:
  if ( !v16 )
  {
    if ( this->m_bOnlyPump.m_Value )
    {
      if ( !this->m_bInReload.m_Value )
      {
        flDurationb = this->m_bOnlyPump.m_Value;
        (*(this->_vptr_IHandleEntity + 22))(this, 1337, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bInReload.m_Value = 1;
        return flDurationb;
      }
      return 1;
    }
    return 0;
  }
LABEL_23:
  (*(this->_vptr_IHandleEntity + 270))(this, iActivity);
  if ( (*(v9->_vptr_IHandleEntity + 140))(v9) == 0 )
    goto LABEL_24;
  v30 = 0;
  if ( (*(v9->_vptr_IHandleEntity + 140))(v9) != 0 )
    v30 = v9;
  (*(v30->_vptr_IHandleEntity + 425))(v30, 7);
  ViewModel = CBasePlayer::GetViewModel(v30, this->m_nViewModelIndex.m_Value);
  if ( ViewModel != 0 )
    ViewModelSequenceDurationForLayer = CBaseViewModel::GetViewModelSequenceDurationForLayer(
                                          ViewModel,
                                          ViewmodelLayer_t::VIEWMODEL_FIRE_LAYER);
  else
LABEL_24:
    ViewModelSequenceDurationForLayer = CBaseAnimating::SequenceDuration(this);
  v24 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        flDurationd = ViewModelSequenceDurationForLayer;
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        ViewModelSequenceDurationForLayer = flDurationd;
      }
    }
    flDuration = v24->m_flCurrentTime;
  }
  else
  {
    flDuration = 0.0;
  }
  flSequenceEndTimea = ViewModelSequenceDurationForLayer;
  v26 = (*(this->_vptr_IHandleEntity + 375))(this);
  flSequenceEndTime = (*&v26 * flSequenceEndTimea) + flDuration;
  flDuratione = (*(this->_vptr_IHandleEntity + 375))(this);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0 / flDuratione);
  v28 = flSequenceEndTime;
  if ( flSequenceEndTime != v9->m_flNextAttack.m_Value )
  {
    (*(v9->_vptr_IHandleEntity + 22))(v9, 1356, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v28 = flSequenceEndTime;
    v9->m_flNextAttack.m_Value = flSequenceEndTime;
  }
  v29 = this->m_flNextSecondaryAttack.m_Value;
  if ( v28 != v29 )
  {
    flDurationf = v28;
    (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNextSecondaryAttack.m_Value = flDurationf;
    v29 = flDurationf;
  }
  if ( v29 != this->m_flNextPrimaryAttack.m_Value )
  {
    flDurationg = v29;
    (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNextPrimaryAttack.m_Value = flDurationg;
  }
  if ( !this->m_bInReload.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1337, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInReload.m_Value = 1;
  }
  return 1;
}


// CBaseCombatWeapon::Reload  (line 2175, @0x0000000002157600, libserver.so)
// calls: CBaseCombatWeapon::DefaultReload
bool __fastcall CBaseCombatWeapon::Reload(CBaseCombatWeapon *const this)
{
  Activity v2; // r13d
  int v3; // r12d
  int v4; // eax

  v2 = (*(this->_vptr_IHandleEntity + 307))(this);
  v3 = (*(this->_vptr_IHandleEntity + 338))(this);
  v4 = (*(this->_vptr_IHandleEntity + 337))(this);
  return CBaseCombatWeapon::DefaultReload(this, v4, v3, v2);
}


// CBaseCombatWeapon::GetReloadActivity  (line 2181, @0x000000000213d4a0, libserver.so)
Activity __fastcall CBaseCombatWeapon::GetReloadActivity(const CBaseCombatWeapon *const this)
{
  return 195;
}


// CBaseCombatWeapon::WeaponIdle  (line 2187, @0x00000000021405f0, libserver.so)
void __fastcall CBaseCombatWeapon::WeaponIdle(CBaseCombatWeapon *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 273))(this) != 0 )
    (*(this->_vptr_IHandleEntity + 270))(this, 185);
}


// CBaseCombatWeapon::GetPrimaryAttackActivity  (line 2198, @0x000000000213d4b0, libserver.so)
Activity __fastcall CBaseCombatWeapon::GetPrimaryAttackActivity(CBaseCombatWeapon *const this)
{
  return 193;
}


// CBaseCombatWeapon::GetSecondaryAttackActivity  (line 2204, @0x000000000213d4c0, libserver.so)
Activity __fastcall CBaseCombatWeapon::GetSecondaryAttackActivity(CBaseCombatWeapon *const this)
{
  return 194;
}


// CBaseCombatWeapon::AddViewKick  (line 2212, @0x000000000213d4d0, libserver.so)
void __fastcall CBaseCombatWeapon::AddViewKick(CBaseCombatWeapon *const this)
{
  ;
}


// CBaseCombatWeapon::GetDeathNoticeName  (line 2220, @0x000000000213d4e0, libserver.so)  // inlines: String, ToCStr
char *__fastcall CBaseCombatWeapon::GetDeathNoticeName(CBaseCombatWeapon *const this)
{
  char *result; // rax

  result = "";
  if ( this->m_iszName.u.m_Id != 0 )
    return this->m_iszName.u.m_Id;
  return result;
}


// CBaseCombatWeapon::CheckReload  (line 2232, @0x0000000002154400, libserver.so)  // inlines: GetAmmoCount, NetworkStateChanged, Set, SetNextAttack, ToBasePlayer, curtime, operator+=<int>, operator< <int>, operator=<bool>, operator=<float>
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatWeapon::NetworkVar_m_flNextSecondaryAttack::NetworkStateChanged, CBaseCombatCharacter::GetAmmoCount
void __fastcall CBaseCombatWeapon::CheckReload(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  const CBaseCombatCharacter *v3; // r12
  CGlobalVars *v4; // r14
  FnGlobalVarsWarningFunc v5; // rax
  float v6; // xmm0_4
  CGlobalVars *v7; // r12
  FnGlobalVarsWarningFunc v8; // rax
  float v9; // xmm0_4
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  FnGlobalVarsWarningFunc v12; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v14; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v16; // r12
  FnGlobalVarsWarningFunc v17; // rax
  float v18; // xmm0_4
  CGlobalVars *v19; // r12
  float v20; // xmm0_4
  FnGlobalVarsWarningFunc v21; // rax
  CGlobalVars *v22; // r14
  FnGlobalVarsWarningFunc v23; // rax
  float v24; // xmm0_4
  int m_Value; // esi
  int v26; // eax
  int v27; // r14d
  float v28; // [rsp+Ch] [rbp-24h]
  float v29; // [rsp+Ch] [rbp-24h]
  float v30; // [rsp+Ch] [rbp-24h]
  float v31; // [rsp+Ch] [rbp-24h]
  float v32; // [rsp+Ch] [rbp-24h]

  if ( !this->m_bReloadsSingly )
  {
    if ( this->m_bInReload.m_Value )
    {
      m_flCurrentTime = 0.0;
      v14 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        m_flCurrentTime = v14->m_flCurrentTime;
      }
      if ( m_flCurrentTime >= this->m_flNextPrimaryAttack.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 297))(this);
        v16 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v17 = gpGlobals->m_pfnWarningFunc;
            if ( v17 != 0 )
              v17(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          v18 = v16->m_flCurrentTime;
        }
        else
        {
          v18 = 0.0;
        }
        if ( v18 != this->m_flNextPrimaryAttack.m_Value )
        {
          v29 = v18;
          (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_flNextPrimaryAttack.m_Value = v29;
        }
        v19 = gpGlobals;
        v20 = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v21 = gpGlobals->m_pfnWarningFunc;
            if ( v21 != 0 )
              (v21)(1, 0.0);
          }
          v20 = v19->m_flCurrentTime;
        }
        if ( v20 != this->m_flNextSecondaryAttack.m_Value )
        {
          v30 = v20;
          (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_flNextSecondaryAttack.m_Value = v30;
        }
        if ( this->m_bInReload.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1337, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_bInReload.m_Value = 0;
        }
      }
    }
    return;
  }
  Owner = CBaseCombatWeapon::GetOwner(this);
  v3 = Owner;
  if ( Owner == 0 || (*(Owner->_vptr_IHandleEntity + 140))(Owner) == 0 || !this->m_bInReload.m_Value )
    return;
  if ( ((this->m_nQueuedAttack.m_Value | v3[1].m_OnUser3.m_pDesc) & 0x801) != 0 && this->m_iClip1.m_Value > 0 )
  {
    (*(this->_vptr_IHandleEntity + 298))(this);
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v5 = gpGlobals->m_pfnWarningFunc;
        if ( v5 != 0 )
          v5(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v6 = v4->m_flCurrentTime;
    }
    else
    {
      v6 = 0.0;
    }
    if ( v6 != v3->m_flNextAttack.m_Value )
    {
      v32 = v6;
      (*(v3->_vptr_IHandleEntity + 22))(v3, 1356, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v3->m_flNextAttack.m_Value = v32;
    }
LABEL_17:
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v8 = gpGlobals->m_pfnWarningFunc;
        if ( v8 != 0 )
          v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v9 = v7->m_flCurrentTime;
    }
    else
    {
      v9 = 0.0;
    }
    if ( v9 != this->m_flNextPrimaryAttack.m_Value )
    {
      v31 = v9;
      (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flNextPrimaryAttack.m_Value = v31;
    }
    v10 = gpGlobals;
    v11 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v12 = gpGlobals->m_pfnWarningFunc;
        if ( v12 != 0 )
          (v12)(1, 0.0);
      }
      v11 = v10->m_flCurrentTime;
    }
    if ( v11 != this->m_flNextSecondaryAttack.m_Value )
    {
      v28 = v11;
      CBaseCombatWeapon::NetworkVar_m_flNextSecondaryAttack::NetworkStateChanged(&this->m_flNextSecondaryAttack, -1, -1);
      this->m_flNextSecondaryAttack.m_Value = v28;
    }
    return;
  }
  v22 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v23 = gpGlobals->m_pfnWarningFunc;
      if ( v23 != 0 )
        v23(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v24 = v22->m_flCurrentTime;
  }
  else
  {
    v24 = 0.0;
  }
  if ( v24 >= this->m_flNextPrimaryAttack.m_Value )
  {
    m_Value = this->m_iPrimaryAmmoType.m_Value;
    if ( m_Value == -1 || CBaseCombatCharacter::GetAmmoCount(v3, m_Value) <= 0 )
    {
      (*(this->_vptr_IHandleEntity + 297))(this);
      return;
    }
    v26 = (*(this->_vptr_IHandleEntity + 337))(this);
    v27 = this->m_iClip1.m_Value;
    if ( v26 > v27 && !this->m_bOnlyPump.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iClip1.m_Value = v27 + 1;
      (*(v3->_vptr_IHandleEntity + 299))(v3, 1, this->m_iPrimaryAmmoType.m_Value);
      (*(this->_vptr_IHandleEntity + 299))(this);
      return;
    }
    (*(this->_vptr_IHandleEntity + 297))(this);
    goto LABEL_17;
  }
}


// CBaseCombatWeapon::FinishReload  (line 2299, @0x0000000002154920, libserver.so)  // inlines: GetAmmoCount, NetworkStateChanged, Set, operator+=<int>, operator=<bool>
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatCharacter::GetAmmoCount
void __fastcall CBaseCombatWeapon::FinishReload(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // r12
  int v3; // eax
  int v4; // esi
  int v5; // r13d
  int v6; // eax
  int v7; // r13d
  int v8; // esi
  unsigned int v9; // r13d
  int v10; // eax
  int v11; // r14d
  int v12; // eax
  int m_Value; // esi
  int v14; // r13d
  int AmmoCount; // eax
  int v16; // r13d
  int v17; // esi
  unsigned int v18; // r13d
  int v19; // eax
  int v20; // r14d
  int v21; // r13d
  int v22; // r13d

  Owner = CBaseCombatWeapon::GetOwner(this);
  if ( Owner == 0 )
    return;
  if ( (*(this->_vptr_IHandleEntity + 351))(this) != 0 )
  {
    v12 = (*(this->_vptr_IHandleEntity + 337))(this);
    m_Value = this->m_iPrimaryAmmoType.m_Value;
    v14 = v12;
    AmmoCount = 0;
    v16 = v14 - this->m_iClip1.m_Value;
    if ( m_Value != -1 )
      AmmoCount = CBaseCombatCharacter::GetAmmoCount(Owner, m_Value);
    if ( v16 < AmmoCount )
    {
      v21 = (*(this->_vptr_IHandleEntity + 337))(this);
      v19 = this->m_iClip1.m_Value;
      v18 = v21 - v19;
    }
    else
    {
      v17 = this->m_iPrimaryAmmoType.m_Value;
      v18 = 0;
      if ( v17 == -1 )
      {
LABEL_22:
        (*(Owner->_vptr_IHandleEntity + 299))(Owner, v18);
        goto LABEL_3;
      }
      v18 = CBaseCombatCharacter::GetAmmoCount(Owner, v17);
      v19 = this->m_iClip1.m_Value;
    }
    v20 = v18 + v19;
    if ( v18 + v19 != v19 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iClip1.m_Value = v20;
    }
    goto LABEL_22;
  }
LABEL_3:
  if ( (*(this->_vptr_IHandleEntity + 352))(this) == 0 )
    goto LABEL_4;
  v3 = (*(this->_vptr_IHandleEntity + 338))(this);
  v4 = this->m_iSecondaryAmmoType.m_Value;
  v5 = v3;
  v6 = 0;
  v7 = v5 - this->m_iClip2.m_Value;
  if ( v4 != -1 )
    v6 = CBaseCombatCharacter::GetAmmoCount(Owner, v4);
  if ( v7 < v6 )
  {
    v22 = (*(this->_vptr_IHandleEntity + 338))(this);
    v10 = this->m_iClip2.m_Value;
    v9 = v22 - v10;
LABEL_12:
    v11 = v9 + v10;
    if ( v9 + v10 != v10 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iClip2.m_Value = v11;
    }
    goto LABEL_14;
  }
  v8 = this->m_iSecondaryAmmoType.m_Value;
  v9 = 0;
  if ( v8 != -1 )
  {
    v9 = CBaseCombatCharacter::GetAmmoCount(Owner, v8);
    v10 = this->m_iClip2.m_Value;
    goto LABEL_12;
  }
LABEL_14:
  (*(Owner->_vptr_IHandleEntity + 299))(Owner, v9);
LABEL_4:
  if ( this->m_bReloadsSingly && this->m_bInReload.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1337, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInReload.m_Value = 0;
  }
}


// CBaseCombatWeapon::AbortReload  (line 2331, @0x00000000021425d0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CBaseCombatWeapon::AbortReload(CBaseCombatWeapon *const this)
{
  if ( this->m_bInReload.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1337, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInReload.m_Value = 0;
  }
}


// CBaseCombatWeapon::PrimaryAttack  (line 2342, @0x0000000002153c80, libserver.so)  // inlines: FireBulletsInfo_t, GetAmmoCount, Init, NetworkStateChanged, Set, ToBasePlayer, curtime, operator-=<int>, operator<=<float>, operator=, operator=<float>
// calls: CBaseCombatWeapon::GetOwner, CBaseCombatCharacter::GetAmmoCount, CGlobalVarsBase::curtime
void __fastcall CBaseCombatWeapon::PrimaryAttack(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // r13
  void (__fastcall *v3)(CBaseCombatWeapon *const, _QWORD); // r12
  unsigned int v4; // eax
  double v5; // xmm0_8
  vec_t v6; // xmm1_4
  double v7; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v9; // xmm1_4
  CGlobalVars *v10; // rdi
  CGlobalVars *v11; // r15
  CGlobalVars *v12; // r12
  double v13; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  void (__fastcall *v15)(__int64, double, double); // rax
  int m_Value; // eax
  int m_iShots; // edx
  int v18; // r12d
  int v19; // eax
  vec_t v20; // xmm1_4
  int v21; // esi
  int v22; // esi
  unsigned int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int AmmoCount; // eax
  unsigned int v28; // eax
  float v29; // [rsp+8h] [rbp-B8h]
  float v30; // [rsp+8h] [rbp-B8h]
  float fireRate; // [rsp+Ch] [rbp-B4h]
  double v32; // [rsp+10h] [rbp-B0h]
  FireBulletsInfo_t info; // [rsp+20h] [rbp-A0h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 351))(this) != 0 && this->m_iClip1.m_Value == 0 )
  {
    (*(this->_vptr_IHandleEntity + 299))(this);
    return;
  }
  Owner = CBaseCombatWeapon::GetOwner(this);
  if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
  {
    (*(Owner->_vptr_IHandleEntity + 354))(Owner);
    v3 = *(this->_vptr_IHandleEntity + 270);
    v4 = (*(this->_vptr_IHandleEntity + 304))(this);
    v3(this, v4);
    (*(Owner->_vptr_IHandleEntity + 425))(Owner, 5);
    info.m_vecSpread.y = 0.0;
    info.m_iShots = 1;
    info.m_vecSpread.x = 0.0;
    info.m_vecSpread.z = 0.0;
    info.m_flDistance = 8192.0;
    info.m_iTracerFreq = 4;
    info.m_flDamage = 0.0;
    info.m_flPlayerDamage = 0.0;
    info.m_pAttacker = 0;
    info.m_nFlags = 0;
    info.m_pAdditionalIgnoreEnt = 0;
    info.m_pWeapon = 0;
    info.m_flDamageForceScale = 1.0;
    info.m_bPrimaryAttack = 1;
    v5 = (*(Owner->_vptr_IHandleEntity + 311))(Owner, 0);
    info.m_vecSrc.z = v6;
    *&info.m_vecSrc.x = v5;
    v7 = (*(Owner->_vptr_IHandleEntity + 485))(Owner, 1.0);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    info.m_vecDirShooting.z = v9;
    *&info.m_vecDirShooting.x = v7;
    info.m_iShots = 0;
    fireRate = (vptr_IHandleEntity[313])(this);
    v10 = gpGlobals;
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v12 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v12 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v12 = gpGlobals;
          v10 = gpGlobals;
        }
      }
      *&v13 = LODWORD(v11->m_flCurrentTime);
    }
    else
    {
      v12 = 0;
      v13 = 0.0;
    }
    *&v13 = *&v13 - this->m_flNextPrimaryAttack.m_Value;
    if ( *&v13 <= this->m_fFireDuration )
      goto LABEL_14;
    *&v13 = CGlobalVarsBase::curtime(v10, 0) - this->m_fFireDuration;
    if ( *&v13 != this->m_flNextPrimaryAttack.m_Value )
    {
      v30 = *&v13;
      (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v13 = LODWORD(v30);
      this->m_flNextPrimaryAttack.m_Value = v30;
    }
    do
    {
      v12 = gpGlobals;
      v10 = gpGlobals;
LABEL_14:
      m_flCurrentTime = 0.0;
      if ( v10 != 0 )
      {
        if ( !v12->m_bEnableAssertions && !v12->m_bInSimulation )
        {
          v15 = v12->m_pfnWarningFunc;
          if ( v15 != 0 )
            v15(1, v13, 0.0);
        }
        m_flCurrentTime = v12->m_flCurrentTime;
      }
      if ( m_flCurrentTime < this->m_flNextPrimaryAttack.m_Value )
        break;
      (*(this->_vptr_IHandleEntity + 319))(this, 1);
      *&v13 = LODWORD(this->m_flNextPrimaryAttack.m_Value);
      if ( *&v13 != (fireRate + *&v13) )
      {
        v29 = fireRate + *&v13;
        (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flNextPrimaryAttack.m_Value = v29;
      }
      ++info.m_iShots;
    }
    while ( fireRate != 0.0 );
    if ( (*(this->_vptr_IHandleEntity + 351))(this) != 0 )
    {
      m_Value = this->m_iClip1.m_Value;
      m_iShots = info.m_iShots;
      if ( m_Value <= info.m_iShots )
        m_iShots = this->m_iClip1.m_Value;
      v18 = m_Value - m_iShots;
      info.m_iShots = m_iShots;
      if ( m_Value != m_Value - m_iShots )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iClip1.m_Value = v18;
      }
      goto LABEL_28;
    }
    v22 = this->m_iPrimaryAmmoType.m_Value;
    v23 = info.m_iShots;
    if ( v22 == -1 )
    {
      v24 = 0xFFFFFFFFLL;
      v25 = 0;
      if ( info.m_iShots >= 0 )
      {
LABEL_36:
        info.m_iShots = v25;
        (*(Owner->_vptr_IHandleEntity + 299))(Owner, v25, v24);
LABEL_28:
        v19 = this->m_iPrimaryAmmoType.m_Value;
        info.m_flDistance = 56755.84;
        info.m_iTracerFreq = 2;
        info.m_iAmmoType = v19;
        v32 = (*(Owner->_vptr_IHandleEntity + 352))(Owner, this, 0);
        info.m_vecSpread.z = v20;
        *&info.m_vecSpread.x = v32;
        (*(Owner->_vptr_IHandleEntity + 129))(Owner, &info);
        if ( this->m_iClip1.m_Value == 0 )
        {
          v21 = this->m_iPrimaryAmmoType.m_Value;
          if ( v21 != -1 )
            CBaseCombatCharacter::GetAmmoCount(Owner, v21);
        }
        (*(this->_vptr_IHandleEntity + 327))(this);
        return;
      }
    }
    else
    {
      AmmoCount = CBaseCombatCharacter::GetAmmoCount(Owner, v22);
      v24 = this->m_iPrimaryAmmoType.m_Value;
      if ( info.m_iShots >= AmmoCount )
      {
        v25 = 0;
        if ( v24 != -1 )
        {
          v28 = CBaseCombatCharacter::GetAmmoCount(Owner, v24);
          v24 = this->m_iPrimaryAmmoType.m_Value;
          v25 = v28;
        }
        goto LABEL_36;
      }
      v23 = info.m_iShots;
    }
    v25 = v23;
    goto LABEL_36;
  }
}


// CBaseCombatWeapon::BaseForceFire  (line 2431, @0x0000000002144f30, libserver.so)  // inlines: FireBulletsInfo_t, GetAmmoCount, Init, NetworkStateChanged, Set, VectorSubtract, curtime, operator++, operator+=<int>, operator-, operator-=<int>, operator<=<float>, operator=, operator=<float>
// calls: CBaseAnimating::LookupAttachment, CBaseAnimating::GetAttachment, VectorNormalize, CBaseCombatCharacter::GetAmmoCount, AngleVectors
// strings: "muzzle"
void __fastcall CBaseCombatWeapon::BaseForceFire(
        CBaseCombatWeapon *const this,
        CBaseCombatCharacter *pOperator,
        CBaseEntity *pTarget)
{
  int v6; // r13d
  int (**vptr_IHandleEntity)(...); // rax
  void (__fastcall *v8)(CBaseCombatWeapon *const, _QWORD); // r13
  unsigned int v9; // eax
  AttachmentHandle_t v10; // al
  float v11; // xmm1_4
  double v12; // xmm0_8
  double v13; // xmm0_8
  CGlobalVars *v14; // r12
  float m_flCurrentTime; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int m_Value; // eax
  int m_iShots; // edx
  int v19; // r12d
  int v20; // eax
  double v21; // xmm0_8
  int (**v22)(...); // rax
  vec_t v23; // xmm1_4
  int v24; // esi
  int v25; // r12d
  int AmmoCount; // eax
  __int64 v27; // rdx
  __int64 v28; // rsi
  int (**v29)(...); // rax
  unsigned int v30; // eax
  float v31; // [rsp+8h] [rbp-C8h]
  float v32; // [rsp+Ch] [rbp-C4h]
  QAngle angShootDir; // [rsp+10h] [rbp-C0h] BYREF
  double v34; // [rsp+20h] [rbp-B0h]
  float v35; // [rsp+28h] [rbp-A8h]
  FireBulletsInfo_t info; // [rsp+30h] [rbp-A0h] BYREF

  v6 = this->m_iClip1.m_Value + 1;
  (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_iClip1.m_Value = v6;
  if ( vptr_IHandleEntity[351](this) == 0 || this->m_iClip1.m_Value != 0 )
  {
    (*(pOperator->_vptr_IHandleEntity + 354))(pOperator);
    v8 = *(this->_vptr_IHandleEntity + 270);
    v9 = (*(this->_vptr_IHandleEntity + 304))(this);
    v8(this, v9);
    info.m_vecSpread.y = 0.0;
    info.m_iShots = 1;
    info.m_vecSpread.x = 0.0;
    info.m_vecSpread.z = 0.0;
    info.m_flDistance = 8192.0;
    info.m_iTracerFreq = 4;
    info.m_flDamage = 0.0;
    info.m_flPlayerDamage = 0.0;
    info.m_pAttacker = 0;
    info.m_nFlags = 0;
    info.m_pAdditionalIgnoreEnt = 0;
    info.m_pWeapon = 0;
    info.m_flDamageForceScale = 1.0;
    info.m_bPrimaryAttack = 1;
    v10 = CBaseAnimating::LookupAttachment(this, "muzzle");
    CBaseAnimating::GetAttachment(this, v10, &info.m_vecSrc, &angShootDir);
    if ( pTarget != 0 )
    {
      v34 = (*(pTarget->_vptr_IHandleEntity + 62))(pTarget);
      v35 = v11;
      info.m_vecDirShooting.y = *(&v34 + 1) - info.m_vecSrc.y;
      info.m_vecDirShooting.z = v11 - info.m_vecSrc.z;
      info.m_vecDirShooting.x = *&v34 - info.m_vecSrc.x;
      *&v12 = VectorNormalize(&info.m_vecDirShooting);
    }
    else
    {
      AngleVectors(&angShootDir, &info.m_vecDirShooting, 0, 0);
    }
    info.m_iShots = 0;
    *&v13 = (*(this->_vptr_IHandleEntity + 313))(this, v12);
    v32 = *&v13;
    do
    {
      v14 = gpGlobals;
      m_flCurrentTime = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, v13, 0.0);
        }
        m_flCurrentTime = v14->m_flCurrentTime;
      }
      if ( m_flCurrentTime < this->m_flNextPrimaryAttack.m_Value )
        break;
      (*(this->_vptr_IHandleEntity + 319))(this, 1);
      *&v13 = LODWORD(this->m_flNextPrimaryAttack.m_Value);
      if ( *&v13 != (v32 + *&v13) )
      {
        v31 = v32 + *&v13;
        (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flNextPrimaryAttack.m_Value = v31;
      }
      ++info.m_iShots;
    }
    while ( v32 != 0.0 );
    if ( (*(this->_vptr_IHandleEntity + 351))(this) != 0 )
    {
      m_Value = this->m_iClip1.m_Value;
      m_iShots = info.m_iShots;
      if ( m_Value <= info.m_iShots )
        m_iShots = this->m_iClip1.m_Value;
      v19 = m_Value - m_iShots;
      info.m_iShots = m_iShots;
      if ( m_Value != m_Value - m_iShots )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iClip1.m_Value = v19;
      }
      goto LABEL_23;
    }
    v24 = this->m_iPrimaryAmmoType.m_Value;
    v25 = info.m_iShots;
    if ( v24 == -1 )
    {
      v27 = 0xFFFFFFFFLL;
      v28 = 0;
      if ( info.m_iShots >= 0 )
        goto LABEL_28;
    }
    else
    {
      AmmoCount = CBaseCombatCharacter::GetAmmoCount(pOperator, v24);
      v27 = this->m_iPrimaryAmmoType.m_Value;
      if ( v25 >= AmmoCount )
      {
        v28 = 0;
        if ( v27 != -1 )
        {
          v30 = CBaseCombatCharacter::GetAmmoCount(pOperator, v27);
          v27 = this->m_iPrimaryAmmoType.m_Value;
          v28 = v30;
        }
        goto LABEL_28;
      }
      v25 = info.m_iShots;
    }
    v28 = v25;
LABEL_28:
    v29 = pOperator->_vptr_IHandleEntity;
    info.m_iShots = v28;
    v29[299](pOperator, v28, v27);
LABEL_23:
    v20 = this->m_iPrimaryAmmoType.m_Value;
    info.m_flDistance = 56755.84;
    info.m_iTracerFreq = 2;
    info.m_iAmmoType = v20;
    v21 = (*(pOperator->_vptr_IHandleEntity + 352))(pOperator, this, 0);
    v22 = pOperator->_vptr_IHandleEntity;
    v34 = v21;
    v35 = v23;
    info.m_vecSpread.z = v23;
    *&info.m_vecSpread.x = v21;
    v22[129](pOperator, &info);
    return;
  }
  (*(this->_vptr_IHandleEntity + 299))(this);
}


// CBaseCombatWeapon::LookupOverrideAttachment  (line 2513, @0x000000000213d500, libserver.so)
AttachmentOverrideResult_t __fastcall CBaseCombatWeapon::LookupOverrideAttachment(
        const CBaseCombatWeapon *const this,
        CUtlStringToken nAttachmentName,
        AttachmentHandle_t *pHandle)
{
  return AttachmentOverrideResult_t::ATTACHMENT_RESULT_USE_DEFAULT;
}


// CBaseCombatWeapon::GetOverrideAttachment  (line 2532, @0x000000000213d520, libserver.so)
AttachmentOverrideResult_t __fastcall CBaseCombatWeapon::GetOverrideAttachment(
        const CBaseCombatWeapon *const this,
        AttachmentHandle_t hAttachment,
        matrix3x4_t *pAttachmentToWorld,
        bool *pOk)
{
  return AttachmentOverrideResult_t::ATTACHMENT_RESULT_USE_DEFAULT;
}


// CBaseCombatWeapon::MaintainIdealActivity  (line 2550, @0x0000000002157660, libserver.so)  // inlines: GetSequence
// calls: CBaseCombatWeapon::IsViewModelSequenceFinished, CBaseAnimating::GetBaseAnimatingController
// callers: CBaseCombatWeapon::ItemPreFrame
void __fastcall CBaseCombatWeapon::MaintainIdealActivity(CBaseCombatWeapon *const this)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax

  if ( this->m_Activity == 2 )
  {
    if ( this->m_IdealActivity != 2
      || (BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this),
          (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController) != this->m_hIdealSequence.m_Data) )
    {
      if ( CBaseCombatWeapon::IsViewModelSequenceFinished(this, ViewmodelLayer_t::VIEWMODEL_FIRE_LAYER) )
        (*(this->_vptr_IHandleEntity + 270))(this, this->m_IdealActivity);
    }
  }
}


// CBaseCombatWeapon::SetIdealActivity  (line 2572, @0x00000000021576f0, libserver.so)  // inlines: GetSequence, Init, SetActivity, SetPlaybackRate, ToBasePlayer, curtime, operator const RuntimeClass_t*, operator!=, operator=, operator==
// calls: CBaseEntity::GetModel, CBaseCombatWeapon::GetOwner, SelectWeightedSequence, GetSequenceName, LookupSequence, CBaseAnimating::GetBaseAnimatingController, FindTransitionSequence, CBaseAnimating::SequenceDuration, CBasePlayer::GetViewModel, CBaseViewModel::GetViewModelSequenceDurationForLayer, CBaseAnimating::SetSequence, CBaseAnimating::ResetSequenceInfo (14 total)
// callers: CBaseCombatWeapon::SendWeaponAnim
__int64 __fastcall CBaseCombatWeapon::SetIdealActivity(
        CBaseCombatWeapon *const this,
        Activity ideal,
        float a3,
        float flDuration)
{
  CBaseCombatCharacter *Owner; // rax
  CBasePlayer *v7; // r12
  const ResourceBindingBase_t *m_pBinding; // rax
  CBaseViewModel *v9; // r12
  const CModel *m_pData; // rdi
  HSequence v11; // edx
  int32 m_Data; // r15d
  const CModel *v13; // rdi
  const char *SequenceName; // r15
  const CModel *v15; // rdi
  HSequence v16; // eax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v18; // eax
  const CModel *v19; // rdi
  HSequence v20; // r13d
  int (**vptr_IHandleEntity)(...); // rax
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  CBaseAnimatingController *v25; // rax
  CBaseViewModel *ViewModel; // rax
  __int64 v27; // rsi
  float ViewModelSequenceDurationForLayer; // xmm0_4
  CBaseAnimatingController *v29; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v31; // r12
  void (__fastcall *v32)(CBaseCombatWeapon *const, float); // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v34; // xmm1_4
  float v35; // xmm1_4
  CGlobalVars *v36; // r12
  float v37; // xmm0_4
  FnGlobalVarsWarningFunc v38; // rax
  char hWeaponModelSequence; // [rsp+8h] [rbp-58h]
  HSequence hWeaponModelSequencea; // [rsp+8h] [rbp-58h]
  float hWeaponModelSequenceb; // [rsp+8h] [rbp-58h]
  HModel hModel; // [rsp+10h] [rbp-50h] BYREF
  const ResourceBindingBase_t *iDir; // [rsp+20h] [rbp-40h] BYREF

  CBaseEntity::GetModel(&hModel, this);
  Owner = CBaseCombatWeapon::GetOwner(this);
  v7 = Owner;
  if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
  {
    ViewModel = CBasePlayer::GetViewModel(v7, this->m_nViewModelIndex.m_Value);
    v9 = ViewModel;
    if ( ViewModel != 0 )
    {
      CBaseEntity::GetModel(&iDir, ViewModel);
      m_pBinding = hModel.m_pBinding;
      if ( hModel.m_pBinding != iDir )
      {
        CBaseEntity::GetModel(&iDir, v9);
        m_pBinding = iDir;
        hWeaponModelSequence = 1;
        hModel.m_pBinding = iDir;
        if ( iDir != 0 )
          goto LABEL_5;
        goto LABEL_24;
      }
      hWeaponModelSequence = 0;
    }
    else
    {
      m_pBinding = hModel.m_pBinding;
      hWeaponModelSequence = 0;
    }
  }
  else
  {
    m_pBinding = hModel.m_pBinding;
    v9 = 0;
    hWeaponModelSequence = 0;
  }
  if ( m_pBinding != 0 )
  {
LABEL_5:
    m_pData = m_pBinding->m_pData;
    goto LABEL_6;
  }
LABEL_24:
  m_pData = 0;
LABEL_6:
  v11.m_Data = SelectWeightedSequence(m_pData, ideal, -1).m_Data;
  m_Data = v11.m_Data;
  if ( v11.m_Data == -1 )
    return 0;
  if ( hWeaponModelSequence != 0 )
  {
    if ( hModel.m_pBinding != 0 )
      v13 = hModel.m_pBinding->m_pData;
    else
      v13 = 0;
    hWeaponModelSequencea.m_Data = v11.m_Data;
    SequenceName = GetSequenceName(v13, v11);
    CBaseEntity::GetModel(&iDir, this);
    if ( iDir != 0 )
      v15 = iDir->m_pData;
    else
      v15 = 0;
    v16.m_Data = LookupSequence(v15, SequenceName).m_Data;
    v11.m_Data = hWeaponModelSequencea.m_Data;
    m_Data = v16.m_Data;
  }
  this->m_hIdealSequence = v11;
  this->m_IdealActivity = ideal;
  LODWORD(iDir) = 1;
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  v18.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
  if ( hModel.m_pBinding != 0 )
    v19 = hModel.m_pBinding->m_pData;
  else
    v19 = 0;
  v20.m_Data = FindTransitionSequence(v19, v18, this->m_hIdealSequence, &iDir).m_Data;
  if ( ideal != 183 && (*(this->_vptr_IHandleEntity + 286))(this) != 0 && this->m_hIdealSequence.m_Data != v20.m_Data )
  {
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_Activity = 2;
    vptr_IHandleEntity[271](this, v20.m_Data);
    if ( v9 == 0 )
      goto LABEL_19;
LABEL_26:
    ViewModelSequenceDurationForLayer = CBaseViewModel::GetViewModelSequenceDurationForLayer(
                                          v9,
                                          ViewmodelLayer_t::VIEWMODEL_FIRE_LAYER);
    v23 = a3;
    v24 = ViewModelSequenceDurationForLayer;
    if ( a3 <= 0.0 )
      goto LABEL_20;
    goto LABEL_27;
  }
  v27 = this->m_hIdealSequence.m_Data;
  this->m_Activity = this->m_IdealActivity;
  (*(this->_vptr_IHandleEntity + 271))(this, v27);
  if ( v9 != 0 )
    goto LABEL_26;
LABEL_19:
  v22 = CBaseAnimating::SequenceDuration(this);
  v23 = a3;
  v24 = v22;
  if ( a3 <= 0.0 )
  {
LABEL_20:
    a3 = v24;
    v25 = CBaseAnimating::GetBaseAnimatingController(this);
    (*(v25->_vptr_CSkeletonAnimationController + 22))(v25, 1.0);
    goto LABEL_28;
  }
LABEL_27:
  hWeaponModelSequenceb = v24 / v23;
  v29 = CBaseAnimating::GetBaseAnimatingController(this);
  (*(v29->_vptr_CSkeletonAnimationController + 22))(v29, hWeaponModelSequenceb);
LABEL_28:
  m_flCurrentTime = 0.0;
  v31 = gpGlobals;
  v32 = *(this->_vptr_IHandleEntity + 274);
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v31->m_flCurrentTime;
  }
  v32(this, m_flCurrentTime + a3);
  if ( m_Data == -1 )
    return 0;
  CBaseAnimating::SetSequence(this, m_Data, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
  CBaseAnimating::ResetSequenceInfo(this);
  CBaseAnimating::SetCycle(this, 0.0, v34);
  v36 = gpGlobals;
  v37 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v38 = gpGlobals->m_pfnWarningFunc;
      if ( v38 != 0 )
        (v38)(1, 0.0);
    }
    v37 = v36->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(this, v37, v35, 0);
  return 1;
}


// CBaseCombatWeapon::GetControlPanelInfo  (line 2658, @0x000000000213d540, libserver.so)
void __fastcall CBaseCombatWeapon::GetControlPanelInfo(
        CBaseCombatWeapon *const this,
        int nPanelIndex,
        const char **const pPanelName)
{
  *pPanelName = 0;
}


// CBaseCombatWeapon::GetControlPanelClassName  (line 2666, @0x000000000213d550, libserver.so)
// strings: "vgui_screen"
void __fastcall CBaseCombatWeapon::GetControlPanelClassName(
        CBaseCombatWeapon *const this,
        int nPanelIndex,
        const char **const pPanelName)
{
  *pPanelName = "vgui_screen";
}


// CBaseCombatWeapon::ShootPosition  (line 2671, @0x0000000002153990, libserver.so)
// calls: CBaseCombatWeapon::GetOwner
Vector __fastcall CBaseCombatWeapon::ShootPosition(CBaseCombatWeapon *const this)
{
  CBaseCombatCharacter *Owner; // rax
  vec_t v3; // xmm1_4
  const Vector v6; // [rsp+10h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( CBaseCombatWeapon::GetOwner(this) != 0 )
  {
    Owner = CBaseCombatWeapon::GetOwner(this);
    *&v6.x = (*(Owner->_vptr_IHandleEntity + 164))(Owner);
    v6.z = v3;
  }
  else
  {
    v6 = vec3_origin;
  }
  *&result.x = *&v6.x;
  result.z = v6.z;
  return result;
}


// CBaseCombatWeapon::Lock  (line 2684, @0x0000000002157ac0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime
// callers: CBaseCombatCharacter::Weapon_FindUsable
void __fastcall CBaseCombatWeapon::Lock(CBaseCombatWeapon *const this, double a2, float lockTime, CBaseEntity *pLocker)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *v11; // [rsp-20h] [rbp-28h]
  int v12; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = pLocker;
        v12 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, 0.0);
        pLocker = v11;
        LODWORD(a2) = v12;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  this->m_flUnlockTime = *&a2 + m_flCurrentTime;
  if ( pLocker != 0 && (m_pEntity = pLocker->m_pEntity) != 0 )
  {
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v9 = 0x7FFF;
    else
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hLocker.m_Index) = v9 | this->m_hLocker.m_Index & 0x8000;
    this->m_hLocker.m_Index = (v8 << 15) | this->m_hLocker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hLocker.m_Index = -1;
  }
}


// CBaseCombatWeapon::IsLocked  (line 2694, @0x0000000002157be0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CEntityInstance*, operator!=
// callers: CBaseCombatCharacter::Weapon_FindUsable
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseCombatWeapon::IsLocked(CBaseCombatWeapon *const this, CBaseEntity *pAsker)
{
  float m_flCurrentTime; // xmm1_4
  float m_flUnlockTime; // xmm0_4
  CGlobalVars *v5; // rbx
  bool result; // al
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *v12; // [rsp-20h] [rbp-28h]
  float v13; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  m_flUnlockTime = this->m_flUnlockTime;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v12 = pAsker;
        v13 = this->m_flUnlockTime;
        (m_pfnWarningFunc)(1, m_flUnlockTime, 0.0);
        pAsker = v12;
        m_flUnlockTime = v13;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  result = 0;
  if ( m_flUnlockTime > m_flCurrentTime )
  {
    m_Index = this->m_hLocker.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLocker.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_hLocker.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    return pAsker != m_pInstance;
  }
  return result;
}


// CBaseCombatWeapon::ActivityOverride  (line 2704, @0x000000000213d560, libserver.so)
Activity __fastcall CBaseCombatWeapon::ActivityOverride(
        CBaseCombatWeapon *const this,
        Activity baseAct,
        bool *pRequired)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax

  v6 = (*(this->_vptr_IHandleEntity + 373))(this);
  v7 = (*(this->_vptr_IHandleEntity + 374))(this);
  if ( v7 <= 0 )
    return baseAct;
  if ( *v6 != baseAct )
  {
    v8 = v6 + 4 * (3LL * (v7 - 1) + 3);
    do
    {
      v6 += 12;
      if ( v6 == v8 )
        return baseAct;
    }
    while ( *v6 != baseAct );
  }
  if ( pRequired != 0 )
    *pRequired = *(v6 + 8);
  return *(v6 + 4);
}


// CWeaponList::~CWeaponList  (line 2723, @0x000000000217f9d0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::~CUtlLinkedList, IGameSystem::~IGameSystem
void __fastcall CWeaponList::~CWeaponList(CWeaponList *const this)
{
  CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *p_m_list; // rdi

  p_m_list = &this->m_list;
  *&p_m_list[-1].m_Head = off_4003E50;
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::~CUtlLinkedList(p_m_list);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CWeaponList::~CWeaponList  (line 2723, @0x000000000217fa10, libserver.so)  // inlines: ~CAutoGameSystem, ~CWeaponList
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::~CUtlLinkedList, IGameSystem::~IGameSystem, operator delete
void __fastcall CWeaponList::~CWeaponList(CWeaponList *const this)
{
  CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *p_m_list; // rdi

  p_m_list = &this->m_list;
  *&p_m_list[-1].m_Head = off_4003E50;
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::~CUtlLinkedList(p_m_list);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CWeaponList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 2725, @0x000000000217a750, libserver.so)
void __fastcall CWeaponList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CWeaponList *const this)
{
  ;
}


// CWeaponList::DoesGameSystemReallocate  (line 2725, @0x000000000217a760, libserver.so)
// globals: CWeaponList::sm_Factory
bool __fastcall CWeaponList::DoesGameSystemReallocate(const CWeaponList *const this)
{
  return (*(CWeaponList::sm_Factory->_vptr_IGameSystemFactory + 8))(CWeaponList::sm_Factory);
}


// CWeaponList::SetGameSystemGlobalPtrs  (line 2725, @0x000000000217a780, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CWeaponList::sm_Factory
void __fastcall CWeaponList::SetGameSystemGlobalPtrs(CWeaponList *const this, void *pValue)
{
  if ( CWeaponList::sm_Factory != 0 )
    (*(CWeaponList::sm_Factory->_vptr_IGameSystemFactory + 7))(CWeaponList::sm_Factory, pValue);
}


// CWeaponList::GameShutdown  (line 2733, @0x000000000217f930, libserver.so)  // inlines: Purge, ResetDbgInfo
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int>::Purge
void __fastcall CWeaponList::GameShutdown(CWeaponList *const this, const EventGameShutdown_t *const msg)
{
  CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> > *p_m_list; // r12
  CUtlLinkedList<CBaseCombatWeapon*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int>,short unsigned int> >::ListElem_t *m_pMemory; // rax

  p_m_list = &this->m_list;
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::RemoveAll(&this->m_list);
  if ( (this->m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>::Purge(&p_m_list->m_Memory);
  m_pMemory = this->m_list.m_Memory.m_pMemory;
  this->m_list.m_FirstFree = -1;
  this->m_list.m_NumAlloced = 0;
  this->m_list.m_LastAlloc.index = -1;
  this->m_list.m_pElements = m_pMemory;
}


// CWeaponList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 2753, @0x0000000002157cc0, libserver.so)
void __cdecl CWeaponList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// OnBaseCombatWeaponCreated  (line 2755, @0x00000000021774c0, libserver.so)  // inlines: AddToTail, AddWeapon
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::InsertBefore
void __fastcall OnBaseCombatWeaponCreated(CBaseCombatWeapon *pWeapon)
{
  CBaseCombatWeapon *src; // [rsp+8h] [rbp-8h] BYREF

  src = pWeapon;
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::InsertBefore(
    &g_WeaponList.m_list,
    0xFFFFu,
    &src);
}


// OnBaseCombatWeaponDestroyed  (line 2760, @0x0000000002177750, libserver.so)  // inlines: RemoveWeapon
// calls: CUtlLinkedList<CBaseCombatWeapon*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int> >::FindAndRemove
void __fastcall OnBaseCombatWeaponDestroyed(CBaseCombatWeapon *pWeapon)
{
  CBaseCombatWeapon *src; // [rsp+8h] [rbp-8h] BYREF

  src = pWeapon;
  CUtlLinkedList<CBaseCombatWeapon *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon *,unsigned short>,unsigned short>>::FindAndRemove(
    &g_WeaponList.m_list,
    &src);
}


// CBaseCombatWeapon::GetAvailableWeaponsInBox  (line 2771, @0x0000000002157cd0, libserver.so)  // inlines: operator[]
// calls: CBaseCombatWeapon::GetOwner, CBaseEntity::GetAbsOrigin, IsPointInBox
// callers: CBaseCombatCharacter::Weapon_FindUsable
int __fastcall CBaseCombatWeapon::GetAvailableWeaponsInBox(
        CBaseCombatWeapon **pList,
        int listMax,
        const Vector *const mins,
        const Vector *const maxs)
{
  int m_Head; // ecx
  UtlLinkedListElem_t<CBaseCombatWeapon*,short unsigned int> *m_pMemory; // rax
  int v8; // r12d
  __int64 v9; // r15
  const CBaseCombatWeapon *m_Element; // rbx
  const Vector *AbsOrigin; // rax
  __int64 v13; // rax

  m_Head = g_WeaponList.m_list.m_Head;
  if ( g_WeaponList.m_list.m_Head == 0xFFFF )
    return 0;
  m_pMemory = g_WeaponList.m_list.m_Memory.m_pMemory;
  v8 = 0;
  do
  {
    v9 = m_Head;
    m_Element = m_pMemory[v9].m_Element;
    if ( CBaseCombatWeapon::GetOwner(m_Element) == 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_Element);
      if ( IsPointInBox(AbsOrigin, mins, maxs) && listMax > v8 )
      {
        v13 = v8++;
        pList[v13] = m_Element;
      }
    }
    m_pMemory = g_WeaponList.m_list.m_Memory.m_pMemory;
    m_Head = g_WeaponList.m_list.m_Memory.m_pMemory[v9].m_Next;
  }
  while ( m_Head != 0xFFFF );
  return v8;
}


// CBaseCombatWeapon::YouForgotToImplementOrDeclareServerClass  (line 2858, @0x000000000213d5e0, libserver.so)
int __fastcall CBaseCombatWeapon::YouForgotToImplementOrDeclareServerClass(CBaseCombatWeapon *const this)
{
  return 0;
}


// CBaseCombatWeapon::GetServerClass  (line 2858, @0x000000000214a590, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseCombatWeapon::GetServerClass(CBaseCombatWeapon *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CBaseCombatWeapon::GetDataDescMap  (line 2864, @0x000000000213d5f0, libserver.so)
// globals: CBaseCombatWeapon::m_DataMap
datamap_t *__fastcall CBaseCombatWeapon::GetDataDescMap(CBaseCombatWeapon *const this)
{
  return &CBaseCombatWeapon::m_DataMap;
}


// CBaseCombatWeapon::AddDatadescMetadataKeys  (line 2864, @0x00000000021582a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseCombatWeapon::GetEntityClass(void)
void __fastcall CBaseCombatWeapon::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseCombatWeapon::GetEntityClass);
}


// CBaseCombatWeapon::GetBaseMap  (line 2864, @0x00000000021582c0, libserver.so)
datamap_t *__cdecl CBaseCombatWeapon::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CBaseCombatWeapon>  (line 2864, @0x000000000216eae0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CBaseCombatWeapon"
// globals: `guard variable for'DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder, `guard variable for'DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc, CBaseCombatWeapon::GetEntityClass(void), CBaseCombatWeapon::m_DataMap, DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax
  char *v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  char **v21; // rax
  char *v22; // r12
  __int64 v23; // rbx
  int v24; // eax
  char **v25; // rax
  char *v26; // r12
  __int64 v27; // rbx
  int v28; // eax
  char **v29; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_pszBase = "CBaseCombatWeapon";
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder,
      &_dso_handle);
  }
  CBaseCombatWeapon::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v2, DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_pszBase), "DefaultTouch");
    m_Size = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[41].fieldName = v2;
    v6 = operator new[](DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v6, DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_pszBase), "FallThink");
    v7 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[42].fieldName = v6;
    v10 = operator new[](DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v10, DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_pszBase), "Materialize");
    v11 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[43].fieldName = v10;
    v14 = operator new[](DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_nLenBase + 21);
    strcpy(
      stpcpy(v14, DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_pszBase),
      "AttemptToMaterialize");
    v15 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[44].fieldName = v14;
    v18 = operator new[](DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v18, DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_pszBase), "DestroyItem");
    v19 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    v20 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory, 1);
      v20 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size = v20 + 1;
    v21 = &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_pMemory[v19];
    if ( v21 != 0 )
      *v21 = v18;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[45].fieldName = v18;
    v22 = operator new[](DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v22, DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_pszBase), "SetPickupTouch");
    v23 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    v24 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory, 1);
      v24 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size = v24 + 1;
    v25 = &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_pMemory[v23];
    if ( v25 != 0 )
      *v25 = v22;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[46].fieldName = v22;
    v26 = operator new[](DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v26, DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_pszBase), "HideThink");
    v27 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    v28 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory, 1);
      v28 = DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Size = v28 + 1;
    v29 = &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::nameHolder.m_Names.m_Memory.m_pMemory[v27];
    if ( v29 != 0 )
      *v29 = v26;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[47].fieldName = v26;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[49].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[50].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[51].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[52].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc);
  }
  CBaseCombatWeapon::m_DataMap.dataNumFields = 56;
  CBaseCombatWeapon::m_DataMap.dataDesc = &DataMapInit<CBaseCombatWeapon>(CBaseCombatWeapon *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseCombatWeapon::m_DataMap, CBaseCombatWeapon::GetEntityClass);
  return &CBaseCombatWeapon::m_DataMap;
}


// LocalWeapon_UserGroupFunc  (line 2945, @0x00000000021582d0, libserver.so)  // inlines: Bitvec_Set, ClearAll, ClearAllRecipients, Set, SetOnly, ToBasePlayer, entindex, memset
// calls: CBaseCombatWeapon::GetOwner, CEntityInstance::GetEntityIndex
void __fastcall LocalWeapon_UserGroupFunc(
        const char *pUserGroupName,
        const void *pStructBase,
        CSendProxyRecipients *pRecipients,
        int objectID)
{
  CBaseCombatCharacter *Owner; // rax
  const CEntityInstance *v6; // rbx
  CEntityIndex v7; // eax

  if ( pStructBase != 0
    && (Owner = CBaseCombatWeapon::GetOwner(pStructBase), v6 = Owner, Owner != 0)
    && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0
    && (*(v6->_vptr_IHandleEntity + 391))(v6) == 0 )
  {
    v7.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
    *pRecipients = 0;
    pRecipients->m_Bits.m_Ints[(v7.m_Data - 1) >> 5] |= 1 << (LOBYTE(v7.m_Data) - 1);
  }
  else
  {
    *pRecipients = 0;
  }
}


