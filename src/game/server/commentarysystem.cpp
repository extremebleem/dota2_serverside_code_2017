// Reconstructed from DWARF by pahole; not original source.

// src/game/server/commentarysystem.cpp:62
struct modifiedconvars_t {
	static datamap_t m_DataMap;

	char pszConvar[128];  // +0x0
	char pszCurrentValue[128];  // +0x80
	char pszOrgValue[128];  // +0x100
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 384
};

// src/game/server/commentarysystem.cpp:81
class CPointCommentaryNode : public CBaseAnimating {
	class NetworkVar_m_iszCommentaryFile {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hViewPosition {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bActive {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iszSpeakers {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iNodeNumber {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iNodeNumberMax {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	string_t m_iszPreCommands;  // +0x4c0
	string_t m_iszPostCommands;  // +0x4c8
	string_t m_iszViewTarget;  // +0x4d8
	EHANDLE m_hViewTarget;  // +0x4e0
	EHANDLE m_hViewTargetAngles;  // +0x4e4
	string_t m_iszViewPosition;  // +0x4e8
	EHANDLE m_hViewPositionMover;  // +0x4f4
	bool m_bPreventMovement;  // +0x4f8
	bool m_bUnderCrosshair;  // +0x4f9
	bool m_bUnstoppable;  // +0x4fa

	float m_flFinishedTime;  // +0x4fc
	bool m_bPreventChangesWhileMoving;  // +0x524
	bool m_bDisabled;  // +0x525

	COutputEvent m_pOnCommentaryStarted;  // +0x538
	COutputEvent m_pOnCommentaryStopped;  // +0x550

	typedef CBaseAnimating BaseClass;
	typedef CPointCommentaryNode ThisClass;

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
	CPointCommentaryNode(CPointCommentaryNode &);
	CPointCommentaryNode(CPointCommentaryNode &);
	CPointCommentaryNode();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	void SpinThink();
	void StartCommentary();
	void FinishCommentary(bool);
	void CleanupPostCommentary();
	void UpdateViewThink();
	void UpdateViewPostThink();
	bool HasViewTarget();
	bool PreventsMovement();
	bool CannotBeStopped();
	virtual int UpdateTransmitState();
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	void SetDisabled(bool);
	void SetNodeNumber(int);
	void SetUnderCrosshair(bool);
	void PlayerActivated();
	void StopPlaying();
	void AbortPlaying();
	void TeleportTo(CBasePlayer *);
	bool CanTeleportTo();
	void InputStartCommentary(inputdata_t &);
	void InputStartUnstoppableCommentary(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual ~CPointCommentaryNode();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// vtable[66] SetTransmit
	// sizeof = 1408
};

// src/game/server/commentarysystem.cpp:195
class C_CPointCommentaryNode_MapInstall {
	C_CPointCommentaryNode_MapInstall();

	// sizeof = 1
};

// src/game/server/commentarysystem.cpp:201
class CCommentaryViewPosition : public CSprite {
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
	CCommentaryViewPosition(CCommentaryViewPosition &);
	CCommentaryViewPosition(CCommentaryViewPosition &);
	CCommentaryViewPosition();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CCommentaryViewPosition();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// sizeof = 1264
};

// src/game/server/commentarysystem.cpp:251
class CCommentarySystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	static datamap_t m_DataMap;

private:

	int m_afPlayersLastButtons;  // +0x14
	int m_iCommentaryNodeCount;  // +0x18
	bool m_bCommentaryConvarsChanging;  // +0x1c

	int m_iClearPressedButtons;  // +0x20
	bool m_bCommentaryEnabledMidGame;  // +0x24

	float m_flNextTeleportTime;  // +0x28
	int m_iTeleportStage;  // +0x2c
	bool m_bCheatState;  // +0x30
	bool m_bIsFirstSpawnGroupToLoad;  // +0x31

	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CCommentarySystem *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CCommentarySystem();
	virtual void GameInit(const EventGameInit_t &);
	void CalculateCommentaryState();
	void ReplaceChar(char *, char, char);
	void ReplaceQuotesInEntityKeyValues(CEntityKeyValues *);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	CPointCommentaryNode * GetNodeUnderCrosshair();
	void PrePlayerRunCommand(CBasePlayer *, CUserCmd *);
	CPointCommentaryNode * GetActiveNode();
	void SetActiveNode(CPointCommentaryNode *);
	int GetCommentaryNodeCount();
	bool CommentaryConvarsChanging();
	void SetCommentaryConvarsChanging(bool);
	void ConvarChanged(IConVar *, const char *, float);
	void InitCommentary();
	void LoadCommentaryFile();
	void LoadEntityFile(const char *);
	void ApplyCommentaryModifications(int, PreSpawnListInfo_t *);
	void ShutDownCommentary();
	void SetCommentaryMode(bool);
	virtual void RestoreGame(const EventRestoreGame_t &);
	bool CommentaryWasEnabledMidGame();
	void JumpToNextNode(CBasePlayer *);
	virtual ~CCommentarySystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[40] GetDataDescMap
	// vtable[3] GameInit
	// vtable[15] PostSpawnGroupLoad
	// vtable[11] GameDeactivate
	// vtable[32] RestoreGame
	// sizeof = 128
};

// src/game/server/commentarysystem.cpp:1835
class CCommentary_SaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler {
public:

private:

	bool m_fDoLoad;  // +0x8
	CCommentary_SaveRestoreBlockHandler(CCommentary_SaveRestoreBlockHandler &);
	CCommentary_SaveRestoreBlockHandler(const CCommentary_SaveRestoreBlockHandler &);
	CCommentary_SaveRestoreBlockHandler();
	virtual const char * GetBlockName();
	virtual void Save(ISave *);
	virtual void WriteSaveHeaders(ISave *);
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);

	// vtable[0] GetBlockName
	// vtable[2] Save
	// vtable[3] WriteSaveHeaders
	// vtable[6] ReadRestoreHeaders
	// vtable[7] Restore
	// sizeof = 16
};

// src/game/server/commentarysystem.cpp:1915
class CCommentaryAuto : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnCommentaryNewGame;  // +0x308
	COutputEvent m_OnCommentaryMidGame;  // +0x320
	COutputEvent m_OnCommentaryMultiplayerSpawn;  // +0x338
	typedef CBaseEntity BaseClass;

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
	CCommentaryAuto(CCommentaryAuto &);
	CCommentaryAuto(CCommentaryAuto &);
	CCommentaryAuto();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	void InputMultiplayerSpawned(inputdata_t &);
	virtual ~CCommentaryAuto();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[117] Think
	// sizeof = 848
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IsInCommentaryMode  (line 72, @0x000000000219e7d0, libserver.so)
// callers: CServerAchievementManager::CheckAchievementsEnabled, CBasePlayer::OnTakeDamage
// globals: g_bInCommentaryMode
bool __cdecl IsInCommentaryMode()
{
  return g_bInCommentaryMode;
}


// CPointCommentaryNode::~CPointCommentaryNode  (line 81, @0x00000000021b26f0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CPointCommentaryNode::~CPointCommentaryNode(CPointCommentaryNode *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPointCommentaryNode::~CPointCommentaryNode  (line 81, @0x00000000021b2730, libserver.so)  // inlines: ~CBaseAnimating, ~CPointCommentaryNode
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPointCommentaryNode::~CPointCommentaryNode(CPointCommentaryNode *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointCommentaryNode::GetEntityClass  (line 83, @0x00000000021b1250, libserver.so)
CEntityClass *__cdecl CPointCommentaryNode::GetEntityClass()
{
  return g_pEntityCPointCommentaryNodeClass;
}


// CPointCommentaryNode::Schema_DynamicBinding  (line 83, @0x00000000021b1260, libserver.so)
// globals: CPointCommentaryNode::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointCommentaryNode::Schema_DynamicBinding(
        const CPointCommentaryNode *const this)
{
  return CPointCommentaryNode::s_pSchemaBinding;
}


// CPointCommentaryNode::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 83, @0x00000000021b1270, libserver.so)
// globals: CPointCommentaryNode::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointCommentaryNode::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointCommentaryNode::CEntityInstanceEntityClass *const this)
{
  return CPointCommentaryNode::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointCommentaryNode::CEntityInstanceEntityClass::DestructInstance  (line 83, @0x00000000021b1280, libserver.so)  // inlines: Destruct<CPointCommentaryNode>
void __fastcall CPointCommentaryNode::CEntityInstanceEntityClass::DestructInstance(
        CPointCommentaryNode::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointCommentaryNode::CEntityInstanceEntityClass::FreeInstance  (line 83, @0x00000000021b12a0, libserver.so)
void __fastcall CPointCommentaryNode::CEntityInstanceEntityClass::FreeInstance(
        CPointCommentaryNode::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointCommentaryNode::CEntityInstanceEntityClass::CanAllocate  (line 83, @0x00000000021b12c0, libserver.so)
bool __fastcall CPointCommentaryNode::CEntityInstanceEntityClass::CanAllocate(
        const CPointCommentaryNode::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointCommentaryNode::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 83, @0x00000000021b12d0, libserver.so)
// globals: CPointCommentaryNode::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointCommentaryNode::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointCommentaryNode::CEntityInstanceEntityClass *const this)
{
  return CPointCommentaryNode::s_pSchemaBinding;
}


// CPointCommentaryNode::CEntityInstanceEntityClass::AllocateInstance  (line 83, @0x00000000021b2080, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointCommentaryNode::CEntityInstanceEntityClass::AllocateInstance(
        CPointCommentaryNode::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1408);
  memset(v1, 0, 0x580u);
  return v1;
}


// CPointCommentaryNode::CEntityInstanceEntityClass::ConstructInstance  (line 83, @0x00000000021b3220, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CNetworkHandleBase, CNetworkVarBase, CPointCommentaryNode, CUtlSymbolLarge, Construct<CPointCommentaryNode>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<unsigned int>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CPointCommentaryNode::CEntityInstanceEntityClass::ConstructInstance(
        CPointCommentaryNode::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 152) = 0;
    *p = &off_4011890;
    *(p + 153) = 0;
    *(p + 154) = 0;
    *(p + 155) = 0;
    *(p + 312) = -1;
    *(p + 313) = -1;
    *(p + 157) = 0;
    *(p + 316) = -1;
    *(p + 317) = -1;
    *(p + 167) = off_3F7C190;
    *(p + 170) = off_3F7C190;
    *(p + 1384) = 0;
    *(p + 347) = 0;
    *(p + 174) = 0;
    *(p + 350) = 0;
    *(p + 351) = 0;
  }
  return p;
}


// CPointCommentaryNode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 83, @0x00000000021b37e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointCommentaryNode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointCommentaryNode::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointCommentaryNode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 83, @0x00000000021b3800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointCommentaryNode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointCommentaryNode::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointCommentaryNode::GetEntityClassInternal  (line 83, @0x00000000021b7fa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "point_commentary_node", "CPointCommentaryNode", "baseanimating", "CBaseAnimating"
// globals: `guard variable for'CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass, CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass, __dso_handle, CPointCommentaryNode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo, CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo
CEntityClass *__cdecl CPointCommentaryNode::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass);
    CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass._vptr_CEntityClass = off_4011810;
    __cxa_guard_release(&`guard variable for'CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass);
    __cxa_atexit(
      CPointCommentaryNode::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointCommentaryNodeClass != 0 )
    return &CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass;
  if ( `guard variable for'CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
        "CBaseAnimating",
        "baseanimating",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo,
      "CPointCommentaryNode",
      "point_commentary_node",
      0,
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
    __cxa_guard_release(&`guard variable for'CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo);
  }
  CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass.m_pClassInfo = &CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo;
  CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass.m_pBaseClassInfo = CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo.m_pBaseClassInfo;
  g_pEntityCPointCommentaryNodeClass = &CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass;
  CPointCommentaryNode::GetEntityClassInfo(void)::g_EntityCPointCommentaryNodeClassInfo.m_pClass = &CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass;
  CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCPointCommentaryNodeClass->m_pComponentOverrides = 0;
  return &CPointCommentaryNode::GetEntityClassInternal(void)::g_EntityCPointCommentaryNodeClass;
}


// CPointCommentaryNode::HasViewTarget  (line 97, @0x00000000021b59f0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, operator CEntityInstance*
// callers: CommentarySystem_PePlayerRunCommand
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CPointCommentaryNode::HasViewTarget(CPointCommentaryNode *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  m_Index = this->m_hViewTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewTarget.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_hViewTarget.m_Index & 0x1FF];
      if ( v3 != 0 && m_Index == v3->m_EHandle.m_Index && v3->m_pInstance != 0 )
        return 1;
    }
  }
  if ( this->m_hViewPosition.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hViewPosition.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  return v6 + 2 > 1
      && (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
      && (v8 = &v7[v5 & 0x1FF]) != 0
      && v6 == v8->m_EHandle.m_Index
      && v8->m_pInstance != 0;
}


// CPointCommentaryNode::GetDataDescMap  (line 153, @0x0000000002187820, libserver.so)
// globals: CPointCommentaryNode::m_DataMap
datamap_t *__fastcall CPointCommentaryNode::GetDataDescMap(CPointCommentaryNode *const this)
{
  return &CPointCommentaryNode::m_DataMap;
}


// CPointCommentaryNode::AddDatadescMetadataKeys  (line 153, @0x000000000219e7e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointCommentaryNode::GetEntityClass(void)
void __fastcall CPointCommentaryNode::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointCommentaryNode::GetEntityClass);
}


// CPointCommentaryNode::GetBaseMap  (line 153, @0x000000000219e800, libserver.so)
datamap_t *__cdecl CPointCommentaryNode::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CPointCommentaryNode>  (line 153, @0x00000000021ae120, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CPointCommentaryNode"
// globals: `guard variable for'DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder, `guard variable for'DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc, CPointCommentaryNode::GetEntityClass(void), CPointCommentaryNode::m_DataMap, DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *a1)
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

  if ( `guard variable for'datamap_t * DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder) != 0 )
  {
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_pszBase = "CPointCommentaryNode";
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder,
      &_dso_handle);
  }
  CPointCommentaryNode::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc) != 0 )
  {
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc[25].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc[26].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_pszBase), "SpinThink");
    m_Size = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size == DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc[31].fieldName = v2;
    v6 = operator new[](DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_nLenBase + 16);
    strcpy(
      stpcpy(v6, DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_pszBase),
      "UpdateViewThink");
    v7 = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size == DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory,
        1);
      v8 = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc[32].fieldName = v6;
    v10 = operator new[](DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_nLenBase + 20);
    strcpy(
      stpcpy(v10, DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_pszBase),
      "UpdateViewPostThink");
    v11 = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size == DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory,
        1);
      v12 = DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc[33].fieldName = v10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc);
  }
  CPointCommentaryNode::m_DataMap.dataNumFields = 33;
  CPointCommentaryNode::m_DataMap.dataDesc = &DataMapInit<CPointCommentaryNode>(CPointCommentaryNode *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointCommentaryNode::m_DataMap, CPointCommentaryNode::GetEntityClass);
  return &CPointCommentaryNode::m_DataMap;
}


// CPointCommentaryNode::YouForgotToImplementOrDeclareServerClass  (line 195, @0x0000000002187830, libserver.so)
int __fastcall CPointCommentaryNode::YouForgotToImplementOrDeclareServerClass(CPointCommentaryNode *const this)
{
  return 0;
}


// CPointCommentaryNode::GetServerClass  (line 195, @0x000000000218f0c0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointCommentaryNode::GetServerClass(CPointCommentaryNode *const this)
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


// CCommentaryViewPosition::~CCommentaryViewPosition  (line 201, @0x00000000021b6390, libserver.so)  // inlines: ~CNetworkVarBase, ~CSprite, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CCommentaryViewPosition::~CCommentaryViewPosition(CCommentaryViewPosition *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSprite::NetworkVar_m_hSpriteMaterial> *p_m_hSpriteMaterial; // rdi

  p_m_hSpriteMaterial = &this->m_hSpriteMaterial;
  p_m_hSpriteMaterial[-144].m_Value.m_pBinding = &off_40B1BF0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSpriteMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CCommentaryViewPosition::~CCommentaryViewPosition  (line 201, @0x00000000021b63d0, libserver.so)  // inlines: ~CCommentaryViewPosition, ~CNetworkVarBase, ~CSprite, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CCommentaryViewPosition::~CCommentaryViewPosition(CCommentaryViewPosition *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSprite::NetworkVar_m_hSpriteMaterial> *p_m_hSpriteMaterial; // rdi

  p_m_hSpriteMaterial = &this->m_hSpriteMaterial;
  p_m_hSpriteMaterial[-144].m_Value.m_pBinding = &off_40B1BF0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSpriteMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CCommentaryViewPosition::Schema_DynamicBinding  (line 203, @0x00000000021b12e0, libserver.so)
// globals: CCommentaryViewPosition::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CCommentaryViewPosition::Schema_DynamicBinding(
        const CCommentaryViewPosition *const this)
{
  return CCommentaryViewPosition::s_pSchemaBinding;
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 203, @0x00000000021b12f0, libserver.so)
// globals: CCommentaryViewPosition::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CCommentaryViewPosition::CEntityInstanceEntityClass *const this)
{
  return CCommentaryViewPosition::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::DestructInstance  (line 203, @0x00000000021b1300, libserver.so)  // inlines: Destruct<CCommentaryViewPosition>
void __fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::DestructInstance(
        CCommentaryViewPosition::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::FreeInstance  (line 203, @0x00000000021b1320, libserver.so)
void __fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::FreeInstance(
        CCommentaryViewPosition::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::CanAllocate  (line 203, @0x00000000021b1340, libserver.so)
bool __fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::CanAllocate(
        const CCommentaryViewPosition::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 203, @0x00000000021b1350, libserver.so)
// globals: CCommentaryViewPosition::s_pSchemaBinding
const ISchemaBinding *__fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CCommentaryViewPosition::CEntityInstanceEntityClass *const this)
{
  return CCommentaryViewPosition::s_pSchemaBinding;
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::AllocateInstance  (line 203, @0x00000000021b20c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::AllocateInstance(
        CCommentaryViewPosition::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1264);
  memset(v1, 0, 0x4F0u);
  return v1;
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::ConstructInstance  (line 203, @0x00000000021b2d20, libserver.so)  // inlines: CCommentaryViewPosition, Construct<CCommentaryViewPosition>
// calls: CSprite::CSprite
CEntityInstance *__fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::ConstructInstance(
        CCommentaryViewPosition::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CSprite::CSprite(p);
    *p = &off_4012110;
  }
  return p;
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 203, @0x00000000021b3a60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CCommentaryViewPosition::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CCommentaryViewPosition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 203, @0x00000000021b3a80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CCommentaryViewPosition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CCommentaryViewPosition::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CCommentaryViewPosition::GetEntityClassInternal  (line 203, @0x00000000021b8130, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "point_commentary_viewpoint", "CCommentaryViewPosition", "env_sprite", "CSprite"
// globals: `guard variable for'CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass, CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass, __dso_handle, CCommentaryViewPosition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo, CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo, `guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo, CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo
CEntityClass *__cdecl CCommentaryViewPosition::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass);
    CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass._vptr_CEntityClass = off_4012090;
    __cxa_guard_release(&`guard variable for'CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass);
    __cxa_atexit(
      CCommentaryViewPosition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass,
      &_dso_handle);
  }
  if ( g_pEntityCCommentaryViewPositionClass != 0 )
    return &CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass;
  if ( `guard variable for'CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo) != 0 )
  {
    if ( `guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo,
        "CSprite",
        "env_sprite",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo,
      "CCommentaryViewPosition",
      "point_commentary_viewpoint",
      0,
      &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo);
    __cxa_guard_release(&`guard variable for'CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo);
  }
  CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass.m_pClassInfo = &CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo;
  CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass.m_pBaseClassInfo = CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo.m_pBaseClassInfo;
  g_pEntityCCommentaryViewPositionClass = &CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass;
  CCommentaryViewPosition::GetEntityClassInfo(void)::g_EntityCCommentaryViewPositionClassInfo.m_pClass = &CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass;
  CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCCommentaryViewPositionClass->m_pComponentOverrides = 0;
  return &CCommentaryViewPosition::GetEntityClassInternal(void)::g_EntityCCommentaryViewPositionClass;
}


// CCommentaryViewPosition::Spawn  (line 205, @0x00000000021b5800, libserver.so)  // inlines: FindOrRegisterResourceByName<1952542070ull>, FromUntypedHandleUnchecked, InitUntypedUnchecked
// calls: CSprite::SetMaterialByIndex, CSprite::Spawn, CBaseEntity::SetMoveType, CCollisionProperty::SetupPhysicsAsNoCollision, CBaseEntity::AddEffects, UTIL_SetSize
// strings: "materials/sprites/redglow1.vmat"
void __fastcall CCommentaryViewPosition::Spawn(CCommentaryViewPosition *const this, const CEntityKeyValues *pKeyValues)
{
  HMaterial hMaterial; // [rsp+0h] [rbp-20h] BYREF

  hMaterial.m_pBinding = (*(*g_pResourceSystem + 256LL))(
                           g_pResourceSystem,
                           "materials/sprites/redglow1.vmat",
                           1952542070,
                           1);
  CSprite::SetMaterialByIndex(this, &hMaterial);
  CSprite::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CCollisionProperty::SetupPhysicsAsNoCollision(&this->m_Collision, 1);
  CBaseEntity::AddEffects(this, 16);
  UTIL_SetSize(this, &vec3_origin, &vec3_origin);
}


// CCommentaryViewPosition::Precache  (line 217, @0x00000000021b2d50, libserver.so)
// calls: PrecacheMaterial
// strings: "materials/sprites/redglow1.vmat"
void __fastcall CCommentaryViewPosition::Precache(
        CCommentaryViewPosition *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheMaterial("materials/sprites/redglow1.vmat", pContext);
}


// GetCommentaryPlayer  (line 226, @0x000000000219e810, libserver.so)
// calls: UTIL_PlayerByIndex, UTIL_GetLocalPlayer
// callers: CPointCommentaryNode::UpdateViewThink, CPointCommentaryNode::StartCommentary, CPointCommentaryNode::CleanupPostCommentary, CPointCommentaryNode::UpdateViewPostThink, CPointCommentaryNode::FinishCommentary, CommentarySystem_PePlayerRunCommand
CBasePlayer *__cdecl GetCommentaryPlayer()
{
  if ( gpGlobals->maxClients <= 1 )
    return UTIL_GetLocalPlayer();
  else
    return UTIL_PlayerByIndex(1);
}


// CCommentarySystem::~CCommentarySystem  (line 251, @0x00000000021b3590, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<modifiedconvars_t, int>::Purge
void __fastcall CCommentarySystem::~CCommentarySystem(CCommentarySystem *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hSpawnedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_4012830;
  this->m_hSpawnedEntities.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_hSpawnedEntities.m_Memory,
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hSpawnedEntities.m_Memory),
        (this->m_hSpawnedEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ModifiedConvars.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
    v2 = (this->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ModifiedConvars.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<modifiedconvars_t,int>::Purge(&this->m_ModifiedConvars.m_Memory);
  if ( (this->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<modifiedconvars_t,int>::Purge(&this->m_ModifiedConvars.m_Memory);
LABEL_3:
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CCommentarySystem::~CCommentarySystem  (line 251, @0x00000000021b3630, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CCommentarySystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<modifiedconvars_t, int>::Purge
void __fastcall CCommentarySystem::~CCommentarySystem(CCommentarySystem *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hSpawnedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_4012830;
  this->m_hSpawnedEntities.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_hSpawnedEntities.m_Memory,
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hSpawnedEntities.m_Memory),
        (this->m_hSpawnedEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ModifiedConvars.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
    v2 = (this->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ModifiedConvars.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<modifiedconvars_t,int>::Purge(&this->m_ModifiedConvars.m_Memory);
  if ( (this->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<modifiedconvars_t,int>::Purge(&this->m_ModifiedConvars.m_Memory);
LABEL_3:
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CCommentarySystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 253, @0x00000000021b1360, libserver.so)
void __fastcall CCommentarySystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CCommentarySystem *const this)
{
  ;
}


// CCommentarySystem::DoesGameSystemReallocate  (line 253, @0x00000000021b1370, libserver.so)
// globals: CCommentarySystem::sm_Factory
bool __fastcall CCommentarySystem::DoesGameSystemReallocate(const CCommentarySystem *const this)
{
  return (*(CCommentarySystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CCommentarySystem::sm_Factory);
}


// CCommentarySystem::SetGameSystemGlobalPtrs  (line 253, @0x00000000021b1390, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CCommentarySystem::sm_Factory
void __fastcall CCommentarySystem::SetGameSystemGlobalPtrs(CCommentarySystem *const this, void *pValue)
{
  if ( CCommentarySystem::sm_Factory != 0 )
    (*(CCommentarySystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CCommentarySystem::sm_Factory, pValue);
}


// CCommentarySystem::GameInit  (line 264, @0x00000000021b5c10, libserver.so)  // inlines: Set, operator=
// calls: CCommentarySystem::CalculateCommentaryState
// globals: g_bInCommentaryMode
void __fastcall CCommentarySystem::GameInit(CCommentarySystem *const this, const EventGameInit_t *const msg)
{
  this->m_bIsFirstSpawnGroupToLoad = 1;
  this->m_hCurrentNode.m_Index = -1;
  this->m_bCommentaryConvarsChanging = 0;
  this->m_iClearPressedButtons = 0;
  this->m_bCheatState = 0;
  g_bInCommentaryMode = (*(*engine + 528LL))(engine, msg) != 0;
  CCommentarySystem::CalculateCommentaryState(this);
}


// CCommentarySystem::CalculateCommentaryState  (line 278, @0x00000000021b5b00, libserver.so)  // inlines: GetBool, GetInt
// calls: V_snprintf, ConVar::SetValue, __stack_chk_fail
// callers: CCommentarySystem::GameInit, CC_CommentaryChanged
// strings: "maps/%s_commentary.txt"
// globals: commentary_available, g_bInCommentaryMode, sv_cheats
void __fastcall CCommentarySystem::CalculateCommentaryState(CCommentarySystem *const this)
{
  ConVar *v2; // rdi
  char szFullName[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v4; // [rsp+208h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  V_snprintf(szFullName, 512, "maps/%s_commentary.txt", gpGlobals->mapname);
  if ( (*(filesystem->_vptr_IBaseFileSystem + 10))(&filesystem->IBaseFileSystem, szFullName, 0) != 0 )
  {
    ConVar::SetValue(&commentary_available, 1);
    if ( commentary.m_pParent->m_Value.m_nValue != 0 )
    {
      g_bInCommentaryMode = 1;
      goto LABEL_7;
    }
  }
  else
  {
    g_bInCommentaryMode = 0;
    ConVar::SetValue(&commentary_available, 0);
  }
  if ( g_bInCommentaryMode )
  {
LABEL_7:
    v2 = sv_cheats;
    this->m_bCheatState = sv_cheats->m_pParent->m_Value.m_nValue != 0;
    (*(v2->_vptr_ConCommandBase + 18))(v2, 1);
  }
}


// CCommentarySystem::ReplaceQuotesInEntityKeyValues  (line 322, @0x00000000021b6d90, libserver.so)  // inlines: AddKeyValue<char [1024]>, AddToTail, AssignTo, Base, CEntityHandle, CEntityKeyValuesModifyScope, CIterator, CUtlSymbolLarge, Element, EntityIOConnectionDesc_t, FindKeyHash, First, GetConnectionDesc, Id, IsValid, Next, ReplaceChar, SetValue<char [1024]>, String, TempString, ToString, V_strlen, V_strncpy<int>, Value, operator=, operator[], ~CEntityKeyValuesModifyScope
// calls: CEntityKeyValuesModifyScope::BeginModify, V_strnchr, _V_strncpy, CEntityKeyValues::GetNumConnectionDescs, EntityIOConnectionDesc_t::Init, CEntityKeyValues::SetTargetNameForConnection, CEntityKeyValuesModifyScope::Release, V_snprintf, VariantFieldTypeName, Warning, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr (15 total)
// callers: CCommentarySystem::LoadCommentaryFile
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_21B70DB, CVariantBase<CEntityVariantAllocator>::ToString(void)::szBuf
void __fastcall CCommentarySystem::ReplaceQuotesInEntityKeyValues(
        CCommentarySystem *const this,
        CEntityKeyValues *pKeyValues)
{
  int m_nCount; // edx
  __int64 v4; // r15
  int v5; // r12d
  float **v6; // rax
  int16 v7; // dx
  float *v8; // r13
  int v9; // ecx
  char *v10; // rdx
  char *v11; // rax
  char *v12; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v13; // r13d
  __int64 v14; // r12
  EntityIOConnectionDescFat_t *v15; // rax
  const char *m_pOverrideParam; // r8
  const char *m_Id; // r14
  int v18; // ecx
  char *v19; // rdx
  char *v20; // rax
  char *v21; // rcx
  const char *v22; // rax
  double v23; // xmm0_8
  const char *v24; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rax
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v30; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // si
  __int64 v32; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // rcx
  unsigned __int64 v34; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rax
  bool v36; // dl
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v37; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v38; // rax
  bool v39; // zf
  __int64 v40; // [rsp+18h] [rbp-498h]
  __int64 v41; // [rsp+28h] [rbp-488h]
  int NumConnectionDescs; // [rsp+28h] [rbp-488h]
  CEntityKeyValuesModifyScope sg; // [rsp+30h] [rbp-480h] BYREF
  EntityIOConnectionDesc_t desc; // [rsp+40h] [rbp-470h] BYREF
  char szTmp[1032]; // [rsp+70h] [rbp-440h] BYREF
  unsigned __int64 v46; // [rsp+478h] [rbp-38h]

  sg.m_pKeyValues = 0;
  v46 = __readfsqword(0x28u);
  sg.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&sg, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    v4 = 0;
    v5 = 0;
    v41 = 0;
    while ( 1 )
    {
      v6 = &CEntityKeyValues::sm_EmptyVariant;
      if ( m_nCount > v5 )
      {
        if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          m_pElements = pKeyValues->m_keyValues.m_pElements;
        else
          m_pElements = 0;
        v6 = &m_pElements[v4];
      }
      v7 = *(v6 + 4);
      if ( v7 == 30 )
      {
        v8 = *v6;
      }
      else
      {
        switch ( v7 )
        {
          case 0:
            goto LABEL_37;
          case 1:
            v23 = *v6;
            goto LABEL_39;
          case 3:
          case 39:
            V_snprintf(
              &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              **v6,
              (*v6)[1],
              (*v6)[2]);
            break;
          case 4:
          case 27:
            V_snprintf(
              &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              **v6,
              (*v6)[1],
              (*v6)[2],
              (*v6)[3]);
            break;
          case 5:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%d", *v6);
            break;
          case 6:
            v24 = "true";
            if ( *v6 == 0 )
              v24 = "false";
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%s", v24);
            break;
          case 8:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%c", *v6);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              *v6,
              BYTE1(*v6),
              BYTE2(*v6),
              HIBYTE(*v6));
            break;
          case 25:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%g %g", **v6, (*v6)[1]);
            break;
          case 26:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%lld", *v6);
            break;
          case 33:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%llu", *v6);
            break;
          case 34:
            v23 = *v6;
LABEL_39:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%g", v23);
            break;
          case 37:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%u", *v6);
            break;
          default:
            v22 = VariantFieldTypeName(v7);
            Warning("No conversion from %s to string at the moment!\n", v22);
LABEL_37:
            CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v8 = &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf;
      }
      if ( V_strnchr(v8, 94, 1024) == 0 )
        goto LABEL_54;
      _V_strncpy(szTmp, v8, 1024);
      v9 = strlen(szTmp);
      if ( v9 > 0 )
      {
        v10 = szTmp;
        v11 = &szTmp[1];
        v12 = &szTmp[v9 - 1 + 1];
        while ( 1 )
        {
          if ( *v10 == 94 )
          {
            *v10 = 34;
            v10 = v11;
            if ( v11 == v12 )
              break;
          }
          else
          {
            v10 = v11;
            if ( v11 == v12 )
              break;
          }
          ++v11;
        }
      }
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      v13 = 0;
      if ( v5 < m_nCount )
        break;
      if ( pKeyValues->m_nQueuedForSpawnCount <= 0 )
        goto LABEL_62;
LABEL_15:
      ++v41;
      ++v5;
      ++v4;
      if ( v5 >= m_nCount )
        goto LABEL_16;
    }
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 9 )
        v30 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v30 = pKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v30 = 0;
    }
    v13 = v30[v41];
    if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_15;
LABEL_62:
    if ( m_nCount <= 0 )
    {
LABEL_71:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
      v34 = pKeyValues->m_keyHashes.m_nAllocated;
      if ( v34 != 0 )
      {
        if ( v34 <= 9 )
          v35 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v35 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v35 = 0;
      }
      v40 = (pKeyValues->m_keyHashes.m_nCount - 1);
      v35[v40] = v13;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v37 = pKeyValues->m_keyValues.m_pElements;
      else
        v37 = 0;
      CVariantBase<CEntityVariantAllocator>::CopyData(&v37[v40].m_value, szTmp, v36);
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v38 = pKeyValues->m_keyValues.m_pElements;
      else
        v38 = 0;
      v38[v40].m_pAttributeName = 0;
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      goto LABEL_15;
    }
    v31 = pKeyValues->m_keyHashes.m_nAllocated;
    v32 = 0;
    while ( 1 )
    {
      if ( v31 != 0 )
      {
        v33 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v31 > 9 )
          v33 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v33 = 0;
      }
      if ( v13 == v33[v32] )
        break;
      if ( m_nCount <= ++v32 )
        goto LABEL_71;
    }
    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v25 = pKeyValues->m_keyValues.m_pElements;
      v26 = v32;
      v27 = &v25[v26];
      if ( v25[v26].m_pAttributeName == 0 )
        goto LABEL_82;
    }
    else
    {
      v25 = 0;
      v39 = *(&stru_10.m_Lock.gap0 + 3 * v32) == 0;
      v27 = 24 * v32;
      v26 = v32;
      if ( v39 )
      {
LABEL_82:
        CVariantBase<CEntityVariantAllocator>::CopyData(v27, szTmp, v25);
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
        goto LABEL_15;
      }
    }
    Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v25[v26].m_pAttributeName);
LABEL_54:
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    goto LABEL_15;
  }
LABEL_16:
  NumConnectionDescs = CEntityKeyValues::GetNumConnectionDescs(pKeyValues);
  if ( NumConnectionDescs > 0 )
  {
    v14 = 0;
    do
    {
      desc.m_hTarget.m_Index = -1;
      v15 = &pKeyValues->m_connectionDescs.m_Memory.m_pMemory[v14];
      memset(&desc, 0, 24);
      m_pOverrideParam = v15->m_pOverrideParam;
      if ( *m_pOverrideParam == 0 )
        m_pOverrideParam = 0;
      EntityIOConnectionDesc_t::Init(
        &desc,
        v15->m_targetType,
        v15->m_pTargetName,
        v15->m_pInputName,
        m_pOverrideParam,
        v15->m_nTimesToFire,
        v15->m_flDelay);
      m_Id = "";
      if ( desc.m_targetDesc.u.m_Id != 0 )
        m_Id = desc.m_targetDesc.u.m_Id;
      if ( V_strnchr(m_Id, 94, 1024) != 0 )
      {
        _V_strncpy(szTmp, m_Id, 1024);
        v18 = strlen(szTmp);
        if ( v18 > 0 )
        {
          v19 = szTmp;
          v20 = &szTmp[1];
          v21 = &szTmp[v18 - 1 + 1];
          while ( 1 )
          {
            if ( *v19 == 94 )
            {
              *v19 = 34;
              v19 = v20;
              if ( v20 == v21 )
                break;
            }
            else
            {
              v19 = v20;
              if ( v20 == v21 )
                break;
            }
            ++v20;
          }
        }
        CEntityKeyValues::SetTargetNameForConnection(pKeyValues, v14, szTmp);
      }
      ++v14;
    }
    while ( NumConnectionDescs > v14 );
  }
  CEntityKeyValuesModifyScope::Release(&sg);
}


// CCommentarySystem::PostSpawnGroupLoad  (line 360, @0x00000000021b9930, libserver.so)  // inlines: CreateEvent, GetBool, GetInt
// calls: CCommentarySystem::InitCommentary
// strings: "playing_commentary"
// globals: g_bInCommentaryMode
void __fastcall CCommentarySystem::PostSpawnGroupLoad(
        CCommentarySystem *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  bool v2; // zf
  __int64 v3; // rax

  if ( (g_bInCommentaryMode || rr_remarkables_enabled.m_pParent->m_Value.m_nValue != 0)
    && (gpGlobals->eLoadType & 0xFFFFFFFD) != 1 )
  {
    v2 = !this->m_bIsFirstSpawnGroupToLoad;
    this->m_bCommentaryEnabledMidGame = 0;
    if ( !v2 )
    {
      this->m_bIsFirstSpawnGroupToLoad = 0;
      CCommentarySystem::InitCommentary(this);
      if ( g_bInCommentaryMode )
      {
        v3 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "playing_commentary", 0, 0);
        (*(gameeventmanager->_vptr_IBaseInterface + 9))(gameeventmanager, v3);
      }
    }
  }
}


// CCommentarySystem::GameDeactivate  (line 393, @0x00000000021b6910, libserver.so)
// calls: CCommentarySystem::ShutDownCommentary
void __fastcall CCommentarySystem::GameDeactivate(
        CCommentarySystem *const this,
        const EventGameDeactivate_t *const msg)
{
  CCommentarySystem::ShutDownCommentary(this);
}


// CCommentarySystem::ConvarChanged  (line 584, @0x00000000021b8890, libserver.so)  // inlines: AddToTail, CopyConstruct<modifiedconvars_t>, Element, GetName, GetString, GrowMemory, V_strncmp<int>, V_strncpy<int>, operator[]
// calls: ConVarRef::ConVarRef, _V_strncmp, _V_strncpy, memcpy, CUtlMemory<modifiedconvars_t, int>::Grow, __stack_chk_fail
// callers: CV_GlobalChange_Commentary
void __fastcall CCommentarySystem::ConvarChanged(
        CCommentarySystem *const this,
        IConVar *pConVar,
        const char *pOldString,
        float flOldValue)
{
  int v6; // r12d
  __int64 v7; // rbx
  modifiedconvars_t *v8; // r15
  const char *v9; // rax
  __int64 v10; // rax
  __int64 m_Size; // r12
  ConVarRef var; // [rsp+0h] [rbp-1D0h] BYREF
  modifiedconvars_t newConvar; // [rsp+10h] [rbp-1C0h] BYREF
  unsigned __int64 v14; // [rsp+198h] [rbp-38h]

  v6 = 0;
  v7 = 0;
  v14 = __readfsqword(0x28u);
  ConVarRef::ConVarRef(&var, pConVar);
  if ( this->m_ModifiedConvars.m_Size > 0 )
  {
    while ( 1 )
    {
      v8 = &this->m_ModifiedConvars.m_Memory.m_pMemory[v7];
      v9 = (*(var.m_pConVar->_vptr_IConVar + 4))(var.m_pConVar);
      if ( _V_strncmp(v9, v8->pszConvar, 128) == 0 )
        break;
      ++v6;
      ++v7;
      if ( this->m_ModifiedConvars.m_Size <= v6 )
        goto LABEL_7;
    }
    _V_strncpy(
      this->m_ModifiedConvars.m_Memory.m_pMemory[v7].pszCurrentValue,
      var.m_pConVarState->m_Value.m_pszString,
      128);
  }
  else
  {
LABEL_7:
    v10 = (*(var.m_pConVar->_vptr_IConVar + 4))(var.m_pConVar);
    _V_strncpy(&newConvar, v10, 128);
    _V_strncpy(newConvar.pszCurrentValue, var.m_pConVarState->m_Value.m_pszString, 128);
    _V_strncpy(newConvar.pszOrgValue, pOldString, 128);
    m_Size = this->m_ModifiedConvars.m_Size;
    if ( m_Size == this->m_ModifiedConvars.m_Memory.m_nAllocationCount )
      CUtlMemory<modifiedconvars_t,int>::Grow(&this->m_ModifiedConvars.m_Memory, 1);
    ++this->m_ModifiedConvars.m_Size;
    if ( &this->m_ModifiedConvars.m_Memory.m_pMemory[m_Size] != 0 )
      memcpy(
        &this->m_ModifiedConvars.m_Memory.m_pMemory[m_Size],
        &newConvar,
        sizeof(this->m_ModifiedConvars.m_Memory.m_pMemory[m_Size]));
  }
}


// CCommentarySystem::InitCommentary  (line 619, @0x00000000021b91b0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CGameString, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CUtlSymbolLarge, CVProfScope, EnterScope, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, Init, InvokeCallbacks, IsEmpty, IsEnabled, IsNullString, IsValid, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetEntityName, SetValue, Spawn, operator CBaseEntity*, operator!, operator(), operator=, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CGameEntitySystem::FindEntityByName, __cxa_guard_acquire, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, CEntityHandle::operator CEntityInstance* (28 total)
// callers: CCommentarySystem::PostSpawnGroupLoad, CC_CommentaryChanged
// strings: "commentary_semaphore", "info_target", "Spawn", "Server Simulation"
// globals: CV_GlobalChange_Commentary(IConVar *,char const*,float), `guard variable for'CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName, CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName, __dso_handle, CGameString::~CGameString()
void __fastcall CCommentarySystem::InitCommentary(CCommentarySystem *const this)
{
  CEntitySystem *v2; // rax
  __int64 v3; // rax
  char v4; // al
  int (**vptr_CEntitySpawnerBase)(...); // rdx
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // eax
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v11; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v13; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v19; // rdi
  CEntityInstance *v20; // rbx
  UtlSymLargeId_t m_Id; // rax
  CEntityIdentity *v22; // rdi
  KeyValues *m_pkvSavedModifications; // rdi
  CUtlScratchMemoryPool *v24; // rdi
  CEntityKeyValues *v25; // rbx
  unsigned __int64 v27; // rbx
  ThreadId_t m_TargetThreadId; // r15
  uint64 m_numTimeBaseTicks; // rcx
  int m_nEntitySpawnerDataUseCount; // ecx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v32; // rax
  bool v33; // [rsp+27h] [rbp-119h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-118h]
  CEntityHandle v35; // [rsp+30h] [rbp-110h] BYREF
  string_t name; // [rsp+40h] [rbp-100h] BYREF
  UtlSymLargeId_t v37; // [rsp+50h] [rbp-F0h]
  _QWORD v38[2]; // [rsp+60h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+70h] [rbp-D0h] BYREF

  (*(*g_pCVar + 176LL))(g_pCVar, CV_GlobalChange_Commentary);
  this->m_flNextTeleportTime = 0.0;
  this->m_iTeleportStage = 0;
  this->m_hLastCommentaryNode.m_Index = -1;
  if ( CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "commentary_semaphore", 0, 0, 0, 0) == 0 )
  {
    if ( `guard variable for'CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName == 0
      && __cxa_guard_acquire(&`guard variable for'CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName) != 0 )
    {
      CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName.m_iszString.u.m_Id = 0;
      CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName.m_pszString = "commentary_semaphore";
      *(&CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName + 4) &= 0x80000000;
      __cxa_guard_release(&`guard variable for'CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName);
      __cxa_atexit(
        CGameString::~CGameString,
        &CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName,
        &_dso_handle);
    }
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
    spawner.m_scriptClassName.m_pString = 0;
    spawner.m_pContext = 0;
    v2 = g_pEntitySystem;
    spawner.m_pSpawnBatch = 0;
    spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner.m_hSpawnGroupHandle = 0;
    spawner.m_pEntityKeyValues = 0;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v2->m_entitySpawnerData;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
    v3 = *&g_MatrixIdentity.m_flMatVal[2][2];
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v3;
    spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
    if ( g_pApplication != 0 )
    {
      v4 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
      vptr_CEntitySpawnerBase = spawner._vptr_CEntitySpawnerBase;
    }
    else
    {
      vptr_CEntitySpawnerBase = off_3FCEBD0;
      v4 = 0;
    }
    spawner.m_bValidateKeys = v4;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*vptr_CEntitySpawnerBase)(&spawner);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "info_target");
    ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, "info_target", &spawner.m_scriptClassName);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    spawner.m_pEntityClass = ClassByDesignName;
    v35.m_Index = -1;
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v33 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        v27 = __rdtsc();
        m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
        if ( m_TargetThreadId == ThreadGetCurrentId(spawner.m_pEntityKeyValues) )
        {
          m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
          if ( m_pCurNode->m_pszName != "Spawn" )
          {
            m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
            g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
          }
          v32 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
          v32->m_BudgetFlags |= 4u;
          CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
          g_VProfCurrentProfile.m_fAtRoot = 0;
        }
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v27 + __rdtsc();
      }
      if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
      {
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        if ( m_pszClassname != 0 )
          CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
      }
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      m_nMode = spawner.m_nMode;
      v11 = CUtlString::Get(&spawner.m_scriptClassName);
      Entity = CEntitySystem::CreateEntity(
                 g_pEntitySystem,
                 spawner.m_hSpawnGroupHandle,
                 spawner.m_pEntityClass,
                 v11,
                 m_nMode,
                 -1,
                 -1,
                 0,
                 0);
      v13 = Entity;
      if ( Entity != 0 )
      {
        m_pEntity = Entity->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v15 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v35.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
        }
        else
        {
          v35.m_Index = -1;
        }
        v38[0] = m_pEntity;
        v38[1] = spawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          spawner.m_hSpawnGroupHandle,
          1,
          v38,
          &spawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v13, spawner.m_pEntityKeyValues);
        if ( spawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        m_pContext = spawner.m_pContext;
        for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
        {
          m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
          pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
          if ( m_pthis != 0 || pfn != 0 )
          {
            v19 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
            if ( (pfn & 1) != 0 )
              pfn = *(pfn + *v19 - 1);
            (pfn)(v19, v13, i);
          }
        }
      }
      if ( v33 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
    }
    v20 = CEntityHandle::operator CEntityInstance *(&v35);
    m_Id = CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName.m_iszString.u.m_Id;
    if ( CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName.m_iszString.u.m_Id == 0
      || (*(&CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName + 4) & 0x7FFFFFFF) != CGameString::gm_iSerialNumber )
    {
      if ( CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName.m_pszString != 0 )
      {
        CEntitySystem::AllocPooledString(
          g_pEntitySystem,
          CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName.m_pszString);
        m_Id = v37;
        CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName.m_iszString.u.m_Id = v37;
        *(&CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName + 4) = CGameString::gm_iSerialNumber
                                                                                        & 0x7FFFFFFF
                                                                                        | *(&CCommentarySystem::InitCommentary(void)::commentarySpawnedSemaphoreName
                                                                                          + 4)
                                                                                        & 0x80000000;
      }
      else
      {
        m_Id = 0;
      }
    }
    v22 = v20->m_pEntity;
    name.u.m_Id = m_Id;
    CEntityIdentity::SetEntityName(v22, &name);
    m_pkvSavedModifications = this->m_pkvSavedModifications;
    if ( m_pkvSavedModifications != 0 )
    {
      KeyValues::deleteThis(m_pkvSavedModifications);
      this->m_pkvSavedModifications = 0;
    }
    CCommentarySystem::LoadCommentaryFile(this);
    CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
    if ( v24 == &g_pEntitySystem->m_entitySpawnerData )
    {
      m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
      if ( m_nEntitySpawnerDataUseCount == 1 )
        CUtlScratchMemoryPool::FreeAll(v24);
    }
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v25 = spawner.m_pEntityKeyValues;
      if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(v25);
        operator delete(v25);
      }
    }
    if ( spawner.m_scriptClassName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  }
}


// CCommentarySystem::LoadCommentaryFile  (line 660, @0x00000000021b8b30, libserver.so)  // inlines: AddToTail, Base, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, CopyConstruct<PreSpawnListInfo_t>, Element, FindKeyHash, GetEHandle, GetEntryIndex, GetSerialNumber, GetValue, GetValueString, GrowMemory, NetworkStateChanged, Purge, RemoveAll, Set, SetNodeNumber, TempString, V_strncmp<int>, memcpy, operator=, operator=<int>, operator[], ~CUtlBuffer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: V_snprintf, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, Msg, CUtlBuffer::CUtlBuffer, KeyValues::GetFirstSubKey, KeyValues::GetName, _V_strncmp, KeyValues::FindKey, KeyValues::GetString, CUtlBuffer::SeekPut (29 total)
// callers: CCommentarySystem::InitCommentary
// strings: "maps/%s_commentary.txt", "Commentary: Loading commentary data from %s. \n", "trackinfo", "Commentary: Could not find commentary data file '%s'. \n"
// globals: `typeinfo for'CPointCommentaryNode, CEntityKeyValues::sm_EmptyVariant
void __fastcall CCommentarySystem::LoadCommentaryFile(CCommentarySystem *const this)
{
  IBaseFileSystem *v2; // rsi
  double v3; // xmm0_8
  unsigned int v4; // eax
  void *v5; // rsp
  KeyValues *FirstSubKey; // rbx
  const char *Name; // rax
  KeyValues *Key; // rax
  int m_Put; // eax
  int v10; // eax
  char *v11; // rdx
  int v12; // r14d
  CEntityKeyValues *v13; // r15
  __int64 m_Size; // r13
  int v15; // eax
  PreSpawnListInfo_t *v16; // rax
  char *v17; // rcx
  __int64 v18; // rbx
  CEntityKeyValues *m_pKeyValues; // rcx
  int m_nCount; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rdx
  CEntityVariant *p_m_value; // rax
  CEntityInstance *Entity; // rax
  CEntityIdentity **v27; // r13
  CEntityIdentity *m_pEntity; // rdx
  __int16 v29; // cx
  uint32 v30; // r15d
  __int64 v31; // r14
  int v32; // eax
  CHandle<CBaseEntity> *v33; // rax
  _DWORD *v34; // r14
  int v35; // r15d
  KeyValues *pkvFile; // [rsp+20h] [rbp-52F0h] BYREF
  char *pKVToStringBuffer; // [rsp+28h] [rbp-52E8h]
  char *v38; // [rsp+30h] [rbp-52E0h]
  char *pStart; // [rsp+38h] [rbp-52D8h]
  CUtlBuffer *buf; // [rsp+40h] [rbp-52D0h]
  int i; // [rsp+4Ch] [rbp-52C4h]
  EHANDLE2 hHandle; // [rsp+50h] [rbp-52C0h]
  CUtlVector<PreSpawnListInfo_t,CUtlMemory<PreSpawnListInfo_t,int> > preSpawnList; // [rsp+60h] [rbp-52B0h] BYREF
  CUtlBuffer spawnKeyValuesBackToString; // [rsp+80h] [rbp-5290h] BYREF
  char szFullName[512]; // [rsp+D0h] [rbp-5240h] BYREF
  char tempKeyBuffer[20488]; // [rsp+2D0h] [rbp-5040h] BYREF
  unsigned __int64 v47; // [rsp+52D8h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  V_snprintf(szFullName, 512, "maps/%s_commentary.txt", gpGlobals->mapname);
  pkvFile = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(pkvFile, "Commentary");
  v2 = 0;
  if ( filesystem != 0 )
    v2 = &filesystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(pkvFile, v2, szFullName, "GAME", 0) )
  {
    *&v3 = Msg("Commentary: Loading commentary data from %s. \n", szFullName).m128_u64[0];
    v4 = (*(filesystem->_vptr_IBaseFileSystem + 7))(&filesystem->IBaseFileSystem, szFullName, "GAME", v3);
    buf = &spawnKeyValuesBackToString;
    preSpawnList.m_Size = 0;
    preSpawnList.m_Memory.m_pMemory = 0;
    preSpawnList.m_Memory.m_nAllocationCount = 0;
    preSpawnList.m_Memory.m_nGrowSize = 0;
    v5 = alloca(16 * ((((8LL * v4 + 31) & 0x1FFFFFFFF0uLL) + 30) >> 4));
    pStart = tempKeyBuffer;
    pKVToStringBuffer = (&pkvFile & 0xFFFFFFFFFFFFFFEFLL);
    CUtlBuffer::CUtlBuffer(&spawnKeyValuesBackToString, tempKeyBuffer, 20480, 0);
    FirstSubKey = KeyValues::GetFirstSubKey(pkvFile);
    if ( FirstSubKey != 0 )
    {
      i = 0;
      do
      {
        Name = KeyValues::GetName(FirstSubKey);
        if ( _V_strncmp(Name, "trackinfo", 9) != 0 )
        {
          Key = KeyValues::FindKey(FirstSubKey, "classname", 0);
          if ( Key != 0 )
            KeyValues::GetString(Key, 0, "", 0, 0);
          CUtlBuffer::SeekPut(buf, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
          KeyValues::RecursiveSaveToFile(FirstSubKey, buf, 0, 1);
          m_Put = spawnKeyValuesBackToString.m_Put;
          do
            --m_Put;
          while ( tempKeyBuffer[m_Put] != 125 );
          v10 = m_Put - 1;
          v11 = pStart;
          if ( tempKeyBuffer[0] != 123 )
          {
            do
              ++v11;
            while ( *v11 != 123 );
          }
          v12 = v10 + pStart - (v11 + 2);
          v38 = &pKVToStringBuffer[i];
          memcpy(v38, v11 + 2, v12);
          v13 = ConvertOldKeyValuesToNew(FirstSubKey);
          CCommentarySystem::ReplaceQuotesInEntityKeyValues(this, v13);
          m_Size = preSpawnList.m_Size;
          v15 = preSpawnList.m_Size;
          if ( preSpawnList.m_Size == preSpawnList.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<PreSpawnListInfo_t,int>::Grow(&preSpawnList.m_Memory, 1);
            v15 = preSpawnList.m_Size;
          }
          preSpawnList.m_Size = v15 + 1;
          v16 = &preSpawnList.m_Memory.m_pMemory[m_Size];
          if ( v16 != 0 )
          {
            v17 = v38;
            v16->m_pKeyValues = v13;
            v16->m_iMapDataLength = v12;
            v16->m_pMapData = v17;
          }
          i += v12;
        }
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      }
      while ( FirstSubKey != 0 );
    }
    CCommentarySystem::ApplyCommentaryModifications(this, preSpawnList.m_Size, preSpawnList.m_Memory.m_pMemory);
    if ( preSpawnList.m_Size > 0 )
    {
      v18 = 0;
      i = 0;
      pStart = &this->m_hSpawnedEntities.m_Memory;
      do
      {
        m_pKeyValues = preSpawnList.m_Memory.m_pMemory[v18].m_pKeyValues;
        m_nCount = m_pKeyValues->m_keyHashes.m_nCount;
        if ( m_nCount > 0 )
        {
          m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
          for ( j = 0; m_nCount > j; ++j )
          {
            if ( m_nAllocated != 0 )
            {
              m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( m_nAllocated > 9 )
                m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
              if ( m_pElements[j] == -971301790 )
              {
LABEL_29:
                if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
                  v24 = m_pKeyValues->m_keyValues.m_pElements;
                else
                  v24 = 0;
                p_m_value = &v24[j].m_value;
                if ( p_m_value->m_type == 30 )
                  goto LABEL_32;
                goto LABEL_47;
              }
            }
            else if ( *(4 * j) == -971301790 )
            {
              goto LABEL_29;
            }
          }
        }
        p_m_value = &CEntityKeyValues::sm_EmptyVariant;
        if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
        {
LABEL_32:
          if ( p_m_value->m_uint64 != 0 )
          {
            Entity = CEntitySystem::CreateEntity(
                       g_pEntitySystem,
                       0,
                       p_m_value->m_pszString,
                       EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT,
                       -1,
                       -1,
                       0,
                       0);
            v27 = Entity;
            if ( Entity != 0 )
            {
              hHandle.m_Index = -1;
              m_pEntity = Entity->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v29 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                v30 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v29 & 0x7FFF;
                hHandle.m_Index = v30;
              }
              else
              {
                v30 = -1;
              }
              v31 = this->m_hSpawnedEntities.m_Size;
              v32 = this->m_hSpawnedEntities.m_Size;
              if ( v31 == this->m_hSpawnedEntities.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(pStart, 1);
                v32 = this->m_hSpawnedEntities.m_Size;
              }
              this->m_hSpawnedEntities.m_Size = v32 + 1;
              v33 = &this->m_hSpawnedEntities.m_Memory.m_pMemory[v31];
              if ( v33 != 0 )
                v33->m_Index = v30;
              v34 = __dynamic_cast(v27, &`typeinfo for'CEntityInstance, &`typeinfo for'CPointCommentaryNode, 0);
              if ( v34 != 0 )
              {
                v35 = this->m_iCommentaryNodeCount + 1;
                this->m_iCommentaryNodeCount = v35;
                if ( v35 != v34[350] )
                {
                  (*(*v34 + 176LL))(v34, 1400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v34[350] = v35;
                }
              }
              CEntitySystem::QueueSpawnEntity(
                g_pEntitySystem,
                v27[1],
                preSpawnList.m_Memory.m_pMemory[v18].m_pKeyValues);
            }
          }
        }
LABEL_47:
        ++i;
        ++v18;
      }
      while ( preSpawnList.m_Size > i );
    }
    CUtlMemory<unsigned char,int>::Purge(&buf->m_Memory);
    preSpawnList.m_Size = 0;
    if ( (preSpawnList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<PreSpawnListInfo_t,int>::Purge(&preSpawnList.m_Memory);
      if ( (preSpawnList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<PreSpawnListInfo_t,int>::Purge(&preSpawnList.m_Memory);
    }
  }
  else
  {
    Msg("Commentary: Could not find commentary data file '%s'. \n", szFullName);
  }
  KeyValues::deleteThis(pkvFile);
}


// CCommentarySystem::ApplyCommentaryModifications  (line 882, @0x00000000021b6920, libserver.so)  // inlines: Base, CEntityKeyValuesModifyScope, Element, FindKeyHash, GetValue, GetValueString, MakeStringToken, TempString, operator[], ~CEntityKeyValuesModifyScope
// calls: KeyValues::GetFirstSubKey, KeyValues::FindKey, KeyValues::GetString, V_stricmp_fast, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue, KeyValues::GetNextKey, KeyValues::GetName, MurmurHash2LowerCase, RegisterStringToken, CEntityKeyValuesModifyScope::Release, _Unwind_Resume
// callers: CCommentarySystem::LoadCommentaryFile
// strings: "modify", "find_by_modelname", "find_by_targetname"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CCommentarySystem::ApplyCommentaryModifications(
        CCommentarySystem *const this,
        int nCount,
        PreSpawnListInfo_t *pInfo)
{
  KeyValues *m_pkvSavedModifications; // rdi
  KeyValues *Key; // rax
  PreSpawnListInfo_t *v7; // r14
  CEntityKeyValues *m_pKeyValues; // rcx
  int v9; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *p_m_value; // rax
  CEntityKeyValues *v15; // rsi
  KeyValues *j; // rax
  const KeyValues *v17; // rbx
  const char *String; // r13
  const char *Name; // rax
  EntityKeyId_t v20; // esi
  const char *v21; // r12
  uint32 v22; // r15d
  KeyValues *v23; // rax
  PreSpawnListInfo_t *v24; // r14
  CEntityKeyValues *v25; // rcx
  int v26; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v27; // si
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v29; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // rdx
  CEntityVariant *v31; // rax
  CEntityKeyValues *v32; // rsi
  KeyValues *m; // rax
  const KeyValues *v34; // rbx
  const char *v35; // r13
  const char *v36; // rax
  EntityKeyId_t v37; // esi
  const char *v38; // r12
  uint32 v39; // r15d
  KeyValues *pkvNode; // [rsp+18h] [rbp-68h]
  const KeyValues *pModifyBlock; // [rsp+20h] [rbp-60h]
  const char *pTargetName; // [rsp+28h] [rbp-58h]
  const char *pTargetNamea; // [rsp+28h] [rbp-58h]
  PreSpawnListInfo_t *v46; // [rsp+38h] [rbp-48h]
  CEntityKeyValuesModifyScope sg; // [rsp+40h] [rbp-40h] BYREF

  m_pkvSavedModifications = this->m_pkvSavedModifications;
  if ( m_pkvSavedModifications != 0 )
  {
    pkvNode = KeyValues::GetFirstSubKey(m_pkvSavedModifications);
    if ( pkvNode != 0 )
    {
      v46 = &pInfo[(nCount - 1) + 1];
      do
      {
        pModifyBlock = KeyValues::FindKey(pkvNode, "modify", 0);
        if ( pModifyBlock != 0 )
        {
          Key = KeyValues::FindKey(pkvNode, "find_by_modelname", 0);
          if ( Key != 0 )
          {
            pTargetName = KeyValues::GetString(Key, 0, "", 0, 0);
            if ( nCount > 0 )
            {
              v7 = pInfo;
              do
              {
                m_pKeyValues = v7->m_pKeyValues;
                v9 = v7->m_pKeyValues->m_keyHashes.0;
                if ( v9 > 0 )
                {
                  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
                  for ( i = 0; v9 > i; ++i )
                  {
                    if ( m_nAllocated != 0 )
                    {
                      m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                      if ( m_nAllocated > 9 )
                        m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
                      if ( m_pElements[i] == -926958586 )
                      {
LABEL_16:
                        if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
                          v13 = m_pKeyValues->m_keyValues.m_pElements;
                        else
                          v13 = 0;
                        p_m_value = &v13[i].m_value;
                        if ( p_m_value->m_type == 30 )
                          goto LABEL_19;
                        goto LABEL_30;
                      }
                    }
                    else if ( *(4 * i) == -926958586 )
                    {
                      goto LABEL_16;
                    }
                  }
                }
                p_m_value = &CEntityKeyValues::sm_EmptyVariant;
                if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
                {
LABEL_19:
                  if ( p_m_value->m_uint64 != 0 && V_stricmp_fast(p_m_value->m_uint64, pTargetName) == 0 )
                  {
                    v15 = v7->m_pKeyValues;
                    sg.m_pKeyValues = 0;
                    sg.m_pPrevAllocator = 0;
                    CEntityKeyValuesModifyScope::BeginModify(&sg, v15);
                    for ( j = KeyValues::GetFirstSubKey(pModifyBlock); ; j = KeyValues::GetNextKey(v17) )
                    {
                      v17 = j;
                      if ( j == 0 )
                        break;
                      String = KeyValues::GetString(j, 0, "", 0, 0);
                      Name = KeyValues::GetName(v17);
                      v20.m_nHashCode = 0;
                      v21 = Name;
                      if ( Name != 0 && *Name != 0 )
                      {
                        v22 = MurmurHash2LowerCase(Name, 0x31415926u);
                        if ( g_bUpdateStringTokenDatabase )
                          RegisterStringToken(v22, v21, 0, 1);
                        v20.m_nHashCode = v22;
                      }
                      CEntityKeyValues::SetValue(v7->m_pKeyValues, v20, String);
                    }
                    CEntityKeyValuesModifyScope::Release(&sg);
                  }
                }
LABEL_30:
                ++v7;
              }
              while ( v7 != v46 );
            }
          }
          v23 = KeyValues::FindKey(pkvNode, "find_by_targetname", 0);
          if ( v23 != 0 )
          {
            pTargetNamea = KeyValues::GetString(v23, 0, "", 0, 0);
            if ( nCount > 0 )
            {
              v24 = pInfo;
              do
              {
                v25 = v24->m_pKeyValues;
                v26 = v24->m_pKeyValues->m_keyHashes.0;
                if ( v26 > 0 )
                {
                  v27 = v25->m_keyHashes.m_nAllocated;
                  for ( k = 0; v26 > k; ++k )
                  {
                    if ( v27 != 0 )
                    {
                      v29 = (&v25->m_keyHashes.m_nAllocAllocated + 1);
                      if ( v27 > 9 )
                        v29 = v25->m_keyHashes.m_pElements;
                      if ( v29[k] == 1094168427 )
                      {
LABEL_42:
                        if ( v25->m_keyValues.m_nAllocated != 0 )
                          v30 = v25->m_keyValues.m_pElements;
                        else
                          v30 = 0;
                        v31 = &v30[k].m_value;
                        if ( v31->m_type == 30 )
                          goto LABEL_45;
                        goto LABEL_56;
                      }
                    }
                    else if ( *(4 * k) == 1094168427 )
                    {
                      goto LABEL_42;
                    }
                  }
                }
                v31 = &CEntityKeyValues::sm_EmptyVariant;
                if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
                {
LABEL_45:
                  if ( v31->m_uint64 != 0 && V_stricmp_fast(v31->m_uint64, pTargetNamea) == 0 )
                  {
                    v32 = v24->m_pKeyValues;
                    sg.m_pKeyValues = 0;
                    sg.m_pPrevAllocator = 0;
                    CEntityKeyValuesModifyScope::BeginModify(&sg, v32);
                    for ( m = KeyValues::GetFirstSubKey(pModifyBlock); ; m = KeyValues::GetNextKey(v34) )
                    {
                      v34 = m;
                      if ( m == 0 )
                        break;
                      v35 = KeyValues::GetString(m, 0, "", 0, 0);
                      v36 = KeyValues::GetName(v34);
                      v37.m_nHashCode = 0;
                      v38 = v36;
                      if ( v36 != 0 && *v36 != 0 )
                      {
                        v39 = MurmurHash2LowerCase(v36, 0x31415926u);
                        if ( g_bUpdateStringTokenDatabase )
                          RegisterStringToken(v39, v38, 0, 1);
                        v37.m_nHashCode = v39;
                      }
                      CEntityKeyValues::SetValue(v24->m_pKeyValues, v37, v35);
                    }
                    CEntityKeyValuesModifyScope::Release(&sg);
                  }
                }
LABEL_56:
                ++v24;
              }
              while ( v46 != v24 );
            }
          }
        }
        pkvNode = KeyValues::GetNextKey(pkvNode);
      }
      while ( pkvNode != 0 );
    }
  }
}


// CCommentarySystem::ShutDownCommentary  (line 945, @0x00000000021b6700, libserver.so)  // inlines: Get, GetActiveNode, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, operator CPointCommentaryNode*, operator bool, operator=, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CPointCommentaryNode::AbortPlaying, UTIL_Remove, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CGameEntitySystem::FindEntityByName, KeyValues::deleteThis, CUtlMemory<modifiedconvars_t, int>::Purge
// callers: CCommentarySystem::GameDeactivate, CC_CommentaryChanged
// strings: "commentary_semaphore"
// globals: CEntityHandle::gm_pEntityList, CV_GlobalChange_Commentary(IConVar *,char const*,float), g_bInCommentaryMode, sv_cheats
void __fastcall CCommentarySystem::ShutDownCommentary(CCommentarySystem *const this)
{
  CPointCommentaryNode *v2; // rax
  int v3; // eax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  bool v11; // zf
  CBaseEntity *EntityByName; // rax
  __int64 v13; // r12
  int v14; // r13d
  __int64 v15; // rax
  KeyValues *m_pkvSavedModifications; // rdi

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hActiveCommentaryNode);
  if ( v2 != 0 )
    CPointCommentaryNode::AbortPlaying(v2);
  v3 = this->m_hSpawnedEntities.m_Size - 1;
  if ( v3 >= 0 )
  {
    v4 = 4LL * v3;
    v5 = 4 * (v3 - v3) - 4;
    do
    {
      v6 = &this->m_hSpawnedEntities.m_Memory.m_pMemory[v4 / 4];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            UTIL_Remove(v10->m_pInstance);
        }
      }
      v4 -= 4LL;
    }
    while ( v4 != v5 );
  }
  v11 = (this->m_hSpawnedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hSpawnedEntities.m_Size = 0;
  if ( v11 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hSpawnedEntities.m_Memory);
  this->m_iCommentaryNodeCount = 0;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "commentary_semaphore", 0, 0, 0, 0);
  if ( EntityByName != 0 )
    UTIL_Remove(EntityByName);
  v13 = 0;
  v14 = 0;
  (*(*g_pCVar + 184LL))(g_pCVar, CV_GlobalChange_Commentary);
  if ( this->m_ModifiedConvars.m_Size > 0 )
  {
    do
    {
      v15 = (*(*g_pCVar + 144LL))(g_pCVar, &this->m_ModifiedConvars.m_Memory.m_pMemory[v13]);
      if ( v15 != 0 )
        (*(*v15 + 128LL))(v15, this->m_ModifiedConvars.m_Memory.m_pMemory[v13].pszOrgValue);
      ++v14;
      ++v13;
    }
    while ( this->m_ModifiedConvars.m_Size > v14 );
  }
  v11 = (this->m_ModifiedConvars.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ModifiedConvars.m_Size = 0;
  if ( v11 )
    CUtlMemory<modifiedconvars_t,int>::Purge(&this->m_ModifiedConvars.m_Memory);
  m_pkvSavedModifications = this->m_pkvSavedModifications;
  if ( m_pkvSavedModifications != 0 )
    KeyValues::deleteThis(m_pkvSavedModifications);
  v11 = !g_bInCommentaryMode;
  this->m_pkvSavedModifications = 0;
  this->m_hCurrentNode.m_Index = -1;
  this->m_hActiveCommentaryNode.m_Index = -1;
  this->m_hLastCommentaryNode.m_Index = -1;
  this->m_flNextTeleportTime = 0.0;
  this->m_iTeleportStage = 0;
  if ( !v11 )
    (*(sv_cheats->_vptr_ConCommandBase + 18))(sv_cheats, this->m_bCheatState);
  g_bInCommentaryMode = 0;
}


// CCommentarySystem::RestoreGame  (line 1022, @0x00000000021b3050, libserver.so)  // inlines: operator[]
// globals: CV_GlobalChange_Commentary(IConVar *,char const*,float), g_bInCommentaryMode
void __fastcall CCommentarySystem::RestoreGame(CCommentarySystem *const this, const EventRestoreGame_t *const msg)
{
  __int64 v3; // rbx
  int i; // r12d
  __int64 v5; // rax

  (*(*g_pCVar + 184LL))(g_pCVar, CV_GlobalChange_Commentary);
  if ( g_bInCommentaryMode )
  {
    v3 = 0;
    for ( i = 0; i < this->m_ModifiedConvars.m_Size; ++v3 )
    {
      v5 = (*(*g_pCVar + 144LL))(g_pCVar, &this->m_ModifiedConvars.m_Memory.m_pMemory[v3]);
      if ( v5 != 0 )
        (*(*v5 + 128LL))(v5, this->m_ModifiedConvars.m_Memory.m_pMemory[v3].pszCurrentValue);
      ++i;
    }
    (*(*g_pCVar + 176LL))(g_pCVar, CV_GlobalChange_Commentary);
  }
}


// CCommentarySystem::JumpToNextNode  (line 1049, @0x00000000021b64d0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, StopPlaying, curtime, operator CBaseEntity*, operator bool, operator->, operator=
// calls: CConcreteEntityList::LookupEntity, CGameEntitySystem::FindEntityByClassname, __dynamic_cast, CGlobalVarsBase::curtime, CEntityHandle::operator CEntityInstance*, CPointCommentaryNode::FinishCommentary
// callers: CommentarySystem_PePlayerRunCommand
// strings: "point_commentary_node"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CPointCommentaryNode
void __fastcall CCommentarySystem::JumpToNextNode(CCommentarySystem *const this, CBasePlayer *pPlayer)
{
  float m_flCurrentTime; // xmm1_4
  float m_flNextTeleportTime; // xmm0_4
  CGlobalVars *v5; // rbx
  CEntityIdentity *v6; // rax
  CBaseEntity *m_pInstance; // rbx
  CBaseEntity *EntityByClassname; // rax
  CBaseEntity *v9; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  __int16 v16; // cx
  CHandle<CPointCommentaryNode> *p_m_hActiveCommentaryNode; // r12
  float v18; // xmm0_4
  const CConcreteEntityList *v19; // rdi
  CPointCommentaryNode *v20; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v22; // [rsp-24h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  m_flNextTeleportTime = this->m_flNextTeleportTime;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v22 = this->m_flNextTeleportTime;
        (m_pfnWarningFunc)(1, pPlayer, m_flNextTeleportTime, 0.0);
        m_flNextTeleportTime = v22;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( m_flNextTeleportTime <= m_flCurrentTime && this->m_iTeleportStage == 0 )
  {
    v6 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &this->m_hLastCommentaryNode);
    if ( v6 != 0 )
      m_pInstance = v6->m_pInstance;
    else
      m_pInstance = 0;
    while ( 1 )
    {
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                            g_pGameEntitySystem,
                            m_pInstance,
                            "point_commentary_node");
      v9 = 0;
      m_pInstance = EntityByClassname;
      m_Index = this->m_hLastCommentaryNode.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLastCommentaryNode.m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[this->m_hLastCommentaryNode.m_Index & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            v9 = v12->m_pInstance;
        }
      }
      if ( m_pInstance == v9 )
        break;
      if ( m_pInstance != 0 )
      {
        v13 = __dynamic_cast(m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CPointCommentaryNode, 0);
        if ( v13 != 0 )
        {
          this->m_iTeleportStage = 1;
          v14 = v13[1];
          if ( v14 != 0 )
          {
            v15 = (*(v14 + 16) >> 15) - (*(v14 + 48) & 1);
            v16 = 0x7FFF;
            if ( *(v14 + 16) != -1 )
              v16 = *(v14 + 16) & 0x7FFF;
            LOWORD(this->m_hLastCommentaryNode.m_Index) = v16 | this->m_hLastCommentaryNode.m_Index & 0x8000;
            this->m_hLastCommentaryNode.m_Index = (v15 << 15) | this->m_hLastCommentaryNode.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hLastCommentaryNode.m_Index = -1;
          }
          p_m_hActiveCommentaryNode = &this->m_hActiveCommentaryNode;
          v18 = CGlobalVarsBase::curtime(gpGlobals, 0);
          v19 = CEntityHandle::gm_pEntityList;
          *&p_m_hActiveCommentaryNode[-19].m_Index = v18;
          if ( CConcreteEntityList::LookupEntity(v19, p_m_hActiveCommentaryNode) != 0 )
          {
            v20 = CEntityHandle::operator CEntityInstance *(p_m_hActiveCommentaryNode);
            if ( v20->m_bActive.m_Value )
              CPointCommentaryNode::FinishCommentary(v20, 1);
          }
          return;
        }
      }
    }
  }
}


// CCommentarySystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 1098, @0x000000000219f0e0, libserver.so)
void __cdecl CCommentarySystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// Commentary_IsCommentaryEntity  (line 1108, @0x000000000219f0f0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: MakeEntitySystemString
// strings: "commentary_semaphore"
// globals: g_pCommentarySystem, CEntityHandle::gm_pEntityList
bool __fastcall Commentary_IsCommentaryEntity(CBaseEntity *pEntity)
{
  int m_Size; // edx
  CHandle<CBaseEntity> *m_pMemory; // rax
  __int64 v4; // rdi
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  __int64 v9; // [rsp-28h] [rbp-28h]

  if ( g_pCommentarySystem == 0 )
    return 0;
  m_Size = g_pCommentarySystem->m_hSpawnedEntities.m_Size;
  if ( m_Size != 0 )
  {
    m_pMemory = g_pCommentarySystem->m_hSpawnedEntities.m_Memory.m_pMemory;
    v4 = &m_pMemory[m_Size - 1 + 1];
    while ( 1 )
    {
      m_pInstance = 0;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[m_pMemory->m_Index & 0x1FF];
          if ( v7 != 0 && m_pMemory->m_Index == v7->m_EHandle.m_Index )
            m_pInstance = v7->m_pInstance;
        }
      }
      if ( pEntity == m_pInstance )
        return 1;
      if ( ++m_pMemory == v4 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    MakeEntitySystemString("commentary_semaphore");
    return pEntity->m_pEntity->m_name.u.m_Id == v9;
  }
}


// Commentary_AbortCurrentNode  (line 1127, @0x00000000021ac100, libserver.so)  // inlines: Get, GetActiveNode, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CPointCommentaryNode*
// calls: CPointCommentaryNode::AbortPlaying
// globals: g_pCommentarySystem, CEntityHandle::gm_pEntityList
void __cdecl Commentary_AbortCurrentNode()
{
  uint32 m_Index; // edx
  CEntityIdentity *v1; // rax
  CEntityIdentity *v2; // rax

  if ( g_pCommentarySystem != 0 )
  {
    m_Index = g_pCommentarySystem->m_hActiveCommentaryNode.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_pCommentarySystem->m_hActiveCommentaryNode.m_Index) >> 9)
                                                          & 0x3F];
      if ( v1 != 0 )
      {
        v2 = &v1[g_pCommentarySystem->m_hActiveCommentaryNode.m_Index & 0x1FF];
        if ( v2 != 0 && m_Index == v2->m_EHandle.m_Index && v2->m_pInstance != 0 )
          CPointCommentaryNode::AbortPlaying(v2->m_pInstance);
      }
    }
  }
}


// CommentarySystem_PePlayerRunCommand  (line 1135, @0x00000000021ab810, libserver.so)  // inlines: CEntityHandle, CGameTrace, CannotBeStopped, Color, EnableInteractsWith, Get, GetActiveNode, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetNodeUnderCrosshair, GetSerialNumber, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, PrePlayerRunCommand, PreventsMovement, Ray_t, RnCollisionAttr_t, Set, SetColor, SetUnderCrosshair, StopPlaying, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator CEntityInstance*, operator CPointCommentaryNode*, operator bool, operator!=, operator*, operator+, operator->, operator=
// calls: GetCommentaryPlayer, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, __dynamic_cast, CEntityHandle::operator CEntityInstance*, CConcreteEntityList::LookupEntity, CPointCommentaryNode::PlayerActivated, CCommentarySystem::JumpToNextNode, CGlobalVarsBase::curtime, UTIL_ScreenFade, CPointCommentaryNode::SetUnderCrosshair (16 total)
// callers: CPlayerMove::RunCommand
// globals: g_pCommentarySystem, g_bInCommentaryMode, g_bTracingVsCommentaryNodes, `typeinfo for'CPointCommentaryNode, CEntityHandle::gm_pEntityList
void __fastcall CommentarySystem_PePlayerRunCommand(CBasePlayer *player, CUserCmd *ucmd)
{
  CCommentarySystem *v2; // rbx
  CBasePlayer *CommentaryPlayer; // r14
  float v6; // xmm1_4
  double v7; // xmm0_8
  float v8; // xmm1_4
  ConVar *m_pParent; // rax
  float m_fValue; // xmm7_4
  CPointCommentaryNode *v11; // r14
  CEntityInstance *v12; // rax
  __int64 v13; // rsi
  double v14; // xmm0_8
  float v15; // xmm1_4
  bool v16; // zf
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // cx
  ButtonBitMask_t buttons; // rax
  int m_afPlayersLastButtons; // r14d
  __int16 v22; // r14
  CEntityIdentity *v23; // rax
  const CEntityHandle *p_m_hActiveCommentaryNode; // rdi
  CEntityInstance *v25; // rax
  CConcreteEntityList *v26; // rsi
  CPointCommentaryNode *v27; // rax
  CEntityInstance *v28; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  ButtonBitMask_t v32; // rdx
  int m_iTeleportStage; // eax
  CGlobalVars *v34; // rdi
  CPointCommentaryNode *v35; // rax
  CGlobalVars *v36; // rdi
  __m128d v37; // xmm0
  CPointCommentaryNode *v38; // rax
  CPointCommentaryNode *v39; // r15
  CGlobalVars *v40; // rdi
  __m128d v41; // xmm0
  float v42; // xmm7_4
  CEntityInstance *m_pInstance; // rsi
  unsigned __int16 v44; // dx
  int v45; // edi
  int v46; // eax
  CEntityIdentity *v47; // rdx
  CEntityIdentity *v48; // rdx
  ButtonBitMask_t v49; // rdx
  trace_t *pTrace; // [rsp+8h] [rbp-1A8h]
  CPointCommentaryNode *pTracea; // [rsp+8h] [rbp-1A8h]
  float pTraceb; // [rsp+8h] [rbp-1A8h]
  double v53; // [rsp+10h] [rbp-1A0h]
  float v54; // [rsp+18h] [rbp-198h]
  CTraceFilterSimple v55; // [rsp+30h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-140h] BYREF
  CGameTrace_2 v57; // [rsp+C0h] [rbp-F0h] BYREF
  Color color; // [rsp+170h] [rbp-40h] BYREF
  unsigned __int64 v59; // [rsp+178h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  v2 = g_pCommentarySystem;
  if ( g_pCommentarySystem == 0 || !g_bInCommentaryMode || (*(player->_vptr_IHandleEntity + 391))(player) != 0 )
    return;
  CommentaryPlayer = GetCommentaryPlayer();
  if ( CommentaryPlayer == 0 )
    goto LABEL_47;
  memset(&v57.m_ShapeAttributes, 0, 31);
  v57.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v57);
  v53 = (*(CommentaryPlayer->_vptr_IHandleEntity + 164))(CommentaryPlayer);
  v54 = v6;
  v7 = (*(CommentaryPlayer->_vptr_IHandleEntity + 485))(CommentaryPlayer, 0.0);
  *&ray.m_Start.x = v53;
  g_bTracingVsCommentaryNodes = 1;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  m_pParent = phys_traceline_radius.m_pParent;
  ray.m_Delta.z = ((v8 * 56755.84) + v54) - v54;
  ray.m_Delta.x = ((*&v7 * 56755.84) + *&v53) - *&v53;
  m_fValue = m_pParent->m_Value.m_fValue;
  ray.m_Delta.y = ((*(&v7 + 1) * 56755.84) + *(&v53 + 1)) - *(&v53 + 1);
  ray.m_flRadius = m_fValue;
  ray.m_Start.z = v54;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v55, CommentaryPlayer, 4, 0);
  v55.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v55, &v57);
  g_bTracingVsCommentaryNodes = 0;
  if ( v57.m_pEnt != 0 )
    v11 = __dynamic_cast(v57.m_pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CPointCommentaryNode, 0);
  else
LABEL_47:
    v11 = 0;
  v12 = CEntityHandle::operator CEntityInstance *(&v2->m_hCurrentNode);
  if ( v12 != v11 )
  {
    if ( v12 != 0 )
      BYTE1(v12[26].m_iszPrivateVScripts.u.m_Id) = 0;
    if ( v11 == 0 )
      goto LABEL_46;
    v16 = !v11->m_bActive.m_Value;
    v11->m_bUnderCrosshair = 1;
    if ( v16 )
      CPointCommentaryNode::SetUnderCrosshair(v11, v13, v14, v15);
    m_pEntity = v11->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v19 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v2->m_hCurrentNode.m_Index) = v19 | v2->m_hCurrentNode.m_Index & 0x8000;
      v2->m_hCurrentNode.m_Index = (v18 << 15) | v2->m_hCurrentNode.m_Index & 0x7FFF;
    }
    else
    {
LABEL_46:
      v2->m_hCurrentNode.m_Index = -1;
    }
  }
  buttons = ucmd->buttons;
  m_afPlayersLastButtons = v2->m_afPlayersLastButtons;
  v2->m_afPlayersLastButtons = buttons;
  v22 = buttons & (buttons ^ m_afPlayersLastButtons);
  if ( (ucmd->buttons & 0x20) == 0 )
    v2->m_iClearPressedButtons &= ~0x20u;
  if ( (v22 & 0x20) == 0 )
    goto LABEL_34;
  if ( (v22 & 0x800) != 0 )
  {
    v28 = CEntityHandle::operator CEntityInstance *(&v2->m_hActiveCommentaryNode);
    if ( v28 == 0
      || BYTE2(v28[26].m_iszPrivateVScripts.u.m_pAsString) == 0 && BYTE4(v28[27].m_hPrivateScope.m_hScope) == 0 )
    {
      CCommentarySystem::JumpToNextNode(v2, player);
      ucmd->buttons &= ~0x20uLL;
      v2->m_iClearPressedButtons |= v22 & 0x20;
    }
LABEL_34:
    v26 = CEntityHandle::gm_pEntityList;
    goto LABEL_35;
  }
  pTrace = CEntityHandle::gm_pEntityList;
  v23 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v2->m_hCurrentNode);
  p_m_hActiveCommentaryNode = &v2->m_hActiveCommentaryNode;
  if ( v23 == 0 )
  {
    v38 = CEntityHandle::operator CEntityInstance *(p_m_hActiveCommentaryNode);
    v39 = v38;
    if ( v38 != 0 && CPointCommentaryNode::HasViewTarget(v38) )
    {
      if ( !v39->m_bUnstoppable && !v39->m_bPreventChangesWhileMoving && v39->m_bActive.m_Value )
      {
        CPointCommentaryNode::FinishCommentary(v39, 1);
        pTrace = CEntityHandle::gm_pEntityList;
      }
      ucmd->buttons &= ~0x20uLL;
      v26 = pTrace;
      v2->m_iClearPressedButtons |= v22 & 0x20;
    }
    else
    {
      v26 = pTrace;
    }
    goto LABEL_35;
  }
  v25 = CEntityHandle::operator CEntityInstance *(p_m_hActiveCommentaryNode);
  if ( v25 == 0 )
    goto LABEL_52;
  v26 = pTrace;
  if ( BYTE2(v25[26].m_iszPrivateVScripts.u.m_pAsString) == 0 && BYTE4(v25[27].m_hPrivateScope.m_hScope) == 0 )
  {
    pTracea = v25;
    v27 = CEntityHandle::operator CEntityInstance *(&v2->m_hCurrentNode);
    if ( pTracea != v27 && pTracea->m_bActive.m_Value )
    {
      CPointCommentaryNode::FinishCommentary(pTracea, 1);
LABEL_52:
      v27 = CEntityHandle::operator CEntityInstance *(&v2->m_hCurrentNode);
    }
    CPointCommentaryNode::PlayerActivated(v27);
    v26 = CEntityHandle::gm_pEntityList;
  }
  ucmd->buttons &= ~0x20uLL;
  v2->m_iClearPressedButtons |= v22 & 0x20;
LABEL_35:
  m_Index = v2->m_hActiveCommentaryNode.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_39;
  v30 = v26->m_pIdentityChunks[(LOWORD(v2->m_hActiveCommentaryNode.m_Index) >> 9) & 0x3F];
  if ( v30 == 0 )
    goto LABEL_39;
  v31 = &v30[v2->m_hActiveCommentaryNode.m_Index & 0x1FF];
  if ( v31 == 0 )
    goto LABEL_39;
  if ( m_Index != v31->m_EHandle.m_Index )
    goto LABEL_39;
  m_pInstance = v31->m_pInstance;
  if ( v31->m_pInstance == 0 )
    goto LABEL_39;
  if ( LODWORD(m_pInstance[26].m_hPrivateScope.m_hScope) == -1 )
  {
    v44 = 0x7FFF;
    v45 = 0x7FFF;
  }
  else
  {
    v44 = m_pInstance[26].m_hPrivateScope.m_hScope & 0x7FFF;
    v45 = v44;
  }
  if ( (v46 = (LODWORD(m_pInstance[26].m_hPrivateScope.m_hScope) >> 15 << 15) | v44 & 0x7FFF,
        LODWORD(v57.startpos.x) = v46,
        (v46 + 2) > 1)
    && (v47 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v45 >> 9]) != 0
    && (v48 = &v47[v45 & 0x1FF]) != 0
    && v46 == v48->m_EHandle.m_Index
    && v48->m_pInstance != 0
    || LOBYTE(m_pInstance[26].m_iszPrivateVScripts.u.m_Id) != 0 )
  {
    v49 = ucmd->buttons;
    ucmd->upmove = 0.0;
    ucmd->sidemove = 0.0;
    ucmd->forwardmove = 0.0;
    v32 = v49 & 0xFFFFFFFFFFFFF9E1LL;
    ucmd->buttons = v32;
  }
  else
  {
LABEL_39:
    v32 = ucmd->buttons;
  }
  ucmd->buttons = ~v2->m_iClearPressedButtons & v32;
  if ( v2->m_iTeleportStage != 0 )
  {
    pTraceb = v2->m_flNextTeleportTime;
    if ( CGlobalVarsBase::curtime(gpGlobals, 0) >= pTraceb )
    {
      m_iTeleportStage = v2->m_iTeleportStage;
      switch ( m_iTeleportStage )
      {
        case 1:
          v40 = gpGlobals;
          v2->m_iTeleportStage = 2;
          v41.m128d_f64[1] = CGlobalVarsBase::curtime(v40, 0);
          v41.m128d_f64[0] = v41.m128d_f64[1] + 0.35;
          v42 = _mm_movedup_pd(v41).m128d_f64[0];
          v2->m_flNextTeleportTime = v42;
          color._color[0] = 0;
          color._color[1] = 0;
          color._color[2] = 0;
          color._color[3] = -1;
          UTIL_ScreenFade(player, &color, 0.30000001, 0.0, 26);
          break;
        case 2:
          if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v2->m_hLastCommentaryNode) != 0 )
          {
            v35 = CEntityHandle::operator CEntityInstance *(&v2->m_hLastCommentaryNode);
            CPointCommentaryNode::TeleportTo(v35, player);
          }
          v36 = gpGlobals;
          v2->m_iTeleportStage = 3;
          v37.m128d_f64[1] = CGlobalVarsBase::curtime(v36, 0);
          v37.m128d_f64[0] = v37.m128d_f64[1] + 0.6;
          v2->m_flNextTeleportTime = _mm_movedup_pd(v37).m128d_f64[0];
          break;
        case 3:
          v34 = gpGlobals;
          v2->m_iTeleportStage = 0;
          v2->m_flNextTeleportTime = CGlobalVarsBase::curtime(v34, 0) + 0.25;
          color._color[0] = 0;
          color._color[1] = 0;
          color._color[2] = 0;
          color._color[3] = -1;
          UTIL_ScreenFade(player, &color, 0.30000001, 0.0, 17);
          break;
        default:
          break;
      }
    }
  }
}


// CCommentarySystem::GetDataDescMap  (line 1143, @0x0000000002187840, libserver.so)
// globals: CCommentarySystem::m_DataMap
datamap_t *__fastcall CCommentarySystem::GetDataDescMap(CCommentarySystem *const this)
{
  return &CCommentarySystem::m_DataMap;
}


// CCommentarySystem::AddDatadescMetadataKeys  (line 1143, @0x000000000219f1e0, libserver.so)
void __fastcall CCommentarySystem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CCommentarySystem::GetBaseMap  (line 1143, @0x000000000219f1f0, libserver.so)
datamap_t *__cdecl CCommentarySystem::GetBaseMap()
{
  return 0;
}


// DataMapInit<CCommentarySystem>  (line 1143, @0x000000000219f200, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >, GetDataOps<CUtlVector<modifiedconvars_t> >
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CCommentarySystem"
// globals: `guard variable for'DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder, `guard variable for'DataMapInit<CCommentarySystem>(CCommentarySystem *)::dataDesc, CCommentarySystem::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>>(CUtlVector<modifiedconvars_t,, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>>(CUtlVector<modifiedconvars_t,CUtlMemory<modifiedc, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<, DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder (10 total)
datamap_t *__fastcall DataMapInit<CCommentarySystem>(CCommentarySystem *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder) != 0 )
  {
    DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder.m_pszBase = "CCommentarySystem";
    DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CCommentarySystem>(CCommentarySystem *)::nameHolder,
      &_dso_handle);
  }
  CCommentarySystem::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CCommentarySystem>(CCommentarySystem *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCommentarySystem>(CCommentarySystem *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>>(CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>>(CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>>(CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>> *)::ops = off_4014650;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>>(CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>> *)::ops);
    }
    DataMapInit<CCommentarySystem>(CCommentarySystem *)::dataDesc[4].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>>(CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>> *)::ops;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CCommentarySystem>(CCommentarySystem *)::dataDesc[5].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCommentarySystem>(CCommentarySystem *)::dataDesc);
  }
  CCommentarySystem::m_DataMap.dataNumFields = 9;
  CCommentarySystem::m_DataMap.dataDesc = &DataMapInit<CCommentarySystem>(CCommentarySystem *)::dataDesc[1];
  return &CCommentarySystem::m_DataMap;
}


// modifiedconvars_t::AddDatadescMetadataKeys  (line 1160, @0x000000000219f3a0, libserver.so)
void __fastcall modifiedconvars_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// modifiedconvars_t::GetBaseMap  (line 1160, @0x000000000219f3b0, libserver.so)
datamap_t *__cdecl modifiedconvars_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<modifiedconvars_t>  (line 1160, @0x000000000219f3c0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "modifiedconvars_t"
// globals: `guard variable for'DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder, modifiedconvars_t::m_DataMap, DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<modifiedconvars_t>(modifiedconvars_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder) != 0 )
  {
    DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder.m_pszBase = "modifiedconvars_t";
    DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::nameHolder,
      &_dso_handle);
  }
  modifiedconvars_t::m_DataMap.baseMap = 0;
  modifiedconvars_t::m_DataMap.dataDesc = &DataMapInit<modifiedconvars_t>(modifiedconvars_t *)::dataDesc[1];
  modifiedconvars_t::m_DataMap.dataNumFields = 3;
  return &modifiedconvars_t::m_DataMap;
}


// CC_CommentaryChanged  (line 1171, @0x00000000021af470, libserver.so)  // inlines: GetBool, GetInt, SetCommentaryMode
// calls: ConVarRef::ConVarRef, CCommentarySystem::CalculateCommentaryState, CCommentarySystem::ShutDownCommentary, CCommentarySystem::InitCommentary
// globals: g_bInCommentaryMode, g_pCommentarySystem
void __fastcall CC_CommentaryChanged(IConVar *pConVar, const char *pOldString, double a3, float flOldValue)
{
  CCommentarySystem *v4; // rbx
  ConVarRef var; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&var, pConVar);
  if ( g_bInCommentaryMode != (var.m_pConVarState->m_Value.m_nValue != 0) )
  {
    v4 = g_pCommentarySystem;
    if ( g_pCommentarySystem != 0 )
    {
      g_bInCommentaryMode = var.m_pConVarState->m_Value.m_nValue != 0;
      CCommentarySystem::CalculateCommentaryState(g_pCommentarySystem);
      if ( g_bInCommentaryMode )
      {
        v4->m_bCommentaryEnabledMidGame = 1;
        CCommentarySystem::InitCommentary(v4);
      }
      else
      {
        CCommentarySystem::ShutDownCommentary(v4);
      }
    }
  }
}


// CV_GlobalChange_Commentary  (line 1190, @0x00000000021af440, libserver.so)
// calls: CCommentarySystem::ConvarChanged
// globals: g_pCommentarySystem
void __fastcall CV_GlobalChange_Commentary(IConVar *var, const char *pOldString, float a3, float flOldValue)
{
  if ( g_pCommentarySystem != 0 && g_pCommentarySystem->m_bCommentaryConvarsChanging )
    CCommentarySystem::ConvarChanged(g_pCommentarySystem, var, pOldString, a3);
}


// CC_CommentaryNotChanging  (line 1207, @0x0000000002187850, libserver.so)  // inlines: SetCommentaryConvarsChanging
// globals: g_pCommentarySystem
void __fastcall CC_CommentaryNotChanging(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_pCommentarySystem != 0 )
    g_pCommentarySystem->m_bCommentaryConvarsChanging = 0;
}


// IsListeningToCommentary  (line 1215, @0x000000000219f480, libserver.so)  // inlines: Get, GetActiveNode, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CPointCommentaryNode*
// callers: CBasePlayer::ShouldTakeDamageInCommentaryMode
// globals: g_pCommentarySystem, CEntityHandle::gm_pEntityList
bool __cdecl IsListeningToCommentary()
{
  uint32 m_Index; // ecx
  bool result; // al
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  if ( g_pCommentarySystem == 0 )
    return 0;
  m_Index = g_pCommentarySystem->m_hActiveCommentaryNode.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_pCommentarySystem->m_hActiveCommentaryNode.m_Index) >> 9)
                                                        & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[g_pCommentarySystem->m_hActiveCommentaryNode.m_Index & 0x1FF];
      if ( v3 != 0 && m_Index == v3->m_EHandle.m_Index )
        return v3->m_pInstance != 0;
    }
  }
  return result;
}


// CPointCommentaryNode::Spawn  (line 1229, @0x000000000219f9f0, libserver.so)  // inlines: NetworkStateChanged, ResetSequence, Set, SetSolid, Vector, curtime, operator=<int>
// calls: CBaseAnimating::Spawn, CBaseModelEntity::SetModelFromKeyValues, UTIL_SetSize, CBaseEntity::AddEffects, CBaseAnimating::LookupSequence, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CPointCommentaryNode::SetDisabled
// strings: "models/extras/info_speech.vmdl"
// globals: CPointCommentaryNode::SpinThink(void)
void __fastcall CPointCommentaryNode::Spawn(CPointCommentaryNode *const this, const CEntityKeyValues *pKeyValues)
{
  const CEntityKeyValues *v2; // r12
  CBaseAnimatingController *BaseAnimatingController; // rax
  double v5; // xmm1_8
  CGlobalVars *v6; // r12
  double v7; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  Vector vecMin; // [rsp+0h] [rbp-30h] BYREF
  Vector vecMax; // [rsp+10h] [rbp-20h] BYREF

  v2 = pKeyValues;
  CBaseAnimating::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModelFromKeyValues(this, v2, "models/extras/info_speech.vmdl");
  vecMax.x = 16.0;
  vecMax.y = 16.0;
  vecMax.z = 16.0;
  vecMin.x = -16.0;
  vecMin.y = -16.0;
  vecMin.z = -16.0;
  UTIL_SetSize(this, &vecMin, &vecMax);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CBaseEntity::AddEffects(this, 16);
  LODWORD(v2) = CBaseAnimating::LookupSequence(this, "idle");
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 23))(BaseAnimatingController, v2, 1);
  CBaseEntity::ThinkSet(this, CPointCommentaryNode::SpinThink, 0.0, 0, 0);
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v7) = 0;
    *&v7 = v6->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v7 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v7, v5, 0);
  if ( this->m_iNodeNumber.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iNodeNumber.m_Value = 0;
  }
  if ( this->m_iNodeNumberMax.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iNodeNumberMax.m_Value = 0;
  }
  CPointCommentaryNode::SetDisabled(this, this->m_bDisabled);
}


// CPointCommentaryNode::Activate  (line 1255, @0x000000000218dd00, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, Get, GetClassNameAsCStr, GetClassname, GetDebugName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, operator CEntityInstance*, operator!, operator!=, operator=, operator=<int>
// calls: CBaseAnimating::Activate, CGameEntitySystem::FindEntityByName, CEntityIdentity::GetDebugName, Warning
// strings: "%s: %s could not find viewposition %s.\n", "%s: %s could not find viewtarget %s.\n"
// globals: g_pCommentarySystem, CEntityHandle::gm_pEntityList
void __fastcall CPointCommentaryNode::Activate(CPointCommentaryNode *const this, ActivateType_t activateType)
{
  int m_iCommentaryNodeCount; // r12d
  CBaseEntity *v5; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // rcx
  CBaseEntity *v8; // r12
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  uint32 v11; // ecx
  unsigned __int16 v12; // dx
  int v13; // esi
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  const char *v17; // r12
  const char *v18; // rax
  CEntityIdentity *v19; // rcx
  const char *v20; // rsi
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  CConcreteEntityList *v25; // rsi
  uint32 v26; // eax
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  const char *m_pAsString; // r12
  const char *DebugName; // rax
  CEntityIdentity *v31; // rcx
  const char *v32; // rsi
  CEntityIdentity *v33; // rax
  __int16 v34; // dx
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  m_iCommentaryNodeCount = g_pCommentarySystem->m_iCommentaryNodeCount;
  if ( m_iCommentaryNodeCount != this->m_iNodeNumberMax.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iNodeNumberMax.m_Value = m_iCommentaryNodeCount;
  }
  if ( this->m_iszViewTarget.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iszViewTarget.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v24 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v25 = CEntityHandle::gm_pEntityList;
      LOWORD(this->m_hViewTarget.m_Index) = v24 | this->m_hViewTarget.m_Index & 0x8000;
      v26 = (v23 << 15) | this->m_hViewTarget.m_Index & 0x7FFF;
      this->m_hViewTarget.m_Index = v26;
      if ( v26 + 2 > 1 )
      {
        v27 = v25->m_pIdentityChunks[(LOWORD(this->m_hViewTarget.m_Index) >> 9) & 0x3F];
        if ( v27 != 0 )
        {
          v28 = &v27[this->m_hViewTarget.m_Index & 0x1FF];
          if ( v28 != 0 && v28->m_EHandle.m_Index == v26 && v28->m_pInstance != 0 )
            goto LABEL_4;
        }
      }
    }
    else
    {
      this->m_hViewTarget.m_Index = -1;
    }
    m_pAsString = "";
    if ( this->m_iszViewTarget.u.m_Id != 0 )
      m_pAsString = this->m_iszViewTarget.u.m_pAsString;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    v31 = this->m_pEntity;
    v32 = "";
    if ( v31->m_designerName.u.m_Id != 0 )
      v32 = v31->m_designerName.u.m_pAsString;
    Warning("%s: %s could not find viewtarget %s.\n", v32, DebugName, m_pAsString);
  }
LABEL_4:
  if ( this->m_iszViewPosition.u.m_Id == 0 )
    goto LABEL_5;
  iszName.u.m_Id = this->m_iszViewPosition.u.m_Id;
  v5 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  m_Index = this->m_hViewPosition.m_Value.m_Index;
  m_pInstance = 0;
  v8 = v5;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewPosition.m_Value.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hViewPosition.m_Value.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  if ( v8 == m_pInstance )
  {
    v11 = this->m_hViewPosition.m_Value.m_Index >> 15;
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1264, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( v8 == 0 || (v33 = v8->m_pEntity) == 0 )
    {
      v11 = 0x1FFFF;
      v12 = 0x7FFF;
      v13 = 0x7FFF;
      this->m_hViewPosition.m_Value.m_Index = -1;
      goto LABEL_15;
    }
    if ( v33->m_EHandle.m_Index == -1 )
      v34 = 0x7FFF;
    else
      v34 = v33->m_EHandle.m_Index & 0x7FFF;
    v11 = ((v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1)) & 0x1FFFF;
    LOWORD(this->m_hViewPosition.m_Value.m_Index) = v34 | this->m_hViewPosition.m_Value.m_Index & 0x8000;
    m_Index = (v11 << 15) | this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
    this->m_hViewPosition.m_Value.m_Index = m_Index;
  }
  if ( m_Index == -1 )
  {
    v12 = 0x7FFF;
    v13 = 0x7FFF;
  }
  else
  {
    v12 = this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
    v13 = v12;
  }
LABEL_15:
  v14 = (v11 << 15) | v12 & 0x7FFF;
  LODWORD(iszName.u.m_Id) = v14;
  if ( (v14 + 2) <= 1
    || (v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9]) == 0
    || (v16 = &v15[v13 & 0x1FF]) == 0
    || v14 != v16->m_EHandle.m_Index
    || v16->m_pInstance == 0 )
  {
    v17 = "";
    if ( this->m_iszViewPosition.u.m_Id != 0 )
      v17 = this->m_iszViewPosition.u.m_pAsString;
    v18 = CEntityIdentity::GetDebugName(this->m_pEntity);
    v19 = this->m_pEntity;
    v20 = "";
    if ( v19->m_designerName.u.m_Id != 0 )
      v20 = v19->m_designerName.u.m_pAsString;
    Warning("%s: %s could not find viewposition %s.\n", v20, v18, v17);
  }
LABEL_5:
  CBaseAnimating::Activate(this, activateType);
}


// CPointCommentaryNode::Precache  (line 1283, @0x00000000021b0aa0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetDebugName, Precache, String
// calls: CBaseEntity::PrecacheModelFromKeyValues, CBaseEntity::PrecacheScriptSound, CEntityInstance::Precache, CEntityIdentity::GetDebugName, Warning
// strings: "models/extras/info_speech.vmdl", "%s: %s has no commentary file.\n"
void __fastcall CPointCommentaryNode::Precache(
        CPointCommentaryNode *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi

  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, "models/extras/info_speech.vmdl", 0);
  if ( this->m_iszCommentaryFile.m_Value.u.m_Id != 0 )
  {
    CBaseEntity::PrecacheScriptSound(this->m_iszCommentaryFile.m_Value.u.m_pAsString, pContext);
    CEntityInstance::Precache(this, pContext);
  }
  else
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    Warning("%s: %s has no commentary file.\n", m_pAsString, DebugName);
    CEntityInstance::Precache(this, pContext);
  }
}


// CPointCommentaryNode::SetUnderCrosshair  (line 1302, @0x000000000218bcd0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetAnimTime
// callers: CPointCommentaryNode::SetUnderCrosshair, CommentarySystem_PePlayerRunCommand
void __fastcall CPointCommentaryNode::SetUnderCrosshair(
        CPointCommentaryNode *const this,
        __int64 bUnderCrosshair,
        double a3,
        float a4)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, bUnderCrosshair, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(this, m_flCurrentTime, a4, 0);
}


// CPointCommentaryNode::SetUnderCrosshair  (line 1302, @0x000000000219f4f0, libserver.so)
// calls: CPointCommentaryNode::SetUnderCrosshair
// local variable allocation has failed, the output may be wrong!
void __fastcall CPointCommentaryNode::SetUnderCrosshair(CPointCommentaryNode *const this, bool bUnderCrosshair)
{
  double v2; // xmm0_8
  float v3; // xmm1_4
  bool v4; // zf

  if ( bUnderCrosshair )
  {
    v4 = !this->m_bActive.m_Value;
    this->m_bUnderCrosshair = 1;
    if ( v4 )
      CPointCommentaryNode::SetUnderCrosshair(this, bUnderCrosshair, v2, v3);
  }
  else
  {
    this->m_bUnderCrosshair = 0;
  }
}


// CPointCommentaryNode::SpinThink  (line 1324, @0x000000000218c340, libserver.so)  // inlines: SetPlaybackRate, curtime
// calls: CBaseEntity::SetNextThink, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::StudioFrameAdvance, CBaseAnimating::DispatchAnimEvents, CBaseAnimating::GetS1Skin
void __fastcall CPointCommentaryNode::SpinThink(CPointCommentaryNode *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  CBaseAnimatingController *v5; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax

  if ( this->m_bActive.m_Value )
    goto LABEL_9;
  if ( this->m_bUnderCrosshair && CBaseAnimating::GetS1Skin(this) == 0 )
  {
    if ( !this->m_bActive.m_Value )
    {
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
      (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
LABEL_10:
      CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
      CBaseAnimating::DispatchAnimEvents(this, this);
      v3 = gpGlobals;
      if ( gpGlobals == 0 )
        goto LABEL_11;
      goto LABEL_4;
    }
LABEL_9:
    v5 = CBaseAnimating::GetBaseAnimatingController(this);
    (*(v5->_vptr_CSkeletonAnimationController + 22))(v5, 3.0);
    goto LABEL_10;
  }
  v3 = gpGlobals;
  if ( gpGlobals == 0 )
  {
LABEL_11:
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v1, 0);
    return;
  }
LABEL_4:
  if ( !v3->m_bEnableAssertions && !v3->m_bInSimulation )
  {
    m_pfnWarningFunc = v3->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v3->m_flCurrentTime + 0.1)), v1, 0);
}


// CPointCommentaryNode::PlayerActivated  (line 1348, @0x00000000021ab700, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetActiveNode, StopPlaying, operator=
// calls: CPointCommentaryNode::FinishCommentary, CPointCommentaryNode::StartCommentary
// callers: CommentarySystem_PePlayerRunCommand, CPointCommentaryNode::InputStartCommentary
// globals: g_pCommentarySystem
void __fastcall CPointCommentaryNode::PlayerActivated(CPointCommentaryNode *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  CCommentarySystem *v3; // rax
  int v4; // ecx
  __int16 v5; // si
  CEntityIdentity *v6; // rdx
  int v7; // ecx
  __int16 v8; // si

  (*(gamestats->_vptr_CBaseGameStats + 25))(gamestats);
  if ( this->m_bActive.m_Value )
  {
    CPointCommentaryNode::FinishCommentary(this, 1);
  }
  else
  {
    CPointCommentaryNode::StartCommentary(this);
    m_pEntity = this->m_pEntity;
    v3 = g_pCommentarySystem;
    if ( m_pEntity != 0 )
    {
      v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(g_pCommentarySystem->m_hActiveCommentaryNode.m_Index) = v5
                                                                   | g_pCommentarySystem->m_hActiveCommentaryNode.m_Index
                                                                   & 0x8000;
      v3->m_hActiveCommentaryNode.m_Index = (v4 << 15) | v3->m_hActiveCommentaryNode.m_Index & 0x7FFF;
    }
    else
    {
      g_pCommentarySystem->m_hActiveCommentaryNode.m_Index = -1;
    }
    v6 = this->m_pEntity;
    if ( v6 != 0 )
    {
      v7 = (v6->m_EHandle.m_Index >> 15) - (v6->m_flags & 1);
      if ( v6->m_EHandle.m_Index == -1 )
        v8 = 0x7FFF;
      else
        v8 = v6->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v3->m_hLastCommentaryNode.m_Index) = v8 | v3->m_hLastCommentaryNode.m_Index & 0x8000;
      v3->m_hLastCommentaryNode.m_Index = (v7 << 15) | v3->m_hLastCommentaryNode.m_Index & 0x7FFF;
    }
    else
    {
      v3->m_hLastCommentaryNode.m_Index = -1;
    }
  }
}


// CPointCommentaryNode::StopPlaying  (line 1366, @0x00000000021ab660, libserver.so)
// calls: CPointCommentaryNode::FinishCommentary
void __fastcall CPointCommentaryNode::StopPlaying(CPointCommentaryNode *const this)
{
  if ( this->m_bActive.m_Value )
    CPointCommentaryNode::FinishCommentary(this, 1);
}


// CPointCommentaryNode::AbortPlaying  (line 1380, @0x00000000021ac0c0, libserver.so)
// calls: CPointCommentaryNode::CleanupPostCommentary, CPointCommentaryNode::FinishCommentary
// callers: CCommentarySystem::ShutDownCommentary, Commentary_AbortCurrentNode
void __fastcall CPointCommentaryNode::AbortPlaying(CPointCommentaryNode *const this)
{
  if ( this->m_bActive.m_Value )
  {
    CPointCommentaryNode::FinishCommentary(this, 0);
  }
  else if ( this->m_bPreventChangesWhileMoving )
  {
    CPointCommentaryNode::CleanupPostCommentary(this);
  }
}


// CPointCommentaryNode::CanTeleportTo  (line 1396, @0x000000000219f530, libserver.so)
bool __fastcall CPointCommentaryNode::CanTeleportTo(CPointCommentaryNode *const this)
{
  return 1;
}


// CPointCommentaryNode::TeleportTo  (line 1405, @0x000000000219f540, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, Vector, VectorAdd, VectorAligned, VectorSubtract, WorldAlignMaxs, WorldAlignMins, operator*=, operator+, operator-, operator=, operator==
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetAbsOrigin, VectorNormalize, VectorAngles, CBasePlayer::SnapEyeAngles
// callers: CommentarySystem_PePlayerRunCommand
// local variable allocation has failed, the output may be wrong!
void __fastcall CPointCommentaryNode::TeleportTo(CPointCommentaryNode *const this, CBasePlayer *pPlayer)
{
  CCollisionProperty *m_pCollision; // rdi
  __int64 v5; // rax
  CCollisionProperty *v6; // rdi
  const Vector *v7; // r15
  const Vector *v8; // rdx
  float v9; // xmm0_4
  float v10; // xmm0_4
  vec_t v11; // xmm1_4
  const Vector *v12; // rax
  vec_t v13; // xmm3_4
  vec_t v14; // xmm0_4
  const Vector *AbsOrigin; // rax
  float x; // [rsp+4h] [rbp-18Ch]
  float z; // [rsp+8h] [rbp-188h]
  float y; // [rsp+Ch] [rbp-184h]
  Vector vecToNode; // [rsp+10h] [rbp-180h] BYREF
  __int128 vecAngle; // [rsp+20h] [rbp-170h] OVERLAPPED BYREF
  Ray_t ray; // [rsp+60h] [rbp-130h] BYREF
  trace_t trace; // [rsp+B0h] [rbp-E0h] BYREF

  x = this->m_vecTeleportOrigin.x;
  y = this->m_vecTeleportOrigin.y;
  z = this->m_vecTeleportOrigin.z;
  if ( x == vec3_origin.x
    && this->m_vecTeleportOrigin.y == vec3_origin.y
    && this->m_vecTeleportOrigin.z == vec3_origin.z )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    x = AbsOrigin->x;
    z = AbsOrigin->z;
    y = AbsOrigin->y;
  }
  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  m_pCollision = pPlayer->m_pCollision;
  if ( m_pCollision != 0 )
  {
    v5 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
    v6 = pPlayer->m_pCollision;
    v7 = v5;
    if ( v6 != 0 )
      v8 = (*(v6->_vptr_ICollideable + 1))(v6);
    else
      v8 = &vec3_origin;
  }
  else
  {
    v7 = &vec3_origin;
    v8 = &vec3_origin;
  }
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Delta.y = (y + 0.0) - y;
  ray.m_Delta.x = (x + 0.0) - x;
  ray.m_Delta.z = (z - 500.0) - z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Extents.x = v7->x - v8->x;
  ray.m_Extents.y = v7->y - v8->y;
  v9 = v7->z - v8->z;
  ray.m_Extents.x = ray.m_Extents.x * 0.5;
  ray.m_Extents.y = ray.m_Extents.y * 0.5;
  ray.m_Extents.z = v9 * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.x = v8->x + v7->x;
  ray.m_StartOffset.y = v8->y + v7->y;
  v10 = (v8->z + v7->z) * 0.5;
  ray.m_Start.x = x + (ray.m_StartOffset.x * 0.5);
  ray.m_Start.y = y + (ray.m_StartOffset.y * 0.5);
  ray.m_Start.z = z + v10;
  ray.m_StartOffset.y = -(ray.m_StartOffset.y * 0.5);
  ray.m_StartOffset.x = -(ray.m_StartOffset.x * 0.5);
  ray.m_StartOffset.z = -v10;
  CTraceFilterSimple::CTraceFilterSimple(&vecAngle, pPlayer, 4, 0);
  *(&vecAngle + 1) |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &vecAngle, &trace);
  (*(pPlayer->_vptr_IHandleEntity + 128))(pPlayer, &trace.endpos, 0, &vec3_origin);
  *&ray.m_Start.x = (*(pPlayer->_vptr_IHandleEntity + 164))(pPlayer);
  ray.m_Start.z = v11;
  v12 = CBaseEntity::GetAbsOrigin(this);
  v13 = v12->x - ray.m_Start.x;
  v14 = v12->z - ray.m_Start.z;
  vecToNode.y = v12->y - ray.m_Start.y;
  vecToNode.x = v13;
  vecToNode.z = v14;
  VectorNormalize(&vecToNode);
  ray.m_Start.z = 1.0;
  ray.m_Start.x = 0.0;
  ray.m_Start.y = 0.0;
  VectorAngles(&vecToNode, &ray.m_Start, &vecAngle);
  CBasePlayer::SnapEyeAngles(pPlayer, &vecAngle);
}


// CPointCommentaryNode::StartCommentary  (line 1429, @0x00000000021a9bb0, libserver.so)  // inlines: CEntityHandle, CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, ResetPrevAnimTime, Set, SetCommentaryConvarsChanging, String, ToCStr, curtime, entindex, operator bool, operator=, operator=<bool>, operator=<float>, ~CVariantBase
// calls: GetCommentaryPlayer, CBaseEntity::SetAnimTime, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::SetSkin, CEntityIOOutput::FireOutputInternal, CEntityInstance::GetEntityIndex, CBaseEntity::ThinkSet, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CPointCommentaryNode::PlayerActivated
// strings: "commentary_cvarsnotchanging\n"
// globals: g_pCommentarySystem, CEntityHandle::gm_pEntityList, s_pCommentaryUpdateViewThink, CPointCommentaryNode::UpdateViewThink(void)
void __fastcall CPointCommentaryNode::StartCommentary(CPointCommentaryNode *const this)
{
  CBasePlayer *CommentaryPlayer; // r13
  float v3; // xmm1_4
  CGlobalVars *v4; // r12
  float m_flCurrentTime; // xmm0_4
  const char *m_pAsString; // r15
  CEntityIndex v7; // eax
  void (*v8)(IVEngineServer2 *, _QWORD, const char *, ...); // r15
  CEntityIndex v9; // eax
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  unsigned __int16 v15; // dx
  int v16; // esi
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v21; // rax
  vec_t *v22; // rax
  CGlobalVars *v23; // r12
  void (__fastcall *v24)(__int64); // rax
  float v25; // xmm0_4
  void (*v26)(IVEngineServer2 *, _QWORD, const char *, ...); // [rsp+0h] [rbp-50h]
  float v27; // [rsp+0h] [rbp-50h]
  CVariant value; // [rsp+10h] [rbp-40h] BYREF

  CommentaryPlayer = GetCommentaryPlayer();
  if ( CommentaryPlayer != 0 )
  {
    if ( !this->m_bActive.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bActive.m_Value = 1;
    }
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v4->m_flCurrentTime;
      v3 = 0.0;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    CBaseEntity::SetAnimTime(this, m_flCurrentTime, v3, 0);
    CBaseAnimating::GetBaseAnimatingController(this)->m_flPrevAnimTime = 0.0;
    CBaseAnimating::SetSkin(this, 1);
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_pOnCommentaryStarted, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_iszPreCommands.u.m_Id != 0 )
    {
      m_pAsString = "";
      g_pCommentarySystem->m_bCommentaryConvarsChanging = 1;
      if ( this->m_iszPreCommands.u.m_Id != 0 )
        m_pAsString = this->m_iszPreCommands.u.m_pAsString;
      v26 = *(*engine + 288LL);
      v7.m_Data = CEntityInstance::GetEntityIndex(CommentaryPlayer).m_Data;
      v26(engine, v7.m_Data, "%s", m_pAsString);
      v8 = *(*engine + 288LL);
      v9.m_Data = CEntityInstance::GetEntityIndex(CommentaryPlayer).m_Data;
      v8(engine, v9.m_Data, "%s", "commentary_cvarsnotchanging\n");
    }
    v10 = gpGlobals;
    v11 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v21 = gpGlobals->m_pfnWarningFunc;
        if ( v21 != 0 )
          (v21)(1, 0.0);
      }
      v11 = v10->m_flCurrentTime;
    }
    if ( v11 != this->m_flStartTime.m_Value )
    {
      v27 = v11;
      (*(this->_vptr_IHandleEntity + 22))(this, 1388, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flStartTime.m_Value = v27;
    }
    m_Index = this->m_hViewTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewTarget.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[this->m_hViewTarget.m_Index & 0x1FF];
        if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          goto LABEL_36;
      }
    }
    if ( this->m_hViewPosition.m_Value.m_Index == -1 )
    {
      v15 = 0x7FFF;
      v16 = 0x7FFF;
    }
    else
    {
      v15 = this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
      v16 = v15;
    }
    v17 = (this->m_hViewPosition.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
    value.m_int = v17;
    if ( v17 + 2 > 1 )
    {
      v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
      if ( v18 != 0 )
      {
        v19 = &v18[v16 & 0x1FF];
        if ( v19 != 0 && v17 == v19->m_EHandle.m_Index && v19->m_pInstance != 0 )
        {
LABEL_36:
          v22 = (*(CommentaryPlayer->_vptr_IHandleEntity + 165))(CommentaryPlayer);
          v23 = gpGlobals;
          this->m_vecOriginalAngles.x = *v22;
          this->m_vecOriginalAngles.y = v22[1];
          this->m_vecOriginalAngles.z = v22[2];
          if ( v23 != 0 )
          {
            if ( !v23->m_bEnableAssertions && !v23->m_bInSimulation )
            {
              v24 = v23->m_pfnWarningFunc;
              if ( v24 != 0 )
                v24(1);
            }
            v25 = v23->m_flCurrentTime;
          }
          else
          {
            v25 = 0.0;
          }
          CBaseEntity::ThinkSet(this, CPointCommentaryNode::UpdateViewThink, v25, s_pCommentaryUpdateViewThink, 0);
        }
      }
    }
  }
}


// CC_CommentaryFinishNode  (line 1470, @0x00000000021ab680, libserver.so)  // inlines: Get, GetActiveNode, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, StopPlaying, operator CEntityInstance*, operator CPointCommentaryNode*
// calls: CPointCommentaryNode::FinishCommentary
// globals: g_pCommentarySystem, CEntityHandle::gm_pEntityList
void __fastcall CC_CommentaryFinishNode(const CCommandContext *const ctx, const CCommand *const args)
{
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rax
  CEntityIdentity *v4; // rax
  CPointCommentaryNode *m_pInstance; // rdi

  if ( g_pCommentarySystem != 0 )
  {
    m_Index = g_pCommentarySystem->m_hActiveCommentaryNode.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_pCommentarySystem->m_hActiveCommentaryNode.m_Index) >> 9)
                                                          & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[g_pCommentarySystem->m_hActiveCommentaryNode.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0 && m_pInstance->m_bActive.m_Value )
            CPointCommentaryNode::FinishCommentary(m_pInstance, 1);
        }
      }
    }
  }
}


// CPointCommentaryNode::UpdateViewThink  (line 1483, @0x000000000219e840, libserver.so)  // inlines: CEntityHandle, ExponentialDecay, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, Set, VectorLerp, VectorSubtract, operator CBaseEntity*, operator bool, operator!, operator-, operator->, operator=
// calls: GetCommentaryPlayer, CEntityHandle::operator CEntityInstance*, CConcreteEntityList::LookupEntity, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, VectorAngles, AngleDiff, V_logf, V_expf, AngleNormalize, CBaseEntity::SetAbsAngles, CGlobalVarsBase::curtime (18 total)
// strings: "point_commentary_viewpoint"
// globals: CEntityHandle::gm_pEntityList, s_pCommentaryUpdateViewThink
void __fastcall CPointCommentaryNode::UpdateViewThink(CPointCommentaryNode *const this)
{
  CBasePlayer *CommentaryPlayer; // r12
  uint32 m_Index; // eax
  const CConcreteEntityList *v4; // r15
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CBaseEntity *v7; // rax
  QAngle *AbsAngles; // rax
  EHANDLE *p_m_hViewPositionMover; // rdi
  const CBaseEntity *v10; // rax
  const Vector *AbsOrigin; // r15
  CEntityInstance *v12; // rax
  float v13; // xmm1_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  vec_t v24; // xmm0_4
  const CConcreteEntityList *v25; // r15
  CBaseEntity *v26; // rax
  double v27; // xmm0_8
  double v28; // xmm1_8
  unsigned __int16 v29; // dx
  int v30; // esi
  vec_t v31; // eax
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  CBaseCombatWeapon *v34; // rax
  float v35; // xmm0_4
  float v36; // xmm2_4
  __m128d v37; // xmm0
  unsigned __int16 v38; // dx
  int v39; // esi
  const CBaseEntity *m_pInstance; // rdi
  vec_t v41; // eax
  CEntityIdentity *v42; // rdx
  CEntityIdentity *v43; // rdx
  const Vector *v44; // r14
  double v45; // xmm0_8
  float v46; // xmm1_4
  CBaseEntity *v47; // rax
  double v48; // xmm0_8
  double v49; // xmm1_8
  CBaseEntity *v50; // rax
  const CBaseEntity *v51; // rax
  vec_t v52; // xmm1_4
  CBaseEntity *v53; // rax
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v56; // eax
  __int16 v57; // cx
  vec_t v58; // xmm1_4
  CBaseEntity *v59; // rax
  const QAngle *v60; // r15
  CBaseEntity *v61; // rax
  CBaseEntity *v62; // rax
  CBaseCombatWeapon *ActiveWeapon; // rax
  CBaseEntity *v64; // rax
  CEntityIdentity *v65; // rdx
  int v66; // eax
  __int16 v67; // cx
  const QAngle *v68; // r13
  CBaseEntity *v69; // rax
  CBaseEntity *v70; // rax
  vec_t v71; // xmm1_4
  CEntityInstance *v72; // rax
  float v73; // xmm1_4
  EHANDLE *handle; // [rsp+0h] [rbp-90h]
  float frametime; // [rsp+8h] [rbp-88h]
  float flBlendPerc; // [rsp+Ch] [rbp-84h]
  QAngle angGoal; // [rsp+10h] [rbp-80h] BYREF
  QAngle angCurrent; // [rsp+20h] [rbp-70h] BYREF
  Vector vForward; // [rsp+30h] [rbp-60h] BYREF
  Vector vecCurEye; // [rsp+40h] [rbp-50h] BYREF
  Vector vOrigin; // [rsp+50h] [rbp-40h] BYREF

  if ( !this->m_bActive.m_Value )
    return;
  CommentaryPlayer = GetCommentaryPlayer();
  if ( CommentaryPlayer == 0 )
    return;
  m_Index = this->m_hViewTarget.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewTarget.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hViewTarget.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        handle = &this->m_hViewTargetAngles;
        if ( CEntityHandle::operator CEntityInstance *(&this->m_hViewTargetAngles) == 0
          && CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover) == 0 )
        {
          EntityByName = CreateEntityByName("point_commentary_viewpoint", -1);
          if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
          {
            v56 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v57 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v57 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hViewTargetAngles.m_Index) = v57 | this->m_hViewTargetAngles.m_Index & 0x8000;
            this->m_hViewTargetAngles.m_Index = (v56 << 15) | this->m_hViewTargetAngles.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hViewTargetAngles.m_Index = -1;
          }
          *&vOrigin.x = (*(CommentaryPlayer->_vptr_IHandleEntity + 164))(CommentaryPlayer);
          vOrigin.z = v58;
          v59 = CEntityHandle::operator CEntityInstance *(handle);
          CBaseEntity::SetAbsOrigin(v59, &vOrigin);
          v60 = (*(CommentaryPlayer->_vptr_IHandleEntity + 165))(CommentaryPlayer);
          v61 = CEntityHandle::operator CEntityInstance *(handle);
          CBaseEntity::SetAbsAngles(v61, v60);
          v62 = CEntityHandle::operator CEntityInstance *(handle);
          CBasePlayer::SetViewEntity(CommentaryPlayer, v62);
          if ( CBaseCombatCharacter::GetActiveWeapon(CommentaryPlayer) != 0 )
          {
            ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(CommentaryPlayer);
            (*(ActiveWeapon->_vptr_IHandleEntity + 283))(ActiveWeapon, 0);
          }
          v4 = CEntityHandle::gm_pEntityList;
        }
        if ( CConcreteEntityList::LookupEntity(v4, &this->m_hViewPositionMover) != 0 )
        {
          v7 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
          AbsAngles = CBaseEntity::GetAbsAngles(v7);
          p_m_hViewPositionMover = &this->m_hViewPositionMover;
          angCurrent = *AbsAngles;
        }
        else
        {
          if ( CConcreteEntityList::LookupEntity(v4, handle) == 0 )
          {
            angCurrent = *(*(CommentaryPlayer->_vptr_IHandleEntity + 165))(CommentaryPlayer);
            *&vecCurEye.x = (*(CommentaryPlayer->_vptr_IHandleEntity + 164))(CommentaryPlayer);
            vecCurEye.z = v71;
            v72 = CEntityHandle::operator CEntityInstance *(&this->m_hViewTarget);
            *&vOrigin.x = (*(v72->_vptr_IHandleEntity + 62))(v72);
            vOrigin.z = v73;
            vForward.y = vOrigin.y - vecCurEye.y;
            vForward.z = v73 - vecCurEye.z;
            vForward.x = vOrigin.x - vecCurEye.x;
            VectorAngles(&vForward, &angGoal);
            goto LABEL_12;
          }
          v51 = CEntityHandle::operator CEntityInstance *(handle);
          angCurrent = *CBaseEntity::GetAbsAngles(v51);
          *&vOrigin.x = (*(CommentaryPlayer->_vptr_IHandleEntity + 164))(CommentaryPlayer);
          vOrigin.z = v52;
          v53 = CEntityHandle::operator CEntityInstance *(handle);
          CBaseEntity::SetAbsOrigin(v53, &vOrigin);
          p_m_hViewPositionMover = &this->m_hViewTargetAngles;
        }
        v10 = CEntityHandle::operator CEntityInstance *(p_m_hViewPositionMover);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
        v12 = CEntityHandle::operator CEntityInstance *(&this->m_hViewTarget);
        *&vOrigin.x = (*(v12->_vptr_IHandleEntity + 62))(v12);
        vOrigin.z = v13;
        v14 = v13 - AbsOrigin->z;
        v15 = vOrigin.x - AbsOrigin->x;
        vecCurEye.y = vOrigin.y - AbsOrigin->y;
        vecCurEye.z = v14;
        vecCurEye.x = v15;
        VectorAngles(&vecCurEye, &angGoal);
LABEL_12:
        AngleDiff(angCurrent.x, v16);
        AngleDiff(angCurrent.y, v17);
        frametime = gpGlobals->frametime;
        v21 = V_logf(COERCE_DOUBLE(1056964608), v18, v19, v20);
        v22 = V_expf((v21 / 0.30000001) * frametime);
        angCurrent.x = AngleNormalize(1.0 - v22);
        v24 = AngleNormalize(v23);
        v25 = CEntityHandle::gm_pEntityList;
        angCurrent.y = v24;
        if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &this->m_hViewPositionMover) != 0 )
        {
          v26 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
          CBaseEntity::SetAbsAngles(v26, &angCurrent);
        }
        else
        {
          if ( CConcreteEntityList::LookupEntity(v25, handle) != 0 )
          {
            v50 = CEntityHandle::operator CEntityInstance *(handle);
            CBaseEntity::SetAbsAngles(v50, &angCurrent);
          }
          CBasePlayer::SnapEyeAngles(CommentaryPlayer, &angCurrent);
        }
        *&v27 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::SetNextThink(this, v27, v28, s_pCommentaryUpdateViewThink);
      }
    }
  }
  if ( this->m_hViewPosition.m_Value.m_Index == -1 )
  {
    v29 = 0x7FFF;
    v30 = 0x7FFF;
  }
  else
  {
    v29 = this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
    v30 = v29;
  }
  LODWORD(v31) = (this->m_hViewPosition.m_Value.m_Index >> 15 << 15) | v29 & 0x7FFF;
  vOrigin.x = v31;
  if ( (LODWORD(v31) + 2) > 1 )
  {
    v32 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v30 >> 9];
    if ( v32 != 0 )
    {
      v33 = &v32[v30 & 0x1FF];
      if ( v33 != 0 && LODWORD(v31) == v33->m_EHandle.m_Index && v33->m_pInstance != 0 )
      {
        if ( CBaseCombatCharacter::GetActiveWeapon(CommentaryPlayer) != 0 )
        {
          v34 = CBaseCombatCharacter::GetActiveWeapon(CommentaryPlayer);
          (*(v34->_vptr_IHandleEntity + 283))(v34, 0);
        }
        if ( CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover) == 0 )
        {
          v64 = CreateEntityByName("point_commentary_viewpoint", -1);
          if ( v64 != 0 && (v65 = v64->m_pEntity) != 0 )
          {
            v66 = (v65->m_EHandle.m_Index >> 15) - (v65->m_flags & 1);
            v67 = 0x7FFF;
            if ( v65->m_EHandle.m_Index != -1 )
              v67 = v65->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hViewPositionMover.m_Index) = v67 | this->m_hViewPositionMover.m_Index & 0x8000;
            this->m_hViewPositionMover.m_Index = (v66 << 15) | this->m_hViewPositionMover.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hViewPositionMover.m_Index = -1;
          }
          v68 = (*(CommentaryPlayer->_vptr_IHandleEntity + 165))(CommentaryPlayer);
          v69 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
          CBaseEntity::SetAbsAngles(v69, v68);
          v70 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
          CBasePlayer::SetViewEntity(CommentaryPlayer, v70);
        }
        v35 = CGlobalVarsBase::curtime(gpGlobals, 0);
        v36 = 1.0;
        v37.m128d_f64[1] = (v35 - this->m_flStartTime.m_Value);
        v37.m128d_f64[0] = v37.m128d_f64[1] * 0.5;
        if ( v37.m128d_f64[1] * 0.5 <= 1.0 )
        {
          v36 = 0.0;
          if ( v37.m128d_f64[0] >= 0.0 )
            v36 = _mm_movedup_pd(v37).m128d_f64[0];
        }
        if ( this->m_hViewPosition.m_Value.m_Index == -1 )
        {
          v38 = 0x7FFF;
          v39 = 0x7FFF;
        }
        else
        {
          v38 = this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
          v39 = v38;
        }
        m_pInstance = 0;
        LODWORD(v41) = (this->m_hViewPosition.m_Value.m_Index >> 15 << 15) | v38 & 0x7FFF;
        vOrigin.x = v41;
        if ( (LODWORD(v41) + 2) > 1 )
        {
          v42 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v39 >> 9];
          if ( v42 != 0 )
          {
            v43 = &v42[v39 & 0x1FF];
            if ( v43 != 0 && LODWORD(v41) == v43->m_EHandle.m_Index )
              m_pInstance = v43->m_pInstance;
          }
        }
        flBlendPerc = v36;
        v44 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v45 = (*(CommentaryPlayer->_vptr_IHandleEntity + 164))(CommentaryPlayer);
        vOrigin.z = v46;
        *&vOrigin.x = v45;
        vecCurEye.x = ((v44->x - *&v45) * flBlendPerc) + *&v45;
        vecCurEye.y = ((v44->y - *(&v45 + 1)) * flBlendPerc) + *(&v45 + 1);
        vecCurEye.z = ((v44->z - v46) * flBlendPerc) + v46;
        v47 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
        CBaseEntity::SetAbsOrigin(v47, &vecCurEye);
        *&v48 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::SetNextThink(this, v48, v49, s_pCommentaryUpdateViewThink);
      }
    }
  }
}


// CPointCommentaryNode::UpdateViewPostThink  (line 1590, @0x00000000021aaef0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, VectorAdd, VectorMultiply, VectorSubtract, curtime, operator bool, operator*, operator+, operator-, operator->
// calls: GetCommentaryPlayer, CPointCommentaryNode::CleanupPostCommentary, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsAngles, CBasePlayer::SnapEyeAngles, CBaseEntity::SetAbsOrigin, CBaseEntity::SetNextThink, AngleQuaternion, QuaternionSlerp, QuaternionAngles, CBaseEntity::SetAbsAngles
// globals: CEntityHandle::gm_pEntityList, s_pCommentaryUpdateViewThink
void __fastcall CPointCommentaryNode::UpdateViewPostThink(CPointCommentaryNode *const this)
{
  CBasePlayer *CommentaryPlayer; // r12
  double v3; // xmm0_8
  unsigned __int16 v4; // cx
  int v5; // edi
  vec_t v6; // edx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v13; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flFinishedTime; // xmm0_4
  float v16; // xmm1_4
  __m128 v17; // xmm0
  __m128 v18; // xmm3
  float v19; // xmm1_4
  const CBaseEntity *v20; // rax
  const QAngle *AbsAngles; // rax
  __m128d v22; // xmm0
  double v23; // xmm0_8
  float v24; // xmm1_4
  float v25; // xmm1_4
  CBaseEntity *v26; // rax
  double v27; // xmm1_8
  uint32 v28; // eax
  CConcreteEntityList *v29; // rsi
  CEntityIdentity *v30; // rdx
  __int64 v31; // rcx
  CEntityIdentity *v32; // rdx
  CGlobalVars *v33; // r12
  double v34; // xmm0_8
  FnGlobalVarsWarningFunc v35; // rax
  CBaseEntity *v36; // rax
  float flBlendPerc; // [rsp+Ch] [rbp-A4h]
  float v38; // [rsp+10h] [rbp-A0h]
  float v39; // [rsp+14h] [rbp-9Ch]
  float q; // [rsp+18h] [rbp-98h]
  Vector vecCurEye; // [rsp+30h] [rbp-80h] BYREF
  QAngle angCurrent; // [rsp+40h] [rbp-70h] BYREF
  Quaternion quatFinish; // [rsp+50h] [rbp-60h] BYREF
  Quaternion quatOriginal; // [rsp+60h] [rbp-50h] BYREF
  Quaternion quatCurrent; // [rsp+70h] [rbp-40h] BYREF

  CommentaryPlayer = GetCommentaryPlayer();
  if ( CommentaryPlayer != 0 )
  {
    if ( this->m_hViewPosition.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    LODWORD(v6) = (this->m_hViewPosition.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    quatCurrent.x = v6;
    if ( (LODWORD(v6) + 2) <= 1 )
      goto LABEL_8;
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 == 0 )
      goto LABEL_8;
    v8 = &v7[v5 & 0x1FF];
    if ( v8 == 0 )
      goto LABEL_8;
    if ( LODWORD(v6) != v8->m_EHandle.m_Index )
      goto LABEL_8;
    if ( v8->m_pInstance == 0 )
      goto LABEL_8;
    m_Index = this->m_hViewPositionMover.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_8;
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewPositionMover.m_Index) >> 9) & 0x3F];
    if ( v10 == 0 )
      goto LABEL_8;
    v11 = &v10[this->m_hViewPositionMover.m_Index & 0x1FF];
    if ( v11 == 0 || m_Index != v11->m_EHandle.m_Index )
      goto LABEL_8;
    m_flCurrentTime = 0.0;
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v3, 0.0);
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    m_flFinishedTime = this->m_flFinishedTime;
    v16 = m_flCurrentTime - m_flFinishedTime;
    v17.m128_f32[0] = m_flFinishedTime - this->m_flStartTime.m_Value;
    v18 = _mm_cmpge_ss(0x40000000u, v17);
    v19 = v16 / COERCE_FLOAT(_mm_andnot_ps(v18, 0x40000000u).m128_u32[0] | v17.m128_i32[0] & v18.m128_i32[0]);
    if ( v19 > 1.0 )
    {
LABEL_23:
      v20 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
      AbsAngles = CBaseEntity::GetAbsAngles(v20);
      CBasePlayer::SnapEyeAngles(CommentaryPlayer, AbsAngles);
LABEL_8:
      CPointCommentaryNode::CleanupPostCommentary(this);
      this->m_bPreventChangesWhileMoving = 0;
      return;
    }
    if ( v19 < 0.0 )
    {
      flBlendPerc = 1.0;
    }
    else
    {
      v22 = 0x3FF0000000000000uLL;
      v22.m128d_f64[0] = 1.0 - v19;
      flBlendPerc = _mm_movedup_pd(v22).m128d_f64[0];
      if ( flBlendPerc <= 0.0 )
        goto LABEL_23;
    }
    v23 = (*(CommentaryPlayer->_vptr_IHandleEntity + 164))(CommentaryPlayer);
    v38 = (this->m_vecFinishOrigin.x - *&v23) * flBlendPerc;
    q = (this->m_vecFinishOrigin.z - v24) * flBlendPerc;
    v39 = (this->m_vecFinishOrigin.y - *(&v23 + 1)) * flBlendPerc;
    *&quatCurrent.x = (*(CommentaryPlayer->_vptr_IHandleEntity + 164))(CommentaryPlayer);
    quatCurrent.z = v25;
    vecCurEye.y = v39 + quatCurrent.y;
    vecCurEye.z = q + v25;
    vecCurEye.x = v38 + quatCurrent.x;
    v26 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
    CBaseEntity::SetAbsOrigin(v26, &vecCurEye);
    v28 = this->m_hViewTarget.m_Index;
    v29 = CEntityHandle::gm_pEntityList;
    if ( v28 + 2 > 1 )
    {
      v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewTarget.m_Index) >> 9) & 0x3F];
      if ( v30 != 0 )
      {
        v31 = this->m_hViewTarget.m_Index & 0x1FF;
        v29 = (8 * v31);
        v32 = &v30[v31];
        if ( v32 != 0 && v28 == v32->m_EHandle.m_Index )
        {
          AngleQuaternion(&this->m_vecOriginalAngles, &quatOriginal);
          AngleQuaternion(&this->m_vecFinishAngles, &quatFinish);
          QuaternionSlerp(&quatFinish, &quatOriginal, 1.0 - flBlendPerc, &quatCurrent);
          QuaternionAngles(&quatCurrent, &angCurrent);
          v36 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
          CBaseEntity::SetAbsAngles(v36, &angCurrent);
        }
      }
    }
    v33 = gpGlobals;
    v34 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v35 = gpGlobals->m_pfnWarningFunc;
        if ( v35 != 0 )
          (v35)(1, v29, 0.0);
      }
      *&v34 = LODWORD(v33->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v34, v27, s_pCommentaryUpdateViewThink);
  }
}


// CPointCommentaryNode::FinishCommentary  (line 1643, @0x00000000021ab320, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetCommentaryConvarsChanging, SetPlaybackRate, String, ToCStr, curtime, entindex, operator CEntityInstance*, operator bool, operator->, operator=, operator=<bool>
// calls: GetCommentaryPlayer, CEntityInstance::GetEntityIndex, CPointCommentaryNode::CleanupPostCommentary, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::ThinkSet
// callers: CPointCommentaryNode::StopPlaying, CCommentarySystem::JumpToNextNode, CC_CommentaryFinishNode, CPointCommentaryNode::PlayerActivated, CommentarySystem_PePlayerRunCommand, CPointCommentaryNode::InputStartCommentary, CPointCommentaryNode::AbortPlaying
// strings: "commentary_cvarsnotchanging\n"
// globals: g_pCommentarySystem, CEntityHandle::gm_pEntityList, s_pCommentaryUpdateViewThink, CPointCommentaryNode::UpdateViewPostThink(void)
void __fastcall CPointCommentaryNode::FinishCommentary(CPointCommentaryNode *const this, bool bBlendOut)
{
  CBasePlayer *CommentaryPlayer; // r12
  const char *m_pAsString; // r15
  CEntityIndex v6; // eax
  void (*v7)(IVEngineServer2 *, _QWORD, const char *, ...); // r15
  CEntityIndex v8; // eax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v10; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CBaseAnimatingController *BaseAnimatingController; // rax
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v21; // rdi
  CConcreteEntityList *v22; // rsi
  vec_t z; // xmm0_4
  uint32 v24; // eax
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  const QAngle *AbsAngles; // rax
  CGlobalVars *v28; // r12
  vec_t v29; // xmm0_4
  float v30; // xmm0_4
  void (__fastcall *v31)(__int64, double); // rax
  void (*v32)(IVEngineServer2 *, _QWORD, const char *, ...); // [rsp+8h] [rbp-38h]

  CommentaryPlayer = GetCommentaryPlayer();
  if ( CommentaryPlayer != 0 )
  {
    if ( this->m_iszPostCommands.u.m_Id != 0 )
    {
      m_pAsString = "";
      g_pCommentarySystem->m_bCommentaryConvarsChanging = 1;
      if ( this->m_iszPostCommands.u.m_Id != 0 )
        m_pAsString = this->m_iszPostCommands.u.m_pAsString;
      v32 = *(*engine + 288LL);
      v6.m_Data = CEntityInstance::GetEntityIndex(CommentaryPlayer).m_Data;
      v32(engine, v6.m_Data, "%s", m_pAsString);
      v7 = *(*engine + 288LL);
      v8.m_Data = CEntityInstance::GetEntityIndex(CommentaryPlayer).m_Data;
      v7(engine, v8.m_Data, "%s", "commentary_cvarsnotchanging\n");
    }
    m_flCurrentTime = 0.0;
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    this->m_flFinishedTime = m_flCurrentTime;
    if ( bBlendOut
      && (v12 = this->m_hViewPositionMover.m_Index) + 2 > 1
      && (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewPositionMover.m_Index) >> 9)
                                                               & 0x3F]) != 0
      && (v14 = &v13[this->m_hViewPositionMover.m_Index & 0x1FF]) != 0
      && v12 == v14->m_EHandle.m_Index )
    {
      if ( this->m_bActive.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bActive.m_Value = 0;
      }
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
      (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
      m_Index = this->m_hViewPositionMover.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewPositionMover.m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[this->m_hViewPositionMover.m_Index & 0x1FF];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            m_pInstance = v19->m_pInstance;
        }
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      v21 = 0;
      v22 = CEntityHandle::gm_pEntityList;
      this->m_vecFinishOrigin.x = AbsOrigin->x;
      this->m_vecFinishOrigin.y = AbsOrigin->y;
      z = AbsOrigin->z;
      v24 = this->m_hViewPositionMover.m_Index;
      this->m_vecFinishOrigin.z = z;
      if ( v24 + 2 > 1 )
      {
        v25 = v22->m_pIdentityChunks[(LOWORD(this->m_hViewPositionMover.m_Index) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[this->m_hViewPositionMover.m_Index & 0x1FF];
          if ( v26 != 0 && v24 == v26->m_EHandle.m_Index )
            v21 = v26->m_pInstance;
        }
      }
      AbsAngles = CBaseEntity::GetAbsAngles(v21);
      v28 = gpGlobals;
      this->m_vecFinishAngles.x = AbsAngles->x;
      this->m_vecFinishAngles.y = AbsAngles->y;
      v29 = AbsAngles->z;
      this->m_bPreventChangesWhileMoving = 1;
      this->m_vecFinishAngles.z = v29;
      v30 = 0.0;
      if ( v28 != 0 )
      {
        if ( !v28->m_bEnableAssertions && !v28->m_bInSimulation )
        {
          v31 = v28->m_pfnWarningFunc;
          if ( v31 != 0 )
            v31(1, 0.0);
        }
        v30 = v28->m_flCurrentTime;
      }
      CBaseEntity::ThinkSet(this, CPointCommentaryNode::UpdateViewPostThink, v30, s_pCommentaryUpdateViewThink, 0);
    }
    else
    {
      CPointCommentaryNode::CleanupPostCommentary(this);
    }
  }
}


// CPointCommentaryNode::CleanupPostCommentary  (line 1680, @0x00000000021aa9c0, libserver.so)  // inlines: CEntityHandle, CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetViewEntity, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetActiveNode, SetPlaybackRate, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=, operator=<bool>, ~CVariantBase
// calls: GetCommentaryPlayer, CConcreteEntityList::LookupEntity, CBaseCombatCharacter::GetActiveWeapon, UTIL_Remove, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::ThinkSet, CEntitySystem::CancelEntityIOEvents, CEntityIOOutput::FireOutputInternal, CEntityHandle::operator CEntityInstance*, CBasePlayer::SetViewEntity, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CPointCommentaryNode::UpdateViewPostThink, CPointCommentaryNode::FinishCommentary, CPointCommentaryNode::AbortPlaying
// globals: CEntityHandle::gm_pEntityList, s_pCommentaryUpdateViewThink, g_pCommentarySystem
void __fastcall CPointCommentaryNode::CleanupPostCommentary(CPointCommentaryNode *const this)
{
  CBasePlayer *CommentaryPlayer; // r12
  CConcreteEntityList *v3; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseCombatWeapon *ActiveWeapon; // rax
  CConcreteEntityList *v8; // r15
  uint32 v9; // edx
  unsigned int v10; // r14d
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rdi
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  uint32 v16; // r14d
  CConcreteEntityList *v17; // r15
  unsigned int v18; // esi
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax
  uint32 v21; // edx
  CConcreteEntityList *v22; // r8
  CEntityInstance *v23; // rdi
  CEntityIdentity *v24; // rax
  CEntityIdentity *v25; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  uint32 m_nHashCode; // ecx
  int v28; // edi
  int v29; // eax
  CEntityIdentity *v30; // rcx
  CEntityIdentity *v31; // rcx
  CEntityInstance *v32; // rax
  int v33; // edi
  int v34; // eax
  CEntityIdentity *v35; // rcx
  CEntityIdentity *v36; // rcx
  CEntityInstance *v37; // rax
  EHANDLE *p_m_hViewTargetAngles; // [rsp+0h] [rbp-60h]
  uint32 v39; // [rsp+Ch] [rbp-54h]
  CEntityInstance *m_pInstance; // [rsp+10h] [rbp-50h]
  CEntityInstance *v41; // [rsp+10h] [rbp-50h]
  CVariant value; // [rsp+20h] [rbp-40h] BYREF

  CommentaryPlayer = GetCommentaryPlayer();
  if ( CommentaryPlayer == 0 )
    return;
  v3 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hViewPositionMover.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewPositionMover.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hViewPositionMover.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        p_m_hViewTargetAngles = &this->m_hViewTargetAngles;
        if ( CBaseCombatCharacter::GetActiveWeapon(CommentaryPlayer) != 0 )
          goto LABEL_8;
LABEL_35:
        v8 = CEntityHandle::gm_pEntityList;
        goto LABEL_9;
      }
    }
  }
  p_m_hViewTargetAngles = &this->m_hViewTargetAngles;
  if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &this->m_hViewTargetAngles) != 0 )
  {
    if ( CBaseCombatCharacter::GetActiveWeapon(CommentaryPlayer) != 0 )
    {
LABEL_8:
      ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(CommentaryPlayer);
      (*(ActiveWeapon->_vptr_IHandleEntity + 282))(ActiveWeapon);
      v8 = CEntityHandle::gm_pEntityList;
      goto LABEL_9;
    }
    goto LABEL_35;
  }
  v8 = v3;
LABEL_9:
  v9 = this->m_hViewTargetAngles.m_Index;
  v10 = v9 + 2;
  if ( v9 + 2 > 1 )
  {
    v11 = v8->m_pIdentityChunks[(LOWORD(this->m_hViewTargetAngles.m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[this->m_hViewTargetAngles.m_Index & 0x1FF];
      if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
      {
        if ( CommentaryPlayer->m_hViewEntity.m_Value.m_Index == -1 )
          v28 = 0x7FFF;
        else
          v28 = CommentaryPlayer->m_hViewEntity.m_Value.m_Index & 0x7FFF;
        m_pInstance = 0;
        v29 = (CommentaryPlayer->m_hViewEntity.m_Value.m_Index >> 15 << 15) | v28 & 0x7FFF;
        value.m_int = v29;
        if ( (v29 + 2) > 1 )
        {
          v30 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v28 >> 9];
          if ( v30 != 0 )
          {
            v31 = &v30[v28 & 0x1FF];
            if ( v31 != 0 && v29 == v31->m_EHandle.m_Index )
              m_pInstance = v31->m_pInstance;
          }
        }
        v39 = v9;
        v32 = CEntityHandle::operator CEntityInstance *(p_m_hViewTargetAngles);
        v9 = v39;
        if ( v32 == m_pInstance )
        {
          CBasePlayer::SetViewEntity(CommentaryPlayer, 0);
          v9 = this->m_hViewTargetAngles.m_Index;
          v8 = CEntityHandle::gm_pEntityList;
          v10 = v9 + 2;
        }
      }
    }
  }
  v13 = 0;
  if ( v10 > 1 )
  {
    v14 = v8->m_pIdentityChunks[(LOWORD(this->m_hViewTargetAngles.m_Index) >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = &v14[this->m_hViewTargetAngles.m_Index & 0x1FF];
      if ( v15 != 0 && v15->m_EHandle.m_Index == v9 )
        v13 = v15->m_pInstance;
    }
  }
  UTIL_Remove(v13);
  v16 = this->m_hViewPositionMover.m_Index;
  v17 = CEntityHandle::gm_pEntityList;
  v18 = v16 + 2;
  if ( v16 + 2 <= 1 )
    goto LABEL_22;
  v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewPositionMover.m_Index) >> 9) & 0x3F];
  if ( v19 == 0 )
    goto LABEL_22;
  v20 = &v19[this->m_hViewPositionMover.m_Index & 0x1FF];
  if ( v20 == 0 || v16 != v20->m_EHandle.m_Index )
    goto LABEL_22;
  if ( CommentaryPlayer->m_hViewEntity.m_Value.m_Index == -1 )
    v33 = 0x7FFF;
  else
    v33 = CommentaryPlayer->m_hViewEntity.m_Value.m_Index & 0x7FFF;
  v41 = 0;
  v34 = (CommentaryPlayer->m_hViewEntity.m_Value.m_Index >> 15 << 15) | v33 & 0x7FFF;
  value.m_int = v34;
  if ( (v34 + 2) > 1 )
  {
    v35 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v33 >> 9];
    if ( v35 != 0 )
    {
      v36 = &v35[v33 & 0x1FF];
      if ( v36 != 0 && v34 == v36->m_EHandle.m_Index )
        v41 = v36->m_pInstance;
    }
  }
  v37 = CEntityHandle::operator CEntityInstance *(&this->m_hViewPositionMover);
  v18 = v16 + 2;
  if ( v37 == v41 )
  {
    CBasePlayer::SetViewEntity(CommentaryPlayer, 0);
    v21 = this->m_hViewPositionMover.m_Index;
    v22 = CEntityHandle::gm_pEntityList;
    v18 = v21 + 2;
  }
  else
  {
LABEL_22:
    v21 = v16;
    v22 = v17;
  }
  v23 = 0;
  if ( v18 > 1 )
  {
    v24 = v22->m_pIdentityChunks[(LOWORD(this->m_hViewPositionMover.m_Index) >> 9) & 0x3F];
    if ( v24 != 0 )
    {
      v25 = &v24[this->m_hViewPositionMover.m_Index & 0x1FF];
      if ( v25 != 0 && v21 == v25->m_EHandle.m_Index )
        v23 = v25->m_pInstance;
    }
  }
  UTIL_Remove(v23);
  if ( this->m_bActive.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bActive.m_Value = 0;
  }
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
  m_nHashCode = s_pCommentaryUpdateViewThink.m_nHashCode;
  this->m_bUnstoppable = 0;
  this->m_flFinishedTime = 0.0;
  CBaseEntity::ThinkSet(this, 0LL, -1.0, m_nHashCode, 0);
  CEntitySystem::CancelEntityIOEvents(g_pEntitySystem, this);
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_pOnCommentaryStopped, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  g_pCommentarySystem->m_hActiveCommentaryNode.m_Index = -1;
}


// CPointCommentaryNode::InputStartCommentary  (line 1722, @0x00000000021abfd0, libserver.so)  // inlines: Get, GetActiveNode, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, StopPlaying, operator CEntityInstance*, operator CPointCommentaryNode*
// calls: CPointCommentaryNode::PlayerActivated, CPointCommentaryNode::FinishCommentary
// callers: CPointCommentaryNode::InputStartCommentary, CPointCommentaryNode::InputStartUnstoppableCommentary
// globals: g_pCommentarySystem, CEntityHandle::gm_pEntityList
void __fastcall CPointCommentaryNode::InputStartCommentary(
        CPointCommentaryNode *const this,
        inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CPointCommentaryNode *m_pInstance; // rdi

  m_Index = g_pCommentarySystem->m_hActiveCommentaryNode.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_pCommentarySystem->m_hActiveCommentaryNode.m_Index) >> 9)
                                                            & 0x3F]) != 0
    && (v5 = &v4[g_pCommentarySystem->m_hActiveCommentaryNode.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && m_pInstance->m_bActive.m_Value )
  {
    CPointCommentaryNode::FinishCommentary(m_pInstance, 1);
    CPointCommentaryNode::PlayerActivated(this);
  }
  else
  {
    CPointCommentaryNode::PlayerActivated(this);
  }
}


// CPointCommentaryNode::InputStartCommentary  (line 1722, @0x00000000021ac070, libserver.so)
// calls: CPointCommentaryNode::InputStartCommentary
void __fastcall CPointCommentaryNode::InputStartCommentary(
        CPointCommentaryNode *const this,
        inputdata_t *const inputdata)
{
  if ( !this->m_bActive.m_Value )
    CPointCommentaryNode::InputStartCommentary(this, inputdata);
}


// CPointCommentaryNode::InputStartUnstoppableCommentary  (line 1738, @0x00000000021ac090, libserver.so)  // inlines: InputStartCommentary
// calls: CPointCommentaryNode::InputStartCommentary
void __fastcall CPointCommentaryNode::InputStartUnstoppableCommentary(
        CPointCommentaryNode *const this,
        inputdata_t *const inputdata)
{
  if ( !this->m_bActive.m_Value )
  {
    this->m_bUnstoppable = 1;
    CPointCommentaryNode::InputStartCommentary(this, inputdata);
  }
}


// CPointCommentaryNode::InputEnable  (line 1750, @0x000000000219f9d0, libserver.so)
// calls: CPointCommentaryNode::SetDisabled
void __fastcall CPointCommentaryNode::InputEnable(CPointCommentaryNode *const this, inputdata_t *const inputdata)
{
  CPointCommentaryNode::SetDisabled(this, 0);
}


// CPointCommentaryNode::InputDisable  (line 1758, @0x000000000219f9e0, libserver.so)
// calls: CPointCommentaryNode::SetDisabled
void __fastcall CPointCommentaryNode::InputDisable(CPointCommentaryNode *const this, inputdata_t *const inputdata)
{
  CPointCommentaryNode::SetDisabled(this, 1);
}


// CPointCommentaryNode::SetDisabled  (line 1766, @0x000000000219f980, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::AddEffects
// callers: CPointCommentaryNode::InputEnable, CPointCommentaryNode::InputDisable, CPointCommentaryNode::Spawn
void __fastcall CPointCommentaryNode::SetDisabled(CPointCommentaryNode *const this, bool bDisabled)
{
  this->m_bDisabled = bDisabled;
  if ( bDisabled )
  {
    CBaseEntity::AddEffects(this, 32);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
}


// CPointCommentaryNode::UpdateTransmitState  (line 1783, @0x0000000002187c50, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPointCommentaryNode::UpdateTransmitState(CPointCommentaryNode *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPointCommentaryNode::SetTransmit  (line 1791, @0x000000000218f6a0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsAlreadyMarkedForTransmission, IsValid, LookupEntity, entindex, operator CEntityInstance*, operator bool, operator->
// calls: CEntityInstance::GetEntityIndex, CBaseAnimating::SetTransmit, CEntityHandle::operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointCommentaryNode::SetTransmit(
        CPointCommentaryNode *const this,
        CCheckTransmitInfo *pInfo,
        bool bAlways)
{
  CEntityIndex v6; // eax
  uint32 m_Index; // eax
  CConcreteEntityList *v8; // rcx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  unsigned __int16 v14; // dx
  int v15; // esi
  uint32 v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  uint32 v19; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CEntityInstance *v22; // rax
  CEntityInstance *v23; // rax

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( ((1 << SLOBYTE(v6.m_Data)) & pInfo->m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) == 0 )
  {
    CBaseAnimating::SetTransmit(this, pInfo, bAlways);
    m_Index = this->m_hViewTarget.m_Index;
    v8 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewTarget.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_hViewTarget.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        {
          v22 = CEntityHandle::operator CEntityInstance *(&this->m_hViewTarget);
          (*(v22->_vptr_IHandleEntity + 66))(v22, pInfo, bAlways);
          v8 = CEntityHandle::gm_pEntityList;
        }
      }
    }
    v11 = this->m_hViewTargetAngles.m_Index;
    if ( v11 + 2 > 1 )
    {
      v12 = v8->m_pIdentityChunks[(LOWORD(this->m_hViewTargetAngles.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[this->m_hViewTargetAngles.m_Index & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        {
          v23 = CEntityHandle::operator CEntityInstance *(&this->m_hViewTargetAngles);
          (*(v23->_vptr_IHandleEntity + 66))(v23, pInfo, bAlways);
        }
      }
    }
    if ( this->m_hViewPosition.m_Value.m_Index == -1 )
    {
      v14 = 0x7FFF;
      v15 = 0x7FFF;
    }
    else
    {
      v14 = this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
      v15 = v14;
    }
    v16 = (this->m_hViewPosition.m_Value.m_Index >> 15 << 15) | v14 & 0x7FFF;
    if ( v16 + 2 > 1 )
    {
      v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
      if ( v17 != 0 )
      {
        v18 = &v17[v15 & 0x1FF];
        if ( v18 != 0 && v16 == v18->m_EHandle.m_Index && v18->m_pInstance != 0 )
          (*(v18->m_pInstance->_vptr_IHandleEntity + 66))(v18->m_pInstance, pInfo, bAlways);
      }
    }
    v19 = this->m_hViewPositionMover.m_Index;
    if ( v19 + 2 > 1 )
    {
      v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hViewPositionMover.m_Index) >> 9) & 0x3F];
      if ( v20 != 0 )
      {
        v21 = &v20[this->m_hViewPositionMover.m_Index & 0x1FF];
        if ( v21 != 0 && v19 == v21->m_EHandle.m_Index )
          (*(v21->m_pInstance->_vptr_IHandleEntity + 66))(v21->m_pInstance, pInfo, bAlways);
      }
    }
  }
}


// CPointCommentaryNode::PreventsMovement  (line 1821, @0x000000000219fbc0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
bool __fastcall CPointCommentaryNode::PreventsMovement(CPointCommentaryNode *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  bool result; // al

  if ( this->m_hViewPosition.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hViewPosition.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hViewPosition.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return this->m_bPreventMovement;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return this->m_bPreventMovement;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 )
    return this->m_bPreventMovement;
  if ( v3 != v5->m_EHandle.m_Index )
    return this->m_bPreventMovement;
  result = 1;
  if ( v5->m_pInstance == 0 )
    return this->m_bPreventMovement;
  return result;
}


// CCommentary_SaveRestoreBlockHandler::GetBlockName  (line 1838, @0x00000000021b13c0, libserver.so)
const char *__fastcall CCommentary_SaveRestoreBlockHandler::GetBlockName(
        const CCommentary_SaveRestoreBlockHandler *const this)
{
  return "Commentary";
}


// CCommentary_SaveRestoreBlockHandler::Save  (line 1845, @0x00000000021b2ef0, libserver.so)
// globals: g_bInCommentaryMode, g_pCommentarySystem
void __fastcall CCommentary_SaveRestoreBlockHandler::Save(
        CCommentary_SaveRestoreBlockHandler *const this,
        ISave *pSave)
{
  void (__fastcall *v3)(ISave *, CCommentarySystem *, __int64); // r12
  __int64 v4; // rax

  (*(pSave->_vptr_ISave + 15))(pSave, &g_bInCommentaryMode, 1);
  if ( g_bInCommentaryMode )
  {
    v3 = *(pSave->_vptr_ISave + 5);
    v4 = (*(g_pCommentarySystem->_vptr_IGameSystem + 40))(g_pCommentarySystem);
    v3(pSave, g_pCommentarySystem, v4);
  }
}


// CCommentary_SaveRestoreBlockHandler::WriteSaveHeaders  (line 1859, @0x00000000021b13d0, libserver.so)
// globals: COMMENTARY_SAVE_RESTORE_VERSION
void __fastcall CCommentary_SaveRestoreBlockHandler::WriteSaveHeaders(
        CCommentary_SaveRestoreBlockHandler *const this,
        ISave *pSave)
{
  (*(pSave->_vptr_ISave + 10))(pSave, &COMMENTARY_SAVE_RESTORE_VERSION, 1);
}


// CCommentary_SaveRestoreBlockHandler::ReadRestoreHeaders  (line 1866, @0x00000000021b13f0, libserver.so)
// globals: COMMENTARY_SAVE_RESTORE_VERSION
void __fastcall CCommentary_SaveRestoreBlockHandler::ReadRestoreHeaders(
        CCommentary_SaveRestoreBlockHandler *const this,
        IRestore *pRestore)
{
  __int16 version[9]; // [rsp+Eh] [rbp-12h] BYREF

  (*(pRestore->_vptr_IRestore + 23))(pRestore, version, 1, 0);
  this->m_fDoLoad = version[0] == COMMENTARY_SAVE_RESTORE_VERSION;
}


// CCommentary_SaveRestoreBlockHandler::Restore  (line 1876, @0x00000000021b2e60, libserver.so)
// calls: ConVar::SetValue
// globals: g_bInCommentaryMode, commentary, g_pCommentarySystem
void __fastcall CCommentary_SaveRestoreBlockHandler::Restore(
        CCommentary_SaveRestoreBlockHandler *const this,
        IRestore *pRestore,
        SpawnGroupHandle_t handle,
        bool fCreatePlayers)
{
  void (__fastcall *v5)(IRestore *, CCommentarySystem *, __int64); // r12
  __int64 v6; // rax

  if ( this->m_fDoLoad )
  {
    (*(pRestore->_vptr_IRestore + 28))(pRestore, &g_bInCommentaryMode, 1, 0);
    if ( g_bInCommentaryMode )
    {
      v5 = *(pRestore->_vptr_IRestore + 2);
      v6 = (*(g_pCommentarySystem->_vptr_IGameSystem + 40))(g_pCommentarySystem, 0);
      v5(pRestore, g_pCommentarySystem, v6);
      ConVar::SetValue(&commentary, g_bInCommentaryMode);
    }
    else
    {
      ConVar::SetValue(&commentary, 0);
    }
  }
}


// GetCommentarySaveRestoreBlockHandler  (line 1906, @0x000000000219fc80, libserver.so)
// callers: CSource2Server::Shutdown, CSource2Server::Init
// globals: g_Commentary_SaveRestoreBlockHandler
ISaveRestoreBlockHandler *__cdecl GetCommentarySaveRestoreBlockHandler()
{
  return &g_Commentary_SaveRestoreBlockHandler;
}


// CCommentaryAuto::~CCommentaryAuto  (line 1915, @0x00000000021b26a0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CCommentaryAuto::~CCommentaryAuto(CCommentaryAuto *const this)
{
  this->_vptr_IHandleEntity = &off_4012A70;
  CBaseEntity::~CBaseEntity(this);
}


// CCommentaryAuto::~CCommentaryAuto  (line 1915, @0x00000000021b26c0, libserver.so)  // inlines: ~CCommentaryAuto
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CCommentaryAuto::~CCommentaryAuto(CCommentaryAuto *const this)
{
  this->_vptr_IHandleEntity = &off_4012A70;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CCommentaryAuto::GetEntityClass  (line 1917, @0x00000000021b1430, libserver.so)
CEntityClass *__cdecl CCommentaryAuto::GetEntityClass()
{
  return g_pEntityCCommentaryAutoClass;
}


// CCommentaryAuto::Schema_DynamicBinding  (line 1917, @0x00000000021b1440, libserver.so)
// globals: CCommentaryAuto::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CCommentaryAuto::Schema_DynamicBinding(const CCommentaryAuto *const this)
{
  return CCommentaryAuto::s_pSchemaBinding;
}


// CCommentaryAuto::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1917, @0x00000000021b1450, libserver.so)
// globals: CCommentaryAuto::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CCommentaryAuto::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CCommentaryAuto::CEntityInstanceEntityClass *const this)
{
  return CCommentaryAuto::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CCommentaryAuto::CEntityInstanceEntityClass::DestructInstance  (line 1917, @0x00000000021b1460, libserver.so)  // inlines: Destruct<CCommentaryAuto>
void __fastcall CCommentaryAuto::CEntityInstanceEntityClass::DestructInstance(
        CCommentaryAuto::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CCommentaryAuto::CEntityInstanceEntityClass::FreeInstance  (line 1917, @0x00000000021b1480, libserver.so)
void __fastcall CCommentaryAuto::CEntityInstanceEntityClass::FreeInstance(
        CCommentaryAuto::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CCommentaryAuto::CEntityInstanceEntityClass::CanAllocate  (line 1917, @0x00000000021b14a0, libserver.so)
bool __fastcall CCommentaryAuto::CEntityInstanceEntityClass::CanAllocate(
        const CCommentaryAuto::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CCommentaryAuto::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1917, @0x00000000021b14b0, libserver.so)
// globals: CCommentaryAuto::s_pSchemaBinding
const ISchemaBinding *__fastcall CCommentaryAuto::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CCommentaryAuto::CEntityInstanceEntityClass *const this)
{
  return CCommentaryAuto::s_pSchemaBinding;
}


// CCommentaryAuto::CEntityInstanceEntityClass::AllocateInstance  (line 1917, @0x00000000021b2100, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CCommentaryAuto::CEntityInstanceEntityClass::AllocateInstance(
        CCommentaryAuto::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 848);
  memset(v1, 0, 0x350u);
  return v1;
}


// CCommentaryAuto::CEntityInstanceEntityClass::ConstructInstance  (line 1917, @0x00000000021b2270, libserver.so)  // inlines: CCommentaryAuto, CEntityIOOutput, Construct<CCommentaryAuto>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CCommentaryAuto::CEntityInstanceEntityClass::ConstructInstance(
        CCommentaryAuto::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4012A70;
    *(p + 97) = off_3F7C190;
    *(p + 100) = off_3F7C190;
    *(p + 103) = off_3F7C190;
  }
  return p;
}


// CCommentaryAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1917, @0x00000000021b3ab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CCommentaryAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CCommentaryAuto::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CCommentaryAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1917, @0x00000000021b3ad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CCommentaryAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CCommentaryAuto::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CCommentaryAuto::GetEntityClassInternal  (line 1917, @0x00000000021b82c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "commentary_auto", "CCommentaryAuto"
// globals: `guard variable for'CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass, CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass, __dso_handle, CCommentaryAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo, CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo
CEntityClass *__cdecl CCommentaryAuto::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass);
    CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass._vptr_CEntityClass = off_40129F0;
    __cxa_guard_release(&`guard variable for'CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass);
    __cxa_atexit(
      CCommentaryAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass,
      &_dso_handle);
  }
  if ( g_pEntityCCommentaryAutoClass != 0 )
    return &CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass;
  if ( `guard variable for'CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo,
      "CCommentaryAuto",
      "commentary_auto",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo);
  }
  CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass.m_pClassInfo = &CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo;
  CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass.m_pBaseClassInfo = CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo.m_pBaseClassInfo;
  g_pEntityCCommentaryAutoClass = &CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass;
  CCommentaryAuto::GetEntityClassInfo(void)::g_EntityCCommentaryAutoClassInfo.m_pClass = &CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass;
  CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCCommentaryAutoClass->m_pComponentOverrides = 0;
  return &CCommentaryAuto::GetEntityClassInternal(void)::g_EntityCCommentaryAutoClass;
}


// CCommentaryAuto::GetDataDescMap  (line 1937, @0x0000000002187870, libserver.so)
// globals: CCommentaryAuto::m_DataMap
datamap_t *__fastcall CCommentaryAuto::GetDataDescMap(CCommentaryAuto *const this)
{
  return &CCommentaryAuto::m_DataMap;
}


// CCommentaryAuto::AddDatadescMetadataKeys  (line 1937, @0x000000000219fc90, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CCommentaryAuto::GetEntityClass(void)
void __fastcall CCommentaryAuto::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CCommentaryAuto::GetEntityClass);
}


// CCommentaryAuto::GetBaseMap  (line 1937, @0x000000000219fcb0, libserver.so)
datamap_t *__cdecl CCommentaryAuto::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CCommentaryAuto>  (line 1937, @0x000000000219fcc0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CCommentaryAuto"
// globals: `guard variable for'DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder, `guard variable for'DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::dataDesc, CCommentaryAuto::GetEntityClass(void), CCommentaryAuto::m_DataMap, DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CCommentaryAuto>(CCommentaryAuto *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder) != 0 )
  {
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder.m_pszBase = "CCommentaryAuto";
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::nameHolder,
      &_dso_handle);
  }
  CCommentaryAuto::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::dataDesc) != 0 )
  {
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::dataDesc);
  }
  CCommentaryAuto::m_DataMap.dataNumFields = 4;
  CCommentaryAuto::m_DataMap.dataDesc = &DataMapInit<CCommentaryAuto>(CCommentaryAuto *)::dataDesc[1];
  AddDatadescMetadataKeys(&CCommentaryAuto::m_DataMap, CCommentaryAuto::GetEntityClass);
  return &CCommentaryAuto::m_DataMap;
}


// CCommentaryAuto::Spawn  (line 1950, @0x000000000218bd30, libserver.so)  // inlines: curtime
// calls: CBaseEntity::Spawn, CBaseEntity::SetNextThink
void __fastcall CCommentaryAuto::Spawn(CCommentaryAuto *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, v4->m_flCurrentTime + 0.1, v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v3, 0);
  }
}


// CCommentaryAuto::Think  (line 1959, @0x00000000021a9070, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pCommentarySystem
void __fastcall CCommentaryAuto::Think(CCommentaryAuto *const this)
{
  bool v1; // zf
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  v1 = !g_pCommentarySystem->m_bCommentaryEnabledMidGame;
  value.m_flags = 0;
  value.m_type = 0;
  value.m_uint64 = 0;
  if ( v1 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnCommentaryNewGame, 0, this, &value, 0.0);
    if ( (value.m_flags & 1) == 0 )
      return;
LABEL_6:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    return;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnCommentaryMidGame, 0, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    goto LABEL_6;
}


// CCommentaryAuto::InputMultiplayerSpawned  (line 1974, @0x00000000021a8cd0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CCommentaryAuto::InputMultiplayerSpawned(CCommentaryAuto *const this, inputdata_t *const inputdata)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_flags = 0;
  value.m_type = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnCommentaryMultiplayerSpawn, 0, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


