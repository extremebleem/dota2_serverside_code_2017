// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_tutorial.cpp:66
class C_CDotaTutorialNetworker_MapInstall {
	C_CDotaTutorialNetworker_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/dota_tutorial.cpp:87
class CInfoRoquelairePerch : public CPointEntity {
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
	CInfoRoquelairePerch(CInfoRoquelairePerch &);
	CInfoRoquelairePerch(CInfoRoquelairePerch &);
	CInfoRoquelairePerch();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoRoquelairePerch();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/server/dota/dota_tutorial.cpp:3524
class CDOTA_HeroTrigger : public CTriggerMultiple {
public:

private:

	static datamap_t m_DataMap;
	typedef CTriggerMultiple BaseClass;

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
	CDOTA_HeroTrigger(CDOTA_HeroTrigger &);
	CDOTA_HeroTrigger(CDOTA_HeroTrigger &);
	CDOTA_HeroTrigger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual bool PassesTriggerFilters(CBaseEntity *);
	virtual void ActivateMultiTrigger(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CDOTA_HeroTrigger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[223] PassesTriggerFilters
	// vtable[226] ActivateMultiTrigger
	// vtable[34] GetDataDescMap
	// sizeof = 1504
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Tutorial::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 50, @0x00000000026f7f20, libserver.so)
void __cdecl CDOTA_Tutorial::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// DOTATutorial  (line 52, @0x00000000026f7f30, libserver.so)
// callers: CDOTAGamerules::ClientMsg_BeginLastHitChallenge, CDOTAGameConfiguration::OnClientFullyConnect, CDOTAGamerules::State_Enter_PRE_GAME, CDOTAGamerules::State_Think_INIT, CDOTASteamWorksGameStatsServer::LogTutorialStats, CDOTA_Modifier_Tutorial_Sleep::OnTakeDamage, CDotaSubquestPlayerStat::GetCurrentValue, CDOTABehaviorRoquelaireInvade::Update, CDOTABehaviorRoquelaireIdle::Update, CDOTABehaviorTutorialIdle::Update, CDOTA_ScriptedSpawner::InputSetCompanion, CDOTA_ScriptedSpawner::InputFireTutorialAdvanceEvent (15 total)
// globals: g_DOTATutorial
CDOTA_Tutorial *__cdecl DOTATutorial()
{
  return &g_DOTATutorial;
}


// CDotaTutorialNetworker::YouForgotToImplementOrDeclareServerClass  (line 66, @0x00000000026bd090, libserver.so)
int __fastcall CDotaTutorialNetworker::YouForgotToImplementOrDeclareServerClass(CDotaTutorialNetworker *const this)
{
  return 0;
}


// CDotaTutorialNetworker::GetServerClass  (line 66, @0x00000000026ccb00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDotaTutorialNetworker::GetServerClass(CDotaTutorialNetworker *const this)
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


// CInfoRoquelairePerch::Schema_DynamicBinding  (line 87, @0x00000000027288f0, libserver.so)
// globals: CInfoRoquelairePerch::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoRoquelairePerch::Schema_DynamicBinding(
        const CInfoRoquelairePerch *const this)
{
  return CInfoRoquelairePerch::s_pSchemaBinding;
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 87, @0x0000000002728900, libserver.so)
// globals: CInfoRoquelairePerch::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoRoquelairePerch::CEntityInstanceEntityClass *const this)
{
  return CInfoRoquelairePerch::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::DestructInstance  (line 87, @0x0000000002728910, libserver.so)  // inlines: Destruct<CInfoRoquelairePerch>
void __fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::DestructInstance(
        CInfoRoquelairePerch::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::FreeInstance  (line 87, @0x0000000002728930, libserver.so)
void __fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::FreeInstance(
        CInfoRoquelairePerch::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::CanAllocate  (line 87, @0x0000000002728950, libserver.so)
bool __fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::CanAllocate(
        const CInfoRoquelairePerch::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 87, @0x0000000002728960, libserver.so)
// globals: CInfoRoquelairePerch::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoRoquelairePerch::CEntityInstanceEntityClass *const this)
{
  return CInfoRoquelairePerch::s_pSchemaBinding;
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::AllocateInstance  (line 87, @0x0000000002736a80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::AllocateInstance(
        CInfoRoquelairePerch::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::ConstructInstance  (line 87, @0x0000000002736c00, libserver.so)  // inlines: CInfoRoquelairePerch, CPointEntity, Construct<CInfoRoquelairePerch>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::ConstructInstance(
        CInfoRoquelairePerch::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_42AEED0;
  }
  return p;
}


// CInfoRoquelairePerch::~CInfoRoquelairePerch  (line 87, @0x0000000002736d40, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoRoquelairePerch::~CInfoRoquelairePerch(CInfoRoquelairePerch *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoRoquelairePerch::~CInfoRoquelairePerch  (line 87, @0x0000000002736d60, libserver.so)  // inlines: ~CInfoRoquelairePerch, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoRoquelairePerch::~CInfoRoquelairePerch(CInfoRoquelairePerch *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 87, @0x0000000002745c10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoRoquelairePerch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CInfoRoquelairePerch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 87, @0x0000000002745c30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoRoquelairePerch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoRoquelairePerch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoRoquelairePerch::GetEntityClassInternal  (line 87, @0x000000000279f550, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "info_roquelaire_perch", "CInfoRoquelairePerch", "CPointEntity"
// globals: `guard variable for'CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass, CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass, __dso_handle, CInfoRoquelairePerch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo, CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo
CEntityClass *__cdecl CInfoRoquelairePerch::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass) != 0 )
  {
    CEntityClass::CEntityClass(&CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass);
    CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass._vptr_CEntityClass = off_42AEE50;
    __cxa_guard_release(&`guard variable for'CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass);
    __cxa_atexit(
      CInfoRoquelairePerch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoRoquelairePerchClass != 0 )
    return &CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass;
  if ( `guard variable for'CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo) != 0 )
  {
    if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
        "CPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo,
      "CInfoRoquelairePerch",
      "info_roquelaire_perch",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo);
  }
  CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass.m_pClassInfo = &CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo;
  CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass.m_pBaseClassInfo = CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoRoquelairePerchClass = &CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass;
  CInfoRoquelairePerch::GetEntityClassInfo(void)::g_EntityCInfoRoquelairePerchClassInfo.m_pClass = &CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass;
  CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoRoquelairePerchClass->m_pComponentOverrides = 0;
  return &CInfoRoquelairePerch::GetEntityClassInternal(void)::g_EntityCInfoRoquelairePerchClass;
}


// GetScriptDesc<CDOTA_Tutorial>  (line 89, @0x000000000270e910, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, bool, char const*, char const*, char const*, bool>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, bool, char const*>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, bool>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, void, Vector>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, void, bool>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, void, char const*, char const*>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, void, char const*, int, char const*, char const*>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, void, char const*>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, void, int, bool>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, void, int>, ScriptDeduceFunctionSignature<CDOTA_Tutorial*, CDOTA_Tutorial, void>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CDOTA_Tutorial::GameInit
// strings: "!DOTA Tutorial", "CDOTATutorial", "CDOTA_Tutorial", "Select the team for the local player", "SelectPlayerTeam", "Select a hero for the local player" (40 total)
// globals: g_pCDOTA_Tutorial_ScriptDesc, CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,, CDOTA_Tutorial::SelectPlayerTeam(char const*), CDOTA_Tutorial::SelectHero(char const*), CDOTA_Tutorial::UpgradePlayerAbility(char const*), CMemberScriptBinding4<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*,int,char const*,char const*),void,char const*,int,char const*,char const*>::Call(voi, CDOTA_Tutorial::AddQuest(char const*,int,char const*,char const*), CDOTA_Tutorial::CompleteQuest(char const*) (37 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CDOTA_Tutorial>(CDOTA_Tutorial *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  CUtlMemory<ScriptFunctionBinding_t,int> *p_m_Memory; // r12
  ScriptFunctionBinding_t *m_pMemory; // rdx
  int8 m_nNumParameters; // al
  __int64 v6; // rcx
  int v7; // eax
  char v8; // cl
  char v9; // di
  __int64 m_Size; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  int v15; // eax
  char v16; // dl
  char v17; // di
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rdx
  int v23; // eax
  char v24; // dl
  char v25; // di
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // al
  char v30; // dl
  int v31; // eax
  char v32; // dl
  char v33; // di
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rdx
  int v39; // eax
  char v40; // dl
  char v41; // di
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rdx
  int v47; // eax
  char v48; // dl
  char v49; // di
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  char v55; // dl
  char v56; // di
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // rcx
  char v60; // al
  char v61; // dl
  int v62; // eax
  char v63; // dl
  char v64; // di
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // rcx
  char v68; // al
  __int64 v69; // rdx
  int v70; // eax
  char v71; // dl
  char v72; // di
  __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // rcx
  char v76; // al
  __int64 v77; // rdx
  int v78; // eax
  char v79; // dl
  char v80; // di
  __int64 v81; // r13
  __int64 v82; // rax
  __int64 v83; // rcx
  char v84; // al
  __int64 v85; // rdx
  int v86; // eax
  char v87; // dl
  char v88; // di
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // rcx
  int v92; // eax
  int v93; // eax
  char v94; // dl
  char v95; // di
  __int64 v96; // r13
  __int64 v97; // rax
  __int64 v98; // rcx
  int v99; // eax
  int v100; // eax
  char v101; // dl
  char v102; // di
  __int64 v103; // r13
  __int64 v104; // rax
  __int64 v105; // rcx
  char v106; // al
  __int64 v107; // rdx
  int v108; // eax
  char v109; // dl
  char v110; // di
  __int64 v111; // r13
  __int64 v112; // rax
  __int64 v113; // rcx
  int v114; // eax
  int v115; // eax
  char v116; // dl
  char v117; // di
  __int64 v118; // r13
  __int64 v119; // rax
  __int64 v120; // rcx
  char v121; // al
  char v122; // dl
  int v123; // eax
  char v124; // dl
  char v125; // di
  __int64 v126; // r13
  __int64 v127; // rax
  __int64 v128; // rcx
  char v129; // al
  __int64 v130; // rdx
  int v131; // eax
  char v132; // dl
  char v133; // di
  __int64 v134; // r13
  __int64 v135; // rax
  __int64 v136; // rcx
  char v137; // al
  __int64 v138; // rdx
  int v139; // eax
  char v140; // dl
  char v141; // di
  __int64 v142; // r13
  __int64 v143; // rax
  __int64 v144; // rcx
  char v145; // al
  __int64 v146; // rdx
  int v147; // eax
  char v148; // dl
  char v149; // di
  __int64 v150; // r13
  __int64 v151; // rax
  __int64 v152; // rcx
  char v153; // al
  __int64 v154; // rdx
  int v155; // eax
  char v156; // dl
  char v157; // di
  __int64 v158; // r13
  __int64 v159; // rax
  __int64 v160; // rcx
  char v161; // al
  __int64 v162; // rdx
  int v163; // eax
  char v164; // dl
  char v165; // di
  __int64 v166; // r13
  __int64 v167; // rax
  __int64 v168; // rcx
  char v169; // al
  __int64 v170; // rdx
  int v171; // eax
  char v172; // dl
  char v173; // di
  __int64 v174; // r13
  __int64 v175; // rax
  __int64 v176; // rcx
  char v177; // al
  __int64 v178; // rdx
  int v179; // eax
  char v180; // dl
  char v181; // di
  __int64 v182; // r13
  __int64 v183; // rax
  __int64 v184; // rcx
  char v185; // al
  __int64 v186; // rdx
  int v187; // eax
  char v188; // dl
  char v189; // di
  __int64 v190; // r13
  __int64 v191; // rax
  __int64 v192; // rcx
  char v193; // al
  char v194; // dl
  int v195; // eax
  char v196; // dl
  char v197; // di

  result = g_pCDOTA_Tutorial_ScriptDesc;
  if ( g_pCDOTA_Tutorial_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_Memory = &v2->m_FunctionBindings.m_Memory;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCDOTA_Tutorial_ScriptDesc = v2;
    v2->m_pszDescription = "!DOTA Tutorial";
    v2->m_pszScriptName = "CDOTATutorial";
    v2->m_pszClassname = "CDOTA_Tutorial";
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_pMemory->m_desc.m_ReturnType = 0;
    m_pMemory->m_desc.m_pszDescription = "Select the team for the local player";
    m_pMemory->m_desc.m_pszScriptName = "SelectPlayerTeam";
    m_pMemory->m_desc.m_pszFunction = "SelectPlayerTeam";
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    v6 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v6] = 30;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v7 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v7 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v7] == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v8;
          goto LABEL_10;
        }
        ++v8;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v7] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v9;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call;
    m_pMemory->m_pFunction = CDOTA_Tutorial::SelectPlayerTeam;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      *v11 = 0;
      *(v11 + 8) = 0;
      *(v11 + 16) = 0;
      *(v11 + 24) = 29;
      *(v11 + 25) = -1;
      *(v11 + 26) = 0;
      *(v11 + 40) = 0;
      v12 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v12 = 0;
    }
    *(v12 + 24) = 0;
    *(v12 + 16) = "Select a hero for the local player";
    *v12 = "SelectHero";
    *(v12 + 8) = "SelectHero";
    v13 = *(v12 + 26);
    v14 = v13++;
    *(v12 + v14 + 27) = 30;
    *(v12 + 26) = v13;
    v15 = v13 - 1;
    *(v12 + 25) = 0;
    if ( v15 >= 0 && *(v12 + v15 + 27) == 32 )
    {
      v16 = 1;
      do
      {
        --v15;
        v17 = v16;
        if ( v15 == -1 )
        {
          *(v12 + 25) = v16;
          goto LABEL_20;
        }
        ++v16;
      }
      while ( *(v12 + v15 + 27) == 32 );
      *(v12 + 25) = v17;
    }
LABEL_20:
    *(v12 + 64) = 1;
    *(v12 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call;
    *(v12 + 56) = CDOTA_Tutorial::SelectHero;
    v18 = v2->m_FunctionBindings.m_Size;
    if ( v18 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v19 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v18];
    if ( v19 != 0 )
    {
      *v19 = 0;
      *(v19 + 8) = 0;
      *(v19 + 16) = 0;
      *(v19 + 24) = 29;
      *(v19 + 25) = -1;
      *(v19 + 26) = 0;
      *(v19 + 40) = 0;
      v20 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v18];
    }
    else
    {
      v20 = 0;
    }
    *(v20 + 24) = 0;
    *(v20 + 16) = "Upgrade a specific ability for the local hero";
    *v20 = "UpgradePlayerAbility";
    *(v20 + 8) = "UpgradePlayerAbility";
    v21 = *(v20 + 26);
    v22 = v21++;
    *(v20 + v22 + 27) = 30;
    *(v20 + 26) = v21;
    v23 = v21 - 1;
    *(v20 + 25) = 0;
    if ( v23 >= 0 && *(v20 + v23 + 27) == 32 )
    {
      v24 = 1;
      do
      {
        --v23;
        v25 = v24;
        if ( v23 == -1 )
        {
          *(v20 + 25) = v24;
          goto LABEL_30;
        }
        ++v24;
      }
      while ( *(v20 + v23 + 27) == 32 );
      *(v20 + 25) = v25;
    }
LABEL_30:
    *(v20 + 64) = 1;
    *(v20 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call;
    *(v20 + 56) = CDOTA_Tutorial::UpgradePlayerAbility;
    v26 = v2->m_FunctionBindings.m_Size;
    if ( v26 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v27 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v26];
    if ( v27 != 0 )
    {
      *v27 = 0;
      *(v27 + 8) = 0;
      *(v27 + 16) = 0;
      *(v27 + 24) = 29;
      *(v27 + 25) = -1;
      *(v27 + 26) = 0;
      *(v27 + 40) = 0;
      v28 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v26];
    }
    else
    {
      v28 = 0;
    }
    *(v28 + 24) = 0;
    *(v28 + 16) = "Add a quest to the quest log";
    *v28 = "AddQuest";
    *(v28 + 8) = "AddQuest";
    v29 = *(v28 + 26);
    *(v28 + v29 + 27) = 30;
    *(v28 + (v29 + 1) + 27) = 5;
    *(v28 + (v29 + 2) + 27) = 30;
    v30 = v29 + 3;
    v29 += 4;
    *(v28 + v30 + 27) = 30;
    *(v28 + 26) = v29;
    v31 = v29 - 1;
    *(v28 + 25) = 0;
    if ( v31 >= 0 && *(v28 + v31 + 27) == 32 )
    {
      v32 = 1;
      do
      {
        --v31;
        v33 = v32;
        if ( v31 == -1 )
        {
          *(v28 + 25) = v32;
          goto LABEL_40;
        }
        ++v32;
      }
      while ( *(v28 + v31 + 27) == 32 );
      *(v28 + 25) = v33;
    }
LABEL_40:
    *(v28 + 64) = 1;
    *(v28 + 48) = CMemberScriptBinding4<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*,int,char const*,char const*),void,char const*,int,char const*,char const*>::Call;
    *(v28 + 56) = CDOTA_Tutorial::AddQuest;
    v34 = v2->m_FunctionBindings.m_Size;
    if ( v34 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v35 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v34];
    if ( v35 != 0 )
    {
      *v35 = 0;
      *(v35 + 8) = 0;
      *(v35 + 16) = 0;
      *(v35 + 24) = 29;
      *(v35 + 25) = -1;
      *(v35 + 26) = 0;
      *(v35 + 40) = 0;
      v36 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v34];
    }
    else
    {
      v36 = 0;
    }
    *(v36 + 24) = 0;
    *(v36 + 16) = "Complete a quest,";
    *v36 = "CompleteQuest";
    *(v36 + 8) = "CompleteQuest";
    v37 = *(v36 + 26);
    v38 = v37++;
    *(v36 + v38 + 27) = 30;
    *(v36 + 26) = v37;
    v39 = v37 - 1;
    *(v36 + 25) = 0;
    if ( v39 >= 0 && *(v36 + v39 + 27) == 32 )
    {
      v40 = 1;
      do
      {
        --v39;
        v41 = v40;
        if ( v39 == -1 )
        {
          *(v36 + 25) = v40;
          goto LABEL_50;
        }
        ++v40;
      }
      while ( *(v36 + v39 + 27) == 32 );
      *(v36 + 25) = v41;
    }
LABEL_50:
    *(v36 + 64) = 1;
    *(v36 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call;
    *(v36 + 56) = CDOTA_Tutorial::CompleteQuest;
    v42 = v2->m_FunctionBindings.m_Size;
    if ( v42 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v43 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v42];
    if ( v43 != 0 )
    {
      *v43 = 0;
      *(v43 + 8) = 0;
      *(v43 + 16) = 0;
      *(v43 + 24) = 29;
      *(v43 + 25) = -1;
      *(v43 + 26) = 0;
      *(v43 + 40) = 0;
      v44 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v42];
    }
    else
    {
      v44 = 0;
    }
    *(v44 + 24) = 0;
    *(v44 + 16) = "Add a task to move to a specific location";
    *v44 = "CreateLocationTask";
    *(v44 + 8) = "CreateLocationTask";
    v45 = *(v44 + 26);
    v46 = v45++;
    *(v44 + v46 + 27) = 3;
    *(v44 + 26) = v45;
    v47 = v45 - 1;
    *(v44 + 25) = 0;
    if ( v47 >= 0 && *(v44 + v47 + 27) == 32 )
    {
      v48 = 1;
      do
      {
        --v47;
        v49 = v48;
        if ( v47 == -1 )
        {
          *(v44 + 25) = v48;
          goto LABEL_60;
        }
        ++v48;
      }
      while ( *(v44 + v47 + 27) == 32 );
      *(v44 + 25) = v49;
    }
LABEL_60:
    *(v44 + 64) = 1;
    *(v44 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(Vector),void,Vector>::Call;
    *(v44 + 56) = CDOTA_Tutorial::CreateLocationTask;
    v50 = v2->m_FunctionBindings.m_Size;
    if ( v50 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v51 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v50];
    if ( v51 != 0 )
    {
      *v51 = 0;
      *(v51 + 8) = 0;
      *(v51 + 16) = 0;
      *(v51 + 24) = 29;
      *(v51 + 25) = -1;
      *(v51 + 26) = 0;
      *(v51 + 40) = 0;
      v52 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v50];
    }
    else
    {
      v52 = 0;
    }
    *(v52 + 24) = 0;
    *(v52 + 16) = "Initialize Tutorial Mode";
    *v52 = "StartTutorialMode";
    *(v52 + 8) = "StartTutorialMode";
    v53 = *(v52 + 26);
    *(v52 + 25) = 0;
    v54 = v53 - 1;
    if ( v54 >= 0 && *(v52 + v54 + 27) == 32 )
    {
      v55 = 1;
      do
      {
        --v54;
        v56 = v55;
        if ( v54 == -1 )
        {
          *(v52 + 25) = v55;
          goto LABEL_70;
        }
        ++v55;
      }
      while ( *(v52 + v54 + 27) == 32 );
      *(v52 + 25) = v56;
    }
LABEL_70:
    *(v52 + 64) = 1;
    *(v52 + 48) = CMemberScriptBinding0<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(void),void>::Call;
    *(v52 + 56) = CDOTA_Tutorial::StartTutorialMode;
    v57 = v2->m_FunctionBindings.m_Size;
    if ( v57 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v58 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v57];
    if ( v58 != 0 )
    {
      *v58 = 0;
      *(v58 + 8) = 0;
      *(v58 + 16) = 0;
      *(v58 + 24) = 29;
      *(v58 + 25) = -1;
      *(v58 + 26) = 0;
      *(v58 + 40) = 0;
      v59 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v57];
    }
    else
    {
      v59 = 0;
    }
    *(v59 + 24) = 0;
    *(v59 + 16) = "Set a tutorial convar";
    *v59 = "SetTutorialConvar";
    *(v59 + 8) = "SetTutorialConvar";
    v60 = *(v59 + 26);
    *(v59 + v60 + 27) = 30;
    v61 = v60 + 1;
    v60 += 2;
    *(v59 + v61 + 27) = 30;
    *(v59 + 26) = v60;
    v62 = v60 - 1;
    *(v59 + 25) = 0;
    if ( v62 >= 0 && *(v59 + v62 + 27) == 32 )
    {
      v63 = 1;
      do
      {
        --v62;
        v64 = v63;
        if ( v62 == -1 )
        {
          *(v59 + 25) = v63;
          goto LABEL_80;
        }
        ++v63;
      }
      while ( *(v59 + v62 + 27) == 32 );
      *(v59 + 25) = v64;
    }
LABEL_80:
    *(v59 + 64) = 1;
    *(v59 + 48) = CMemberScriptBinding2<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*,char const*),void,char const*,char const*>::Call;
    *(v59 + 56) = CDOTA_Tutorial::SetTutorialConvar;
    v65 = v2->m_FunctionBindings.m_Size;
    if ( v65 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v66 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v65];
    if ( v66 != 0 )
    {
      *v66 = 0;
      *(v66 + 8) = 0;
      *(v66 + 16) = 0;
      *(v66 + 24) = 29;
      *(v66 + 25) = -1;
      *(v66 + 26) = 0;
      *(v66 + 40) = 0;
      v67 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v65];
    }
    else
    {
      v67 = 0;
    }
    *(v67 + 24) = 0;
    *(v67 + 16) = "Enable the tip to alert players how to find their hero.";
    *v67 = "EnablePlayerOffscreenTip";
    *(v67 + 8) = "EnablePlayerOffscreenTip";
    v68 = *(v67 + 26);
    v69 = v68++;
    *(v67 + v69 + 27) = 6;
    *(v67 + 26) = v68;
    v70 = v68 - 1;
    *(v67 + 25) = 0;
    if ( v70 >= 0 && *(v67 + v70 + 27) == 32 )
    {
      v71 = 1;
      do
      {
        --v70;
        v72 = v71;
        if ( v70 == -1 )
        {
          *(v67 + 25) = v71;
          goto LABEL_90;
        }
        ++v71;
      }
      while ( *(v67 + v70 + 27) == 32 );
      *(v67 + 25) = v72;
    }
LABEL_90:
    *(v67 + 64) = 1;
    *(v67 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(bool),void,bool>::Call;
    *(v67 + 56) = CDOTA_Tutorial::EnablePlayerOffscreenTip;
    v73 = v2->m_FunctionBindings.m_Size;
    if ( v73 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v74 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v73];
    if ( v74 != 0 )
    {
      *v74 = 0;
      *(v74 + 8) = 0;
      *(v74 + 16) = 0;
      *(v74 + 24) = 29;
      *(v74 + 25) = -1;
      *(v74 + 26) = 0;
      *(v74 + 40) = 0;
      v75 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v73];
    }
    else
    {
      v75 = 0;
    }
    *(v75 + 24) = 0;
    *(v75 + 16) = "Alert the player when a creep becomes agro to their hero.";
    *v75 = "EnableCreepAggroViz";
    *(v75 + 8) = "EnableCreepAggroViz";
    v76 = *(v75 + 26);
    v77 = v76++;
    *(v75 + v77 + 27) = 6;
    *(v75 + 26) = v76;
    v78 = v76 - 1;
    *(v75 + 25) = 0;
    if ( v78 >= 0 && *(v75 + v78 + 27) == 32 )
    {
      v79 = 1;
      do
      {
        --v78;
        v80 = v79;
        if ( v78 == -1 )
        {
          *(v75 + 25) = v79;
          goto LABEL_100;
        }
        ++v79;
      }
      while ( *(v75 + v78 + 27) == 32 );
      *(v75 + 25) = v80;
    }
LABEL_100:
    *(v75 + 64) = 1;
    *(v75 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(bool),void,bool>::Call;
    *(v75 + 56) = CDOTA_Tutorial::EnableCreepAggroViz;
    v81 = v2->m_FunctionBindings.m_Size;
    if ( v81 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v82 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v81];
    if ( v82 != 0 )
    {
      *v82 = 0;
      *(v82 + 8) = 0;
      *(v82 + 16) = 0;
      *(v82 + 24) = 29;
      *(v82 + 25) = -1;
      *(v82 + 26) = 0;
      *(v82 + 40) = 0;
      v83 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v81];
    }
    else
    {
      v83 = 0;
    }
    *(v83 + 24) = 0;
    *(v83 + 16) = "Alert the player when a tower becomes agro to their hero.";
    *v83 = "EnableTowerAggroViz";
    *(v83 + 8) = "EnableTowerAggroViz";
    v84 = *(v83 + 26);
    v85 = v84++;
    *(v83 + v85 + 27) = 6;
    *(v83 + 26) = v84;
    v86 = v84 - 1;
    *(v83 + 25) = 0;
    if ( v86 >= 0 && *(v83 + v86 + 27) == 32 )
    {
      v87 = 1;
      do
      {
        --v86;
        v88 = v87;
        if ( v86 == -1 )
        {
          *(v83 + 25) = v87;
          goto LABEL_110;
        }
        ++v87;
      }
      while ( *(v83 + v86 + 27) == 32 );
      *(v83 + 25) = v88;
    }
LABEL_110:
    *(v83 + 64) = 1;
    *(v83 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(bool),void,bool>::Call;
    *(v83 + 56) = CDOTA_Tutorial::EnableTowerAggroViz;
    v89 = v2->m_FunctionBindings.m_Size;
    if ( v89 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v90 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v89];
    if ( v90 != 0 )
    {
      *v90 = 0;
      *(v90 + 8) = 0;
      *(v90 + 16) = 0;
      *(v90 + 24) = 29;
      *(v90 + 25) = -1;
      *(v90 + 26) = 0;
      *(v90 + 40) = 0;
      v91 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v89];
    }
    else
    {
      v91 = 0;
    }
    *(v91 + 24) = 0;
    *(v91 + 16) = "Force the start of the game.";
    *v91 = "ForceGameStart";
    *(v91 + 8) = "ForceGameStart";
    v92 = *(v91 + 26);
    *(v91 + 25) = 0;
    v93 = v92 - 1;
    if ( v93 >= 0 && *(v91 + v93 + 27) == 32 )
    {
      v94 = 1;
      do
      {
        --v93;
        v95 = v94;
        if ( v93 == -1 )
        {
          *(v91 + 25) = v94;
          goto LABEL_120;
        }
        ++v94;
      }
      while ( *(v91 + v93 + 27) == 32 );
      *(v91 + 25) = v95;
    }
LABEL_120:
    *(v91 + 64) = 1;
    *(v91 + 48) = CMemberScriptBinding0<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(void),void>::Call;
    *(v91 + 56) = CDOTA_Tutorial::ForceGameStart;
    v96 = v2->m_FunctionBindings.m_Size;
    if ( v96 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v97 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v96];
    if ( v97 != 0 )
    {
      *v97 = 0;
      *(v97 + 8) = 0;
      *(v97 + 16) = 0;
      *(v97 + 24) = 29;
      *(v97 + 25) = -1;
      *(v97 + 26) = 0;
      *(v97 + 40) = 0;
      v98 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v96];
    }
    else
    {
      v98 = 0;
    }
    *(v98 + 24) = 0;
    *(v98 + 16) = "End the tutorial.";
    *v98 = "FinishTutorial";
    *(v98 + 8) = "FinishTutorial";
    v99 = *(v98 + 26);
    *(v98 + 25) = 0;
    v100 = v99 - 1;
    if ( v100 >= 0 && *(v98 + v100 + 27) == 32 )
    {
      v101 = 1;
      do
      {
        --v100;
        v102 = v101;
        if ( v100 == -1 )
        {
          *(v98 + 25) = v101;
          goto LABEL_130;
        }
        ++v101;
      }
      while ( *(v98 + v100 + 27) == 32 );
      *(v98 + 25) = v102;
    }
LABEL_130:
    *(v98 + 64) = 1;
    *(v98 + 48) = CMemberScriptBinding0<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(void),void>::Call;
    *(v98 + 56) = CDOTA_Tutorial::FinishTutorial;
    v103 = v2->m_FunctionBindings.m_Size;
    if ( v103 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v104 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v103];
    if ( v104 != 0 )
    {
      *v104 = 0;
      *(v104 + 8) = 0;
      *(v104 + 16) = 0;
      *(v104 + 24) = 29;
      *(v104 + 25) = -1;
      *(v104 + 26) = 0;
      *(v104 + 40) = 0;
      v105 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v103];
    }
    else
    {
      v105 = 0;
    }
    *(v105 + 24) = 0;
    *(v105 + 16) = "Set if we should freeze time or not.";
    *v105 = "SetTimeFrozen";
    *(v105 + 8) = "SetTimeFrozen";
    v106 = *(v105 + 26);
    v107 = v106++;
    *(v105 + v107 + 27) = 6;
    *(v105 + 26) = v106;
    v108 = v106 - 1;
    *(v105 + 25) = 0;
    if ( v108 >= 0 && *(v105 + v108 + 27) == 32 )
    {
      v109 = 1;
      do
      {
        --v108;
        v110 = v109;
        if ( v108 == -1 )
        {
          *(v105 + 25) = v109;
          goto LABEL_140;
        }
        ++v109;
      }
      while ( *(v105 + v108 + 27) == 32 );
      *(v105 + 25) = v110;
    }
LABEL_140:
    *(v105 + 64) = 1;
    *(v105 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(bool),void,bool>::Call;
    *(v105 + 56) = CDOTA_Tutorial::SetTimeFrozen;
    v111 = v2->m_FunctionBindings.m_Size;
    if ( v111 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v112 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v111];
    if ( v112 != 0 )
    {
      *v112 = 0;
      *(v112 + 8) = 0;
      *(v112 + 16) = 0;
      *(v112 + 24) = 29;
      *(v112 + 25) = -1;
      *(v112 + 26) = 0;
      *(v112 + 40) = 0;
      v113 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v111];
    }
    else
    {
      v113 = 0;
    }
    *(v113 + 24) = 6;
    *(v113 + 16) = "Is our time frozen?";
    *v113 = "GetTimeFrozen";
    *(v113 + 8) = "GetTimeFrozen";
    v114 = *(v113 + 26);
    *(v113 + 25) = 0;
    v115 = v114 - 1;
    if ( v115 >= 0 && *(v113 + v115 + 27) == 32 )
    {
      v116 = 1;
      do
      {
        --v115;
        v117 = v116;
        if ( v115 == -1 )
        {
          *(v113 + 25) = v116;
          goto LABEL_150;
        }
        ++v116;
      }
      while ( *(v113 + v115 + 27) == 32 );
      *(v113 + 25) = v117;
    }
LABEL_150:
    *(v113 + 64) = 1;
    *(v113 + 48) = CMemberScriptBinding0<CDOTA_Tutorial *,bool (CDOTA_Tutorial::*)(void),bool>::Call;
    *(v113 + 56) = CDOTA_Tutorial::GetTimeFrozen;
    v118 = v2->m_FunctionBindings.m_Size;
    if ( v118 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v119 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v118];
    if ( v119 != 0 )
    {
      *v119 = 0;
      *(v119 + 8) = 0;
      *(v119 + 16) = 0;
      *(v119 + 24) = 29;
      *(v119 + 25) = -1;
      *(v119 + 26) = 0;
      *(v119 + 40) = 0;
      v120 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v118];
    }
    else
    {
      v120 = 0;
    }
    *(v120 + 24) = 6;
    *(v120 + 16) = "Add a computer controlled bot.";
    *v120 = "AddBot";
    *(v120 + 8) = "AddBotWithSettings_Script";
    v121 = *(v120 + 26);
    *(v120 + v121 + 27) = 30;
    *(v120 + (v121 + 1) + 27) = 30;
    *(v120 + (v121 + 2) + 27) = 30;
    v122 = v121 + 3;
    v121 += 4;
    *(v120 + v122 + 27) = 6;
    *(v120 + 26) = v121;
    v123 = v121 - 1;
    *(v120 + 25) = 0;
    if ( v123 >= 0 && *(v120 + v123 + 27) == 32 )
    {
      v124 = 1;
      do
      {
        --v123;
        v125 = v124;
        if ( v123 == -1 )
        {
          *(v120 + 25) = v124;
          goto LABEL_160;
        }
        ++v124;
      }
      while ( *(v120 + v123 + 27) == 32 );
      *(v120 + 25) = v125;
    }
LABEL_160:
    *(v120 + 64) = 1;
    *(v120 + 48) = CMemberScriptBinding4<CDOTA_Tutorial *,bool (CDOTA_Tutorial::*)(char const*,char const*,char const*,bool),bool,char const*,char const*,char const*,bool>::Call;
    *(v120 + 56) = CDOTA_Tutorial::AddBotWithSettings_Script;
    v126 = v2->m_FunctionBindings.m_Size;
    if ( v126 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v127 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v126];
    if ( v127 != 0 )
    {
      *v127 = 0;
      *(v127 + 8) = 0;
      *(v127 + 16) = 0;
      *(v127 + 24) = 29;
      *(v127 + 25) = -1;
      *(v127 + 26) = 0;
      *(v127 + 40) = 0;
      v128 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v126];
    }
    else
    {
      v128 = 0;
    }
    *(v128 + 24) = 0;
    *(v128 + 16) = "Set if we should whitelist shop items.";
    *v128 = "SetWhiteListEnabled";
    *(v128 + 8) = "SetWhiteListEnabled";
    v129 = *(v128 + 26);
    v130 = v129++;
    *(v128 + v130 + 27) = 6;
    *(v128 + 26) = v129;
    v131 = v129 - 1;
    *(v128 + 25) = 0;
    if ( v131 >= 0 && *(v128 + v131 + 27) == 32 )
    {
      v132 = 1;
      do
      {
        --v131;
        v133 = v132;
        if ( v131 == -1 )
        {
          *(v128 + 25) = v132;
          goto LABEL_170;
        }
        ++v132;
      }
      while ( *(v128 + v131 + 27) == 32 );
      *(v128 + 25) = v133;
    }
LABEL_170:
    *(v128 + 64) = 1;
    *(v128 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(bool),void,bool>::Call;
    *(v128 + 56) = CDOTA_Tutorial::SetWhiteListEnabled;
    v134 = v2->m_FunctionBindings.m_Size;
    if ( v134 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v135 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v134];
    if ( v135 != 0 )
    {
      *v135 = 0;
      *(v135 + 8) = 0;
      *(v135 + 16) = 0;
      *(v135 + 24) = 29;
      *(v135 + 25) = -1;
      *(v135 + 26) = 0;
      *(v135 + 40) = 0;
      v136 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v134];
    }
    else
    {
      v136 = 0;
    }
    *(v136 + 24) = 0;
    *(v136 + 16) = "Add an item to the shop whitelist.";
    *v136 = "AddShopWhitelistItem";
    *(v136 + 8) = "AddShopWhitelistItem";
    v137 = *(v136 + 26);
    v138 = v137++;
    *(v136 + v138 + 27) = 30;
    *(v136 + 26) = v137;
    v139 = v137 - 1;
    *(v136 + 25) = 0;
    if ( v139 >= 0 && *(v136 + v139 + 27) == 32 )
    {
      v140 = 1;
      do
      {
        --v139;
        v141 = v140;
        if ( v139 == -1 )
        {
          *(v136 + 25) = v140;
          goto LABEL_180;
        }
        ++v140;
      }
      while ( *(v136 + v139 + 27) == 32 );
      *(v136 + 25) = v141;
    }
LABEL_180:
    *(v136 + 64) = 1;
    *(v136 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call;
    *(v136 + 56) = CDOTA_Tutorial::AddShopWhitelistItem;
    v142 = v2->m_FunctionBindings.m_Size;
    if ( v142 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v143 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v142];
    if ( v143 != 0 )
    {
      *v143 = 0;
      *(v143 + 8) = 0;
      *(v143 + 16) = 0;
      *(v143 + 24) = 29;
      *(v143 + 25) = -1;
      *(v143 + 26) = 0;
      *(v143 + 40) = 0;
      v144 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v142];
    }
    else
    {
      v144 = 0;
    }
    *(v144 + 24) = 0;
    *(v144 + 16) = "Remove an item from the shop whitelist.";
    *v144 = "RemoveShopWhitelistItem";
    *(v144 + 8) = "RemoveShopWhitelistItem";
    v145 = *(v144 + 26);
    v146 = v145++;
    *(v144 + v146 + 27) = 30;
    *(v144 + 26) = v145;
    v147 = v145 - 1;
    *(v144 + 25) = 0;
    if ( v147 >= 0 && *(v144 + v147 + 27) == 32 )
    {
      v148 = 1;
      do
      {
        --v147;
        v149 = v148;
        if ( v147 == -1 )
        {
          *(v144 + 25) = v148;
          goto LABEL_190;
        }
        ++v148;
      }
      while ( *(v144 + v147 + 27) == 32 );
      *(v144 + 25) = v149;
    }
LABEL_190:
    *(v144 + 64) = 1;
    *(v144 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call;
    *(v144 + 56) = CDOTA_Tutorial::RemoveShopWhitelistItem;
    v150 = v2->m_FunctionBindings.m_Size;
    if ( v150 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v151 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v150];
    if ( v151 != 0 )
    {
      *v151 = 0;
      *(v151 + 8) = 0;
      *(v151 + 16) = 0;
      *(v151 + 24) = 29;
      *(v151 + 25) = -1;
      *(v151 + 26) = 0;
      *(v151 + 40) = 0;
      v152 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v150];
    }
    else
    {
      v152 = 0;
    }
    *(v152 + 24) = 6;
    *(v152 + 16) = "Is this item currently in the white list.";
    *v152 = "IsItemInWhiteList";
    *(v152 + 8) = "IsItemInWhiteList";
    v153 = *(v152 + 26);
    v154 = v153++;
    *(v152 + v154 + 27) = 30;
    *(v152 + 26) = v153;
    v155 = v153 - 1;
    *(v152 + 25) = 0;
    if ( v155 >= 0 && *(v152 + v155 + 27) == 32 )
    {
      v156 = 1;
      do
      {
        --v155;
        v157 = v156;
        if ( v155 == -1 )
        {
          *(v152 + 25) = v156;
          goto LABEL_200;
        }
        ++v156;
      }
      while ( *(v152 + v155 + 27) == 32 );
      *(v152 + 25) = v157;
    }
LABEL_200:
    *(v152 + 64) = 1;
    *(v152 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,bool (CDOTA_Tutorial::*)(char const*),bool,char const*>::Call;
    *(v152 + 56) = CDOTA_Tutorial::IsItemInWhiteList;
    v158 = v2->m_FunctionBindings.m_Size;
    if ( v158 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v159 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v158];
    if ( v159 != 0 )
    {
      *v159 = 0;
      *(v159 + 8) = 0;
      *(v159 + 16) = 0;
      *(v159 + 24) = 29;
      *(v159 + 25) = -1;
      *(v159 + 26) = 0;
      *(v159 + 40) = 0;
      v160 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v158];
    }
    else
    {
      v160 = 0;
    }
    *(v160 + 24) = 0;
    *(v160 + 16) = "Set the UI to use a reduced version to focus attention to specific elements.";
    *v160 = "SetTutorialUI";
    *(v160 + 8) = "SetTutorialUI";
    v161 = *(v160 + 26);
    v162 = v161++;
    *(v160 + v162 + 27) = 5;
    *(v160 + 26) = v161;
    v163 = v161 - 1;
    *(v160 + 25) = 0;
    if ( v163 >= 0 && *(v160 + v163 + 27) == 32 )
    {
      v164 = 1;
      do
      {
        --v163;
        v165 = v164;
        if ( v163 == -1 )
        {
          *(v160 + 25) = v164;
          goto LABEL_210;
        }
        ++v164;
      }
      while ( *(v160 + v163 + 27) == 32 );
      *(v160 + 25) = v165;
    }
LABEL_210:
    *(v160 + 64) = 1;
    *(v160 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(int),void,int>::Call;
    *(v160 + 56) = CDOTA_Tutorial::SetTutorialUI;
    v166 = v2->m_FunctionBindings.m_Size;
    if ( v166 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v167 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v166];
    if ( v167 != 0 )
    {
      *v167 = 0;
      *(v167 + 8) = 0;
      *(v167 + 16) = 0;
      *(v167 + 24) = 29;
      *(v167 + 25) = -1;
      *(v167 + 26) = 0;
      *(v167 + 40) = 0;
      v168 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v166];
    }
    else
    {
      v168 = 0;
    }
    *(v168 + 24) = 0;
    *(v168 + 16) = "Set the shop open or closed.";
    *v168 = "SetShopOpen";
    *(v168 + 8) = "SetShopOpen";
    v169 = *(v168 + 26);
    v170 = v169++;
    *(v168 + v170 + 27) = 6;
    *(v168 + 26) = v169;
    v171 = v169 - 1;
    *(v168 + 25) = 0;
    if ( v171 >= 0 && *(v168 + v171 + 27) == 32 )
    {
      v172 = 1;
      do
      {
        --v171;
        v173 = v172;
        if ( v171 == -1 )
        {
          *(v168 + 25) = v172;
          goto LABEL_220;
        }
        ++v172;
      }
      while ( *(v168 + v171 + 27) == 32 );
      *(v168 + 25) = v173;
    }
LABEL_220:
    *(v168 + 64) = 1;
    *(v168 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(bool),void,bool>::Call;
    *(v168 + 56) = CDOTA_Tutorial::SetShopOpen;
    v174 = v2->m_FunctionBindings.m_Size;
    if ( v174 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v175 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v174];
    if ( v175 != 0 )
    {
      *v175 = 0;
      *(v175 + 8) = 0;
      *(v175 + 16) = 0;
      *(v175 + 24) = 29;
      *(v175 + 25) = -1;
      *(v175 + 26) = 0;
      *(v175 + 40) = 0;
      v176 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v174];
    }
    else
    {
      v176 = 0;
    }
    *(v176 + 24) = 0;
    *(v176 + 16) = "Set the current item guide.";
    *v176 = "SetItemGuide";
    *(v176 + 8) = "SetItemGuide";
    v177 = *(v176 + 26);
    v178 = v177++;
    *(v176 + v178 + 27) = 30;
    *(v176 + 26) = v177;
    v179 = v177 - 1;
    *(v176 + 25) = 0;
    if ( v179 >= 0 && *(v176 + v179 + 27) == 32 )
    {
      v180 = 1;
      do
      {
        --v179;
        v181 = v180;
        if ( v179 == -1 )
        {
          *(v176 + 25) = v180;
          goto LABEL_230;
        }
        ++v180;
      }
      while ( *(v176 + v179 + 27) == 32 );
      *(v176 + 25) = v181;
    }
LABEL_230:
    *(v176 + 64) = 1;
    *(v176 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call;
    *(v176 + 56) = CDOTA_Tutorial::SetItemGuide;
    v182 = v2->m_FunctionBindings.m_Size;
    if ( v182 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v183 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v182];
    if ( v183 != 0 )
    {
      *v183 = 0;
      *(v183 + 8) = 0;
      *(v183 + 16) = 0;
      *(v183 + 24) = 29;
      *(v183 + 25) = -1;
      *(v183 + 26) = 0;
      *(v183 + 40) = 0;
      v184 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v182];
    }
    else
    {
      v184 = 0;
    }
    *(v184 + 24) = 0;
    *(v184 + 16) = "Set players quick buy item.";
    *v184 = "SetQuickBuy";
    *(v184 + 8) = "SetQuickBuy";
    v185 = *(v184 + 26);
    v186 = v185++;
    *(v184 + v186 + 27) = 30;
    *(v184 + 26) = v185;
    v187 = v185 - 1;
    *(v184 + 25) = 0;
    if ( v187 >= 0 && *(v184 + v187 + 27) == 32 )
    {
      v188 = 1;
      do
      {
        --v187;
        v189 = v188;
        if ( v187 == -1 )
        {
          *(v184 + 25) = v188;
          goto LABEL_240;
        }
        ++v188;
      }
      while ( *(v184 + v187 + 27) == 32 );
      *(v184 + 25) = v189;
    }
LABEL_240:
    *(v184 + 64) = 1;
    *(v184 + 48) = CMemberScriptBinding1<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(char const*),void,char const*>::Call;
    *(v184 + 56) = CDOTA_Tutorial::SetQuickBuy;
    v190 = v2->m_FunctionBindings.m_Size;
    if ( v190 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v191 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v190];
    if ( v191 != 0 )
    {
      *v191 = 0;
      *(v191 + 8) = 0;
      *(v191 + 16) = 0;
      *(v191 + 24) = 29;
      *(v191 + 25) = -1;
      *(v191 + 26) = 0;
      *(v191 + 40) = 0;
      v192 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v190];
    }
    else
    {
      v192 = 0;
    }
    *(v192 + 24) = 0;
    *(v192 + 16) = "Set gold amount for the tutorial player. (int) GoldAmount, (bool) true=Set, false=Modify";
    *v192 = "SetOrModifyPlayerGold";
    *(v192 + 8) = "SetPlayerGold";
    v193 = *(v192 + 26);
    *(v192 + v193 + 27) = 5;
    v194 = v193 + 1;
    v193 += 2;
    *(v192 + v194 + 27) = 6;
    *(v192 + 26) = v193;
    v195 = v193 - 1;
    *(v192 + 25) = 0;
    if ( v195 >= 0 && *(v192 + v195 + 27) == 32 )
    {
      v196 = 1;
      do
      {
        --v195;
        v197 = v196;
        if ( v195 == -1 )
        {
          *(v192 + 25) = v196;
          goto LABEL_250;
        }
        ++v196;
      }
      while ( *(v192 + v195 + 27) == 32 );
      *(v192 + 25) = v197;
    }
LABEL_250:
    *(v192 + 64) = 1;
    *(v192 + 48) = CMemberScriptBinding2<CDOTA_Tutorial *,void (CDOTA_Tutorial::*)(int,bool),void,int,bool>::Call;
    *(v192 + 56) = CDOTA_Tutorial::SetPlayerGold;
    return v2;
  }
  return result;
}


// CDotaTutorialNetworker::Spawn  (line 117, @0x00000000026ca790, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetForModify, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, V_strncpy<int>, operator CEntityInstance*, operator!=, operator=, operator=<DOTATutorialUI_State_t>, operator=<DOTATutorial_State_t>, operator=<int>
// calls: CBaseEntity::Spawn, _V_strncpy
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaTutorialNetworker::Spawn(CDotaTutorialNetworker *const this, const CEntityKeyValues *pKeyValues)
{
  int v3; // ebx
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // r15
  unsigned __int8 *v6; // r13
  signed __int64 v7; // r14
  unsigned __int8 *v8; // r10
  _QWORD *v9; // rdi
  int v10; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  int m_Value; // ebx
  int v14; // r11d
  int v15; // r10d
  _QWORD *v16; // rdi
  unsigned __int8 *v17; // [rsp+10h] [rbp-40h]
  CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4> >::CAllocator *p_m_Memory; // [rsp+18h] [rbp-38h]

  CBaseEntity::Spawn(this, pKeyValues);
  if ( this->m_nTutorialState.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_nTaskSteps.m_Value;
    this->m_nTutorialState.m_Value = 0;
    if ( m_Value == 0 )
    {
LABEL_3:
      if ( this->m_nTaskSecondsRemianing.m_Value == 0 )
        goto LABEL_4;
LABEL_22:
      (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v15 = this->m_nTaskProgress.m_Value;
      this->m_nTaskSecondsRemianing.m_Value = 0;
      if ( v15 == 0 )
        goto LABEL_5;
      goto LABEL_23;
    }
  }
  else if ( this->m_nTaskSteps.m_Value == 0 )
  {
    goto LABEL_3;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v14 = this->m_nTaskSecondsRemianing.m_Value;
  this->m_nTaskSteps.m_Value = 0;
  if ( v14 != 0 )
    goto LABEL_22;
LABEL_4:
  if ( this->m_nTaskProgress.m_Value != 0 )
  {
LABEL_23:
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nTaskProgress.m_Value = 0;
  }
LABEL_5:
  if ( this->m_nUIState.m_Value != 6 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nUIState.m_Value = 6;
  }
  if ( this->m_nShopState.m_Value != 6 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nShopState.m_Value = 6;
  }
  v3 = 0;
  p_m_Memory = &this->m_SpeechBubbles.m_Vector.m_Memory;
  v4 = &this->m_SpeechBubbles.m_Vector.m_Memory.m_Memory.m_Data[16];
  v17 = &this->m_SpeechBubbles.m_Vector.m_Memory.m_Memory.m_Data[276];
  v5 = &this->m_SpeechBubbles.m_Vector.m_Memory.m_Memory.m_Data[8];
  do
  {
    v6 = v4 - 16;
    v7 = v4 - p_m_Memory;
    v8 = v4 + 2;
    v9 = *&v5[v4 - p_m_Memory - 16];
    if ( v9 != 0 && (*(v9[1] + 49LL) & 4) == 0 && *v4 != 0xFFFF )
    {
      (*(*v9 + 176LL))(v9, 18, 0xFFFFFFFFLL, *v4);
      v8 = v4 + 2;
    }
    _V_strncpy(v8, "", 256);
    v10 = *&v17[v7 - 16];
    if ( (v10 + 2) > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(v6 + 138) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[*(v6 + 138) & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
        {
          v16 = *&v5[v7 - 16];
          if ( v16 != 0 && (*(v16[1] + 49LL) & 4) == 0 && *v4 != 0xFFFF )
            (*(*v16 + 176LL))(v16, 276, 0xFFFFFFFFLL, *v4);
          *&v17[v7 - 16] = -1;
        }
      }
    }
    ++v3;
    v4 += 296;
  }
  while ( v3 != 4 );
}


// CDotaTutorialNetworker::UpdateOnRemove  (line 137, @0x00000000026bd370, libserver.so)
// calls: CBaseEntity::UpdateOnRemove
void __fastcall CDotaTutorialNetworker::UpdateOnRemove(CDotaTutorialNetworker *const this)
{
  CBaseEntity::UpdateOnRemove(this);
}


// CDotaTutorialNetworker::SetItemGuide  (line 142, @0x00000000026f7f40, libserver.so)  // inlines: GetForModify, NetworkStateChanged, V_strncpy<int>
// calls: _V_strncpy
// callers: CDOTA_Tutorial::SetItemGuide
void __fastcall CDotaTutorialNetworker::SetItemGuide(CDotaTutorialNetworker *const this, const char *pszGuideName)
{
  (*(this->_vptr_IHandleEntity + 22))(this, 2060, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_GuideStr, pszGuideName, 256);
  (*(this->_vptr_IHandleEntity + 21))(this);
}


// CDotaTutorialNetworker::SetQuickBuy  (line 148, @0x00000000026f7f90, libserver.so)  // inlines: GetForModify, NetworkStateChanged, V_strncpy<int>
// calls: _V_strncpy
// callers: CDOTA_Tutorial::SetQuickBuy
void __fastcall CDotaTutorialNetworker::SetQuickBuy(CDotaTutorialNetworker *const this, const char *pszItemName)
{
  (*(this->_vptr_IHandleEntity + 22))(this, 2316, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_QuickBuyStr, pszItemName, 256);
  (*(this->_vptr_IHandleEntity + 21))(this);
}


// CDOTA_Tutorial::Init  (line 156, @0x00000000026ca2c0, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=<float>
bool __fastcall CDOTA_Tutorial::Init(CDOTA_Tutorial *const this)
{
  this->m_pLessonKeys = 0;
  this->m_pNextLessonKey = 0;
  if ( this->m_Countdown.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_Countdown._vptr_CountdownTimer + 2))(&this->m_Countdown, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Countdown.m_timestamp.m_Value = -1.0;
  }
  this->m_bCleanupTutorialPostLevel = 0;
  this->m_nConvarTrackerID = -1;
  return 1;
}


// CDOTA_Tutorial::Shutdown  (line 169, @0x00000000026bd470, libserver.so)
// calls: ShutdownGlobalConvarTracker
void __fastcall CDOTA_Tutorial::Shutdown(CDOTA_Tutorial *const this)
{
  ShutdownGlobalConvarTracker(this->m_nConvarTrackerID);
}


// CDOTA_Tutorial::SpawnGroupPrecache  (line 176, @0x00000000026bd590, libserver.so)  // inlines: GetBool, GetInt
// calls: PrecacheParticleFolderAndSystems
// strings: "particles/newplayer_fx"
void __fastcall CDOTA_Tutorial::SpawnGroupPrecache(
        CDOTA_Tutorial *const this,
        const EventSpawnGroupPrecache_t *const msg)
{
  if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0 )
    PrecacheParticleFolderAndSystems("particles/newplayer_fx", msg->m_pManifest);
}


// CDOTA_Tutorial::PreSpawnGroupUnload  (line 187, @0x00000000026c9880, libserver.so)  // inlines: PostTutorialCleanup, Set, operator=
// calls: ConVar::SetValue, RevertGlobalConvarTrackerConvars
void __fastcall CDOTA_Tutorial::PreSpawnGroupUnload(
        CDOTA_Tutorial *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  this->m_hData.m_Index = -1;
  if ( this->m_bCleanupTutorialPostLevel )
  {
    ConVar::SetValue(&dota_tutorial_game, 0);
    RevertGlobalConvarTrackerConvars(this->m_nConvarTrackerID);
    this->m_bCleanupTutorialPostLevel = 0;
  }
}


// CDOTA_Tutorial::SetTutorialConvar  (line 200, @0x00000000026bd5d0, libserver.so)  // inlines: GetBool, GetInt
// calls: SetGlobalConvarTrackerActive
void __fastcall CDOTA_Tutorial::SetTutorialConvar(
        CDOTA_Tutorial *const this,
        const char *pszConvarName,
        const char *pszConvarValue)
{
  __int64 v6; // rax

  if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0 )
  {
    SetGlobalConvarTrackerActive(this->m_nConvarTrackerID, 1);
    v6 = (*(*g_pCVar + 144LL))(g_pCVar, pszConvarName);
    if ( v6 != 0 )
      (*(*v6 + 128LL))(v6, pszConvarValue);
    SetGlobalConvarTrackerActive(this->m_nConvarTrackerID, 0);
  }
}


// CDOTA_Tutorial::EnablePlayerOffscreenTip  (line 218, @0x00000000026f9370, libserver.so)  // inlines: AddPlayerAssistFlags, NetworkStateChanged, RemovePlayerAssistFlags, Set, operator&=<int>, operator|=<int>
// calls: CDOTA_Tutorial::GetHumanPlayer
void __fastcall CDOTA_Tutorial::EnablePlayerOffscreenTip(CDOTA_Tutorial *const this, bool bEnabled)
{
  CDOTAPlayer *HumanPlayer; // rax
  CDOTAPlayer *v4; // rbx
  int m_Value; // eax
  unsigned int v6; // r12d

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  v4 = HumanPlayer;
  if ( HumanPlayer != 0 )
  {
    m_Value = HumanPlayer->m_nPlayerAssistFlags.m_Value;
    if ( bEnabled )
    {
      v6 = m_Value | 1;
      if ( m_Value == (m_Value | 1) )
        return;
    }
    else
    {
      v6 = m_Value & 0xFFFFFFFE;
      if ( m_Value == (m_Value & 0xFFFFFFFE) )
        return;
    }
    (*(v4->_vptr_IHandleEntity + 22))(v4, 4732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4->m_nPlayerAssistFlags.m_Value = v6;
  }
}


// CDOTA_Tutorial::EnableCreepAggroViz  (line 234, @0x00000000026f93e0, libserver.so)  // inlines: AddPlayerAssistFlags, NetworkStateChanged, RemovePlayerAssistFlags, Set, operator&=<int>, operator|=<int>
// calls: CDOTA_Tutorial::GetHumanPlayer
void __fastcall CDOTA_Tutorial::EnableCreepAggroViz(CDOTA_Tutorial *const this, bool bEnabled)
{
  CDOTAPlayer *HumanPlayer; // rax
  CDOTAPlayer *v4; // rbx
  int m_Value; // eax
  unsigned int v6; // r12d

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  v4 = HumanPlayer;
  if ( HumanPlayer != 0 )
  {
    m_Value = HumanPlayer->m_nPlayerAssistFlags.m_Value;
    if ( bEnabled )
    {
      v6 = m_Value | 4;
      if ( m_Value == (m_Value | 4) )
        return;
    }
    else
    {
      v6 = m_Value & 0xFFFFFFFB;
      if ( m_Value == (m_Value & 0xFFFFFFFB) )
        return;
    }
    (*(v4->_vptr_IHandleEntity + 22))(v4, 4732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4->m_nPlayerAssistFlags.m_Value = v6;
  }
}


// CDOTA_Tutorial::EnableTowerAggroViz  (line 250, @0x00000000026f9450, libserver.so)  // inlines: AddPlayerAssistFlags, NetworkStateChanged, RemovePlayerAssistFlags, Set, operator&=<int>, operator|=<int>
// calls: CDOTA_Tutorial::GetHumanPlayer
void __fastcall CDOTA_Tutorial::EnableTowerAggroViz(CDOTA_Tutorial *const this, bool bEnabled)
{
  CDOTAPlayer *HumanPlayer; // rax
  CDOTAPlayer *v4; // rbx
  int m_Value; // eax
  unsigned int v6; // r12d

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  v4 = HumanPlayer;
  if ( HumanPlayer != 0 )
  {
    m_Value = HumanPlayer->m_nPlayerAssistFlags.m_Value;
    if ( bEnabled )
    {
      v6 = m_Value | 8;
      if ( m_Value == (m_Value | 8) )
        return;
    }
    else
    {
      v6 = m_Value & 0xFFFFFFF7;
      if ( m_Value == (m_Value & 0xFFFFFFF7) )
        return;
    }
    (*(v4->_vptr_IHandleEntity + 22))(v4, 4732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4->m_nPlayerAssistFlags.m_Value = v6;
  }
}


// CDOTA_Tutorial::SetWhiteListEnabled  (line 266, @0x00000000026ca340, libserver.so)  // inlines: DOTAGameRules, Get, NetworkStateChanged, Set, SetWhiteListEnabled, operator CEntityInstance*, operator=<bool>
void __fastcall CDOTA_Tutorial::SetWhiteListEnabled(CDOTA_Tutorial *const this, bool bEnabled)
{
  CGameRules *v2; // rbx
  int (**vptr_CGameRules)(...); // rdi

  v2 = g_pGameRules;
  if ( g_pGameRules != 0 && bEnabled != g_pGameRules[8].m_szQuestName[116] )
  {
    vptr_CGameRules = g_pGameRules[5]._vptr_CGameRules;
    if ( vptr_CGameRules != 0 && (*(vptr_CGameRules[1] + 49) & 4) == 0 )
      (*(*vptr_CGameRules + 22))(vptr_CGameRules, 1276, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
    v2[8].m_szQuestName[116] = bEnabled;
  }
}


// CDOTA_Tutorial::AddShopWhitelistItem  (line 274, @0x00000000026bd480, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::AddItemToWhiteList
void __fastcall CDOTA_Tutorial::AddShopWhitelistItem(CDOTA_Tutorial *const this, const char *pszItemName)
{
  if ( g_pGameRules != 0 )
    CDOTAGamerules::AddItemToWhiteList(g_pGameRules, pszItemName);
}


// CDOTA_Tutorial::RemoveShopWhitelistItem  (line 282, @0x00000000026bd4b0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::RemoveItemFromWhiteList
void __fastcall CDOTA_Tutorial::RemoveShopWhitelistItem(CDOTA_Tutorial *const this, const char *pszItemName)
{
  if ( g_pGameRules != 0 )
    CDOTAGamerules::RemoveItemFromWhiteList(g_pGameRules, pszItemName);
}


// CDOTA_Tutorial::IsItemInWhiteList  (line 290, @0x00000000026bd4e0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::IsItemInWhiteList
bool __fastcall CDOTA_Tutorial::IsItemInWhiteList(CDOTA_Tutorial *const this, const char *pszItemName)
{
  return g_pGameRules != 0 && CDOTAGamerules::IsItemInWhiteList(g_pGameRules, pszItemName);
}


// CDOTA_Tutorial::SetShopOpen  (line 300, @0x00000000026caba0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetShopState, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetShopOpen(CDOTA_Tutorial *const this, bool bOpen)
{
  uint32 m_Index; // eax
  int v3; // ebx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12

  m_Index = this->m_hData.m_Index;
  v3 = !bOpen - 1 + 8;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hData.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && v3 != HIDWORD(m_pInstance[16].m_iszPrivateVScripts.u.m_pAsString) )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(v5->m_pInstance, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          HIDWORD(m_pInstance[16].m_iszPrivateVScripts.u.m_pAsString) = v3;
        }
      }
    }
  }
}


// CDOTA_Tutorial::GameInit  (line 307, @0x0000000002710510, libserver.so)  // inlines: CVariantBase, Free, Invalidate, NetworkStateChanged, Purge, RegisterInstance<CDOTA_Tutorial>, RemoveAll, Set, operator=, operator=<float>, ~CVariantBase
// calls: CUtlVectorBase<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >::RemoveAll, CUtlMemory<ReactiveTipDescription_t, int>::Purge, CUtlVectorBase<NPCSpeechData_t, CUtlMemory<NPCSpeechData_t, int> >::RemoveAll, CUtlMemory<NPCSpeechData_t, int>::Purge, CUtlMemory<char const*, int>::Purge, GetScriptDesc<CDOTA_Tutorial>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Tutorial::GameInit(CDOTA_Tutorial *const this, const EventGameInit_t *const msg)
{
  CUtlVector<ReactiveTipDescription_t,CUtlMemory<ReactiveTipDescription_t,int> > *p_m_ReactiveTips; // rdi
  bool v4; // zf
  IScriptVM *v5; // r12
  __int64 (__fastcall *v6)(IScriptVM *, ScriptClassDesc_t *, CDOTA_Tutorial *const); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  void (__fastcall *v10)(IScriptVM *, _QWORD, char *, __int64 *); // r8
  __int64 v11; // [rsp+0h] [rbp-30h] BYREF
  __int16 v12; // [rsp+8h] [rbp-28h]
  __int16 v13; // [rsp+Ah] [rbp-26h]

  p_m_ReactiveTips = &this->m_ReactiveTips;
  p_m_ReactiveTips[4].m_Memory.m_nAllocationCount = 0;
  LODWORD(p_m_ReactiveTips[6].m_Memory.m_pMemory) = -1;
  LOBYTE(p_m_ReactiveTips[4].m_Memory.m_nGrowSize) = 0;
  p_m_ReactiveTips[4].m_Memory.m_pMemory = 0;
  BYTE1(p_m_ReactiveTips[4].m_Memory.m_nGrowSize) = 1;
  LOBYTE(p_m_ReactiveTips[31].m_Memory.m_nAllocationCount) = 1;
  CUtlVectorBase<ReactiveTipDescription_t,CUtlMemory<ReactiveTipDescription_t,int>>::RemoveAll(p_m_ReactiveTips);
  if ( (this->m_ReactiveTips.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<ReactiveTipDescription_t,int>::Purge(&this->m_ReactiveTips.m_Memory);
  CUtlVectorBase<NPCSpeechData_t,CUtlMemory<NPCSpeechData_t,int>>::RemoveAll(&this->m_DelayedSpeech);
  if ( (this->m_DelayedSpeech.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<NPCSpeechData_t,int>::Purge(&this->m_DelayedSpeech.m_Memory);
  v4 = (this->m_TeleportTargetList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_TeleportTargetList.m_Size = 0;
  if ( v4 )
    CUtlMemory<char const*,int>::Purge(&this->m_TeleportTargetList.m_Memory);
  this->m_bTutorialUseFullHeroPool = 0;
  if ( this->m_TipDelayTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_TipDelayTimer._vptr_CountdownTimer + 2))(&this->m_TipDelayTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_TipDelayTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_nLastHitChallengeLane = DOTA_LANE::DOTA_LANE_NONE;
  v5 = g_pScriptVM;
  v6 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CDOTA_Tutorial>(this);
  v8 = v6(v5, Script, this);
  v9 = *v5;
  v13 = 0;
  v11 = v8;
  v10 = *(v9 + 240);
  v12 = 31;
  v10(v5, 0, "Tutorial", &v11);
  if ( (v13 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11);
}


// CDOTA_Tutorial::GameShutdown  (line 326, @0x00000000026bd0a0, libserver.so)
void __fastcall CDOTA_Tutorial::GameShutdown(CDOTA_Tutorial *const this, const EventGameShutdown_t *const msg)
{
  ;
}


// CDOTA_Tutorial::PostTutorialCleanup  (line 331, @0x00000000026f7fe0, libserver.so)
// calls: RevertGlobalConvarTrackerConvars
void __fastcall CDOTA_Tutorial::PostTutorialCleanup(CDOTA_Tutorial *const this)
{
  RevertGlobalConvarTrackerConvars(this->m_nConvarTrackerID);
  this->m_bCleanupTutorialPostLevel = 0;
}


// CDOTA_Tutorial::StartTutorialMode  (line 340, @0x00000000026f8270, libserver.so)
// calls: ConVar::SetValue, CDOTA_Tutorial::InitializeTutorial
void __fastcall CDOTA_Tutorial::StartTutorialMode(CDOTA_Tutorial *const this)
{
  ConVar::SetValue(&dota_tutorial_game, 1);
  CDOTA_Tutorial::InitializeTutorial(this);
}


// CDOTA_Tutorial::InitializeTutorial  (line 349, @0x00000000026f8010, libserver.so)  // inlines: Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetTutorialState, StopListeningForAllEvents, operator CEntityInstance*, operator!, operator=
// calls: CBaseEntity::Create, Warning, InstallGlobalConvarTracker, SetGlobalConvarTrackerActive
// callers: CDOTAGamerules::State_Think_INIT, CDOTA_Tutorial::StartTutorialMode
// strings: "tutorial_networker", "Tutorial failed to create tutorial_networker.\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::InitializeTutorial(CDOTA_Tutorial *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseEntity *v5; // rax
  CConcreteEntityList *v6; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  __int64 v12; // rcx
  CEntityIdentity *v13; // rdx
  int v14; // eax
  CEntityInstance *m_pInstance; // rbx
  CEntityInstance *v16; // rbx

  if ( this->m_nConvarTrackerID == -1 )
  {
    v14 = InstallGlobalConvarTracker();
    this->m_nConvarTrackerID = v14;
    SetGlobalConvarTrackerActive(v14, 0);
  }
  this->m_szFinishText[0] = 0;
  if ( dota_tutorial_game.m_pParent->m_Value.m_nValue == 0 )
  {
    if ( this->m_bRegisteredForEvents )
    {
      if ( gameeventmanager != 0 )
        (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
      this->m_bRegisteredForEvents = 0;
    }
    m_Index = this->m_hData.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hData.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0 && LODWORD(m_pInstance[16].m_pEntity) != 0 )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 22))(v4->m_pInstance, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            LODWORD(m_pInstance[16].m_pEntity) = 0;
          }
        }
      }
    }
    return;
  }
  v5 = CBaseEntity::Create("tutorial_networker", &vec3_origin, &vec3_angle, 0);
  if ( v5 == 0 || (m_pEntity = v5->m_pEntity) == 0 )
  {
    this->m_hData.m_Index = -1;
LABEL_18:
    Warning("Tutorial failed to create tutorial_networker.\n", v6);
    return;
  }
  v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v9 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v6 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hData.m_Index) = v9 | this->m_hData.m_Index & 0x8000;
  v10 = (v8 << 15) | this->m_hData.m_Index & 0x7FFF;
  this->m_hData.m_Index = v10;
  if ( v10 + 2 <= 1 )
    goto LABEL_18;
  v11 = v6->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
  if ( v11 == 0 )
    goto LABEL_18;
  v12 = this->m_hData.m_Index & 0x1FF;
  v6 = (8 * v12);
  v13 = &v11[v12];
  if ( v13 == 0 )
    goto LABEL_18;
  if ( v13->m_EHandle.m_Index != v10 )
    goto LABEL_18;
  v16 = v13->m_pInstance;
  if ( v13->m_pInstance == 0 )
    goto LABEL_18;
  if ( LODWORD(v16[16].m_pEntity) != 1 )
  {
    (*(v16->_vptr_IHandleEntity + 22))(v13->m_pInstance, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LODWORD(v16[16].m_pEntity) = 1;
  }
}


// CDOTA_Tutorial::LoadLessonKeys  (line 422, @0x00000000026f8330, libserver.so)  // inlines: GetBool, GetInt, ListenForGameEvent, StopListeningForAllEvents
// calls: DOTAGameManager, CDOTAGameManager::LoadTutorial, CDOTA_Tutorial::FindLessonKey, Msg
// strings: "dota_player_gained_level", "Loading lesson %s\n"
void __fastcall CDOTA_Tutorial::LoadLessonKeys(CDOTA_Tutorial *const this, const char *pszLessonName)
{
  CGameEventListener *v2; // r14
  CDOTAGameManager *v5; // rax

  v2 = &this->CGameEventListener;
  if ( this->m_bRegisteredForEvents )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, v2);
    this->m_bRegisteredForEvents = 0;
  }
  if ( dota_tutorial_debug.m_pParent->m_Value.m_nValue != 0 )
    Msg("Loading lesson %s\n", pszLessonName);
  v5 = DOTAGameManager();
  if ( CDOTAGameManager::LoadTutorial(v5, pszLessonName) )
    CDOTA_Tutorial::FindLessonKey(this, pszLessonName);
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, v2, "dota_player_gained_level", 1);
}


// CDOTA_Tutorial::FindLessonKey  (line 440, @0x00000000026f82a0, libserver.so)  // inlines: GetBool, GetInt
// calls: DOTAGameManager, CDOTAGameManager::GetTutorialLessonDataByName, Msg, Warning
// callers: CDOTA_Tutorial::LoadLessonKeys, CDOTA_Tutorial::FindNextLesson, CDOTA_Tutorial::SetLessonTo
// strings: "Starting lesson %s\n", "Failed to load tutorial lesson: '%s'\n"
void __fastcall CDOTA_Tutorial::FindLessonKey(CDOTA_Tutorial *const this, const char *pszLessonName)
{
  CDOTAGameManager *v4; // rax
  KeyValues *TutorialLessonDataByName; // rax

  if ( dota_tutorial_debug.m_pParent->m_Value.m_nValue != 0 )
    Msg("Starting lesson %s\n", pszLessonName);
  this->m_pLessonKeys = 0;
  this->m_pNextLessonKey = 0;
  v4 = DOTAGameManager();
  TutorialLessonDataByName = CDOTAGameManager::GetTutorialLessonDataByName(v4, pszLessonName);
  this->m_pLessonKeys = TutorialLessonDataByName;
  if ( TutorialLessonDataByName == 0 )
    Warning("Failed to load tutorial lesson: '%s'\n", pszLessonName);
}


// CDOTA_Tutorial::ParseLessonKeys  (line 461, @0x0000000002715420, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CDOTAUserMsg_SendGenericToolTip_t, CDOTAUserMsg_TutorialFade_t, CDOTAUserMsg_TutorialFinish_t, CDOTAUserMsg_TutorialRequestExp_t, CNetMessagePB, CUserMessagePB, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, ClosurePtr, CopyArray, CopyConstruct<ReactiveTipDescription_t>, CopyConstruct<char const*>, CountdownTimer, CreateEvent, DOTAGameRules, Element, FStrEq, FastDelegate2, Find, FindGameEvent<CDOTAUserMsg_TutorialFade_t>, FindGameEvent<CDOTAUserMsg_TutorialFinish_t>, FindGameEvent<CDOTAUserMsg_TutorialRequestExp_t>, FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>, FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>, FindOrCreateGameEvent<CDOTAUserMsg_TutorialRequestExp_t>, Get, GetBool, GetInstance, GetInt, GrowMemory, HandleTutorialEvent, ListenForGameEvent, NPCSpeechData_t, NetworkStateChanged, PostEvent<CDOTAUserMsg_TutorialFade_t>, PostEvent<CDOTAUserMsg_TutorialFinish_t>, PostEvent<CDOTAUserMsg_TutorialRequestExp_t>, Purge, ReactiveTipDescription_t, RemoveAll, SendUserMessage<CDOTAUserMsg_SendGenericToolTip_t>, SendUserMessage<CDOTAUserMsg_TutorialFade_t>, SendUserMessage<CDOTAUserMsg_TutorialFinish_t>, SendUserMessage<CDOTAUserMsg_TutorialRequestExp_t>, Set, SetFacePlayer, SetHUDTimerTutorialMode, SetLastHitUIMode, SetPurchaseTime, SetWhiteListEnabled, ToDOTABaseNPC, V_strcpy_safe<512ul>, Vector, _V_strcmp, atoi, curtime, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<bool>, operator=<float>, operator=<int>, operator[], set_close, set_entindex, set_has_close, set_has_entindex, set_has_text, set_has_tgt_alpha, set_has_title, set_text, set_tgt_alpha, set_title, ~CBroadcastRecipientFilter, ~CCopyableUtlVector, ~CDOTAUserMsg_SendGenericToolTip_t, ~CDOTAUserMsg_TutorialFade_t, ~CDOTAUserMsg_TutorialFinish_t, ~CDOTAUserMsg_TutorialRequestExp_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~NPCSpeechData_t, ~ReactiveTipDescription_t
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, CountdownTimer::CountdownTimer, CDOTA_Tutorial::ParseReactiveTip, CUtlVectorBase<char const*, CUtlMemory<char const*, int> >::SetCount, CUtlMemory<char const*, int>::Purge, CUtlMemory<ReactiveTipDescription_t, int>::Grow, KeyValues::GetString, strcmp, CUtlVectorBase<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >::Remove, Msg (119 total)
// callers: CDOTA_Tutorial::FindNextLesson, CDOTA_Tutorial::SetLessonTo
// strings: "reactive_tip_stop", "reactive_tips", "  Removed %d reactive tips names '%s'\n", "dota_player_used_ability", "convars", "precache" (40 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialRequestExp_t>(bool)::s_hEvent, g_DOTATutorial, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Tutorial::ParseLessonKeys(CDOTA_Tutorial *const this)
{
  const char *Name; // rax
  KeyValues *i; // r14
  __int64 m_Size; // rbx
  int v5; // eax
  ReactiveTipDescription_t *v6; // rbx
  bool v7; // al
  int v8; // r15d
  const char **m_pMemory; // r13
  unsigned __int64 v10; // rax
  int v11; // r15d
  const char **v12; // r13
  unsigned __int64 v13; // rax
  const char *String; // rbx
  int v15; // r15d
  int v16; // r13d
  __int64 v17; // r14
  const char *pszInternalName; // rsi
  __int64 v19; // rbx
  int v20; // r13d
  IGameEventManager2 *v21; // rdi
  const char *pszTipEvent; // rdx
  IGameEventManager2 *v23; // rdi
  const char *pszRemoveOnEvent; // rdx
  IGameEventManager2 *v25; // rdi
  KeyValues *FirstSubKey; // rbx
  const char *v27; // r13
  __int64 v28; // rax
  KeyValues *NextKey; // r15
  __int64 (__fastcall *v30)(ICvar *, const char *); // r14
  const char *v31; // rax
  __int64 v32; // rax
  __int64 v33; // r14
  void (__fastcall *v34)(__int64, const char *); // rbx
  const char *v35; // rax
  bool IsPrecacheAllowed; // r13
  KeyValues *j; // r15
  const char *v38; // rax
  const char *v39; // rax
  const char *v40; // rax
  int Int; // eax
  const char *v42; // rax
  const char *v43; // rax
  int v44; // eax
  const char *v45; // rax
  const char *v46; // rax
  const char *v47; // rax
  const char *v48; // rax
  const char *v49; // rax
  const char *v50; // rax
  int v51; // esi
  const char **v52; // rcx
  const char **v53; // rcx
  int v54; // edx
  const char *v55; // rax
  __int64 v56; // r13
  const char *v57; // r15
  int v58; // edx
  const char **v59; // rax
  const char **v60; // rdx
  int v61; // eax
  int v62; // eax
  char *v63; // rax
  CEntityInstance *v64; // rax
  const char *v65; // rax
  const char *LaneBuildingName; // r13
  CBaseEntity *v67; // rax
  const CBaseEntity *v68; // r13
  const Vector *AbsOrigin; // rax
  float y; // xmm1_4
  float z; // xmm0_4
  const char *v72; // rax
  float v73; // xmm1_4
  CDOTA_Unit_Courier *v74; // r13
  const Vector *v75; // rax
  float v76; // xmm0_4
  float v77; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v79; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v81; // xmm0_4
  CDOTAPlayer *v82; // rax
  const char *v83; // r15
  const char *v84; // rax
  CBaseEntity *v85; // rax
  IGameEventSystem *v86; // r15
  char v87; // r15
  CGameRules *v88; // r13
  int (**vptr_CGameRules)(...); // rdi
  const char *v90; // r13
  int v91; // r15d
  float v92; // xmm1_4
  __m128i v93; // xmm0
  float v94; // r14d
  float v95; // xmm1_4
  CDOTAGameManager *v96; // rax
  const char *v97; // rax
  CDotaQuest *v98; // rax
  const char *v99; // r13
  CDOTA_QuestSystem *v100; // rax
  const char *v101; // rax
  const char *v102; // rax
  CDOTAPlayer *v103; // rax
  __int64 (__fastcall *v104)(IVEngineServer2 *, _QWORD, const char *); // r15
  CEntityIndex v105; // eax
  const char *v106; // rax
  __int64 v107; // rax
  CEntityInstance *v108; // rax
  CDOTA_BaseNPC *v109; // r15
  const char *v110; // r13
  CBaseEntity *v111; // rax
  float v112; // xmm1_4
  float v113; // xmm1_4
  float v114; // xmm1_4
  float v115; // xmm1_4
  CDOTAPlayer *v116; // rax
  CDOTA_BaseNPC_Hero *v117; // rax
  CDOTA_BaseNPC *v118; // r13
  int v119; // eax
  CDOTA_Item *v120; // rax
  CGameRules *v121; // r13
  int (**v122)(...); // rdi
  int v123; // r15d
  CGameRules *v124; // r13
  int (**v125)(...); // rdi
  const char *v126; // rax
  CBaseEntity *v127; // rax
  const char *v128; // rax
  const char *v129; // r13
  CDOTAPlayer *v130; // rax
  CDOTA_BaseNPC_Hero *v131; // rax
  CBaseEntity *v132; // r15
  int v133; // eax
  CDOTA_Item *Item; // rax
  double v135; // xmm0_8
  double v136; // xmm1_8
  double v137; // xmm2_8
  double v138; // xmm3_8
  CDOTA_Item *v139; // r13
  const char *v140; // rax
  const char *v141; // r13
  CDOTA_BaseNPC *NPCByName; // r15
  int v143; // r13d
  int v144; // eax
  const char *v145; // rax
  const char *v146; // rax
  int v147; // eax
  IGameEventSystem *v148; // r15
  __int64 v149; // r14
  const char *v150; // rax
  const char *v151; // rax
  const char *v152; // rax
  const char *v153; // rax
  const char *v154; // rax
  CBaseEntity *v155; // rax
  int v156; // eax
  IGameEventSystem *v157; // r15
  CDOTAPlayer *v158; // rax
  CDOTA_BaseNPC_Hero *v159; // rax
  CDOTAPlayer *v160; // rax
  CDOTA_BaseNPC_Hero *v161; // r15
  int v162; // eax
  const char *v163; // rax
  const char *v164; // rax
  const char *v165; // rax
  const char *v166; // rax
  int v167; // eax
  const char *v168; // rax
  float v169; // xmm1_4
  float Float; // xmm0_4
  float v171; // xmm1_4
  const char *v172; // rax
  CDOTAPlayer *v173; // rax
  CDOTA_BaseNPC_Hero *v174; // r13
  CDOTA_ScriptedSpawner *v175; // rax
  CBaseEntity *v176; // rax
  const char *v177; // rax
  int v178; // eax
  const char *v179; // rax
  const char *v180; // r13
  CDOTAPlayer *HumanPlayer; // rax
  CDOTA_BaseNPC_Hero *AssignedHero; // r15
  const char *v183; // rax
  CDOTAPlayer *v184; // rax
  CDOTA_BaseNPC_Hero *v185; // r13
  CDOTA_ScriptedSpawner *v186; // rax
  CBaseEntity *FirstNPC; // rax
  const char *v188; // r13
  CBaseEntity *EntityByName; // rax
  KeyValues *pKVLessonItem; // [rsp+28h] [rbp-268h]
  CEntityIndex flInitialStockTimea; // [rsp+38h] [rbp-258h]
  __int64 flInitialStockTimeb; // [rsp+38h] [rbp-258h]
  float flInitialStockTime; // [rsp+38h] [rbp-258h]
  __int64 flInitialStockTimec; // [rsp+38h] [rbp-258h]
  DOTAAbilityData_t *pItemData; // [rsp+40h] [rbp-250h]
  float pItemDatac; // [rsp+40h] [rbp-250h]
  const char *pItemDataa; // [rsp+40h] [rbp-250h]
  DOTAAbilityData_t *pItemDatad; // [rsp+40h] [rbp-250h]
  DOTAAbilityData_t *pItemDatab; // [rsp+40h] [rbp-250h]
  DOTAAbilityData_t *pItemDatae; // [rsp+40h] [rbp-250h]
  DOTAAbilityData_t *pItemDataf; // [rsp+40h] [rbp-250h]
  unsigned __int128 flVec; // [rsp+50h] [rbp-240h] OVERLAPPED BYREF
  unsigned __int128 vecLoc; // [rsp+60h] [rbp-230h] OVERLAPPED BYREF
  const char *v204; // [rsp+70h] [rbp-220h]
  std::string *v205; // [rsp+78h] [rbp-218h]
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> > v206; // [rsp+80h] [rbp-210h] BYREF
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> > v207; // [rsp+98h] [rbp-1F8h] BYREF
  float v208; // [rsp+B0h] [rbp-1E0h]
  bool v209; // [rsp+B4h] [rbp-1DCh]
  bool v210; // [rsp+B5h] [rbp-1DBh]
  bool v211; // [rsp+B6h] [rbp-1DAh]
  int count; // [rsp+B8h] [rbp-1D8h]
  CUtlMemory<char const*,int> v213; // [rsp+C0h] [rbp-1D0h] BYREF
  int v214; // [rsp+D0h] [rbp-1C0h]
  CUtlMemory<char const*,int> v215; // [rsp+D8h] [rbp-1B8h] BYREF
  int v216; // [rsp+E8h] [rbp-1A8h]
  int v217; // [rsp+ECh] [rbp-1A4h]
  int v218; // [rsp+F0h] [rbp-1A0h]
  CountdownTimer v219; // [rsp+F8h] [rbp-198h] BYREF
  bool v220; // [rsp+110h] [rbp-180h]
  KeyValues kv; // [rsp+120h] [rbp-170h] BYREF
  unsigned __int64 v222; // [rsp+258h] [rbp-38h]
  Vector v223; // 0:xmm0_8.8,8:xmm1_4.4

  v222 = __readfsqword(0x28u);
  for ( pKVLessonItem = KeyValues::GetFirstSubKey(this->m_pLessonKeys);
        pKVLessonItem != 0;
        pKVLessonItem = KeyValues::GetNextKey(pKVLessonItem) )
  {
    Name = KeyValues::GetName(pKVLessonItem);
    if ( strcmp(Name, "reactive_tips") == 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(pKVLessonItem); i != 0; i = KeyValues::GetNextKey(i) )
      {
        count = 0;
        v213.m_pMemory = 0;
        v213.m_nAllocationCount = 0;
        v213.m_nGrowSize = 0;
        v214 = 0;
        v215.m_pMemory = 0;
        v215.m_nAllocationCount = 0;
        v215.m_nGrowSize = 0;
        CountdownTimer::CountdownTimer(&v219);
        if ( CDOTA_Tutorial::ParseReactiveTip(this, i, &vecLoc) )
        {
          m_Size = this->m_ReactiveTips.m_Size;
          v5 = this->m_ReactiveTips.m_Size;
          if ( m_Size == this->m_ReactiveTips.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<ReactiveTipDescription_t,int>::Grow(&this->m_ReactiveTips.m_Memory, 1);
            v5 = this->m_ReactiveTips.m_Size;
          }
          this->m_ReactiveTips.m_Size = v5 + 1;
          v6 = &this->m_ReactiveTips.m_Memory.m_pMemory[m_Size];
          if ( v6 != 0 )
          {
            *&v6->pszInternalName = vecLoc;
            v6->pszTipMapIOEvent = v204;
            v6->pszTipRemoveOnMapIOEvent = v205;
            *&v6->pszTipName = v206;
            *&v6->sNPCSpeech.pszNPCName = v207;
            v6->sNPCSpeech.flStartAt = v208;
            v6->sNPCSpeech.bFindNearestFriendly = v209;
            v6->sNPCSpeech.bAllowMovement = v210;
            v7 = v211;
            v6->sNPCSpeech.vecSpeech.m_Size = 0;
            v6->sNPCSpeech.vecSpeech.m_Memory.m_pMemory = 0;
            v6->sNPCSpeech.bShouldFacePlayer = v7;
            v6->sNPCSpeech.vecSpeech.m_Memory.m_nAllocationCount = 0;
            v6->sNPCSpeech.vecSpeech.m_Memory.m_nGrowSize = 0;
            v8 = count;
            m_pMemory = v213.m_pMemory;
            CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::SetCount(&v6->sNPCSpeech.vecSpeech, count);
            if ( v8 > 0 )
            {
              v10 = 0;
              do
              {
                v6->sNPCSpeech.vecSpeech.m_Memory.m_pMemory[v10 / 8] = m_pMemory[v10 / 8];
                v10 += 8LL;
              }
              while ( v10 != 8LL * (v8 - 1) + 8 );
            }
            v6->sNPCSpeech.vecVO.m_Size = 0;
            v6->sNPCSpeech.vecVO.m_Memory.m_pMemory = 0;
            v6->sNPCSpeech.vecVO.m_Memory.m_nAllocationCount = 0;
            v6->sNPCSpeech.vecVO.m_Memory.m_nGrowSize = 0;
            v11 = v214;
            v12 = v215.m_pMemory;
            CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::SetCount(&v6->sNPCSpeech.vecVO, v214);
            if ( v11 > 0 )
            {
              v13 = 0;
              do
              {
                v6->sNPCSpeech.vecVO.m_Memory.m_pMemory[v13 / 8] = v12[v13 / 8];
                v13 += 8LL;
              }
              while ( v13 != 8LL * (v11 - 1) + 8 );
            }
            v6->nRepeatCount = v216;
            v6->nRequiredProgress = v217;
            v6->nCurrentProgress = v218;
            v6->repeatTimer._vptr_CountdownTimer = off_3FF42F0;
            v6->repeatTimer.m_duration.m_Value = v219.m_duration.m_Value;
            v6->repeatTimer.m_timestamp.m_Value = v219.m_timestamp.m_Value;
            v6->repeatTimer.m_bUseGlobalsTime = v219.m_bUseGlobalsTime;
            v6->bForceRemove = v220;
          }
        }
        v214 = 0;
        if ( (v215.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char const*,int>::Purge(&v215);
          if ( (v215.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char const*,int>::Purge(&v215);
        }
        count = 0;
        if ( (v213.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char const*,int>::Purge(&v213);
          if ( (v213.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char const*,int>::Purge(&v213);
        }
      }
    }
    else if ( strcmp(Name, "reactive_tip_stop") == 0 )
    {
      String = KeyValues::GetString(pKVLessonItem, 0, "", 0, 0);
      v15 = this->m_ReactiveTips.m_Size - 1;
      if ( v15 < 0 )
      {
        v16 = 0;
      }
      else
      {
        v16 = 0;
        v17 = v15;
        do
        {
          pszInternalName = this->m_ReactiveTips.m_Memory.m_pMemory[v17].pszInternalName;
          if ( pszInternalName != 0 && strcmp(String, pszInternalName) == 0 )
          {
            ++v16;
            CUtlVectorBase<ReactiveTipDescription_t,CUtlMemory<ReactiveTipDescription_t,int>>::Remove(
              &this->m_ReactiveTips,
              v15);
          }
          --v15;
          --v17;
        }
        while ( v15 != -1 );
      }
      Msg("  Removed %d reactive tips names '%s'\n", v16, String);
    }
  }
  if ( this->m_ReactiveTips.m_Size > 0 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = gameeventmanager;
      pszTipEvent = this->m_ReactiveTips.m_Memory.m_pMemory[v19].pszTipEvent;
      this->m_bRegisteredForEvents = 1;
      (*(v21->_vptr_IBaseInterface + 4))(v21, &this->CGameEventListener, pszTipEvent, 1);
      v23 = gameeventmanager;
      pszRemoveOnEvent = this->m_ReactiveTips.m_Memory.m_pMemory[v19].pszRemoveOnEvent;
      this->m_bRegisteredForEvents = 1;
      (*(v23->_vptr_IBaseInterface + 4))(v23, &this->CGameEventListener, pszRemoveOnEvent, 1);
      if ( this->m_ReactiveTips.m_Memory.m_pMemory[v19].pszRemoveOnAbility != 0 )
      {
        v25 = gameeventmanager;
        this->m_bRegisteredForEvents = 1;
        (*(v25->_vptr_IBaseInterface + 4))(v25, &this->CGameEventListener, "dota_player_used_ability", 1);
      }
      ++v20;
      ++v19;
    }
    while ( this->m_ReactiveTips.m_Size > v20 );
  }
  FirstSubKey = KeyValues::GetFirstSubKey(this->m_pLessonKeys);
  if ( FirstSubKey == 0 )
  {
LABEL_111:
    if ( this->m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
      goto LABEL_124;
    goto LABEL_112;
  }
  do
  {
    while ( 1 )
    {
      v27 = KeyValues::GetName(FirstSubKey);
      if ( dota_tutorial_debug.m_pParent->m_Value.m_nValue != 0 )
        Msg("Processing item %s\n", v27);
      if ( strcmp(v27, "convars") == 0 )
      {
        SetGlobalConvarTrackerActive(this->m_nConvarTrackerID, 1);
        NextKey = KeyValues::GetFirstSubKey(FirstSubKey);
        if ( NextKey != 0 )
        {
          pItemData = FirstSubKey;
          do
          {
            v30 = *(*g_pCVar + 144LL);
            v31 = KeyValues::GetName(NextKey);
            v32 = v30(g_pCVar, v31);
            v33 = v32;
            if ( v32 != 0 )
            {
              v34 = *(*v32 + 128LL);
              v35 = KeyValues::GetString(NextKey, 0, "", 0, 0);
              v34(v33, v35);
            }
            NextKey = KeyValues::GetNextKey(NextKey);
          }
          while ( NextKey != 0 );
          FirstSubKey = pItemData;
        }
        SetGlobalConvarTrackerActive(this->m_nConvarTrackerID, 0);
        goto LABEL_122;
      }
      if ( strcmp(v27, "precache") == 0 )
      {
        IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
        CBaseEntity::SetAllowPrecache(1);
        for ( j = KeyValues::GetFirstSubKey(FirstSubKey); j != 0; j = KeyValues::GetNextKey(j) )
        {
          v38 = KeyValues::GetName(j);
          Warning("Trying to precache %s\n", v38);
        }
        CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_team") == 0 )
      {
        v39 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::SelectPlayerTeam(this, v39);
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_hero") == 0 )
      {
        v40 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::SelectHero(this, v40);
        goto LABEL_122;
      }
      if ( strcmp(v27, "hero_controllable") == 0 )
      {
        Int = KeyValues::GetInt(FirstSubKey, 0, 0);
        CDOTA_Tutorial::SetHeroControllable(this, Int != 0);
        goto LABEL_122;
      }
      if ( strcmp(v27, "move_hero") == 0 )
      {
        v42 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        UTIL_StringToVector(&flVec, v42);
        vecLoc = flVec;
        CDOTA_Tutorial::MoveHero(this, *&flVec, *(&flVec + 2));
        goto LABEL_122;
      }
      if ( strcmp(v27, "change_hero") == 0 )
      {
        v43 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::ChangeHero(this, v43);
        goto LABEL_122;
      }
      if ( strcmp(v27, "hero_level") == 0 )
      {
        v44 = KeyValues::GetInt(FirstSubKey, 0, 0);
        CDOTA_Tutorial::SetHeroLevel(this, v44);
        goto LABEL_122;
      }
      if ( strcmp(v27, "add_bad_bot") == 0 )
      {
        v45 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::AddBot(this, v45, 0);
        goto LABEL_122;
      }
      if ( strcmp(v27, "add_good_bot") == 0 )
      {
        v46 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::AddBot(this, v46, 1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "add_bot_with_settings") == 0 )
      {
        if ( !CDOTA_Tutorial::AddBotWithSettings(this, FirstSubKey) )
          Msg("Failed to create tutorial Bot.\n");
        goto LABEL_122;
      }
      if ( strcmp(v27, "add_companion_bot") == 0 )
      {
        vecLoc = 0u;
        v204 = 0;
        v48 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::AddHeroAndBotController(this, v48, 1, 0, &vecLoc);
        goto LABEL_122;
      }
      if ( strcmp(v27, "force_good_win") == 0 )
      {
        CDOTA_Tutorial::ForceGoodWin(this);
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_upgrade_ability") == 0 )
      {
        v47 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::UpgradePlayerAbility(this, v47);
        goto LABEL_122;
      }
      if ( strcmp(v27, "add_teleportation_target") == 0 )
      {
        v50 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        v51 = this->m_TeleportTargetList.m_Size;
        if ( v51 > 0 )
        {
          v52 = this->m_TeleportTargetList.m_Memory.m_pMemory;
          if ( v50 == *v52 )
            goto LABEL_122;
          v53 = v52 + 1;
          v54 = 0;
          while ( ++v54 != v51 )
          {
            if ( v50 == *v53++ )
            {
              if ( v54 != -1 )
                goto LABEL_122;
              break;
            }
          }
        }
        v55 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        v56 = this->m_TeleportTargetList.m_Size;
        v57 = v55;
        v58 = this->m_TeleportTargetList.m_Size;
        if ( v56 == this->m_TeleportTargetList.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<char const*,int>::Grow(&this->m_TeleportTargetList.m_Memory, 1);
          v58 = this->m_TeleportTargetList.m_Size;
        }
        v59 = this->m_TeleportTargetList.m_Memory.m_pMemory;
        this->m_TeleportTargetList.m_Size = v58 + 1;
        v60 = &v59[v56];
        if ( v60 != 0 )
          *v60 = v57;
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_give_item") == 0 )
      {
        v49 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::GivePlayerItem(this, v49);
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_set_gold") == 0 )
      {
        v62 = KeyValues::GetInt(FirstSubKey, 0, 0);
        CDOTA_Tutorial::SetPlayerGold(this, v62, 1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_add_gold") == 0 )
      {
        v61 = KeyValues::GetInt(FirstSubKey, 0, 0);
        CDOTA_Tutorial::SetPlayerGold(this, v61, 0);
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_ensure_level") == 0 )
      {
        v178 = KeyValues::GetInt(FirstSubKey, 0, 0);
        CDOTA_Tutorial::EnsurePlayerLevel(this, v178);
        goto LABEL_122;
      }
      if ( strcmp(v27, "show_tip") == 0 )
      {
        v177 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        ShowTutorialTip(v177, 0, 0);
        goto LABEL_122;
      }
      if ( strcmp(v27, "force_game_start") == 0 )
      {
        CDOTA_Tutorial::ForceGameStart(this);
        v63 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        if ( v63 == "with_announcement" || strcmp(v63, "with_announcement") == 0 )
          CDOTAGamerules::PlayGameStartAnnouncement(g_pGameRules);
        goto LABEL_122;
      }
      if ( strcmp(v27, "calculate_score") == 0 )
      {
        CDOTA_Tutorial::CalculateScore(this);
        goto LABEL_122;
      }
      if ( strcmp(v27, "clear_all_tasks") == 0 )
      {
        CDOTA_Tutorial::ClearAllTasks(this);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_move_location") == 0 )
      {
        CDOTA_Tutorial::SetTaskSteps(this, 1);
        CDOTA_Tutorial::SetTaskProgress(this, 0);
        v188 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v188, 0, 0, 0, 0);
        if ( EntityByName != 0 )
          *&vecLoc = *CBaseEntity::GetAbsOrigin(EntityByName);
        else
          UTIL_StringToVector(&vecLoc, v188);
        CDOTA_Tutorial::AddTaskLocation(this, vecLoc);
        goto LABEL_122;
      }
      if ( strcmp(v27, "movecamera_to") == 0 )
      {
        v179 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        v180 = v179;
        if ( v179 == "!player" || strcmp(v179, "!player") == 0 )
        {
          HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
          if ( HumanPlayer != 0 )
          {
            AssignedHero = CDOTAPlayer::GetAssignedHero(HumanPlayer);
            goto LABEL_335;
          }
          goto LABEL_355;
        }
        AssignedHero = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v179, 0, 0, 0, 0);
LABEL_335:
        if ( AssignedHero != 0 )
        {
          CDOTA_Tutorial::SetTargetEntity(this, AssignedHero);
          v223 = *CBaseEntity::GetAbsOrigin(AssignedHero);
          CDOTA_Tutorial::SetTargetLocation(this, v223);
        }
        else
        {
LABEL_355:
          UTIL_StringToVector(&vecLoc, v180);
          CDOTA_Tutorial::SetTargetLocation(this, vecLoc);
        }
        CDOTA_Tutorial::SetTutorialState(this, DOTATutorial_State_t::TUTORIAL_STATE_CAMERA_AUTOMOVE_TO);
        goto LABEL_122;
      }
      if ( strcmp(v27, "teleportcamera_to") == 0 )
      {
        v183 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        if ( v183 == "!player" || strcmp(v183, "!player") == 0 )
        {
          v184 = CDOTA_Tutorial::GetHumanPlayer(this);
          if ( v184 == 0 )
            goto LABEL_347;
          v185 = CDOTAPlayer::GetAssignedHero(v184);
LABEL_342:
          if ( v185 == 0
            || (v186 = __dynamic_cast(v185, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_ScriptedSpawner, 0)) != 0
            && ((FirstNPC = CDOTA_ScriptedSpawner::GetFirstNPC(v186), v185 = FirstNPC, FirstNPC == 0)
             || !FirstNPC->m_bIsDOTANPC) )
          {
LABEL_347:
            v185 = 0;
          }
          CDOTA_Tutorial::SetTargetEntity(this, v185);
          CDOTA_Tutorial::SetTutorialState(this, DOTATutorial_State_t::TUTORIAL_STATE_CAMERA_TELEPORT_TO_ENT);
          goto LABEL_122;
        }
        v185 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v183, 0, 0, 0, 0);
        goto LABEL_342;
      }
      if ( strcmp(v27, "setcamera_to_follow") == 0 )
      {
        v172 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        if ( v172 == "!player" || strcmp(v172, "!player") == 0 )
        {
          v173 = CDOTA_Tutorial::GetHumanPlayer(this);
          if ( v173 == 0 )
            goto LABEL_326;
          v174 = CDOTAPlayer::GetAssignedHero(v173);
LABEL_321:
          if ( v174 == 0
            || (v175 = __dynamic_cast(v174, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_ScriptedSpawner, 0)) != 0
            && ((v176 = CDOTA_ScriptedSpawner::GetFirstNPC(v175), v174 = v176, v176 == 0) || !v176->m_bIsDOTANPC) )
          {
LABEL_326:
            v174 = 0;
          }
          CDOTA_Tutorial::SetTargetEntity(this, v174);
          CDOTA_Tutorial::SetTutorialState(this, DOTATutorial_State_t::TUTORIAL_STATE_CAMERA_FOLLOW_ENT);
          goto LABEL_122;
        }
        v174 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v172, 0, 0, 0, 0);
        goto LABEL_321;
      }
      if ( strcmp(v27, "unlockcamera") == 0 )
        goto LABEL_235;
      if ( strcmp(v27, "task_camera_location") == 0 )
      {
        CDOTA_Tutorial::SetTaskSteps(this, 1);
        CDOTA_Tutorial::SetTaskProgress(this, 0);
        v168 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        UTIL_StringToVector(&flVec, v168);
        vecLoc = flVec;
        CDOTA_Tutorial::AddCameraTaskLocation(this, flVec);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_timed_round") == 0 )
      {
        CDOTA_Tutorial::SetTaskSteps(this, 1);
        CDOTA_Tutorial::SetTaskProgress(this, 0);
        Float = KeyValues::GetFloat(FirstSubKey, 0, v169);
        CDOTA_Tutorial::AddTimerTask(this, Float, v171);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_progress_count") == 0 )
      {
        v167 = KeyValues::GetInt(FirstSubKey, 0, 0);
        CDOTA_Tutorial::SetTaskSteps(this, v167);
        CDOTA_Tutorial::SetTaskProgress(this, 0);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_progress_event") == 0 )
      {
        v166 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        this->m_bRegisteredForEvents = 1;
        (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &this->CGameEventListener, v166, 1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_buy_items") == 0 )
      {
        this->m_bRegisteredForEvents = 1;
        (*(gameeventmanager->_vptr_IBaseInterface + 4))(
          gameeventmanager,
          &this->CGameEventListener,
          "dota_item_purchased",
          1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_use_item") == 0 )
      {
        this->m_bRegisteredForEvents = 1;
        (*(gameeventmanager->_vptr_IBaseInterface + 4))(
          gameeventmanager,
          &this->CGameEventListener,
          "dota_item_used",
          1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_learn_ability") == 0 )
      {
        this->m_bRegisteredForEvents = 1;
        (*(gameeventmanager->_vptr_IBaseInterface + 4))(
          gameeventmanager,
          &this->CGameEventListener,
          "dota_player_learned_ability",
          1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_use_ability") == 0 )
      {
        this->m_bRegisteredForEvents = 1;
        (*(gameeventmanager->_vptr_IBaseInterface + 4))(
          gameeventmanager,
          &this->CGameEventListener,
          "dota_player_used_ability",
          1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_get_item_on_player") == 0 )
      {
        this->m_bRegisteredForEvents = 1;
        (*(gameeventmanager->_vptr_IBaseInterface + 4))(
          gameeventmanager,
          &this->CGameEventListener,
          "dota_inventory_player_got_item",
          1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "task_courier_transfer_item") == 0 )
      {
        this->m_bRegisteredForEvents = 1;
        (*(gameeventmanager->_vptr_IBaseInterface + 4))(
          gameeventmanager,
          &this->CGameEventListener,
          "dota_courier_transfer_item",
          1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "heal_player") == 0 )
      {
        CDOTA_Tutorial::HealPlayer(this);
        goto LABEL_122;
      }
      if ( strcmp(v27, "heal_npc") == 0 )
      {
        v165 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::HealNPC(this, v165);
        goto LABEL_122;
      }
      if ( strcmp(v27, "hide_npc") == 0 )
      {
        v164 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::HideNPC(this, v164);
        goto LABEL_122;
      }
      if ( strcmp(v27, "reveal_npc") == 0 )
      {
        v163 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::RevealNPC(this, v163);
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_movement_allowed") == 0 )
      {
        v162 = KeyValues::GetInt(FirstSubKey, 0, 0);
        CDOTA_Tutorial::SetPlayerMovementAllowed(this, v162 != 0);
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_healing_disable") == 0 )
      {
        v160 = CDOTA_Tutorial::GetHumanPlayer(this);
        if ( v160 != 0 )
        {
          v161 = CDOTAPlayer::GetAssignedHero(v160);
          if ( v161 != 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_tutorial_disable_healing");
            CDOTA_BaseNPC::AddNewModifier(v161, v161, 0, "modifier_tutorial_disable_healing", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
        goto LABEL_122;
      }
      if ( strcmp(v27, "player_healing_enable") == 0 )
      {
        v158 = CDOTA_Tutorial::GetHumanPlayer(this);
        if ( v158 != 0 )
        {
          v159 = CDOTAPlayer::GetAssignedHero(v158);
          if ( v159 != 0 )
            CDOTA_BaseNPC::RemoveModifierByName(v159, "modifier_tutorial_disable_healing");
        }
        goto LABEL_122;
      }
      if ( strcmp(v27, "show_minimap_select_dialog") == 0 )
      {
        CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter(&kv);
        CDOTAUserMsg_TutorialFinish::CDOTAUserMsg_TutorialFinish(&vecLoc);
        *&vecLoc = off_416CDD0;
        v157 = g_pGameEventSystem;
        pItemDataf = *(*g_pGameEventSystem + 128LL);
        flInitialStockTimec = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent;
        (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages);
        (pItemDataf)(v157, 0, 0, &kv, flInitialStockTimec, &vecLoc, 56);
        *&vecLoc = &off_416CC50;
        CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish(&vecLoc);
        kv.m_uValue = &off_3FB63F0;
        CRecipientFilter::~CRecipientFilter(&kv);
        goto LABEL_122;
      }
      if ( strcmp(v27, "set_tutorial_UI") == 0 )
      {
        v156 = KeyValues::GetInt(FirstSubKey, 0, 0);
        CDOTA_Tutorial::SetTutorialUI(this, v156);
        goto LABEL_122;
      }
      if ( strcmp(v27, "trigger_logic_relay") == 0 )
      {
        v154 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        v155 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v154, 0, 0, 0, 0);
        if ( v155 != 0 )
        {
          DWORD2(vecLoc) = 0;
          *&vecLoc = 0;
          CEntityInstance::AcceptInput(v155, "Trigger", 0, 0, &vecLoc, 0);
          CVariantBase<CVariantDefaultAllocator>::Free(&vecLoc);
        }
        goto LABEL_122;
      }
      if ( strcmp(v27, "npc_speech") == 0 )
      {
        NPCSpeechData_t::NPCSpeechData_t(&vecLoc);
        CDOTA_Tutorial::ParseNPCSpeech(this, FirstSubKey, &vecLoc);
        CDOTA_Tutorial::StartNPCSpeech(this, &vecLoc);
        CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::~CUtlVectorBase(&v207);
        CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::~CUtlVectorBase(&v206);
        goto LABEL_122;
      }
      if ( strcmp(v27, "stop_npc_speech") == 0 )
      {
        v153 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::StopNPCSpeech(this, v153);
        goto LABEL_122;
      }
      if ( strcmp(v27, "npc_sleep") == 0 )
      {
        v152 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::SetNPCSleep(this, v152, 1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "npc_wake") == 0 )
      {
        v102 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::SetNPCSleep(this, v102, 0);
        goto LABEL_122;
      }
      if ( strcmp(v27, "npc_animation") == 0 )
      {
        CDOTA_Tutorial::StartNPCAnimation(this, FirstSubKey);
        goto LABEL_122;
      }
      if ( strcmp(v27, "stop_npc_animation") == 0 )
      {
        v101 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::StopNPCAnimation(this, v101);
        goto LABEL_122;
      }
      if ( strcmp(v27, "quest_finish") == 0 )
      {
        v99 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        v100 = DOTAQuestSystem();
        CDOTA_QuestSystem::CompleteQuestByName(v100, v99);
        goto LABEL_122;
      }
      if ( strcmp(v27, "quest") == 0 )
      {
        v98 = CDotaQuest::SpawnFromKeyValues(v27, FirstSubKey);
        if ( v98->m_pszQuestTitle.m_Value[0] != 0 )
          CDOTA_Tutorial::AddQuestLogEntry(this, v98);
        this->m_bRegisteredForEvents = 1;
        (*(gameeventmanager->_vptr_IBaseInterface + 4))(
          gameeventmanager,
          &this->CGameEventListener,
          "dota_quest_completed",
          1);
        goto LABEL_122;
      }
      if ( strcmp(v27, "finish_text") == 0 )
      {
        v97 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        _V_strncpy(this->m_szFinishText, v97, 512);
        goto LABEL_122;
      }
      if ( strcmp(v27, "shop_create_stock") == 0 )
      {
        v90 = KeyValues::GetString(FirstSubKey, "itemname", "", 0, 0);
        v91 = KeyValues::GetInt(FirstSubKey, "stockamount", 0);
        *v93.m128i_i32 = KeyValues::GetFloat(FirstSubKey, "stocktime", v92);
        v94 = COERCE_FLOAT(_mm_cvtsi128_si32(v93));
        flInitialStockTime = KeyValues::GetFloat(FirstSubKey, "ItemInitialStockTime", v95);
        v96 = DOTAGameManager();
        pItemDatab = CDOTAGameManager::GetAbilityDataByName(v96, v90);
        if ( pItemDatab != 0 )
        {
          CDOTAGamerules::CreateItemStockInfo(g_pGameRules, 2, v90, v91, v91, v94, flInitialStockTime, -1);
          pItemDatab->m_iItemStockMax = v91;
          pItemDatab->m_fItemStockTime = v94;
        }
        goto LABEL_122;
      }
      if ( strcmp(v27, "whitelist_enable") == 0 )
      {
        v87 = KeyValues::GetInt(FirstSubKey, 0, 0) != 0;
        v88 = g_pGameRules;
        if ( g_pGameRules != 0 && v87 != g_pGameRules[8].m_szQuestName[116] )
        {
          vptr_CGameRules = g_pGameRules[5]._vptr_CGameRules;
          if ( vptr_CGameRules != 0 && (*(vptr_CGameRules[1] + 49) & 4) == 0 )
            (*(*vptr_CGameRules + 22))(vptr_CGameRules, 1276, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
          v88[8].m_szQuestName[116] = v87;
        }
        goto LABEL_122;
      }
      if ( strcmp(v27, "add_item_shop_whitelist") == 0 )
      {
        v151 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        if ( g_pGameRules != 0 )
          CDOTAGamerules::AddItemToWhiteList(g_pGameRules, v151);
        goto LABEL_122;
      }
      if ( strcmp(v27, "remove_item_shop_whitelist") == 0 )
      {
        v150 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        if ( g_pGameRules != 0 )
          CDOTAGamerules::RemoveItemFromWhiteList(g_pGameRules, v150);
        goto LABEL_122;
      }
      if ( strcmp(v27, "hero_levelup") == 0 )
      {
        CDOTA_Tutorial::ParseHeroLevelup(this, FirstSubKey);
        goto LABEL_122;
      }
      if ( strcmp(v27, "fire_experienced_event") == 0 )
      {
        v103 = CDOTA_Tutorial::GetHumanPlayer(this);
        if ( v103 != 0 )
        {
          v104 = *(*engine + 384LL);
          v105.m_Data = CEntityInstance::GetEntityIndex(v103).m_Data;
          v106 = v104(engine, v105.m_Data, "dota_camera_edgemove");
          if ( v106 != 0 && *v106 != 0 && strtol(v106, 0, 10) != 0 )
            v107 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_is_experienced", 0, 0);
          else
            v107 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_is_notexperienced", 0, 0);
          if ( v107 != 0 )
            (*(this->_vptr_IGameSystem + 40))(this, v107);
        }
        goto LABEL_122;
      }
      if ( strcmp(v27, "request_experience_dialog") == 0 )
      {
        CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter(&kv);
        CDOTAUserMsg_TutorialRequestExp::CDOTAUserMsg_TutorialRequestExp(&vecLoc);
        *&vecLoc = off_4186610;
        v86 = g_pGameEventSystem;
        pItemDatad = *(*g_pGameEventSystem + 128LL);
        flInitialStockTimeb = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialRequestExp_t>(bool)::s_hEvent;
        (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages);
        (pItemDatad)(v86, 0, 0, &kv, flInitialStockTimeb, &vecLoc, 24);
        *&vecLoc = &off_4186490;
        CDOTAUserMsg_TutorialRequestExp::~CDOTAUserMsg_TutorialRequestExp(&vecLoc);
        kv.m_uValue = &off_3FB63F0;
        CRecipientFilter::~CRecipientFilter(&kv);
        goto LABEL_122;
      }
      if ( strcmp(v27, "show_tooltip_at_entity") == 0 )
      {
        v83 = KeyValues::GetString(FirstSubKey, "title", 0, 0, 0);
        pItemDataa = KeyValues::GetString(FirstSubKey, "text", 0, 0, 0);
        if ( pItemDataa == 0 )
          return;
        if ( v83 == 0 )
          return;
        v84 = KeyValues::GetString(FirstSubKey, "entity_name", 0, 0, 0);
        if ( v84 == 0 )
          return;
        v85 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v84, 0, 0, 0, 0);
        if ( v85 == 0 )
          return;
        flInitialStockTimea.m_Data = CEntityInstance::GetEntityIndex(v85).m_Data;
        CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter(&kv);
        CDOTAUserMsg_SendGenericToolTip::CDOTAUserMsg_SendGenericToolTip(&vecLoc);
        LODWORD(v204) = v204 | 1;
        *&vecLoc = off_4186CD0;
        std::string::assign(v205, v83);
        LODWORD(v204) = v204 | 2;
        std::string::assign(*&v206.m_Size, pItemDataa);
        BYTE4(v206.m_Memory.m_pMemory) = 0;
        LODWORD(v204) = v204 | 0xC;
        LODWORD(v206.m_Memory.m_pMemory) = flInitialStockTimea;
        IGameEventSystem::PostEvent<CDOTAUserMsg_SendGenericToolTip_t>(g_pGameEventSystem, 0, 0, &kv, &vecLoc);
        *&vecLoc = &off_4186B50;
        CDOTAUserMsg_SendGenericToolTip::~CDOTAUserMsg_SendGenericToolTip(&vecLoc);
        kv.m_uValue = &off_3FB63F0;
        CRecipientFilter::~CRecipientFilter(&kv);
        goto LABEL_122;
      }
      if ( strcmp(v27, "hide_tooltip_at_entity") == 0 )
      {
        CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter(&kv);
        CDOTAUserMsg_SendGenericToolTip::CDOTAUserMsg_SendGenericToolTip(&vecLoc);
        *&vecLoc = off_4186CD0;
        LODWORD(v204) = v204 | 1;
        std::string::assign(v205, "");
        LODWORD(v204) = v204 | 2;
        std::string::assign(*&v206.m_Size, "");
        BYTE4(v206.m_Memory.m_pMemory) = 1;
        LODWORD(v206.m_Memory.m_pMemory) = 0;
        LODWORD(v204) = v204 | 0xC;
        IGameEventSystem::PostEvent<CDOTAUserMsg_SendGenericToolTip_t>(g_pGameEventSystem, 0, 0, &kv, &vecLoc);
        *&vecLoc = &off_4186B50;
        CDOTAUserMsg_SendGenericToolTip::~CDOTAUserMsg_SendGenericToolTip(&vecLoc);
        kv.m_uValue = &off_3FB63F0;
        CRecipientFilter::~CRecipientFilter(&kv);
        goto LABEL_122;
      }
      if ( strcmp(v27, "ping_minimap") == 0 )
      {
        this->m_PingData.m_flPos[0] = 0.0;
        this->m_PingData.m_flPos[1] = 0.0;
        this->m_PingData.m_flPos[2] = 0.0;
        v65 = KeyValues::GetString(FirstSubKey, "pos", 0, 0, 0);
        if ( v65 != 0 )
          UTIL_StringToVector(this->m_PingData.m_flPos, v65);
        this->m_PingData.m_EntityNumber.m_Data = -1;
        LaneBuildingName = KeyValues::GetString(FirstSubKey, "entity_name", 0, 0, 0);
        if ( KeyValues::FindKey(FirstSubKey, "last_hit_lane", 0) != 0 )
          LaneBuildingName = GetLaneBuildingName(2, this->m_nLastHitChallengeLane, 0);
        if ( LaneBuildingName != 0 )
        {
          v67 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, LaneBuildingName, 0, 0, 0, 0);
          v68 = v67;
          if ( v67 != 0 )
          {
            this->m_PingData.m_EntityNumber = CEntityInstance::GetEntityIndex(v67);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v68);
            y = AbsOrigin->y;
            z = AbsOrigin->z;
            this->m_PingData.m_flPos[0] = AbsOrigin->x;
            this->m_PingData.m_flPos[1] = y;
            this->m_PingData.m_flPos[2] = z;
          }
        }
        v72 = KeyValues::GetString(FirstSubKey, "npc", 0, 0, 0);
        if ( v72 != 0 )
        {
          v74 = strcmp(v72, "npc_dota_courier") == 0
              ? CDOTA_PlayerResource::GetNthCourierForTeam(g_pDOTAPlayerResource, 0, 2)
              : CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v72, 0, 0, 0, 0);
          if ( v74 != 0 )
          {
            this->m_PingData.m_EntityNumber = CEntityInstance::GetEntityIndex(v74);
            v75 = CBaseEntity::GetAbsOrigin(v74);
            v73 = v75->y;
            v76 = v75->z;
            this->m_PingData.m_flPos[0] = v75->x;
            this->m_PingData.m_flPos[1] = v73;
            this->m_PingData.m_flPos[2] = v76;
          }
        }
        v77 = KeyValues::GetFloat(FirstSubKey, "delay", v73);
        m_flCurrentTime = 0.0;
        v79 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              pItemDatac = v77;
              (m_pfnWarningFunc)(1, v77, 0.0);
              v77 = pItemDatac;
            }
          }
          m_flCurrentTime = v79->m_flCurrentTime;
        }
        this->m_PingData.m_flTime = v77 + m_flCurrentTime;
        v81 = KeyValues::GetFloat(FirstSubKey, "repeat", m_flCurrentTime);
        this->m_PingData.m_iPlayer = 0;
        this->m_PingData.m_flRepeatTime = v81;
        v82 = CDOTA_Tutorial::GetHumanPlayer(this);
        if ( v82 != 0 )
          this->m_PingData.m_iPlayer = (*(v82->_vptr_IHandleEntity + 393))(v82);
        goto LABEL_122;
      }
      if ( strcmp(v27, "ping_minimap_stop") != 0 )
        break;
      this->m_PingData.m_flTime = 0.0;
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        goto LABEL_111;
    }
    if ( strcmp(v27, "finish_tutorial") == 0 )
    {
      CDOTA_Tutorial::FinishTutorial(this);
    }
    else if ( strcmp(v27, "fade_to") == 0 )
    {
      CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter(&kv);
      CDOTAUserMsg_TutorialFade::CDOTAUserMsg_TutorialFade(&vecLoc);
      *&vecLoc = off_416CB90;
      if ( KeyValues::GetInt(FirstSubKey, 0, 0) > 255 )
      {
        v147 = 255;
      }
      else if ( KeyValues::GetInt(FirstSubKey, 0, 0) < 0 )
      {
        v147 = 0;
      }
      else
      {
        v147 = KeyValues::GetInt(FirstSubKey, 0, 0);
      }
      LODWORD(v204) = v204 | 1;
      LODWORD(v205) = v147;
      v148 = g_pGameEventSystem;
      pItemDatae = *(*g_pGameEventSystem + 128LL);
      v149 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent;
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent);
      (pItemDatae)(v148, 0, 0, &kv, v149, &vecLoc, 32);
      *&vecLoc = &off_416CA10;
      CDOTAUserMsg_TutorialFade::~CDOTAUserMsg_TutorialFade(&vecLoc);
      kv.m_uValue = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&kv);
    }
    else
    {
      if ( strcmp(v27, "highlight_hud") == 0 )
      {
        CDOTA_Tutorial::ParseHighlightHud(this, FirstSubKey);
        goto LABEL_122;
      }
      if ( strcmp(v27, "roq_face_player") == 0 )
      {
        v64 = CEntityHandle::operator CEntityInstance *(&this->m_hRoq);
        if ( v64 != 0 && BYTE3(v64[7]._vptr_IHandleEntity) != 0 )
          LOBYTE(v64[85].m_pEntity) = KeyValues::GetInt(FirstSubKey, 0, 0) != 0;
      }
      else if ( strcmp(v27, "teleport_roq") == 0 )
      {
        v108 = CEntityHandle::operator CEntityInstance *(&this->m_hRoq);
        v109 = v108;
        if ( v108 != 0 && BYTE3(v108[7]._vptr_IHandleEntity) != 0 )
        {
          v110 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
          v111 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v110, 0, 0, 0, 0);
          if ( v111 != 0 )
            *&vecLoc = *CBaseEntity::GetAbsOrigin(v111);
          else
            UTIL_StringToVector(&vecLoc, v110);
          KeyValues::KeyValues(&kv, "modifier_tutorial_roquelaire_teleport");
          KeyValues::SetFloat(&kv, "duration", v112);
          KeyValues::SetFloat(&kv, "x", v113);
          KeyValues::SetFloat(&kv, "y", v114);
          KeyValues::SetFloat(&kv, "z", v115);
          CDOTA_BaseNPC::AddNewModifier(v109, v109, 0, "modifier_tutorial_roquelaire_teleport", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
      else if ( strcmp(v27, "tower_invulnerable_in_lane") == 0 )
      {
        v146 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::SetTowersInLaneInvulnerable(this, v146);
      }
      else if ( strcmp(v27, "tower_vulnerable_in_lane") == 0 )
      {
        v145 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        CDOTA_Tutorial::SetTowersInLaneVulnerable(this, v145);
      }
      else if ( strcmp(v27, "set_npc_health") == 0 )
      {
        v140 = KeyValues::GetString(FirstSubKey, "npc", "", 0, 0);
        v141 = v140;
        if ( v140 == 0 || *v140 == 0 )
          goto LABEL_271;
        NPCByName = CDOTA_Tutorial::GetNPCByName(this, v140, 0);
        if ( NPCByName == 0 )
        {
          NPCByName = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, v141);
          if ( NPCByName == 0 )
            return;
        }
        if ( !NPCByName->m_bIsDOTANPC )
          return;
        v143 = KeyValues::GetInt(FirstSubKey, "health_pct", 0);
        v144 = (*(NPCByName->_vptr_IHandleEntity + 156))(NPCByName) * v143;
        CDOTA_BaseNPC::ModifyHealth(NPCByName, v144 / 100, 0, 0, 0);
      }
      else if ( strcmp(v27, "create_item_at_entity") == 0 )
      {
        v126 = KeyValues::GetString(FirstSubKey, "entity_name", 0, 0, 0);
        if ( v126 == 0 || *v126 == 0 )
        {
          Warning("Lesson has key with no 'entity' key specified inside it.\n");
          return;
        }
        v127 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v126, 0, 0, 0, 0);
        if ( v127 == 0 )
          return;
        *&flVec = *CBaseEntity::GetAbsOrigin(v127);
        v128 = KeyValues::GetString(FirstSubKey, "item", "", 0, 0);
        v129 = v128;
        if ( v128 == 0 || *v128 == 0 )
        {
LABEL_271:
          Warning("Lesson has key with no 'npc' key specified inside it.\n");
          return;
        }
        v130 = CDOTA_Tutorial::GetHumanPlayer(this);
        if ( v130 == 0 )
          return;
        v131 = CDOTAPlayer::GetAssignedHero(v130);
        v132 = v131;
        if ( v131 == 0 )
          return;
        v133 = (*(v131->_vptr_IHandleEntity + 414))(v131);
        Item = DOTA_CreateItem(v129, v132, v133);
        v139 = Item;
        if ( Item != 0 )
        {
          if ( Item->m_flPurchaseTime.m_Value != 0.0 )
          {
            (*(Item->_vptr_IHandleEntity + 22))(Item, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v135, v136, v137, v138, 0.0);
            v139->m_flPurchaseTime.m_Value = 0.0;
          }
          vecLoc = 0u;
          v204 = 0;
          CreateItemOnPositionAsync(flVec, v139, &vecLoc, 0);
          (*(v139->_vptr_IHandleEntity + 358))(v139, 0);
        }
      }
      else if ( strcmp(v27, "lasthit_ui_mode") == 0 )
      {
        v123 = KeyValues::GetInt(FirstSubKey, 0, 0);
        v124 = g_pGameRules;
        if ( v123 != *&g_pGameRules[9].m_szQuestName[8] )
        {
          v125 = g_pGameRules[5]._vptr_CGameRules;
          if ( v125 != 0 && (*(v125[1] + 49) & 4) == 0 )
            (*(*v125 + 22))(v125, 1312, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
          *&v124[9].m_szQuestName[8] = v123;
        }
      }
      else if ( strcmp(v27, "hud_timer_show_tutorial_timer") == 0 )
      {
        v121 = g_pGameRules;
        if ( g_pGameRules[9].m_szQuestName[12] == 0 )
        {
          v122 = g_pGameRules[5]._vptr_CGameRules;
          if ( v122 != 0 && (*(v122[1] + 49) & 4) == 0 )
            (*(*v122 + 22))(v122, 1316, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
          v121[9].m_szQuestName[12] = 1;
        }
      }
      else if ( strcmp(v27, "activate_lasthit_helper") == 0 )
      {
        CDOTA_Tutorial::ActivateLastHitHelper(&g_DOTATutorial, 0);
      }
      else if ( strcmp(v27, "activate_deny_helper") == 0 )
      {
        CDOTA_Tutorial::ActivateLastHitHelper(&g_DOTATutorial, 1);
      }
      else if ( strcmp(v27, "activate_permanent_glyph") == 0 )
      {
        CDOTA_Tutorial::ActivatePermanentGlyph(&g_DOTATutorial);
      }
      else if ( strcmp(v27, "give_courier") == 0 )
      {
        v116 = CDOTA_Tutorial::GetHumanPlayer(this);
        if ( v116 == 0 )
          return;
        v117 = CDOTAPlayer::GetAssignedHero(v116);
        v118 = v117;
        if ( v117 == 0 )
          return;
        v119 = (*(v117->_vptr_IHandleEntity + 414))(v117);
        v120 = DOTA_CreateItem("item_courier", v118, v119);
        CDOTA_BaseNPC::CastAbilityImmediately(v118, v120, -1);
      }
      else
      {
        if ( strcmp(v27, "murder_all_creeps") != 0 )
        {
          if ( strcmp(v27, "clear_camera_follow") != 0 )
            goto LABEL_122;
LABEL_235:
          CDOTA_Tutorial::SetTargetEntity(this, 0);
          goto LABEL_122;
        }
        CDOTA_Tutorial::MurderAllCreeps(&g_DOTATutorial);
      }
    }
LABEL_122:
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
  }
  while ( FirstSubKey != 0 );
  if ( this->m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
LABEL_124:
    CDOTA_Tutorial::HandleTutorialEvent(this, "lesson_started");
LABEL_112:
  v28 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_tutorial_lesson_start", 0, 0);
  if ( v28 != 0 )
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v28, 0);
}


// CDOTA_Tutorial::SetTowersInLaneInvulnerable  (line 1291, @0x00000000026f83f0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, _V_strstr, strstr
// calls: CGameEntitySystem::FindEntityByClassname, strstr, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "npc_dota_tower", "modifier_invulnerable"
void __fastcall CDOTA_Tutorial::SetTowersInLaneInvulnerable(CDOTA_Tutorial *const this, const char *pszLane)
{
  CDOTA_BaseNPC *v3; // rbx
  CBaseEntity *EntityByClassname; // rax
  const char *m_pAsString; // rdi
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-38h]

  v3 = 0;
  v7 = __readfsqword(0x28u);
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "npc_dota_tower");
    v3 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    m_pAsString = EntityByClassname->m_pEntity->m_name.u.m_pAsString;
    if ( m_pAsString == 0 )
      m_pAsString = "";
    if ( strstr(m_pAsString, pszLane) != 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_invulnerable");
      CDOTA_BaseNPC::AddNewModifier(v3, v3, 0, "modifier_invulnerable", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Tutorial::SetTowersInLaneVulnerable  (line 1308, @0x00000000026f84e0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, _V_strstr, strstr
// calls: CGameEntitySystem::FindEntityByClassname, strstr, CDOTA_BaseNPC::RemoveModifierByName
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "npc_dota_tower", "modifier_invulnerable"
void __fastcall CDOTA_Tutorial::SetTowersInLaneVulnerable(CDOTA_Tutorial *const this, const char *pszLane)
{
  CDOTA_BaseNPC *v3; // rbx
  CBaseEntity *EntityByClassname; // rax
  const char *m_pAsString; // rdi

  v3 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "npc_dota_tower");
    v3 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    m_pAsString = EntityByClassname->m_pEntity->m_name.u.m_pAsString;
    if ( m_pAsString == 0 )
      m_pAsString = "";
    if ( strstr(m_pAsString, pszLane) != 0 )
      CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_invulnerable");
  }
}


// CDOTA_Tutorial::ValidTeleportTarget  (line 1324, @0x00000000026f8560, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
bool __fastcall CDOTA_Tutorial::ValidTeleportTarget(CDOTA_Tutorial *const this, CBaseEntity *pTarget)
{
  int m_Size; // edx
  bool result; // al
  const char *m_pAsString; // r12
  const char **m_pMemory; // rbx
  __int64 v6; // r13

  m_Size = this->m_TeleportTargetList.m_Size;
  result = 1;
  if ( m_Size != 0 )
  {
    if ( m_Size <= 0 )
    {
      return 0;
    }
    else
    {
      m_pAsString = "";
      m_pMemory = this->m_TeleportTargetList.m_Memory.m_pMemory;
      if ( pTarget->m_pEntity->m_name.u.m_Id != 0 )
        m_pAsString = pTarget->m_pEntity->m_name.u.m_pAsString;
      v6 = &m_pMemory[(m_Size - 1) + 1];
      do
      {
        if ( strcmp(m_pAsString, *m_pMemory) == 0 )
          return 1;
        ++m_pMemory;
      }
      while ( m_pMemory != v6 );
      return 0;
    }
  }
  return result;
}


// CDOTA_Tutorial::ValidTeleportLocation  (line 1344, @0x00000000026f85f0, libserver.so)  // inlines: DistToSqr, GetClassNameAsCStr, GetClassname, LengthSqr, String, _V_strcmp
// calls: CBaseEntity::GetAbsOrigin, CGameEntitySystem::FindEntityByName
// strings: "ent_dota_fountain"
bool __fastcall CDOTA_Tutorial::ValidTeleportLocation(CDOTA_Tutorial *const this, const Vector *const vLocation)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  const Vector *AbsOrigin; // rax
  CBaseEntity *EntityByName; // rax
  const char *m_pAsString; // rsi
  float flDistance; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_TeleportTargetList.m_Size;
  if ( m_Size == 0 )
    return 1;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 8LL * (m_Size - 1) + 8;
    while ( 1 )
    {
      EntityByName = CGameEntitySystem::FindEntityByName(
                       g_pGameEntitySystem,
                       0,
                       this->m_TeleportTargetList.m_Memory.m_pMemory[v5 / 8],
                       0,
                       0,
                       0,
                       0);
      if ( EntityByName != 0 )
      {
        m_pAsString = EntityByName->m_pEntity->m_designerName.u.m_pAsString;
        if ( m_pAsString != 0 )
          flDistance = strcmp(m_pAsString, "ent_dota_fountain") == 0 ? 1048576.0 : 62500.0;
        else
          flDistance = 62500.0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByName);
        if ( flDistance > ((((vLocation->x - AbsOrigin->x) * (vLocation->x - AbsOrigin->x))
                          + ((vLocation->y - AbsOrigin->y) * (vLocation->y - AbsOrigin->y)))
                         + ((vLocation->z - AbsOrigin->z) * (vLocation->z - AbsOrigin->z))) )
          break;
      }
      v5 += 8LL;
      if ( v5 == v6 )
        return 0;
    }
    return 1;
  }
  return 0;
}


// CDOTA_Tutorial::SetTimeFrozen  (line 1372, @0x00000000026bd0b0, libserver.so)  // inlines: SetGameTimeFrozen
void __fastcall CDOTA_Tutorial::SetTimeFrozen(CDOTA_Tutorial *const this, bool bEnabled)
{
  g_pGameRules[19].m_szQuestName[48] = bEnabled;
}


// CDOTA_Tutorial::GetTimeFrozen  (line 1384, @0x00000000026bd0e0, libserver.so)
bool __fastcall CDOTA_Tutorial::GetTimeFrozen(CDOTA_Tutorial *const this)
{
  return g_pGameRules[19].m_szQuestName[48];
}


// CDOTA_Tutorial::SetTargetEntity  (line 1391, @0x00000000026f8f60, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CDOTA_Tutorial::GetHumanPlayer, CDOTA_PlayerResource::SetCameraTarget
// callers: CDOTA_Tutorial::UpdateTutorialState, CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::SetTargetEntity(CDOTA_Tutorial *const this, CBaseEntity *pEntity)
{
  CDOTAPlayer *HumanPlayer; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v5; // si
  int v6; // eax
  EHANDLE hTarget; // [rsp+0h] [rbp-20h] BYREF

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    hTarget.m_Index = -1;
    if ( pEntity != 0 )
    {
      m_pEntity = pEntity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v5 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
      }
    }
    v6 = (*(HumanPlayer->_vptr_IHandleEntity + 393))(HumanPlayer);
    CDOTA_PlayerResource::SetCameraTarget(g_pDOTAPlayerResource, v6, &hTarget.m_Index);
  }
}


// CDOTA_Tutorial::GetTargetEntity  (line 1402, @0x00000000026f8b00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Tutorial::GetHumanPlayer, CDOTA_PlayerResource::GetCameraTarget
// callers: CDOTA_Tutorial::UpdateTutorialState
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTA_Tutorial::GetTargetEntity(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax
  int v2; // eax
  CBaseEntity *result; // rax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  uint32 v6[4]; // [rsp+0h] [rbp-10h] BYREF

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer == 0 )
    return 0;
  v2 = (*(HumanPlayer->_vptr_IHandleEntity + 393))(HumanPlayer);
  CDOTA_PlayerResource::GetCameraTarget(v6, g_pDOTAPlayerResource, v2);
  result = 0;
  if ( v6[0] + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6[0]) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[v6[0] & 0x1FF];
      if ( v5 != 0 && v6[0] == v5->m_EHandle.m_Index )
        return v5->m_pInstance;
    }
  }
  return result;
}


// CDOTA_Tutorial::ParseReactiveTip  (line 1414, @0x0000000002710c70, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, Start, _V_strcmp, memset, operator=<float>
// calls: KeyValues::GetName, KeyValues::GetFirstSubKey, KeyValues::GetInt, CountdownTimer::Now, KeyValues::GetString, KeyValues::GetNextKey, CDOTA_Tutorial::ParseNPCSpeech
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "remove_on_mapIO_event", "remove_on_event", "remove_on_ability", "required_count", "repeat_count", "reactive_tip"
bool __fastcall CDOTA_Tutorial::ParseReactiveTip(
        CDOTA_Tutorial *const this,
        KeyValues *pKV,
        ReactiveTipDescription_t *const tip)
{
  KeyValues *FirstSubKey; // r15
  char v6; // r14
  const char *Name; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v12; // [rsp+Ch] [rbp-54h]
  const CountdownTimer *p_repeatTimer; // [rsp+20h] [rbp-40h]
  float Int; // [rsp+28h] [rbp-38h]
  float v16; // [rsp+28h] [rbp-38h]
  bool bHasResult; // [rsp+2Fh] [rbp-31h]

  tip->pszInternalName = KeyValues::GetName(pKV);
  tip->pszTipEvent = 0;
  tip->pszTipMapIOEvent = 0;
  tip->pszTipRemoveOnMapIOEvent = 0;
  tip->pszTipName = 0;
  tip->pszRemoveOnEvent = 0;
  tip->pszRemoveOnAbility = 0;
  memset(&tip->sNPCSpeech, 0, sizeof(tip->sNPCSpeech));
  tip->nRepeatCount = 1;
  tip->nRequiredProgress = 1;
  tip->nCurrentProgress = 0;
  p_repeatTimer = &tip->repeatTimer;
  if ( tip->repeatTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(tip->repeatTimer._vptr_CountdownTimer + 2))(p_repeatTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    tip->repeatTimer.m_timestamp.m_Value = -1.0;
  }
  tip->bForceRemove = 0;
  FirstSubKey = KeyValues::GetFirstSubKey(pKV);
  if ( FirstSubKey == 0 )
    return 0;
  bHasResult = 0;
  v6 = 0;
  do
  {
    Name = KeyValues::GetName(FirstSubKey);
    if ( strcmp(Name, "event") == 0 )
    {
      v6 = 1;
      tip->pszTipEvent = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    }
    else if ( strcmp(Name, "mapIO_event") == 0 )
    {
      v6 = 1;
      tip->pszTipMapIOEvent = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    }
    else if ( strcmp(Name, "remove_on_mapIO_event") == 0 )
    {
      tip->pszTipRemoveOnMapIOEvent = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    }
    else if ( strcmp(Name, "remove_on_event") == 0 )
    {
      tip->pszRemoveOnEvent = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    }
    else if ( strcmp(Name, "remove_on_ability") == 0 )
    {
      tip->pszRemoveOnAbility = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    }
    else if ( strcmp(Name, "required_count") == 0 )
    {
      tip->nRequiredProgress = KeyValues::GetInt(FirstSubKey, 0, 0);
    }
    else if ( strcmp(Name, "repeat_count") == 0 )
    {
      tip->nRepeatCount = KeyValues::GetInt(FirstSubKey, 0, 0);
    }
    else if ( strcmp(Name, "reactive_tip") == 0 )
    {
      bHasResult = 1;
      tip->pszTipName = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
    }
    else if ( strcmp(Name, "npc_speech") == 0 )
    {
      CDOTA_Tutorial::ParseNPCSpeech(this, FirstSubKey, &tip->sNPCSpeech);
      bHasResult = 1;
    }
    else if ( strcmp(Name, "timer") == 0 )
    {
      Int = KeyValues::GetInt(FirstSubKey, 0, 0);
      v8 = CountdownTimer::Now(p_repeatTimer);
      v9 = Int;
      v10 = v8 + Int;
      if ( v10 != tip->repeatTimer.m_timestamp.m_Value )
      {
        v12 = v10;
        (*(tip->repeatTimer._vptr_CountdownTimer + 2))(p_repeatTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v9 = Int;
        tip->repeatTimer.m_timestamp.m_Value = v12;
      }
      if ( v9 == tip->repeatTimer.m_duration.m_Value )
      {
        v6 = 1;
      }
      else
      {
        v16 = v9;
        v6 = 1;
        (*(tip->repeatTimer._vptr_CountdownTimer + 2))(p_repeatTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        tip->repeatTimer.m_duration.m_Value = v16;
      }
    }
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
  }
  while ( FirstSubKey != 0 );
  return v6 & bHasResult;
}


// CDOTA_Tutorial::ParseNPCSpeech  (line 1488, @0x0000000002710990, libserver.so)  // inlines: AddToTail, CopyConstruct<char const*>, Element, GetBool, GrowMemory, operator[]
// calls: KeyValues::GetString, KeyValues::GetFloat, KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, CUtlMemory<char const*, int>::Grow
// callers: CDOTA_Tutorial::ParseReactiveTip, CDOTA_Tutorial::ParseLessonKeys
// strings: "npc_sound", "initial_delay", "find_nearest_friendly", "allow_movement", "vo"
bool __fastcall CDOTA_Tutorial::ParseNPCSpeech(
        CDOTA_Tutorial *const this,
        KeyValues *pKV,
        NPCSpeechData_t *const sSpeech)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  KeyValues *Key; // rax
  KeyValues *v8; // r12
  KeyValues *i; // r12
  const char **v10; // rdx
  const char *Name; // rax
  __int64 m_Size; // r13
  int v13; // edx
  const char *String; // rax
  __int64 v15; // r12
  int v16; // edx
  const char **v17; // rdx
  KeyValues *v18; // rax
  KeyValues *v19; // r12
  KeyValues *j; // r12
  const char **v21; // rdx
  const char *v22; // rax
  __int64 v23; // r13
  int v24; // edx
  const char *v25; // rax
  __int64 v26; // r12
  int v27; // edx
  const char **v28; // rdx
  const char *v30; // [rsp+8h] [rbp-38h]
  const char *v31; // [rsp+8h] [rbp-38h]
  const char *v32; // [rsp+8h] [rbp-38h]
  const char *v33; // [rsp+8h] [rbp-38h]

  sSpeech->pszNPCName = KeyValues::GetString(pKV, "npc", 0, 0, 0);
  sSpeech->pszNPCNameSound = KeyValues::GetString(pKV, "npc_sound", 0, 0, 0);
  sSpeech->flLifetime = KeyValues::GetFloat(pKV, "duration", v5);
  sSpeech->flInitialDelay = KeyValues::GetFloat(pKV, "initial_delay", v6);
  sSpeech->flStartAt = 0.0;
  sSpeech->bFindNearestFriendly = KeyValues::GetInt(pKV, "find_nearest_friendly", 0) != 0;
  sSpeech->bAllowMovement = KeyValues::GetInt(pKV, "allow_movement", 0) != 0;
  sSpeech->bShouldFacePlayer = KeyValues::GetInt(pKV, "face_player", 0) != 0;
  Key = KeyValues::FindKey(pKV, "text", 0);
  v8 = Key;
  if ( Key != 0 )
  {
    if ( KeyValues::GetFirstSubKey(Key) != 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(v8); i != 0; i = KeyValues::GetNextKey(i) )
      {
        Name = KeyValues::GetName(i);
        m_Size = sSpeech->vecSpeech.m_Size;
        v13 = sSpeech->vecSpeech.m_Size;
        if ( m_Size == sSpeech->vecSpeech.m_Memory.m_nAllocationCount )
        {
          v30 = Name;
          CUtlMemory<char const*,int>::Grow(&sSpeech->vecSpeech.m_Memory, 1);
          v13 = sSpeech->vecSpeech.m_Size;
          Name = v30;
        }
        sSpeech->vecSpeech.m_Size = v13 + 1;
        v10 = &sSpeech->vecSpeech.m_Memory.m_pMemory[m_Size];
        if ( v10 != 0 )
          *v10 = Name;
      }
    }
    else
    {
      String = KeyValues::GetString(v8, 0, "", 0, 0);
      v15 = sSpeech->vecSpeech.m_Size;
      v16 = sSpeech->vecSpeech.m_Size;
      if ( v15 == sSpeech->vecSpeech.m_Memory.m_nAllocationCount )
      {
        v33 = String;
        CUtlMemory<char const*,int>::Grow(&sSpeech->vecSpeech.m_Memory, 1);
        v16 = sSpeech->vecSpeech.m_Size;
        String = v33;
      }
      sSpeech->vecSpeech.m_Size = v16 + 1;
      v17 = &sSpeech->vecSpeech.m_Memory.m_pMemory[v15];
      if ( v17 != 0 )
        *v17 = String;
    }
  }
  v18 = KeyValues::FindKey(pKV, "vo", 0);
  v19 = v18;
  if ( v18 != 0 )
  {
    if ( KeyValues::GetFirstSubKey(v18) != 0 )
    {
      for ( j = KeyValues::GetFirstSubKey(v19); j != 0; j = KeyValues::GetNextKey(j) )
      {
        v22 = KeyValues::GetName(j);
        v23 = sSpeech->vecVO.m_Size;
        v24 = sSpeech->vecVO.m_Size;
        if ( v23 == sSpeech->vecVO.m_Memory.m_nAllocationCount )
        {
          v31 = v22;
          CUtlMemory<char const*,int>::Grow(&sSpeech->vecVO.m_Memory, 1);
          v24 = sSpeech->vecVO.m_Size;
          v22 = v31;
        }
        sSpeech->vecVO.m_Size = v24 + 1;
        v21 = &sSpeech->vecVO.m_Memory.m_pMemory[v23];
        if ( v21 != 0 )
          *v21 = v22;
      }
    }
    else
    {
      v25 = KeyValues::GetString(v19, 0, "", 0, 0);
      v26 = sSpeech->vecVO.m_Size;
      v27 = sSpeech->vecVO.m_Size;
      if ( v26 == sSpeech->vecVO.m_Memory.m_nAllocationCount )
      {
        v32 = v25;
        CUtlMemory<char const*,int>::Grow(&sSpeech->vecVO.m_Memory, 1);
        v27 = sSpeech->vecVO.m_Size;
        v25 = v32;
      }
      sSpeech->vecVO.m_Size = v27 + 1;
      v28 = &sSpeech->vecVO.m_Memory.m_pMemory[v26];
      if ( v28 != 0 )
        *v28 = v25;
    }
  }
  return 1;
}


// CDOTA_Tutorial::ParseHeroLevelup  (line 1536, @0x00000000026f8720, libserver.so)  // inlines: GetLevel, ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: KeyValues::GetString, CGameEntitySystem::FindEntityByClassname, Warning, KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, CDOTA_BaseNPC::FindAbilityByName
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "Tutorial: hero_levelup command failed to find hero of class '%s'.\n", "levelups", "Tutorial: hero_levelup command contains 'levelup' section with an invalid ability name: ', "Tutorial: hero_levelup command with no 'hero' key specified.\n"
void __fastcall CDOTA_Tutorial::ParseHeroLevelup(CDOTA_Tutorial *const this, KeyValues *pKVLessonItem)
{
  const char *String; // rax
  const char *v4; // rbx
  CBaseEntity *EntityByClassname; // rax
  CDOTA_BaseNPC *v6; // r13
  int Int; // eax
  int m_Value; // ebx
  int v9; // r12d
  KeyValues *Key; // rax
  KeyValues *FirstSubKey; // rbx
  const char *Name; // rax
  const char *v13; // r12
  CDOTABaseAbility *AbilityByName; // rax

  String = KeyValues::GetString(pKVLessonItem, "hero", 0, 0, 0);
  v4 = String;
  if ( String == 0 )
  {
    Warning("Tutorial: hero_levelup command with no 'hero' key specified.\n");
    return;
  }
  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, String);
  v6 = EntityByClassname;
  if ( EntityByClassname == 0
    || !EntityByClassname->m_bIsDOTANPC
    || (EntityByClassname[2].m_hEffectEntity.m_Value.m_Index & 1) == 0 )
  {
    Warning("Tutorial: hero_levelup command failed to find hero of class '%s'.\n", v4);
    return;
  }
  Int = KeyValues::GetInt(pKVLessonItem, "level", -1);
  m_Value = v6->m_iCurrentLevel.m_Value;
  v9 = Int;
  if ( Int > m_Value )
  {
    do
    {
      ++m_Value;
      (*(v6->_vptr_IHandleEntity + 492))(v6, 0);
    }
    while ( m_Value != v9 );
  }
  Key = KeyValues::FindKey(pKVLessonItem, "levelups", 0);
  FirstSubKey = KeyValues::GetFirstSubKey(Key);
  if ( FirstSubKey != 0 )
  {
    while ( 1 )
    {
      Name = KeyValues::GetName(FirstSubKey);
      v13 = Name;
      if ( Name == 0 || *Name == 0 )
        goto LABEL_10;
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v6, Name, 0);
      if ( AbilityByName != 0 )
      {
        (*(v6->_vptr_IHandleEntity + 495))(v6, AbilityByName);
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          return;
      }
      else
      {
        Warning("Tutorial: hero_levelup command contains 'levelup' section with an invalid ability name: '%s'\n", v13);
LABEL_10:
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          return;
      }
    }
  }
}


// CDOTA_Tutorial::ParseHighlightHud  (line 1578, @0x00000000026f88a0, libserver.so)  // inlines: CreateEvent
// calls: KeyValues::GetString, KeyValues::GetFloat
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "hide_highlight_hud_element", "elementname"
void __fastcall CDOTA_Tutorial::ParseHighlightHud(CDOTA_Tutorial *const this, KeyValues *pKVLessonItem)
{
  const char *String; // rax
  const char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  void (__fastcall *v8)(__int64, const char *, float); // rbx
  float v9; // xmm1_4
  float Float; // xmm0_4

  String = KeyValues::GetString(pKVLessonItem, "element", 0, 0, 0);
  v4 = String;
  if ( String != 0 && *String != 0 )
  {
    v6 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "highlight_hud_element", 0, 0);
    v7 = v6;
    if ( v6 != 0 )
    {
      (*(*v6 + 136LL))(v6, "elementname", v4);
      v8 = *(*v7 + 128LL);
      Float = KeyValues::GetFloat(pKVLessonItem, "duration", v9);
      v8(v7, "duration", Float);
      (*(gameeventmanager->_vptr_IBaseInterface + 9))(gameeventmanager, v7);
    }
  }
  else
  {
    v5 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hide_highlight_hud_element", 0, 0);
    if ( v5 != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 9))(gameeventmanager, v5);
  }
}


// CDOTA_Tutorial::FrameUpdatePostEntityThink  (line 1602, @0x0000000002718cb0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_TutorialPingMinimap_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, CreateEvent, DOTAGameRules, FindGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>, FindOrCreateGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetRaw, GetRemainingTime, GetShopPanel, GetTutorialState, HandleTutorialEvent, HasStarted, IndexToIdentity, Invalidate, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, PostEvent<CDOTAUserMsg_TutorialPingMinimap_t>, Reset, SendUserMessage<CDOTAUserMsg_TutorialPingMinimap_t>, Set, SetTaskSecondsRemaining, curtime, operator CEntityInstance*, operator=<float>, operator><float>, operator[], set_entity_index, set_has_entity_index, set_has_player_id, set_player_id, set_pos_x, set_pos_y, set_pos_z, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_TutorialPingMinimap_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CountdownTimer::Now, CDOTA_Tutorial::ReactiveTipFired, CDOTA_Tutorial::StartNPCSpeech, CUtlVectorBase<NPCSpeechData_t, CUtlMemory<NPCSpeechData_t, int> >::Remove, CDOTA_Tutorial::GetHumanPlayer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_TutorialPingMinimap::CDOTAUserMsg_TutorialPingMinimap, CDOTAUserMsg_TutorialPingMinimap::~CDOTAUserMsg_TutorialPingMinimap, CRecipientFilter::~CRecipientFilter, CDOTA_Tutorial::FindNextLesson (16 total)
// strings: "dota_tutorial_shop_toggled", "shop_opened", "player_opened_shop", "player_closed_shop"
// globals: CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>(bool)::s_hEvent
void __fastcall CDOTA_Tutorial::FrameUpdatePostEntityThink(
        CDOTA_Tutorial *const this,
        const EventServerPostEntityThink_t *const a2)
{
  CountdownTimer *p_m_TipDelayTimer; // r12
  float v4; // xmm0_4
  uint32 m_Index; // eax
  int v6; // r14d
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  float v9; // xmm0_4
  float v10; // xmm1_4
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  int v14; // r12d
  __int64 v15; // r13
  ReactiveTipDescription_t *v16; // r14
  int v17; // r12d
  __int64 v18; // r13
  float v19; // xmm1_4
  NPCSpeechData_t *v20; // rsi
  CDOTAPlayer *HumanPlayer; // rax
  double v22; // xmm2_8
  double v23; // xmm3_8
  int v24; // eax
  __int64 v25; // r12
  float v26; // xmm0_4
  float m_flTime; // xmm0_4
  ReactiveTipDescription_t *v28; // r14
  float v29; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v31; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int m_iPlayer; // edx
  float v34; // xmm0_4
  __int64 v35; // r15
  int32 m_Data; // edx
  float v37; // xmm0_4
  float v38; // xmm0_4
  IGameEventSystem *v39; // r14
  float m_flRepeatTime; // xmm0_4
  CGlobalVars *v41; // r14
  FnGlobalVarsWarningFunc v42; // rax
  float v43; // xmm1_4
  CEntityInstance *m_pInstance; // r13
  float m_Value; // [rsp+8h] [rbp-1B0h]
  float v46; // [rsp+8h] [rbp-1B0h]
  float v47; // [rsp+8h] [rbp-1B0h]
  void (__fastcall *v48)(IGameEventSystem *, _QWORD, _QWORD, __int64 (__fastcall ***)(CRecipientFilter *__hidden), __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1B0h]
  _QWORD v49[2]; // [rsp+10h] [rbp-1A8h] BYREF
  int v50; // [rsp+20h] [rbp-198h]
  int v51; // [rsp+28h] [rbp-190h]
  float v52; // [rsp+2Ch] [rbp-18Ch]
  float v53; // [rsp+30h] [rbp-188h]
  float v54; // [rsp+34h] [rbp-184h]
  int32 v55; // [rsp+38h] [rbp-180h]
  __int64 (__fastcall **v56)(CRecipientFilter *__hidden); // [rsp+40h] [rbp-178h] BYREF
  CReliableBroadcastRecipientFilter filterbroadcast; // [rsp+48h] [rbp-170h]

  *&filterbroadcast.m_bUsingPredictionRules = __readfsqword(0x28u);
  m_Value = this->m_TipDelayTimer.m_timestamp.m_Value;
  if ( m_Value > 0.0 )
  {
    p_m_TipDelayTimer = &this->m_TipDelayTimer;
    v4 = CountdownTimer::Now(&this->m_TipDelayTimer);
    m_Index = this->m_hData.m_Index;
    v6 = (m_Value - v4);
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[this->m_hData.m_Index & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0 && v6 != HIDWORD(m_pInstance[16].m_hPrivateScope.m_hScope) )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            HIDWORD(m_pInstance[16].m_hPrivateScope.m_hScope) = v6;
          }
        }
      }
    }
    v9 = CountdownTimer::Now(p_m_TipDelayTimer);
    v10 = this->m_TipDelayTimer.m_timestamp.m_Value;
    if ( v9 >= v10 )
    {
      if ( v10 != -1.0 )
      {
        (*(this->m_TipDelayTimer._vptr_CountdownTimer + 2))(p_m_TipDelayTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_TipDelayTimer.m_timestamp.m_Value = -1.0;
      }
      CDOTA_Tutorial::FindNextLesson(this);
    }
  }
  v11 = this->m_hData.m_Index;
  if ( v11 + 2 > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[this->m_hData.m_Index & 0x1FF];
      if ( v13 != 0
        && v11 == v13->m_EHandle.m_Index
        && v13->m_pInstance != 0
        && LODWORD(v13->m_pInstance[16].m_pEntity) != 0 )
      {
        CDOTA_Tutorial::UpdateTutorialState(this);
      }
    }
  }
  v14 = this->m_ReactiveTips.m_Size - 1;
  if ( v14 >= 0 )
  {
    v15 = v14;
    do
    {
      v16 = &this->m_ReactiveTips.m_Memory.m_pMemory[v15];
      if ( v16->repeatTimer.m_timestamp.m_Value > 0.0
        && CountdownTimer::Now(&v16->repeatTimer) >= v16->repeatTimer.m_timestamp.m_Value
        && !CDOTA_Tutorial::ReactiveTipFired(this, v14) )
      {
        v28 = &this->m_ReactiveTips.m_Memory.m_pMemory[v15];
        v29 = CountdownTimer::Now(&v28->repeatTimer) + v28->repeatTimer.m_duration.m_Value;
        if ( v29 != v28->repeatTimer.m_timestamp.m_Value )
        {
          v46 = v29;
          (*(v28->repeatTimer._vptr_CountdownTimer + 2))(&v28->repeatTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v28->repeatTimer.m_timestamp.m_Value = v46;
        }
      }
      --v14;
      --v15;
    }
    while ( v14 != -1 );
  }
  v17 = this->m_DelayedSpeech.m_Size - 1;
  if ( v17 >= 0 )
  {
    v18 = v17;
    do
    {
      while ( 1 )
      {
        v19 = 0.0;
        v20 = &this->m_DelayedSpeech.m_Memory.m_pMemory[v18];
        if ( g_pGameRules != 0 )
          v19 = *&g_pGameRules[18].m_szQuestName[20];
        if ( v19 > v20->flStartAt )
          break;
        --v17;
        --v18;
        if ( v17 == -1 )
          goto LABEL_24;
      }
      --v18;
      CDOTA_Tutorial::StartNPCSpeech(this, v20);
      CUtlVectorBase<NPCSpeechData_t,CUtlMemory<NPCSpeechData_t,int>>::Remove(&this->m_DelayedSpeech, v17--);
    }
    while ( v17 != -1 );
  }
LABEL_24:
  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    v24 = HumanPlayer->m_iShopPanel.m_Value;
    if ( this->m_nPrevShopPanel != v24 )
    {
      this->m_nPrevShopPanel = v24;
      v25 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_tutorial_shop_toggled", 0, 0);
      if ( v25 != 0 )
      {
        v26 = this->m_TipDelayTimer.m_timestamp.m_Value;
        if ( this->m_nPrevShopPanel == 15 )
        {
          if ( v26 <= 0.0 )
            CDOTA_Tutorial::HandleTutorialEvent(this, "player_closed_shop");
          (*(*v25 + 104LL))(v25, "shop_opened", 0);
        }
        else
        {
          if ( v26 <= 0.0 )
            CDOTA_Tutorial::HandleTutorialEvent(this, "player_opened_shop");
          (*(*v25 + 104LL))(v25, "shop_opened", 1);
        }
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v25, 1);
      }
    }
  }
  m_flTime = this->m_PingData.m_flTime;
  if ( m_flTime != 0.0 )
  {
    m_flCurrentTime = 0.0;
    v31 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v47 = this->m_PingData.m_flTime;
          (m_pfnWarningFunc)(1, m_flTime, 0.0, v22, v23, 0.0);
          m_flTime = v47;
        }
      }
      m_flCurrentTime = v31->m_flCurrentTime;
    }
    if ( m_flCurrentTime > m_flTime )
    {
      CRecipientFilter::CRecipientFilter(&v56);
      v56 = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&v56);
      v56 = &off_3FCB130;
      CRecipientFilter::MakeReliable(&v56);
      CDOTAUserMsg_TutorialPingMinimap::CDOTAUserMsg_TutorialPingMinimap(v49);
      m_iPlayer = this->m_PingData.m_iPlayer;
      v49[0] = off_4186850;
      v34 = this->m_PingData.m_flPos[0];
      v35 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>(bool)::s_hEvent;
      v51 = m_iPlayer;
      m_Data = this->m_PingData.m_EntityNumber.m_Data;
      v52 = v34;
      v37 = this->m_PingData.m_flPos[1];
      v50 |= 0x1Fu;
      v53 = v37;
      v38 = this->m_PingData.m_flPos[2];
      v55 = m_Data;
      v54 = v38;
      v39 = g_pGameEventSystem;
      v48 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialPingMinimap_t>(bool)::s_hEvent);
      v48(v39, 0, 0, &v56, v35, v49, 48);
      m_flRepeatTime = this->m_PingData.m_flRepeatTime;
      this->m_PingData.m_flTime = 0.0;
      if ( m_flRepeatTime > 0.0 )
      {
        v41 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v42 = gpGlobals->m_pfnWarningFunc;
            if ( v42 != 0 )
            {
              v42(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              m_flRepeatTime = this->m_PingData.m_flRepeatTime;
            }
          }
          v43 = v41->m_flCurrentTime;
        }
        else
        {
          v43 = 0.0;
        }
        this->m_PingData.m_flTime = m_flRepeatTime + v43;
      }
      v49[0] = &off_41866D0;
      CDOTAUserMsg_TutorialPingMinimap::~CDOTAUserMsg_TutorialPingMinimap(v49);
      v56 = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&v56);
    }
  }
}


// CDOTA_Tutorial::OnPlayerFullyJoined  (line 1687, @0x00000000026fc6a0, libserver.so)  // inlines: HandleTutorialEvent
// calls: CDOTA_Tutorial::HandleTutorialEvent
// callers: CDOTAGameConfiguration::OnClientFullyConnect
// strings: "player_joined"
void __fastcall CDOTA_Tutorial::OnPlayerFullyJoined(CDOTA_Tutorial *const this)
{
  if ( this->m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
    CDOTA_Tutorial::HandleTutorialEvent(this, "player_joined");
}


// CDOTA_Tutorial::OnEnterPreGame  (line 1694, @0x00000000026fc6d0, libserver.so)  // inlines: HandleTutorialEvent
// calls: CDOTA_Tutorial::HandleTutorialEvent
// callers: CDOTAGamerules::State_Enter_PRE_GAME
// strings: "enter_pre_game"
void __fastcall CDOTA_Tutorial::OnEnterPreGame(CDOTA_Tutorial *const this)
{
  if ( this->m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
    CDOTA_Tutorial::HandleTutorialEvent(this, "enter_pre_game");
}


// CDOTA_Tutorial::FireGameEvent  (line 1708, @0x00000000027184d0, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntityIndex, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, Instance, IsUsed, IsValid, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, NetworkStateChanged, OnTutorialPlayerReachedLevelSix, Set, SetTutorialState, StopListeningForAllEvents, _V_strcmp, curtime, entindex, operator CEntityInstance*
// calls: CDOTA_Tutorial::GetHumanPlayer, CEntityInstance::GetEntityIndex, CDOTA_Tutorial::HandleReactiveTipEvent, KeyValues::FindKey, KeyValues::GetString, strcmp, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, CDOTA_Tutorial::IncrementTaskProgress, Msg, CDOTA_Tutorial::OnQuestComplete (13 total)
// strings: "dota_quest_completed", "dota_player_gained_level", "dota_player_learned_ability", "task_progress_event", "task_buy_items", "dota_item_purchased" (19 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::FireGameEvent(CDOTA_Tutorial *const this, IGameEvent *event)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  const char *v9; // rdi
  __int64 v10; // rcx
  _BYTE *v11; // rsi
  bool v12; // zf
  __int64 v13; // rax
  const char *v14; // rdi
  __int64 v15; // rcx
  _BYTE *v16; // rsi
  CDOTAPlayer *HumanPlayer; // r13
  int v18; // r14d
  CDOTAPlayer *v19; // r13
  int v20; // r15d
  KeyValues *Key; // rax
  const char *String; // r13
  const char *v23; // rax
  KeyValues *v24; // r13
  KeyValues *i; // r13
  const char *Name; // r15
  const char *v27; // rax
  const char *v28; // rax
  KeyValues *v29; // r13
  const char *v30; // r13
  const char *v31; // rax
  KeyValues *v32; // r13
  KeyValues *v33; // r13
  const char *v34; // r13
  const char *v35; // rax
  KeyValues *v36; // r13
  KeyValues *j; // r13
  const char *v38; // r14
  const char *v39; // rax
  int v40; // eax
  const CDotaQuest *m_pInstance; // rsi
  CEntityIdentity *v42; // rcx
  CEntityIdentity *v43; // rdx
  CEntityInstance *v44; // rbx
  CDOTASteamWorksGameStatsServer *DOTASteamWorksGameStatsServer; // r14
  CGlobalVars *v46; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  const char *v49; // r13
  const char *v50; // rax

  if ( dota_tutorial_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v28 = (*(event->_vptr_IGameEvent + 2))(event);
    Msg("Event: %s\n", v28);
  }
  if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0 )
  {
    v8 = (*(event->_vptr_IGameEvent + 2))(event);
    v9 = "dota_quest_completed";
    v10 = 21;
    v11 = v8;
    do
    {
      if ( v10 == 0 )
        break;
      v7 = *v11++ == *v9++;
      --v10;
    }
    while ( v7 );
    if ( v7 )
    {
      v40 = (*(event->_vptr_IGameEvent + 8))(event, "questIndex", 0);
      m_pInstance = 0;
      if ( v40 <= 0x7FFE )
      {
        v42 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v40 >> 9];
        if ( v42 != 0 )
        {
          v43 = &v42[v40 & 0x1FF];
          if ( v43 != 0 && v40 == (v43->m_EHandle.m_Index & 0x7FFF) )
            m_pInstance = v43->m_pInstance;
        }
      }
      CDOTA_Tutorial::OnQuestComplete(this, m_pInstance);
    }
    v13 = (*(event->_vptr_IGameEvent + 2))(event, v11);
    v14 = "dota_player_gained_level";
    v15 = 25;
    v16 = v13;
    do
    {
      if ( v15 == 0 )
        break;
      v12 = *v16++ == *v14++;
      --v15;
    }
    while ( v12 );
    if ( v12 )
    {
      HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
      if ( HumanPlayer != 0 )
      {
        v18 = (*(event->_vptr_IGameEvent + 8))(event, "player", 0);
        if ( v18 == CEntityInstance::GetEntityIndex(HumanPlayer).m_Data
          && (*(event->_vptr_IGameEvent + 8))(event, "level", 0) == 6 )
        {
          DOTASteamWorksGameStatsServer = GetDOTASteamWorksGameStatsServer();
          v46 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            }
            m_flCurrentTime = v46->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          DOTASteamWorksGameStatsServer->m_TutorialStats.m_nTimeToLevelSix = m_flCurrentTime;
        }
      }
    }
    if ( (strcmp((*(event->_vptr_IGameEvent + 2))(event, v16), "dota_player_learned_ability") != 0
       || (v19 = CDOTA_Tutorial::GetHumanPlayer(this)) == 0
       || (v20 = (*(event->_vptr_IGameEvent + 8))(event, "player", 0)) == CEntityInstance::GetEntityIndex(v19).m_Data)
      && !CDOTA_Tutorial::HandleReactiveTipEvent(this, event) )
    {
      Key = KeyValues::FindKey(this->m_pLessonKeys, "task_progress_event", 0);
      if ( Key != 0 )
      {
        String = KeyValues::GetString(Key, 0, "", 0, 0);
        v23 = (*(event->_vptr_IGameEvent + 2))(event);
        if ( strcmp(v23, String) == 0 )
          CDOTA_Tutorial::IncrementTaskProgress(this);
      }
      v24 = KeyValues::FindKey(this->m_pLessonKeys, "task_buy_items", 0);
      if ( v24 != 0 && strcmp((*(event->_vptr_IGameEvent + 2))(event), "dota_item_purchased") == 0 )
      {
        for ( i = KeyValues::GetFirstSubKey(v24); i != 0; i = KeyValues::GetNextKey(i) )
        {
          Name = KeyValues::GetName(i);
          v27 = (*(event->_vptr_IGameEvent + 11))(event, "itemname", "");
          if ( strcmp(v27, Name) == 0 )
            CDOTA_Tutorial::IncrementTaskProgress(this);
        }
      }
      v29 = KeyValues::FindKey(this->m_pLessonKeys, "task_use_item", 0);
      if ( v29 != 0 && strcmp((*(event->_vptr_IGameEvent + 2))(event), "dota_item_used") == 0 )
      {
        v30 = KeyValues::GetString(v29, 0, "", 0, 0);
        v31 = (*(event->_vptr_IGameEvent + 11))(event, "itemname", "");
        if ( strcmp(v31, v30) == 0 )
          CDOTA_Tutorial::IncrementTaskProgress(this);
      }
      v32 = KeyValues::FindKey(this->m_pLessonKeys, "task_learn_ability", 0);
      if ( v32 != 0 && strcmp((*(event->_vptr_IGameEvent + 2))(event), "dota_player_learned_ability") == 0 )
      {
        if ( *KeyValues::GetString(v32, 0, "", 0, 0) == 0
          || (v49 = KeyValues::GetString(v32, 0, "", 0, 0),
              v50 = (*(event->_vptr_IGameEvent + 11))(event, "abilityname", ""),
              strcmp(v50, v49) == 0) )
        {
          CDOTA_Tutorial::IncrementTaskProgress(this);
        }
      }
      v33 = KeyValues::FindKey(this->m_pLessonKeys, "task_use_ability", 0);
      if ( v33 != 0 && strcmp((*(event->_vptr_IGameEvent + 2))(event), "dota_player_used_ability") == 0 )
      {
        v34 = KeyValues::GetString(v33, 0, "", 0, 0);
        v35 = (*(event->_vptr_IGameEvent + 11))(event, "abilityname", "");
        if ( strcmp(v35, v34) == 0 )
          CDOTA_Tutorial::IncrementTaskProgress(this);
      }
      v36 = KeyValues::FindKey(this->m_pLessonKeys, "task_get_item_on_player", 0);
      if ( v36 != 0 && strcmp((*(event->_vptr_IGameEvent + 2))(event), "dota_inventory_player_got_item") == 0 )
      {
        for ( j = KeyValues::GetFirstSubKey(v36); j != 0; j = KeyValues::GetNextKey(j) )
        {
          v38 = KeyValues::GetName(j);
          v39 = (*(event->_vptr_IGameEvent + 11))(event, "itemname", "");
          if ( strcmp(v39, v38) == 0 )
            CDOTA_Tutorial::IncrementTaskProgress(this);
        }
      }
      if ( KeyValues::FindKey(this->m_pLessonKeys, "task_courier_transfer_item", 0) != 0
        && strcmp((*(event->_vptr_IGameEvent + 2))(event), "dota_courier_transfer_item") == 0 )
      {
        CDOTA_Tutorial::IncrementTaskProgress(this);
      }
    }
  }
  else
  {
    if ( this->m_bRegisteredForEvents )
    {
      if ( gameeventmanager != 0 )
        (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
      this->m_bRegisteredForEvents = 0;
    }
    m_Index = this->m_hData.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hData.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          v44 = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && LODWORD(v44[16].m_pEntity) != 0 )
          {
            (*(v44->_vptr_IHandleEntity + 22))(v6->m_pInstance, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            LODWORD(v44[16].m_pEntity) = 0;
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::HandleReactiveTipEvent  (line 1825, @0x0000000002718370, libserver.so)  // inlines: _V_strcmp, operator[]
// calls: CDOTA_Tutorial::GetHumanPlayer, strcmp, CUtlVectorBase<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >::Remove, CDOTA_Tutorial::ReactiveTipFired
// callers: CDOTA_Tutorial::FireGameEvent
// strings: "playerID", "abilityname"
bool __fastcall CDOTA_Tutorial::HandleReactiveTipEvent(CDOTA_Tutorial *const this, IGameEvent *event)
{
  CDOTAPlayer *HumanPlayer; // rax
  int v5; // ebx
  int v7; // r13d
  __int64 i; // rbx
  ReactiveTipDescription_t *v9; // rdx
  const char *v10; // rax
  ReactiveTipDescription_t *v11; // r15
  int v12; // eax
  const char *pszTipEvent; // r15
  const char *v14; // rax
  const char *pszRemoveOnEvent; // r15
  const char *v16; // rax

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    v5 = (*(HumanPlayer->_vptr_IHandleEntity + 393))(HumanPlayer);
    if ( v5 == (*(event->_vptr_IGameEvent + 8))(event, "playerID", 0) )
    {
      v7 = this->m_ReactiveTips.m_Size - 1;
      if ( v7 >= 0 )
      {
        for ( i = v7; ; --i )
        {
          v9 = &this->m_ReactiveTips.m_Memory.m_pMemory[i];
          pszTipEvent = v9->pszTipEvent;
          if ( pszTipEvent != 0 )
          {
            v14 = (*(event->_vptr_IGameEvent + 2))(event);
            if ( strcmp(v14, pszTipEvent) == 0 )
              CDOTA_Tutorial::ReactiveTipFired(this, v7);
            v9 = &this->m_ReactiveTips.m_Memory.m_pMemory[i];
          }
          pszRemoveOnEvent = v9->pszRemoveOnEvent;
          if ( pszRemoveOnEvent == 0 )
            goto LABEL_7;
          v16 = (*(event->_vptr_IGameEvent + 2))(event);
          if ( strcmp(v16, pszRemoveOnEvent) != 0 )
            break;
LABEL_17:
          CUtlVectorBase<ReactiveTipDescription_t,CUtlMemory<ReactiveTipDescription_t,int>>::Remove(
            &this->m_ReactiveTips,
            v7);
LABEL_10:
          if ( --v7 == -1 )
            return 0;
        }
        v9 = &this->m_ReactiveTips.m_Memory.m_pMemory[i];
LABEL_7:
        if ( v9->pszRemoveOnAbility == 0
          || (v10 = (*(event->_vptr_IGameEvent + 11))(event, "abilityname", ""),
              v11 = &this->m_ReactiveTips.m_Memory.m_pMemory[i],
              v12 = strcmp(v10, v11->pszRemoveOnAbility),
              v9 = v11,
              v12 != 0) )
        {
          if ( !v9->bForceRemove )
            goto LABEL_10;
        }
        goto LABEL_17;
      }
    }
  }
  return 0;
}


// CDOTA_Tutorial::ReactiveTipFired  (line 1872, @0x00000000027182a0, libserver.so)  // inlines: operator[]
// calls: ShowTutorialTip, CDOTA_Tutorial::StartNPCSpeech, CUtlVectorBase<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >::Remove
// callers: CDOTA_Tutorial::HandleReactiveTipEvent, CDOTA_Tutorial::HandleMapIOEvent, CDOTA_Tutorial::FrameUpdatePostEntityThink
bool __fastcall CDOTA_Tutorial::ReactiveTipFired(CDOTA_Tutorial *const this, int iTip)
{
  __int64 v3; // r12
  bool result; // al
  ReactiveTipDescription_t *v6; // rdx
  ReactiveTipDescription_t *v7; // rsi
  const char *pszTipName; // rdi
  const char *pszNPCName; // rax

  v3 = iTip;
  ++this->m_ReactiveTips.m_Memory.m_pMemory[v3].nCurrentProgress;
  result = 0;
  v6 = &this->m_ReactiveTips.m_Memory.m_pMemory[v3];
  if ( v6->nCurrentProgress >= v6->nRequiredProgress )
  {
    v6->nCurrentProgress = 0;
    --this->m_ReactiveTips.m_Memory.m_pMemory[v3].nRepeatCount;
    v7 = &this->m_ReactiveTips.m_Memory.m_pMemory[v3];
    pszTipName = v7->pszTipName;
    if ( pszTipName != 0 )
    {
      ShowTutorialTip(pszTipName, 0, 0);
      v7 = &this->m_ReactiveTips.m_Memory.m_pMemory[v3];
    }
    pszNPCName = v7->sNPCSpeech.pszNPCName;
    if ( pszNPCName != 0 && *pszNPCName != 0 )
    {
      CDOTA_Tutorial::StartNPCSpeech(this, &v7->sNPCSpeech);
      v7 = &this->m_ReactiveTips.m_Memory.m_pMemory[v3];
    }
    result = 0;
    if ( v7->nRepeatCount <= 0 )
    {
      CUtlVectorBase<ReactiveTipDescription_t,CUtlMemory<ReactiveTipDescription_t,int>>::Remove(
        &this->m_ReactiveTips,
        iTip);
      return 1;
    }
  }
  return result;
}


// CDOTA_Tutorial::HandleMapIOEvent  (line 1901, @0x0000000002718bb0, libserver.so)  // inlines: HandleTutorialEvent, _V_strcmp, operator[]
// calls: strcmp, CDOTA_Tutorial::ReactiveTipFired, CUtlVectorBase<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >::Remove, CDOTA_Tutorial::HandleTutorialEvent
// callers: CDOTA_ScriptedSpawner::InputFireTutorialAdvanceEvent
void __fastcall CDOTA_Tutorial::HandleMapIOEvent(CDOTA_Tutorial *const this, const char *pszEvent)
{
  int v4; // ebx
  __int64 v5; // r12
  const char *pszTipRemoveOnMapIOEvent; // rsi
  ReactiveTipDescription_t *v7; // r15
  const char *pszTipMapIOEvent; // rsi
  int v9; // eax
  ReactiveTipDescription_t *v10; // rdx
  int v11; // esi

  if ( this->m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
    CDOTA_Tutorial::HandleTutorialEvent(this, pszEvent);
  v4 = this->m_ReactiveTips.m_Size - 1;
  if ( v4 >= 0 )
  {
    v5 = v4;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_ReactiveTips.m_Memory.m_pMemory[v5];
        pszTipMapIOEvent = v7->pszTipMapIOEvent;
        if ( pszTipMapIOEvent == 0 )
        {
          v10 = &this->m_ReactiveTips.m_Memory.m_pMemory[v5];
          goto LABEL_5;
        }
        v9 = strcmp(pszEvent, pszTipMapIOEvent);
        v10 = v7;
        if ( v9 == 0 )
          break;
LABEL_5:
        pszTipRemoveOnMapIOEvent = v10->pszTipRemoveOnMapIOEvent;
        if ( pszTipRemoveOnMapIOEvent == 0 || strcmp(pszEvent, pszTipRemoveOnMapIOEvent) != 0 )
          goto LABEL_7;
        v11 = v4--;
        --v5;
        CUtlVectorBase<ReactiveTipDescription_t,CUtlMemory<ReactiveTipDescription_t,int>>::Remove(
          &this->m_ReactiveTips,
          v11);
        if ( v4 == -1 )
          return;
      }
      if ( !CDOTA_Tutorial::ReactiveTipFired(this, v4) )
      {
        v10 = &this->m_ReactiveTips.m_Memory.m_pMemory[v5];
        goto LABEL_5;
      }
LABEL_7:
      --v4;
      --v5;
    }
    while ( v4 != -1 );
  }
}


// CDOTA_Tutorial::HandleTutorialEvent  (line 1930, @0x00000000026fc2e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetRemainingTime, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetTaskSecondsRemaining, Start, _V_strcmp, operator CEntityInstance*, operator=<float>
// calls: KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, strcmp, KeyValues::GetInt, KeyValues::GetFloat, CountdownTimer::Now, KeyValues::GetString, CDOTA_Tutorial::IncrementTaskProgress
// callers: CDOTA_Tutorial::IncrementTaskProgress, CDOTA_Tutorial::HandleTutorialEvent, CDOTA_Tutorial::OnPlayerFullyJoined, CDOTA_Tutorial::OnEnterPreGame, CDOTA_Tutorial::BeginLastHitChallenge, TutorialSpeechEnd, TutorialTipDismissed, TutorialTipExperienceSet, CDOTA_Tutorial::UpdateTutorialState, CDOTA_Tutorial::HeroTriggerTouched, CDOTA_Tutorial::OnNPCAwaken, CDOTA_Tutorial::ParseLessonKeys (14 total)
// strings: "advance_event", "advance_time", "task_progress_event"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::HandleTutorialEvent(CDOTA_Tutorial *const this, const char *pszEvent)
{
  KeyValues *m_pLessonKeys; // rdi
  KeyValues *Key; // rax
  KeyValues *v6; // rbx
  KeyValues *FirstSubKey; // rbx
  const char *Name; // rax
  float v9; // xmm1_4
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm2_8
  double v13; // xmm3_8
  const char *String; // rax
  float v15; // xmm1_4
  double v16; // xmm0_8
  double v17; // xmm1_8
  double v18; // xmm2_8
  float m_Value; // r14d
  float v20; // xmm0_4
  uint32 m_Index; // eax
  int v22; // r14d
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CEntityInstance *m_pInstance; // rbx
  KeyValues *v26; // rax
  const char *v27; // rax
  float v28; // [rsp+8h] [rbp-28h]
  float v29; // [rsp+8h] [rbp-28h]
  float Float; // [rsp+Ch] [rbp-24h]
  float v31; // [rsp+Ch] [rbp-24h]

  m_pLessonKeys = this->m_pLessonKeys;
  if ( m_pLessonKeys == 0 )
    return;
  Key = KeyValues::FindKey(m_pLessonKeys, "advance_event", 0);
  v6 = Key;
  if ( Key != 0 )
  {
    if ( KeyValues::GetFirstSubKey(Key) != 0 )
    {
      FirstSubKey = KeyValues::GetFirstSubKey(v6);
      if ( FirstSubKey == 0 )
        goto LABEL_27;
      while ( 1 )
      {
        Name = KeyValues::GetName(FirstSubKey);
        if ( strcmp(pszEvent, Name) == 0 )
          break;
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_27;
      }
      if ( KeyValues::GetInt(FirstSubKey, 0, 0) != 1 )
        this->m_pNextLessonKey = FirstSubKey;
      Float = KeyValues::GetFloat(this->m_pLessonKeys, "advance_time", v9);
      *&v10 = CountdownTimer::Now(&this->m_TipDelayTimer) + Float;
      if ( *&v10 != this->m_TipDelayTimer.m_timestamp.m_Value )
      {
        v29 = *&v10;
        (*(this->m_TipDelayTimer._vptr_CountdownTimer + 2))(&this->m_TipDelayTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        *&v10 = LODWORD(v29);
        this->m_TipDelayTimer.m_timestamp.m_Value = v29;
      }
      if ( Float != this->m_TipDelayTimer.m_duration.m_Value )
      {
        (*(this->m_TipDelayTimer._vptr_CountdownTimer + 2))(
          &this->m_TipDelayTimer,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v10,
          v11,
          v12,
          v13,
          Float);
        this->m_TipDelayTimer.m_duration.m_Value = Float;
      }
    }
    else
    {
      String = KeyValues::GetString(v6, 0, "", 0, 0);
      if ( strcmp(pszEvent, String) != 0 )
        goto LABEL_27;
      this->m_pNextLessonKey = 0;
      v31 = KeyValues::GetFloat(this->m_pLessonKeys, "advance_time", v15);
      *&v16 = CountdownTimer::Now(&this->m_TipDelayTimer) + v31;
      if ( *&v16 != this->m_TipDelayTimer.m_timestamp.m_Value )
      {
        v28 = *&v16;
        (*(this->m_TipDelayTimer._vptr_CountdownTimer + 2))(&this->m_TipDelayTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        *&v16 = LODWORD(v28);
        this->m_TipDelayTimer.m_timestamp.m_Value = v28;
      }
      if ( v31 != this->m_TipDelayTimer.m_duration.m_Value )
      {
        (*(this->m_TipDelayTimer._vptr_CountdownTimer + 2))(
          &this->m_TipDelayTimer,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v16,
          v17,
          v18,
          v31);
        this->m_TipDelayTimer.m_duration.m_Value = v31;
      }
    }
    m_Value = this->m_TipDelayTimer.m_timestamp.m_Value;
    v20 = m_Value - CountdownTimer::Now(&this->m_TipDelayTimer);
    m_Index = this->m_hData.m_Index;
    v22 = v20;
    if ( m_Index + 2 > 1 )
    {
      v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
      if ( v23 != 0 )
      {
        v24 = &v23[this->m_hData.m_Index & 0x1FF];
        if ( v24 != 0 && m_Index == v24->m_EHandle.m_Index )
        {
          m_pInstance = v24->m_pInstance;
          if ( v24->m_pInstance != 0 && v22 != HIDWORD(m_pInstance[16].m_hPrivateScope.m_hScope) )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            HIDWORD(m_pInstance[16].m_hPrivateScope.m_hScope) = v22;
          }
        }
      }
    }
  }
LABEL_27:
  v26 = KeyValues::FindKey(this->m_pLessonKeys, "task_progress_event", 0);
  if ( v26 != 0 )
  {
    v27 = KeyValues::GetString(v26, 0, "", 0, 0);
    if ( strcmp(pszEvent, v27) == 0 )
      CDOTA_Tutorial::IncrementTaskProgress(this);
  }
}


// CDOTA_Tutorial::HandleTutorialEvent  (line 1930, @0x00000000026fc680, libserver.so)
// calls: CDOTA_Tutorial::HandleTutorialEvent
void __fastcall CDOTA_Tutorial::HandleTutorialEvent(CDOTA_Tutorial *const this, const char *pszEvent)
{
  if ( this->m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
    CDOTA_Tutorial::HandleTutorialEvent(this, pszEvent);
}


// CDOTA_Tutorial::FindNextLesson  (line 1975, @0x0000000002718170, libserver.so)
// calls: KeyValues::GetString, CDOTA_Tutorial::FindLessonKey, CDOTA_Tutorial::ParseLessonKeys, KeyValues::FindKey
// callers: CDOTA_Tutorial::FrameUpdatePostEntityThink
// strings: "next_lesson"
void __fastcall CDOTA_Tutorial::FindNextLesson(CDOTA_Tutorial *const this)
{
  KeyValues *m_pNextLessonKey; // rdi
  const char *String; // rax

  m_pNextLessonKey = this->m_pNextLessonKey;
  if ( m_pNextLessonKey != 0 || (m_pNextLessonKey = KeyValues::FindKey(this->m_pLessonKeys, "next_lesson", 0)) != 0 )
  {
    this->m_pNextLessonKey = 0;
    String = KeyValues::GetString(m_pNextLessonKey, 0, "", 0, 0);
    CDOTA_Tutorial::FindLessonKey(this, String);
    CDOTA_Tutorial::ParseLessonKeys(this);
  }
}


// CDOTA_Tutorial::SetLessonTo  (line 1989, @0x00000000027181f0, libserver.so)
// calls: CDOTA_Tutorial::FindLessonKey, CDOTA_Tutorial::ParseLessonKeys
// callers: tutorial_start_lesson
void __fastcall CDOTA_Tutorial::SetLessonTo(CDOTA_Tutorial *const this, const char *pszLessonName)
{
  CDOTA_Tutorial::FindLessonKey(this, pszLessonName);
  if ( this->m_pLessonKeys != 0 )
    CDOTA_Tutorial::ParseLessonKeys(this);
}


// CDOTA_Tutorial::GetCurrentLesson  (line 2001, @0x00000000026f89a0, libserver.so)
// calls: KeyValues::GetName
// callers: CDOTASteamWorksGameStatsServer::LogTutorialStats
const char *__fastcall CDOTA_Tutorial::GetCurrentLesson(CDOTA_Tutorial *const this)
{
  KeyValues *m_pLessonKeys; // rdi

  m_pLessonKeys = this->m_pLessonKeys;
  if ( m_pLessonKeys != 0 )
    return KeyValues::GetName(m_pLessonKeys);
  else
    return "";
}


// CDOTA_Tutorial::UpdateTutorialState  (line 2011, @0x00000000026fc900, libserver.so)  // inlines: CEntityHandle, CGameTrace, CreateEvent, EnableInteractsWith, Get, GetAssignedHero, GetEntityIdentity, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetSerialNumber, GetTargetLocation, GetTeamNumber, GetTutorialState, HandleTutorialEvent, IndexToIdentity, Init, IsElapsed, IsValid, Length2DSqr, LengthSqr, LookupEntity, NetworkStateChanged, Ray_t, RnCollisionAttr_t, Set, SetTutorialState, ToDOTABaseNPC, ToDOTABaseNPCHero, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-
// calls: CDOTA_Tutorial::GetHumanPlayer, CBasePlayer::EyeVectors, CBaseEntity::GetAbsOrigin, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CDOTA_Tutorial::GetTargetEntity, CDOTA_Tutorial::SetTargetEntity, CDOTA_Tutorial::HandleTutorialEvent, CDOTA_Tutorial::IncrementTaskProgress, CDOTAPlayer::GetAssignedHero, MinimapEvent (13 total)
// callers: CDOTA_Tutorial::FrameUpdatePostEntityThink
// strings: "movecamera_finished", "dota_tutorial_task_advance"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::UpdateTutorialState(CDOTA_Tutorial *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  int m_pEntity; // eax
  CDOTAPlayer *v6; // rax
  const CBaseEntity *v7; // r12
  const Vector *v8; // rax
  vec_t x; // xmm6_4
  vec_t y; // xmm5_4
  ConVar *m_pParent; // rax
  float v12; // xmm7_4
  CBaseEntity *TargetEntity; // rax
  const Vector *v14; // rax
  float v15; // xmm1_4
  float v16; // xmm2_4
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTAPlayer *v20; // rax
  CDOTAPlayer *v21; // r12
  uint32 v22; // ecx
  uint32 v23; // esi
  unsigned __int16 v24; // ax
  int v25; // edi
  int v26; // edx
  CEntityIdentity *v27; // rax
  CEntityIdentity *v28; // rax
  CEntityInstance *v29; // rax
  float v30; // xmm2_4
  unsigned __int16 v31; // dx
  int v32; // ecx
  int v33; // eax
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  const CBaseEntity *v36; // rdi
  const Vector *AbsOrigin; // rax
  uint32 v38; // edx
  CEntityIdentity *v39; // rcx
  CEntityIdentity *v40; // rcx
  const Vector *v41; // rdx
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  __int64 v43; // rax
  const CBaseEntity *v44; // rax
  CDOTAPlayer *v45; // r12
  CDOTA_BaseNPC_Hero *v46; // rax
  CDOTAPlayer *HumanPlayer; // rax
  CDOTAPlayer *v48; // r12
  double v49; // xmm0_8
  uint32 v50; // eax
  vec_t v51; // xmm1_4
  CEntityIdentity *v52; // rdx
  CEntityIdentity *v53; // rdx
  const Vector *p_m_worldGroupId; // rax
  unsigned __int16 v55; // dx
  int v56; // esi
  int v57; // eax
  CEntityIdentity *v58; // rdx
  CEntityIdentity *v59; // rdx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CDOTA_BaseNPC *v61; // rax
  uint32 v62; // eax
  CEntityIdentity *v63; // rdx
  CEntityIdentity *v64; // rdx
  const Vector *v65; // rax
  CEntityInstance *v66; // r12
  float v67; // [rsp+8h] [rbp-178h]
  float v68; // [rsp+Ch] [rbp-174h]
  float v69; // [rsp+Ch] [rbp-174h]
  float m_fValue; // [rsp+Ch] [rbp-174h]
  Vector forward; // [rsp+10h] [rbp-170h] BYREF
  CTraceFilterSimple v72; // [rsp+20h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-120h] BYREF
  trace_t tr; // [rsp+B0h] [rbp-D0h] BYREF

  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hData.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        m_pEntity = v4->m_pInstance[16].m_pEntity;
        if ( m_pEntity == 3 )
        {
          HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
          v48 = HumanPlayer;
          if ( HumanPlayer != 0 )
          {
            m_fValue = dota_tutorial_camera_location_dist.m_pParent->m_Value.m_fValue;
            v49 = (*(HumanPlayer->_vptr_IHandleEntity + 164))(HumanPlayer);
            v50 = this->m_hData.m_Index;
            *&tr.startpos.x = v49;
            tr.startpos.z = v51;
            if ( v50 + 2 > 1
              && (v52 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F]) != 0
              && (v53 = &v52[this->m_hData.m_Index & 0x1FF]) != 0
              && v50 == v53->m_EHandle.m_Index
              && v53->m_pInstance != 0 )
            {
              p_m_worldGroupId = &v53->m_pInstance[16].m_worldGroupId;
            }
            else
            {
              p_m_worldGroupId = &vec3_origin;
            }
            if ( (m_fValue * m_fValue) > (((p_m_worldGroupId->x - tr.startpos.x) * (p_m_worldGroupId->x - tr.startpos.x))
                                        + ((p_m_worldGroupId->y - tr.startpos.y) * (p_m_worldGroupId->y - tr.startpos.y))) )
            {
              CDOTA_Tutorial::IncrementTaskProgress(this);
              if ( v48->m_hAssignedHero.m_Value.m_Index == -1 )
              {
                v55 = 0x7FFF;
                v56 = 0x7FFF;
              }
              else
              {
                v55 = v48->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                v56 = v55;
              }
              v57 = (v48->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v55 & 0x7FFF;
              LODWORD(tr.startpos.x) = v57;
              if ( (v57 + 2) > 1
                && (v58 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v56 >> 9]) != 0
                && (v59 = &v58[v56 & 0x1FF]) != 0
                && v57 == v59->m_EHandle.m_Index
                && (v61 = v59->m_pInstance, v59->m_pInstance != 0)
                && v61->m_bIsDOTANPC )
              {
                m_pInstance = 0;
                if ( (v61->m_iUnitType & 1) != 0 )
                  m_pInstance = v59->m_pInstance;
              }
              else
              {
                m_pInstance = 0;
              }
              MinimapEvent(v48->m_iTeamNum.m_Value, m_pInstance, 0, 0, 256, 4);
            }
          }
        }
        else if ( m_pEntity <= 3 )
        {
          if ( m_pEntity == 2 )
          {
            v20 = CDOTA_Tutorial::GetHumanPlayer(this);
            v21 = v20;
            if ( v20 != 0 )
            {
              v22 = v20->m_hAssignedHero.m_Value.m_Index;
              v23 = v22 >> 15;
              if ( v22 == -1 )
              {
                v24 = 0x7FFF;
                v25 = 0x7FFF;
              }
              else
              {
                v24 = v20->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                v25 = v24;
              }
              v26 = (v23 << 15) | v24 & 0x7FFF;
              LODWORD(tr.startpos.x) = v26;
              if ( (v26 + 2) > 1 )
              {
                v27 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v25 >> 9];
                if ( v27 != 0 )
                {
                  v28 = &v27[v25 & 0x1FF];
                  if ( v28 != 0 && v26 == v28->m_EHandle.m_Index )
                  {
                    v29 = v28->m_pInstance;
                    if ( v29 != 0
                      && BYTE3(v29[7]._vptr_IHandleEntity) != 0
                      && (v29[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                    {
                      v30 = dota_tutorial_move_location_dist.m_pParent->m_Value.m_fValue;
                      if ( v22 == -1 )
                      {
                        v31 = 0x7FFF;
                        v32 = 0x7FFF;
                      }
                      else
                      {
                        v31 = v21->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                        v32 = v31;
                      }
                      v33 = (v23 << 15) | v31 & 0x7FFF;
                      LODWORD(tr.startpos.x) = v33;
                      if ( (v33 + 2) > 1
                        && (v34 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v32 >> 9]) != 0
                        && (v35 = &v34[v32 & 0x1FF]) != 0
                        && v33 == v35->m_EHandle.m_Index
                        && (v44 = v35->m_pInstance, v35->m_pInstance != 0)
                        && v44->m_bIsDOTANPC )
                      {
                        v36 = 0;
                        if ( (v44[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
                          v36 = v35->m_pInstance;
                      }
                      else
                      {
                        v36 = 0;
                      }
                      v69 = v30;
                      AbsOrigin = CBaseEntity::GetAbsOrigin(v36);
                      v38 = this->m_hData.m_Index;
                      if ( v38 + 2 > 1
                        && (v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9)
                                                                                 & 0x3F]) != 0
                        && (v40 = &v39[this->m_hData.m_Index & 0x1FF]) != 0
                        && v38 == v40->m_EHandle.m_Index
                        && v40->m_pInstance != 0 )
                      {
                        v41 = &v40->m_pInstance[16].m_worldGroupId;
                      }
                      else
                      {
                        v41 = &vec3_origin;
                      }
                      if ( (v69 * v69) > (((v41->x - AbsOrigin->x) * (v41->x - AbsOrigin->x))
                                        + ((v41->y - AbsOrigin->y) * (v41->y - AbsOrigin->y))) )
                      {
                        CDOTA_Tutorial::IncrementTaskProgress(this);
                        AssignedHero = CDOTAPlayer::GetAssignedHero(v21);
                        MinimapEvent(v21->m_iTeamNum.m_Value, AssignedHero, 0, 0, 256, 4);
                        v43 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(
                                gameeventmanager,
                                "dota_tutorial_task_advance",
                                0,
                                0);
                        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v43, 1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( m_pEntity == 4 )
          {
            v45 = CDOTA_Tutorial::GetHumanPlayer(this);
            if ( v45 != 0 && CountdownTimer::Now(&this->m_Countdown) >= this->m_Countdown.m_timestamp.m_Value )
            {
              CDOTA_Tutorial::IncrementTaskProgress(this);
              v46 = CDOTAPlayer::GetAssignedHero(v45);
              MinimapEvent(v45->m_iTeamNum.m_Value, v46, 0, 0, 256, 4);
            }
          }
          else if ( m_pEntity != 6 )
          {
            return;
          }
          v6 = CDOTA_Tutorial::GetHumanPlayer(this);
          v7 = v6;
          if ( v6 != 0 )
          {
            CBasePlayer::EyeVectors(v6, &forward, 0, 0);
            v8 = CBaseEntity::GetAbsOrigin(v7);
            x = v8->x;
            y = v8->y;
            memset(&tr.m_ShapeAttributes, 0, 31);
            v67 = x;
            v68 = y;
            tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
            CGameTrace::Init(&tr);
            ray.m_Start.w = 0.0;
            memset(&ray.m_Delta.w, 0, 36);
            m_pParent = phys_traceline_radius.m_pParent;
            ray.m_Delta.x = ((forward.x * 1024.0) + v67) - v67;
            ray.m_Delta.y = ((forward.y * 1024.0) + v68) - v68;
            ray.m_Delta.z = ((1024.0 * forward.z) + 1134.0) - 1134.0;
            v12 = m_pParent->m_Value.m_fValue;
            ray.m_Start.x = v67;
            ray.m_flRadius = v12;
            ray.m_Start.y = v68;
            ray.m_Start.z = 1134.0;
            ray.m_IsRay = 1;
            ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                           + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
            CTraceFilterSimple::CTraceFilterSimple(&v72, v7, 4, 0);
            v72.m_attr.m_nInteractsWith |= 0x7001uLL;
            CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v72, &tr);
            TargetEntity = CDOTA_Tutorial::GetTargetEntity(this);
            if ( TargetEntity != 0 )
            {
              v14 = CBaseEntity::GetAbsOrigin(TargetEntity);
              v15 = v14->x;
              v16 = v14->y;
            }
            else
            {
              v62 = this->m_hData.m_Index;
              if ( v62 + 2 > 1
                && (v63 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F]) != 0
                && (v64 = &v63[this->m_hData.m_Index & 0x1FF]) != 0
                && v62 == v64->m_EHandle.m_Index
                && v64->m_pInstance != 0 )
              {
                v65 = &v64->m_pInstance[16].m_worldGroupId;
              }
              else
              {
                v65 = &vec3_origin;
              }
              v15 = v65->x;
              v16 = v65->y;
            }
            if ( (((v15 - tr.endpos.x) * (v15 - tr.endpos.x)) + ((v16 - tr.endpos.y) * (v16 - tr.endpos.y))) < 10000.0 )
            {
              CDOTA_Tutorial::SetTargetEntity(this, 0);
              v17 = this->m_hData.m_Index;
              if ( v17 + 2 > 1 )
              {
                v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
                if ( v18 != 0 )
                {
                  v19 = &v18[this->m_hData.m_Index & 0x1FF];
                  if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
                  {
                    v66 = v19->m_pInstance;
                    if ( v19->m_pInstance != 0 && LODWORD(v66[16].m_pEntity) != 1 )
                    {
                      (*(v66->_vptr_IHandleEntity + 22))(v66, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
                      LODWORD(v66[16].m_pEntity) = 1;
                    }
                  }
                }
              }
              if ( this->m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
                CDOTA_Tutorial::HandleTutorialEvent(this, "movecamera_finished");
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::GetHumanPlayer  (line 2092, @0x00000000026f89d0, libserver.so)  // inlines: ToDOTAPlayer
// calls: UTIL_PlayerByIndex
// callers: CDotaSubquestPlayerStat::GetCurrentValue, CDOTA_Tutorial::SelectPlayerTeam, CDOTA_Tutorial::GetTargetEntity, CDOTA_Tutorial::SetPlayerGold, CDOTA_Tutorial::UpgradePlayerAbility, CDOTA_Tutorial::SetTargetEntity, CDOTA_Tutorial::OnAddHeroAndBotControllerSpawnCompletion, CDOTA_Tutorial::EnablePlayerOffscreenTip, CDOTA_Tutorial::EnableCreepAggroViz, CDOTA_Tutorial::EnableTowerAggroViz, CDOTA_Tutorial::SelectHero, CDOTA_Tutorial::GetPlayerTeam (40 total)
CDOTAPlayer *__fastcall CDOTA_Tutorial::GetHumanPlayer(CDOTA_Tutorial *const this)
{
  CEntityIndex v1; // r12d
  CBasePlayer *v2; // rax
  CDOTAPlayer *v3; // rbx

  v1.m_Data = 1;
  if ( gpGlobals->maxClients <= 0 )
    return 0;
  while ( 1 )
  {
    v2 = UTIL_PlayerByIndex(v1);
    v3 = v2;
    if ( v2 != 0
      && (*(v2->_vptr_IHandleEntity + 140))(v2) != 0
      && (*(v3->_vptr_IHandleEntity + 391))(v3) == 0
      && !v3->m_pl.hltv )
    {
      break;
    }
    if ( gpGlobals->maxClients < ++v1.m_Data )
      return 0;
  }
  return v3;
}


// CDOTA_Tutorial::SelectPlayerTeam  (line 2107, @0x00000000026f8a70, libserver.so)  // inlines: _V_strcmp
// calls: CDOTA_Tutorial::GetHumanPlayer
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::SelectPlayerTeam(CDOTA_Tutorial *const this, const char *pszTeam)
{
  CDOTAPlayer *HumanPlayer; // rax

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    if ( strcmp(pszTeam, "good") == 0 )
    {
      (*(HumanPlayer->_vptr_IHandleEntity + 70))(HumanPlayer, 2);
    }
    else if ( strcmp(pszTeam, "bad") == 0 )
    {
      (*(HumanPlayer->_vptr_IHandleEntity + 70))(HumanPlayer, 3);
    }
  }
}


// CDOTA_Tutorial::GetPlayerTeam  (line 2127, @0x00000000026f95a0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Tutorial::GetHumanPlayer
int __fastcall CDOTA_Tutorial::GetPlayerTeam(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
    return HumanPlayer->m_iTeamNum.m_Value;
  else
    return -1;
}


// OnTutorialSelectHeroSpawnCompletion  (line 2139, @0x00000000026bd1f0, libserver.so)
// calls: KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_tutorial_stat_collector"
void __fastcall OnTutorialSelectHeroSpawnCompletion(CDOTA_BaseNPC *pEntity, const CEntityKeyValues *pKeyValues)
{
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  if ( pEntity != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_tutorial_stat_collector");
    CDOTA_BaseNPC::AddNewModifier(pEntity, pEntity, 0, "modifier_tutorial_stat_collector", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Tutorial::SelectHero  (line 2148, @0x00000000026f94c0, libserver.so)  // inlines: Bind, CDotaNPCSpawnerContext, CEntitySpawnerContext, CEntitySpawnerContextBase, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, FastDelegate2, SetMementoFrom, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, ~CDotaNPCSpawnerContext, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase
// calls: CDOTA_Tutorial::GetHumanPlayer, CEntityKeyValues::CEntityKeyValues, DOTA_Hero_Spawn, CEntityKeyValues::~CEntityKeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnTutorialSelectHeroSpawnCompletion(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall CDOTA_Tutorial::SelectHero(CDOTA_Tutorial *const this, const char *pszHeroName)
{
  CDOTAPlayer *HumanPlayer; // r12
  CDotaNPCSpawnerContext ctx; // [rsp+20h] [rbp-C0h] BYREF
  unsigned __int64 v5; // [rsp+B8h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
    ctx.m_pParent = 0;
    ctx.m_pCompletionListener = 0;
    ctx.m_callback.m_Closure.m_pFunction.__pfn = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
    ctx.m_callback.m_Closure.m_pFunction.__delta = 0;
    ctx.m_callback.m_Closure.m_pthis = OnTutorialSelectHeroSpawnCompletion;
    DOTA_Hero_Spawn(pszHeroName, HumanPlayer, &ctx);
    CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
  }
}


// CDOTA_Tutorial::MoveHero  (line 2160, @0x00000000026f95c0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, GetPositionOnGround
// callers: CDOTA_Tutorial::ChangeHero, CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::MoveHero(CDOTA_Tutorial *const this, double a2, vec_t a3)
{
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v4; // dx
  int v5; // esi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  Vector vLocationa; // [rsp+0h] [rbp-30h] BYREF
  Vector vLocationOnGround; // [rsp+10h] [rbp-20h] BYREF

  *&vLocationa.x = a2;
  vLocationa.z = a3;
  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    LODWORD(vLocationOnGround.x) = v6;
    if ( (v6 + 2) > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v5 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 )
          {
            vLocationOnGround = GetPositionOnGround(&vLocationa, v8->m_pInstance);
            (*(m_pInstance->_vptr_IHandleEntity + 128))(
              m_pInstance,
              &vLocationOnGround,
              0,
              0,
              v10,
              v11,
              *&vLocationa.x,
              LODWORD(vLocationa.z));
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::ChangeHero  (line 2174, @0x00000000026f96d0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, CBaseEntity::GetAbsOrigin, GetPositionOnGround, CDOTA_Tutorial::MoveHero, DOTA_Hero_Spawn_Synchronous
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::ChangeHero(CDOTA_Tutorial *const this, const char *pszHeroName)
{
  CDOTAPlayer *HumanPlayer; // rax
  CDOTAPlayer *v5; // rbx
  uint32 v6; // ecx
  unsigned __int16 v7; // ax
  int v8; // esi
  int v9; // edx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CBaseEntity *m_pInstance; // r14
  const Vector *AbsOrigin; // rax
  Vector PositionOnGround; // 0:kr00_12.12

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  v5 = HumanPlayer;
  if ( HumanPlayer != 0 )
  {
    v6 = HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15;
    if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v7 = 0x7FFF;
      v8 = 0x7FFF;
    }
    else
    {
      v7 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v8 = v7;
    }
    v9 = (v6 << 15) | v7 & 0x7FFF;
    if ( (v9 + 2) > 1 )
    {
      v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
      if ( v10 != 0 )
      {
        v11 = &v10[v8 & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && m_pInstance->m_bIsDOTANPC
            && (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
          {
            AbsOrigin = CBaseEntity::GetAbsOrigin(v11->m_pInstance);
            PositionOnGround = GetPositionOnGround(AbsOrigin, m_pInstance);
            CDOTA_Tutorial::MoveHero(this, -2.150922278450547e28, 0.0);
            DOTA_Hero_Spawn_Synchronous(pszHeroName, v5);
            CDOTA_Tutorial::MoveHero(this, *&PositionOnGround.x, PositionOnGround.z);
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetHeroLevel  (line 2192, @0x00000000026f9820, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::SetHeroLevel(CDOTA_Tutorial *const this, int iLevel)
{
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v4; // dx
  int v5; // esi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r12
  int v10; // ebx
  _BOOL8 v11; // rsi

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    if ( (v6 + 2) > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v5 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && iLevel > 0 )
          {
            v10 = 0;
            do
            {
              v11 = v10++ == 0;
              (*(m_pInstance->_vptr_IHandleEntity + 492))(m_pInstance, v11);
            }
            while ( v10 != iLevel );
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetHeroControllable  (line 2209, @0x00000000026f9940, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Get, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetInCinematicMode, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=<bool>
// calls: CDOTA_Tutorial::GetHumanPlayer, CDOTA_BaseNPC::SetControllableByPlayer
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::SetHeroControllable(CDOTA_Tutorial *const this, bool bControllable)
{
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v4; // cx
  int v5; // edi
  int v6; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CGameRules *v9; // r12
  char v10; // bl
  int (**vptr_CGameRules)(...); // rdi
  CEntityInstance *m_pInstance; // r12
  int v13; // esi

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    if ( (v6 + 2) > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v5 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v13 = -1;
            if ( bControllable )
              v13 = (*(HumanPlayer->_vptr_IHandleEntity + 393))(HumanPlayer, 0xFFFFFFFFLL);
            CDOTA_BaseNPC::SetControllableByPlayer(m_pInstance, v13, 0);
          }
        }
      }
    }
    v9 = g_pGameRules;
    if ( g_pGameRules != 0 )
    {
      v10 = !bControllable;
      if ( v10 != g_pGameRules[5].m_szQuestName[112] )
      {
        vptr_CGameRules = g_pGameRules[5]._vptr_CGameRules;
        if ( vptr_CGameRules != 0 && (*(vptr_CGameRules[1] + 49) & 4) == 0 )
          (*(*vptr_CGameRules + 22))(vptr_CGameRules, 840, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
        v9[5].m_szQuestName[112] = v10;
      }
    }
  }
}


// CDOTA_Tutorial::SetPlayerMovementAllowed  (line 2231, @0x00000000026f9ab0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::SetPlayerMovementAllowed(CDOTA_Tutorial *const this, bool bMovementAllowed)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v5; // edi
  unsigned __int16 v6; // cx
  int v7; // r9d
  int v8; // edx
  CEntityIdentity *v9; // r8
  CEntityIdentity *v10; // r8
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v12; // dx
  int v13; // esi
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rax

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
    v5 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Index == -1 )
            {
              v12 = 0x7FFF;
              v13 = 0x7FFF;
            }
            else
            {
              v12 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v13 = v12;
            }
            v14 = (v5 << 15) | v12 & 0x7FFF;
            if ( (v14 + 2) > 1 )
            {
              v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
              if ( v15 != 0 )
              {
                v16 = &v15[v13 & 0x1FF];
                if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
                {
                  v17 = v16->m_pInstance;
                  if ( v16->m_pInstance != 0
                    && BYTE3(v17[7]._vptr_IHandleEntity) != 0
                    && (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    HIDWORD(v17[50].m_CScriptComponent) = bMovementAllowed;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::StartNPCSpeech  (line 2247, @0x0000000002714ca0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, CopyConstruct<NPCSpeechData_t>, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntityNameAsCStr, GetEntryIndex, GetForModify, GetGameTime, GetHandleEntity, GetInstance, GetSerialNumber, GetSpeechBubbleNPC, GetSpeechBubbleSpeech, GetSpeechLifetime, GrowMemory, IndexToIdentity, Init, LookupEntity, NPCSpeechData_t, String, operator CEntityInstance*, operator[], ~CCopyableUtlVector, ~CUtlVector
// calls: Warning, CDOTA_Tutorial::GetNPCByName, CDOTA_Tutorial::StartNPCVO, CUtlVectorBase<char const*, CUtlMemory<char const*, int> >::SetCount, CGameEntitySystem::FindEntityByClassname, RandomInt, CDOTA_Tutorial::SetSpeechBubble, CDOTA_Tutorial::AddQuestLogEntry, CUtlMemory<NPCSpeechData_t, int>::Grow, CUtlVectorBase<char const*, CUtlMemory<char const*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Tutorial::ParseLessonKeys, CDOTA_Tutorial::ReactiveTipFired, CDOTA_Tutorial::FrameUpdatePostEntityThink
// strings: "Tutorial lesson trying to fire NPC speech without a specified NPC and/or speech string.\n, "Starting NPC speech on NPC '%s', speech '%s'\n", "Tutorial lesson speech bubble limit hit. Ignoring request to show '%s' speech.\n", "Delaying NPC speech on NPC '%s', speech '%s', for %.2f\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::StartNPCSpeech(CDOTA_Tutorial *const this, NPCSpeechData_t *const sSpeech)
{
  const char *pszNPCName; // rsi
  const char *v5; // r14
  float flInitialDelay; // xmm0_4
  CBaseEntity *NPCByName; // rax
  const char *pszNPCNameSound; // rsi
  CDOTA_BaseNPC *EntityByClassname; // rbx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  int m_Size; // edx
  uint32 m_Index; // ecx
  unsigned int v14; // r8d
  __int64 v15; // rdi
  int i; // r12d
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  __int64 v19; // rdi
  int v20; // r12d
  unsigned __int64 v21; // rsi
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // r10
  float v24; // xmm0_4
  _BYTE *v25; // r10
  CEntityIdentity *v26; // rax
  CEntityInstance *v27; // rax
  __int64 v28; // rax
  unsigned __int16 v29; // si
  int v30; // r10d
  int v31; // eax
  CEntityIdentity *v32; // rsi
  CEntityIdentity *v33; // rsi
  float v34; // xmm6_4
  __int64 v35; // rbx
  int v36; // eax
  NPCSpeechData_t *v37; // rbx
  bool bShouldFacePlayer; // al
  int v39; // r14d
  const char **m_pMemory; // r12
  unsigned __int64 v41; // rax
  int v42; // r14d
  const char **v43; // r12
  unsigned __int64 v44; // rax
  NPCSpeechData_t *v45; // r13
  float v46; // xmm0_4
  int v47; // r14d
  CEntityInstance *v48; // r11
  CEntityInstance *m_pInstance; // rax
  __int64 v50; // rax
  unsigned __int16 v51; // si
  int v52; // r10d
  int v53; // eax
  CEntityIdentity *v54; // rsi
  CEntityIdentity *v55; // rsi
  int v56; // r14d
  CBaseEntity *pNPCSound; // [rsp+8h] [rbp-48h]
  __int64 pNPCSounda; // [rsp+8h] [rbp-48h]

  pszNPCName = sSpeech->pszNPCName;
  if ( pszNPCName == 0 || *pszNPCName == 0 )
    goto LABEL_5;
  if ( sSpeech->vecSpeech.m_Size != 0 )
  {
    v5 = *sSpeech->vecSpeech.m_Memory.m_pMemory;
  }
  else
  {
    if ( sSpeech->vecVO.m_Size == 0 )
    {
LABEL_5:
      Warning("Tutorial lesson trying to fire NPC speech without a specified NPC and/or speech string.\n");
      return;
    }
    v5 = *sSpeech->vecVO.m_Memory.m_pMemory;
  }
  flInitialDelay = sSpeech->flInitialDelay;
  if ( flInitialDelay <= 0.0 || sSpeech->flStartAt != 0.0 )
  {
    NPCByName = CDOTA_Tutorial::GetNPCByName(this, pszNPCName, sSpeech->bFindNearestFriendly);
    pszNPCNameSound = sSpeech->pszNPCNameSound;
    pNPCSound = 0;
    EntityByClassname = NPCByName;
    if ( pszNPCNameSound != 0 )
      pNPCSound = CDOTA_Tutorial::GetNPCByName(this, pszNPCNameSound, sSpeech->bFindNearestFriendly);
    if ( EntityByClassname != 0 )
    {
      m_pEntity = EntityByClassname->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_name.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_name.u.m_pAsString;
      Warning("Starting NPC speech on NPC '%s', speech '%s'\n", m_pAsString, v5);
    }
    else
    {
      Warning("Starting NPC speech on NPC '%s', speech '%s'\n", "NONE", v5);
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, sSpeech->pszNPCName);
      if ( EntityByClassname == 0 )
        return;
    }
    m_Size = sSpeech->vecSpeech.m_Size;
    m_Index = this->m_hData.m_Index;
    v14 = m_Index + 2;
    if ( m_Size != 0 )
    {
      v15 = 0;
      for ( i = 0; i != 4; ++i )
      {
        if ( v14 > 1 )
        {
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = &v17[this->m_hData.m_Index & 0x1FF];
            if ( v18 != 0 && v18->m_EHandle.m_Index == m_Index )
            {
              m_pInstance = v18->m_pInstance;
              if ( m_pInstance != 0 )
              {
                v50 = &m_pInstance[17].m_pEntity + v15;
                if ( *(v50 + 276) == -1 )
                {
                  v51 = 0x7FFF;
                  v52 = 0x7FFF;
                }
                else
                {
                  v51 = *(v50 + 276) & 0x7FFF;
                  v52 = v51;
                }
                v53 = (*(v50 + 276) >> 15 << 15) | v51 & 0x7FFF;
                if ( (v53 + 2) > 1 )
                {
                  v54 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v52 >> 9];
                  if ( v54 != 0 )
                  {
                    v55 = &v54[v52 & 0x1FF];
                    if ( v55 != 0 && v53 == v55->m_EHandle.m_Index && EntityByClassname == v55->m_pInstance )
                    {
                      v56 = RandomInt(0, (m_Size - 1));
                      CDOTA_Tutorial::SetSpeechBubble(
                        this,
                        i,
                        EntityByClassname,
                        sSpeech->vecSpeech.m_Memory.m_pMemory[v56],
                        sSpeech->flLifetime,
                        sSpeech->bAllowMovement,
                        sSpeech->bShouldFacePlayer);
                      CDOTA_Tutorial::StartNPCVO(this, sSpeech, EntityByClassname, pNPCSound);
                      CDOTA_Tutorial::AddQuestLogEntry(this, sSpeech, v56);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        v15 += 296;
      }
    }
    v19 = 0;
    v20 = 0;
    while ( 1 )
    {
      if ( v14 <= 1
        || (v21 = this->m_hData.m_Index & 0x7FFF,
            (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v21 >> 9)]) == 0) )
      {
LABEL_45:
        if ( m_Size != 0 )
        {
          v47 = RandomInt(0, (m_Size - 1));
          CDOTA_Tutorial::SetSpeechBubble(
            this,
            v20,
            EntityByClassname,
            sSpeech->vecSpeech.m_Memory.m_pMemory[v47],
            sSpeech->flLifetime,
            sSpeech->bAllowMovement,
            sSpeech->bShouldFacePlayer);
          CDOTA_Tutorial::AddQuestLogEntry(this, sSpeech, v47);
        }
        CDOTA_Tutorial::StartNPCVO(this, sSpeech, EntityByClassname, pNPCSound);
        return;
      }
      v23 = &v22[this->m_hData.m_Index & 0x1FF];
      if ( v23 == 0 )
        break;
      v24 = -1.0;
      if ( v23->m_EHandle.m_Index == m_Index )
      {
        v24 = -1.0;
        if ( v23->m_pInstance != 0 )
          v24 = *(&v23->m_pInstance[23]._vptr_IHandleEntity + v19);
      }
      if ( v23->m_EHandle.m_Index != m_Index )
        goto LABEL_27;
      v48 = v23->m_pInstance;
      v25 = 0;
      if ( v48 != 0 )
        v25 = &v48[17].m_iszPrivateVScripts.u.m_pAsString + v19 + 2;
LABEL_28:
      if ( *v25 == 0 )
        goto LABEL_45;
      v26 = &v22[v21 & 0x1FF];
      if ( v26 == 0 )
        goto LABEL_45;
      if ( v26->m_EHandle.m_Index != m_Index )
        goto LABEL_45;
      v27 = v26->m_pInstance;
      if ( v27 == 0 )
        goto LABEL_45;
      v28 = &v27[17].m_pEntity + v19;
      if ( *(v28 + 276) == -1 )
      {
        v29 = 0x7FFF;
        v30 = 0x7FFF;
      }
      else
      {
        v29 = *(v28 + 276) & 0x7FFF;
        v30 = v29;
      }
      v31 = (*(v28 + 276) >> 15 << 15) | v29 & 0x7FFF;
      if ( (v31 + 2) <= 1 )
        goto LABEL_45;
      v32 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v30 >> 9];
      if ( v32 == 0 )
        goto LABEL_45;
      v33 = &v32[v30 & 0x1FF];
      if ( v33 == 0 || v31 != v33->m_EHandle.m_Index || v33->m_pInstance == 0 )
        goto LABEL_45;
      if ( v24 != -1.0 )
      {
        v34 = g_pGameRules != 0 ? *&g_pGameRules[18].m_szQuestName[20] : 0.0;
        if ( v34 >= v24 )
          goto LABEL_45;
      }
      ++v20;
      v19 += 296;
      if ( v20 == 4 )
      {
        Warning("Tutorial lesson speech bubble limit hit. Ignoring request to show '%s' speech.\n", v5);
        return;
      }
    }
    v24 = -1.0;
LABEL_27:
    v25 = 0;
    goto LABEL_28;
  }
  Warning("Delaying NPC speech on NPC '%s', speech '%s', for %.2f\n", pszNPCName, v5, flInitialDelay);
  v35 = this->m_DelayedSpeech.m_Size;
  v36 = this->m_DelayedSpeech.m_Size;
  if ( v35 == this->m_DelayedSpeech.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<NPCSpeechData_t,int>::Grow(&this->m_DelayedSpeech.m_Memory, 1);
    v36 = this->m_DelayedSpeech.m_Size;
  }
  this->m_DelayedSpeech.m_Size = v36 + 1;
  pNPCSounda = v35;
  v37 = &this->m_DelayedSpeech.m_Memory.m_pMemory[v35];
  if ( v37 != 0 )
  {
    v37->pszNPCName = sSpeech->pszNPCName;
    v37->pszNPCNameSound = sSpeech->pszNPCNameSound;
    v37->flLifetime = sSpeech->flLifetime;
    v37->flInitialDelay = sSpeech->flInitialDelay;
    v37->flStartAt = sSpeech->flStartAt;
    v37->bFindNearestFriendly = sSpeech->bFindNearestFriendly;
    v37->bAllowMovement = sSpeech->bAllowMovement;
    bShouldFacePlayer = sSpeech->bShouldFacePlayer;
    v37->vecSpeech.m_Size = 0;
    v37->vecSpeech.m_Memory.m_pMemory = 0;
    v37->vecSpeech.m_Memory.m_nAllocationCount = 0;
    v37->vecSpeech.m_Memory.m_nGrowSize = 0;
    v37->bShouldFacePlayer = bShouldFacePlayer;
    v39 = sSpeech->vecSpeech.m_Size;
    m_pMemory = sSpeech->vecSpeech.m_Memory.m_pMemory;
    CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::SetCount(&v37->vecSpeech, v39);
    if ( v39 > 0 )
    {
      v41 = 0;
      do
      {
        v37->vecSpeech.m_Memory.m_pMemory[v41 / 8] = m_pMemory[v41 / 8];
        v41 += 8LL;
      }
      while ( v41 != 8LL * (v39 - 1) + 8 );
    }
    v37->vecVO.m_Size = 0;
    v37->vecVO.m_Memory.m_pMemory = 0;
    v37->vecVO.m_Memory.m_nAllocationCount = 0;
    v37->vecVO.m_Memory.m_nGrowSize = 0;
    v42 = sSpeech->vecVO.m_Size;
    v43 = sSpeech->vecVO.m_Memory.m_pMemory;
    CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::SetCount(&v37->vecVO, v42);
    if ( v42 > 0 )
    {
      v44 = 0;
      do
      {
        v37->vecVO.m_Memory.m_pMemory[v44 / 8] = v43[v44 / 8];
        v44 += 8LL;
      }
      while ( v44 != 8LL * (v42 - 1) + 8 );
    }
    v45 = &this->m_DelayedSpeech.m_Memory.m_pMemory[pNPCSounda];
  }
  else
  {
    v45 = 0;
  }
  v46 = 0.0;
  if ( g_pGameRules != 0 )
    v46 = *&g_pGameRules[18].m_szQuestName[20];
  v45->flStartAt = v46 + v45->flInitialDelay;
}


// CDOTA_Tutorial::StartNPCVO  (line 2323, @0x0000000002714a60, libserver.so)  // inlines: GetFloat, Speak, SpeakConcept, ToDOTABaseNPC, operator[]
// calls: RandomInt, V_stristr_fast(char const*,char const*), CDOTA_Speech::Speak, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTA_Tutorial::StartNPCSpeech
// strings: "tutorialline"
void __fastcall CDOTA_Tutorial::StartNPCVO(
        CDOTA_Tutorial *const this,
        NPCSpeechData_t *const sSpeech,
        CBaseEntity *pNPC,
        CBaseEntity *pNPCSound)
{
  int m_Size; // esi
  int v8; // eax
  const char **m_pMemory; // rdx
  const char *v10; // rbx
  void (*pfn)(CEntityInstance *, CBaseEntity *); // rdi
  float m_fValue; // xmm0_4
  void (*v13)(CEntityInstance *, CBaseEntity *); // rdi
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-60h] BYREF

  m_Size = sSpeech->vecVO.m_Size;
  if ( m_Size != 0 )
  {
    v8 = RandomInt(0, (m_Size - 1));
    m_pMemory = sSpeech->vecVO.m_Memory.m_pMemory;
    v10 = m_pMemory[v8];
    if ( pNPCSound == 0 || !pNPCSound->m_bIsDOTANPC )
      pNPCSound = 0;
    if ( pNPC == 0 || !pNPC->m_bIsDOTANPC )
      pNPC = 0;
    if ( V_stristr_fast(m_pMemory[v8], ".vcd") != 0 )
    {
      if ( pNPCSound != 0 )
      {
        pfn = pNPCSound[4].m_pfnTouch.__pfn;
        m_fValue = dota_speech_mute_time.m_pParent->m_Value.m_fValue;
        if ( pfn == 0 )
          return;
      }
      else
      {
        if ( pNPC == 0 )
          return;
        pfn = pNPC[4].m_pfnTouch.__pfn;
        m_fValue = dota_speech_mute_time.m_pParent->m_Value.m_fValue;
        if ( pfn == 0 )
          return;
      }
      CDOTA_Speech::Speak(pfn, v10, m_fValue, 18, 5, soundlevel_t::SNDLVL_80dB, 0, 0, 0, 0, 0);
      return;
    }
    if ( pNPCSound != 0 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CResponseCriteriaSet::AppendCriteria(&criteria, "tutorialline", v10, 1.0);
      v13 = pNPCSound[4].m_pfnTouch.__pfn;
      if ( v13 != 0 )
LABEL_15:
        CDOTA_Speech::SpeakConcept(v13, 18, &criteria, 5, 0, 0, 0, 0);
    }
    else
    {
      if ( pNPC == 0 )
        return;
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CResponseCriteriaSet::AppendCriteria(&criteria, "tutorialline", v10, 1.0);
      v13 = pNPC[4].m_pfnTouch.__pfn;
      if ( v13 != 0 )
        goto LABEL_15;
    }
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
}


// CDOTA_Tutorial::StopNPCSpeech  (line 2364, @0x0000000002700aa0, libserver.so)  // inlines: CEntityHandle, Element, Get, GetEntityIdentity, GetEntryIndex, GetForModify, GetHandleEntity, GetInstance, GetSerialNumber, GetSpeechBubbleNPC, IndexToIdentity, Init, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator[]
// calls: CGameEntitySystem::FindEntityByName, V_stricmp_fast, CUtlVectorBase<NPCSpeechData_t, CUtlMemory<NPCSpeechData_t, int> >::Remove, __dynamic_cast, CDOTA_ScriptedSpawner::IsNPCInSpawnedUnitList, CDOTA_Tutorial::SetSpeechBubble
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::StopNPCSpeech(CDOTA_Tutorial *const this, const char *pszNPCName)
{
  CDOTA_BaseNPC *EntityByName; // r14
  int v5; // ebx
  __int64 v6; // r15
  int v7; // esi
  __int64 v8; // r13
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_ScriptedSpawner *v13; // r14
  __int64 v14; // r13
  int j; // ebx
  uint32 v16; // eax
  CDOTA_BaseNPC *v17; // r15
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // rax
  __int64 v21; // rdx
  int v22; // eax
  unsigned __int16 v23; // cx
  int v24; // esi
  int v25; // ecx
  CEntityIdentity *v26; // rax
  CEntityIdentity *v27; // rax
  int v28; // ecx
  unsigned __int16 v29; // dx
  int v30; // esi
  int v31; // eax
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pszNPCName, 0, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    v5 = this->m_DelayedSpeech.m_Size - 1;
    if ( v5 >= 0 )
    {
      v6 = v5;
      do
      {
        while ( V_stricmp_fast(this->m_DelayedSpeech.m_Memory.m_pMemory[v6].pszNPCName, pszNPCName) != 0 )
        {
          --v5;
          --v6;
          if ( v5 == -1 )
            goto LABEL_7;
        }
        v7 = v5--;
        --v6;
        CUtlVectorBase<NPCSpeechData_t,CUtlMemory<NPCSpeechData_t,int>>::Remove(&this->m_DelayedSpeech, v7);
      }
      while ( v5 != -1 );
    }
LABEL_7:
    if ( EntityByName->m_bIsDOTANPC )
    {
      v8 = 0;
      for ( i = 0; i != 4; ++i )
      {
        m_Index = this->m_hData.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[this->m_hData.m_Index & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
            {
              v28 = *(&v12->m_pInstance[22].m_CScriptComponent + v8 + 4) >> 15;
              if ( *(&v12->m_pInstance[22].m_CScriptComponent + v8 + 4) == -1 )
              {
                v29 = 0x7FFF;
                v30 = 0x7FFF;
              }
              else
              {
                v29 = *(&v12->m_pInstance[22].m_CScriptComponent + v8 + 4) & 0x7FFF;
                v30 = v29;
              }
              v31 = (v28 << 15) | v29 & 0x7FFF;
              if ( (v31 + 2) > 1 )
              {
                v32 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v30 >> 9];
                if ( v32 != 0 )
                {
                  v33 = &v32[v30 & 0x1FF];
                  if ( v33 != 0 && v31 == v33->m_EHandle.m_Index && EntityByName == v33->m_pInstance )
                    CDOTA_Tutorial::SetSpeechBubble(this, i, EntityByName, 0, 0.0, 0, 0);
                }
              }
            }
          }
        }
        v8 += 296;
      }
    }
    else
    {
      v13 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_ScriptedSpawner, 0);
      if ( v13 != 0 )
      {
        v14 = 0;
        for ( j = 0; j != 4; ++j )
        {
          v16 = this->m_hData.m_Index;
          v17 = 0;
          if ( v16 + 2 > 1 )
          {
            v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
            if ( v18 != 0 )
            {
              v19 = &v18[this->m_hData.m_Index & 0x1FF];
              if ( v19 != 0 && v16 == v19->m_EHandle.m_Index )
              {
                m_pInstance = v19->m_pInstance;
                if ( v19->m_pInstance != 0 )
                {
                  v21 = &m_pInstance[17].m_pEntity + v14;
                  v22 = *(&m_pInstance[22].m_CScriptComponent + v14 + 4) >> 15;
                  if ( *(v21 + 276) == -1 )
                  {
                    v23 = 0x7FFF;
                    v24 = 0x7FFF;
                  }
                  else
                  {
                    v23 = *(v21 + 276) & 0x7FFF;
                    v24 = v23;
                  }
                  v17 = 0;
                  v25 = (v22 << 15) | v23 & 0x7FFF;
                  if ( (v25 + 2) > 1 )
                  {
                    v26 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9];
                    if ( v26 != 0 )
                    {
                      v27 = &v26[v24 & 0x1FF];
                      if ( v27 != 0 && v25 == v27->m_EHandle.m_Index )
                        v17 = v27->m_pInstance;
                    }
                  }
                }
              }
            }
          }
          if ( CDOTA_ScriptedSpawner::IsNPCInSpawnedUnitList(v13, v17) )
            CDOTA_Tutorial::SetSpeechBubble(this, j, v17, 0, 0.0, 0, 0);
          v14 += 296;
        }
      }
    }
  }
}


// CDOTA_Tutorial::CompleteQuest  (line 2410, @0x00000000026bd530, libserver.so)
// calls: DOTAQuestSystem, CDOTA_QuestSystem::CompleteQuestByName
void __fastcall CDOTA_Tutorial::CompleteQuest(CDOTA_Tutorial *const this, const char *pszQuestName)
{
  CDOTA_QuestSystem *v3; // rax

  v3 = DOTAQuestSystem();
  CDOTA_QuestSystem::CompleteQuestByName(v3, pszQuestName);
}


// CDOTA_Tutorial::AddQuest  (line 2415, @0x00000000027115e0, libserver.so)
// calls: CDotaQuest::SpawnFromParms, CDOTA_Tutorial::AddQuestLogEntry
void __fastcall CDOTA_Tutorial::AddQuest(
        CDOTA_Tutorial *const this,
        const char *pszName,
        int nType,
        const char *pszTitle,
        const char *pszText)
{
  CDotaQuest *v6; // rax

  v6 = CDotaQuest::SpawnFromParms(pszName, nType, pszTitle, pszText);
  CDOTA_Tutorial::AddQuestLogEntry(this, v6);
}


// CDOTA_Tutorial::AddQuestLogEntry  (line 2421, @0x00000000027110a0, libserver.so)  // inlines: AddToTail, CBroadcastRecipientFilter, CDOTAUserMsg_AddQuestLogEntry_t, CEntityHandle, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, CopyConstruct<QuestLogEntry_t>, Element, FindGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>, FindOrCreateGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>, Get, GetEntityIdentity, GetEntryIndex, GetForModify, GetHandleEntity, GetInstance, GetSerialNumber, GetSpeechBubbleNPC, GetUnitName, GrowMemory, IndexToIdentity, Init, IsValid, LookupEntity, PostEvent<CDOTAUserMsg_AddQuestLogEntry_t>, SendUserMessage<CDOTAUserMsg_AddQuestLogEntry_t>, String, Tail, ToCStr, ToDOTABaseNPC, _V_strcmp, assign, length, operator CEntityInstance*, operator[], set_has_npc_dialog, set_has_npc_name, set_npc_dialog, set_npc_name, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_AddQuestLogEntry_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: strcmp, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_AddQuestLogEntry::CDOTAUserMsg_AddQuestLogEntry, strlen, std::string::assign(char const*,ulong), CDOTAUserMsg_AddQuestLogEntry::~CDOTAUserMsg_AddQuestLogEntry, CRecipientFilter::~CRecipientFilter, CUtlMemory<QuestLogEntry_t, int>::Grow, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Tutorial::StartNPCSpeech
// globals: CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>(bool)::s_hEvent
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Tutorial::AddQuestLogEntry(
        CDOTA_Tutorial *const this,
        NPCSpeechData_t *const sSpeech,
        int nIndex)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v6; // rcx
  __int64 v7; // rdx
  CEntityIdentity *v8; // rcx
  const char *pszNPCName; // r14
  const char *v10; // r13
  int m_Size; // eax
  size_t v12; // rax
  size_t v13; // rax
  IGameEventSystem *v14; // r15
  __int64 v15; // r15
  int v16; // eax
  QuestLogEntry_t *v17; // rax
  __int64 v18; // rdx
  CEntityInstance *m_pInstance; // rcx
  __int64 v20; // r8
  unsigned int v21; // edi
  unsigned int v22; // r9d
  unsigned __int16 v23; // cx
  int v24; // r11d
  int v25; // eax
  CEntityIdentity *v26; // rcx
  CEntityIdentity *v27; // rcx
  unsigned __int16 v28; // cx
  int v29; // edi
  int v30; // eax
  CEntityIdentity *v31; // rcx
  CEntityIdentity *v32; // rcx
  CEntityInstance *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-1B8h]
  void (__fastcall *v35)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-1B0h]
  _QWORD v36[2]; // [rsp+20h] [rbp-1A0h] BYREF
  int v37; // [rsp+30h] [rbp-190h]
  std::string *v38; // [rsp+38h] [rbp-188h]
  std::string *v39; // [rsp+40h] [rbp-180h]
  CReliableBroadcastRecipientFilter filterbroadcast; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v41; // [rsp+188h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(this->m_hData.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0) )
  {
    v18 = nIndex;
LABEL_5:
    pszNPCName = sSpeech->pszNPCName;
    goto LABEL_6;
  }
  v7 = nIndex;
  v8 = &v6[m_Index_low & 0x1FF];
  if ( v8 == 0 )
    goto LABEL_5;
  if ( m_Index != v8->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v8->m_pInstance;
  if ( m_pInstance == 0 )
    goto LABEL_5;
  v20 = (&m_pInstance[17].m_pEntity + 37 * nIndex);
  v21 = *(&m_pInstance[22].m_CScriptComponent + 74 * nIndex + 1);
  v22 = v21 >> 15;
  if ( v21 == -1 )
  {
    v23 = 0x7FFF;
    v24 = 0x7FFF;
  }
  else
  {
    v23 = *(&m_pInstance[22].m_CScriptComponent + 148 * nIndex + 2) & 0x7FFF;
    v24 = v23;
  }
  v25 = (v22 << 15) | v23 & 0x7FFF;
  LODWORD(v36[0]) = v25;
  if ( (v25 + 2) <= 1 )
    goto LABEL_5;
  v26 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9];
  if ( v26 == 0 )
    goto LABEL_5;
  v27 = &v26[v24 & 0x1FF];
  if ( v27 == 0 || v25 != v27->m_EHandle.m_Index || v27->m_pInstance == 0 )
    goto LABEL_5;
  if ( v21 == -1 )
  {
    v28 = 0x7FFF;
    v29 = 0x7FFF;
  }
  else
  {
    v28 = *(v20 + 276) & 0x7FFF;
    v29 = v28;
  }
  v30 = (v22 << 15) | v28 & 0x7FFF;
  LODWORD(v36[0]) = v30;
  if ( (v30 + 2) <= 1 )
    goto LABEL_5;
  v31 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v29 >> 9];
  if ( v31 == 0 )
    goto LABEL_5;
  v32 = &v31[v29 & 0x1FF];
  if ( v32 == 0 )
    goto LABEL_5;
  if ( v30 != v32->m_EHandle.m_Index )
    goto LABEL_5;
  v33 = v32->m_pInstance;
  if ( v32->m_pInstance == 0 || BYTE3(v33[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  pszNPCName = "";
  if ( v33[70].m_iszPrivateVScripts.u.m_Id != 0 )
    pszNPCName = v33[70].m_iszPrivateVScripts.u.m_pAsString;
LABEL_6:
  v10 = sSpeech->vecSpeech.m_Memory.m_pMemory[*&nIndex];
  m_Size = this->m_LogEntries.m_Size;
  if ( m_Size == 0
    || strcmp(
         this->m_LogEntries.m_Memory.m_pMemory[m_Size - 1].pszNPCSpeech,
         sSpeech->vecSpeech.m_Memory.m_pMemory[*&nIndex]) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filterbroadcast);
    filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filterbroadcast);
    filterbroadcast._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filterbroadcast);
    CDOTAUserMsg_AddQuestLogEntry::CDOTAUserMsg_AddQuestLogEntry(v36);
    v37 |= 1u;
    v36[0] = off_4186A90;
    v12 = strlen(pszNPCName);
    std::string::assign(v38, pszNPCName, v12);
    v37 |= 2u;
    v13 = strlen(v10);
    std::string::assign(v39, v10, v13);
    v14 = g_pGameEventSystem;
    v35 = *(*g_pGameEventSystem + 128LL);
    v34 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AddQuestLogEntry_t>(bool)::s_hEvent;
    (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages);
    v35(v14, 0, 0, &filterbroadcast, v34, v36, 40);
    v15 = this->m_LogEntries.m_Size;
    v16 = this->m_LogEntries.m_Size;
    if ( v15 == this->m_LogEntries.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<QuestLogEntry_t,int>::Grow(&this->m_LogEntries.m_Memory, 1);
      v16 = this->m_LogEntries.m_Size;
    }
    this->m_LogEntries.m_Size = v16 + 1;
    v17 = &this->m_LogEntries.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
    {
      v17->pszNPCName = pszNPCName;
      v17->pszNPCSpeech = v10;
      v17->bIsQuest = 0;
      v17->nQuestType = 0;
    }
    v36[0] = &off_4186910;
    CDOTAUserMsg_AddQuestLogEntry::~CDOTAUserMsg_AddQuestLogEntry(v36);
    filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filterbroadcast);
  }
}


// CDOTA_Tutorial::AddQuestLogEntry  (line 2462, @0x0000000002711540, libserver.so)  // inlines: AddToTail, CopyConstruct<QuestLogEntry_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<QuestLogEntry_t, int>::Grow
// callers: CDOTA_Tutorial::AddQuest, CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::AddQuestLogEntry(CDOTA_Tutorial *const this, CDotaQuest *pQuest)
{
  char *m_pszQuestName; // r15
  CNetworkStringBase<256,CDotaQuest::NetworkVar_m_pszQuestText> *p_m_pszQuestText; // r14
  __int64 m_Size; // r12
  int m_Value; // r13d
  int v7; // eax
  QuestLogEntry_t *v8; // rax

  m_pszQuestName = pQuest->m_pszQuestName;
  p_m_pszQuestText = &pQuest->m_pszQuestText;
  m_Size = this->m_LogEntries.m_Size;
  m_Value = pQuest->m_nQuestType.m_Value;
  v7 = this->m_LogEntries.m_Size;
  if ( m_Size == this->m_LogEntries.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<QuestLogEntry_t,int>::Grow(&this->m_LogEntries.m_Memory, 1);
    v7 = this->m_LogEntries.m_Size;
  }
  this->m_LogEntries.m_Size = v7 + 1;
  v8 = &this->m_LogEntries.m_Memory.m_pMemory[m_Size];
  if ( v8 != 0 )
  {
    v8->pszNPCName = m_pszQuestName;
    v8->pszNPCSpeech = p_m_pszQuestText;
    v8->bIsQuest = 1;
    v8->nQuestType = m_Value;
  }
}


// CDOTA_Tutorial::PrintDebugQuestLog  (line 2478, @0x00000000026f9c50, libserver.so)  // inlines: V_wcsncat<long unsigned int>
// calls: _V_wcsncat, Msg, __stack_chk_fail
// strings: "QUEST LOG ENTRY %d: %s"
void __fastcall CDOTA_Tutorial::PrintDebugQuestLog(CDOTA_Tutorial *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  const char *pszNPCSpeech; // rsi
  int v5; // esi
  const wchar_t *wszSpeech; // [rsp+8h] [rbp-1458h]
  const wchar_t *wszName; // [rsp+10h] [rbp-1450h]
  wchar_t wcResult[1024]; // [rsp+20h] [rbp-1440h] BYREF
  char output[1032]; // [rsp+1020h] [rbp-440h] BYREF
  unsigned __int64 v10; // [rsp+1428h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  if ( this->m_LogEntries.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      wcResult[0] = 0;
      wszName = (*(*g_pVGuiLocalize + 112LL))(g_pVGuiLocalize, this->m_LogEntries.m_Memory.m_pMemory[v2].pszNPCName);
      pszNPCSpeech = this->m_LogEntries.m_Memory.m_pMemory[v2++].pszNPCSpeech;
      wszSpeech = (*(*g_pVGuiLocalize + 112LL))(g_pVGuiLocalize, pszNPCSpeech);
      _V_wcsncat(wcResult, wszName, 1024, 0xFFFFFFFFLL);
      _V_wcsncat(wcResult, &unk_33C3BC0, 1024, 0xFFFFFFFFLL);
      _V_wcsncat(wcResult, wszSpeech, 1024, 0xFFFFFFFFLL);
      _V_wcsncat(wcResult, &unk_33C3BCC, 1024, 0xFFFFFFFFLL);
      (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, wcResult, output, 1024);
      v5 = v3++;
      Msg("QUEST LOG ENTRY %d: %s", v5, output);
    }
    while ( this->m_LogEntries.m_Size > v3 );
  }
}


// CDOTA_Tutorial::SetSpeechBubble  (line 2503, @0x00000000026f9dd0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForModify, GetGameTime, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetBool, ToDOTABaseNPC, V_strncpy<int>, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator->, operator=, operator=<float>, operator[]
// calls: __stack_chk_fail, _V_strncpy, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// callers: CDOTA_Tutorial::StopNPCSpeech, CDOTA_Tutorial::StartNPCSpeech
// strings: "modifier_tutorial_speechbubble", "modifier_speech_bubble", "faceplayer"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetSpeechBubble(
        CDOTA_Tutorial *const this,
        int nIndex,
        CDOTA_BaseNPC *pNPC,
        const char *pszSpeech,
        float flDuration,
        bool bAllowMovement,
        bool bShouldFacePlayer)
{
  uint32 m_Index; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityInstance *m_pInstance; // rcx
  CDOTA_BaseNPC *v15; // r14
  __int64 v16; // rbx
  _QWORD *v17; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  __int16 v21; // dx
  unsigned __int64 m_Index_low; // rcx
  int v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityInstance *v25; // r12
  CEntityIdentity *v26; // rdx
  int v27; // eax
  CEntityInstance *v28; // rsi
  __int64 v29; // rdx
  CEntityInstance **v30; // rdx
  double v31; // xmm1_8
  double v32; // xmm0_8
  bool v33; // zf
  uint32 v34; // eax
  CEntityInstance *v35; // rdi
  CConcreteEntityList *v36; // rsi
  CEntityIdentity *v37; // rdx
  unsigned __int64 v38; // rcx
  _QWORD *v39; // rdi
  _QWORD *v40; // rdi
  CEntityIdentity *v41; // rdx
  int v42; // eax
  _QWORD *v43; // rdi
  __int64 v44; // r9
  float v45; // xmm1_4
  const char *pszSpeechb; // [rsp+8h] [rbp-78h]
  bool pszSpeecha; // [rsp+8h] [rbp-78h]
  bool v48; // [rsp+18h] [rbp-68h]
  unsigned int flDurationb; // [rsp+1Ch] [rbp-64h]
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 <= 1 )
    return;
  v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
  if ( v11 == 0 )
    return;
  v12 = &v11[this->m_hData.m_Index & 0x1FF];
  if ( v12 == 0 )
    return;
  if ( m_Index != v12->m_EHandle.m_Index )
    return;
  m_pInstance = v12->m_pInstance;
  if ( m_pInstance == 0 )
    return;
  if ( pNPC != 0 && pNPC->m_bIsDOTANPC )
    v15 = pNPC;
  else
    v15 = 0;
  v16 = (&m_pInstance[17].m_pEntity + 37 * nIndex);
  if ( pszSpeech != 0 && *pszSpeech != 0 )
  {
    v43 = *(&m_pInstance[17].m_hPrivateScope.m_hScope + 37 * nIndex);
    v44 = &m_pInstance[17].m_iszPrivateVScripts.u.m_pAsString + 296 * nIndex + 2;
    if ( v43 != 0
      && (*(v43[1] + 49LL) & 4) == 0
      && *(&m_pInstance[17].m_iszPrivateVScripts.u.m_Id + 148 * nIndex) != 0xFFFF )
    {
      v48 = bAllowMovement;
      pszSpeechb = pszSpeech;
      (*(*v43 + 176LL))(v43, 18, 0xFFFFFFFFLL, *(&m_pInstance[17].m_iszPrivateVScripts.u.m_Id + 148 * nIndex));
      v44 = v16 + 18;
      pszSpeech = pszSpeechb;
      bAllowMovement = v48;
    }
    pszSpeecha = bAllowMovement;
    _V_strncpy(v44, pszSpeech, 256);
    if ( v15 != 0 && !pszSpeecha )
    {
      KeyValues::KeyValues(&kv, "modifier_speech_bubble");
      if ( flDuration != 0.0 )
      {
        KeyValues::SetFloat(&kv, "duration", v45);
        KeyValues::SetInt(&kv, "faceplayer", bShouldFacePlayer);
      }
      CDOTA_BaseNPC::AddNewModifier(v15, v15, 0, "modifier_tutorial_speechbubble", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    v17 = *(&m_pInstance[17].m_hPrivateScope.m_hScope + 37 * nIndex);
    if ( v17 != 0
      && (*(v17[1] + 49LL) & 4) == 0
      && *(&m_pInstance[17].m_iszPrivateVScripts.u.m_Id + 148 * nIndex) != 0xFFFF )
    {
      (*(*v17 + 176LL))(v17, 18, 0xFFFFFFFFLL, *(&m_pInstance[17].m_iszPrivateVScripts.u.m_Id + 148 * nIndex));
    }
    _V_strncpy(v16 + 18, "", 256);
    if ( v15 != 0 )
      CDOTA_BaseNPC::RemoveModifierByName(v15, "modifier_tutorial_speechbubble");
  }
  if ( pNPC != 0 && (m_pEntity = pNPC->m_pEntity) != 0 )
  {
    v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v20 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v21 = v20 | 0x8000;
    m_Index_low = CEntityHandle::gm_pEntityList;
    v23 = (v19 << 15) | v21 & 0x7FFF;
    if ( (v23 + 2) > 1 )
    {
      v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v23 >> 9) & 0x3F];
      if ( v24 != 0 )
      {
        v25 = 0;
        v26 = &v24[v23 & 0x1FF];
        if ( v26 != 0 && v26->m_EHandle.m_Index == v23 )
          v25 = v26->m_pInstance;
        goto LABEL_27;
      }
    }
  }
  else
  {
    m_Index_low = CEntityHandle::gm_pEntityList;
  }
  v25 = 0;
LABEL_27:
  v27 = *(v16 + 276);
  v28 = 0;
  if ( (v27 + 2) > 1 )
  {
    v29 = *(m_Index_low + 8 * ((*(v16 + 276) >> 9) & 0x3F) + 8);
    if ( v29 != 0 )
    {
      m_Index_low = 120LL * (*(v16 + 276) & 0x1FF);
      v30 = (m_Index_low + v29);
      if ( v30 != 0 && v27 == *(v30 + 4) )
        v28 = *v30;
    }
  }
  if ( v25 != v28 )
  {
    v40 = *(v16 + 8);
    if ( v40 != 0 && (*(v40[1] + 49LL) & 4) == 0 && *(v16 + 16) != 0xFFFF )
      (*(*v40 + 176LL))(v40, 276, 0xFFFFFFFFLL, *(v16 + 16));
    if ( v25 != 0 && (v41 = v25->m_pEntity) != 0 )
    {
      v42 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
      if ( v41->m_EHandle.m_Index == -1 )
      {
        m_Index_low = 0x7FFF;
      }
      else
      {
        m_Index_low = LOWORD(v41->m_EHandle.m_Index);
        LOWORD(m_Index_low) = m_Index_low & 0x7FFF;
      }
      *(v16 + 276) = m_Index_low | *(v16 + 276) & 0x8000;
      *(v16 + 276) = (v42 << 15) | *(v16 + 276) & 0x7FFF;
    }
    else
    {
      *(v16 + 276) = -1;
    }
  }
  *&v31 = LODWORD(flDuration);
  if ( flDuration == 0.0 )
  {
    *&v32 = 3212836864LL;
    v33 = *(v16 + 280) == -1.0;
  }
  else
  {
    v32 = 0.0;
    if ( g_pGameRules != 0 )
      *&v32 = *&g_pGameRules[18].m_szQuestName[20];
    *&v32 = *&v32 + flDuration;
    v33 = *&v32 == *(v16 + 280);
  }
  if ( !v33 )
  {
    v39 = *(v16 + 8);
    if ( v39 != 0 && (*(v39[1] + 49LL) & 4) == 0 && *(v16 + 16) != 0xFFFF )
    {
      flDurationb = LODWORD(v32);
      (*(*v39 + 176LL))(v39, 280, 0xFFFFFFFFLL, *(v16 + 16), v32, v31);
      *&v32 = flDurationb;
    }
    *(v16 + 280) = LODWORD(v32);
  }
  v34 = this->m_hData.m_Index;
  v35 = 0;
  v36 = CEntityHandle::gm_pEntityList;
  v37 = (v34 + 2);
  if ( v37 > 1 )
  {
    m_Index_low = LOWORD(this->m_hData.m_Index);
    v37 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v37 != 0 )
    {
      v38 = m_Index_low & 0x1FF;
      v36 = (8 * v38);
      m_Index_low = 120 * v38;
      v37 = (v37 + m_Index_low);
      if ( v37 != 0 && v34 == v37->m_EHandle.m_Index )
        v35 = v37->m_pInstance;
    }
  }
  (*(v35->_vptr_IHandleEntity + 21))(v35, v36, v37, m_Index_low, v32, v31);
}


// CDOTA_Tutorial::OnQuestComplete  (line 2547, @0x00000000026fa360, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetRemainingTime, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetTaskSecondsRemaining, Start, _V_strcmp, operator CEntityInstance*, operator=<float>
// calls: KeyValues::FindKey, KeyValues::GetString, strcmp, KeyValues::GetFloat, CountdownTimer::Now
// callers: CDOTA_Tutorial::FireGameEvent
// strings: "advance_on_quest", "advance_time"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::OnQuestComplete(CDOTA_Tutorial *const this, const CDotaQuest *pQuest)
{
  KeyValues *m_pLessonKeys; // rdi
  KeyValues *Key; // rax
  const char *String; // rax
  float v7; // xmm1_4
  double v8; // xmm0_8
  double v9; // xmm1_8
  float v10; // xmm0_4
  uint32 m_Index; // eax
  int v12; // r12d
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v16; // [rsp+8h] [rbp-18h]
  float Float; // [rsp+Ch] [rbp-14h]
  float m_Value; // [rsp+Ch] [rbp-14h]

  m_pLessonKeys = this->m_pLessonKeys;
  if ( m_pLessonKeys != 0 )
  {
    Key = KeyValues::FindKey(m_pLessonKeys, "advance_on_quest", 0);
    if ( Key != 0 )
    {
      String = KeyValues::GetString(Key, 0, "", 0, 0);
      if ( strcmp(pQuest->m_pszQuestName, String) == 0 )
      {
        this->m_pNextLessonKey = 0;
        Float = KeyValues::GetFloat(this->m_pLessonKeys, "advance_time", v7);
        *&v8 = CountdownTimer::Now(&this->m_TipDelayTimer) + Float;
        if ( *&v8 != this->m_TipDelayTimer.m_timestamp.m_Value )
        {
          v16 = *&v8;
          (*(this->m_TipDelayTimer._vptr_CountdownTimer + 2))(&this->m_TipDelayTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *&v8 = LODWORD(v16);
          this->m_TipDelayTimer.m_timestamp.m_Value = v16;
        }
        if ( Float != this->m_TipDelayTimer.m_duration.m_Value )
        {
          (*(this->m_TipDelayTimer._vptr_CountdownTimer + 2))(
            &this->m_TipDelayTimer,
            8,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            v8,
            v9,
            Float);
          this->m_TipDelayTimer.m_duration.m_Value = Float;
        }
        m_Value = this->m_TipDelayTimer.m_timestamp.m_Value;
        v10 = CountdownTimer::Now(&this->m_TipDelayTimer);
        m_Index = this->m_hData.m_Index;
        v12 = (m_Value - v10);
        if ( m_Index + 2 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[this->m_hData.m_Index & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && v12 != HIDWORD(m_pInstance[16].m_hPrivateScope.m_hScope) )
              {
                (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                HIDWORD(m_pInstance[16].m_hPrivateScope.m_hScope) = v12;
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::StartNPCAnimation  (line 2564, @0x00000000026ff3c0, libserver.so)  // inlines: ActivityList_IndexForName, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, SetBool, SetNPCAnimation, SetNPCAnimationFireOnce, ToDOTABaseNPC, operator CEntityInstance*, operator->
// calls: KeyValues::GetString, Warning, CDOTA_Tutorial::GetNPCByName, KeyValues::GetInt, KeyValues::GetFloat, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsBot (16 total)
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "Lesson has \"npc_animation\" key with no 'npc' key specified inside it.\n", "reveal_npc_delay", "use_modifier_for_anim", "modifier_tutorial_forceanimation", "Lesson has \"npc_animation\" key with invalid 'activity' key specified inside it.\n", "fire_once" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::StartNPCAnimation(CDOTA_Tutorial *const this, KeyValues *pAnimKV)
{
  const char *String; // rax
  const char *v5; // rbx
  const char *v6; // rax
  unsigned int v7; // r14d
  CDOTA_BaseNPC *NPCByName; // r13
  float v9; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const CEntityHandle *p_m_hTutorialSpawner; // rbx
  int Int; // eax
  CEntityIdentity *v15; // rdx
  int v16; // r12d
  float v17; // xmm1_4
  float flRevealDelay; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  String = KeyValues::GetString(pAnimKV, "npc", "", 0, 0);
  v5 = String;
  if ( String == 0 || *String == 0 )
  {
    Warning("Lesson has \"npc_animation\" key with no 'npc' key specified inside it.\n");
    return;
  }
  v6 = KeyValues::GetString(pAnimKV, "activity", "", 0, 0);
  if ( g_pAnimationSystem == 0 || (v7 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, v6)) == -1 )
  {
    Warning("Lesson has \"npc_animation\" key with invalid 'activity' key specified inside it.\n");
    return;
  }
  NPCByName = CDOTA_Tutorial::GetNPCByName(this, v5, 0);
  if ( (NPCByName != 0 || (NPCByName = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, v5)) != 0)
    && NPCByName->m_bIsDOTANPC )
  {
    if ( KeyValues::GetInt(pAnimKV, "death", 0) != 0 && CDOTA_BaseNPC::IsBot(NPCByName) )
    {
      (*(NPCByName->m_pBot->_vptr_CDOTA_Bot + 6))(NPCByName->m_pBot, v7);
      return;
    }
    flRevealDelay = KeyValues::GetFloat(pAnimKV, "reveal_npc_delay", v9);
    if ( KeyValues::GetInt(pAnimKV, "use_modifier_for_anim", 1) != 0 )
    {
      if ( dota_tutorial_usemodifierforanim.m_pParent->m_Value.m_nValue != 0
        || (m_Index = NPCByName->m_hTutorialSpawner.m_Index) + 2 <= 1
        || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(NPCByName->m_hTutorialSpawner.m_Index) >> 9)
                                                                 & 0x3F]) == 0
        || (v12 = &v11[NPCByName->m_hTutorialSpawner.m_Index & 0x1FF]) == 0
        || m_Index != v12->m_EHandle.m_Index
        || (p_m_hTutorialSpawner = &NPCByName->m_hTutorialSpawner, v12->m_pInstance == 0) )
      {
        if ( flRevealDelay != 0.0 )
        {
          KeyValues::KeyValues(&kv, "modifier_tutorial_hide_npc");
          KeyValues::SetFloat(&kv, "duration", v17);
          CDOTA_BaseNPC::AddNewModifier(NPCByName, NPCByName, 0, "modifier_tutorial_hide_npc", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
        CDOTA_BaseNPC::RemoveModifierByName(NPCByName, "modifier_tutorial_forceanimation");
        KeyValues::KeyValues(&kv, "modifier_tutorial_forceanimation");
        KeyValues::SetInt(&kv, "activity", v7);
        Int = KeyValues::GetInt(pAnimKV, "loop", 0);
        KeyValues::SetInt(&kv, "loop", Int != 0);
        CDOTA_BaseNPC::AddNewModifier(NPCByName, NPCByName, 0, "modifier_tutorial_forceanimation", &kv, 0);
        KeyValues::~KeyValues(&kv);
        return;
      }
    }
    else
    {
      m_Index = NPCByName->m_hTutorialSpawner.m_Index;
      if ( m_Index + 2 <= 1 )
        return;
      p_m_hTutorialSpawner = &NPCByName->m_hTutorialSpawner;
      v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(NPCByName->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
      if ( v15 == 0 )
        return;
      v12 = &v15[NPCByName->m_hTutorialSpawner.m_Index & 0x1FF];
      if ( v12 == 0 )
        return;
    }
    if ( m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
    {
      HIDWORD(v12->m_pInstance[16].m_CScriptComponent) = v7;
      v16 = KeyValues::GetInt(pAnimKV, "fire_once", 0);
      BYTE4(CEntityHandle::operator CEntityInstance *(p_m_hTutorialSpawner)[17]._vptr_IHandleEntity) = v16 != 0;
    }
  }
}


// CDOTA_Tutorial::StopNPCAnimation  (line 2635, @0x00000000026ff780, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, SetNPCAnimation, SetNPCAnimationFireOnce, ToDOTABaseNPC, operator CEntityInstance*, operator->
// calls: CDOTA_Tutorial::GetNPCByName, CDOTA_BaseNPC::RemoveModifierByName, CGameEntitySystem::FindEntityByClassname
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "modifier_tutorial_forceanimation"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::StopNPCAnimation(CDOTA_Tutorial *const this, const char *pszNPCName)
{
  CDOTA_BaseNPC *NPCByName; // rax
  uint32 m_Index; // edx
  CConcreteEntityList *v5; // rsi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // rcx
  uint32 v9; // edx
  unsigned __int16 v10; // di
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CBaseEntity *pTarget; // [rsp+8h] [rbp-18h]

  NPCByName = CDOTA_Tutorial::GetNPCByName(this, pszNPCName, 0);
  if ( (NPCByName != 0 || (NPCByName = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, pszNPCName)) != 0)
    && NPCByName->m_bIsDOTANPC )
  {
    if ( dota_tutorial_usemodifierforanim.m_pParent->m_Value.m_nValue != 0 )
    {
      pTarget = NPCByName;
      CDOTA_BaseNPC::RemoveModifierByName(NPCByName, "modifier_tutorial_forceanimation");
      NPCByName = pTarget;
    }
    m_Index = NPCByName->m_hTutorialSpawner.m_Index;
    v5 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(NPCByName->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[NPCByName->m_hTutorialSpawner.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
        {
          HIDWORD(v7->m_pInstance[16].m_CScriptComponent) = -1;
          m_pInstance = 0;
          v9 = NPCByName->m_hTutorialSpawner.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = NPCByName->m_hTutorialSpawner.m_Index;
            v11 = v5->m_pIdentityChunks[(v10 >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
                m_pInstance = v12->m_pInstance;
            }
          }
          BYTE4(m_pInstance[17]._vptr_IHandleEntity) = 0;
        }
      }
    }
  }
}


// CDOTA_Tutorial::ActivatePermanentGlyph  (line 2662, @0x00000000026fa540, libserver.so)  // inlines: ToDOTABaseNPC
// calls: KeyValues::KeyValues, CGameEntitySystem::FindEntityByClassname, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "modifier_fountain_glyph", "npc_dota_tower"
void __fastcall CDOTA_Tutorial::ActivatePermanentGlyph(CDOTA_Tutorial *const this)
{
  CBaseEntity *v1; // rbx
  CDOTA_BaseNPC *EntityByClassname; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-28h]

  v1 = 0;
  v4 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_fountain_glyph");
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v1, "npc_dota_tower");
    v1 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    if ( EntityByClassname->m_bIsDOTANPC )
      CDOTA_BaseNPC::AddNewModifier(EntityByClassname, EntityByClassname, 0, "modifier_fountain_glyph", &kv, 0);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Tutorial::MurderAllCreeps  (line 2679, @0x00000000026fa600, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CGameEntitySystem::FindEntityByClassname, CDOTA_BaseNPC::ForceKill
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "npc_dota_creep*"
void __fastcall CDOTA_Tutorial::MurderAllCreeps(CDOTA_Tutorial *const this)
{
  CBaseEntity *v1; // rbx
  CDOTA_BaseNPC *EntityByClassname; // rax

  v1 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v1, "npc_dota_creep*");
    v1 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    if ( EntityByClassname->m_bIsDOTANPC )
      CDOTA_BaseNPC::ForceKill(EntityByClassname, 0);
  }
}


// CDOTA_Tutorial::FindLastHitChallengeRival  (line 2696, @0x00000000026fa650, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, V_strlen, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, DOTAGameManager, CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetString, strlen
// callers: CDOTA_Tutorial::AddBotWithSettings
// strings: "LastHitChallengeRival"
const char *__fastcall CDOTA_Tutorial::FindLastHitChallengeRival(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v3; // edi
  unsigned __int16 v4; // cx
  int v5; // r8d
  int v6; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  const char *result; // rax
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v11; // dx
  int v12; // ecx
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // rax
  int m_pEntity; // ebx
  CDOTAGameManager *v18; // rax
  KeyValues *HeroDataByHeroID; // rdi
  const char *String; // rax
  const char *v21; // rbx
  CEntityInstance *v22; // rdx

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer == 0 )
    return "random";
  m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
  v3 = m_Index >> 15;
  if ( m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (v3 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) <= 1 )
    return "random";
  v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
  if ( v7 == 0 )
    return "random";
  v8 = &v7[v5 & 0x1FF];
  if ( v8 == 0 )
    return "random";
  if ( v6 != v8->m_EHandle.m_Index )
    return "random";
  m_pInstance = v8->m_pInstance;
  if ( v8->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    return "random";
  }
  if ( m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  v13 = (v3 << 15) | v11 & 0x7FFF;
  if ( (v13 + 2) > 1
    && (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9]) != 0
    && (v15 = &v14[v12 & 0x1FF]) != 0
    && v13 == v15->m_EHandle.m_Index
    && (v22 = v15->m_pInstance) != 0
    && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
  {
    v16 = 0;
    if ( (v22[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      v16 = v22;
  }
  else
  {
    v16 = 0;
  }
  m_pEntity = v16[100].m_pEntity;
  v18 = DOTAGameManager();
  HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(v18, m_pEntity);
  result = "random";
  if ( HeroDataByHeroID != 0 )
  {
    String = KeyValues::GetString(HeroDataByHeroID, "LastHitChallengeRival", "", 0, 0);
    v21 = String;
    if ( String != 0 && strlen(String) > 0 )
      return v21;
    return "random";
  }
  return result;
}


// CDOTA_Tutorial::BeginLastHitChallenge  (line 2721, @0x00000000026fc700, libserver.so)  // inlines: HandleTutorialEvent
// calls: SetGlobalConvarTrackerActive, ConVar::SetValue, CDOTA_Tutorial::HandleTutorialEvent
// callers: CDOTAGamerules::ClientMsg_BeginLastHitChallenge
// strings: "last_hit_lane_chosen"
// globals: g_DOTATutorial
void __fastcall CDOTA_Tutorial::BeginLastHitChallenge(
        CDOTA_Tutorial *const this,
        DOTA_LANE nChosenLane,
        bool bHelperEnabled)
{
  bool v4; // cc
  int v6; // esi

  v4 = g_DOTATutorial.m_TipDelayTimer.m_timestamp.m_Value <= 0.0;
  this->m_nLastHitChallengeLane = nChosenLane;
  this->m_bLastHitHelperAllowed = bHelperEnabled;
  if ( v4 )
    CDOTA_Tutorial::HandleTutorialEvent(&g_DOTATutorial, "last_hit_lane_chosen");
  SetGlobalConvarTrackerActive(this->m_nConvarTrackerID, 1);
  if ( nChosenLane == DOTA_LANE::DOTA_LANE_MIDDLE )
  {
    ConVar::SetValue(&dota_disable_top_lane, 1);
    v6 = 0;
LABEL_8:
    ConVar::SetValue(&dota_disable_mid_lane, v6);
    ConVar::SetValue(&dota_disable_bot_lane, 1);
    SetGlobalConvarTrackerActive(this->m_nConvarTrackerID, 0);
    return;
  }
  if ( nChosenLane != DOTA_LANE::DOTA_LANE_BOTTOM )
  {
    if ( nChosenLane != DOTA_LANE::DOTA_LANE_TOP )
    {
      SetGlobalConvarTrackerActive(this->m_nConvarTrackerID, 0);
      return;
    }
    ConVar::SetValue(&dota_disable_top_lane, 0);
    v6 = 1;
    goto LABEL_8;
  }
  ConVar::SetValue(&dota_disable_top_lane, 1);
  ConVar::SetValue(&dota_disable_mid_lane, 1);
  ConVar::SetValue(&dota_disable_bot_lane, 0);
  SetGlobalConvarTrackerActive(this->m_nConvarTrackerID, 0);
}


// CDOTA_Tutorial::ActivateLastHitHelper  (line 2755, @0x00000000026fa840, libserver.so)  // inlines: CEntityHandle, EnableTargetingFriendlies, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "modifier_tutorial_lasthit_helper"
void __fastcall CDOTA_Tutorial::ActivateLastHitHelper(CDOTA_Tutorial *const this, bool bIncludeDenies)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v5; // edi
  unsigned __int16 v6; // cx
  int v7; // r9d
  int v8; // edx
  CEntityIdentity *v9; // r8
  CEntityIdentity *v10; // r8
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v12; // dx
  int v13; // esi
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // r13
  CDOTA_Buff *v18; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  if ( this->m_bLastHitHelperAllowed )
  {
    HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
    if ( HumanPlayer != 0 )
    {
      m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
      v5 = m_Index >> 15;
      if ( m_Index == -1 )
      {
        v6 = 0x7FFF;
        v7 = 0x7FFF;
      }
      else
      {
        v6 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
        v7 = v6;
      }
      v8 = (v5 << 15) | v6 & 0x7FFF;
      if ( (v8 + 2) > 1 )
      {
        v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
        if ( v9 != 0 )
        {
          v10 = &v9[v7 & 0x1FF];
          if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              if ( m_Index == -1 )
              {
                v12 = 0x7FFF;
                v13 = 0x7FFF;
              }
              else
              {
                v12 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                v13 = v12;
              }
              v14 = (v5 << 15) | v12 & 0x7FFF;
              if ( (v14 + 2) > 1 )
              {
                v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
                if ( v15 != 0 )
                {
                  v16 = &v15[v13 & 0x1FF];
                  if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
                  {
                    v17 = v16->m_pInstance;
                    if ( v16->m_pInstance != 0
                      && BYTE3(v17[7]._vptr_IHandleEntity) != 0
                      && (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                    {
                      KeyValues::KeyValues(&kv, "modifier_tutorial_lasthit_helper");
                      v18 = CDOTA_BaseNPC::AddNewModifier(v17, v17, 0, "modifier_tutorial_lasthit_helper", &kv, 0);
                      if ( v18 != 0 && bIncludeDenies )
                        LOBYTE(v18[1]._vptr_CDOTA_Buff) = 1;
                      KeyValues::~KeyValues(&kv);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetNPCSleep  (line 2782, @0x00000000026ff8c0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: Warning, CDOTA_Tutorial::GetNPCByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "modifier_tutorial_sleep"
void __fastcall CDOTA_Tutorial::SetNPCSleep(CDOTA_Tutorial *const this, const char *pszNPCName, bool bSleep)
{
  CDOTA_BaseNPC *NPCByName; // rax
  CDOTA_BaseNPC *v5; // rbx
  CDOTA_Buff *ModifierByName; // rax
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  if ( pszNPCName != 0 && *pszNPCName != 0 )
  {
    NPCByName = CDOTA_Tutorial::GetNPCByName(this, pszNPCName, 0);
    v5 = NPCByName;
    if ( NPCByName != 0 && NPCByName->m_bIsDOTANPC )
    {
      if ( bSleep )
      {
        KeyValues::KeyValues(&kv, "modifier_tutorial_sleep");
        CDOTA_BaseNPC::AddNewModifier(v5, v5, 0, "modifier_tutorial_sleep", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      else
      {
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(NPCByName, "modifier_tutorial_sleep", 0);
        if ( ModifierByName != 0 )
          CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
      }
    }
  }
  else
  {
    Warning(&stru_33C2400, pszNPCName, bSleep);
  }
}


// CDOTA_Tutorial::GetNPCByName  (line 2815, @0x00000000026ff0b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetFirstNPC, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator->, operator[], ~CUtlVector
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast, CDOTA_Tutorial::GetHumanPlayer, CDOTAPlayer::GetAssignedHero, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Tutorial::StartNPCAnimation, CDOTA_Tutorial::StopNPCAnimation, CDOTA_Tutorial::SetNPCSleep, CDOTA_Tutorial::StartNPCSpeech, CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTA_Tutorial::GetNPCByName(
        CDOTA_Tutorial *const this,
        const char *pszNPCName,
        bool bFindNearestFriendly)
{
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v6; // rbx
  CBaseEntity *m_pInstance; // r12
  int *v9; // rax
  unsigned __int16 *v10; // rdx
  int v11; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTAPlayer *HumanPlayer; // rax
  CDOTA_BaseNPC_Hero *AssignedHero; // r15
  const Vector *AbsOrigin; // rax
  __int64 v18; // r12
  int v19; // r13d
  const Vector *v20; // r14
  const CBaseEntity *v21; // rdi
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  const Vector *v27; // rax
  float v28; // xmm0_4
  CHandle<CBaseEntity> *v29; // rdx
  uint32 v30; // eax
  __int16 v31; // cx
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  float flNearestSqr; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pszNPCName, 0, 0, 0, 0);
  v6 = EntityByName;
  if ( EntityByName == 0 )
    return 0;
  if ( EntityByName->m_bIsDOTANPC )
    return EntityByName;
  v9 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_ScriptedSpawner, 0);
  if ( v9 != 0 )
  {
    if ( v9[230] <= 0 )
      return 0;
    v10 = *(v9 + 116);
    v11 = *v10;
    if ( (*v10 + 2) <= 1 )
      return 0;
    v12 = *v10;
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v10 >> 9) & 0x3F];
    if ( v13 == 0 )
      return 0;
    v14 = &v13[v12 & 0x1FF];
    if ( v14 == 0 )
      return 0;
    if ( v11 != v14->m_EHandle.m_Index )
      return 0;
    m_pInstance = v14->m_pInstance;
    if ( v14->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
      return 0;
  }
  else
  {
    m_pInstance = v6;
    if ( bFindNearestFriendly )
    {
      HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
      if ( HumanPlayer != 0 )
      {
        AssignedHero = CDOTAPlayer::GetAssignedHero(HumanPlayer);
        if ( AssignedHero != 0 )
        {
          entities.m_Size = 0;
          entities.m_Memory.m_pMemory = 0;
          entities.m_Memory.m_nAllocationCount = 0;
          entities.m_Memory.m_nGrowSize = 0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(AssignedHero);
          FindUnitsInRadius(AssignedHero->m_iTeamNum.m_Value, AbsOrigin, AssignedHero, 1024.0, &entities, 1, 2, 0, 0, 0);
          if ( entities.m_Size > 0 )
          {
            v18 = 0;
            v19 = 0;
            flNearestSqr = 1048576.0;
            do
            {
              v20 = CBaseEntity::GetAbsOrigin(AssignedHero);
              v21 = 0;
              v22 = &entities.m_Memory.m_pMemory[v18];
              m_Index = entities.m_Memory.m_pMemory[v18].m_Index;
              if ( m_Index + 2 > 1 )
              {
                v24 = v22->m_Index;
                v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
                if ( v25 != 0 )
                {
                  v26 = &v25[v24 & 0x1FF];
                  if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
                    v21 = v26->m_pInstance;
                }
              }
              v27 = CBaseEntity::GetAbsOrigin(v21);
              v28 = ((v27->x - v20->x) * (v27->x - v20->x)) + ((v27->y - v20->y) * (v27->y - v20->y));
              if ( flNearestSqr > v28 )
              {
                v6 = 0;
                v29 = &entities.m_Memory.m_pMemory[v18];
                v30 = entities.m_Memory.m_pMemory[v18].m_Index;
                if ( v30 + 2 > 1 )
                {
                  v31 = v29->m_Index;
                  v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v29->m_Index) >> 9) & 0x3F];
                  if ( v32 != 0 )
                  {
                    v33 = &v32[v31 & 0x1FF];
                    if ( v33 != 0 && v30 == v33->m_EHandle.m_Index )
                      v6 = v33->m_pInstance;
                  }
                }
                flNearestSqr = v28;
              }
              ++v19;
              ++v18;
            }
            while ( entities.m_Size > v19 );
          }
          m_pInstance = v6;
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
        }
      }
    }
  }
  return m_pInstance;
}


// TestTutorialUI  (line 2863, @0x00000000026cae60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetTutorialUI, atoi, operator CEntityInstance*
// calls: UTIL_IsCommandIssuedByServerAdmin, strtol
// globals: CEntityHandle::gm_pEntityList
void __fastcall TestTutorialUI(const CCommandContext *const ctx, const CCommand *const args)
{
  int v3; // r12d
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CEntityInstance *m_pInstance; // rbx

  if ( UTIL_IsCommandIssuedByServerAdmin() && args->m_nArgc > 1 )
  {
    v3 = strtol(args->m_ppArgv[1], 0, 10);
    if ( g_DOTATutorial.m_hData.m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_DOTATutorial.m_hData.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[g_DOTATutorial.m_hData.m_Index & 0x1FF];
        if ( v5 != 0 && g_DOTATutorial.m_hData.m_Index == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( v5->m_pInstance != 0 && v3 != LODWORD(m_pInstance[16].m_iszPrivateVScripts.u.m_Id) )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            LODWORD(m_pInstance[16].m_iszPrivateVScripts.u.m_Id) = v3;
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::GivePlayerItem  (line 2878, @0x00000000026faa90, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, CDOTA_BaseNPC::AddItem
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::GivePlayerItem(CDOTA_Tutorial *const this, const char *pszItemName)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v5; // edi
  unsigned __int16 v6; // cx
  int v7; // r9d
  int v8; // edx
  CEntityIdentity *v9; // r8
  CEntityIdentity *v10; // r8
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v12; // dx
  int v13; // esi
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rdi

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
    v5 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Index == -1 )
            {
              v12 = 0x7FFF;
              v13 = 0x7FFF;
            }
            else
            {
              v12 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v13 = v12;
            }
            v14 = (v5 << 15) | v12 & 0x7FFF;
            if ( (v14 + 2) > 1 )
            {
              v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
              if ( v15 != 0 )
              {
                v16 = &v15[v13 & 0x1FF];
                if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
                {
                  v17 = v16->m_pInstance;
                  if ( v16->m_pInstance != 0
                    && BYTE3(v17[7]._vptr_IHandleEntity) != 0
                    && (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    CDOTA_BaseNPC::AddItem(v17, pszItemName, 3, -1, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetPlayerGold  (line 2894, @0x00000000026f8b90, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ModifyGold, SetGold, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, CDOTA_PlayerResource::ModifyGold, CDOTA_PlayerResource::SetGold
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::SetPlayerGold(CDOTA_Tutorial *const this, int nAmount, bool bSet)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v7; // edi
  unsigned __int16 v8; // dx
  int v9; // r9d
  int v10; // ecx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v14; // dx
  int v15; // ecx
  int v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CEntityInstance *v19; // r13

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
    v7 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v8 = 0x7FFF;
      v9 = 0x7FFF;
    }
    else
    {
      v8 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v9 = v8;
    }
    v10 = (v7 << 15) | v8 & 0x7FFF;
    if ( (v10 + 2) > 1 )
    {
      v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
      if ( v11 != 0 )
      {
        v12 = &v11[v9 & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
        {
          m_pInstance = v12->m_pInstance;
          if ( m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Index == -1 )
            {
              v14 = 0x7FFF;
              v15 = 0x7FFF;
            }
            else
            {
              v14 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v15 = v14;
            }
            v16 = (v7 << 15) | v14 & 0x7FFF;
            if ( (v16 + 2) > 1 )
            {
              v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
              if ( v17 != 0 )
              {
                v18 = &v17[v15 & 0x1FF];
                if ( v18 != 0 && v16 == v18->m_EHandle.m_Index )
                {
                  v19 = v18->m_pInstance;
                  if ( v18->m_pInstance != 0
                    && BYTE3(v19[7]._vptr_IHandleEntity) != 0
                    && (v19[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    if ( bSet )
                    {
                      CDOTA_PlayerResource::SetGold(g_pDOTAPlayerResource, v19[100]._vptr_IHandleEntity, nAmount, 1);
                      CDOTA_PlayerResource::SetGold(g_pDOTAPlayerResource, v19[100]._vptr_IHandleEntity, 0, 0);
                    }
                    else
                    {
                      CDOTA_PlayerResource::ModifyGold(
                        g_pDOTAPlayerResource,
                        v19[100]._vptr_IHandleEntity,
                        nAmount,
                        1,
                        0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::EnsurePlayerLevel  (line 2918, @0x00000000026fac40, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetLevel, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::EnsurePlayerLevel(CDOTA_Tutorial *const this, int iLevel)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v5; // edi
  unsigned __int16 v6; // cx
  int v7; // r9d
  int v8; // edx
  CEntityIdentity *v9; // r8
  CEntityIdentity *v10; // r8
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v12; // dx
  int v13; // esi
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rbx
  int i; // eax

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
    v5 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Index == -1 )
            {
              v12 = 0x7FFF;
              v13 = 0x7FFF;
            }
            else
            {
              v12 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v13 = v12;
            }
            v14 = (v5 << 15) | v12 & 0x7FFF;
            if ( (v14 + 2) > 1 )
            {
              v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
              if ( v15 != 0 )
              {
                v16 = &v15[v13 & 0x1FF];
                if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
                {
                  v17 = v16->m_pInstance;
                  if ( v16->m_pInstance != 0
                    && BYTE3(v17[7]._vptr_IHandleEntity) != 0
                    && (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    for ( i = HIDWORD(v17[44].m_hPrivateScope.m_hScope);
                          iLevel > i;
                          i = HIDWORD(v17[44].m_hPrivateScope.m_hScope) )
                    {
                      (*(v17->_vptr_IHandleEntity + 492))(v17, iLevel - i == 1);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::AddBot  (line 2936, @0x00000000026fae20, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, _V_strcmp
// calls: DOTACommander, CDOTA_Commander::GetUnusedBotName, Msg, __dynamic_cast, CBaseEntity::ClearFlags, CBaseEntity::AddFlag, CDOTAGamerules::MakeRandomHeroSelection, CDOTA_PlayerResource::IsHeroSelected, DOTA_Hero_Spawn
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "Failed to create Bot.\n"
void __fastcall CDOTA_Tutorial::AddBot(CDOTA_Tutorial *const this, const char *pszHeroName, bool bJoinGood)
{
  __int64 (__fastcall *v5)(IVEngineServer2 *, const char *); // r14
  CDOTA_Commander *v6; // rax
  const char *UnusedBotName; // rax
  int v8; // eax
  __int64 v9; // rsi
  CGameEntitySystem *v10; // rdx
  CEntityIdentity *v11; // rcx
  __int64 v12; // rdx
  CBaseEntity *v13; // rax
  CDOTAPlayer *v14; // rbx
  bool v15; // zf
  __int64 v16; // rcx
  const char *v17; // rsi
  const char *v18; // rdi
  int v19; // eax

  v5 = *(*engine + 376LL);
  v6 = DOTACommander();
  UnusedBotName = CDOTA_Commander::GetUnusedBotName(v6);
  v8 = v5(engine, UnusedBotName);
  v10 = g_pGameEntitySystem;
  if ( v8 <= 0x7FFE
    && (v11 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) != 0
    && (v12 = v8 & 0x1FF, v9 = 8 * v12, (v10 = &v11[v12]) != 0)
    && v8 == (*&v10->m_EntityList.m_Lock.gap0 & 0x7FFF)
    && v10->_vptr_IEntityResourceManifestBuilder != 0
    && (v13 = __dynamic_cast(
                v10->_vptr_IEntityResourceManifestBuilder,
                &`typeinfo for'CBaseEntity,
                &`typeinfo for'CDOTAPlayer,
                0),
        v14 = v13,
        v13 != 0) )
  {
    CBaseEntity::ClearFlags(v13);
    CBaseEntity::AddFlag(v14, 384);
    (*(v14->_vptr_IHandleEntity + 70))(v14, 3 - bJoinGood);
    (*(v14->_vptr_IHandleEntity + 400))(v14, 1);
    v16 = 7;
    v17 = pszHeroName;
    v18 = "random";
    do
    {
      if ( v16 == 0 )
        break;
      v15 = *v17++ == *v18++;
      --v16;
    }
    while ( v15 );
    if ( v15 || CDOTA_PlayerResource::IsHeroSelected(g_pDOTAPlayerResource, pszHeroName) )
    {
      v19 = (*(v14->_vptr_IHandleEntity + 393))(v14, v17);
      CDOTAGamerules::MakeRandomHeroSelection(g_pGameRules, v19, 1, -1, 0);
    }
    else
    {
      DOTA_Hero_Spawn(pszHeroName, v14, 0);
    }
  }
  else
  {
    Msg("Failed to create Bot.\n", v9, v10);
  }
}


// OnTutorialAddBotWithSettingsSpawnCompletion  (line 2961, @0x00000000026cc590, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, GetValueString, SetBotDifficulty, SetForcedLane, TempString, _V_strcmp, atoi, operator[]
// calls: strtol, VariantFieldTypeName, Warning
// strings: "passive", "easy", "unfair", "last_hit_chosen", "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_26CC8B1
void __fastcall OnTutorialAddBotWithSettingsSpawnCompletion(CDOTA_BaseNPC *pEntity, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // edx
  CDOTA_Bot *m_pBot; // r12
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rcx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rax
  CEntityVariant *v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // si
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  const char *v16; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // si
  __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rcx
  CEntityVariant *v20; // rax
  int16 m_type; // dx
  unsigned int m_int; // edx
  int m_float; // eax
  const char *v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx

  if ( pEntity == 0 )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  m_pBot = pEntity->m_pBot;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == 628643682 )
        {
LABEL_10:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v8 = pKeyValues->m_keyValues.m_pElements;
          else
            v8 = 0;
          p_m_value = &v8[i].m_value;
          if ( p_m_value->m_type == 30 )
            goto LABEL_13;
          goto LABEL_19;
        }
      }
      else if ( *(4 * i) == 628643682 )
      {
        goto LABEL_10;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_13:
    m_uint64 = p_m_value->m_uint64;
    if ( m_uint64 != 0 )
    {
      if ( strcmp(m_uint64, "mid") == 0 )
      {
        m_pBot->m_ForcedLane = DOTA_LANE::DOTA_LANE_MIDDLE;
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
      }
      else if ( strcmp(m_uint64, "top") == 0 )
      {
        m_pBot->m_ForcedLane = DOTA_LANE::DOTA_LANE_TOP;
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
      }
      else if ( strcmp(m_uint64, "bot") == 0 )
      {
        m_pBot->m_ForcedLane = DOTA_LANE::DOTA_LANE_BOTTOM;
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
      }
      else if ( strcmp(m_uint64, "last_hit_chosen") == 0 )
      {
        if ( m_nCount <= 0 )
        {
LABEL_56:
          v20 = &CEntityKeyValues::sm_EmptyVariant;
        }
        else
        {
          v17 = pKeyValues->m_keyHashes.m_nAllocated;
          v18 = 0;
          while ( 1 )
          {
            if ( v17 != 0 )
            {
              v19 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( v17 > 9 )
                v19 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v19 = 0;
            }
            if ( v19[v18] == -1721645326 )
              break;
            if ( m_nCount <= ++v18 )
              goto LABEL_56;
          }
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v27 = pKeyValues->m_keyValues.m_pElements;
          else
            v27 = 0;
          v20 = &v27[v18].m_value;
        }
        m_type = v20->m_type;
        switch ( m_type )
        {
          case 0:
            m_float = 0;
            break;
          case 1:
            m_float = v20->m_float;
            break;
          case 5:
            m_float = v20->m_int;
            break;
          case 6:
            m_float = v20->m_char;
            break;
          case 26:
            v25 = v20->m_uint64;
            m_float = 0x7FFFFFFF;
            if ( v25 <= 0x7FFFFFFF )
            {
              m_float = 0x80000000;
              if ( v25 >= 0xFFFFFFFF80000000LL )
                m_float = v25;
            }
            break;
          case 30:
            m_float = strtol(v20->m_pszString, 0, 10);
            break;
          case 33:
            v24 = v20->m_uint64;
            m_float = 0x7FFFFFFF;
            if ( v24 <= 0x7FFFFFFE )
              m_float = v24;
            break;
          case 34:
            m_float = v20->m_float64;
            break;
          case 37:
            m_int = v20->m_int;
            m_float = 0x7FFFFFFF;
            if ( m_int <= 0x7FFFFFFE )
              m_float = m_int;
            break;
          default:
            v26 = VariantFieldTypeName(m_type);
            Warning("No conversion from %s to int now\n", v26);
            m_float = 0;
            break;
        }
        m_pBot->m_ForcedLane = m_float;
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
      }
    }
  }
LABEL_19:
  if ( m_nCount <= 0 )
  {
LABEL_16:
    v11 = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_30;
    return;
  }
  v12 = pKeyValues->m_keyHashes.m_nAllocated;
  v13 = 0;
  while ( v12 == 0 )
  {
    if ( *(4 * v13) == 188950112 )
      goto LABEL_27;
LABEL_24:
    if ( m_nCount <= ++v13 )
      goto LABEL_16;
  }
  v14 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v12 > 9 )
    v14 = pKeyValues->m_keyHashes.m_pElements;
  if ( v14[v13] != 188950112 )
    goto LABEL_24;
LABEL_27:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v15 = pKeyValues->m_keyValues.m_pElements;
  else
    v15 = 0;
  v11 = &v15[v13].m_value;
  if ( v11->m_type == 30 )
  {
LABEL_30:
    v16 = v11->m_uint64;
    if ( v16 != 0 )
    {
      if ( strcmp(v16, "passive") == 0 )
      {
        m_pBot->m_iDifficulty = 0;
      }
      else if ( strcmp(v16, "easy") == 0 )
      {
        m_pBot->m_iDifficulty = 1;
      }
      else if ( strcmp(v16, "medium") == 0 )
      {
        m_pBot->m_iDifficulty = 2;
      }
      else if ( strcmp(v16, "hard") == 0 )
      {
        m_pBot->m_iDifficulty = 3;
      }
      else if ( strcmp(v16, "unfair") == 0 )
      {
        m_pBot->m_iDifficulty = 4;
      }
    }
  }
}


// CDOTA_Tutorial::AddBotWithSettings  (line 3018, @0x0000000002710690, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char const*>, Element, GrowMemory, Purge, RemoveAll, V_strcpy_safe<512ul>, _V_strcmp, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, CDOTA_Tutorial::AddBotWithSettings, _V_strncpy, strtok, CUtlMemory<char const*, int>::Grow, RandomInt, CDOTA_PlayerResource::IsHeroSelected, DevMsg, CUtlMemory<char const*, int>::Purge, __stack_chk_fail, CUtlVectorBase<char const*, CUtlMemory<char const*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "force_lane", "hero_list", "Bot Name = %s\n"
bool __fastcall CDOTA_Tutorial::AddBotWithSettings(CDOTA_Tutorial *const this, KeyValues *pkvBot)
{
  const char *String; // rax
  bool v5; // r15
  const char *v6; // rbx
  const char *v7; // r12
  const char *v8; // rax
  const char *v9; // rax
  char *i; // r12
  const char **v11; // rax
  __int64 m_Size; // rbx
  int v13; // eax
  int v14; // r12d
  CUtlVector<char const*,CUtlMemory<char const*,int> > heroList; // [rsp+20h] [rbp-260h] BYREF
  char szHeroList[520]; // [rsp+40h] [rbp-240h] BYREF
  unsigned __int64 v18; // [rsp+248h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  String = KeyValues::GetString(pkvBot, "team", 0, 0, 0);
  if ( String != 0 )
  {
    v5 = strcmp(String, "good") == 0;
    v6 = KeyValues::GetString(pkvBot, "hero", 0, 0, 0);
    if ( v6 == 0 )
    {
      v9 = KeyValues::GetString(pkvBot, "hero_list", 0, 0, 0);
      if ( v9 == 0 )
        return v9;
      _V_strncpy(szHeroList, v9, 512);
      heroList.m_Size = 0;
      heroList.m_Memory.m_pMemory = 0;
      heroList.m_Memory.m_nAllocationCount = 0;
      heroList.m_Memory.m_nGrowSize = 0;
      for ( i = strtok(szHeroList, ","); i != 0; i = strtok(0, ",") )
      {
        m_Size = heroList.m_Size;
        v13 = heroList.m_Size;
        if ( heroList.m_Size == heroList.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<char const*,int>::Grow(&heroList.m_Memory, 1);
          v13 = heroList.m_Size;
        }
        heroList.m_Size = v13 + 1;
        v11 = &heroList.m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = i;
      }
      v14 = RandomInt(0, (heroList.m_Size - 1));
      v6 = heroList.m_Memory.m_pMemory[v14];
      if ( CDOTA_PlayerResource::IsHeroSelected(g_pDOTAPlayerResource, v6) )
        v6 = heroList.m_Memory.m_pMemory[(v14 + 1) % heroList.m_Size];
      DevMsg(1, "Bot Name = %s\n", v6);
      if ( (heroList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<char const*,int>::Purge(&heroList.m_Memory);
        if ( (heroList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<char const*,int>::Purge(&heroList.m_Memory);
      }
    }
    v7 = KeyValues::GetString(pkvBot, "force_lane", 0, 0, 0);
    v8 = KeyValues::GetString(pkvBot, "difficulty", 0, 0, 0);
    LOBYTE(v9) = CDOTA_Tutorial::AddBotWithSettings(this, v6, v7, v8, v5);
  }
  else
  {
    LOBYTE(v9) = 0;
  }
  return v9;
}


// CDOTA_Tutorial::AddBotWithSettings_Script  (line 3062, @0x000000000270c6d0, libserver.so)
// calls: CDOTA_Tutorial::AddBotWithSettings
bool __fastcall CDOTA_Tutorial::AddBotWithSettings_Script(
        CDOTA_Tutorial *const this,
        const char *pszHeroName,
        const char *pszLaneName,
        const char *pszDifficulty,
        bool bJoinGood)
{
  return CDOTA_Tutorial::AddBotWithSettings(this, pszHeroName, pszLaneName, pszDifficulty, bJoinGood);
}


// CDOTA_Tutorial::AddBotWithSettings  (line 3067, @0x000000000270b880, libserver.so)  // inlines: AddKeyValue<DOTA_LANE>, AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Base, Bind, CDotaNPCSpawnerContext, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyData, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, Element, EnsureCapacity, FastDelegate2, FindKeyHash, Free, GetInstance, IndexToIdentity, Instance, IsUsed, LeafCodeInfo_t, LookupEntityByIndex, LookupEntityByNetworkIndex, Release, SetMementoFrom, SetValue, SetValue<DOTA_LANE>, SetValue<char const*>, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, V_strlen, _V_strcmp, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, memcpy, operator=, operator[], ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope
// calls: DOTACommander, CDOTA_Commander::GetUnusedBotName, __dynamic_cast, CBaseEntity::ClearFlags, CBaseEntity::AddFlag, ConVar::SetValue, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, strlen, CEntityVariantAllocator::Allocate, memcpy (27 total)
// callers: CDOTA_Tutorial::AddBotWithSettings_Script, CDOTA_Tutorial::AddBotWithSettings
// strings: "last_hit_challenge_rival", "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnTutorialAddBotWithSettingsSpawnCompletion(CDOTA_BaseNPC *,CEntityKeyValues const*)
bool __fastcall CDOTA_Tutorial::AddBotWithSettings(
        CDOTA_Tutorial *const this,
        const char *pszHeroName,
        const char *pszLaneName,
        const char *pszDifficulty,
        bool bJoinGood)
{
  __int64 (__fastcall *v8)(IVEngineServer2 *, const char *); // r14
  CDOTA_Commander *v9; // rax
  const char *UnusedBotName; // rax
  int v11; // eax
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rdx
  CBaseEntity *v14; // rax
  CDOTAPlayer *v15; // rbx
  int16 m_nQueuedForSpawnCount; // ax
  __int64 v17; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v18; // rdx
  unsigned __int64 m_nAllocated; // rdx
  int v21; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v22; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  uint16 m_flags; // ax
  void *v25; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rax
  bool v27; // zf
  const char *v28; // rdi
  __int64 v29; // rcx
  const char *v30; // rsi
  int v31; // eax
  int v32; // eax
  const char *SelectedHeroName; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v34; // r10
  __int64 v35; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v36; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r10
  __int64 v38; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  __int64 v40; // r15
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rax
  DOTA_LANE m_nLastHitChallengeLane; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  uint16 v45; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rdx
  __int64 v48; // rax
  const char *m_pAttributeName; // rsi
  unsigned __int64 v50; // rdx
  int v51; // esi
  int v52; // r15d
  int v53; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v54; // rax
  __int64 v55; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rdx
  __int64 v57; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // r15
  uint16 v59; // ax
  void *v60; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v65; // rdx
  __int64 v66; // rax
  uint16 v67; // ax
  void *v68; // rax
  DOTA_LANE v69; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v70; // rax
  uint16 v71; // dx
  uint16 v72; // ax
  void *v73; // rax
  int v74; // ecx
  int v75; // eax
  int v76; // ecx
  int v77; // edi
  void *v78; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v79; // rsi
  void *v80; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // [rsp+8h] [rbp-198h]
  signed int v99; // [rsp+10h] [rbp-190h]
  __int64 v100; // [rsp+10h] [rbp-190h]
  signed int v101; // [rsp+10h] [rbp-190h]
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v103; // [rsp+20h] [rbp-180h]
  __int64 v104; // [rsp+20h] [rbp-180h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v105; // [rsp+20h] [rbp-180h]
  signed int v106; // [rsp+20h] [rbp-180h]
  __int64 v107; // [rsp+20h] [rbp-180h]
  signed int v108; // [rsp+20h] [rbp-180h]
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+30h] [rbp-170h] BYREF
  LeafCodeInfo_t v111; // [rsp+50h] [rbp-150h] BYREF
  LeafCodeInfo_t v112; // [rsp+70h] [rbp-130h] BYREF
  LeafCodeInfo_t v113; // [rsp+90h] [rbp-110h] BYREF
  LeafCodeInfo_t v114; // [rsp+B0h] [rbp-F0h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+D0h] [rbp-D0h] BYREF
  unsigned __int64 v116; // [rsp+168h] [rbp-38h]

  v116 = __readfsqword(0x28u);
  v8 = *(*engine + 376LL);
  v9 = DOTACommander();
  UnusedBotName = CDOTA_Commander::GetUnusedBotName(v9);
  v11 = v8(engine, UnusedBotName);
  if ( v11 > 0x7FFE )
    return 0;
  v12 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9];
  if ( v12 == 0 )
    return 0;
  v13 = &v12[v11 & 0x1FF];
  if ( v13 == 0 )
    return 0;
  if ( (v13->m_EHandle.m_Index & 0x7FFF) != v11 )
    return 0;
  if ( v13->m_pInstance == 0 )
    return 0;
  v14 = __dynamic_cast(v13->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAPlayer, 0);
  v15 = v14;
  if ( v14 == 0 )
    return 0;
  CBaseEntity::ClearFlags(v14);
  CBaseEntity::AddFlag(v15, 384);
  (*(v15->_vptr_IHandleEntity + 70))(v15, !bJoinGood - 1 + 3);
  (*(v15->_vptr_IHandleEntity + 400))(v15, 1);
  ConVar::SetValue(&dota_bot_disable, 0);
  *&v114.m_nLine = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  v114.m_szFunction = 0;
  CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
  ctx.m_pParent = 0;
  ctx.m_pCompletionListener = 0;
  sg.m_sg.m_pKeyValues = 0;
  ctx.m_callback.m_Closure.m_pFunction = *&v114.m_nLine;
  ctx.m_callback.m_Closure.m_pthis = OnTutorialAddBotWithSettingsSpawnCompletion;
  sg.m_sg.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &ctx.m_entityKeyValues);
  sg.m_pContext = &ctx;
  m_nQueuedForSpawnCount = ctx.m_entityKeyValues.m_nQueuedForSpawnCount;
  if ( pszLaneName != 0 )
  {
    if ( ctx.m_entityKeyValues.m_nQueuedForSpawnCount > 0 )
    {
      if ( pszDifficulty != 0 )
        goto LABEL_39;
      goto LABEL_10;
    }
    m_nCount = ctx.m_entityKeyValues.m_keyHashes.m_nCount;
    if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount > 0 )
    {
      v38 = 0;
      while ( 1 )
      {
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          m_pElements = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
            m_pElements = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        if ( m_pElements[v38] == 628643682 )
          break;
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v38 )
          goto LABEL_20;
      }
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      {
        v65 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        v66 = v38;
        if ( ctx.m_entityKeyValues.m_keyValues.m_pElements[v66].m_pAttributeName != 0 )
        {
LABEL_106:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v65[v66].m_pAttributeName);
LABEL_107:
          m_nQueuedForSpawnCount = ctx.m_entityKeyValues.m_nQueuedForSpawnCount;
          goto LABEL_37;
        }
        v107 = &ctx.m_entityKeyValues.m_keyValues.m_pElements[v66];
      }
      else
      {
        v66 = v38;
        v65 = 0;
        if ( *(v66 * 24 + 16) != 0 )
          goto LABEL_106;
        v107 = v66 * 24;
      }
      v67 = *(v107 + 10);
      if ( (v67 & 1) != 0 )
        *(v107 + 10) = v67 & 0xFFFE;
      *v107 = 0;
      *(v107 + 8) = 30;
      v101 = strlen(pszLaneName) + 1;
      v68 = CEntityVariantAllocator::Allocate(v101);
      *v107 = v68;
      memcpy(v68, pszLaneName, v101);
      *(v107 + 10) |= 1u;
      goto LABEL_107;
    }
LABEL_20:
    if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_164;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v88, v89, v86, v87) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_164:
        v111.m_szFile = "../../public/tier1/utlleanvector.h";
        v111.m_szFunction = "AddToTailGetPtr";
        v111.m_nLine = 557;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v111,
          "%s allocation count overflow",
          "AddToTailGetPtr");
      }
    }
    m_nAllocated = ctx.m_entityKeyValues.m_keyHashes.m_nAllocated;
    v21 = ctx.m_entityKeyValues.m_keyHashes.m_nCount + 1;
    if ( v21 > ctx.m_entityKeyValues.m_keyHashes.m_nAllocated )
    {
      if ( v21 > 9 )
      {
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount == 0x7FFF )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_159;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v84, v85, v82, v83) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_159:
            v112.m_szFile = "../../public/tier1/utlleanvector.h";
            v112.m_szFunction = "EnsureCapacity";
            v112.m_nLine = 104;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v112,
              "%s allocation count overflow",
              "EnsureCapacity");
          }
        }
        v75 = ctx.m_entityKeyValues.m_keyHashes.m_nAllocated;
        while ( 1 )
        {
          v76 = v75;
          if ( v21 <= v75 )
            break;
          if ( v75 <= 16382 )
          {
            v77 = 2 * v75;
            v75 = 8;
            if ( 2 * v76 > 7 )
              v75 = v77;
          }
          else
          {
            v75 = 0x7FFF;
          }
        }
        v103 = v75;
      }
      else
      {
        v103 = ctx.m_entityKeyValues.m_keyHashes.m_nCount + 1;
      }
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
      {
        ctx.m_entityKeyValues.m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                          g_pMemAlloc,
                                                          ctx.m_entityKeyValues.m_keyHashes.m_pElements,
                                                          4LL * v103);
        m_nCount = ctx.m_entityKeyValues.m_keyHashes.m_nCount;
      }
      else if ( v103 > 9 )
      {
        v80 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v103);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          v81 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
            v81 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          v81 = 0;
        }
        ctx.m_entityKeyValues.m_keyHashes.m_pElements = memcpy(
                                                          v80,
                                                          v81,
                                                          4LL * ctx.m_entityKeyValues.m_keyHashes.m_nCount);
        m_nCount = ctx.m_entityKeyValues.m_keyHashes.m_nCount;
      }
      ctx.m_entityKeyValues.m_keyHashes.m_nAllocated = v103;
      m_nAllocated = v103;
    }
    ctx.m_entityKeyValues.m_keyHashes.m_nCount = m_nCount + 1;
    if ( m_nAllocated != 0 )
    {
      v22 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
      if ( m_nAllocated >= 0xA )
        v22 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
    }
    else
    {
      v22 = 0;
    }
    v22[m_nCount] = 628643682;
    v104 = m_nCount;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
    if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      v23 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
    else
      v23 = 0;
    v98 = v104;
    v105 = &v23[v104];
    m_flags = v105->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v105->m_value.m_flags = m_flags & 0xFFFE;
    v105->m_value.m_uint64 = 0;
    v105->m_value.m_type = 30;
    v99 = strlen(pszLaneName) + 1;
    v25 = CEntityVariantAllocator::Allocate(v99);
    v105->m_value.m_uint64 = v25;
    memcpy(v25, pszLaneName, v99);
    v105->m_value.m_flags |= 1u;
    if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      v26 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
    else
      v26 = 0;
    v26[v98].m_pAttributeName = 0;
    m_nQueuedForSpawnCount = ctx.m_entityKeyValues.m_nQueuedForSpawnCount;
  }
LABEL_37:
  if ( pszDifficulty != 0 )
  {
    if ( m_nQueuedForSpawnCount > 0 )
      goto LABEL_39;
    v34 = ctx.m_entityKeyValues.m_keyHashes.m_nCount;
    if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount > 0 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          v36 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
            v36 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          v36 = 0;
        }
        if ( v36[v35] == 188950112 )
          break;
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v35 )
          goto LABEL_78;
      }
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      {
        v62 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        v63 = v35;
        v64 = &ctx.m_entityKeyValues.m_keyValues.m_pElements[v63];
        if ( ctx.m_entityKeyValues.m_keyValues.m_pElements[v63].m_pAttributeName != 0 )
        {
LABEL_101:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v62[v63].m_pAttributeName);
          goto LABEL_102;
        }
      }
      else
      {
        v63 = v35;
        v62 = 0;
        v64 = v63 * 24;
        if ( *(v63 * 24 + 16) != 0 )
          goto LABEL_101;
      }
      v72 = *(v64 + 10);
      if ( (v72 & 1) != 0 )
        *(v64 + 10) = v72 & 0xFFFE;
      *v64 = 0;
      *(v64 + 8) = 30;
      v108 = strlen(pszDifficulty) + 1;
      v73 = CEntityVariantAllocator::Allocate(v108);
      *v64 = v73;
      memcpy(v73, pszDifficulty, v108);
      *(v64 + 10) |= 1u;
LABEL_102:
      if ( ctx.m_entityKeyValues.m_nQueuedForSpawnCount > 0 )
        goto LABEL_39;
LABEL_11:
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= 0 )
      {
LABEL_65:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyHashes);
        LOWORD(v40) = ctx.m_entityKeyValues.m_keyHashes.m_nCount - 1;
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          v41 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
            v41 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          v41 = 0;
        }
        v40 = v40;
        v41[v40] = -1721645326;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
        m_nLastHitChallengeLane = this->m_nLastHitChallengeLane;
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v43 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v43 = 0;
        v44 = &v43[v40];
        v45 = v44->m_value.m_flags;
        if ( (v45 & 1) != 0 )
          v44->m_value.m_flags = v45 & 0xFFFE;
        v44->m_value.m_uint64 = 0;
        v44->m_value.m_type = 5;
        v44->m_value.m_int = m_nLastHitChallengeLane;
        if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
          v46 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        else
          v46 = 0;
        v46[v40].m_pAttributeName = 0;
        goto LABEL_39;
      }
      v17 = 0;
      while ( 1 )
      {
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          v18 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
            v18 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          v18 = 0;
        }
        if ( v18[v17] == -1721645326 )
          break;
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v17 )
          goto LABEL_65;
      }
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      {
        v47 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
        v48 = v17;
        m_pAttributeName = ctx.m_entityKeyValues.m_keyValues.m_pElements[v48].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_77:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          goto LABEL_39;
        }
        v69 = this->m_nLastHitChallengeLane;
      }
      else
      {
        v48 = v17;
        m_pAttributeName = *(v48 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_77;
        v47 = 0;
        v69 = this->m_nLastHitChallengeLane;
      }
      v70 = &v47[v48];
      v71 = v70->m_value.m_flags;
      if ( (v71 & 1) != 0 )
        v70->m_value.m_flags = v71 & 0xFFFE;
      v70->m_value.m_uint64 = 0;
      v70->m_value.m_type = 5;
      v70->m_value.m_int = v69;
      goto LABEL_39;
    }
LABEL_78:
    if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_176;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v96, v97, v94, v95) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_176:
        v113.m_szFile = "../../public/tier1/utlleanvector.h";
        v113.m_szFunction = "AddToTailGetPtr";
        v113.m_nLine = 557;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v113,
          "%s allocation count overflow",
          "AddToTailGetPtr");
      }
    }
    v50 = ctx.m_entityKeyValues.m_keyHashes.m_nAllocated;
    v51 = ctx.m_entityKeyValues.m_keyHashes.m_nCount + 1;
    if ( v51 > ctx.m_entityKeyValues.m_keyHashes.m_nAllocated )
    {
      LOWORD(v52) = ctx.m_entityKeyValues.m_keyHashes.m_nCount + 1;
      if ( v51 > 9 )
      {
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount == 0x7FFF )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_169;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v92, v93, v90, v91) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_169:
            v114.m_szFile = "../../public/tier1/utlleanvector.h";
            v114.m_szFunction = "EnsureCapacity";
            v114.m_nLine = 104;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v114,
              "%s allocation count overflow",
              "EnsureCapacity");
          }
        }
        v52 = ctx.m_entityKeyValues.m_keyHashes.m_nAllocated;
        while ( 1 )
        {
          v53 = v52;
          if ( v51 <= v52 )
            break;
          if ( v52 <= 16382 )
          {
            v74 = 2 * v52;
            v52 = 8;
            if ( 2 * v53 > 7 )
              v52 = v74;
          }
          else
          {
            v52 = 0x7FFF;
          }
        }
      }
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
      {
        ctx.m_entityKeyValues.m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                          g_pMemAlloc,
                                                          ctx.m_entityKeyValues.m_keyHashes.m_pElements,
                                                          4LL * v52);
        v34 = ctx.m_entityKeyValues.m_keyHashes.m_nCount;
      }
      else if ( v52 > 9 )
      {
        v78 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v52);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
        {
          v79 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
          if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
            v79 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
        }
        else
        {
          v79 = 0;
        }
        ctx.m_entityKeyValues.m_keyHashes.m_pElements = memcpy(
                                                          v78,
                                                          v79,
                                                          4LL * ctx.m_entityKeyValues.m_keyHashes.m_nCount);
        v34 = ctx.m_entityKeyValues.m_keyHashes.m_nCount;
      }
      ctx.m_entityKeyValues.m_keyHashes.m_nAllocated = v52;
      v50 = v52;
    }
    ctx.m_entityKeyValues.m_keyHashes.m_nCount = v34 + 1;
    if ( v50 != 0 )
    {
      v54 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
      if ( v50 >= 0xA )
        v54 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
    }
    else
    {
      v54 = 0;
    }
    v55 = v34;
    v54[v34] = 188950112;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
    if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      v56 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
    else
      v56 = 0;
    v57 = 24 * v55;
    v58 = &v56[v55];
    v100 = v57;
    v59 = v58->m_value.m_flags;
    if ( (v59 & 1) != 0 )
      v58->m_value.m_flags = v59 & 0xFFFE;
    v58->m_value.m_uint64 = 0;
    v58->m_value.m_type = 30;
    v106 = strlen(pszDifficulty) + 1;
    v60 = CEntityVariantAllocator::Allocate(v106);
    v58->m_value.m_uint64 = v60;
    memcpy(v60, pszDifficulty, v106);
    v58->m_value.m_flags |= 1u;
    if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
      v61 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
    else
      v61 = 0;
    *(&v61->m_pAttributeName + v100) = 0;
    m_nQueuedForSpawnCount = ctx.m_entityKeyValues.m_nQueuedForSpawnCount;
  }
LABEL_10:
  if ( m_nQueuedForSpawnCount <= 0 )
    goto LABEL_11;
LABEL_39:
  if ( strcmp(pszHeroName, "last_hit_challenge_rival") == 0 )
    pszHeroName = CDOTA_Tutorial::FindLastHitChallengeRival(this);
  CEntityKeyValuesModifyScope::Release(&sg.m_sg);
  v28 = "random";
  v29 = 7;
  v30 = pszHeroName;
  do
  {
    if ( v29 == 0 )
      break;
    v27 = *v30++ == *v28++;
    --v29;
  }
  while ( v27 );
  if ( v27 || CDOTA_PlayerResource::IsHeroSelected(g_pDOTAPlayerResource, pszHeroName) )
  {
    v31 = (*(v15->_vptr_IHandleEntity + 393))(v15, v30);
    CDOTAGamerules::MakeRandomHeroSelection(g_pGameRules, v31, 1, -1, 0);
    v32 = (*(v15->_vptr_IHandleEntity + 393))(v15);
    SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v32);
    DOTA_Hero_Spawn(SelectedHeroName, v15, &ctx);
  }
  else
  {
    DOTA_Hero_Spawn(pszHeroName, v15, &ctx);
  }
  CEntityKeyValuesModifyScope::Release(&sg.m_sg);
  CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
  return 1;
}


// CDOTA_Tutorial::OnAddHeroAndBotControllerSpawnCompletion  (line 3114, @0x00000000026f9000, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, GetAssignedHero, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetValue, GetValue<bool>, IndexToIdentity, Init, LookupEntity, Set, SetCompanionDistance, SetInitialGoalEntity, SetPartyCompanion, ToDOTABaseNPC, ToDOTABaseNPCHero, _V_strcmp, operator CBaseEntity*, operator=, operator[]
// calls: __dynamic_cast, CDOTA_Tutorial::GetHumanPlayer, Warning, VariantFieldTypeName
// callers: CDOTA_ScriptedSpawner::OnSpawnTutorialHeroSpawnCompletion
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_26F90DB
void __fastcall CDOTA_Tutorial::OnAddHeroAndBotControllerSpawnCompletion(
        CDOTA_Tutorial *const this,
        CDOTA_BaseNPC *pSpawn,
        const CEntityKeyValues *pKeyValues)
{
  _BYTE *v5; // r13
  int m_nCount; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // dx
  __int64 i; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  char m_char; // al
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v15; // dx
  int v16; // esi
  int v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v22; // eax
  __int16 v23; // cx
  const char *v24; // rax

  if ( pSpawn == 0 )
    return;
  v5 = __dynamic_cast(pSpawn, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
  if ( v5 == 0 )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == -2074865073 )
        {
LABEL_11:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v10 = pKeyValues->m_keyValues.m_pElements;
          else
            v10 = 0;
          p_m_value = &v10[i].m_value;
          m_type = p_m_value->m_type;
          if ( m_type == 0 )
            return;
          goto LABEL_16;
        }
      }
      else if ( *(4 * i) == -2074865073 )
      {
        goto LABEL_11;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type == 0 )
    return;
LABEL_16:
  switch ( m_type )
  {
    case 1:
      m_char = p_m_value->m_float != 0.0;
      goto LABEL_18;
    case 5:
    case 37:
      m_char = p_m_value->m_int != 0;
      goto LABEL_18;
    case 6:
      m_char = p_m_value->m_char;
      goto LABEL_18;
    case 26:
    case 33:
      m_char = p_m_value->m_uint64 != 0;
      goto LABEL_18;
    case 30:
      if ( strcmp(p_m_value->m_pszString, "0") == 0
        || strcmp(p_m_value->m_pszString, "false") == 0
        || strcmp(p_m_value->m_pszString, "no") == 0 )
      {
        return;
      }
      if ( strcmp(p_m_value->m_pszString, "1") == 0
        || strcmp(p_m_value->m_pszString, "true") == 0
        || strcmp(p_m_value->m_pszString, "yes") == 0 )
      {
        goto LABEL_19;
      }
      Warning("Invalid conversion : CString '%s' to bool\n", p_m_value->m_uint64);
      break;
    case 34:
      m_char = p_m_value->m_float64 != 0.0;
LABEL_18:
      if ( m_char != 0 )
      {
LABEL_19:
        v5[4080] = 1;
        *(v5 + 1019) = 1133084672;
        HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
        if ( HumanPlayer != 0 )
        {
          if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
          {
            v15 = 0x7FFF;
            v16 = 0x7FFF;
          }
          else
          {
            v15 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
            v16 = v15;
          }
          v17 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
          if ( (v17 + 2) > 1 )
          {
            v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
            if ( v18 != 0 )
            {
              v19 = &v18[v16 & 0x1FF];
              if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
              {
                m_pInstance = v19->m_pInstance;
                if ( v19->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    if ( m_pEntity->m_EHandle.m_Index == -1 )
                      v23 = 0x7FFF;
                    else
                      v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    *(v5 + 1750) = v23 | *(v5 + 1750) & 0x8000;
                    *(v5 + 875) = (v22 << 15) | *(v5 + 875) & 0x7FFF;
                  }
                  else
                  {
                    *(v5 + 875) = -1;
                  }
                }
              }
            }
          }
        }
      }
      break;
    default:
      v24 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v24);
      break;
  }
}


// CDOTA_Tutorial::AddHeroAndBotController  (line 3150, @0x000000000270b3c0, libserver.so)  // inlines: AddKeyValue<bool>, AddToTail, Base, CDotaNPCSpawnerContext, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, CUtlDelegate<CDOTA_Tutorial, CDOTA_Tutorial>, Convert<CDOTA_Tutorial, void (CDOTA_Tutorial::*)(CDOTA_BaseNPC*, const CEntityKeyValues*), void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, Element, FastDelegate2, FastDelegate2<CDOTA_Tutorial, CDOTA_Tutorial>, FindKeyHash, Free, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SetMementoFrom, SetValue<bool>, UtlMakeDelegate<CDOTA_Tutorial, CDOTA_Tutorial, CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<CDOTA_Tutorial, void (CDOTA_Tutorial::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)>, operator=, operator[], ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope
// calls: Msg, __dynamic_cast, CBaseEntity::ClearFlags, CBaseEntity::AddFlag, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValuesModifyScope::Release, DOTA_Hero_Spawn, CEntityKeyValues::~CEntityKeyValues, ConVar::SetValue, CEntityKeyValues::SetValue<bool>, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr (16 total)
// callers: CDOTA_Tutorial::ParseLessonKeys, CDOTA_ScriptedSpawner::SpawnTutorialHero
// strings: "Tutorial Boss", "Failed to create a tutorial Bot Controllers.\n", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CDOTA_Tutorial::OnAddHeroAndBotControllerSpawnCompletion(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall CDOTA_Tutorial::AddHeroAndBotController(
        CDOTA_Tutorial *const this,
        const char *pszHeroName,
        bool bFriendly,
        CEntityInstance *pCompletionListener,
        const CUtlDelegate<void(CDOTA_BaseNPC*,const CEntityKeyValues*)> *const callback)
{
  int v8; // eax
  __int64 v9; // rsi
  CGameEntitySystem *v10; // rdx
  CEntityIdentity *v11; // rcx
  __int64 v12; // rdx
  CBaseEntity *v13; // rax
  CDOTAPlayer *v14; // rbx
  void (*pfn)(detail::GenericClass *); // rax
  __int64 delta; // rdx
  detail::GenericClass *m_pthis; // rax
  __int64 v18; // rax
  _DWORD *v19; // rdx
  __int16 v20; // r14
  _DWORD *v21; // rax
  bool v22; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  __int64 v28; // rax
  const char *m_pAttributeName; // rsi
  bool v30; // cl
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v31; // rax
  uint16 v32; // dx
  bool bFriendlya; // [rsp+1Ch] [rbp-114h] BYREF
  void (__fastcall *v35)(CDOTA_Tutorial *const, CDOTA_BaseNPC *, const CEntityKeyValues *); // [rsp+28h] [rbp-108h]
  __int64 v36; // [rsp+30h] [rbp-100h]
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+40h] [rbp-F0h] BYREF
  _WORD pKeyValues[2]; // [rsp+60h] [rbp-D0h] BYREF
  _DWORD pKeyValues_4[9]; // [rsp+64h] [rbp-CCh] BYREF
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>,CEntityKeyValues::KeyValueInfo_t,short int> pKeyValues_40; // [rsp+88h] [rbp-A8h] BYREF
  __int16 pKeyValues_82; // [rsp+B2h] [rbp-7Eh]
  __int64 v42; // [rsp+D0h] [rbp-60h]
  CEntityInstance *pCompletionListenera; // [rsp+D8h] [rbp-58h]
  CDOTA_Tutorial *v44; // [rsp+E0h] [rbp-50h]
  void (__fastcall *v45)(CDOTA_Tutorial *const, CDOTA_BaseNPC *, const CEntityKeyValues *); // [rsp+E8h] [rbp-48h]
  __int64 v46; // [rsp+F0h] [rbp-40h]
  unsigned __int64 v47; // [rsp+F8h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  bFriendlya = bFriendly;
  v8 = (*(*engine + 376LL))(engine, "Tutorial Boss");
  v10 = g_pGameEntitySystem;
  if ( v8 > 0x7FFE
    || (v11 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) == 0
    || (v12 = v8 & 0x1FF, v9 = 8 * v12, (v10 = &v11[v12]) == 0)
    || v8 != (*&v10->m_EntityList.m_Lock.gap0 & 0x7FFF)
    || v10->_vptr_IEntityResourceManifestBuilder == 0
    || (v13 = __dynamic_cast(
                v10->_vptr_IEntityResourceManifestBuilder,
                &`typeinfo for'CBaseEntity,
                &`typeinfo for'CDOTAPlayer,
                0),
        v14 = v13,
        v13 == 0) )
  {
    Msg("Failed to create a tutorial Bot Controllers.\n", v9, v10);
    return;
  }
  CBaseEntity::ClearFlags(v13);
  CBaseEntity::AddFlag(v14, 384);
  (*(v14->_vptr_IHandleEntity + 70))(v14, 3 - bFriendlya);
  (*(v14->_vptr_IHandleEntity + 400))(v14, 1);
  if ( pCompletionListener == 0 )
  {
    v36 = 0;
    v35 = CDOTA_Tutorial::OnAddHeroAndBotControllerSpawnCompletion;
    CEntityKeyValues::CEntityKeyValues(pKeyValues);
    v45 = CDOTA_Tutorial::OnAddHeroAndBotControllerSpawnCompletion;
    v42 = 0;
    pCompletionListenera = 0;
    v46 = 0;
    v44 = this;
    sg.m_sg.m_pKeyValues = 0;
    sg.m_sg.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, pKeyValues);
    sg.m_pContext = pKeyValues;
    CEntityKeyValues::SetValue<bool>(pKeyValues, -2074865073, &bFriendlya);
    CEntityKeyValuesModifyScope::Release(&sg.m_sg);
    DOTA_Hero_Spawn(pszHeroName, v14, pKeyValues);
    goto LABEL_11;
  }
  CEntityKeyValues::CEntityKeyValues(pKeyValues);
  pfn = callback->m_Closure.m_pFunction.__pfn;
  pCompletionListenera = pCompletionListener;
  delta = callback->m_Closure.m_pFunction.__delta;
  v42 = 0;
  sg.m_sg.m_pKeyValues = 0;
  v45 = pfn;
  m_pthis = callback->m_Closure.m_pthis;
  v46 = delta;
  sg.m_sg.m_pPrevAllocator = 0;
  v44 = m_pthis;
  CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, pKeyValues);
  sg.m_pContext = pKeyValues;
  if ( pKeyValues_82 <= 0 )
  {
    if ( pKeyValues[0] <= 0 )
    {
LABEL_21:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(pKeyValues);
      v20 = pKeyValues[0] - 1;
      if ( pKeyValues[1] != 0 )
      {
        v21 = pKeyValues_4;
        if ( pKeyValues[1] >= 0xA )
          v21 = *&pKeyValues_4[1];
      }
      else
      {
        v21 = 0;
      }
      v21[v20] = -2074865073;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues_40);
      v22 = bFriendlya;
      if ( pKeyValues_40.m_nAllocated != 0 )
        m_pElements = pKeyValues_40.m_pElements;
      else
        m_pElements = 0;
      v24 = &m_pElements[v20];
      m_flags = v24->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v24->m_value.m_flags = m_flags & 0xFFFE;
      v24->m_value.m_uint64 = 0;
      v24->m_value.m_type = 6;
      v24->m_value.m_char = v22;
      if ( pKeyValues_40.m_nAllocated != 0 )
        v26 = pKeyValues_40.m_pElements;
      else
        v26 = 0;
      v26[v20].m_pAttributeName = 0;
      goto LABEL_10;
    }
    v18 = 0;
    while ( 1 )
    {
      if ( pKeyValues[1] != 0 )
      {
        v19 = pKeyValues_4;
        if ( pKeyValues[1] > 9 )
          v19 = *&pKeyValues_4[1];
      }
      else
      {
        v19 = 0;
      }
      if ( v19[v18] == -2074865073 )
        break;
      if ( pKeyValues[0] <= ++v18 )
        goto LABEL_21;
    }
    if ( pKeyValues_40.m_nAllocated != 0 )
    {
      v27 = pKeyValues_40.m_pElements;
      v28 = v18;
      m_pAttributeName = pKeyValues_40.m_pElements[v28].m_pAttributeName;
      if ( m_pAttributeName != 0 )
      {
LABEL_33:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
        goto LABEL_10;
      }
      v30 = bFriendlya;
    }
    else
    {
      v28 = v18;
      m_pAttributeName = *(v28 * 24 + 16);
      if ( m_pAttributeName != 0 )
        goto LABEL_33;
      v30 = bFriendlya;
      v27 = 0;
    }
    v31 = &v27[v28];
    v32 = v31->m_value.m_flags;
    if ( (v32 & 1) != 0 )
      v31->m_value.m_flags = v32 & 0xFFFE;
    v31->m_value.m_uint64 = 0;
    v31->m_value.m_type = 6;
    v31->m_value.m_char = v30;
  }
LABEL_10:
  CEntityKeyValuesModifyScope::Release(&sg.m_sg);
  DOTA_Hero_Spawn(pszHeroName, v14, pKeyValues);
LABEL_11:
  CEntityKeyValues::~CEntityKeyValues(pKeyValues);
  ConVar::SetValue(&dota_bot_disable, 0);
}


// CDOTA_Tutorial::ForceGoodWin  (line 3191, @0x00000000026fafc0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, CGameEntitySystem::FindEntityByClassname, CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "npc_dota_fort"
void __fastcall CDOTA_Tutorial::ForceGoodWin(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax
  CDOTAPlayer *v2; // r13
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rax
  CBaseEntity *v9; // rbx
  CBaseEntity *EntityByClassname; // rax
  double v11; // xmm0_8
  uint32 m_Index; // esi
  vec_t v13; // xmm1_4
  uint32 v14; // esi
  unsigned __int16 v15; // cx
  int v16; // edi
  int v17; // edx
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx
  CBaseEntity *v20; // rsi
  CBaseEntity *v21; // rax
  float flDamage; // [rsp+2Ch] [rbp-E4h]
  Vector v23; // [rsp+30h] [rbp-E0h] BYREF
  Vector v24; // [rsp+40h] [rbp-D0h] BYREF
  CTakeDamageInfo dmg; // [rsp+50h] [rbp-C0h] BYREF

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  v2 = HumanPlayer;
  if ( HumanPlayer != 0 )
  {
    if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    v5 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    LODWORD(dmg._vptr_CTakeDamageInfo) = v5;
    if ( (v5 + 2) > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v4 & 0x1FF];
        if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v9 = 0;
            while ( 1 )
            {
              EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v9, "npc_dota_fort");
              v9 = EntityByClassname;
              if ( EntityByClassname == 0 )
                break;
              if ( EntityByClassname->m_iTeamNum.m_Value == 3 )
              {
                flDamage = (CBaseEntity::GetHealth(EntityByClassname) + 100);
                v11 = (*(v9->_vptr_IHandleEntity + 62))(v9);
                m_Index = v2->m_hAssignedHero.m_Value.m_Index;
                v23.x = 0.0;
                v24.z = v13;
                *&v24.x = v11;
                v23.y = 0.0;
                v23.z = 1.0;
                v14 = m_Index >> 15;
                if ( v2->m_hAssignedHero.m_Value.m_Index == -1 )
                {
                  v15 = 0x7FFF;
                  v16 = 0x7FFF;
                }
                else
                {
                  v15 = v2->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                  v16 = v15;
                }
                v17 = (v14 << 15) | v15 & 0x7FFF;
                LODWORD(dmg._vptr_CTakeDamageInfo) = v17;
                if ( (v17 + 2) > 1
                  && (v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9]) != 0
                  && (v19 = &v18[v16 & 0x1FF]) != 0
                  && v17 == v19->m_EHandle.m_Index
                  && (v21 = v19->m_pInstance, v19->m_pInstance != 0)
                  && v21->m_bIsDOTANPC )
                {
                  v20 = 0;
                  if ( (v21[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
                    v20 = v19->m_pInstance;
                }
                else
                {
                  v20 = 0;
                }
                CTakeDamageInfo::CTakeDamageInfo(&dmg, v20, v20, &v23, &v24, flDamage, 0, 0, 0);
                CBaseEntity::TakeDamage(v9, &dmg);
                CTakeDamageInfo::~CTakeDamageInfo(&dmg);
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::FinishTutorial  (line 3210, @0x0000000002711ca0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_TutorialFinish_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_TutorialFinish_t>, FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLocationID, IndexToIdentity, IsValid, LookupEntity, PostEvent<CDOTAUserMsg_TutorialFinish_t>, SendUserMessage<CDOTAUserMsg_TutorialFinish_t>, assign, length, operator CEntityInstance*, set_body, set_emblem, set_has_body, set_has_emblem, set_has_heading, set_has_success, set_heading, set_success, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_TutorialFinish_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: Warning, CDOTAGamerules::SetGameWinner, __stack_chk_fail, GetDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer::LogTutorialStats, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_TutorialFinish::CDOTAUserMsg_TutorialFinish, std::string::assign(char const*,ulong), strlen, CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish (14 total)
// callers: finish_tutorial, CDOTA_Tutorial::ParseLessonKeys
// strings: "Finished a tutorial with no valid set_location_id\n", "#DOTA_Tutorial_FINISHED_Positive", "#DOTA_Tutorial_TaskCompleted"
// globals: CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent
void __fastcall CDOTA_Tutorial::FinishTutorial(CDOTA_Tutorial *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CDOTASteamWorksGameStatsServer *DOTASteamWorksGameStatsServer; // rax
  char *m_szFinishText; // rbx
  size_t v9; // rax
  __int64 v10; // r14
  IGameEventSystem *v11; // rbx
  void (__fastcall *v12)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v13[2]; // [rsp+10h] [rbp-1B0h] BYREF
  int v14; // [rsp+20h] [rbp-1A0h]
  std::string *v15; // [rsp+28h] [rbp-198h]
  std::string *v16; // [rsp+30h] [rbp-190h]
  std::string *v17; // [rsp+38h] [rbp-188h]
  char v18; // [rsp+40h] [rbp-180h]
  CReliableBroadcastRecipientFilter filterbroadcast; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v20; // [rsp+188h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  m_Index = this->m_hData.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = this->m_hData.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) != 0)
    && m_Index == v6->m_EHandle.m_Index
    && v6->m_pInstance != 0
    && LODWORD(v6->m_pInstance[42].m_CScriptComponent) != 0 )
  {
    DOTASteamWorksGameStatsServer = GetDOTASteamWorksGameStatsServer();
    CDOTASteamWorksGameStatsServer::LogTutorialStats(DOTASteamWorksGameStatsServer);
    if ( this->m_szFinishText[0] != 0 )
    {
      CRecipientFilter::CRecipientFilter(&filterbroadcast);
      filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filterbroadcast);
      filterbroadcast._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&filterbroadcast);
      CDOTAUserMsg_TutorialFinish::CDOTAUserMsg_TutorialFinish(v13);
      v13[0] = off_416CDD0;
      v14 |= 1u;
      std::string::assign(v15, "#DOTA_Tutorial_FINISHED_Positive", 0x20u);
      v14 |= 2u;
      std::string::assign(v16, "#DOTA_Tutorial_TaskCompleted", 0x1Cu);
      v14 |= 4u;
      m_szFinishText = this->m_szFinishText;
      v9 = strlen(m_szFinishText);
      std::string::assign(v17, m_szFinishText, v9);
      v18 = 1;
      v14 |= 8u;
      v10 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent;
      v11 = g_pGameEventSystem;
      v12 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent);
      v12(v11, 0, 0, &filterbroadcast, v10, v13, 56);
      v13[0] = &off_416CC50;
      CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish(v13);
      filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&filterbroadcast);
    }
  }
  else
  {
    Warning("Finished a tutorial with no valid set_location_id\n", v3);
  }
  CDOTAGamerules::SetGameWinner(g_pGameRules, 2);
}


// CDOTA_Tutorial::HealPlayer  (line 3238, @0x00000000026fb2a0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, CDOTA_BaseNPC::Heal
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::HealPlayer(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v3; // edi
  unsigned __int16 v4; // cx
  int v5; // r9d
  int v6; // edx
  CEntityIdentity *v7; // r8
  CEntityIdentity *v8; // r8
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v10; // dx
  int v11; // esi
  int v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rbx
  int v16; // eax

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
    v3 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (v3 << 15) | v4 & 0x7FFF;
    if ( (v6 + 2) > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v5 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Index == -1 )
            {
              v10 = 0x7FFF;
              v11 = 0x7FFF;
            }
            else
            {
              v10 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v11 = v10;
            }
            v12 = (v3 << 15) | v10 & 0x7FFF;
            if ( (v12 + 2) > 1 )
            {
              v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9];
              if ( v13 != 0 )
              {
                v14 = &v13[v11 & 0x1FF];
                if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
                {
                  v15 = v14->m_pInstance;
                  if ( v14->m_pInstance != 0
                    && BYTE3(v15[7]._vptr_IHandleEntity) != 0
                    && (v15[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v16 = (*(v15->_vptr_IHandleEntity + 156))(v14->m_pInstance);
                    CDOTA_BaseNPC::Heal(v15, v16, v15, 0, 1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::HealNPC  (line 3254, @0x00000000026fb460, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CGameEntitySystem::FindEntityByClassname, CDOTA_BaseNPC::Heal
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::HealNPC(CDOTA_Tutorial *const this, const char *pszNPC)
{
  CBaseEntity *EntityByClassname; // rax
  CDOTA_BaseNPC *v3; // rbx
  int v4; // eax

  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, pszNPC);
  v3 = EntityByClassname;
  if ( EntityByClassname != 0 && EntityByClassname->m_bIsDOTANPC )
  {
    v4 = (*(EntityByClassname->_vptr_IHandleEntity + 156))(EntityByClassname);
    CDOTA_BaseNPC::Heal(v3, v4, v3, 0, 1);
  }
}


// CDOTA_Tutorial::HideNPC  (line 3265, @0x00000000026fb4c0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CGameEntitySystem::FindEntityByClassname, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "modifier_tutorial_hide_npc"
void __fastcall CDOTA_Tutorial::HideNPC(CDOTA_Tutorial *const this, const char *pszNPC)
{
  CBaseEntity *EntityByClassname; // rax
  CDOTA_BaseNPC *v3; // rbx
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, pszNPC);
  v3 = EntityByClassname;
  if ( EntityByClassname != 0 && EntityByClassname->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_tutorial_hide_npc");
    CDOTA_BaseNPC::AddNewModifier(v3, v3, 0, "modifier_tutorial_hide_npc", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Tutorial::RevealNPC  (line 3277, @0x00000000026fb570, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CGameEntitySystem::FindEntityByClassname, CDOTA_BaseNPC::RemoveModifierByName
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "modifier_tutorial_hide_npc"
void __fastcall CDOTA_Tutorial::RevealNPC(CDOTA_Tutorial *const this, const char *pszNPC)
{
  CDOTA_BaseNPC *EntityByClassname; // rax

  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, pszNPC);
  if ( EntityByClassname != 0 && EntityByClassname->m_bIsDOTANPC )
    CDOTA_BaseNPC::RemoveModifierByName(EntityByClassname, "modifier_tutorial_hide_npc");
}


// CDOTA_Tutorial::UpgradePlayerAbility  (line 3289, @0x00000000026f8da0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, CDOTA_BaseNPC::FindAbilityByName
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::UpgradePlayerAbility(CDOTA_Tutorial *const this, const char *pszAbilityName)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // edi
  uint32 v5; // esi
  unsigned __int16 v6; // cx
  int v7; // r8d
  int v8; // edx
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v12; // dx
  int v13; // ecx
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // r12
  void (__fastcall *v18)(CDOTA_BaseNPC *, CDOTABaseAbility *); // r13
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v20; // rax

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
    v5 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Index == -1 )
            {
              v12 = 0x7FFF;
              v13 = 0x7FFF;
            }
            else
            {
              v12 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v13 = v12;
            }
            v14 = (v5 << 15) | v12 & 0x7FFF;
            if ( (v14 + 2) > 1
              && (v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9]) != 0
              && (v16 = &v15[v13 & 0x1FF]) != 0
              && v14 == v16->m_EHandle.m_Index
              && (v20 = v16->m_pInstance, v16->m_pInstance != 0)
              && v20->m_bIsDOTANPC )
            {
              v17 = 0;
              if ( (v20->m_iUnitType & 1) != 0 )
                v17 = v16->m_pInstance;
            }
            else
            {
              v17 = 0;
            }
            v18 = *(v17->_vptr_IHandleEntity + 495);
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v17, pszAbilityName, 0);
            v18(v17, AbilityByName);
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::AddTaskLocation  (line 3300, @0x00000000026fb5b0, libserver.so)  // inlines: CEntityHandle, Get, GetAssignedHero, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetTargetLocation, SetTutorialState, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=
// calls: CDOTA_Tutorial::GetHumanPlayer, MinimapEvent
// callers: CDOTA_Tutorial::CreateLocationTask, CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::AddTaskLocation(CDOTA_Tutorial *const this, Vector vLocation)
{
  float v3; // r14d
  float v4; // r15d
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v7; // edi
  unsigned __int16 v8; // cx
  int v9; // r8d
  int v10; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v14; // cx
  int v15; // esi
  int v16; // edx
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rcx
  CDOTA_BaseNPC *v19; // rsi
  uint32 v20; // eax
  double v21; // xmm0_8
  CEntityIdentity *v22; // rdx
  __int64 v23; // rcx
  CEntityIdentity *v24; // rdi
  bool v25; // zf
  CEntityIdentity *v26; // r8
  unsigned __int16 v27; // cx
  CEntityIdentity *v28; // rcx
  CEntityInstance *v29; // rbx
  CDOTA_BaseNPC *v30; // rdx
  float *v31; // r12
  CConcreteEntityList *v32; // rsi
  float z; // [rsp+18h] [rbp-38h]

  z = vLocation.z;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vLocation.x)));
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vLocation.y)));
  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
    v7 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v8 = 0x7FFF;
      v9 = 0x7FFF;
    }
    else
    {
      v8 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v9 = v8;
    }
    v10 = (v7 << 15) | v8 & 0x7FFF;
    if ( (v10 + 2) > 1 )
    {
      v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
      if ( v11 != 0 )
      {
        v12 = &v11[v9 & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
        {
          m_pInstance = v12->m_pInstance;
          if ( v12->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Index == -1 )
            {
              v14 = 0x7FFF;
              v15 = 0x7FFF;
            }
            else
            {
              v14 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v15 = v14;
            }
            v16 = (v7 << 15) | v14 & 0x7FFF;
            if ( (v16 + 2) > 1
              && (v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9]) != 0
              && (v18 = &v17[v15 & 0x1FF]) != 0
              && v16 == v18->m_EHandle.m_Index
              && (v30 = v18->m_pInstance, v18->m_pInstance != 0)
              && v30->m_bIsDOTANPC )
            {
              v19 = 0;
              if ( (v30->m_iUnitType & 1) != 0 )
                v19 = v18->m_pInstance;
            }
            else
            {
              v19 = 0;
            }
            MinimapEvent(HumanPlayer->m_iTeamNum.m_Value, v19, v3, v4, 128, 4);
            v20 = this->m_hData.m_Index;
            *&v21 = LODWORD(z);
            if ( v20 + 2 > 1 )
            {
              v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(this->m_hData.m_Index & 0x7FFF) >> 9];
              if ( v22 != 0 )
              {
                v23 = this->m_hData.m_Index & 0x1FF;
                v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(this->m_hData.m_Index & 0x7FFF) >> 9];
                v25 = &v22[v23] == 0;
                v26 = &v22[v23];
                v27 = this->m_hData.m_Index & 0x7FFF;
                if ( !v25 && v20 == v26->m_EHandle.m_Index )
                {
                  v31 = v26->m_pInstance;
                  if ( v26->m_pInstance != 0 )
                  {
                    if ( v3 == v31[200] && v4 == v31[201] && z == v31[202] )
                    {
                      v27 = this->m_hData.m_Index & 0x7FFF;
                      v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v27 >> 9];
                    }
                    else
                    {
                      (*(*v31 + 176LL))(v31, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      *&v21 = LODWORD(z);
                      v31[200] = v3;
                      v31[201] = v4;
                      v32 = CEntityHandle::gm_pEntityList;
                      v31[202] = z;
                      v20 = this->m_hData.m_Index;
                      if ( v20 + 2 <= 1 )
                        return;
                      v27 = this->m_hData.m_Index & 0x7FFF;
                      v24 = v32->m_pIdentityChunks[v27 >> 9];
                      if ( v24 == 0 )
                        return;
                    }
                  }
                }
                v28 = &v24[v27 & 0x1FF];
                if ( v28 != 0 && v20 == v28->m_EHandle.m_Index )
                {
                  v29 = v28->m_pInstance;
                  if ( v28->m_pInstance != 0 && LODWORD(v29[16].m_pEntity) != 2 )
                  {
                    (*(v29->_vptr_IHandleEntity + 22))(v28->m_pInstance, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v26, v21);
                    LODWORD(v29[16].m_pEntity) = 2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::CreateLocationTask  (line 3314, @0x00000000026fb960, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetTaskProgress, SetTaskSteps, operator CEntityInstance*
// calls: CDOTA_Tutorial::AddTaskLocation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::CreateLocationTask(CDOTA_Tutorial *const this, double a2, vec_t a3)
{
  uint32 m_Index; // eax
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rdx
  CEntityInstance *v9; // r12
  CConcreteEntityList *v10; // rsi
  CEntityInstance *m_pInstance; // r12
  Vector vLocationa; // [rsp+0h] [rbp-20h]

  *&vLocationa.x = a2;
  m_Index = this->m_hData.m_Index;
  vLocationa.z = a3;
  if ( m_Index + 2 > 1 )
  {
    v5 = this->m_hData.m_Index & 0x7FFF;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v5 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hData.m_Index & 0x1FF];
      if ( v7 == 0
        || m_Index != v7->m_EHandle.m_Index
        || (v9 = v7->m_pInstance, v7->m_pInstance == 0)
        || LODWORD(v9[16].m_hPrivateScope.m_hScope) == 1
        || ((*(v9->_vptr_IHandleEntity + 22))(v9, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL),
            v10 = CEntityHandle::gm_pEntityList,
            LODWORD(v9[16].m_hPrivateScope.m_hScope) = 1,
            (m_Index = this->m_hData.m_Index) + 2 > 1)
        && (v5 = this->m_hData.m_Index & 0x7FFF, (v6 = v10->m_pIdentityChunks[v5 >> 9]) != 0) )
      {
        v8 = &v6[v5 & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0 && HIDWORD(m_pInstance[16].m_pEntity) != 0 )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            HIDWORD(m_pInstance[16].m_pEntity) = 0;
          }
        }
      }
    }
  }
  CDOTA_Tutorial::AddTaskLocation(this, vLocationa);
}


// CDOTA_Tutorial::AddCameraTaskLocation  (line 3323, @0x00000000026fbad0, libserver.so)  // inlines: CEntityHandle, Get, GetAssignedHero, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetTargetLocation, SetTutorialState, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=
// calls: CDOTA_Tutorial::GetHumanPlayer, MinimapEvent
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::AddCameraTaskLocation(CDOTA_Tutorial *const this, Vector vLocation)
{
  float v3; // r14d
  float v4; // r15d
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // esi
  uint32 v7; // edi
  unsigned __int16 v8; // cx
  int v9; // r8d
  int v10; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityInstance *m_pInstance; // rdx
  unsigned __int16 v14; // cx
  int v15; // esi
  int v16; // edx
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rcx
  CDOTA_BaseNPC *v19; // rsi
  uint32 v20; // eax
  double v21; // xmm0_8
  CEntityIdentity *v22; // rdx
  __int64 v23; // rcx
  CEntityIdentity *v24; // rdi
  bool v25; // zf
  CEntityIdentity *v26; // r8
  unsigned __int16 v27; // cx
  CEntityIdentity *v28; // rcx
  CEntityInstance *v29; // rbx
  CDOTA_BaseNPC *v30; // rdx
  float *v31; // r12
  CConcreteEntityList *v32; // rsi
  float z; // [rsp+18h] [rbp-38h]

  z = vLocation.z;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vLocation.x)));
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vLocation.y)));
  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    m_Index = HumanPlayer->m_hAssignedHero.m_Value.m_Index;
    v7 = m_Index >> 15;
    if ( m_Index == -1 )
    {
      v8 = 0x7FFF;
      v9 = 0x7FFF;
    }
    else
    {
      v8 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v9 = v8;
    }
    v10 = (v7 << 15) | v8 & 0x7FFF;
    if ( (v10 + 2) > 1 )
    {
      v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
      if ( v11 != 0 )
      {
        v12 = &v11[v9 & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
        {
          m_pInstance = v12->m_pInstance;
          if ( v12->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Index == -1 )
            {
              v14 = 0x7FFF;
              v15 = 0x7FFF;
            }
            else
            {
              v14 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v15 = v14;
            }
            v16 = (v7 << 15) | v14 & 0x7FFF;
            if ( (v16 + 2) > 1
              && (v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9]) != 0
              && (v18 = &v17[v15 & 0x1FF]) != 0
              && v16 == v18->m_EHandle.m_Index
              && (v30 = v18->m_pInstance, v18->m_pInstance != 0)
              && v30->m_bIsDOTANPC )
            {
              v19 = 0;
              if ( (v30->m_iUnitType & 1) != 0 )
                v19 = v18->m_pInstance;
            }
            else
            {
              v19 = 0;
            }
            MinimapEvent(HumanPlayer->m_iTeamNum.m_Value, v19, v3, (v4 + 600.0), 128, 4);
            v20 = this->m_hData.m_Index;
            *&v21 = LODWORD(z);
            if ( v20 + 2 > 1 )
            {
              v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(this->m_hData.m_Index & 0x7FFF) >> 9];
              if ( v22 != 0 )
              {
                v23 = this->m_hData.m_Index & 0x1FF;
                v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(this->m_hData.m_Index & 0x7FFF) >> 9];
                v25 = &v22[v23] == 0;
                v26 = &v22[v23];
                v27 = this->m_hData.m_Index & 0x7FFF;
                if ( !v25 && v20 == v26->m_EHandle.m_Index )
                {
                  v31 = v26->m_pInstance;
                  if ( v26->m_pInstance != 0 )
                  {
                    if ( v3 == v31[200] && v4 == v31[201] && z == v31[202] )
                    {
                      v27 = this->m_hData.m_Index & 0x7FFF;
                      v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v27 >> 9];
                    }
                    else
                    {
                      (*(*v31 + 176LL))(v31, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      *&v21 = LODWORD(z);
                      v31[200] = v3;
                      v31[201] = v4;
                      v32 = CEntityHandle::gm_pEntityList;
                      v31[202] = z;
                      v20 = this->m_hData.m_Index;
                      if ( v20 + 2 <= 1 )
                        return;
                      v27 = this->m_hData.m_Index & 0x7FFF;
                      v24 = v32->m_pIdentityChunks[v27 >> 9];
                      if ( v24 == 0 )
                        return;
                    }
                  }
                }
                v28 = &v24[v27 & 0x1FF];
                if ( v28 != 0 && v20 == v28->m_EHandle.m_Index )
                {
                  v29 = v28->m_pInstance;
                  if ( v28->m_pInstance != 0 && LODWORD(v29[16].m_pEntity) != 3 )
                  {
                    (*(v29->_vptr_IHandleEntity + 22))(v28->m_pInstance, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v26, v21);
                    LODWORD(v29[16].m_pEntity) = 3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::AddTimerTask  (line 3338, @0x00000000026fbe80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetTutorialState, Start, operator CEntityInstance*, operator=<float>
// calls: CDOTA_Tutorial::GetHumanPlayer, CountdownTimer::Now
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::AddTimerTask(CDOTA_Tutorial *const this, float a2, float fCountdown)
{
  float v4; // xmm0_4
  bool v5; // zf
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v10; // [rsp+8h] [rbp-18h]

  if ( CDOTA_Tutorial::GetHumanPlayer(this) != 0 )
  {
    v4 = CountdownTimer::Now(&this->m_Countdown) + a2;
    if ( v4 == this->m_Countdown.m_timestamp.m_Value )
    {
      v5 = a2 == this->m_Countdown.m_duration.m_Value;
    }
    else
    {
      v10 = v4;
      (*(this->m_Countdown._vptr_CountdownTimer + 2))(&this->m_Countdown, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v5 = a2 == this->m_Countdown.m_duration.m_Value;
      this->m_Countdown.m_timestamp.m_Value = v10;
    }
    if ( !v5 )
    {
      (*(this->m_Countdown._vptr_CountdownTimer + 2))(&this->m_Countdown, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Countdown.m_duration.m_Value = a2;
    }
    m_Index = this->m_hData.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[this->m_hData.m_Index & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0 && LODWORD(m_pInstance[16].m_pEntity) != 4 )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 22))(v8->m_pInstance, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            LODWORD(m_pInstance[16].m_pEntity) = 4;
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::IncrementTaskProgress  (line 3351, @0x00000000026fbfd0, libserver.so)  // inlines: CEntityHandle, Get, GetAssignedHero, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetTaskProgress, GetTaskSteps, HandleTutorialEvent, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetTaskProgress, SetTutorialState, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Tutorial::GetHumanPlayer, KeyValues::FindKey, KeyValues::GetString, ShowTutorialTip, CDOTA_Tutorial::HandleTutorialEvent
// callers: CDOTA_Tutorial::HandleTutorialEvent, CDOTA_Tutorial::UpdateTutorialState, CDOTA_Tutorial::FireGameEvent
// strings: "show_tip", "task_completed"
// globals: CEntityHandle::gm_pEntityList, g_DOTATutorial
void __fastcall CDOTA_Tutorial::IncrementTaskProgress(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 m_Index; // eax
  int v10; // r12d
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rdx
  KeyValues *m_pLessonKeys; // rdi
  KeyValues *Key; // rax
  const char *String; // rax
  uint32 v16; // eax
  unsigned __int64 v17; // rdi
  CEntityIdentity *v18; // rdx
  int m_hScope; // esi
  CEntityIdentity *v20; // rcx
  CEntityIdentity *v21; // rdx
  CEntityInstance *v22; // rbx
  CEntityInstance *v23; // rcx
  CEntityInstance *v24; // r13

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    v5 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    if ( (v5 + 2) > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v4 & 0x1FF];
        if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            m_Index = this->m_hData.m_Index;
            v10 = 1;
            if ( m_Index + 2 > 1 )
            {
              v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
              if ( v11 != 0 )
              {
                v10 = 1;
                v12 = &v11[this->m_hData.m_Index & 0x1FF];
                if ( v12 != 0 )
                {
                  if ( m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
                    v10 = HIDWORD(v12->m_pInstance[16].m_pEntity) + 1;
                  if ( m_Index == v12->m_EHandle.m_Index )
                  {
                    v24 = v12->m_pInstance;
                    if ( v12->m_pInstance != 0 && HIDWORD(v24[16].m_pEntity) != v10 )
                    {
                      (*(v24->_vptr_IHandleEntity + 22))(v24, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      HIDWORD(v24[16].m_pEntity) = v10;
                    }
                  }
                }
              }
            }
            m_pLessonKeys = this->m_pLessonKeys;
            if ( m_pLessonKeys != 0 )
            {
              Key = KeyValues::FindKey(m_pLessonKeys, "show_tip", 0);
              if ( Key != 0 )
              {
                String = KeyValues::GetString(Key, 0, "", 0, 0);
                ShowTutorialTip(String, 0, v10);
              }
            }
            v16 = this->m_hData.m_Index;
            if ( v16 == -1
              || v16 == -2
              || (v17 = this->m_hData.m_Index & 0x7FFF,
                  (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v17 >> 9)]) == 0) )
            {
              if ( v10 < 0 )
                return;
              goto LABEL_29;
            }
            m_hScope = 0;
            v20 = &v18[this->m_hData.m_Index & 0x1FF];
            if ( v20 != 0 && v16 == v20->m_EHandle.m_Index )
            {
              v23 = v20->m_pInstance;
              if ( v23 != 0 )
                m_hScope = v23[16].m_hPrivateScope.m_hScope;
            }
            if ( m_hScope <= v10 )
            {
              v21 = &v18[v17 & 0x1FF];
              if ( v21 != 0 && v16 == v21->m_EHandle.m_Index )
              {
                v22 = v21->m_pInstance;
                if ( v21->m_pInstance != 0 && LODWORD(v22[16].m_pEntity) != 1 )
                {
                  (*(v22->_vptr_IHandleEntity + 22))(v22, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  LODWORD(v22[16].m_pEntity) = 1;
                }
              }
LABEL_29:
              if ( g_DOTATutorial.m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
                CDOTA_Tutorial::HandleTutorialEvent(&g_DOTATutorial, "task_completed");
            }
          }
        }
      }
    }
  }
}


// CDOTA_Tutorial::ForceGameStart  (line 3382, @0x00000000026bd560, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::ForceGameStart, CDOTAGamerules::PrepareSpawners
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_Tutorial::ForceGameStart(CDOTA_Tutorial *const this)
{
  float v1; // xmm1_4

  CDOTAGamerules::ForceGameStart(g_pGameRules);
  CDOTAGamerules::PrepareSpawners(g_pGameRules, COERCE_DOUBLE(1065353216), v1);
}


// CDOTA_Tutorial::ClearAllTasks  (line 3390, @0x00000000026fd270, libserver.so)  // inlines: CEntityHandle, Get, GetAssignedHero, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetTeamNumber, GetTutorialState, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetTaskProgress, SetTaskSecondsRemaining, SetTaskSteps, SetTutorialState, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Tutorial::GetHumanPlayer, MinimapEvent
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::ClearAllTasks(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax
  uint32 m_Index; // edx
  CConcreteEntityList *v4; // rsi
  int v5; // ecx
  __int64 v6; // r8
  CEntityIdentity *v7; // rdi
  CEntityIdentity *v8; // r8
  unsigned __int16 v9; // ax
  __int64 v10; // r8
  bool v11; // zf
  CEntityIdentity *v12; // rdi
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rax
  CEntityInstance *v19; // rbx
  CEntityInstance *m_pInstance; // r12
  CEntityInstance *v21; // r12
  CEntityInstance *v22; // r8
  unsigned __int16 v23; // si
  int v24; // edi
  int v25; // ecx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CDOTA_BaseNPC *v28; // rsi
  CEntityInstance *v29; // rdx
  CEntityInstance *v30; // r12

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer == 0 )
    return;
  m_Index = this->m_hData.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index == -1 || m_Index == -2 )
    return;
  v5 = (this->m_hData.m_Index & 0x7FFF) >> 9;
  v6 = v5;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v5];
  if ( v7 == 0 )
  {
    v9 = this->m_hData.m_Index & 0x7FFF;
    goto LABEL_10;
  }
  v8 = &v7[this->m_hData.m_Index & 0x1FF];
  if ( v8 == 0 || m_Index != v8->m_EHandle.m_Index || (v22 = v8->m_pInstance) == 0 )
  {
    v9 = this->m_hData.m_Index & 0x7FFF;
LABEL_8:
    v10 = v9 & 0x1FF;
    v11 = &v7[v10] == 0;
    v12 = &v7[v10];
    v6 = v5;
    if ( !v11 && m_Index == v12->m_EHandle.m_Index )
    {
      m_pInstance = v12->m_pInstance;
      if ( v12->m_pInstance != 0 && LODWORD(m_pInstance[16].m_hPrivateScope.m_hScope) != 0 )
      {
        (*(m_pInstance->_vptr_IHandleEntity + 22))(v12->m_pInstance, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v5);
        v4 = CEntityHandle::gm_pEntityList;
        LODWORD(m_pInstance[16].m_hPrivateScope.m_hScope) = 0;
        m_Index = this->m_hData.m_Index;
        if ( m_Index + 2 <= 1 )
          return;
        v9 = this->m_hData.m_Index & 0x7FFF;
        v6 = v9 >> 9;
      }
    }
    goto LABEL_10;
  }
  if ( (LODWORD(v22[16].m_pEntity) - 2) <= 2 )
  {
    if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v23 = 0x7FFF;
      v24 = 0x7FFF;
    }
    else
    {
      v23 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v24 = v23;
    }
    v25 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v23 & 0x7FFF;
    if ( (v25 + 2) > 1
      && (v26 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9]) != 0
      && (v27 = &v26[v24 & 0x1FF]) != 0
      && v25 == v27->m_EHandle.m_Index
      && (v29 = v27->m_pInstance) != 0
      && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
    {
      v28 = 0;
      if ( (v29[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        v28 = v29;
    }
    else
    {
      v28 = 0;
    }
    MinimapEvent(HumanPlayer->m_iTeamNum.m_Value, v28, 0, 0, 256, 4);
    v4 = CEntityHandle::gm_pEntityList;
    m_Index = this->m_hData.m_Index;
  }
  if ( m_Index == -1 || m_Index == -2 )
    return;
  v9 = this->m_hData.m_Index & 0x7FFF;
  v5 = v9 >> 9;
  v6 = v5;
  v7 = v4->m_pIdentityChunks[v5];
  if ( v7 != 0 )
    goto LABEL_8;
LABEL_10:
  v13 = v4->m_pIdentityChunks[v6];
  if ( v13 != 0 )
  {
    v14 = &v13[v9 & 0x1FF];
    if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
    {
      v21 = v14->m_pInstance;
      if ( v14->m_pInstance != 0 && HIDWORD(v21[16].m_hPrivateScope.m_hScope) != 0 )
      {
        (*(v21->_vptr_IHandleEntity + 22))(v21, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v4 = CEntityHandle::gm_pEntityList;
        HIDWORD(v21[16].m_hPrivateScope.m_hScope) = 0;
        m_Index = this->m_hData.m_Index;
        if ( m_Index + 2 <= 1 )
          return;
        v9 = this->m_hData.m_Index & 0x7FFF;
        v6 = v9 >> 9;
      }
    }
  }
  v15 = v4->m_pIdentityChunks[v6];
  if ( v15 != 0 )
  {
    v16 = &v15[v9 & 0x1FF];
    if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
    {
      v30 = v16->m_pInstance;
      if ( v16->m_pInstance != 0 && HIDWORD(v30[16].m_pEntity) != 0 )
      {
        (*(v30->_vptr_IHandleEntity + 22))(v30, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v4 = CEntityHandle::gm_pEntityList;
        HIDWORD(v30[16].m_pEntity) = 0;
        m_Index = this->m_hData.m_Index;
        if ( m_Index + 2 <= 1 )
          return;
        v9 = this->m_hData.m_Index & 0x7FFF;
        v6 = v9 >> 9;
      }
    }
  }
  v17 = v4->m_pIdentityChunks[v6];
  if ( v17 != 0 )
  {
    v18 = &v17[v9 & 0x1FF];
    if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
    {
      v19 = v18->m_pInstance;
      if ( v18->m_pInstance != 0 && LODWORD(v19[16].m_pEntity) != 1 )
      {
        (*(v19->_vptr_IHandleEntity + 22))(v19, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        LODWORD(v19[16].m_pEntity) = 1;
      }
    }
  }
}


// CDOTA_Tutorial::CalculateScore  (line 3417, @0x00000000026fd6b0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTA_Tutorial::GetHumanPlayer, CDOTA_PlayerResource::GetCreepDamageTaken, CDOTA_PlayerResource::GetTowerDamageTaken, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetDenies, Msg
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "Last Hit Score: %d\n", "Deny Score: %d\n", "Damage Taken: %d\n", "-------------------------------\n", "Final Score: %d\n"
int __fastcall CDOTA_Tutorial::CalculateScore(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v2; // dx
  int v3; // esi
  int v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rax
  int CreepDamageTaken; // r12d
  int v10; // r12d
  int v11; // r14d
  int v12; // r13d
  double v13; // xmm0_8

  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer == 0 )
    return 0;
  if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( (v4 + 2) <= 1 )
    return 0;
  v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
  if ( v5 == 0 )
    return 0;
  v6 = &v5[v3 & 0x1FF];
  if ( v6 == 0 )
    return 0;
  if ( v4 != v6->m_EHandle.m_Index )
    return 0;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    return 0;
  }
  CreepDamageTaken = CDOTA_PlayerResource::GetCreepDamageTaken(g_pDOTAPlayerResource, 0, 0);
  v10 = CDOTA_PlayerResource::GetTowerDamageTaken(g_pDOTAPlayerResource, 0, 0) + CreepDamageTaken;
  v11 = 50 * CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, 0);
  v12 = 25 * CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, 0);
  Msg("Last Hit Score: %d\n", v11);
  Msg("Deny Score: %d\n", v12);
  *&v13 = Msg("Damage Taken: %d\n", v10).m128_u64[0];
  Msg("-------------------------------\n", v13);
  Msg("Final Score: %d\n", v11 + v12 - v10);
  return v11 + v12 - v10;
}


// CDOTA_Tutorial::HeroTriggerTouched  (line 3440, @0x00000000026fd850, libserver.so)  // inlines: HandleTutorialEvent
// calls: KeyValues::GetString, V_stricmp_fast, CDOTA_Tutorial::HandleTutorialEvent
// callers: CDOTA_HeroTrigger::ActivateMultiTrigger
// strings: "advance_trigger", "task_completed"
void __fastcall CDOTA_Tutorial::HeroTriggerTouched(CDOTA_Tutorial *const this, const char *pszTriggerName)
{
  KeyValues *m_pLessonKeys; // rdi
  const char *String; // rax

  if ( pszTriggerName != 0 && *pszTriggerName != 0 )
  {
    m_pLessonKeys = this->m_pLessonKeys;
    if ( m_pLessonKeys != 0 )
    {
      String = KeyValues::GetString(m_pLessonKeys, "advance_trigger", "", 0, 0);
      if ( String != 0
        && *String != 0
        && V_stricmp_fast(String, pszTriggerName) == 0
        && this->m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
      {
        CDOTA_Tutorial::HandleTutorialEvent(this, "task_completed");
      }
    }
  }
}


// CDOTA_Tutorial::OnNPCAwaken  (line 3460, @0x00000000026fd9c0, libserver.so)  // inlines: HandleTutorialEvent
// calls: CDOTA_Tutorial::HandleTutorialEvent
// callers: CDOTA_Modifier_Tutorial_Sleep::OnTakeDamage
// strings: "npc_awoke"
// globals: g_DOTATutorial
void __fastcall CDOTA_Tutorial::OnNPCAwaken(CDOTA_Tutorial *const this)
{
  if ( g_DOTATutorial.m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
    CDOTA_Tutorial::HandleTutorialEvent(&g_DOTATutorial, "npc_awoke");
}


// CDOTA_Tutorial::FindRoquelairePerches  (line 3469, @0x000000000270d690, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Construct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Purge, RemoveAll, Set, operator=, operator[]
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CGameEntitySystem::FindEntityByClassname, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// strings: "info_roquelaire_perch"
void __fastcall CDOTA_Tutorial::FindRoquelairePerches(CDOTA_Tutorial *const this)
{
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r13
  CBaseEntity *EntityByClassname; // rax
  int m_Size; // r14d
  int v5; // edx
  CHandle<CBaseEntity> *v6; // rdx
  CHandle<CBaseEntity> *v7; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v9; // ecx
  __int16 v10; // si
  CBaseEntity *pTarget; // [rsp+8h] [rbp-28h]

  p_m_Memory = &this->m_hRoquelairePerches.m_Memory;
  this->m_hRoquelairePerches.m_Size = 0;
  if ( (this->m_hRoquelairePerches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hRoquelairePerches.m_Memory);
  EntityByClassname = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                          g_pGameEntitySystem,
                          EntityByClassname,
                          "info_roquelaire_perch");
    if ( EntityByClassname == 0 )
      break;
    m_Size = this->m_hRoquelairePerches.m_Size;
    v5 = m_Size;
    if ( m_Size == this->m_hRoquelairePerches.m_Memory.m_nAllocationCount )
    {
      pTarget = EntityByClassname;
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
      v5 = this->m_hRoquelairePerches.m_Size;
      EntityByClassname = pTarget;
    }
    this->m_hRoquelairePerches.m_Size = v5 + 1;
    v6 = &this->m_hRoquelairePerches.m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
    {
      v6->m_Index = -1;
      v7 = &this->m_hRoquelairePerches.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v7 = 0;
    }
    m_pEntity = EntityByClassname->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v7->m_Index) = v10 | v7->m_Index & 0x8000;
      v7->m_Index = (v9 << 15) | v7->m_Index & 0x7FFF;
    }
    else
    {
      v7->m_Index = -1;
    }
  }
}


// CDOTA_Tutorial::GetNearestRoquelairePerch  (line 3484, @0x00000000026fda00, libserver.so)  // inlines: CEntityHandle, Element, Get, GetAssignedHero, GetBool, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, IsValid, Length2DSqr, LookupEntity, Remove, ShiftElementsLeft, ToDOTABaseNPC, ToDOTABaseNPCHero, V_memmove, VectorSubtract, memmove, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[]
// calls: CDOTA_Tutorial::GetHumanPlayer, CBaseEntity::GetAbsOrigin, memmove
// callers: CDOTABehaviorRoquelaireInvade::Update, CDOTABehaviorRoquelaireIdle::Update
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTA_Tutorial::GetNearestRoquelairePerch(CDOTA_Tutorial *const this)
{
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  int v11; // r14d
  CBaseEntity *v12; // r12
  __int64 v13; // r13
  float v14; // r15d
  int m_Size; // eax
  CHandle<CBaseEntity> *m_pMemory; // rsi
  CHandle<CBaseEntity> *v17; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  const Vector *v21; // rax
  __m128i v22; // xmm0
  CHandle<CBaseEntity> *v23; // rdx
  uint32 v24; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  float y; // [rsp-50h] [rbp-50h]
  vec_t x; // [rsp-4Ch] [rbp-4Ch]

  if ( dota_tutorial_roquelaire_useperches.m_pParent->m_Value.m_nValue == 0 )
    return 0;
  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(this);
  if ( HumanPlayer != 0 )
  {
    if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    v5 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    if ( (v5 + 2) > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v4 & 0x1FF];
        if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            x = AbsOrigin->x;
            v11 = this->m_hRoquelairePerches.m_Size - 1;
            y = AbsOrigin->y;
            if ( v11 >= 0 )
            {
              v12 = 0;
              v13 = v11;
              v14 = COERCE_FLOAT(_mm_cvtsi128_si32(0x4CBEB25Cu));
              do
              {
                while ( 1 )
                {
                  m_pMemory = this->m_hRoquelairePerches.m_Memory.m_pMemory;
                  v17 = &m_pMemory[v13];
                  m_Index = m_pMemory[v13].m_Index;
                  if ( m_Index + 2 <= 1
                    || (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F]) == 0
                    || (v20 = &v19[v17->m_Index & 0x1FF]) == 0
                    || m_Index != v20->m_EHandle.m_Index
                    || v20->m_pInstance == 0 )
                  {
                    m_Size = this->m_hRoquelairePerches.m_Size;
                    if ( m_Size - v11 - 1 > 0 )
                    {
                      memmove(v17, &m_pMemory[v13 + 1], 4LL * (this->m_hRoquelairePerches.m_Size - v11 - 1));
                      m_Size = this->m_hRoquelairePerches.m_Size;
                    }
                    this->m_hRoquelairePerches.m_Size = m_Size - 1;
                    goto LABEL_20;
                  }
                  v21 = CBaseEntity::GetAbsOrigin(v20->m_pInstance);
                  v22 = LODWORD(x);
                  *v22.m128i_i32 = ((*v22.m128i_i32 - v21->x) * (*v22.m128i_i32 - v21->x))
                                 + ((y - v21->y) * (y - v21->y));
                  if ( v14 > *v22.m128i_i32 )
                    break;
LABEL_20:
                  --v11;
                  --v13;
                  if ( v11 == -1 )
                    return v12;
                }
                v12 = 0;
                v23 = &this->m_hRoquelairePerches.m_Memory.m_pMemory[v13];
                v24 = v23->m_Index;
                if ( v23->m_Index + 2 > 1 )
                {
                  v25 = v23->m_Index;
                  v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F];
                  if ( v26 != 0 )
                  {
                    v27 = &v26[v25 & 0x1FF];
                    if ( v27 != 0 && v24 == v27->m_EHandle.m_Index )
                      v12 = v27->m_pInstance;
                  }
                }
                --v11;
                --v13;
                v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
              }
              while ( v11 != -1 );
              return v12;
            }
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_HeroTrigger::~CDOTA_HeroTrigger  (line 3524, @0x00000000027459c0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_HeroTrigger::~CDOTA_HeroTrigger(CDOTA_HeroTrigger *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_HeroTrigger::~CDOTA_HeroTrigger  (line 3524, @0x0000000002745ac0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CDOTA_HeroTrigger, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_HeroTrigger::~CDOTA_HeroTrigger(CDOTA_HeroTrigger *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_HeroTrigger::GetEntityClass  (line 3526, @0x0000000002728970, libserver.so)
CEntityClass *__cdecl CDOTA_HeroTrigger::GetEntityClass()
{
  return g_pEntityCDOTA_HeroTriggerClass;
}


// CDOTA_HeroTrigger::Schema_DynamicBinding  (line 3526, @0x0000000002728980, libserver.so)
// globals: CDOTA_HeroTrigger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_HeroTrigger::Schema_DynamicBinding(const CDOTA_HeroTrigger *const this)
{
  return CDOTA_HeroTrigger::s_pSchemaBinding;
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3526, @0x0000000002728990, libserver.so)
// globals: CDOTA_HeroTrigger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_HeroTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::DestructInstance  (line 3526, @0x00000000027289a0, libserver.so)  // inlines: Destruct<CDOTA_HeroTrigger>
void __fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::FreeInstance  (line 3526, @0x00000000027289c0, libserver.so)
void __fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::CanAllocate  (line 3526, @0x00000000027289e0, libserver.so)
bool __fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3526, @0x00000000027289f0, libserver.so)
// globals: CDOTA_HeroTrigger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_HeroTrigger::s_pSchemaBinding;
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 3526, @0x0000000002736ac0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1504);
  memset(v1, 0, 0x5E0u);
  return v1;
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 3526, @0x000000000273bf20, libserver.so)  // inlines: CDOTA_HeroTrigger, Construct<CDOTA_HeroTrigger>
// calls: CTriggerMultiple::CTriggerMultiple
CEntityInstance *__fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CTriggerMultiple::CTriggerMultiple(p);
    *p = &off_42AF770;
  }
  return p;
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3526, @0x0000000002745cb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_HeroTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3526, @0x0000000002745cd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_HeroTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_HeroTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_HeroTrigger::GetEntityClassInternal  (line 3526, @0x000000000279f830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CTriggerMultiple::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "trigger_hero", "CDOTA_HeroTrigger"
// globals: `guard variable for'CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass, CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass, __dso_handle, CDOTA_HeroTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo, CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo
CEntityClass *__cdecl CDOTA_HeroTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass);
    CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass._vptr_CEntityClass = off_42AF6F0;
    __cxa_guard_release(&`guard variable for'CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass);
    __cxa_atexit(
      CDOTA_HeroTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_HeroTriggerClass != 0 )
    return &CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass;
  if ( `guard variable for'CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo) != 0 )
  {
    EntityClassInfo = CTriggerMultiple::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo,
      "CDOTA_HeroTrigger",
      "trigger_hero",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo);
  }
  CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass.m_pClassInfo = &CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo;
  CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass.m_pBaseClassInfo = CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_HeroTriggerClass = &CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass;
  CDOTA_HeroTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_HeroTriggerClassInfo.m_pClass = &CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass;
  CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCDOTA_HeroTriggerClass->m_pComponentOverrides = 0;
  return &CDOTA_HeroTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_HeroTriggerClass;
}


// CDOTA_HeroTrigger::GetDataDescMap  (line 3538, @0x00000000026bd100, libserver.so)
// globals: CDOTA_HeroTrigger::m_DataMap
datamap_t *__fastcall CDOTA_HeroTrigger::GetDataDescMap(CDOTA_HeroTrigger *const this)
{
  return &CDOTA_HeroTrigger::m_DataMap;
}


// CDOTA_HeroTrigger::AddDatadescMetadataKeys  (line 3538, @0x00000000026fdcb0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_HeroTrigger::GetEntityClass(void)
void __fastcall CDOTA_HeroTrigger::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_HeroTrigger::GetEntityClass);
}


// CDOTA_HeroTrigger::GetBaseMap  (line 3538, @0x00000000026fdcd0, libserver.so)
datamap_t *__cdecl CDOTA_HeroTrigger::GetBaseMap()
{
  return &CTriggerMultiple::m_DataMap;
}


// DataMapInit<CDOTA_HeroTrigger>  (line 3538, @0x00000000026fdce0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "CDOTA_HeroTrigger"
// globals: `guard variable for'DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder, CDOTA_HeroTrigger::GetEntityClass(void), CDOTA_HeroTrigger::m_DataMap, DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::dataDesc, DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder.m_pszBase = "CDOTA_HeroTrigger";
    DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_HeroTrigger::m_DataMap.dataNumFields = 1;
  CDOTA_HeroTrigger::m_DataMap.baseMap = &CTriggerMultiple::m_DataMap;
  CDOTA_HeroTrigger::m_DataMap.dataDesc = DataMapInit<CDOTA_HeroTrigger>(CDOTA_HeroTrigger *)::dataDesc;
  AddDatadescMetadataKeys(&CDOTA_HeroTrigger::m_DataMap, CDOTA_HeroTrigger::GetEntityClass);
  return &CDOTA_HeroTrigger::m_DataMap;
}


// CDOTA_HeroTrigger::Spawn  (line 3541, @0x00000000026bd460, libserver.so)
// calls: CTriggerMultiple::Spawn
void __fastcall CDOTA_HeroTrigger::Spawn(CDOTA_HeroTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  CTriggerMultiple::Spawn(this, pKeyValues);
}


// CDOTA_HeroTrigger::PassesTriggerFilters  (line 3549, @0x00000000026cadc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*
// calls: CBaseFilter::PassesFilter
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_HeroTrigger::PassesTriggerFilters(CDOTA_HeroTrigger *const this, CBaseEntity *pOther)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CBaseFilter *m_pInstance; // rax

  if ( pOther != 0 )
  {
    result = pOther->m_bIsDOTANPC;
    if ( !result )
      return result;
    if ( (pOther[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 && LOBYTE(pOther[4].m_pfnMoveDone.__delta) == 0 )
    {
      m_Index = this->m_hFilter.m_Index;
      return m_Index + 2 <= 1
          || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFilter.m_Index) >> 9) & 0x3F]) == 0
          || (v5 = &v4[this->m_hFilter.m_Index & 0x1FF]) == 0
          || m_Index != v5->m_EHandle.m_Index
          || (m_pInstance = v5->m_pInstance) == 0
          || CBaseFilter::PassesFilter(m_pInstance, this, pOther);
    }
  }
  return 0;
}


// CDOTA_HeroTrigger::ActivateMultiTrigger  (line 3562, @0x00000000026fd8e0, libserver.so)  // inlines: GetBool, GetEntityNameAsCStr, GetInt, String, curtime
// calls: CBaseEntity::GetNextThink, CDOTA_Tutorial::HeroTriggerTouched, CTriggerMultiple::ActivateMultiTrigger
// globals: g_DOTATutorial
void __fastcall CDOTA_HeroTrigger::ActivateMultiTrigger(CDOTA_HeroTrigger *const this, CBaseEntity *pActivator)
{
  float NextThink; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // rbx
  CEntityIdentity *m_pEntity; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v9; // [rsp+Ch] [rbp-24h]

  NextThink = CBaseEntity::GetNextThink(this, 0);
  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v9 = NextThink;
        (m_pfnWarningFunc)(1, NextThink, 0.0);
        NextThink = v9;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( NextThink <= m_flCurrentTime )
  {
    if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0 )
    {
      m_pEntity = this->m_pEntity;
      if ( m_pEntity->m_name.u.m_Id != 0 )
        CDOTA_Tutorial::HeroTriggerTouched(&g_DOTATutorial, m_pEntity->m_name.u.m_pAsString);
      else
        CDOTA_Tutorial::HeroTriggerTouched(&g_DOTATutorial, "");
    }
    CTriggerMultiple::ActivateMultiTrigger(this, pActivator);
  }
}


// TutorialSpeechEnd  (line 3581, @0x00000000026fc820, libserver.so)  // inlines: HandleTutorialEvent
// calls: CDOTA_Tutorial::HandleTutorialEvent
// globals: g_DOTATutorial
void __fastcall TutorialSpeechEnd(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_DOTATutorial.m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
    CDOTA_Tutorial::HandleTutorialEvent(&g_DOTATutorial, "speech_end");
}


// TutorialTipDismissed  (line 3593, @0x00000000026fc860, libserver.so)  // inlines: HandleTutorialEvent
// calls: CDOTA_Tutorial::HandleTutorialEvent
// globals: g_DOTATutorial
void __fastcall TutorialTipDismissed(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_DOTATutorial.m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
    CDOTA_Tutorial::HandleTutorialEvent(&g_DOTATutorial, "tip_dismissed");
}


// TutorialCleanupPost  (line 3604, @0x00000000026bd510, libserver.so)  // inlines: PostTutorialCleanup
// calls: RevertGlobalConvarTrackerConvars
void __fastcall TutorialCleanupPost(const CCommandContext *const ctx, const CCommand *const args)
{
  RevertGlobalConvarTrackerConvars(g_DOTATutorial.m_nConvarTrackerID);
  g_DOTATutorial.m_bCleanupTutorialPostLevel = 0;
}


// TutorialTipExperienceSet  (line 3615, @0x00000000026fc8a0, libserver.so)  // inlines: HandleTutorialEvent, SetExperienced, atoi
// calls: strtol, CDOTA_Tutorial::HandleTutorialEvent
// strings: "experience_dialog_closed"
// globals: g_DOTATutorial
void __fastcall TutorialTipExperienceSet(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( args->m_nArgc > 1 )
  {
    g_DOTATutorial.m_bIsExperienced = strtol(args->m_ppArgv[1], 0, 10) != 0;
    if ( g_DOTATutorial.m_TipDelayTimer.m_timestamp.m_Value <= 0.0 )
      CDOTA_Tutorial::HandleTutorialEvent(&g_DOTATutorial, "experience_dialog_closed");
  }
}


// TutorialLessonAutocomplete  (line 3631, @0x000000000270d7d0, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CUtlString>, Element, GrowMemory, V_strlen, V_strnicmp_fast<int>, _V_strstr, operator[], strstr
// calls: strstr, DOTAGameManager, CDOTAGameManager::GetTutorialLessonKeys, KeyValues::GetFirstSubKey, KeyValues::GetName, CUtlString::Format, KeyValues::GetNextKey, strlen, _V_strnicmp_fast, CUtlMemory<CUtlString, int>::Grow
void __fastcall TutorialLessonAutocomplete(
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  const char *v2; // r13
  CDOTAGameManager *v4; // rax
  KeyValues *TutorialLessonKeys; // rax
  KeyValues *i; // rbx
  CUtlString *v7; // rax
  CUtlString *v8; // r14
  const char *v9; // rax
  unsigned int v10; // r14d
  const char *Name; // rax
  __int64 m_Size; // r14

  v2 = partial;
  if ( strstr(partial, "tutorial_start_lesson") != 0 )
    v2 += 22;
  v4 = DOTAGameManager();
  TutorialLessonKeys = CDOTAGameManager::GetTutorialLessonKeys(v4);
  if ( TutorialLessonKeys != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(TutorialLessonKeys); i != 0; i = KeyValues::GetNextKey(i) )
    {
      if ( *v2 != 0 )
      {
        v10 = strlen(v2);
        Name = KeyValues::GetName(i);
        if ( _V_strnicmp_fast(Name, v2, v10) != 0 )
          continue;
      }
      m_Size = commands->m_Size;
      if ( m_Size == commands->m_Memory.m_nAllocationCount )
        CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
      ++commands->m_Size;
      v7 = &commands->m_Memory.m_pMemory[m_Size];
      if ( v7 != 0 )
      {
        v7->m_pString = 0;
        v8 = &commands->m_Memory.m_pMemory[m_Size];
      }
      else
      {
        v8 = 0;
      }
      v9 = KeyValues::GetName(i);
      CUtlString::Format(v8, "%s %s", "tutorial_start_lesson", v9);
    }
  }
}


// tutorial_start_lesson  (line 3670, @0x0000000002718230, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CDOTA_Tutorial::SetLessonTo
// globals: g_DOTATutorial
void __fastcall tutorial_start_lesson(const CCommandContext *const ctx, const CCommand *const args)
{
  ISteamUtils *m_pSteamUtils; // rdi

  if ( (steamapicontext == 0
     || (m_pSteamUtils = steamapicontext->m_pSteamUtils) == 0
     || (*(*m_pSteamUtils + 16LL))(m_pSteamUtils) == 2)
    && UTIL_IsCommandIssuedByServerAdmin()
    && args->m_nArgc > 1 )
  {
    CDOTA_Tutorial::SetLessonTo(&g_DOTATutorial, args->m_ppArgv[1]);
  }
}


// finish_tutorial  (line 3686, @0x0000000002711f20, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTA_Tutorial::FinishTutorial
// globals: g_DOTATutorial
void __fastcall finish_tutorial(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0 )
    CDOTA_Tutorial::FinishTutorial(&g_DOTATutorial);
}


