// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_quelling_blade.cpp:32
class CDOTA_Item_QuellingBlade : public CDOTA_Item {
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
	CDOTA_Item_QuellingBlade(CDOTA_Item_QuellingBlade &);
	CDOTA_Item_QuellingBlade(CDOTA_Item_QuellingBlade &);
	CDOTA_Item_QuellingBlade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_QuellingBlade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[226] GetCastRange
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_quelling_blade.cpp:47
class C_CDOTA_Item_QuellingBlade_MapInstall {
	C_CDOTA_Item_QuellingBlade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_quelling_blade.cpp:114
class CDOTA_Modifier_Item_QuellingBlade : public CDOTA_Buff_Item {
public:

private:

	int damage_bonus;  // +0xba8
	int damage_bonus_ranged;  // +0xbac
	CDOTA_Modifier_Item_QuellingBlade();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_QuellingBlade();

	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_QuellingBlade::~CDOTA_Item_QuellingBlade  (line 32, @0x0000000002dd8460, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_QuellingBlade::~CDOTA_Item_QuellingBlade(CDOTA_Item_QuellingBlade *const this)
{
  this->_vptr_IHandleEntity = &off_4740810;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_QuellingBlade::~CDOTA_Item_QuellingBlade  (line 32, @0x0000000002dd8480, libserver.so)  // inlines: ~CDOTA_Item_QuellingBlade
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_QuellingBlade::~CDOTA_Item_QuellingBlade(CDOTA_Item_QuellingBlade *const this)
{
  this->_vptr_IHandleEntity = &off_4740810;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_QuellingBlade::Schema_DynamicBinding  (line 34, @0x0000000002dd4c60, libserver.so)
// globals: CDOTA_Item_QuellingBlade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_QuellingBlade::Schema_DynamicBinding(
        const CDOTA_Item_QuellingBlade *const this)
{
  return CDOTA_Item_QuellingBlade::s_pSchemaBinding;
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002dd4c70, libserver.so)
// globals: CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002dd4c80, libserver.so)  // inlines: Destruct<CDOTA_Item_QuellingBlade>
void __fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002dd4ca0, libserver.so)
void __fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002dd4cc0, libserver.so)
bool __fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002dd4cd0, libserver.so)
// globals: CDOTA_Item_QuellingBlade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_QuellingBlade::s_pSchemaBinding;
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002dd62b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002dd72e0, libserver.so)  // inlines: CDOTA_Item_QuellingBlade, Construct<CDOTA_Item_QuellingBlade>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4740810;
  }
  return p;
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002dda390, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002dda3b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_QuellingBlade::GetEntityClassInternal  (line 34, @0x0000000002de3740, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_QuellingBlade"
// globals: `guard variable for'CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass, CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass, __dso_handle, CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo, CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo
CEntityClass *__cdecl CDOTA_Item_QuellingBlade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass);
    CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass._vptr_CEntityClass = off_4740790;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass);
    __cxa_atexit(
      CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_QuellingBladeClass != 0 )
    return &CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass;
  if ( `guard variable for'CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo,
      "CDOTA_Item_QuellingBlade",
      "item_quelling_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo);
  }
  CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass.m_pClassInfo = &CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo;
  CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass.m_pBaseClassInfo = CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_QuellingBladeClass = &CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass;
  CDOTA_Item_QuellingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuellingBladeClassInfo.m_pClass = &CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass;
  CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_QuellingBladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_QuellingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuellingBladeClass;
}


// CDOTA_Item_QuellingBlade::GetIntrinsicModifierName  (line 38, @0x0000000002dd4ce0, libserver.so)
// strings: "modifier_item_quelling_blade"
const char *__fastcall CDOTA_Item_QuellingBlade::GetIntrinsicModifierName(CDOTA_Item_QuellingBlade *const this)
{
  return "modifier_item_quelling_blade";
}


// CDOTA_Item_QuellingBlade::GetCastRange  (line 39, @0x0000000002de3a90, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_ward"
int __fastcall CDOTA_Item_QuellingBlade::GetCastRange(
        CDOTA_Item_QuellingBlade *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  if ( pTarget != 0 && (pTarget->m_iUnitType & 0x193) == 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_ward", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Item_QuellingBlade::YouForgotToImplementOrDeclareServerClass  (line 47, @0x0000000002dc78b0, libserver.so)
int __fastcall CDOTA_Item_QuellingBlade::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_QuellingBlade *const this)
{
  return 0;
}


// CDOTA_Item_QuellingBlade::GetServerClass  (line 47, @0x0000000002dca860, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_QuellingBlade::GetServerClass(CDOTA_Item_QuellingBlade *const this)
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


// CDOTA_Item_QuellingBlade::OnSpellStart  (line 55, @0x0000000002dc7d40, libserver.so)  // inlines: FStrEq, GetTeamNumber, GetUnitName, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCursorTarget, __dynamic_cast, CDOTABaseAbility::GetCaster, CDOTA_CombatLog::AddTreeCutDownEvent, CDOTA_BaseNPC::Kill, strcmp
// strings: "npc_dota_techies_stasis_trap", "npc_dota_techies_remote_mine"
void __fastcall CDOTA_Item_QuellingBlade::OnSpellStart(CDOTA_Item_QuellingBlade *const this)
{
  CBaseEntity *CursorTarget; // rax
  void *v3; // rax
  void *v4; // r12
  void (__fastcall *v5)(void *, _QWORD, _QWORD); // r14
  unsigned int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v8; // eax
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  CBaseEntity *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  unsigned __int8 v14; // r13
  CDOTA_BaseNPC *v15; // rax
  CBaseEntity *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // r12
  unsigned __int8 v19; // r13
  const char *m_pAsString; // r13
  CDOTA_BaseNPC *v21; // rax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 )
  {
    v3 = __dynamic_cast(CursorTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
    v4 = v3;
    if ( v3 != 0 )
    {
      v5 = *(*v3 + 72LL);
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      Caster = CDOTABaseAbility::GetCaster(this);
      v8 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      v5(v4, v8, m_Value);
      v9 = CDOTABaseAbility::GetCaster(this);
      v10 = (*(v9->_vptr_IHandleEntity + 414))(v9);
      CDOTA_CombatLog::AddTreeCutDownEvent(&g_DOTACombatLog, v10, 1);
    }
  }
  v11 = CDOTABaseAbility::GetCursorTarget(this);
  if ( v11 != 0 )
  {
    v12 = __dynamic_cast(v11, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_NPC_Observer_Ward, 0);
    v13 = v12;
    if ( v12 != 0 )
    {
      v14 = v12->m_iTeamNum.m_Value;
      if ( v14 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        v15 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::Kill(v13, this, v15, 0.0, 0);
      }
    }
  }
  v16 = CDOTABaseAbility::GetCursorTarget(this);
  if ( v16 != 0 )
  {
    v17 = __dynamic_cast(v16, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Additive, 0);
    v18 = v17;
    if ( v17 != 0 )
    {
      v19 = v17->m_iTeamNum.m_Value;
      if ( v19 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        m_pAsString = v18->m_iszUnitName.m_Value.u.m_pAsString;
        if ( m_pAsString != 0
          && (m_pAsString == "npc_dota_techies_stasis_trap"
           || strcmp(v18->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_techies_stasis_trap") == 0
           || m_pAsString == "npc_dota_techies_remote_mine"
           || strcmp(m_pAsString, "npc_dota_techies_remote_mine") == 0) )
        {
          v21 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::Kill(v18, this, v21, 0.0, 0);
        }
      }
    }
  }
}


// CDOTA_Item_QuellingBlade::CastFilterResult  (line 81, @0x0000000002dc8150, libserver.so)  // inlines: FStrEq, GetTeamNumber, GetUnitName, String, ToCStr, _V_strcmp
// calls: __dynamic_cast, CDOTABaseAbility::GetCaster, strcmp
// strings: "npc_dota_techies_stasis_trap", "npc_dota_techies_remote_mine"
int __fastcall CDOTA_Item_QuellingBlade::CastFilterResult(CDOTA_Item_QuellingBlade *const this, CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  _BYTE *v5; // rax
  char v6; // r13
  unsigned __int8 m_Value; // r13
  const char *m_pAsString; // rbx
  bool v9; // zf

  if ( pTarget == 0 )
    return 23;
  if ( __dynamic_cast(pTarget, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Tree, -2) != 0 )
    return 0;
  v5 = __dynamic_cast(pTarget, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_NPC_Observer_Ward, 0);
  if ( v5 != 0 )
  {
    v6 = v5[383];
    if ( v6 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      return 0;
  }
  m_Value = pTarget->m_iTeamNum.m_Value;
  if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    return 23;
  m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString == 0 )
    return 23;
  result = 0;
  if ( m_pAsString != "npc_dota_techies_stasis_trap" )
  {
    result = strcmp(m_pAsString, "npc_dota_techies_stasis_trap");
    if ( result != 0 )
    {
      result = 0;
      if ( m_pAsString != "npc_dota_techies_remote_mine" )
      {
        v9 = strcmp(m_pAsString, "npc_dota_techies_remote_mine") == 0;
        result = !v9;
        if ( !v9 )
          return 23;
      }
    }
  }
  return result;
}


// CDOTA_Item_QuellingBlade::GetCustomCastError  (line 106, @0x0000000002dc78c0, libserver.so)
// strings: "#dota_hud_error_cant_cast_on_non_tree_ward"
const char *__fastcall CDOTA_Item_QuellingBlade::GetCustomCastError(
        CDOTA_Item_QuellingBlade *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_on_non_tree_ward";
}


// CDOTA_Modifier_Item_QuellingBlade::~CDOTA_Modifier_Item_QuellingBlade  (line 114, @0x0000000002dd62f0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_QuellingBlade::~CDOTA_Modifier_Item_QuellingBlade(
        CDOTA_Modifier_Item_QuellingBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_QuellingBlade::~CDOTA_Modifier_Item_QuellingBlade  (line 114, @0x0000000002dd6310, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_QuellingBlade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_QuellingBlade::~CDOTA_Modifier_Item_QuellingBlade(
        CDOTA_Modifier_Item_QuellingBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_QuellingBlade::GetAttributes  (line 119, @0x0000000002dd4cf0, libserver.so)
int __fastcall CDOTA_Modifier_Item_QuellingBlade::GetAttributes(CDOTA_Modifier_Item_QuellingBlade *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_QuellingBlade::DeclareFunctions  (line 132, @0x0000000002dc78d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_QuellingBlade::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_QuellingBlade::DeclareFunctions(CDOTA_Modifier_Item_QuellingBlade *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_QuellingBlade::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_QuellingBlade::GetModifierPreAttack_BonusDamage  (line 137, @0x0000000002dc9d10, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, TargetNPC, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindAbilityByName
// strings: "npc_dota_hero_kunkka"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_QuellingBlade::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_QuellingBlade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v9; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityInstance *v14; // r12
  const char *m_pAsString; // rsi
  CDOTABaseAbility *AbilityByName; // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v12 = &v11[m_Index_low & 0x1FF]) == 0
    || v9 != v12->m_EHandle.m_Index
    || (v14 = v12->m_pInstance, v12->m_pInstance == 0)
    || BYTE3(v14[7]._vptr_IHandleEntity) == 0
    || m_pInstance == 0
    || SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) >= 0
    || HIBYTE(v14[7].m_CScriptComponent) == HIBYTE(m_pInstance[7].m_CScriptComponent) )
  {
    *&result.m_eType = 1;
LABEL_11:
    result.m_szVal = 0;
    return result;
  }
  m_pAsString = v14[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( m_pAsString != 0 && (m_pAsString == "npc_dota_hero_kunkka" || strcmp(m_pAsString, "npc_dota_hero_kunkka") == 0) )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v14, "kunkka_tidebringer", 0);
    if ( AbilityByName != 0 )
    {
      LOBYTE(result.m_szVal) = (*(AbilityByName->_vptr_IHandleEntity + 245))(AbilityByName);
      *&result.m_eType = 1;
      if ( LOBYTE(result.m_szVal) != 0 )
        goto LABEL_11;
    }
  }
  if ( (*(&v14[50].m_worldGroupId + 1) & 2) != 0 )
  {
    *v2.m128i_i32 = this->damage_bonus_ranged;
    result.m_szVal = 0;
    result.m_eType = _mm_cvtsi128_si32(v2);
  }
  else
  {
    *v3.m128i_i32 = this->damage_bonus;
    result.m_szVal = 0;
    result.m_eType = _mm_cvtsi128_si32(v3);
  }
  *&result.m_eType = (result.m_eType << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_QuellingBlade::OnCreated  (line 171, @0x0000000002dd0e90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_bonus_ranged"
void __fastcall CDOTA_Modifier_Item_QuellingBlade::OnCreated(
        CDOTA_Modifier_Item_QuellingBlade *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_bonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage_bonus_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_bonus_ranged", -1, 0);
      return;
    }
  }
  else
  {
    this->damage_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->damage_bonus_ranged = 0;
}


