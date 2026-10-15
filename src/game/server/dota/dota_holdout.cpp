// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_holdout.cpp:122
class C_CDOTAHoldoutNetworker_MapInstall {
	C_CDOTAHoldoutNetworker_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_holdout.cpp:153
class CDOTA_Item_Book : public CDOTA_Item {
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};

public:

private:

	CDOTA_Item_Book(CDOTA_Item_Book &);
	CDOTA_Item_Book(CDOTA_Item_Book &);
	CDOTA_Item_Book();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void UpgradeStat();
	virtual ~CDOTA_Item_Book();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[364] UpgradeStat
	// sizeof = 1000
};

// src/game/server/dota/dota_holdout.cpp:179
class CDOTA_Item_BookStrength : public CDOTA_Item_Book {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_BookStrength(CDOTA_Item_BookStrength &);
	CDOTA_Item_BookStrength(CDOTA_Item_BookStrength &);
	CDOTA_Item_BookStrength();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void UpgradeStat();
	virtual ~CDOTA_Item_BookStrength();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[364] UpgradeStat
	// sizeof = 1000
};

// src/game/server/dota/dota_holdout.cpp:205
class CDOTA_Item_BookAgility : public CDOTA_Item_Book {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_BookAgility(CDOTA_Item_BookAgility &);
	CDOTA_Item_BookAgility(CDOTA_Item_BookAgility &);
	CDOTA_Item_BookAgility();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void UpgradeStat();
	virtual ~CDOTA_Item_BookAgility();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[364] UpgradeStat
	// sizeof = 1000
};

// src/game/server/dota/dota_holdout.cpp:231
class CDOTA_Item_BookIntelligence : public CDOTA_Item_Book {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_BookIntelligence(CDOTA_Item_BookIntelligence &);
	CDOTA_Item_BookIntelligence(CDOTA_Item_BookIntelligence &);
	CDOTA_Item_BookIntelligence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void UpgradeStat();
	virtual ~CDOTA_Item_BookIntelligence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[364] UpgradeStat
	// sizeof = 1000
};

// src/game/server/dota/dota_holdout.cpp:257
class CDOTA_Item_Tombstone : public CDOTA_Item {
public:

private:

	float m_flTimer;  // +0x3e8
	int m_nFXIndex;  // +0x400
	int m_nFXIndex2;  // +0x404
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_Tombstone(CDOTA_Item_Tombstone &);
	CDOTA_Item_Tombstone(CDOTA_Item_Tombstone &);
	CDOTA_Item_Tombstone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	virtual void OnChannelFinish(bool);
	virtual void OnChannelThink(float);
	virtual bool IsCastOnPickup();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool CanUnitPickUp(CDOTA_BaseNPC *);
	CDOTA_Item_Tombstone * SpawnChildTombstone();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	bool IsRootTombstone();
	int GetChannelingCount();
	void CompleteChannelSuccessfully();
	void RemoveFromGame();
	void SendReviveEvent();
	virtual void UpdateOnRemove();
	virtual ~CDOTA_Item_Tombstone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[267] OnChannelFinish
	// vtable[296] OnChannelThink
	// vtable[357] IsCastOnPickup
	// vtable[6] Precache
	// vtable[362] CanUnitPickUp
	// vtable[8] Spawn
	// vtable[117] Think
	// vtable[11] UpdateOnRemove
	// sizeof = 1032
};

// src/game/server/dota/dota_holdout.cpp:548
class CDOTA_Item_Tombstone_Drop : public CDOTA_Item_Physical {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_Tombstone_Drop(CDOTA_Item_Tombstone_Drop &);
	CDOTA_Item_Tombstone_Drop(CDOTA_Item_Tombstone_Drop &);
	CDOTA_Item_Tombstone_Drop();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnPickup();
	virtual ~CDOTA_Item_Tombstone_Drop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[251] OnPickup
	// sizeof = 1240
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetFrostyFragmentData  (line 57, @0x000000000259bce0, libserver.so)  // inlines: LeafCodeInfo_t
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::operator delete, _Unwind_Resume, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: GetFrostyBoostAmount, GetFrostyPointsForRound, GetGoldFrostyBoostAmount, GetGoldFrostyPointsForRound
// strings: "FragmentData", "scripts/fragment_data.txt", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/serve, "GetFrostyFragmentData", "Failed to load Frostivus fragment data!\n"
// globals: g_pFragmentKV
KeyValues *__cdecl GetFrostyFragmentData()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  KeyValues *result; // rax
  KeyValues *v3; // rbx
  IBaseFileSystem *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp-38h] [rbp-38h] BYREF
  __int64 v12; // [rsp-18h] [rbp-18h]
  __int64 v13; // [rsp-8h] [rbp-8h]

  result = g_pFragmentKV;
  if ( g_pFragmentKV == 0 )
  {
    v13 = v1;
    v12 = v0;
    v3 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v3, "FragmentData");
    v4 = 0;
    g_pFragmentKV = v3;
    if ( g_pFullFileSystem != 0 )
      v4 = &g_pFullFileSystem->IBaseFileSystem;
    if ( KeyValues::LoadFromFile(v3, v4, "scripts/fragment_data.txt", "GAME", 0) )
    {
      return g_pFragmentKV;
    }
    else
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v11.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota/r"
                       "elease/linuxsteamrt64/../../../../game/server/dota/dota_holdout.cpp";
        v11.m_szFunction = "GetFrostyFragmentData";
        v11.m_nLine = 64;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v11,
          "Failed to load Frostivus fragment data!\n",
          v9,
          v10);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      DeleteFrostyFragmentData();
    }
  }
  return result;
}


// DeleteFrostyFragmentData  (line 70, @0x000000000259bde0, libserver.so)
// calls: KeyValues::~KeyValues, KeyValues::operator delete
// globals: g_pFragmentKV
void __cdecl DeleteFrostyFragmentData()
{
  KeyValues *v0; // rbx

  v0 = g_pFragmentKV;
  if ( g_pFragmentKV != 0 )
  {
    KeyValues::~KeyValues(g_pFragmentKV);
    KeyValues::operator delete(v0);
  }
  g_pFragmentKV = 0;
}


// CDOTAHoldoutNetworker::YouForgotToImplementOrDeclareServerClass  (line 122, @0x0000000002593620, libserver.so)
int __fastcall CDOTAHoldoutNetworker::YouForgotToImplementOrDeclareServerClass(CDOTAHoldoutNetworker *const this)
{
  return 0;
}


// CDOTAHoldoutNetworker::GetServerClass  (line 122, @0x0000000002599750, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTAHoldoutNetworker::GetServerClass(CDOTAHoldoutNetworker *const this)
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


// CDOTAHoldoutNetworker::Spawn  (line 127, @0x000000000259bfb0, libserver.so)
// calls: CBaseEntity::Spawn, CDOTAHoldoutNetworker::Clear
void __fastcall CDOTAHoldoutNetworker::Spawn(CDOTAHoldoutNetworker *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CDOTAHoldoutNetworker::Clear(this);
}


// CDOTAHoldoutNetworker::Clear  (line 137, @0x000000000259be20, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>, operator=<float>, operator=<int>
// callers: CDOTAHoldoutNetworker::Spawn
void __fastcall CDOTAHoldoutNetworker::Clear(CDOTAHoldoutNetworker *const this)
{
  int m_Value; // eax
  int v3; // eax
  int v4; // r11d
  int v5; // r10d

  if ( this->m_flPrepTimeLeft.m_Value == 0.0 )
  {
    if ( this->m_nWaveEnemyCount.m_Value == 0 )
      goto LABEL_3;
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_nWaveEnemyCount.m_Value;
    this->m_flPrepTimeLeft.m_Value = 0.0;
    if ( m_Value == 0 )
    {
LABEL_3:
      if ( this->m_nCurrentEnemyCount.m_Value == 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v3 = this->m_nCurrentEnemyCount.m_Value;
  this->m_nWaveEnemyCount.m_Value = 0;
  if ( v3 == 0 )
  {
LABEL_4:
    if ( this->m_nNumberOfRounds.m_Value == 0 )
      goto LABEL_5;
LABEL_12:
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5 = this->m_nRoundNumber.m_Value;
    this->m_nNumberOfRounds.m_Value = 0;
    if ( v5 == 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_11:
  (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = this->m_nNumberOfRounds.m_Value;
  this->m_nCurrentEnemyCount.m_Value = 0;
  if ( v4 != 0 )
    goto LABEL_12;
LABEL_5:
  if ( this->m_nRoundNumber.m_Value != 0 )
  {
LABEL_13:
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRoundNumber.m_Value = 0;
  }
LABEL_6:
  if ( !this->m_bIsHeroRespawnEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsHeroRespawnEnabled.m_Value = 1;
  }
}


// CDOTA_Item_Book::~CDOTA_Item_Book  (line 153, @0x00000000025c7970, libserver.so)  // inlines: ~CDOTA_Item
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Item_Book::~CDOTA_Item_Book(CDOTA_Item_Book *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Item_Book::~CDOTA_Item_Book  (line 153, @0x00000000025c7990, libserver.so)  // inlines: ~CDOTA_Item, ~CDOTA_Item_Book
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Book::~CDOTA_Item_Book(CDOTA_Item_Book *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Book::Schema_DynamicBinding  (line 155, @0x00000000025c52c0, libserver.so)
// globals: CDOTA_Item_Book::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Book::Schema_DynamicBinding(const CDOTA_Item_Book *const this)
{
  return CDOTA_Item_Book::s_pSchemaBinding;
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 155, @0x00000000025c52d0, libserver.so)
// globals: CDOTA_Item_Book::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Book::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Book::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::DestructInstance  (line 155, @0x00000000025c52e0, libserver.so)  // inlines: Destruct<CDOTA_Item_Book>
void __fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Book::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::FreeInstance  (line 155, @0x00000000025c5300, libserver.so)
void __fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Book::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::CanAllocate  (line 155, @0x00000000025c5320, libserver.so)
bool __fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Book::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 155, @0x00000000025c5330, libserver.so)
// globals: CDOTA_Item_Book::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Book::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Book::s_pSchemaBinding;
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::AllocateInstance  (line 155, @0x00000000025c7330, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Book::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 155, @0x00000000025cb510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Book::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 155, @0x00000000025cb530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Book::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Book::GetEntityClassInfo  (line 155, @0x00000000025cf990, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CDOTA_Item_BookStrength::GetEntityClassInternal, CDOTA_Item_BookAgility::GetEntityClassInternal, CDOTA_Item_BookIntelligence::GetEntityClassInternal
// strings: "item_book", "CDOTA_Item_Book", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo, CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo
CEntityClassInfo *__cdecl CDOTA_Item_Book::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo != 0 )
    return &CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo) == 0 )
    return &CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo;
  if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
        "CDOTABaseAbility",
        "dota_base_ability",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
      "CDOTA_Item",
      "dota_item",
      0,
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo,
    "CDOTA_Item_Book",
    "item_book",
    0,
    &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo);
  return &CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo;
}


// CDOTA_Item_Book::CEntityInstanceEntityClass::ConstructInstance  (line 155, @0x00000000025d0af0, libserver.so)  // inlines: CDOTA_Item_Book, Construct<CDOTA_Item_Book>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Book::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Book::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_41023D0;
  }
  return p;
}


// CDOTA_Item_Book::GetEntityClassInternal  (line 155, @0x00000000025d5e00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item>, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "item_book", "CDOTA_Item_Book"
// globals: `guard variable for'CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass, CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass, __dso_handle, CDOTA_Item_Book::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo, CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo
CEntityClass *__cdecl CDOTA_Item_Book::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass);
    CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass._vptr_CEntityClass = off_4102350;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass);
    __cxa_atexit(
      CDOTA_Item_Book::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BookClass != 0 )
    return &CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass;
  if ( `guard variable for'CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo,
      "CDOTA_Item_Book",
      "item_book",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo);
  }
  CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass.m_pClassInfo = &CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo;
  CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass.m_pBaseClassInfo = CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BookClass = &CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass;
  CDOTA_Item_Book::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookClassInfo.m_pClass = &CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass;
  CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item>(0);
  g_pEntityCDOTA_Item_BookClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Book::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookClass;
}


// CDOTA_Item_Book::UpgradeStat  (line 158, @0x00000000025c5340, libserver.so)
void __fastcall CDOTA_Item_Book::UpgradeStat(CDOTA_Item_Book *const this)
{
  ;
}


// CDOTA_Item_Book::OnSpellStart  (line 165, @0x0000000002595eb0, libserver.so)  // inlines: GetBool, GetInt, SpendCharge
// calls: CDOTA_Item::SpendCharge
void __fastcall CDOTA_Item_Book::OnSpellStart(CDOTA_Item_Book *const this)
{
  (*(this->_vptr_IHandleEntity + 364))(this);
  if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
    CDOTA_Item::SpendCharge(this);
}


// CDOTA_Item_BookStrength::~CDOTA_Item_BookStrength  (line 179, @0x00000000025c79c0, libserver.so)  // inlines: ~CDOTA_Item, ~CDOTA_Item_Book
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Item_BookStrength::~CDOTA_Item_BookStrength(CDOTA_Item_BookStrength *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Item_BookStrength::~CDOTA_Item_BookStrength  (line 179, @0x00000000025c79e0, libserver.so)  // inlines: ~CDOTA_Item, ~CDOTA_Item_Book, ~CDOTA_Item_BookStrength
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BookStrength::~CDOTA_Item_BookStrength(CDOTA_Item_BookStrength *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BookStrength::Schema_DynamicBinding  (line 181, @0x00000000025c5350, libserver.so)
// globals: CDOTA_Item_BookStrength::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BookStrength::Schema_DynamicBinding(
        const CDOTA_Item_BookStrength *const this)
{
  return CDOTA_Item_BookStrength::s_pSchemaBinding;
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 181, @0x00000000025c5360, libserver.so)
// globals: CDOTA_Item_BookStrength::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BookStrength::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::DestructInstance  (line 181, @0x00000000025c5370, libserver.so)  // inlines: Destruct<CDOTA_Item_BookStrength>
void __fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::FreeInstance  (line 181, @0x00000000025c5390, libserver.so)
void __fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::CanAllocate  (line 181, @0x00000000025c53b0, libserver.so)
bool __fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 181, @0x00000000025c53c0, libserver.so)
// globals: CDOTA_Item_BookStrength::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BookStrength::s_pSchemaBinding;
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::AllocateInstance  (line 181, @0x00000000025c7370, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 181, @0x00000000025cb560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 181, @0x00000000025cb580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BookStrength::CEntityInstanceEntityClass::ConstructInstance  (line 181, @0x00000000025d0b20, libserver.so)  // inlines: CDOTA_Item_Book, CDOTA_Item_BookStrength, Construct<CDOTA_Item_BookStrength>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BookStrength::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BookStrength::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4102FD0;
  }
  return p;
}


// CDOTA_Item_BookStrength::GetEntityClassInternal  (line 181, @0x00000000025d5f50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item>, CDOTA_Item_Book::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "item_book_of_strength", "CDOTA_Item_BookStrength"
// globals: `guard variable for'CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass, CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass, __dso_handle, CDOTA_Item_BookStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo, CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo
CEntityClass *__cdecl CDOTA_Item_BookStrength::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass);
    CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass._vptr_CEntityClass = off_4102F50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass);
    __cxa_atexit(
      CDOTA_Item_BookStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BookStrengthClass != 0 )
    return &CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass;
  if ( `guard variable for'CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Book::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo,
      "CDOTA_Item_BookStrength",
      "item_book_of_strength",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo);
  }
  CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass.m_pClassInfo = &CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo;
  CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass.m_pBaseClassInfo = CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BookStrengthClass = &CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass;
  CDOTA_Item_BookStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookStrengthClassInfo.m_pClass = &CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass;
  CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item>(0);
  g_pEntityCDOTA_Item_BookStrengthClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BookStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookStrengthClass;
}


// CDOTA_Item_BookStrength::UpgradeStat  (line 190, @0x0000000002593af0, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC_Hero::ModifyStrength
void __fastcall CDOTA_Item_BookStrength::UpgradeStat(CDOTA_Item_BookStrength *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float v2; // xmm1_4

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 && !Caster->m_bIsIllusion.m_Value )
    CDOTA_BaseNPC_Hero::ModifyStrength(Caster, v2);
}


// CDOTA_Item_BookAgility::~CDOTA_Item_BookAgility  (line 205, @0x00000000025c7a10, libserver.so)  // inlines: ~CDOTA_Item, ~CDOTA_Item_Book
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Item_BookAgility::~CDOTA_Item_BookAgility(CDOTA_Item_BookAgility *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Item_BookAgility::~CDOTA_Item_BookAgility  (line 205, @0x00000000025c7a30, libserver.so)  // inlines: ~CDOTA_Item, ~CDOTA_Item_Book, ~CDOTA_Item_BookAgility
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BookAgility::~CDOTA_Item_BookAgility(CDOTA_Item_BookAgility *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BookAgility::Schema_DynamicBinding  (line 207, @0x00000000025c53d0, libserver.so)
// globals: CDOTA_Item_BookAgility::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BookAgility::Schema_DynamicBinding(
        const CDOTA_Item_BookAgility *const this)
{
  return CDOTA_Item_BookAgility::s_pSchemaBinding;
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 207, @0x00000000025c53e0, libserver.so)
// globals: CDOTA_Item_BookAgility::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BookAgility::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::DestructInstance  (line 207, @0x00000000025c53f0, libserver.so)  // inlines: Destruct<CDOTA_Item_BookAgility>
void __fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::FreeInstance  (line 207, @0x00000000025c5410, libserver.so)
void __fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::CanAllocate  (line 207, @0x00000000025c5430, libserver.so)
bool __fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 207, @0x00000000025c5440, libserver.so)
// globals: CDOTA_Item_BookAgility::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BookAgility::s_pSchemaBinding;
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::AllocateInstance  (line 207, @0x00000000025c73b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 207, @0x00000000025cb5b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 207, @0x00000000025cb5d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BookAgility::CEntityInstanceEntityClass::ConstructInstance  (line 207, @0x00000000025d0b50, libserver.so)  // inlines: CDOTA_Item_Book, CDOTA_Item_BookAgility, Construct<CDOTA_Item_BookAgility>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BookAgility::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BookAgility::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4103BD0;
  }
  return p;
}


// CDOTA_Item_BookAgility::GetEntityClassInternal  (line 207, @0x00000000025d60a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item>, CDOTA_Item_Book::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "item_book_of_agility", "CDOTA_Item_BookAgility"
// globals: `guard variable for'CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass, CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass, __dso_handle, CDOTA_Item_BookAgility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo, CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo
CEntityClass *__cdecl CDOTA_Item_BookAgility::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass);
    CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass._vptr_CEntityClass = off_4103B50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass);
    __cxa_atexit(
      CDOTA_Item_BookAgility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BookAgilityClass != 0 )
    return &CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass;
  if ( `guard variable for'CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Book::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo,
      "CDOTA_Item_BookAgility",
      "item_book_of_agility",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo);
  }
  CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass.m_pClassInfo = &CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo;
  CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass.m_pBaseClassInfo = CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BookAgilityClass = &CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass;
  CDOTA_Item_BookAgility::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookAgilityClassInfo.m_pClass = &CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass;
  CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item>(0);
  g_pEntityCDOTA_Item_BookAgilityClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BookAgility::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookAgilityClass;
}


// CDOTA_Item_BookAgility::UpgradeStat  (line 216, @0x0000000002593b30, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC_Hero::ModifyAgility
void __fastcall CDOTA_Item_BookAgility::UpgradeStat(CDOTA_Item_BookAgility *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float v2; // xmm1_4

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 && !Caster->m_bIsIllusion.m_Value )
    CDOTA_BaseNPC_Hero::ModifyAgility(Caster, v2);
}


// CDOTA_Item_BookIntelligence::~CDOTA_Item_BookIntelligence  (line 231, @0x00000000025c7a60, libserver.so)  // inlines: ~CDOTA_Item, ~CDOTA_Item_Book
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Item_BookIntelligence::~CDOTA_Item_BookIntelligence(CDOTA_Item_BookIntelligence *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Item_BookIntelligence::~CDOTA_Item_BookIntelligence  (line 231, @0x00000000025c7a80, libserver.so)  // inlines: ~CDOTA_Item, ~CDOTA_Item_Book, ~CDOTA_Item_BookIntelligence
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BookIntelligence::~CDOTA_Item_BookIntelligence(CDOTA_Item_BookIntelligence *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BookIntelligence::Schema_DynamicBinding  (line 233, @0x00000000025c5450, libserver.so)
// globals: CDOTA_Item_BookIntelligence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BookIntelligence::Schema_DynamicBinding(
        const CDOTA_Item_BookIntelligence *const this)
{
  return CDOTA_Item_BookIntelligence::s_pSchemaBinding;
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 233, @0x00000000025c5460, libserver.so)
// globals: CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::DestructInstance  (line 233, @0x00000000025c5470, libserver.so)  // inlines: Destruct<CDOTA_Item_BookIntelligence>
void __fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::FreeInstance  (line 233, @0x00000000025c5490, libserver.so)
void __fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::CanAllocate  (line 233, @0x00000000025c54b0, libserver.so)
bool __fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 233, @0x00000000025c54c0, libserver.so)
// globals: CDOTA_Item_BookIntelligence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BookIntelligence::s_pSchemaBinding;
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::AllocateInstance  (line 233, @0x00000000025c73f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 233, @0x00000000025cb600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 233, @0x00000000025cb620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::ConstructInstance  (line 233, @0x00000000025d0b80, libserver.so)  // inlines: CDOTA_Item_Book, CDOTA_Item_BookIntelligence, Construct<CDOTA_Item_BookIntelligence>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_41047D0;
  }
  return p;
}


// CDOTA_Item_BookIntelligence::GetEntityClassInternal  (line 233, @0x00000000025d61f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item>, CDOTA_Item_Book::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "item_book_of_intelligence", "CDOTA_Item_BookIntelligence"
// globals: `guard variable for'CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass, CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass, __dso_handle, CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo, CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo
CEntityClass *__cdecl CDOTA_Item_BookIntelligence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass);
    CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass._vptr_CEntityClass = off_4104750;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass);
    __cxa_atexit(
      CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BookIntelligenceClass != 0 )
    return &CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass;
  if ( `guard variable for'CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Book::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo,
      "CDOTA_Item_BookIntelligence",
      "item_book_of_intelligence",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo);
  }
  CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass.m_pClassInfo = &CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo;
  CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass.m_pBaseClassInfo = CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BookIntelligenceClass = &CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass;
  CDOTA_Item_BookIntelligence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BookIntelligenceClassInfo.m_pClass = &CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass;
  CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item>(0);
  g_pEntityCDOTA_Item_BookIntelligenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BookIntelligence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BookIntelligenceClass;
}


// CDOTA_Item_BookIntelligence::UpgradeStat  (line 242, @0x0000000002593b70, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC_Hero::ModifyIntellect
void __fastcall CDOTA_Item_BookIntelligence::UpgradeStat(CDOTA_Item_BookIntelligence *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float v2; // xmm1_4

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 && !Caster->m_bIsIllusion.m_Value )
    CDOTA_BaseNPC_Hero::ModifyIntellect(Caster, v2);
}


// CDOTA_Item_Tombstone::~CDOTA_Item_Tombstone  (line 257, @0x00000000025c7ab0, libserver.so)  // inlines: ~CDOTA_Item
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Item_Tombstone::~CDOTA_Item_Tombstone(CDOTA_Item_Tombstone *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Item_Tombstone::~CDOTA_Item_Tombstone  (line 257, @0x00000000025c7ad0, libserver.so)  // inlines: ~CDOTA_Item, ~CDOTA_Item_Tombstone
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Tombstone::~CDOTA_Item_Tombstone(CDOTA_Item_Tombstone *const this)
{
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Tombstone::Schema_DynamicBinding  (line 259, @0x00000000025c54d0, libserver.so)
// globals: CDOTA_Item_Tombstone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tombstone::Schema_DynamicBinding(
        const CDOTA_Item_Tombstone *const this)
{
  return CDOTA_Item_Tombstone::s_pSchemaBinding;
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 259, @0x00000000025c54e0, libserver.so)
// globals: CDOTA_Item_Tombstone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tombstone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::DestructInstance  (line 259, @0x00000000025c54f0, libserver.so)  // inlines: Destruct<CDOTA_Item_Tombstone>
void __fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::FreeInstance  (line 259, @0x00000000025c5510, libserver.so)
void __fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::CanAllocate  (line 259, @0x00000000025c5530, libserver.so)
bool __fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 259, @0x00000000025c5540, libserver.so)
// globals: CDOTA_Item_Tombstone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tombstone::s_pSchemaBinding;
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::AllocateInstance  (line 259, @0x00000000025c7430, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1032);
  memset(v1, 0, 0x408u);
  return v1;
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 259, @0x00000000025cb650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 259, @0x00000000025cb670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Tombstone::CEntityInstanceEntityClass::ConstructInstance  (line 259, @0x00000000025d0bb0, libserver.so)  // inlines: CDOTA_Item_Tombstone, CEntityHandle, CHandle, Construct<CDOTA_Item_Tombstone>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Tombstone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Tombstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 251) = -1;
    *p = &off_41053D0;
    *(p + 252) = -1;
  }
  return p;
}


// CDOTA_Item_Tombstone::GetEntityClassInternal  (line 259, @0x00000000025d6340, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item>, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "item_tombstone", "CDOTA_Item_Tombstone"
// globals: `guard variable for'CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass, CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass, __dso_handle, CDOTA_Item_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo, CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo
CEntityClass *__cdecl CDOTA_Item_Tombstone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass);
    CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass._vptr_CEntityClass = off_4105350;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass);
    __cxa_atexit(
      CDOTA_Item_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_TombstoneClass != 0 )
    return &CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass;
  if ( `guard variable for'CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo,
      "CDOTA_Item_Tombstone",
      "item_tombstone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo);
  }
  CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass.m_pClassInfo = &CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo;
  CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass.m_pBaseClassInfo = CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_TombstoneClass = &CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass;
  CDOTA_Item_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TombstoneClassInfo.m_pClass = &CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass;
  CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item>(0);
  g_pEntityCDOTA_Item_TombstoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TombstoneClass;
}


// CDOTA_Item_Tombstone::IsCastOnPickup  (line 266, @0x00000000025c5550, libserver.so)
bool __fastcall CDOTA_Item_Tombstone::IsCastOnPickup(CDOTA_Item_Tombstone *const this)
{
  return 1;
}


// CDOTA_Item_Tombstone::Precache  (line 267, @0x00000000025d0e70, libserver.so)
// calls: CDOTA_Item::Precache, CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, PrecacheParticleFolderAndSystems
// strings: "particles/econ/generic/generic_progress_meter"
void __fastcall CDOTA_Item_Tombstone::Precache(
        CDOTA_Item_Tombstone *const this,
        const CEntityPrecacheContext *pContext)
{
  bool IsPrecacheAllowed; // r12

  CDOTA_Item::Precache(this, pContext);
  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  PrecacheParticleFolderAndSystems("particles/econ/generic/generic_progress_meter", pContext);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CDOTA_Item_Tombstone::CanUnitPickUp  (line 279, @0x00000000025c7930, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_PlayerResource::GetTeam
bool __fastcall CDOTA_Item_Tombstone::CanUnitPickUp(CDOTA_Item_Tombstone *const this, CDOTA_BaseNPC *pUnit)
{
  int m_Value; // ebx

  m_Value = pUnit->m_iTeamNum.m_Value;
  return CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value) == m_Value;
}


// CDOTA_Item_Tombstone::OnAbilityPhaseStart  (line 314, @0x0000000002598d90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CBaseEntity::EmitSound, CBaseEntity::GetAbsOrigin
// strings: "particles/items_fx/aegis_timer_i.vpcf", "particles/econ/generic/generic_progress_meter/generic_progress_circle.vpcf", "Frostivus.Revive"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Item_Tombstone::OnAbilityPhaseStart(CDOTA_Item_Tombstone *const this)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_ParticleManager *v5; // rax
  CEntityInstance *m_pInstance; // r12
  CDOTA_ParticleManager *v7; // rax
  int m_nFXIndex2; // r13d
  CDOTA_ParticleManager *v9; // rax
  int v10; // r13d
  CDOTA_ParticleManager *v11; // rax
  int v12; // r13d
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v15; // rax
  Vector v16; // [rsp+0h] [rbp-50h]
  Vector v17; // [rsp+0h] [rbp-50h]
  Vector v18; // [rsp+0h] [rbp-50h]
  float soundtime; // [rsp+Ch] [rbp-44h]
  int v20; // [rsp+20h] [rbp-30h]

  if ( this->m_hParent.m_Index != -1 )
    return 1;
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
  if ( (v20 + 2) > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v20 >> 9) & 0x3F]) != 0
    && (v4 = &v3[v20 & 0x1FF]) != 0
    && v20 == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    ParticleManager = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/items_fx/aegis_timer_i.vpcf",
                         1,
                         m_pInstance,
                         0,
                         0);
    v15 = GetParticleManager();
    this->m_nFXIndex2 = CDOTA_ParticleManager::CreateParticle(
                          v15,
                          "particles/econ/generic/generic_progress_meter/generic_progress_circle.vpcf",
                          8,
                          m_pInstance,
                          0,
                          0);
    CBaseEntity::GetAbsOrigin(m_pInstance);
    m_nFXIndex2 = this->m_nFXIndex2;
  }
  else
  {
    v5 = GetParticleManager();
    m_pInstance = 0;
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(v5, "particles/items_fx/aegis_timer_i.vpcf", 1, 0, 0, 0);
    v7 = GetParticleManager();
    m_nFXIndex2 = CDOTA_ParticleManager::CreateParticle(
                    v7,
                    "particles/econ/generic/generic_progress_meter/generic_progress_circle.vpcf",
                    8,
                    0,
                    0,
                    0);
    this->m_nFXIndex2 = m_nFXIndex2;
  }
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, m_nFXIndex2, 0, v16);
  v10 = this->m_nFXIndex2;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v10, 1, v17);
  v12 = this->m_nFXIndex2;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, v12, 2, v18);
  this->m_flTimer = (*(this->_vptr_IHandleEntity + 225))(this);
  if ( m_pInstance == 0 )
    return 1;
  CBaseEntity::EmitSound(m_pInstance, "Frostivus.Revive", soundtime, 0);
  return 1;
}


// CDOTA_Item_Tombstone::OnChannelThink  (line 345, @0x000000000259c4b0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetChannelingCount, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=, operator=<float>
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTABaseAbility::EndChannel, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Item_Tombstone::CompleteChannelSuccessfully
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Tombstone::OnChannelThink(CDOTA_Item_Tombstone *const this, float a2, float flInterval)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *v6; // rdi
  float m_flTimer; // xmm1_4
  float v8; // xmm0_4
  uint32 m_Index; // eax
  CDOTA_Item_Tombstone *m_pInstance; // rsi
  int v11; // edx
  int v12; // esi
  int v13; // ecx
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  float v16; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  int m_nFXIndex2; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  uint32 v20; // eax
  CConcreteEntityList *v21; // rdi
  __int16 v22; // si
  int v23; // ecx
  CEntityIdentity *v24; // rcx
  CEntityIdentity *v25; // rcx
  CEntityInstance *v26; // rcx
  CEntityInstance *v27; // rcx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  Vector v30; // [rsp+0h] [rbp-30h]
  float v31; // [rsp+8h] [rbp-28h]
  float v32; // [rsp+8h] [rbp-28h]
  float flIntervalb; // [rsp+Ch] [rbp-24h]
  float flIntervalc; // [rsp+Ch] [rbp-24h]
  CHandle<CDOTA_Item_Tombstone> hChild; // [rsp+10h] [rbp-20h]
  unsigned __int16 hChilda; // [rsp+10h] [rbp-20h]

  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
  if ( hChild.m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hChild.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[hChild.m_Index & 0x1FF]) != 0
    && hChild.m_Index == v5->m_EHandle.m_Index
    && (v6 = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(v6[7]._vptr_IHandleEntity) != 0
    && (v6[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && (*(v6->_vptr_IHandleEntity + 408))(v6) == 0
    && (CDOTABaseAbility::GetCaster(this) == 0 || (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) == 0) )
  {
    if ( this->m_hParent.m_Index == -1 )
    {
      m_Index = this->m_hNextChild.m_Index;
      if ( m_Index + 2 <= 1 )
      {
        v16 = 0.0;
      }
      else
      {
        m_pInstance = this;
        v11 = 0;
        do
        {
          if ( m_Index == -1 )
          {
            v13 = 63;
            LOWORD(v12) = 0x7FFF;
          }
          else
          {
            v12 = m_pInstance->m_hNextChild.m_Index & 0x7FFF;
            v13 = v12 >> 9;
          }
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v13];
          if ( v14 == 0 )
            break;
          v15 = &v14[v12 & 0x1FF];
          if ( v15 == 0 )
            break;
          if ( m_Index != v15->m_EHandle.m_Index )
            break;
          m_pInstance = v15->m_pInstance;
          if ( v15->m_pInstance == 0 )
            break;
          m_Index = m_pInstance->m_hNextChild.m_Index;
          ++v11;
        }
        while ( m_Index + 2 > 1 );
        v16 = v11;
      }
      v30.z = 0.0;
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      this->m_flTimer = this->m_flTimer - (v16 * a2);
      vptr_IHandleEntity[225](this);
      m_nFXIndex2 = this->m_nFXIndex2;
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex2, 1, v30);
      m_flTimer = this->m_flTimer;
      if ( v32 >= m_flTimer )
      {
        CDOTA_Item_Tombstone::CompleteChannelSuccessfully(this);
        m_flTimer = this->m_flTimer;
      }
      else
      {
        v20 = this->m_hNextChild.m_Index;
        v21 = CEntityHandle::gm_pEntityList;
        for ( hChilda = v20; v20 + 2 > 1; hChilda = v20 )
        {
          if ( v20 == -1 )
          {
            v23 = 63;
            v22 = 0x7FFF;
          }
          else
          {
            v22 = hChilda & 0x7FFF;
            v23 = (hChilda & 0x7FFF) >> 9;
          }
          v24 = v21->m_pIdentityChunks[v23];
          if ( v24 == 0 )
            break;
          v25 = &v24[v22 & 0x1FF];
          if ( v25 == 0 )
            break;
          if ( v20 != v25->m_EHandle.m_Index )
            break;
          v26 = v25->m_pInstance;
          if ( v26 == 0 )
            break;
          *&v26[20].m_CScriptComponent = m_flTimer;
          v27 = 0;
          v28 = v21->m_pIdentityChunks[(hChilda >> 9) & 0x3F];
          if ( v28 != 0 )
          {
            v29 = &v28[hChilda & 0x1FF];
            if ( v29 != 0 && v29->m_EHandle.m_Index == v20 )
              v27 = v29->m_pInstance;
          }
          v20 = v27[21]._vptr_IHandleEntity;
          m_flTimer = this->m_flTimer;
        }
      }
    }
    else
    {
      m_flTimer = this->m_flTimer;
    }
    if ( g_pGameRules != 0 )
      flIntervalb = *&g_pGameRules[18].m_szQuestName[20];
    else
      flIntervalb = 0.0;
    v31 = m_flTimer;
    v8 = (*(this->_vptr_IHandleEntity + 225))(this);
    if ( ((v31 - v8) + flIntervalb) != this->m_flChannelStartTime.m_Value )
    {
      flIntervalc = (v31 - v8) + flIntervalb;
      (*(this->_vptr_IHandleEntity + 22))(this, 840, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flChannelStartTime.m_Value = flIntervalc;
    }
  }
  else
  {
    CDOTABaseAbility::EndChannel(this, 1);
  }
}


// CDOTA_Item_Tombstone::OnChannelFinish  (line 382, @0x000000000259c8b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRootTombstone, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator->, operator=
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_Item_Tombstone::RemoveFromGame, CDOTA_Item_Tombstone::CompleteChannelSuccessfully, CEntityHandle::operator CEntityInstance*, CBaseEntity::StopSound
// strings: "Frostivus.Revive"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Tombstone::OnChannelFinish(CDOTA_Item_Tombstone *const this, bool bInterrupted)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 m_Index; // r12d
  CConcreteEntityList *v7; // rcx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rax
  CEntityInstance *v10; // rax
  const CEntityHandle *v11; // r12
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v16; // [rsp+0h] [rbp-30h]

  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
  if ( (v16 + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[v16 & 0x1FF];
      if ( v5 != 0 && v16 == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          CBaseEntity::StopSound(m_pInstance, "Frostivus.Revive");
        }
      }
    }
  }
  if ( bInterrupted )
  {
    m_Index = this->m_hParent.m_Index;
    if ( m_Index == -1 )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_hNextChild);
      if ( v10 != 0 )
      {
        HIDWORD(v10[20].m_CScriptComponent) = -1;
        v11 = CEntityHandle::operator CEntityInstance *(&this->m_hNextChild);
        if ( CEntityHandle::operator CEntityInstance *(v11 + 252) != 0 )
        {
          v11[256].m_Index = this->m_nFXIndex;
          HIDWORD(CEntityHandle::operator CEntityInstance *(&this->m_hNextChild)[21].m_hPrivateScope.m_hScope) = this->m_nFXIndex2;
          this->m_nFXIndex = 0;
          this->m_nFXIndex2 = 0;
        }
      }
    }
    else
    {
      v7 = CEntityHandle::gm_pEntityList;
      if ( m_Index != -2 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[this->m_hParent.m_Index & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
          {
            LODWORD(v9->m_pInstance[21]._vptr_IHandleEntity) = this->m_hNextChild.m_Index;
            v12 = this->m_hNextChild.m_Index;
            if ( v12 + 2 > 1 )
            {
              v13 = v7->m_pIdentityChunks[(LOWORD(this->m_hNextChild.m_Index) >> 9) & 0x3F];
              if ( v13 != 0 )
              {
                v14 = &v13[this->m_hNextChild.m_Index & 0x1FF];
                if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
                  HIDWORD(v14->m_pInstance[20].m_CScriptComponent) = this->m_hParent.m_Index;
              }
            }
          }
        }
      }
    }
    CDOTA_Item_Tombstone::RemoveFromGame(this);
  }
  else
  {
    CDOTA_Item_Tombstone::CompleteChannelSuccessfully(this);
  }
}


// CDOTA_Item_Tombstone::Spawn  (line 429, @0x00000000025aa360, libserver.so)  // inlines: curtime
// calls: CDOTA_Item::Spawn, CBaseEntity::SetNextThink
void __fastcall CDOTA_Item_Tombstone::Spawn(CDOTA_Item_Tombstone *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CDOTA_Item::Spawn(this, pKeyValues);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v4->m_flCurrentTime + 0.5)), v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1056964608), v3, 0);
  }
}


// CDOTA_Item_Tombstone::Think  (line 435, @0x000000000259caf0, libserver.so)  // inlines: Get, GetContainer, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, curtime, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Item::Think, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_Item_Tombstone::RemoveFromGame, CBaseEntity::SetNextThink, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Tombstone::Think(CDOTA_Item_Tombstone *const this)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rdi
  double v5; // xmm1_8
  uint32 m_Index; // ecx
  CConcreteEntityList *v7; // rsi
  unsigned __int64 v8; // rax
  CEntityIdentity *v9; // rdx
  __int64 v10; // rax
  CEntityIdentity *v11; // rax
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v14; // xmm0_8
  int v15; // [rsp+0h] [rbp-20h]

  CDOTA_Item::Think(this);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
  if ( (v15 + 2) > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v15 >> 9) & 0x3F]) != 0
    && (v3 = &v2[v15 & 0x1FF]) != 0
    && v15 == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
  {
    m_Index = this->m_hContainer.m_Index;
    v7 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v8 = this->m_hContainer.m_Index & 0x7FFF;
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9)];
      if ( v9 != 0 )
      {
        v10 = v8 & 0x1FF;
        v7 = (8 * v10);
        v11 = &v9[v10];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
          this->m_vContainerPosition = *CBaseEntity::GetAbsOrigin(v11->m_pInstance);
      }
    }
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v7);
      }
      HIDWORD(v14) = 0;
      *&v14 = v12->m_flCurrentTime + 1.0;
    }
    else
    {
      *&v14 = 1065353216;
    }
    CBaseEntity::SetNextThink(this, v14, v5, 0);
  }
  else
  {
    CDOTA_Item_Tombstone::RemoveFromGame(this);
  }
}


// CDOTA_Item_Tombstone::SpawnChildTombstone  (line 453, @0x00000000025b3570, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetPlayerOwnerID, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetPlayerOwnerID, SetPurchaseTime, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>, operator=<int>
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, DOTA_CreateItem
// callers: CDOTA_Item_Tombstone_Drop::OnPickup
// strings: "item_tombstone"
// globals: CEntityHandle::gm_pEntityList
CDOTA_Item_Tombstone *__fastcall CDOTA_Item_Tombstone::SpawnChildTombstone(CDOTA_Item_Tombstone *const this)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_Item_Tombstone *result; // rax
  CBaseEntity *m_pInstance; // r12
  double v6; // xmm0_8
  int m_Value; // r12d
  CEntityIdentity *m_pEntity; // rdx
  int v9; // ecx
  __int16 v10; // si
  CEntityIdentity *v11; // rdx
  int v12; // ecx
  __int16 v13; // si
  CDOTA_Item_Tombstone *pNewItema; // [rsp+8h] [rbp-28h]
  CDOTA_Item_Tombstone *pNewItem; // [rsp+8h] [rbp-28h]
  int v16; // [rsp+10h] [rbp-20h]

  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
  if ( (v16 + 2) <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[v16 & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( v16 != v3->m_EHandle.m_Index )
    return 0;
  m_pInstance = v3->m_pInstance;
  if ( v3->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) == 0
    || (*(m_pInstance->_vptr_IHandleEntity + 408))(v3->m_pInstance) != 0 )
  {
    return 0;
  }
  result = DOTA_CreateItem("item_tombstone", m_pInstance, this->m_iPlayerOwnerID.m_Value);
  if ( result != 0 )
  {
    v6 = 0.0;
    if ( result->m_flPurchaseTime.m_Value != 0.0 )
    {
      pNewItem = result;
      (*(result->_vptr_IHandleEntity + 22))(result, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
      result = pNewItem;
      pNewItem->m_flPurchaseTime.m_Value = 0.0;
    }
    m_Value = this->m_iPlayerOwnerID.m_Value;
    if ( m_Value != result->m_iPlayerOwnerID.m_Value )
    {
      pNewItema = result;
      (*(result->_vptr_IHandleEntity + 22))(result, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6);
      result = pNewItema;
      pNewItema->m_iPlayerOwnerID.m_Value = m_Value;
    }
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(result->m_hParent.m_Index) = v10 | result->m_hParent.m_Index & 0x8000;
      result->m_hParent.m_Index = (v9 << 15) | result->m_hParent.m_Index & 0x7FFF;
    }
    else
    {
      result->m_hParent.m_Index = -1;
    }
    result->m_hNextChild.m_Index = this->m_hNextChild.m_Index;
    v11 = result->m_pEntity;
    if ( v11 != 0 )
    {
      v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
      v13 = 0x7FFF;
      if ( v11->m_EHandle.m_Index != -1 )
        v13 = v11->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hNextChild.m_Index) = v13 | this->m_hNextChild.m_Index & 0x8000;
      this->m_hNextChild.m_Index = (v12 << 15) | this->m_hNextChild.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hNextChild.m_Index = -1;
    }
    result->m_flTimer = this->m_flTimer;
  }
  return result;
}


// CDOTA_Item_Tombstone::SendReviveEvent  (line 475, @0x000000000259bfd0, libserver.so)  // inlines: CreateEvent, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetEntityIndex, ToDOTABaseNPC, ToDOTABaseNPCHero, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTABaseAbility::GetCaster, CEntityInstance::GetEntityIndex
// callers: CDOTA_Item_Tombstone::CompleteChannelSuccessfully
// strings: "dota_holdout_revive_complete"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Tombstone::SendReviveEvent(CDOTA_Item_Tombstone *const this)
{
  __int64 v2; // rbx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v7; // eax
  CEntityIndex v8; // eax
  int v9; // [rsp+0h] [rbp-30h]

  v2 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_holdout_revive_complete", 0, 0);
  if ( v2 != 0 )
  {
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
    if ( (v9 + 2) <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F]) == 0
      || (v4 = &v3[v9 & 0x1FF]) == 0
      || v9 != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
      || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    {
      m_pInstance = 0;
    }
    Caster = CDOTABaseAbility::GetCaster(this);
    v7.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
    (*(*v2 + 112LL))(v2, "caster", v7.m_Data);
    v8.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
    (*(*v2 + 112LL))(v2, "target", v8.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v2, 1);
  }
}


// CDOTA_Item_Tombstone::CompleteChannelSuccessfully  (line 488, @0x000000000259c1b0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_Item_Tombstone::SendReviveEvent, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CBaseEntity::EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Item_Tombstone::RemoveFromGame
// callers: CDOTA_Item_Tombstone::OnChannelThink, CDOTA_Item_Tombstone::OnChannelFinish
// strings: "Music_Frostivus.Reincarnate", "particles/items_fx/aegis_timer_e.vpcf"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Item_Tombstone::CompleteChannelSuccessfully(CDOTA_Item_Tombstone *const this)
{
  CEntityInstance *v1; // rax
  CBaseEntity *v2; // r14
  uint32 m_Index; // r12d
  CConcreteEntityList *v4; // rax
  __int16 v5; // cx
  int v6; // edx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v11; // rax
  CEntityInstance *m_pInstance; // rdx
  vec_t x; // ebx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  unsigned int v16; // r15d
  CDOTA_Item_Tombstone *v17; // rdi
  CEntityIdentity *v18; // rax
  CEntityIdentity *v19; // rax
  CDOTA_Item_Tombstone *v20; // rdi
  CEntityIdentity *v21; // rax
  CEntityIdentity *v22; // rax
  unsigned __int16 hChild; // [rsp+20h] [rbp-50h]
  Vector hNextChild; // [rsp+30h] [rbp-40h] OVERLAPPED BYREF

  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
  v1 = CEntityHandle::operator CEntityInstance *(&hNextChild);
  if ( v1 == 0 || BYTE3(v1[7]._vptr_IHandleEntity) == 0 || (v2 = v1, (v1[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    v2 = 0;
  CDOTA_Item_Tombstone::SendReviveEvent(this);
  m_Index = this->m_hNextChild.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  hChild = m_Index;
  if ( m_Index + 2 > 1 )
  {
    while ( 1 )
    {
      if ( m_Index == -1 )
      {
        v6 = 63;
        v5 = 0x7FFF;
      }
      else
      {
        v5 = hChild & 0x7FFF;
        v6 = (hChild & 0x7FFF) >> 9;
      }
      v7 = v4->m_pIdentityChunks[v6];
      if ( v7 == 0 )
        break;
      v8 = &v7[v5 & 0x1FF];
      if ( v8 == 0 )
        break;
      if ( m_Index != v8->m_EHandle.m_Index )
        break;
      m_pInstance = v8->m_pInstance;
      if ( m_pInstance == 0 )
        break;
      hNextChild.x = *&m_pInstance[21]._vptr_IHandleEntity;
      x = hNextChild.x;
      if ( (LODWORD(hNextChild.x) + 2) > 1
        && (v14 = v4->m_pIdentityChunks[(LOWORD(hNextChild.x) >> 9) & 0x3F]) != 0
        && (v15 = &v14[LOWORD(hNextChild.x) & 0x1FF]) != 0
        && LODWORD(hNextChild.x) == v15->m_EHandle.m_Index )
      {
        v16 = m_Index + 2;
        if ( v15->m_pInstance != 0 )
        {
          v20 = 0;
          if ( v16 > 1 )
          {
            v21 = v4->m_pIdentityChunks[(hChild >> 9) & 0x3F];
            if ( v21 != 0 && (v22 = &v21[hChild & 0x1FF]) != 0 )
            {
              if ( v22->m_EHandle.m_Index == m_Index )
                v20 = v22->m_pInstance;
            }
            else
            {
              v20 = 0;
            }
          }
          CDOTA_Item_Tombstone::SendReviveEvent(v20);
          v4 = CEntityHandle::gm_pEntityList;
        }
      }
      else
      {
        v16 = m_Index + 2;
      }
      v17 = 0;
      if ( v16 > 1 )
      {
        v18 = v4->m_pIdentityChunks[(hChild >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[hChild & 0x1FF];
          if ( v19 != 0 && v19->m_EHandle.m_Index == m_Index )
            v17 = v19->m_pInstance;
        }
      }
      CDOTA_Item_Tombstone::RemoveFromGame(v17);
      hChild = LOWORD(x);
      v4 = CEntityHandle::gm_pEntityList;
      if ( (LODWORD(x) + 2) <= 1 )
        break;
      m_Index = LODWORD(x);
    }
  }
  if ( v2 != 0 && (*(v2->_vptr_IHandleEntity + 408))(v2) == 0 )
  {
    hNextChild = *CBaseEntity::GetAbsOrigin(v2);
    (*(v2->_vptr_IHandleEntity + 494))(v2, 0, 0, 0);
    FindClearSpaceForUnit(v2, hNextChild, 1);
    CBaseEntity::EmitSound(v2, "Music_Frostivus.Reincarnate", 0.0, 0);
  }
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/items_fx/aegis_timer_e.vpcf",
               1,
               v2,
               0,
               0);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v11, Particle);
  CDOTA_Item_Tombstone::RemoveFromGame(this);
}


// CDOTA_Item_Tombstone::RemoveFromGame  (line 521, @0x000000000259c0f0, libserver.so)  // inlines: Get, GetContainer, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::SetItemInSlot, UTIL_Remove
// callers: CDOTA_Item_Tombstone::CompleteChannelSuccessfully, CDOTA_Item_Tombstone::OnChannelFinish, CDOTA_Item_Tombstone::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Tombstone::RemoveFromGame(CDOTA_Item_Tombstone *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_UnitInventory *Inventory; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    Inventory = CDOTA_BaseNPC::GetInventory(Caster);
    if ( Inventory != 0 )
      CDOTA_UnitInventory::SetItemInSlot(Inventory, 18, 0);
  }
  m_Index = this->m_hContainer.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hContainer.m_Index) >> 9) & 0x3F]) != 0
    && (v6 = &v5[this->m_hContainer.m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && v6->m_pInstance != 0 )
  {
    UTIL_Remove(v6->m_pInstance);
    UTIL_Remove(this);
  }
  else
  {
    UTIL_Remove(this);
  }
}


// CDOTA_Item_Tombstone::UpdateOnRemove  (line 538, @0x00000000025973e0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Item::UpdateOnRemove
void __fastcall CDOTA_Item_Tombstone::UpdateOnRemove(CDOTA_Item_Tombstone *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndex2; // r12d
  CDOTA_ParticleManager *v5; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
  m_nFXIndex2 = this->m_nFXIndex2;
  v5 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v5, m_nFXIndex2, 1);
  CDOTA_Item::UpdateOnRemove(this);
}


// CDOTA_Item_Tombstone_Drop::~CDOTA_Item_Tombstone_Drop  (line 548, @0x00000000025c9570, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_Item_Physical, ~IPositionWatcher, ~IWatcherCallback
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTA_Item_Tombstone_Drop::~CDOTA_Item_Tombstone_Drop(CDOTA_Item_Tombstone_Drop *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_4074030;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_Item_Tombstone_Drop::~CDOTA_Item_Tombstone_Drop  (line 548, @0x00000000025c96d0, libserver.so)  // inlines: ~CBaseAnimating, ~CDOTA_Item_Physical, ~CDOTA_Item_Tombstone_Drop, ~IPositionWatcher, ~IWatcherCallback
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Tombstone_Drop::~CDOTA_Item_Tombstone_Drop(CDOTA_Item_Tombstone_Drop *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_4074030;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Tombstone_Drop::Schema_DynamicBinding  (line 550, @0x00000000025c5560, libserver.so)
// globals: CDOTA_Item_Tombstone_Drop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tombstone_Drop::Schema_DynamicBinding(
        const CDOTA_Item_Tombstone_Drop *const this)
{
  return CDOTA_Item_Tombstone_Drop::s_pSchemaBinding;
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 550, @0x00000000025c5570, libserver.so)
// globals: CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::DestructInstance  (line 550, @0x00000000025c5580, libserver.so)  // inlines: Destruct<CDOTA_Item_Tombstone_Drop>
void __fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::FreeInstance  (line 550, @0x00000000025c55a0, libserver.so)
void __fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::CanAllocate  (line 550, @0x00000000025c55c0, libserver.so)
bool __fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 550, @0x00000000025c55d0, libserver.so)
// globals: CDOTA_Item_Tombstone_Drop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tombstone_Drop::s_pSchemaBinding;
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::AllocateInstance  (line 550, @0x00000000025c7470, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1240);
  memset(v1, 0, 0x4D8u);
  return v1;
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::ConstructInstance  (line 550, @0x00000000025c9620, libserver.so)  // inlines: CDOTA_Item_Physical, CDOTA_Item_Tombstone_Drop, CEntityHandle, CHandle, CNetworkVarBase, Construct<CDOTA_Item_Tombstone_Drop>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 308) = -1;
    *p = &off_4105FD0;
    *(p + 152) = off_41067C8;
  }
  return p;
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 550, @0x00000000025cb1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 550, @0x00000000025cb210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Tombstone_Drop::GetEntityClassInternal  (line 550, @0x00000000025d65e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_Item_Physical>, CDOTA_Item_Physical::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_item_tombstone_drop", "CDOTA_Item_Tombstone_Drop"
// globals: `guard variable for'CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass, CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass, __dso_handle, CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo, CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo
CEntityClass *__cdecl CDOTA_Item_Tombstone_Drop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass);
    CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass._vptr_CEntityClass = off_4105F50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass);
    __cxa_atexit(
      CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Tombstone_DropClass != 0 )
    return &CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass;
  if ( `guard variable for'CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Physical::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo,
      "CDOTA_Item_Tombstone_Drop",
      "dota_item_tombstone_drop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo);
  }
  CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass.m_pClassInfo = &CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo;
  CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass.m_pBaseClassInfo = CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Tombstone_DropClass = &CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass;
  CDOTA_Item_Tombstone_Drop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tombstone_DropClassInfo.m_pClass = &CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass;
  CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_Item_Physical>(0);
  g_pEntityCDOTA_Item_Tombstone_DropClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Tombstone_Drop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tombstone_DropClass;
}


// CDOTA_Item_Tombstone_Drop::Spawn  (line 552, @0x00000000025d52b0, libserver.so)
// calls: CDOTA_Item_Physical::Spawn
void __fastcall CDOTA_Item_Tombstone_Drop::Spawn(
        CDOTA_Item_Tombstone_Drop *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_Item_Physical::Spawn(this, pKeyValues);
  this->m_nFlags |= 1u;
}


// CDOTA_Item_Tombstone_Drop::OnPickup  (line 558, @0x00000000025d5180, libserver.so)  // inlines: Get, GetContainedItem, GetContainer, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_Item*, operator CEntityInstance*
// calls: CBaseEntity::GetAbsAngles, CDOTA_Item::ClearContainer, __dynamic_cast, CDOTA_Item_Tombstone::SpawnChildTombstone, CDOTA_Item_Physical::SetContainedItem
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Item_Tombstone, `typeinfo for'CDOTA_Item
void __fastcall CDOTA_Item_Tombstone_Drop::OnPickup(CDOTA_Item_Tombstone_Drop *const this)
{
  CDOTA_Item *m_pInstance; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 v6; // eax
  const CBaseEntity *v7; // rdi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_Item_Tombstone *v10; // rax
  CDOTA_Item_Tombstone *v11; // rax
  CDOTA_Item_Tombstone *v12; // rbx
  QAngle angles; // [rsp+0h] [rbp-20h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hItem.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItem.m_Value.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hItem.m_Value.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  v6 = m_pInstance->m_hContainer.m_Index;
  v7 = 0;
  if ( v6 + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pInstance->m_hContainer.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[m_pInstance->m_hContainer.m_Index & 0x1FF];
      if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
        v7 = v9->m_pInstance;
    }
  }
  angles = *CBaseEntity::GetAbsAngles(v7);
  CDOTA_Item::ClearContainer(m_pInstance, this);
  v10 = __dynamic_cast(m_pInstance, &`typeinfo for'CDOTA_Item, &`typeinfo for'CDOTA_Item_Tombstone, 0);
  if ( v10 != 0 )
  {
    v11 = CDOTA_Item_Tombstone::SpawnChildTombstone(v10);
    v12 = v11;
    if ( v11 != 0 )
    {
      CDOTA_Item_Physical::SetContainedItem(this, v11);
      (*(v12->_vptr_IHandleEntity + 128))(v12, 0, &angles, 0);
    }
  }
}


// GetFrostyBoostAmount  (line 586, @0x000000000259cc90, libserver.so)  // inlines: FindTypeCache, GetLobby, GetObject, operator[]
// calls: GDOTAGCClientSystem, CDOTA_PlayerResource::GetSteamID, GetFrostyFragmentData, KeyValues::GetFloat, KeyValues::GetInt, GCClientSystem, CGCClientSystem::GetSOCache, CDOTA_PlayerResource::GetPlayerIDBySteamID, CDOTA_PlayerResource::GetTeam, GCSDK::CSharedObjectCache::FindBaseTypeCache
// callers: GetFrostyPointsForRound
// strings: "BasePhantomFragmentScale", "PersonalPhantomFragmentBoost", "AllyPhantomFragmentBoost", "DifficultyPhantomBoost", "DifficultyPhantomCap"
float __fastcall GetFrostyBoostAmount(int nPlayerID, int nDifficulty)
{
  CDOTAGCServerSystem *v4; // rax
  float result; // xmm0_4
  __int64 v6; // r14
  KeyValues *FrostyFragmentData; // rax
  float v8; // xmm1_4
  KeyValues *v9; // rax
  float v10; // xmm1_4
  KeyValues *v11; // rax
  float v12; // xmm1_4
  KeyValues *v13; // rax
  float v14; // xmm1_4
  KeyValues *v15; // rax
  int Int; // eax
  unsigned int v17; // ebx
  GCSDK::SOID_t::ID_t v18; // r12
  CGCClientSystem *v19; // rax
  GCSDK::CGCClientSharedObjectCache *SOCache; // r15
  int PlayerIDBySteamID; // eax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  int m_Size; // esi
  GCSDK::CSharedObject **m_pMemory; // rdi
  int v25; // edx
  GCSDK::CSharedObject *v26; // rax
  float Float; // [rsp+8h] [rbp-48h]
  float flPersonalBoost; // [rsp+Ch] [rbp-44h]
  uint64 targetPlayerSteamID; // [rsp+10h] [rbp-40h]
  float flAllyBoost; // [rsp+18h] [rbp-38h]
  float flBoost; // [rsp+1Ch] [rbp-34h]
  float flBoosta; // [rsp+1Ch] [rbp-34h]
  GCSDK::SOID_t v33; // 0:rsi.8,8:rdx.8

  v4 = GDOTAGCClientSystem();
  result = 0.0;
  v6 = *(v4 + 260);
  if ( v6 != 0 )
  {
    targetPlayerSteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, nPlayerID);
    FrostyFragmentData = GetFrostyFragmentData();
    flBoost = KeyValues::GetFloat(FrostyFragmentData, "BasePhantomFragmentScale", v8);
    v9 = GetFrostyFragmentData();
    flPersonalBoost = KeyValues::GetFloat(v9, "PersonalPhantomFragmentBoost", v10);
    v11 = GetFrostyFragmentData();
    flAllyBoost = KeyValues::GetFloat(v11, "AllyPhantomFragmentBoost", v12);
    v13 = GetFrostyFragmentData();
    Float = KeyValues::GetFloat(v13, "DifficultyPhantomBoost", v14);
    v15 = GetFrostyFragmentData();
    Int = KeyValues::GetInt(v15, "DifficultyPhantomCap", 0);
    if ( Int > nDifficulty )
      Int = nDifficulty;
    v17 = 0;
    flBoosta = ((Int * Float) + 1.0) * flBoost;
    if ( (*(*v6 + 96LL))(v6) > 0 )
    {
      while ( 1 )
      {
        v18 = (*(*v6 + 104LL))(v6, v17);
        v19 = GCClientSystem();
        v33.m_id = v18;
        *&v33.m_type = 1;
        SOCache = CGCClientSystem::GetSOCache(v19, v33);
        if ( SOCache != 0 && (*(*v6 + 136LL))(v6, v17) != 0 )
        {
          PlayerIDBySteamID = CDOTA_PlayerResource::GetPlayerIDBySteamID(g_pDOTAPlayerResource, v18);
          if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, PlayerIDBySteamID) != 1 )
          {
            BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(SOCache, 38);
            if ( BaseTypeCache != 0 )
            {
              m_Size = BaseTypeCache->m_vecObjects.m_Size;
              if ( m_Size != 0 )
                break;
            }
          }
        }
LABEL_16:
        if ( ++v17 >= (*(*v6 + 96LL))(v6) )
          return flBoosta;
      }
      m_pMemory = BaseTypeCache->m_vecObjects.m_Memory.m_pMemory;
      v25 = 0;
      while ( 1 )
      {
        v26 = m_pMemory[v25];
        if ( v26 == 0 || LODWORD(v26[8]._vptr_CSharedObject) != 1 )
          goto LABEL_11;
        if ( targetPlayerSteamID == v18 )
        {
          flBoosta = flBoosta + flPersonalBoost;
LABEL_11:
          if ( ++v25 == m_Size )
            goto LABEL_16;
        }
        else
        {
          ++v25;
          flBoosta = flBoosta + flAllyBoost;
          if ( v25 == m_Size )
            goto LABEL_16;
        }
      }
    }
    return flBoosta;
  }
  return result;
}


// GetFrostyPointsForRound  (line 643, @0x000000000259cea0, libserver.so)
// calls: UTIL_VarArgs, GetFrostyFragmentData, KeyValues::GetInt, GetFrostyBoostAmount
// strings: "PhantomFragments/Round%d"
int __fastcall GetFrostyPointsForRound(int nPlayerID, int nDifficulty, int nRound)
{
  char *v5; // rbx
  KeyValues *FrostyFragmentData; // rax
  int Int; // ebx
  int result; // eax

  v5 = UTIL_VarArgs("PhantomFragments/Round%d", nRound);
  FrostyFragmentData = GetFrostyFragmentData();
  Int = KeyValues::GetInt(FrostyFragmentData, v5, 0);
  result = 0;
  if ( Int > 0 )
    return (GetFrostyBoostAmount(nPlayerID, nDifficulty) * Int);
  return result;
}


// GetGoldFrostyBoostAmount  (line 654, @0x000000000259cf10, libserver.so)  // inlines: FindTypeCache, GetLobby, GetObject, operator[]
// calls: GDOTAGCClientSystem, CDOTA_PlayerResource::GetSteamID, GetFrostyFragmentData, KeyValues::GetFloat, KeyValues::GetInt, GCClientSystem, CGCClientSystem::GetSOCache, CDOTA_PlayerResource::GetPlayerIDBySteamID, CDOTA_PlayerResource::GetTeam, GCSDK::CSharedObjectCache::FindBaseTypeCache
// callers: GetGoldFrostyPointsForRound
// strings: "BaseShiningFragmentScale", "PersonalShiningFragmentBoost", "AllyShiningFragmentBoost", "DifficultyShiningBoost", "DifficultyShiningCap"
float __fastcall GetGoldFrostyBoostAmount(int nPlayerID, int nDifficulty)
{
  CDOTAGCServerSystem *v4; // rax
  float result; // xmm0_4
  __int64 v6; // r15
  KeyValues *FrostyFragmentData; // rax
  float v8; // xmm1_4
  KeyValues *v9; // rax
  float v10; // xmm1_4
  KeyValues *v11; // rax
  float v12; // xmm1_4
  KeyValues *v13; // rax
  float v14; // xmm1_4
  KeyValues *v15; // rax
  int Int; // eax
  unsigned int v17; // ebx
  GCSDK::SOID_t::ID_t v18; // r12
  CGCClientSystem *v19; // rax
  GCSDK::CGCClientSharedObjectCache *SOCache; // r13
  int PlayerIDBySteamID; // eax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  int m_Size; // esi
  GCSDK::CSharedObject **m_pMemory; // rdi
  int v25; // eax
  GCSDK::CSharedObject *v26; // rdx
  float Float; // [rsp+8h] [rbp-48h]
  float flPersonalBoost; // [rsp+Ch] [rbp-44h]
  float flPersonalBoosta; // [rsp+Ch] [rbp-44h]
  uint64 targetPlayerSteamID; // [rsp+10h] [rbp-40h]
  float flAllyBoost; // [rsp+18h] [rbp-38h]
  float flBoost; // [rsp+1Ch] [rbp-34h]
  GCSDK::SOID_t v33; // 0:rsi.8,8:rdx.8

  v4 = GDOTAGCClientSystem();
  result = 0.0;
  v6 = *(v4 + 260);
  if ( v6 != 0 )
  {
    targetPlayerSteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, nPlayerID);
    FrostyFragmentData = GetFrostyFragmentData();
    flBoost = KeyValues::GetFloat(FrostyFragmentData, "BaseShiningFragmentScale", v8);
    v9 = GetFrostyFragmentData();
    flPersonalBoost = KeyValues::GetFloat(v9, "PersonalShiningFragmentBoost", v10);
    v11 = GetFrostyFragmentData();
    flAllyBoost = KeyValues::GetFloat(v11, "AllyShiningFragmentBoost", v12);
    v13 = GetFrostyFragmentData();
    Float = KeyValues::GetFloat(v13, "DifficultyShiningBoost", v14);
    v15 = GetFrostyFragmentData();
    Int = KeyValues::GetInt(v15, "DifficultyShiningCap", 0);
    if ( Int > nDifficulty )
      Int = nDifficulty;
    v17 = 0;
    flPersonalBoosta = ((Int * Float) + 1.0) * flPersonalBoost;
    if ( (*(*v6 + 96LL))(v6) > 0 )
    {
      while ( 1 )
      {
        v18 = (*(*v6 + 104LL))(v6, v17);
        v19 = GCClientSystem();
        v33.m_id = v18;
        *&v33.m_type = 1;
        SOCache = CGCClientSystem::GetSOCache(v19, v33);
        if ( SOCache != 0 && (*(*v6 + 136LL))(v6, v17) != 0 )
        {
          PlayerIDBySteamID = CDOTA_PlayerResource::GetPlayerIDBySteamID(g_pDOTAPlayerResource, v18);
          if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, PlayerIDBySteamID) != 1 )
          {
            BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(SOCache, 38);
            if ( BaseTypeCache != 0 )
            {
              m_Size = BaseTypeCache->m_vecObjects.m_Size;
              if ( m_Size != 0 )
                break;
            }
          }
        }
LABEL_16:
        if ( ++v17 >= (*(*v6 + 96LL))(v6) )
          return flBoost;
      }
      m_pMemory = BaseTypeCache->m_vecObjects.m_Memory.m_pMemory;
      v25 = 0;
      while ( 1 )
      {
        v26 = m_pMemory[v25];
        if ( v26 == 0 || LODWORD(v26[8]._vptr_CSharedObject) != 1 )
          goto LABEL_11;
        if ( targetPlayerSteamID == v18 )
        {
          flBoost = flBoost + flPersonalBoosta;
LABEL_11:
          if ( ++v25 == m_Size )
            goto LABEL_16;
        }
        else
        {
          ++v25;
          flBoost = flBoost + flAllyBoost;
          if ( v25 == m_Size )
            goto LABEL_16;
        }
      }
    }
    return flBoost;
  }
  return result;
}


// GetGoldFrostyPointsForRound  (line 714, @0x000000000259d120, libserver.so)
// calls: UTIL_VarArgs, GetFrostyFragmentData, KeyValues::GetInt, GetGoldFrostyBoostAmount
// strings: "ShiningFragments/Round%d"
int __fastcall GetGoldFrostyPointsForRound(int nPlayerID, int nDifficulty, int nRound)
{
  char *v5; // rbx
  KeyValues *FrostyFragmentData; // rax
  int Int; // ebx
  int result; // eax

  v5 = UTIL_VarArgs("ShiningFragments/Round%d", nRound);
  FrostyFragmentData = GetFrostyFragmentData();
  Int = KeyValues::GetInt(FrostyFragmentData, v5, 0);
  result = 0;
  if ( Int > 0 )
    return (GetGoldFrostyBoostAmount(nPlayerID, nDifficulty) * Int);
  return result;
}


// GetFrostyTimeElapsedMsg  (line 725, @0x000000000259d190, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CVProfScope, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, IsEnabled, Lock, Unlock, ~CVProfScope
// calls: __cxa_guard_acquire, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgDOTAFrostivusTimeElapsed::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc (19 total)
// callers: RecordFrostivusTimeElapsed, SendFrostivusTimeElapsedToGC
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: `guard variable for'GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg, GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg, GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_pMemoryPool, __dso_handle, GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsg()
GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed> *__cdecl GetFrostyTimeElapsedMsg()
{
  int m_enabled; // eax
  bool v2; // r12
  GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed> *v3; // r14
  const google::protobuf::Descriptor *v4; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v6; // rax
  uint32 v7; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v8; // rax

  if ( `guard variable for'GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg != 0 )
    return &GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg;
  if ( __cxa_guard_acquire(&`guard variable for'GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg) != 0 )
  {
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg, 0x1CE6u);
    GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg.m_pProtoBufBody = 0;
    GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg._vptr_CProtoBufMsgBase = &off_41067F0;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v2 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_bRegisteredWithMemoryPoolMgr )
      {
        v3 = operator new(0x28u);
        v4 = CMsgDOTAFrostivusTimeElapsed::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v4->options_ + 8),
                  msgpool_hard_limit.number_,
                  msgpool_hard_limit.default_value_);
        v6 = CMsgDOTAFrostivusTimeElapsed::descriptor();
        v7 = google::protobuf::internal::ExtensionSet::GetInt32(
               (v6->options_ + 8),
               msgpool_soft_limit.number_,
               msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v3, v7, Int32);
        v3->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110870;
        GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_pMemoryPool = v3;
        v8 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v8, v3);
        GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg.m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_pMemoryPool);
    if ( v2 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    __cxa_guard_release(&`guard variable for'GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg);
    __cxa_atexit(
      GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsg,
      &GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg,
      &_dso_handle);
  }
  return &GetFrostyTimeElapsedMsg(void)::g_FrostyTimeElapsedMsg;
}


// RecordFrostivusTimeElapsed  (line 731, @0x000000000259d390, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTAFrostivusTimeElapsed_User>::TypeHandler>, Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTAFrostivusTimeElapsed_User>::TypeHandler>, Mutable, Mutable<google::protobuf::RepeatedPtrField<CMsgDOTAFrostivusTimeElapsed_User>::TypeHandler>, New, add_users, mutable_users, set_account_id, set_has_account_id, set_has_time_elapsed_s, set_time_elapsed_s, users
// calls: GetFrostyTimeElapsedMsg, operator new, CMsgDOTAFrostivusTimeElapsed_User::CMsgDOTAFrostivusTimeElapsed_User, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: SendFrostyPointsMessageToGC
void __fastcall RecordFrostivusTimeElapsed(uint32 unAccountID, uint32 unSeconds)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  google::protobuf::internal::RepeatedPtrFieldBase *m_pProtoBufBody; // rbx
  __int64 current_size; // rax
  int allocated_size; // edx
  CMsgDOTAFrostivusTimeElapsed_User *v9; // r14
  __int64 v10; // rax
  void **v11; // rdx
  CMsgDOTAFrostivusTimeElapsed_User *v12; // rax
  int v13; // edx
  uint32 v14; // r13d
  __int64 v15; // rax
  void **elements; // rdx

  v4 = 0;
  while ( *(GetFrostyTimeElapsedMsg()->m_pProtoBufBody + 8) > v4 )
  {
    v5 = 8 * v4++;
    if ( *(*(*(GetFrostyTimeElapsedMsg()->m_pProtoBufBody + 3) + v5) + 24LL) == unAccountID )
    {
      v14 = *(*(*(GetFrostyTimeElapsedMsg()->m_pProtoBufBody + 3) + v5) + 28LL) + unSeconds;
      v15 = *(*(GetFrostyTimeElapsedMsg()->m_pProtoBufBody + 3) + v5);
      *(v15 + 16) |= 2u;
      *(v15 + 28) = v14;
      return;
    }
  }
  m_pProtoBufBody = GetFrostyTimeElapsedMsg()->m_pProtoBufBody;
  current_size = m_pProtoBufBody[1].current_size_;
  allocated_size = m_pProtoBufBody[1].allocated_size_;
  if ( current_size < allocated_size )
  {
    elements = m_pProtoBufBody[1].elements_;
    m_pProtoBufBody[1].current_size_ = current_size + 1;
    v12 = elements[current_size];
  }
  else
  {
    if ( allocated_size == m_pProtoBufBody[1].total_size_ )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(m_pProtoBufBody + 1, allocated_size + 1);
    v9 = operator new(0x20u);
    CMsgDOTAFrostivusTimeElapsed_User::CMsgDOTAFrostivusTimeElapsed_User(v9);
    v10 = m_pProtoBufBody[1].current_size_;
    v11 = m_pProtoBufBody[1].elements_;
    ++m_pProtoBufBody[1].allocated_size_;
    m_pProtoBufBody[1].current_size_ = v10 + 1;
    v11[v10] = v9;
    v12 = v9;
  }
  v13 = *(v12 + 4);
  *(v12 + 6) = unAccountID;
  *(v12 + 7) = unSeconds;
  *(v12 + 4) = v13 | 3;
}


// SendFrostivusTimeElapsedToGC  (line 747, @0x000000000259d4c0, libserver.so)  // inlines: GetMatchID, set_has_match_id, set_match_id
// calls: GetFrostyTimeElapsedMsg, GCClientSystem, CGCClientSystem::BSendMessage
void __cdecl SendFrostivusTimeElapsedToGC()
{
  __int64 v0; // rbx
  CMsgDOTAFrostivusTimeElapsed *m_pProtoBufBody; // rax
  GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed> *FrostyTimeElapsedMsg; // rbx
  CGCClientSystem *v3; // rax
  GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed> *v4; // rax

  if ( *(GetFrostyTimeElapsedMsg()->m_pProtoBufBody + 8) > 0 )
  {
    v0 = *&g_pGameRules[16].m_szQuestName[88];
    m_pProtoBufBody = GetFrostyTimeElapsedMsg()->m_pProtoBufBody;
    *(m_pProtoBufBody + 4) |= 4u;
    *(m_pProtoBufBody + 6) = v0;
    FrostyTimeElapsedMsg = GetFrostyTimeElapsedMsg();
    v3 = GCClientSystem();
    CGCClientSystem::BSendMessage(v3, FrostyTimeElapsedMsg);
    v4 = GetFrostyTimeElapsedMsg();
    (*(*v4->m_pProtoBufBody + 32LL))(v4->m_pProtoBufBody);
  }
}


// SendFrostyPointsMessageToGC  (line 761, @0x00000000025ab520, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints>::TypeHandler>, AllocProto, CProtoBufMsg, CVProfScope, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetGameTime, GetLobby, IsEnabled, IsValid, Lock, New, SaveEventPointsForSignOut, Unlock, add_award_points, operator(), set_account_id, set_event_id, set_has_account_id, set_has_event_id, set_has_match_id, set_has_points, set_match_id, set_points, ~CProtoBufMsg, ~CVProfScope, ~unique_ptr
// calls: GDOTAGCClientSystem, Msg, IsAppDota2Main, ScriptTableToKeyValues, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgDOTAAwardEventPoints::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr (35 total)
// strings: "Not awarding Frosty Points as this is a low priority game.\n", "FrostyPointKV", "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Player%d", "total_frosty_points" (8 total)
// globals: s_fLastRecordedTime, GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool
void __fastcall SendFrostyPointsMessageToGC(HSCRIPT hFrostyPointData)
{
  __int64 v2; // rbx
  float v3; // xmm1_4
  int m_enabled; // eax
  bool v5; // r12
  GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints> *v6; // r13
  const google::protobuf::Descriptor *v7; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v9; // rax
  uint32 v10; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v11; // rax
  google::protobuf::Message *m_pProtoBufBody; // rax
  __int64 v13; // rdx
  int v14; // r12d
  CMsgDOTAAwardEventPoints *v15; // rax
  int PlayerIDBySteamID; // edx
  KeyValues *Key; // r15
  CMsgDOTAAwardEventPoints *v18; // r14
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  CMsgDOTAAwardEventPoints_AwardPoints *v23; // r14
  int Int; // eax
  unsigned __int64 v25; // r13
  __int64 v26; // rdx
  CMsgDOTAAwardEventPoints *v27; // rbx
  CDOTAGCServerSystem *v28; // rax
  CGCClientSystem *v29; // rax
  float fElapsedTime; // [rsp+Ch] [rbp-1A4h]
  KeyValues *pFrostyPointKV; // [rsp+20h] [rbp-190h]
  CMsgDOTAAwardEventPoints_AwardPoints *nPoints; // [rsp+28h] [rbp-188h]
  int nPointsa; // [rsp+28h] [rbp-188h]
  GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints> msg; // [rsp+30h] [rbp-180h] BYREF
  CFmtStr sPlayerKey; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v36; // [rsp+178h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v2 = *(GDOTAGCClientSystem() + 260);
  if ( v2 == 0 )
  {
    Warning("AwardFrostyPoints failed as no lobby found!\n");
    return;
  }
  if ( *(v2 + 350) != 0 )
  {
    Msg("Not awarding Frosty Points as this is a low priority game.\n");
    return;
  }
  if ( IsAppDota2Main() || *(v2 + 156) == 0 && *(v2 + 152) == 4 )
  {
    v3 = *&g_pGameRules[18].m_szQuestName[20] - s_fLastRecordedTime;
    s_fLastRecordedTime = *&g_pGameRules[18].m_szQuestName[20];
    fElapsedTime = v3;
    pFrostyPointKV = ScriptTableToKeyValues(g_pScriptVM, "FrostyPointKV", hFrostyPointData);
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1CD8u);
    msg.m_pProtoBufBody = 0;
    msg._vptr_CProtoBufMsgBase = &off_4106830;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v5 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_bRegisteredWithMemoryPoolMgr )
      {
        v6 = operator new(0x28u);
        v7 = CMsgDOTAAwardEventPoints::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v7->options_ + 8),
                  msgpool_hard_limit.number_,
                  msgpool_hard_limit.default_value_);
        v9 = CMsgDOTAAwardEventPoints::descriptor();
        v10 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v9->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v6, v10, Int32);
        v6->_vptr_CProtoBufMsgMemoryPoolBase = &off_41108B0;
        GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool = v6;
        v11 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v11, v6);
        GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool);
    msg.m_pProtoBufBody = m_pProtoBufBody;
    if ( v5 )
    {
      CVProfile::ExitScope(&g_VProfCurrentProfile);
      m_pProtoBufBody = msg.m_pProtoBufBody;
    }
    v13 = *(v2 + 216);
    v14 = 0;
    *(m_pProtoBufBody + 4) |= 2u;
    *(m_pProtoBufBody + 6) = v13;
    v15 = msg.m_pProtoBufBody;
    *(msg.m_pProtoBufBody + 4) |= 4u;
    *(v15 + 14) = 0;
    while ( 1 )
    {
      if ( v14 >= (*(*v2 + 96LL))(v2) )
      {
        v27 = msg.m_pProtoBufBody;
        v28 = GDOTAGCClientSystem();
        CMsgDOTAAwardEventPoints::CopyFrom((v28 + 1960), v27);
        v29 = GCClientSystem();
        CGCClientSystem::BSendMessage(v29, &msg);
        msg._vptr_CProtoBufMsgBase = &off_4106830;
        if ( msg.m_pProtoBufBody != 0 )
        {
          GCSDK::CProtoBufMsgMemoryPoolBase::Free(
            GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool,
            msg.m_pProtoBufBody);
          msg.m_pProtoBufBody = 0;
        }
        GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
        if ( pFrostyPointKV != 0 )
        {
          KeyValues::~KeyValues(pFrostyPointKV);
          KeyValues::operator delete(pFrostyPointKV);
        }
        return;
      }
      v25 = (*(*v2 + 104LL))(v2, v14);
      if ( (v25 & 0xF0000000000000LL) != 0 && ((v25 >> 52) & 0xF) <= 0xA && (HIBYTE(v25) - 1) <= 3u )
      {
        if ( (BYTE6(v25) & 0xF0) == 0x10 )
        {
          if ( v25 == 0 || (HIDWORD(v25) & 0xFFFFFu) > 4 )
            goto LABEL_27;
        }
        else if ( (BYTE6(v25) & 0xF0) == 0x70 )
        {
          if ( v25 == 0 || (v25 & 0xFFFFF00000000LL) != 0 )
            goto LABEL_27;
        }
        else if ( (BYTE6(v25) & 0xF0) == 0x30 && v25 == 0 )
        {
          goto LABEL_27;
        }
        PlayerIDBySteamID = CDOTA_PlayerResource::GetPlayerIDBySteamID(g_pDOTAPlayerResource, v25);
        if ( PlayerIDBySteamID >= 0 )
        {
          CFmtStrN<256,false>::CFmtStrN(&sPlayerKey, "Player%d", PlayerIDBySteamID);
          Key = KeyValues::FindKey(pFrostyPointKV, sPlayerKey.m_szBuf, 0);
          if ( Key != 0 )
          {
            v18 = msg.m_pProtoBufBody;
            v19 = *(msg.m_pProtoBufBody + 8);
            v20 = *(msg.m_pProtoBufBody + 9);
            if ( v19 < v20 )
            {
              v26 = *(msg.m_pProtoBufBody + 3);
              *(msg.m_pProtoBufBody + 8) = v19 + 1;
              v23 = *(v26 + 8 * v19);
            }
            else
            {
              if ( v20 == *(msg.m_pProtoBufBody + 10) )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msg.m_pProtoBufBody + 1, v20 + 1);
              nPoints = operator new(0x28u);
              CMsgDOTAAwardEventPoints_AwardPoints::CMsgDOTAAwardEventPoints_AwardPoints(nPoints);
              v21 = *(v18 + 8);
              v22 = *(v18 + 3);
              ++*(v18 + 9);
              *(v18 + 8) = v21 + 1;
              *(v22 + 8 * v21) = nPoints;
              v23 = nPoints;
            }
            *(v23 + 4) |= 1u;
            *(v23 + 6) = v25;
            nPointsa = KeyValues::GetInt(Key, "total_frosty_points", 0);
            Int = KeyValues::GetInt(Key, "total_gold_frosty_points", 0);
            *(v23 + 4) |= 2u;
            *(v23 + 7) = nPointsa;
            if ( Int > 0 )
              RecordFrostivusTimeElapsed(v25, fElapsedTime);
          }
        }
      }
LABEL_27:
      ++v14;
    }
  }
}


