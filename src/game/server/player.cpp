// Reconstructed from DWARF by pahole; not original source.

// src/game/server/player.cpp:2991
class ValidObserverTargetCounter {
	int m_team;  // +0x8
	bool m_includeBots;  // +0xc

	int m_count;  // +0x10
	ValidObserverTargetCounter(CBasePlayer *);
	bool operator()(CBasePlayer *);
	int GetCount();

	// sizeof = 24
};

// src/game/server/player.cpp:6560
class CBloodSplat : public CPointEntity {
public:

	CBloodSplat();
	void Init(CBaseEntity *);
	virtual void Think();
	virtual ~CBloodSplat();

	// vtable[117] Think
	// sizeof = 776
};

// src/game/server/player.cpp:8387
class CStripWeapons : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CPointEntity BaseClass;

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
	CStripWeapons(CStripWeapons &);
	CStripWeapons(CStripWeapons &);
	CStripWeapons();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void InputStripWeapons(inputdata_t &);
	void InputStripWeaponsAndSuit(inputdata_t &);
	void InputStripActiveWeapon(inputdata_t &);
	void InputStripWeaponByClassname(inputdata_t &);
	void StripWeapons(inputdata_t &, bool);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CStripWeapons();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 776
};

// src/game/server/player.cpp:8509
class CRevertSaved : public CModelPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_loadTime;  // +0x480
	float m_Duration;  // +0x484
	float m_HoldTime;  // +0x488
	typedef CModelPointEntity BaseClass;

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
	CRevertSaved(CRevertSaved &);
	CRevertSaved(CRevertSaved &);
	CRevertSaved();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void LoadThink();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	float Duration();
	float HoldTime();
	float LoadTime();
	void SetDuration(float);
	void SetHoldTime(float);
	void SetLoadTime(float);
	void InputReload(inputdata_t &);
	virtual ~CRevertSaved();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[108] Use
	// vtable[34] GetDataDescMap
	// sizeof = 1168
};

// src/game/server/player.cpp:8634
class CMovementSpeedMod : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CPointEntity BaseClass;

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
	CMovementSpeedMod(CMovementSpeedMod &);
	CMovementSpeedMod(CMovementSpeedMod &);
	CMovementSpeedMod();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void InputSpeedMod(inputdata_t &);
	int GetDisabledButtonMask();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CMovementSpeedMod();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 776
};

// src/game/server/player.cpp:8765
class C_CBasePlayer_MapInstall {
	C_CBasePlayer_MapInstall();

	// sizeof = 1
};

// src/game/server/player.cpp:9820
class DisableAutokick {
private:

	int m_userID;  // +0x0
	DisableAutokick(int);
	bool operator()(CBasePlayer *);

	// sizeof = 4
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CC_GiveCurrentAmmo  (line 249, @0x00000000022babe0, libserver.so)
// calls: UTIL_PlayerByIndex, CBaseCombatCharacter::GetActiveWeapon, CBaseCombatWeapon::UsesPrimaryAmmo, CBaseCombatWeapon::UsesSecondaryAmmo, GetAmmoDef, CAmmoDef::GetAmmoOfIndex, CBaseCombatCharacter::GiveAmmo
void __fastcall CC_GiveCurrentAmmo(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *v2; // rax
  CBaseCombatCharacter *v3; // r12
  CBaseCombatWeapon *ActiveWeapon; // rax
  CBaseCombatWeapon *v5; // rbx
  unsigned int v6; // ebx
  CAmmoDef *v7; // rax
  int v8; // r13d
  CAmmoDef *v9; // rax
  Ammo_t *v10; // rax
  unsigned int v11; // r13d
  CAmmoDef *AmmoDef; // rax
  int v13; // r14d
  CAmmoDef *v14; // rax
  Ammo_t *AmmoOfIndex; // rax

  v2 = UTIL_PlayerByIndex(1);
  v3 = v2;
  if ( v2 != 0 )
  {
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(v2);
    v5 = ActiveWeapon;
    if ( ActiveWeapon != 0 )
    {
      if ( CBaseCombatWeapon::UsesPrimaryAmmo(ActiveWeapon) )
      {
        v11 = (*(v5->_vptr_IHandleEntity + 359))(v5);
        if ( v11 != -1 )
        {
          AmmoDef = GetAmmoDef();
          v13 = (*AmmoDef->_vptr_CAmmoDef)(AmmoDef, v11, v3);
          v14 = GetAmmoDef();
          AmmoOfIndex = CAmmoDef::GetAmmoOfIndex(v14, v11);
          CBaseCombatCharacter::GiveAmmo(v3, v13, AmmoOfIndex->pName, 0);
        }
      }
      if ( CBaseCombatWeapon::UsesSecondaryAmmo(v5) && (*(v5->_vptr_IHandleEntity + 278))(v5) != 0 )
      {
        v6 = (*(v5->_vptr_IHandleEntity + 360))(v5);
        if ( v6 != -1 )
        {
          v7 = GetAmmoDef();
          v8 = (*v7->_vptr_CAmmoDef)(v7, v6, v3);
          v9 = GetAmmoDef();
          v10 = CAmmoDef::GetAmmoOfIndex(v9, v6);
          CBaseCombatCharacter::GiveAmmo(v3, v8, v10->pName, 0);
        }
      }
    }
  }
}


// CInfoPlayerStart::GetDataDescMap  (line 292, @0x00000000022b7ce0, libserver.so)
// globals: CInfoPlayerStart::m_DataMap
datamap_t *__fastcall CInfoPlayerStart::GetDataDescMap(CInfoPlayerStart *const this)
{
  return &CInfoPlayerStart::m_DataMap;
}


// CInfoPlayerStart::AddDatadescMetadataKeys  (line 292, @0x00000000022dfba0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CInfoPlayerStart::GetEntityClass(void)
void __fastcall CInfoPlayerStart::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CInfoPlayerStart::GetEntityClass);
}


// CInfoPlayerStart::GetBaseMap  (line 292, @0x00000000022dfbc0, libserver.so)
datamap_t *__cdecl CInfoPlayerStart::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CInfoPlayerStart>  (line 292, @0x00000000022dfbd0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CInfoPlayerStart"
// globals: `guard variable for'DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder, CInfoPlayerStart::GetEntityClass(void), CInfoPlayerStart::m_DataMap, DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder) != 0 )
  {
    DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder.m_pszBase = "CInfoPlayerStart";
    DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::nameHolder,
      &_dso_handle);
  }
  CInfoPlayerStart::m_DataMap.dataNumFields = 4;
  CInfoPlayerStart::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CInfoPlayerStart::m_DataMap.dataDesc = &DataMapInit<CInfoPlayerStart>(CInfoPlayerStart *)::dataDesc[1];
  AddDatadescMetadataKeys(&CInfoPlayerStart::m_DataMap, CInfoPlayerStart::GetEntityClass);
  return &CInfoPlayerStart::m_DataMap;
}


// CBasePlayer::CEntityInstanceEntityClass::InitOptionalTables  (line 346, @0x00000000022f7cb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBasePlayer::InitScriptDesc, CBasePlayer::SetupEntClassInputs, CBasePlayer::SetupEntClassComponentOverrides, CBaseCombatCharacter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort (13 total)
// strings: "CBasePlayer"
// globals: `guard variable for'CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass, CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBasePlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo, CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo
bool __cdecl CBasePlayer::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass) != 0 )
  {
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_designerName.u.m_Id = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass._vptr_CEntityClass = off_3F79390;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_ComponentOffsets.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_AllHelpers.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classInputs.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classOutputs.m_Size = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_requiredEHandle.m_Index = -1;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_hNetworkSerializer = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pBaseClassInfo = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pClassInfo = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_flags = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_nAllHelpersFlags = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pScriptClassDesc = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pInputs = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_nInputCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pOutputs = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_nOutputCount = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pGameClass = 0;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass._vptr_CEntityClass = off_3FD0690;
    __cxa_guard_release(&`guard variable for'CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass);
    __cxa_atexit(
      CBasePlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCBasePlayerClass == 0 )
  {
    if ( `guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo) != 0 )
    {
      EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo,
        "CBasePlayer",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo);
    }
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pClassInfo = &CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pBaseClassInfo = CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo.m_pBaseClassInfo;
    g_pEntityCBasePlayerClass = &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass;
    CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo.m_pClass = &CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass;
    CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_pScriptClassDesc = CBasePlayer::InitScriptDesc();
    CBasePlayer::SetupEntClassInputs(g_pEntityCBasePlayerClass);
    CBasePlayer::SetupEntClassComponentOverrides(g_pEntityCBasePlayerClass);
  }
  CBasePlayer::GetEntityClassInternal(void)::g_EntityCBasePlayerClass.m_flags |= 4u;
  return 1;
}


// CPlayerState::AddDatadescMetadataKeys  (line 351, @0x00000000022dfca0, libserver.so)
void __fastcall CPlayerState::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CPlayerState::GetBaseMap  (line 351, @0x00000000022dfcb0, libserver.so)
datamap_t *__cdecl CPlayerState::GetBaseMap()
{
  return 0;
}


// DataMapInit<CPlayerState>  (line 351, @0x00000000022dfcc0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPlayerState"
// globals: `guard variable for'DataMapInit<CPlayerState>(CPlayerState *)::nameHolder, CPlayerState::m_DataMap, DataMapInit<CPlayerState>(CPlayerState *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPlayerState>(CPlayerState *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPlayerState>(CPlayerState *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPlayerState>(CPlayerState *)::nameHolder) != 0 )
  {
    DataMapInit<CPlayerState>(CPlayerState *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPlayerState>(CPlayerState *)::nameHolder.m_pszBase = "CPlayerState";
    DataMapInit<CPlayerState>(CPlayerState *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPlayerState>(CPlayerState *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPlayerState>(CPlayerState *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPlayerState>(CPlayerState *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPlayerState>(CPlayerState *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPlayerState>(CPlayerState *)::nameHolder,
      &_dso_handle);
  }
  CPlayerState::m_DataMap.baseMap = 0;
  CPlayerState::m_DataMap.dataDesc = &DataMapInit<CPlayerState>(CPlayerState *)::dataDesc[1];
  CPlayerState::m_DataMap.dataNumFields = 8;
  return &CPlayerState::m_DataMap;
}


// CBasePlayer::GetDataDescMap  (line 367, @0x00000000022b7cf0, libserver.so)
// globals: CBasePlayer::m_DataMap
datamap_t *__fastcall CBasePlayer::GetDataDescMap(CBasePlayer *const this)
{
  return &CBasePlayer::m_DataMap;
}


// CBasePlayer::AddDatadescMetadataKeys  (line 367, @0x00000000022dfd80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBasePlayer::GetEntityClass(void)
void __fastcall CBasePlayer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBasePlayer::GetEntityClass);
}


// CBasePlayer::GetBaseMap  (line 367, @0x00000000022dfda0, libserver.so)
datamap_t *__cdecl CBasePlayer::GetBaseMap()
{
  return &CBaseCombatCharacter::m_DataMap;
}


// DataMapInit<CBasePlayer>  (line 367, @0x00000000022f3d40, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, CopyConstruct<char*>, Element, GenerateName, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CBasePlayer"
// globals: `guard variable for'DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder, `guard variable for'DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc, CBasePlayer::GetEntityClass(void), CBasePlayer::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<, DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CBasePlayer>(CBasePlayer *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder) != 0 )
  {
    DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_pszBase = "CBasePlayer";
    DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder,
      &_dso_handle);
  }
  CBasePlayer::m_DataMap.baseMap = &CBaseCombatCharacter::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc[103].fieldSize = 2;
    DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc[2].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc[21].fieldSize = 32;
    DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc[52].fieldSize = 5;
    DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc[133].fieldSize = 8;
    v2 = operator new[](DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v2, DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_pszBase), "PlayerDeathThink");
    m_Size = DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Size == DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBasePlayer>(CBasePlayer *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc[166].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc);
  }
  CBasePlayer::m_DataMap.dataNumFields = 184;
  CBasePlayer::m_DataMap.dataDesc = &DataMapInit<CBasePlayer>(CBasePlayer *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBasePlayer::m_DataMap, CBasePlayer::GetEntityClass);
  return &CBasePlayer::m_DataMap;
}


// HandInfo_t::AddDatadescMetadataKeys  (line 641, @0x00000000022dfdb0, libserver.so)
void __fastcall HandInfo_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// HandInfo_t::GetBaseMap  (line 641, @0x00000000022dfdc0, libserver.so)
datamap_t *__cdecl HandInfo_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<HandInfo_t>  (line 641, @0x00000000022dfdd0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "HandInfo_t"
// globals: `guard variable for'DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder, HandInfo_t::m_DataMap, DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<HandInfo_t>(HandInfo_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder) != 0 )
  {
    DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder.m_pszBase = "HandInfo_t";
    DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<HandInfo_t>(HandInfo_t *)::nameHolder,
      &_dso_handle);
  }
  HandInfo_t::m_DataMap.baseMap = 0;
  HandInfo_t::m_DataMap.dataDesc = &DataMapInit<HandInfo_t>(HandInfo_t *)::dataDesc[1];
  HandInfo_t::m_DataMap.dataNumFields = 10;
  return &HandInfo_t::m_DataMap;
}


// CBasePlayer::GetViewModel  (line 656, @0x00000000022dfe90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CBaseCombatWeapon::Operator_FrameUpdate, CBasePlayer::DoMuzzleFlash, CBasePlayer::Weapon_Switch, CBaseCombatWeapon::SendViewModelAnim, CBaseCombatWeapon::SetWeaponVisible, CBaseCombatWeapon::IsWeaponVisible, CBaseCombatWeapon::SetViewModel, CBaseCombatWeapon::GetViewModelSequenceDuration, CBaseCombatWeapon::IsViewModelSequenceFinished, CBaseCombatWeapon::DefaultReload, CBaseCombatWeapon::SetIdealActivity, CBasePlayer::ItemPostFrame (14 total)
// globals: CEntityHandle::gm_pEntityList
CBaseViewModel *__fastcall CBasePlayer::GetViewModel(CBasePlayer *const this, int index)
{
  CBaseViewModel *result; // rax
  unsigned __int16 *v3; // rcx
  int v4; // edx
  __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  result = 0;
  v3 = &this->m_hViewModel + 2 * index;
  v4 = *v3;
  if ( (*v3 + 2) > 1 )
  {
    v5 = *v3;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v3 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
        return v7->m_pInstance;
    }
  }
  return result;
}


// CBasePlayer::CreateViewModel  (line 664, @0x00000000022c13f0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetViewModel, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator=
// calls: CreateEntityByName, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CBaseViewModel::SetOwner, CBaseViewModel::SetIndex, DispatchSpawn, CBaseEntity::FollowEntity, memcmp
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::CreateViewModel(CBasePlayer *const this, int index)
{
  int *v4; // rbx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseViewModel *EntityByName; // r14
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v10; // cx
  int s2[12]; // [rsp+0h] [rbp-30h] BYREF

  v4 = &this->m_hViewModel + index;
  if ( (*v4 + 2) <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v4 >> 9) & 0x3F]) == 0
    || (v6 = &v5[*v4 & 0x1FF]) == 0
    || *v4 != v6->m_EHandle.m_Index
    || v6->m_pInstance == 0 )
  {
    EntityByName = CreateEntityByName("viewmodel", -1);
    if ( EntityByName != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      CBaseEntity::SetAbsOrigin(EntityByName, AbsOrigin);
      CBaseViewModel::SetOwner(EntityByName, this);
      CBaseViewModel::SetIndex(EntityByName, index);
      DispatchSpawn(EntityByName, 0);
      CBaseEntity::FollowEntity(EntityByName, this, 1);
      m_pEntity = EntityByName->m_pEntity;
      s2[0] = -1;
      if ( m_pEntity != 0 )
      {
        v10 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
      }
      if ( memcmp(v4, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 3116, index, 0xFFFFFFFFLL);
        *v4 = s2[0];
      }
    }
  }
}


// CBasePlayer::DestroyViewModels  (line 685, @0x00000000022dff00, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetViewModel, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator=
// calls: UTIL_Remove, memcmp
// callers: CMultiplayRules::ClientDisconnected
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::DestroyViewModels(CBasePlayer *const this)
{
  unsigned int v2; // r12d
  _WORD *v3; // rbx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  int s2[12]; // [rsp+0h] [rbp-30h] BYREF

  v2 = 1;
  v3 = &this->m_hViewModel + 2;
  do
  {
    if ( (*v3 + 2) > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v3 >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[*v3 & 0x1FF];
        if ( v5 != 0 && *v3 == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        {
          UTIL_Remove(v5->m_pInstance);
          s2[0] = -1;
          if ( memcmp(v3, s2, 4u) != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 3116, v2, 0xFFFFFFFFLL);
            *v3 = s2[0];
          }
        }
      }
    }
    --v2;
    v3 -= 2;
  }
  while ( v2 != -1 );
}


// CBasePlayer::CreatePlayer  (line 705, @0x00000000022dffd0, libserver.so)
// calls: CreateEntityByName
// callers: CEntitySaveRestoreBlockHandler::Restore, CreateEntitiesInTransitionList
CBasePlayer *__fastcall CBasePlayer::CreatePlayer(const char *className, CEntityIndex nEntIndex)
{
  return CreateEntityByName(className, nEntIndex);
}


// CBasePlayer::CBasePlayer  (line 714, @0x00000000022fd6f0, libserver.so)  // inlines: AddEFlags, CBitVec, CBitVecT, CEntityHandle, CEntityIndex, CEntityOwnerPtr, CHandle, CNetworkArrayBase, CNetworkHandleBase, CNetworkVarBase, CNetworkVectorBase, CPlayerInfo, CPlayerState, CSimpleSimTimer, CSmartPtr, CSoundParameters, CUserCmd, CUtlLinkedList, CUtlMemory, CUtlString, CUtlStringToken, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ChangeAccessorFieldPathIndex_t, ClearAll, Color, ConstructList, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<long long unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetEntityIdentity, GetEntryIndex, HandInfo_t, IndexToIdentity, Init, IntervalTimer, IsValid, LookupEntity, NetworkStateChanged, NetworkVar_m_Local, NetworkVar_m_PlayerFog, Purge, RemoveAll, Reset, ResetDbgInfo, Set, SetOuter, SetParent, StepSoundCache_t, Zero, entindex, fogplayerparams_t, memset, operator!=, operator=, operator=<float>, operator=<int>, ~CPlayerInfo, ~CPlayerState, ~CSoundParameters, ~CUserCmd, ~CUtlLinkedList, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~StepSoundCache_t
// calls: CBaseCombatCharacter::CBaseCombatCharacter, CPlayerLocalData::CPlayerLocalData, HandInfo_t::Reset, CBasePlayer::Weapon_SetLast, CBasePlayer::ResetObserverMode, CEntityInstance::GetEntityIndex, CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int>::Purge, CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int>::Purge, CUtlString::FreeMemoryBlock, CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::~CUtlLinkedList (17 total)
// callers: CBasePlayer::CEntityInstanceEntityClass::ConstructInstance, CBaseMultiplayerPlayer::CBaseMultiplayerPlayer
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::CBasePlayer(CBasePlayer *const this)
{
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *p_m_FilteredAngles; // r14
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *p_m_vFilteredVelocity; // r15
  CNetworkVarBase<Quaternion,HandInfo_t::NetworkVar_m_FilteredAngularVel> *p_m_FilteredAngularVel; // r13
  HandInfo_t *v5; // r12
  signed __int64 v6; // rax
  vec_t x; // xmm0_4
  HandInfo_t *v8; // r13
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 i; // r12
  CBasePlayer *m_StepSoundCache; // rax
  CBasePlayer *v13; // rdx
  signed __int64 v14; // rdx
  int (**vptr_IHandleEntity)(...); // rax
  uint32 m_Index; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  bool v19; // zf
  uint32 v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  uint32 v23; // edx
  CConcreteEntityList *v24; // rax
  CEntityIdentity *v25; // rcx
  CEntityIdentity *v26; // rcx
  uint32 v27; // edx
  CEntityIdentity *v28; // rax
  CEntityIdentity *v29; // rax
  CEntityIdentity *m_pEntity; // rax
  __int64 (__fastcall *v31)(IVEngineServer2 *, _QWORD); // r15
  CEntityIndex v32; // eax
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *p_m_vFilteredPosition; // [rsp+0h] [rbp-60h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *p_m_Angles; // [rsp+8h] [rbp-58h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *p_m_vPosition; // [rsp+10h] [rbp-50h]
  HandInfo_t *hmd_controllers_info; // [rsp+28h] [rbp-38h]
  HandInfo_t *v37; // [rsp+28h] [rbp-38h]

  CBaseCombatCharacter::CBaseCombatCharacter(this);
  this->_vptr_IHandleEntity = &off_4086CF0;
  CPlayerLocalData::CPlayerLocalData(&this->m_Local);
  this->m_PlayerFog.m_hCtrl.m_Value.m_Index = -1;
  this->m_Local._vptr_CPlayerLocalData = &off_4073670;
  this->m_PlayerFog._vptr_fogplayerparams_t = &off_40736B0;
  this->m_pl._vptr_CPlayerState = &off_3FEA5B0;
  this->m_PlayerFog.m_OldColor = 0;
  this->m_PlayerFog.m_NewColor = 0;
  p_m_FilteredAngles = &this->m_LastCmd.hmd_controllers_info[0].m_FilteredAngles;
  this->m_PlayerFog.m_flTransitionTime = -1.0;
  p_m_vFilteredVelocity = &this->m_LastCmd.hmd_controllers_info[0].m_vFilteredVelocity;
  this->m_PlayerFog.m_flOldStart = 0.0;
  p_m_FilteredAngularVel = &this->m_LastCmd.hmd_controllers_info[0].m_FilteredAngularVel;
  this->m_PlayerFog.m_flOldEnd = 0.0;
  this->m_PlayerFog.m_flOldMaxDensity = 1.0;
  this->m_PlayerFog.m_flOldHDRColorScale = 1.0;
  this->m_PlayerFog.m_flOldFarZ = 0.0;
  this->m_PlayerFog.m_flNewStart = 0.0;
  this->m_PlayerFog.m_flNewEnd = 0.0;
  this->m_PlayerFog.m_flNewMaxDensity = 1.0;
  this->m_PlayerFog.m_flNewHDRColorScale = 1.0;
  this->m_PlayerFog.m_flNewFarZ = 0.0;
  this->m_ActivatedTonemapList.m_Size = 0;
  this->m_ActivatedTonemapList.m_Memory.m_pMemory = 0;
  this->m_ActivatedTonemapList.m_Memory.m_nAllocationCount = 0;
  this->m_ActivatedTonemapList.m_Memory.m_nGrowSize = 0;
  this->m_hPostProcessCtrl.m_Value.m_Index = -1;
  this->m_hColorCorrectionCtrl.m_Value.m_Index = -1;
  this->m_hTriggerSoundscapeList.m_Size = 0;
  this->m_hTriggerSoundscapeList.m_Memory.m_pMemory = 0;
  this->m_hTriggerSoundscapeList.m_Memory.m_nAllocationCount = 0;
  this->m_hTriggerSoundscapeList.m_Memory.m_nGrowSize = 0;
  this->m_pl.netname.u.m_Id = 0;
  this->m_pl.fixangle = 0;
  this->m_pl.anglechange.x = 0.0;
  this->m_pl.anglechange.y = 0.0;
  this->m_pl.anglechange.z = 0.0;
  this->m_pl.hltv = 0;
  this->m_pl.frags = 0;
  this->m_lastHeldVoteTimer._vptr_IntervalTimer = off_3FD0350;
  this->m_pl.deaths = 0;
  this->m_fOnTarget.m_Value = 0;
  this->m_hUseEntity.m_Value.m_Index = -1;
  this->m_hHeldEntity.m_Value.m_Index = -1;
  this->m_hVehicle.m_Value.m_Index = -1;
  this->m_iBonusProgress.m_Value = 0;
  this->m_iBonusChallenge.m_Value = 0;
  this->m_flDeathTime.m_Value = 0.0;
  this->m_iObserverMode.m_Value = 0;
  this->m_iFOV.m_Value = 0;
  this->m_iDefaultFOV.m_Value = 0;
  this->m_iFOVStart.m_Value = 0;
  this->m_flFOVTime.m_Value = 0.0;
  this->m_hObserverTarget.m_Value.m_Index = -1;
  this->m_hZoomOwner.m_Value.m_Index = -1;
  this->m_iReplayEntity.m_Data = -1;
  this->m_hTonemapController.m_Value.m_Index = -1;
  this->m_QueuedUserCommands.m_Memory.m_pMemory = 0;
  this->m_QueuedUserCommands.m_Memory.m_nAllocationCount = 0;
  this->m_QueuedUserCommands.m_Memory.m_nGrowSize = 0;
  this->m_QueuedUserCommands.m_LastAlloc.index = -1;
  this->m_QueuedUserCommands.m_Head = -1;
  this->m_QueuedUserCommands.m_Tail = -1;
  this->m_QueuedUserCommands.m_FirstFree = -1;
  this->m_QueuedUserCommands.m_ElementCount = 0;
  this->m_QueuedUserCommands.m_NumAlloced = 0;
  this->m_QueuedUserCommands.m_pElements = 0;
  this->m_nHighestCommandNumberReceived = -1;
  this->m_lastHeldVoteTimer.m_timestamp.m_Value = -1.0;
  this->m_ArmorValue.m_Value = 0;
  this->m_AutoaimTimer.m_next = -1.0;
  this->m_hViewModel.m_Value[0].m_Index = -1;
  this->m_hViewModel.m_Value[1].m_Index = -1;
  this->m_LastCmd._vptr_CUserCmd = off_403F950;
  hmd_controllers_info = this->m_LastCmd.hmd_controllers_info;
  v5 = this->m_LastCmd.hmd_controllers_info;
  p_m_vPosition = &this->m_LastCmd.hmd_controllers_info[0].m_vPosition;
  p_m_Angles = &this->m_LastCmd.hmd_controllers_info[0].m_Angles;
  this->m_hPropHMDAvatar.m_Value.m_Index = -1;
  this->m_hPointHMDAnchor.m_Value.m_Index = -1;
  p_m_vFilteredPosition = &this->m_LastCmd.hmd_controllers_info[0].m_vFilteredPosition;
  do
  {
    v5->__m_pChainEntity.m_pObj = CEntitySpawnHelper::gm_pCurEntityPtr;
    v6 = v5 - hmd_controllers_info;
    *(&this->m_LastCmd.hmd_controllers_info[0].__m_PathIndex.m_Value + v6) = -1;
    *(&p_m_vPosition->m_Value.z + v6) = 0.0;
    *(&p_m_vPosition->m_Value.y + v6) = 0.0;
    *(&p_m_vPosition->m_Value.x + v6) = 0.0;
    *(&p_m_Angles->m_Value.x + v6) = 0.0;
    *(&p_m_Angles->m_Value.y + v6) = 0.0;
    *(&p_m_Angles->m_Value.z + v6) = 0.0;
    *(&p_m_vFilteredPosition->m_Value.z + v6) = 0.0;
    *(&p_m_vFilteredPosition->m_Value.y + v6) = 0.0;
    *(&p_m_vFilteredPosition->m_Value.x + v6) = 0.0;
    *(&p_m_FilteredAngles->m_Value.x + v6) = 0.0;
    *(&p_m_FilteredAngles->m_Value.y + v6) = 0.0;
    *(&p_m_FilteredAngles->m_Value.z + v6) = 0.0;
    *(&p_m_vFilteredVelocity->m_Value.z + v6) = 0.0;
    *(&p_m_vFilteredVelocity->m_Value.y + v6) = 0.0;
    *(&p_m_vFilteredVelocity->m_Value.x + v6) = 0.0;
    *(&p_m_FilteredAngularVel->m_Value.x + v6) = 0.0;
    *(&p_m_FilteredAngularVel->m_Value.y + v6) = 0.0;
    *(&p_m_FilteredAngularVel->m_Value.z + v6) = 0.0;
    *(&p_m_FilteredAngularVel->m_Value.w + v6) = 0.0;
    v5->m_flTriggerAnalogValue.m_Value = 0.0;
    v5->m_flGripAnalogValue.m_Value = 0.0;
    v5->m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
    v5->m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
    HandInfo_t::Reset(v5++);
  }
  while ( v5 != &this->m_LastCmd.hmd_middle_eye_local );
  this->m_LastCmd.mousedx = 0;
  this->m_LastCmd.cameraposition[0] = 0;
  this->m_LastCmd.mousedy = 0;
  x = vec3_origin.x;
  this->m_LastCmd.command_number = 0;
  v8 = &this->m_LastCmd.hmd_controllers_info[1];
  this->m_LastCmd.tick_count = 0;
  this->m_LastCmd.crosshairtrace.x = x;
  y = vec3_origin.y;
  this->m_LastCmd.viewangles.x = 0.0;
  this->m_LastCmd.crosshairtrace.y = y;
  z = vec3_origin.z;
  this->m_LastCmd.viewangles.y = 0.0;
  this->m_LastCmd.viewangles.z = 0.0;
  this->m_LastCmd.forwardmove = 0.0;
  this->m_LastCmd.sidemove = 0.0;
  this->m_LastCmd.upmove = 0.0;
  this->m_LastCmd.buttons = 0;
  this->m_LastCmd.impulse = 0;
  this->m_LastCmd.weaponselect = 0;
  this->m_LastCmd.weaponsubtype = 0;
  this->m_LastCmd.random_seed = 0;
  this->m_LastCmd.hasbeenpredicted = 0;
  this->m_LastCmd.cameraposition[1] = 0;
  this->m_LastCmd.clickbehavior = 0;
  this->m_LastCmd.statspanel = 0;
  this->m_LastCmd.shoppanel = 0;
  this->m_LastCmd.stats_dropdown = 0;
  this->m_LastCmd.stats_dropdown_sort = 0;
  this->m_LastCmd.crosshairtrace.z = z;
  this->m_LastCmd.hmd_active = 0;
  this->m_LastCmd.hmd_targeting_mode = 0;
  this->m_LastCmd.hmd_controllers_active[0] = 0;
  HandInfo_t::Reset(hmd_controllers_info);
  for ( i = 1; i != 4; ++i )
  {
    v37 = v8++;
    this->m_LastCmd.hmd_controllers_active[i] = 0;
    HandInfo_t::Reset(v37);
  }
  this->m_LastCmd.hmd_middle_eye_local.x = 0.0;
  this->m_timeSinceCommandSimulated._vptr_IntervalTimer = off_3FD0350;
  this->m_PlayerInfo._vptr_IBotController = &off_4089A70;
  this->m_LastCmd.hmd_middle_eye_local.y = 0.0;
  this->m_PlayerInfo._vptr_IPlayerInfo = off_4089B98;
  m_StepSoundCache = this->m_StepSoundCache;
  this->m_LastCmd.hmd_middle_eye_local.z = 0.0;
  this->m_LastCmd.hmd_viewangles_local.x = 0.0;
  this->m_LastCmd.hmd_viewangles_local.y = 0.0;
  this->m_LastCmd.hmd_viewangles_local.z = 0.0;
  this->m_timeSinceCommandSimulated.m_timestamp.m_Value = -1.0;
  this->m_flMaxspeed.m_Value = 0.0;
  this->m_ladderSurfaceProps.m_Value.m_nHashCode = 0;
  this->m_vecLadderNormal.m_Value.z = 0.0;
  this->m_vecLadderNormal.m_Value.y = 0.0;
  this->m_vecLadderNormal.m_Value.x = 0.0;
  this->m_nTickBase.m_Value = 0;
  this->m_hLastWeapon.m_Value.m_Index = -1;
  this->m_hViewEntity.m_Value.m_Index = -1;
  this->m_hConstraintEntity.m_Value.m_Index = -1;
  this->m_vecConstraintCenter.m_Value.z = 0.0;
  this->m_vecConstraintCenter.m_Value.y = 0.0;
  this->m_vecConstraintCenter.m_Value.x = 0.0;
  this->m_flConstraintRadius.m_Value = 0.0;
  this->m_flConstraintWidth.m_Value = 0.0;
  this->m_flConstraintSpeedFactor.m_Value = 0.0;
  this->m_bConstraintPastRadius.m_Value = 0;
  this->m_flLaggedMovementValue.m_Value = 0.0;
  this->m_PlayerInfo.m_pParent = 0;
  this->m_surfaceProps.m_nHashCode = 0;
  this->m_hPlayerProxy.m_Index = -1;
  do
  {
    v13 = m_StepSoundCache;
    m_StepSoundCache = (m_StepSoundCache + 80);
    v14 = v13 - this->m_StepSoundCache;
    *(&this->m_StepSoundCache[0].m_SoundParameters.soundname.m_pString + v14) = 0;
    m_StepSoundCache[-1].m_stuckCharacter.m_Index = 0;
    m_StepSoundCache[-1].m_lastEntitySteadyState = 1.0;
    m_StepSoundCache[-1].m_availableEntitySteadyState = 100;
    m_StepSoundCache[-1].m_playerInPVS.m_Ints[0] = 100;
    m_StepSoundCache[-1].m_playerInPVS.m_Ints[1] = 100;
    *&m_StepSoundCache[-1].m_hasAnySteadyStateEnts = 75;
    LOBYTE(m_StepSoundCache[-1].m_hSplitOwner.m_Index) = 0;
    *(&m_StepSoundCache[-1].m_hSplitOwner + 1) = 0;
    LODWORD(m_StepSoundCache[-1].m_hSplitScreenPlayers.m_Memory.m_pMemory) = 0;
    *&m_StepSoundCache[-1].m_hSplitScreenPlayers.m_Memory.m_nAllocationCount = 0;
    m_StepSoundCache[-1].m_currentSCLPacked.m_Value = -1;
    m_StepSoundCache[-1].m_nUnHoldableButtons.m_Value = 0;
    *(&this->m_StepSoundCache[0].m_usSoundNameIndex.m_nHashCode + v14) = 0;
  }
  while ( m_StepSoundCache != &this->m_vecPlayerSimInfo );
  this->m_vecPlayerSimInfo.m_LastAlloc.index = -1;
  this->m_vecPlayerSimInfo.m_Head = -1;
  this->m_vecPlayerSimInfo.m_Tail = -1;
  this->m_vecPlayerSimInfo.m_FirstFree = -1;
  this->m_vecPlayerCmdInfo.m_LastAlloc.index = -1;
  this->m_vecPlayerCmdInfo.m_Head = -1;
  this->m_vecPlayerSimInfo.m_Memory.m_pMemory = 0;
  this->m_vecPlayerSimInfo.m_Memory.m_nAllocationCount = 0;
  this->m_vecPlayerSimInfo.m_Memory.m_nGrowSize = 0;
  this->m_vecPlayerSimInfo.m_ElementCount = 0;
  this->m_vecPlayerSimInfo.m_NumAlloced = 0;
  this->m_vecPlayerSimInfo.m_pElements = 0;
  this->m_vecPlayerCmdInfo.m_Memory.m_pMemory = 0;
  this->m_vecPlayerCmdInfo.m_Memory.m_nAllocationCount = 0;
  this->m_vecPlayerCmdInfo.m_Memory.m_nGrowSize = 0;
  this->m_vecPlayerCmdInfo.m_Tail = -1;
  this->m_vecPlayerCmdInfo.m_FirstFree = -1;
  this->m_vecPlayerCmdInfo.m_ElementCount = 0;
  this->m_vecPlayerCmdInfo.m_NumAlloced = 0;
  this->m_vecPlayerCmdInfo.m_pElements = 0;
  this->m_stuckCharacter.m_Index = -1;
  this->m_playerInPVS = 0;
  this->m_hSplitOwner.m_Index = -1;
  this->m_hSplitScreenPlayers.m_Size = 0;
  this->m_hSplitScreenPlayers.m_Memory.m_pMemory = 0;
  this->m_hSplitScreenPlayers.m_Memory.m_nAllocationCount = 0;
  this->m_hSplitScreenPlayers.m_Memory.m_nGrowSize = 0;
  this->m_currentSCLPacked.m_Value = 0;
  this->m_nUnHoldableButtons.m_Value = 0;
  this->m_Local.m_pOuter = this;
  this->m_iEFlags |= 0x410u;
  this->m_vecAutoAim.x = 0.0;
  this->m_vecAutoAim.y = 0.0;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_vecAutoAim.z = 0.0;
  this->m_flFlashTime = -1.0;
  this->m_FixAngle.fixangle = 1;
  this->m_pl.frags = 0;
  this->m_pl.deaths = 0;
  this->m_szNetname[0] = 0;
  vptr_IHandleEntity[157](this, 0);
  CBasePlayer::Weapon_SetLast(this, 0);
  m_Index = this->m_hVehicle.m_Value.m_Index;
  this->m_bForceOrigin = 0;
  this->m_bitsDamageType = 0;
  if ( m_Index + 2 > 1 )
  {
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVehicle.m_Value.m_Index) >> 9) & 0x3F];
    if ( v17 != 0 )
    {
      v18 = &v17[this->m_hVehicle.m_Value.m_Index & 0x1FF];
      if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index && v18->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hVehicle.m_Value.m_Index = -1;
      }
    }
  }
  v19 = this->m_iDefaultFOV.m_Value == 90;
  this->m_pCurrentCommand = 0;
  if ( !v19 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDefaultFOV.m_Value = 90;
  }
  v20 = this->m_hZoomOwner.m_Value.m_Index;
  if ( v20 + 2 > 1 )
  {
    v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hZoomOwner.m_Value.m_Index) >> 9) & 0x3F];
    if ( v21 != 0 )
    {
      v22 = &v21[this->m_hZoomOwner.m_Value.m_Index & 0x1FF];
      if ( v22 != 0 && v20 == v22->m_EHandle.m_Index && v22->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hZoomOwner.m_Value.m_Index = -1;
      }
    }
  }
  this->m_nUpdateRate = 20;
  this->m_fLerpTime = 0.1;
  v19 = this->m_flLaggedMovementValue.m_Value == 1.0;
  this->m_bPredictWeapons = 1;
  this->m_bLagCompensation = 0;
  if ( !v19 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLaggedMovementValue.m_Value = 1.0;
  }
  this->m_StuckLast = 0;
  this->m_impactEnergyScale = 1.0;
  this->m_fLastPlayerTalkTime = 0.0;
  this->m_PlayerInfo.m_pParent = this;
  this->m_hasAnySteadyStateEnts = 0;
  CBasePlayer::ResetObserverMode(this);
  v23 = this->m_hPostProcessCtrl.m_Value.m_Index;
  this->m_pSurfaceData = 0;
  this->m_chTextureType = 0;
  v24 = CEntityHandle::gm_pEntityList;
  this->m_surfaceFriction = 1.0;
  this->m_chPreviousTextureType = 0;
  this->m_iSuicideCustomKillFlags = 0;
  this->m_fDelay = 0.0;
  this->m_fReplayEnd = -1.0;
  this->m_iReplayEntity.m_Data = 0;
  this->m_autoKickDisabled = 0;
  this->m_nNumCrouches = 0;
  this->m_bDuckToggled = 0;
  this->m_bPhysicsWasFrozen = 0;
  this->m_movementCollisionNormal.x = 0.0;
  this->m_movementCollisionNormal.y = 0.0;
  this->m_movementCollisionNormal.z = 1.0;
  this->m_afButtonDisabled = 0;
  this->m_afButtonForced = 0;
  this->m_nBodyPitchPoseParam = -1;
  this->m_flForwardMove = 0.0;
  this->m_flSideMove = 0.0;
  this->m_bSplitScreenPlayer = 0;
  this->m_hSplitOwner.m_Index = -1;
  if ( v23 + 2 > 1 )
  {
    v25 = v24->m_pIdentityChunks[(LOWORD(this->m_hPostProcessCtrl.m_Value.m_Index) >> 9) & 0x3F];
    if ( v25 != 0 )
    {
      v26 = &v25[this->m_hPostProcessCtrl.m_Value.m_Index & 0x1FF];
      if ( v26 != 0 && v23 == v26->m_EHandle.m_Index && v26->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2480, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hPostProcessCtrl.m_Value.m_Index = -1;
        v24 = CEntityHandle::gm_pEntityList;
      }
    }
  }
  v27 = this->m_hColorCorrectionCtrl.m_Value.m_Index;
  if ( v27 + 2 > 1 )
  {
    v28 = v24->m_pIdentityChunks[(LOWORD(this->m_hColorCorrectionCtrl.m_Value.m_Index) >> 9) & 0x3F];
    if ( v28 != 0 )
    {
      v29 = &v28[this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x1FF];
      if ( v29 != 0 && v27 == v29->m_EHandle.m_Index && v29->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2484, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hColorCorrectionCtrl.m_Value.m_Index = -1;
      }
    }
  }
  m_pEntity = this->m_pEntity;
  this->m_bIsLowViolence = 0;
  if ( (m_pEntity->m_flags & 0x800) == 0 )
  {
    v31 = *(*engine + 720LL);
    v32.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    this->m_bIsLowViolence = v31(engine, v32.m_Data);
  }
}


// CBasePlayer::~CBasePlayer  (line 817, @0x00000000022fe5d0, libserver.so)  // inlines: Purge, RemoveAll, ~CPlayerInfo, ~CPlayerState, ~CSoundParameters, ~CUserCmd, ~CUtlLinkedList, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~StepSoundCache_t
// calls: CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int>::Purge, CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int>::Purge, CUtlString::FreeMemoryBlock, CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::~CUtlLinkedList, CBaseCombatCharacter::~CBaseCombatCharacter, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CBasePlayer::TonemapCountedActivations_t, int>::Purge
// callers: CAI_ExpresserHost<CBasePlayer>::~CAI_ExpresserHost, CBaseMultiplayerPlayer::CBaseMultiplayerPlayer, CBaseMultiplayerPlayer::~CBaseMultiplayerPlayer, CBasePlayer::~CBasePlayer
void __fastcall CBasePlayer::~CBasePlayer(CBasePlayer *const this)
{
  bool v2; // zf
  CBasePlayer *p_m_vecPlayerSimInfo; // rbx
  CUtlMemory<CHandle<CBasePlayer>,int> *p_m_Memory; // rbx

  this->_vptr_IHandleEntity = &off_4086CF0;
  v2 = (this->m_hSplitScreenPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hSplitScreenPlayers.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hSplitScreenPlayers.m_Memory;
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_hSplitScreenPlayers.m_Memory);
    if ( (this->m_hSplitScreenPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePlayer>,int>::Purge(p_m_Memory);
  }
  CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::RemoveAll(&this->m_vecPlayerCmdInfo);
  p_m_vecPlayerSimInfo = &this->m_vecPlayerSimInfo;
  CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>::Purge(&this->m_vecPlayerCmdInfo.m_Memory);
  CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::RemoveAll(&this->m_vecPlayerSimInfo);
  CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>::Purge(&this->m_vecPlayerSimInfo.m_Memory);
  do
  {
    if ( *(&p_m_vecPlayerSimInfo[-1].m_pGameSceneNode + 532) != 0 )
      CUtlString::FreeMemoryBlock(&p_m_vecPlayerSimInfo[-1].m_hSplitScreenPlayers);
    p_m_vecPlayerSimInfo = (p_m_vecPlayerSimInfo - 80);
  }
  while ( this->m_StepSoundCache != p_m_vecPlayerSimInfo );
  this->m_PlayerInfo._vptr_IBotController = &off_4089A70;
  this->m_PlayerInfo._vptr_IPlayerInfo = off_4089B98;
  this->m_LastCmd._vptr_CUserCmd = off_403F950;
  CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::~CUtlLinkedList(&this->m_QueuedUserCommands);
  v2 = (this->m_hTriggerSoundscapeList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pl._vptr_CPlayerState = &off_3FEA5B0;
  this->m_hTriggerSoundscapeList.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTriggerSoundscapeList.m_Memory);
    if ( (this->m_hTriggerSoundscapeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTriggerSoundscapeList.m_Memory);
  }
  v2 = (this->m_ActivatedTonemapList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ActivatedTonemapList.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CBasePlayer::TonemapCountedActivations_t,int>::Purge(&this->m_ActivatedTonemapList.m_Memory);
    if ( (this->m_ActivatedTonemapList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBasePlayer::TonemapCountedActivations_t,int>::Purge(&this->m_ActivatedTonemapList.m_Memory);
  }
  CBaseCombatCharacter::~CBaseCombatCharacter(this);
}


// CBasePlayer::~CBasePlayer  (line 817, @0x00000000022fe7a0, libserver.so)
// calls: CBasePlayer::~CBasePlayer, CBaseEntity::operator delete
void __fastcall CBasePlayer::~CBasePlayer(CBasePlayer *const this)
{
  CBasePlayer::~CBasePlayer(this);
  CBaseEntity::operator delete(this);
}


// CBasePlayer::ReceiveClientMsg_DevPaletteVisibilityChangedEvent  (line 826, @0x00000000022c3350, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHMDAvatar, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator->
// calls: CPropVRTrackedObject::AddOrRemovePhysicsOverride, CPropHMDAvatar::GetVRHandRaw
bool __fastcall CBasePlayer::ReceiveClientMsg_DevPaletteVisibilityChangedEvent(
        CBasePlayer *const this,
        const CClientMsg_DevPaletteVisibilityChangedEvent_t *const msg)
{
  CPropVRTrackedObjectPhysicsOverride *p_m_DevPalettePhysicsOverride; // r13
  char v4; // r14
  uint32 v5; // ecx
  unsigned __int16 v6; // dx
  int v7; // esi
  CPropVRTrackedObject *m_pInstance; // rdi
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  vr_controller_slots_t v12; // ebx
  unsigned __int16 v13; // dx
  int v14; // esi
  CPropHMDAvatar *v15; // rdi
  uint32 v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CPropVRHand *VRHandRaw; // rax

  p_m_DevPalettePhysicsOverride = &this->m_DevPalettePhysicsOverride;
  v4 = *(msg + 24);
  v5 = this->m_hPropHMDAvatar.m_Value.m_Index >> 15;
  if ( this->m_hPropHMDAvatar.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hPropHMDAvatar.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  m_pInstance = 0;
  v9 = (v5 << 15) | v6 & 0x7FFF;
  if ( (v9 + 2) > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v10 != 0 )
    {
      v11 = &v10[v7 & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  v12 = vr_controller_slots_t::VRCONTROLLER_SLOT_HAND0;
  CPropVRTrackedObject::AddOrRemovePhysicsOverride(m_pInstance, p_m_DevPalettePhysicsOverride, v4);
  do
  {
    if ( this->m_hPropHMDAvatar.m_Value.m_Index == -1 )
    {
      v13 = 0x7FFF;
      v14 = 0x7FFF;
    }
    else
    {
      v13 = this->m_hPropHMDAvatar.m_Value.m_Index & 0x7FFF;
      v14 = v13;
    }
    v15 = 0;
    v16 = (this->m_hPropHMDAvatar.m_Value.m_Index >> 15 << 15) | v13 & 0x7FFF;
    if ( v16 + 2 > 1 )
    {
      v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v14 >> 9];
      if ( v17 != 0 )
      {
        v18 = &v17[v14 & 0x1FF];
        if ( v18 != 0 && v16 == v18->m_EHandle.m_Index )
          v15 = v18->m_pInstance;
      }
    }
    VRHandRaw = CPropHMDAvatar::GetVRHandRaw(v15, v12);
    if ( VRHandRaw != 0 )
      CPropVRTrackedObject::AddOrRemovePhysicsOverride(VRHandRaw, p_m_DevPalettePhysicsOverride, v4);
    ++v12;
  }
  while ( v12 != vr_controller_slots_t::VRCONTROLLER_COUNT );
  return 1;
}


// CBasePlayer::UpdateOnRemove  (line 848, @0x00000000022fe7c0, libserver.so)  // inlines: CEntityHandle, CUtlDelegate<CBasePlayer, CBasePlayer>, CVariantBase, Convert<CBasePlayer, bool (CBasePlayer::*)(const CClientMsg_DevPaletteVisibilityChangedEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CBasePlayer, CBasePlayer>, Free, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, SetValue, UnregisterGameEventHandler<CClientMsg_DevPaletteVisibilityChangedEvent_t>, UtlMakeDelegate<CBasePlayer, CBasePlayer, const CClientMsg_DevPaletteVisibilityChangedEvent_t&, bool>, bindmemfunc<CBasePlayer, bool (CBasePlayer::*)(const CClientMsg_DevPaletteVisibilityChangedEvent_t&)>, operator bool, ~CVariantBase
// calls: CBaseEntity::GetTeam, VR_GetActiveHMDAnchor, UTIL_Remove, CBaseCombatCharacter::UpdateOnRemove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, CBasePlayer::RemoveSplitScreenPlayer
// globals: CBasePlayer::ReceiveClientMsg_DevPaletteVisibilityChangedEvent(CClientMsg_DevPaletteVisibilityChangedEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>(bool)::s_hEvent, CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::UpdateOnRemove(CBasePlayer *const this)
{
  CTeam *Team; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  unsigned __int16 v6; // dx
  int v7; // esi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CBaseEntity *ActiveHMDAnchor; // rax
  CBasePlayer *v12; // [rsp+0h] [rbp-30h] BYREF
  bool (__fastcall *v13)(CBasePlayer *const, const CClientMsg_DevPaletteVisibilityChangedEvent_t *const); // [rsp+8h] [rbp-28h]
  __int64 v14; // [rsp+10h] [rbp-20h]

  v13 = CBasePlayer::ReceiveClientMsg_DevPaletteVisibilityChangedEvent;
  v12 = this;
  v14 = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    0,
    &v12,
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>(bool)::s_hEvent);
  if ( g_pGameRules != 0 && (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) == 0 && g_pScriptVM != 0 )
  {
    v12 = 0;
    LODWORD(v13) = 0;
    (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "player", &v12);
    if ( (BYTE2(v13) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
  }
  (*(this->_vptr_IHandleEntity + 51))(this);
  if ( CBaseEntity::GetTeam(this) != 0 )
  {
    Team = CBaseEntity::GetTeam(this);
    (*(Team->_vptr_IHandleEntity + 217))(Team, this);
  }
  m_Index = this->m_hSplitOwner.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSplitOwner.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hSplitOwner.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        CBasePlayer::RemoveSplitScreenPlayer(v5->m_pInstance, this);
    }
  }
  if ( this->m_hPropHMDAvatar.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hPropHMDAvatar.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  v8 = (this->m_hPropHMDAvatar.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
  LODWORD(v12) = v8;
  if ( v8 + 2 > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v7 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
        UTIL_Remove(v10->m_pInstance);
    }
  }
  ActiveHMDAnchor = VR_GetActiveHMDAnchor(this);
  if ( ActiveHMDAnchor != 0 )
    UTIL_Remove(ActiveHMDAnchor);
  CBaseCombatCharacter::UpdateOnRemove(this);
}


// CBasePlayer::SetupVisibility  (line 894, @0x00000000022bc150, libserver.so)  // inlines: GetBool, GetInt, operator=
// calls: CEntitySystem::GetActiveSpawnGroupHandle
void __fastcall CBasePlayer::SetupVisibility(CBasePlayer *const this, CBaseEntity *pViewEntity, vis_info_t *pPVS)
{
  vec_t v4; // xmm1_4
  void (__fastcall *v5)(IPVSManager *, _QWORD, Vector *, vis_info_t *); // r13
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  Vector org; // [rsp+0h] [rbp-40h] BYREF
  Vector v8; // [rsp+10h] [rbp-30h]

  if ( pViewEntity == 0 || VisForce.m_pParent->m_Value.m_nValue != 0 )
  {
    *&v8.x = (*(this->_vptr_IHandleEntity + 164))(this);
    org = v8;
    v8.z = v4;
    v5 = *(g_pPVSManager->_vptr_IPVSManager + 9);
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v5(g_pPVSManager, ActiveSpawnGroupHandle, &org, pPVS);
  }
}


// CBasePlayer::BuildTransmitInfo  (line 917, @0x00000000022bacf0, libserver.so)  // inlines: GetTeamNumber, IsObserver
// calls: CBaseEntity::GetTeam
// callers: CDOTAPlayer::BuildTransmitInfo
void __fastcall CBasePlayer::BuildTransmitInfo(
        CBasePlayer *const this,
        CGameCheckTransmitInfo *const gameInfo,
        CCheckTransmitInfo *pInfo)
{
  uint32 m_afPhysicsFlags; // r13d
  int m_Value; // eax
  CBaseEntity *v7; // rax

  m_afPhysicsFlags = this->m_afPhysicsFlags;
  gameInfo->m_pInfo = pInfo;
  gameInfo->m_pRecipientPlayer = this;
  gameInfo->m_bRecipientHLTV = this->m_pl.hltv;
  gameInfo->m_pRecipientTeam = CBaseEntity::GetTeam(this);
  m_Value = this->m_iTeamNum.m_Value;
  gameInfo->m_bGameOverState = 0;
  gameInfo->m_nRecipientTeamNumber = m_Value;
  gameInfo->m_nRecipientCoachedTeamNumber = m_Value;
  gameInfo->m_bRecipientLowViolence = this->m_bIsLowViolence;
  gameInfo->m_bRecipientIsObserver = (this->m_afPhysicsFlags & 8) != 0;
  v7 = 0;
  if ( (m_afPhysicsFlags & 8) != 0 )
    v7 = (*(this->_vptr_IHandleEntity + 439))(this);
  gameInfo->m_pObserverTarget = v7;
}


// CBasePlayer::ShouldTransmit  (line 934, @0x00000000022e8cc0, libserver.so)  // inlines: entindex
// calls: CBasePlayer::IsSplitScreenUserOnEntity, CEntityInstance::GetEntityIndex, HLTVDirector, CBaseEntity::ShouldTransmit, CGlobalVarsBase::curtime, CBaseEntity::GetLifeState
int __fastcall CBasePlayer::ShouldTransmit(CBasePlayer *const this, const CGameCheckTransmitInfo *pInfo)
{
  int result; // eax
  int32 m_Data; // r13d

  if ( pInfo->m_pRecipientPlayer == this
    || CBasePlayer::IsSplitScreenUserOnEntity(this, pInfo->m_pInfo->m_nClientEntityIndex) )
  {
    return 4;
  }
  m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( m_Data != HLTVDirector()->m_iCameraManIndex.m_Data || (result = 4, !pInfo->m_bRecipientHLTV) )
  {
    if ( (*(this->_vptr_IHandleEntity + 139))(this) != 0 && (this->m_fEffects.m_Value & 0x20) != 0
      || (this->m_afPhysicsFlags & 8) != 0
      && (CGlobalVarsBase::curtime(gpGlobals, 0) - this->m_flDeathTime.m_Value) > 0.5
      && CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_DEAD
      && (CGlobalVarsBase::curtime(gpGlobals, 0) - this->m_flDeathAnimTime) > 0.5 )
    {
      return 8;
    }
    else
    {
      return CBaseEntity::ShouldTransmit(this, pInfo);
    }
  }
  return result;
}


// CBasePlayer::WantsLagCompensationOnEntity  (line 983, @0x00000000022be340, libserver.so)  // inlines: DistTo, Dot, DotProduct, FastSqrt, Get, GetFloat, GetInt, Length, ToBasePlayer, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator-
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::GetAbsOrigin, AngleVectors, VectorNormalize
bool __fastcall CBasePlayer::WantsLagCompensationOnEntity(
        const CBasePlayer *const this,
        const CBaseEntity *entity,
        const CUserCmd *pCmd,
        const CBitVec<16384> *pEntityTransmitBits)
{
  CEntityIndex v8; // eax
  bool result; // al
  const Vector *AbsOrigin; // r12
  const Vector *v11; // r14
  char v12; // al
  const CBaseEntity *v13; // rdx
  double v14; // xmm3_8
  float v15; // xmm1_4
  float v16; // xmm1_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  float v19; // [rsp+Ch] [rbp-44h]
  Vector vForward; // [rsp+10h] [rbp-40h] BYREF
  Vector vDiff; // [rsp+20h] [rbp-30h] BYREF

  if ( friendlyfire.m_pParent->m_Value.m_nValue == 0 && entity->m_iTeamNum.m_Value == this->m_iTeamNum.m_Value )
    return 0;
  if ( pEntityTransmitBits != 0 )
  {
    v8.m_Data = CEntityInstance::GetEntityIndex(entity).m_Data;
    if ( ((1 << SLOBYTE(v8.m_Data)) & pEntityTransmitBits->m_Ints[v8.m_Data >> 5]) == 0 )
      return 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v11 = CBaseEntity::GetAbsOrigin(entity);
  if ( entity != 0 && (*(entity->_vptr_IHandleEntity + 140))(entity) != 0 )
  {
    v12 = (*(entity->_vptr_IHandleEntity + 140))(entity);
    v13 = 0;
    if ( v12 != 0 )
      v13 = entity;
    v14 = *&v13[4].m_OnUser1._vptr_CEntityIOOutput * 1.5;
  }
  else
  {
    v14 = 450.0;
  }
  v15 = v11->z - AbsOrigin->z;
  result = 1;
  v19 = (((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x)) + ((v11->y - AbsOrigin->y) * (v11->y - AbsOrigin->y)))
      + (v15 * v15);
  v16 = sv_maxunlag.m_pParent->m_Value.m_fValue * v14;
  if ( v16 <= fsqrt(v19) )
  {
    AngleVectors(&pCmd->viewangles, &vForward, 0, 0);
    v17 = v11->x - AbsOrigin->x;
    v18 = v11->z - AbsOrigin->z;
    vDiff.y = v11->y - AbsOrigin->y;
    vDiff.x = v17;
    vDiff.z = v18;
    VectorNormalize(&vDiff);
    return (((vForward.x * vDiff.x) + (vForward.y * vDiff.y)) + (vForward.z * vDiff.z)) >= 0.70710701;
  }
  return result;
}


// OnCreatePointHMDAnchorComplete  (line 1028, @0x00000000022c1620, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetPointHMDAnchor, ToBasePlayer, operator!=, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall OnCreatePointHMDAnchorComplete(CPointHMDAnchor *pEntity, const CEntityKeyValues *pKeyValues)
{
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rbx
  int m_pEntity; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rax
  int v13; // edx
  __int16 v14; // cx

  if ( pEntity->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = pEntity->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (pEntity->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( v5 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v4 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v7->m_pInstance) != 0 )
        {
          m_pEntity = m_pInstance[65].m_pEntity;
          if ( (m_pEntity + 2) <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pInstance[65].m_pEntity) >> 9) & 0x3F]) == 0
            || (v11 = &v10[m_pInstance[65].m_pEntity & 0x1FF]) == 0
            || m_pEntity != v11->m_EHandle.m_Index
            || pEntity != v11->m_pInstance )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 3128, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v12 = pEntity->m_pEntity;
            if ( v12 != 0 )
            {
              v13 = (v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1);
              if ( v12->m_EHandle.m_Index == -1 )
                v14 = 0x7FFF;
              else
                v14 = v12->m_EHandle.m_Index & 0x7FFF;
              LOWORD(m_pInstance[65].m_pEntity) = v14 | m_pInstance[65].m_pEntity & 0x8000;
              LODWORD(m_pInstance[65].m_pEntity) = (v13 << 15) | m_pInstance[65].m_pEntity & 0x7FFF;
            }
            else
            {
              LODWORD(m_pInstance[65].m_pEntity) = -1;
            }
          }
        }
      }
    }
  }
}


// CBasePlayer::OnAnchorTeleport  (line 1095, @0x00000000022dffe0, libserver.so)
void __fastcall CBasePlayer::OnAnchorTeleport(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::SetHMDData  (line 1111, @0x00000000022bb6a0, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Updating HMD in the same frame as a teleport, ignored. %d, tick %d\n", "teleport HMD, frame %d (tick %d)\n"
void __fastcall CBasePlayer::SetHMDData(
        CBasePlayer *const this,
        bool bActive,
        const Vector *const vMiddleEyePosLocal,
        const QAngle *const qHMDViewAnglesLocal,
        bool *pControllersActive,
        HandInfo_t *pHandInfo,
        bool bTeleport)
{
  if ( bTeleport )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      LoggingSystem_Log(
        LOG_SERVER,
        2,
        "teleport HMD, frame %d (tick %d)\n",
        gpGlobals->framecount,
        gpGlobals->tickcount);
      this->m_nHMDTeleportFrame = gpGlobals->framecount;
    }
    else
    {
      this->m_nHMDTeleportFrame = gpGlobals->framecount;
    }
  }
  else if ( this->m_nHMDTeleportFrame == gpGlobals->framecount && LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_SERVER,
      2,
      "Updating HMD in the same frame as a teleport, ignored. %d, tick %d\n",
      gpGlobals->framecount,
      gpGlobals->tickcount);
  }
}


// CBasePlayer::SetHMDAvatarModel  (line 1218, @0x00000000022dfff0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: UTIL_Remove
// callers: CBasePlayer::InputSetHMDAvatarModel
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::SetHMDAvatarModel(CBasePlayer *const this, const char *pchModel)
{
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  if ( this->m_hPropHMDAvatar.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hPropHMDAvatar.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_hPropHMDAvatar.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( v5 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v4 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
      {
        UTIL_Remove(v7->m_pInstance);
        m_Index = this->m_hPropHMDAvatar.m_Value.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPropHMDAvatar.m_Value.m_Index) >> 9)
                                                              & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[this->m_hPropHMDAvatar.m_Value.m_Index & 0x1FF];
            if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 3124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_hPropHMDAvatar.m_Value.m_Index = -1;
            }
          }
        }
        this->m_bCreatedHMDAvatar = 0;
      }
    }
  }
}


// CBasePlayer::InputSetHMDAvatarModel  (line 1232, @0x00000000022e0140, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: CBasePlayer::SetHMDAvatarModel, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_22E0171, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBasePlayer::InputSetHMDAvatarModel(CBasePlayer *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

  m_type = inputdata->value.m_type;
  if ( m_type != 30 )
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_11;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_11;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        goto LABEL_11;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        CBasePlayer::SetHMDAvatarModel(this, &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf);
        return;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
    }
  }
  m_pszString = inputdata->value.m_pszString;
LABEL_4:
  CBasePlayer::SetHMDAvatarModel(this, m_pszString);
}


// CBasePlayer::OnUpdateHMDTrackingData  (line 1240, @0x00000000022e03e0, libserver.so)
void __fastcall CBasePlayer::OnUpdateHMDTrackingData(CBasePlayer *const this, bool bTeleport)
{
  ;
}


// CBasePlayer::UpdatePlayerHullExtension  (line 1289, @0x00000000022e03f0, libserver.so)
void __fastcall CBasePlayer::UpdatePlayerHullExtension(
        CBasePlayer *const this,
        const Vector *const vecPlayerOrigin,
        bool bTeleport)
{
  ;
}


// CBasePlayer::ScriptGetUserID  (line 1328, @0x00000000022e0400, libserver.so)  // inlines: GetUserID, entindex
// calls: CEntityInstance::GetEntityIndex
int __fastcall CBasePlayer::ScriptGetUserID(const CBasePlayer *const this)
{
  CEntityIndex v1; // eax

  v1.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  return (*(*engine + 224LL))(engine, (v1.m_Data - 1));
}


// CBasePlayer::UpdateAnchorPosition  (line 1333, @0x00000000022e0430, libserver.so)  // inlines: operator!=, operator=
// callers: CTrackedControllerManager::UpdateVRHandPosesServer
void __fastcall CBasePlayer::UpdateAnchorPosition(CBasePlayer *const this, Vector vAnchorPos)
{
  if ( !this->m_bReceivedInitialAnchorPos
    || vAnchorPos.x != this->m_vecLastAnchorPosition.x
    || vAnchorPos.y != this->m_vecLastAnchorPosition.y
    || vAnchorPos.z != this->m_vecLastAnchorPosition.z )
  {
    this->m_bReceivedInitialAnchorPos = 1;
    this->m_vecLastAnchorPosition = vAnchorPos;
  }
}


// CBasePlayer::ScriptGetHMDAvatar  (line 1345, @0x00000000022e04a0, libserver.so)  // inlines: CEntityHandle, EntityToHScript, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CBasePlayer::ScriptGetHMDAvatar(const CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  HSCRIPT result; // rax
  CEntityInstance *m_pInstance; // rbx

  if ( this->m_hPropHMDAvatar.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hPropHMDAvatar.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hPropHMDAvatar.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 || v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  result = 0;
  if ( v5->m_pInstance != 0 )
  {
    result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    if ( result == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v5->m_pInstance, 0);
      return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  return result;
}


// CBasePlayer::ScriptGetHMDAnchor  (line 1350, @0x00000000022e0580, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: VR_GetActiveHMDAnchor, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CBasePlayer::ScriptGetHMDAnchor(const CBasePlayer *const this)
{
  CBaseEntity *ActiveHMDAnchor; // rax
  CBaseEntity *pAnchor; // [rsp+8h] [rbp-8h]

  ActiveHMDAnchor = VR_GetActiveHMDAnchor(this);
  if ( ActiveHMDAnchor == 0 )
    return 0;
  if ( ActiveHMDAnchor->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return ActiveHMDAnchor->m_pEntity->m_hPublicScope.m_hScope;
  pAnchor = ActiveHMDAnchor;
  CEntityInstance::CreatePublicScriptScope(ActiveHMDAnchor, 0);
  return pAnchor->m_pEntity->m_hPublicScope.m_hScope;
}


// CBasePlayer::ScriptIsVRControllerButtonPressed  (line 1356, @0x00000000022e05d0, libserver.so)
bool __fastcall CBasePlayer::ScriptIsVRControllerButtonPressed(const CBasePlayer *const this, int nButton)
{
  return (this->m_nButtons >> nButton) & 1;
}


// CBasePlayer::ScriptIsUsePressed  (line 1361, @0x00000000022e05f0, libserver.so)  // inlines: ScriptIsVRControllerButtonPressed
bool __fastcall CBasePlayer::ScriptIsUsePressed(const CBasePlayer *const this)
{
  return HIDWORD(this->m_nButtons) & 1;
}


// CBasePlayer::ScriptQuit  (line 1366, @0x00000000022eec40, libserver.so)  // inlines: GetBool, GetInt, V_StripLastDir<long unsigned int>, getcwd
// calls: __cxa_guard_acquire, ConVarRef::IsValid, getcwd, _V_StripLastDir, V_StripTrailingSlash, V_sprintf_safe<260ul>, Msg, ConVarRef::ConVarRef, __cxa_guard_release, __stack_chk_fail, Plat_ExitProcess, __cxa_guard_abort (13 total)
// strings: "fidelityLevelAverage", "fpsAverage", "droppedFramesAverage", "droppedFramesCPUAverage", "fidelityLevelAverageInt", "fpsAverageInt" (39 total)
// globals: `guard variable for'CBasePlayer::ScriptQuit(void)::vr_multitool_wormhole, CBasePlayer::ScriptQuit(void)::vr_multitool_wormhole
void __fastcall CBasePlayer::ScriptQuit(const CBasePlayer *const this)
{
  ISteamUserStats *m_pSteamUserStats; // rdi
  double v2; // xmm0_8
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // esi
  int v7; // r8d
  int v8; // r9d
  VRSystemStats_t stats; // [rsp+0h] [rbp-2C0h] BYREF
  char szCurrentPath[272]; // [rsp+80h] [rbp-240h] BYREF
  char szExeFile[260]; // [rsp+190h] [rbp-130h] BYREF
  unsigned __int64 v12; // [rsp+298h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  if ( sv_can_quit_from_script.m_pParent->m_Value.m_nValue != 0 || g_pVr != 0 && (*(*g_pVr + 104LL))(g_pVr) != 0 )
  {
    if ( `guard variable for'CBasePlayer::ScriptQuit(void)::vr_multitool_wormhole == 0
      && __cxa_guard_acquire(&`guard variable for'CBasePlayer::ScriptQuit(void)::vr_multitool_wormhole) != 0 )
    {
      ConVarRef::ConVarRef(&CBasePlayer::ScriptQuit(void)const::vr_multitool_wormhole, "vr_multitool_wormhole");
      __cxa_guard_release(&`guard variable for'CBasePlayer::ScriptQuit(void)::vr_multitool_wormhole);
    }
    if ( ConVarRef::IsValid(&CBasePlayer::ScriptQuit(void)const::vr_multitool_wormhole)
      && CBasePlayer::ScriptQuit(void)const::vr_multitool_wormhole.m_pConVarState->m_Value.m_nValue != 0 )
    {
      if ( g_pVr != 0 && getcwd(szCurrentPath, 0x104u) != 0 )
      {
        _V_StripLastDir(szCurrentPath, 260);
        _V_StripLastDir(szCurrentPath, 260);
        _V_StripLastDir(szCurrentPath, 260);
        V_StripTrailingSlash(szCurrentPath);
        V_sprintf_safe<260ul>(szExeFile, "%s\\TheLab\\win64\\TheLab.exe", szCurrentPath);
        *&v2 = Msg("g_pVr->LaunchInternalProcess( %s, -ReturnFromExternalScene, %s )\n", szExeFile, szCurrentPath).m128_u64[0];
        if ( (*(*g_pVr + 528LL))(g_pVr, szExeFile, "-ReturnFromExternalScene", szCurrentPath, v2) != 0 )
        {
          v3 = Plat_ExitProcess(0);
          __cxa_guard_abort(&`guard variable for'CBasePlayer::ScriptQuit(void)::vr_multitool_wormhole);
          Unwind_Resume(v3, v6, v4, v5, v7, v8, stats.m_nVersion);
        }
        Msg("LaunchInternalProcess FAILED!\n");
      }
    }
    else
    {
      if ( g_pVr != 0 )
      {
        (*(*g_pVr + 512LL))(g_pVr);
        if ( (*(*g_pVr + 520LL))(g_pVr, &stats) != 0 && steamapicontext != 0 )
        {
          m_pSteamUserStats = steamapicontext->m_pSteamUserStats;
          if ( m_pSteamUserStats != 0 )
          {
            (*(*m_pSteamUserStats + 24LL))(m_pSteamUserStats, "version", stats.m_nVersion);
            (*(*steamapicontext->m_pSteamUserStats + 32LL))(
              steamapicontext->m_pSteamUserStats,
              "fidelityLevelAverage",
              stats.m_flFidelityLevelAverage);
            (*(*steamapicontext->m_pSteamUserStats + 32LL))(
              steamapicontext->m_pSteamUserStats,
              "fpsAverage",
              stats.m_flFidelityFPSAverage);
            (*(*steamapicontext->m_pSteamUserStats + 32LL))(
              steamapicontext->m_pSteamUserStats,
              "droppedFramesAverage",
              stats.m_flFidelityDroppedFramesAverage);
            (*(*steamapicontext->m_pSteamUserStats + 32LL))(
              steamapicontext->m_pSteamUserStats,
              "droppedFramesCPUAverage",
              stats.m_flFidelityDroppedFramesCPUAverage);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "fidelityLevelAverageInt",
              (1000.0 * stats.m_flFidelityLevelAverage));
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "fpsAverageInt",
              (1000.0 * stats.m_flFidelityFPSAverage));
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "droppedFramesAverageInt",
              (1000.0 * stats.m_flFidelityDroppedFramesAverage));
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "droppedFramesCPUAverageInt",
              (1000.0 * stats.m_flFidelityDroppedFramesCPUAverage));
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "fidelityNumFrames",
              stats.m_nFidelityNumFrames);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "cpuModel",
              stats.m_nCpuModel);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "cpuVendor",
              stats.m_nCpuVendor);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "cpuFrequency",
              stats.m_nCpuFrequency);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "cpuNumLogicalProcessors",
              stats.m_nCpuNumLogicalProcessors);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "cpuNumPhysicalProcessors",
              stats.m_nCpuNumPhysicalProcessors);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "cpuRamMB",
              stats.m_nCpuRamMB);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuVendor",
              stats.m_nGpuVendor);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuVendorID",
              stats.m_nGpuVendorID);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuDeviceID",
              stats.m_nGpuDeviceID);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuSubSysID",
              stats.m_nGpuSubSysID);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuRevision",
              stats.m_nGpuRevision);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuDXSupportLevel",
              stats.m_nGpuDXSupportLevel);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuMinDXSupportLevel",
              stats.m_nGpuMinDXSupportLevel);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuMaxDXSupportLevel",
              stats.m_nGpuMaxDXSupportLevel);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuDriverVersionHigh",
              stats.m_nGpuDriverVersionHigh);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuDriverVersionLow",
              stats.m_nGpuDriverVersionLow);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuRamMB",
              stats.m_nGpuRamMB);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "osVersion",
              stats.m_nOsVersion);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "osMajorVersion",
              stats.m_nOsMajorVersion);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "osMinorVersion",
              stats.m_nOsMinorVersion);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "osBuildNumber",
              stats.m_nOsBuildNumber);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "osPlatformId",
              stats.m_nOsPlatformId);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuNumGpusFound",
              stats.m_nMultiGpuNumGpusFound);
            (*(*steamapicontext->m_pSteamUserStats + 24LL))(
              steamapicontext->m_pSteamUserStats,
              "gpuNumGpusUsed",
              stats.m_nMultiGpuNumGpusUsed);
            (*(*steamapicontext->m_pSteamUserStats + 80LL))(steamapicontext->m_pSteamUserStats);
          }
        }
      }
      (*(*engine + 280LL))(engine, "quit\n");
    }
  }
}


// CBasePlayer::SnapEyeAngles  (line 1472, @0x00000000022e0600, libserver.so)  // inlines: operator=
// callers: CBaseEntity::Teleport, CC_setang_f, setang_exact, CPointCommentaryNode::UpdateViewThink, CPointCommentaryNode::TeleportTo, CPointCommentaryNode::UpdateViewPostThink, CGameRules::GetPlayerSpawnSpot, PlayerBody::Upkeep
void __fastcall CBasePlayer::SnapEyeAngles(CBasePlayer *const this, const QAngle *const viewAngles)
{
  vec_t z; // xmm0_4

  this->m_pl.v_angle.x = viewAngles->x;
  this->m_pl.v_angle.y = viewAngles->y;
  z = viewAngles->z;
  this->m_FixAngle.fixangle = 1;
  this->m_pl.v_angle.z = z;
}


// TrainSpeed  (line 1480, @0x00000000022e0640, libserver.so)
// callers: CBasePlayer::PlayerUse
int __fastcall TrainSpeed(int iSpeed, int iMax)
{
  int result; // eax
  double v3; // xmm0_8

  result = 5;
  if ( iSpeed >= 0 )
  {
    LOBYTE(result) = 1;
    if ( iSpeed != 0 )
    {
      LOBYTE(result) = 2;
      v3 = (iSpeed / iMax);
      if ( v3 >= 0.33 )
        return (v3 >= 0.66) + 3;
    }
  }
  return result;
}


// CBasePlayer::DeathSound  (line 1506, @0x00000000022bb8c0, libserver.so)
// calls: CBaseEntity::EmitSound
// strings: "Player.Death", "Player.FallGib"
void __fastcall CBasePlayer::DeathSound(CBasePlayer *const this, const CTakeDamageInfo *const info)
{
  if ( (this->m_bitsDamageType & 0x20) != 0 )
    CBaseEntity::EmitSound(this, "Player.FallGib", 0.0, 0);
  else
    CBaseEntity::EmitSound(this, "Player.Death", 0.0, 0);
}


// CBasePlayer::TakeHealth  (line 1527, @0x00000000022badb0, libserver.so)  // inlines: GetBool, GetInt
// calls: CBaseEntity::GetDamageOptions, CBaseCombatCharacter::TakeHealth, CBaseEntity::GetHealth, CBaseEntity::ClearDebugBits
__int64 __fastcall CBasePlayer::TakeHealth(
        CBasePlayer *const this,
        float a2,
        float flHealth,
        unsigned int bitsDamageType)
{
  DamageOptions_t DamageOptions; // al
  float v7; // xmm1_4
  float v8; // xmm0_4
  unsigned int v9; // r12d
  int v11; // eax

  DamageOptions = CBaseEntity::GetDamageOptions(this);
  v8 = a2;
  if ( DamageOptions != DamageOptions_t::DAMAGE_NO )
  {
    v11 = (*(g_pGameRules->_vptr_CGameRules + 27))(g_pGameRules, a2);
    v8 = a2;
    this->m_bitsDamageType &= v11 | ~bitsDamageType;
  }
  v9 = CBaseCombatCharacter::TakeHealth(this, v8, v7, bitsDamageType);
  if ( buddha.m_pParent->m_Value.m_nValue != 0 && CBaseEntity::GetHealth(this) > 1 )
    CBaseEntity::ClearDebugBits(this, 0x40000000u);
  return v9;
}


// CBasePlayer::DrawEntityDebugOverlays  (line 1564, @0x00000000022b9120, libserver.so)  // inlines: GetBool, GetInt, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-
// calls: NDebugOverlay::Line, CBaseEntity::DrawEntityDebugOverlays
void __fastcall CBasePlayer::DrawEntityDebugOverlays(CBasePlayer *const this, uint64 nDebugOverlayBits)
{
  double v4; // xmm0_8
  float v5; // xmm9_4
  float v6; // xmm1_4
  float v7; // [rsp+4h] [rbp-7Ch]
  float v8; // [rsp+4h] [rbp-7Ch]
  float v9; // [rsp+8h] [rbp-78h]
  float v10; // [rsp+8h] [rbp-78h]
  float v11; // [rsp+Ch] [rbp-74h]
  float v12; // [rsp+Ch] [rbp-74h]
  Vector vecForward; // [rsp+10h] [rbp-70h] BYREF
  Vector vecRight; // [rsp+20h] [rbp-60h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-50h] BYREF
  Vector origin; // [rsp+40h] [rbp-40h] BYREF
  Vector target; // [rsp+50h] [rbp-30h] BYREF

  if ( (nDebugOverlayBits & 0x40000000) != 0 && buddha.m_pParent->m_Value.m_nValue != 0 )
  {
    (*(this->_vptr_IHandleEntity + 61))(this, &vecForward, &vecRight, &vecUp);
    v7 = vecForward.x * 64.0;
    v9 = vecForward.y * 64.0;
    v11 = 64.0 * vecForward.z;
    v4 = (*(this->_vptr_IHandleEntity + 164))(this);
    v8 = v7 + *&v4;
    v5 = v8 - (vecRight.x * 25.0);
    vecRight.x = vecRight.x * 25.0;
    vecUp.x = vecUp.x * 25.0;
    v10 = v9 + *(&v4 + 1);
    vecRight.y = vecRight.y * 25.0;
    target.x = v5 - vecUp.x;
    vecUp.y = vecUp.y * 25.0;
    origin.x = (vecRight.x + v8) + vecUp.x;
    v12 = v11 + v6;
    vecRight.z = vecRight.z * 25.0;
    vecUp.z = 25.0 * vecUp.z;
    target.y = (v10 - vecRight.y) - vecUp.y;
    origin.y = (vecRight.y + v10) + vecUp.y;
    target.z = (v12 - vecRight.z) - vecUp.z;
    origin.z = (vecRight.z + v12) + vecUp.z;
    NDebugOverlay::Line(&origin, &target, 0xFFu, 0, 0, 1, 0.0);
    target.x = (v8 - vecRight.x) + vecUp.x;
    origin.x = (v8 + vecRight.x) - vecUp.x;
    origin.y = (v10 + vecRight.y) - vecUp.y;
    target.y = (v10 - vecRight.y) + vecUp.y;
    origin.z = (v12 + vecRight.z) - vecUp.z;
    target.z = (v12 - vecRight.z) + vecUp.z;
    NDebugOverlay::Line(&origin, &target, 0xFFu, 0, 0, 1, 0.0);
  }
  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
}


// CBasePlayer::TraceAttack  (line 1589, @0x00000000022c5ac0, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, IsValid, LookupEntity, ScaleDamage, SetLastHitGroup, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetDamageOptions, CTakeDamageInfo::CTakeDamageInfo, SpawnBlood, CBaseEntity::TraceBleed, AddMultiDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList, jpt_22C5B93
void __fastcall CBasePlayer::TraceAttack(
        CBasePlayer *const this,
        const CTakeDamageInfo *const inputInfo,
        const Vector *const vecDir,
        trace_t *ptr)
{
  CConcreteEntityList *v8; // rsi
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  __m128i v12; // xmm0
  int m_flDamage_low; // r15d
  int v14; // eax
  float v15; // xmm3_4
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i m_fValue_low; // xmm0
  __m128i v19; // xmm0
  CEntityInstance *m_pInstance; // rdx
  CConcreteEntityList *v21; // r9
  CEntityIdentity *v22; // rcx
  __int64 v23; // rsi
  CTakeDamageInfo info; // [rsp+0h] [rbp-C0h] BYREF

  if ( CBaseEntity::GetDamageOptions(this) != DamageOptions_t::DAMAGE_NO )
  {
    CTakeDamageInfo::CTakeDamageInfo(&info, inputInfo);
    v8 = CEntityHandle::gm_pEntityList;
    if ( info.m_hAttacker.m_Index + 2 <= 1 )
      goto LABEL_26;
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v9 == 0 )
      goto LABEL_26;
    v10 = info.m_hAttacker.m_Index & 0x1FF;
    v8 = (8 * v10);
    v11 = &v9[v10];
    if ( v11 == 0
      || info.m_hAttacker.m_Index != v11->m_EHandle.m_Index
      || v11->m_pInstance == 0
      || (*(v11->m_pInstance->_vptr_IHandleEntity + 140))(v11->m_pInstance) == 0 )
    {
      goto LABEL_26;
    }
    m_pInstance = 0;
    v21 = CEntityHandle::gm_pEntityList;
    v22 = (info.m_hAttacker.m_Index + 2);
    if ( v22 > 1 )
    {
      v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        v23 = info.m_hAttacker.m_Index & 0x1FF;
        v21 = (8 * v23);
        v22 += v23;
        if ( v22 != 0 && info.m_hAttacker.m_Index == v22->m_EHandle.m_Index )
          m_pInstance = v22->m_pInstance;
      }
    }
    if ( (*(g_pGameRules->_vptr_CGameRules + 68))(
           g_pGameRules,
           this,
           m_pInstance,
           v22,
           *(g_pGameRules->_vptr_CGameRules + 68),
           v21) != 0 )
    {
LABEL_26:
      this->m_LastHitGroup = ptr->m_pHitbox->m_nGroupId;
      switch ( ptr->m_pHitbox->m_nGroupId )
      {
        case 1:
          m_fValue_low = LODWORD(sk_player_head.m_pParent->m_Value.m_fValue);
          *m_fValue_low.m128i_i32 = *m_fValue_low.m128i_i32 * info.m_flDamage;
          LODWORD(info.m_flDamage) = m_fValue_low.m128i_i32[0];
          m_flDamage_low = _mm_cvtsi128_si32(m_fValue_low);
          break;
        case 2:
          v17 = LODWORD(sk_player_chest.m_pParent->m_Value.m_fValue);
          *v17.m128i_i32 = *v17.m128i_i32 * info.m_flDamage;
          LODWORD(info.m_flDamage) = v17.m128i_i32[0];
          m_flDamage_low = _mm_cvtsi128_si32(v17);
          break;
        case 3:
          v16 = LODWORD(sk_player_stomach.m_pParent->m_Value.m_fValue);
          *v16.m128i_i32 = *v16.m128i_i32 * info.m_flDamage;
          LODWORD(info.m_flDamage) = v16.m128i_i32[0];
          m_flDamage_low = _mm_cvtsi128_si32(v16);
          break;
        case 4:
        case 5:
          v12 = LODWORD(sk_player_arm.m_pParent->m_Value.m_fValue);
          *v12.m128i_i32 = *v12.m128i_i32 * info.m_flDamage;
          LODWORD(info.m_flDamage) = v12.m128i_i32[0];
          m_flDamage_low = _mm_cvtsi128_si32(v12);
          break;
        case 6:
        case 7:
          v19 = LODWORD(sk_player_leg.m_pParent->m_Value.m_fValue);
          *v19.m128i_i32 = *v19.m128i_i32 * info.m_flDamage;
          LODWORD(info.m_flDamage) = v19.m128i_i32[0];
          m_flDamage_low = _mm_cvtsi128_si32(v19);
          break;
        default:
          m_flDamage_low = LODWORD(info.m_flDamage);
          break;
      }
      v14 = (*(this->_vptr_IHandleEntity + 138))(this, v8);
      SpawnBlood(vecDir, v14, *&ptr->endpos.x, ptr->endpos.z, *&m_flDamage_low, v15);
      CBaseEntity::TraceBleed(this, info.m_flDamage, vecDir, ptr, info.m_bitsDamageType);
      AddMultiDamage(&info, this);
    }
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
}


// CBasePlayer::DamageEffect  (line 1660, @0x00000000022bb960, libserver.so)  // inlines: Color, QAngle, SetColor
// calls: UTIL_ScreenFade, SpawnBlood, CBaseEntity::EmitSound, CBasePlayer::ViewPunch, __stack_chk_fail
// strings: "Flesh.BulletImpact", "Player.PlasmaDamage", "Player.SonicDamage"
void __fastcall CBasePlayer::DamageEffect(CBasePlayer *const this, double a2, float flDamage, int fDamageType)
{
  int v5; // r12d
  vec_t v6; // xmm1_4
  float v7; // xmm3_4
  vec_t v8; // [rsp+8h] [rbp-38h]
  float flDamagea; // [rsp+Ch] [rbp-34h]
  vec_t flDamageb; // [rsp+Ch] [rbp-34h]
  QAngle angleOffset; // [rsp+10h] [rbp-30h] BYREF
  Color blue; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  if ( (fDamageType & 1) != 0 )
  {
    blue._color[0] = 0x80;
    blue._color[1] = 0;
    blue._color[2] = 0;
LABEL_10:
    blue._color[3] = 0x80;
    UTIL_ScreenFade(this, &blue, 1.0, 0.1, 1);
    return;
  }
  if ( (fDamageType & 0x4000) != 0 )
  {
    blue._color[0] = 0;
    blue._color[1] = 0;
    blue._color[2] = 0x80;
    goto LABEL_10;
  }
  if ( (fDamageType & 4) != 0 )
  {
    flDamagea = *&a2;
    v5 = (*(this->_vptr_IHandleEntity + 138))(this, a2, flDamage);
    *&angleOffset.x = (*(this->_vptr_IHandleEntity + 164))(this);
    angleOffset.z = v6;
    SpawnBlood(&g_vecAttackDir, v5, *&angleOffset.x, v6, flDamagea, v7);
  }
  else if ( (fDamageType & 0x1000000) != 0 )
  {
    blue._color[0] = 0;
    blue._color[1] = 0;
    blue._color[2] = -1;
    blue._color[3] = 100;
    UTIL_ScreenFade(this, &blue, 0.2, 0.40000001, 4);
    v8 = (*(*random_valve + 8LL))(random_valve, -0.1, 0.1);
    flDamageb = (*(*random_valve + 8LL))(random_valve, -0.1, 0.1);
    angleOffset.x = (*(*random_valve + 8LL))(random_valve, -0.1, 0.1);
    angleOffset.y = flDamageb;
    angleOffset.z = v8;
    CBasePlayer::ViewPunch(this, &angleOffset);
    CBaseEntity::EmitSound(this, "Player.PlasmaDamage", 0.0, 0);
  }
  else if ( (fDamageType & 0x200) != 0 )
  {
    CBaseEntity::EmitSound(this, "Player.SonicDamage", 0.0, 0);
  }
  else if ( (fDamageType & 2) != 0 )
  {
    CBaseEntity::EmitSound(this, "Flesh.BulletImpact", 0.0, 0);
  }
}


// CBasePlayer::ShouldTakeDamageInCommentaryMode  (line 1719, @0x00000000022e0690, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: IsListeningToCommentary, CEntityHandle::operator CEntityInstance*
// callers: CBasePlayer::OnTakeDamage
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePlayer::ShouldTakeDamageInCommentaryMode(
        CBasePlayer *const this,
        const CTakeDamageInfo *const inputInfo)
{
  bool v4; // bl
  uint32 m_Index; // eax
  CBasePlayer *m_pInstance; // rcx
  CConcreteEntityList *v7; // r14
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  int m_bitsDamageType; // eax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx

  v4 = IsListeningToCommentary();
  if ( !v4 )
    return 1;
  m_Index = inputInfo->m_hInflictor.m_Index;
  m_pInstance = 0;
  v7 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(inputInfo->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[inputInfo->m_hInflictor.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( this == m_pInstance && this == CEntityHandle::operator CEntityInstance *(&inputInfo->m_hAttacker) )
    return v4;
  m_bitsDamageType = inputInfo->m_bitsDamageType;
  if ( (m_bitsDamageType & 0x1000029) != 0 )
  {
    if ( (m_bitsDamageType & 1) != 0 )
    {
      v11 = inputInfo->m_hAttacker.m_Index;
      if ( v11 + 2 <= 1 )
        return 0;
      v12 = v7->m_pIdentityChunks[(LOWORD(inputInfo->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v12 == 0 )
        return 0;
      v13 = &v12[inputInfo->m_hAttacker.m_Index & 0x1FF];
      if ( v13 == 0 || v11 != v13->m_EHandle.m_Index || v13->m_pInstance == 0 )
        return 0;
    }
    return v4;
  }
  return m_bitsDamageType == 0;
}


// CBasePlayer::OnTakeDamage  (line 1748, @0x00000000022e07c0, libserver.so)  // inlines: Get, GetAttacker, GetBool, GetDebugName, GetInflictor, GetInstance, GetInt, NetworkStateChanged, Set, SetDamage, operator CBaseEntity*, operator-=<float>, operator=, operator=<int>
// calls: CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, IsInCommentaryMode, CEntityHandle::operator CEntityInstance*, CTakeDamageInfo::~CTakeDamageInfo, CBasePlayer::ShouldTakeDamageInCommentaryMode, CTakeDamageInfo::DebugGetDamageTypeString, CEntityIdentity::GetDebugName, CBaseEntity::GetAbsOrigin, CGlobalVarsBase::curtime, V_snprintf, AddDebugHistoryLine (18 total)
int __fastcall CBasePlayer::OnTakeDamage(CBasePlayer *const this, const CTakeDamageInfo *const inputInfo)
{
  unsigned int m_bitsDamageType; // ebx
  __int64 v5; // rax
  float m_flDamage; // xmm0_4
  CEntityInstance *v7; // rax
  int v8; // ebx
  int Health; // eax
  CEntityInstance *v11; // rax
  float v12; // xmm0_4
  float v13; // r14d
  int m_Value; // eax
  float v15; // xmm0_4
  float v16; // xmm4_4
  int (**vptr_IHandleEntity)(...); // rax
  const CBaseEntity *v18; // rax
  __int64 v19; // r14
  int v20; // r14d
  CEntityInstance *v21; // rax
  int v22; // r14d
  const char *v23; // [rsp+8h] [rbp-248h]
  const char *DebugName; // [rsp+10h] [rbp-240h]
  double x; // [rsp+18h] [rbp-238h]
  double y; // [rsp+20h] [rbp-230h]
  double flNewa; // [rsp+28h] [rbp-228h]
  float flNew; // [rsp+28h] [rbp-228h]
  double fTookDamageb; // [rsp+30h] [rbp-220h]
  float fTookDamage; // [rsp+30h] [rbp-220h]
  int fTookDamagea; // [rsp+30h] [rbp-220h]
  float flBonus; // [rsp+3Ch] [rbp-214h]
  bool flBonusa; // [rsp+3Ch] [rbp-214h]
  CTakeDamageInfo info; // [rsp+40h] [rbp-210h] BYREF
  char dmgtype[64]; // [rsp+D0h] [rbp-180h] BYREF
  char outputString[264]; // [rsp+110h] [rbp-140h] BYREF
  unsigned __int64 v37; // [rsp+218h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  m_bitsDamageType = inputInfo->m_bitsDamageType;
  CBaseEntity::GetHealth(this);
  CTakeDamageInfo::CTakeDamageInfo(&info, inputInfo);
  v5 = (*(this->_vptr_IHandleEntity + 347))(this);
  if ( v5 != 0 && (*(*v5 + 104LL))(v5, &info) == 0 )
    goto LABEL_12;
  if ( IsInCommentaryMode() )
  {
    if ( !CBasePlayer::ShouldTakeDamageInCommentaryMode(this, &info) || (this->m_fFlags.m_Value & 0x4000) != 0 )
      goto LABEL_12;
  }
  else if ( (this->m_fFlags.m_Value & 0x4000) != 0 )
  {
    goto LABEL_12;
  }
  if ( buddha.m_pParent->m_Value.m_nValue != 0 )
  {
    Health = CBaseEntity::GetHealth(this);
    if ( (Health - info.m_flDamage) >= 1.0 )
    {
      m_flDamage = info.m_flDamage;
      goto LABEL_19;
    }
    CBaseEntity::SetDebugBits(this, 0x40000000u);
    (*(this->_vptr_IHandleEntity + 157))(this, 1);
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  m_flDamage = info.m_flDamage;
LABEL_19:
  if ( m_flDamage == 0.0 )
    goto LABEL_12;
  flBonus = 1.0;
  if ( old_armor.m_pParent->m_Value.m_nValue != 0 )
    flBonus = 0.5;
  if ( (info.m_bitsDamageType & 0x40) != 0 && (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
    flBonus = flBonus + flBonus;
  if ( (*(this->_vptr_IHandleEntity + 139))(this) == 0 )
    goto LABEL_12;
  v7 = CEntityHandle::operator CEntityInstance *(&info.m_hAttacker);
  if ( (*(g_pGameRules->_vptr_CGameRules + 68))(g_pGameRules, this, v7) == 0 )
    goto LABEL_12;
  CTakeDamageInfo::DebugGetDamageTypeString(info.m_bitsDamageType, dmgtype, 512);
  v11 = CEntityHandle::operator CEntityInstance *(&info.m_hInflictor);
  DebugName = CEntityIdentity::GetDebugName(v11->m_pEntity);
  fTookDamageb = info.m_flDamage;
  flNewa = CBaseEntity::GetAbsOrigin(this)->z;
  y = CBaseEntity::GetAbsOrigin(this)->y;
  x = CBaseEntity::GetAbsOrigin(this)->x;
  v23 = CEntityIdentity::GetDebugName(this->m_pEntity);
  v12 = CGlobalVarsBase::curtime(gpGlobals, 0);
  V_snprintf(
    outputString,
    256,
    &stru_333F690.m_vecVelocity.m_vecY.m_nEncoder,
    v23,
    DebugName,
    dmgtype,
    v12,
    x,
    y,
    flNewa,
    fTookDamageb);
  AddDebugHistoryLine(4, outputString);
  if ( player_debug_print_damage.m_pParent->m_Value.m_nValue != 0 )
    Msg("%s", outputString);
  v13 = info.m_flDamage;
  this->m_lastDamageAmount = info.m_flDamage;
  m_Value = this->m_ArmorValue.m_Value;
  if ( m_Value != 0 && (info.m_bitsDamageType & 0x64020) == 0 )
  {
    flNew = v13 * 0.2;
    v15 = (v13 - (v13 * 0.2)) * flBonus;
    if ( old_armor.m_pParent->m_Value.m_nValue == 0 )
      v15 = fmaxf(1.0, v15);
    v16 = m_Value;
    fTookDamage = m_Value;
    if ( v15 <= m_Value )
    {
      this->m_DmgSave = v15;
      v22 = m_Value - v15;
      if ( m_Value != v22 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 3084, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_ArmorValue.m_Value = v22;
      }
    }
    else
    {
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      this->m_DmgSave = v16;
      vptr_IHandleEntity[22](this, 3084, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ArmorValue.m_Value = 0;
      flNew = v13 - ((1.0 / flBonus) * fTookDamage);
    }
    info.m_flDamage = flNew;
  }
  fTookDamagea = CBaseCombatCharacter::OnTakeDamage(this, &info);
  if ( fTookDamagea == 0 )
    goto LABEL_12;
  v18 = CEntityHandle::operator CEntityInstance *(&info.m_hInflictor);
  if ( v18 != 0 )
    this->m_DmgOrigin = *CBaseEntity::GetAbsOrigin(v18);
  v19 = 0;
  this->m_DmgTake = info.m_flDamage + this->m_DmgTake;
  do
  {
    if ( ((0x8000 << v19) & info.m_bitsDamageType) != 0 && (*(g_pGameRules->_vptr_CGameRules + 22))(g_pGameRules) != 0 )
      this->m_rgbTimeBasedDamage[v19] = 0;
    ++v19;
  }
  while ( v19 != 8 );
  (*(this->_vptr_IHandleEntity + 385))(this, m_bitsDamageType, info.m_flDamage);
  flBonusa = 1;
  if ( CBaseEntity::GetHealth(this) <= 75 )
    flBonusa = this->m_lastDamageAmount <= 4;
  CBaseEntity::GetHealth(this);
  this->m_bitsDamageType |= m_bitsDamageType;
  v20 = 1;
  this->m_bitsHUDDamage = -1;
LABEL_43:
  if ( flBonusa )
  {
LABEL_44:
    if ( (*(g_pGameRules->_vptr_CGameRules + 22))(g_pGameRules, m_bitsDamageType) != 0 )
      goto LABEL_45;
  }
  else
  {
LABEL_45:
    while ( m_bitsDamageType != 0 && v20 != 0 )
    {
      v20 = 0;
      if ( (m_bitsDamageType & 0x80u) != 0 )
      {
        LOBYTE(m_bitsDamageType) = m_bitsDamageType & 0x7F;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 0x21) != 0 )
      {
        m_bitsDamageType &= 0xFFFFFFDE;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 2) != 0 )
      {
        m_bitsDamageType &= ~2u;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 4) != 0 )
      {
        m_bitsDamageType &= ~4u;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 0x200) != 0 )
      {
        BYTE1(m_bitsDamageType) &= ~2u;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 0x28000) != 0 )
      {
        if ( (m_bitsDamageType & 0x20000) != 0 )
        {
          this->m_nPoisonDmg = (this->m_nPoisonDmg + info.m_flDamage);
          this->m_tbdPrev = CGlobalVarsBase::curtime(gpGlobals, 0);
          this->m_rgbTimeBasedDamage[2] = 0;
        }
        m_bitsDamageType &= 0xFFFD7FFF;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 0x100000) != 0 )
      {
        m_bitsDamageType &= ~0x100000u;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 0x10000) != 0 )
      {
        m_bitsDamageType &= ~0x10000u;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 0x40000) != 0 )
      {
        m_bitsDamageType &= ~0x40000u;
        v20 = 1;
      }
      if ( (m_bitsDamageType & 0x100) == 0 )
        goto LABEL_43;
      BYTE1(m_bitsDamageType) &= ~1u;
      v20 = 1;
      if ( flBonusa )
        goto LABEL_44;
    }
  }
  if ( hl2_episodic.m_pParent->m_Value.m_nValue != 0 )
  {
    v21 = CEntityHandle::operator CEntityInstance *(&info.m_hAttacker);
    if ( v21 != 0 && (*(this->_vptr_IHandleEntity + 264))(this, v21) == 0 && info.m_flDamage <= 10.0 )
      RandomFloat(-5.0, -7.0);
  }
  (*(g_pGameRules->_vptr_CGameRules + 22))(g_pGameRules, info.m_bitsDamageType);
  if ( (m_bitsDamageType & 0x40) != 0 )
    (*(this->_vptr_IHandleEntity + 386))(this, &info);
  v8 = fTookDamagea;
  if ( CBaseEntity::GetHealth(this) <= 99 )
  {
    this->m_fTimeLastHurt = CGlobalVarsBase::curtime(gpGlobals, 0);
    v8 = fTookDamagea;
  }
LABEL_13:
  CTakeDamageInfo::~CTakeDamageInfo(&info);
  return v8;
}


// CBasePlayer::OnDamagedByExplosion  (line 2125, @0x00000000022c1fb0, libserver.so)  // inlines: CSingleUserRecipientFilter, DistTo, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetHashCode, GetInflictor, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, ~CSingleUserRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, UTIL_SetAudioMixNameInput, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList, s_EarRingEffectNames, s_ShockMuffleEffectNames
void __fastcall CBasePlayer::OnDamagedByExplosion(CBasePlayer *const this, const CTakeDamageInfo *const info)
{
  bool v2; // dl
  uint32 m_Index; // eax
  float m_flDamage; // xmm3_4
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  bool v9; // bl
  int v10; // eax
  uint32 m_nHashCode; // r13d
  const Vector *AbsOrigin; // rbx
  const Vector *v13; // rax
  float v14; // xmm1_4
  float v15; // [rsp+8h] [rbp-168h]
  CSingleUserRecipientFilter user; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v17; // [rsp+148h] [rbp-28h]

  v2 = 1;
  v17 = __readfsqword(0x28u);
  m_Index = info->m_hInflictor.m_Index;
  m_flDamage = info->m_flDamage;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(info->m_hInflictor.m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        v15 = m_flDamage;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v8->m_pInstance);
        v13 = CBaseEntity::GetAbsOrigin(this);
        m_flDamage = v15;
        v14 = v13->z - AbsOrigin->z;
        v2 = fsqrt(
               (((v13->x - AbsOrigin->x) * (v13->x - AbsOrigin->x)) + ((v13->y - AbsOrigin->y) * (v13->y - AbsOrigin->y)))
             + (v14 * v14)) >= 240.0;
      }
    }
  }
  v9 = m_flDamage >= 30.0;
  if ( !v2 || m_flDamage >= 30.0 )
  {
    v10 = (*(*random_valve + 16LL))(random_valve, 0, 2);
    if ( v9 )
      m_nHashCode = s_ShockMuffleEffectNames[v10].m_nHashCode;
    else
      m_nHashCode = s_EarRingEffectNames[v10].m_nHashCode;
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, this);
    UTIL_SetAudioMixNameInput(&user, 2122478497, m_nHashCode);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


// CBasePlayer::PackDeadPlayerItems  (line 2160, @0x00000000022c3120, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, memset, operator CEntityInstance*, operator[]
// calls: CBaseCombatCharacter::GetActiveWeapon, CBaseCombatCharacter::GetAmmoCount
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::PackDeadPlayerItems(CBasePlayer *const this)
{
  int v2; // ebx
  int v3; // r13d
  __int64 v4; // r14
  int v5; // r15d
  CHandle<CBaseCombatWeapon> *v6; // rsi
  uint32 m_Index; // eax
  __int16 v8; // di
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rsi
  CBaseCombatWeapon *ActiveWeapon; // rax
  int v12; // r14d
  int v13; // ebx
  __int64 v14; // rax
  CBaseCombatWeapon *m_pInstance; // [rsp+0h] [rbp-170h]
  int iPW; // [rsp+Ch] [rbp-164h]
  int iPackAmmo[36]; // [rsp+10h] [rbp-160h] BYREF
  CBaseCombatWeapon *rgpPackWeapons[20]; // [rsp+A0h] [rbp-D0h] BYREF

  memset(rgpPackWeapons, 0, sizeof(rgpPackWeapons));
  memset(iPackAmmo, 255, 132);
  v2 = (*(g_pGameRules->_vptr_CGameRules + 112))(g_pGameRules, this);
  v3 = (*(g_pGameRules->_vptr_CGameRules + 113))(g_pGameRules, this);
  if ( v3 != 14 || v2 != 13 )
  {
    if ( v3 != 12 || v2 != 9 )
    {
      v4 = 0;
      v5 = 0;
      for ( iPW = 0; v5 < this->m_hMyWeapons.m_Vector.m_Size; ++v4 )
      {
        v6 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v4];
        m_Index = v6->m_Index;
        if ( v6->m_Index + 2 > 1 )
        {
          v8 = v6->m_Index;
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v8 & 0x1FF];
            if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0 )
              {
                if ( v2 == 7 )
                {
                  rgpPackWeapons[iPW++] = m_pInstance;
                }
                else if ( v2 == 8 && CBaseCombatCharacter::GetActiveWeapon(this) != 0 )
                {
                  ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
                  if ( ActiveWeapon == m_pInstance )
                    rgpPackWeapons[iPW++] = ActiveWeapon;
                }
              }
            }
          }
        }
        ++v5;
      }
      v12 = 0;
      v13 = 0;
      if ( v3 != 12 )
      {
        do
        {
          if ( CBaseCombatCharacter::GetAmmoCount(this, v13) > 0 && v3 == 10 )
          {
            v14 = v12++;
            iPackAmmo[v14] = v13;
          }
          ++v13;
        }
        while ( v13 != 32 );
      }
    }
    (*(this->_vptr_IHandleEntity + 400))(this, 1);
  }
}


// CBasePlayer::RemoveAllItems  (line 2256, @0x0000000002301e40, libserver.so)
// calls: CBaseCombatCharacter::GetActiveWeapon, CBasePlayer::ResetAutoaim, CBaseCombatCharacter::RemoveAllWeapons, CBaseCombatCharacter::RemoveAllAmmo
void __fastcall CBasePlayer::RemoveAllItems(CBasePlayer *const this, bool removeSuit)
{
  CBaseCombatWeapon *ActiveWeapon; // rax

  if ( CBaseCombatCharacter::GetActiveWeapon(this) != 0 )
  {
    CBasePlayer::ResetAutoaim(this);
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
    (*(ActiveWeapon->_vptr_IHandleEntity + 283))(ActiveWeapon, 0);
  }
  (*(this->_vptr_IHandleEntity + 403))(this, 0);
  CBaseCombatCharacter::RemoveAllWeapons(this);
  CBaseCombatCharacter::RemoveAllAmmo(this);
  if ( removeSuit )
    (*(this->_vptr_IHandleEntity + 512))(this);
  (*(this->_vptr_IHandleEntity + 407))(this);
}


// CBasePlayer::OnTakeDamage_Alive  (line 2293, @0x00000000022c80a0, libserver.so)  // inlines: CreateEvent, Get, GetAttacker, GetDamageForce, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, GetUserID, IndexToIdentity, IsTriggerCollisionGroup, IsValid, LookupEntity, ToBasePlayer, entindex, operator CBaseEntity*, operator CEntityInstance*, operator*=
// calls: CBaseCombatCharacter::OnTakeDamage_Alive, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CBaseEntity::GetHealth, CBaseEntity::GetAbsOrigin, CSoundEnt::InsertSound, CCollisionProperty::IsTriggerCollisionGroup, CBaseEntity::ApplyAbsVelocityImpulse
// strings: "player_hurt"
// globals: CEntityHandle::gm_pEntityList, g_PlayerHurtEvent
int __fastcall CBasePlayer::OnTakeDamage_Alive(CBasePlayer *const this, const CTakeDamageInfo *const info)
{
  int v4; // r13d
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CCollisionProperty **m_pInstance; // r14
  double v10; // xmm0_8
  vec_t v11; // xmm0_4
  vec_t v12; // xmm3_4
  CEntityInstance *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  void (__fastcall *v16)(__int64, char *, _QWORD); // r15
  CEntityIndex v17; // eax
  unsigned int v18; // eax
  void (__fastcall *v19)(__int64, char *, __int64); // r15
  int Health; // eax
  __int64 v21; // rdx
  char v22; // al
  const CEntityInstance *v23; // rdi
  void (__fastcall *v24)(__int64, char *, _QWORD); // r15
  CEntityIndex v25; // eax
  unsigned int v26; // eax
  const Vector *AbsOrigin; // rax
  const CCollisionProperty *v28; // rdi
  bool IsTriggerCollisionGroup; // al
  vec_t v30; // [rsp+Ch] [rbp-44h]
  Vector vForce; // [rsp+10h] [rbp-40h] BYREF

  this->m_bitsDamageType |= info->m_bitsDamageType;
  v4 = CBaseCombatCharacter::OnTakeDamage_Alive(this, info);
  if ( v4 != 0 )
  {
    m_Index = info->m_hAttacker.m_Index;
    v4 = 0;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[info->m_hAttacker.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 )
          {
            if ( (*(g_pGameRules->_vptr_CGameRules + 25))(g_pGameRules, info->m_bitsDamageType) == 0
              && info->m_bitsDamageType != 0 )
            {
              v11 = info->m_vecDamageForce.z * 0.050000001;
              v12 = info->m_vecDamageForce.x * 0.050000001;
              vForce.y = info->m_vecDamageForce.y * 0.050000001;
              vForce.z = v11;
              v30 = v11;
              vForce.x = v12;
              v13 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
              *&v10 = LODWORD(v30);
              if ( v13 != 0 && this->m_MoveType.m_Value == MoveType_t::MOVETYPE_WALK )
              {
                v28 = m_pInstance[66];
                if ( v28 == 0
                  || (IsTriggerCollisionGroup = CCollisionProperty::IsTriggerCollisionGroup(v28),
                      *&v10 = LODWORD(vForce.z),
                      !IsTriggerCollisionGroup) )
                {
                  if ( *&v10 > 250.0 )
                    vForce.z = 250.0;
                  CBaseEntity::ApplyAbsVelocityImpulse(this, &vForce);
                }
              }
            }
            v14 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(
                    gameeventmanager,
                    "player_hurt",
                    0,
                    &g_PlayerHurtEvent,
                    v10);
            v15 = v14;
            if ( v14 != 0 )
            {
              v16 = *(*v14 + 112LL);
              v17.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
              v18 = (*(*engine + 224LL))(engine, (v17.m_Data - 1));
              v16(v15, "userid", v18);
              v19 = *(*v15 + 112LL);
              Health = CBaseEntity::GetHealth(this);
              v21 = 0;
              if ( Health >= 0 )
                v21 = CBaseEntity::GetHealth(this);
              v19(v15, "health", v21);
              (*(*v15 + 112LL))(v15, "priority", 5);
              if ( (*&(*m_pInstance)[6].m_vecSpecifiedSurroundingMaxs.m_Value.z)(m_pInstance) != 0 )
              {
                v22 = (*&(*m_pInstance)[6].m_vecSpecifiedSurroundingMaxs.m_Value.z)(m_pInstance);
                v23 = 0;
                if ( v22 != 0 )
                  v23 = m_pInstance;
                v24 = *(*v15 + 112LL);
                v25.m_Data = CEntityInstance::GetEntityIndex(v23).m_Data;
                v26 = (*(*engine + 224LL))(engine, (v25.m_Data - 1));
                v24(v15, "attacker", v26);
              }
              else
              {
                (*(*v15 + 112LL))(v15, "attacker", 0);
              }
              (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v15, 0);
            }
            v4 = 1;
            if ( *(m_pInstance + 338) != 0 )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(this);
              CSoundEnt::InsertSound(1, AbsOrigin, 512, 0.5, this, 0, 0);
            }
          }
        }
      }
    }
  }
  return v4;
}


// CBasePlayer::Event_Killed  (line 2357, @0x00000000022d9130, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<float>
// calls: CHintSystem::ResetHintTimers, CSoundEnt::ClientSoundIndex, CSoundEnt::SoundPointerForIndex, CSound::Reset, CBaseEntity::GetHealth, CBaseCombatCharacter::GetActiveWeapon, SafeGetViewVectors, CBaseEntity::SetLifeState, CBaseEntity::SetMoveType, CBaseEntity::SetGroundEntity, CBasePlayer::SetFOV, CBaseCombatCharacter::Event_Killed
// callers: CDOTAPlayer::Event_Killed
void __fastcall CBasePlayer::Event_Killed(CBasePlayer *const this, const CTakeDamageInfo *const info)
{
  CHintSystem *v4; // rax
  CPlayerSlot v5; // eax
  CSound *v6; // rax
  CBaseCombatWeapon *ActiveWeapon; // rax
  void (__fastcall *v8)(CBasePlayer *const, Vector *); // r12
  const CViewVectors *ViewVectors; // rax
  int (**vptr_ICollideable)(...); // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v14; // [rsp+Ch] [rbp-24h]

  if ( (*(this->_vptr_IHandleEntity + 505))(this) != 0 )
  {
    v4 = (*(this->_vptr_IHandleEntity + 505))(this);
    CHintSystem::ResetHintTimers(v4);
  }
  (*(g_pGameRules->_vptr_CGameRules + 86))(g_pGameRules, this, info);
  (*(gamestats->_vptr_CBaseGameStats + 19))(gamestats, this, info);
  (*(this->_vptr_IHandleEntity + 408))(this, 0, 0, 0);
  (*(this->_vptr_IHandleEntity + 477))(this, 0);
  v5.m_Data = CSoundEnt::ClientSoundIndex(this).m_Data;
  v6 = CSoundEnt::SoundPointerForIndex(v5);
  if ( v6 != 0 )
    CSound::Reset(v6);
  if ( CBaseEntity::GetHealth(this) < -99 )
    (*(this->_vptr_IHandleEntity + 157))(this, 0);
  if ( CBaseCombatCharacter::GetActiveWeapon(this) != 0 )
  {
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
    (*(ActiveWeapon->_vptr_IHandleEntity + 283))(ActiveWeapon, 0);
  }
  (*(this->_vptr_IHandleEntity + 425))(this, 4);
  v8 = *(this->_vptr_IHandleEntity + 211);
  ViewVectors = SafeGetViewVectors();
  v8(this, &ViewVectors->m_vDeadViewHeight);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DYING);
  vptr_ICollideable = this->m_Collision._vptr_ICollideable;
  this->m_pl.deadflag = 1;
  vptr_ICollideable[16](&this->m_Collision);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_FLYGRAVITY, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::SetGroundEntity(this, 0);
  CBasePlayer::SetFOV(this, this, 0, 0LL, 0);
  if ( (*(this->_vptr_IHandleEntity + 413))(this) != 0 )
    (*(this->_vptr_IHandleEntity + 415))(this, 0);
  m_flCurrentTime = 0.0;
  v12 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v12->m_flCurrentTime;
  }
  if ( m_flCurrentTime != this->m_flDeathTime.m_Value )
  {
    v14 = m_flCurrentTime;
    (*(this->_vptr_IHandleEntity + 22))(this, 2788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDeathTime.m_Value = v14;
  }
  (*(this->_vptr_IHandleEntity + 365))(this);
  CBaseCombatCharacter::Event_Killed(this, info);
}


// CBasePlayer::Event_Dying  (line 2428, @0x00000000022c2960, libserver.so)  // inlines: curtime
// calls: CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseCombatCharacter::Event_Dying, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CBasePlayer::Event_Dying(CBasePlayer *const this)
{
  __int64 v2; // rax
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  double v5; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  QAngle angles; // [rsp+0h] [rbp-C0h] BYREF
  CTakeDamageInfo info; // [rsp+10h] [rbp-B0h] BYREF

  CTakeDamageInfo::CTakeDamageInfo(&info);
  (*(this->_vptr_IHandleEntity + 422))(this, &info);
  if ( (*(this->_vptr_IHandleEntity + 346))(this) != 0 )
    (*(this->_vptr_IHandleEntity + 458))(this, &vec3_origin, &vec3_angle);
  v2 = *&CBaseEntity::GetLocalAngles(this)->x;
  angles.z = 0.0;
  angles.y = *(&v2 + 1);
  angles.x = 0.0;
  CBaseEntity::SetLocalAngles(this, &angles);
  CBaseEntity::ThinkSet(this, 0xBD9uLL, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v5) = 0;
    *&v5 = v4->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v5 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v5, v3, 0);
  CBaseCombatCharacter::Event_Dying(this);
  CTakeDamageInfo::~CTakeDamageInfo(&info);
}


// CBasePlayer::GetIdealActivityForPlayerAnim  (line 2456, @0x00000000022e0fd0, libserver.so)  // inlines: FastSqrt, GetAbsVelocity, GetFlags, GetWaterLevel, Length2D, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::GetLifeState
// callers: CBasePlayer::SetAnimation
Activity __fastcall CBasePlayer::GetIdealActivityForPlayerAnim(CBasePlayer *const this, PLAYER_ANIM playerAnim)
{
  unsigned int m_Value; // edx
  float v4; // xmm0_4
  Activity result; // eax
  PLAYER_ANIM playerAnima; // [rsp+Ch] [rbp-14h]

  if ( (this->m_iEFlags & 0x1000) != 0 )
  {
    playerAnima = playerAnim;
    CBaseEntity::CalcAbsoluteVelocity(this);
    playerAnim = playerAnima;
  }
  m_Value = this->m_fFlags.m_Value;
  v4 = fsqrt(
         (this->m_vecAbsVelocity.m_Value.x * this->m_vecAbsVelocity.m_Value.x)
       + (this->m_vecAbsVelocity.m_Value.y * this->m_vecAbsVelocity.m_Value.y));
  if ( (m_Value & 0x60) != 0 )
  {
    playerAnim = PLAYER_ANIM::PLAYER_IDLE;
    v4 = 0.0;
LABEL_12:
    if ( (m_Value & 1) != 0 || ((result = this->m_Activity) - 30) > 1 )
    {
      if ( this->m_nWaterLevel.m_Value <= 1u )
      {
        return playerAnim == PLAYER_ANIM::PLAYER_IDLE ? 1 : 6;
      }
      else
      {
        result = 26;
        if ( v4 != 0.0 )
          return 28;
      }
    }
    return result;
  }
  result = 30;
  switch ( playerAnim )
  {
    case PLAYER_ANIM::PLAYER_JUMP:
      return result;
    case PLAYER_ANIM::PLAYER_SUPERJUMP:
      return 31;
    case PLAYER_ANIM::PLAYER_DIE:
      if ( CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_ALIVE )
        return (*(this->_vptr_IHandleEntity + 329))(this);
      return 6;
    default:
      break;
  }
  if ( playerAnim != PLAYER_ANIM::PLAYER_ATTACK1 )
  {
    if ( playerAnim > PLAYER_ANIM::PLAYER_WALK )
      return 6;
    goto LABEL_12;
  }
  result = this->m_Activity;
  if ( result != 26 && (result - 30) > 1 && (result & 0xFFFFFFF7) != 0x14 )
    return 16;
  return result;
}


// CBasePlayer::SetAnimation  (line 2528, @0x00000000022e1140, libserver.so)  // inlines: GetSequence, ResetSequence, SetActivity, V_strncat<long unsigned int>, V_strncpy<long unsigned int>
// calls: CBasePlayer::GetIdealActivityForPlayerAnim, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::SetCycle, _V_strncpy, _V_strncat, CBaseAnimating::LookupSequence, CBaseAnimating::SequenceLoops, __stack_chk_fail
// strings: "ref_shoot_", "crouch_aim_", "crouch_shoot_", "ref_aim_"
void __fastcall CBasePlayer::SetAnimation(CBasePlayer *const this, PLAYER_ANIM playerAnim)
{
  Activity IdealActivityForPlayerAnim; // eax
  Activity m_Activity; // esi
  HSequence v5; // r12d
  const CBaseAnimatingController *v6; // rax
  CBaseAnimatingController *v7; // rax
  float v8; // xmm1_4
  const CBaseAnimatingController *BaseAnimatingController; // rax
  float v10; // xmm1_4
  CBaseAnimatingController *v11; // rax
  HSequence v12; // eax
  const CBaseAnimatingController *v13; // rax
  char szAnim[72]; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-18h]

  v15 = __readfsqword(0x28u);
  IdealActivityForPlayerAnim = CBasePlayer::GetIdealActivityForPlayerAnim(this, playerAnim);
  if ( IdealActivityForPlayerAnim == 16 )
  {
    if ( (this->m_fFlags.m_Value & 2) != 0 )
      _V_strncpy(szAnim, "crouch_shoot_", 64);
    else
      _V_strncpy(szAnim, "ref_shoot_", 64);
    _V_strncat(szAnim, this->m_szAnimExtension, 64, 0xFFFFFFFFLL);
    v5.m_Data = CBaseAnimating::LookupSequence(this, szAnim).m_Data;
    if ( v5.m_Data == -1 )
      v5.m_Data = 0;
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
    if ( (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController) != v5.m_Data
      || !CBaseAnimating::SequenceLoops(this) )
    {
      CBaseAnimating::SetCycle(this, 0.0, v10);
    }
    this->m_Activity = 16;
    v11 = CBaseAnimating::GetBaseAnimatingController(this);
    (*(v11->_vptr_CSkeletonAnimationController + 23))(v11, v5.m_Data, 1);
  }
  else
  {
    if ( IdealActivityForPlayerAnim != 6 )
    {
      if ( IdealActivityForPlayerAnim == this->m_Activity )
        return;
      this->m_Activity = IdealActivityForPlayerAnim;
      m_Activity = IdealActivityForPlayerAnim;
      goto LABEL_5;
    }
    if ( this->m_Activity != 16 || (*(this->_vptr_IHandleEntity + 225))(this) != 0 )
    {
      if ( (this->m_fFlags.m_Value & 2) != 0 )
        _V_strncpy(szAnim, "crouch_aim_", 64);
      else
        _V_strncpy(szAnim, "ref_aim_", 64);
      _V_strncat(szAnim, this->m_szAnimExtension, 64, 0xFFFFFFFFLL);
      v12.m_Data = CBaseAnimating::LookupSequence(this, szAnim).m_Data;
      this->m_Activity = 6;
      v5.m_Data = v12.m_Data;
      if ( v12.m_Data == -1 )
        v5.m_Data = 0;
    }
    else
    {
      v13 = CBaseAnimating::GetBaseAnimatingController(this);
      v5.m_Data = (*(v13->_vptr_CSkeletonAnimationController + 24))(v13);
    }
  }
  if ( v5.m_Data == 0 )
  {
    m_Activity = this->m_Activity;
LABEL_5:
    v5.m_Data = CBaseAnimating::SelectWeightedSequence(this, m_Activity).m_Data;
  }
  v6 = CBaseAnimating::GetBaseAnimatingController(this);
  if ( v5.m_Data != (*(v6->_vptr_CSkeletonAnimationController + 24))(v6) )
  {
    v7 = CBaseAnimating::GetBaseAnimatingController(this);
    (*(v7->_vptr_CSkeletonAnimationController + 23))(v7, v5.m_Data, 1);
    CBaseAnimating::SetCycle(this, 0.0, v8);
  }
}


// CBasePlayer::WaterMove  (line 2638, @0x00000000022e13b0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::GetHealth, CBasePlayer::UpdateUnderwaterState, CBaseEntity::GetMoveParent, CBaseEntity::EmitSound, CGlobalVarsBase::curtime, CBaseEntity::Instance, CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// callers: CBasePlayer::PreThink
// strings: "Player.DrownStart"
void __fastcall CBasePlayer::WaterMove(CBasePlayer *const this)
{
  float m_AirFinished; // xmm1_4
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc v7; // rax
  float v8; // xmm0_4
  int m_idrownrestored; // eax
  int m_bitsDamageType; // eax
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc v12; // rax
  float v13; // xmm0_4
  float v14; // xmm1_4
  CGlobalVars *v15; // r12
  FnGlobalVarsWarningFunc v16; // rax
  float v17; // xmm0_4
  int v18; // eax
  float v19; // xmm0_4
  void (__fastcall *v20)(CBasePlayer *const, CTakeDamageInfo *); // r15
  CBaseEntity *v21; // r14
  CBaseEntity *v22; // rax
  float v23; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  float flDamage; // [rsp+Ch] [rbp-C4h]
  float flDamagea; // [rsp+Ch] [rbp-C4h]
  float flDamageb; // [rsp+Ch] [rbp-C4h]
  float flDamagec; // [rsp+Ch] [rbp-C4h]
  CTakeDamageInfo v29; // [rsp+10h] [rbp-C0h] BYREF

  if ( this->m_MoveType.m_Value != MoveType_t::MOVETYPE_NOCLIP || CBaseEntity::GetMoveParent(this) != 0 )
  {
    if ( CBaseEntity::GetHealth(this) >= 0 && (*(this->_vptr_IHandleEntity + 139))(this) != 0 )
    {
      if ( this->m_nWaterLevel.m_Value != 3 || (*(this->_vptr_IHandleEntity + 470))(this) != 0 )
      {
        m_AirFinished = this->m_AirFinished;
        v3 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              flDamage = this->m_AirFinished;
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              m_AirFinished = flDamage;
            }
          }
          m_flCurrentTime = v3->m_flCurrentTime;
        }
        else
        {
          m_flCurrentTime = 0.0;
        }
        if ( m_flCurrentTime > m_AirFinished )
          CBaseEntity::EmitSound(this, "Player.DrownStart", 0.0, 0);
        v6 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v7 = gpGlobals->m_pfnWarningFunc;
            if ( v7 != 0 )
              v7(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          v8 = v6->m_flCurrentTime + 12.0;
        }
        else
        {
          v8 = 12.0;
        }
        m_idrownrestored = this->m_idrownrestored;
        this->m_AirFinished = v8;
        this->m_nDrownDmgRate = 2;
        if ( this->m_idrowndmg > m_idrownrestored )
        {
          m_bitsDamageType = this->m_bitsDamageType;
          this->m_rgbTimeBasedDamage[4] = 0;
          BYTE1(m_bitsDamageType) &= ~0x40u;
          this->m_bitsDamageType = m_bitsDamageType | 0x80000;
        }
      }
      else
      {
        this->m_rgbTimeBasedDamage[4] = 0;
        this->m_bitsDamageType &= ~0x80000u;
        v14 = this->m_AirFinished;
        v15 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v16 = gpGlobals->m_pfnWarningFunc;
            if ( v16 != 0 )
            {
              flDamagea = this->m_AirFinished;
              v16(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v14 = flDamagea;
            }
          }
          v17 = v15->m_flCurrentTime;
        }
        else
        {
          v17 = 0.0;
        }
        if ( v17 <= v14 || (this->m_fFlags.m_Value & 0x4000) != 0 )
        {
          this->m_bitsDamageType &= ~0x4000u;
        }
        else
        {
          flDamageb = this->m_PainFinished;
          if ( CGlobalVarsBase::curtime(gpGlobals, 0) > flDamageb )
          {
            v18 = this->m_nDrownDmgRate + 1;
            if ( v18 > 5 )
            {
              this->m_nDrownDmgRate = 5;
              v19 = 5.0;
            }
            else
            {
              v19 = v18;
              this->m_nDrownDmgRate = v18;
            }
            flDamagec = v19;
            v20 = *(this->_vptr_IHandleEntity + 90);
            v21 = CBaseEntity::Instance(0);
            v22 = CBaseEntity::Instance(0);
            CTakeDamageInfo::CTakeDamageInfo(&v29, v22, v21, flDamagec, 0x4000, 0);
            v20(this, &v29);
            CTakeDamageInfo::~CTakeDamageInfo(&v29);
            v23 = CGlobalVarsBase::curtime(gpGlobals, 0);
            vptr_IHandleEntity = this->_vptr_IHandleEntity;
            this->m_PainFinished = v23 + 1.0;
            if ( vptr_IHandleEntity[471](this) != 0 )
              this->m_idrowndmg += this->m_nDrownDmgRate;
          }
        }
      }
    }
    CBasePlayer::UpdateUnderwaterState(this);
  }
  else
  {
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v12 = gpGlobals->m_pfnWarningFunc;
        if ( v12 != 0 )
          v12(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v13 = v11->m_flCurrentTime + 12.0;
    }
    else
    {
      v13 = 12.0;
    }
    this->m_AirFinished = v13;
  }
}


// CBasePlayer::ShowViewPortPanel  (line 2724, @0x00000000023018e0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CUserMessageVGUIMenu_Keys>::TypeHandler>, CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUserMessageVGUIMenu_t, FindGameEvent<CUserMessageVGUIMenu_t>, FindOrCreateGameEvent<CUserMessageVGUIMenu_t>, New, PostEvent<CUserMessageVGUIMenu_t>, add_keys, assign, length, set_has_name, set_has_show, set_has_value, set_name, set_show, set_value, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB, ~CUserMessageVGUIMenu_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, KeyValues::GetFirstSubKey, CUserMessageVGUIMenu::CUserMessageVGUIMenu, strlen, std::string::assign(char const*,ulong), operator new, CUserMessageVGUIMenu_Keys::CUserMessageVGUIMenu_Keys, KeyValues::GetName, KeyValues::GetString, KeyValues::GetNextKey (19 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent
void __fastcall CBasePlayer::ShowViewPortPanel(CBasePlayer *const this, const char *name, bool bShow, KeyValues *data)
{
  KeyValues *FirstSubKey; // r12
  size_t v9; // rax
  std::string **v10; // rbx
  __int64 v11; // rax
  const char *v12; // rax
  const char *v13; // r15
  size_t v14; // rax
  const char *String; // rax
  const char *v16; // r15
  size_t v17; // rax
  __int64 current_size; // rax
  IGameEventSystem *v19; // rbx
  void (__fastcall *v20)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r12
  __int64 v21; // [rsp+8h] [rbp-1D8h]
  unsigned int v22; // [rsp+14h] [rbp-1CCh]
  _QWORD v23[2]; // [rsp+28h] [rbp-1B8h] BYREF
  int v24; // [rsp+38h] [rbp-1A8h]
  std::string *v25; // [rsp+40h] [rbp-1A0h]
  google::protobuf::internal::RepeatedPtrFieldBase v26; // [rsp+48h] [rbp-198h] BYREF
  bool i; // [rsp+60h] [rbp-180h]
  unsigned int v28; // [rsp+68h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v30; // [rsp+1A8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, this);
  CRecipientFilter::MakeReliable(&filter);
  if ( data != 0 )
    FirstSubKey = KeyValues::GetFirstSubKey(data);
  else
    FirstSubKey = 0;
  CUserMessageVGUIMenu::CUserMessageVGUIMenu(v23);
  v28 = 0;
  v24 |= 1u;
  v23[0] = off_4073AF0;
  v9 = strlen(name);
  std::string::assign(v25, name, v9);
  v24 |= 2u;
  for ( i = bShow; FirstSubKey != 0; FirstSubKey = KeyValues::GetNextKey(FirstSubKey) )
  {
    current_size = v26.current_size_;
    if ( v26.current_size_ >= v26.allocated_size_ )
    {
      if ( v26.allocated_size_ == v26.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v26, v26.allocated_size_ + 1);
      v10 = operator new(0x28u);
      CUserMessageVGUIMenu_Keys::CUserMessageVGUIMenu_Keys(v10);
      v11 = v26.current_size_;
      ++v26.allocated_size_;
      ++v26.current_size_;
      v26.elements_[v11] = v10;
    }
    else
    {
      ++v26.current_size_;
      v10 = v26.elements_[current_size];
    }
    v12 = KeyValues::GetName(FirstSubKey);
    *(v10 + 4) |= 1u;
    v13 = v12;
    v14 = strlen(v12);
    std::string::assign(v10[3], v13, v14);
    String = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    *(v10 + 4) |= 2u;
    v16 = String;
    v17 = strlen(String);
    std::string::assign(v10[4], v16, v17);
  }
  v19 = g_pGameEventSystem;
  v21 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent;
  v22 = v28;
  v20 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent);
  v20(v19, v22, 0, &filter, v21, v23, 64);
  v23[0] = &off_4073970;
  CUserMessageVGUIMenu::~CUserMessageVGUIMenu(v23);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CBasePlayer::PlayerDeathThink  (line 2751, @0x00000000022e4270, libserver.so)  // inlines: FastSqrt, GetAbsVelocity, GetInt, IsSequenceFinished, Length, SetPlaybackRate, StopAnimation, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator*=
// calls: CBaseEntity::SetNextThink, VectorNormalize, CBaseEntity::SetAbsVelocity, CBasePlayer::HasWeapons, CBaseEntity::GetModel, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::GetLifeState, CBaseEntity::IncrementInterpolationFrame, respawn, CBaseEntity::SetLifeState, CBaseAnimating::StudioFrameAdvance, CBaseEntity::CalcAbsoluteVelocity (14 total)
void __fastcall CBasePlayer::PlayerDeathThink(CBasePlayer *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  float v5; // xmm1_4
  const CBaseAnimatingController *v6; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  CBaseAnimatingController *v8; // rax
  uint64 m_nButtons; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  uint32 m_afPhysicsFlags; // esi
  double v13; // xmm1_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v15; // xmm0_4
  float flForwarda; // [rsp+Ch] [rbp-34h]
  float flForward; // [rsp+Ch] [rbp-34h]
  Vector vecNewVelocity; // [rsp+10h] [rbp-30h] BYREF

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v4) = 0;
    *&v4 = v3->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v4 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  if ( (this->m_fFlags.m_Value & 1) != 0 )
  {
    if ( (this->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    v5 = fsqrt(
           ((this->m_vecAbsVelocity.m_Value.x * this->m_vecAbsVelocity.m_Value.x)
          + (this->m_vecAbsVelocity.m_Value.y * this->m_vecAbsVelocity.m_Value.y))
         + (this->m_vecAbsVelocity.m_Value.z * this->m_vecAbsVelocity.m_Value.z))
       - 20.0;
    if ( v5 <= 0.0 )
    {
      CBaseEntity::SetAbsVelocity(this, &vec3_origin);
    }
    else
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
      {
        flForward = v5;
        CBaseEntity::CalcAbsoluteVelocity(this);
        v5 = flForward;
      }
      flForwarda = v5;
      vecNewVelocity = this->m_vecAbsVelocity;
      VectorNormalize(&vecNewVelocity);
      vecNewVelocity.x = vecNewVelocity.x * flForwarda;
      vecNewVelocity.y = vecNewVelocity.y * flForwarda;
      vecNewVelocity.z = flForwarda * vecNewVelocity.z;
      CBaseEntity::SetAbsVelocity(this, &vecNewVelocity);
    }
  }
  if ( CBasePlayer::HasWeapons(this) )
    (*(this->_vptr_IHandleEntity + 399))(this);
  CBaseEntity::GetModel(&vecNewVelocity, this);
  if ( *&vecNewVelocity.x == 0
    || (v6 = CBaseAnimating::GetBaseAnimatingController(this), (*(v6->_vptr_CSkeletonAnimationController + 19))(v6) != 0)
    || CBaseEntity::GetLifeState(this) != LifeState_t::LIFE_DYING
    || (CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL),
        v15 = this->m_iRespawnFrames + 1.0,
        this->m_iRespawnFrames = v15,
        v15 >= 60.0) )
  {
    if ( CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_DYING )
    {
      CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
      this->m_flDeathAnimTime = CGlobalVarsBase::curtime(gpGlobals, 0);
    }
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
    (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 0.0);
    CBaseEntity::IncrementInterpolationFrame(this);
    v8 = CBaseAnimating::GetBaseAnimatingController(this);
    (*(v8->_vptr_CSkeletonAnimationController + 22))(v8, 0.0);
    m_nButtons = this->m_nButtons;
    v10 = m_nButtons & 0xFFFFFFFFFBFFFFFFLL;
    if ( (m_nButtons & 4) != 0 )
    {
      v11 = m_nButtons & 0xFFFFFFFFFBFFFFFBLL;
      if ( this->m_bDuckToggled )
        v10 = v11;
    }
    if ( CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_DEAD )
    {
      if ( v10 == 0 && (*(g_pGameRules->_vptr_CGameRules + 78))(g_pGameRules, this) != 0 )
        CBaseEntity::SetLifeState(this, LifeState_t::LIFE_RESPAWNABLE);
    }
    else
    {
      if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0
        && CGlobalVarsBase::curtime(gpGlobals, 0) > (this->m_flDeathTime.m_Value + 6.0)
        && (this->m_afPhysicsFlags & 8) == 0 )
      {
        (*(this->_vptr_IHandleEntity + 432))(this, this->m_iObserverLastMode);
      }
      if ( v10 != 0
        || (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0
        && forcerespawn.m_pParent->m_Value.m_nValue > 0
        && CGlobalVarsBase::curtime(gpGlobals, 0) > (this->m_flDeathTime.m_Value + 5.0) )
      {
        m_afPhysicsFlags = this->m_afPhysicsFlags;
        this->m_nButtons = 0;
        this->m_iRespawnFrames = 0.0;
        respawn(this, ((m_afPhysicsFlags >> 3) ^ 1) & 1);
        CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v13, 0);
      }
    }
  }
}


// CBasePlayer::StopObserverMode  (line 2917, @0x00000000022bdbf0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<<anonymous enum> >, operator==<<anonymous enum> >
// strings: "specmenu", "specgui", "overview"
void __fastcall CBasePlayer::StopObserverMode(CBasePlayer *const this)
{
  int m_Value; // eax
  int (**vptr_IHandleEntity)(...); // rax

  this->m_bForcedObserverMode = 0;
  m_Value = this->m_iObserverMode.m_Value;
  this->m_afPhysicsFlags &= ~8u;
  if ( m_Value != 0 )
  {
    if ( m_Value != 1 )
      this->m_iObserverLastMode = m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 2796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_iObserverMode.m_Value = 0;
    vptr_IHandleEntity[378](this, "specmenu", 0, 0);
    (*(this->_vptr_IHandleEntity + 378))(this, "specgui", 0, 0);
    (*(this->_vptr_IHandleEntity + 378))(this, "overview", 0, 0);
  }
}


// CBasePlayer::StartObserverMode  (line 2937, @0x00000000022d8e70, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetViewEntity, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, VectorAdd, curtime, operator+, operator=<int>
// calls: CBaseCombatCharacter::GetActiveWeapon, CBaseEntity::SetGroundEntity, CBaseEntity::RemoveFlag, CBaseEntity::SetDamageOptions, CBaseEntity::AddEffects, CBaseEntity::SetLifeState, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
// strings: "specgui"
bool __fastcall CBasePlayer::StartObserverMode(CBasePlayer *const this, int mode)
{
  uint32 m_afPhysicsFlags; // eax
  CBaseCombatWeapon *ActiveWeapon; // rax
  unsigned __int16 v6; // dx
  int v7; // esi
  vec_t v8; // eax
  CEntitySystem *v9; // rcx
  CEntityIdentity *v10; // rdx
  __int64 v11; // rsi
  void (__fastcall *v12)(CBasePlayer *const, const char *, _QWORD, _QWORD); // r14
  unsigned __int8 v13; // al
  CGlobalVars *v14; // r12
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float *v18; // r12
  const Vector *AbsOrigin; // rax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  Vector vOrigin; // [rsp+0h] [rbp-30h] BYREF

  m_afPhysicsFlags = this->m_afPhysicsFlags;
  if ( (m_afPhysicsFlags & 8) == 0 )
  {
    v18 = (*(this->_vptr_IHandleEntity + 171))(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v20 = AbsOrigin->z + v18[2];
    v21 = AbsOrigin->x + *v18;
    vOrigin.y = AbsOrigin->y + v18[1];
    vOrigin.z = v20;
    vOrigin.x = v21;
    CBaseEntity::SetAbsOrigin(this, &vOrigin);
    (*(this->_vptr_IHandleEntity + 211))(this, &vec3_origin);
    m_afPhysicsFlags = this->m_afPhysicsFlags;
  }
  this->m_afPhysicsFlags = m_afPhysicsFlags | 8;
  if ( CBaseCombatCharacter::GetActiveWeapon(this) != 0 )
  {
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
    (*(ActiveWeapon->_vptr_IHandleEntity + 283))(ActiveWeapon, 0);
  }
  CBaseEntity::SetGroundEntity(this, 0);
  CBaseEntity::RemoveFlag(this, 2);
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  (*(this->_vptr_IHandleEntity + 435))(this, mode);
  if ( gpGlobals->eLoadType != MapLoadType_t::MapLoad_Background )
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
    LODWORD(v8) = (this->m_hViewEntity.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
    vOrigin.x = v8;
    v9 = g_pEntitySystem;
    v10 = (LODWORD(v8) + 2);
    if ( v10 <= 1
      || (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9]) == 0
      || (v11 = v7 & 0x1FF, v9 = (8 * v11), v10 += v11, v10 == 0)
      || LODWORD(v8) != v10->m_EHandle.m_Index
      || this == v10->m_pInstance
      || v10->m_pInstance == 0 )
    {
      v12 = *(this->_vptr_IHandleEntity + 378);
      v13 = (*(this->_vptr_IHandleEntity + 434))(this, mode, v10, v9);
      v12(this, "specgui", v13, 0);
    }
  }
  if ( this->m_Local.m_iHideHUD.m_Value != 8 )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_iHideHUD.m_Value = 8;
  }
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  CBaseEntity::AddEffects(this, 32);
  (*(this->_vptr_IHandleEntity + 157))(this, 1);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
  v14 = gpGlobals;
  m_flCurrentTime = 0.0;
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
  this->m_flDeathAnimTime = m_flCurrentTime;
  this->m_pl.deadflag = 1;
  return 1;
}


// CBasePlayer::SetObserverMode  (line 3022, @0x00000000022ef240, libserver.so)  // inlines: CEntityHandle, CGameTrace, EnableInteractsWith, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LengthSqr, LookupEntity, NetworkStateChanged, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceRay, ValidObserverTargetCounter, VectorAdd, VectorAligned, VectorMA, VectorSubtract, operator CBaseEntity*, operator*=, operator-, operator=, operator=<int>, operator><<anonymous enum> >
// calls: CBaseEntity::GetLifeState, ForEachPlayer<ValidObserverTargetCounter>, CBasePlayer::SetFOV, CBaseEntity::SetMoveType, CEntityHandle::GetHandleEntity, AngleVectors, VectorNormalize, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, SafeGetViewVectors
// callers: CBasePlayer::SetObserverMode
bool __fastcall CBasePlayer::SetObserverMode(CBasePlayer *const this, int mode)
{
  unsigned __int8 v4; // r14
  unsigned int v5; // r13d
  unsigned __int8 m_Value; // al
  double v7; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v9; // xmm1_4
  QAngle *v10; // rax
  uint32 v11; // ecx
  bool v12; // zf
  unsigned __int16 v13; // dx
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  CEntityIdentity *v17; // rdx
  __int64 v18; // rsi
  const CBaseEntity *m_pInstance; // r12
  __int64 v20; // rax
  int m_nValue; // eax
  IHandleEntity *v23; // rax
  IHandleEntity *HandleEntity; // rax
  vec_t v25; // xmm1_4
  const QAngle *v26; // rax
  const CViewVectors *ViewVectors; // rax
  vec_t v28; // xmm1_4
  vec_t v29; // xmm2_4
  __int64 v30; // [rsp+8h] [rbp-1A8h]
  Vector eyePos; // [rsp+10h] [rbp-1A0h] BYREF
  QAngle eyeAngles; // [rsp+20h] [rbp-190h] BYREF
  Vector dir; // [rsp+30h] [rbp-180h] BYREF
  CTraceFilterSimple v34; // [rsp+40h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-E0h] BYREF

  if ( CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_RESPAWNABLE )
  {
    mode = 6;
  }
  else if ( mode <= 3 )
  {
LABEL_3:
    v4 = mode;
    v5 = mode;
    goto LABEL_4;
  }
  if ( (*(this->_vptr_IHandleEntity + 100))(this) != 0 && (*(this->_vptr_IHandleEntity + 450))(this) == 0 )
  {
    *&tr.startpos.x = this;
    tr.endpos.y = 0.0;
    ForEachPlayer<ValidObserverTargetCounter>(&tr);
    if ( mode == 6 && LODWORD(tr.endpos.y) != 0 )
      mode = 4;
  }
  if ( this->m_iTeamNum.m_Value <= 1u )
    goto LABEL_3;
  m_nValue = mp_forcecamera.m_pParent->m_Value.m_nValue;
  if ( m_nValue == 1 )
  {
    v5 = 4;
    v4 = 4;
  }
  else
  {
    v4 = 3;
    v5 = 3;
    if ( m_nValue != 2 )
    {
      v4 = mode;
      v5 = mode;
    }
  }
LABEL_4:
  m_Value = this->m_iObserverMode.m_Value;
  if ( m_Value > 1u )
    this->m_iObserverLastMode = m_Value;
  if ( m_Value != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iObserverMode.m_Value = v4;
  }
  v7 = (*(this->_vptr_IHandleEntity + 164))(this);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  *&eyePos.x = v7;
  eyePos.z = v9;
  v10 = (vptr_IHandleEntity[165])(this);
  v11 = this->m_hObserverTarget.m_Value.m_Index >> 15;
  v12 = this->m_hObserverTarget.m_Value.m_Index == -1;
  eyeAngles = *v10;
  if ( v12 )
  {
    v13 = 0x7FFF;
    v14 = 0x7FFF;
  }
  else
  {
    v13 = this->m_hObserverTarget.m_Value.m_Index & 0x7FFF;
    v14 = v13;
  }
  v15 = (v11 << 15) | v13 & 0x7FFF;
  LODWORD(tr.startpos.x) = v15;
  v16 = g_pEntitySystem;
  v17 = (v15 + 2);
  if ( v17 > 1
    && (v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v14 >> 9]) != 0
    && (v18 = v14 & 0x1FF, v16 = 8 * v18, v14 = 120 * v18, (v17 = (v17 + v14)) != 0)
    && v15 == v17->m_EHandle.m_Index )
  {
    m_pInstance = v17->m_pInstance;
    if ( v17->m_pInstance != 0 )
    {
      *&tr.startpos.x = (*(m_pInstance->_vptr_IHandleEntity + 164))(v17->m_pInstance);
      tr.startpos.z = v25;
      eyePos = tr.startpos;
      v26 = (*(m_pInstance->_vptr_IHandleEntity + 165))(m_pInstance);
      AngleVectors(v26, &dir, 0, 0);
      VectorNormalize(&dir);
      ray.m_Start.w = 0.0;
      ray.m_Delta.w = 0.0;
      ray.m_StartOffset.w = 0.0;
      ray.m_Extents.w = 0.0;
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      ray.m_flRadius = 0.0;
      ray.m_Extents.x = 8.0;
      ray.m_Extents.y = 8.0;
      ray.m_Extents.z = 8.0;
      ray.m_IsRay = 0;
      ray.m_Delta.x = ((dir.x * -64.0) + eyePos.x) - eyePos.x;
      ray.m_Delta.y = ((dir.y * -64.0) + eyePos.y) - eyePos.y;
      ray.m_Delta.z = ((-64.0 * dir.z) + eyePos.z) - eyePos.z;
      ray.m_Start.x = eyePos.x + 0.0;
      ray.m_Start.y = eyePos.y + 0.0;
      ray.m_StartOffset.x = -0.0;
      ray.m_StartOffset.y = -0.0;
      ray.m_StartOffset.z = -0.0;
      memset(&tr.m_ShapeAttributes, 0, 31);
      ray.m_Start.z = eyePos.z + 0.0;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
      CGameTrace::Init(&tr);
      v30 = (*(this->_vptr_IHandleEntity + 540))(this, 0);
      CTraceFilterSimple::CTraceFilterSimple(&v34, m_pInstance, 11, 0);
      v34.m_attr.m_nInteractsWith |= v30;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v34, &tr);
      ViewVectors = SafeGetViewVectors();
      v28 = tr.endpos.y - ViewVectors->m_vDeadViewHeight.y;
      v29 = tr.endpos.x - ViewVectors->m_vDeadViewHeight.x;
      eyePos.z = tr.endpos.z - ViewVectors->m_vDeadViewHeight.z;
      eyePos.y = v28;
      eyePos.x = v29;
      eyeAngles = *(*(m_pInstance->_vptr_IHandleEntity + 165))(m_pInstance);
    }
  }
  else
  {
    m_pInstance = 0;
  }
  if ( v5 <= 6 )
  {
    v16 = v5;
    v20 = 1LL << v5;
    if ( ((1LL << v5) & 0xB) != 0 )
    {
      CBasePlayer::SetFOV(this, this, 0, 0LL, 0);
      (*(this->_vptr_IHandleEntity + 211))(this, &vec3_origin);
      if ( m_pInstance != 0 )
        (*(this->_vptr_IHandleEntity + 445))(this, &eyePos, &eyeAngles);
      CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    }
    else if ( (v20 & 0x40) != 0 )
    {
      CBasePlayer::SetFOV(this, this, 0, 0LL, 0);
      if ( (*(this->_vptr_IHandleEntity + 391))(this) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 437))(this, 0);
      }
      else
      {
        HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hObserverTarget.m_Value);
        (*(this->_vptr_IHandleEntity + 437))(this, HandleEntity);
      }
      (*(this->_vptr_IHandleEntity + 211))(this, &vec3_origin);
      if ( m_pInstance != 0 )
        (*(this->_vptr_IHandleEntity + 445))(this, &eyePos, &eyeAngles);
      CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_OBSERVER, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    }
    else if ( (v20 & 0x30) != 0 )
    {
      v23 = CEntityHandle::GetHandleEntity(&this->m_hObserverTarget.m_Value);
      (*(this->_vptr_IHandleEntity + 437))(this, v23);
      CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_OBSERVER, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    }
  }
  (*(this->_vptr_IHandleEntity + 444))(this, v14, v17, v16);
  return 1;
}


// CBasePlayer::SetObserverMode  (line 3022, @0x00000000022ef8a0, libserver.so)
// calls: CBasePlayer::SetObserverMode
bool __fastcall CBasePlayer::SetObserverMode(CBasePlayer *const this, int mode)
{
  return mode <= 6 && CBasePlayer::SetObserverMode(this, mode);
}


// CBasePlayer::GetObserverMode  (line 3151, @0x00000000022b7d00, libserver.so)
int __fastcall CBasePlayer::GetObserverMode(CBasePlayer *const this)
{
  return this->m_iObserverMode.m_Value;
}


// CBasePlayer::ForceObserverMode  (line 3158, @0x00000000022b7d10, libserver.so)  // inlines: operator==<int>
void __fastcall CBasePlayer::ForceObserverMode(CBasePlayer *const this, int mode)
{
  int m_iObserverLastMode; // r12d

  if ( this->m_iObserverMode.m_Value != mode )
  {
    m_iObserverLastMode = 6;
    if ( this->m_bForcedObserverMode )
      m_iObserverLastMode = this->m_iObserverLastMode;
    (*(this->_vptr_IHandleEntity + 435))(this);
    if ( this->m_bForcedObserverMode )
      this->m_iObserverLastMode = m_iObserverLastMode;
    this->m_bForcedObserverMode = 1;
  }
}


// CBasePlayer::CheckObserverSettings  (line 3184, @0x00000000022c46c0, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFlags, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, ToBasePlayer, operator CBaseEntity*, operator!=, operator=
// calls: CBaseEntity::ClearFlags, CBaseEntity::AddFlag
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::CheckObserverSettings(CBasePlayer *const this)
{
  unsigned __int16 v2; // cx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *v7; // r13
  unsigned __int16 v8; // dx
  int v9; // edi
  int v10; // eax
  CEntityInstance *v11; // r12
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  uint32 m_Index; // edx
  unsigned __int16 v15; // cx
  int v16; // edi
  CEntityInstance *v17; // r8
  uint32 v18; // eax
  CEntityIdentity *v19; // rcx
  CEntityIdentity *v20; // rcx
  CEntityInstance *v21; // rcx
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v25; // eax
  __int16 v26; // cx
  unsigned __int16 v27; // dx
  int v28; // esi
  __int64 m_pInstance; // r12
  __int64 v30; // rdx
  CEntitySystem *v31; // rcx
  CEntityIdentity *v32; // rax
  __int64 v33; // rsi
  CEntityIdentity *v34; // rax
  __int64 m_iObserverLastMode; // rsi
  int v36; // eax
  unsigned int v37; // r14d
  float *v38; // r14
  float *v39; // rax
  void (__fastcall *v40)(CBasePlayer *const, __int64); // r14
  __int64 v41; // rax

  if ( this->m_bForcedObserverMode )
  {
    if ( this->m_hObserverTarget.m_Value.m_Index == -1 )
    {
      v27 = 0x7FFF;
      v28 = 0x7FFF;
    }
    else
    {
      v27 = this->m_hObserverTarget.m_Value.m_Index & 0x7FFF;
      v28 = v27;
    }
    m_pInstance = 0;
    v30 = (this->m_hObserverTarget.m_Value.m_Index >> 15 << 15) | v27 & 0x7FFF;
    v31 = g_pEntitySystem;
    if ( (v30 + 2) > 1 )
    {
      v32 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v28 >> 9];
      if ( v32 != 0 )
      {
        v33 = v28 & 0x1FF;
        v31 = (8 * v33);
        v34 = &v32[v33];
        if ( v34 != 0 && v30 == v34->m_EHandle.m_Index )
          m_pInstance = v34->m_pInstance;
      }
    }
    if ( (*(this->_vptr_IHandleEntity + 443))(this, m_pInstance, v30, v31) == 0 )
      m_pInstance = (*(this->_vptr_IHandleEntity + 440))(this, 0);
    if ( m_pInstance != 0 )
    {
      m_iObserverLastMode = this->m_iObserverLastMode;
      this->m_bForcedObserverMode = 0;
      (*(this->_vptr_IHandleEntity + 435))(this, m_iObserverLastMode);
      (*(this->_vptr_IHandleEntity + 437))(this, m_pInstance);
    }
  }
  else
  {
    if ( this->m_iObserverLastMode <= 2 )
    {
      this->m_iObserverLastMode = 6;
      if ( (this->m_iObserverMode.m_Value - 4) > 1u )
        return;
    }
    else if ( (this->m_iObserverMode.m_Value - 4) > 1u )
    {
      return;
    }
    (*(this->_vptr_IHandleEntity + 448))(this);
    if ( this->m_hObserverTarget.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = this->m_hObserverTarget.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    v4 = (this->m_hObserverTarget.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    if ( v4 + 2 > 1 )
    {
      v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
      if ( v5 != 0 )
      {
        v6 = &v5[v3 & 0x1FF];
        if ( v6 != 0 && v4 == v6->m_EHandle.m_Index )
        {
          v7 = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && (*(v7->_vptr_IHandleEntity + 140))(v6->m_pInstance) != 0 )
          {
            if ( this->m_iObserverMode.m_Value == 4 )
            {
              v36 = v7[9].m_pEntity & 3;
              if ( v36 != (this->m_fFlags.m_Value & 3) )
              {
                v37 = v36 | this->m_fFlags.m_Value & 0xFFFFFFFC;
                CBaseEntity::ClearFlags(this);
                CBaseEntity::AddFlag(this, v37);
              }
              v38 = (*(this->_vptr_IHandleEntity + 171))(this);
              v39 = (*(v7->_vptr_IHandleEntity + 171))(v7);
              if ( *v38 != *v39 || v38[1] != v39[1] || v38[2] != v39[2] )
              {
                v40 = *(this->_vptr_IHandleEntity + 211);
                v41 = (*(v7->_vptr_IHandleEntity + 171))(v7);
                v40(this, v41);
              }
            }
            if ( LODWORD(v7[50]._vptr_IHandleEntity) == -1 )
            {
              v8 = 0x7FFF;
              v9 = 0x7FFF;
            }
            else
            {
              v8 = v7[50]._vptr_IHandleEntity & 0x7FFF;
              v9 = v8;
            }
            v10 = (LODWORD(v7[50]._vptr_IHandleEntity) >> 15 << 15) | v8 & 0x7FFF;
            v11 = 0;
            if ( (v10 + 2) > 1 )
            {
              v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
              if ( v12 != 0 )
              {
                v13 = &v12[v9 & 0x1FF];
                if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
                  v11 = v13->m_pInstance;
              }
            }
            m_Index = this->m_PlayerFog.m_hCtrl.m_Value.m_Index;
            if ( m_Index == -1 )
            {
              v15 = 0x7FFF;
              v16 = 0x7FFF;
            }
            else
            {
              v15 = this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x7FFF;
              v16 = v15;
            }
            v17 = 0;
            v18 = (this->m_PlayerFog.m_hCtrl.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
            if ( v18 + 2 > 1 )
            {
              v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
              if ( v19 != 0 )
              {
                v20 = &v19[v16 & 0x1FF];
                if ( v20 != 0 && v18 == v20->m_EHandle.m_Index )
                  v17 = v20->m_pInstance;
              }
            }
            if ( v11 != v17 )
            {
              v21 = 0;
              if ( m_Index + 2 > 1 )
              {
                v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_PlayerFog.m_hCtrl.m_Value.m_Index) >> 9)
                                                                     & 0x3F];
                if ( v22 != 0 )
                {
                  v23 = &v22[this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x1FF];
                  if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
                    v21 = v23->m_pInstance;
                }
              }
              if ( v11 != v21 )
              {
                (*(this->m_PlayerFog._vptr_fogplayerparams_t + 2))(&this->m_PlayerFog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                if ( v11 != 0 && (m_pEntity = v11->m_pEntity) != 0 )
                {
                  v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  if ( m_pEntity->m_EHandle.m_Index == -1 )
                    v26 = 0x7FFF;
                  else
                    v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_PlayerFog.m_hCtrl.m_Value.m_Index) = v26
                                                                    | this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x8000;
                  this->m_PlayerFog.m_hCtrl.m_Value.m_Index = (v25 << 15)
                                                            | this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x7FFF;
                }
                else
                {
                  this->m_PlayerFog.m_hCtrl.m_Value.m_Index = -1;
                }
              }
            }
          }
        }
      }
    }
  }
}


// CBasePlayer::ValidateCurrentObserverTarget  (line 3262, @0x00000000022c1210, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::ValidateCurrentObserverTarget(CBasePlayer *const this)
{
  uint32 v2; // ecx
  unsigned __int8 (__fastcall *v3)(CBasePlayer *const, CEntityInstance *, unsigned __int64, CEntitySystem *); // r8
  unsigned __int16 v4; // dx
  int v5; // edi
  CEntityInstance *v6; // rsi
  int v7; // eax
  CEntitySystem *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  int (**vptr_IHandleEntity)(...); // rax
  uint32 m_Index; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx

  v2 = this->m_hObserverTarget.m_Value.m_Index >> 15;
  v3 = *(this->_vptr_IHandleEntity + 443);
  if ( this->m_hObserverTarget.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hObserverTarget.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = 0;
  v7 = (v2 << 15) | v4 & 0x7FFF;
  v8 = g_pEntitySystem;
  v9 = (v7 + 2);
  if ( v9 > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v9 != 0 )
    {
      v10 = v5 & 0x1FF;
      v8 = (8 * v10);
      v9 += 120 * v10;
      if ( v9 != 0 && v7 == *(v9 + 16) )
        v6 = *v9;
    }
  }
  if ( v3(this, v6, v9, v8) == 0 )
  {
    v11 = (*(this->_vptr_IHandleEntity + 440))(this, 0);
    if ( v11 != 0 )
    {
      (*(this->_vptr_IHandleEntity + 437))(this, v11);
    }
    else
    {
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      if ( mp_forcecamera.m_pParent->m_Value.m_nValue != 0 )
      {
        vptr_IHandleEntity[446](this, 3);
        m_Index = this->m_hObserverTarget.m_Value.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hObserverTarget.m_Value.m_Index) >> 9)
                                                               & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[this->m_hObserverTarget.m_Value.m_Index & 0x1FF];
            if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 2820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_hObserverTarget.m_Value.m_Index = -1;
            }
          }
        }
      }
      else
      {
        vptr_IHandleEntity[446](this, 6);
      }
    }
  }
}


// CBasePlayer::StartReplayMode  (line 3293, @0x00000000022c1560, libserver.so)  // inlines: GetFloat, curtime
__int64 __fastcall CBasePlayer::StartReplayMode(
        CBasePlayer *const this,
        float a2,
        float fDelay,
        float fDuration,
        CEntityIndex iEntity)
{
  float m_flCurrentTime; // xmm2_4
  __int64 result; // rax
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int32 m_Data; // [rsp-20h] [rbp-20h]
  float v11; // [rsp-1Ch] [rbp-1Ch]

  if ( sv_maxreplay == 0 )
    return 0;
  m_flCurrentTime = 0.0;
  result = 0;
  if ( sv_maxreplay->m_pParent->m_Value.m_fValue > 0.0 )
  {
    this->m_fDelay = a2;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_Data = iEntity.m_Data;
          v11 = fDelay;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          iEntity.m_Data = m_Data;
          fDelay = v11;
        }
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    this->m_iReplayEntity = iEntity;
    this->m_fReplayEnd = m_flCurrentTime + fDelay;
    return 1;
  }
  return result;
}


// CBasePlayer::StopReplayMode  (line 3307, @0x00000000022b7d70, libserver.so)
void __fastcall CBasePlayer::StopReplayMode(CBasePlayer *const this)
{
  this->m_fDelay = 0.0;
  this->m_fReplayEnd = -1.0;
  this->m_iReplayEntity.m_Data = 0;
}


// CBasePlayer::GetDelayTicks  (line 3316, @0x00000000022c0560, libserver.so)  // inlines: curtime
int __fastcall CBasePlayer::GetDelayTicks(CBasePlayer *const this)
{
  float m_flCurrentTime; // xmm1_4
  float m_fReplayEnd; // xmm0_4
  CGlobalVars *v4; // rbx
  int result; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v7; // [rsp-24h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  m_fReplayEnd = this->m_fReplayEnd;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v7 = this->m_fReplayEnd;
        (m_pfnWarningFunc)(1, m_fReplayEnd, 0.0);
        m_fReplayEnd = v7;
      }
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  if ( m_fReplayEnd > m_flCurrentTime )
    return ((this->m_fDelay / gpGlobals->interval_per_tick) + 0.5);
  result = 0;
  if ( this->m_fDelay > 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 452))(this);
    return 0;
  }
  return result;
}


// CBasePlayer::JumptoPosition  (line 3333, @0x00000000022ba350, libserver.so)  // inlines: SnapEyeAngles, operator=
// calls: CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsVelocity, CBaseEntity::SetLocalAngles
void __fastcall CBasePlayer::JumptoPosition(
        CBasePlayer *const this,
        const Vector *const origin,
        const QAngle *const angles)
{
  vec_t z; // xmm0_4

  CBaseEntity::SetAbsOrigin(this, origin);
  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  CBaseEntity::SetLocalAngles(this, angles);
  this->m_pl.v_angle.x = angles->x;
  this->m_pl.v_angle.y = angles->y;
  z = angles->z;
  this->m_FixAngle.fixangle = 1;
  this->m_pl.v_angle.z = z;
}


// CBasePlayer::SetObserverTarget  (line 3343, @0x00000000022bf230, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceRay, VectorAdd, VectorAligned, VectorMA, VectorSubtract, operator*=
// calls: AngleVectors, VectorNormalize, SafeGetViewVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CBasePlayer::SetObserverTarget
bool __fastcall CBasePlayer::SetObserverTarget(CBasePlayer *const this, CBaseEntity *pTarget)
{
  double v4; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v6; // xmm1_4
  const QAngle *v7; // rax
  __int64 v8; // kr00_8
  const CViewVectors *ViewVectors; // r12
  const CViewVectors *v10; // rax
  float y; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v17; // r15
  void (__fastcall *v18)(CBasePlayer *const, Vector *, __int64); // r14
  __int64 v19; // rax
  float v21; // [rsp+8h] [rbp-1A8h]
  float v22; // [rsp+10h] [rbp-1A0h]
  float z; // [rsp+14h] [rbp-19Ch]
  float v24; // [rsp+18h] [rbp-198h]
  Vector dir; // [rsp+20h] [rbp-190h] BYREF
  Vector start; // [rsp+30h] [rbp-180h]
  CTraceFilterSimple v27; // [rsp+40h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-E0h] BYREF

  v4 = (*(pTarget->_vptr_IHandleEntity + 164))(pTarget);
  vptr_IHandleEntity = pTarget->_vptr_IHandleEntity;
  start.z = v6;
  *&start.x = v4;
  v7 = (vptr_IHandleEntity[165])(pTarget);
  AngleVectors(v7, &dir, 0, 0);
  VectorNormalize(&dir);
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  v8 = *&start.x;
  z = start.z;
  v21 = (dir.x * -64.0) + start.x;
  v22 = (dir.y * -64.0) + start.y;
  v24 = (-64.0 * dir.z) + start.z;
  ViewVectors = SafeGetViewVectors();
  v10 = SafeGetViewVectors();
  ray.m_Delta.x = v21 - *&v8;
  ray.m_Delta.y = v22 - *(&v8 + 1);
  ray.m_flRadius = 0.0;
  ray.m_Delta.z = v24 - z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  y = ViewVectors->m_vDuckHullMax.y;
  v12 = ViewVectors->m_vDuckHullMax.z;
  ray.m_Extents.x = ViewVectors->m_vDuckHullMax.x - v10->m_vDuckHullMin.x;
  ray.m_Extents.y = y - v10->m_vDuckHullMin.y;
  v13 = v12 - v10->m_vDuckHullMin.z;
  ray.m_Extents.x = ray.m_Extents.x * 0.5;
  ray.m_Extents.y = ray.m_Extents.y * 0.5;
  ray.m_Extents.z = v13 * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v14 = (v10->m_vDuckHullMin.x + ViewVectors->m_vDuckHullMax.x) * 0.5;
  v15 = (v10->m_vDuckHullMin.y + ViewVectors->m_vDuckHullMax.y) * 0.5;
  v16 = (v10->m_vDuckHullMin.z + ViewVectors->m_vDuckHullMax.z) * 0.5;
  ray.m_Start.x = *&v8 + v14;
  ray.m_Start.y = *(&v8 + 1) + v15;
  ray.m_Start.z = z + v16;
  ray.m_StartOffset.x = -v14;
  ray.m_StartOffset.y = -v15;
  ray.m_StartOffset.z = -v16;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v17 = (*(this->_vptr_IHandleEntity + 540))(this, 0);
  CTraceFilterSimple::CTraceFilterSimple(&v27, pTarget, 11, 0);
  v27.m_attr.m_nInteractsWith |= v17;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v27, &tr);
  v18 = *(this->_vptr_IHandleEntity + 445);
  v19 = (*(pTarget->_vptr_IHandleEntity + 165))(pTarget);
  v18(this, &tr.endpos, v19);
  return 1;
}


// CBasePlayer::SetObserverTarget  (line 3343, @0x00000000022bf830, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: CBasePlayer::SetFOV, CBasePlayer::SetObserverTarget
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePlayer::SetObserverTarget(CBasePlayer *const this, CBaseEntity *pTarget)
{
  char v4; // r12
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v11; // eax
  __int16 v12; // cx

  v4 = (*(this->_vptr_IHandleEntity + 443))(this);
  if ( v4 == 0 )
    return v4;
  m_Index = this->m_hObserverTarget.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hObserverTarget.m_Value.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hObserverTarget.m_Value.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( pTarget != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v12 = 0x7FFF;
      else
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hObserverTarget.m_Value.m_Index) = v12 | this->m_hObserverTarget.m_Value.m_Index & 0x8000;
      this->m_hObserverTarget.m_Value.m_Index = (v11 << 15) | this->m_hObserverTarget.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hObserverTarget.m_Value.m_Index = -1;
    }
  }
  CBasePlayer::SetFOV(this, this, 0, 0LL, 0);
  if ( this->m_iObserverMode.m_Value == 6 )
    return CBasePlayer::SetObserverTarget(this, pTarget);
  else
    return v4;
}


// CBasePlayer::IsValidObserverTarget  (line 3377, @0x00000000022c5fd0, libserver.so)  // inlines: GetInt, GetTeamNumber, ToBasePlayer
// calls: CBaseEntity::GetLifeState, CGlobalVarsBase::curtime
bool __fastcall CBasePlayer::IsValidObserverTarget(CBasePlayer *const this, CBaseEntity *target)
{
  CBaseEntity *v5; // r12
  unsigned __int8 m_Value; // dl
  int m_nValue; // eax
  float v8; // [rsp+Ch] [rbp-24h]

  if ( target == 0 || (*(target->_vptr_IHandleEntity + 140))(target) == 0 )
    return 0;
  v5 = 0;
  if ( (*(target->_vptr_IHandleEntity + 140))(target) != 0 )
    v5 = target;
  if ( this == v5
    || (v5->m_fEffects.m_Value & 0x20) != 0
    || CBaseEntity::GetLifeState(v5) == LifeState_t::LIFE_RESPAWNABLE )
  {
    return 0;
  }
  if ( CBaseEntity::GetLifeState(v5) == LifeState_t::LIFE_DEAD
    || CBaseEntity::GetLifeState(v5) == LifeState_t::LIFE_DYING )
  {
    v8 = v5[3].m_vecVelocity.m_Value.y + 6.0;
    if ( CGlobalVarsBase::curtime(gpGlobals, 0) > v8 )
      return 0;
  }
  m_Value = this->m_iTeamNum.m_Value;
  if ( m_Value != 1 )
  {
    m_nValue = mp_forcecamera.m_pParent->m_Value.m_nValue;
    if ( m_nValue == 1 )
    {
      if ( m_Value == target->m_iTeamNum.m_Value )
        return (*(this->_vptr_IHandleEntity + 442))(this, v5);
    }
    else if ( m_nValue != 2 )
    {
      return (*(this->_vptr_IHandleEntity + 442))(this, v5);
    }
    return 0;
  }
  return (*(this->_vptr_IHandleEntity + 442))(this, v5);
}


// CBasePlayer::GetNextObserverSearchStartPoint  (line 3433, @0x00000000022c0ec0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, entindex, operator CBaseEntity*
// calls: CEntityInstance::GetEntityIndex
CEntityIndex __fastcall CBasePlayer::GetNextObserverSearchStartPoint(CBasePlayer *const this, bool bReverse)
{
  int v3; // ebx
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // edx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CBasePlayer *m_pInstance; // rdi
  CEntityIndex v10; // ebx
  CEntityIndex result; // eax

  v3 = !bReverse ? 1 : -1;
  if ( this->m_hObserverTarget.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hObserverTarget.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hObserverTarget.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v6 + 2 <= 1
    || (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) == 0
    || (v8 = &v7[v5 & 0x1FF]) == 0
    || v6 != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0) )
  {
    m_pInstance = this;
  }
  v10.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data + v3;
  result.m_Data = gpGlobals->maxClients;
  if ( v10.m_Data > result.m_Data )
    return 1;
  if ( v10.m_Data > 0 )
    return v10;
  return result;
}


// CBasePlayer::PassesObserverFilter  (line 3461, @0x00000000022b7da0, libserver.so)
bool __fastcall CBasePlayer::PassesObserverFilter(CBasePlayer *const this, const CBaseEntity *entity)
{
  bool result; // al

  result = 0;
  if ( entity != 0 )
  {
    (*(this->_vptr_IHandleEntity + 100))(this);
    return 1;
  }
  return result;
}


// CBasePlayer::FindNextObserverTarget  (line 3474, @0x00000000022ba1d0, libserver.so)
// calls: UTIL_PlayerByIndex
CBaseEntity *__fastcall CBasePlayer::FindNextObserverTarget(CBasePlayer *const this, bool bReverse)
{
  int v3; // r13d
  int v4; // r14d
  int maxClients; // ebx
  int v6; // r13d
  CBasePlayer *v7; // r15

  v3 = -!bReverse;
  v4 = (*(this->_vptr_IHandleEntity + 441))(this, bReverse);
  maxClients = v4;
  v6 = (v3 & 2) - 1;
  while ( 1 )
  {
    v7 = UTIL_PlayerByIndex(maxClients);
    if ( (*(this->_vptr_IHandleEntity + 443))(this, v7) != 0 )
      break;
    maxClients += v6;
    if ( maxClients <= gpGlobals->maxClients )
    {
      if ( maxClients <= 0 )
        maxClients = gpGlobals->maxClients;
      if ( v4 == maxClients )
        return 0;
    }
    else
    {
      maxClients = 1;
      if ( v4 == 1 )
        return 0;
    }
  }
  return v7;
}


// CBasePlayer::IsUseableEntity  (line 3518, @0x00000000022b7dc0, libserver.so)
bool __fastcall CBasePlayer::IsUseableEntity(CBasePlayer *const this, CBaseEntity *pEntity, unsigned int requiredCaps)
{
  int v4; // eax

  if ( pEntity == 0 )
    return 0;
  v4 = (*(pEntity->_vptr_IHandleEntity + 19))(pEntity);
  return (v4 & 0xF) != 0 && requiredCaps == (requiredCaps & v4);
}


// CBasePlayer::CanPickupObject  (line 3537, @0x00000000022e1780, libserver.so)
// callers: CPhysicsProp::ObjectCaps
__int64 __fastcall CBasePlayer::CanPickupObject(CBaseEntity *pObject, double a2, float massLimit, float sizeLimit)
{
  return 0;
}


// CBasePlayer::GetHeldObjectMass  (line 3674, @0x00000000022b7e10, libserver.so)
float __fastcall CBasePlayer::GetHeldObjectMass(CBasePlayer *const this, IPhysicsObject *pHeldObject)
{
  return 0.0;
}


// CBasePlayer::Jump  (line 3685, @0x00000000022b7e20, libserver.so)
void __fastcall CBasePlayer::Jump(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::Duck  (line 3690, @0x00000000022bb520, libserver.so)
void __fastcall CBasePlayer::Duck(CBasePlayer *const this)
{
  if ( (this->m_nButtons & 4) != 0 && this->m_Activity != 31 )
    (*(this->_vptr_IHandleEntity + 425))(this, 1);
}


// CBasePlayer::AddPoints  (line 3703, @0x00000000022e1790, libserver.so)
// callers: CBaseEntity::AddPoints
void __fastcall CBasePlayer::AddPoints(CBasePlayer *const this, int score, bool bAllowNegativeScore)
{
  int m_iFrags; // eax
  int v4; // esi

  m_iFrags = this->m_iFrags;
  if ( score >= 0 || bAllowNegativeScore )
    goto LABEL_2;
  if ( m_iFrags >= 0 )
  {
    if ( m_iFrags < -score )
      score = -m_iFrags;
LABEL_2:
    v4 = m_iFrags + score;
    this->m_iFrags = v4;
    this->m_pl.frags = v4;
  }
}


// CBasePlayer::AddPointsToTeam  (line 3724, @0x00000000022e17d0, libserver.so)
// calls: CBaseEntity::GetTeam
// callers: CBaseEntity::AddPointsToTeam
void __fastcall CBasePlayer::AddPointsToTeam(CBasePlayer *const this, int score, bool bAllowNegativeScore)
{
  CTeam *Team; // rax

  if ( CBaseEntity::GetTeam(this) != 0 )
  {
    Team = CBaseEntity::GetTeam(this);
    (*(Team->_vptr_IHandleEntity + 220))(Team, score);
  }
}


// CBasePlayer::RunNullCommand  (line 3733, @0x00000000022e1870, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, CUserCmd, ChangeAccessorFieldPathIndex_t, EnsureValidValue, EnsureValidValue<float>, HandInfo_t, Init, Reset, SetLastUserCommand, Zero, curtime, operator=, setcurtime
// calls: HandInfo_t::Reset, CBasePlayer::SetTimeBase, MoveHelperServer, CUserCmd::operator=
void __fastcall CBasePlayer::RunNullCommand(CBasePlayer *const this)
{
  HandInfo_t *hmd_controllers_info; // rbx
  CEntityInstance *v3; // rax
  HandInfo_t *v4; // rdi
  bool *hmd_controllers_active; // rbx
  HandInfo_t *v6; // r12
  vec_t z; // xmm0_4
  CGlobalVars *v8; // rbx
  float frametime; // r15d
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int (**vptr_IHandleEntity)(...); // rax
  float m_flCurrentTime; // xmm2_4
  QAngle *v13; // rax
  float v14; // xmm1_4
  CGlobalVars *v15; // rbx
  float v16; // xmm0_4
  FnGlobalVarsWarningFunc v17; // rdx
  IMoveHelper *v18; // rax
  void (__fastcall *v19)(CBasePlayer *const, CUserCmd *, IMoveHelper *); // rbx
  IMoveHelper *v20; // rax
  CGlobalVars *v21; // rax
  IMoveHelper *v22; // rax
  float v23; // [rsp+Ch] [rbp-254h]
  CUserCmd cmd; // [rsp+10h] [rbp-250h] BYREF

  hmd_controllers_info = cmd.hmd_controllers_info;
  cmd._vptr_CUserCmd = off_403F950;
  do
  {
    v3 = CEntitySpawnHelper::gm_pCurEntityPtr;
    hmd_controllers_info->m_vPosition.m_Value.z = 0.0;
    hmd_controllers_info->__m_PathIndex.m_Value = -1;
    v4 = hmd_controllers_info++;
    hmd_controllers_info[-1].m_vPosition.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_vPosition.m_Value.x = 0.0;
    hmd_controllers_info[-1].__m_pChainEntity.m_pObj = v3;
    hmd_controllers_info[-1].m_Angles.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_Angles.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_Angles.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.w = 0.0;
    hmd_controllers_info[-1].m_flTriggerAnalogValue.m_Value = 0.0;
    hmd_controllers_info[-1].m_flGripAnalogValue.m_Value = 0.0;
    hmd_controllers_info[-1].m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
    hmd_controllers_info[-1].m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
    HandInfo_t::Reset(v4);
  }
  while ( hmd_controllers_info != &cmd.hmd_middle_eye_local );
  hmd_controllers_active = cmd.hmd_controllers_active;
  v6 = cmd.hmd_controllers_info;
  cmd.cameraposition[0] = 0;
  memset(&cmd.command_number, 0, 41);
  cmd.crosshairtrace.x = vec3_origin.x;
  cmd.crosshairtrace.y = vec3_origin.y;
  z = vec3_origin.z;
  memset(&cmd.weaponselect, 0, 17);
  cmd.cameraposition[1] = 0;
  cmd.clickbehavior = 0;
  cmd.statspanel = 0;
  cmd.shoppanel = 0;
  cmd.stats_dropdown = 0;
  cmd.stats_dropdown_sort = 0;
  cmd.crosshairtrace.z = z;
  cmd.hmd_active = 0;
  cmd.hmd_targeting_mode = 0;
  do
  {
    *hmd_controllers_active++ = 0;
    HandInfo_t::Reset(v6++);
  }
  while ( hmd_controllers_active != &cmd.hmd_controllers_active[4] );
  memset(&cmd.hmd_middle_eye_local, 0, 24);
  v8 = gpGlobals;
  frametime = gpGlobals->frametime;
  if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  m_flCurrentTime = v8->m_flCurrentTime;
  this->m_FixAngle.fixangle = 0;
  v23 = m_flCurrentTime;
  v13 = (vptr_IHandleEntity[165])(this);
  v15 = gpGlobals;
  cmd.viewangles = *v13;
  v16 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v17 = gpGlobals->m_pfnWarningFunc;
      if ( v17 != 0 )
        (v17)(1, 0.0);
    }
    v16 = v15->m_flCurrentTime;
  }
  CBasePlayer::SetTimeBase(this, v16, v14);
  v18 = MoveHelperServer();
  (*(v18->_vptr_IMoveHelper + 1))(v18, this);
  v19 = *(this->_vptr_IHandleEntity + 492);
  v20 = MoveHelperServer();
  v19(this, &cmd, v20);
  CUserCmd::operator=(&this->m_LastCmd, &cmd);
  v21 = gpGlobals;
  gpGlobals->frametime = frametime;
  v21->m_flCurrentTime = v23;
  v22 = MoveHelperServer();
  (*(v22->_vptr_IMoveHelper + 1))(v22, 0);
}


// CBasePlayer::ProcessUsercmds  (line 3787, @0x00000000022ffc30, libserver.so)  // inlines: AddToTail, CEntityOwnerPtr, CNetworkVarBase, CPlayerCmdInfo, CSmartPtr, CUserCmd, ChangeAccessorFieldPathIndex_t, ClearUserCmdForPause, EnsureValidValue, EnsureValidValue<float>, Free, GetBool, GetInt, HandInfo_t, Init, InternalElement, Remove, Zero, operator=, operator[]
// calls: HandInfo_t::Reset, CUserCmd::operator=, CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::InsertBefore, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::Unlink, CUtlLinkedList<CPlayerCmdInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int> >::InsertBefore
// strings: "SV:  %s using backup command_number %d\n"
void __fastcall CBasePlayer::ProcessUsercmds(
        CBasePlayer *const this,
        CUserCmd *cmds,
        int numcmds,
        int totalcmds,
        int dropped_packets,
        bool paused)
{
  CBasePlayer *v6; // r12
  HandInfo_t *hmd_controllers_info; // r14
  CEntityInstance *v9; // rax
  HandInfo_t *v10; // rdi
  int v11; // r13d
  CBasePlayer *v12; // rax
  CUserCmd *v13; // r12
  CBasePlayer *v14; // r15
  __int64 v15; // rsi
  int m_nHighestCommandNumberReceived; // eax
  int command_number; // r14d
  const char *v18; // rax
  int m_nValue; // eax
  float realtime; // xmm0_4
  int m_ElementCount; // edx
  unsigned __int16 m_Head; // bx
  UtlLinkedListElem_t<CUserCmd,int> *src; // [rsp+18h] [rbp-278h]
  CUserCmd *srca; // [rsp+18h] [rbp-278h]
  char bClearAngles; // [rsp+22h] [rbp-26Eh]
  CPlayerCmdInfo pi; // [rsp+30h] [rbp-260h] BYREF
  CUserCmd lastCmd; // [rsp+40h] [rbp-250h] BYREF

  v6 = this;
  bClearAngles = 1;
  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_NOCLIP && sv_cheats->m_pParent->m_Value.m_nValue != 0 )
    bClearAngles = sv_noclipduringpause.m_pParent->m_Value.m_nValue == 0;
  src = &this->m_LastCmd;
  if ( this->m_QueuedUserCommands.m_ElementCount > 0 )
    src = &this->m_QueuedUserCommands.m_Memory.m_pMemory[this->m_QueuedUserCommands.m_Tail];
  lastCmd._vptr_CUserCmd = off_403F950;
  hmd_controllers_info = lastCmd.hmd_controllers_info;
  do
  {
    v9 = CEntitySpawnHelper::gm_pCurEntityPtr;
    v10 = hmd_controllers_info;
    hmd_controllers_info->__m_PathIndex.m_Value = -1;
    ++hmd_controllers_info;
    hmd_controllers_info[-1].m_vPosition.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vPosition.m_Value.y = 0.0;
    hmd_controllers_info[-1].__m_pChainEntity.m_pObj = v9;
    hmd_controllers_info[-1].m_vPosition.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_Angles.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_Angles.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_Angles.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.w = 0.0;
    hmd_controllers_info[-1].m_flTriggerAnalogValue.m_Value = 0.0;
    hmd_controllers_info[-1].m_flGripAnalogValue.m_Value = 0.0;
    hmd_controllers_info[-1].m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
    hmd_controllers_info[-1].m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
    HandInfo_t::Reset(v10);
  }
  while ( hmd_controllers_info != &lastCmd.hmd_middle_eye_local );
  v11 = 0;
  CUserCmd::operator=(&lastCmd, &src->m_Element);
  srca = &v6->m_QueuedUserCommands;
  if ( totalcmds > 0 )
  {
    v12 = v6;
    v13 = cmds;
    v14 = v12;
    do
    {
      command_number = v13->command_number;
      if ( command_number > v14->m_nHighestCommandNumberReceived )
      {
        if ( totalcmds - numcmds > v11 && LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
        {
          v18 = (*(v14->_vptr_IHandleEntity + 106))(v14);
          LoggingSystem_Log(LOG_SERVER, 0, "SV:  %s using backup command_number %d\n", v18, command_number);
        }
        v15 = &v14->m_QueuedUserCommands.m_Memory.m_pMemory[CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::InsertBefore(
                                                              srca,
                                                              -1,
                                                              v13)];
        if ( paused )
        {
          *(v15 + 40) = 0;
          if ( bClearAngles != 0 )
          {
            *(v15 + 28) = 0;
            *(v15 + 32) = 0;
            *(v15 + 36) = 0;
            *(v15 + 16) = vec3_angle;
          }
        }
        m_nHighestCommandNumberReceived = v14->m_nHighestCommandNumberReceived;
        if ( command_number >= m_nHighestCommandNumberReceived )
          m_nHighestCommandNumberReceived = command_number;
        v14->m_nHighestCommandNumberReceived = m_nHighestCommandNumberReceived;
        CUserCmd::operator=(&lastCmd, v15);
      }
      ++v11;
      ++v13;
    }
    while ( v11 != totalcmds );
    v6 = v14;
  }
  v6->m_bGamePaused = paused;
  if ( paused )
  {
    (*(v6->_vptr_IHandleEntity + 121))(v6);
    (*(v6->_vptr_IHandleEntity + 119))(v6);
  }
  m_nValue = sv_playerperfhistorycount.m_pParent->m_Value.m_nValue;
  if ( m_nValue > 0 )
  {
    pi.m_flTime = 0.0;
    pi.m_nNumCmds = 0;
    pi.m_nDroppedPackets = 0;
    realtime = gpGlobals->realtime;
    pi.m_nDroppedPackets = dropped_packets;
    m_ElementCount = v6->m_vecPlayerCmdInfo.m_ElementCount;
    pi.m_flTime = realtime;
    pi.m_nNumCmds = numcmds;
    if ( m_nValue <= m_ElementCount )
    {
      do
      {
        m_Head = v6->m_vecPlayerCmdInfo.m_Head;
        CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::Unlink(
          &v6->m_vecPlayerCmdInfo,
          m_Head);
        v6->m_vecPlayerCmdInfo.m_Memory.m_pMemory[m_Head].m_Next = v6->m_vecPlayerCmdInfo.m_FirstFree;
        v6->m_vecPlayerCmdInfo.m_FirstFree = m_Head;
      }
      while ( v6->m_vecPlayerCmdInfo.m_ElementCount >= sv_playerperfhistorycount.m_pParent->m_Value.m_nValue );
    }
    CUtlLinkedList<CPlayerCmdInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo,unsigned short>,unsigned short>>::InsertBefore(
      &v6->m_vecPlayerCmdInfo,
      0xFFFFu,
      &pi);
  }
}


// CBasePlayer::SetTimeBase  (line 3891, @0x00000000022e1810, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CBasePlayer::RunNullCommand, CPlayerInfo::RunPlayerMove, CBasePlayer::SetOrResetInitialState
void __fastcall CBasePlayer::SetTimeBase(CBasePlayer *const this, float a2, float flTimeBase)
{
  float v4; // xmm0_4
  unsigned int v5; // r12d

  v4 = (a2 / gpGlobals->interval_per_tick) + 0.5;
  v5 = v4;
  if ( v4 != this->m_nTickBase.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3824, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, flTimeBase);
    this->m_nTickBase.m_Value = v5;
  }
}


// CBasePlayer::AdjustPlayerTimeBase  (line 3919, @0x00000000023000a0, libserver.so)  // inlines: AddToTail, CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, CUserCmd, ChangeAccessorFieldPathIndex_t, EnsureValidValue, EnsureValidValue<float>, Free, GetFloat, GetInt, HandInfo_t, Init, InternalElement, NetworkStateChanged, Purge, Remove, ResetDbgInfo, Set, Zero, operator=<int>, operator[]
// calls: CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::Unlink, CUtlLinkedList<CPlayerSimInfo, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int> >::InsertBefore, LoggingSystem_IsChannelEnabled, HandInfo_t::Reset, CUserCmd::operator=, CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::RemoveAll, CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::InsertBefore, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int>::Purge, LoggingSystem_Log
// callers: CBasePlayer::PhysicsSimulate
// strings: "SV:  %s clock correction would have gone negative, preventing\n"
void __fastcall CBasePlayer::AdjustPlayerTimeBase(CBasePlayer *const this, UserCommandQueue_t *const list)
{
  int m_ElementCount; // ebx
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *v3; // r15
  int m_nValue; // eax
  CUtlLinkedList<CPlayerSimInfo,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int>,short unsigned int> > *p_m_vecPlayerSimInfo; // r13
  unsigned __int16 m_Head; // r12
  int v8; // edx
  unsigned int m_Value; // ecx
  float v10; // xmm1_4
  float v11; // xmm0_4
  int tickcount; // esi
  int v13; // edx
  int v14; // r13d
  HandInfo_t *hmd_controllers_info; // r13
  HandInfo_t *v16; // rdi
  CEntityInstance *v17; // rdx
  CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int> >::ListElem_t *m_pMemory; // rax
  const char *v19; // rax
  UtlLinkedListElem_t<CUserCmd,int> *src; // [rsp+10h] [rbp-260h]
  CUserCmd last; // [rsp+20h] [rbp-250h] BYREF

  m_ElementCount = list->m_ElementCount;
  if ( m_ElementCount > 0 )
  {
    v3 = 0;
    m_nValue = sv_playerperfhistorycount.m_pParent->m_Value.m_nValue;
    if ( m_nValue > 0 )
    {
      p_m_vecPlayerSimInfo = &this->m_vecPlayerSimInfo;
      if ( this->m_vecPlayerSimInfo.m_ElementCount > m_nValue )
      {
        do
        {
          m_Head = this->m_vecPlayerSimInfo.m_Head;
          CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::Unlink(
            p_m_vecPlayerSimInfo,
            m_Head);
          this->m_vecPlayerSimInfo.m_Memory.m_pMemory[m_Head].m_Next = this->m_vecPlayerSimInfo.m_FirstFree;
          v8 = this->m_vecPlayerSimInfo.m_ElementCount;
          this->m_vecPlayerSimInfo.m_FirstFree = m_Head;
        }
        while ( v8 > sv_playerperfhistorycount.m_pParent->m_Value.m_nValue );
      }
      v3 = &this->m_vecPlayerSimInfo.m_Memory.m_pMemory[CUtlLinkedList<CPlayerSimInfo,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo,unsigned short>,unsigned short>>::InsertBefore(
                                                          p_m_vecPlayerSimInfo,
                                                          0xFFFFu)];
    }
    m_Value = this->m_nTickBase.m_Value;
    if ( gpGlobals->maxClients == 1 )
    {
      v14 = gpGlobals->tickcount - m_ElementCount + 1;
    }
    else
    {
      v10 = 1.0;
      v11 = sv_clockcorrection_msecs.m_pParent->m_Value.m_fValue / 1000.0;
      if ( v11 <= 1.0 )
        v10 = fmaxf(0.0, v11);
      tickcount = gpGlobals->tickcount;
      v13 = ((v10 / gpGlobals->interval_per_tick) + 0.5);
      if ( (m_ElementCount + m_Value) > tickcount + v13 + v13 || tickcount > (m_ElementCount + m_Value) )
      {
        v14 = tickcount + v13 - m_ElementCount + 1;
        if ( v3 != 0 )
        {
          v3->m_Element.m_nTicksCorrected = v13;
          m_Value = this->m_nTickBase.m_Value;
        }
      }
      else
      {
        v14 = this->m_nTickBase.m_Value;
      }
    }
    if ( v14 != m_Value )
    {
      if ( v14 >= 0 )
        goto LABEL_14;
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      {
        v19 = (*(this->_vptr_IHandleEntity + 106))(this);
        LoggingSystem_Log(LOG_SERVER, 2, "SV:  %s clock correction would have gone negative, preventing\n", v19);
      }
      src = &this->m_QueuedUserCommands.m_Memory.m_pMemory[this->m_QueuedUserCommands.m_Tail];
      last._vptr_CUserCmd = off_403F950;
      hmd_controllers_info = last.hmd_controllers_info;
      do
      {
        v16 = hmd_controllers_info;
        hmd_controllers_info->__m_PathIndex.m_Value = -1;
        ++hmd_controllers_info;
        hmd_controllers_info[-1].m_vPosition.m_Value.z = 0.0;
        hmd_controllers_info[-1].m_vPosition.m_Value.y = 0.0;
        v17 = CEntitySpawnHelper::gm_pCurEntityPtr;
        hmd_controllers_info[-1].m_vPosition.m_Value.x = 0.0;
        hmd_controllers_info[-1].m_Angles.m_Value.x = 0.0;
        hmd_controllers_info[-1].m_Angles.m_Value.y = 0.0;
        hmd_controllers_info[-1].m_Angles.m_Value.z = 0.0;
        hmd_controllers_info[-1].__m_pChainEntity.m_pObj = v17;
        hmd_controllers_info[-1].m_vFilteredPosition.m_Value.z = 0.0;
        hmd_controllers_info[-1].m_vFilteredPosition.m_Value.y = 0.0;
        hmd_controllers_info[-1].m_vFilteredPosition.m_Value.x = 0.0;
        hmd_controllers_info[-1].m_FilteredAngles.m_Value.x = 0.0;
        hmd_controllers_info[-1].m_FilteredAngles.m_Value.y = 0.0;
        hmd_controllers_info[-1].m_FilteredAngles.m_Value.z = 0.0;
        hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.z = 0.0;
        hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.y = 0.0;
        hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.x = 0.0;
        hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.x = 0.0;
        hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.y = 0.0;
        hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.z = 0.0;
        hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.w = 0.0;
        hmd_controllers_info[-1].m_flTriggerAnalogValue.m_Value = 0.0;
        hmd_controllers_info[-1].m_flGripAnalogValue.m_Value = 0.0;
        hmd_controllers_info[-1].m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
        hmd_controllers_info[-1].m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
        HandInfo_t::Reset(v16);
      }
      while ( hmd_controllers_info != &last.hmd_middle_eye_local );
      CUserCmd::operator=(&last, &src->m_Element);
      CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::RemoveAll(&this->m_QueuedUserCommands);
      if ( (this->m_QueuedUserCommands.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>::Purge(&this->m_QueuedUserCommands.m_Memory);
      m_pMemory = this->m_QueuedUserCommands.m_Memory.m_pMemory;
      this->m_QueuedUserCommands.m_FirstFree = -1;
      this->m_QueuedUserCommands.m_NumAlloced = 0;
      this->m_QueuedUserCommands.m_LastAlloc.index = -1;
      this->m_QueuedUserCommands.m_pElements = m_pMemory;
      CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::InsertBefore(
        &this->m_QueuedUserCommands,
        -1,
        &last);
      v14 = gpGlobals->tickcount - 1;
      if ( v14 != this->m_nTickBase.m_Value )
      {
LABEL_14:
        (*(this->_vptr_IHandleEntity + 22))(this, 3824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nTickBase.m_Value = v14;
      }
    }
    if ( v3 != 0 )
      v3->m_Element.m_flFinalSimulationTime = (m_ElementCount + this->m_nTickBase.m_Value + 1)
                                            * gpGlobals->interval_per_tick;
  }
}


// CBasePlayer::PhysicsSimulate  (line 4003, @0x00000000023004a0, libserver.so)  // inlines: CCycleCount, CEntityOwnerPtr, CFastTimer, CNetworkVarBase, CSmartPtr, CUserCmd, ChangeAccessorFieldPathIndex_t, Destruct<CUserCmd>, End, EnsureValidValue, EnsureValidValue<float>, Free, Get, GetInt, GetMillisecondsF, HandInfo_t, Init, InternalElement, NetworkStateChanged, PLAT_CPU_TIME, Remove, Reset, Sample, Set, SetSuppressHost, Start, SuppressHostEvents, Zero, operator CEntityInstance*, operator!=, operator=, operator=<QAngle>, operator=<Quaternion>, operator=<Vector>, operator=<int>, operator==, operator[], setcurtime
// calls: CBaseEntity::GetMoveParent, CGlobalVarsBase::curtime, CBaseEntity::IsSimulatingOnAlternateTicks, CBasePlayer::AdjustPlayerTimeBase, MoveHelperServer, CUserCmd::operator=, CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::Unlink, CBasePlayer::UpdateVPhysicsPosition, CBaseEntity::GetAbsOrigin, LoggingSystem_IsChannelEnabled, Plat_GetCPUFrequency, LoggingSystem_Log
// callers: CDOTAPlayer::PhysicsSimulate
// strings: "SV:  %s executing %d user commands, backlog is %d commands, processing took %.2f msecs\n"
void __fastcall CBasePlayer::PhysicsSimulate(CBasePlayer *const this)
{
  CBasePlayer *v1; // r15
  CBaseEntity *MoveParent; // rax
  CGlobalVars *v3; // rdi
  int tickcount; // eax
  IMoveHelper *v5; // rax
  double v6; // xmm4_8
  IPredictionSystem *i; // rax
  double v8; // xmm1_8
  CEntityInstance **v9; // r10
  double v10; // xmm5_8
  double v11; // xmm3_8
  HandInfo_t *v12; // r15
  ChangeAccessorFieldPathIndex_t *p_m_PathIndex; // rbx
  double v14; // xmm0_8
  CEntityInstance *v15; // rdx
  double v16; // xmm7_8
  double v17; // xmm2_8
  bool v18; // zf
  double v19; // xmm6_8
  bool v20; // zf
  vec_t x; // xmm0_4
  double v22; // xmm2_8
  double v23; // xmm4_8
  vec_t v24; // xmm0_4
  double v25; // xmm2_8
  double v26; // xmm4_8
  double v27; // xmm0_8
  double v28; // xmm2_8
  CEntityInstance *v29; // rdi
  UtlLinkedListElem_t<CUserCmd,int> *v30; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  int (*v32)(...); // rbx
  IMoveHelper *v33; // rax
  unsigned int v34; // xmm1_4
  IPredictionSystem *j; // rax
  IMoveHelper *v36; // rax
  CGlobalVars *v37; // rax
  CEntityInstance *v38; // rdi
  CEntityInstance *v39; // rdi
  CEntityInstance *v40; // rdi
  CEntityInstance *v41; // rdi
  CEntityInstance *v42; // rdi
  CEntityInstance *v43; // rdi
  CEntityInstance *m_pObj; // rdi
  __int64 v45; // rbx
  unsigned __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 CPUFrequency; // rax
  __int64 v50; // r13
  double v51; // xmm1_8
  double v52; // xmm2_8
  unsigned int v53; // r12d
  __int64 v54; // rax
  CFastTimer timer; // [rsp+8h] [rbp-2F8h]
  int m_ElementCount; // [rsp+14h] [rbp-2ECh]
  float saveframetime; // [rsp+20h] [rbp-2E0h]
  float savetime; // [rsp+24h] [rbp-2DCh]
  unsigned int v59; // [rsp+28h] [rbp-2D8h]
  unsigned int v60; // [rsp+2Ch] [rbp-2D4h]
  unsigned int v61; // [rsp+2Ch] [rbp-2D4h]
  unsigned int v62; // [rsp+2Ch] [rbp-2D4h]
  CEntityInstance **v63; // [rsp+30h] [rbp-2D0h]
  unsigned int v64; // [rsp+30h] [rbp-2D0h]
  unsigned int v65; // [rsp+30h] [rbp-2D0h]
  vec_t v66; // [rsp+38h] [rbp-2C8h]
  CEntityInstance **v67; // [rsp+38h] [rbp-2C8h]
  CEntityInstance **v68; // [rsp+38h] [rbp-2C8h]
  unsigned int v69; // [rsp+38h] [rbp-2C8h]
  Vector *velocity; // [rsp+40h] [rbp-2C0h]
  bool bTimeExecution; // [rsp+4Bh] [rbp-2B5h]
  vec_t v72; // [rsp+4Ch] [rbp-2B4h]
  unsigned int v73; // [rsp+4Ch] [rbp-2B4h]
  unsigned int v74; // [rsp+4Ch] [rbp-2B4h]
  unsigned int v75; // [rsp+4Ch] [rbp-2B4h]
  unsigned int v76; // [rsp+4Ch] [rbp-2B4h]
  vec_t v77; // [rsp+4Ch] [rbp-2B4h]
  vec_t v78; // [rsp+4Ch] [rbp-2B4h]
  unsigned int v79; // [rsp+4Ch] [rbp-2B4h]
  vec_t v80; // [rsp+50h] [rbp-2B0h]
  unsigned int v81; // [rsp+50h] [rbp-2B0h]
  unsigned int v82; // [rsp+50h] [rbp-2B0h]
  unsigned int v83; // [rsp+50h] [rbp-2B0h]
  unsigned int v84; // [rsp+50h] [rbp-2B0h]
  vec_t v85; // [rsp+50h] [rbp-2B0h]
  vec_t v86; // [rsp+50h] [rbp-2B0h]
  CEntityInstance **v87; // [rsp+50h] [rbp-2B0h]
  vec_t w; // [rsp+58h] [rbp-2A8h]
  CEntityInstance **v89; // [rsp+58h] [rbp-2A8h]
  CEntityInstance **v90; // [rsp+58h] [rbp-2A8h]
  CEntityInstance **v91; // [rsp+58h] [rbp-2A8h]
  CEntityInstance **v92; // [rsp+58h] [rbp-2A8h]
  vec_t v93; // [rsp+58h] [rbp-2A8h]
  vec_t v94; // [rsp+58h] [rbp-2A8h]
  int v95; // [rsp+58h] [rbp-2A8h]
  CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int> > *p_m_QueuedUserCommands; // [rsp+60h] [rbp-2A0h]
  CBasePlayer *v97; // [rsp+68h] [rbp-298h]
  __int64 v98; // [rsp+70h] [rbp-290h]
  CUserCmd *src; // [rsp+78h] [rbp-288h]
  int nCommandLimit; // [rsp+80h] [rbp-280h]
  int elem; // [rsp+84h] [rbp-27Ch]
  int nNumberExecuted; // [rsp+88h] [rbp-278h]
  float vphysicsArrivalTime; // [rsp+8Ch] [rbp-274h]
  float v104; // [rsp+98h] [rbp-268h]
  float y; // [rsp+9Ch] [rbp-264h]
  float z; // [rsp+A8h] [rbp-258h]
  unsigned int v107; // [rsp+A8h] [rbp-258h]
  unsigned int v108; // [rsp+A8h] [rbp-258h]
  double v109; // [rsp+A8h] [rbp-258h]
  CUserCmd cmd; // [rsp+B0h] [rbp-250h] BYREF
  char v111; // [rsp+320h] [rbp+20h] BYREF

  v1 = this;
  MoveParent = CBaseEntity::GetMoveParent(this);
  if ( MoveParent != 0 )
    (*(MoveParent->_vptr_IHandleEntity + 119))(MoveParent);
  v3 = gpGlobals;
  tickcount = gpGlobals->tickcount;
  if ( v1->m_nSimulationTick != tickcount )
  {
    v1->m_nSimulationTick = tickcount;
    savetime = CGlobalVarsBase::curtime(v3, 0);
    saveframetime = gpGlobals->frametime;
    nCommandLimit = !CBaseEntity::IsSimulatingOnAlternateTicks() ? 3 : 6;
    p_m_QueuedUserCommands = &v1->m_QueuedUserCommands;
    vphysicsArrivalTime = gpGlobals->interval_per_tick;
    CBasePlayer::AdjustPlayerTimeBase(v1, &v1->m_QueuedUserCommands);
    m_ElementCount = v1->m_QueuedUserCommands.m_ElementCount;
    if ( m_ElementCount > 0 )
    {
      bTimeExecution = v1->m_QueuedUserCommands.m_ElementCount > sv_usercmd_queue_spew_threshold.m_pParent->m_Value.m_nValue;
      v5 = MoveHelperServer();
      (*(v5->_vptr_IMoveHelper + 1))(v5, v1);
      if ( v1->m_bPredictWeapons )
      {
        for ( i = IPredictionSystem::g_pPredictionSystems; i != 0; i = i->m_pNextSystem )
          i->m_pSuppressHost = v1;
      }
      if ( bTimeExecution )
        timer.m_Duration.m_Int64 = __rdtsc();
      else
        timer.m_Duration.m_Int64 = 0;
      v8 = 0.0;
      nNumberExecuted = 0;
      velocity = &v1->m_vNewVPhysicsVelocity;
      do
      {
        elem = v1->m_QueuedUserCommands.m_Head;
        if ( elem == -1 )
          break;
        v97 = v1;
        v9 = &CEntitySpawnHelper::gm_pCurEntityPtr;
        *&v10 = LODWORD(vec3_angle.z);
        z = vec3_origin.z;
        *&v11 = LODWORD(vec3_origin.y);
        y = vec3_angle.y;
        v98 = elem;
        v104 = vec3_angle.z;
        src = &v1->m_QueuedUserCommands.m_Memory.m_pMemory[v98].m_Element;
        cmd._vptr_CUserCmd = off_403F950;
        v12 = &cmd.hmd_controllers_info[1];
        p_m_PathIndex = &cmd.hmd_controllers_info[0].__m_PathIndex;
        do
        {
          *&v14 = LODWORD(vec3_origin.x);
          v12[-1].m_vPosition.m_Value.z = 0.0;
          v15 = *v9;
          v12[-1].__m_PathIndex.m_Value = -1;
          v12[-1].m_vPosition.m_Value.y = 0.0;
          v12[-1].m_vPosition.m_Value.x = 0.0;
          v12[-1].m_Angles.m_Value.x = 0.0;
          v12[-1].__m_pChainEntity.m_pObj = v15;
          v12[-1].m_Angles.m_Value.y = 0.0;
          v12[-1].m_Angles.m_Value.z = 0.0;
          v12[-1].m_vFilteredPosition.m_Value.z = 0.0;
          v12[-1].m_vFilteredPosition.m_Value.y = 0.0;
          v12[-1].m_vFilteredPosition.m_Value.x = 0.0;
          v12[-1].m_FilteredAngles.m_Value.x = 0.0;
          v12[-1].m_FilteredAngles.m_Value.y = 0.0;
          v12[-1].m_FilteredAngles.m_Value.z = 0.0;
          v12[-1].m_vFilteredVelocity.m_Value.z = 0.0;
          v12[-1].m_vFilteredVelocity.m_Value.y = 0.0;
          v12[-1].m_vFilteredVelocity.m_Value.x = 0.0;
          v12[-1].m_FilteredAngularVel.m_Value.x = 0.0;
          v12[-1].m_FilteredAngularVel.m_Value.y = 0.0;
          v12[-1].m_FilteredAngularVel.m_Value.z = 0.0;
          v12[-1].m_FilteredAngularVel.m_Value.w = 0.0;
          v12[-1].m_flTriggerAnalogValue.m_Value = 0.0;
          v12[-1].m_flGripAnalogValue.m_Value = 0.0;
          v12[-1].m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
          v12[-1].m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
          if ( *&v14 == *&v8 && *&v11 == *&v8 && (*&v16 = LODWORD(z), z == *&v8) )
          {
            *&v17 = LODWORD(vec3_angle.x);
            v18 = vec3_angle.x == *&v8;
          }
          else
          {
            *&v17 = LODWORD(vec3_angle.x);
            v12[-1].m_vPosition.m_Value.x = *&v14;
            *&v16 = LODWORD(z);
            v12[-1].m_vPosition.m_Value.y = *&v11;
            v18 = *&v17 == *&v8;
            v12[-1].m_vPosition.m_Value.z = z;
          }
          if ( v18 && (*&v19 = LODWORD(y), y == *&v8) && (*&v16 = LODWORD(v104), v104 == *&v8) )
          {
            v20 = *&v14 == *&v8;
          }
          else
          {
            v20 = *&v14 == *&v8;
            *&v10 = LODWORD(y);
            v12[-1].m_Angles.m_Value.x = *&v17;
            *&v19 = LODWORD(v104);
            v12[-1].m_Angles.m_Value.y = y;
            v12[-1].m_Angles.m_Value.z = v104;
          }
          if ( !v20
            || *&v11 != v12[-1].m_vFilteredPosition.m_Value.y
            || (*&v19 = LODWORD(z), z != v12[-1].m_vFilteredPosition.m_Value.z) )
          {
            m_pObj = v12[-1].__m_pChainEntity.m_pObj;
            if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v12[-1].__m_PathIndex.m_Value != -1 )
            {
              v69 = LODWORD(v11);
              v79 = LODWORD(v8);
              v87 = v9;
              v95 = LODWORD(v14);
              (*(m_pObj->_vptr_IHandleEntity + 22))(
                m_pObj,
                36,
                0xFFFFFFFFLL,
                p_m_PathIndex->m_Value,
                v14,
                v8,
                v17,
                v11,
                v6,
                v10,
                v19,
                v16);
              v9 = v87;
              LODWORD(v14) = v95;
              *&v8 = v79;
              *&v11 = v69;
            }
            *&v16 = LODWORD(z);
            v12[-1].m_vFilteredPosition.m_Value.x = *&v14;
            v12[-1].m_vFilteredPosition.m_Value.y = *&v11;
            v12[-1].m_vFilteredPosition.m_Value.z = z;
          }
          x = vec3_angle.x;
          *&v22 = LODWORD(vec3_angle.y);
          *&v23 = LODWORD(vec3_angle.z);
          if ( vec3_angle.x != v12[-1].m_FilteredAngles.m_Value.x
            || *&v22 != v12[-1].m_FilteredAngles.m_Value.y
            || *&v23 != v12[-1].m_FilteredAngles.m_Value.z )
          {
            v43 = v12[-1].__m_pChainEntity.m_pObj;
            if ( v43 != 0 && (v43->m_pEntity->m_flags & 0x400) == 0 && v12[-1].__m_PathIndex.m_Value != -1 )
            {
              v62 = LODWORD(v11);
              v65 = LODWORD(v8);
              v68 = v9;
              v78 = vec3_angle.x;
              v86 = vec3_angle.y;
              v94 = vec3_angle.z;
              (*(v43->_vptr_IHandleEntity + 22))(
                v43,
                48,
                0xFFFFFFFFLL,
                p_m_PathIndex->m_Value,
                COERCE_DOUBLE(LODWORD(vec3_angle.x)),
                v8,
                v22,
                v11,
                v23,
                v10,
                v19,
                v16);
              v9 = v68;
              *&v23 = v94;
              *&v22 = v86;
              x = v78;
              *&v8 = v65;
              *&v11 = v62;
            }
            v12[-1].m_FilteredAngles.m_Value.x = x;
            v12[-1].m_FilteredAngles.m_Value.y = *&v22;
            v12[-1].m_FilteredAngles.m_Value.z = *&v23;
          }
          v24 = vec3_origin.x;
          *&v25 = LODWORD(vec3_origin.y);
          *&v26 = LODWORD(vec3_origin.z);
          if ( vec3_origin.x != v12[-1].m_vFilteredVelocity.m_Value.x
            || *&v25 != v12[-1].m_vFilteredVelocity.m_Value.y
            || *&v26 != v12[-1].m_vFilteredVelocity.m_Value.z )
          {
            v42 = v12[-1].__m_pChainEntity.m_pObj;
            if ( v42 != 0 && (v42->m_pEntity->m_flags & 0x400) == 0 && v12[-1].__m_PathIndex.m_Value != -1 )
            {
              v61 = LODWORD(v11);
              v64 = LODWORD(v8);
              v67 = v9;
              v77 = vec3_origin.x;
              v85 = vec3_origin.y;
              v93 = vec3_origin.z;
              (*(v42->_vptr_IHandleEntity + 22))(
                v42,
                60,
                0xFFFFFFFFLL,
                p_m_PathIndex->m_Value,
                COERCE_DOUBLE(LODWORD(vec3_origin.x)),
                v8,
                v25,
                v11,
                v26,
                v10,
                v19,
                v16);
              v9 = v67;
              *&v26 = v93;
              *&v25 = v85;
              v24 = v77;
              *&v8 = v64;
              *&v11 = v61;
            }
            v12[-1].m_vFilteredVelocity.m_Value.x = v24;
            v12[-1].m_vFilteredVelocity.m_Value.y = *&v25;
            v12[-1].m_vFilteredVelocity.m_Value.z = *&v26;
          }
          *&v27 = LODWORD(quat_identity.x);
          *&v28 = LODWORD(quat_identity.y);
          *&v6 = LODWORD(quat_identity.z);
          *&v10 = LODWORD(quat_identity.w);
          if ( quat_identity.x != v12[-1].m_FilteredAngularVel.m_Value.x
            || *&v28 != v12[-1].m_FilteredAngularVel.m_Value.y
            || *&v6 != v12[-1].m_FilteredAngularVel.m_Value.z
            || *&v10 != v12[-1].m_FilteredAngularVel.m_Value.w )
          {
            v29 = v12[-1].__m_pChainEntity.m_pObj;
            if ( v29 != 0 && (v29->m_pEntity->m_flags & 0x400) == 0 && v12[-1].__m_PathIndex.m_Value != -1 )
            {
              v59 = LODWORD(v11);
              v60 = LODWORD(v8);
              v63 = v9;
              v66 = quat_identity.x;
              v72 = quat_identity.y;
              v80 = quat_identity.z;
              w = quat_identity.w;
              (*(v29->_vptr_IHandleEntity + 22))(
                v29,
                72,
                0xFFFFFFFFLL,
                p_m_PathIndex->m_Value,
                COERCE_DOUBLE(LODWORD(quat_identity.x)),
                v8,
                v28,
                v11,
                v6,
                v10,
                v19,
                v16);
              v9 = v63;
              *&v10 = LODWORD(w);
              *&v6 = LODWORD(v80);
              *&v28 = LODWORD(v72);
              *&v27 = LODWORD(v66);
              *&v8 = v60;
              *&v11 = v59;
            }
            v12[-1].m_FilteredAngularVel.m_Value.x = *&v27;
            v12[-1].m_FilteredAngularVel.m_Value.y = *&v28;
            v12[-1].m_FilteredAngularVel.m_Value.z = *&v6;
            v12[-1].m_FilteredAngularVel.m_Value.w = *&v10;
          }
          if ( *&v8 != v12[-1].m_flTriggerAnalogValue.m_Value )
          {
            v41 = v12[-1].__m_pChainEntity.m_pObj;
            if ( v41 != 0 && (v41->m_pEntity->m_flags & 0x400) == 0 && v12[-1].__m_PathIndex.m_Value != -1 )
            {
              v76 = LODWORD(v11);
              v84 = LODWORD(v8);
              v92 = v9;
              (*(v41->_vptr_IHandleEntity + 22))(
                v41,
                88,
                0xFFFFFFFFLL,
                p_m_PathIndex->m_Value,
                v27,
                v8,
                v28,
                v11,
                v6,
                v10,
                v19,
                v16);
              v9 = v92;
              *&v8 = v84;
              *&v11 = v76;
            }
            v12[-1].m_flTriggerAnalogValue.m_Value = 0.0;
          }
          if ( *&v8 != v12[-1].m_flGripAnalogValue.m_Value )
          {
            v40 = v12[-1].__m_pChainEntity.m_pObj;
            if ( v40 != 0 && (v40->m_pEntity->m_flags & 0x400) == 0 && v12[-1].__m_PathIndex.m_Value != -1 )
            {
              v75 = LODWORD(v11);
              v83 = LODWORD(v8);
              v91 = v9;
              (*(v40->_vptr_IHandleEntity + 22))(
                v40,
                92,
                0xFFFFFFFFLL,
                p_m_PathIndex->m_Value,
                v27,
                v8,
                v28,
                v11,
                v6,
                v10,
                v19,
                v16);
              v9 = v91;
              *&v8 = v83;
              *&v11 = v75;
            }
            v12[-1].m_flGripAnalogValue.m_Value = 0.0;
          }
          if ( *&v8 != v12[-1].m_flTrackpadOrJoystickAnalogValueX.m_Value )
          {
            v39 = v12[-1].__m_pChainEntity.m_pObj;
            if ( v39 != 0 && (v39->m_pEntity->m_flags & 0x400) == 0 && v12[-1].__m_PathIndex.m_Value != -1 )
            {
              v74 = LODWORD(v11);
              v82 = LODWORD(v8);
              v90 = v9;
              (*(v39->_vptr_IHandleEntity + 22))(
                v39,
                96,
                0xFFFFFFFFLL,
                p_m_PathIndex->m_Value,
                v27,
                v8,
                v28,
                v11,
                v6,
                v10,
                v19,
                v16);
              v9 = v90;
              *&v8 = v82;
              *&v11 = v74;
            }
            v12[-1].m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
          }
          if ( *&v8 != v12[-1].m_flTrackpadOrJoystickAnalogValueY.m_Value )
          {
            v38 = v12[-1].__m_pChainEntity.m_pObj;
            if ( v38 != 0 && (v38->m_pEntity->m_flags & 0x400) == 0 && v12[-1].__m_PathIndex.m_Value != -1 )
            {
              v73 = LODWORD(v11);
              v81 = LODWORD(v8);
              v89 = v9;
              (*(v38->_vptr_IHandleEntity + 22))(
                v38,
                100,
                0xFFFFFFFFLL,
                p_m_PathIndex->m_Value,
                v27,
                v8,
                v28,
                v11,
                v6,
                v10,
                v19,
                v16);
              v9 = v89;
              *&v8 = v81;
              *&v11 = v73;
            }
            v12[-1].m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
          }
          ++v12;
          p_m_PathIndex += 52;
        }
        while ( v12 != &v111 );
        v107 = LODWORD(v8);
        v1 = v97;
        CUserCmd::operator=(&cmd, src);
        CUtlLinkedList<CUserCmd,int,false,int,CUtlMemory<UtlLinkedListElem_t<CUserCmd,int>,int>>::Unlink(
          p_m_QueuedUserCommands,
          elem);
        v30 = &v97->m_QueuedUserCommands.m_Memory.m_pMemory[v98];
        (*v30->m_Element._vptr_CUserCmd)(v30);
        v30->m_Next = v97->m_QueuedUserCommands.m_FirstFree;
        vptr_IHandleEntity = v97->_vptr_IHandleEntity;
        v97->m_QueuedUserCommands.m_FirstFree = elem;
        v32 = vptr_IHandleEntity[492];
        v33 = MoveHelperServer();
        v32(v97, &cmd, v33);
        v34 = v107;
        if ( v97->m_pPhysicsController != 0 )
        {
          CBasePlayer::UpdateVPhysicsPosition(v97, &v97->m_vNewVPhysicsPosition, velocity, vphysicsArrivalTime);
          v34 = v107;
          vphysicsArrivalTime = vphysicsArrivalTime + gpGlobals->interval_per_tick;
        }
        v108 = v34;
        CUserCmd::operator=(&v97->m_LastCmd, &cmd);
        *&v8 = v108;
        ++nNumberExecuted;
      }
      while ( nCommandLimit > nNumberExecuted );
      if ( bTimeExecution )
      {
        v46 = __rdtsc();
        v47 = HIDWORD(v46);
        v48 = v46;
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        {
          CPUFrequency = Plat_GetCPUFrequency();
          v50 = (v48 | (v47 << 32)) - timer.m_Duration.m_Int64;
          if ( v50 < 0 )
            v51 = (v50 & 1 | (v50 >> 1)) + (v50 & 1 | (v50 >> 1));
          else
            v51 = v50;
          if ( CPUFrequency < 0 )
            v52 = (CPUFrequency & 1 | (CPUFrequency >> 1)) + (CPUFrequency & 1 | (CPUFrequency >> 1));
          else
            v52 = CPUFrequency;
          v53 = v1->m_QueuedUserCommands.m_ElementCount;
          v109 = 1000.0 / v52 * v51;
          v54 = (*(v1->_vptr_IHandleEntity + 106))(v1);
          LoggingSystem_Log(
            LOG_SERVER,
            1,
            "SV:  %s executing %d user commands, backlog is %d commands, processing took %.2f msecs\n",
            v54,
            m_ElementCount,
            v53,
            v109);
        }
      }
      for ( j = IPredictionSystem::g_pPredictionSystems; j != 0; j = j->m_pNextSystem )
        j->m_pSuppressHost = 0;
      v36 = MoveHelperServer();
      (*(v36->_vptr_IMoveHelper + 1))(v36, 0);
      if ( v1->m_vecPlayerSimInfo.m_ElementCount != 0 )
      {
        v45 = &v1->m_vecPlayerSimInfo.m_Memory.m_pMemory[v1->m_vecPlayerSimInfo.m_Tail];
        *v45 = gpGlobals->realtime;
        *(v45 + 24) = *CBaseEntity::GetAbsOrigin(v1);
        *(v45 + 16) = CGlobalVarsBase::curtime(gpGlobals, 0);
        *(v45 + 4) = m_ElementCount;
      }
    }
    v37 = gpGlobals;
    gpGlobals->m_flCurrentTime = savetime;
    v37->frametime = saveframetime;
  }
}


// CBasePlayer::DumpPerfToRecipient  (line 4153, @0x00000000022e20a0, libserver.so)  // inlines: FastSqrt, Length, Previous, V_strncpy<long unsigned int>, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, operator[]
// calls: V_snprintf, _V_strncpy, ClientPrint, __stack_chk_fail
// callers: CBasePlayer::ClientCommand
// strings: "%.3f %d %d\n"
void __fastcall CBasePlayer::DumpPerfToRecipient(CBasePlayer *const this, CBasePlayer *pRecipient, int nMaxRecords)
{
  __int64 m_Tail; // rax
  float v4; // xmm4_4
  __int64 v5; // r13
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *v6; // r15
  float m_flFinalSimulationTime; // xmm1_4
  int v8; // r14d
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm4_4
  float v16; // xmm5_4
  UtlLinkedListElem_t<CPlayerSimInfo,short unsigned int> *m_pMemory; // r15
  __int64 m_Previous; // rax
  float v19; // xmm5_4
  __int64 v20; // rbx
  UtlLinkedListElem_t<CPlayerCmdInfo,short unsigned int> *v21; // rax
  int v22; // r14d
  int v23; // r13d
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // eax
  bool v30; // [rsp+17h] [rbp-1D9h]
  int len; // [rsp+18h] [rbp-1D8h]
  int lena; // [rsp+18h] [rbp-1D8h]
  char line[128]; // [rsp+30h] [rbp-1C0h] BYREF
  char buf[264]; // [rsp+B0h] [rbp-140h] BYREF
  unsigned __int64 v36; // [rsp+1B8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  if ( pRecipient != 0 )
  {
    memset(buf, 0, 0x100u);
    m_Tail = this->m_vecPlayerSimInfo.m_Tail;
    if ( m_Tail != 0xFFFF )
    {
      v4 = 0.0;
      v5 = m_Tail;
      v6 = &this->m_vecPlayerSimInfo.m_Memory.m_pMemory[m_Tail];
      m_flFinalSimulationTime = v6->m_Element.m_flFinalSimulationTime;
      v30 = nMaxRecords != -1;
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v10 = V_snprintf(
                line,
                128,
                &stru_333F690.m_flFriction,
                v6->m_Element.m_nNumCmds,
                v6->m_Element.m_nTicksCorrected,
                v6->m_Element.m_flTime,
                m_flFinalSimulationTime,
                v6->m_Element.m_flGameSimulationTime,
                v6->m_Element.m_flServerFrameTime,
                v4);
        if ( v9 + v10 > 200 )
        {
          len = v10;
          ClientPrint(pRecipient, 2, buf, 0, 0, 0, 0);
          v12 = 256;
          buf[0] = 0;
          v11 = 0;
          v9 = len;
        }
        else
        {
          v11 = v9;
          v12 = (256 - v9);
          v9 += v10;
        }
        ++v8;
        _V_strncpy(&buf[v11], line, v12);
        if ( v30 && v8 >= nMaxRecords )
          break;
        x = v6->m_Element.m_vecAbsOrigin.x;
        y = v6->m_Element.m_vecAbsOrigin.y;
        z = v6->m_Element.m_vecAbsOrigin.z;
        v16 = v6->m_Element.m_flFinalSimulationTime;
        m_pMemory = this->m_vecPlayerSimInfo.m_Memory.m_pMemory;
        m_Previous = m_pMemory[v5].m_Previous;
        if ( m_Previous == 0xFFFF )
          break;
        v5 = m_Previous;
        v6 = &m_pMemory[m_Previous];
        m_flFinalSimulationTime = v6->m_Element.m_flFinalSimulationTime;
        v19 = v16 - m_flFinalSimulationTime;
        if ( v19 <= 0.0 )
          v4 = 0.0;
        else
          v4 = fsqrt(
                 (((v6->m_Element.m_vecAbsOrigin.x - x) * (v6->m_Element.m_vecAbsOrigin.x - x))
                + ((v6->m_Element.m_vecAbsOrigin.y - y) * (v6->m_Element.m_vecAbsOrigin.y - y)))
               + ((v6->m_Element.m_vecAbsOrigin.z - z) * (v6->m_Element.m_vecAbsOrigin.z - z)))
             / v19;
      }
      if ( v9 > 0 )
        ClientPrint(pRecipient, 2, buf, 0, 0, 0, 0);
    }
    v20 = this->m_vecPlayerCmdInfo.m_Tail;
    if ( v20 != 0xFFFF )
    {
      v21 = this->m_vecPlayerCmdInfo.m_Memory.m_pMemory;
      v22 = 0;
      v23 = 0;
      do
      {
        v26 = v20;
        v27 = V_snprintf(
                line,
                128,
                "%.3f %d %d\n",
                v21[v26].m_Element.m_flTime,
                v21[v26].m_Element.m_nNumCmds,
                v21[v26].m_Element.m_nDroppedPackets);
        if ( v23 + v27 <= 200 )
        {
          v24 = v23;
          v25 = (256 - v23);
          v23 += v27;
        }
        else
        {
          lena = v27;
          ClientPrint(pRecipient, 2, buf, 0, 0, 0, 0);
          v25 = 256;
          buf[0] = 0;
          v24 = 0;
          v23 = lena;
        }
        ++v22;
        _V_strncpy(&buf[v24], line, v25);
        if ( nMaxRecords != -1 && v22 >= nMaxRecords )
          break;
        v21 = this->m_vecPlayerCmdInfo.m_Memory.m_pMemory;
        v20 = v21[v26].m_Previous;
      }
      while ( v20 != 0xFFFF );
      if ( v23 > 0 )
        ClientPrint(pRecipient, 2, buf, 0, 0, 0, 0);
    }
  }
}


// CBasePlayer::PlayerRunCommand  (line 4255, @0x00000000022c6880, libserver.so)  // inlines: GetBool, GetInt, ToggleDuck, VectorCopy
// calls: CGlobalVarsBase::curtime, PlayerMove, ConVar::SetValue
// globals: xc_crouch_debounce
void __fastcall CBasePlayer::PlayerRunCommand(CBasePlayer *const this, CUserCmd *ucmd, IMoveHelper *moveHelper)
{
  CPlayerMove *v6; // rax

  this->m_touchedPhysObject = 0;
  if ( this->m_FixAngle.fixangle == 0 )
    this->m_pl.v_angle = ucmd->viewangles;
  if ( (this->m_fFlags.m_Value & 0x20) == 0
    && (developer.m_pParent->m_Value.m_nValue != 0
     || gpGlobals->eLoadType != MapLoadType_t::MapLoad_NewGame
     || CGlobalVarsBase::curtime(gpGlobals, 0) >= 3.0) )
  {
    if ( this->m_bDuckToggled )
    {
      if ( xc_crouch_debounce.m_pParent->m_Value.m_nValue != 0 )
      {
        this->m_bDuckToggled = 0;
        ConVar::SetValue(&xc_crouch_debounce, 0);
      }
      else
      {
        ucmd->buttons |= 4uLL;
      }
    }
  }
  else
  {
    ucmd->forwardmove = 0.0;
    ucmd->sidemove = 0.0;
    ucmd->upmove = 0.0;
    ucmd->buttons = 0;
    ucmd->impulse = 0;
    ucmd->viewangles.x = this->m_pl.v_angle.x;
    ucmd->viewangles.y = this->m_pl.v_angle.y;
    ucmd->viewangles.z = this->m_pl.v_angle.z;
  }
  v6 = PlayerMove();
  (*(v6->_vptr_CPlayerMove + 2))(v6, this, ucmd, moveHelper);
}


// CBasePlayer::HandleFuncTrain  (line 4315, @0x00000000022e2710, libserver.so)  // inlines: CEntityHandle, CGameTrace, EnableInteractsWith, Get, GetEntryIndex, GetFloat, GetGroundEntity, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, TraceRay, TrainSpeed, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator+
// calls: CBaseEntity::AddFlag, CBaseCombatCharacter::GetActiveWeapon, CBaseEntity::RemoveFlag, CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::SetAbsVelocity
// callers: CBasePlayer::PreThink
void __fastcall CBasePlayer::HandleFuncTrain(CBasePlayer *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  vec_t v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseCombatWeapon *ActiveWeapon; // rax
  uint64 m_nButtons; // rax
  __int64 v9; // r14
  const Vector *AbsOrigin; // rax
  const Vector *v11; // rdx
  CBaseEntity *m_pInstance; // r12
  uint64 m_afButtonPressed; // rax
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v15; // xmm0_8
  int v16; // eax
  int m_flSpeed; // edx
  double v18; // xmm0_8
  float v19; // [rsp+0h] [rbp-170h]
  float v20; // [rsp+8h] [rbp-168h]
  float v21; // [rsp+Ch] [rbp-164h]
  CTraceFilterSimple v22; // [rsp+10h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-120h] BYREF
  trace_t trainTrace; // [rsp+A0h] [rbp-D0h] BYREF

  if ( (this->m_afPhysicsFlags & 1) != 0 )
    CBaseEntity::AddFlag(this, 8);
  else
    CBaseEntity::RemoveFlag(this, 8);
  if ( (this->m_afPhysicsFlags & 1) == 0 )
  {
    if ( SLOBYTE(this->m_iTrain) < 0 )
      this->m_iTrain = 192;
    return;
  }
  if ( this->m_hGroundEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  LODWORD(v4) = (this->m_hGroundEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  trainTrace.startpos.x = v4;
  if ( (LODWORD(v4) + 2) > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && LODWORD(v4) == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && ((*(m_pInstance->_vptr_IHandleEntity + 19))(v6->m_pInstance) & 8) != 0 )
        {
          if ( (this->m_fFlags.m_Value & 1) != 0
            && (m_pInstance->m_spawnflags.m_Value & 2) == 0
            && (this->m_nButtons & 0x600) == 0 )
          {
            goto LABEL_24;
          }
LABEL_22:
          this->m_afPhysicsFlags &= ~1u;
          this->m_iTrain = 192;
          return;
        }
      }
    }
  }
  ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
  if ( ((*(ActiveWeapon->_vptr_IHandleEntity + 19))(ActiveWeapon) & 8) != 0 )
  {
    m_nButtons = this->m_nButtons;
    this->m_iTrain = 192;
    if ( (m_nButtons & 8) != 0 )
      this->m_iTrain = 196;
    else
      this->m_iTrain = (m_nButtons & 0x10) == 0 ? 193 : 197;
    return;
  }
  memset(&trainTrace.m_ShapeAttributes, 0, 31);
  trainTrace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trainTrace);
  v9 = (*(this->_vptr_IHandleEntity + 540))(this, 1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v19 = AbsOrigin->x + 0.0;
  v20 = AbsOrigin->y + 0.0;
  v21 = AbsOrigin->z - 38.0;
  v11 = CBaseEntity::GetAbsOrigin(this);
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = v19 - v11->x;
  ray.m_Delta.y = v20 - v11->y;
  ray.m_Delta.z = v21 - v11->z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.Vector = *v11;
  CTraceFilterSimple::CTraceFilterSimple(&v22, this, 4, 0);
  v22.m_attr.m_nInteractsWith |= v9;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v22, &trainTrace);
  if ( trainTrace.fraction == 1.0 )
    goto LABEL_22;
  m_pInstance = trainTrace.m_pEnt;
  if ( trainTrace.m_pEnt == 0
    || ((*(trainTrace.m_pEnt->_vptr_IHandleEntity + 19))(trainTrace.m_pEnt, 1.0) & 8) == 0
    || (*(m_pInstance->_vptr_IHandleEntity + 98))(m_pInstance, this) == 0 )
  {
    goto LABEL_22;
  }
LABEL_24:
  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  m_afButtonPressed = this->m_afButtonPressed;
  if ( (m_afButtonPressed & 8) != 0 )
  {
    vptr_IHandleEntity = m_pInstance->_vptr_IHandleEntity;
    v15 = 1065353216;
  }
  else
  {
    if ( (m_afButtonPressed & 0x10) == 0 )
      return;
    vptr_IHandleEntity = m_pInstance->_vptr_IHandleEntity;
    v15 = 3212836864LL;
  }
  vptr_IHandleEntity[108](m_pInstance, this, this, 2, *&v15);
  v16 = 197;
  m_flSpeed = m_pInstance->m_flSpeed;
  if ( m_flSpeed >= 0 )
  {
    v16 = 193;
    if ( m_flSpeed != 0 )
    {
      v16 = 194;
      v18 = (m_flSpeed / m_pInstance[1].m_vecAbsVelocity.m_Value.y);
      if ( v18 >= 0.33 )
        v16 = (v18 >= 0.66) + 195;
    }
  }
  this->m_iTrain = v16;
}


// CBasePlayer::PreThink  (line 4414, @0x00000000022e2e90, libserver.so)  // inlines: GetAbsVelocity, NetworkStateChanged, Set, operator&=<int>, operator=<float>, operator|=<int>
// calls: CHintSystem::Update, CBasePlayer::ItemPreFrame, CBasePlayer::WaterMove, CPlayerLocalData::NetworkVar_m_iHideHUD::NetworkStateChanged, CBasePlayer::CheckTimeBasedDamage, CBaseEntity::GetLifeState, CBasePlayer::HandleFuncTrain, CBaseEntity::CalcAbsoluteVelocity
// callers: CDOTAPlayer::PreThink
void __fastcall CBasePlayer::PreThink(CBasePlayer *const this)
{
  CHintSystem *v2; // rax
  unsigned int v3; // r12d
  float v4; // [rsp+Ch] [rbp-14h]

  (*(this->_vptr_IHandleEntity + 501))(this);
  if ( g_fGameOver || this->m_iPlayerLocked != 0 )
    return;
  if ( (*(this->_vptr_IHandleEntity + 505))(this) != 0 )
  {
    v2 = (*(this->_vptr_IHandleEntity + 505))(this);
    CHintSystem::Update(v2);
  }
  CBasePlayer::ItemPreFrame(this);
  CBasePlayer::WaterMove(this);
  if ( g_pGameRules != 0 && (*(g_pGameRules->_vptr_CGameRules + 57))(g_pGameRules) != 0 )
  {
    v3 = this->m_Local.m_iHideHUD.m_Value & 0xFFFFFFFD;
    if ( this->m_Local.m_iHideHUD.m_Value == v3 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v3 = this->m_Local.m_iHideHUD.m_Value | 2;
  if ( this->m_Local.m_iHideHUD.m_Value != v3 )
  {
LABEL_11:
    CPlayerLocalData::NetworkVar_m_iHideHUD::NetworkStateChanged(&this->m_Local.m_iHideHUD, -1, -1);
    this->m_Local.m_iHideHUD.m_Value = v3;
  }
LABEL_12:
  (*(this->_vptr_IHandleEntity + 407))(this);
  CBasePlayer::CheckTimeBasedDamage(this);
  if ( (*(this->_vptr_IHandleEntity + 436))(this) > 3 )
    (*(this->_vptr_IHandleEntity + 444))(this);
  if ( CBaseEntity::GetLifeState(this) <= LifeState_t::LIFE_ALIVE )
  {
    CBasePlayer::HandleFuncTrain(this);
    if ( (this->m_nButtons & 2) != 0 )
      (*(this->_vptr_IHandleEntity + 380))(this);
    if ( (this->m_fFlags.m_Value & 1) == 0 )
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      if ( -this->m_vecAbsVelocity.m_Value.z != this->m_Local.m_flFallVelocity.m_Value )
      {
        v4 = -this->m_vecAbsVelocity.m_Value.z;
        (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_Local.m_flFallVelocity.m_Value = v4;
      }
    }
    (*(this->_vptr_IHandleEntity + 366))(this);
    (*(this->_vptr_IHandleEntity + 484))(this);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 366))(this);
  }
}


// CBasePlayer::CheckTimeBasedDamage  (line 4565, @0x00000000022e2c10, libserver.so)  // inlines: abs<float>, curtime
// callers: CBasePlayer::PreThink
void __fastcall CBasePlayer::CheckTimeBasedDamage(CBasePlayer *const this)
{
  CGlobalVars *v2; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  CGlobalVars *v7; // rbx
  FnGlobalVarsWarningFunc v8; // rax
  __int64 v9; // rbx
  int v10; // r15d
  unsigned __int8 v11; // dl
  __int64 v12; // rax
  int m_idrowndmg; // ecx
  int m_idrownrestored; // eax
  int v15; // ecx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  int m_nPoisonDmg; // ecx
  int m_nPoisonRestored; // eax
  int v20; // ecx
  int nDif; // [rsp+Ch] [rbp-34h]
  int nDifa; // [rsp+Ch] [rbp-34h]

  if ( (*(g_pGameRules->_vptr_CGameRules + 22))(g_pGameRules, this->m_bitsDamageType) != 0 )
  {
    v2 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v2->m_flCurrentTime;
      v5 = 0.0;
    }
    else
    {
      v5 = 0.0;
      m_flCurrentTime = 0.0;
    }
    v6 = m_flCurrentTime - this->m_tbdPrev;
    if ( v6 < 0.0 )
      v6 = -v6;
    if ( v6 >= 2.0 )
    {
      v7 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v8 = gpGlobals->m_pfnWarningFunc;
          if ( v8 != 0 )
            v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v5 = v7->m_flCurrentTime;
      }
      this->m_tbdPrev = v5;
      v9 = 0;
      while ( 1 )
      {
        v10 = 0x8000 << v9;
        if ( (*(g_pGameRules->_vptr_CGameRules + 22))(g_pGameRules, (0x8000 << v9)) == 0
          || (v10 & this->m_bitsDamageType) == 0 )
        {
          goto LABEL_31;
        }
        v11 = 2;
        v12 = 1LL << v9;
        if ( ((1LL << v9) & 0xEB) == 0 )
        {
          if ( (v12 & 4) != 0 )
          {
            m_nPoisonDmg = this->m_nPoisonDmg;
            v11 = 9;
            m_nPoisonRestored = this->m_nPoisonRestored;
            if ( m_nPoisonDmg > m_nPoisonRestored )
            {
              v20 = m_nPoisonDmg - m_nPoisonRestored;
              if ( v20 > 10 )
                v20 = 10;
              nDifa = v20;
              (*(this->_vptr_IHandleEntity + 91))(this, 0, 9, v20);
              v11 = 9;
              this->m_nPoisonRestored += nDifa;
            }
          }
          else
          {
            v11 = 0;
            if ( (v12 & 0x10) != 0 )
            {
              m_idrowndmg = this->m_idrowndmg;
              v11 = 4;
              m_idrownrestored = this->m_idrownrestored;
              if ( m_idrowndmg > m_idrownrestored )
              {
                v15 = m_idrowndmg - m_idrownrestored;
                if ( v15 > 10 )
                  v15 = 10;
                nDif = v15;
                (*(this->_vptr_IHandleEntity + 91))(this, 0, 4, v15);
                v11 = 4;
                this->m_idrownrestored += nDif;
              }
            }
          }
        }
        v16 = this->m_rgbTimeBasedDamage[v9];
        if ( v16 != 0 )
        {
          v17 = v16 - 1;
          this->m_rgbTimeBasedDamage[v9] = v17;
          if ( v17 == 0 )
          {
            this->m_rgbTimeBasedDamage[v9] = 0;
            this->m_bitsDamageType &= ~v10;
          }
LABEL_31:
          if ( ++v9 == 8 )
            return;
        }
        else
        {
          this->m_rgbTimeBasedDamage[v9++] = v11;
          if ( v9 == 8 )
            return;
        }
      }
    }
  }
}


// CBasePlayer::UpdateGeigerCounter  (line 4747, @0x00000000022c1ea0, libserver.so)  // inlines: curtime
void __fastcall CBasePlayer::UpdateGeigerCounter(CBasePlayer *const this)
{
  double v1; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc v7; // rax
  float v8; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  if ( this->m_flgeigerDelay <= m_flCurrentTime )
  {
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v7 = gpGlobals->m_pfnWarningFunc;
        if ( v7 != 0 )
          v7(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v8 = v6->m_flCurrentTime + 0.25;
    }
    else
    {
      v8 = 0.25;
    }
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_flgeigerDelay = v8;
    vptr_IHandleEntity[346](this);
    if ( (*(*random_valve + 16LL))(random_valve, 0, 3) == 0 )
      this->m_flgeigerRange = 1000.0;
  }
}


// CBasePlayer::UpdatePlayerSound  (line 4791, @0x00000000022bae50, libserver.so)  // inlines: FastSqrt, GetAbsVelocity, GetFlags, Length, SetSoundOrigin, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: CSoundEnt::ClientSoundIndex, CSoundEnt::SoundPointerForIndex, CBaseEntity::GetAbsOrigin, CBaseEntity::CalcAbsoluteVelocity, Msg
// strings: "Client lost reserved sound!\n"
void __fastcall CBasePlayer::UpdatePlayerSound(CBasePlayer *const this)
{
  CPlayerSlot v2; // eax
  CSound *v3; // r12
  unsigned int m_Value; // eax
  int v5; // r13d
  int v6; // eax
  int m_iVolume; // eax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  int v10; // eax
  bool v11; // cc

  v2.m_Data = CSoundEnt::ClientSoundIndex(this).m_Data;
  v3 = CSoundEnt::SoundPointerForIndex(v2);
  if ( v3 != 0 )
  {
    m_Value = this->m_fFlags.m_Value;
    if ( (m_Value & 0x8000) != 0 )
    {
      v3->m_iVolume = 0;
    }
    else
    {
      v5 = 0;
      if ( (m_Value & 1) != 0 )
      {
        if ( (this->m_iEFlags & 0x1000) != 0 )
          CBaseEntity::CalcAbsoluteVelocity(this);
        v5 = 512;
        v6 = fsqrt(
               ((this->m_vecAbsVelocity.m_Value.x * this->m_vecAbsVelocity.m_Value.x)
              + (this->m_vecAbsVelocity.m_Value.y * this->m_vecAbsVelocity.m_Value.y))
             + (this->m_vecAbsVelocity.m_Value.z * this->m_vecAbsVelocity.m_Value.z));
        if ( v6 <= 512 )
          v5 = v6;
      }
      if ( (this->m_nButtons & 2) != 0 )
        v5 += 100;
      this->m_iTargetVolume = v5;
      m_iVolume = v3->m_iVolume;
      if ( v5 <= m_iVolume )
      {
        if ( v5 >= m_iVolume )
        {
          v5 = v3->m_iVolume;
        }
        else
        {
          v10 = (m_iVolume - (250.0 * gpGlobals->frametime));
          v11 = v5 <= v10;
          v5 = 0;
          if ( v11 )
            v5 = v10;
        }
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v3->m_vecOrigin.x = AbsOrigin->x;
      v3->m_vecOrigin.y = AbsOrigin->y;
      z = AbsOrigin->z;
      v3->m_iVolume = v5;
      v3->m_iType = 4;
      v3->m_vecOrigin.z = z;
    }
  }
  else
  {
    Msg("Client lost reserved sound!\n");
  }
}


// FixPlayerCrouchStuck  (line 4875, @0x00000000022e30a0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, SafeGetViewVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::SetLocalOrigin, CBaseEntity::SetAbsOrigin
// callers: CBasePlayer::Restore
void __fastcall FixPlayerCrouchStuck(CBasePlayer *pPlayer)
{
  __int64 v2; // r14
  const Vector *v3; // rax
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  float z; // xmm3_4
  const Vector *v8; // rax
  __int64 v9; // r14
  const Vector *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  const Vector *v15; // rax
  int v16; // [rsp+Ch] [rbp-1A4h]
  int i; // [rsp+Ch] [rbp-1A4h]
  const CViewVectors *ViewVectors; // [rsp+18h] [rbp-198h]
  const CViewVectors *v19; // [rsp+18h] [rbp-198h]
  const CViewVectors *v20; // [rsp+20h] [rbp-190h]
  const CViewVectors *v21; // [rsp+20h] [rbp-190h]
  const Vector *AbsOrigin; // [rsp+28h] [rbp-188h]
  const Vector *v23; // [rsp+28h] [rbp-188h]
  Vector org; // [rsp+30h] [rbp-180h] BYREF
  CTraceFilterSimple v25; // [rsp+40h] [rbp-170h] BYREF
  Vector origin; // [rsp+80h] [rbp-130h] BYREF
  int v27; // [rsp+8Ch] [rbp-124h]
  float v28; // [rsp+90h] [rbp-120h]
  float v29; // [rsp+94h] [rbp-11Ch]
  float v30; // [rsp+98h] [rbp-118h]
  int v31; // [rsp+9Ch] [rbp-114h]
  float v32; // [rsp+A0h] [rbp-110h]
  float v33; // [rsp+A4h] [rbp-10Ch]
  float v34; // [rsp+A8h] [rbp-108h]
  int v35; // [rsp+ACh] [rbp-104h]
  float v36; // [rsp+B0h] [rbp-100h]
  float v37; // [rsp+B4h] [rbp-FCh]
  float v38; // [rsp+B8h] [rbp-F8h]
  int v39; // [rsp+BCh] [rbp-F4h]
  int v40; // [rsp+C0h] [rbp-F0h]
  bool v41; // [rsp+C4h] [rbp-ECh]
  bool v42; // [rsp+C5h] [rbp-EBh]
  trace_t trace; // [rsp+D0h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  v16 = 18;
  org = *CBaseEntity::GetAbsOrigin(pPlayer);
  while ( 1 )
  {
    v2 = (*(pPlayer->_vptr_IHandleEntity + 540))(pPlayer, 0);
    ViewVectors = SafeGetViewVectors();
    v20 = SafeGetViewVectors();
    AbsOrigin = CBaseEntity::GetAbsOrigin(pPlayer);
    v3 = CBaseEntity::GetAbsOrigin(pPlayer);
    v27 = 0;
    v31 = 0;
    v35 = 0;
    v39 = 0;
    v40 = 0;
    v28 = AbsOrigin->x - v3->x;
    v29 = AbsOrigin->y - v3->y;
    v30 = AbsOrigin->z - v3->z;
    v42 = (((v28 * v28) + (v29 * v29)) + (v30 * v30)) != 0.0;
    v36 = ViewVectors->m_vDuckHullMax.x - v20->m_vDuckHullMin.x;
    v37 = ViewVectors->m_vDuckHullMax.y - v20->m_vDuckHullMin.y;
    v4 = ViewVectors->m_vDuckHullMax.z - v20->m_vDuckHullMin.z;
    v36 = v36 * 0.5;
    v37 = v37 * 0.5;
    v38 = v4 * 0.5;
    v41 = (((v36 * v36) + (v37 * v37)) + (v38 * v38)) < 0.000001;
    v5 = (v20->m_vDuckHullMin.z + ViewVectors->m_vDuckHullMax.z) * 0.5;
    v6 = (v20->m_vDuckHullMin.x + ViewVectors->m_vDuckHullMax.x) * 0.5;
    v33 = (v20->m_vDuckHullMin.y + ViewVectors->m_vDuckHullMax.y) * 0.5;
    v34 = v5;
    v32 = v6;
    origin.x = v3->x + v6;
    origin.y = v3->y + v33;
    z = v3->z;
    v32 = -v6;
    v33 = -v33;
    v34 = -v5;
    origin.z = z + v5;
    CTraceFilterSimple::CTraceFilterSimple(&v25, pPlayer, 11, 0);
    v25.m_attr.m_nInteractsWith |= v2;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &origin, &v25, &trace);
    if ( !trace.startsolid )
      break;
    v8 = CBaseEntity::GetAbsOrigin(pPlayer);
    *&origin.x = *&v8->x;
    origin.z = v8->z + 1.0;
    CBaseEntity::SetLocalOrigin(pPlayer, &origin);
    if ( --v16 == 0 )
    {
      CBaseEntity::SetAbsOrigin(pPlayer, &org);
      for ( i = 18; i != 0; --i )
      {
        v9 = (*(pPlayer->_vptr_IHandleEntity + 540))(pPlayer, 0);
        v19 = SafeGetViewVectors();
        v21 = SafeGetViewVectors();
        v23 = CBaseEntity::GetAbsOrigin(pPlayer);
        v10 = CBaseEntity::GetAbsOrigin(pPlayer);
        v27 = 0;
        v31 = 0;
        v35 = 0;
        v39 = 0;
        v40 = 0;
        v28 = v23->x - v10->x;
        v29 = v23->y - v10->y;
        v30 = v23->z - v10->z;
        v42 = (((v28 * v28) + (v29 * v29)) + (v30 * v30)) != 0.0;
        v36 = v19->m_vDuckHullMax.x - v21->m_vDuckHullMin.x;
        v37 = v19->m_vDuckHullMax.y - v21->m_vDuckHullMin.y;
        v11 = v19->m_vDuckHullMax.z - v21->m_vDuckHullMin.z;
        v36 = v36 * 0.5;
        v37 = v37 * 0.5;
        v38 = v11 * 0.5;
        v41 = (((v36 * v36) + (v37 * v37)) + (v38 * v38)) < 0.000001;
        v12 = (v21->m_vDuckHullMin.z + v19->m_vDuckHullMax.z) * 0.5;
        v13 = (v21->m_vDuckHullMin.x + v19->m_vDuckHullMax.x) * 0.5;
        v33 = (v21->m_vDuckHullMin.y + v19->m_vDuckHullMax.y) * 0.5;
        v34 = v12;
        v32 = v13;
        origin.x = v10->x + v13;
        origin.y = v10->y + v33;
        v14 = v10->z;
        v32 = -v13;
        v33 = -v33;
        v34 = -v12;
        origin.z = v14 + v12;
        CTraceFilterSimple::CTraceFilterSimple(&v25, pPlayer, 11, 0);
        v25.m_attr.m_nInteractsWith |= v9;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &origin, &v25, &trace);
        if ( !trace.startsolid )
          break;
        v15 = CBaseEntity::GetAbsOrigin(pPlayer);
        *&origin.x = *&v15->x;
        origin.z = v15->z - 1.0;
        CBaseEntity::SetLocalOrigin(pPlayer, &origin);
      }
      return;
    }
  }
}


// CBasePlayer::IsRideablePhysics  (line 4918, @0x00000000022e38e0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
// callers: CBasePlayer::UpdateVPhysicsPosition
bool __fastcall CBasePlayer::IsRideablePhysics(CBasePlayer *const this, IPhysicsObject *pPhysics)
{
  bool result; // al
  IPhysicsObject *Object; // rax
  float v5; // xmm0_4
  float v6; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( pPhysics != 0 )
  {
    v6 = (*(*pPhysics + 208LL))(pPhysics);
    Object = CBaseEntity::VPhysicsGetObject(this);
    v5 = (*(*Object + 208LL))(Object);
    return v6 > (v5 + v5);
  }
  return result;
}


// CBasePlayer::GetGroundVPhysics  (line 4931, @0x00000000022e3930, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetGroundEntity, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseEntity::VPhysicsGetObject
// callers: CBasePlayer::PostThinkVPhysics, CBasePlayer::UpdateVPhysicsPosition
IPhysicsObject *__fastcall CBasePlayer::GetGroundVPhysics(CBasePlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi
  IPhysicsObject *Object; // rbx

  if ( this->m_hGroundEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hGroundEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE5(m_pInstance[7]._vptr_IHandleEntity) == 6
    && (Object = CBaseEntity::VPhysicsGetObject(m_pInstance)) != 0
    && (*(*Object + 1512LL))(Object) != 0 )
  {
    return Object;
  }
  else
  {
    return 0;
  }
}


// CBasePlayer::TonemapControllerActivated  (line 4945, @0x00000000022fea10, libserver.so)  // inlines: AddToTail, CopyConstruct<CBasePlayer::TonemapCountedActivations_t>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<CBasePlayer::TonemapCountedActivations_t, CUtlMemory<CBasePlayer::TonemapCountedActivations_t, int> >::Remove, CUtlMemory<CBasePlayer::TonemapCountedActivations_t, int>::Grow
// callers: CTonemapTrigger::StartTouch, CTonemapController2::Enable
void __fastcall CBasePlayer::TonemapControllerActivated(
        CBasePlayer *const this,
        CTonemapController2 *pTonemapController)
{
  __int64 m_Size; // rbx
  CBasePlayer::TonemapCountedActivations_t *m_pMemory; // rax
  CBasePlayer::TonemapCountedActivations_t *v6; // rax
  int v7; // esi
  CBasePlayer::TonemapCountedActivations_t *v8; // rcx
  int v9; // r14d
  int v10; // eax
  __int64 v11; // rbx
  bool v12; // zf
  CBasePlayer::TonemapCountedActivations_t *v13; // rbx
  int nActivationCount; // r14d

  m_Size = this->m_ActivatedTonemapList.m_Size;
  if ( m_Size <= 0 )
    goto LABEL_6;
  m_pMemory = this->m_ActivatedTonemapList.m_Memory.m_pMemory;
  if ( pTonemapController != m_pMemory->pController )
  {
    v6 = m_pMemory + 1;
    v7 = 0;
    while ( ++v7 != m_Size )
    {
      v8 = v6++;
      if ( pTonemapController == v6[-1].pController )
        goto LABEL_11;
    }
LABEL_6:
    v9 = 1;
    v10 = this->m_ActivatedTonemapList.m_Size;
    if ( this->m_ActivatedTonemapList.m_Memory.m_nAllocationCount != m_Size )
      goto LABEL_7;
    goto LABEL_12;
  }
  v8 = this->m_ActivatedTonemapList.m_Memory.m_pMemory;
  v7 = 0;
LABEL_11:
  nActivationCount = v8->nActivationCount;
  CUtlVectorBase<CBasePlayer::TonemapCountedActivations_t,CUtlMemory<CBasePlayer::TonemapCountedActivations_t,int>>::Remove(
    &this->m_ActivatedTonemapList,
    v7);
  m_Size = this->m_ActivatedTonemapList.m_Size;
  v9 = nActivationCount + 1;
  v10 = this->m_ActivatedTonemapList.m_Size;
  if ( this->m_ActivatedTonemapList.m_Memory.m_nAllocationCount == m_Size )
  {
LABEL_12:
    CUtlMemory<CBasePlayer::TonemapCountedActivations_t,int>::Grow(&this->m_ActivatedTonemapList.m_Memory, 1);
    v10 = this->m_ActivatedTonemapList.m_Size;
  }
LABEL_7:
  v11 = m_Size;
  v12 = &this->m_ActivatedTonemapList.m_Memory.m_pMemory[v11] == 0;
  v13 = &this->m_ActivatedTonemapList.m_Memory.m_pMemory[v11];
  this->m_ActivatedTonemapList.m_Size = v10 + 1;
  if ( !v12 )
  {
    v13->pController = pTonemapController;
    v13->nActivationCount = v9;
  }
}


// CBasePlayer::TonemapControllerDeactivated  (line 4967, @0x00000000022ef8c0, libserver.so)  // inlines: Get, GetInstance, operator==, operator[]
// calls: CUtlVectorBase<CBasePlayer::TonemapCountedActivations_t, CUtlMemory<CBasePlayer::TonemapCountedActivations_t, int> >::Remove, CEntityHandle::operator CEntityInstance*
// callers: CTonemapTrigger::EndTouch, CTonemapController2::Disable
void __fastcall CBasePlayer::TonemapControllerDeactivated(
        CBasePlayer *const this,
        CTonemapController2 *pTonemapController)
{
  int m_Size; // r8d
  CBasePlayer::TonemapCountedActivations_t *m_pMemory; // rcx
  int v5; // edx
  CBasePlayer::TonemapCountedActivations_t *v7; // rax
  CBasePlayer::TonemapCountedActivations_t *v8; // r9
  CBasePlayer::TonemapCountedActivations_t *v9; // rsi
  signed __int64 v10; // r9

  m_Size = this->m_ActivatedTonemapList.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_ActivatedTonemapList.m_Memory.m_pMemory;
    v5 = 0;
    v7 = m_pMemory + 1;
    if ( m_pMemory->pController == pTonemapController )
    {
      v9 = this->m_ActivatedTonemapList.m_Memory.m_pMemory;
      v10 = 0;
      v5 = 0;
LABEL_7:
      --v9->nActivationCount;
      if ( *(&this->m_ActivatedTonemapList.m_Memory.m_pMemory->nActivationCount + v10) == 0 )
      {
        CUtlVectorBase<CBasePlayer::TonemapCountedActivations_t,CUtlMemory<CBasePlayer::TonemapCountedActivations_t,int>>::Remove(
          &this->m_ActivatedTonemapList,
          v5);
        if ( pTonemapController == CEntityHandle::operator CEntityInstance *(&this->m_hTonemapController.m_Value) )
          (*(this->_vptr_IHandleEntity + 523))(this);
      }
    }
    else
    {
      while ( ++v5 != m_Size )
      {
        v8 = v7;
        v9 = v7++;
        v10 = v8 - m_pMemory;
        if ( v7[-1].pController == pTonemapController )
          goto LABEL_7;
      }
    }
  }
}


// CBasePlayer::TonemapControllerRemoved  (line 4989, @0x00000000022ef970, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// calls: CUtlVectorBase<CBasePlayer::TonemapCountedActivations_t, CUtlMemory<CBasePlayer::TonemapCountedActivations_t, int> >::Remove
// callers: CTonemapController2::UpdateOnRemove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::TonemapControllerRemoved(CBasePlayer *const this, CTonemapController2 *pTonemapController)
{
  int m_Size; // esi
  __int64 v5; // rdx
  CTonemapController2 *v6; // rcx
  uint32 m_Index; // eax
  CTonemapController2 *m_pInstance; // rcx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  m_Size = this->m_ActivatedTonemapList.m_Size;
  v5 = 16LL * m_Size - 16;
  while ( --m_Size >= 0 )
  {
    v6 = *(&this->m_ActivatedTonemapList.m_Memory.m_pMemory->pController + v5);
    v5 -= 16;
    if ( v6 == pTonemapController )
    {
      CUtlVectorBase<CBasePlayer::TonemapCountedActivations_t,CUtlMemory<CBasePlayer::TonemapCountedActivations_t,int>>::Remove(
        &this->m_ActivatedTonemapList,
        m_Size);
      m_Index = this->m_hTonemapController.m_Value.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTonemapController.m_Value.m_Index) >> 9)
                                                            & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[this->m_hTonemapController.m_Value.m_Index & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            m_pInstance = v10->m_pInstance;
        }
      }
      if ( pTonemapController == m_pInstance )
        (*(this->_vptr_IHandleEntity + 523))(this);
      return;
    }
  }
}


// CBasePlayer::UpdateTonemapController  (line 5007, @0x00000000022f85c0, libserver.so)  // inlines: Element, Find, FindElement, LeftChild, NetworkStateChanged, RightChild, Set, Tail, operator(), operator=, operator=<CTonemapController2*>, operator[]
// calls: CBaseEntity::GetPhysicalSpawnGroupHandle, CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>
void __fastcall CBasePlayer::UpdateTonemapController(CBasePlayer *const this)
{
  int m_Size; // eax
  unsigned __int64 i; // rax
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  CBaseEntity *elem; // rsi
  bool v7; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2*>::Node_t,short unsigned int> *m_pMemory; // rax
  CNetworkVarBase<CHandle<CBaseEntity>,CBasePlayer::NetworkVar_m_hTonemapController> *p_m_hTonemapController; // rbx
  CNetworkVarBase<CHandle<CBaseEntity>,CBasePlayer::NetworkVar_m_hTonemapController> *a; // [rsp+8h] [rbp-48h]
  CHandle<CBaseEntity> b; // [rsp+10h] [rbp-40h] BYREF

  m_Size = this->m_ActivatedTonemapList.m_Size;
  if ( m_Size != 0 )
  {
    p_m_hTonemapController = &this->m_hTonemapController;
    a = &this->m_hTonemapController;
    CHandle<CBaseEntity>::CHandle(&b, this->m_ActivatedTonemapList.m_Memory.m_pMemory[m_Size - 1].pController);
    if ( operator!=<CBaseEntity>(&p_m_hTonemapController->m_Value, &b) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2884, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hTonemapController.m_Value = b;
    }
  }
  else
  {
    a = &this->m_hTonemapController;
  }
  b.m_Index = CBaseEntity::GetPhysicalSpawnGroupHandle(this);
  for ( i = CTonemapController2::sm_Master.m_Tree.m_Root; ; i = m_pMemory[v5].m_Right )
  {
    if ( i == 0xFFFF )
    {
LABEL_7:
      elem = 0;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v4 = i;
      v5 = i;
      if ( !CTonemapController2::sm_Master.m_Tree.m_LessFunc.m_LessFunc(
              &b.m_Index,
              &CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[i].m_Data.key) )
        break;
      i = CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[v4].m_Left;
      if ( i == 0xFFFF )
        goto LABEL_7;
    }
    v7 = !CTonemapController2::sm_Master.m_Tree.m_LessFunc.m_LessFunc(
            &CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[v5].m_Data.key,
            &b.m_Index);
    m_pMemory = CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory;
    if ( v7 )
      break;
  }
  elem = m_pMemory[v5].m_Data.elem;
LABEL_8:
  CHandle<CBaseEntity>::CHandle(&b, elem);
  if ( operator!=<CBaseEntity>(&a->m_Value, &b) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2884, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hTonemapController.m_Value = b;
  }
}


// CBasePlayer::GetPlayerForecast  (line 5162, @0x00000000022e3a20, libserver.so)  // inlines: operator=
// calls: CBaseEntity::GetAbsOrigin
void __fastcall CBasePlayer::GetPlayerForecast(
        CBasePlayer *const this,
        float flTimeInTheFuture,
        Vector *pOutPoint,
        float *pOutRadius,
        bool *pOutConfident)
{
  *pOutPoint = *CBaseEntity::GetAbsOrigin(this);
  *pOutRadius = 0.0;
  *pOutConfident = 0;
}


// CBasePlayer::PostThink  (line 5183, @0x00000000022e96c0, libserver.so)  // inlines: CStaticGlobalEntityQuery, ClearImpulse, Color, GetAbsVelocity, GetSequence, GetState, GetWaterLevel, NetworkStateChanged, RandomAngle, Set, SetColor, VectorAdd, VectorMultiply, curtime, operator*, operator+, operator=, operator=<int>, operator><int>
// calls: CBasePlayer::UpdateFXVolume, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::GetHealth, GlobalEntity_GetGlobalsSerial, GlobalEntity_GetIndex, GlobalEntity_GetState, __cxa_guard_acquire, __cxa_guard_release, CBaseCombatCharacter::GetActiveWeapon, UTIL_ScreenFade, CBaseAnimating::GetModelPtr, CBaseAnimating::GetBaseAnimatingController (25 total)
// strings: "player_regenerates_health"
// globals: `guard variable for'CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth, CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth
void __fastcall CBasePlayer::PostThink(CBasePlayer *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  float v3; // xmm4_4
  float v4; // xmm3_4
  float z; // xmm0_4
  float v6; // xmm2_4
  int Health; // r12d
  int GlobalsSerial; // eax
  int m_nIndex; // edi
  int v10; // r12d
  int Index; // eax
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm1_4
  int v15; // r12d
  bool v16; // cc
  int (**v17)(...); // rax
  __int64 v18; // rax
  __int64 v19; // r13
  float m_Value; // xmm0_4
  int v21; // eax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  double v23; // xmm0_8
  double v24; // xmm1_8
  vec_t v25; // xmm2_4
  int v26; // r12d
  const Vector *AbsOrigin; // rax
  Vector v28; // [rsp+10h] [rbp-40h] BYREF
  Color hurtScreenOverlay; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-28h]

  v30 = __readfsqword(0x28u);
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  v3 = this->m_vecSmoothedVelocity.z * 0.89999998;
  v4 = 0.89999998 * this->m_vecSmoothedVelocity.x;
  z = this->m_vecAbsVelocity.m_Value.z;
  v6 = 0.1 * this->m_vecAbsVelocity.m_Value.x;
  this->m_vecSmoothedVelocity.y = (this->m_vecAbsVelocity.m_Value.y * 0.1)
                                + (this->m_vecSmoothedVelocity.y * 0.89999998);
  this->m_vecSmoothedVelocity.z = (z * 0.1) + v3;
  this->m_vecSmoothedVelocity.x = v6 + v4;
  vptr_IHandleEntity[523](this);
  CBasePlayer::UpdateFXVolume(this);
  if ( !g_fGameOver && this->m_iPlayerLocked == 0 )
  {
    if ( (*(this->_vptr_IHandleEntity + 139))(this) == 0
      && CBaseEntity::GetLifeState(this) != LifeState_t::LIFE_RESPAWNABLE )
    {
      this->m_nImpulse = 0;
LABEL_53:
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
      if ( (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController) == -1 )
        CBaseAnimating::SetSequence(this, 0, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
      CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
      if ( CBaseAnimating::GetModelPtr(this) != 0 )
        CBaseAnimating::DispatchAnimEvents(this, this);
      *&v23 = CGlobalVarsBase::curtime(gpGlobals, 0);
      CBaseEntity::SetSimulationTime(this, v23, v24);
      (*(this->_vptr_IHandleEntity + 302))(this);
      (*(this->_vptr_IHandleEntity + 417))(this);
      if ( this->m_bForceOrigin )
      {
        CBaseEntity::SetLocalOrigin(this, &this->m_vForcedOrigin);
        CBaseEntity::SetLocalAngles(this, &vec3_angle);
        Vector::Random(&v28, 25.0, v25);
      }
      CBasePlayer::PostThinkVPhysics(this);
      goto LABEL_5;
    }
    v15 = 0;
    (*(this->_vptr_IHandleEntity + 396))(this);
    while ( 1 )
    {
      v16 = v15 < (*(this->_vptr_IHandleEntity + 516))(this);
      v17 = this->_vptr_IHandleEntity;
      if ( !v16 )
        break;
      v18 = (v17[517])(this, v15);
      v19 = v18;
      if ( v18 != 0 )
      {
        if ( (*(*v18 + 784LL))(v18, this) != 0
          && (CBaseCombatCharacter::GetActiveWeapon(this) == 0
           || (CBaseCombatCharacter::GetActiveWeapon(this)->m_fEffects.m_Value & 0x20) != 0
           || CBaseCombatCharacter::GetActiveWeapon(this)->m_Activity == 184) )
        {
          (*(*v19 + 864LL))(v19, this, this, 2, 2.0);
        }
        else
        {
          (*(this->_vptr_IHandleEntity + 477))(this, 0);
        }
      }
      ++v15;
    }
    v17[465](this);
    if ( (this->m_fFlags.m_Value & 1) != 0 )
    {
      m_Value = this->m_Local.m_flFallVelocity.m_Value;
      if ( m_Value > 64.0 )
      {
        if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) == 0 )
        {
          v26 = this->m_Local.m_flFallVelocity.m_Value;
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          CSoundEnt::InsertSound(4, AbsOrigin, v26, 0.2, this, 0, 0);
        }
        m_Value = this->m_Local.m_flFallVelocity.m_Value;
      }
      if ( m_Value != 0.0 )
      {
        (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_Local.m_flFallVelocity.m_Value = 0.0;
      }
    }
    if ( CBaseAnimating::GetModelPtr(this) == 0 )
      goto LABEL_53;
    if ( (*(this->_vptr_IHandleEntity + 346))(this) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 425))(this, 6);
      goto LABEL_53;
    }
    if ( (this->m_iEFlags & 0x1000) != 0 )
    {
      CBaseEntity::CalcAbsoluteVelocity(this);
      v21 = this->m_iEFlags & 0x1000;
      if ( this->m_vecAbsVelocity.m_Value.x != 0.0 )
      {
LABEL_45:
        if ( v21 != 0 )
          CBaseEntity::CalcAbsoluteVelocity(this);
        goto LABEL_47;
      }
      if ( v21 != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
    }
    else if ( this->m_vecAbsVelocity.m_Value.x != 0.0 )
    {
LABEL_47:
      if ( this->m_vecAbsVelocity.m_Value.x != 0.0 )
        goto LABEL_62;
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      if ( this->m_vecAbsVelocity.m_Value.y != 0.0 )
      {
LABEL_62:
        if ( (this->m_fFlags.m_Value & 1) != 0 )
          goto LABEL_52;
      }
      if ( this->m_nWaterLevel.m_Value > 1u )
LABEL_52:
        (*(this->_vptr_IHandleEntity + 425))(this, 1);
      goto LABEL_53;
    }
    if ( this->m_vecAbsVelocity.m_Value.y == 0.0 )
    {
      (*(this->_vptr_IHandleEntity + 425))(this, 0);
      goto LABEL_53;
    }
    v21 = this->m_iEFlags & 0x1000;
    goto LABEL_45;
  }
LABEL_5:
  if ( `guard variable for'CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth) != 0 )
  {
    CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth.m_nGlobalSerial = -1;
    CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth.m_pGlobalName = "player_regenerates_health";
    CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth.m_nIndex = -1;
    __cxa_guard_release(&`guard variable for'CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth);
  }
  if ( (*(this->_vptr_IHandleEntity + 139))(this) != 0 )
  {
    Health = CBaseEntity::GetHealth(this);
    if ( Health < (*(this->_vptr_IHandleEntity + 156))(this) )
    {
      GlobalsSerial = GlobalEntity_GetGlobalsSerial();
      m_nIndex = CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth.m_nIndex;
      v10 = GlobalsSerial;
      if ( GlobalsSerial != CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth.m_nGlobalSerial )
      {
        Index = GlobalEntity_GetIndex(CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth.m_pGlobalName);
        CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth.m_nGlobalSerial = v10;
        m_nIndex = Index;
        CBasePlayer::PostThink(void)::s_PlayerRegeneratesHealth.m_nIndex = Index;
      }
      if ( GlobalEntity_GetState(m_nIndex) != GLOBALESTATE::GLOBAL_OFF )
      {
        hurtScreenOverlay._color[0] = 64;
        hurtScreenOverlay._color[1] = 0;
        hurtScreenOverlay._color[2] = 0;
        hurtScreenOverlay._color[3] = 64;
        v12 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          m_flCurrentTime = v12->m_flCurrentTime;
        }
        else
        {
          m_flCurrentTime = 0.0;
        }
        if ( m_flCurrentTime <= (this->m_fTimeLastHurt + sv_regeneration_wait_time.m_pParent->m_Value.m_fValue) )
          UTIL_ScreenFade(this, &hurtScreenOverlay, 1.0, 0.1, 17);
        else
          (*(this->_vptr_IHandleEntity + 91))(this, 0, 1.0);
      }
    }
  }
}


// CBasePlayer::Touch  (line 5355, @0x00000000022c0d90, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetGroundEntity, GetHandleEntity, GetInstance, GetSerialNumber, GetSolid, IndexToIdentity, Init, IsTriggerCollisionGroup, LookupEntity, SetTouchedPhysics
// calls: CCollisionProperty::IsTriggerCollisionGroup, CBaseEntity::VPhysicsGetObject
void __fastcall CBasePlayer::Touch(CBasePlayer *const this, CBaseEntity *pOther)
{
  uint32 v3; // ecx
  unsigned __int16 v4; // dx
  int v5; // edi
  __int16 v6; // ax
  uint32 v7; // edx
  CBaseEntity *m_pInstance; // rcx
  int v9; // eax
  CEntitySystem *v10; // r8
  CEntityIdentity *v11; // rdx
  __int64 v12; // rdi
  CCollisionProperty *m_pCollision; // rdi
  char v14; // al
  CBaseEntity *v15; // rsi
  CCollisionProperty *v16; // rdi
  bool IsTriggerCollisionGroup; // al
  IPhysicsObject *Object; // rdi
  __int16 v20; // [rsp+10h] [rbp-20h]

  v3 = this->m_hGroundEntity.m_Value.m_Index >> 15;
  if ( this->m_hGroundEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = v4 | v20 & 0x8000;
  v7 = v3;
  m_pInstance = 0;
  v9 = (v7 << 15) | v6 & 0x7FFF;
  v10 = g_pEntitySystem;
  v11 = (v9 + 2);
  if ( v11 > 1 )
  {
    v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v11 != 0 )
    {
      v12 = v5 & 0x1FF;
      v10 = (8 * v12);
      v11 += v12;
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  if ( pOther != m_pInstance && pOther->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
  {
    m_pCollision = pOther->m_pCollision;
    if ( m_pCollision != 0 )
    {
      v14 = (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision, pOther, v11, m_pInstance, v10);
      v15 = pOther;
      if ( v14 == 6 )
      {
        v16 = pOther->m_pCollision;
        if ( v16 == 0
          || (IsTriggerCollisionGroup = CCollisionProperty::IsTriggerCollisionGroup(v16),
              v15 = pOther,
              !IsTriggerCollisionGroup) )
        {
          Object = CBaseEntity::VPhysicsGetObject(v15);
          if ( Object != 0 && (*(*Object + 1512LL))(Object) != 0 )
            this->m_touchedPhysObject = 1;
        }
      }
    }
  }
}


// CBasePlayer::PostThinkVPhysics  (line 5372, @0x00000000022e3a70, libserver.so)  // inlines: CGameTrace, DidHit, GetFloat, Init, RnCollisionAttr_t, VectorAdd, VectorMultiply, operator*, operator+, operator=, operator><float>
// calls: CBaseEntity::GetAbsOrigin, CBasePlayer::GetGroundVPhysics, CBaseEntity::VPhysicsGetObject, CGameTrace::Init, UTIL_TraceEntity
// callers: CBasePlayer::PostThink
void __fastcall CBasePlayer::PostThinkVPhysics(CBasePlayer *const this)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm2
  int v4; // xmm0_4
  CMoveData *v5; // rax
  float m_outStepHeight; // xmm1_4
  IPhysicsObject *v7; // rax
  float v8; // xmm1_4
  vec_t v9; // xmm1_4
  uint64 v10; // rax
  double v11; // xmm0_8
  IPhysicsObject *Object; // r13
  void (__fastcall *v13)(IPhysicsObject *, const Vector *, const QAngle *, __int64); // r14
  const Vector *v14; // rax
  const Vector *AbsOrigin; // rax
  float y; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float m_Value; // xmm0_4
  float frametime; // [rsp+10h] [rbp-100h]
  const Vector v21; // [rsp+14h] [rbp-FCh]
  float v22; // [rsp+14h] [rbp-FCh]
  float v23; // [rsp+18h] [rbp-F8h]
  float v24; // [rsp+1Ch] [rbp-F4h]
  Vector position; // [rsp+20h] [rbp-F0h] BYREF
  Vector end; // [rsp+30h] [rbp-E0h] BYREF
  trace_t trace; // [rsp+40h] [rbp-D0h] BYREF

  if ( this->m_pPhysicsController != 0 )
  {
    v21 = *CBaseEntity::GetAbsOrigin(this);
    v2.m128_i32[0] = LODWORD(gpGlobals->frametime);
    if ( v2.m128_f32[0] <= 0.0 )
    {
      *&v4 = 0.1;
    }
    else
    {
      v3 = _mm_cmpge_ss(0x3DCCCCCDu, v2);
      v4 = _mm_andnot_ps(v3, 0x3DCCCCCDu).m128_u32[0] | v2.m128_i32[0] & v3.m128_i32[0];
    }
    frametime = *&v4;
    if ( CBasePlayer::GetGroundVPhysics(this) != 0 )
    {
      v5 = g_pMoveData;
      m_outStepHeight = g_pMoveData->m_outStepHeight;
    }
    else
    {
      v5 = g_pMoveData;
      m_outStepHeight = g_pMoveData->m_outStepHeight;
      if ( !this->m_touchedPhysObject )
        goto LABEL_22;
      if ( m_outStepHeight <= 0.0 && (this->m_fFlags.m_Value & 1) != 0 )
      {
        v22 = ((g_pMoveData->m_outWishVel.x * frametime) + this->m_oldOrigin.x) * 0.5;
        v23 = ((g_pMoveData->m_outWishVel.y * frametime) + this->m_oldOrigin.y) * 0.5;
        v24 = ((frametime * g_pMoveData->m_outWishVel.z) + this->m_oldOrigin.z) * 0.5;
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        y = AbsOrigin->y;
        v17 = AbsOrigin->x * 0.5;
        v18 = 0.5 * AbsOrigin->z;
        v5 = g_pMoveData;
        v21.x = v22 + v17;
        v21.y = (y * 0.5) + v23;
        v21.z = v18 + v24;
        m_outStepHeight = g_pMoveData->m_outStepHeight;
        if ( !this->m_touchedPhysObject )
        {
LABEL_22:
          m_Value = this->m_flMaxspeed.m_Value;
          if ( m_Value <= 0.0 )
            m_Value = sv_maxspeed.m_pParent->m_Value.m_fValue;
          v5->m_outWishVel.x = m_Value;
          v5->m_outWishVel.y = m_Value;
          v5->m_outWishVel.z = m_Value;
        }
      }
    }
    if ( m_outStepHeight > 0.1 )
    {
      if ( m_outStepHeight > 4.0 )
      {
        Object = CBaseEntity::VPhysicsGetObject(this);
        v13 = *(*Object + 1664LL);
        v14 = CBaseEntity::GetAbsOrigin(this);
        v13(Object, v14, &vec3_angle, 1);
      }
      else
      {
        v7 = CBaseEntity::VPhysicsGetObject(this);
        *&trace.startpos.x = (*(*v7 + 368LL))(v7);
        trace.startpos.z = v8;
        position.z = v8;
        v9 = v8 + g_pMoveData->m_outStepHeight;
        *&position.x = *&trace.startpos.x;
        *&end.x = *&trace.startpos.x;
        end.z = v9;
        memset(&trace.m_ShapeAttributes, 0, 31);
        trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&trace);
        v10 = (*(this->_vptr_IHandleEntity + 540))(this, 0);
        UTIL_TraceEntity(this, &position, &end, v10, this, 11, &trace);
        if ( trace.fraction < 1.0 || trace.startsolid )
        {
          *&v11 = LODWORD(trace.endpos.z);
          *&v11 = trace.endpos.z - position.z;
          g_pMoveData->m_outStepHeight = trace.endpos.z - position.z;
        }
        else
        {
          *&v11 = LODWORD(g_pMoveData->m_outStepHeight);
        }
        (*(this->m_pPhysicsController->_vptr_IPhysicsPlayerController + 9))(this->m_pPhysicsController, v11);
      }
      (*(this->m_pPhysicsController->_vptr_IPhysicsPlayerController + 10))(this->m_pPhysicsController);
      v5 = g_pMoveData;
    }
    v5->m_outStepHeight = 0.0;
    this->m_vNewVPhysicsPosition = v21;
    this->m_vNewVPhysicsVelocity.x = v5->m_outWishVel.x;
    this->m_vNewVPhysicsVelocity.y = v5->m_outWishVel.y;
    this->m_vNewVPhysicsVelocity.z = v5->m_outWishVel.z;
    this->m_oldOrigin = *CBaseEntity::GetAbsOrigin(this);
  }
}


// CBasePlayer::UpdateVPhysicsPosition  (line 5450, @0x00000000022e3ee0, libserver.so)
// calls: CBasePlayer::GetGroundVPhysics, CBasePlayer::IsRideablePhysics
// callers: CBasePlayer::UpdatePhysicsShadowToCurrentPosition, CBasePlayer::PhysicsSimulate
void __fastcall CBasePlayer::UpdateVPhysicsPosition(
        CBasePlayer *const this,
        const Vector *const position,
        const Vector *const velocity,
        float secondsToArrival)
{
  unsigned int m_Value; // r13d
  IPhysicsObject *GroundVPhysics; // r12
  unsigned int v9; // r13d

  m_Value = this->m_fFlags.m_Value;
  GroundVPhysics = CBasePlayer::GetGroundVPhysics(this);
  v9 = m_Value & 1;
  if ( !CBasePlayer::IsRideablePhysics(this, GroundVPhysics) )
    GroundVPhysics = 0;
  (*(this->m_pPhysicsController->_vptr_IPhysicsPlayerController + 3))(
    this->m_pPhysicsController,
    position,
    velocity,
    v9,
    GroundVPhysics,
    secondsToArrival);
}


// CBasePlayer::GetSmoothedVelocity  (line 5467, @0x00000000022bb560, libserver.so)
Vector __fastcall CBasePlayer::GetSmoothedVelocity(CBasePlayer *const this)
{
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // xmm1_4
  double v7; // [rsp+10h] [rbp-30h]
  vec_t z; // [rsp+18h] [rbp-28h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (*(this->_vptr_IHandleEntity + 346))(this) != 0 )
  {
    v4 = (*(this->_vptr_IHandleEntity + 347))(this);
    v5 = (*(*v4 + 72LL))(v4);
    v7 = (*(*v5 + 1376LL))(v5);
    z = v6;
  }
  else
  {
    v7 = *&this->m_vecSmoothedVelocity.x;
    z = this->m_vecSmoothedVelocity.z;
  }
  *&result.x = v7;
  result.z = z;
  return result;
}


// FindPlayerStart  (line 5488, @0x00000000022e3f60, libserver.so)
// calls: CGameEntitySystem::FindEntityByClassname
// callers: CBasePlayer::EntSelectSpawnPoint
CBaseEntity *__fastcall FindPlayerStart(const char *pszClassName)
{
  CBaseEntity *EntityByClassname; // rax
  CBaseEntity *v3; // r13
  CBaseEntity *v4; // rsi
  CBaseEntity *result; // rax

  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, pszClassName);
  v3 = EntityByClassname;
  if ( EntityByClassname != 0 && (EntityByClassname->m_spawnflags.m_Value & 1) == 0 )
  {
    v4 = EntityByClassname;
    while ( 1 )
    {
      result = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v4, pszClassName);
      v4 = result;
      if ( result == 0 )
        break;
      if ( (result->m_spawnflags.m_Value & 1) != 0 )
        return result;
    }
  }
  return v3;
}


// CBasePlayer::EntSelectSpawnPoint  (line 5513, @0x00000000022ed5d0, libserver.so)  // inlines: ConvertToExternalMemory, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, NextEntity, Purge, Purge_FixedGrowable, RemoveAll, V_strlen, operator==, ~CEntitySphereQuery, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGameEntitySystem::FindEntityByClassname, strlen, CGameEntitySystem::FindEntityByName, FindPlayerStart, Warning, CBaseEntity::Instance, CBaseEntity::GetAbsOrigin, CEntitySphereQuery::CEntitySphereQuery, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CEntitySphereQuery::GetCurrentEntity (17 total)
// strings: "info_player_coop", "info_player_start", "PutClientInServer: no info_player_start on level\n", "info_player_deathmatch"
// globals: g_pLastSpawn
CBaseEntity *__fastcall CBasePlayer::EntSelectSpawnPoint(CBasePlayer *const this)
{
  CBaseEntity *EntityByClassname; // r12
  const char *startspot; // rbx
  CBaseEntity *v5; // rbx
  int v6; // r12d
  CBaseEntity *v7; // rax
  const Vector *AbsOrigin; // rax
  float v9; // xmm1_4
  CBaseEntity *m_pInstance; // rsi
  CBasePlayer *CurrentEntity; // rbx
  CEntityIdentity *v12; // rax
  const Vector *LocalOrigin; // rax
  uint32 v14; // eax
  CTakeDamageInfo info; // [rsp+10h] [rbp-10F0h] BYREF
  CEntitySphereQuery sphere; // [rsp+A0h] [rbp-1060h] BYREF
  unsigned __int64 v17; // [rsp+10C8h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  if ( (*(g_pGameRules->_vptr_CGameRules + 61))(g_pGameRules) != 0 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, g_pLastSpawn, "info_player_coop");
    if ( EntityByClassname != 0
      || (EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                                g_pGameEntitySystem,
                                g_pLastSpawn,
                                "info_player_start")) != 0 )
    {
LABEL_3:
      g_pLastSpawn = EntityByClassname;
      return EntityByClassname;
    }
  }
  else if ( (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules) != 0 )
  {
    v5 = g_pLastSpawn;
    v6 = (*(*random_valve + 16LL))(random_valve, 1, 5);
    if ( v6 > 0 )
    {
      do
      {
        --v6;
        v5 = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v5, "info_player_deathmatch");
      }
      while ( v6 != 0 );
    }
    if ( v5 == 0 )
      v5 = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "info_player_deathmatch");
    EntityByClassname = v5;
    while ( 1 )
    {
      if ( EntityByClassname != 0
        && (*(g_pGameRules->_vptr_CGameRules + 81))(g_pGameRules, EntityByClassname, this) != 0 )
      {
        LocalOrigin = CBaseEntity::GetLocalOrigin(EntityByClassname);
        if ( vec3_origin.x != LocalOrigin->x || vec3_origin.y != LocalOrigin->y || vec3_origin.z != LocalOrigin->z )
          goto LABEL_3;
      }
      v7 = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, EntityByClassname, "info_player_deathmatch");
      EntityByClassname = v7;
      if ( v5 == v7 )
      {
        if ( v7 == 0 )
          break;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
        CEntitySphereQuery::CEntitySphereQuery(&sphere, AbsOrigin, 128.0, v9);
        while ( 1 )
        {
          CurrentEntity = CEntitySphereQuery::GetCurrentEntity(&sphere);
          if ( CurrentEntity == 0 )
            break;
          if ( (*(CurrentEntity->_vptr_IHandleEntity + 140))(CurrentEntity) != 0 && CurrentEntity != this )
          {
            v12 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
            if ( v12 == 0 || (v12->m_EHandle.m_Index & 0x7FFF) != 0 )
              m_pInstance = 0;
            else
              m_pInstance = v12->m_pInstance;
            CTakeDamageInfo::CTakeDamageInfo(&info, m_pInstance, m_pInstance, 300.0, 0, 0);
            CBaseEntity::TakeDamage(CurrentEntity, &info);
            CTakeDamageInfo::~CTakeDamageInfo(&info);
          }
          ++sphere.m_listIndex;
        }
        sphere.m_results.m_list.m_Size = 0;
        v14 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
        if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount < 0
          || sphere.m_results.m_list.m_Memory.m_pMemory == &sphere.m_results.m_list.m_Memory.m_FixedMemory )
        {
          if ( v14 == 0 )
            CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
        }
        else if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v14 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        }
        goto LABEL_3;
      }
    }
  }
  startspot = gpGlobals->startspot;
  if ( startspot != 0 && strlen(gpGlobals->startspot) != 0 )
    EntityByClassname = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, startspot, this, 0, 0, 0);
  else
    EntityByClassname = FindPlayerStart("info_player_start");
  if ( EntityByClassname != 0 )
    goto LABEL_3;
  Warning("PutClientInServer: no info_player_start on level\n");
  return CBaseEntity::Instance(0);
}


// CBasePlayer::ApplySessionPersisterValues  (line 5601, @0x00000000022c2aa0, libserver.so)  // inlines: Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetWeapon, IndexToIdentity, IsValid, LookupEntity, String, operator CEntityInstance*, operator[]
// calls: CBaseEntity::ApplySessionPersisterValues, SafeGetViewVectors, KeyValues::operator new, KeyValues::KeyValues, CBaseEntity::GetAbsOrigin, KeyValues::SetFloat, KeyValues::AddSubKey, KeyValues::AddFloat, KeyValues::operator delete, _Unwind_Resume
// strings: "originX", "originY", "originZ", "item_suit"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::ApplySessionPersisterValues(
        CBasePlayer *const this,
        KeyValues *const kvEntity,
        KeyValues *const kvParent)
{
  __int64 v4; // r14
  int v5; // r13d
  CHandle<CBaseCombatWeapon> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // r15
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  KeyValues *v14; // r12
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  KeyValues *v18; // r12
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  char *setName; // [rsp+10h] [rbp-40h]

  CBaseEntity::ApplySessionPersisterValues(this, kvEntity, kvParent);
  if ( sv_session_persister_mode.m_pParent->m_Value.m_nValue > 2 )
  {
    v4 = 0;
    v5 = 0;
    SafeGetViewVectors();
    SafeGetViewVectors();
    if ( this->m_hMyWeapons.m_Vector.m_Size > 0 )
    {
      do
      {
        v6 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v4];
        m_Index = v6->m_Index;
        if ( v6->m_Index + 2 > 1 )
        {
          v8 = v6->m_Index;
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v8 & 0x1FF];
            if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0 && BYTE1(m_pInstance[11].m_CScriptComponent) == 0 )
              {
                m_pEntity = m_pInstance->m_pEntity;
                m_pAsString = "";
                if ( m_pEntity->m_designerName.u.m_Id != 0 )
                  m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
                setName = m_pAsString;
                v14 = KeyValues::operator new(0x14u);
                KeyValues::KeyValues(v14, setName);
                (*(m_pInstance->_vptr_IHandleEntity + 76))(m_pInstance, v14, kvParent);
                CBaseEntity::GetAbsOrigin(this);
                KeyValues::SetFloat(v14, "originX", v15);
                CBaseEntity::GetAbsOrigin(this);
                KeyValues::SetFloat(v14, "originY", v16);
                CBaseEntity::GetAbsOrigin(this);
                KeyValues::SetFloat(v14, "originZ", v17);
                KeyValues::AddSubKey(kvParent, v14);
              }
            }
          }
        }
        ++v5;
        ++v4;
      }
      while ( v5 < this->m_hMyWeapons.m_Vector.m_Size );
    }
    if ( this->m_Local.m_bWearingSuit.m_Value )
    {
      v18 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v18, "item_suit");
      CBaseEntity::GetAbsOrigin(this);
      KeyValues::AddFloat(v18, "originX", v19);
      CBaseEntity::GetAbsOrigin(this);
      KeyValues::AddFloat(v18, "originY", v20);
      CBaseEntity::GetAbsOrigin(this);
      KeyValues::AddFloat(v18, "originZ", v21);
      KeyValues::AddSubKey(kvParent, v18);
    }
  }
}


// CBasePlayer::SetSessionPersisterPosAng  (line 5636, @0x00000000022e3ff0, libserver.so)  // inlines: operator=
// callers: CSource2Server::OnLoadSessionPersisters
// globals: CBasePlayer::ms_bUseSessionPersisterPosAng, CBasePlayer::ms_vSessionPersisterPosition, CBasePlayer::ms_angSessionPersisterAngles
void __fastcall CBasePlayer::SetSessionPersisterPosAng(Vector *const vPosition, double a2, vec_t a3)
{
  vec_t z; // xmm0_4

  CBasePlayer::ms_bUseSessionPersisterPosAng = 1;
  CBasePlayer::ms_vSessionPersisterPosition.x = vPosition->x;
  CBasePlayer::ms_vSessionPersisterPosition.y = vPosition->y;
  z = vPosition->z;
  CBasePlayer::ms_angSessionPersisterAngles.z = a3;
  CBasePlayer::ms_vSessionPersisterPosition.z = z;
  *&CBasePlayer::ms_angSessionPersisterAngles.x = a2;
}


// CBasePlayer::InitialSpawn  (line 5646, @0x00000000022bbe40, libserver.so)  // inlines: SetSessionPersister
// callers: CDOTAPlayer::InitialSpawn
// globals: CBasePlayer::ms_bUseSessionPersisterPosAng, CBasePlayer::ms_angSessionPersisterAngles, CBasePlayer::ms_vSessionPersisterPosition
void __fastcall CBasePlayer::InitialSpawn(CBasePlayer *const this)
{
  bool v2; // zf

  this->m_iConnected = PlayerConnectedState::PlayerConnected;
  (*(gamestats->_vptr_CBaseGameStats + 20))(gamestats, this);
  if ( (*(this->_vptr_IHandleEntity + 393))(this) == 1 )
  {
    v2 = !CBasePlayer::ms_bUseSessionPersisterPosAng;
    this->m_bSessionPersister = 1;
    if ( !v2 )
    {
      CBasePlayer::ms_bUseSessionPersisterPosAng = 0;
      (*(this->_vptr_IHandleEntity + 445))(
        this,
        &CBasePlayer::ms_vSessionPersisterPosition,
        &CBasePlayer::ms_angSessionPersisterAngles);
    }
  }
}


// CBasePlayer::Spawn  (line 5667, @0x0000000002302a20, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseCombatCharacter::Spawn
// callers: CDOTAPlayer::Spawn
void __fastcall CBasePlayer::Spawn(CBasePlayer *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseCombatCharacter::Spawn(this, pKeyValues);
  (*(this->_vptr_IHandleEntity + 374))(this, pKeyValues);
}


// CBasePlayer::SetOrResetInitialState  (line 5678, @0x00000000022f10f0, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CSingleUserRecipientFilter, CVariantBase, Color, CreateEvent, EnableInteractsAs, EnableInteractsWith, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, Free, Get, GetForModify, GetInt, GetPublicScriptScope, GetUserID, Invalidate, NetworkStateChanged, Release, Set, SetAll, SetAnimatedEveryTick, SetCollisionGroup, SetColor, SetSimulatedEveryTick, SetValue, SteadyStateBatchSize, ToggleDuck, VPhysicsCollisionAttribute_t, V_memset, atoi, entindex, memset, operator=, operator=<bool>, operator=<double>, operator=<float>, operator=<int>, ~CCollisionAttributeWriter, ~CSingleUserRecipientFilter, ~CVariantBase
// calls: CGlobalVarsBase::curtime, CBasePlayer::SetTimeBase, CHintSystem::ResetHints, CEntityInstance::GetEntityIndex, strtol, CBasePlayer::SharedSpawn, CBaseEntity::SetBlocksLOS, CBaseEntity::GetHealth, CBaseEntity::SetMaxHealth, CBaseEntity::ClearFlags, CBaseEntity::AddFlag, CBaseEntity::SetEffects (38 total)
// callers: CBaseMultiplayerPlayer::SetOrResetInitialState
// strings: "player_spawn", "Couldn't alloc player sound slot!\n"
// globals: gInitHUD, sv_bonus_challenge
void __fastcall CBasePlayer::SetOrResetInitialState(CBasePlayer *const this, const CEntityKeyValues *pKeyValues)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  unsigned int v5; // r13d
  CHintSystem *v6; // rax
  __int64 (__fastcall *v7)(IVEngineServer2 *, _QWORD, const char *); // r13
  CEntityIndex v8; // eax
  const char *v9; // rax
  int v10; // eax
  int m_nValue; // ecx
  int v12; // edx
  CGlobalVars *v13; // rdi
  float v14; // xmm0_4
  int v15; // r13d
  int Health; // eax
  float v17; // xmm0_4
  unsigned int m_Value; // esi
  int m_idrowndmg; // eax
  CGlobalVars *v20; // rdi
  float v21; // xmm0_4
  CGlobalVars *v22; // rdi
  bool v23; // zf
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  void (__fastcall *v27)(CBasePlayer *const, const CViewVectors *); // r13
  const CViewVectors *ViewVectors; // rax
  const CViewVectors *v29; // r13
  const CViewVectors *v30; // rax
  int (**vptr_IHandleEntity)(...); // rax
  ConVar *m_pParent; // rax
  int v33; // r13d
  int (**v34)(...); // rax
  IGameEventManager2 *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r12
  CEntityIndex v38; // eax
  __int64 v39; // rdx
  void (__fastcall *v40)(__int64, char *, _QWORD); // r15
  CEntityIndex v41; // eax
  int (**v42)(...); // rax
  IScriptVM *v43; // rdi
  CCollisionProperty *m_hScope; // rax
  Vector *p_m_vDuckHullMax; // r12
  const CViewVectors *v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  CCollisionProperty *m_pCollisionProp; // rax
  void (__fastcall *v50)(__int64, char *, __int64); // [rsp+0h] [rbp-1D0h]
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+10h] [rbp-1C0h] BYREF
  Color nothing; // [rsp+50h] [rbp-180h] BYREF
  CSingleUserRecipientFilter user; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+198h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  v3 = CGlobalVarsBase::curtime(gpGlobals, 0);
  CBasePlayer::SetTimeBase(this, v3, v4);
  v5 = (*(g_pGameRules->_vptr_CGameRules + 35))(g_pGameRules);
  if ( v5 != this->m_iDefaultFOV.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDefaultFOV.m_Value = v5;
  }
  if ( (*(this->_vptr_IHandleEntity + 505))(this) != 0 )
  {
    v6 = (*(this->_vptr_IHandleEntity + 505))(this);
    CHintSystem::ResetHints(v6);
  }
  v7 = *(*engine + 384LL);
  v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v9 = v7(engine, v8.m_Data, "rate");
  if ( v9 != 0 && (v10 = strtol(v9, 0, 10)) > 4999 )
  {
    m_nValue = 0;
    if ( ent_steadystate_batchsize.m_pParent->m_Value.m_nValue >= 0 )
      m_nValue = ent_steadystate_batchsize.m_pParent->m_Value.m_nValue;
    v12 = 100;
    if ( m_nValue <= 100 )
      v12 = m_nValue;
    if ( v10 <= 19999 )
      v12 = ((((v10 - 5000.0) / 15000.0) * (v12 - 1)) + 0.5) + 1;
  }
  else
  {
    v12 = 1;
  }
  v13 = gpGlobals;
  this->m_availableEntitySteadyState = v12;
  v14 = CGlobalVarsBase::curtime(v13, 0);
  this->m_playerInPVS = -1LL;
  this->m_lastEntitySteadyState = v14;
  CBasePlayer::SharedSpawn(this);
  if ( !this->m_bSimulatedEveryTick.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 562, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bSimulatedEveryTick.m_Value = 1;
  }
  if ( !this->m_bAnimatedEveryTick.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 563, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAnimatedEveryTick.m_Value = 1;
  }
  v15 = (*(this->_vptr_IHandleEntity + 525))(this);
  if ( v15 != this->m_ArmorValue.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3084, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ArmorValue.m_Value = v15;
  }
  CBaseEntity::SetBlocksLOS(this, 0);
  Health = CBaseEntity::GetHealth(this);
  CBaseEntity::SetMaxHealth(this, Health);
  if ( (this->m_fFlags.m_Value & 0x100) != 0 )
  {
    CBaseEntity::ClearFlags(this);
    CBaseEntity::AddFlag(this, 384);
  }
  else
  {
    CBaseEntity::ClearFlags(this);
    CBaseEntity::AddFlag(this, 128);
  }
  CBaseEntity::AddFlag(this, 0x10000);
  v17 = CGlobalVarsBase::curtime(gpGlobals, 0);
  m_Value = this->m_fEffects.m_Value;
  this->m_nDrownDmgRate = 2;
  this->m_AirFinished = v17 + 12.0;
  CBaseEntity::SetEffects(this, m_Value & 0x10);
  CBaseEntity::IncrementInterpolationFrame(this);
  if ( this->m_bClientSideRagdoll.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 380, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bClientSideRagdoll.m_Value = 0;
  }
  CBasePlayer::InitFogController(this);
  CBasePlayer::InitPostProcessController(this);
  m_idrowndmg = this->m_idrowndmg;
  this->m_DmgTake = 0.0;
  this->m_DmgSave = 0.0;
  this->m_bitsHUDDamage = -1;
  this->m_bitsDamageType = 0;
  this->m_afPhysicsFlags = 0;
  this->m_idrownrestored = m_idrowndmg;
  CBasePlayer::SetFOV(this, this, 0, 0LL, 0);
  v20 = gpGlobals;
  this->m_flNextDecalTime = 0.0;
  v21 = CGlobalVarsBase::curtime(v20, 0);
  v22 = gpGlobals;
  this->m_flgeigerDelay = v21 + 2.0;
  this->m_flNextTauntTime = 0.0;
  this->m_flgeigerDelay = CGlobalVarsBase::curtime(v22, 0) + 2.0;
  if ( this->m_flFieldOfView.m_Value != 0.76599997 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1380, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFieldOfView.m_Value = 0.76599997;
  }
  v23 = !this->m_fGameHUDInitialized;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  this->m_vecAdditionalPVSOrigin.x = vec3_origin.x;
  this->m_vecAdditionalPVSOrigin.y = y;
  this->m_vecAdditionalPVSOrigin.z = z;
  this->m_vecCameraPVSOrigin.x = x;
  this->m_vecCameraPVSOrigin.y = y;
  this->m_vecCameraPVSOrigin.z = z;
  if ( v23 )
    (*(g_pGameRules->_vptr_CGameRules + 122))(g_pGameRules, this);
  (*(g_pGameRules->_vptr_CGameRules + 80))(g_pGameRules, this);
  CBaseEntity::RemoveFlag(this, 2);
  if ( this->m_Local.m_bDucked.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bDucked.m_Value = 0;
  }
  if ( this->m_Local.m_bDucking.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 109, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bDucking.m_Value = 0;
  }
  v27 = *(this->_vptr_IHandleEntity + 211);
  ViewVectors = SafeGetViewVectors();
  v27(this, ViewVectors);
  if ( this->m_Local.m_bInDuckJump.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 110, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bInDuckJump.m_Value = 0;
  }
  if ( this->m_Local.m_nDuckTimeMsecs.m_Value != 0 )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_nDuckTimeMsecs.m_Value = 0;
  }
  if ( this->m_Local.m_nDuckJumpTimeMsecs.m_Value != 0 )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 116, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_nDuckJumpTimeMsecs.m_Value = 0;
  }
  this->m_afButtonForced = 0;
  v29 = SafeGetViewVectors();
  v30 = SafeGetViewVectors();
  UTIL_SetSize(this, &v30->m_vHullMin, &v29->m_vHullMax);
  if ( this->m_bDuckToggled )
    this->m_bDuckToggled = 0;
  v23 = !gInitHUD;
  this->m_flgeigerRange = 1000.0;
  this->m_igeigerRangePrev = 1000;
  this->m_iUpdateTime = 5;
  if ( !v23 )
    this->m_fInitHUD = 1;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_bitsDamageType = 0;
  this->m_bitsHUDDamage = -1;
  vptr_IHandleEntity[468](this, 0);
  m_pParent = sv_bonus_challenge.m_pParent;
  this->m_flPreventUseTime = 0.0;
  this->m_iTrain = 192;
  this->m_HackedGunPos.x = 0.0;
  this->m_HackedGunPos.y = 32.0;
  this->m_HackedGunPos.z = 0.0;
  v33 = m_pParent->m_Value.m_nValue;
  if ( v33 != this->m_iBonusChallenge.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2748, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iBonusChallenge.m_Value = v33;
  }
  ConVar::SetValue(&sv_bonus_challenge, 0);
  if ( this->m_iPlayerSound == -1 )
    Msg("Couldn't alloc player sound slot!\n");
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  v34 = this->_vptr_IHandleEntity;
  this->m_fInitHUD = 1;
  this->m_fWeapon = 0;
  v34[22](this, 4000, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  *&this->m_szLastPlaceName.m_Value[16] = 0;
  *this->m_szLastPlaceName.m_Value = 0;
  *&this->m_szLastPlaceName.m_Value[8] = 0;
  CRecipientFilter::CRecipientFilter(&user);
  user._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&user, this);
  UTIL_SetAudioMixNameInput(&user, 2122478497, 0);
  (*(this->_vptr_IHandleEntity + 370))(this, 0);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 8);
  if ( this->m_iPlayerLocked != 0 )
  {
    this->m_iPlayerLocked = 0;
    CBasePlayer::LockPlayerInPlace(this);
    if ( this->m_iTeamNum.m_Value != 1 )
      goto LABEL_47;
  }
  else if ( this->m_iTeamNum.m_Value != 1 )
  {
LABEL_47:
    (*(this->_vptr_IHandleEntity + 433))(this);
    goto LABEL_48;
  }
  (*(this->_vptr_IHandleEntity + 432))(this, this->m_iObserverLastMode);
LABEL_48:
  (*(this->_vptr_IHandleEntity + 452))(this);
  nothing._color[0] = 0;
  nothing._color[1] = 0;
  nothing._color[2] = 0;
  nothing._color[3] = -1;
  UTIL_ScreenFade(this, &nothing, 0.0, 0.0, 17);
  (*(g_pGameRules->_vptr_CGameRules + 76))(g_pGameRules, this);
  if ( this->m_flLaggedMovementValue.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3924, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1.0);
    this->m_flLaggedMovementValue.m_Value = 1.0;
  }
  this->m_vecSmoothedVelocity.x = vec3_origin.x;
  v35 = gameeventmanager;
  this->m_vecSmoothedVelocity.y = vec3_origin.y;
  this->m_vecSmoothedVelocity.z = vec3_origin.z;
  v36 = (*(v35->_vptr_IBaseInterface + 7))(v35, "player_spawn", 0, 0);
  v37 = v36;
  if ( v36 != 0 )
  {
    v50 = *(*v36 + 112LL);
    v38.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v39 = (*(*engine + 224LL))(engine, (v38.m_Data - 1));
    v50(v37, "userid", v39);
    v40 = *(*v37 + 112LL);
    v41.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v40(v37, "entindex", v41.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v37, 0);
  }
  (*(this->_vptr_IHandleEntity + 408))(this, 0, 0, 0);
  this->m_nVehicleViewSavedFrame = 0;
  if ( this->m_lastHeldVoteTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_lastHeldVoteTimer._vptr_IntervalTimer + 2))(&this->m_lastHeldVoteTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_lastHeldVoteTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_movementCollisionNormal.x = 0.0;
  v42 = this->_vptr_IHandleEntity;
  this->m_movementCollisionNormal.y = 0.0;
  this->m_movementCollisionNormal.z = 1.0;
  v42[366](this);
  if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) == 0 )
  {
    v43 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      m_hScope = this->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(this, 0);
        v43 = g_pScriptVM;
        m_hScope = this->m_pEntity->m_hPublicScope.m_hScope;
      }
      writer.m_pCollisionProp = m_hScope;
      LODWORD(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t) = 31;
      (*(*v43 + 240LL))(v43, 0, "player", &writer);
      if ( (BYTE2(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t) & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, writer.m_pCollisionProp);
    }
  }
  CCollisionProperty::DisableAutoSleeping(&this->m_Collision);
  p_m_vDuckHullMax = &SafeGetViewVectors()->m_vDuckHullMax;
  v46 = SafeGetViewVectors();
  CCollisionProperty::SetupPhysicsFromUnscaledAABB(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    8,
    &v46->m_vDuckHullMin,
    p_m_vDuckHullMax);
  writer.m_pCollisionProp = &this->m_Collision;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  v47 = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  if ( v47 != 0 )
    writer.m_OriginalState.m_nInteractsAs.m_Value = v47;
  v48 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
  if ( v48 != 0 )
  {
    writer.m_OriginalState.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    v48 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
  }
  if ( v48 != this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nInteractsExclude.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
  }
  if ( writer.m_OriginalState.m_nEntityId.m_Value != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nEntityId.m_Value = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
  }
  if ( writer.m_OriginalState.m_nHierarchyId.m_Value != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nHierarchyId.m_Value = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionGroup.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  }
  m_pCollisionProp = writer.m_pCollisionProp;
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value |= 0x40000u;
  m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x200000u;
  CBasePlayer::CreatePlayerHullExtension(this);
  CCollisionProperty::EnableHitboxes(&this->m_Collision);
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    VPhysicsCollisionAttribute_t::Compare(&writer.m_pCollisionProp->m_collisionAttribute, &writer.m_OriginalState);
  }
  user._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&user);
}


// CBasePlayer::Activate  (line 5978, @0x00000000022feae0, libserver.so)  // inlines: AddKeyValue<CEntityHandle>, AddKeyValue<int>, AddToTail, Base, Bind, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlAbstractDelegate, CUtlDelegate, CUtlDelegate<CBasePlayer, CBasePlayer>, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Convert<CBasePlayer, bool (CBasePlayer::*)(const CClientMsg_DevPaletteVisibilityChangedEvent_t&), void (detail::GenericClass::*)()>, Convert<FastDelegate2<CPointHMDAnchor*, const CEntityKeyValues*, void>, void (FastDelegate2<CPointHMDAnchor*, const CEntityKeyValues*, void>::*)(CPointHMDAnchor*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, CopyFrom<FastDelegate2<CPointHMDAnchor*, const CEntityKeyValues*, void> >, Element, EntitySpawnerAsyncDesc_t, FastDelegate1<CBasePlayer, CBasePlayer>, FastDelegate2, FilterSpawnGroupEntity, FindKeyHash, Free, GetClassInfo, GetEHandle, GetEntryIndex, GetSerialNumber, Init, IsEmpty, OverrideAllocator, Purge, QueueContextCallbacks, RegisterGameEventHandler<CClientMsg_DevPaletteVisibilityChangedEvent_t>, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, SetClassName, SetMementoFrom, SetToIdentity, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValue<int>, SetValues, SetWorldTransform, Spawn, SpawnInternal, UtlMakeDelegate<CBasePlayer, CBasePlayer, const CClientMsg_DevPaletteVisibilityChangedEvent_t&, bool>, UtlMakeDelegate<CPointHMDAnchor*, const CEntityKeyValues*, void>, bindmemfunc<CBasePlayer, bool (CBasePlayer::*)(const CClientMsg_DevPaletteVisibilityChangedEvent_t&)>, bindmemfunc<FastDelegate2<CPointHMDAnchor*, const CEntityKeyValues*, void>, void (FastDelegate2<CPointHMDAnchor*, const CEntityKeyValues*, void>::*)(CPointHMDAnchor*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CPointHMDAnchor*, const CEntityKeyValues*, void>, void (FastDelegate2<CPointHMDAnchor*, const CEntityKeyValues*, void>::*)(CPointHMDAnchor*, const CEntityKeyValues*)const>, entindex, operator!, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseAnimating::Activate, AimTarget_ForceRepopulateList, VR_GetActiveHMDAnchor, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CPointHMDAnchor>::Init, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityInstance::GetEntityIndex, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<QAngle> (27 total)
// strings: "point_hmd_anchor", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CBasePlayer::ReceiveClientMsg_DevPaletteVisibilityChangedEvent(CClientMsg_DevPaletteVisibilityChangedEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>(bool)::s_hEvent, FastDelegate2<CPointHMDAnchor *,CEntityKeyValues const*,void>::InvokeStaticFunction(CPointHMDAnchor *,CEntityKeyValues const*), OnCreatePointHMDAnchorComplete(CPointHMDAnchor *,CEntityKeyValues const*), CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CBasePlayer::Activate(CBasePlayer *const this, ActivateType_t activateType)
{
  CEntityIndex v3; // eax
  CEntityKeyValues *m_pEntityKeyValues; // r13
  int32 m_Data; // r15d
  const QAngle *AbsAngles; // r13
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // cx
  CEntityKeyValues *v10; // r13
  __int64 v11; // r15
  __int64 v12; // rbx
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  CEntityKeyValues *v15; // r13
  bool v16; // zf
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // r14
  CEntitySpawnerContext<CPointHMDAnchor> *m_pContext; // rbx
  SpawnGroupHandle_t i; // r15d
  __int64 delta; // rcx
  CEntityInstance *m_pCompletionListener; // r8
  __int64 pfn; // rdx
  __int16 v24; // bx
  unsigned __int64 v25; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rax
  uint16 v29; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // rax
  CUtlScratchMemoryPool *v31; // rdi
  CEntityKeyValues *v32; // rbx
  int v34; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v35; // cx
  __int64 v36; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v37; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v39; // cx
  __int64 v40; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v43; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rdx
  __int64 v54; // rax
  const char *m_pAttributeName; // rsi
  __int16 v56; // ax
  int v57; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // rax
  uint16 v59; // dx
  __int64 v60; // [rsp+18h] [rbp-1D8h]
  __int64 v61; // [rsp+18h] [rbp-1D8h]
  int v62; // [rsp+20h] [rbp-1D0h]
  CEntityKeyValues *v63; // [rsp+30h] [rbp-1C0h] BYREF
  CEntityKeyValues *v64; // [rsp+38h] [rbp-1B8h] BYREF
  void (__fastcall *v65)(CPointHMDAnchor *, const CEntityKeyValues *); // [rsp+40h] [rbp-1B0h]
  void (__fastcall *v66)(const FastDelegate2<CPointHMDAnchor*,const CEntityKeyValues*,void> *const, CPointHMDAnchor *, const CEntityKeyValues *); // [rsp+48h] [rbp-1A8h]
  __int64 v67; // [rsp+50h] [rbp-1A0h]
  __int64 v68[4]; // [rsp+60h] [rbp-190h] BYREF
  int v69; // [rsp+80h] [rbp-170h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v70; // [rsp+88h] [rbp-168h] BYREF
  int v71; // [rsp+A0h] [rbp-150h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v72; // [rsp+A8h] [rbp-148h] BYREF
  __int64 v73[4]; // [rsp+C0h] [rbp-130h] BYREF
  EntitySpawnerAsyncDesc_t<CPointHMDAnchor> spawnerDesc; // [rsp+E0h] [rbp-110h] BYREF
  CEntitySpawnerAsync<CPointHMDAnchor> spawner; // [rsp+110h] [rbp-E0h] BYREF

  CBaseAnimating::Activate(this, activateType);
  spawner.m_pEntityKeyValues = CBasePlayer::ReceiveClientMsg_DevPaletteVisibilityChangedEvent;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner._vptr_CEntitySpawnerBase = this;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    0,
    &spawner,
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_DevPaletteVisibilityChangedEvent_t>(bool)::s_hEvent,
    0);
  AimTarget_ForceRepopulateList();
  (*(this->_vptr_IHandleEntity + 408))(this, 0, 0, 0);
  this->m_iVehicleAnalogBias = 0;
  if ( VR_GetActiveHMDAnchor(this) != 0 )
    return;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner._vptr_CEntitySpawnerBase = off_4087DF0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_pContext = 0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pFilter = 0;
  spawner._vptr_CEntitySpawnerBase = off_4087E30;
  spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP;
  spawnerDesc.m_flTimeoutInterval = 2.0;
  spawnerDesc.m_pContext = 0;
  spawnerDesc.m_pSpawnGroupToWorld = 0;
  spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  spawnerDesc.m_iPriorityLoader = -2;
  spawnerDesc.m_bManualCompletion = 0;
  spawnerDesc.m_worldGroupId.m_nHashCode = 0;
  spawnerDesc.m_hOwnerSpawnGroup = -1;
  CEntitySpawnerAsync<CPointHMDAnchor>::Init(&spawner, &spawnerDesc);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "point_hmd_anchor");
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             "point_hmd_anchor",
                             &spawner.m_scriptClassName);
  v3.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  m_Data = v3.m_Data;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_73:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v43 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -1675069152;
      v61 = v43;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v46 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v46 = 0;
      v47 = &v46[v61];
      m_flags = v47->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v47->m_value.m_flags = m_flags & 0xFFFE;
      v47->m_value.m_uint64 = 0;
      v47->m_value.m_type = 5;
      v47->m_value.m_int = m_Data;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v49 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v49 = 0;
      v49[v61].m_pAttributeName = 0;
      goto LABEL_3;
    }
    v39 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v40 = 0;
    while ( 1 )
    {
      if ( v39 != 0 )
      {
        v41 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v39 > 9 )
          v41 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v41 = 0;
      }
      if ( v41[v40] == -1675069152 )
        break;
      if ( m_nCount <= ++v40 )
        goto LABEL_73;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v50 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v51 = v40;
      v52 = &v50[v51];
      if ( v50[v51].m_pAttributeName != 0 )
      {
LABEL_85:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v50[v51].m_pAttributeName);
        goto LABEL_3;
      }
    }
    else
    {
      v51 = v40;
      v50 = 0;
      v52 = v51 * 24;
      if ( *(v51 * 24 + 16) != 0 )
        goto LABEL_85;
    }
    v56 = *(v52 + 10);
    if ( (v56 & 1) != 0 )
      *(v52 + 10) = v56 & 0xFFFE;
    *v52 = 0;
    *(v52 + 8) = 5;
    *v52 = m_Data;
  }
LABEL_3:
  v67 = 0;
  v66 = FastDelegate2<CPointHMDAnchor *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  v65 = OnCreatePointHMDAnchorComplete;
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, AbsOrigin);
  CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, AbsAngles);
  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v9 = 0x7FFF;
    else
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v62 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
  }
  else
  {
    v62 = -1;
  }
  v10 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
    v11 = v66;
    v12 = v65;
    v60 = v67;
    goto LABEL_10;
  }
  v34 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v34 > 0 )
  {
    v35 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v36 = 0;
    while ( 1 )
    {
      if ( v35 != 0 )
      {
        v37 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v35 > 9 )
          v37 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v37 = 0;
      }
      if ( v37[v36] == -1104771937 )
        break;
      if ( v34 <= ++v36 )
        goto LABEL_28;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v53 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v54 = v36;
      m_pAttributeName = v53[v54].m_pAttributeName;
      if ( m_pAttributeName != 0 )
      {
LABEL_88:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
LABEL_89:
        v10 = spawner.m_pEntityKeyValues;
        goto LABEL_38;
      }
      v57 = v62;
    }
    else
    {
      v54 = v36;
      m_pAttributeName = *(v54 * 24 + 16);
      if ( m_pAttributeName != 0 )
        goto LABEL_88;
      v57 = v62;
      v53 = 0;
    }
    v58 = &v53[v54];
    v59 = v58->m_value.m_flags;
    if ( (v59 & 1) != 0 )
      v58->m_value.m_flags = v59 & 0xFFFE;
    v58->m_value.m_uint64 = 0;
    v58->m_value.m_type = 13;
    v58->m_value.m_int = v57;
    goto LABEL_89;
  }
LABEL_28:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v24 = v10->m_keyHashes.m_nCount - 1;
  v25 = v10->m_keyHashes.m_nAllocated;
  if ( v25 != 0 )
  {
    if ( v25 <= 9 )
      v26 = (&v10->m_keyHashes.m_nAllocAllocated + 1);
    else
      v26 = v10->m_keyHashes.m_pElements;
  }
  else
  {
    v26 = 0;
  }
  v26[v24] = -1104771937;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v10->m_keyValues);
  if ( v10->m_keyValues.m_nAllocated != 0 )
    v27 = v10->m_keyValues.m_pElements;
  else
    v27 = 0;
  v28 = &v27[v24];
  v29 = v28->m_value.m_flags;
  if ( (v29 & 1) != 0 )
    v28->m_value.m_flags = v29 & 0xFFFE;
  v28->m_value.m_uint64 = 0;
  v28->m_value.m_type = 13;
  v28->m_value.m_int = v62;
  if ( v10->m_keyValues.m_nAllocated != 0 )
    v30 = v10->m_keyValues.m_pElements;
  else
    v30 = 0;
  v30[v24].m_pAttributeName = 0;
  v10 = spawner.m_pEntityKeyValues;
LABEL_38:
  v11 = v66;
  v12 = v65;
  v60 = v67;
  if ( v10 != 0 )
  {
LABEL_10:
    if ( spawner.m_pEntityClass != 0 )
    {
      HasValue = CEntityKeyValues::HasValue(v10, -971301790);
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( !HasValue && m_pszClassname != 0 )
      {
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      }
      (*(*engine + 464LL))(engine, spawner.m_hSpawnGroupHandle, m_pszClassname);
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v15 = spawner.m_pEntityKeyValues;
      if ( spawner.m_pFilter == 0 )
        goto LABEL_18;
      v63 = spawner.m_pEntityKeyValues;
      v70.m_pMemory = &v63;
      v64 = 0;
      v69 = 1;
      v70.m_nAllocationCount = 1;
      v70.m_nGrowSize = 0x40000000;
      v71 = 0;
      v72.m_pMemory = &v64;
      v72.m_nAllocationCount = 1;
      v72.m_nGrowSize = 0x40000000;
      (*(spawner.m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(
        spawner.m_pFilter,
        spawner.m_hSpawnGroupHandle,
        spawner.m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY,
        &v69,
        &v71);
      v15 = 0;
      v16 = v71 == 1;
      v71 = 0;
      if ( v16 )
        v15 = v64;
      if ( (v72.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v72);
        if ( (v72.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityKeyValues const*,int>::Purge(&v72);
      }
      v69 = 0;
      if ( (v70.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v70);
        if ( (v70.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityKeyValues const*,int>::Purge(&v70);
      }
      if ( v15 != 0 )
      {
LABEL_18:
        SetIdentityMatrix(&spawnerDesc);
        v17 = (*(spawner.m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
                spawner.m_pLoadingSpawnGroup,
                spawner.m_hOwnerSpawnGroup,
                &spawnerDesc,
                1,
                v15);
        v18 = v17;
        if ( v17 != 0 )
        {
          if ( v12 != 0 || v11 != 0 )
          {
            v68[1] = v11;
            v68[0] = v12;
            v68[2] = v60;
            CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
              g_pGameEntitySystem,
              spawner.m_hSpawnGroupHandle,
              v17,
              v15,
              0,
              v68);
          }
          m_pContext = spawner.m_pContext;
          for ( i = spawner.m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
          {
            pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
            if ( m_pContext->m_callback.m_Closure.m_pthis != 0 || pfn != 0 )
            {
              v73[0] = m_pContext->m_callback.m_Closure.m_pthis;
              delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
              v73[1] = pfn;
              m_pCompletionListener = m_pContext->m_pCompletionListener;
              v73[2] = delta;
              CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
                g_pGameEntitySystem,
                i,
                v18,
                v15,
                m_pCompletionListener,
                v73);
            }
          }
        }
      }
    }
    else
    {
      CEntityKeyValues::HasValue(v10, -971301790);
    }
  }
  v31 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_4087DF0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v31 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v31);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v32 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v32);
      operator delete(v32);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// CBasePlayer::Precache  (line 6005, @0x00000000022bafe0, libserver.so)
// calls: CBaseCombatCharacter::Precache, UTIL_PrecacheOther
// callers: CBaseMultiplayerPlayer::Precache
// strings: "prop_hmd_avatar"
void __fastcall CBasePlayer::Precache(CBasePlayer *const this, const CEntityPrecacheContext *pContext)
{
  CBaseCombatCharacter::Precache(this, pContext);
  UTIL_PrecacheOther("prop_hmd_avatar", pContext);
}


// CBasePlayer::ForceRespawn  (line 6046, @0x00000000022d7d30, libserver.so)
// calls: CBaseEntity::SetGroundEntity
void __fastcall CBasePlayer::ForceRespawn(CBasePlayer *const this)
{
  int (**vptr_IHandleEntity)(...); // rax

  (*(this->_vptr_IHandleEntity + 400))(this, 1);
  CBaseEntity::SetGroundEntity(this, 0);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_nButtons = 0;
  vptr_IHandleEntity[374](this, 0);
}


// CBasePlayer::Save  (line 6059, @0x00000000022b8d60, libserver.so)
// calls: CBaseEntity::Save
int __fastcall CBasePlayer::Save(CBasePlayer *const this, ISave *const save)
{
  return CBaseEntity::Save(this, save) != 0;
}


// CBasePlayer::Restore  (line 6088, @0x00000000022e36c0, libserver.so)  // inlines: NetworkStateChanged, Set, SnapEyeAngles, String, VectorAdd, operator+, operator=, operator=<bool>
// calls: CBaseCombatCharacter::Restore, CBaseEntity::SetLocalAngles, CBaseCombatCharacter::SetBloodColor, SafeGetViewVectors, UTIL_SetSize, FixPlayerCrouchStuck, CUtlString::Get, Msg, CBaseEntity::GetLocalOrigin, CBaseEntity::SetLocalOrigin, CBaseEntity::GetLocalAngles
// strings: "No Landmark:%s\n"
int __fastcall CBasePlayer::Restore(CBasePlayer *const this, IRestore *const restore)
{
  int v2; // r13d
  __int64 v6; // rax
  __int64 v7; // rax
  vec_t x; // xmm0_4
  const CViewVectors *v9; // r12
  const CViewVectors *v10; // rax
  const CViewVectors *ViewVectors; // r12
  const CViewVectors *v12; // rax
  const char *v13; // rax
  double v14; // xmm0_8
  const CBaseEntity *v15; // r13
  const Vector *LocalOrigin; // rax
  vec_t v17; // xmm0_4
  vec_t v18; // xmm1_4
  const QAngle *LocalAngles; // rax
  QAngle newViewAngles; // [rsp+0h] [rbp-30h] BYREF

  v2 = 0;
  if ( CBaseCombatCharacter::Restore(this, restore) == 0 )
    return v2;
  v6 = (*(restore->_vptr_IRestore + 51))(restore);
  if ( *(v6 + 520) == 0 )
  {
    v13 = CUtlString::Get((v6 + 528));
    *&v14 = Msg("No Landmark:%s\n", v13).m128_u64[0];
    v15 = (*(this->_vptr_IHandleEntity + 456))(this, v14);
    LocalOrigin = CBaseEntity::GetLocalOrigin(v15);
    v17 = LocalOrigin->z + 1.0;
    v18 = LocalOrigin->x + 0.0;
    newViewAngles.y = LocalOrigin->y + 0.0;
    newViewAngles.z = v17;
    newViewAngles.x = v18;
    CBaseEntity::SetLocalOrigin(this, &newViewAngles);
    LocalAngles = CBaseEntity::GetLocalAngles(v15);
    CBaseEntity::SetLocalAngles(this, LocalAngles);
  }
  v7 = *&this->m_pl.v_angle.x;
  newViewAngles.z = 0.0;
  *&newViewAngles.x = v7;
  CBaseEntity::SetLocalAngles(this, &newViewAngles);
  x = newViewAngles.x;
  this->m_FixAngle.fixangle = 1;
  *&this->m_pl.v_angle.x = __PAIR64__(LODWORD(newViewAngles.y), LODWORD(x));
  this->m_pl.v_angle.z = newViewAngles.z;
  CBaseCombatCharacter::SetBloodColor(this, 0);
  this->m_afPhysicsFlags &= ~0x10u;
  if ( (this->m_fFlags.m_Value & 2) != 0 )
  {
    v2 = 1;
    FixPlayerCrouchStuck(this);
    ViewVectors = SafeGetViewVectors();
    v12 = SafeGetViewVectors();
    UTIL_SetSize(this, &v12->m_vDuckHullMin, &ViewVectors->m_vDuckHullMax);
    if ( !this->m_Local.m_bDucked.m_Value )
    {
      (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Local.m_bDucked.m_Value = 1;
    }
    return v2;
  }
  if ( this->m_Local.m_bDucked.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bDucked.m_Value = 0;
  }
  v9 = SafeGetViewVectors();
  v10 = SafeGetViewVectors();
  UTIL_SetSize(this, &v10->m_vHullMin, &v9->m_vHullMax);
  return 1;
}


// CBasePlayer::OnRestore  (line 6148, @0x00000000022e8660, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseEntity*
// calls: CBaseAnimatingOverlay::OnRestore, CBasePlayer::SetViewEntity, CBasePlayer::SetDefaultFOV, CBaseAnimating::LookupPoseParameter, CBasePlayer::CreatePlayerHullExtension
// strings: "body_pitch"
void __fastcall CBasePlayer::OnRestore(CBasePlayer *const this)
{
  unsigned __int16 v2; // dx
  int v3; // edi
  CBaseEntity *m_pInstance; // rsi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  CBaseAnimatingOverlay::OnRestore(this);
  if ( this->m_hViewEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hViewEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  m_pInstance = 0;
  v5 = (this->m_hViewEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v5 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v3 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  CBasePlayer::SetViewEntity(this, m_pInstance);
  CBasePlayer::SetDefaultFOV(this, this->m_iDefaultFOV.m_Value);
  this->m_nVehicleViewSavedFrame = 0;
  this->m_nBodyPitchPoseParam = CBaseAnimating::LookupPoseParameter(this, "body_pitch");
  CBasePlayer::CreatePlayerHullExtension(this);
}


// CBasePlayer::IncrementArmorValue  (line 6182, @0x00000000022e4050, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<int>, operator=<int>
void __fastcall CBasePlayer::IncrementArmorValue(CBasePlayer *const this, int nCount, int nMaxValue)
{
  int m_Value; // eax
  int v6; // r13d

  m_Value = this->m_ArmorValue.m_Value;
  v6 = m_Value + nCount;
  if ( m_Value != m_Value + nCount )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3084, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ArmorValue.m_Value = v6;
  }
  if ( nMaxValue > 0 && this->m_ArmorValue.m_Value > nMaxValue )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3084, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ArmorValue.m_Value = nMaxValue;
  }
}


// CBasePlayer::SetPhysicsFlag  (line 6195, @0x00000000022e40d0, libserver.so)
void __fastcall CBasePlayer::SetPhysicsFlag(CBasePlayer *const this, int nFlag, bool bSet)
{
  if ( bSet )
    this->m_afPhysicsFlags |= nFlag;
  else
    this->m_afPhysicsFlags &= ~nFlag;
}


// CBasePlayer::NotifyNearbyRadiationSource  (line 6205, @0x00000000022e40f0, libserver.so)
// callers: CTriggerHurt::RadiationThink
void __fastcall CBasePlayer::NotifyNearbyRadiationSource(CBasePlayer *const this, float a2, float flRange)
{
  if ( this->m_flgeigerRange >= a2 )
    this->m_flgeigerRange = a2;
}


// CBasePlayer::AllowImmediateDecalPainting  (line 6217, @0x00000000022e4110, libserver.so)  // inlines: curtime
// callers: CMultiplayRules::PlayerKilled
void __fastcall CBasePlayer::AllowImmediateDecalPainting(CBasePlayer *const this)
{
  CGlobalVars *v2; // rbx
  CGlobalVars *v3; // rax
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  void (__fastcall *v6)(__int64); // rax
  float m_flCurrentTime; // xmm0_4

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v3 = gpGlobals;
    v4 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      v4 = gpGlobals;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v4 = gpGlobals;
        v3 = gpGlobals;
      }
    }
    this->m_flNextDecalTime = v2->m_flCurrentTime;
    if ( v3 != 0 )
    {
      if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
      {
        v6 = v4->m_pfnWarningFunc;
        if ( v6 != 0 )
          v6(1);
      }
      m_flCurrentTime = v4->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
  }
  else
  {
    m_flCurrentTime = 0.0;
    this->m_flNextDecalTime = 0.0;
  }
  this->m_flNextTauntTime = m_flCurrentTime;
}


// CBasePlayer::CommitSuicide  (line 6228, @0x00000000022c4d30, libserver.so)  // inlines: curtime
// calls: CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CBasePlayer::CommitSuicide(CBasePlayer *const this, bool bExplode, bool bForce)
{
  float m_flCurrentTime; // xmm0_4
  float m_fNextSuicideTime; // xmm1_4
  CGlobalVars *v8; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  void (__fastcall *v13)(CBasePlayer *const, CTakeDamageInfo *); // r14
  FnGlobalVarsWarningFunc v14; // rax
  float v15; // [rsp+Ch] [rbp-C4h]
  CTakeDamageInfo v16; // [rsp+10h] [rbp-C0h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 139))(this) != 0 )
  {
    m_flCurrentTime = 0.0;
    m_fNextSuicideTime = this->m_fNextSuicideTime;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v15 = this->m_fNextSuicideTime;
          (m_pfnWarningFunc)(1, 0.0);
          m_fNextSuicideTime = v15;
        }
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    if ( m_fNextSuicideTime <= m_flCurrentTime || bForce )
    {
      v10 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v14 = gpGlobals->m_pfnWarningFunc;
          if ( v14 != 0 )
            v14(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v11 = v10->m_flCurrentTime + 5.0;
      }
      else
      {
        v11 = 5.0;
      }
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      this->m_fNextSuicideTime = v11;
      vptr_IHandleEntity[157](this, 0);
      v13 = *(this->_vptr_IHandleEntity + 92);
      CTakeDamageInfo::CTakeDamageInfo(&v16, this, this, 0.0, !bExplode ? 6144 : 10304, this->m_iSuicideCustomKillFlags);
      v13(this, &v16);
      CTakeDamageInfo::~CTakeDamageInfo(&v16);
      (*(this->_vptr_IHandleEntity + 338))(this);
      this->m_iSuicideCustomKillFlags = 0;
    }
  }
}


// CBasePlayer::CommitSuicide  (line 6252, @0x00000000022c52f0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, SetDamageForce, SetDamagePosition, SetDamageType, curtime, operator=
// calls: CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CBasePlayer::CommitSuicide(
        CBasePlayer *const this,
        const Vector *const vecForce,
        bool bExplode,
        bool bForce)
{
  float m_flCurrentTime; // xmm1_4
  float m_fNextSuicideTime; // xmm0_4
  CGlobalVars *v10; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CGlobalVars *v12; // r13
  float v13; // xmm0_4
  int Health; // r15d
  CEntityIdentity *m_pEntity; // rax
  int v16; // edx
  __int16 v17; // cx
  vec_t y; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v20; // xmm1_4
  FnGlobalVarsWarningFunc v21; // rax
  float v22; // [rsp+Ch] [rbp-D4h]
  double v23; // [rsp+10h] [rbp-D0h]
  CTakeDamageInfo info; // [rsp+20h] [rbp-C0h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 139))(this) != 0 )
  {
    m_flCurrentTime = 0.0;
    m_fNextSuicideTime = this->m_fNextSuicideTime;
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v22 = this->m_fNextSuicideTime;
          (m_pfnWarningFunc)(1, m_fNextSuicideTime, 0.0);
          m_fNextSuicideTime = v22;
        }
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    if ( m_fNextSuicideTime <= m_flCurrentTime || bForce )
    {
      v12 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v21 = gpGlobals->m_pfnWarningFunc;
          if ( v21 != 0 )
            v21(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v13 = v12->m_flCurrentTime + 5.0;
      }
      else
      {
        v13 = 5.0;
      }
      this->m_fNextSuicideTime = v13;
      Health = CBaseEntity::GetHealth(this);
      CTakeDamageInfo::CTakeDamageInfo(&info);
      m_pEntity = this->m_pEntity;
      info.m_flDamage = (Health + 10);
      if ( m_pEntity != 0 )
      {
        v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v17 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.m_hAttacker.m_Index) = v17 | info.m_hAttacker.m_Index & 0x8000;
        info.m_hAttacker.m_Index = (v16 << 15) | info.m_hAttacker.m_Index & 0x7FFF;
      }
      else
      {
        info.m_hAttacker.m_Index = -1;
      }
      info.m_vecDamageForce.x = vecForce->x;
      y = vecForce->y;
      info.m_bitsDamageType = bExplode ? 0x2040 : 0;
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      info.m_vecDamageForce.y = y;
      info.m_vecDamageForce.z = vecForce->z;
      v23 = (vptr_IHandleEntity[62])(this);
      info.m_vecDamagePosition.z = v20;
      *&info.m_vecDamagePosition.x = v23;
      CBaseEntity::TakeDamage(this, &info);
      CTakeDamageInfo::~CTakeDamageInfo(&info);
    }
  }
}


// CBasePlayer::HasWeapons  (line 6280, @0x00000000022e41d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CBasePlayer::PlayerDeathThink
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePlayer::HasWeapons(CBasePlayer *const this)
{
  int m_Size; // edx
  CHandle<CBaseCombatWeapon> *m_pMemory; // rax
  __int64 v3; // rdi
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx

  m_Size = this->m_hMyWeapons.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory;
  v3 = &m_pMemory[m_Size - 1 + 1];
  while ( 1 )
  {
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[m_pMemory->m_Index & 0x1FF];
        if ( v5 != 0 && m_pMemory->m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
          break;
      }
    }
    if ( ++m_pMemory == v3 )
      return 0;
  }
  return 1;
}


// CBasePlayer::VelocityPunch  (line 6297, @0x00000000022e46c0, libserver.so)
// calls: CBaseEntity::SetGroundEntity, CBaseEntity::ApplyAbsVelocityImpulse
// callers: CBaseEntity::VelocityPunch
void __fastcall CBasePlayer::VelocityPunch(CBasePlayer *const this, const Vector *const vecForce)
{
  CBaseEntity::SetGroundEntity(this, 0);
  CBaseEntity::ApplyAbsVelocityImpulse(this, vecForce);
}


// CBasePlayer::CanEnterVehicle  (line 6313, @0x00000000022e46f0, libserver.so)
// calls: CBaseCombatCharacter::GetActiveWeapon
// callers: CBasePlayer::GetInVehicle, CBaseServerVehicle::HandlePassengerEntry
bool __fastcall CBasePlayer::CanEnterVehicle(CBasePlayer *const this, IServerVehicle *pVehicle, int nRole)
{
  CBaseCombatWeapon *ActiveWeapon; // rax

  if ( (*(pVehicle->_vptr_IVehicle + 1))(pVehicle, nRole) == 0
    && ((*(pVehicle->_vptr_IVehicle + 4))(pVehicle, nRole) != 0
     || (ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this)) == 0
     || (*(ActiveWeapon->_vptr_IHandleEntity + 279))(ActiveWeapon) != 0)
    && (*(this->_vptr_IHandleEntity + 139))(this) != 0 )
  {
    return ((this->m_iEFlags >> 20) ^ 1) & 1;
  }
  else
  {
    return 0;
  }
}


// CBasePlayer::GetInVehicle  (line 6343, @0x00000000022e4780, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetCollisionGroup, ToggleDuck, operator!=, operator=, operator=<bool>, operator=<int>, operator|=<int>
// calls: CBasePlayer::CanEnterVehicle, CBasePlayer::ViewPunchReset, CBaseEntity::SetAbsVelocity, CBaseEntity::SetMoveType, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles, CBaseEntity::SetParent, CCollisionProperty::SetCollisionGroup, CBaseEntity::RemoveFlag, SafeGetViewVectors, CBaseEntity::AddEffects, CBaseCombatCharacter::GetActiveWeapon (13 total)
// strings: "PlayerEnteredVehicle"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePlayer::GetInVehicle(CBasePlayer *const this, IServerVehicle *pVehicle, int nRole)
{
  bool CanEnterVehicle; // r14
  CBaseEntity *v8; // r15
  float v9; // xmm1_4
  void (__fastcall *v10)(CBasePlayer *const, const CViewVectors *); // r12
  const CViewVectors *ViewVectors; // rax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  int (**vptr_IHandleEntity)(...); // rax
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // cx
  CBaseCombatWeapon *ActiveWeapon; // rax
  CNetworkVarBase<unsigned int,CPlayerLocalData::NetworkVar_m_iHideHUD> *p_m_iHideHUD; // r8
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int angles; // [rsp+0h] [rbp-60h]
  unsigned int vOrigin; // [rsp+8h] [rbp-58h]
  Vector vSeatOrigin; // [rsp+10h] [rbp-50h] BYREF
  QAngle qSeatAngles; // [rsp+20h] [rbp-40h] BYREF

  CanEnterVehicle = CBasePlayer::CanEnterVehicle(this, pVehicle, nRole);
  if ( CanEnterVehicle )
  {
    v8 = (*(pVehicle->_vptr_IVehicle + 9))(pVehicle);
    if ( (*(pVehicle->_vptr_IVehicle + 4))(pVehicle, nRole) == 0 )
    {
      ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
      if ( ActiveWeapon != 0 )
        (*(ActiveWeapon->_vptr_IHandleEntity + 283))(ActiveWeapon, 0);
      p_m_iHideHUD = &this->m_Local.m_iHideHUD;
      v22 = this->m_Local.m_iHideHUD.m_Value | 1;
      if ( this->m_Local.m_iHideHUD.m_Value != v22 )
      {
        angles = this->m_Local.m_iHideHUD.m_Value | 1;
        CPlayerLocalData::NetworkVar_m_iHideHUD::NetworkStateChanged(&this->m_Local.m_iHideHUD, -1, -1);
        v22 = angles;
        p_m_iHideHUD = &this->m_Local.m_iHideHUD;
        this->m_Local.m_iHideHUD.m_Value = angles;
      }
      v23 = v22;
      BYTE1(v23) = BYTE1(v22) | 4;
      vOrigin = v23;
      if ( v23 != v22 )
      {
        CPlayerLocalData::NetworkVar_m_iHideHUD::NetworkStateChanged(p_m_iHideHUD, -1, -1);
        this->m_Local.m_iHideHUD.m_Value = vOrigin;
      }
    }
    if ( (*(pVehicle->_vptr_IVehicle + 11))(pVehicle, nRole) == 0 )
      CBaseEntity::AddEffects(this, 32);
    (*(pVehicle->_vptr_IVehicle + 10))(pVehicle, nRole, this);
    CBasePlayer::ViewPunchReset(this, 0.0, v9);
    CBaseEntity::SetAbsVelocity(this, &vec3_origin);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NOCLIP, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    (*(gamestats->_vptr_CBaseGameStats + 35))(gamestats, this);
    (*(pVehicle->_vptr_IVehicle + 17))(pVehicle, nRole, &vSeatOrigin, &qSeatAngles);
    CBaseEntity::SetAbsOrigin(this, &vSeatOrigin);
    CBaseEntity::SetAbsAngles(this, &qSeatAngles);
    CBaseEntity::SetParent(this, v8, 0, 0);
    CCollisionProperty::SetCollisionGroup(&this->m_Collision, 13);
    CBaseEntity::RemoveFlag(this, 2);
    v10 = *(this->_vptr_IHandleEntity + 211);
    ViewVectors = SafeGetViewVectors();
    v10(this, ViewVectors);
    if ( this->m_Local.m_bDucked.m_Value )
    {
      (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Local.m_bDucked.m_Value = 0;
    }
    if ( this->m_Local.m_bDucking.m_Value )
    {
      (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 109, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Local.m_bDucking.m_Value = 0;
    }
    if ( this->m_Local.m_nDuckTimeMsecs.m_Value != 0 )
    {
      (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Local.m_nDuckTimeMsecs.m_Value = 0;
    }
    if ( this->m_Local.m_nDuckJumpTimeMsecs.m_Value != 0 )
    {
      (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 116, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Local.m_nDuckJumpTimeMsecs.m_Value = 0;
    }
    if ( this->m_Local.m_nJumpTimeMsecs.m_Value != 0 )
    {
      (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 120, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Local.m_nJumpTimeMsecs.m_Value = 0;
    }
    if ( this->m_bDuckToggled )
      this->m_bDuckToggled = 0;
    m_Index = this->m_hVehicle.m_Value.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVehicle.m_Value.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hVehicle.m_Value.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          m_pInstance = v15->m_pInstance;
      }
    }
    if ( v8 != m_pInstance )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( v8 != 0 && (m_pEntity = v8->m_pEntity) != 0 )
      {
        v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v19 = 0x7FFF;
        else
          v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hVehicle.m_Value.m_Index) = v19 | this->m_hVehicle.m_Value.m_Index & 0x8000;
        this->m_hVehicle.m_Value.m_Index = (v18 << 15) | this->m_hVehicle.m_Value.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hVehicle.m_Value.m_Index = -1;
      }
    }
    (*(g_pNotify->_vptr_INotify + 2))(g_pNotify, this, "PlayerEnteredVehicle");
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_iVehicleAnalogBias = 0;
    vptr_IHandleEntity[459](this);
  }
  return CanEnterVehicle;
}


// CBasePlayer::LeaveVehicle  (line 6433, @0x00000000022e4d70, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, MarkPVSInformationDirty, NetworkStateChanged, RemoveEffects, Set, SetCollisionGroup, SnapEyeAngles, operator!=, operator&=<int>, operator=, operator==
// calls: CBaseEntity::SetParent, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles, CBaseEntity::SetAbsVelocity, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::SetMoveType, CCollisionProperty::SetCollisionGroup, CBaseEntity::VPhysicsGetObject, CBaseCombatCharacter::GetActiveWeapon, CBasePlayer::ShowCrosshair
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::LeaveVehicle(
        CBasePlayer *const this,
        const Vector *const vecExitPoint,
        const QAngle *const vecExitAngles)
{
  unsigned __int16 v6; // cx
  int v7; // esi
  vec_t v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  __int64 v11; // rbx
  QAngle *AbsAngles; // rax
  float x; // xmm0_4
  float y; // xmm2_4
  float z; // xmm1_4
  unsigned int m_Value; // eax
  vec_t v17; // xmm0_4
  unsigned int v18; // r13d
  IPhysicsObject *Object; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  vec_t v23; // xmm0_4
  vec_t v24; // xmm0_4
  CBaseCombatWeapon *ActiveWeapon; // rax
  CBaseCombatWeapon *v26; // rax
  unsigned int nRole; // [rsp+Ch] [rbp-54h]
  Vector vNewPos; // [rsp+10h] [rbp-50h] BYREF
  QAngle qAngles; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_hVehicle.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hVehicle.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  LODWORD(v8) = (this->m_hVehicle.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
  qAngles.x = v8;
  if ( (LODWORD(v8) + 2) <= 1 )
    return;
  v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
  if ( v9 == 0 )
    return;
  v10 = &v9[v7 & 0x1FF];
  if ( v10 == 0 || LODWORD(v8) != v10->m_EHandle.m_Index || v10->m_pInstance == 0 )
    return;
  v11 = (*(this->_vptr_IHandleEntity + 347))(this);
  nRole = (*(*v11 + 16LL))(v11, this);
  CBaseEntity::SetParent(this, 0, 0, 0);
  vNewPos = *CBaseEntity::GetAbsOrigin(this);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  x = vecExitPoint->x;
  qAngles = *AbsAngles;
  if ( x != vec3_origin.x || (y = vecExitPoint->y) != vec3_origin.y )
  {
    y = vecExitPoint->y;
    z = vecExitPoint->z;
    goto LABEL_27;
  }
  z = vecExitPoint->z;
  if ( z != vec3_origin.z )
  {
LABEL_27:
    vNewPos.x = x;
    v23 = vecExitAngles->x;
    vNewPos.y = y;
    qAngles.x = v23;
    v24 = vecExitAngles->y;
    vNewPos.z = z;
    qAngles.y = v24;
    qAngles.z = vecExitAngles->z;
    goto LABEL_14;
  }
  (*(*v11 + 160LL))(v11, nRole, &vNewPos, &qAngles);
LABEL_14:
  (*(this->_vptr_IHandleEntity + 460))(this, &vNewPos);
  CBaseEntity::SetAbsOrigin(this, &vNewPos);
  CBaseEntity::SetAbsAngles(this, &qAngles);
  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  m_Value = this->m_Local.m_iHideHUD.m_Value;
  qAngles.z = 0.0;
  this->m_pl.v_angle.z = 0.0;
  v17 = qAngles.x;
  this->m_FixAngle.fixangle = 1;
  this->m_pl.v_angle.x = v17;
  this->m_pl.v_angle.y = qAngles.y;
  v18 = m_Value & 0xFFFFFFFE;
  if ( m_Value != (m_Value & 0xFFFFFFFE) )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_iHideHUD.m_Value = v18;
  }
  if ( (v18 & 0xFFFFFBFF) != v18 )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_iHideHUD.m_Value = v18 & 0xFFFFFBFF;
  }
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 8);
  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    (*(*Object + 1664LL))(Object, &vNewPos, &vec3_angle, 1);
  }
  m_Index = this->m_hVehicle.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVehicle.m_Value.m_Index) >> 9) & 0x3F];
    if ( v21 != 0 )
    {
      v22 = &v21[this->m_hVehicle.m_Value.m_Index & 0x1FF];
      if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index && v22->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hVehicle.m_Value.m_Index = -1;
      }
    }
  }
  (*(*v11 + 80LL))(v11, nRole, 0);
  if ( (*(this->_vptr_IHandleEntity + 139))(this) != 0 && CBaseCombatCharacter::GetActiveWeapon(this) != 0 )
  {
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
    if ( (*(ActiveWeapon->_vptr_IHandleEntity + 286))(ActiveWeapon) == 0 )
    {
      v26 = CBaseCombatCharacter::GetActiveWeapon(this);
      (*(v26->_vptr_IHandleEntity + 282))(v26);
      CBasePlayer::ShowCrosshair(this, 1);
    }
  }
  (*(this->_vptr_IHandleEntity + 408))(this, 0, 0, 0);
}


// CBloodSplat::~CBloodSplat  (line 6560, @0x0000000002306aa0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CBloodSplat::~CBloodSplat(CBloodSplat *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CBloodSplat::~CBloodSplat  (line 6560, @0x0000000002306ac0, libserver.so)  // inlines: ~CBloodSplat, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CBloodSplat::~CBloodSplat(CBloodSplat *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CBloodSplat::Init  (line 6569, @0x00000000022e4c10, libserver.so)  // inlines: VectorAdd, curtime, operator+
// calls: CBaseEntity::SetLocalOrigin, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles, CBaseEntity::SetNextThink
void __fastcall CBloodSplat::Init(CBloodSplat *const this, CBaseEntity *pOwner)
{
  float v4; // xmm1_4
  const QAngle *LocalAngles; // rax
  double v6; // xmm1_8
  CGlobalVars *v7; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v9; // xmm0_8
  double v10; // [rsp+0h] [rbp-30h]
  Vector vOrigin; // [rsp+10h] [rbp-20h] BYREF

  v10 = (*(pOwner->_vptr_IHandleEntity + 62))(pOwner);
  vOrigin.z = v4 + 32.0;
  vOrigin.y = *(&v10 + 1) + 0.0;
  vOrigin.x = *&v10 + 0.0;
  CBaseEntity::SetLocalOrigin(this, &vOrigin);
  LocalAngles = CBaseEntity::GetLocalAngles(pOwner);
  CBaseEntity::SetLocalAngles(this, LocalAngles);
  (*(this->_vptr_IHandleEntity + 40))(this, pOwner);
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v9) = 0;
    *&v9 = v7->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v9 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v9, v6, 0);
}


// CBloodSplat::Think  (line 6578, @0x00000000022c3500, libserver.so)  // inlines: CEntityHandle, CGameTrace, EnableInteractsWith, Get, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetInt, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, ToBasePlayer, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CGameTrace::Init, CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_BloodDecalTrace, UTIL_Remove
void __fastcall CBloodSplat::Think(CBloodSplat *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  vec_t v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CBaseEntity *m_pInstance; // r13
  const QAngle *AbsAngles; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v10; // rax
  float m_fValue; // xmm4_4
  float v12; // [rsp+4h] [rbp-17Ch]
  float v13; // [rsp+4h] [rbp-17Ch]
  float v14; // [rsp+8h] [rbp-178h]
  float v15; // [rsp+8h] [rbp-178h]
  float v16; // [rsp+Ch] [rbp-174h]
  float v17; // [rsp+Ch] [rbp-174h]
  Vector forward; // [rsp+10h] [rbp-170h] BYREF
  CTraceFilterSimple v19; // [rsp+20h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-120h] BYREF
  trace_t tr; // [rsp+B0h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  if ( g_Language.m_pParent->m_Value.m_nValue != 1 )
  {
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    LODWORD(v4) = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    ray.m_Start.x = v4;
    if ( (LODWORD(v4) + 2) <= 1
      || (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) == 0
      || (v6 = &v5[v3 & 0x1FF]) == 0
      || LODWORD(v4) != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || (*(m_pInstance->_vptr_IHandleEntity + 140))(v6->m_pInstance) == 0 )
    {
      m_pInstance = 0;
    }
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    AngleVectors(AbsAngles, &forward, 0, 0);
    v12 = forward.x * 128.0;
    v14 = forward.y * 128.0;
    v16 = 128.0 * forward.z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v13 = v12 + AbsOrigin->x;
    v15 = v14 + AbsOrigin->y;
    v17 = v16 + AbsOrigin->z;
    v10 = CBaseEntity::GetAbsOrigin(this);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_flRadius = m_fValue;
    ray.m_Delta.x = v13 - v10->x;
    ray.m_Delta.y = v15 - v10->y;
    ray.m_Delta.z = v17 - v10->z;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Start.Vector = *v10;
    CTraceFilterSimple::CTraceFilterSimple(&v19, m_pInstance, 4, 0);
    v19.m_attr.m_nInteractsWith |= 0x7001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v19, &tr);
    UTIL_BloodDecalTrace(&tr, 0);
  }
  UTIL_Remove(this);
}


// CBasePlayer::GiveNamedItem  (line 6602, @0x00000000022fc3f0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CForceSpawnGroupHandleScopeGuard, CHandle, CUtlString, CVProfScope, CVariantBase, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, GetSpawnGroupHandle, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<QAngle>, SetValue<Vector>, SetValue<int>, SetWorldTransform, Spawn, inputdata_t, operator CBaseEntity*, operator!, operator(), operator=, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CForceSpawnGroupHandleScopeGuard, ~CUtlString, ~CVProfScope, ~CVariantBase, ~inputdata_t
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::SetActiveSpawnGroupHandle, __cxa_guard_acquire, GetAmmoDef, CAmmoDef::Index, __cxa_guard_release, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CBaseEntity::GetLocalOrigin, CEntityKeyValues::SetValue<Vector> (33 total)
// strings: "Server Simulation", "Spawn", "NULL Ent in GiveNamedItem!\n"
// globals: `guard variable for'CBasePlayer::GiveNamedItem(char const*,int,bool,CBaseEntity *,bool)::nGrenadeAmmo, CBasePlayer::GiveNamedItem(char const*,int,bool,CBaseEntity *,bool)::nGrenadeAmmo, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
// local variable allocation has failed, the output may be wrong!
CBaseEntity *__fastcall CBasePlayer::GiveNamedItem(
        CBasePlayer *const this,
        const char *pszName,
        int iSubType,
        bool removeIfNotCarried,
        CBaseEntity *pSourceItem,
        bool bUseItem)
{
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // r13d
  __int64 v11; // r13
  CBaseEntity *v12; // r14
  CAmmoDef *AmmoDef; // rax
  void (__fastcall *v15)(CBasePlayer *const, __int64, _QWORD, _QWORD); // r14
  unsigned int v16; // eax
  CEntitySystem *v17; // rdi
  CUtlScratchMemoryPool *v18; // rax
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v20; // rdx
  char v21; // al
  const Vector *LocalOrigin; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // r13d
  EntityNetworkingMode_t m_nMode; // r13d
  const char *v26; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v28; // r14
  CEntityIdentity *v29; // rax
  __int16 v30; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // r13
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v34; // rdi
  CEntityInstance *v35; // rax
  CBaseEntity *v36; // r13
  void *v37; // rax
  CUtlScratchMemoryPool *v38; // rdi
  CEntityKeyValues *v39; // rbx
  const char *m_pszClassname; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  bool v43; // [rsp+1Fh] [rbp-131h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-128h]
  CForceSpawnGroupHandleScopeGuard guard; // [rsp+3Ch] [rbp-114h]
  CEntityHandle v47; // [rsp+40h] [rbp-110h] BYREF
  inputdata_t data; // [rsp+50h] [rbp-100h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+80h] [rbp-D0h] BYREF

  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  else
    m_hSpawnGroup = 0;
  if ( g_pEntitySystem != 0 )
  {
    guard.m_SaveHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    CEntitySystem::SetActiveSpawnGroupHandle(g_pEntitySystem, m_hSpawnGroup);
  }
  v11 = (*(this->_vptr_IHandleEntity + 304))(this, pszName, iSubType, removeIfNotCarried, pSourceItem);
  if ( v11 != 0 )
  {
    if ( `guard variable for'CBasePlayer::GiveNamedItem(char const*,int,bool,CBaseEntity *,bool)::nGrenadeAmmo == 0
      && __cxa_guard_acquire(&`guard variable for'CBasePlayer::GiveNamedItem(char const*,int,bool,CBaseEntity *,bool)::nGrenadeAmmo) != 0 )
    {
      AmmoDef = GetAmmoDef();
      CBasePlayer::GiveNamedItem(char const*,int,bool,CBaseEntity *,bool)::nGrenadeAmmo = CAmmoDef::Index(
                                                                                            AmmoDef,
                                                                                            "grenade");
      __cxa_guard_release(&`guard variable for'CBasePlayer::GiveNamedItem(char const*,int,bool,CBaseEntity *,bool)::nGrenadeAmmo);
    }
    if ( CBasePlayer::GiveNamedItem(char const*,int,bool,CBaseEntity *,bool)::nGrenadeAmmo != -1
      && (*(*v11 + 2872LL))(v11) == CBasePlayer::GiveNamedItem(char const*,int,bool,CBaseEntity *,bool)::nGrenadeAmmo )
    {
      v15 = *(this->_vptr_IHandleEntity + 298);
      v16 = (*(*v11 + 2872LL))(v11);
      v15(this, 1, v16, 0);
    }
    v12 = 0;
  }
  else
  {
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    v17 = g_pEntitySystem;
    spawner.m_scriptClassName.m_pString = 0;
    spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
    v18 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner.m_pContext = 0;
    spawner.m_pSpawnBatch = 0;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v17->m_entitySpawnerData;
    spawner.m_pPrevAllocator = v18;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v17);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    v20 = *&SpawnOriginOffset->m_flMatVal[0][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v20;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
    spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
    if ( g_pApplication != 0 )
      v21 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v21 = 0;
    spawner.m_bValidateKeys = v21;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, pszName);
    spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, pszName, &spawner.m_scriptClassName);
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, LocalOrigin);
    CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, &vec3_angle);
    LODWORD(data.pActivator) = 0x40000000;
    CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1775824117, &data);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    v47.m_Index = -1;
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v43 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      }
      if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
      {
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        if ( m_pszClassname != 0 )
          CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
      }
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      m_nMode = spawner.m_nMode;
      v26 = CUtlString::Get(&spawner.m_scriptClassName);
      Entity = CEntitySystem::CreateEntity(
                 g_pEntitySystem,
                 spawner.m_hSpawnGroupHandle,
                 spawner.m_pEntityClass,
                 v26,
                 m_nMode,
                 -1,
                 -1,
                 0,
                 0);
      v28 = Entity;
      if ( Entity != 0 )
      {
        v29 = Entity->m_pEntity;
        if ( v29 != 0 )
        {
          v30 = 0x7FFF;
          if ( v29->m_EHandle.m_Index != -1 )
            v30 = v29->m_EHandle.m_Index & 0x7FFF;
          v47.m_Index = (((v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1)) << 15) | v30 & 0x7FFF;
        }
        else
        {
          v47.m_Index = -1;
        }
        data.pActivator = v29;
        data.pCaller = spawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          spawner.m_hSpawnGroupHandle,
          1,
          &data,
          &spawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v28, spawner.m_pEntityKeyValues);
        if ( spawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        m_pContext = spawner.m_pContext;
        for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
        {
          m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
          pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
          if ( m_pthis != 0 || pfn != 0 )
          {
            v34 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
            if ( (pfn & 1) != 0 )
              pfn = *(pfn + *v34 - 1);
            (pfn)(v34, v28, i);
          }
        }
      }
      if ( v43 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
    }
    v35 = CEntityHandle::operator CEntityInstance *(&v47);
    v36 = v35;
    if ( v35 != 0 )
    {
      v37 = __dynamic_cast(v35, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseCombatWeapon, 0);
      if ( v37 != 0 )
        (*(*v37 + 2024LL))(v37, iSubType);
      if ( (v36->m_pEntity->m_flags & 0x200) == 0 )
        (*(v36->_vptr_IHandleEntity + 112))(v36, this);
      v12 = v36;
      if ( bUseItem )
      {
        data.pActivator = this;
        data.pCaller = this;
        data.value.m_type = 0;
        data.value.m_flags = 0;
        data.value.m_uint64 = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&data.value);
        data.value.m_type = 5;
        data.value.m_int = 0;
        data.nOutputID = 1;
        (*(v36->_vptr_IHandleEntity + 109))(v36, &data);
        CVariantBase<CVariantDefaultAllocator>::Free(&data.value);
      }
    }
    else
    {
      Msg("NULL Ent in GiveNamedItem!\n");
      v12 = 0;
    }
    v38 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
    if ( v38 == &g_pEntitySystem->m_entitySpawnerData )
    {
      m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
      if ( m_nEntitySpawnerDataUseCount == 1 )
        CUtlScratchMemoryPool::FreeAll(v38);
    }
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v39 = spawner.m_pEntityKeyValues;
      if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(v39);
        operator delete(v39);
      }
    }
    if ( spawner.m_scriptClassName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  }
  if ( g_pEntitySystem != 0 )
    CEntitySystem::SetActiveSpawnGroupHandle(g_pEntitySystem, guard.m_SaveHandle);
  return v12;
}


// CBasePlayer::ForceClientDllUpdate  (line 6670, @0x00000000022bb010, libserver.so)
// calls: UTIL_RestartAmbientSounds
void __fastcall CBasePlayer::ForceClientDllUpdate(CBasePlayer *const this)
{
  int (**vptr_IHandleEntity)(...); // rax

  this->m_iTrain |= 0xC0u;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_fWeapon = 0;
  this->m_fInitHUD = 1;
  vptr_IHandleEntity[407]();
  UTIL_RestartAmbientSounds();
}


// CBasePlayer::ImpulseCommands  (line 6691, @0x00000000022b7e30, libserver.so)
void __fastcall CBasePlayer::ImpulseCommands(CBasePlayer *const this)
{
  ;
}


// CBasePlayer::CheatImpulseCommands  (line 6797, @0x00000000022c8360, libserver.so)  // inlines: CEntityHandle, CGameTrace, CUtlSymbolLarge, Get, GetBool, GetClassNameAsCStr, GetClassname, GetEntityName, GetEntityNameAsCStr, GetEntryIndex, GetFloat, GetHMDAvatar, GetHandleEntity, GetInt, GetSerialNumber, IndexToIdentity, Init, LookupEntity, RnCollisionAttr_t, String, ToCStr, UTIL_TraceLine, VectorAdd, VectorMultiply, operator*, operator+
// calls: CGameTrace::Init, CBaseEntity::GetLocalAngles, CBaseEntity::GetLocalOrigin, CBaseEntity::Create, Msg, CBaseEntity::GetMoveParent, CBaseEntity::GetModelName, UTIL_Remove, CGib::SpawnRandomGibs, CBasePlayer::EyeVectors, UTIL_TraceSphere, CreateEntityByName (17 total)
// strings: "weapon_cubemap", "node_viewer_large", "Classname: %s", " - Name: %s\n", "Parent: %s\n", "Model: %s\n" (28 total)
// globals: giPrecacheGrunt, gEvilImpulse101
// local variable allocation has failed, the output may be wrong!
void __fastcall CBasePlayer::CheatImpulseCommands(CBasePlayer *const this, int iImpulse)
{
  const QAngle *v3; // r12
  const Vector *v4; // rax
  __int64 v5; // rax
  const CBaseEntity *v6; // rbx
  __int64 v7; // rax
  const char *v8; // rsi
  double v9; // xmm0_8
  const char *m_pAsString; // rsi
  CBaseEntity *MoveParent; // rax
  const char *v12; // rsi
  CEntityIdentity *m_pEntity; // rax
  const char *v14; // rsi
  CEntityInstance *v15; // rax
  unsigned __int64 v16; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v18; // xmm1_4
  int v19; // xmm1_4
  CBaseEntity *EntityByName; // rax
  const QAngle *v21; // r12
  const Vector *v22; // rax
  const QAngle *LocalAngles; // r12
  const Vector *LocalOrigin; // rax
  unsigned __int16 v25; // dx
  int v26; // esi
  uint32 v27; // eax
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  __int64 v30; // rax
  float v31; // xmm1_4
  int v32; // xmm1_4
  const QAngle *v33; // r12
  const Vector *v34; // rax
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // [rsp-10h] [rbp-114h]
  float v38; // [rsp-Ch] [rbp-110h]
  float v40; // [rsp-8h] [rbp-10Ch]
  float v41; // [rsp-4h] [rbp-108h] BYREF
  int iImpulsea; // [rsp+0h] [rbp-104h]
  __int128 forward_0; // [rsp+4h] [rbp-100h] OVERLAPPED BYREF
  int v44; // [rsp+14h] [rbp-F0h]
  unsigned __int64 v45; // [rsp+1Ch] [rbp-E8h]
  __int128 forward; // [rsp+24h] [rbp-E0h] OVERLAPPED BYREF
  float v47; // [rsp+34h] [rbp-D0h]
  __int64 v48; // [rsp+3Ch] [rbp-C8h] BYREF
  trace_t tr; // [rsp+44h] [rbp-C0h] BYREF

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    memset(&tr.m_hShape, 0, 24);
    tr.m_ShapeAttributes.m_nInteractsExclude = 0x700000000000000LL;
    CGameTrace::Init(&v48);
    if ( iImpulse == 108 )
    {
      Warning("BaseNPCs do not exist in this mod.\n");
    }
    else if ( iImpulse > 108 )
    {
      if ( iImpulse == 197 )
      {
        LocalAngles = CBaseEntity::GetLocalAngles(this);
        LocalOrigin = CBaseEntity::GetLocalOrigin(this);
        CBaseEntity::Create("node_viewer_human", LocalOrigin, LocalAngles, 0);
      }
      else if ( iImpulse > 197 )
      {
        if ( iImpulse == 202 )
        {
          CBasePlayer::EyeVectors(this, &v41, 0, 0);
          v37 = v41 * 128.0;
          v38 = *&iImpulsea * 128.0;
          v40 = 128.0 * *&forward_0;
          *&v16 = (*(this->_vptr_IHandleEntity + 164))(this);
          vptr_IHandleEntity = this->_vptr_IHandleEntity;
          v45 = v16;
          *&forward = v18;
          *(&forward + 3) = v38 + *(&v16 + 1);
          v47 = v18 + v40;
          *(&forward + 2) = v37 + *&v16;
          *(&forward_0 + 1) = (vptr_IHandleEntity[164])(this);
          v44 = v19;
          UTIL_TraceSphere(
            (&forward_0 + 8),
            (&forward + 8),
            phys_traceline_radius.m_pParent->m_Value.m_fValue,
            0x7001u,
            this,
            4,
            &v48);
          if ( tr.plane.dist != 1.0 )
          {
            EntityByName = CreateEntityByName("bloodsplat", -1);
            DispatchSpawn(EntityByName, 0);
          }
        }
        else if ( iImpulse == 203 )
        {
          v15 = (*(this->_vptr_IHandleEntity + 529))(this, 1);
          if ( v15 != 0 )
            UTIL_Remove(v15);
        }
      }
      else if ( iImpulse == 195 )
      {
        v21 = CBaseEntity::GetLocalAngles(this);
        v22 = CBaseEntity::GetLocalOrigin(this);
        CBaseEntity::Create("node_viewer_fly", v22, v21, 0);
      }
      else if ( iImpulse == 196 )
      {
        v3 = CBaseEntity::GetLocalAngles(this);
        v4 = CBaseEntity::GetLocalOrigin(this);
        CBaseEntity::Create("node_viewer_large", v4, v3, 0);
      }
    }
    else if ( iImpulse == 101 )
    {
      gEvilImpulse101 = 1;
      (*(this->_vptr_IHandleEntity + 511))(this, 1);
      if ( this->m_hPropHMDAvatar.m_Value.m_Index == -1 )
      {
        v25 = 0x7FFF;
        v26 = 0x7FFF;
      }
      else
      {
        v25 = this->m_hPropHMDAvatar.m_Value.m_Index & 0x7FFF;
        v26 = v25;
      }
      v27 = (this->m_hPropHMDAvatar.m_Value.m_Index >> 15 << 15) | v25 & 0x7FFF;
      DWORD2(forward) = v27;
      if ( v27 + 2 <= 1
        || (v28 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v26 >> 9]) == 0
        || (v29 = &v28[v26 & 0x1FF]) == 0
        || v27 != v29->m_EHandle.m_Index
        || v29->m_pInstance == 0 )
      {
        CBaseCombatCharacter::GiveAmmo(this, 255, "Pistol", 0);
        CBaseCombatCharacter::GiveAmmo(this, 255, "AR2", 0);
        CBaseCombatCharacter::GiveAmmo(this, 5, "AR2AltFire", 0);
        CBaseCombatCharacter::GiveAmmo(this, 255, "SMG1", 0);
        CBaseCombatCharacter::GiveAmmo(this, 255, "Buckshot", 0);
        CBaseCombatCharacter::GiveAmmo(this, 3, "smg1_grenade", 0);
        CBaseCombatCharacter::GiveAmmo(this, 3, "rpg_round", 0);
        CBaseCombatCharacter::GiveAmmo(this, 5, "grenade", 0);
        CBaseCombatCharacter::GiveAmmo(this, 32, "357", 0);
        CBaseCombatCharacter::GiveAmmo(this, 16, "XBowBolt", 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_smg1", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_frag", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_crowbar", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_pistol", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_ar2", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_shotgun", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_physcannon", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_bugbait", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_rpg", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_357", 0, 1, 0, 0);
        (*(this->_vptr_IHandleEntity + 466))(this, "weapon_crossbow", 0, 1, 0, 0);
      }
      if ( CBaseEntity::GetHealth(this) <= 99 )
        (*(this->_vptr_IHandleEntity + 91))(this, 0, 25.0);
      gEvilImpulse101 = 0;
    }
    else if ( iImpulse > 101 )
    {
      if ( iImpulse == 102 )
      {
        CGib::SpawnRandomGibs(this, 1, GibType_e::GIB_HUMAN);
      }
      else if ( iImpulse == 106 )
      {
        v5 = (*(this->_vptr_IHandleEntity + 529))(this, 1);
        v6 = v5;
        if ( v5 != 0 )
        {
          v7 = *(v5 + 8);
          v8 = "";
          if ( *(v7 + 32) != 0 )
            v8 = *(v7 + 32);
          *&v9 = Msg("Classname: %s", v8).m128_u64[0];
          m_pAsString = v6->m_pEntity->m_name.u.m_pAsString;
          if ( m_pAsString != 0 )
            Msg(" - Name: %s\n", m_pAsString);
          else
            Msg(" - Name: No Targetname\n", v9);
          if ( CBaseEntity::GetMoveParent(v6) != 0 )
          {
            MoveParent = CBaseEntity::GetMoveParent(v6);
            v12 = "";
            m_pEntity = MoveParent->m_pEntity;
            if ( m_pEntity->m_name.u.m_Id != 0 )
              v12 = m_pEntity->m_name.u.m_pAsString;
            Msg("Parent: %s\n", v12);
          }
          CBaseEntity::GetModelName(&forward + 1, v6);
          v14 = "";
          if ( *(&forward + 1) != 0 )
            v14 = *(&forward + 1);
          Msg("Model: %s\n", v14);
          if ( v6->m_iGlobalname.u.m_Id != 0 )
            Msg("Globalname: %s\n", v6->m_iGlobalname.u.m_pAsString);
        }
      }
    }
    else if ( iImpulse == 76 )
    {
      if ( giPrecacheGrunt != 0 )
      {
        v30 = (*(this->_vptr_IHandleEntity + 165))(this);
        v45 = UTIL_YawToVector(*(v30 + 4), v31).m128i_u64[0];
        LODWORD(forward) = v32;
        v33 = CBaseEntity::GetLocalAngles(this);
        v34 = CBaseEntity::GetLocalOrigin(this);
        v35 = (128.0 * *&forward) + v34->z;
        v36 = (*&v45 * 128.0) + v34->x;
        *(&forward + 3) = (*(&v45 + 1) * 128.0) + v34->y;
        v47 = v35;
        *(&forward + 2) = v36;
        CBaseEntity::Create("NPC_human_grunt", (&forward + 8), v33, 0);
      }
      else
      {
        giPrecacheGrunt = 1;
        Msg("You must now restart to use Grunt-o-matic.\n");
      }
    }
    else if ( iImpulse == 81 )
    {
      (*(this->_vptr_IHandleEntity + 466))(this, "weapon_cubemap", 0, 1, 0, 0);
    }
  }
}


// CBasePlayer::ClientCommand  (line 7013, @0x00000000022e24c0, libserver.so)  // inlines: Arg, atoi, entindex, operator[]
// calls: V_stricmp_fast, CEntityInstance::GetEntityIndex, V_atoi, UTIL_PlayerByIndex, CBasePlayer::DumpPerfToRecipient, strtol
// callers: CBaseMultiplayerPlayer::ClientCommand
// strings: "vehicleRole", "hltv_spectate", "playerperf"
bool __fastcall CBasePlayer::ClientCommand(CBasePlayer *const this, const CCommand *const args)
{
  const char *v3; // r12
  char hltv; // r12
  int v7; // r12d
  CEntityIndex v8; // r14d
  int32 v9; // eax
  const char *v10; // rdi
  const char *v11; // rdi
  const char *v12; // rdi
  CBasePlayer *v13; // rax
  const char *v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rbx

  v3 = "";
  if ( args->m_nArgc > 0 )
    v3 = args->m_ppArgv[0];
  if ( V_stricmp_fast(v3, "vehicleRole") != 0 )
  {
    if ( V_stricmp_fast(v3, "hltv_spectate") != 0 )
    {
      if ( V_stricmp_fast(v3, "playerperf") != 0 )
        return 0;
      v7 = -1;
      v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      if ( args->m_nArgc > 1 )
      {
        v9 = V_atoi(args->m_ppArgv[1]);
        v8.m_Data = gpGlobals->maxClients;
        if ( v9 <= v8.m_Data )
        {
          v10 = "";
          if ( args->m_nArgc > 1 )
            v10 = args->m_ppArgv[1];
          v8.m_Data = 1;
          if ( V_atoi(v10) > 0 )
          {
            v11 = "";
            if ( args->m_nArgc > 1 )
              v11 = args->m_ppArgv[1];
            v8.m_Data = V_atoi(v11);
          }
        }
        v7 = -1;
        if ( args->m_nArgc > 2 )
        {
          v7 = 1;
          if ( V_atoi(args->m_ppArgv[2]) > 1 )
          {
            v12 = "";
            if ( args->m_nArgc > 2 )
              v12 = args->m_ppArgv[2];
            v7 = V_atoi(v12);
          }
        }
      }
      v13 = UTIL_PlayerByIndex(v8);
      if ( v13 != 0 )
        CBasePlayer::DumpPerfToRecipient(v13, this, v7);
    }
    else if ( this->m_iTeamNum.m_Value != 1 )
    {
      hltv = this->m_pl.hltv;
      if ( hltv != 0 )
      {
        (*(this->_vptr_IHandleEntity + 400))(this, 1);
        (*(this->_vptr_IHandleEntity + 70))(this, 1);
        (*(this->_vptr_IHandleEntity + 432))(this, 6);
        return hltv;
      }
      return 0;
    }
  }
  else
  {
    if ( args->m_nArgc != 2 )
      return 0;
    hltv = (*(this->_vptr_IHandleEntity + 346))(this);
    if ( hltv != 0 )
    {
      v14 = "";
      if ( args->m_nArgc > 1 )
        v14 = args->m_ppArgv[1];
      v15 = strtol(v14, 0, 10);
      v16 = (*(this->_vptr_IHandleEntity + 347))(this);
      v17 = v16;
      if ( v16 != 0 && (*(*v16 + 8LL))(v16, v15) == 0 )
      {
        (*(this->_vptr_IHandleEntity + 458))(this, &vec3_origin, &vec3_angle);
        (*(this->_vptr_IHandleEntity + 457))(this, v17, v15);
        return hltv;
      }
    }
  }
  return 1;
}


// CBasePlayer::BumpWeapon  (line 7337, @0x00000000022bb040, libserver.so)  // inlines: GetBool, GetClassNameAsCStr, GetClassname, GetInt, String
// calls: CBaseCombatWeapon::GetOwner, UTIL_ItemCanBeTouchedByPlayer, UTIL_Remove, CBaseEntity::AddEffects
// globals: gEvilImpulse101
bool __fastcall CBasePlayer::BumpWeapon(CBasePlayer *const this, CBaseCombatWeapon *pWeapon)
{
  CBaseCombatCharacter *Owner; // rax
  char m_bPreventWeaponPickup; // bl
  char v6; // bl
  char v8; // r14
  __int64 (__fastcall *v9)(CBasePlayer *const, const char *, _QWORD); // rbx
  unsigned int v10; // eax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi

  Owner = CBaseCombatWeapon::GetOwner(pWeapon);
  m_bPreventWeaponPickup = this->m_bPreventWeaponPickup;
  if ( m_bPreventWeaponPickup != 0 )
    return 0;
  if ( Owner == 0 && (*(this->_vptr_IHandleEntity + 306))(this, pWeapon) != 0 )
  {
    v8 = (*(g_pGameRules->_vptr_CGameRules + 91))(g_pGameRules, this, pWeapon);
    if ( v8 != 0 )
    {
      if ( hl2_episodic.m_pParent->m_Value.m_nValue != 0 )
      {
        if ( !UTIL_ItemCanBeTouchedByPlayer(pWeapon, this) && gEvilImpulse101 == 0 )
          return 0;
      }
      else if ( (*(pWeapon->_vptr_IHandleEntity + 179))(pWeapon, this, 552961, 0) == 0
             && (this->m_fFlags.m_Value & 0x8000) == 0 )
      {
        return 0;
      }
      v9 = *(this->_vptr_IHandleEntity + 304);
      v10 = (*(pWeapon->_vptr_IHandleEntity + 252))(pWeapon);
      m_pEntity = pWeapon->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      if ( v9(this, m_pAsString, v10) == 0 )
      {
        (*(pWeapon->_vptr_IHandleEntity + 382))(pWeapon);
        (*(pWeapon->m_Collision._vptr_ICollideable + 16))(&pWeapon->m_Collision);
        CBaseEntity::AddEffects(pWeapon, 32);
        (*(this->_vptr_IHandleEntity + 307))(this, pWeapon);
        v6 = (*(this->_vptr_IHandleEntity + 346))(this);
        if ( v6 == 0 )
          return v8;
        (*(pWeapon->_vptr_IHandleEntity + 283))(pWeapon, 0);
        return v6;
      }
      m_bPreventWeaponPickup = (*(this->_vptr_IHandleEntity + 308))(this, pWeapon);
      if ( m_bPreventWeaponPickup != 0 && (*(pWeapon->_vptr_IHandleEntity + 277))(pWeapon) == 0 )
        goto LABEL_16;
      return 0;
    }
  }
  if ( gEvilImpulse101 == 0 )
    return 0;
LABEL_16:
  UTIL_Remove(pWeapon);
  return m_bPreventWeaponPickup;
}


// CBasePlayer::RemovePlayerItem  (line 7432, @0x0000000002301ec0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseCombatCharacter::GetActiveWeapon, CBaseCombatCharacter::Weapon_Detach, CBasePlayer::ResetAutoaim, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
bool __fastcall CBasePlayer::RemovePlayerItem(CBasePlayer *const this, CBaseCombatWeapon *pItem)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  CBaseCombatWeapon *m_pInstance; // rcx
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  double v11; // xmm1_8

  if ( CBaseCombatCharacter::GetActiveWeapon(this) == pItem )
  {
    CBasePlayer::ResetAutoaim(this);
    (*(pItem->_vptr_IHandleEntity + 283))(pItem, 0);
    CBaseEntity::SetNextThink(pItem, COERCE_DOUBLE(3212836864LL), v11, 0);
    CBaseEntity::ThinkSet(pItem, 0LL, 0.0, 0, 0);
  }
  if ( this->m_hLastWeapon.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hLastWeapon.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  m_pInstance = 0;
  v7 = (this->m_hLastWeapon.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v7 + 2 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v5 & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( pItem == m_pInstance )
    (*(this->_vptr_IHandleEntity + 403))(this, 0);
  return CBaseCombatCharacter::Weapon_Detach(this, pItem);
}


// CBasePlayer::ShowCrosshair  (line 7452, @0x00000000022e4d00, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<int>
// callers: CBasePlayer::LeaveVehicle, CBaseServerVehicle::SetPassenger, CBaseServerVehicle::HandlePassengerExit
void __fastcall CBasePlayer::ShowCrosshair(CBasePlayer *const this, bool bShow)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_Local.m_iHideHUD.m_Value;
  if ( bShow )
  {
    v4 = m_Value & 0xFFFFFEFF;
    if ( m_Value == (m_Value & 0xFFFFFEFF) )
      return;
  }
  else
  {
    v4 = m_Value | 0x100;
    if ( m_Value == (m_Value | 0x100) )
      return;
  }
  (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_Local.m_iHideHUD.m_Value = v4;
}


// CBasePlayer::BodyTarget  (line 7474, @0x00000000022b8660, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall CBasePlayer::BodyTarget(CBasePlayer *const this, const Vector *const posSrc, bool bNoisy)
{
  float v6; // xmm1_4
  float *v9; // rax
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  float v12; // r12d
  float v13; // r13d
  const Vector *AbsOrigin; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  float v17; // xmm1_4
  float v18; // [rsp+Ch] [rbp-44h]
  float v19; // [rsp+Ch] [rbp-44h]
  double v20; // [rsp+20h] [rbp-30h]
  float v21; // [rsp+28h] [rbp-28h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (*(this->_vptr_IHandleEntity + 346))(this) != 0 )
  {
    v15 = (*(this->_vptr_IHandleEntity + 347))(this);
    v16 = (*(*v15 + 72LL))(v15);
    v20 = (*(*v16 + 1352LL))(v16, posSrc, bNoisy);
    v21 = v17;
  }
  else if ( bNoisy )
  {
    v18 = (*(*random_valve + 8LL))(random_valve, 0.69999999, 1.0);
    v9 = (*(this->_vptr_IHandleEntity + 171))(this);
    v10 = *v9;
    v11 = *(v9 + 1);
    *v10.m128i_i32 = *v10.m128i_i32 * v18;
    *v11.m128i_i32 = *v11.m128i_i32 * v18;
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    v19 = v18 * v9[2];
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    *(&v20 + 1) = v13 + AbsOrigin->y;
    v21 = v19 + AbsOrigin->z;
    *&v20 = v12 + AbsOrigin->x;
  }
  else
  {
    v20 = (*(this->_vptr_IHandleEntity + 164))(this);
    v21 = v6;
  }
  *&result.x = v20;
  result.z = v21;
  return result;
}


// CBasePlayer::UpdateClientData  (line 7502, @0x00000000022c25a0, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUserMessageResetHUD_t, FindGameEvent<CUserMessageResetHUD_t>, FindOrCreateGameEvent<CUserMessageResetHUD_t>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, PostEvent<CUserMessageResetHUD_t>, Set, operator CEntityInstance*, operator&=<int>, operator=<bool>, operator[], operator|=<int>, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB, ~CUserMessageResetHUD_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageResetHUD::CUserMessageResetHUD, CUserMessageResetHUD::~CUserMessageResetHUD, CRecipientFilter::~CRecipientFilter, CBaseEntity::GetHealth, _Unwind_Resume, __stack_chk_fail
// globals: gInitHUD, IGameEventSystem::FindOrCreateGameEvent<CUserMessageResetHUD_t>(bool)::s_hEvent, CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::UpdateClientData(CBasePlayer *const this)
{
  IGameEventSystem *v2; // r13
  void (__fastcall *v3)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  __int64 v4; // r13
  int i; // r12d
  CHandle<CBaseCombatWeapon> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  bool v11; // r12
  unsigned int m_Value; // r12d
  unsigned int v13; // eax
  int v14; // edi
  __int64 v15; // [rsp+18h] [rbp-1A8h]
  _QWORD v16[3]; // [rsp+28h] [rbp-198h] BYREF
  int v17; // [rsp+40h] [rbp-180h]
  CSingleUserRecipientFilter user; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+188h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&user);
  user._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&user, this);
  CRecipientFilter::MakeReliable(&user);
  if ( this->m_fInitHUD )
  {
    this->m_fInitHUD = 0;
    gInitHUD = 0;
    CUserMessageResetHUD::CUserMessageResetHUD(v16);
    v16[0] = off_4073D30;
    v17 = 0;
    v15 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageResetHUD_t>(bool)::s_hEvent;
    v2 = g_pGameEventSystem;
    v3 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageResetHUD_t>(bool)::s_hEvent);
    v3(v2, 0, 0, &user, v15, v16, 24);
    v16[0] = &off_4073BB0;
    CUserMessageResetHUD::~CUserMessageResetHUD(v16);
    if ( !this->m_fGameHUDInitialized )
    {
      (*(g_pGameRules->_vptr_CGameRules + 64))(g_pGameRules, this);
      (*(this->_vptr_IHandleEntity + 377))(this);
      this->m_fGameHUDInitialized = 1;
    }
  }
  (*(this->_vptr_IHandleEntity + 467))(this);
  v4 = 0;
  for ( i = 0; i < this->m_hMyWeapons.m_Vector.m_Size; ++v4 )
  {
    v6 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v4];
    m_Index = v6->m_Index;
    if ( v6->m_Index + 2 > 1 )
    {
      v8 = v6->m_Index;
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[v8 & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
          (*(v10->m_pInstance->_vptr_IHandleEntity + 256))(v10->m_pInstance, this);
      }
    }
    ++i;
  }
  v11 = 0;
  if ( (this->m_bitsDamageType & 0x20000) != 0 && this->m_nPoisonDmg > this->m_nPoisonRestored )
    v11 = CBaseEntity::GetHealth(this) <= 99;
  if ( v11 != this->m_Local.m_bPoisoned.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 138, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bPoisoned.m_Value = v11;
  }
  if ( this->m_iBonusChallenge.m_Value != 0 )
  {
    m_Value = this->m_Local.m_iHideHUD.m_Value;
  }
  else
  {
    if ( this->m_iBonusProgress.m_Value != 0 )
      goto LABEL_21;
    v13 = this->m_Local.m_iHideHUD.m_Value;
    if ( (v13 & 0x800) != 0 )
      goto LABEL_21;
    m_Value = v13 | 0x800;
    if ( v13 == (v13 | 0x800) )
      goto LABEL_21;
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v14 = this->m_iBonusChallenge.m_Value;
    this->m_Local.m_iHideHUD.m_Value = m_Value;
    if ( v14 == 0 )
      goto LABEL_21;
  }
  if ( (m_Value & 0x800) != 0 && (m_Value & 0xFFFFF7FF) != m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_iHideHUD.m_Value = m_Value & 0xFFFFF7FF;
  }
LABEL_21:
  (*(g_pGameRules->_vptr_CGameRules + 123))(g_pGameRules, this);
  user._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&user);
}


// CBasePlayer::RumbleEffect  (line 7550, @0x00000000022bb5e0, libserver.so)
void __fastcall CBasePlayer::RumbleEffect(
        CBasePlayer *const this,
        unsigned __int8 index,
        unsigned __int8 rumbleData,
        unsigned __int8 rumbleFlags)
{
  if ( (*(this->_vptr_IHandleEntity + 139))(this, index, rumbleData, rumbleFlags) != 0 )
    (*(this->_vptr_IHandleEntity + 521))(this);
}


// CBasePlayer::EnableControl  (line 7575, @0x00000000022e51c0, libserver.so)
// calls: CBaseEntity::RemoveFlag, CBaseEntity::AddFlag
// callers: CTriggerCamera::Disable, CTriggerCamera::Enable
void __fastcall CBasePlayer::EnableControl(CBasePlayer *const this, bool fControl)
{
  if ( fControl )
    CBaseEntity::RemoveFlag(this, 32);
  else
    CBaseEntity::AddFlag(this, 32);
}


// CBasePlayer::CheckTrainUpdate  (line 7586, @0x00000000022be580, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUserMessageTrain_t, FindGameEvent<CUserMessageTrain_t>, FindOrCreateGameEvent<CUserMessageTrain_t>, PostEvent<CUserMessageTrain_t>, set_has_position, set_position, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB, ~CUserMessageTrain_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageTrain::CUserMessageTrain, CUserMessageTrain::~CUserMessageTrain, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageTrain_t>(bool)::s_hEvent
void __fastcall CBasePlayer::CheckTrainUpdate(CBasePlayer *const this)
{
  int m_iTrain; // eax
  IGameEventSystem *v3; // r14
  void (__fastcall *v4)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  __int64 v5; // [rsp+18h] [rbp-1A8h]
  _QWORD v6[2]; // [rsp+28h] [rbp-198h] BYREF
  int v7; // [rsp+38h] [rbp-188h]
  int v8; // [rsp+40h] [rbp-180h]
  int v9; // [rsp+48h] [rbp-178h]
  CSingleUserRecipientFilter user; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+188h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( (this->m_iTrain & 0xC0) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, this);
    CRecipientFilter::MakeReliable(&user);
    CUserMessageTrain::CUserMessageTrain(v6);
    v9 = 0;
    v6[0] = off_4073F70;
    m_iTrain = this->m_iTrain;
    v7 |= 1u;
    v8 = m_iTrain & 0xF;
    v5 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageTrain_t>(bool)::s_hEvent;
    v3 = g_pGameEventSystem;
    v4 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageTrain_t>(bool)::s_hEvent);
    v4(v3, 0, 0, &user, v5, v6, 32);
    v6[0] = &off_4073DF0;
    CUserMessageTrain::~CUserMessageTrain(v6);
    this->m_iTrain &= 0xFFFFFF3F;
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


// CBasePlayer::ShouldAutoaim  (line 7607, @0x00000000022bbd80, libserver.so)  // inlines: atoi, entindex
// calls: CBaseCombatCharacter::GetActiveWeapon, CEntityInstance::GetEntityIndex, strtol
// strings: "cl_mouselook"
bool __fastcall CBasePlayer::ShouldAutoaim(CBasePlayer *const this)
{
  int v2; // ebx
  __int64 (__fastcall *v4)(IVEngineServer2 *, _QWORD, const char *); // r14
  CEntityIndex v5; // eax
  const char *v6; // rax

  LOBYTE(v2) = (*(this->_vptr_IHandleEntity + 521))(this);
  if ( v2 != 0 )
  {
    LOBYTE(v2) = 0;
    return v2;
  }
  if ( CBaseCombatCharacter::GetActiveWeapon(this) == 0 )
    return v2;
  v4 = *(*engine + 384LL);
  v5.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v6 = v4(engine, v5.m_Data, "cl_mouselook");
  if ( strtol(v6, 0, 10) != 0 )
  {
    if ( gpGlobals->maxClients <= 1 )
      return (*(g_pGameRules->_vptr_CGameRules + 53))(g_pGameRules, 3) ^ 1;
    return v2;
  }
  return 1;
}


// CBasePlayer::GetAutoaimVector  (line 7637, @0x00000000022b7e40, libserver.so)  // inlines: CEntityHandle, CHandle, GetFloat, autoaim_params_t
__int64 __fastcall CBasePlayer::GetAutoaimVector(CBasePlayer *const this, float a2, float flScale)
{
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-18h]
  float flScalea; // [rsp+3Ch] [rbp-14h]
  float m_fValue; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+44h] [rbp-Ch]
  char v11; // [rsp+48h] [rbp-8h]

  flScalea = a2;
  v7 = -1;
  v10 = -1082130432;
  v11 = 0;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  m_fValue = autoaim_max_dist.m_pParent->m_Value.m_fValue;
  vptr_IHandleEntity[488](this, &v5, m_fValue, flScale);
  return v6;
}


// CBasePlayer::GetAutoaimVector  (line 7651, @0x00000000022b7e90, libserver.so)  // inlines: CEntityHandle, CHandle, autoaim_params_t
__int64 __fastcall CBasePlayer::GetAutoaimVector(CBasePlayer *const this, double a2, float flScale, float flMaxDist)
{
  int (**vptr_IHandleEntity)(...); // rax
  autoaim_params_t params; // [rsp+20h] [rbp-30h] BYREF

  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  params.m_fScale = *&a2;
  params.m_fMaxDist = flScale;
  params.m_hAutoAimEntity.m_Index = -1;
  params.m_fMaxDeflection = -1.0;
  params.m_bOnTargetQueryOnly = 0;
  vptr_IHandleEntity[488](this, &params, a2, flScale, flMaxDist);
  return LODWORD(params.m_vecAutoAimDir.z);
}


// CBasePlayer::GetAutoaimVector  (line 7665, @0x00000000022b7ee0, libserver.so)  // inlines: CEntityHandle, CHandle, autoaim_params_t
__int64 __fastcall CBasePlayer::GetAutoaimVector(
        CBasePlayer *const this,
        double a2,
        float flScale,
        float flMaxDist,
        float flMaxDeflection,
        AimResults *pAimResults)
{
  int (**vptr_IHandleEntity)(...); // rax
  bool v8; // zf
  autoaim_params_t params; // [rsp+20h] [rbp-40h] BYREF

  params.m_hAutoAimEntity.m_Index = -1;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  params.m_bOnTargetQueryOnly = 0;
  params.m_fScale = *&a2;
  params.m_fMaxDist = flScale;
  params.m_fMaxDeflection = flMaxDist;
  vptr_IHandleEntity[488](this, &params, a2, flScale, flMaxDist, flMaxDeflection);
  v8 = !params.m_bOnTargetNatural;
  *pAimResults = AimResults::AIMRESULTS_NONE;
  if ( v8 )
  {
    if ( params.m_bAutoAimAssisting )
      *pAimResults = AimResults::AIMRESULTS_ASSISTED;
  }
  else
  {
    *pAimResults = AimResults::AIMRESULTS_ONTARGET;
  }
  return LODWORD(params.m_vecAutoAimDir.z);
}


// CBasePlayer::GetAutoaimVector  (line 7690, @0x00000000022c44b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!, operator+, operator=, operator=<bool>
// calls: AngleVectors
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::GetAutoaimVector(CBasePlayer *const this, autoaim_params_t *const params)
{
  float v4; // xmm1_4
  float v5; // r14d
  float v6; // r15d
  char v7; // al
  float v8; // xmm2_4
  double v9; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v11; // xmm1_4
  vec_t v12; // xmm1_4
  char v13; // al
  uint32 m_Index; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  vec_t v17; // xmm2_4
  float v18; // [rsp+Ch] [rbp-74h]
  double v19; // [rsp+10h] [rbp-70h]
  Vector vecShootPosition; // [rsp+20h] [rbp-60h] BYREF
  QAngle angles; // [rsp+30h] [rbp-50h]
  Vector forward; // [rsp+40h] [rbp-40h] BYREF
  QAngle v23; // [rsp+50h] [rbp-30h] BYREF

  params->m_bAutoAimAssisting = 0;
  params->m_bOnTargetNatural = 0;
  params->m_hAutoAimEntity.m_Index = -1;
  params->m_vecAutoAimPoint = vec3_invalid;
  v19 = (*(this->_vptr_IHandleEntity + 312))(this, 0);
  v18 = v4;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(v19)));
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(HIDWORD(v19)));
  v7 = (*(this->_vptr_IHandleEntity + 489))(this);
  v8 = v18;
  if ( v7 == 0 || params->m_fScale == 0.0 )
    goto LABEL_8;
  v9 = (*(this->_vptr_IHandleEntity + 311))(this, 0);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  *&vecShootPosition.x = v9;
  vecShootPosition.z = v11;
  *&angles.x = (vptr_IHandleEntity[541])(this, &vecShootPosition, params);
  angles.z = v12;
  v13 = (*(g_pGameRules->_vptr_CGameRules + 82))(g_pGameRules);
  v8 = v18;
  if ( v13 == 0 && this->m_fOnTarget.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = v18;
    this->m_fOnTarget.m_Value = 0;
  }
  m_Index = params->m_hAutoAimEntity.m_Index;
  if ( m_Index + 2 <= 1
    || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->m_hAutoAimEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v16 = &v15[params->m_hAutoAimEntity.m_Index & 0x1FF]) == 0
    || m_Index != v16->m_EHandle.m_Index
    || v16->m_pInstance == 0 )
  {
LABEL_8:
    v17 = v8 + vec3_angle.z;
    v23.y = v6 + vec3_angle.y;
    v23.z = v17;
    v23.x = v5 + vec3_angle.x;
    AngleVectors(&v23, &forward, 0, 0);
    params->m_vecAutoAimDir = forward;
  }
}


// CBasePlayer::GetAutoaimScore  (line 7774, @0x00000000022e51e0, libserver.so)  // inlines: LengthSqr, Square<float>, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: UTIL_PointOnLineNearestPoint
// callers: CBasePlayer::AutoaimDeflection
float __fastcall CBasePlayer::GetAutoaimScore(
        CBasePlayer *const this,
        const Vector *const eyePosition,
        const Vector *const viewDir,
        const Vector *const vecTarget,
        CBaseEntity *pTarget,
        float fScale,
        CBaseCombatWeapon *pActiveWeapon)
{
  double v11; // xmm0_8
  float v12; // xmm1_4
  vec_t v13; // xmm2_4
  vec_t v14; // xmm0_4
  float result; // xmm0_4
  float v16; // xmm2_4
  float targetRadiusa; // [rsp+Ch] [rbp-44h]
  Vector vEndPos; // [rsp+20h] [rbp-30h] BYREF
  Vector v20; // 0:kr00_12.12

  v11 = (*(pTarget->_vptr_IHandleEntity + 86))(pTarget);
  v12 = *&v11;
  if ( fScale == 1.0 )
  {
    if ( pActiveWeapon != 0 )
      v12 = *&v11 * (*(pActiveWeapon->_vptr_IHandleEntity + 322))(pActiveWeapon, v11, v11);
  }
  else
  {
    v12 = *&v11 * fScale;
  }
  targetRadiusa = v12 * v12;
  v13 = (viewDir->z * 8192.0) + eyePosition->z;
  v14 = (8192.0 * viewDir->x) + eyePosition->x;
  vEndPos.y = (viewDir->y * 8192.0) + eyePosition->y;
  vEndPos.z = v13;
  vEndPos.x = v14;
  v20 = UTIL_PointOnLineNearestPoint(eyePosition, &vEndPos, vecTarget, 0);
  result = 0.0;
  v16 = (((vecTarget->x - v20.x) * (vecTarget->x - v20.x)) + ((vecTarget->y - v20.y) * (vecTarget->y - v20.y)))
      + ((vecTarget->z - v20.z) * (vecTarget->z - v20.z));
  if ( targetRadiusa >= v16 )
    return 1.0 - (v16 / targetRadiusa);
  return result;
}


// CBasePlayer::AutoaimDeflection  (line 7830, @0x00000000022e5320, libserver.so)  // inlines: CGameTrace, CTraceFilterSkipTwoEntitiesAndTeammates, DotProduct, EnableInteractsWith, FastSqrt, GetEHandle, GetEntryIndex, GetFloat, GetSerialNumber, Init, Length2D, LengthSqr, NetworkStateChanged, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator-=, operator=, operator=<bool>
// calls: CGameTrace::Init, AngleVectors, CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetDamageOptions, AimTarget_ListCount, AimTarget_ListElement, VectorNormalize, CBaseCombatCharacter::GetActiveWeapon, CBasePlayer::GetAutoaimScore, VectorAngles, CBaseCombatCharacter::GetDefaultRelationshipDisposition
QAngle __fastcall CBasePlayer::AutoaimDeflection(
        CBasePlayer *const this,
        Vector *const vecSrc,
        autoaim_params_t *const params)
{
  float v6; // xmm1_4
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  char v10; // al
  __int64 v11; // rsi
  const CBaseEntity *v12; // rdx
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float m_fValue; // xmm7_4
  CBaseEntity *m_pEnt; // r15
  double v18; // xmm0_8
  double v19; // xmm1_8
  CEntityIdentity *m_pEntity; // rax
  int v23; // edx
  __int16 v24; // cx
  vec_t v25; // xmm0_4
  int v26; // eax
  float v27; // xmm2_4
  int v28; // r15d
  int v29; // r13d
  CBasePlayer *v30; // rax
  double v31; // xmm0_8
  double v32; // xmm1_8
  CBaseEntity *v33; // r14
  char v34; // al
  double v35; // xmm0_8
  double v36; // xmm1_8
  char v37; // al
  __int64 v38; // rax
  int v39; // eax
  double v40; // xmm0_8
  double v41; // xmm1_8
  char v42; // al
  double v43; // xmm0_8
  double v44; // xmm1_8
  double v45; // xmm0_8
  float v46; // xmm1_4
  float v47; // xmm4_4
  vec_t v48; // xmm3_4
  float m_fMaxDist; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm4_4
  CBaseCombatWeapon *v52; // rax
  int v53; // eax
  vec_t v54; // xmm1_4
  float AutoaimScore; // xmm0_4
  float v56; // xmm1_4
  vec_t v57; // xmm7_4
  float v58; // xmm6_4
  float v59; // xmm5_4
  bool v60; // zf
  int (**v61)(...); // rax
  float *v62; // rax
  float v63; // xmm0_4
  vec_t v64; // xmm2_4
  CEntityIdentity *v65; // rax
  int v66; // edx
  __int16 v67; // cx
  double v68; // xmm0_8
  vec_t v69; // xmm1_4
  char v70; // al
  CBaseCombatWeapon *ActiveWeapon; // rax
  float *v72; // rax
  Class_T v73; // eax
  char v74; // al
  float v75; // [rsp+8h] [rbp-268h]
  float v76; // [rsp+Ch] [rbp-264h]
  float v77; // [rsp+Ch] [rbp-264h]
  float v78; // [rsp+10h] [rbp-260h]
  float v79; // [rsp+14h] [rbp-25Ch]
  float score; // [rsp+18h] [rbp-258h]
  float scorea; // [rsp+18h] [rbp-258h]
  CBaseCombatWeapon *scorec; // [rsp+18h] [rbp-258h]
  float scoreb; // [rsp+18h] [rbp-258h]
  autoaim_params_t *paramsa; // [rsp+28h] [rbp-248h]
  Vector *vecSrca; // [rsp+30h] [rbp-240h]
  CBaseEntity *bestent; // [rsp+38h] [rbp-238h]
  float bestscore; // [rsp+40h] [rbp-230h]
  float maxDeflection; // [rsp+44h] [rbp-22Ch]
  float eyeAngles; // [rsp+58h] [rbp-218h]
  float eyeAngles_4; // [rsp+5Ch] [rbp-214h]
  float eyeAngles_4a; // [rsp+5Ch] [rbp-214h]
  float eyeAngles_4b; // [rsp+5Ch] [rbp-214h]
  float eyeAngles_4c; // [rsp+5Ch] [rbp-214h]
  float eyeAngles_4d; // [rsp+5Ch] [rbp-214h]
  Vector bestdir; // [rsp+80h] [rbp-1F0h] BYREF
  Vector v_forward; // [rsp+90h] [rbp-1E0h] BYREF
  Vector v_right; // [rsp+A0h] [rbp-1D0h] BYREF
  Vector v_up; // [rsp+B0h] [rbp-1C0h] BYREF
  QAngle bestang; // [rsp+C0h] [rbp-1B0h] BYREF
  Vector center; // [rsp+D0h] [rbp-1A0h]
  Vector dir; // [rsp+E0h] [rbp-190h] BYREF
  CTraceFilterSkipTwoEntitiesAndTeammates traceFilter; // [rsp+F0h] [rbp-180h] BYREF
  Ray_t angles; // [rsp+140h] [rbp-130h] BYREF
  trace_t tr; // [rsp+190h] [rbp-E0h] BYREF
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  if ( this->m_fOnTarget.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fOnTarget.m_Value = 0;
  }
  *&angles.m_Start.x = (*(this->_vptr_IHandleEntity + 312))(this, 0);
  eyeAngles = angles.m_Start.x;
  v7 = (vec3_angle.x + angles.m_Start.x) + this->m_vecAutoAim.x;
  v8 = (v6 + vec3_angle.z) + this->m_vecAutoAim.z;
  angles.m_Start.y = (angles.m_Start.y + vec3_angle.y) + this->m_vecAutoAim.y;
  angles.m_Start.x = v7;
  angles.m_Start.z = v8;
  AngleVectors(&angles, &v_forward, &v_right, &v_up);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  bestdir = v_forward;
  bestang = vec3_angle;
  v10 = vptr_IHandleEntity[346](this);
  v12 = 0;
  if ( v10 != 0 )
    v12 = (*(this->_vptr_IHandleEntity + 349))(this, v11, 0);
  CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities(&traceFilter, this, v12, 4);
  traceFilter._vptr_CTraceFilter = off_40736F0;
  x = vecSrc->x;
  y = vecSrc->y;
  z = vecSrc->z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  angles.m_Delta.x = ((bestdir.x * 16384.0) + x) - x;
  angles.m_Delta.y = ((bestdir.y * 16384.0) + y) - y;
  angles.m_Start.w = 0.0;
  memset(&angles.m_Delta.w, 0, 36);
  angles.m_Delta.z = ((16384.0 * bestdir.z) + z) - z;
  angles.m_flRadius = m_fValue;
  angles.m_Start.x = x;
  angles.m_Start.y = y;
  angles.m_Start.z = z;
  angles.m_IsRay = 1;
  angles.m_IsSwept = (((angles.m_Delta.x * angles.m_Delta.x) + (angles.m_Delta.y * angles.m_Delta.y))
                    + (angles.m_Delta.z * angles.m_Delta.z)) != 0.0;
  traceFilter.m_attr.m_nInteractsWith |= 0x185003uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &angles, &traceFilter, &tr);
  m_pEnt = tr.m_pEnt;
  if ( tr.m_pEnt != 0
    && CBaseEntity::GetDamageOptions(tr.m_pEnt) != DamageOptions_t::DAMAGE_NO
    && (*(m_pEnt->_vptr_IHandleEntity + 139))(m_pEnt, v18, v19, 0.0) != 0 )
  {
    if ( this->m_nWaterLevel.m_Value == 3 )
    {
      if ( m_pEnt->m_nWaterLevel.m_Value == 0 )
        goto LABEL_7;
    }
    else if ( m_pEnt->m_nWaterLevel.m_Value == 3 )
    {
      goto LABEL_7;
    }
    if ( (*(m_pEnt->_vptr_IHandleEntity + 85))(m_pEnt, this) != 0 )
    {
      if ( !m_pEnt->m_bIsNPC
        || (*(g_pGameRules->_vptr_CGameRules + 71))(g_pGameRules) <= 0
        || (v73 = (*(m_pEnt->_vptr_IHandleEntity + 47))(m_pEnt),
            CBaseCombatCharacter::GetDefaultRelationshipDisposition(this, v73) == Disposition_t::D_HT) )
      {
        if ( (m_pEnt->m_fFlags.m_Value & 0x10000) != 0 && !this->m_fOnTarget.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 2632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_fOnTarget.m_Value = 1;
        }
        m_pEntity = m_pEnt->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v24 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(params->m_hAutoAimEntity.m_Index) = v24 | params->m_hAutoAimEntity.m_Index & 0x8000;
          params->m_hAutoAimEntity.m_Index = (v23 << 15) | params->m_hAutoAimEntity.m_Index & 0x7FFF;
        }
        else
        {
          params->m_hAutoAimEntity.m_Index = -1;
        }
        v25 = bestdir.x;
        params->m_bAutoAimAssisting = 0;
        params->m_bOnTargetNatural = 1;
        params->m_vecAutoAimDir.x = v25;
        params->m_vecAutoAimDir.y = bestdir.y;
        params->m_vecAutoAimDir.z = bestdir.z;
        params->m_vecAutoAimPoint = tr.endpos;
      }
    }
  }
LABEL_7:
  if ( !params->m_bOnTargetQueryOnly )
  {
    maxDeflection = params->m_fMaxDeflection;
    if ( maxDeflection < 0.0 )
    {
      ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
      maxDeflection = (*(ActiveWeapon->_vptr_IHandleEntity + 321))(ActiveWeapon);
    }
    if ( !params->m_bOnTargetNatural )
    {
      v26 = AimTarget_ListCount();
      if ( v26 > 0 )
      {
        v27 = 0.0;
        v28 = 0;
        paramsa = params;
        v29 = v26;
        bestent = 0;
        bestscore = 0.0;
        vecSrca = vecSrc;
        while ( 1 )
        {
          eyeAngles_4 = v27;
          v30 = AimTarget_ListElement(v28);
          v27 = eyeAngles_4;
          v33 = v30;
          if ( v30 != this )
          {
            v34 = (*(v30->_vptr_IHandleEntity + 85))(v30, this, v31, v32, eyeAngles_4);
            v27 = eyeAngles_4;
            if ( v34 != 0 )
            {
              if ( !v33->m_bIsNPC
                || (v70 = (*(v33->_vptr_IHandleEntity + 139))(v33, v35, v36, eyeAngles_4), v27 = eyeAngles_4, v70 != 0) )
              {
                eyeAngles_4a = v27;
                v37 = (*(g_pGameRules->_vptr_CGameRules + 69))(g_pGameRules, this, v33);
                v27 = eyeAngles_4a;
                if ( v37 != 0 )
                {
                  if ( this->m_nWaterLevel.m_Value == 3 )
                  {
                    if ( v33->m_nWaterLevel.m_Value != 0 )
                    {
LABEL_31:
                      v38 = (*(v33->_vptr_IHandleEntity + 144))(v33);
                      v27 = eyeAngles_4a;
                      if ( v38 == 0
                        || (v39 = (*(this->_vptr_IHandleEntity + 344))(this, v33), v27 = eyeAngles_4a, v39 == 1)
                        || (v42 = (*(v33->_vptr_IHandleEntity + 140))(v33, v40, v41, eyeAngles_4a),
                            v27 = eyeAngles_4a,
                            v42 != 0)
                        || (v74 = (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules, v43, v44, eyeAngles_4a),
                            v27 = eyeAngles_4a,
                            v74 != 0) )
                      {
                        score = v27;
                        v45 = (*(v33->_vptr_IHandleEntity + 87))(v33);
                        *&center.x = v45;
                        v47 = v46;
                        v27 = score;
                        center.z = v46;
                        v79 = *&v45;
                        *&v45 = *&v45 - vecSrca->x;
                        dir.z = v46 - vecSrca->z;
                        v48 = *(&v45 + 1) - vecSrca->y;
                        v78 = *(&v45 + 1);
                        dir.x = *&v45;
                        dir.y = v48;
                        m_fMaxDist = paramsa->m_fMaxDist;
                        v50 = fsqrt((*&v45 * *&v45) + (v48 * v48));
                        if ( m_fMaxDist == 0.0 || v50 <= m_fMaxDist )
                        {
                          eyeAngles_4b = score;
                          scorea = v47;
                          VectorNormalize(&dir);
                          v27 = eyeAngles_4b;
                          if ( eyeAngles_4b <= (((dir.x * v_forward.x) + (dir.y * v_forward.y)) + (dir.z * v_forward.z)) )
                          {
                            v51 = scorea;
                            if ( (v33->m_fFlags.m_Value & 0x400) != 0 )
                              goto LABEL_45;
                            v76 = eyeAngles_4b;
                            eyeAngles_4c = ((dir.x * v_forward.x) + (dir.y * v_forward.y)) + (dir.z * v_forward.z);
                            v52 = CBaseCombatCharacter::GetActiveWeapon(this);
                            v51 = scorea;
                            v27 = v76;
                            if ( v52 == 0
                              || maxDeflection <= eyeAngles_4c
                              || eyeAngles >= 30.0
                              && eyeAngles <= 90.0
                              && (v53 = (*(g_pGameRules->_vptr_CGameRules + 71))(g_pGameRules),
                                  v51 = scorea,
                                  v27 = v76,
                                  v53 == 2) )
                            {
LABEL_45:
                              v75 = v27;
                              v77 = v51;
                              scorec = CBaseCombatCharacter::GetActiveWeapon(this);
                              eyeAngles_4d = paramsa->m_fScale;
                              *&angles.m_Start.x = (*(v33->_vptr_IHandleEntity + 87))(v33);
                              angles.m_Start.z = v54;
                              AutoaimScore = CBasePlayer::GetAutoaimScore(
                                               this,
                                               vecSrca,
                                               &v_forward,
                                               &angles.m_Start,
                                               v33,
                                               eyeAngles_4d,
                                               scorec);
                              v27 = v75;
                              if ( bestscore < AutoaimScore )
                              {
                                scoreb = AutoaimScore;
                                v56 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
                                angles.m_IsRay = 1;
                                angles.m_Start.w = 0.0;
                                angles.m_flRadius = v56;
                                memset(&angles.m_Delta.w, 0, 36);
                                v57 = vecSrca->x;
                                v58 = vecSrca->y;
                                v59 = vecSrca->z;
                                angles.m_Delta.x = v79 - vecSrca->x;
                                angles.m_Delta.y = v78 - v58;
                                angles.m_Delta.z = v77 - v59;
                                angles.m_Start.x = v57;
                                angles.m_Start.y = v58;
                                angles.m_Start.z = v59;
                                traceFilter.m_attr.m_nInteractsWith |= 0x185003uLL;
                                angles.m_IsSwept = (((angles.m_Delta.x * angles.m_Delta.x)
                                                   + (angles.m_Delta.y * angles.m_Delta.y))
                                                  + (angles.m_Delta.z * angles.m_Delta.z)) != v75;
                                CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &angles, &traceFilter, &tr);
                                v27 = v75;
                                if ( tr.fraction == 1.0 || v33 == tr.m_pEnt )
                                {
                                  bestent = v33;
                                  bestscore = scoreb;
                                  bestdir = dir;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else if ( v33->m_nWaterLevel.m_Value != 3 )
                  {
                    goto LABEL_31;
                  }
                }
              }
            }
          }
          if ( ++v28 == v29 )
          {
            if ( bestent != 0 )
            {
              VectorAngles(&bestdir, &bestang);
              v60 = (*(this->_vptr_IHandleEntity + 346))(this) == 0;
              v61 = this->_vptr_IHandleEntity;
              if ( v60 )
              {
                v62 = (v61[165])(this);
                v63 = v62[2] - vec3_angle.z;
                v64 = bestang.y - (v62[1] - vec3_angle.y);
                bestang.x = bestang.x - (*v62 - vec3_angle.x);
                bestang.y = v64;
                bestang.z = bestang.z - v63;
              }
              else
              {
                v72 = (v61[165])(this);
                bestang.x = bestang.x - *v72;
                bestang.y = bestang.y - v72[1];
                bestang.z = bestang.z - v72[2];
              }
              if ( !this->m_fOnTarget.m_Value )
              {
                (*(this->_vptr_IHandleEntity + 22))(this, 2632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                this->m_fOnTarget.m_Value = 1;
              }
              v65 = bestent->m_pEntity;
              if ( v65 != 0 )
              {
                v66 = (v65->m_EHandle.m_Index >> 15) - (v65->m_flags & 1);
                v67 = 0x7FFF;
                if ( v65->m_EHandle.m_Index != -1 )
                  v67 = v65->m_EHandle.m_Index & 0x7FFF;
                LOWORD(paramsa->m_hAutoAimEntity.m_Index) = v67 | paramsa->m_hAutoAimEntity.m_Index & 0x8000;
                paramsa->m_hAutoAimEntity.m_Index = (v66 << 15) | paramsa->m_hAutoAimEntity.m_Index & 0x7FFF;
              }
              else
              {
                paramsa->m_hAutoAimEntity.m_Index = -1;
              }
              paramsa->m_vecAutoAimDir = bestdir;
              v68 = (*(bestent->_vptr_IHandleEntity + 169))(bestent, vecSrca, 0);
              paramsa->m_bAutoAimAssisting = 1;
              *&angles.m_Start.x = v68;
              paramsa->m_vecAutoAimPoint.z = v69;
              paramsa->m_bOnTargetNatural = 0;
              paramsa->m_vecAutoAimPoint.x = *&v68;
              paramsa->m_vecAutoAimPoint.y = angles.m_Start.y;
            }
            break;
          }
        }
      }
    }
  }
  angles.m_Start.Vector = bestang;
  *&result.x = *&bestang.x;
  result.z = bestang.z;
  return result;
}


// CBasePlayer::FindAutoAimTargets  (line 8095, @0x00000000022c50f0, libserver.so)  // inlines: CEntityHandle, CHandle, Expired, GetFloat, NetworkStateChanged, Set, atof, autoaim_params_t, curtime, entindex, operator=<bool>
// calls: CEntityInstance::GetEntityIndex, strtod
// strings: "joy_autoaimdampen"
void __fastcall CBasePlayer::FindAutoAimTargets(CBasePlayer *const this)
{
  __int64 (__fastcall *v2)(IVEngineServer2 *, _QWORD, const char *); // r13
  CEntityIndex v3; // eax
  const char *v4; // rax
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc v9; // rax
  float v10; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  bool m_bOnTargetNatural; // r12
  autoaim_params_t params; // [rsp+0h] [rbp-50h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 489))(this) != 0
    && (v2 = *(*engine + 384LL),
        v3.m_Data = CEntityInstance::GetEntityIndex(this).m_Data,
        v4 = v2(engine, v3.m_Data, "joy_autoaimdampen"),
        strtod(v4, 0) > 0.0) )
  {
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
    if ( (m_flCurrentTime - this->m_AutoaimTimer.m_next) > -0.001 )
    {
      v8 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v9 = gpGlobals->m_pfnWarningFunc;
          if ( v9 != 0 )
            v9(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v10 = v8->m_flCurrentTime + 0.1;
      }
      else
      {
        v10 = 0.1;
      }
      this->m_AutoaimTimer.m_next = v10;
      params.m_hAutoAimEntity.m_Index = -1;
      params.m_fMaxDeflection = -1.0;
      params.m_fScale = 1.0;
      params.m_bOnTargetQueryOnly = 1;
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      params.m_fMaxDist = autoaim_max_dist.m_pParent->m_Value.m_fValue;
      vptr_IHandleEntity[488](this, &params);
      m_bOnTargetNatural = params.m_bOnTargetNatural;
      if ( params.m_bOnTargetNatural != this->m_Local.m_bAutoAimTarget.m_Value )
      {
        (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 146, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_Local.m_bAutoAimTarget.m_Value = m_bOnTargetNatural;
      }
    }
  }
  else if ( this->m_Local.m_bAutoAimTarget.m_Value )
  {
    (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 146, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Local.m_bAutoAimTarget.m_Value = 0;
  }
}


// CBasePlayer::ResetAutoaim  (line 8128, @0x0000000002301c00, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageCrosshairAngle_t, CUserMessagePB, FindGameEvent<CUserMessageCrosshairAngle_t>, FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>, Init, NetworkStateChanged, PostEvent<CUserMessageCrosshairAngle_t>, Set, mutable_angcrosshair, operator=<bool>, set_has_angcrosshair, set_has_x, set_has_z, set_x, set_y, set_z, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageCrosshairAngle_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CUserMessageCrosshairAngle::CUserMessageCrosshairAngle, CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle, CRecipientFilter::~CRecipientFilter, operator new, CMsgQAngle::CMsgQAngle, __stack_chk_fail, operator delete, CEventPosterBase<CUserMessageCrosshairAngle_t, 255>::~CEventPosterBase, _Unwind_Resume
// callers: CBasePlayer::SelectItem, CBasePlayer::Weapon_Switch, CBasePlayer::RemoveAllItems, CBasePlayer::RemovePlayerItem
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>(bool)::s_hEvent
void __fastcall CBasePlayer::ResetAutoaim(CBasePlayer *const this)
{
  CMsgQAngle *v2; // rax
  int v3; // edx
  __int64 v4; // r8
  IGameEventSystem *v5; // r14
  void (__fastcall *v6)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CMsgQAngle *v7; // r14
  __int64 v8; // [rsp+10h] [rbp-1B0h]
  unsigned int v9; // [rsp+1Ch] [rbp-1A4h]
  _QWORD v10[2]; // [rsp+28h] [rbp-198h] BYREF
  int v11; // [rsp+38h] [rbp-188h]
  CMsgQAngle *v12; // [rsp+40h] [rbp-180h]
  unsigned int v13; // [rsp+48h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+188h] [rbp-38h]

  this->m_vecAutoAim.x = 0.0;
  this->m_vecAutoAim.y = 0.0;
  this->m_vecAutoAim.z = 0.0;
  v15 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, this);
  CUserMessageCrosshairAngle::CUserMessageCrosshairAngle(v10);
  v11 |= 1u;
  v13 = 0;
  v10[0] = off_40738B0;
  v2 = v12;
  if ( v12 == 0 )
  {
    v7 = operator new(0x28u);
    CMsgQAngle::CMsgQAngle(v7);
    v12 = v7;
    v2 = v7;
  }
  v3 = *(v2 + 4);
  *(v2 + 6) = 0;
  *(v2 + 7) = 0;
  v4 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>(bool)::s_hEvent;
  *(v2 + 8) = 0;
  *(v2 + 4) = v3 | 7;
  v8 = v4;
  v5 = g_pGameEventSystem;
  v9 = v13;
  v6 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v4);
  v6(v5, v9, 0, &filter, v8, v10, 32);
  v10[0] = &off_4073730;
  CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle(v10);
  if ( this->m_fOnTarget.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fOnTarget.m_Value = 0;
  }
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CBasePlayer::Weapon_Drop  (line 8152, @0x00000000022c4ee0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetViewModel, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseCombatCharacter::GetActiveWeapon, CBaseCombatCharacter::Weapon_Drop, CBaseCombatCharacter::SwitchToNextBestWeapon
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::Weapon_Drop(
        CBasePlayer *const this,
        CBaseCombatWeapon *pWeapon,
        const Vector *pvecTarget,
        const Vector *pVelocity)
{
  CBaseCombatWeapon *ActiveWeapon; // rax
  bool v9; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx

  ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
  v9 = ActiveWeapon == pWeapon;
  if ( pWeapon != 0 )
  {
    if ( ActiveWeapon != pWeapon )
    {
      CBaseCombatCharacter::Weapon_Drop(this, pWeapon, pvecTarget, pVelocity);
      return;
    }
    (*(pWeapon->_vptr_IHandleEntity + 270))(pWeapon, 185);
    CBaseCombatCharacter::Weapon_Drop(this, pWeapon, pvecTarget, pVelocity);
  }
  else
  {
    CBaseCombatCharacter::Weapon_Drop(this, 0, pvecTarget, pVelocity);
    if ( !v9 )
      return;
  }
  if ( !CBaseCombatCharacter::SwitchToNextBestWeapon(this, 0) )
  {
    m_Index = this->m_hViewModel.m_Value[0].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewModel.m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->m_hViewModel.m_Value[0].m_Index & 0x1FF];
        if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
          (*(v12->m_pInstance->_vptr_IHandleEntity + 257))(v12->m_pInstance, 32);
      }
    }
  }
}


// CBasePlayer::Weapon_DropSlot  (line 8187, @0x00000000022e6170, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::Weapon_DropSlot(CBasePlayer *const this, int weaponSlot)
{
  __int64 v4; // r12
  CHandle<CBaseCombatWeapon> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r14

  if ( this->m_hMyWeapons.m_Vector.m_Size > 0 )
  {
    v4 = 0;
    do
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
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 345))(v9->m_pInstance) == weaponSlot )
              (*(this->_vptr_IHandleEntity + 309))(this, m_pInstance, 0, 0);
          }
        }
      }
      ++v4;
    }
    while ( v4 < this->m_hMyWeapons.m_Vector.m_Size );
  }
}


// CBasePlayer::Weapon_Equip  (line 8210, @0x00000000022bb800, libserver.so)
// calls: CBaseCombatCharacter::Weapon_Equip
void __fastcall CBasePlayer::Weapon_Equip(CBasePlayer *const this, CBaseCombatWeapon *pWeapon)
{
  CBaseCombatCharacter::Weapon_Equip(this, pWeapon);
  if ( (*(g_pGameRules->_vptr_CGameRules + 58))(g_pGameRules, this, pWeapon) != 0 )
    (*(this->_vptr_IHandleEntity + 310))(this, pWeapon, 0);
}


// CBasePlayer::ShouldDropActiveWeaponWhenKilled  (line 8231, @0x00000000022b7f50, libserver.so)  // inlines: GameRules
bool __fastcall CBasePlayer::ShouldDropActiveWeaponWhenKilled(CBasePlayer *const this)
{
  bool result; // al

  result = 0;
  if ( g_pGameRules != 0 )
    return (*(g_pGameRules->_vptr_CGameRules + 112))(g_pGameRules, this) != 13;
  return result;
}


// CBasePlayer::HasNamedPlayerItem  (line 8240, @0x00000000022e6240, libserver.so)  // inlines: FStrEq, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, String, _V_strcmp, operator CEntityInstance*
// calls: strcmp, CEntityHandle::operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CBasePlayer::HasNamedPlayerItem(CBasePlayer *const this, const char *pszItemName)
{
  int m_Size; // eax
  CHandle<CBaseCombatWeapon> *m_pMemory; // rbx
  CConcreteEntityList *v5; // r15
  __int64 v6; // r13
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const char *m_pAsString; // rsi

  m_Size = this->m_hMyWeapons.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory;
  v5 = CEntityHandle::gm_pEntityList;
  v6 = &m_pMemory[m_Size - 1 + 1];
  do
  {
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v7 = v5->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[m_pMemory->m_Index & 0x1FF];
        if ( v8 != 0 && m_pMemory->m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        {
          m_pAsString = v8->m_pInstance->m_pEntity->m_designerName.u.m_pAsString;
          if ( m_pAsString == 0 )
            m_pAsString = "";
          if ( pszItemName == m_pAsString || strcmp(pszItemName, m_pAsString) == 0 )
            return CEntityHandle::operator CEntityInstance *(m_pMemory);
        }
      }
    }
    ++m_pMemory;
  }
  while ( m_pMemory != v6 );
  return 0;
}


// CBasePlayer::ChangeTeam  (line 8264, @0x00000000022beff0, libserver.so)  // inlines: CreateEvent, GetTeamNumber, GetUserID, IsDisconnecting, entindex
// calls: GetGlobalTeam, CEntityInstance::GetEntityIndex, CBaseEntity::GetTeam, CBaseCombatCharacter::ChangeTeam, Warning
// strings: "oldteam", "autoteam", "isbot", "CBasePlayer::ChangeTeam( %d ) - invalid team index.\n"
void __fastcall CBasePlayer::ChangeTeam(CBasePlayer *const this, int iTeamNum, bool bAutoTeam, bool bSilent)
{
  __int64 v8; // rax
  __int64 v9; // r13
  CEntityIndex v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rax
  void (__fastcall *v13)(__int64, char *, __int64); // r14
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, const char *, _QWORD); // r14
  unsigned __int8 v16; // al
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  void (__fastcall *v19)(__int64, char *, _QWORD); // [rsp+8h] [rbp-38h]

  if ( GetGlobalTeam(iTeamNum) != 0 )
  {
    if ( iTeamNum != this->m_iTeamNum.m_Value )
    {
      v8 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_team", 0, 0);
      v9 = v8;
      if ( v8 != 0 )
      {
        v19 = *(*v8 + 112LL);
        v10.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        v11 = (*(*engine + 224LL))(engine, (v10.m_Data - 1));
        v19(v9, "userid", v11);
        (*(*v9 + 112LL))(v9, "team", iTeamNum);
        (*(*v9 + 112LL))(v9, "oldteam", this->m_iTeamNum.m_Value);
        (*(*v9 + 112LL))(v9, "disconnect", this->m_iConnected == PlayerConnectedState::PlayerDisconnecting);
        (*(*v9 + 112LL))(v9, "autoteam", bAutoTeam);
        (*(*v9 + 112LL))(v9, "silent", bSilent);
        v12 = *v9;
        if ( this->m_iTeamNum.m_Value != 0 )
        {
          (*(v12 + 136))(v9, "name", "");
        }
        else
        {
          v13 = *(v12 + 136);
          v14 = (*(this->_vptr_IHandleEntity + 106))(this);
          v13(v9, "name", v14);
        }
        v15 = *(*v9 + 104LL);
        v16 = (*(this->_vptr_IHandleEntity + 100))(this);
        v15(v9, "isbot", v16 ^ 1u);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v9, 0);
      }
      if ( CBaseEntity::GetTeam(this) != 0 )
      {
        Team = CBaseEntity::GetTeam(this);
        (*(Team->_vptr_IHandleEntity + 217))(Team, this);
      }
      if ( iTeamNum != 0 )
      {
        GlobalTeam = GetGlobalTeam(iTeamNum);
        (*(GlobalTeam->_vptr_IHandleEntity + 216))(GlobalTeam, this);
      }
      CBaseCombatCharacter::ChangeTeam(this, iTeamNum);
    }
  }
  else
  {
    Warning("CBasePlayer::ChangeTeam( %d ) - invalid team index.\n", iTeamNum);
  }
}


// CBasePlayer::LockPlayerInPlace  (line 8327, @0x00000000022e6340, libserver.so)
// calls: CBaseEntity::AddFlag, CBaseEntity::SetMoveType
// callers: CBasePlayer::SetOrResetInitialState
void __fastcall CBasePlayer::LockPlayerInPlace(CBasePlayer *const this)
{
  int (**vptr_IHandleEntity)(...); // rax

  if ( this->m_iPlayerLocked == 0 )
  {
    CBaseEntity::AddFlag(this, 16416);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_iPlayerLocked = 1;
    vptr_IHandleEntity[407](this);
  }
}


// CBasePlayer::UnlockPlayer  (line 8345, @0x00000000022e63a0, libserver.so)
// calls: CBaseEntity::RemoveFlag, CBaseEntity::SetMoveType
void __fastcall CBasePlayer::UnlockPlayer(CBasePlayer *const this)
{
  if ( this->m_iPlayerLocked != 0 )
  {
    CBaseEntity::RemoveFlag(this, 16416);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    this->m_iPlayerLocked = 0;
  }
}


// CBasePlayer::ClearUseEntity  (line 8357, @0x00000000022c21b0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator->, operator=
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePlayer::ClearUseEntity(CBasePlayer *const this, CBaseEntity *pOnlyClearThisUseEntity)
{
  char v4; // r12
  unsigned __int16 v6; // dx
  int v7; // esi
  CEntityInstance *m_pInstance; // rdi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx

  v4 = (*(this->_vptr_IHandleEntity + 478))(this);
  if ( v4 == 0 || pOnlyClearThisUseEntity != 0 && pOnlyClearThisUseEntity != (*(this->_vptr_IHandleEntity + 514))(this) )
    return 0;
  if ( this->m_hUseEntity.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hUseEntity.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  m_pInstance = 0;
  v9 = (this->m_hUseEntity.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
  if ( v9 + 2 > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v10 != 0 )
    {
      v11 = &v10[v7 & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  (*(m_pInstance->_vptr_IHandleEntity + 108))(m_pInstance, this, this, 0, 0.0);
  m_Index = this->m_hUseEntity.m_Value.m_Index;
  if ( m_Index + 2 <= 1 )
    return v4;
  v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUseEntity.m_Value.m_Index) >> 9) & 0x3F];
  if ( v13 == 0 )
    return v4;
  v14 = &v13[this->m_hUseEntity.m_Value.m_Index & 0x1FF];
  if ( v14 == 0 || m_Index != v14->m_EHandle.m_Index || v14->m_pInstance == 0 )
    return v4;
  (*(this->_vptr_IHandleEntity + 22))(this, 2708, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_hUseEntity.m_Value.m_Index = -1;
  return v4;
}


// CBasePlayer::HideViewModels  (line 8373, @0x00000000022e63f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetViewModel, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CGameUI::InputActivate, CMovementSpeedMod::InputSpeedMod
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::HideViewModels(CBasePlayer *const this)
{
  int v1; // r12d
  CNetworkArrayBase<CHandle<CBaseViewModel>,2,CBasePlayer::NetworkVar_m_hViewModel> *p_m_hViewModel; // rbx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  v1 = 2;
  p_m_hViewModel = &this->m_hViewModel;
  do
  {
    if ( p_m_hViewModel->m_Value[0].m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hViewModel->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[p_m_hViewModel->m_Value[0].m_Index & 0x1FF];
        if ( v4 != 0 && p_m_hViewModel->m_Value[0].m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
          (*(v4->m_pInstance->_vptr_IHandleEntity + 252))(v4->m_pInstance, 0, 0);
      }
    }
    p_m_hViewModel = (p_m_hViewModel + 4);
    --v1;
  }
  while ( v1 != 0 );
}


// CStripWeapons::~CStripWeapons  (line 8387, @0x0000000002306a00, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CStripWeapons::~CStripWeapons(CStripWeapons *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CStripWeapons::~CStripWeapons  (line 8387, @0x0000000002306a20, libserver.so)  // inlines: ~CPointEntity, ~CStripWeapons
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CStripWeapons::~CStripWeapons(CStripWeapons *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CStripWeapons::GetEntityClass  (line 8389, @0x00000000023045f0, libserver.so)
CEntityClass *__cdecl CStripWeapons::GetEntityClass()
{
  return g_pEntityCStripWeaponsClass;
}


// CStripWeapons::Schema_DynamicBinding  (line 8389, @0x0000000002304600, libserver.so)
// globals: CStripWeapons::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CStripWeapons::Schema_DynamicBinding(const CStripWeapons *const this)
{
  return CStripWeapons::s_pSchemaBinding;
}


// CStripWeapons::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 8389, @0x0000000002304610, libserver.so)
// globals: CStripWeapons::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CStripWeapons::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CStripWeapons::CEntityInstanceEntityClass *const this)
{
  return CStripWeapons::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CStripWeapons::CEntityInstanceEntityClass::DestructInstance  (line 8389, @0x0000000002304620, libserver.so)  // inlines: Destruct<CStripWeapons>
void __fastcall CStripWeapons::CEntityInstanceEntityClass::DestructInstance(
        CStripWeapons::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CStripWeapons::CEntityInstanceEntityClass::FreeInstance  (line 8389, @0x0000000002304640, libserver.so)
void __fastcall CStripWeapons::CEntityInstanceEntityClass::FreeInstance(
        CStripWeapons::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CStripWeapons::CEntityInstanceEntityClass::CanAllocate  (line 8389, @0x0000000002304660, libserver.so)
bool __fastcall CStripWeapons::CEntityInstanceEntityClass::CanAllocate(
        const CStripWeapons::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CStripWeapons::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 8389, @0x0000000002304670, libserver.so)
// globals: CStripWeapons::s_pSchemaBinding
const ISchemaBinding *__fastcall CStripWeapons::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CStripWeapons::CEntityInstanceEntityClass *const this)
{
  return CStripWeapons::s_pSchemaBinding;
}


// CStripWeapons::CEntityInstanceEntityClass::AllocateInstance  (line 8389, @0x0000000002305f00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CStripWeapons::CEntityInstanceEntityClass::AllocateInstance(
        CStripWeapons::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CStripWeapons::CEntityInstanceEntityClass::ConstructInstance  (line 8389, @0x00000000023063b0, libserver.so)  // inlines: CPointEntity, CStripWeapons, Construct<CStripWeapons>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CStripWeapons::CEntityInstanceEntityClass::ConstructInstance(
        CStripWeapons::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4088570;
  }
  return p;
}


// CStripWeapons::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 8389, @0x0000000002309170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CStripWeapons::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CStripWeapons::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CStripWeapons::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 8389, @0x0000000002309190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CStripWeapons::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CStripWeapons::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CStripWeapons::GetEntityClassInternal  (line 8389, @0x0000000002315210, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "player_weaponstrip", "CStripWeapons"
// globals: `guard variable for'CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass, CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CStripWeapons::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo, CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo
CEntityClass *__cdecl CStripWeapons::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass) != 0 )
  {
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_designerName.u.m_Id = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass._vptr_CEntityClass = off_3F79390;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_ComponentOffsets.m_Size = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_AllHelpers.m_Size = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_classInputs.m_Size = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_classOutputs.m_Size = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_requiredEHandle.m_Index = -1;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_hNetworkSerializer = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pBaseClassInfo = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pClassInfo = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_flags = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_nAllHelpersFlags = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pScriptClassDesc = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pInputs = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_nInputCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pOutputs = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_nOutputCount = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pGameClass = 0;
    CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass._vptr_CEntityClass = off_40884F0;
    __cxa_guard_release(&`guard variable for'CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass);
    __cxa_atexit(
      CStripWeapons::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass,
      &_dso_handle);
  }
  if ( g_pEntityCStripWeaponsClass != 0 )
    return &CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass;
  if ( `guard variable for'CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo,
      "CStripWeapons",
      "player_weaponstrip",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo);
  }
  CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pClassInfo = &CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo;
  CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pBaseClassInfo = CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo.m_pBaseClassInfo;
  g_pEntityCStripWeaponsClass = &CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass;
  CStripWeapons::GetEntityClassInfo(void)::g_EntityCStripWeaponsClassInfo.m_pClass = &CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass;
  CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCStripWeaponsClass->m_pComponentOverrides = 0;
  return &CStripWeapons::GetEntityClassInternal(void)::g_EntityCStripWeaponsClass;
}


// CStripWeapons::GetDataDescMap  (line 8400, @0x00000000022b7f80, libserver.so)
// globals: CStripWeapons::m_DataMap
datamap_t *__fastcall CStripWeapons::GetDataDescMap(CStripWeapons *const this)
{
  return &CStripWeapons::m_DataMap;
}


// CStripWeapons::AddDatadescMetadataKeys  (line 8400, @0x00000000022e6480, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CStripWeapons::GetEntityClass(void)
void __fastcall CStripWeapons::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CStripWeapons::GetEntityClass);
}


// CStripWeapons::GetBaseMap  (line 8400, @0x00000000022e64a0, libserver.so)
datamap_t *__cdecl CStripWeapons::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CStripWeapons>  (line 8400, @0x00000000022e64b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CStripWeapons"
// globals: `guard variable for'DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder, CStripWeapons::GetEntityClass(void), CStripWeapons::m_DataMap, DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CStripWeapons>(CStripWeapons *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder) != 0 )
  {
    DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder.m_pszBase = "CStripWeapons";
    DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CStripWeapons>(CStripWeapons *)::nameHolder,
      &_dso_handle);
  }
  CStripWeapons::m_DataMap.dataNumFields = 4;
  CStripWeapons::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CStripWeapons::m_DataMap.dataDesc = &DataMapInit<CStripWeapons>(CStripWeapons *)::dataDesc[1];
  AddDatadescMetadataKeys(&CStripWeapons::m_DataMap, CStripWeapons::GetEntityClass);
  return &CStripWeapons::m_DataMap;
}


// CStripWeapons::InputStripWeapons  (line 8409, @0x00000000022e65f0, libserver.so)
// calls: CStripWeapons::StripWeapons
void __fastcall CStripWeapons::InputStripWeapons(CStripWeapons *const this, inputdata_t *const data)
{
  CStripWeapons::StripWeapons(this, data, 0);
}


// CStripWeapons::InputStripWeaponsAndSuit  (line 8416, @0x00000000022e6600, libserver.so)
// calls: CStripWeapons::StripWeapons
void __fastcall CStripWeapons::InputStripWeaponsAndSuit(CStripWeapons *const this, inputdata_t *const data)
{
  CStripWeapons::StripWeapons(this, data, 1);
}


// CStripWeapons::InputStripActiveWeapon  (line 8423, @0x00000000022bb220, libserver.so)
// calls: CBaseCombatCharacter::GetActiveWeapon, CBaseCombatCharacter::Weapon_Detach, UTIL_Remove, UTIL_GetLocalPlayer
void __fastcall CStripWeapons::InputStripActiveWeapon(CStripWeapons *const this, inputdata_t *const data)
{
  CBasePlayer *pActivator; // r12
  CBaseCombatWeapon *ActiveWeapon; // rax
  CEntityInstance *v5; // rbx

  if ( data->pActivator != 0 && (*(data->pActivator->_vptr_IHandleEntity + 140))(data->pActivator) != 0 )
  {
    pActivator = data->pActivator;
  }
  else
  {
    if ( (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules) != 0 )
      return;
    pActivator = UTIL_GetLocalPlayer();
  }
  if ( pActivator != 0 )
  {
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(pActivator);
    v5 = ActiveWeapon;
    if ( ActiveWeapon != 0 )
    {
      CBaseCombatCharacter::Weapon_Detach(pActivator, ActiveWeapon);
      UTIL_Remove(v5);
    }
  }
}


// CStripWeapons::InputStripWeaponByClassname  (line 8450, @0x00000000022c69e0, libserver.so)  // inlines: AssignTo, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, String, TempString, ToString, _V_strcmp, operator CEntityInstance*
// calls: strcmp, CBaseCombatCharacter::Weapon_Detach, UTIL_Remove, V_snprintf, VariantFieldTypeName, Warning, UTIL_GetLocalPlayer
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_22C6A19, CEntityHandle::gm_pEntityList, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CStripWeapons::InputStripWeaponByClassname(CStripWeapons *const this, inputdata_t *const data)
{
  int16 m_type; // ax
  char *m_pszString; // rbx
  int m_Size; // eax
  CHandle<CBaseCombatWeapon> *m_pMemory; // r13
  CConcreteEntityList *v7; // r15
  __int64 v8; // r12
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CBaseCombatWeapon *m_pInstance; // r14
  const char *m_pAsString; // rdi
  const char *v13; // rax
  const char *v14; // rcx
  const char *v15; // rdx
  double m_float; // xmm0_8
  CBasePlayer *pPlayer; // [rsp+8h] [rbp-38h]

  m_type = data->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = data->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_27;
      case 1:
        m_float = data->value.m_float;
        goto LABEL_34;
      case 3:
      case 39:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *data->value.m_pszString,
          *(data->value.m_uint64 + 4),
          *(data->value.m_uint64 + 8));
        break;
      case 4:
      case 27:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *data->value.m_pszString,
          *(data->value.m_uint64 + 4),
          *(data->value.m_uint64 + 8),
          *(data->value.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", data->value.m_uint);
        goto LABEL_40;
      case 6:
        v14 = "true";
        v15 = "%s";
        if ( data->value.m_char == 0 )
          v14 = "false";
        goto LABEL_31;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", data->value.m_char);
        goto LABEL_40;
      case 9:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          data->value.m_int,
          BYTE1(data->value.m_int),
          BYTE2(data->value.m_int),
          HIBYTE(data->value.m_int));
        break;
      case 25:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *data->value.m_pszString,
          *(data->value.m_uint64 + 4));
        break;
      case 26:
        v14 = data->value.m_pszString;
        v15 = "%lld";
LABEL_31:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v15, v14);
        goto LABEL_32;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          data->value.m_uint64);
LABEL_32:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = data->value.m_float64;
LABEL_34:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", data->value.m_uint);
LABEL_40:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v13 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v13);
LABEL_27:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  if ( m_pszString != 0 && *m_pszString != 0 )
  {
    if ( data->pActivator != 0 && (*(data->pActivator->_vptr_IHandleEntity + 140))(data->pActivator) != 0 )
    {
      pPlayer = data->pActivator;
    }
    else
    {
      if ( (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules) != 0 )
        return;
      pPlayer = UTIL_GetLocalPlayer();
    }
    if ( pPlayer != 0 )
    {
      m_Size = pPlayer->m_hMyWeapons.m_Vector.m_Size;
      if ( m_Size > 0 )
      {
        m_pMemory = pPlayer->m_hMyWeapons.m_Vector.m_Memory.m_pMemory;
        v7 = CEntityHandle::gm_pEntityList;
        v8 = &m_pMemory[m_Size - 1 + 1];
        while ( 1 )
        {
          if ( m_pMemory->m_Index + 2 > 1 )
          {
            v9 = v7->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[m_pMemory->m_Index & 0x1FF];
              if ( v10 != 0 && m_pMemory->m_Index == v10->m_EHandle.m_Index )
              {
                m_pInstance = v10->m_pInstance;
                if ( v10->m_pInstance != 0 )
                {
                  m_pAsString = m_pInstance->m_pEntity->m_designerName.u.m_pAsString;
                  if ( m_pAsString == 0 )
                    m_pAsString = "";
                  if ( strcmp(m_pAsString, m_pszString) == 0 )
                    break;
                }
              }
            }
          }
          if ( ++m_pMemory == v8 )
            return;
        }
        CBaseCombatCharacter::Weapon_Detach(pPlayer, m_pInstance);
        UTIL_Remove(m_pInstance);
      }
    }
  }
}


// CStripWeapons::StripWeapons  (line 8488, @0x00000000022e6580, libserver.so)
// calls: UTIL_GetLocalPlayer
// callers: CStripWeapons::InputStripWeapons, CStripWeapons::InputStripWeaponsAndSuit
void __fastcall CStripWeapons::StripWeapons(CStripWeapons *const this, inputdata_t *const data, bool stripSuit)
{
  CBasePlayer *pActivator; // rdi

  if ( data->pActivator != 0 && (*(data->pActivator->_vptr_IHandleEntity + 140))(data->pActivator) != 0 )
  {
    pActivator = data->pActivator;
  }
  else
  {
    if ( (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules) != 0 )
      return;
    pActivator = UTIL_GetLocalPlayer();
  }
  if ( pActivator != 0 )
    (*(pActivator->_vptr_IHandleEntity + 400))(pActivator, stripSuit);
}


// CRevertSaved::~CRevertSaved  (line 8509, @0x00000000023070a0, libserver.so)  // inlines: ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CRevertSaved::~CRevertSaved(CRevertSaved *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRevertSaved::~CRevertSaved  (line 8509, @0x00000000023070c0, libserver.so)  // inlines: ~CModelPointEntity, ~CRevertSaved
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRevertSaved::~CRevertSaved(CRevertSaved *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRevertSaved::GetEntityClass  (line 8511, @0x0000000002304680, libserver.so)
CEntityClass *__cdecl CRevertSaved::GetEntityClass()
{
  return g_pEntityCRevertSavedClass;
}


// CRevertSaved::Schema_DynamicBinding  (line 8511, @0x0000000002304690, libserver.so)
// globals: CRevertSaved::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRevertSaved::Schema_DynamicBinding(const CRevertSaved *const this)
{
  return CRevertSaved::s_pSchemaBinding;
}


// CRevertSaved::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 8511, @0x00000000023046a0, libserver.so)
// globals: CRevertSaved::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRevertSaved::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRevertSaved::CEntityInstanceEntityClass *const this)
{
  return CRevertSaved::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRevertSaved::CEntityInstanceEntityClass::DestructInstance  (line 8511, @0x00000000023046b0, libserver.so)  // inlines: Destruct<CRevertSaved>
void __fastcall CRevertSaved::CEntityInstanceEntityClass::DestructInstance(
        CRevertSaved::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRevertSaved::CEntityInstanceEntityClass::FreeInstance  (line 8511, @0x00000000023046d0, libserver.so)
void __fastcall CRevertSaved::CEntityInstanceEntityClass::FreeInstance(
        CRevertSaved::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRevertSaved::CEntityInstanceEntityClass::CanAllocate  (line 8511, @0x00000000023046f0, libserver.so)
bool __fastcall CRevertSaved::CEntityInstanceEntityClass::CanAllocate(
        const CRevertSaved::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRevertSaved::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 8511, @0x0000000002304700, libserver.so)
// globals: CRevertSaved::s_pSchemaBinding
const ISchemaBinding *__fastcall CRevertSaved::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRevertSaved::CEntityInstanceEntityClass *const this)
{
  return CRevertSaved::s_pSchemaBinding;
}


// CRevertSaved::CEntityInstanceEntityClass::AllocateInstance  (line 8511, @0x0000000002305f40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRevertSaved::CEntityInstanceEntityClass::AllocateInstance(
        CRevertSaved::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CRevertSaved::CEntityInstanceEntityClass::ConstructInstance  (line 8511, @0x00000000023064b0, libserver.so)  // inlines: CModelPointEntity, CRevertSaved, Construct<CRevertSaved>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CRevertSaved::CEntityInstanceEntityClass::ConstructInstance(
        CRevertSaved::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_4088C90;
  }
  return p;
}


// CRevertSaved::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 8511, @0x0000000002309210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRevertSaved::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRevertSaved::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CRevertSaved::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 8511, @0x0000000002309230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRevertSaved::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRevertSaved::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRevertSaved::GetEntityClassInternal  (line 8511, @0x0000000002313df0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "player_loadsaved", "CRevertSaved", "CModelPointEntity"
// globals: `guard variable for'CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass, CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRevertSaved::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo, CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo, `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo (9 total)
CEntityClass *__cdecl CRevertSaved::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass) != 0 )
  {
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_designerName.u.m_Id = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass._vptr_CEntityClass = off_3F79390;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_ComponentOffsets.m_Size = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_AllHelpers.m_Size = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_classInputs.m_Size = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_classOutputs.m_Size = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_requiredEHandle.m_Index = -1;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_hNetworkSerializer = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pBaseClassInfo = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pClassInfo = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_flags = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_nAllHelpersFlags = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pScriptClassDesc = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pInputs = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_nInputCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pOutputs = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_nOutputCount = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pGameClass = 0;
    CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass._vptr_CEntityClass = off_4088C10;
    __cxa_guard_release(&`guard variable for'CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass);
    __cxa_atexit(
      CRevertSaved::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass,
      &_dso_handle);
  }
  if ( g_pEntityCRevertSavedClass != 0 )
    return &CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass;
  if ( `guard variable for'CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo) != 0 )
  {
    if ( `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo,
        "CModelPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo,
      "CRevertSaved",
      "player_loadsaved",
      0,
      &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo);
  }
  CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pClassInfo = &CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo;
  CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pBaseClassInfo = CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo.m_pBaseClassInfo;
  g_pEntityCRevertSavedClass = &CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass;
  CRevertSaved::GetEntityClassInfo(void)::g_EntityCRevertSavedClassInfo.m_pClass = &CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass;
  CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCRevertSavedClass->m_pComponentOverrides = 0;
  return &CRevertSaved::GetEntityClassInternal(void)::g_EntityCRevertSavedClass;
}


// CRevertSaved::GetDataDescMap  (line 8537, @0x00000000022b7f90, libserver.so)
// globals: CRevertSaved::m_DataMap
datamap_t *__fastcall CRevertSaved::GetDataDescMap(CRevertSaved *const this)
{
  return &CRevertSaved::m_DataMap;
}


// CRevertSaved::AddDatadescMetadataKeys  (line 8537, @0x00000000022e6610, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRevertSaved::GetEntityClass(void)
void __fastcall CRevertSaved::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRevertSaved::GetEntityClass);
}


// CRevertSaved::GetBaseMap  (line 8537, @0x00000000022e6630, libserver.so)
datamap_t *__cdecl CRevertSaved::GetBaseMap()
{
  return &CModelPointEntity::m_DataMap;
}


// DataMapInit<CRevertSaved>  (line 8537, @0x00000000022f3790, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CRevertSaved"
// globals: `guard variable for'DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder, `guard variable for'DataMapInit<CRevertSaved>(CRevertSaved *)::dataDesc, CRevertSaved::GetEntityClass(void), CRevertSaved::m_DataMap, DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRevertSaved>(CRevertSaved *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder) != 0 )
  {
    DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_pszBase = "CRevertSaved";
    DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder,
      &_dso_handle);
  }
  CRevertSaved::m_DataMap.baseMap = &CModelPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CRevertSaved>(CRevertSaved *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRevertSaved>(CRevertSaved *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_pszBase), "LoadThink");
    m_Size = DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Size == DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CRevertSaved>(CRevertSaved *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CRevertSaved>(CRevertSaved *)::dataDesc[5].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRevertSaved>(CRevertSaved *)::dataDesc);
  }
  CRevertSaved::m_DataMap.dataNumFields = 5;
  CRevertSaved::m_DataMap.dataDesc = &DataMapInit<CRevertSaved>(CRevertSaved *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRevertSaved::m_DataMap, CRevertSaved::GetEntityClass);
  return &CRevertSaved::m_DataMap;
}


// CreatePlayerLoadSave  (line 8553, @0x00000000022e6640, libserver.so)  // inlines: SetDuration, SetHoldTime, SetLoadTime
// calls: CreateEntityByName, UTIL_SetOrigin, DispatchSpawn
// strings: "player_loadsaved"
CBaseModelEntity *__fastcall CreatePlayerLoadSave(
        double a1,
        vec_t a2,
        float a3,
        float flDuration,
        float flHoldTime,
        float flLoadTime)
{
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v7; // rbx
  Vector vOrigina; // [rsp+10h] [rbp-20h] BYREF

  *&vOrigina.x = a1;
  vOrigina.z = a2;
  EntityByName = CreateEntityByName("player_loadsaved", -1);
  v7 = EntityByName;
  if ( EntityByName != 0 )
  {
    UTIL_SetOrigin(EntityByName, &vOrigina, 0);
    DispatchSpawn(v7, 0);
    *&v7[1].m_bClientSideRagdoll.m_Value = a3;
    *&v7[1].m_iGlobalname.u.m_Id = flDuration;
    v7[1].m_flCreateTime.m_Value = flHoldTime;
  }
  return v7;
}


// CRevertSaved::Use  (line 8572, @0x00000000022c1b40, libserver.so)  // inlines: curtime
// calls: UTIL_ScreenFadeAll, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet, UTIL_GetLocalPlayer, CBaseEntity::AddFlag
// globals: CRevertSaved::LoadThink(void)
void __fastcall CRevertSaved::Use(
        CRevertSaved *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value,
        double a6,
        float a7)
{
  double v8; // xmm1_8
  double v9; // xmm0_8
  CGlobalVars *v10; // r12
  CBasePlayer *LocalPlayer; // rax
  CSource2Server *v12; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  UTIL_ScreenFadeAll(&this->m_clrRender.m_Value, this->m_HoldTime, a7, 2);
  v9 = 0.0;
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v9 = LODWORD(v10->m_flCurrentTime);
  }
  *&v9 = *&v9 + this->m_loadTime;
  CBaseEntity::SetNextThink(this, v9, v8, 0);
  CBaseEntity::ThinkSet(this, CRevertSaved::LoadThink, 0.0, 0, 0);
  LocalPlayer = UTIL_GetLocalPlayer();
  if ( LocalPlayer != 0 )
  {
    LocalPlayer->m_pl.deadflag = 1;
    CBaseEntity::AddFlag(LocalPlayer, 32800);
    v12 = g_pSource2ServerInternal;
    g_pSource2ServerInternal->m_fAutoSaveDangerousTime = 0.0;
    v12->m_fAutoSaveDangerousMinHealthToCommit = 0.0;
  }
}


// CRevertSaved::InputReload  (line 8594, @0x00000000022c1c20, libserver.so)  // inlines: curtime
// calls: UTIL_ScreenFadeAll, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet, UTIL_GetLocalPlayer, CBaseEntity::AddFlag
// globals: CRevertSaved::LoadThink(void)
void __fastcall CRevertSaved::InputReload(CRevertSaved *const this, inputdata_t *const inputdata)
{
  float v2; // xmm2_4
  double v4; // xmm1_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  CBasePlayer *LocalPlayer; // rax
  CSource2Server *v8; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  UTIL_ScreenFadeAll(&this->m_clrRender.m_Value, this->m_HoldTime, v2, 2);
  v5 = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v5 = LODWORD(v6->m_flCurrentTime);
  }
  *&v5 = *&v5 + this->m_loadTime;
  CBaseEntity::SetNextThink(this, v5, v4, 0);
  CBaseEntity::ThinkSet(this, CRevertSaved::LoadThink, 0.0, 0, 0);
  LocalPlayer = UTIL_GetLocalPlayer();
  if ( LocalPlayer != 0 )
  {
    LocalPlayer->m_pl.deadflag = 1;
    CBaseEntity::AddFlag(LocalPlayer, 32800);
    v8 = g_pSource2ServerInternal;
    g_pSource2ServerInternal->m_fAutoSaveDangerousTime = 0.0;
    v8->m_fAutoSaveDangerousMinHealthToCommit = 0.0;
  }
}


// CRevertSaved::LoadThink  (line 8617, @0x00000000022bb620, libserver.so)
// strings: "reload\n"
void __fastcall CRevertSaved::LoadThink(CRevertSaved *const this)
{
  if ( gpGlobals->maxClients == 1 )
    (*(*engine + 280LL))(engine, "reload\n");
}


// CMovementSpeedMod::~CMovementSpeedMod  (line 8634, @0x0000000002306a50, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CMovementSpeedMod::~CMovementSpeedMod(CMovementSpeedMod *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CMovementSpeedMod::~CMovementSpeedMod  (line 8634, @0x0000000002306a70, libserver.so)  // inlines: ~CMovementSpeedMod, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CMovementSpeedMod::~CMovementSpeedMod(CMovementSpeedMod *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMovementSpeedMod::GetEntityClass  (line 8636, @0x0000000002304710, libserver.so)
CEntityClass *__cdecl CMovementSpeedMod::GetEntityClass()
{
  return g_pEntityCMovementSpeedModClass;
}


// CMovementSpeedMod::Schema_DynamicBinding  (line 8636, @0x0000000002304720, libserver.so)
// globals: CMovementSpeedMod::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMovementSpeedMod::Schema_DynamicBinding(const CMovementSpeedMod *const this)
{
  return CMovementSpeedMod::s_pSchemaBinding;
}


// CMovementSpeedMod::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 8636, @0x0000000002304730, libserver.so)
// globals: CMovementSpeedMod::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMovementSpeedMod::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMovementSpeedMod::CEntityInstanceEntityClass *const this)
{
  return CMovementSpeedMod::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMovementSpeedMod::CEntityInstanceEntityClass::DestructInstance  (line 8636, @0x0000000002304740, libserver.so)  // inlines: Destruct<CMovementSpeedMod>
void __fastcall CMovementSpeedMod::CEntityInstanceEntityClass::DestructInstance(
        CMovementSpeedMod::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMovementSpeedMod::CEntityInstanceEntityClass::FreeInstance  (line 8636, @0x0000000002304760, libserver.so)
void __fastcall CMovementSpeedMod::CEntityInstanceEntityClass::FreeInstance(
        CMovementSpeedMod::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMovementSpeedMod::CEntityInstanceEntityClass::CanAllocate  (line 8636, @0x0000000002304780, libserver.so)
bool __fastcall CMovementSpeedMod::CEntityInstanceEntityClass::CanAllocate(
        const CMovementSpeedMod::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMovementSpeedMod::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 8636, @0x0000000002304790, libserver.so)
// globals: CMovementSpeedMod::s_pSchemaBinding
const ISchemaBinding *__fastcall CMovementSpeedMod::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMovementSpeedMod::CEntityInstanceEntityClass *const this)
{
  return CMovementSpeedMod::s_pSchemaBinding;
}


// CMovementSpeedMod::CEntityInstanceEntityClass::AllocateInstance  (line 8636, @0x0000000002305f80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMovementSpeedMod::CEntityInstanceEntityClass::AllocateInstance(
        CMovementSpeedMod::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CMovementSpeedMod::CEntityInstanceEntityClass::ConstructInstance  (line 8636, @0x00000000023063e0, libserver.so)  // inlines: CMovementSpeedMod, CPointEntity, Construct<CMovementSpeedMod>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CMovementSpeedMod::CEntityInstanceEntityClass::ConstructInstance(
        CMovementSpeedMod::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40893D0;
  }
  return p;
}


// CMovementSpeedMod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 8636, @0x00000000023091c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMovementSpeedMod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMovementSpeedMod::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CMovementSpeedMod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 8636, @0x00000000023091e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMovementSpeedMod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMovementSpeedMod::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMovementSpeedMod::GetEntityClassInternal  (line 8636, @0x0000000002315f50, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "player_speedmod", "CMovementSpeedMod"
// globals: `guard variable for'CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass, CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CMovementSpeedMod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo, CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo
CEntityClass *__cdecl CMovementSpeedMod::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass) != 0 )
  {
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_designerName.u.m_Id = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass._vptr_CEntityClass = off_3F79390;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_ComponentOffsets.m_Size = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_AllHelpers.m_Size = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_atomicFields,
      4);
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_classInputs.m_Size = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_classInputs.m_Memory.m_pMemory = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_classOutputs.m_Size = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_requiredEHandle.m_Index = -1;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_hNetworkSerializer = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pBaseClassInfo = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pClassInfo = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_flags = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_nAllHelpersFlags = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pScriptClassDesc = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pInputs = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_nInputCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pOutputs = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_nOutputCount = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pGameClass = 0;
    CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass._vptr_CEntityClass = off_4089350;
    __cxa_guard_release(&`guard variable for'CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass);
    __cxa_atexit(
      CMovementSpeedMod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass,
      &_dso_handle);
  }
  if ( g_pEntityCMovementSpeedModClass != 0 )
    return &CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass;
  if ( `guard variable for'CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo,
      "CMovementSpeedMod",
      "player_speedmod",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo);
  }
  CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pClassInfo = &CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo;
  CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pBaseClassInfo = CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo.m_pBaseClassInfo;
  g_pEntityCMovementSpeedModClass = &CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass;
  CMovementSpeedMod::GetEntityClassInfo(void)::g_EntityCMovementSpeedModClassInfo.m_pClass = &CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass;
  CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMovementSpeedModClass->m_pComponentOverrides = 0;
  return &CMovementSpeedMod::GetEntityClassInternal(void)::g_EntityCMovementSpeedModClass;
}


// CMovementSpeedMod::GetDataDescMap  (line 8648, @0x00000000022b7fa0, libserver.so)
// globals: CMovementSpeedMod::m_DataMap
datamap_t *__fastcall CMovementSpeedMod::GetDataDescMap(CMovementSpeedMod *const this)
{
  return &CMovementSpeedMod::m_DataMap;
}


// CMovementSpeedMod::AddDatadescMetadataKeys  (line 8648, @0x00000000022e66d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMovementSpeedMod::GetEntityClass(void)
void __fastcall CMovementSpeedMod::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMovementSpeedMod::GetEntityClass);
}


// CMovementSpeedMod::GetBaseMap  (line 8648, @0x00000000022e66f0, libserver.so)
datamap_t *__cdecl CMovementSpeedMod::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CMovementSpeedMod>  (line 8648, @0x00000000022e6700, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CMovementSpeedMod"
// globals: `guard variable for'DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder, CMovementSpeedMod::GetEntityClass(void), CMovementSpeedMod::m_DataMap, DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder) != 0 )
  {
    DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder.m_pszBase = "CMovementSpeedMod";
    DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::nameHolder,
      &_dso_handle);
  }
  CMovementSpeedMod::m_DataMap.dataNumFields = 1;
  CMovementSpeedMod::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CMovementSpeedMod::m_DataMap.dataDesc = &DataMapInit<CMovementSpeedMod>(CMovementSpeedMod *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMovementSpeedMod::m_DataMap, CMovementSpeedMod::GetEntityClass);
  return &CMovementSpeedMod::m_DataMap;
}


// CMovementSpeedMod::GetDisabledButtonMask  (line 8652, @0x00000000022e67d0, libserver.so)  // inlines: HasSpawnFlags
// callers: CMovementSpeedMod::InputSpeedMod
int __fastcall CMovementSpeedMod::GetDisabledButtonMask(CMovementSpeedMod *const this)
{
  unsigned int m_Value; // edx
  int result; // eax

  m_Value = this->m_spawnflags.m_Value;
  result = (m_Value >> 1) & 2;
  if ( (m_Value & 8) != 0 )
    result = (this->m_spawnflags.m_Value >> 1) & 2 | 4;
  if ( (m_Value & 0x10) != 0 )
    result |= 0x20u;
  if ( (m_Value & 0x20) != 0 )
    result |= 0x10000u;
  if ( (m_Value & 0x40) != 0 )
    result |= 0x801u;
  if ( (m_Value & 0x80) != 0 )
    return result | 0x200000;
  return result;
}


// CMovementSpeedMod::InputSpeedMod  (line 8691, @0x00000000022e6830, libserver.so)  // inlines: ClearActiveWeapon, Float, Get, NetworkStateChanged, Set, SetLaggedMovementValue, Weapon_GetLast, operator float, operator&=<int>, operator=<float>, operator|=<int>
// calls: CMovementSpeedMod::GetDisabledButtonMask, CBasePlayer::DisableButtons, UTIL_GetLocalPlayer, CBasePlayer::EnableButtons, CBaseCombatCharacter::GetActiveWeapon, CBaseCombatCharacter::SetActiveWeapon, CBasePlayer::HideViewModels, CEntityHandle::GetHandleEntity
void __fastcall CMovementSpeedMod::InputSpeedMod(CMovementSpeedMod *const this, inputdata_t *const data)
{
  CBasePlayer *pActivator; // rbx
  float m_float64; // xmm0_4
  int v6; // eax
  unsigned int v7; // r13d
  float m_float; // xmm0_4
  int DisabledButtonMask; // eax
  void (__fastcall *v10)(CBasePlayer *, CBaseCombatWeapon *); // r14
  CBaseCombatWeapon *v11; // rax
  CBaseCombatWeapon *v12; // rax
  CBaseCombatWeapon *HandleEntity; // rax
  CBaseCombatWeapon *ActiveWeapon; // rax
  float v15; // [rsp+Ch] [rbp-24h]

  if ( data->pActivator != 0 && (*(data->pActivator->_vptr_IHandleEntity + 140))(data->pActivator) != 0 )
  {
    pActivator = data->pActivator;
  }
  else
  {
    if ( (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules) != 0 )
      return;
    pActivator = UTIL_GetLocalPlayer();
  }
  if ( pActivator == 0 )
    return;
  if ( data->value.m_type == 34 )
    m_float64 = data->value.m_float64;
  else
    m_float64 = data->value.m_float;
  if ( m_float64 == 1.0 )
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 && CBaseCombatCharacter::GetActiveWeapon(pActivator) == 0 )
    {
      HandleEntity = CEntityHandle::GetHandleEntity(&pActivator->m_hLastWeapon.m_Value);
      CBaseCombatCharacter::SetActiveWeapon(pActivator, HandleEntity);
      if ( CBaseCombatCharacter::GetActiveWeapon(pActivator) != 0 )
      {
        ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(pActivator);
        (*(ActiveWeapon->_vptr_IHandleEntity + 282))(ActiveWeapon);
      }
    }
    (*(pActivator->_vptr_IHandleEntity + 412))(pActivator, 1);
    DisabledButtonMask = CMovementSpeedMod::GetDisabledButtonMask(this);
    CBasePlayer::EnableButtons(pActivator, DisabledButtonMask);
    if ( (this->m_spawnflags.m_Value & 2) == 0 )
      goto LABEL_14;
    v7 = pActivator->m_Local.m_iHideHUD.m_Value & 0xFFFFFFFB;
    if ( pActivator->m_Local.m_iHideHUD.m_Value == v7 )
      goto LABEL_14;
  }
  else
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      if ( CBaseCombatCharacter::GetActiveWeapon(pActivator) != 0 )
      {
        v10 = *(pActivator->_vptr_IHandleEntity + 403);
        v11 = CBaseCombatCharacter::GetActiveWeapon(pActivator);
        v10(pActivator, v11);
        v12 = CBaseCombatCharacter::GetActiveWeapon(pActivator);
        (*(v12->_vptr_IHandleEntity + 283))(v12, 0);
        CBaseCombatCharacter::SetActiveWeapon(pActivator, 0);
      }
      CBasePlayer::HideViewModels(pActivator);
    }
    if ( (*(pActivator->_vptr_IHandleEntity + 413))(pActivator) != 0 )
      (*(pActivator->_vptr_IHandleEntity + 415))(pActivator, 0);
    (*(pActivator->_vptr_IHandleEntity + 412))(pActivator, 0);
    v6 = CMovementSpeedMod::GetDisabledButtonMask(this);
    CBasePlayer::DisableButtons(pActivator, v6);
    if ( (this->m_spawnflags.m_Value & 2) == 0 )
      goto LABEL_14;
    v7 = pActivator->m_Local.m_iHideHUD.m_Value | 4;
    if ( pActivator->m_Local.m_iHideHUD.m_Value == v7 )
      goto LABEL_14;
  }
  (*(pActivator->m_Local._vptr_CPlayerLocalData + 2))(&pActivator->m_Local, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  pActivator->m_Local.m_iHideHUD.m_Value = v7;
LABEL_14:
  if ( data->value.m_type == 34 )
    m_float = data->value.m_float64;
  else
    m_float = data->value.m_float;
  if ( m_float != pActivator->m_flLaggedMovementValue.m_Value )
  {
    v15 = m_float;
    (*(pActivator->_vptr_IHandleEntity + 22))(pActivator, 3924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    pActivator->m_flLaggedMovementValue.m_Value = v15;
  }
}


// CBasePlayer::YouForgotToImplementOrDeclareServerClass  (line 8765, @0x00000000022b7fb0, libserver.so)
int __fastcall CBasePlayer::YouForgotToImplementOrDeclareServerClass(CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::GetServerClass  (line 8765, @0x00000000022c8060, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBasePlayer::GetServerClass(CBasePlayer *const this)
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


// CBasePlayer::SetupVPhysicsShadow  (line 8772, @0x00000000022e6af0, libserver.so)
void __fastcall CBasePlayer::SetupVPhysicsShadow(
        CBasePlayer *const this,
        const Vector *const vecAbsOrigin,
        const Vector *const vecAbsVelocity,
        CPhysCollide *pStandModel,
        const char *pStandHullName,
        CPhysCollide *pCrouchModel,
        const char *pCrouchHullName)
{
  ;
}


// CBasePlayer::VPhysicsUpdate  (line 8817, @0x00000000022bb2a0, libserver.so)
// calls: CBaseCombatCharacter::ApplyStressDamage
void __fastcall CBasePlayer::VPhysicsUpdate(CBasePlayer *const this, IPhysicsObject *pPhysics)
{
  float savedImpact; // [rsp+Ch] [rbp-14h]

  savedImpact = this->m_impactEnergyScale;
  this->m_impactEnergyScale = savedImpact * 0.125;
  CBaseCombatCharacter::ApplyStressDamage(this, pPhysics, 1);
  this->m_impactEnergyScale = savedImpact;
}


// CBasePlayer::PlayerSolidMask  (line 8832, @0x00000000022b7fc0, libserver.so)
uint64 __fastcall CBasePlayer::PlayerSolidMask(const CBasePlayer *const this, bool brushOnly)
{
  return !brushOnly ? 552977LL : 28689LL;
}


// CBasePlayer::ShouldSavePhysics  (line 9058, @0x00000000022b7fe0, libserver.so)
bool __fastcall CBasePlayer::ShouldSavePhysics(CBasePlayer *const this)
{
  return 0;
}


// CBasePlayer::VPhysicsDestroyObject  (line 9086, @0x00000000022b8de0, libserver.so)
// calls: CBaseEntity::VPhysicsDestroyObject
void __fastcall CBasePlayer::VPhysicsDestroyObject(CBasePlayer *const this)
{
  CBaseEntity::VPhysicsDestroyObject(this);
}


// CBasePlayer::GetFOV  (line 9163, @0x00000000022e6cc0, libserver.so)
// calls: CBasePlayer::GetFOV
// callers: CBaseCombatCharacter::IsInFieldOfView
float __fastcall CBasePlayer::GetFOV(const CBasePlayer *const this)
{
  return CBasePlayer::GetFOV(this);
}


// CBasePlayer::GetFOV  (line 9172, @0x00000000022e6b00, libserver.so)  // inlines: NetworkStateChanged, Set, SimpleSplineRemapValClamped, curtime, operator=<float>, operator==<float>, operator==<unsigned int>
// calls: CBasePlayer::CacheVehicleView, CBasePlayer::GetDefaultFOV
// callers: CBasePlayer::CalcPlayerView, CBasePlayer::GetFOVDistanceAdjustFactor, CBasePlayer::SetFOV, CBasePlayer::GetFOV, CBasePlayer::IsBoundingBoxInView, CBaseServerVehicle::GetVehicleViewPosition
float __fastcall CBasePlayer::GetFOV(CBasePlayer *const this)
{
  double v2; // xmm0_8
  signed int m_Value; // eax
  float v4; // xmm2_4
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm3_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  unsigned int v10; // r12d
  unsigned int fFOV; // [rsp+Ch] [rbp-14h]
  int fFOVa; // [rsp+Ch] [rbp-14h]

  if ( (*(this->_vptr_IHandleEntity + 347))(this) == 0
    || (CBasePlayer::CacheVehicleView(this), *&v2 = LODWORD(this->m_flVehicleViewFOV), *&v2 == 0.0) )
  {
    *&v2 = CBasePlayer::GetDefaultFOV(this);
  }
  m_Value = this->m_iFOV.m_Value;
  if ( m_Value != 0 )
    *&v2 = m_Value;
  v4 = this->m_Local.m_flFOVRate.m_Value;
  if ( v4 != 0.0 )
  {
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          fFOV = LODWORD(v2);
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v4 = this->m_Local.m_flFOVRate.m_Value;
          *&v2 = fFOV;
        }
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v8 = (m_flCurrentTime - this->m_flFOVTime.m_Value) / v4;
    v9 = 1.0;
    if ( v8 < 1.0 )
    {
      if ( v8 <= 1.0 )
      {
        v9 = 0.0;
        if ( v8 >= 0.0 )
          v9 = (3.0 * (v8 * v8)) - (((v8 * v8) + (v8 * v8)) * v8);
      }
      *&v2 = ((*&v2 - this->m_iFOVStart.m_Value) * v9) + this->m_iFOVStart.m_Value;
    }
    else
    {
      v10 = *&v2;
      if ( *&v2 != this->m_iFOVStart.m_Value )
      {
        fFOVa = LODWORD(v2);
        (*(this->_vptr_IHandleEntity + 22))(this, 2808, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v2, 0.0);
        this->m_iFOVStart.m_Value = v10;
        LODWORD(v2) = fFOVa;
      }
    }
  }
  return *&v2;
}


// CBasePlayer::GetFOVForNetworking  (line 9213, @0x00000000022e6cd0, libserver.so)  // inlines: curtime, operator==<float>, operator==<unsigned int>
// calls: CBasePlayer::CacheVehicleView, CBasePlayer::GetDefaultFOV
// callers: CBasePlayer::GetFOVDistanceAdjustFactorForNetworking
int __fastcall CBasePlayer::GetFOVForNetworking(CBasePlayer *const this)
{
  float m_flVehicleViewFOV; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  int result; // eax
  float m_Value; // xmm0_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float DefaultFOV; // xmm0_4
  int fFOV; // [rsp+Ch] [rbp-14h]

  if ( (*(this->_vptr_IHandleEntity + 347))(this) != 0
    && (CBasePlayer::CacheVehicleView(this),
        m_flVehicleViewFOV = this->m_flVehicleViewFOV,
        m_flCurrentTime = 0.0,
        m_flVehicleViewFOV != 0.0) )
  {
    result = m_flVehicleViewFOV;
  }
  else
  {
    DefaultFOV = CBasePlayer::GetDefaultFOV(this);
    m_flCurrentTime = 0.0;
    result = DefaultFOV;
  }
  m_Value = this->m_Local.m_flFOVRate.m_Value;
  if ( this->m_iFOV.m_Value != 0 )
    result = this->m_iFOV.m_Value;
  if ( m_Value != 0.0 )
  {
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          fFOV = result;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          result = fFOV;
          m_Value = this->m_Local.m_flFOVRate.m_Value;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    if ( m_Value > (m_flCurrentTime - this->m_flFOVTime.m_Value) && result >= this->m_iFOVStart.m_Value )
      return this->m_iFOVStart.m_Value;
  }
  return result;
}


// CBasePlayer::GetFOVDistanceAdjustFactorForNetworking  (line 9243, @0x00000000022e6df0, libserver.so)
// calls: CBasePlayer::GetDefaultFOV, CBasePlayer::GetFOVForNetworking
// callers: CSource2GameClients::ClientSetupVisibility
float __fastcall CBasePlayer::GetFOVDistanceAdjustFactorForNetworking(CBasePlayer *const this)
{
  int FOVForNetworking; // eax
  float defaultFOV; // [rsp+Ch] [rbp-14h]

  defaultFOV = CBasePlayer::GetDefaultFOV(this);
  FOVForNetworking = CBasePlayer::GetFOVForNetworking(this);
  if ( defaultFOV == FOVForNetworking || defaultFOV < 0.001 )
    return 1.0;
  else
    return FOVForNetworking / defaultFOV;
}


// CBasePlayer::SetDefaultFOV  (line 9261, @0x00000000022e6e60, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CGameRules::ClientSettingsChanged, CBasePlayer::OnRestore
void __fastcall CBasePlayer::SetDefaultFOV(CBasePlayer *const this, int FOV)
{
  unsigned int v3; // ebx

  v3 = FOV;
  if ( FOV == 0 )
    v3 = (*(g_pGameRules->_vptr_CGameRules + 35))(g_pGameRules);
  if ( v3 != this->m_iDefaultFOV.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDefaultFOV.m_Value = v3;
  }
}


// CBasePlayer::ModifyOrAppendPlayerCriteria  (line 9271, @0x00000000022bb2f0, libserver.so)  // inlines: ActivityList_NameForIndex, FastSqrt, GetAbsVelocity, GetClassNameAsCStr, GetClassname, Length, String, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CBaseEntity::GetHealth, UTIL_VarArgs, CResponseCriteriaSet::AppendCriteria, CBaseCombatCharacter::GetActiveWeapon, CBaseEntity::CalcAbsoluteVelocity
// strings: "playerhealth", "playerhealthfrac", "playerweapon", "playeractivity", "playerspeed", "ACT_INVALID"
void __fastcall CBasePlayer::ModifyOrAppendPlayerCriteria(CBasePlayer *const this, CResponseCriteriaSet *const set)
{
  int Health; // eax
  char *v5; // rax
  int v6; // eax
  double v7; // xmm0_8
  int v8; // r13d
  char *v9; // rax
  CBaseCombatWeapon *ActiveWeapon; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  __int64 v13; // rax
  const char *v14; // rdx
  char *v15; // rax

  Health = CBaseEntity::GetHealth(this);
  v5 = UTIL_VarArgs("%i", Health);
  CResponseCriteriaSet::AppendCriteria(set, "playerhealth", v5, 1.0);
  v6 = (*(this->_vptr_IHandleEntity + 156))(this);
  v7 = 0.0;
  if ( v6 > 0 )
  {
    v8 = CBaseEntity::GetHealth(this);
    v7 = (v8 / (*(this->_vptr_IHandleEntity + 156))(this));
  }
  v9 = UTIL_VarArgs("%.3f", v7);
  CResponseCriteriaSet::AppendCriteria(set, "playerhealthfrac", v9, 1.0);
  ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
  if ( ActiveWeapon != 0 )
  {
    m_pEntity = ActiveWeapon->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(set, "playerweapon", m_pAsString, 1.0);
  }
  else
  {
    CResponseCriteriaSet::AppendCriteria(set, "playerweapon", "none", 1.0);
  }
  if ( g_pAnimationSystem != 0 && (v13 = (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, this->m_Activity)) != 0 )
    v14 = v13;
  else
    v14 = "ACT_INVALID";
  CResponseCriteriaSet::AppendCriteria(set, "playeractivity", v14, 1.0);
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  v15 = UTIL_VarArgs(
          "%.3f",
          fsqrt(
            ((this->m_vecAbsVelocity.m_Value.x * this->m_vecAbsVelocity.m_Value.x)
           + (this->m_vecAbsVelocity.m_Value.y * this->m_vecAbsVelocity.m_Value.y))
          + (this->m_vecAbsVelocity.m_Value.z * this->m_vecAbsVelocity.m_Value.z)));
  CResponseCriteriaSet::AppendCriteria(set, "playerspeed", v15, 1.0);
}


// CBasePlayer::SetPunchAngle  (line 9326, @0x00000000022e6ec0, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex, UTIL_PlayerByIndex
// callers: CBasePlayer::SetPunchAngle
void __fastcall CBasePlayer::SetPunchAngle(CBasePlayer *const this, const QAngle *const punchAngle)
{
  CEntityIndex v3; // r15d
  int v4; // ebx
  CBasePlayer *v5; // rax
  CBasePlayer *v6; // r12

  if ( (*(this->_vptr_IHandleEntity + 139))(this, punchAngle) != 0 )
  {
    v3.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    if ( gpGlobals->maxClients > 0 )
    {
      v4 = 1;
      do
      {
        v5 = UTIL_PlayerByIndex(v4);
        v6 = v5;
        if ( v5 != 0
          && v4 != v3.m_Data
          && this == (*(v5->_vptr_IHandleEntity + 439))(v5)
          && (*(v6->_vptr_IHandleEntity + 436))(v6) == 4 )
        {
          CBasePlayer::SetPunchAngle(v6, &vec3_angle);
        }
        ++v4;
      }
      while ( gpGlobals->maxClients >= v4 );
    }
  }
}


// CBasePlayer::SetPunchAngle  (line 9348, @0x00000000022e6f70, libserver.so)  // inlines: entindex, operator[]
// calls: CEntityInstance::GetEntityIndex, UTIL_PlayerByIndex, CBasePlayer::SetPunchAngle
void __fastcall CBasePlayer::SetPunchAngle(CBasePlayer *const this, int axis, double a3, float value)
{
  int (**vptr_IHandleEntity)(...); // rax
  int v6; // ebx
  CBasePlayer *v7; // rax
  CBasePlayer *v8; // r14
  CEntityIndex index; // [rsp+Ch] [rbp-44h]
  QAngle pa; // [rsp+10h] [rbp-40h]

  pa = vec3_angle;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  *(&pa.x + axis) = LODWORD(a3);
  if ( vptr_IHandleEntity[139](this, a3, value) != 0 )
  {
    index.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    if ( gpGlobals->maxClients > 0 )
    {
      v6 = 1;
      do
      {
        v7 = UTIL_PlayerByIndex(v6);
        v8 = v7;
        if ( v7 != 0
          && v6 != index.m_Data
          && this == (*(v7->_vptr_IHandleEntity + 439))(v7)
          && (*(v8->_vptr_IHandleEntity + 436))(v8) == 4 )
        {
          CBasePlayer::SetPunchAngle(v8, &vec3_angle);
        }
        ++v6;
      }
      while ( gpGlobals->maxClients >= v6 );
    }
  }
}


// CBasePlayer::ActivateMovementConstraint  (line 9373, @0x00000000022e7040, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=, operator=<bool>, operator=<float>
// callers: CPointPlayerMoveConstraint::InputTurnOn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::ActivateMovementConstraint(
        CBasePlayer *const this,
        CBaseEntity *pEntity,
        const Vector *const vecCenter,
        float flRadius,
        float flConstraintWidth,
        float flSpeedFactor,
        bool constraintPastRadius)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  float flSpeedFactora; // [rsp+4h] [rbp-2Ch]
  float flSpeedFactorb; // [rsp+4h] [rbp-2Ch]
  float flSpeedFactorc; // [rsp+4h] [rbp-2Ch]
  float flConstraintWidtha; // [rsp+8h] [rbp-28h]
  float flConstraintWidthb; // [rsp+8h] [rbp-28h]
  float flConstraintWidthc; // [rsp+8h] [rbp-28h]
  float flConstraintWidthd; // [rsp+8h] [rbp-28h]
  float flRadiusb; // [rsp+Ch] [rbp-24h]
  float flRadiusc; // [rsp+Ch] [rbp-24h]
  float flRadiusd; // [rsp+Ch] [rbp-24h]
  float flRadiusa; // [rsp+Ch] [rbp-24h]
  float flRadiuse; // [rsp+Ch] [rbp-24h]

  m_pInstance = 0;
  m_Index = this->m_hConstraintEntity.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hConstraintEntity.m_Value.m_Index) >> 9)
                                                         & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[this->m_hConstraintEntity.m_Value.m_Index & 0x1FF];
      if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
  if ( pEntity != m_pInstance )
  {
    flSpeedFactorc = flSpeedFactor;
    flConstraintWidthd = flConstraintWidth;
    flRadiuse = flRadius;
    (*(this->_vptr_IHandleEntity + 22))(this, 3860, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    flRadius = flRadiuse;
    flConstraintWidth = flConstraintWidthd;
    flSpeedFactor = flSpeedFactorc;
    if ( pEntity != 0 && (m_pEntity = pEntity->m_pEntity) != 0 )
    {
      v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v20 = 0x7FFF;
      else
        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hConstraintEntity.m_Value.m_Index) = v20 | this->m_hConstraintEntity.m_Value.m_Index & 0x8000;
      this->m_hConstraintEntity.m_Value.m_Index = (v19 << 15) | this->m_hConstraintEntity.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hConstraintEntity.m_Value.m_Index = -1;
    }
  }
  if ( vecCenter->x == this->m_vecConstraintCenter.m_Value.x
    && vecCenter->y == this->m_vecConstraintCenter.m_Value.y
    && vecCenter->z == this->m_vecConstraintCenter.m_Value.z )
  {
    v15 = flRadius == this->m_flConstraintRadius.m_Value;
  }
  else
  {
    flSpeedFactora = flSpeedFactor;
    flConstraintWidtha = flConstraintWidth;
    flRadiusb = flRadius;
    (*(this->_vptr_IHandleEntity + 22))(this, 3864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    flRadius = flRadiusb;
    this->m_vecConstraintCenter.m_Value.x = vecCenter->x;
    flSpeedFactor = flSpeedFactora;
    v15 = flRadiusb == this->m_flConstraintRadius.m_Value;
    this->m_vecConstraintCenter.m_Value.y = vecCenter->y;
    flConstraintWidth = flConstraintWidtha;
    this->m_vecConstraintCenter.m_Value.z = vecCenter->z;
  }
  if ( v15 )
  {
    v16 = flConstraintWidth == this->m_flConstraintWidth.m_Value;
  }
  else
  {
    flSpeedFactorb = flSpeedFactor;
    flConstraintWidthb = flConstraintWidth;
    flRadiusc = flRadius;
    (*(this->_vptr_IHandleEntity + 22))(this, 3876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    flConstraintWidth = flConstraintWidthb;
    v16 = flConstraintWidthb == this->m_flConstraintWidth.m_Value;
    this->m_flConstraintRadius.m_Value = flRadiusc;
    flSpeedFactor = flSpeedFactorb;
  }
  if ( v16 )
  {
    v17 = flSpeedFactor == this->m_flConstraintSpeedFactor.m_Value;
  }
  else
  {
    flConstraintWidthc = flSpeedFactor;
    flRadiusd = flConstraintWidth;
    (*(this->_vptr_IHandleEntity + 22))(this, 3880, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    flSpeedFactor = flConstraintWidthc;
    v17 = flConstraintWidthc == this->m_flConstraintSpeedFactor.m_Value;
    this->m_flConstraintWidth.m_Value = flRadiusd;
  }
  if ( !v17 )
  {
    flRadiusa = flSpeedFactor;
    (*(this->_vptr_IHandleEntity + 22))(this, 3884, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flConstraintSpeedFactor.m_Value = flRadiusa;
  }
  if ( this->m_bConstraintPastRadius.m_Value != constraintPastRadius )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3888, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bConstraintPastRadius.m_Value = constraintPastRadius;
  }
}


// CBasePlayer::DeactivateMovementConstraint  (line 9385, @0x00000000022e7390, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=, operator=<float>
// callers: CPointPlayerMoveConstraint::InputTurnOff, CPointPlayerMoveConstraint::ConstraintThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::DeactivateMovementConstraint(CBasePlayer *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  double v5; // xmm0_8

  m_Index = this->m_hConstraintEntity.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hConstraintEntity.m_Value.m_Index) >> 9)
                                                        & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hConstraintEntity.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 3860, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hConstraintEntity.m_Value.m_Index = -1;
      }
    }
  }
  if ( this->m_flConstraintRadius.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3876, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flConstraintRadius.m_Value = 0.0;
  }
  *&v5 = LODWORD(vec3_origin.x);
  if ( vec3_origin.x != this->m_vecConstraintCenter.m_Value.x
    || (*&v5 = LODWORD(vec3_origin.y), *&v5 != this->m_vecConstraintCenter.m_Value.y)
    || (*&v5 = LODWORD(vec3_origin.z), *&v5 != this->m_vecConstraintCenter.m_Value.z) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3864, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v5);
    this->m_vecConstraintCenter.m_Value = vec3_origin;
  }
}


// CBasePlayer::DoubleCheckUseNPC  (line 9401, @0x00000000022e7500, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
CBaseEntity *__fastcall CBasePlayer::DoubleCheckUseNPC(
        CBasePlayer *const this,
        CBaseEntity *pNPC,
        const Vector *const vecSrc,
        const Vector *const vecDir)
{
  float x; // xmm3_4
  float y; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float z; // xmm4_4
  ConVar *m_pParent; // rax
  float m_fValue; // xmm7_4
  CBaseEntity *result; // rax
  CTraceFilterSimple v17; // [rsp+0h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-130h] BYREF
  trace_t tr; // [rsp+90h] [rbp-E0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  x = vecDir->x;
  ray.m_IsRay = 1;
  y = vecDir->y;
  ray.m_Start.w = 0.0;
  v10 = vecSrc->x;
  memset(&ray.m_Delta.w, 0, 36);
  v11 = vecSrc->y;
  v12 = 1024.0 * vecDir->z;
  z = vecSrc->z;
  m_pParent = phys_traceline_radius.m_pParent;
  ray.m_Delta.x = ((x * 1024.0) + v10) - v10;
  ray.m_Delta.y = ((y * 1024.0) + v11) - v11;
  ray.m_Delta.z = (v12 + z) - z;
  m_fValue = m_pParent->m_Value.m_fValue;
  ray.m_Start.x = v10;
  ray.m_flRadius = m_fValue;
  ray.m_Start.y = v11;
  ray.m_Start.z = z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v17, this, 4, 0);
  v17.m_attr.m_nInteractsWith |= 0x185003uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v17, &tr);
  if ( tr.m_pEnt == 0 )
    return pNPC;
  if ( (*(tr.m_pEnt->_vptr_IHandleEntity + 144))(tr.m_pEnt) == 0 )
    return pNPC;
  result = tr.m_pEnt;
  if ( tr.m_pEnt == pNPC )
    return pNPC;
  return result;
}


// CBasePlayer::DoImpactEffect  (line 9419, @0x00000000022bab30, libserver.so)
// calls: CBaseCombatCharacter::GetActiveWeapon, CBaseEntity::DoImpactEffect
void __fastcall CBasePlayer::DoImpactEffect(CBasePlayer *const this, trace_t *const tr, int nDamageType)
{
  CBaseCombatWeapon *ActiveWeapon; // rax

  if ( CBaseCombatCharacter::GetActiveWeapon(this) != 0 )
  {
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this);
    (*(ActiveWeapon->_vptr_IHandleEntity + 130))(ActiveWeapon, tr, nDamageType);
  }
  else
  {
    CBaseEntity::DoImpactEffect(this, tr, nDamageType);
  }
}


// CBasePlayer::InputSetHealth  (line 9432, @0x00000000022be790, libserver.so)  // inlines: Int, NetworkStateChanged, Set, operator int, operator=<int>
// calls: CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CBasePlayer::InputSetHealth(CBasePlayer *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float; // r13d
  int v5; // r12d
  int m_Value; // r14d
  CTakeDamageInfo info; // [rsp+0h] [rbp-B0h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  v5 = abs32(CBaseEntity::GetHealth(this) - m_float);
  if ( CBaseEntity::GetHealth(this) < m_float )
  {
    (*(this->_vptr_IHandleEntity + 91))(this, 0, v5);
  }
  else if ( CBaseEntity::GetHealth(this) > m_float )
  {
    m_Value = this->m_ArmorValue.m_Value;
    if ( m_Value != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3084, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ArmorValue.m_Value = 0;
    }
    CTakeDamageInfo::CTakeDamageInfo(&info, this, this, v5, 0, 0);
    CBaseEntity::TakeDamage(this, &info);
    if ( m_Value != this->m_ArmorValue.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3084, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ArmorValue.m_Value = m_Value;
    }
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
}


// CBasePlayer::InputSetHUDVisibility  (line 9456, @0x00000000022be730, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<int>
void __fastcall CBasePlayer::InputSetHUDVisibility(CBasePlayer *const this, inputdata_t *const inputdata)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_Local.m_iHideHUD.m_Value;
  if ( inputdata->value.m_char != 0 )
  {
    v4 = m_Value & 0xFFFFFFFB;
    if ( m_Value == (m_Value & 0xFFFFFFFB) )
      return;
  }
  else
  {
    v4 = m_Value | 4;
    if ( m_Value == (m_Value | 4) )
      return;
  }
  (*(this->m_Local._vptr_CPlayerLocalData + 2))(&this->m_Local, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_Local.m_iHideHUD.m_Value = v4;
}


// CBasePlayer::InputSetFogController  (line 9474, @0x00000000022c7af0, libserver.so)  // inlines: AssignTo, CEntityHandle, Entity, FieldType, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, TempString, ToString, operator CEntityInstance*, operator!=, operator=
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_22C7B35, CEntityHandle::gm_pEntityList, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBasePlayer::InputSetFogController(CBasePlayer *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pCaller; // r13
  CBaseEntity *pActivator; // r12
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rax
  CFogController *v8; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *m_pEntity; // rax
  int v13; // edx
  __int16 v14; // cx
  int m_int; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  const char *v18; // rax
  const char *v19; // rcx
  const char *v20; // rdx
  double m_float; // xmm0_8
  CFogController *pFogController; // [rsp+8h] [rbp-38h]

  m_type = inputdata->value.m_type;
  if ( m_type == 13 )
  {
    m_int = inputdata->value.m_int;
    if ( (m_int + 2) <= 1 )
      return;
    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_int >> 9) & 0x3F];
    if ( v16 == 0 )
      return;
    v17 = &v16[m_int & 0x1FF];
    if ( v17 == 0 || m_int != v17->m_EHandle.m_Index || v17->m_pInstance == 0 )
      return;
    v8 = __dynamic_cast(v17->m_pInstance, &`typeinfo for'CEntityInstance, &`typeinfo for'CFogController, 0);
    goto LABEL_7;
  }
  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_27;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_35;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_37;
      case 6:
        v19 = "true";
        v20 = "%s";
        if ( inputdata->value.m_char == 0 )
          v19 = "false";
        goto LABEL_29;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_37;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_30;
      case 33:
        v19 = inputdata->value.m_pszString;
        v20 = "%llu";
LABEL_29:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v20, v19);
LABEL_30:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_35:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_37:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v18 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v18);
LABEL_27:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pszString, this, pActivator, pCaller, 0);
  if ( EntityByName != 0 )
  {
    v8 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CFogController, 0);
LABEL_7:
    if ( v8 != 0 )
    {
      m_Index = this->m_PlayerFog.m_hCtrl.m_Value.m_Index;
      if ( m_Index + 2 <= 1
        || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_PlayerFog.m_hCtrl.m_Value.m_Index) >> 9)
                                                                 & 0x3F]) == 0
        || (v11 = &v10[this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x1FF]) == 0
        || m_Index != v11->m_EHandle.m_Index
        || v8 != v11->m_pInstance )
      {
        pFogController = v8;
        (*(this->m_PlayerFog._vptr_fogplayerparams_t + 2))(&this->m_PlayerFog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pEntity = pFogController->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v14 = 0x7FFF;
          else
            v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_PlayerFog.m_hCtrl.m_Value.m_Index) = v14 | this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x8000;
          this->m_PlayerFog.m_hCtrl.m_Value.m_Index = (v13 << 15) | this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x7FFF;
        }
        else
        {
          this->m_PlayerFog.m_hCtrl.m_Value.m_Index = -1;
        }
      }
    }
  }
}


// CBasePlayer::InitFogController  (line 9495, @0x00000000022e7700, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMasterFogController, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator CFogController*, operator!=, operator=
// calls: FogSystem
// callers: CFogSystem::InitMasterController, CBasePlayer::SetOrResetInitialState
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::InitFogController(CBasePlayer *const this)
{
  CEntityInstance *m_pInstance; // r12
  CFogSystem *v3; // rax
  uint32 m_Index; // edx
  unsigned __int16 v5; // si
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  uint32 v8; // eax
  CEntityInstance *v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx

  m_pInstance = 0;
  v3 = FogSystem();
  m_Index = v3->m_hMasterController.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = v3->m_hMasterController.m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = this->m_PlayerFog.m_hCtrl.m_Value.m_Index;
  v9 = 0;
  if ( v8 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_PlayerFog.m_hCtrl.m_Value.m_Index) >> 9)
                                                         & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
        v9 = v11->m_pInstance;
    }
  }
  if ( m_pInstance != v9 )
  {
    (*(this->m_PlayerFog._vptr_fogplayerparams_t + 2))(&this->m_PlayerFog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( m_pInstance != 0 && (m_pEntity = m_pInstance->m_pEntity) != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_PlayerFog.m_hCtrl.m_Value.m_Index) = v14 | this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x8000;
      this->m_PlayerFog.m_hCtrl.m_Value.m_Index = (v13 << 15) | this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_PlayerFog.m_hCtrl.m_Value.m_Index = -1;
    }
  }
}


// CBasePlayer::InitPostProcessController  (line 9503, @0x00000000022e7870, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMasterPostProcessController, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator CPostProcessController*, operator!=, operator=
// calls: PostProcessSystem
// callers: CBasePlayer::SetOrResetInitialState, CPostProcessSystem::PostSpawnGroupLoad
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::InitPostProcessController(CBasePlayer *const this)
{
  CEntityInstance *m_pInstance; // r12
  CPostProcessSystem *v3; // rax
  uint32 m_Index; // edx
  unsigned __int16 v5; // si
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  uint32 v8; // eax
  CEntityInstance *v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx

  m_pInstance = 0;
  v3 = PostProcessSystem();
  m_Index = v3->m_hMasterController.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = v3->m_hMasterController.m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = this->m_hPostProcessCtrl.m_Value.m_Index;
  v9 = 0;
  if ( v8 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPostProcessCtrl.m_Value.m_Index) >> 9)
                                                         & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hPostProcessCtrl.m_Value.m_Index & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
        v9 = v11->m_pInstance;
    }
  }
  if ( m_pInstance != v9 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2480, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( m_pInstance != 0 && (m_pEntity = m_pInstance->m_pEntity) != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hPostProcessCtrl.m_Value.m_Index) = v14 | this->m_hPostProcessCtrl.m_Value.m_Index & 0x8000;
      this->m_hPostProcessCtrl.m_Value.m_Index = (v13 << 15) | this->m_hPostProcessCtrl.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hPostProcessCtrl.m_Value.m_Index = -1;
    }
  }
}


// CBasePlayer::InitColorCorrectionController  (line 9511, @0x00000000022e79e0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMasterColorCorrection, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CColorCorrection*, operator CEntityInstance*, operator!=, operator=
// calls: ColorCorrectionSystem
// callers: CColorCorrectionSystem::PostSpawnGroupLoad
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::InitColorCorrectionController(CBasePlayer *const this)
{
  CEntityInstance *m_pInstance; // r12
  CColorCorrectionSystem *v3; // rax
  uint32 m_Index; // edx
  unsigned __int16 v5; // si
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  uint32 v8; // eax
  CEntityInstance *v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx

  m_pInstance = 0;
  v3 = ColorCorrectionSystem();
  m_Index = v3->m_hMasterController.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = v3->m_hMasterController.m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = this->m_hColorCorrectionCtrl.m_Value.m_Index;
  v9 = 0;
  if ( v8 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hColorCorrectionCtrl.m_Value.m_Index) >> 9)
                                                         & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
        v9 = v11->m_pInstance;
    }
  }
  if ( m_pInstance != v9 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2484, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( m_pInstance != 0 && (m_pEntity = m_pInstance->m_pEntity) != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hColorCorrectionCtrl.m_Value.m_Index) = v14 | this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x8000;
      this->m_hColorCorrectionCtrl.m_Value.m_Index = (v13 << 15) | this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hColorCorrectionCtrl.m_Value.m_Index = -1;
    }
  }
}


// CBasePlayer::InputSetPostProcessController  (line 9518, @0x00000000022e7b50, libserver.so)  // inlines: AssignTo, CEntityHandle, Entity, FieldType, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, TempString, ToString, operator CEntityInstance*, operator!=, operator=
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_22E7B95, CEntityHandle::gm_pEntityList, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBasePlayer::InputSetPostProcessController(CBasePlayer *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pCaller; // r13
  CBaseEntity *pActivator; // r12
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rax
  CPostProcessController *v8; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *m_pEntity; // rax
  int v13; // edx
  __int16 v14; // cx
  int m_int; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  const char *v18; // rax
  const char *v19; // rcx
  const char *v20; // rdx
  double m_float; // xmm0_8
  CPostProcessController *pController; // [rsp+8h] [rbp-38h]

  m_type = inputdata->value.m_type;
  if ( m_type == 13 )
  {
    m_int = inputdata->value.m_int;
    if ( (m_int + 2) <= 1 )
      return;
    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_int >> 9) & 0x3F];
    if ( v16 == 0 )
      return;
    v17 = &v16[m_int & 0x1FF];
    if ( v17 == 0 || m_int != v17->m_EHandle.m_Index || v17->m_pInstance == 0 )
      return;
    v8 = __dynamic_cast(v17->m_pInstance, &`typeinfo for'CEntityInstance, &`typeinfo for'CPostProcessController, 0);
    goto LABEL_7;
  }
  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_27;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_35;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_37;
      case 6:
        v19 = "true";
        v20 = "%s";
        if ( inputdata->value.m_char == 0 )
          v19 = "false";
        goto LABEL_29;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_37;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_30;
      case 33:
        v19 = inputdata->value.m_pszString;
        v20 = "%llu";
LABEL_29:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v20, v19);
LABEL_30:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_35:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_37:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v18 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v18);
LABEL_27:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pszString, this, pActivator, pCaller, 0);
  if ( EntityByName != 0 )
  {
    v8 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CPostProcessController, 0);
LABEL_7:
    if ( v8 != 0 )
    {
      m_Index = this->m_hPostProcessCtrl.m_Value.m_Index;
      if ( m_Index + 2 <= 1
        || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPostProcessCtrl.m_Value.m_Index) >> 9)
                                                                 & 0x3F]) == 0
        || (v11 = &v10[this->m_hPostProcessCtrl.m_Value.m_Index & 0x1FF]) == 0
        || m_Index != v11->m_EHandle.m_Index
        || v8 != v11->m_pInstance )
      {
        pController = v8;
        (*(this->_vptr_IHandleEntity + 22))(this, 2480, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pEntity = pController->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v14 = 0x7FFF;
          else
            v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hPostProcessCtrl.m_Value.m_Index) = v14 | this->m_hPostProcessCtrl.m_Value.m_Index & 0x8000;
          this->m_hPostProcessCtrl.m_Value.m_Index = (v13 << 15) | this->m_hPostProcessCtrl.m_Value.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hPostProcessCtrl.m_Value.m_Index = -1;
        }
      }
    }
  }
}


// CBasePlayer::InputSetColorCorrectionController  (line 9539, @0x00000000022e7fc0, libserver.so)  // inlines: AssignTo, CEntityHandle, Entity, FieldType, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, TempString, ToString, operator CEntityInstance*, operator!=, operator=
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_22E8005, CEntityHandle::gm_pEntityList, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBasePlayer::InputSetColorCorrectionController(CBasePlayer *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pCaller; // r13
  CBaseEntity *pActivator; // r12
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rax
  CColorCorrection *v8; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *m_pEntity; // rax
  int v13; // edx
  __int16 v14; // cx
  int m_int; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  const char *v18; // rax
  const char *v19; // rcx
  const char *v20; // rdx
  double m_float; // xmm0_8
  CColorCorrection *pController; // [rsp+8h] [rbp-38h]

  m_type = inputdata->value.m_type;
  if ( m_type == 13 )
  {
    m_int = inputdata->value.m_int;
    if ( (m_int + 2) <= 1 )
      return;
    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_int >> 9) & 0x3F];
    if ( v16 == 0 )
      return;
    v17 = &v16[m_int & 0x1FF];
    if ( v17 == 0 || m_int != v17->m_EHandle.m_Index || v17->m_pInstance == 0 )
      return;
    v8 = __dynamic_cast(v17->m_pInstance, &`typeinfo for'CEntityInstance, &`typeinfo for'CColorCorrection, 0);
    goto LABEL_7;
  }
  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_27;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_35;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_37;
      case 6:
        v19 = "true";
        v20 = "%s";
        if ( inputdata->value.m_char == 0 )
          v19 = "false";
        goto LABEL_29;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_37;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_30;
      case 33:
        v19 = inputdata->value.m_pszString;
        v20 = "%llu";
LABEL_29:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v20, v19);
LABEL_30:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_35:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_37:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v18 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v18);
LABEL_27:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pszString, this, pActivator, pCaller, 0);
  if ( EntityByName != 0 )
  {
    v8 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CColorCorrection, 0);
LABEL_7:
    if ( v8 != 0 )
    {
      m_Index = this->m_hColorCorrectionCtrl.m_Value.m_Index;
      if ( m_Index + 2 <= 1
        || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hColorCorrectionCtrl.m_Value.m_Index) >> 9)
                                                                 & 0x3F]) == 0
        || (v11 = &v10[this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x1FF]) == 0
        || m_Index != v11->m_EHandle.m_Index
        || v8 != v11->m_pInstance )
      {
        pController = v8;
        (*(this->_vptr_IHandleEntity + 22))(this, 2484, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pEntity = pController->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v14 = 0x7FFF;
          else
            v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hColorCorrectionCtrl.m_Value.m_Index) = v14
                                                               | this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x8000;
          this->m_hColorCorrectionCtrl.m_Value.m_Index = (v13 << 15)
                                                       | this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hColorCorrectionCtrl.m_Value.m_Index = -1;
        }
      }
    }
  }
}


// CBasePlayer::SetViewEntity  (line 9561, @0x00000000022e8430, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, entindex, operator CBaseEntity*, operator!=, operator=
// calls: CEntityInstance::GetEntityIndex
// callers: CPointCommentaryNode::UpdateViewThink, CPointCommentaryNode::CleanupPostCommentary, CBasePlayer::OnRestore, CTriggerCamera::Disable, CTriggerCamera::Enable
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::SetViewEntity(CBasePlayer *const this, CBaseEntity *pEntity)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v8; // ecx
  unsigned __int16 v9; // dx
  int v10; // esi
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CBasePlayer *v14; // rdi
  void (__fastcall *v15)(IVEngineServer2 *, _QWORD, _QWORD); // r14
  unsigned int m_Data; // r13d
  CEntityIndex v17; // eax
  CEntityIdentity *m_pEntity; // rax
  __int16 v19; // dx
  uint32 v20; // eax

  m_pInstance = 0;
  m_Index = this->m_hViewEntity.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewEntity.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hViewEntity.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( pEntity != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3856, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pEntity == 0 || (m_pEntity = pEntity->m_pEntity) == 0 )
    {
      v8 = 0x1FFFF;
      v9 = 0x7FFF;
      v10 = 0x7FFF;
      this->m_hViewEntity.m_Value.m_Index = -1;
      goto LABEL_9;
    }
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v19 = 0x7FFF;
    else
      v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v8 = ((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) & 0x1FFFF;
    LOWORD(this->m_hViewEntity.m_Value.m_Index) = v19 | this->m_hViewEntity.m_Value.m_Index & 0x8000;
    v20 = (v8 << 15) | this->m_hViewEntity.m_Value.m_Index & 0x7FFF;
    this->m_hViewEntity.m_Value.m_Index = v20;
    if ( v20 != -1 )
      goto LABEL_8;
LABEL_20:
    v9 = 0x7FFF;
    v10 = 0x7FFF;
    goto LABEL_9;
  }
  v8 = this->m_hViewEntity.m_Value.m_Index >> 15;
  if ( m_Index == -1 )
    goto LABEL_20;
LABEL_8:
  v9 = this->m_hViewEntity.m_Value.m_Index & 0x7FFF;
  v10 = v9;
LABEL_9:
  v11 = (v8 << 15) | v9 & 0x7FFF;
  if ( (v11 + 2) > 1
    && (v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9]) != 0
    && (v13 = &v12[v10 & 0x1FF]) != 0
    && v11 == v13->m_EHandle.m_Index
    && (v14 = v13->m_pInstance, v13->m_pInstance != 0) )
  {
    v15 = *(*engine + 360LL);
  }
  else
  {
    v14 = this;
    v15 = *(*engine + 360LL);
  }
  m_Data = CEntityInstance::GetEntityIndex(v14).m_Data;
  v17.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v15(engine, v17.m_Data, m_Data);
}


// CBasePlayer::HasAnyAmmoOfType  (line 9582, @0x00000000022e8760, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CBaseCombatCharacter::GetAmmoCount
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePlayer::HasAnyAmmoOfType(CBasePlayer *const this, int nAmmoIndex)
{
  __int64 v5; // r14
  CHandle<CBaseCombatWeapon> *v6; // rax
  uint32 m_Index; // ecx
  __int16 v8; // dx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityInstance *m_pInstance; // r13

  if ( nAmmoIndex >= 0 )
  {
    if ( CBaseCombatCharacter::GetAmmoCount(this, nAmmoIndex) != 0 )
      return 1;
    if ( this->m_hMyWeapons.m_Vector.m_Size > 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v5];
        m_Index = v6->m_Index;
        if ( v6->m_Index + 2 > 1 )
        {
          v8 = v6->m_Index;
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v8 & 0x1FF];
            if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0
                && ((*(m_pInstance->_vptr_IHandleEntity + 351))(m_pInstance) != 0
                 && nAmmoIndex == (*(m_pInstance->_vptr_IHandleEntity + 359))(m_pInstance)
                 && (*(m_pInstance->_vptr_IHandleEntity + 277))(m_pInstance) != 0
                 || (*(m_pInstance->_vptr_IHandleEntity + 352))(m_pInstance) != 0
                 && nAmmoIndex == (*(m_pInstance->_vptr_IHandleEntity + 360))(m_pInstance)
                 && (*(m_pInstance->_vptr_IHandleEntity + 278))(m_pInstance) != 0) )
              {
                break;
              }
            }
          }
        }
        if ( this->m_hMyWeapons.m_Vector.m_Size <= ++v5 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}


// CBasePlayer::HandleVoteCommands  (line 9624, @0x00000000022e8890, libserver.so)
bool __fastcall CBasePlayer::HandleVoteCommands(
        CBasePlayer *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  return 0;
}


// CBasePlayer::GetNetworkIDString  (line 9699, @0x00000000022e88a0, libserver.so)  // inlines: GetPlayerSlot, V_strncpy<long unsigned int>, entindex
// calls: CEntityInstance::GetEntityIndex, _V_strncpy
// callers: Host_Say, CEventLog::FormatPlayer, CEventLog::PrintPlayerEvent, CPlayerInfo::GetNetworkIDString, CDOTAPlayer::UpdatePlayerIDFromSteamID, CDOTAPlayer::Spawn
const char *__fastcall CBasePlayer::GetNetworkIDString(CBasePlayer *const this)
{
  __int64 (__fastcall *v2)(IVEngineServer2 *, _QWORD); // r13
  CEntityIndex v3; // eax
  char *v4; // rsi
  char *m_szNetworkIDString; // rbx

  v2 = *(*engine + 232LL);
  v3.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v4 = v2(engine, (v3.m_Data - 1));
  if ( v4 == 0 )
    v4 = "UNKNOWN";
  m_szNetworkIDString = this->m_szNetworkIDString;
  _V_strncpy(m_szNetworkIDString, v4, 64);
  return m_szNetworkIDString;
}


// CBasePlayer::SetPlayerName  (line 9716, @0x00000000022e8930, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy
// callers: CGameRules::ClientSettingsChanged, CTeamplayRules::ClientSettingsChanged, ClientPutInServer
void __fastcall CBasePlayer::SetPlayerName(CBasePlayer *const this, const char *name)
{
  if ( name != 0 )
    _V_strncpy(this->m_szNetname, name, 32);
}


// CBasePlayer::PrepareForFullUpdate  (line 9730, @0x00000000022c4c20, libserver.so)  // inlines: Clear, Get, LeaveSteadyStateForPlayer, curtime, entindex
// calls: CEntityInstance::GetEntityIndex, CGameEntitySystem::NextEnt
void __fastcall CBasePlayer::PrepareForFullUpdate(CBasePlayer *const this)
{
  CEntityIndex v2; // eax
  int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // r12
  CBaseEntity *Ent; // rax
  CGlobalVars *v7; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v9; // xmm0_4

  if ( this->m_hasAnySteadyStateEnts )
  {
    this->m_hasAnySteadyStateEnts = 0;
    v2.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v3 = 1 << (LOBYTE(v2.m_Data) - 1);
    v4 = (v2.m_Data - 1) >> 5;
    v5 = (v2.m_Data - 1) >> 5;
    Ent = 0;
    while ( 1 )
    {
      Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, Ent);
      if ( Ent == 0 )
        break;
      if ( (v3 & Ent->m_isSteadyState.m_Ints[v4]) != 0 )
        Ent->m_isSteadyState.m_Ints[v5] &= ~v3;
    }
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v9 = v7->m_flCurrentTime + 2.5;
    }
    else
    {
      v9 = 2.5;
    }
    this->m_lastEntitySteadyState = v9;
    this->m_availableEntitySteadyState = 0;
  }
}


// CBasePlayer::GetAvailableSteadyStateSlots  (line 9752, @0x00000000022c19c0, libserver.so)  // inlines: GetInt, SteadyStateBatchSize, atoi, curtime, entindex
// calls: CEntityInstance::GetEntityIndex, strtol
int __fastcall CBasePlayer::GetAvailableSteadyStateSlots(CBasePlayer *const this)
{
  int result; // eax
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm1_4
  __int64 (__fastcall *v6)(IVEngineServer2 *, _QWORD, const char *); // r13
  CEntityIndex v7; // eax
  const char *v8; // rax
  int v9; // ecx
  int m_nValue; // edx

  if ( this->m_iTeamNum.m_Value == 0 || (*(this->_vptr_IHandleEntity + 521))(this) != 0 )
    return 0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  if ( m_flCurrentTime < (this->m_lastEntitySteadyState + ent_steadystate_interval.m_pParent->m_Value.m_fValue) )
    return this->m_availableEntitySteadyState;
  v6 = *(*engine + 384LL);
  v7.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v8 = v6(engine, v7.m_Data, "rate");
  if ( v8 != 0 && (v9 = strtol(v8, 0, 10)) > 4999 )
  {
    m_nValue = 0;
    if ( ent_steadystate_batchsize.m_pParent->m_Value.m_nValue >= 0 )
      m_nValue = ent_steadystate_batchsize.m_pParent->m_Value.m_nValue;
    result = 100;
    if ( m_nValue <= 100 )
      result = m_nValue;
    if ( v9 <= 19999 )
      result = ((((v9 - 5000.0) / 15000.0) * (result - 1)) + 0.5) + 1;
  }
  else
  {
    result = 1;
  }
  this->m_availableEntitySteadyState = result;
  return result;
}


// CBasePlayer::OnEntitySteadyStateStart  (line 9778, @0x00000000022e8960, libserver.so)
// callers: CSource2GameEntities::CheckEntities
void __fastcall CBasePlayer::OnEntitySteadyStateStart(CBasePlayer *const this)
{
  int m_availableEntitySteadyState; // eax

  m_availableEntitySteadyState = this->m_availableEntitySteadyState;
  this->m_hasAnySteadyStateEnts = 1;
  if ( m_availableEntitySteadyState > 0 )
    this->m_availableEntitySteadyState = m_availableEntitySteadyState - 1;
}


// CBasePlayer::SetPlayerInPVS  (line 9795, @0x00000000022e8980, libserver.so)  // inlines: Bitvec_Set, Clear, Set
// callers: CSource2GameEntities::CheckEntities
void __fastcall CBasePlayer::SetPlayerInPVS(CBasePlayer *const this, CEntityIndex playerIndex, bool inPVS)
{
  if ( inPVS )
    this->m_playerInPVS.m_Ints[playerIndex.m_Data >> 5] |= 1 << SLOBYTE(playerIndex.m_Data);
  else
    this->m_playerInPVS.m_Ints[playerIndex.m_Data >> 5] &= ~(1 << SLOBYTE(playerIndex.m_Data));
}


// CBasePlayer::IsPlayerInPVS  (line 9811, @0x00000000022e89c0, libserver.so)  // inlines: Get, entindex
// calls: CEntityInstance::GetEntityIndex
bool __fastcall CBasePlayer::IsPlayerInPVS(const CBasePlayer *const this, const CBasePlayer *player)
{
  CEntityIndex v3; // eax

  v3.m_Data = CEntityInstance::GetEntityIndex(player).m_Data;
  return ((1 << SLOBYTE(v3.m_Data)) & this->m_playerInPVS.m_Ints[v3.m_Data >> 5]) != 0;
}


// mp_disable_autokick  (line 9848, @0x00000000022efa30, libserver.so)  // inlines: atoi
// calls: UTIL_IsCommandIssuedByServerAdmin, Msg, strtol, ForEachPlayer<DisableAutokick>
// strings: "Usage: mp_disable_autokick <userid>\n", "You must be a server admin to use mp_disable_autokick\n"
void __fastcall mp_disable_autokick(const CCommandContext *const ctx, const CCommand *const args)
{
  DisableAutokick disable; // [rsp+0h] [rbp-20h] BYREF

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    if ( args->m_nArgc == 2 )
    {
      disable.m_userID = strtol(args->m_ppArgv[1], 0, 10);
      ForEachPlayer<DisableAutokick>(&disable);
    }
    else
    {
      Msg("Usage: mp_disable_autokick <userid>\n");
    }
  }
  else
  {
    Msg("You must be a server admin to use mp_disable_autokick\n");
  }
}


// CC_RespawnPlayer  (line 9868, @0x00000000022ff550, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Color, ConvertToExternalMemory, CopyConstruct<CPointEntity*>, Element, GrowMemory, Next, Purge, Purge_FixedGrowable, RemoveAll, SetColor, TypedEntityInstanceByClassIter_t, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CGameEntitySystem::FindEntityByName, CBaseEntity::SetLifeState, SafeGetViewVectors, CBaseEntity::SetMoveType, CBaseCombatCharacter::GetActiveWeapon, UTIL_ScreenFade, EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next, CUtlMemory<CPointEntity*, int>::Grow (17 total)
// strings: "@player_start_teleport_destination", "info_player_start"
void __fastcall CC_RespawnPlayer(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *v2; // rax
  CBasePlayer *v3; // rbx
  CBaseEntity *EntityByName; // rax
  const CBaseEntity *v5; // r12
  void (__fastcall *v6)(CBasePlayer *, const CViewVectors *); // r12
  const CViewVectors *ViewVectors; // rax
  int (**vptr_ICollideable)(...); // rax
  CBaseCombatWeapon *ActiveWeapon; // rax
  CEntityInstance *i; // r13
  CPointEntity **v11; // rax
  __int64 m_Size; // r12
  int v13; // eax
  __int64 v14; // r12
  uint32 v15; // eax
  Vector vNewPos; // [rsp+10h] [rbp-E0h] BYREF
  QAngle vNewAng; // [rsp+20h] [rbp-D0h] BYREF
  TypedEntityInstanceByClassIter_t<CPointEntity> iter; // [rsp+30h] [rbp-C0h] BYREF
  CUtlVectorFixedGrowable<CPointEntity*,8ul> vecSpawns; // [rsp+60h] [rbp-90h] BYREF
  unsigned __int64 v20; // [rsp+B8h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  v2 = UTIL_PlayerByIndex(1);
  v3 = v2;
  if ( v2 != 0 && (*(v2->_vptr_IHandleEntity + 139))(v2) == 0 )
  {
    vNewPos = *CBaseEntity::GetAbsOrigin(v3);
    vNewAng = *CBaseEntity::GetAbsAngles(v3);
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     "@player_start_teleport_destination",
                     0,
                     0,
                     0,
                     0);
    v5 = EntityByName;
    if ( EntityByName != 0 )
    {
      vNewPos = *CBaseEntity::GetAbsOrigin(EntityByName);
      vNewAng = *CBaseEntity::GetAbsAngles(v5);
    }
    else
    {
      vecSpawns.m_Memory.m_nAllocationCount = 8;
      vecSpawns.m_Memory.m_nGrowSize = 0x80000000;
      vecSpawns.m_Memory.m_pMemory = &vecSpawns.m_Memory.m_FixedMemory;
      vecSpawns.m_Size = 0;
      EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
        &iter,
        "info_player_start",
        0,
        EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
      for ( i = EntityInstanceByClassIter_t::Next(&iter); i != 0; i = EntityInstanceByClassIter_t::Next(&iter) )
      {
        m_Size = vecSpawns.m_Size;
        v13 = vecSpawns.m_Size;
        if ( vecSpawns.m_Size == vecSpawns.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CPointEntity *,int>::Grow(&vecSpawns.m_Memory, 1);
          v13 = vecSpawns.m_Size;
        }
        vecSpawns.m_Size = v13 + 1;
        v11 = &vecSpawns.m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = i;
      }
      if ( vecSpawns.m_Size > 0 )
      {
        v14 = RandomInt(0, (vecSpawns.m_Size - 1));
        vNewPos = *CBaseEntity::GetAbsOrigin(vecSpawns.m_Memory.m_pMemory[v14]);
        vNewAng = *CBaseEntity::GetAbsAngles(vecSpawns.m_Memory.m_pMemory[v14]);
      }
      vecSpawns.m_Size = 0;
      v15 = vecSpawns.m_Memory.m_nGrowSize & 0xC0000000;
      if ( vecSpawns.m_Memory.m_nAllocationCount < 0
        || vecSpawns.m_Memory.m_pMemory == &vecSpawns.m_Memory.m_FixedMemory )
      {
        if ( v15 == 0 )
          CUtlMemory<CPointEntity *,int>::Purge(&vecSpawns.m_Memory);
      }
      else if ( vecSpawns.m_Memory.m_pMemory != 0 && v15 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      }
    }
    (*(v3->_vptr_IHandleEntity + 128))(v3, &vNewPos, &vNewAng, &vec3_origin);
    (*(v3->_vptr_IHandleEntity + 157))(v3, 100);
    CBaseEntity::SetLifeState(v3, LifeState_t::LIFE_ALIVE);
    v6 = *(v3->_vptr_IHandleEntity + 211);
    ViewVectors = SafeGetViewVectors();
    v6(v3, ViewVectors);
    vptr_ICollideable = v3->m_Collision._vptr_ICollideable;
    v3->m_pl.deadflag = 0;
    vptr_ICollideable[15](&v3->m_Collision);
    CBaseEntity::SetMoveType(v3, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(v3);
    if ( ActiveWeapon != 0 )
      (*(ActiveWeapon->_vptr_IHandleEntity + 282))(ActiveWeapon);
    vecSpawns.m_Size = -16777216;
    UTIL_ScreenFade(v3, &vecSpawns, 2.0, 0.0, 17);
  }
}


// CBasePlayer::GetStickDist  (line 9927, @0x00000000022e8a00, libserver.so)  // inlines: FastSqrt, Length, Vector2DLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
float __fastcall CBasePlayer::GetStickDist(CBasePlayer *const this)
{
  return fsqrt((this->m_flForwardMove * this->m_flForwardMove) + (this->m_flSideMove * this->m_flSideMove));
}


// CBasePlayer::OnNavAreaChanged  (line 9941, @0x00000000022b7ff0, libserver.so)
void __fastcall CBasePlayer::OnNavAreaChanged(CBasePlayer *const this, CNavArea *pEnteredArea, CNavArea *pLeftArea)
{
  ;
}


// CBasePlayer::HandleAnimEvent  (line 9971, @0x00000000022c5030, libserver.so)  // inlines: curtime
// calls: CBaseAnimating::HandleAnimEvent, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CBasePlayer::HandleAnimEvent(CBasePlayer *const this, animevent_t *pEvent)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm0_8

  if ( (pEvent->type & 1) != 0 && pEvent->event == 37 )
  {
    (*(this->_vptr_IHandleEntity + 498))(this);
    (*(this->_vptr_IHandleEntity + 236))(this, &vec3_origin);
    CBaseEntity::ThinkSet(this, 0xBD9uLL, 0.0, 0, 0);
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v6) = 0;
      *&v6 = v4->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v6 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v6, v3, 0);
  }
  else
  {
    CBaseAnimating::HandleAnimEvent(this, pEvent);
  }
}


// CPlayerInfo::GetName  (line 9997, @0x00000000022b8000, libserver.so)
const char *__fastcall CPlayerInfo::GetName(CPlayerInfo *const this)
{
  return (*(this->m_pParent->_vptr_IHandleEntity + 106))(this->m_pParent);
}


// CPlayerInfo::GetUserID  (line 10005, @0x00000000022b8b70, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex
int __fastcall CPlayerInfo::GetUserID(CPlayerInfo *const this)
{
  CEntityIndex v1; // eax

  v1.m_Data = CEntityInstance::GetEntityIndex(this->m_pParent).m_Data;
  return (*(*engine + 224LL))(engine, (v1.m_Data - 1));
}


// CPlayerInfo::GetNetworkIDString  (line 10014, @0x00000000022e8910, libserver.so)
// calls: CBasePlayer::GetNetworkIDString
const char *__fastcall CPlayerInfo::GetNetworkIDString(CPlayerInfo *const this)
{
  return CBasePlayer::GetNetworkIDString(this->m_pParent);
}


// CPlayerInfo::GetTeamIndex  (line 10022, @0x00000000022b8030, libserver.so)  // inlines: GetTeamNumber
int __fastcall CPlayerInfo::GetTeamIndex(CPlayerInfo *const this)
{
  return this->m_pParent->m_iTeamNum.m_Value;
}


// CPlayerInfo::ChangeTeam  (line 10030, @0x00000000022b8060, libserver.so)
void __fastcall CPlayerInfo::ChangeTeam(CPlayerInfo *const this, int iTeamNum)
{
  (*(this->m_pParent->_vptr_IHandleEntity + 70))(this->m_pParent, iTeamNum);
}


// CPlayerInfo::GetFragCount  (line 10038, @0x00000000022b8090, libserver.so)
int __fastcall CPlayerInfo::GetFragCount(CPlayerInfo *const this)
{
  return this->m_pParent->m_iFrags;
}


// CPlayerInfo::GetDeathCount  (line 10046, @0x00000000022b80b0, libserver.so)
int __fastcall CPlayerInfo::GetDeathCount(CPlayerInfo *const this)
{
  return this->m_pParent->m_iDeaths;
}


// CPlayerInfo::IsConnected  (line 10054, @0x00000000022b80d0, libserver.so)  // inlines: IsConnected
bool __fastcall CPlayerInfo::IsConnected(CPlayerInfo *const this)
{
  return this->m_pParent->m_iConnected != PlayerConnectedState::PlayerDisconnected;
}


// CPlayerInfo::GetArmorValue  (line 10062, @0x00000000022b8100, libserver.so)  // inlines: ArmorValue
int __fastcall CPlayerInfo::GetArmorValue(CPlayerInfo *const this)
{
  return this->m_pParent->m_ArmorValue.m_Value;
}


// CPlayerInfo::IsPlayer  (line 10070, @0x00000000022b8120, libserver.so)
bool __fastcall CPlayerInfo::IsPlayer(CPlayerInfo *const this)
{
  return (*(this->m_pParent->_vptr_IHandleEntity + 140))(this->m_pParent);
}


// CPlayerInfo::IsFakeClient  (line 10078, @0x00000000022b8150, libserver.so)
bool __fastcall CPlayerInfo::IsFakeClient(CPlayerInfo *const this)
{
  return (*(this->m_pParent->_vptr_IHandleEntity + 391))(this->m_pParent);
}


// CPlayerInfo::IsDead  (line 10086, @0x00000000022bad80, libserver.so)  // inlines: IsDead
// calls: CBaseEntity::GetLifeState
bool __fastcall CPlayerInfo::IsDead(CPlayerInfo *const this)
{
  return CBaseEntity::GetLifeState(this->m_pParent) == LifeState_t::LIFE_DEAD;
}


// CPlayerInfo::IsInAVehicle  (line 10094, @0x00000000022b8180, libserver.so)
bool __fastcall CPlayerInfo::IsInAVehicle(CPlayerInfo *const this)
{
  return (*(this->m_pParent->_vptr_IHandleEntity + 346))(this->m_pParent);
}


// CPlayerInfo::IsObserver  (line 10102, @0x00000000022b81b0, libserver.so)  // inlines: IsObserver
bool __fastcall CPlayerInfo::IsObserver(CPlayerInfo *const this)
{
  return (this->m_pParent->m_afPhysicsFlags & 8) != 0;
}


// CPlayerInfo::GetAbsOrigin  (line 10110, @0x00000000022b8620, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall CPlayerInfo::GetAbsOrigin(CPlayerInfo *const this)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_pParent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CPlayerInfo::GetAbsAngles  (line 10118, @0x00000000022b8790, libserver.so)
// calls: CBaseEntity::GetAbsAngles
QAngle __fastcall CPlayerInfo::GetAbsAngles(CPlayerInfo *const this)
{
  const QAngle *AbsAngles; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsAngles = CBaseEntity::GetAbsAngles(this->m_pParent);
  *&result.x = *&AbsAngles->x;
  result.z = AbsAngles->z;
  return result;
}


// CPlayerInfo::GetPlayerMins  (line 10126, @0x00000000022b81e0, libserver.so)
Vector __fastcall CPlayerInfo::GetPlayerMins(CPlayerInfo *const this)
{
  return (*(this->m_pParent->_vptr_IHandleEntity + 394))(this->m_pParent);
}


// CPlayerInfo::GetPlayerMaxs  (line 10134, @0x00000000022b8210, libserver.so)
Vector __fastcall CPlayerInfo::GetPlayerMaxs(CPlayerInfo *const this)
{
  return (*(this->m_pParent->_vptr_IHandleEntity + 395))(this->m_pParent);
}


// CPlayerInfo::GetWeaponName  (line 10142, @0x00000000022baba0, libserver.so)
// calls: CBaseCombatCharacter::GetActiveWeapon
const char *__fastcall CPlayerInfo::GetWeaponName(CPlayerInfo *const this)
{
  CBaseCombatWeapon *ActiveWeapon; // rax

  ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(this->m_pParent);
  if ( ActiveWeapon != 0 )
    return (*(ActiveWeapon->_vptr_IHandleEntity + 347))(ActiveWeapon);
  else
    return 0;
}


// CPlayerInfo::GetModelName  (line 10155, @0x00000000022ba3f0, libserver.so)  // inlines: String, ToCStr
// calls: CBaseEntity::GetModelName
const char *__fastcall CPlayerInfo::GetModelName(CPlayerInfo *const this)
{
  const char *result; // rax
  const char *v2; // [rsp+0h] [rbp-10h] BYREF

  CBaseEntity::GetModelName(&v2, this->m_pParent);
  result = "";
  if ( v2 != 0 )
    return v2;
  return result;
}


// CPlayerInfo::GetHealth  (line 10163, @0x00000000022ba080, libserver.so)
// calls: CBaseEntity::GetHealth
int __fastcall CPlayerInfo::GetHealth(CPlayerInfo *const this)
{
  return CBaseEntity::GetHealth(this->m_pParent);
}


// CPlayerInfo::GetMaxHealth  (line 10171, @0x00000000022b8240, libserver.so)
int __fastcall CPlayerInfo::GetMaxHealth(CPlayerInfo *const this)
{
  return (*(this->m_pParent->_vptr_IHandleEntity + 156))(this->m_pParent);
}


// CPlayerInfo::SetAbsOrigin  (line 10179, @0x00000000022ba290, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CPlayerInfo::SetAbsOrigin(CPlayerInfo *const this, Vector *const vec)
{
  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    CBaseEntity::SetAbsOrigin(this->m_pParent, vec);
}


// CPlayerInfo::SetAbsAngles  (line 10190, @0x00000000022ba2d0, libserver.so)
// calls: CBaseEntity::SetAbsAngles
void __fastcall CPlayerInfo::SetAbsAngles(CPlayerInfo *const this, QAngle *const ang)
{
  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    CBaseEntity::SetAbsAngles(this->m_pParent, ang);
}


// CPlayerInfo::RemoveAllItems  (line 10201, @0x00000000022bb660, libserver.so)
void __fastcall CPlayerInfo::RemoveAllItems(CPlayerInfo *const this, bool removeSuit)
{
  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    (*(this->m_pParent->_vptr_IHandleEntity + 400))(this->m_pParent, removeSuit);
}


// CPlayerInfo::SetActiveWeapon  (line 10212, @0x00000000022bb8f0, libserver.so)
// calls: CBaseCombatCharacter::Weapon_Create
void __fastcall CPlayerInfo::SetActiveWeapon(CPlayerInfo *const this, const char *WeaponName)
{
  CBaseCombatWeapon *v4; // rax
  CBaseCombatWeapon *v5; // r12

  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
  {
    v4 = CBaseCombatCharacter::Weapon_Create(this->m_pParent, WeaponName);
    v5 = v4;
    if ( v4 != 0 )
    {
      (*(this->m_pParent->_vptr_IHandleEntity + 307))(this->m_pParent, v4);
      (*(this->m_pParent->_vptr_IHandleEntity + 310))(this->m_pParent, v5, 0);
    }
  }
}


// CPlayerInfo::SetLocalOrigin  (line 10228, @0x00000000022ba310, libserver.so)
// calls: CBaseEntity::SetLocalOrigin
void __fastcall CPlayerInfo::SetLocalOrigin(CPlayerInfo *const this, const Vector *const origin)
{
  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    CBaseEntity::SetLocalOrigin(this->m_pParent, origin);
}


// CPlayerInfo::GetLocalOrigin  (line 10239, @0x00000000022bb850, libserver.so)
// calls: CBaseEntity::GetLocalOrigin
Vector __fastcall CPlayerInfo::GetLocalOrigin(CPlayerInfo *const this)
{
  Vector v4; // 0:^10.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    v4 = *CBaseEntity::GetLocalOrigin(this->m_pParent);
  else
    v4 = vec3_origin;
  *&result.x = *&v4.x;
  result.z = v4.z;
  return result;
}


// CPlayerInfo::SetLocalAngles  (line 10255, @0x00000000022b9d30, libserver.so)
// calls: CBaseEntity::SetLocalAngles
void __fastcall CPlayerInfo::SetLocalAngles(CPlayerInfo *const this, const QAngle *const angles)
{
  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    CBaseEntity::SetLocalAngles(this->m_pParent, angles);
}


// CPlayerInfo::GetLocalAngles  (line 10266, @0x00000000022bb790, libserver.so)
// calls: CBaseEntity::GetLocalAngles
QAngle __fastcall CPlayerInfo::GetLocalAngles(CPlayerInfo *const this)
{
  QAngle v4; // 0:^10.12
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    v4 = *CBaseEntity::GetLocalAngles(this->m_pParent);
  else
    v4 = vec3_angle;
  *&result.x = *&v4.x;
  result.z = v4.z;
  return result;
}


// CPlayerInfo::IsEFlagSet  (line 10281, @0x00000000022b8270, libserver.so)  // inlines: IsEFlagSet
bool __fastcall CPlayerInfo::IsEFlagSet(CPlayerInfo *const this, int nEFlagMask)
{
  bool result; // al

  result = (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent);
  if ( result )
    return (nEFlagMask & this->m_pParent->m_iEFlags) != 0;
  return result;
}


// CPlayerInfo::RunPlayerMove  (line 10293, @0x00000000022e1c00, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, CUserCmd, ChangeAccessorFieldPathIndex_t, EnsureValidValue, EnsureValidValue<float>, HandInfo_t, Init, Reset, SetLastUserCommand, Zero, curtime, operator=, setcurtime
// calls: HandInfo_t::Reset, CBasePlayer::SetTimeBase, MoveHelperServer, CUserCmd::operator=
// callers: CPlayerInfo::RunPlayerMove
void __fastcall CPlayerInfo::RunPlayerMove(CPlayerInfo *const this, CBotCmd *ucmd)
{
  HandInfo_t *hmd_controllers_info; // rbx
  CEntityInstance *v5; // rax
  HandInfo_t *v6; // rdi
  vec_t z; // xmm0_4
  bool *hmd_controllers_active; // rbx
  HandInfo_t *v9; // r15
  float v10; // xmm1_4
  ButtonBitMask_t buttons; // rax
  float sidemove; // xmm0_4
  vec_t x; // xmm0_4
  vec_t v14; // xmm0_4
  CGlobalVars *v15; // rbx
  CGlobalVars *v16; // r15
  float frametime; // r12d
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v19; // xmm0_4
  void (__fastcall *v20)(__int64, double); // rdx
  IMoveHelper *v21; // rax
  void (__fastcall *v22)(CBasePlayer *, CUserCmd *, IMoveHelper *); // rbx
  IMoveHelper *v23; // rax
  CGlobalVars *v24; // rax
  IMoveHelper *v25; // rax
  float m_flCurrentTime; // [rsp+4h] [rbp-25Ch]
  CUserCmd cmd; // [rsp+10h] [rbp-250h] BYREF

  cmd._vptr_CUserCmd = off_403F950;
  hmd_controllers_info = cmd.hmd_controllers_info;
  do
  {
    v5 = CEntitySpawnHelper::gm_pCurEntityPtr;
    hmd_controllers_info->m_vPosition.m_Value.z = 0.0;
    hmd_controllers_info->__m_PathIndex.m_Value = -1;
    v6 = hmd_controllers_info++;
    hmd_controllers_info[-1].m_vPosition.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_vPosition.m_Value.x = 0.0;
    hmd_controllers_info[-1].__m_pChainEntity.m_pObj = v5;
    hmd_controllers_info[-1].m_Angles.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_Angles.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_Angles.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_vFilteredPosition.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_FilteredAngles.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_vFilteredVelocity.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.x = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.y = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.z = 0.0;
    hmd_controllers_info[-1].m_FilteredAngularVel.m_Value.w = 0.0;
    hmd_controllers_info[-1].m_flTriggerAnalogValue.m_Value = 0.0;
    hmd_controllers_info[-1].m_flGripAnalogValue.m_Value = 0.0;
    hmd_controllers_info[-1].m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
    hmd_controllers_info[-1].m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
    HandInfo_t::Reset(v6);
  }
  while ( hmd_controllers_info != &cmd.hmd_middle_eye_local );
  memset(&cmd.command_number, 0, 41);
  cmd.crosshairtrace.x = vec3_origin.x;
  cmd.crosshairtrace.y = vec3_origin.y;
  z = vec3_origin.z;
  memset(&cmd.weaponselect, 0, 17);
  hmd_controllers_active = cmd.hmd_controllers_active;
  v9 = cmd.hmd_controllers_info;
  cmd.cameraposition[0] = 0;
  cmd.cameraposition[1] = 0;
  cmd.clickbehavior = 0;
  cmd.statspanel = 0;
  cmd.shoppanel = 0;
  cmd.stats_dropdown = 0;
  cmd.stats_dropdown_sort = 0;
  cmd.crosshairtrace.z = z;
  cmd.hmd_active = 0;
  cmd.hmd_targeting_mode = 0;
  do
  {
    *hmd_controllers_active++ = 0;
    HandInfo_t::Reset(v9++);
  }
  while ( hmd_controllers_active != &cmd.hmd_controllers_active[4] );
  buttons = ucmd->buttons;
  memset(&cmd.hmd_middle_eye_local, 0, 24);
  cmd.forwardmove = ucmd->forwardmove;
  sidemove = ucmd->sidemove;
  cmd.buttons = buttons;
  LODWORD(buttons) = ucmd->command_number;
  cmd.sidemove = sidemove;
  cmd.upmove = ucmd->upmove;
  x = ucmd->viewangles.x;
  cmd.command_number = buttons;
  LOBYTE(buttons) = ucmd->hasbeenpredicted;
  cmd.viewangles.x = x;
  cmd.viewangles.y = ucmd->viewangles.y;
  v14 = ucmd->viewangles.z;
  cmd.hasbeenpredicted = buttons;
  cmd.impulse = ucmd->impulse;
  cmd.mousedx = ucmd->mousedx;
  cmd.mousedy = ucmd->mousedy;
  cmd.random_seed = ucmd->random_seed;
  cmd.tick_count = ucmd->tick_count;
  cmd.viewangles.z = v14;
  cmd.weaponselect = ucmd->weaponselect;
  v15 = gpGlobals;
  cmd.weaponsubtype = ucmd->weaponsubtype;
  v16 = gpGlobals;
  frametime = gpGlobals->frametime;
  if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    v16 = gpGlobals;
    if ( m_pfnWarningFunc != 0 )
    {
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v16 = gpGlobals;
    }
  }
  v19 = 0.0;
  m_flCurrentTime = v15->m_flCurrentTime;
  if ( v16 != 0 )
  {
    if ( !v16->m_bEnableAssertions && !v16->m_bInSimulation )
    {
      v20 = v16->m_pfnWarningFunc;
      if ( v20 != 0 )
        v20(1, 0.0);
    }
    v19 = v16->m_flCurrentTime;
  }
  CBasePlayer::SetTimeBase(this->m_pParent, v19, v10);
  v21 = MoveHelperServer();
  (*(v21->_vptr_IMoveHelper + 1))(v21, this->m_pParent);
  v22 = *(this->m_pParent->_vptr_IHandleEntity + 492);
  v23 = MoveHelperServer();
  v22(this->m_pParent, &cmd, v23);
  CUserCmd::operator=(&this->m_pParent->m_LastCmd, &cmd);
  this->m_pParent->m_FixAngle.fixangle = 0;
  v24 = gpGlobals;
  gpGlobals->frametime = frametime;
  v24->m_flCurrentTime = m_flCurrentTime;
  v25 = MoveHelperServer();
  (*(v25->_vptr_IMoveHelper + 1))(v25, 0);
}


// CPlayerInfo::RunPlayerMove  (line 10293, @0x00000000022e2060, libserver.so)
// calls: CPlayerInfo::RunPlayerMove
void __fastcall CPlayerInfo::RunPlayerMove(CPlayerInfo *const this, CBotCmd *ucmd)
{
  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    CPlayerInfo::RunPlayerMove(this, ucmd);
}


// CPlayerInfo::SetLastUserCommand  (line 10338, @0x00000000022c8c20, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, CUserCmd, ChangeAccessorFieldPathIndex_t, EnsureValidValue, EnsureValidValue<float>, Get, HandInfo_t, Init, NetworkStateChanged, Reset, Set, SetLastUserCommand, Zero, operator CEntityInstance*, operator!=, operator=, operator=<QAngle>, operator=<Quaternion>, operator=<Vector>, operator=<int>, operator==
// calls: HandInfo_t::Reset, CUserCmd::operator=
// callers: CPlayerInfo::SetLastUserCommand
void __fastcall CPlayerInfo::SetLastUserCommand(CPlayerInfo *const this, const CBotCmd *const ucmd)
{
  float v2; // xmm0_4
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> *p_m_flTrackpadOrJoystickAnalogValueX; // rbx
  HandInfo_t *hmd_controllers_info; // r14
  CEntityInstance **v6; // r10
  const Quaternion *v7; // r8
  float y; // xmm3_4
  float z; // xmm5_4
  CEntityInstance *v10; // rdx
  float x; // xmm1_4
  float v12; // xmm2_4
  bool v13; // zf
  bool v14; // zf
  vec_t v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  vec_t v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  float w; // xmm6_4
  _QWORD *v25; // rdi
  vec_t v26; // xmm0_4
  vec_t v27; // xmm0_4
  CUserCmd *v28; // rbx
  HandInfo_t *v29; // r13
  __int64 buttons; // rdx
  float sidemove; // xmm0_4
  int x_low; // xmm0_4
  vec_t v33; // xmm0_4
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  _QWORD *v38; // rdi
  _QWORD *v39; // rdi
  _QWORD *v40; // rdi
  float v41; // [rsp-50h] [rbp-2B8h]
  float v42; // [rsp-4Ch] [rbp-2B4h]
  float v43; // [rsp-4Ch] [rbp-2B4h]
  float v44; // [rsp-4Ch] [rbp-2B4h]
  float v45; // [rsp-48h] [rbp-2B0h]
  float v46; // [rsp-48h] [rbp-2B0h]
  const Quaternion *v47; // [rsp-48h] [rbp-2B0h]
  float v48; // [rsp-40h] [rbp-2A8h]
  const Quaternion *v49; // [rsp-40h] [rbp-2A8h]
  const Quaternion *v50; // [rsp-40h] [rbp-2A8h]
  float v51; // [rsp-40h] [rbp-2A8h]
  float v52; // [rsp-38h] [rbp-2A0h]
  float v53; // [rsp-38h] [rbp-2A0h]
  float v54; // [rsp-38h] [rbp-2A0h]
  float v55; // [rsp-38h] [rbp-2A0h]
  float v56; // [rsp-38h] [rbp-2A0h]
  float v57; // [rsp-38h] [rbp-2A0h]
  float v58; // [rsp-38h] [rbp-2A0h]
  CEntityInstance **v59; // [rsp-38h] [rbp-2A0h]
  float v60; // [rsp-30h] [rbp-298h]
  const Quaternion *v61; // [rsp-30h] [rbp-298h]
  float v62; // [rsp-30h] [rbp-298h]
  float v63; // [rsp-30h] [rbp-298h]
  float v64; // [rsp-30h] [rbp-298h]
  CEntityInstance **v65; // [rsp-30h] [rbp-298h]
  CEntityInstance **v66; // [rsp-30h] [rbp-298h]
  vec_t v67; // [rsp-30h] [rbp-298h]
  const Quaternion *v68; // [rsp-28h] [rbp-290h]
  float v69; // [rsp-28h] [rbp-290h]
  const Quaternion *v70; // [rsp-28h] [rbp-290h]
  const Quaternion *v71; // [rsp-28h] [rbp-290h]
  const Quaternion *v72; // [rsp-28h] [rbp-290h]
  vec_t v73; // [rsp-28h] [rbp-290h]
  vec_t v74; // [rsp-28h] [rbp-290h]
  vec_t v75; // [rsp-28h] [rbp-290h]
  float v76; // [rsp-20h] [rbp-288h]
  CEntityInstance **v77; // [rsp-20h] [rbp-288h]
  float v78; // [rsp-20h] [rbp-288h]
  float v79; // [rsp-20h] [rbp-288h]
  float v80; // [rsp-20h] [rbp-288h]
  vec_t v81; // [rsp-20h] [rbp-288h]
  vec_t v82; // [rsp-20h] [rbp-288h]
  vec_t v83; // [rsp-20h] [rbp-288h]
  CEntityInstance **v84; // [rsp-18h] [rbp-280h]
  float v85; // [rsp-18h] [rbp-280h]
  CEntityInstance **v86; // [rsp-18h] [rbp-280h]
  CEntityInstance **v87; // [rsp-18h] [rbp-280h]
  CEntityInstance **v88; // [rsp-18h] [rbp-280h]
  vec_t v89; // [rsp-18h] [rbp-280h]
  vec_t v90; // [rsp-18h] [rbp-280h]
  vec_t v91; // [rsp-18h] [rbp-280h]
  float thisa; // [rsp+0h] [rbp-268h]
  float this_4; // [rsp+4h] [rbp-264h]
  void (__fastcall **v95)(CUserCmd *__hidden); // [rsp+10h] [rbp-258h] BYREF
  CUserCmd cmd; // [rsp+18h] [rbp-250h] BYREF
  __int64 v97; // [rsp+280h] [rbp+18h] BYREF

  v2 = 0.0;
  p_m_flTrackpadOrJoystickAnalogValueX = &cmd.hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueX;
  v95 = off_403F950;
  hmd_controllers_info = cmd.hmd_controllers_info;
  v6 = &CEntitySpawnHelper::gm_pCurEntityPtr;
  v7 = &quat_identity;
  y = vec3_origin.y;
  this_4 = vec3_angle.y;
  z = vec3_origin.z;
  thisa = vec3_angle.z;
  do
  {
    v10 = *v6;
    p_m_flTrackpadOrJoystickAnalogValueX[-21].m_Value = 0.0;
    x = vec3_origin.x;
    LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) = -1;
    p_m_flTrackpadOrJoystickAnalogValueX[-22].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-23].m_Value = 0.0;
    *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value = v10;
    p_m_flTrackpadOrJoystickAnalogValueX[-20].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-19].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-18].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-15].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-16].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-17].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-14].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-13].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-12].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-9].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-10].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-11].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-8].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-7].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-6].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-5].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-4].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-3].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-2].m_Value = 0.0;
    p_m_flTrackpadOrJoystickAnalogValueX[-1].m_Value = 0.0;
    if ( x == v2 && y == v2 && z == v2 )
    {
      v12 = vec3_angle.x;
      v13 = vec3_angle.x == v2;
    }
    else
    {
      v12 = vec3_angle.x;
      p_m_flTrackpadOrJoystickAnalogValueX[-23].m_Value = x;
      p_m_flTrackpadOrJoystickAnalogValueX[-22].m_Value = y;
      v13 = v12 == v2;
      p_m_flTrackpadOrJoystickAnalogValueX[-21].m_Value = z;
    }
    if ( v13 && this_4 == v2 && thisa == v2 )
    {
      v14 = x == v2;
    }
    else
    {
      v14 = x == v2;
      p_m_flTrackpadOrJoystickAnalogValueX[-20].m_Value = v12;
      p_m_flTrackpadOrJoystickAnalogValueX[-19].m_Value = this_4;
      p_m_flTrackpadOrJoystickAnalogValueX[-18].m_Value = thisa;
    }
    if ( !v14
      || y != p_m_flTrackpadOrJoystickAnalogValueX[-16].m_Value
      || z != p_m_flTrackpadOrJoystickAnalogValueX[-15].m_Value )
    {
      v35 = *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value;
      if ( v35 != 0
        && (*(v35[1] + 49LL) & 4) == 0
        && LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) != 0xFFFF )
      {
        v48 = z;
        v61 = v7;
        v53 = y;
        v69 = v2;
        v77 = v6;
        v85 = x;
        (*(*v35 + 176LL))(v35, 36, 0xFFFFFFFFLL, LOWORD(hmd_controllers_info->__m_pChainEntity.m_pObj));
        v6 = v77;
        v7 = v61;
        x = v85;
        v2 = v69;
        y = v53;
        z = v48;
      }
      p_m_flTrackpadOrJoystickAnalogValueX[-17].m_Value = x;
      p_m_flTrackpadOrJoystickAnalogValueX[-16].m_Value = y;
      p_m_flTrackpadOrJoystickAnalogValueX[-15].m_Value = z;
    }
    v15 = vec3_angle.x;
    v16 = vec3_angle.y;
    v17 = vec3_angle.z;
    if ( vec3_angle.x != p_m_flTrackpadOrJoystickAnalogValueX[-14].m_Value
      || v16 != p_m_flTrackpadOrJoystickAnalogValueX[-13].m_Value
      || v17 != p_m_flTrackpadOrJoystickAnalogValueX[-12].m_Value )
    {
      v40 = *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value;
      if ( v40 != 0
        && (*(v40[1] + 49LL) & 4) == 0
        && LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) != 0xFFFF )
      {
        v43 = z;
        v50 = v7;
        v46 = y;
        v58 = v2;
        v66 = v6;
        v74 = vec3_angle.x;
        v82 = vec3_angle.y;
        v90 = vec3_angle.z;
        (*(*v40 + 176LL))(v40, 48, 0xFFFFFFFFLL, LOWORD(hmd_controllers_info->__m_pChainEntity.m_pObj));
        v6 = v66;
        v7 = v50;
        v17 = v90;
        v16 = v82;
        v15 = v74;
        v2 = v58;
        y = v46;
        z = v43;
      }
      p_m_flTrackpadOrJoystickAnalogValueX[-14].m_Value = v15;
      p_m_flTrackpadOrJoystickAnalogValueX[-13].m_Value = v16;
      p_m_flTrackpadOrJoystickAnalogValueX[-12].m_Value = v17;
    }
    v18 = vec3_origin.x;
    v19 = vec3_origin.y;
    v20 = vec3_origin.z;
    if ( vec3_origin.x != p_m_flTrackpadOrJoystickAnalogValueX[-11].m_Value
      || v19 != p_m_flTrackpadOrJoystickAnalogValueX[-10].m_Value
      || v20 != p_m_flTrackpadOrJoystickAnalogValueX[-9].m_Value )
    {
      v39 = *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value;
      if ( v39 != 0
        && (*(v39[1] + 49LL) & 4) == 0
        && LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) != 0xFFFF )
      {
        v42 = z;
        v49 = v7;
        v45 = y;
        v57 = v2;
        v65 = v6;
        v73 = vec3_origin.x;
        v81 = vec3_origin.y;
        v89 = vec3_origin.z;
        (*(*v39 + 176LL))(v39, 60, 0xFFFFFFFFLL, LOWORD(hmd_controllers_info->__m_pChainEntity.m_pObj));
        v6 = v65;
        v7 = v49;
        v20 = v89;
        v19 = v81;
        v18 = v73;
        v2 = v57;
        y = v45;
        z = v42;
      }
      p_m_flTrackpadOrJoystickAnalogValueX[-11].m_Value = v18;
      p_m_flTrackpadOrJoystickAnalogValueX[-10].m_Value = v19;
      p_m_flTrackpadOrJoystickAnalogValueX[-9].m_Value = v20;
    }
    v21 = v7->x;
    v22 = v7->y;
    v23 = v7->z;
    w = v7->w;
    if ( v7->x != p_m_flTrackpadOrJoystickAnalogValueX[-8].m_Value
      || v22 != p_m_flTrackpadOrJoystickAnalogValueX[-7].m_Value
      || v23 != p_m_flTrackpadOrJoystickAnalogValueX[-6].m_Value
      || w != p_m_flTrackpadOrJoystickAnalogValueX[-5].m_Value )
    {
      v25 = *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value;
      if ( v25 != 0
        && (*(v25[1] + 49LL) & 4) == 0
        && LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) != 0xFFFF )
      {
        v41 = z;
        v47 = v7;
        v44 = y;
        v51 = v2;
        v59 = v6;
        v67 = v7->x;
        v75 = v7->y;
        v83 = v7->z;
        v91 = v7->w;
        (*(*v25 + 176LL))(v25, 72, 0xFFFFFFFFLL, LOWORD(hmd_controllers_info->__m_pChainEntity.m_pObj));
        w = v91;
        v23 = v83;
        v22 = v75;
        v21 = v67;
        v6 = v59;
        v2 = v51;
        v7 = v47;
        y = v44;
        z = v41;
      }
      p_m_flTrackpadOrJoystickAnalogValueX[-8].m_Value = v21;
      p_m_flTrackpadOrJoystickAnalogValueX[-7].m_Value = v22;
      p_m_flTrackpadOrJoystickAnalogValueX[-6].m_Value = v23;
      p_m_flTrackpadOrJoystickAnalogValueX[-5].m_Value = w;
    }
    if ( v2 != p_m_flTrackpadOrJoystickAnalogValueX[-4].m_Value )
    {
      v38 = *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value;
      if ( v38 != 0
        && (*(v38[1] + 49LL) & 4) == 0
        && LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) != 0xFFFF )
      {
        v56 = z;
        v72 = v7;
        v64 = y;
        v80 = v2;
        v88 = v6;
        (*(*v38 + 176LL))(v38, 88, 0xFFFFFFFFLL, LOWORD(hmd_controllers_info->__m_pChainEntity.m_pObj));
        v6 = v88;
        v7 = v72;
        v2 = v80;
        y = v64;
        z = v56;
      }
      p_m_flTrackpadOrJoystickAnalogValueX[-4].m_Value = 0.0;
    }
    if ( v2 != p_m_flTrackpadOrJoystickAnalogValueX[-3].m_Value )
    {
      v37 = *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value;
      if ( v37 != 0
        && (*(v37[1] + 49LL) & 4) == 0
        && LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) != 0xFFFF )
      {
        v55 = z;
        v71 = v7;
        v63 = y;
        v79 = v2;
        v87 = v6;
        (*(*v37 + 176LL))(v37, 92, 0xFFFFFFFFLL, LOWORD(hmd_controllers_info->__m_pChainEntity.m_pObj));
        v6 = v87;
        v7 = v71;
        v2 = v79;
        y = v63;
        z = v55;
      }
      p_m_flTrackpadOrJoystickAnalogValueX[-3].m_Value = 0.0;
    }
    if ( v2 != p_m_flTrackpadOrJoystickAnalogValueX[-2].m_Value )
    {
      v36 = *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value;
      if ( v36 != 0
        && (*(v36[1] + 49LL) & 4) == 0
        && LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) != 0xFFFF )
      {
        v54 = z;
        v70 = v7;
        v62 = y;
        v78 = v2;
        v86 = v6;
        (*(*v36 + 176LL))(v36, 96, 0xFFFFFFFFLL, LOWORD(hmd_controllers_info->__m_pChainEntity.m_pObj));
        v6 = v86;
        v7 = v70;
        v2 = v78;
        y = v62;
        z = v54;
      }
      p_m_flTrackpadOrJoystickAnalogValueX[-2].m_Value = 0.0;
    }
    if ( v2 != p_m_flTrackpadOrJoystickAnalogValueX[-1].m_Value )
    {
      v34 = *&p_m_flTrackpadOrJoystickAnalogValueX[-26].m_Value;
      if ( v34 != 0
        && (*(v34[1] + 49LL) & 4) == 0
        && LOWORD(p_m_flTrackpadOrJoystickAnalogValueX[-24].m_Value) != 0xFFFF )
      {
        v52 = z;
        v68 = v7;
        v60 = y;
        v76 = v2;
        v84 = v6;
        (*(*v34 + 176LL))(v34, 100, 0xFFFFFFFFLL, LOWORD(hmd_controllers_info->__m_pChainEntity.m_pObj));
        v6 = v84;
        v7 = v68;
        v2 = v76;
        y = v60;
        z = v52;
      }
      p_m_flTrackpadOrJoystickAnalogValueX[-1].m_Value = 0.0;
    }
    p_m_flTrackpadOrJoystickAnalogValueX += 26;
    ++hmd_controllers_info;
  }
  while ( p_m_flTrackpadOrJoystickAnalogValueX != &v97 );
  *&cmd.cameraposition[1] = vec3_origin.x;
  v26 = vec3_origin.y;
  cmd.mousedx = 0;
  *&cmd.shoppanel = v26;
  v27 = vec3_origin.z;
  memset(&cmd, 0, 41);
  v28 = (&cmd.crosshairtrace.y + 2);
  v29 = &cmd.hmd_controllers_active[2];
  memset(&cmd.buttons + 4, 0, 17);
  HIWORD(cmd.random_seed) = 0;
  cmd.mousedy = 0;
  cmd.hasbeenpredicted = 0;
  *(&cmd.hasbeenpredicted + 1) = 0;
  LOBYTE(cmd.cameraposition[0]) = 0;
  cmd.crosshairtrace.x = v27;
  LOWORD(cmd.crosshairtrace.y) = 0;
  do
  {
    LOBYTE(v28->_vptr_CUserCmd) = 0;
    v28 = (v28 + 1);
    HandInfo_t::Reset(v29++);
  }
  while ( v28 != (&cmd.crosshairtrace.z + 2) );
  buttons = ucmd->buttons;
  memset(&cmd.hmd_controllers_info[3].m_flTrackpadOrJoystickAnalogValueX, 0, 24);
  cmd.viewangles.y = ucmd->forwardmove;
  sidemove = ucmd->sidemove;
  *&cmd.sidemove = buttons;
  LODWORD(buttons) = ucmd->command_number;
  cmd.viewangles.z = sidemove;
  cmd.forwardmove = ucmd->upmove;
  x_low = LODWORD(ucmd->viewangles.x);
  LODWORD(cmd._vptr_CUserCmd) = buttons;
  LOBYTE(buttons) = ucmd->hasbeenpredicted;
  cmd.command_number = x_low;
  cmd.tick_count = LODWORD(ucmd->viewangles.y);
  v33 = ucmd->viewangles.z;
  LOBYTE(cmd.random_seed) = buttons;
  LOBYTE(cmd.buttons) = ucmd->impulse;
  cmd.weaponsubtype = *&ucmd->mousedx;
  cmd.weaponselect = ucmd->random_seed;
  HIDWORD(cmd._vptr_CUserCmd) = ucmd->tick_count;
  cmd.viewangles.x = v33;
  LODWORD(buttons) = ucmd->weaponselect;
  *&cmd.impulse = ucmd->weaponsubtype;
  HIDWORD(cmd.buttons) = buttons;
  CUserCmd::operator=(&this->m_pParent->m_LastCmd, &v95);
}


// CPlayerInfo::SetLastUserCommand  (line 10338, @0x00000000022c9770, libserver.so)
// calls: CPlayerInfo::SetLastUserCommand
void __fastcall CPlayerInfo::SetLastUserCommand(CPlayerInfo *const this, const CBotCmd *const ucmd)
{
  if ( (*(this->m_pParent->_vptr_IHandleEntity + 521))(this->m_pParent) != 0 )
    CPlayerInfo::SetLastUserCommand(this, ucmd);
}


// CPlayerInfo::GetLastUserCommand  (line 10366, @0x00000000022b82b0, libserver.so)  // inlines: CBotCmd, Init, Reset, operator=
CBotCmd *__fastcall CPlayerInfo::GetLastUserCommand(CBotCmd *__return_ptr retstr, CPlayerInfo *const this)
{
  CBotCmd *result; // rax
  CBasePlayer *m_pParent; // rdx

  result = retstr;
  retstr->command_number = 0;
  retstr->_vptr_CBotCmd = off_4073650;
  retstr->tick_count = 0;
  retstr->viewangles.x = 0.0;
  retstr->viewangles.y = 0.0;
  retstr->viewangles.z = 0.0;
  retstr->forwardmove = 0.0;
  retstr->sidemove = 0.0;
  retstr->upmove = 0.0;
  retstr->buttons = 0;
  retstr->impulse = 0;
  retstr->weaponselect = 0;
  retstr->weaponsubtype = 0;
  retstr->random_seed = 0;
  retstr->mousedx = 0;
  retstr->mousedy = 0;
  retstr->hasbeenpredicted = 0;
  m_pParent = this->m_pParent;
  if ( m_pParent != -3160LL )
  {
    retstr->buttons = m_pParent->m_LastCmd.buttons;
    retstr->command_number = m_pParent->m_LastCmd.command_number;
    retstr->forwardmove = m_pParent->m_LastCmd.forwardmove;
    retstr->hasbeenpredicted = m_pParent->m_LastCmd.hasbeenpredicted;
    retstr->impulse = m_pParent->m_LastCmd.impulse;
    retstr->mousedx = m_pParent->m_LastCmd.mousedx;
    retstr->mousedy = m_pParent->m_LastCmd.mousedy;
    retstr->random_seed = m_pParent->m_LastCmd.random_seed;
    retstr->sidemove = m_pParent->m_LastCmd.sidemove;
    retstr->tick_count = m_pParent->m_LastCmd.tick_count;
    retstr->upmove = m_pParent->m_LastCmd.upmove;
    retstr->viewangles = m_pParent->m_LastCmd.viewangles;
    retstr->weaponselect = m_pParent->m_LastCmd.weaponselect;
    retstr->weaponsubtype = m_pParent->m_LastCmd.weaponsubtype;
  }
  return result;
}


// CBasePlayer::Event_KilledOther  (line 10393, @0x00000000022b8400, libserver.so)
void __fastcall CBasePlayer::Event_KilledOther(
        CBasePlayer *const this,
        CBaseEntity *pVictim,
        const CTakeDamageInfo *const info)
{
  if ( this != pVictim )
    (*(gamestats->_vptr_CBaseGameStats + 23))(gamestats, this, pVictim, info);
}


// CBasePlayer::OnNewModel  (line 10404, @0x00000000022be020, libserver.so)  // inlines: CWeakHandle, GetComponent<CBodyComponent>, Init, operator[]
// calls: CBodyComponent::SetMotionType, CBaseFlex::OnNewModel, CBaseAnimating::LookupPoseParameter
// strings: "body_pitch"
void __fastcall CBasePlayer::OnNewModel(CBasePlayer *const this, HModel hOldModel, HModel hNewModel)
{
  CEntityIdentity *m_pEntity; // rax
  CBodyComponent *v7; // rdi
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rax
  HModel hOldModela; // [rsp+0h] [rbp-40h] BYREF
  HModel hNewModela; // [rsp+10h] [rbp-30h] BYREF

  m_pEntity = this->m_pEntity;
  v7 = 0;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
      v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  CBodyComponent::SetMotionType(v7, VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED);
  hNewModela.m_pBinding = hNewModel.m_pBinding->m_pData;
  hOldModela.m_pBinding = hOldModel.m_pBinding->m_pData;
  CBaseFlex::OnNewModel(this, &hOldModela, &hNewModela);
  this->m_nBodyPitchPoseParam = CBaseAnimating::LookupPoseParameter(this, "body_pitch");
}


// CBasePlayer::SetBodyPitch  (line 10416, @0x00000000022e8a30, libserver.so)
// calls: CBaseAnimating::SetPoseParameter
float __fastcall CBasePlayer::SetBodyPitch(CBasePlayer *const this, double a2, float flPitch)
{
  int m_nBodyPitchPoseParam; // esi

  m_nBodyPitchPoseParam = this->m_nBodyPitchPoseParam;
  if ( m_nBodyPitchPoseParam >= 0 )
    *&a2 = CBaseAnimating::SetPoseParameter(this, m_nBodyPitchPoseParam, a2, flPitch);
  return *&a2;
}


// CBasePlayer::AdjustDrownDmg  (line 10426, @0x00000000022e8a50, libserver.so)
void __fastcall CBasePlayer::AdjustDrownDmg(CBasePlayer *const this, int nAmount)
{
  int v2; // esi
  int m_idrownrestored; // eax

  v2 = this->m_idrowndmg + nAmount;
  m_idrownrestored = this->m_idrownrestored;
  this->m_idrowndmg = v2;
  if ( v2 < m_idrownrestored )
    this->m_idrowndmg = m_idrownrestored;
}


// CBasePlayer::SetSplitScreenPlayer  (line 10437, @0x00000000022e8a80, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBasePlayer::AddSplitScreenPlayer
// callers: CSource2GameClients::ClientPutInServer
void __fastcall CBasePlayer::SetSplitScreenPlayer(
        CBasePlayer *const this,
        bool bSplitScreenPlayer,
        CBasePlayer *pOwner)
{
  CEntityIdentity *m_pEntity; // rcx
  int v4; // eax
  __int16 v5; // si

  this->m_bSplitScreenPlayer = bSplitScreenPlayer;
  if ( pOwner != 0 )
  {
    m_pEntity = pOwner->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hSplitOwner.m_Index) = v5 | this->m_hSplitOwner.m_Index & 0x8000;
      this->m_hSplitOwner.m_Index = (v4 << 15) | this->m_hSplitOwner.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSplitOwner.m_Index = -1;
    }
    CBasePlayer::AddSplitScreenPlayer(pOwner, this);
  }
  else
  {
    this->m_hSplitOwner.m_Index = -1;
  }
}


// CBasePlayer::IsSplitScreenPartner  (line 10449, @0x00000000022e8b10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSplitScreenPlayerOwner, IndexToIdentity, IsValid, LookupEntity, operator CBasePlayer*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePlayer::IsSplitScreenPartner(CBasePlayer *const this, CBasePlayer *pPlayer)
{
  uint32 m_Index; // eax
  CBasePlayer *m_pInstance; // r8
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 v6; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  if ( pPlayer == 0 )
    return 0;
  m_Index = pPlayer->m_hSplitOwner.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pPlayer->m_hSplitOwner.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[pPlayer->m_hSplitOwner.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  if ( this == m_pInstance )
    return 1;
  v6 = this->m_hSplitOwner.m_Index;
  if ( v6 + 2 > 1
    && (m_Index_low = LOWORD(this->m_hSplitOwner.m_Index),
        (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v9 = &v8[m_Index_low & 0x1FF]) != 0
    && v6 == v9->m_EHandle.m_Index
    && pPlayer == v9->m_pInstance )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


// CBasePlayer::IsSplitScreenUserOnEntity  (line 10465, @0x00000000022e8be0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSplitScreenPlayerOwner, IndexToIdentity, Instance, IsUsed, IsValid, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, operator CBasePlayer*, operator CEntityInstance*
// callers: CBaseCombatCharacter::SetTransmit, CBaseViewModel::ShouldTransmit, CBasePlayer::ShouldTransmit, CSceneEntity::ShouldTransmit
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePlayer::IsSplitScreenUserOnEntity(CBasePlayer *const this, CEntityIndex nEntityIndex)
{
  bool result; // al
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r9
  uint32 m_Index; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  __int64 v9; // [rsp-8h] [rbp-8h]

  result = this->m_bSplitScreenPlayer;
  if ( result )
  {
    result = 0;
    if ( nEntityIndex.m_Data <= 0x7FFE )
    {
      v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
      if ( v3 != 0 )
      {
        v4 = &v3[nEntityIndex.m_Data & 0x1FF];
        if ( v4 != 0 )
        {
          *(&v9 - 8) = v4->m_EHandle.m_Index;
          if ( (*(&v9 - 2) & 0x7FFF) == nEntityIndex.m_Data )
          {
            m_pInstance = v4->m_pInstance;
            if ( v4->m_pInstance != 0 )
            {
              m_Index = this->m_hSplitOwner.m_Index;
              if ( m_Index + 2 > 1 )
              {
                v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSplitOwner.m_Index) >> 9) & 0x3F];
                if ( v7 != 0 )
                {
                  v8 = &v7[this->m_hSplitOwner.m_Index & 0x1FF];
                  if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
                    return m_pInstance == v8->m_pInstance;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// CBasePlayer::GetSplitScreenPlayerSlot  (line 10476, @0x00000000022e8dd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSplitScreenPlayerOwner, IndexToIdentity, IsValid, LookupEntity, entindex, operator CBasePlayer*, operator CEntityInstance*
// calls: CEntityInstance::GetEntityIndex
// callers: CDOTAPlayer::ClientCommand
// globals: CEntityHandle::gm_pEntityList
CSplitScreenSlot __fastcall CBasePlayer::GetSplitScreenPlayerSlot(const CBasePlayer *const this)
{
  const CEntityInstance *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( !this->m_bSplitScreenPlayer )
    return 0;
  m_pInstance = 0;
  m_Index = this->m_hSplitOwner.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSplitOwner.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hSplitOwner.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  CEntityInstance::GetEntityIndex(m_pInstance);
  return 0;
}


// CBasePlayer::EnsureSplitScreenTeam  (line 10501, @0x00000000022c2360, libserver.so)  // inlines: GameRules, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSplitScreenPlayerOwner, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CBasePlayer*, operator CEntityInstance*
// calls: GetTeamName, Msg
// strings: "Forcing split screen player onto team %s\n"
// globals: CEntityHandle::gm_pEntityList, CBasePlayer::EnsureSplitScreenTeam(void)::__executeCount
bool __fastcall CBasePlayer::EnsureSplitScreenTeam(CBasePlayer *const this)
{
  char m_bSplitScreenPlayer; // bl
  uint32 m_Index; // ecx
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CEntityInstance *m_pInstance; // rax
  unsigned int m_CScriptComponent_high; // r13d
  const char *TeamName; // rax

  m_bSplitScreenPlayer = (*(g_pGameRules->_vptr_CGameRules + 146))(g_pGameRules);
  if ( m_bSplitScreenPlayer == 0 )
    return m_bSplitScreenPlayer;
  m_bSplitScreenPlayer = this->m_bSplitScreenPlayer;
  if ( m_bSplitScreenPlayer == 0 )
    return m_bSplitScreenPlayer;
  m_Index = this->m_hSplitOwner.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSplitOwner.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[this->m_hSplitOwner.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( m_pInstance == 0 )
    return 0;
  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
  if ( m_CScriptComponent_high <= 1 || m_CScriptComponent_high == this->m_iTeamNum.m_Value )
    return 0;
  TeamName = GetTeamName(m_CScriptComponent_high);
  if ( CBasePlayer::EnsureSplitScreenTeam(void)::__executeCount <= 9 )
  {
    ++CBasePlayer::EnsureSplitScreenTeam(void)::__executeCount;
    Msg("Forcing split screen player onto team %s\n", TeamName);
  }
  (*(this->_vptr_IHandleEntity + 502))(this, m_CScriptComponent_high);
  return m_bSplitScreenPlayer;
}


// CBasePlayer::GetPlayerProxy  (line 10642, @0x00000000022e8e50, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=
// calls: CGameEntitySystem::FindEntityByClassname, __dynamic_cast
// callers: CBasePlayer::FirePlayerProxyOutput
// strings: "logic_playerproxy"
// globals: CEntityHandle::gm_pEntityList
CLogicPlayerProxy *__fastcall CBasePlayer::GetPlayerProxy(CBasePlayer *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CLogicPlayerProxy *result; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // ecx
  __int16 v8; // si
  CEntityIdentity *v9; // rdx
  int v10; // ecx
  __int16 v11; // si

  m_Index = this->m_hPlayerProxy.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayerProxy.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hPlayerProxy.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0
    || (result = __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CLogicPlayerProxy, 0)) == 0 )
  {
    result = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "logic_playerproxy");
    if ( result != 0 )
    {
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v8 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(result->m_hPlayer.m_Index) = v8 | result->m_hPlayer.m_Index & 0x8000;
        result->m_hPlayer.m_Index = (v7 << 15) | result->m_hPlayer.m_Index & 0x7FFF;
      }
      else
      {
        result->m_hPlayer.m_Index = -1;
      }
      v9 = result->m_pEntity;
      if ( v9 != 0 )
      {
        v10 = (v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1);
        v11 = 0x7FFF;
        if ( v9->m_EHandle.m_Index != -1 )
          v11 = v9->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hPlayerProxy.m_Index) = v11 | this->m_hPlayerProxy.m_Index & 0x8000;
        this->m_hPlayerProxy.m_Index = (v10 << 15) | this->m_hPlayerProxy.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hPlayerProxy.m_Index = -1;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CBasePlayer::FirePlayerProxyOutput  (line 10662, @0x00000000022e8fe0, libserver.so)
// calls: CBasePlayer::GetPlayerProxy, CBaseEntity::FireNamedOutput
void __fastcall CBasePlayer::FirePlayerProxyOutput(
        CBasePlayer *const this,
        const char *pszOutputName,
        __int128 variant,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CBaseEntity *v6; // r13
  CLogicPlayerProxy *PlayerProxy; // rax

  v6 = *(&variant + 1);
  if ( CBasePlayer::GetPlayerProxy(this) != 0 )
  {
    PlayerProxy = CBasePlayer::GetPlayerProxy(this);
    CBaseEntity::FireNamedOutput(PlayerProxy, pszOutputName, v6, pActivator, 0.0);
  }
}


// CBasePlayer::UpdateFXVolume  (line 10672, @0x00000000022e9040, libserver.so)  // inlines: CEntityHandle, Get, GetColorCorrectionController, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFogController, GetHandleEntity, GetInstance, GetMasterColorCorrection, GetMasterFogController, GetMasterPostProcessController, GetPostProcessController, GetSerialNumber, GetViewEntity, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, operator CColorCorrection*, operator CEntityInstance*, operator CFogController*, operator CPostProcessController*, operator!=, operator=
// calls: CFogVolume::FindFogVolumeForPosition, FogSystem, CEntityHandle::operator CEntityInstance*, PostProcessSystem, ColorCorrectionSystem, CBaseEntity::GetAbsOrigin
// callers: CBasePlayer::PostThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePlayer::UpdateFXVolume(CBasePlayer *const this)
{
  unsigned __int16 v2; // dx
  __int64 v3; // rsi
  vec_t v4; // eax
  CEntityIdentity *v5; // rdx
  CEntitySystem *v6; // rcx
  __int64 v7; // rsi
  vec_t v8; // xmm1_4
  CFogVolume *FogVolumeForPosition; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  uint32 m_Index; // ecx
  CEntityInstance *m_pInstance; // r15
  CEntityIdentity *v14; // rsi
  __int64 v15; // rdi
  CEntityIdentity *v16; // rsi
  uint32 v17; // ecx
  CEntityInstance *v18; // r14
  CEntityIdentity *v19; // rsi
  __int64 v20; // rdi
  CEntityIdentity *v21; // rsi
  uint32 v22; // ecx
  CEntityInstance *v23; // r13
  unsigned __int16 v24; // si
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  uint32 v27; // eax
  unsigned __int16 v28; // cx
  int v29; // esi
  vec_t v30; // edx
  CEntityIdentity *v31; // rcx
  CEntityIdentity *v32; // rcx
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *m_pEntity; // rax
  int v36; // edx
  __int16 v37; // cx
  uint32 v38; // eax
  CEntityIdentity *v39; // rdx
  CEntityIdentity *v40; // rdx
  CEntityIdentity *v41; // rax
  int v42; // edx
  __int16 v43; // cx
  uint32 v44; // eax
  CEntityIdentity *v45; // rdx
  CEntityIdentity *v46; // rdx
  CEntityIdentity *v47; // rax
  int v48; // edx
  __int16 v49; // cx
  CFogSystem *v50; // rax
  CPostProcessSystem *v51; // rax
  CColorCorrectionSystem *v52; // rax
  CFogSystem *v53; // rax
  CPostProcessSystem *v54; // rax
  Vector eyePos; // [rsp+0h] [rbp-50h] BYREF
  Vector v56; // [rsp+10h] [rbp-40h]

  if ( this->m_hViewEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hViewEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  LODWORD(v4) = (this->m_hViewEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  v5 = (LODWORD(v4) + 2);
  v56.x = v4;
  v6 = g_pEntitySystem;
  if ( v5 > 1
    && (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) != 0
    && (v7 = v3 & 0x1FF, v6 = (8 * v7), v3 = 120 * v7, (v5 = (v5 + v3)) != 0)
    && LODWORD(v4) == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    eyePos = *CBaseEntity::GetAbsOrigin(v5->m_pInstance);
  }
  else
  {
    *&v56.x = (*(this->_vptr_IHandleEntity + 164))(this, v3, v5, v6);
    v56.z = v8;
    eyePos = v56;
  }
  FogVolumeForPosition = CFogVolume::FindFogVolumeForPosition(&eyePos);
  if ( FogVolumeForPosition != 0 )
  {
    m_Index = FogVolumeForPosition->m_hFogController.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(FogVolumeForPosition->m_hFogController.m_Index) >> 9)
                                                           & 0x3F];
      if ( v14 != 0 )
      {
        v15 = FogVolumeForPosition->m_hFogController.m_Index & 0x1FF;
        v10 = 8 * v15;
        v16 = &v14[v15];
        if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
          m_pInstance = v16->m_pInstance;
      }
    }
    v17 = FogVolumeForPosition->m_hPostProcessController.m_Index;
    v18 = 0;
    if ( v17 + 2 > 1 )
    {
      v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(FogVolumeForPosition->m_hPostProcessController.m_Index) >> 9)
                                                           & 0x3F];
      if ( v19 != 0 )
      {
        v20 = FogVolumeForPosition->m_hPostProcessController.m_Index & 0x1FF;
        v10 = 8 * v20;
        v21 = &v19[v20];
        if ( v21 != 0 && v17 == v21->m_EHandle.m_Index )
          v18 = v21->m_pInstance;
      }
    }
    v22 = FogVolumeForPosition->m_hColorCorrectionController.m_Index;
    v23 = 0;
    if ( v22 + 2 > 1 )
    {
      v24 = FogVolumeForPosition->m_hColorCorrectionController.m_Index;
      v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v24 >> 9) & 0x3F];
      if ( v25 != 0 )
      {
        v26 = &v25[v24 & 0x1FF];
        if ( v26 != 0 && v22 == v26->m_EHandle.m_Index )
          v23 = v26->m_pInstance;
      }
    }
    if ( m_pInstance == 0 )
    {
      v53 = FogSystem();
      m_pInstance = CEntityHandle::operator CEntityInstance *(&v53->m_hMasterController);
    }
    if ( v18 == 0 )
    {
      v54 = PostProcessSystem();
      v18 = CEntityHandle::operator CEntityInstance *(&v54->m_hMasterController);
    }
    if ( v23 != 0 )
      goto LABEL_29;
  }
  else
  {
    if ( TheFogVolumes.m_Size <= 0 )
      return;
    v50 = FogSystem();
    m_pInstance = CEntityHandle::operator CEntityInstance *(&v50->m_hMasterController);
    v51 = PostProcessSystem();
    v18 = CEntityHandle::operator CEntityInstance *(&v51->m_hMasterController);
  }
  v52 = ColorCorrectionSystem();
  v23 = CEntityHandle::operator CEntityInstance *(&v52->m_hMasterController);
LABEL_29:
  if ( m_pInstance != 0 )
  {
    v27 = this->m_PlayerFog.m_hCtrl.m_Value.m_Index;
    if ( v27 == -1 )
    {
      v28 = 0x7FFF;
      v29 = 0x7FFF;
    }
    else
    {
      v28 = this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x7FFF;
      v29 = v28;
    }
    LODWORD(v30) = (this->m_PlayerFog.m_hCtrl.m_Value.m_Index >> 15 << 15) | v28 & 0x7FFF;
    v56.x = v30;
    if ( ((LODWORD(v30) + 2) <= 1
       || (v31 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v29 >> 9]) == 0
       || (v32 = &v31[v29 & 0x1FF]) == 0
       || LODWORD(v30) != v32->m_EHandle.m_Index
       || m_pInstance != v32->m_pInstance)
      && (v27 + 2 <= 1
       || (v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_PlayerFog.m_hCtrl.m_Value.m_Index) >> 9)
                                                                & 0x3F]) == 0
       || (v34 = &v33[this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x1FF]) == 0
       || v27 != v34->m_EHandle.m_Index
       || m_pInstance != v34->m_pInstance) )
    {
      (*(this->m_PlayerFog._vptr_fogplayerparams_t + 2))(
        &this->m_PlayerFog,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v10,
        v11,
        *&eyePos.x,
        LODWORD(eyePos.z),
        *&v56.x,
        LODWORD(v56.z));
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v36 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v37 = 0x7FFF;
        else
          v37 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_PlayerFog.m_hCtrl.m_Value.m_Index) = v37 | this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x8000;
        this->m_PlayerFog.m_hCtrl.m_Value.m_Index = (v36 << 15) | this->m_PlayerFog.m_hCtrl.m_Value.m_Index & 0x7FFF;
      }
      else
      {
        this->m_PlayerFog.m_hCtrl.m_Value.m_Index = -1;
      }
    }
  }
  if ( v18 != 0 )
  {
    v38 = this->m_hPostProcessCtrl.m_Value.m_Index;
    if ( v38 + 2 <= 1
      || (v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPostProcessCtrl.m_Value.m_Index) >> 9)
                                                               & 0x3F]) == 0
      || (v40 = &v39[this->m_hPostProcessCtrl.m_Value.m_Index & 0x1FF]) == 0
      || v38 != v40->m_EHandle.m_Index
      || v18 != v40->m_pInstance )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2480, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v41 = v18->m_pEntity;
      if ( v41 != 0 )
      {
        v42 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
        if ( v41->m_EHandle.m_Index == -1 )
          v43 = 0x7FFF;
        else
          v43 = v41->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hPostProcessCtrl.m_Value.m_Index) = v43 | this->m_hPostProcessCtrl.m_Value.m_Index & 0x8000;
        this->m_hPostProcessCtrl.m_Value.m_Index = (v42 << 15) | this->m_hPostProcessCtrl.m_Value.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hPostProcessCtrl.m_Value.m_Index = -1;
      }
    }
  }
  if ( v23 != 0 )
  {
    v44 = this->m_hColorCorrectionCtrl.m_Value.m_Index;
    if ( v44 + 2 <= 1
      || (v45 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hColorCorrectionCtrl.m_Value.m_Index) >> 9)
                                                               & 0x3F]) == 0
      || (v46 = &v45[this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x1FF]) == 0
      || v44 != v46->m_EHandle.m_Index
      || v46->m_pInstance != v23 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2484, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v47 = v23->m_pEntity;
      if ( v47 != 0 )
      {
        v48 = (v47->m_EHandle.m_Index >> 15) - (v47->m_flags & 1);
        if ( v47->m_EHandle.m_Index == -1 )
          v49 = 0x7FFF;
        else
          v49 = v47->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hColorCorrectionCtrl.m_Value.m_Index) = v49
                                                             | this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x8000;
        this->m_hColorCorrectionCtrl.m_Value.m_Index = (v48 << 15)
                                                     | this->m_hColorCorrectionCtrl.m_Value.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hColorCorrectionCtrl.m_Value.m_Index = -1;
      }
    }
  }
}


// CBasePlayer::PlayerHoldingEntity  (line 10739, @0x00000000022e9d70, libserver.so)
// calls: UTIL_PlayerByIndex, UTIL_GetLocalPlayer
// callers: CBaseEntity::VPhysicsTakeDamage
CBasePlayer *__fastcall CBasePlayer::PlayerHoldingEntity(CBaseEntity *pEnt)
{
  int v2; // ebx
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // r12

  v2 = 0;
  if ( gpGlobals->maxClients <= 1 )
    return UTIL_GetLocalPlayer();
  while ( 1 )
  {
    v3 = UTIL_PlayerByIndex(++v2);
    v4 = v3;
    if ( v3 != 0 && (*(v3->_vptr_IHandleEntity + 482))(v3, pEnt) != 0 )
      break;
    if ( v2 >= gpGlobals->maxClients )
      return 0;
  }
  return v4;
}


// CBasePlayer::GetSteamID  (line 10768, @0x00000000022e9e00, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex
// callers: CBasePlayer::GetSteamIDAsUInt64, CDOTAConsumableEconItem::NotifyGC
bool __fastcall CBasePlayer::GetSteamID(CBasePlayer *const this, CSteamID *pID)
{
  __int64 (__fastcall *v3)(IVEngineServer2 *, _QWORD); // r12
  CEntityIndex v4; // eax
  CSteamID::SteamID_t *v5; // rax

  v3 = *(*engine + 544LL);
  v4.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v5 = v3(engine, v4.m_Data);
  if ( v5 == 0 )
    return 0;
  pID->m_steamid.m_comp = v5->m_comp;
  return 1;
}


// CBasePlayer::GetSteamIDAsUInt64  (line 10782, @0x00000000022e9e60, libserver.so)  // inlines: CSteamID, ConvertToUint64
// calls: CBasePlayer::GetSteamID
uint64 __fastcall CBasePlayer::GetSteamIDAsUInt64(CBasePlayer *const this)
{
  bool SteamID; // al
  uint64 v2; // rdx
  CSteamID steamIDForPlayer; // [rsp+0h] [rbp-10h] BYREF

  HIWORD(steamIDForPlayer.m_steamid.m_unAll64Bits) = BYTE6(steamIDForPlayer.m_steamid.m_unAll64Bits) & 0xF;
  steamIDForPlayer.m_steamid.m_comp = (steamIDForPlayer.m_steamid.m_unAll64Bits & 0xFFF0000000000000LL);
  SteamID = CBasePlayer::GetSteamID(this, &steamIDForPlayer);
  v2 = 0;
  if ( SteamID )
    return steamIDForPlayer.m_steamid.m_unAll64Bits;
  return v2;
}


// CBasePlayer::SetUnHoldableButtons  (line 10793, @0x00000000022e9ea0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<long long unsigned int>
void __fastcall CBasePlayer::SetUnHoldableButtons(CBasePlayer *const this, ButtonBitMask_t nButtonFlags)
{
  if ( this->m_nUnHoldableButtons.m_Value != nButtonFlags )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4472, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nUnHoldableButtons.m_Value = nButtonFlags;
  }
}


// IsBoundingBoxInFrustum  (line 10798, @0x00000000022e9ee0, libserver.so)  // inlines: BoundingVolumeIntersectsFrustum, DEG2RAD, Init, InitCamera, InitPerspectiveProjection, InitViewParameters, VectorSubtract, operator-, operator=
// calls: tan, CFrustum::CFrustum, CFrustum::UpdateViewAndProjectionFromCamera, Frustum_t::Intersects
// callers: CBasePlayer::IsBoundingBoxInView
bool __cdecl IsBoundingBoxInFrustum(
        Vector vRenderMins,
        Vector vRenderMaxs,
        Vector vCameraOrigin,
        QAngle qCameraAngles,
        float flNear,
        float flFar,
        float flHorizontalFOV,
        float flVerticalFOV)
{
  __m128d v8; // xmm2
  float v9; // xmm7_4
  double v11; // [rsp+0h] [rbp-3F0h]
  double v12; // [rsp+8h] [rbp-3E8h]
  Vector mins; // [rsp+50h] [rbp-3A0h] BYREF
  Vector maxs; // [rsp+60h] [rbp-390h] BYREF
  CFrustum frustum; // [rsp+70h] [rbp-380h] BYREF

  v11 = tan(((0.5 * flHorizontalFOV) * 0.017453292));
  v12 = tan(((0.5 * flVerticalFOV) * 0.017453292));
  CFrustum::CFrustum(&frustum);
  v8 = *&v11;
  v8.m128d_f64[0] = v11 / v12;
  frustum.m_camera.m_vOrigin = vCameraOrigin;
  frustum.m_camera.m_flZNear = flNear;
  frustum.m_camera.m_flZFar = flFar;
  frustum.m_camera.m_flWidth = -1.0;
  frustum.m_camera.m_angles = qCameraAngles;
  frustum.m_camera.m_flHeight = -1.0;
  frustum.m_flClipSpaceBottomLeftX = -1.0;
  frustum.m_flClipSpaceBottomLeftY = -1.0;
  frustum.m_camera.m_flFOVX = flHorizontalFOV;
  frustum.m_flClipSpaceTopRightX = 1.0;
  frustum.m_flClipSpaceTopRightY = 1.0;
  v9 = _mm_movedup_pd(v8).m128d_f64[0];
  frustum.m_camera.m_flAspect = v9;
  CFrustum::UpdateViewAndProjectionFromCamera(&frustum);
  mins.y = vRenderMins.y - frustum.m_camera.m_vOrigin.y;
  mins.z = vRenderMins.z - frustum.m_camera.m_vOrigin.z;
  mins.x = vRenderMins.x - frustum.m_camera.m_vOrigin.x;
  maxs.y = vRenderMaxs.y - frustum.m_camera.m_vOrigin.y;
  maxs.z = vRenderMaxs.z - frustum.m_camera.m_vOrigin.z;
  maxs.x = vRenderMaxs.x - frustum.m_camera.m_vOrigin.x;
  return Frustum_t::Intersects(&frustum.m_frustumStruct, &mins, &maxs);
}


// CBasePlayer::IsBoundingBoxInView  (line 10817, @0x00000000022ea130, libserver.so)
// calls: CBasePlayer::GetFOV, CBasePlayer::CalcView, IsBoundingBoxInFrustum
// callers: CPropVRHand::UpdateTrackingData
bool __fastcall CBasePlayer::IsBoundingBoxInView(
        CBasePlayer *const this,
        const Vector *const vMins,
        const Vector *const vMaxs)
{
  double v6; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v8; // xmm1_4
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  vec_t z; // xmm3_4
  float flHorizontalFOV; // xmm2_4
  bool result; // al
  float flVerticalFOV; // [rsp+18h] [rbp-98h]
  float flNear; // [rsp+24h] [rbp-8Ch] BYREF
  float flFar; // [rsp+28h] [rbp-88h] BYREF
  float flFov; // [rsp+2Ch] [rbp-84h] BYREF
  Vector vCameraOrigin; // [rsp+30h] [rbp-80h] BYREF
  QAngle qCameraAngle; // [rsp+40h] [rbp-70h] BYREF
  VrFovAndClipSpace_t fovAndClipSpace; // [rsp+50h] [rbp-60h] BYREF
  Vector v24; // 0:kr00_12.12
  Vector v25; // 0:xmm0_8.8,8:xmm1_4.4

  v6 = (*(this->_vptr_IHandleEntity + 164))(this);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  vCameraOrigin.z = v8;
  *&vCameraOrigin.x = v6;
  v9 = (vptr_IHandleEntity[165])(this);
  v10 = *v9;
  flNear = 1.0;
  flFar = 500.0;
  *&qCameraAngle.x = v10;
  qCameraAngle.z = *(v9 + 8);
  flFov = CBasePlayer::GetFOV(this);
  CBasePlayer::CalcView(this, &vCameraOrigin, &qCameraAngle, &flNear, &flFar, &flFov);
  if ( g_pVr == 0 || (*(*g_pVr + 104LL))(g_pVr) == 0 )
  {
    v11 = *&vMaxs->x;
    flVerticalFOV = 75.0;
    z = vMaxs->z;
    v25 = *vMins;
    flHorizontalFOV = flFov;
LABEL_4:
    *&v24.x = v11;
    v24.z = z;
    return IsBoundingBoxInFrustum(v25, v24, vCameraOrigin, qCameraAngle, flNear, flFar, flHorizontalFOV, flVerticalFOV);
  }
  (*(*g_pVr + 224LL))(&fovAndClipSpace);
  result = IsBoundingBoxInFrustum(
             *vMins,
             *vMaxs,
             vCameraOrigin,
             qCameraAngle,
             flNear,
             flFar,
             fovAndClipSpace.m_flLeftEyeFovRight + fovAndClipSpace.m_flLeftEyeFovLeft,
             fovAndClipSpace.m_flLeftEyeFovTop + fovAndClipSpace.m_flLeftEyeFovBottom);
  if ( !result )
  {
    v11 = *&vMaxs->x;
    z = vMaxs->z;
    v25 = *vMins;
    flVerticalFOV = fovAndClipSpace.m_flRightEyeFovTop + fovAndClipSpace.m_flRightEyeFovBottom;
    flHorizontalFOV = fovAndClipSpace.m_flRightEyeFovRight + fovAndClipSpace.m_flRightEyeFovLeft;
    goto LABEL_4;
  }
  return result;
}


// GetPlayerIfEntityIsPartOfPlayer  (line 10849, @0x00000000022ea310, libserver.so)
CBasePlayer *__fastcall GetPlayerIfEntityIsPartOfPlayer(CBaseEntity *pEntity)
{
  return 0;
}


