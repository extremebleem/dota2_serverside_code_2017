// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_teleport_scroll.cpp:38
class CDOTA_TeleportTimer {
	float m_flTime;  // +0x0
	int m_iTeam;  // +0x4
	int m_iIndex;  // +0x8
	CDOTA_TeleportTimer(Vector, int);

	// sizeof = 24
};

// src/game/shared/dota/items/dota_item_teleport_scroll.cpp:58
class CDOTA_TeleportTimerManager : public CAutoGameSystem {
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
	CDOTA_TeleportTimerManager(CDOTA_TeleportTimerManager &);
	CDOTA_TeleportTimerManager(const CDOTA_TeleportTimerManager &);
	CDOTA_TeleportTimerManager();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_TeleportTimerManager *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	void AddTeleportToLocation(Vector, int);
	float GetExtraTeleportTimeForTeam(int, Vector, float);
	virtual ~CDOTA_TeleportTimerManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[24] FrameUpdatePreEntityThink
	// sizeof = 48
};

// src/game/shared/dota/items/dota_item_teleport_scroll.cpp:133
class CDOTA_Item_TeleportScroll : public CDOTA_Item {
public:

private:

	int m_nFXOrigin;  // +0x3e8
	int m_nFXDestination;  // +0x3ec
	int m_iMinDistance;  // +0x3fc
	float m_flExtraTeleportTime;  // +0x400
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
	CDOTA_Item_TeleportScroll(CDOTA_Item_TeleportScroll &);
	CDOTA_Item_TeleportScroll(CDOTA_Item_TeleportScroll &);
	CDOTA_Item_TeleportScroll();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnChannelFinish(bool);
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual float GetChannelTime();
	virtual ~CDOTA_Item_TeleportScroll();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[267] OnChannelFinish
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[225] GetChannelTime
	// sizeof = 1032
};

// src/game/shared/dota/items/dota_item_teleport_scroll.cpp:163
class C_CDOTA_Item_TeleportScroll_MapInstall {
	C_CDOTA_Item_TeleportScroll_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_TeleportTimerManager::~CDOTA_TeleportTimerManager  (line 58, @0x0000000002e10ad0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<CDOTA_TeleportTimer, int>::Purge
void __fastcall CDOTA_TeleportTimerManager::~CDOTA_TeleportTimerManager(CDOTA_TeleportTimerManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_TeleportTimer,CUtlMemory<CDOTA_TeleportTimer,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_teleports.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_477D870;
  this->m_teleports.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_teleports.m_Memory;
    CUtlMemory<CDOTA_TeleportTimer,int>::Purge(&this->m_teleports.m_Memory);
    if ( (this->m_teleports.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_TeleportTimer,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_TeleportTimerManager::~CDOTA_TeleportTimerManager  (line 58, @0x0000000002e10b30, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDOTA_TeleportTimerManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<CDOTA_TeleportTimer, int>::Purge
void __fastcall CDOTA_TeleportTimerManager::~CDOTA_TeleportTimerManager(CDOTA_TeleportTimerManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_TeleportTimer,CUtlMemory<CDOTA_TeleportTimer,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_teleports.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_477D870;
  this->m_teleports.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_teleports.m_Memory;
    CUtlMemory<CDOTA_TeleportTimer,int>::Purge(&this->m_teleports.m_Memory);
    if ( (this->m_teleports.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_TeleportTimer,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_TeleportTimerManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 60, @0x0000000002e0bf90, libserver.so)
void __fastcall CDOTA_TeleportTimerManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_TeleportTimerManager *const this)
{
  ;
}


// CDOTA_TeleportTimerManager::DoesGameSystemReallocate  (line 60, @0x0000000002e0bfa0, libserver.so)
// globals: CDOTA_TeleportTimerManager::sm_Factory
bool __fastcall CDOTA_TeleportTimerManager::DoesGameSystemReallocate(const CDOTA_TeleportTimerManager *const this)
{
  return (*(CDOTA_TeleportTimerManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_TeleportTimerManager::sm_Factory);
}


// CDOTA_TeleportTimerManager::SetGameSystemGlobalPtrs  (line 60, @0x0000000002e0bfc0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_TeleportTimerManager::sm_Factory
void __fastcall CDOTA_TeleportTimerManager::SetGameSystemGlobalPtrs(
        CDOTA_TeleportTimerManager *const this,
        void *pValue)
{
  if ( CDOTA_TeleportTimerManager::sm_Factory != 0 )
    (*(CDOTA_TeleportTimerManager::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTA_TeleportTimerManager::sm_Factory,
      pValue);
}


// CDOTA_TeleportTimerManager::GameInit  (line 63, @0x0000000002e10950, libserver.so)  // inlines: RemoveAll
void __fastcall CDOTA_TeleportTimerManager::GameInit(
        CDOTA_TeleportTimerManager *const this,
        const EventGameInit_t *const msg)
{
  this->m_teleports.m_Size = 0;
}


// CDOTA_TeleportTimerManager::FrameUpdatePreEntityThink  (line 68, @0x0000000002e108a0, libserver.so)  // inlines: DOTAGameRules, Element, GetGameTime, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall CDOTA_TeleportTimerManager::FrameUpdatePreEntityThink(
        CDOTA_TeleportTimerManager *const this,
        const EventServerPreEntityThink_t *const msg)
{
  int v3; // ebx
  __int64 v4; // r12
  CDOTA_TeleportTimer *m_pMemory; // rsi
  float v6; // xmm1_4
  int m_Size; // eax

  v3 = this->m_teleports.m_Size - 1;
  if ( v3 >= 0 )
  {
    v4 = v3;
    do
    {
      while ( 1 )
      {
        m_pMemory = this->m_teleports.m_Memory.m_pMemory;
        v6 = 0.0;
        if ( g_pGameRules != 0 )
          v6 = *&g_pGameRules[18].m_szQuestName[20];
        if ( v6 >= m_pMemory[v4].m_flTime )
          break;
        --v3;
        --v4;
        if ( v3 == -1 )
          return;
      }
      m_Size = this->m_teleports.m_Size;
      if ( m_Size - v3 - 1 > 0 )
      {
        memmove(&m_pMemory[v4], &m_pMemory[v4 + 1], 24LL * (this->m_teleports.m_Size - v3 - 1));
        m_Size = this->m_teleports.m_Size;
      }
      --v3;
      --v4;
      this->m_teleports.m_Size = m_Size - 1;
    }
    while ( v3 != -1 );
  }
}


// CDOTA_TeleportTimerManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 128, @0x0000000002e05120, libserver.so)
void __cdecl CDOTA_TeleportTimerManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_Item_TeleportScroll::~CDOTA_Item_TeleportScroll  (line 133, @0x0000000002e0f490, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_TeleportScroll::~CDOTA_Item_TeleportScroll(CDOTA_Item_TeleportScroll *const this)
{
  this->_vptr_IHandleEntity = &off_477DAB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_TeleportScroll::~CDOTA_Item_TeleportScroll  (line 133, @0x0000000002e0f4b0, libserver.so)  // inlines: ~CDOTA_Item_TeleportScroll
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_TeleportScroll::~CDOTA_Item_TeleportScroll(CDOTA_Item_TeleportScroll *const this)
{
  this->_vptr_IHandleEntity = &off_477DAB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_TeleportScroll::Schema_DynamicBinding  (line 135, @0x0000000002e0bff0, libserver.so)
// globals: CDOTA_Item_TeleportScroll::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_TeleportScroll::Schema_DynamicBinding(
        const CDOTA_Item_TeleportScroll *const this)
{
  return CDOTA_Item_TeleportScroll::s_pSchemaBinding;
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 135, @0x0000000002e0c000, libserver.so)
// globals: CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::DestructInstance  (line 135, @0x0000000002e0c010, libserver.so)  // inlines: Destruct<CDOTA_Item_TeleportScroll>
void __fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::FreeInstance  (line 135, @0x0000000002e0c030, libserver.so)
void __fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::CanAllocate  (line 135, @0x0000000002e0c050, libserver.so)
bool __fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 135, @0x0000000002e0c060, libserver.so)
// globals: CDOTA_Item_TeleportScroll::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_TeleportScroll::s_pSchemaBinding;
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::AllocateInstance  (line 135, @0x0000000002e0d780, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1032);
  memset(v1, 0, 0x408u);
  return v1;
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::ConstructInstance  (line 135, @0x0000000002e0e6e0, libserver.so)  // inlines: CDOTA_Item_TeleportScroll, Construct<CDOTA_Item_TeleportScroll>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_477DAB0;
  }
  return p;
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 135, @0x0000000002e11140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 135, @0x0000000002e11160, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_TeleportScroll::GetEntityClassInternal  (line 135, @0x0000000002e16740, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_tpscroll", "CDOTA_Item_TeleportScroll"
// globals: `guard variable for'CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass, CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass, __dso_handle, CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo, CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo
CEntityClass *__cdecl CDOTA_Item_TeleportScroll::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass);
    CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass._vptr_CEntityClass = off_477DA30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass);
    __cxa_atexit(
      CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_TeleportScrollClass != 0 )
    return &CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass;
  if ( `guard variable for'CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo,
      "CDOTA_Item_TeleportScroll",
      "item_tpscroll",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo);
  }
  CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass.m_pClassInfo = &CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo;
  CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass.m_pBaseClassInfo = CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_TeleportScrollClass = &CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass;
  CDOTA_Item_TeleportScroll::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TeleportScrollClassInfo.m_pClass = &CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass;
  CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_TeleportScrollClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_TeleportScroll::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TeleportScrollClass;
}


// CDOTA_Item_TeleportScroll::GetChannelTime  (line 151, @0x0000000002e0e950, libserver.so)
// calls: CDOTABaseAbility::GetChannelTime
float __fastcall CDOTA_Item_TeleportScroll::GetChannelTime(CDOTA_Item_TeleportScroll *const this)
{
  return CDOTABaseAbility::GetChannelTime(this) + this->m_flExtraTeleportTime;
}


// CDOTA_Item_TeleportScroll::YouForgotToImplementOrDeclareServerClass  (line 163, @0x0000000002dff690, libserver.so)
int __fastcall CDOTA_Item_TeleportScroll::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_TeleportScroll *const this)
{
  return 0;
}


// CDOTA_Item_TeleportScroll::GetServerClass  (line 163, @0x0000000002e02f10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_TeleportScroll::GetServerClass(CDOTA_Item_TeleportScroll *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_TeleportScroll::CastFilterResult  (line 173, @0x0000000002e00180, libserver.so)  // inlines: InState, IsUnableToTargetEnemies
// calls: CDOTABaseAbility::GetCaster
int __fastcall CDOTA_Item_TeleportScroll::CastFilterResult(
        CDOTA_Item_TeleportScroll *const this,
        const Vector *const vLocation)
{
  return ((LODWORD(CDOTABaseAbility::GetCaster(this)->m_nUnitState64.m_Value) << 16) >> 31) & 0x17;
}


// CDOTA_Item_TeleportScroll::GetCustomCastError  (line 182, @0x0000000002dff6a0, libserver.so)
// strings: "#dota_hud_error_cant_target_units"
const char *__fastcall CDOTA_Item_TeleportScroll::GetCustomCastError(
        CDOTA_Item_TeleportScroll *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_cant_target_units";
}


// CDOTA_Item_TeleportScroll::OnAbilityPhaseStart  (line 268, @0x0000000002e0a4f0, libserver.so)  // inlines: AddTeleportToLocation, AddToTail, CDOTA_TeleportTimer, CGameTrace, CUtlMemory, CUtlString, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<CDOTA_TeleportTimer>, DOTAGameRules, Element, EnableInteractsWith, FStrEq, FastSqrt, Get, GetEntityIdentity, GetEntityName, GetEntryIndex, GetExtraTeleportTimeForTeam, GetFloat, GetGameTime, GetInstance, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetTeamNumber, GetWearable, GrowMemory, IndexToIdentity, Init, IsValid, Length2D, LengthSqr, LookupEntity, NormalizeInPlace, Purge, Ray_t, RemoveAll, RnCollisionAttr_t, String, ToCStr, ToDOTABaseNPCHero, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEconWearable*, operator CEntityInstance*, operator*, operator+, operator-, operator->, operator=, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, FindUnitsInRadius, SortEHANDLEVectorByLocation, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, VectorNormalize, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay (35 total)
// strings: "maximum_distance", "good_healer_6", "good_healer_7", "good_healer_8", "bad_healer_6", "bad_healer_7" (21 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Item_TeleportScroll::OnAbilityPhaseStart(CDOTA_Item_TeleportScroll *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_Size; // eax
  const CBaseEntity *v4; // rax
  const Vector *AbsOrigin; // rax
  int LevelSpecialValue; // r12d
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  const char *v9; // r8
  bool v10; // bl
  __m128i v12; // xmm4
  vec_t v13; // r12d
  int v14; // eax
  float v15; // xmm5_4
  __m128i y_low; // xmm7
  float v17; // r14d
  __m128i z_low; // xmm7
  float v19; // r12d
  const CBaseEntity *v20; // rax
  const Vector *v21; // rax
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm2_4
  vec_t v25; // xmm3_4
  vec_t v26; // xmm2_4
  float z; // xmm1_4
  float m_fValue; // xmm0_4
  float v29; // xmm2_4
  int v30; // edx
  float v31; // xmm3_4
  vec_t v32; // xmm4_4
  int m_Value; // ebx
  CDOTA_TeleportTimer *m_pMemory; // rax
  CDOTA_TeleportTimer *v35; // rdx
  CDOTA_BaseNPC *Fountain; // rax
  const Vector *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // r14
  Color PlayerColor; // eax
  __int64 v41; // r12
  int v42; // ebx
  CHandle<CEconWearable> *v43; // rdx
  uint32 m_Index; // eax
  __int16 v45; // cx
  CEntityIdentity *v46; // rdx
  CEntityIdentity *v47; // rdx
  __int64 v48; // rax
  const GameItemDefinition_t *StaticData; // rax
  CIngameEvent_Base *IngameEventByID; // rax
  int PlayerCompendiumLevel; // eax
  const char *v52; // rax
  const char *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  const Vector *v55; // rbx
  int m_nFXOrigin; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v58; // rax
  CDOTA_ParticleManager *v59; // rax
  CDOTA_ParticleManager *v60; // rax
  CDOTA_ParticleManager *v61; // rax
  CDOTA_ParticleManager *v62; // rax
  CDOTA_ParticleManager *v63; // rax
  CDOTA_BaseNPC *v64; // rax
  float v65; // xmm1_4
  CDOTA_BaseNPC *v66; // rax
  float v67; // xmm1_4
  CDOTA_BaseNPC *v68; // rax
  float v69; // xmm1_4
  float v70; // xmm1_4
  float v71; // xmm1_4
  float v72; // xmm1_4
  float v73; // xmm1_4
  float v74; // xmm1_4
  CDOTA_BaseNPC *v75; // r12
  CDOTA_BaseNPC *v76; // rax
  int v77; // r14d
  CDOTA_BaseNPC *v78; // rax
  __m128i v79; // xmm0
  float v80; // r14d
  CDOTA_BaseNPC *v81; // rax
  int v82; // r12d
  __m128i v83; // xmm5
  __int64 v84; // r14
  int v85; // eax
  CDOTA_TeleportTimer *v86; // rax
  CEntityInstance *v87; // rax
  float flSearchRadius; // [rsp+20h] [rbp-300h]
  CDOTA_BaseNPC *flSearchRadiusa; // [rsp+20h] [rbp-300h]
  vec_t v90; // [rsp+28h] [rbp-2F8h]
  int iX; // [rsp+2Ch] [rbp-2F4h]
  float iXa; // [rsp+2Ch] [rbp-2F4h]
  float iXb; // [rsp+2Ch] [rbp-2F4h]
  int iXc; // [rsp+2Ch] [rbp-2F4h]
  float y; // [rsp+30h] [rbp-2F0h]
  float v96; // [rsp+30h] [rbp-2F0h]
  float x; // [rsp+30h] [rbp-2F0h]
  float flLength; // [rsp+38h] [rbp-2E8h]
  float flLengtha; // [rsp+38h] [rbp-2E8h]
  float flLengthc; // [rsp+38h] [rbp-2E8h]
  float flLengthb; // [rsp+38h] [rbp-2E8h]
  CUtlString sTPStartFX; // [rsp+40h] [rbp-2E0h] BYREF
  Vector vRequestedPosition; // [rsp+50h] [rbp-2D0h]
  Vector vDir; // [rsp+60h] [rbp-2C0h] BYREF
  CUtlString sTPEndFX; // [rsp+70h] [rbp-2B0h] BYREF
  __int64 v106; // [rsp+78h] [rbp-2A8h]
  Vector vecTPColor; // [rsp+B0h] [rbp-270h] BYREF
  int v108; // [rsp+BCh] [rbp-264h]
  float v109; // [rsp+C0h] [rbp-260h]
  float v110; // [rsp+C4h] [rbp-25Ch]
  float v111; // [rsp+C8h] [rbp-258h]
  int v112; // [rsp+CCh] [rbp-254h]
  int v113; // [rsp+D0h] [rbp-250h]
  int v114; // [rsp+D4h] [rbp-24Ch]
  int v115; // [rsp+D8h] [rbp-248h]
  int v116; // [rsp+DCh] [rbp-244h]
  int v117; // [rsp+E0h] [rbp-240h]
  int v118; // [rsp+E4h] [rbp-23Ch]
  int v119; // [rsp+E8h] [rbp-238h]
  int v120; // [rsp+ECh] [rbp-234h]
  float v121; // [rsp+F0h] [rbp-230h]
  char v122; // [rsp+F4h] [rbp-22Ch]
  bool v123; // [rsp+F5h] [rbp-22Bh]
  trace_t tr; // [rsp+100h] [rbp-220h] BYREF
  KeyValues kv; // [rsp+1B0h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+1D0h] [rbp-150h] BYREF
  unsigned __int64 v127; // [rsp+2E8h] [rbp-38h]

  entities.m_Size = 0;
  v127 = __readfsqword(0x28u);
  entities.m_Memory.m_nAllocationCount = 64;
  entities.m_Memory.m_nGrowSize = 0x80000000;
  entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
  tr.startpos = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &tr.startpos, 0, -1.0, &entities, 1, 4, 80, 0, 0);
  tr.startpos = CDOTABaseAbility::GetCursorPosition(this);
  SortEHANDLEVectorByLocation(&entities, &tr.startpos, 0);
  m_Size = entities.m_Size;
  this->m_nFXOrigin = -1;
  this->m_nFXDestination = -1;
  if ( m_Size == 0 )
  {
    v10 = 0;
    goto LABEL_19;
  }
  v4 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  iX = SLODWORD(AbsOrigin->x);
  y = AbsOrigin->y;
  flLength = AbsOrigin->z;
  vRequestedPosition = CDOTABaseAbility::GetCursorPosition(this);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "maximum_distance", -1, 0);
  m_pEntity = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory)->m_pEntity;
  m_pAsString = m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    v9 = m_pEntity->m_name.u.m_pAsString;
    if ( m_pAsString == "good_healer_6" )
      goto LABEL_66;
    if ( strcmp(m_pEntity->m_name.u.m_pAsString, "good_healer_6") == 0 )
    {
      flSearchRadius = 250.0;
      goto LABEL_24;
    }
    if ( m_pAsString == "good_healer_7"
      || strcmp(m_pEntity->m_name.u.m_pAsString, "good_healer_7") == 0
      || m_pAsString == "good_healer_8" )
    {
LABEL_65:
      flSearchRadius = 250.0;
      goto LABEL_24;
    }
    if ( strcmp(m_pEntity->m_name.u.m_pAsString, "good_healer_8") == 0 || m_pAsString == "bad_healer_6" )
      goto LABEL_10;
  }
  else
  {
    v9 = "";
  }
  if ( strcmp(v9, "bad_healer_6") == 0 )
    goto LABEL_66;
  if ( v9 == "bad_healer_7" )
    goto LABEL_65;
  if ( strcmp(v9, "bad_healer_7") != 0 )
  {
    if ( v9 != "bad_healer_8" && strcmp(v9, "bad_healer_8") != 0 )
    {
      flSearchRadius = LevelSpecialValue;
      goto LABEL_24;
    }
LABEL_66:
    flSearchRadius = 250.0;
    goto LABEL_24;
  }
LABEL_10:
  flSearchRadius = 250.0;
LABEL_24:
  iXa = vRequestedPosition.x - *&iX;
  v96 = vRequestedPosition.y - y;
  v12 = _mm_cvtsi32_si128(LODWORD(vRequestedPosition.z));
  *v12.m128i_i32 = *v12.m128i_i32 - flLength;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  flLengtha = fminf(flSearchRadius, fsqrt((iXa * iXa) + (v96 * v96)));
  v14 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "minimun_distance", -1, 0);
  if ( v14 > flLengtha )
  {
    flLengthb = v14;
    v87 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
    flLengtha = flLengthb + (*(&v87[48]._vptr_IHandleEntity + 1) + *&v87[48].m_pEntity);
  }
  vDir.z = v13;
  vDir.x = iXa;
  vDir.y = v96;
  VectorNormalize(&vDir);
  v15 = flLengtha;
  y_low = LODWORD(vDir.y);
  *y_low.m128i_i32 = vDir.y * flLengtha;
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  z_low = LODWORD(vDir.z);
  flLengthc = vDir.x * flLengtha;
  *z_low.m128i_i32 = vDir.z * v15;
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
  v20 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = v17 + v21->y;
  v23 = v19 + v21->z;
  v24 = flLengthc + v21->x;
  tr.m_ShapeAttributes.m_nCollisionGroup = 0;
  this->m_vDestination.y = v22;
  this->m_vDestination.z = v23;
  this->m_vDestination.x = v24;
  memset(&tr.m_ShapeAttributes, 0, 30);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v25 = this->m_vDestination.x + 0.0;
  v26 = this->m_vDestination.y + 0.0;
  z = this->m_vDestination.z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  v108 = 0;
  v110 = v26 - v26;
  v121 = m_fValue;
  v112 = 0;
  v116 = 0;
  v120 = 0;
  v109 = v25 - v25;
  v111 = (z - 256.0) - (z + 1024.0);
  v119 = 0;
  v118 = 0;
  v122 = 1;
  v117 = 0;
  v115 = 0;
  v114 = 0;
  v113 = 0;
  vecTPColor.x = v25;
  vecTPColor.y = v26;
  vecTPColor.z = z + 1024.0;
  v123 = (((v109 * v109) + (v110 * v110)) + (v111 * v111)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&sTPEndFX, 0, 4, 0);
  v106 |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vecTPColor, &sTPEndFX, &tr);
  v29 = 0.0;
  v30 = g_TeleportTimerManager.m_teleports.m_Size;
  v31 = tr.endpos.y;
  x = tr.endpos.x;
  this->m_vDestination.x = tr.endpos.x;
  v32 = tr.endpos.z;
  iXb = v31;
  this->m_vDestination.y = v31;
  v90 = v32;
  m_Value = this->m_iTeamNum.m_Value;
  this->m_vDestination.z = v32;
  if ( v30 > 0 )
  {
    m_pMemory = g_TeleportTimerManager.m_teleports.m_Memory.m_pMemory;
    v29 = 0.0;
    v35 = &g_TeleportTimerManager.m_teleports.m_Memory.m_pMemory[(v30 - 1) + 1];
    while ( 1 )
    {
      if ( m_Value != m_pMemory->m_iTeam
        || fsqrt(
             ((x - m_pMemory->m_vPosition.x) * (x - m_pMemory->m_vPosition.x))
           + ((v31 - m_pMemory->m_vPosition.y) * (v31 - m_pMemory->m_vPosition.y))) > (flSearchRadius + flSearchRadius) )
      {
        goto LABEL_28;
      }
      if ( v29 == 0.0 )
      {
        ++m_pMemory;
        v29 = 2.0;
        if ( m_pMemory == v35 )
          break;
      }
      else
      {
        v29 = v29 + 0.5;
LABEL_28:
        if ( ++m_pMemory == v35 )
          break;
      }
    }
  }
  this->m_flExtraTeleportTime = v29;
  Fountain = CDOTAGamerules::GetFountain(g_pGameRules, m_Value);
  if ( Fountain == 0
    || (v37 = CBaseEntity::GetAbsOrigin(Fountain),
        fsqrt(((v37->x - x) * (v37->x - x)) + ((v37->y - iXb) * (v37->y - iXb))) > 2200.0) )
  {
    v82 = 1103626240;
    if ( g_pGameRules != 0 )
    {
      v83 = _mm_cvtsi32_si128(0x41C80000u);
      *v83.m128i_i32 = *v83.m128i_i32 + *&g_pGameRules[18].m_szQuestName[20];
      v82 = _mm_cvtsi128_si32(v83);
    }
    v84 = g_TeleportTimerManager.m_teleports.m_Size;
    v85 = g_TeleportTimerManager.m_teleports.m_Size;
    if ( g_TeleportTimerManager.m_teleports.m_Size == g_TeleportTimerManager.m_teleports.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CDOTA_TeleportTimer,int>::Grow(&g_TeleportTimerManager.m_teleports.m_Memory, 1);
      v85 = g_TeleportTimerManager.m_teleports.m_Size;
    }
    g_TeleportTimerManager.m_teleports.m_Size = v85 + 1;
    v86 = &g_TeleportTimerManager.m_teleports.m_Memory.m_pMemory[v84];
    if ( v86 != 0 )
    {
      LODWORD(v86->m_flTime) = v82;
      v86->m_iTeam = m_Value;
      v86->m_iIndex = 0;
      v86->m_vPosition.x = x;
      v86->m_vPosition.y = iXb;
      v86->m_vPosition.z = v90;
    }
  }
  vecTPColor.x = 1.0;
  vecTPColor.y = 1.0;
  vecTPColor.z = 1.0;
  v38 = CDOTABaseAbility::GetCaster(this);
  v39 = v38;
  if ( v38 != 0 && (v38->m_iUnitType & 1) != 0 )
  {
    PlayerColor = CDOTA_PlayerResource::GetPlayerColor(g_pDOTAPlayerResource, v38[1].m_pfnBlocked.__delta);
    vecTPColor.z = PlayerColor._color[2] / 255.0;
    vecTPColor.y = PlayerColor._color[1] / 255.0;
    vecTPColor.x = PlayerColor._color[0] / 255.0;
    if ( v39->m_hMyWearables.m_Vector.m_Size > 0 )
    {
      v41 = 0;
      v42 = 0;
      do
      {
        v43 = &v39->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v41];
        m_Index = v43->m_Index;
        if ( v43->m_Index + 2 > 1 )
        {
          v45 = v43->m_Index;
          v46 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v43->m_Index) >> 9) & 0x3F];
          if ( v46 != 0 )
          {
            v47 = &v46[v45 & 0x1FF];
            if ( v47 != 0 && m_Index == v47->m_EHandle.m_Index && v47->m_pInstance != 0 )
            {
              v48 = (*(v47->m_pInstance->_vptr_IHandleEntity + 265))(v47->m_pInstance);
              if ( v48 != -104 )
              {
                StaticData = CEconItemView::GetStaticData((v48 + 104));
                if ( (*StaticData->_vptr_IEconItemDefinition)(StaticData) == 6224 )
                  break;
              }
            }
          }
        }
        ++v42;
        ++v41;
      }
      while ( v42 < v39->m_hMyWearables.m_Vector.m_Size );
    }
  }
  else
  {
    v39 = 0;
  }
  sTPStartFX.m_pString = 0;
  CUtlString::Set(&sTPStartFX, "particles/items2_fx/teleport_start.vpcf");
  sTPEndFX.m_pString = 0;
  CUtlString::Set(&sTPEndFX, "particles/items2_fx/teleport_end.vpcf");
  if ( v39 != 0 )
  {
    IngameEventByID = CDOTAGamerules::GetIngameEventByID(g_pGameRules, EEvent::EVENT_ID_FALL_MAJOR_2015);
    if ( IngameEventByID != 0 )
    {
      PlayerCompendiumLevel = CIngameEvent_Base::GetPlayerCompendiumLevel(IngameEventByID, v39[1].m_pfnBlocked.__delta);
      if ( PlayerCompendiumLevel > 74 )
      {
        CUtlString::operator=(
          &sTPStartFX,
          "particles/econ/events/fall_major_2015/teleport_start_fallmjr_2015_lvl2.vpcf");
        CUtlString::operator=(&sTPEndFX, "particles/econ/events/fall_major_2015/teleport_end_fallmjr_2015_lvl2.vpcf");
      }
      else if ( PlayerCompendiumLevel > 24 )
      {
        CUtlString::operator=(&sTPStartFX, "particles/econ/events/fall_major_2015/teleport_start_fallmjr_2015.vpcf");
        CUtlString::operator=(&sTPEndFX, "particles/econ/events/fall_major_2015/teleport_end_fallmjr_2015.vpcf");
      }
    }
  }
  v52 = CUtlString::Get(&sTPStartFX);
  this->m_nFXOrigin = CDOTABaseAbility::CreateAbilityParticleEffect(this, v52, 2, 0, 0);
  v53 = CUtlString::Get(&sTPEndFX);
  this->m_nFXDestination = CDOTABaseAbility::CreateAbilityParticleEffect(this, v53, 2, 0, 0);
  v54 = CDOTABaseAbility::GetCaster(this);
  v55 = CBaseEntity::GetAbsOrigin(v54);
  m_nFXOrigin = this->m_nFXOrigin;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXOrigin, 0, *&v55->x, v55->z);
  LODWORD(v55) = this->m_nFXOrigin;
  v58 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v58, v55, 2, *&vecTPColor.x, vecTPColor.z);
  LODWORD(v55) = this->m_nFXOrigin;
  v59 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v59, v55, 0, -1, 0.0);
  LODWORD(v55) = this->m_nFXDestination;
  v60 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v60, v55, 0, *&this->m_vDestination.x, this->m_vDestination.z);
  LODWORD(v55) = this->m_nFXDestination;
  v61 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v61, v55, 1, *&this->m_vDestination.x, this->m_vDestination.z);
  LODWORD(v55) = this->m_nFXDestination;
  v62 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v62, v55, 2, *&vecTPColor.x, vecTPColor.z);
  LODWORD(v55) = this->m_nFXDestination;
  v63 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v63, v55, 0, -1, 0.0);
  KeyValues::KeyValues(&kv, "teleporting");
  v64 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v64);
  KeyValues::SetFloat(&kv, "start_x", v65);
  v66 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v66);
  KeyValues::SetFloat(&kv, "start_y", v67);
  v68 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v68);
  KeyValues::SetFloat(&kv, "start_z", v69);
  KeyValues::SetFloat(&kv, "end_x", v70);
  KeyValues::SetFloat(&kv, "end_y", v71);
  KeyValues::SetFloat(&kv, "end_z", v72);
  (*(this->_vptr_IHandleEntity + 225))(this);
  KeyValues::SetFloat(&kv, "channel_time", v73);
  (*(this->_vptr_IHandleEntity + 225))(this);
  KeyValues::SetFloat(&kv, "duration", v74);
  v75 = CDOTABaseAbility::GetCaster(this);
  v76 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v76, v75, this, "modifier_teleporting", &kv, 0);
  LODWORD(v75) = (*(this->_vptr_IHandleEntity + 225))(this);
  v77 = this->m_vDestination.y;
  iXc = this->m_vDestination.x;
  flSearchRadiusa = CDOTABaseAbility::GetCaster(this);
  v78 = CDOTABaseAbility::GetCaster(this);
  MinimapEvent(v78->m_iTeamNum.m_Value, flSearchRadiusa, iXc, v77, 32, v75);
  LODWORD(v75) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  *v79.m128i_i64 = (*(this->_vptr_IHandleEntity + 225))(this);
  v80 = COERCE_FLOAT(_mm_cvtsi128_si32(v79));
  v81 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_TELEPORTSCROLL,
    v81->m_iTeamNum.m_Value,
    &this->m_vDestination,
    v75,
    v80,
    0);
  KeyValues::~KeyValues(&kv);
  if ( sTPEndFX.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sTPEndFX);
  if ( sTPStartFX.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sTPStartFX);
  v10 = 1;
LABEL_19:
  entities.m_Size = 0;
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return v10;
}


// CDOTA_Item_TeleportScroll::OnChannelFinish  (line 407, @0x0000000002e01c70, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, ClearAlertTarget, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, SetUnit, operator=
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, FireModifierEvent, FindClearSpaceForUnit, CDOTA_ProjectileManager::ProjectileDodge, CDOTA_PlayerResource::IncrementTeleportsUsed, DOTAHLTVDirector, CDOTAHLTVDirector::TryToGenerateTeleportEvent, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture, CDOTABody::StartAnimation (18 total)
// strings: "modifier_teleporting"
void __fastcall CDOTA_Item_TeleportScroll::OnChannelFinish(CDOTA_Item_TeleportScroll *const this, bool bInterrupted)
{
  int m_nFXOrigin; // r12d
  CDOTA_ParticleManager *v4; // rax
  int v5; // r12d
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *v12; // rdx
  __int16 v13; // cx
  CDOTA_BaseNPC *v14; // rax
  int v15; // eax
  CDOTA_BaseNPC *v16; // rax
  CEntityIdentity *v17; // rdx
  int v18; // eax
  __int16 v19; // cx
  CDOTAHLTVDirector *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTABody *v24; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXDestination; // r12d
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  int v31; // eax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  CDOTA_Buff *ModifierByName; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-B0h] BYREF
  CModifierParams params; // [rsp+10h] [rbp-A0h] BYREF

  m_nFXOrigin = this->m_nFXOrigin;
  if ( bInterrupted )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXOrigin, 1);
    m_nFXDestination = this->m_nFXDestination;
    v27 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v27, m_nFXDestination, 1);
    Caster = CDOTABaseAbility::GetCaster(this);
    v29 = CDOTABaseAbility::GetCaster(this);
    MinimapEvent(v29->m_iTeamNum.m_Value, Caster, 0, 0, 2048, 0);
    v30 = CDOTABaseAbility::GetCaster(this);
    v31 = (*(v30->_vptr_IHandleEntity + 414))(v30);
    IncrementCommunityGoal(
      EEvent::EVENT_ID_INTERNATIONAL_2016,
      EEventCommunityGoals_t::ECG_TI6_TeleportsInterrupted,
      1u,
      v31);
  }
  else
  {
    v4 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v4, m_nFXOrigin, 0);
    v5 = this->m_nFXDestination;
    v6 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v6, v5, 0);
    params.bTooltip = 0;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.fOriginalDamage = 0.0;
    params.nActivity = -1;
    params.nTooltipParam = 0;
    params.bIgnoreInvis = 0;
    params.bNoCooldown = 0;
    params.bReincarnate = 0;
    params.bDoNotConsume = 0;
    params.fDistance = 0.0;
    params.inflictor.m_Index = -1;
    params.nDamageflags = 0;
    params.nDamageCategory = 0;
    memset(&params.pOrb, 0, 24);
    params.bCraniumBasherTested = 0;
    params.bHeartRegenApplied = 0;
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    v7 = CDOTABaseAbility::GetCaster(this);
    if ( v7 != 0 && (m_pEntity = v7->m_pEntity) != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
    else
    {
      params.hunit.m_Index = -1;
    }
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TELEPORTED, &params);
    v10 = CDOTABaseAbility::GetCaster(this);
    FindClearSpaceForUnit(v10, this->m_vDestination, 1);
    v11 = CDOTABaseAbility::GetCaster(this);
    hTarget.m_Index = -1;
    if ( v11 != 0 )
    {
      v12 = v11->m_pEntity;
      if ( v12 != 0 )
      {
        v13 = 0x7FFF;
        if ( v12->m_EHandle.m_Index != -1 )
          v13 = v12->m_EHandle.m_Index & 0x7FFF;
        hTarget.m_Index = (((v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1)) << 15) | v13 & 0x7FFF;
      }
    }
    CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = (*(v14->_vptr_IHandleEntity + 414))(v14);
    CDOTA_PlayerResource::IncrementTeleportsUsed(g_pDOTAPlayerResource, v15);
    v16 = CDOTABaseAbility::GetCaster(this);
    hTarget.m_Index = -1;
    if ( v16 != 0 )
    {
      v17 = v16->m_pEntity;
      if ( v17 != 0 )
      {
        v18 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
        v19 = 0x7FFF;
        if ( v17->m_EHandle.m_Index != -1 )
          v19 = v17->m_EHandle.m_Index & 0x7FFF;
        LOWORD(hTarget.m_Index) = v19 | hTarget.m_Index & 0x8000;
        hTarget.m_Index = (v18 << 15) | hTarget.m_Index & 0x7FFF;
      }
    }
    v20 = DOTAHLTVDirector();
    CDOTAHLTVDirector::TryToGenerateTeleportEvent(v20, &hTarget);
    CDOTABaseAbility::GetCaster(this)->m_hAlertTarget.m_Index = -1;
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(v21, 1536);
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v22, 1596, 0.0, 0.1, 9, 0, 1.0);
    v23 = CDOTABaseAbility::GetCaster(this);
    v24 = (*(v23->_vptr_IHandleEntity + 377))(v23);
    CDOTABody::StartAnimation(v24, 0x5DCu, 1, 1.0);
  }
  v32 = CDOTABaseAbility::GetCaster(this);
  DoEventPostTPEffect(v32, &this->m_vDestination);
  CDOTA_Item::SpendCharge(this);
  v33 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v33, "modifier_teleporting", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


