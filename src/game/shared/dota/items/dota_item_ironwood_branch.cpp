// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ironwood_branch.cpp:28
class CDOTA_Item_IronwoodBranch : public CDOTA_Item {
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
	CDOTA_Item_IronwoodBranch(CDOTA_Item_IronwoodBranch &);
	CDOTA_Item_IronwoodBranch(CDOTA_Item_IronwoodBranch &);
	CDOTA_Item_IronwoodBranch();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_IronwoodBranch();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ironwood_branch.cpp:81
class CDOTA_Modifier_Item_IronwoodBranch : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	CDOTA_Modifier_Item_IronwoodBranch();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_IronwoodBranch();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_IronwoodBranch::~CDOTA_Item_IronwoodBranch  (line 28, @0x0000000002dbc8b0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_IronwoodBranch::~CDOTA_Item_IronwoodBranch(CDOTA_Item_IronwoodBranch *const this)
{
  this->_vptr_IHandleEntity = &off_4705190;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_IronwoodBranch::~CDOTA_Item_IronwoodBranch  (line 28, @0x0000000002dbc8d0, libserver.so)  // inlines: ~CDOTA_Item_IronwoodBranch
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_IronwoodBranch::~CDOTA_Item_IronwoodBranch(CDOTA_Item_IronwoodBranch *const this)
{
  this->_vptr_IHandleEntity = &off_4705190;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_IronwoodBranch::Schema_DynamicBinding  (line 30, @0x0000000002db8c80, libserver.so)
// globals: CDOTA_Item_IronwoodBranch::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_IronwoodBranch::Schema_DynamicBinding(
        const CDOTA_Item_IronwoodBranch *const this)
{
  return CDOTA_Item_IronwoodBranch::s_pSchemaBinding;
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002db8c90, libserver.so)
// globals: CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002db8ca0, libserver.so)  // inlines: Destruct<CDOTA_Item_IronwoodBranch>
void __fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002db8cc0, libserver.so)
void __fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002db8ce0, libserver.so)
bool __fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002db8cf0, libserver.so)
// globals: CDOTA_Item_IronwoodBranch::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_IronwoodBranch::s_pSchemaBinding;
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002dba640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002dbb940, libserver.so)  // inlines: CDOTA_Item_IronwoodBranch, Construct<CDOTA_Item_IronwoodBranch>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4705190;
  }
  return p;
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002dbeab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002dbead0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_IronwoodBranch::GetEntityClassInternal  (line 30, @0x0000000002dc3c90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_branches", "CDOTA_Item_IronwoodBranch"
// globals: `guard variable for'CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass, CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass, __dso_handle, CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo, CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo
CEntityClass *__cdecl CDOTA_Item_IronwoodBranch::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass);
    CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass._vptr_CEntityClass = off_4705110;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass);
    __cxa_atexit(
      CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_IronwoodBranchClass != 0 )
    return &CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass;
  if ( `guard variable for'CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo,
      "CDOTA_Item_IronwoodBranch",
      "item_branches",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo);
  }
  CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass.m_pClassInfo = &CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo;
  CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass.m_pBaseClassInfo = CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_IronwoodBranchClass = &CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass;
  CDOTA_Item_IronwoodBranch::GetEntityClassInfo(void)::g_EntityCDOTA_Item_IronwoodBranchClassInfo.m_pClass = &CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass;
  CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_IronwoodBranchClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_IronwoodBranch::GetEntityClassInternal(void)::g_EntityCDOTA_Item_IronwoodBranchClass;
}


// CDOTA_Item_IronwoodBranch::GetIntrinsicModifierName  (line 32, @0x0000000002db8d00, libserver.so)
// strings: "modifier_item_ironwood_branch"
const char *__fastcall CDOTA_Item_IronwoodBranch::GetIntrinsicModifierName(CDOTA_Item_IronwoodBranch *const this)
{
  return "modifier_item_ironwood_branch";
}


// CDOTA_Item_IronwoodBranch::GetCustomCastError  (line 36, @0x0000000002db8d10, libserver.so)
// strings: "#dota_hud_error_no_trees_here"
const char *__fastcall CDOTA_Item_IronwoodBranch::GetCustomCastError(
        CDOTA_Item_IronwoodBranch *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_no_trees_here";
}


// CDOTA_Item_IronwoodBranch::CausesAutoattack  (line 42, @0x0000000002db8d20, libserver.so)
bool __fastcall CDOTA_Item_IronwoodBranch::CausesAutoattack(CDOTA_Item_IronwoodBranch *const this)
{
  return 0;
}


// CDOTA_Item_IronwoodBranch::OnSpellStart  (line 50, @0x0000000002db5bb0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, Vector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorPosition, CreateTempTree, CGridNav::ResolveNPCPositions, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_TempTree::AddParticle, CDOTA_Item::RemoveItem
// strings: "tree_duration", "particles/items_fx/ironwood_tree.vpcf"
void __fastcall CDOTA_Item_IronwoodBranch::OnSpellStart(CDOTA_Item_IronwoodBranch *const this)
{
  CDOTA_TempTree *TempTree; // r12
  float v3; // xmm3_4
  CBaseEntity *v4; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  double v7; // xmm1_8
  float tree_duration; // [rsp+Ch] [rbp-64h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v10; // 0:kr14_12.12
  Vector v11; // 0:kr20_12.12

  tree_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "tree_duration", -1, 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v10 = CDOTABaseAbility::GetCursorPosition(this);
  TempTree = CreateTempTree(1, *&v10.x, v10.z, tree_duration, *&CursorPosition.x, CursorPosition.z);
  v11 = CDOTABaseAbility::GetCursorPosition(this);
  *&v7 = v11.z;
  CGridNav::ResolveNPCPositions(&g_GridNav, 1, *&v11.x, v7, 80.0, v3);
  v4 = (*(TempTree->_vptr_IHandleEntity + 251))(TempTree);
  ParticleManager = GetParticleManager();
  LODWORD(v4) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/items_fx/ironwood_tree.vpcf",
                  1,
                  v4,
                  0,
                  0);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v6, v4, 1, 0.0, 0.0);
  CDOTA_TempTree::AddParticle(TempTree, v4);
  CDOTA_Item::RemoveItem(this);
}


// CDOTA_Item_IronwoodBranch::CastFilterResult  (line 71, @0x0000000002dabf60, libserver.so)
// calls: IsPositionValidForWard
int __fastcall CDOTA_Item_IronwoodBranch::CastFilterResult(
        CDOTA_Item_IronwoodBranch *const this,
        const Vector *const vLocation)
{
  return !IsPositionValidForWard(vLocation) ? 0x17 : 0;
}


// CDOTA_Modifier_Item_IronwoodBranch::~CDOTA_Modifier_Item_IronwoodBranch  (line 81, @0x0000000002dbaec0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_IronwoodBranch::~CDOTA_Modifier_Item_IronwoodBranch(
        CDOTA_Modifier_Item_IronwoodBranch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_IronwoodBranch::~CDOTA_Modifier_Item_IronwoodBranch  (line 81, @0x0000000002dbaee0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_IronwoodBranch
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_IronwoodBranch::~CDOTA_Modifier_Item_IronwoodBranch(
        CDOTA_Modifier_Item_IronwoodBranch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_IronwoodBranch::OnCreated  (line 96, @0x0000000002db44d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_IronwoodBranch::OnCreated(
        CDOTA_Modifier_Item_IronwoodBranch *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
  else
    this->bonus_all_stats = 0;
}


// CDOTA_Modifier_Item_IronwoodBranch::DeclareFunctions  (line 101, @0x0000000002dab070, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_IronwoodBranch::GetModifierBonusStats_All(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_IronwoodBranch::DeclareFunctions(CDOTA_Modifier_Item_IronwoodBranch *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_IronwoodBranch::GetModifierBonusStats_All;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_IronwoodBranch::GetModifierBonusStats_All;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_IronwoodBranch::GetModifierBonusStats_All;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_IronwoodBranch::GetModifierBonusStats_All  (line 108, @0x0000000002dab0c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_IronwoodBranch::GetModifierBonusStats_All(
        CDOTA_Modifier_Item_IronwoodBranch *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


