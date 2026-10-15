// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_tango.cpp:108
class CDOTA_Item_Tango : public CDOTA_Item {
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
	CDOTA_Item_Tango(CDOTA_Item_Tango &);
	CDOTA_Item_Tango(CDOTA_Item_Tango &);
	CDOTA_Item_Tango();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnSpellStart();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_Tango();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_tango.cpp:126
class C_CDOTA_Item_Tango_MapInstall {
	C_CDOTA_Item_Tango_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_tango.cpp:204
class CDOTA_Item_Tango_Single : public CDOTA_Item {
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
	CDOTA_Item_Tango_Single(CDOTA_Item_Tango_Single &);
	CDOTA_Item_Tango_Single(CDOTA_Item_Tango_Single &);
	CDOTA_Item_Tango_Single();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnSpellStart();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_Tango_Single();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_tango.cpp:218
class C_CDOTA_Item_Tango_Single_MapInstall {
	C_CDOTA_Item_Tango_Single_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_tango.cpp:270
class CDOTA_Modifier_TangoHeal : public CDOTA_Buff {
public:

private:

	int total_heal;  // +0xba8
	bool superheal;  // +0xbac
	CDOTA_Modifier_TangoHeal();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual const char * GetTexture();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_TangoHeal();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[32] GetTexture
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// UseTangoOnTarget  (line 32, @0x0000000002e08f00, libserver.so)  // inlines: CreateEvent, GetTeamNumber, SetBool
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, __dynamic_cast, CDOTA_CombatLog::AddTreeCutDownEvent, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::Kill, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// callers: CDOTA_Item_Tango::OnSpellStart, CDOTA_Item_Tango_Single::OnSpellStart
// strings: "modifier_tango_heal", "superheal", "DOTA_Item.Tango.Activate", "nommed_tree"
void __fastcall UseTangoOnTarget(CBaseEntity *pTarget, CDOTA_Item *pItem, CDOTA_BaseNPC *pCaster)
{
  float v6; // xmm1_4
  _BYTE *v7; // rax
  _BYTE *v8; // r15
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r15
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm1_4
  CDOTA_BaseNPC_Hero *pHeroa; // [rsp+0h] [rbp-60h]
  CDOTA_BaseNPC_Hero *pHero; // [rsp+0h] [rbp-60h]
  unsigned int m_Value; // [rsp+8h] [rbp-58h]
  float buff_duration; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(pItem, "buff_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_tango_heal");
  KeyValues::SetFloat(&kv, "duration", v6);
  KeyValues::SetInt(&kv, "superheal", 0);
  if ( pTarget != 0 )
  {
    v7 = __dynamic_cast(pTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
    v8 = v7;
    if ( v7 != 0 )
    {
      m_Value = pCaster->m_iTeamNum.m_Value;
      pHeroa = *(*v7 + 72LL);
      v9 = (*(pCaster->_vptr_IHandleEntity + 414))(pCaster);
      (pHeroa)(v8, v9, m_Value);
      v10 = (*(pCaster->_vptr_IHandleEntity + 414))(pCaster);
      CDOTA_CombatLog::AddTreeCutDownEvent(&g_DOTACombatLog, v10, 1);
      if ( v8[21] != 0 )
      {
        KeyValues::SetInt(&kv, "superheal", 1);
        KeyValues::SetFloat(&kv, "duration", v14);
      }
      CDOTA_BaseNPC::RemoveModifierByName(pCaster, "modifier_tango_heal");
      CDOTA_BaseNPC::AddNewModifier(pCaster, pCaster, pItem, "modifier_tango_heal", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(pCaster, "DOTA_Item.Tango.Activate", 0.0, 0, 0);
      pHero = __dynamic_cast(pCaster, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
      if ( pHero != 0 )
      {
        v11 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "nommed_tree", 0, 0);
        v12 = v11;
        if ( v11 != 0 )
        {
          (*(*v11 + 112LL))(v11, "PlayerID", pHero->m_iPlayerID.m_Value);
          (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v12, 1);
        }
      }
    }
    v13 = __dynamic_cast(pTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_NPC_Observer_Ward, 0);
    if ( v13 != 0 && v13->m_iTeamNum.m_Value != pCaster->m_iTeamNum.m_Value )
    {
      CDOTA_BaseNPC::Kill(v13, pItem, pCaster, 0.0, 0);
      KeyValues::SetInt(&kv, "superheal", 1);
      KeyValues::SetFloat(&kv, "duration", buff_duration);
      CDOTA_BaseNPC::RemoveModifierByName(pCaster, "modifier_tango_heal");
      CDOTA_BaseNPC::AddNewModifier(pCaster, pCaster, pItem, "modifier_tango_heal", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(pCaster, "DOTA_Item.Tango.Activate", 0.0, 0, 0);
    }
  }
  KeyValues::~KeyValues(&kv);
}


// IsTangoTargetValid  (line 81, @0x0000000002e00710, libserver.so)  // inlines: IsConsideredHero, ToDOTABaseNPC
// calls: __dynamic_cast
// callers: CDOTA_Item_Tango::CastFilterResult, CDOTA_Item_Tango_Single::CastFilterResult
bool __fastcall IsTangoTargetValid(CBaseEntity *pTarget, CDOTA_BaseNPC *pCaster, bool bAllowTeammate)
{
  void *v6; // rax
  char m_bIsDOTANPC; // cl
  _BYTE *v9; // rax

  if ( pTarget == 0 )
    return 0;
  v6 = __dynamic_cast(pTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
  m_bIsDOTANPC = 1;
  if ( v6 != 0 )
    return m_bIsDOTANPC;
  m_bIsDOTANPC = pTarget->m_bIsDOTANPC;
  if ( m_bIsDOTANPC != 0
    && bAllowTeammate
    && pTarget->m_iTeamNum.m_Value == pCaster->m_iTeamNum.m_Value
    && pTarget != pCaster
    && LOBYTE(pTarget[4].m_pfnMoveDone.__delta) == 0
    && (pTarget[2].m_hEffectEntity.m_Value.m_Index & 3) != 0 )
  {
    return m_bIsDOTANPC;
  }
  v9 = __dynamic_cast(pTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_NPC_Observer_Ward, 0);
  return v9 != 0 && v9[383] != pCaster->m_iTeamNum.m_Value;
}


// CDOTA_Item_Tango::~CDOTA_Item_Tango  (line 108, @0x0000000002e0f3f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Tango::~CDOTA_Item_Tango(CDOTA_Item_Tango *const this)
{
  this->_vptr_IHandleEntity = &off_477BB50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Tango::~CDOTA_Item_Tango  (line 108, @0x0000000002e0f410, libserver.so)  // inlines: ~CDOTA_Item_Tango
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Tango::~CDOTA_Item_Tango(CDOTA_Item_Tango *const this)
{
  this->_vptr_IHandleEntity = &off_477BB50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Tango::Schema_DynamicBinding  (line 110, @0x0000000002e0be70, libserver.so)
// globals: CDOTA_Item_Tango::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tango::Schema_DynamicBinding(const CDOTA_Item_Tango *const this)
{
  return CDOTA_Item_Tango::s_pSchemaBinding;
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 110, @0x0000000002e0be80, libserver.so)
// globals: CDOTA_Item_Tango::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Tango::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tango::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::DestructInstance  (line 110, @0x0000000002e0be90, libserver.so)  // inlines: Destruct<CDOTA_Item_Tango>
void __fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Tango::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::FreeInstance  (line 110, @0x0000000002e0beb0, libserver.so)
void __fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Tango::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::CanAllocate  (line 110, @0x0000000002e0bed0, libserver.so)
bool __fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Tango::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 110, @0x0000000002e0bee0, libserver.so)
// globals: CDOTA_Item_Tango::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Tango::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tango::s_pSchemaBinding;
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::AllocateInstance  (line 110, @0x0000000002e0d700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Tango::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::ConstructInstance  (line 110, @0x0000000002e0e680, libserver.so)  // inlines: CDOTA_Item_Tango, Construct<CDOTA_Item_Tango>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Tango::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_477BB50;
  }
  return p;
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 110, @0x0000000002e110a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tango::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Tango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 110, @0x0000000002e110c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Tango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tango::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Tango::GetEntityClassInternal  (line 110, @0x0000000002e16260, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_tango", "CDOTA_Item_Tango"
// globals: `guard variable for'CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass, CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass, __dso_handle, CDOTA_Item_Tango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo, CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo
CEntityClass *__cdecl CDOTA_Item_Tango::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass);
    CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass._vptr_CEntityClass = off_477BAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass);
    __cxa_atexit(
      CDOTA_Item_Tango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_TangoClass != 0 )
    return &CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass;
  if ( `guard variable for'CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo,
      "CDOTA_Item_Tango",
      "item_tango",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo);
  }
  CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass.m_pClassInfo = &CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo;
  CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass.m_pBaseClassInfo = CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_TangoClass = &CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass;
  CDOTA_Item_Tango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TangoClassInfo.m_pClass = &CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass;
  CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_TangoClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Tango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TangoClass;
}


// CDOTA_Item_Tango::GetCastRange  (line 117, @0x0000000002e186f0, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_ward"
int __fastcall CDOTA_Item_Tango::GetCastRange(
        CDOTA_Item_Tango *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  if ( pTarget != 0 && (pTarget->m_iUnitType & 0x193) == 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_ward", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Item_Tango::CausesAutoattack  (line 121, @0x0000000002e0bef0, libserver.so)
bool __fastcall CDOTA_Item_Tango::CausesAutoattack(CDOTA_Item_Tango *const this)
{
  return 0;
}


// CDOTA_Item_Tango::YouForgotToImplementOrDeclareServerClass  (line 126, @0x0000000002dff630, libserver.so)
int __fastcall CDOTA_Item_Tango::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Tango *const this)
{
  return 0;
}


// CDOTA_Item_Tango::GetServerClass  (line 126, @0x0000000002e02ed0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Tango::GetServerClass(CDOTA_Item_Tango *const this)
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


// CDOTA_Item_Tango::Precache  (line 136, @0x0000000002e00030, libserver.so)
// calls: CDOTA_Item::Precache
void __fastcall CDOTA_Item_Tango::Precache(CDOTA_Item_Tango *const this, const CEntityPrecacheContext *pContext)
{
  CDOTA_Item::Precache(this, pContext);
}


// CDOTA_Item_Tango::CastFilterResult  (line 147, @0x0000000002e007f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, IsTangoTargetValid
int __fastcall CDOTA_Item_Tango::CastFilterResult(CDOTA_Item_Tango *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !IsTangoTargetValid(pTarget, Caster, 1) ? 0x17 : 0;
}


// CDOTA_Item_Tango::GetCustomCastError  (line 157, @0x0000000002e000b0, libserver.so)
// calls: __dynamic_cast, CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_non_tree_ward", "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Item_Tango::GetCustomCastError(CDOTA_Item_Tango *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *v3; // rbx

  if ( pTarget != 0
    && (v3 = __dynamic_cast(pTarget, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_BaseNPC_Hero, 0)) != 0
    && v3 == CDOTABaseAbility::GetCaster(this) )
  {
    return "#dota_hud_error_cant_cast_on_self";
  }
  else
  {
    return "#dota_hud_error_cant_cast_on_non_tree_ward";
  }
}


// CDOTA_Item_Tango::OnSpellStart  (line 169, @0x0000000002e091f0, libserver.so)  // inlines: IsConsideredHero, IsSpecialIllusion, IsTempestDouble, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_ModifierManager::GetModifier_Constant_First, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::AddItem, CDOTABaseAbility::GetCaster, UseTangoOnTarget, CDOTA_Item::SpendCharge
// strings: "modifier_brewmaster_primal_split_duration", "item_tango_single"
void __fastcall CDOTA_Item_Tango::OnSpellStart(CDOTA_Item_Tango *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *Caster; // r12
  CBaseEntity *v5; // rax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget == 0
    || !CursorTarget->m_bIsDOTANPC
    || (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 3) == 0
    || (*(CursorTarget->_vptr_IHandleEntity + 390))(CursorTarget) == 0
    && !v3->m_bIsIllusion.m_Value
    && CDOTA_ModifierManager::GetModifier_Constant_First(
         &v3->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
         &CModifierParams::s_Default) != 1.0
    && CDOTA_ModifierManager::GetModifier_Constant_First(
         &v3->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
         &CModifierParams::s_Default) != 1.0
    && !v3->m_bIsSummoned.m_Value
    && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_brewmaster_primal_split_duration", 0) == 0
    && v3->m_bHasInventory
    && CDOTA_BaseNPC::AddItem(v3, "item_tango_single", 21, -1, 0) == DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCursorTarget(this);
    UseTangoOnTarget(v5, this, Caster);
    CDOTA_Item::SpendCharge(this);
  }
}


// CDOTA_Item_Tango_Single::~CDOTA_Item_Tango_Single  (line 204, @0x0000000002e0f440, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Tango_Single::~CDOTA_Item_Tango_Single(CDOTA_Item_Tango_Single *const this)
{
  this->_vptr_IHandleEntity = &off_477C750;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Tango_Single::~CDOTA_Item_Tango_Single  (line 204, @0x0000000002e0f460, libserver.so)  // inlines: ~CDOTA_Item_Tango_Single
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Tango_Single::~CDOTA_Item_Tango_Single(CDOTA_Item_Tango_Single *const this)
{
  this->_vptr_IHandleEntity = &off_477C750;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Tango_Single::Schema_DynamicBinding  (line 206, @0x0000000002e0bf00, libserver.so)
// globals: CDOTA_Item_Tango_Single::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tango_Single::Schema_DynamicBinding(
        const CDOTA_Item_Tango_Single *const this)
{
  return CDOTA_Item_Tango_Single::s_pSchemaBinding;
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 206, @0x0000000002e0bf10, libserver.so)
// globals: CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::DestructInstance  (line 206, @0x0000000002e0bf20, libserver.so)  // inlines: Destruct<CDOTA_Item_Tango_Single>
void __fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::FreeInstance  (line 206, @0x0000000002e0bf40, libserver.so)
void __fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::CanAllocate  (line 206, @0x0000000002e0bf60, libserver.so)
bool __fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 206, @0x0000000002e0bf70, libserver.so)
// globals: CDOTA_Item_Tango_Single::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tango_Single::s_pSchemaBinding;
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::AllocateInstance  (line 206, @0x0000000002e0d740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::ConstructInstance  (line 206, @0x0000000002e0e6b0, libserver.so)  // inlines: CDOTA_Item_Tango_Single, Construct<CDOTA_Item_Tango_Single>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_477C750;
  }
  return p;
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 206, @0x0000000002e110f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 206, @0x0000000002e11110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tango_Single::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Tango_Single::GetEntityClassInternal  (line 206, @0x0000000002e163b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_tango_single", "CDOTA_Item_Tango_Single"
// globals: `guard variable for'CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass, CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass, __dso_handle, CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo, CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo
CEntityClass *__cdecl CDOTA_Item_Tango_Single::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass);
    CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass._vptr_CEntityClass = off_477C6D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass);
    __cxa_atexit(
      CDOTA_Item_Tango_Single::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Tango_SingleClass != 0 )
    return &CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass;
  if ( `guard variable for'CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo,
      "CDOTA_Item_Tango_Single",
      "item_tango_single",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo);
  }
  CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass.m_pClassInfo = &CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo;
  CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass.m_pBaseClassInfo = CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Tango_SingleClass = &CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass;
  CDOTA_Item_Tango_Single::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tango_SingleClassInfo.m_pClass = &CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass;
  CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Tango_SingleClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Tango_Single::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tango_SingleClass;
}


// CDOTA_Item_Tango_Single::GetCastRange  (line 213, @0x0000000002e18730, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_ward"
int __fastcall CDOTA_Item_Tango_Single::GetCastRange(
        CDOTA_Item_Tango_Single *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  if ( pTarget != 0 && (pTarget->m_iUnitType & 0x193) == 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_ward", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Item_Tango_Single::YouForgotToImplementOrDeclareServerClass  (line 218, @0x0000000002dff640, libserver.so)
int __fastcall CDOTA_Item_Tango_Single::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Tango_Single *const this)
{
  return 0;
}


// CDOTA_Item_Tango_Single::GetServerClass  (line 218, @0x0000000002e02e90, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Tango_Single::GetServerClass(CDOTA_Item_Tango_Single *const this)
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


// CDOTA_Item_Tango_Single::Precache  (line 228, @0x0000000002e003c0, libserver.so)
// calls: CDOTA_Item::Precache, PrecacheParticleSystem
// strings: "particles/items_fx/healing_tango.vpcf"
void __fastcall CDOTA_Item_Tango_Single::Precache(
        CDOTA_Item_Tango_Single *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_Item::Precache(this, pContext);
  PrecacheParticleSystem("particles/items_fx/healing_tango.vpcf", pContext);
}


// CDOTA_Item_Tango_Single::CastFilterResult  (line 237, @0x0000000002e00820, libserver.so)
// calls: CDOTABaseAbility::GetCaster, IsTangoTargetValid
int __fastcall CDOTA_Item_Tango_Single::CastFilterResult(CDOTA_Item_Tango_Single *const this, CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !IsTangoTargetValid(pTarget, Caster, 0) ? 0x17 : 0;
}


// CDOTA_Item_Tango_Single::GetCustomCastError  (line 247, @0x0000000002dff650, libserver.so)
// strings: "#dota_hud_error_cant_cast_on_non_tree_ward"
const char *__fastcall CDOTA_Item_Tango_Single::GetCustomCastError(
        CDOTA_Item_Tango_Single *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_on_non_tree_ward";
}


// CDOTA_Item_Tango_Single::OnSpellStart  (line 255, @0x0000000002e09340, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, UseTangoOnTarget, CDOTA_Item::SpendCharge
void __fastcall CDOTA_Item_Tango_Single::OnSpellStart(CDOTA_Item_Tango_Single *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CBaseEntity *CursorTarget; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  UseTangoOnTarget(CursorTarget, this, Caster);
  CDOTA_Item::SpendCharge(this);
}


// CDOTA_Modifier_TangoHeal::~CDOTA_Modifier_TangoHeal  (line 270, @0x0000000002e0e1a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TangoHeal::~CDOTA_Modifier_TangoHeal(CDOTA_Modifier_TangoHeal *const this)
{
  this->_vptr_CDOTA_Buff = &off_477D310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TangoHeal::~CDOTA_Modifier_TangoHeal  (line 270, @0x0000000002e0e1c0, libserver.so)  // inlines: ~CDOTA_Modifier_TangoHeal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TangoHeal::~CDOTA_Modifier_TangoHeal(CDOTA_Modifier_TangoHeal *const this)
{
  this->_vptr_CDOTA_Buff = &off_477D310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TangoHeal::IsPurgable  (line 278, @0x0000000002e0bf80, libserver.so)
bool __fastcall CDOTA_Modifier_TangoHeal::IsPurgable(CDOTA_Modifier_TangoHeal *const this)
{
  return 0;
}


// CDOTA_Modifier_TangoHeal::AddCustomTransmiterData  (line 300, @0x0000000002e00470, libserver.so)  // inlines: set_active, set_has_active
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_TangoHeal::AddCustomTransmiterData(
        CDOTA_Modifier_TangoHeal *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  bool superheal; // al

  superheal = this->superheal;
  *(entry + 4) |= 0x20000000u;
  *(entry + 134) = superheal;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_TangoHeal::DeclareFunctions  (line 314, @0x0000000002dff660, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TangoHeal::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_TangoHeal::DeclareFunctions(CDOTA_Modifier_TangoHeal *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_TangoHeal::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_TangoHeal::OnCreated  (line 319, @0x0000000002e07cf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetBool, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetInt
// strings: "total_heal", "superheal"
void __fastcall CDOTA_Modifier_TangoHeal::OnCreated(CDOTA_Modifier_TangoHeal *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->total_heal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "total_heal", -1, 0);
  else
    this->total_heal = 0;
  this->superheal = KeyValues::GetInt(pKV, "superheal", 0) != 0;
}


// CDOTA_Modifier_TangoHeal::OnRefresh  (line 333, @0x0000000002e00000, libserver.so)  // inlines: GetBool
// calls: KeyValues::GetInt
// strings: "superheal"
void __fastcall CDOTA_Modifier_TangoHeal::OnRefresh(CDOTA_Modifier_TangoHeal *const this, KeyValues *pKV)
{
  this->superheal = KeyValues::GetInt(pKV, "superheal", 0) != 0;
}


// CDOTA_Modifier_TangoHeal::GetModifierConstantHealthRegen  (line 341, @0x0000000002e005f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TangoHeal::GetModifierConstantHealthRegen(
        CDOTA_Modifier_TangoHeal *const this,
        const CModifierParams *const params)
{
  float total_heal; // xmm1_4
  float v3; // xmm0_4
  __int64 v4; // xmm1_8
  float v6; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  if ( this->superheal )
    total_heal = (2 * this->total_heal);
  else
    total_heal = this->total_heal;
  v6 = total_heal;
  v3 = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  v4 = LODWORD(v6);
  result.m_szVal = 0;
  *&v4 = v6 / v3;
  *&result.m_eType = (v4 << 32) | 1;
  return result;
}


// CDOTA_Modifier_TangoHeal::GetTexture  (line 352, @0x0000000002dff680, libserver.so)
// strings: "item_tango"
const char *__fastcall CDOTA_Modifier_TangoHeal::GetTexture(CDOTA_Modifier_TangoHeal *const this)
{
  return "item_tango";
}


