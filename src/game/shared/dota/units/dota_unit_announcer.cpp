// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_announcer.cpp:22
class C_CDOTA_Unit_Announcer_MapInstall {
	C_CDOTA_Unit_Announcer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_announcer.cpp:30
class CDOTA_Unit_Announcer_Killing_Spree : public CDOTA_Unit_Announcer {
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
	CDOTA_Unit_Announcer_Killing_Spree(CDOTA_Unit_Announcer_Killing_Spree &);
	CDOTA_Unit_Announcer_Killing_Spree(CDOTA_Unit_Announcer_Killing_Spree &);
	CDOTA_Unit_Announcer_Killing_Spree();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool IsKillingSpreeAnnouncer();
	virtual ~CDOTA_Unit_Announcer_Killing_Spree();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] IsKillingSpreeAnnouncer
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_announcer.cpp:43
class C_CDOTA_Unit_Announcer_Killing_Spree_MapInstall {
	C_CDOTA_Unit_Announcer_Killing_Spree_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_announcer.cpp:254
class CAnnouncerSharedThinker : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	float m_fLastRadiantIdle;  // +0x14
	float m_fLastDireIdle;  // +0x18
	float m_fLastSpectatorIdle;  // +0x1c
private:

	float m_fLastThinkTime;  // +0x20
	typedef CAutoGameSystem BaseClass;
	CAnnouncerSharedThinker(CAnnouncerSharedThinker &);
	CAnnouncerSharedThinker(const CAnnouncerSharedThinker &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CAnnouncerSharedThinker *);
	CAnnouncerSharedThinker();
	void Think();
	bool CheckAndSendIdleSpeech(CDOTA_Unit_Announcer *, const char *, float, float &);

private:

	virtual void GameInit(const EventGameInit_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual ~CAnnouncerSharedThinker();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Announcer::YouForgotToImplementOrDeclareServerClass  (line 22, @0x0000000002a771e0, libserver.so)
int __fastcall CDOTA_Unit_Announcer::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Announcer *const this)
{
  return 0;
}


// CDOTA_Unit_Announcer::GetServerClass  (line 22, @0x0000000002a8a030, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Announcer::GetServerClass(CDOTA_Unit_Announcer *const this)
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


// CDOTA_Unit_Announcer_Killing_Spree::~CDOTA_Unit_Announcer_Killing_Spree  (line 30, @0x0000000002ac0310, libserver.so)  // inlines: ~CDOTA_Unit_Announcer
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Announcer_Killing_Spree::~CDOTA_Unit_Announcer_Killing_Spree(
        CDOTA_Unit_Announcer_Killing_Spree *const this)
{
  this->_vptr_IHandleEntity = &off_43CB8D0;
  this->_vptr_INextBotEventResponder = &off_43CC838;
  this->_vptr_CObstructionObject = &off_43CCB68;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Announcer_Killing_Spree::~CDOTA_Unit_Announcer_Killing_Spree  (line 30, @0x0000000002ac0350, libserver.so)  // inlines: ~CDOTA_Unit_Announcer, ~CDOTA_Unit_Announcer_Killing_Spree
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Announcer_Killing_Spree::~CDOTA_Unit_Announcer_Killing_Spree(
        CDOTA_Unit_Announcer_Killing_Spree *const this)
{
  this->_vptr_IHandleEntity = &off_43CB8D0;
  this->_vptr_INextBotEventResponder = &off_43CC838;
  this->_vptr_CObstructionObject = &off_43CCB68;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Announcer_Killing_Spree::Schema_DynamicBinding  (line 32, @0x0000000002ab71f0, libserver.so)
// globals: CDOTA_Unit_Announcer_Killing_Spree::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Announcer_Killing_Spree::Schema_DynamicBinding(
        const CDOTA_Unit_Announcer_Killing_Spree *const this)
{
  return CDOTA_Unit_Announcer_Killing_Spree::s_pSchemaBinding;
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002ab7220, libserver.so)
// globals: CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002ab7230, libserver.so)  // inlines: Destruct<CDOTA_Unit_Announcer_Killing_Spree>
void __fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002ab7250, libserver.so)
void __fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002ab7270, libserver.so)
bool __fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002ab7280, libserver.so)
// globals: CDOTA_Unit_Announcer_Killing_Spree::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Announcer_Killing_Spree::s_pSchemaBinding;
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002abe3c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002abffe0, libserver.so)  // inlines: CDOTA_Unit_Announcer, CDOTA_Unit_Announcer_Killing_Spree, Construct<CDOTA_Unit_Announcer_Killing_Spree>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_43CCC50;
    *(p + 236) = &off_43CDBB8;
    *(p + 257) = &off_43CDEE8;
  }
  return p;
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002acb640, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002accf90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal  (line 32, @0x0000000002ad5b80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_announcer_killing_spree", "CDOTA_Unit_Announcer_Killing_Spree"
// globals: `guard variable for'CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass, CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass, __dso_handle, CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo, CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo
CEntityClass *__cdecl CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass);
    CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass._vptr_CEntityClass = off_43CCBD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass);
    __cxa_atexit(
      CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Announcer_Killing_SpreeClass != 0 )
    return &CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass;
  if ( `guard variable for'CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo,
      "CDOTA_Unit_Announcer_Killing_Spree",
      "npc_dota_hero_announcer_killing_spree",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo);
  }
  CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass.m_pClassInfo = &CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo;
  CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass.m_pBaseClassInfo = CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Announcer_Killing_SpreeClass = &CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass;
  CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClassInfo.m_pClass = &CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass;
  CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Announcer_Killing_SpreeClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Announcer_Killing_SpreeClass;
}


// CDOTA_Unit_Announcer_Killing_Spree::IsKillingSpreeAnnouncer  (line 36, @0x0000000002ab7290, libserver.so)
bool __fastcall CDOTA_Unit_Announcer_Killing_Spree::IsKillingSpreeAnnouncer(
        CDOTA_Unit_Announcer_Killing_Spree *const this)
{
  return 1;
}


// CDOTA_Unit_Announcer_Killing_Spree::YouForgotToImplementOrDeclareServerClass  (line 43, @0x0000000002a771f0, libserver.so)
int __fastcall CDOTA_Unit_Announcer_Killing_Spree::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Announcer_Killing_Spree *const this)
{
  return 0;
}


// CDOTA_Unit_Announcer_Killing_Spree::GetServerClass  (line 43, @0x0000000002a89ff0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Announcer_Killing_Spree::GetServerClass(
        CDOTA_Unit_Announcer_Killing_Spree *const this)
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


// CDOTA_Unit_Announcer::Precache  (line 175, @0x0000000002a79700, libserver.so)
// calls: CDOTA_BaseNPC::Precache, CDOTA_BaseNPC::LoadVoiceFile
// strings: "soundevents/voscripts/game_sounds_vo_announcer.vsndevts", "soundevents/voscripts/game_sounds_vo_announcer_killing_spree.vsndevts", "soundevents/game_sounds_hero_pick.vsndevts"
void __fastcall CDOTA_Unit_Announcer::Precache(
        CDOTA_Unit_Announcer *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC::Precache(this, pContext);
  CDOTA_BaseNPC::LoadVoiceFile(this, "soundevents/voscripts/game_sounds_vo_announcer.vsndevts", pContext);
  CDOTA_BaseNPC::LoadVoiceFile(this, "soundevents/voscripts/game_sounds_vo_announcer_killing_spree.vsndevts", pContext);
  CDOTA_BaseNPC::LoadVoiceFile(this, "soundevents/game_sounds_hero_pick.vsndevts", pContext);
}


// CDOTA_Unit_Announcer::Spawn  (line 191, @0x0000000002a81320, libserver.so)  // inlines: AddEFlags, NetworkStateChanged, Set, SetMatchRulesOnClient, SetPhantomState, operator=<bool>
// calls: CDOTA_SpeechHandle::Init, CDOTA_BaseNPC::Spawn, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_invulnerable"
void __fastcall CDOTA_Unit_Announcer::Spawn(CDOTA_Unit_Announcer *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_Speech *m_pSpeech; // rax
  KeyValues kv2; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  CDOTA_SpeechHandle::Init(&this->m_Speech, this);
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  m_pSpeech = this->m_Speech.m_pSpeech;
  this->m_iEFlags |= 0x10u;
  if ( m_pSpeech != 0 )
    m_pSpeech->m_bNetworkToClient = 1;
  if ( !this->m_bIsPhantom.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsPhantom.m_Value = 1;
  }
  KeyValues::KeyValues(&kv2, "modifier_invulnerable");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_invulnerable", &kv2, 0);
  KeyValues::~KeyValues(&kv2);
}


// CDOTA_Unit_Announcer::GetLastTimeSaidAnything  (line 246, @0x0000000002a8b130, libserver.so)  // inlines: GetStopTalkTime
float __fastcall CDOTA_Unit_Announcer::GetLastTimeSaidAnything(CDOTA_Unit_Announcer *const this)
{
  CDOTA_Speech *m_pSpeech; // rax
  float result; // xmm0_4

  m_pSpeech = this->m_Speech.m_pSpeech;
  result = 0.0;
  if ( m_pSpeech != 0 )
    return m_pSpeech->m_flStopTalkTime;
  return result;
}


// CAnnouncerSharedThinker::~CAnnouncerSharedThinker  (line 254, @0x0000000002abfe50, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CAnnouncerSharedThinker::~CAnnouncerSharedThinker(CAnnouncerSharedThinker *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CAnnouncerSharedThinker::~CAnnouncerSharedThinker  (line 254, @0x0000000002abfe70, libserver.so)  // inlines: ~CAnnouncerSharedThinker, ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CAnnouncerSharedThinker::~CAnnouncerSharedThinker(CAnnouncerSharedThinker *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CAnnouncerSharedThinker::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 256, @0x0000000002ab72a0, libserver.so)
void __fastcall CAnnouncerSharedThinker::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CAnnouncerSharedThinker *const this)
{
  ;
}


// CAnnouncerSharedThinker::DoesGameSystemReallocate  (line 256, @0x0000000002ab72b0, libserver.so)
// globals: CAnnouncerSharedThinker::sm_Factory
bool __fastcall CAnnouncerSharedThinker::DoesGameSystemReallocate(const CAnnouncerSharedThinker *const this)
{
  return (*(CAnnouncerSharedThinker::sm_Factory->_vptr_IGameSystemFactory + 8))(CAnnouncerSharedThinker::sm_Factory);
}


// CAnnouncerSharedThinker::SetGameSystemGlobalPtrs  (line 256, @0x0000000002ab72d0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CAnnouncerSharedThinker::sm_Factory
void __fastcall CAnnouncerSharedThinker::SetGameSystemGlobalPtrs(CAnnouncerSharedThinker *const this, void *pValue)
{
  if ( CAnnouncerSharedThinker::sm_Factory != 0 )
    (*(CAnnouncerSharedThinker::sm_Factory->_vptr_IGameSystemFactory + 7))(CAnnouncerSharedThinker::sm_Factory, pValue);
}


// CAnnouncerSharedThinker::CAnnouncerSharedThinker  (line 280, @0x0000000002a8b150, libserver.so)
void __fastcall CAnnouncerSharedThinker::CAnnouncerSharedThinker(CAnnouncerSharedThinker *const this)
{
  this->_vptr_IGameSystem = off_43CDF50;  // vptr: CAnnouncerSharedThinker
  this->m_fLastRadiantIdle = 0.0;
  this->m_fLastDireIdle = 0.0;
  this->m_fLastSpectatorIdle = 0.0;
  this->m_fLastThinkTime = 0.0;
}


// CAnnouncerSharedThinker::GameInit  (line 288, @0x0000000002a77200, libserver.so)
void __fastcall CAnnouncerSharedThinker::GameInit(
        CAnnouncerSharedThinker *const this,
        const EventGameInit_t *const msg)
{
  this->m_fLastThinkTime = 0.0;
  this->m_fLastRadiantIdle = 0.0;
  this->m_fLastDireIdle = 0.0;
  this->m_fLastSpectatorIdle = 0.0;
}


// CAnnouncerSharedThinker::FrameUpdatePostEntityThink  (line 299, @0x0000000002ab6520, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CAnnouncerSharedThinker::Think
void __fastcall CAnnouncerSharedThinker::FrameUpdatePostEntityThink(
        CAnnouncerSharedThinker *const this,
        const EventServerPostEntityThink_t *const msg)
{
  float v3; // xmm0_4
  float v4; // xmm0_4

  v3 = this->m_fLastThinkTime + 10.0;
  if ( g_pGameRules != 0 )
  {
    if ( v3 > *&g_pGameRules[18].m_szQuestName[20] || g_pGameRules[19].m_szQuestName[29] != 0 )
      return;
  }
  else if ( v3 > 0.0 )
  {
    return;
  }
  CAnnouncerSharedThinker::Think(this);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fLastThinkTime = v4;
}


// CAnnouncerSharedThinker::Think  (line 376, @0x0000000002ab54e0, libserver.so)  // inlines: AccumulateHeroDamage, AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<(anonymous namespace)::HeroEvents>, DOTAGameRules, Element, EnsureCapacity, FindMostInjuredHero, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetEntryType, GetFloat, GetGameTime, GetInstance, GetInt, Grow, GrowMemory, HeroEvents, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, TeamEventsInfo, memcpy, operator CEntityInstance*, operator==<CBaseEntity>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~TeamEventsInfo
// calls: CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry, CDOTA_CombatLog::GetEntry, CDOTA_CombatLog::GetHeroForName, CDOTAGamerules::GetAnnouncer, Msg, Warning, CUtlMemory<(anonymous namespace)::HeroEvents, int>::Purge, CAnnouncerSharedThinker::CheckAndSendIdleSpeech, UtlMemory_CalcNewAllocationCount, memcpy, CUtlVectorBase<(anonymous namespace)::HeroEvents, CUtlMemory<(anonymous namespace)::HeroEvents, int> >::~CUtlVectorBase (13 total)
// callers: CAnnouncerSharedThinker::FrameUpdatePostEntityThink
// strings: "ANNOUNCER IDLE: none will speak, a hero died %.2f seconds ago.\n", "ANNOUNCER IDLE SPEECH FAILURE: MISSING ANNOUNCER\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CAnnouncerSharedThinker::Think(CAnnouncerSharedThinker *const this)
{
  float v1; // xmm0_4
  CDOTAGamerules *v2; // rdi
  float v3; // xmm2_4
  float m_fValue; // xmm1_4
  float v5; // xmm0_4
  CDOTA_CombatLog *v6; // rax
  int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  float *v11; // rax
  CEntityInstance *v12; // rcx
  CEntityIdentity *v13; // rdx
  char *v14; // rdx
  CEntityInstance *v15; // rsi
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  CDOTA_BaseNPC *Announcer; // r13
  CDOTA_Unit_Announcer *v25; // rbx
  CDOTA_BaseNPC *v26; // rax
  CDOTA_Unit_Announcer *v27; // r12
  float v28; // xmm0_4
  float v29; // xmm0_4
  __int64 v30; // rax
  __int64 v31; // rdx
  float *v32; // rax
  CEntityInstance *v33; // rcx
  CEntityIdentity *v34; // rdx
  char *v35; // rdx
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v37; // rcx
  CEntityIdentity *v38; // rcx
  int v39; // eax
  __int64 v40; // rdi
  _QWORD *v41; // rax
  float v42; // r14d
  __int64 v43; // rax
  __int64 v44; // rdx
  float *v45; // rax
  CEntityInstance *v46; // rcx
  CEntityIdentity *v47; // rdx
  char *v48; // rdx
  CEntityInstance *v49; // rsi
  CEntityIdentity *v50; // rcx
  CEntityIdentity *v51; // rcx
  int v52; // eax
  __int64 v53; // rdi
  float *v54; // rax
  float v55; // xmm0_4
  float v56; // xmm0_4
  float v57; // xmm0_4
  int v58; // eax
  __int64 v59; // rdi
  _QWORD *v60; // rax
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // r14d
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // r14d
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // [rsp-14h] [rbp-1D4h]
  __int64 v71; // [rsp-14h] [rbp-1D4h]
  int v72; // [rsp-10h] [rbp-1D0h]
  const void *v73; // [rsp-10h] [rbp-1D0h]
  int v74; // [rsp-4h] [rbp-1C4h]
  int v75; // [rsp-4h] [rbp-1C4h]
  float v76; // [rsp-4h] [rbp-1C4h]
  float thisa; // [rsp+8h] [rbp-1B8h]
  float this_4; // [rsp+Ch] [rbp-1B4h]
  int fOnlyConsiderDamageAfter; // [rsp+10h] [rbp-1B0h]
  __int64 v81; // [rsp+18h] [rbp-1A8h]
  __int64 v82; // [rsp+18h] [rbp-1A8h]
  __int64 v83; // [rsp+18h] [rbp-1A8h]
  __int64 v84; // [rsp+18h] [rbp-1A8h]
  __int64 v85; // [rsp+18h] [rbp-1A8h]
  __int64 v86; // [rsp+18h] [rbp-1A8h]
  int v87; // [rsp+18h] [rbp-1A8h]
  int v88; // [rsp+18h] [rbp-1A8h]
  int v89; // [rsp+18h] [rbp-1A8h]
  const void *v90; // [rsp+18h] [rbp-1A8h]
  const void *v91; // [rsp+18h] [rbp-1A8h]
  float v92; // [rsp+20h] [rbp-1A0h]
  __int64 v93; // [rsp+20h] [rbp-1A0h]
  float fSearchWindow[4]; // [rsp+28h] [rbp-198h] BYREF
  int v95; // [rsp+38h] [rbp-188h]
  `anonymous namespace'::TeamEventsInfo vSpectators; // [rsp+40h] [rbp-180h] BYREF
  int v97; // [rsp+58h] [rbp-168h]
  `anonymous namespace'::TeamEventsInfo vRadiant; // [rsp+60h] [rbp-160h] BYREF
  int v99; // [rsp+78h] [rbp-148h]
  `anonymous namespace'::TeamEventsInfo vDire; // [rsp+80h] [rbp-140h] BYREF
  float v101[74]; // [rsp+98h] [rbp-128h] BYREF

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( dota_announcer_idle_speech_starttime.m_pParent->m_Value.m_fValue <= v1 )
  {
    v95 = 0;
    *&vSpectators.m_Size = 0;
    vSpectators.m_Memory.m_pMemory = 0;
    *&vSpectators.m_Size = (**g_pMemAlloc)(g_pMemAlloc, 80);
    LODWORD(vSpectators.m_Memory.m_pMemory) = 10;
    v97 = 0;
    *&vRadiant.m_Size = 0;
    vRadiant.m_Memory.m_pMemory = 0;
    *&vRadiant.m_Size = (**g_pMemAlloc)(g_pMemAlloc, 80);
    LODWORD(vRadiant.m_Memory.m_pMemory) = 10;
    v99 = 0;
    *&vDire.m_Size = 0;
    vDire.m_Memory.m_pMemory = 0;
    *&vDire.m_Size = (**g_pMemAlloc)(g_pMemAlloc, 80);
    LODWORD(vDire.m_Memory.m_pMemory) = 10;
    v2 = g_pGameRules;
    if ( g_pGameRules != 0 )
      v3 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v3 = 0.0;
    m_fValue = dota_announcer_idle_speech_herodamage_window.m_pParent->m_Value.m_fValue;
    v5 = 0.0;
    v92 = v3 - fmaxf(dota_announcer_idle_speech_deathwait.m_pParent->m_Value.m_fValue, m_fValue);
    if ( g_pGameRules != 0 )
      v5 = *&g_pGameRules[18].m_szQuestName[20];
    thisa = v5 - m_fValue;
    v6 = g_pDOTACombatLog;
    v7 = g_pDOTACombatLog->m_vecEntryReferences.m_Size - 1;
    if ( v7 >= 0 )
    {
      v8 = v7;
      this_4 = -1.0;
      while ( 1 )
      {
        if ( (v6->m_vecEntryReferences.m_Memory.m_pMemory[v8].m_unType & 0xFFFB) == 0 )
        {
          CMsgDOTACombatLogEntry::CMsgDOTACombatLogEntry(v101);
          CDOTA_CombatLog::GetEntry(g_pDOTACombatLog, v7, v101);
          if ( v92 > v101[15] )
          {
            CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v101);
            v2 = g_pGameRules;
            goto LABEL_39;
          }
          if ( LODWORD(v101[6]) != 0 )
          {
            if ( LODWORD(v101[6]) == 4 && HIBYTE(v101[12]) != 0 )
              this_4 = fmaxf(this_4, v101[15]);
          }
          else if ( v101[15] >= thisa && HIBYTE(v101[12]) != 0 )
          {
            if ( LOBYTE(v101[16]) != 0 )
            {
              *(&v71 + 1) = SLODWORD(v101[13]);
              CDOTA_CombatLog::GetHeroForName(fSearchWindow, g_pDOTACombatLog, SLODWORD(v101[7]));
              v75 = v97;
              if ( v97 <= 0 )
              {
                *&v71 = fSearchWindow[0];
LABEL_128:
                v58 = v97;
                if ( v97 == LODWORD(vRadiant.m_Memory.m_pMemory) )
                {
                  if ( (HIDWORD(vRadiant.m_Memory.m_pMemory) & 0x40000000) != 0 )
                  {
                    v59 = *&vRadiant.m_Size;
                    v58 = v97;
                  }
                  else
                  {
                    v89 = v97 + 1;
                    v67 = UtlMemory_CalcNewAllocationCount(
                            v97,
                            HIDWORD(vRadiant.m_Memory.m_pMemory) & 0x3FFFFFFF,
                            v97 + 1,
                            8);
                    if ( v75 + 1 > v67 )
                    {
                      do
                        v67 = (v89 + v67) / 2;
                      while ( v89 > v67 );
                    }
                    if ( (HIDWORD(vRadiant.m_Memory.m_pMemory) & 0xC0000000) != 0 )
                    {
                      v91 = *&vRadiant.m_Size;
                      *&vRadiant.m_Size = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v67);
                      v59 = *&vRadiant.m_Size;
                      if ( v91 != 0 )
                      {
                        memcpy(*&vRadiant.m_Size, v91, 8LL * SLODWORD(vRadiant.m_Memory.m_pMemory));
                        v59 = *&vRadiant.m_Size;
                      }
                      HIDWORD(vRadiant.m_Memory.m_pMemory) &= 0x3FFFFFFFu;
                    }
                    else
                    {
                      v68 = *g_pMemAlloc;
                      if ( *&vRadiant.m_Size != 0 )
                        v69 = (*(v68 + 8))(g_pMemAlloc, *&vRadiant.m_Size, 8LL * v67);
                      else
                        v69 = (*v68)(g_pMemAlloc, 8LL * v67);
                      *&vRadiant.m_Size = v69;
                      v59 = v69;
                    }
                    LODWORD(vRadiant.m_Memory.m_pMemory) = v67;
                    v58 = v97;
                  }
                }
                else
                {
                  v59 = *&vRadiant.m_Size;
                }
                v97 = v58 + 1;
                v60 = (v59 + 8LL * v75);
                if ( v60 != 0 )
                  *v60 = v71;
              }
              else
              {
                *&v71 = fSearchWindow[0];
                v30 = LOWORD(fSearchWindow[0]) & 0x1FF;
                v31 = 8 * v30;
                v83 = v30 << 7;
                v32 = *&vRadiant.m_Size;
                v84 = v83 - v31;
                while ( 1 )
                {
                  m_pInstance = 0;
                  if ( (*v32 + 2) > 1 )
                  {
                    v37 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v32 >> 9) & 0x3F];
                    if ( v37 != 0 )
                    {
                      v38 = &v37[*v32 & 0x1FF];
                      if ( v38 != 0 && *v32 == v38->m_EHandle.m_Index )
                        m_pInstance = v38->m_pInstance;
                    }
                  }
                  v33 = 0;
                  if ( (LODWORD(fSearchWindow[0]) + 2) > 1 )
                  {
                    v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(fSearchWindow[0]) & 0x7FFF) >> 9];
                    if ( v34 != 0 )
                    {
                      v35 = v34 + v84;
                      if ( v35 != 0 && *(v35 + 4) == LODWORD(fSearchWindow[0]) )
                        v33 = *v35;
                    }
                  }
                  if ( m_pInstance == v33 )
                    break;
                  v32 += 2;
                  if ( v32 == (*&vRadiant.m_Size + 8LL * (v97 - 1) + 8) )
                    goto LABEL_128;
                }
                v32[1] = *(&v71 + 1) + v32[1];
              }
            }
            if ( BYTE1(v101[16]) != 0 )
            {
              *(&v70 + 1) = SLODWORD(v101[13]);
              CDOTA_CombatLog::GetHeroForName(fSearchWindow, g_pDOTACombatLog, SLODWORD(v101[7]));
              v74 = v99;
              if ( v99 <= 0 )
              {
                *&v70 = fSearchWindow[0];
LABEL_88:
                v39 = v99;
                if ( v99 == LODWORD(vDire.m_Memory.m_pMemory) )
                {
                  if ( (HIDWORD(vDire.m_Memory.m_pMemory) & 0x40000000) != 0 )
                  {
                    v40 = *&vDire.m_Size;
                    v39 = v99;
                  }
                  else
                  {
                    v88 = v99 + 1;
                    v64 = UtlMemory_CalcNewAllocationCount(
                            v99,
                            HIDWORD(vDire.m_Memory.m_pMemory) & 0x3FFFFFFF,
                            v99 + 1,
                            8);
                    if ( v74 + 1 > v64 )
                    {
                      do
                        v64 = (v88 + v64) / 2;
                      while ( v88 > v64 );
                    }
                    if ( (HIDWORD(vDire.m_Memory.m_pMemory) & 0xC0000000) != 0 )
                    {
                      v90 = *&vDire.m_Size;
                      *&vDire.m_Size = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v64);
                      v40 = *&vDire.m_Size;
                      if ( v90 != 0 )
                      {
                        memcpy(*&vDire.m_Size, v90, 8LL * SLODWORD(vDire.m_Memory.m_pMemory));
                        v40 = *&vDire.m_Size;
                      }
                      HIDWORD(vDire.m_Memory.m_pMemory) &= 0x3FFFFFFFu;
                    }
                    else
                    {
                      v65 = *g_pMemAlloc;
                      if ( *&vDire.m_Size != 0 )
                        v66 = (*(v65 + 8))(g_pMemAlloc, *&vDire.m_Size, 8LL * v64);
                      else
                        v66 = (*v65)(g_pMemAlloc, 8LL * v64);
                      *&vDire.m_Size = v66;
                      v40 = v66;
                    }
                    LODWORD(vDire.m_Memory.m_pMemory) = v64;
                    v39 = v99;
                  }
                }
                else
                {
                  v40 = *&vDire.m_Size;
                }
                v99 = v39 + 1;
                v41 = (v40 + 8LL * v74);
                if ( v41 != 0 )
                  *v41 = v70;
              }
              else
              {
                *&v70 = fSearchWindow[0];
                v9 = LOWORD(fSearchWindow[0]) & 0x1FF;
                v10 = 8 * v9;
                v81 = v9 << 7;
                v11 = *&vDire.m_Size;
                v82 = v81 - v10;
                while ( 1 )
                {
                  v15 = 0;
                  if ( (*v11 + 2) > 1 )
                  {
                    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v11 >> 9) & 0x3F];
                    if ( v16 != 0 )
                    {
                      v17 = &v16[*v11 & 0x1FF];
                      if ( v17 != 0 && *v11 == v17->m_EHandle.m_Index )
                        v15 = v17->m_pInstance;
                    }
                  }
                  v12 = 0;
                  if ( (LODWORD(fSearchWindow[0]) + 2) > 1 )
                  {
                    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(fSearchWindow[0]) & 0x7FFF) >> 9];
                    if ( v13 != 0 )
                    {
                      v14 = v13 + v82;
                      if ( v14 != 0 && LODWORD(fSearchWindow[0]) == *(v14 + 4) )
                        v12 = *v14;
                    }
                  }
                  if ( v15 == v12 )
                    break;
                  v11 += 2;
                  if ( v11 == (*&vDire.m_Size + 8LL * (v99 - 1) + 8) )
                    goto LABEL_88;
                }
                v11[1] = *(&v70 + 1) + v11[1];
              }
            }
            v76 = SLODWORD(v101[13]);
            CDOTA_CombatLog::GetHeroForName(fSearchWindow, g_pDOTACombatLog, SLODWORD(v101[7]));
            v42 = fSearchWindow[0];
            fOnlyConsiderDamageAfter = v95;
            if ( v95 <= 0 )
            {
LABEL_106:
              v52 = v95;
              if ( v95 == LODWORD(vSpectators.m_Memory.m_pMemory) )
              {
                if ( (HIDWORD(vSpectators.m_Memory.m_pMemory) & 0x40000000) != 0 )
                {
                  v53 = *&vSpectators.m_Size;
                  v52 = v95;
                }
                else
                {
                  v72 = v95 + 1;
                  v61 = UtlMemory_CalcNewAllocationCount(
                          v95,
                          HIDWORD(vSpectators.m_Memory.m_pMemory) & 0x3FFFFFFF,
                          v95 + 1,
                          8);
                  v87 = v61;
                  if ( fOnlyConsiderDamageAfter + 1 > v61 )
                  {
                    do
                      v61 = (v72 + v61) / 2;
                    while ( v72 > v61 );
                    v87 = v61;
                  }
                  if ( (HIDWORD(vSpectators.m_Memory.m_pMemory) & 0xC0000000) != 0 )
                  {
                    v73 = *&vSpectators.m_Size;
                    *&vSpectators.m_Size = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v87);
                    v53 = *&vSpectators.m_Size;
                    if ( v73 != 0 )
                    {
                      memcpy(*&vSpectators.m_Size, v73, 8LL * SLODWORD(vSpectators.m_Memory.m_pMemory));
                      v53 = *&vSpectators.m_Size;
                    }
                    HIDWORD(vSpectators.m_Memory.m_pMemory) &= 0x3FFFFFFFu;
                  }
                  else
                  {
                    v62 = *g_pMemAlloc;
                    if ( *&vSpectators.m_Size != 0 )
                      v63 = (*(v62 + 8))(g_pMemAlloc, *&vSpectators.m_Size, 8LL * v87);
                    else
                      v63 = (*v62)(g_pMemAlloc, 8LL * v87);
                    *&vSpectators.m_Size = v63;
                    v53 = v63;
                  }
                  LODWORD(vSpectators.m_Memory.m_pMemory) = v87;
                  v52 = v95;
                }
              }
              else
              {
                v53 = *&vSpectators.m_Size;
              }
              v95 = v52 + 1;
              v54 = (v53 + 8LL * fOnlyConsiderDamageAfter);
              if ( v54 != 0 )
              {
                *v54 = v42;
                v54[1] = v76;
              }
            }
            else
            {
              v42 = fSearchWindow[0];
              v43 = LOWORD(fSearchWindow[0]) & 0x1FF;
              v44 = 8 * v43;
              v85 = v43 << 7;
              v45 = *&vSpectators.m_Size;
              v86 = v85 - v44;
              while ( 1 )
              {
                v49 = 0;
                if ( (*v45 + 2) > 1 )
                {
                  v50 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v45 >> 9) & 0x3F];
                  if ( v50 != 0 )
                  {
                    v51 = &v50[*v45 & 0x1FF];
                    if ( v51 != 0 && *v45 == v51->m_EHandle.m_Index )
                      v49 = v51->m_pInstance;
                  }
                }
                v46 = 0;
                if ( (LODWORD(fSearchWindow[0]) + 2) > 1 )
                {
                  v47 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(fSearchWindow[0]) & 0x7FFF) >> 9];
                  if ( v47 != 0 )
                  {
                    v48 = v47 + v86;
                    if ( v48 != 0 && LODWORD(fSearchWindow[0]) == *(v48 + 4) )
                      v46 = *v48;
                  }
                }
                if ( v49 == v46 )
                  break;
                v45 += 2;
                if ( v45 == (*&vSpectators.m_Size + 8LL * (v95 - 1) + 8) )
                  goto LABEL_106;
              }
              v45[1] = v76 + v45[1];
            }
          }
          CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(v101);
        }
        --v7;
        --v8;
        if ( v7 == -1 )
        {
          v2 = g_pGameRules;
          goto LABEL_39;
        }
        v6 = g_pDOTACombatLog;
      }
    }
    this_4 = -1.0;
LABEL_39:
    if ( v95 <= 0 )
    {
      v93 = 0;
    }
    else
    {
      v18 = *&vSpectators.m_Size;
      if ( v95 != 1 )
      {
        v19 = *&vSpectators.m_Size + 8LL;
        do
        {
          if ( *(v19 + 4) > *(v18 + 4) )
            v18 = v19;
          v19 += 8;
        }
        while ( v19 != *&vSpectators.m_Size + 8LL * (v95 - 2) + 16 );
      }
      v93 = v18;
    }
    if ( v97 <= 0 )
    {
      v20 = 0;
    }
    else
    {
      v20 = *&vRadiant.m_Size;
      if ( v97 != 1 )
      {
        v21 = *&vRadiant.m_Size + 8LL;
        do
        {
          if ( *(v21 + 4) > *(v20 + 4) )
            v20 = v21;
          v21 += 8;
        }
        while ( v21 != *&vRadiant.m_Size + 8LL * (v97 - 2) + 16 );
      }
    }
    if ( v99 <= 0 )
    {
      v22 = 0;
    }
    else
    {
      v22 = *&vDire.m_Size;
      if ( v99 != 1 )
      {
        v23 = *&vDire.m_Size + 8LL;
        do
        {
          if ( *(v23 + 4) > *(v22 + 4) )
            v22 = v23;
          v23 += 8;
        }
        while ( v23 != *&vDire.m_Size + 8LL * (v99 - 2) + 16 );
      }
    }
    Announcer = CDOTAGamerules::GetAnnouncer(v2, 1);
    v25 = CDOTAGamerules::GetAnnouncer(g_pGameRules, 2);
    v26 = CDOTAGamerules::GetAnnouncer(g_pGameRules, 3);
    v27 = v26;
    if ( Announcer != 0 && v25 != 0 && v26 != 0 )
    {
      v28 = 0.0;
      if ( g_pGameRules != 0 )
        v28 = *&g_pGameRules[18].m_szQuestName[20];
      if ( this_4 <= (v28 - dota_announcer_idle_speech_deathwait.m_pParent->m_Value.m_fValue) )
      {
        v55 = 0.0;
        if ( v20 != 0 )
          v55 = *(v20 + 4);
        CAnnouncerSharedThinker::CheckAndSendIdleSpeech(this, v25, "radiant", v55, &this->m_fLastRadiantIdle);
        v56 = 0.0;
        if ( v22 != 0 )
          v56 = *(v22 + 4);
        CAnnouncerSharedThinker::CheckAndSendIdleSpeech(this, v27, "dire", v56, &this->m_fLastDireIdle);
        v57 = 0.0;
        if ( v93 != 0 )
          v57 = *(v93 + 4);
        CAnnouncerSharedThinker::CheckAndSendIdleSpeech(this, v25, "spectator", v57, &this->m_fLastSpectatorIdle);
        v99 = 0;
        if ( (HIDWORD(vDire.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        {
          CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vDire);
          if ( (HIDWORD(vDire.m_Memory.m_pMemory) & 0xC0000000) == 0 )
            CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vDire);
        }
        v97 = 0;
        if ( (HIDWORD(vRadiant.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        {
          CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vRadiant);
          if ( (HIDWORD(vRadiant.m_Memory.m_pMemory) & 0xC0000000) == 0 )
            CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vRadiant);
        }
        v95 = 0;
        if ( (HIDWORD(vSpectators.m_Memory.m_pMemory) & 0xC0000000) != 0 )
          return;
        CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vSpectators);
        if ( (HIDWORD(vSpectators.m_Memory.m_pMemory) & 0xC0000000) != 0 )
          return;
LABEL_87:
        CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vSpectators);
        return;
      }
      if ( dota_announcer_idle_speech_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        v29 = 0.0;
        if ( g_pGameRules != 0 )
          v29 = *&g_pGameRules[18].m_szQuestName[20];
        Msg("ANNOUNCER IDLE: none will speak, a hero died %.2f seconds ago.\n", (v29 - this_4));
      }
    }
    else
    {
      Warning("ANNOUNCER IDLE SPEECH FAILURE: MISSING ANNOUNCER\n");
    }
    v99 = 0;
    if ( (HIDWORD(vDire.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vDire);
      if ( (HIDWORD(vDire.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vDire);
    }
    v97 = 0;
    if ( (HIDWORD(vRadiant.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vRadiant);
      if ( (HIDWORD(vRadiant.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vRadiant);
    }
    v95 = 0;
    if ( (HIDWORD(vSpectators.m_Memory.m_pMemory) & 0xC0000000) != 0 )
      return;
    CUtlMemory<`anonymous namespace'::HeroEvents,int>::Purge(&vSpectators);
    if ( (HIDWORD(vSpectators.m_Memory.m_pMemory) & 0xC0000000) != 0 )
      return;
    goto LABEL_87;
  }
}


// CAnnouncerSharedThinker::CheckAndSendIdleSpeech  (line 476, @0x0000000002a8b180, libserver.so)  // inlines: CUtlSymbol, DOTAGameRules, GetBool, GetFloat, GetGameTime, GetInt, GetLastTimeSaidAnything, GetStopTalkTime
// calls: __cxa_guard_acquire, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTAGamerules::QueueConceptForAnnouncer, CResponseCriteriaSet::~CResponseCriteriaSet, Msg, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, _Unwind_Resume, __cxa_guard_abort
// callers: CAnnouncerSharedThinker::Think
// strings: "announcer_team", "won't idle: announcer spoke %.2f seconds ago.\n", "won't idle: a hero took %f points of damage.\n", "ANNOUNCER IDLE: %s announcer... ", "won't idle: dota_announcer_idle_speech_interval hasn't elapsed.\n", "announce_event" (7 total)
// globals: `guard variable for'CAnnouncerSharedThinker::CheckAndSendIdleSpeech(CDOTA_Unit_Announcer *,char const*,float,float &)::symAnnounceEvent, CAnnouncerSharedThinker::CheckAndSendIdleSpeech(CDOTA_Unit_Announcer *,char const*,float,float &)::symAnnounceEvent
__int64 __fastcall CAnnouncerSharedThinker::CheckAndSendIdleSpeech(
        CAnnouncerSharedThinker *const this,
        CDOTA_Unit_Announcer *const pAnnouncer,
        const char *pszAnnouncerTeamName,
        float flRecentHeroDamage,
        float *const flLastAnnouncerIdleSpoke)
{
  int m_nValue; // eax
  CDOTA_Speech *m_pSpeech; // rdx
  float m_flStopTalkTime; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  int v13; // xmm0_4
  unsigned int v14; // ebx
  float v16; // xmm0_4
  float v17; // xmm1_4
  float flRecentHeroDamagea; // [rsp+Ch] [rbp-84h]
  CResponseCriteriaSet::CritSymbol_t v19; // [rsp+10h] [rbp-80h] BYREF
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-70h] BYREF

  m_nValue = dota_announcer_idle_speech_debug.m_pParent->m_Value.m_nValue;
  if ( m_nValue != 0 )
  {
    flRecentHeroDamagea = flRecentHeroDamage;
    Msg("ANNOUNCER IDLE: %s announcer... ", pszAnnouncerTeamName);
    flRecentHeroDamage = flRecentHeroDamagea;
    m_nValue = dota_announcer_idle_speech_debug.m_pParent->m_Value.m_nValue;
  }
  m_pSpeech = pAnnouncer->m_Speech.m_pSpeech;
  m_flStopTalkTime = 0.0;
  if ( m_pSpeech != 0 )
    m_flStopTalkTime = m_pSpeech->m_flStopTalkTime;
  v11 = 0.0;
  if ( g_pGameRules != 0 )
    v11 = *&g_pGameRules[18].m_szQuestName[20];
  if ( (v11 - dota_announcer_idle_speech_minwait.m_pParent->m_Value.m_fValue) <= m_flStopTalkTime )
  {
    v14 = 0;
    if ( m_nValue != 0 )
    {
      v16 = 0.0;
      if ( g_pGameRules != 0 )
        v16 = *&g_pGameRules[18].m_szQuestName[20];
      v17 = 0.0;
      if ( m_pSpeech != 0 )
        v17 = m_pSpeech->m_flStopTalkTime;
      v14 = 0;
      Msg("won't idle: announcer spoke %.2f seconds ago.\n", (v16 - v17));
    }
  }
  else if ( dota_announcer_idle_speech_herodamage_limit.m_pParent->m_Value.m_fValue <= flRecentHeroDamage )
  {
    v14 = 0;
    if ( m_nValue != 0 )
      Msg("won't idle: a hero took %f points of damage.\n", flRecentHeroDamage);
  }
  else
  {
    v12 = 0.0;
    if ( g_pGameRules != 0 )
      v12 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (v12 - dota_announcer_idle_speech_interval.m_pParent->m_Value.m_fValue) <= *flLastAnnouncerIdleSpoke )
    {
      v14 = 0;
      if ( m_nValue != 0 )
        Msg("won't idle: dota_announcer_idle_speech_interval hasn't elapsed.\n");
    }
    else
    {
      if ( m_nValue != 0 )
        Msg("says idle.\n");
      if ( `guard variable for'CAnnouncerSharedThinker::CheckAndSendIdleSpeech(CDOTA_Unit_Announcer *,char const*,float,float &)::symAnnounceEvent == 0
        && __cxa_guard_acquire(&`guard variable for'CAnnouncerSharedThinker::CheckAndSendIdleSpeech(CDOTA_Unit_Announcer *,char const*,float,float &)::symAnnounceEvent) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("announce_event");
        __cxa_guard_release(&`guard variable for'CAnnouncerSharedThinker::CheckAndSendIdleSpeech(CDOTA_Unit_Announcer *,char const*,float,float &)::symAnnounceEvent);
      }
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      v19.m_Id = CAnnouncerSharedThinker::CheckAndSendIdleSpeech(CDOTA_Unit_Announcer *,char const*,float,float &)::symAnnounceEvent.m_Id;
      CResponseCriteriaSet::AppendCriteria(&criteria, &v19, "idle", 1.0);
      CResponseCriteriaSet::AppendCriteria(&criteria, "announcer_team", pszAnnouncerTeamName, 1.0);
      CDOTAGamerules::QueueConceptForAnnouncer(
        g_pGameRules,
        pAnnouncer,
        pAnnouncer->m_iAudienceTeam,
        18,
        0.1,
        &criteria,
        5,
        1);
      v13 = 0;
      if ( g_pGameRules != 0 )
        v13 = *&g_pGameRules[18].m_szQuestName[20];
      *flLastAnnouncerIdleSpoke = v13;
      v14 = 1;
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
  }
  return v14;
}


// CAnnouncerSharedThinker::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 514, @0x0000000002a8b440, libserver.so)
void __cdecl CAnnouncerSharedThinker::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


