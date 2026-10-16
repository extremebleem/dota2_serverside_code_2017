// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_hurricane_pike.cpp:26
class CDOTA_Item_Recipe_Hurricane_Pike : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Hurricane_Pike(CDOTA_Item_Recipe_Hurricane_Pike &);
	CDOTA_Item_Recipe_Hurricane_Pike(CDOTA_Item_Recipe_Hurricane_Pike &);
	CDOTA_Item_Recipe_Hurricane_Pike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Hurricane_Pike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_hurricane_pike.cpp:37
class CDOTA_Item_Hurricane_Pike : public CDOTA_Item {
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
	CDOTA_Item_Hurricane_Pike(CDOTA_Item_Hurricane_Pike &);
	CDOTA_Item_Hurricane_Pike(CDOTA_Item_Hurricane_Pike &);
	CDOTA_Item_Hurricane_Pike();
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
	virtual ~CDOTA_Item_Hurricane_Pike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[226] GetCastRange
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_hurricane_pike.cpp:50
class C_CDOTA_Item_Hurricane_Pike_MapInstall {
	C_CDOTA_Item_Hurricane_Pike_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_hurricane_pike.cpp:176
class CDOTA_Modifier_Item_Hurricane_Pike : public CDOTA_Buff_Item {
public:

private:

	int bonus_health_regen;  // +0xba8
	int bonus_intellect;  // +0xbac
	int bonus_agility;  // +0xbb0
	int bonus_strength;  // +0xbb4
	int base_attack_range;  // +0xbb8
	CDOTA_Modifier_Item_Hurricane_Pike();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonusUnique(const CModifierParams &);
	ModifierVariant_t GetModifierCastRangeBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Hurricane_Pike();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_hurricane_pike.cpp:263
class CDOTA_Modifier_Hurricane_Pike_Active : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float m_flEndTime;  // +0xbc0
	float m_flCurTime;  // +0xbc4
	int push_length;  // +0xbc8
	CDOTA_Modifier_Hurricane_Pike_Active();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Hurricane_Pike_Active();

	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/items/dota_item_hurricane_pike.cpp:399
class CDOTA_Modifier_Hurricane_Pike_Active_Alternate : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float m_flEndTime;  // +0xbc0
	float m_flCurTime;  // +0xbc4
	int enemy_length;  // +0xbc8
	CDOTA_Modifier_Hurricane_Pike_Active_Alternate();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Hurricane_Pike_Active_Alternate();

	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/items/dota_item_hurricane_pike.cpp:537
class CDOTA_Modifier_Hurricane_Pike_Range : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	int max_attacks;  // +0xbac
	int m_iNumAttacks;  // +0xbb0
	bool bActive;  // +0xbb4

	int bonus_attack_speed;  // +0xbb8
	CDOTA_Modifier_Hurricane_Pike_Range();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetAlwaysAllowAttack(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Hurricane_Pike_Range();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Hurricane_Pike::~CDOTA_Item_Recipe_Hurricane_Pike  (line 26, @0x0000000002dbc630, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Hurricane_Pike::~CDOTA_Item_Recipe_Hurricane_Pike(
        CDOTA_Item_Recipe_Hurricane_Pike *const this)
{
  this->_vptr_IHandleEntity = &off_46FCA90;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Hurricane_Pike::~CDOTA_Item_Recipe_Hurricane_Pike  (line 26, @0x0000000002dbc650, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Hurricane_Pike
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Hurricane_Pike::~CDOTA_Item_Recipe_Hurricane_Pike(
        CDOTA_Item_Recipe_Hurricane_Pike *const this)
{
  this->_vptr_IHandleEntity = &off_46FCA90;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Hurricane_Pike::Schema_DynamicBinding  (line 28, @0x0000000002db8710, libserver.so)
// globals: CDOTA_Item_Recipe_Hurricane_Pike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Hurricane_Pike::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Hurricane_Pike *const this)
{
  return CDOTA_Item_Recipe_Hurricane_Pike::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db8720, libserver.so)
// globals: CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db8730, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Hurricane_Pike>
void __fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db8750, libserver.so)
void __fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db8770, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db8780, libserver.so)
// globals: CDOTA_Item_Recipe_Hurricane_Pike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Hurricane_Pike::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dba440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbb7c0, libserver.so)  // inlines: CDOTA_Item_Recipe_Hurricane_Pike, Construct<CDOTA_Item_Recipe_Hurricane_Pike>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46FCA90;
  }
  return p;
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbe830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbe850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal  (line 28, @0x0000000002dc2910, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_hurricane_pike", "CDOTA_Item_Recipe_Hurricane_Pike"
// globals: `guard variable for'CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass, CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass, __dso_handle, CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo, CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass);
    CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass._vptr_CEntityClass = off_46FCA10;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Hurricane_PikeClass != 0 )
    return &CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo,
      "CDOTA_Item_Recipe_Hurricane_Pike",
      "item_recipe_hurricane_pike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo);
  }
  CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass.m_pClassInfo = &CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo;
  CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Hurricane_PikeClass = &CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass;
  CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClassInfo.m_pClass = &CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass;
  CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Hurricane_PikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Hurricane_PikeClass;
}


// CDOTA_Item_Hurricane_Pike::~CDOTA_Item_Hurricane_Pike  (line 37, @0x0000000002dbc680, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Hurricane_Pike::~CDOTA_Item_Hurricane_Pike(CDOTA_Item_Hurricane_Pike *const this)
{
  this->_vptr_IHandleEntity = &off_46FD690;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Hurricane_Pike::~CDOTA_Item_Hurricane_Pike  (line 37, @0x0000000002dbc6a0, libserver.so)  // inlines: ~CDOTA_Item_Hurricane_Pike
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Hurricane_Pike::~CDOTA_Item_Hurricane_Pike(CDOTA_Item_Hurricane_Pike *const this)
{
  this->_vptr_IHandleEntity = &off_46FD690;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Hurricane_Pike::Schema_DynamicBinding  (line 39, @0x0000000002db8790, libserver.so)
// globals: CDOTA_Item_Hurricane_Pike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Hurricane_Pike::Schema_DynamicBinding(
        const CDOTA_Item_Hurricane_Pike *const this)
{
  return CDOTA_Item_Hurricane_Pike::s_pSchemaBinding;
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002db87a0, libserver.so)
// globals: CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002db87b0, libserver.so)  // inlines: Destruct<CDOTA_Item_Hurricane_Pike>
void __fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002db87d0, libserver.so)
void __fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002db87f0, libserver.so)
bool __fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002db8800, libserver.so)
// globals: CDOTA_Item_Hurricane_Pike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Hurricane_Pike::s_pSchemaBinding;
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002dba480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002dbb7f0, libserver.so)  // inlines: CDOTA_Item_Hurricane_Pike, Construct<CDOTA_Item_Hurricane_Pike>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46FD690;
  }
  return p;
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002dbe880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002dbe8a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Hurricane_Pike::GetEntityClassInternal  (line 39, @0x0000000002dc2a60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_Hurricane_Pike"
// globals: `guard variable for'CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass, CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass, __dso_handle, CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo, CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo
CEntityClass *__cdecl CDOTA_Item_Hurricane_Pike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass);
    CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass._vptr_CEntityClass = off_46FD610;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass);
    __cxa_atexit(
      CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Hurricane_PikeClass != 0 )
    return &CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass;
  if ( `guard variable for'CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo,
      "CDOTA_Item_Hurricane_Pike",
      "item_hurricane_pike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo);
  }
  CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass.m_pClassInfo = &CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo;
  CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass.m_pBaseClassInfo = CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Hurricane_PikeClass = &CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass;
  CDOTA_Item_Hurricane_Pike::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Hurricane_PikeClassInfo.m_pClass = &CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass;
  CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Hurricane_PikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Hurricane_Pike::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Hurricane_PikeClass;
}


// CDOTA_Item_Hurricane_Pike::GetIntrinsicModifierName  (line 43, @0x0000000002db8810, libserver.so)
// strings: "modifier_item_hurricane_pike"
const char *__fastcall CDOTA_Item_Hurricane_Pike::GetIntrinsicModifierName(CDOTA_Item_Hurricane_Pike *const this)
{
  return "modifier_item_hurricane_pike";
}


// CDOTA_Item_Hurricane_Pike::YouForgotToImplementOrDeclareServerClass  (line 50, @0x0000000002daac10, libserver.so)
int __fastcall CDOTA_Item_Hurricane_Pike::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Hurricane_Pike *const this)
{
  return 0;
}


// CDOTA_Item_Hurricane_Pike::GetServerClass  (line 50, @0x0000000002daec70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Hurricane_Pike::GetServerClass(CDOTA_Item_Hurricane_Pike *const this)
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


// CDOTA_Item_Hurricane_Pike::GetCastRange  (line 60, @0x0000000002db35b0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCastRange
// strings: "cast_range_enemy"
int __fastcall CDOTA_Item_Hurricane_Pike::GetCastRange(
        CDOTA_Item_Hurricane_Pike *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  unsigned __int8 m_Value; // r12

  if ( pTarget == 0 )
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  m_Value = pTarget->m_iTeamNum.m_Value;
  if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  else
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_enemy", -1, 0);
}


// CDOTA_Item_Hurricane_Pike::OnSpellStart  (line 70, @0x0000000002db7b30, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GetLevelSpecialValueFor<float>, GetTeamNumber, GrowMemory, InState, IsInvulnerable, Normalized, Purge, RemoveAll, Reset, ToDOTABaseNPC, VectorSubtract, entindex, operator-, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::PrimeResumePreviousMovement, CBaseEntity::GetAbsOrigin, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetPtr (21 total)
// strings: "modifier_gyrocopter_homing_missile", "modifier_faceless_void_chronosphere_freeze", "modifier_enigma_black_hole_pull", "modifier_legion_commander_duel", "modifier_disruptor_kinetic_field", "modifier_item_hurricane_pike_active" (11 total)
void __fastcall CDOTA_Item_Hurricane_Pike::OnSpellStart(CDOTA_Item_Hurricane_Pike *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v8; // rax
  int v9; // xmm2_4
  int v10; // xmm0_4
  const Vector *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // rax
  int v14; // xmm1_4
  int v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  float v20; // xmm1_4
  CDOTA_BaseNPC *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v26; // rax
  int m_Size; // eax
  CEntityIndex *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CEntityIndex v31; // eax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v33; // [rsp+4h] [rbp-BCh]
  CDOTA_BaseNPC *range_durationa; // [rsp+8h] [rbp-B8h]
  int range_duration; // [rsp+8h] [rbp-B8h]
  CUnitOrders vec; // [rsp+10h] [rbp-B0h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv_0; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0
      && ((v4 & 0x200) == 0
       || v3 == CDOTABaseAbility::GetCaster(this)
       || CDOTA_BaseNPC::FindModifierByName(v3, "modifier_gyrocopter_homing_missile", 0) != 0)
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1)
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_faceless_void_chronosphere_freeze", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_enigma_black_hole_pull", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_legion_commander_duel", 0) == 0
      && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_disruptor_kinetic_field", 0) == 0 )
    {
      if ( v3 == CDOTABaseAbility::GetCaster(this) )
        CDOTA_BaseNPC::PrimeResumePreviousMovement(v3);
      m_Value = v3->m_iTeamNum.m_Value;
      if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        KeyValues::KeyValues(&kv_0, "modifier_item_hurricane_pike_active");
        Caster = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_hurricane_pike_active", &kv_0, 0);
        DOTA_EmitSound(8, "DOTA_Item.ForceStaff.Activate", v3);
        KeyValues::~KeyValues(&kv_0);
      }
      else
      {
        v6 = CDOTABaseAbility::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
        v8 = CBaseEntity::GetAbsOrigin(v3);
        *&v9 = v8->x - AbsOrigin->x;
        *&v10 = v8->z - AbsOrigin->z;
        *&vec.m_nOrderSequenceNumber = v8->y - AbsOrigin->y;
        vec.m_nIssuerPlayerIndex = v9;
        vec.m_nUnits.m_Size = v10;
        VectorNormalize(&vec);
        v11 = CBaseEntity::GetAbsOrigin(v3);
        v12 = CDOTABaseAbility::GetCaster(this);
        v13 = CBaseEntity::GetAbsOrigin(v12);
        *&v14 = v13->z - v11->z;
        *&v15 = v13->x - v11->x;
        *&vec.m_nOrderSequenceNumber = v13->y - v11->y;
        vec.m_nUnits.m_Size = v14;
        vec.m_nIssuerPlayerIndex = v15;
        VectorNormalize(&vec);
        KeyValues::KeyValues(&kv, "modifier_item_hurricane_pike_active");
        KeyValues::SetFloat(&kv, "vecX", v16);
        KeyValues::SetFloat(&kv, "vecY", v17);
        v18 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v18, this, "modifier_item_hurricane_pike_active_alternate", &kv, 0);
        KeyValues::SetFloat(&kv, "vecX", v19);
        KeyValues::SetFloat(&kv, "vecY", v20);
        v21 = CDOTABaseAbility::GetCaster(this);
        v22 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v22, v21, this, "modifier_item_hurricane_pike_active_alternate", &kv, 0);
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "range_duration", -1, 0);
        KeyValues::KeyValues(&kv_0, "modifier_item_hurricane_pike_range");
        KeyValues::SetFloat(&kv_0, "duration", v23);
        KeyValues::SetPtr(&kv_0, "target", v3);
        range_durationa = CDOTABaseAbility::GetCaster(this);
        v24 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v24, range_durationa, this, "modifier_item_hurricane_pike_range", &kv_0, 0);
        vec.m_bQueue = 0;
        vec.m_nUnits.m_Size = 0;
        memset(&vec.m_nUnits.m_Memory, 0, 28);
        vec.m_nOrderSequenceNumber = 0;
        vec.m_vPosition.x = vec3_origin.x;
        y = vec3_origin.y;
        vec.m_nIssuerPlayerIndex = -1;
        vec.m_vPosition.y = y;
        vec.m_vPosition.z = vec3_origin.z;
        v26 = CDOTABaseAbility::GetCaster(this);
        v33.m_Data = CEntityInstance::GetEntityIndex(v26).m_Data;
        m_Size = vec.m_nUnits.m_Size;
        range_duration = vec.m_nUnits.m_Size;
        if ( vec.m_nUnits.m_Size == vec.m_nUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityIndex,int>::Grow(&vec.m_nUnits.m_Memory, 1);
          m_Size = vec.m_nUnits.m_Size;
        }
        vec.m_nUnits.m_Size = m_Size + 1;
        v28 = &vec.m_nUnits.m_Memory.m_pMemory[range_duration];
        if ( v28 != 0 )
          v28->m_Data = v33.m_Data;
        vec.m_nOrderType = 4;
        vec.m_nTargetIndex = CEntityInstance::GetEntityIndex(v3);
        DOTA_ExecuteOrders(&vec, 0, 0, 0);
        DOTA_EmitSound(8, "DOTA_Item.HurricanePike.Activate", v3);
        v29 = CDOTABaseAbility::GetCaster(this);
        DOTA_EmitSound(8, "DOTA_Item.HurricanePike.Activate", v29);
        vec.m_nUnits.m_Size = 0;
        if ( (vec.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEntityIndex,int>::Purge(&vec.m_nUnits.m_Memory);
          if ( (vec.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityIndex,int>::Purge(&vec.m_nUnits.m_Memory);
        }
        KeyValues::~KeyValues(&kv_0);
        KeyValues::~KeyValues(&kv);
      }
      v30 = CDOTABaseAbility::GetCaster(this);
      v31.m_Data = CEntityInstance::GetEntityIndex(v30).m_Data;
      CreateUnitEvent(v31, 0, 7, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_GENERIC_ITEM_USAGE);
    }
  }
}


// CDOTA_Item_Hurricane_Pike::CastFilterResult  (line 137, @0x0000000002dac620, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
// strings: "modifier_gyrocopter_homing_missile"
int __fastcall CDOTA_Item_Hurricane_Pike::CastFilterResult(
        CDOTA_Item_Hurricane_Pike *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_Buff *ModifierByName; // rdx
  int result; // eax
  unsigned __int8 m_Value; // bl
  unsigned __int8 v7; // r13
  CDOTA_BaseNPC *Caster; // rax
  bool IsDisableHelpSetForPlayerID; // dl

  ModifierByName = CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_gyrocopter_homing_missile", 0);
  result = 0;
  if ( ModifierByName == 0 )
  {
    result = CDOTABaseAbility::CastFilterResult(this, pTarget);
    if ( result == 0 )
    {
      if ( (pTarget->m_iUnitType & 1) == 0
        || (v7 = pTarget->m_iTeamNum.m_Value) != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
        || (Caster = CDOTABaseAbility::GetCaster(this),
            IsDisableHelpSetForPlayerID = CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                                            g_pDOTAPlayerResource,
                                            pTarget->m_nControllingPlayerID,
                                            Caster->m_nControllingPlayerID),
            result = 25,
            !IsDisableHelpSetForPlayerID) )
      {
        if ( pTarget == CDOTABaseAbility::GetCaster(this) || (pTarget->m_nUnitState64.m_Value & 0x200) == 0 )
        {
          return 0;
        }
        else
        {
          m_Value = pTarget->m_iTeamNum.m_Value;
          return (m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value) + 16;
        }
      }
    }
  }
  return result;
}


// CDOTA_Modifier_Item_Hurricane_Pike::~CDOTA_Modifier_Item_Hurricane_Pike  (line 176, @0x0000000002dbb050, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Hurricane_Pike::~CDOTA_Modifier_Item_Hurricane_Pike(
        CDOTA_Modifier_Item_Hurricane_Pike *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Hurricane_Pike::~CDOTA_Modifier_Item_Hurricane_Pike  (line 176, @0x0000000002dbb070, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Hurricane_Pike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Hurricane_Pike::~CDOTA_Modifier_Item_Hurricane_Pike(
        CDOTA_Modifier_Item_Hurricane_Pike *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Hurricane_Pike::DeclareFunctions  (line 201, @0x0000000002daac20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Hurricane_Pike::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Hurricane_Pike::GetModifierAttackRangeBonusUnique(CModifierParams const&), CDOTA_Modifier_Item_Hurricane_Pike::GetModifierCastRangeBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Hurricane_Pike::DeclareFunctions(CDOTA_Modifier_Item_Hurricane_Pike *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Hurricane_Pike::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Intellect;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Agility;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Strength;
  this->m_Functions[70].__pfn = CDOTA_Modifier_Item_Hurricane_Pike::GetModifierAttackRangeBonusUnique;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[70].__delta = 0;
  this->m_Functions[67].__pfn = CDOTA_Modifier_Item_Hurricane_Pike::GetModifierCastRangeBonus;
  this->m_Functions[67].__delta = 0;
}


// CDOTA_Modifier_Item_Hurricane_Pike::GetModifierConstantHealthRegen  (line 211, @0x0000000002daacc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hurricane_Pike::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Hurricane_Pike *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Intellect  (line 216, @0x0000000002daace0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Hurricane_Pike *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Strength  (line 221, @0x0000000002daad00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Hurricane_Pike *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Agility  (line 226, @0x0000000002daad20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hurricane_Pike::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Hurricane_Pike *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Hurricane_Pike::GetModifierAttackRangeBonusUnique  (line 231, @0x0000000002dac490, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hurricane_Pike::GetModifierAttackRangeBonusUnique(
        CDOTA_Modifier_Item_Hurricane_Pike *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v4; // xmm0
  unsigned __int64 v5; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v5 = 1;
  if ( (Parent->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    *v4.m128i_i32 = this->base_attack_range;
    return ((_mm_cvtsi128_si32(v4) << 32) | 1);
  }
  return v5;
}


// CDOTA_Modifier_Item_Hurricane_Pike::GetModifierCastRangeBonus  (line 239, @0x0000000002dadff0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hurricane_Pike::GetModifierCastRangeBonus(
        CDOTA_Modifier_Item_Hurricane_Pike *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r12
  __m128i v7; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( params->ability.m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[params->ability.m_Index & 0x1FF]) == 0
    || params->ability.m_Index != v4->m_EHandle.m_Index )
  {
    CDOTA_Buff::GetParent(this);
    return 1uLL;
  }
  m_pInstance = v4->m_pInstance;
  if ( (CDOTA_Buff::GetParent(this)->m_iAttackCapabilities.m_Value & 2) == 0
    || m_pInstance == 0
    || ((*(m_pInstance->_vptr_IHandleEntity + 251))(m_pInstance) & 0x20000) == 0 )
  {
    return 1uLL;
  }
  *v7.m128i_i32 = this->base_attack_range;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Hurricane_Pike::OnCreated  (line 250, @0x0000000002db57e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health_regen", "bonus_intellect", "bonus_agility", "base_attack_range"
void __fastcall CDOTA_Modifier_Item_Hurricane_Pike::OnCreated(
        CDOTA_Modifier_Item_Hurricane_Pike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_health_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_intellect", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_intellect = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_agility", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->bonus_strength = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_agility = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_strength", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->base_attack_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "base_attack_range", -1, 0);
    return;
  }
LABEL_11:
  this->base_attack_range = 0;
}


// CDOTA_Modifier_Hurricane_Pike_Active::~CDOTA_Modifier_Hurricane_Pike_Active  (line 263, @0x0000000002dbb4d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active::~CDOTA_Modifier_Hurricane_Pike_Active(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FE570;
  this->_vptr_CHorizontalMotionController = &off_46FE860;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Hurricane_Pike_Active::~CDOTA_Modifier_Hurricane_Pike_Active  (line 263, @0x0000000002dbb500, libserver.so)  // inlines: ~CDOTA_Modifier_Hurricane_Pike_Active
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active::~CDOTA_Modifier_Hurricane_Pike_Active(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FE570;
  this->_vptr_CHorizontalMotionController = &off_46FE860;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Hurricane_Pike_Active::IsPurgable  (line 272, @0x0000000002db8820, libserver.so)
bool __fastcall CDOTA_Modifier_Hurricane_Pike_Active::IsPurgable(CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  return 0;
}


// CDOTA_Modifier_Hurricane_Pike_Active::GetAttributes  (line 274, @0x0000000002dbc470, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Hurricane_Pike_Active::GetAttributes(CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Hurricane_Pike_Active::IsHorizontalMotionValidToApply  (line 280, @0x0000000002db8830, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Hurricane_Pike_Active::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Hurricane_Pike_Active::GetEffectName  (line 282, @0x0000000002db8860, libserver.so)
// strings: "particles/items_fx/force_staff.vpcf"
const char *__fastcall CDOTA_Modifier_Hurricane_Pike_Active::GetEffectName(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  return "particles/items_fx/force_staff.vpcf";
}


// CDOTA_Modifier_Hurricane_Pike_Active::GetStatusEffectName  (line 283, @0x0000000002db8870, libserver.so)
// strings: "particles/status_fx/status_effect_forcestaff.vpcf"
const char *__fastcall CDOTA_Modifier_Hurricane_Pike_Active::GetStatusEffectName(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  return "particles/status_fx/status_effect_forcestaff.vpcf";
}


// CDOTA_Modifier_Hurricane_Pike_Active::StatusEffectPriority  (line 284, @0x0000000002db8880, libserver.so)
int __fastcall CDOTA_Modifier_Hurricane_Pike_Active::StatusEffectPriority(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  return 10;
}


// CDOTA_Modifier_Hurricane_Pike_Active::IsMotionController  (line 286, @0x0000000002db8890, libserver.so)
bool __fastcall CDOTA_Modifier_Hurricane_Pike_Active::IsMotionController(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  return 1;
}


// CDOTA_Modifier_Hurricane_Pike_Active::OnCreated  (line 307, @0x0000000002db53c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, Forward, GetLevelSpecialValueFor<int>, Normalized, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CBaseEntity::EntityToWorldTransform, VectorNormalize, CDOTA_BaseNPC::RemoveGesture, CDOTA_Buff::Destroy
// strings: "push_length"
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active::OnCreated(
        CDOTA_Modifier_Hurricane_Pike_Active *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  const matrix3x4_t *v7; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm2_4
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  Vector vec; // [rsp+0h] [rbp-20h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->push_length = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "push_length", -1, 0);
  else
    this->push_length = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0) )
  {
    v6 = CDOTA_Buff::GetParent(this);
    v7 = CBaseEntity::EntityToWorldTransform(v6);
    v8 = v7->m_flMatVal[2][0];
    v9 = v7->m_flMatVal[1][0];
    vec.x = v7->m_flMatVal[0][0];
    vec.z = v8;
    vec.y = v9;
    VectorNormalize(&vec);
    x = vec.x;
    this->m_flEndTime = 0.40000001;
    this->m_vDirection.x = x;
    y = vec.y;
    this->m_flCurTime = 0.0;
    this->m_vDirection.y = y;
    this->m_vDirection.z = vec.z;
    v12 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v12, 1536);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Hurricane_Pike_Active::DeclareFunctions  (line 327, @0x0000000002daad40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Hurricane_Pike_Active::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Hurricane_Pike_Active::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active::DeclareFunctions(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Hurricane_Pike_Active::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Hurricane_Pike_Active::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_Hurricane_Pike_Active::OnDestroy  (line 334, @0x0000000002dabb20, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active::OnDestroy(CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Hurricane_Pike_Active::UpdateHorizontalMotion  (line 341, @0x0000000002dabba0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTALocomotor::IsLeashedMovementPrevented, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::Destroy, CDOTA_BaseNPC::StartGesture, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active::UpdateHorizontalMotion(
        CDOTA_Modifier_Hurricane_Pike_Active *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  __m128i x_low; // xmm3
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm0_4
  vec_t v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v17; // r12d
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm3_4
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  float v22; // [rsp+8h] [rbp-28h]
  float v23; // [rsp+Ch] [rbp-24h]
  float m_flHullRadius; // [rsp+Ch] [rbp-24h]
  Vector vNewLocation; // [rsp+10h] [rbp-20h] BYREF
  Vector v26; // 0:xmm0_8.8,8:xmm1_4.4

  x_low = LODWORD(this->m_vDirection.x);
  v6 = this->m_flCurTime + a3;
  v7 = a3 / this->m_flEndTime;
  this->m_flCurTime = v6;
  v8 = this->push_length * v7;
  *x_low.m128i_i32 = *x_low.m128i_i32 * v8;
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v22 = this->m_vDirection.y * v8;
  v23 = v8 * this->m_vDirection.z;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v12 = v22 + AbsOrigin->y;
  v13 = v23 + AbsOrigin->z;
  vNewLocation.x = v9 + AbsOrigin->x;
  vNewLocation.y = v12;
  vNewLocation.z = v13;
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( !CDOTALocomotor::IsLeashedMovementPrevented(v15, *&vNewLocation.x) )
  {
    v21 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsOrigin(v21, &vNewLocation);
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v17 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  m_flHullRadius = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  v18 = CDOTA_Buff::GetParent(this);
  v26 = *CBaseEntity::GetAbsOrigin(v18);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v17, v26, m_flHullRadius, v19);
  if ( this->m_flCurTime >= this->m_flEndTime )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    v20 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v20, 1602, 0.1, 0.1, 9, 0, 1.0);
  }
}


// CDOTA_Modifier_Hurricane_Pike_Active::OnHorizontalMotionInterrupted  (line 365, @0x0000000002dabae0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Hurricane_Pike_Active *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Hurricane_Pike_Active::GetOverrideAnimation  (line 372, @0x0000000002daad80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Hurricane_Pike_Active::GetOverrideAnimation(
        CDOTA_Modifier_Hurricane_Pike_Active *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Hurricane_Pike_Active::GetActivityTranslationModifiers  (line 378, @0x0000000002dac350, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
// strings: "forcestaff_enemy", "forcestaff_friendly"
ModifierVariant_t __fastcall CDOTA_Modifier_Hurricane_Pike_Active::GetActivityTranslationModifiers(
        CDOTA_Modifier_Hurricane_Pike_Active *const this,
        const CModifierParams *const params)
{
  unsigned __int8 m_Value; // r12
  ModifierVariant_t result; // 0:rax.16

  result = 2uLL;
  if ( params->nActivity == 1508 )
  {
    if ( CDOTA_Buff::GetCaster(this) != 0
      && CDOTA_Buff::GetParent(this) != 0
      && (m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value) == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
    {
      result.m_szVal = "forcestaff_friendly";
      *&result.m_eType = 2;
    }
    else
    {
      result.m_szVal = "forcestaff_enemy";
      *&result.m_eType = 2;
    }
  }
  return result;
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::~CDOTA_Modifier_Hurricane_Pike_Active_Alternate  (line 399, @0x0000000002dbb460, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::~CDOTA_Modifier_Hurricane_Pike_Active_Alternate(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FE8F0;
  this->_vptr_CHorizontalMotionController = &off_46FEBE0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::~CDOTA_Modifier_Hurricane_Pike_Active_Alternate  (line 399, @0x0000000002dbb490, libserver.so)  // inlines: ~CDOTA_Modifier_Hurricane_Pike_Active_Alternate
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::~CDOTA_Modifier_Hurricane_Pike_Active_Alternate(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FE8F0;
  this->_vptr_CHorizontalMotionController = &off_46FEBE0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::IsPurgable  (line 408, @0x0000000002db88a0, libserver.so)
bool __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::IsPurgable(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  return 0;
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetAttributes  (line 410, @0x0000000002dbc480, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetAttributes(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::IsHorizontalMotionValidToApply  (line 416, @0x0000000002db88b0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetEffectName  (line 418, @0x0000000002db88e0, libserver.so)
// strings: "particles/items_fx/force_staff.vpcf"
const char *__fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetEffectName(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  return "particles/items_fx/force_staff.vpcf";
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetStatusEffectName  (line 419, @0x0000000002db88f0, libserver.so)
// strings: "particles/status_fx/status_effect_forcestaff.vpcf"
const char *__fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetStatusEffectName(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  return "particles/status_fx/status_effect_forcestaff.vpcf";
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::StatusEffectPriority  (line 420, @0x0000000002db8900, libserver.so)
int __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::StatusEffectPriority(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  return 10;
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::IsMotionController  (line 422, @0x0000000002db8910, libserver.so)
bool __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::IsMotionController(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  return 1;
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::OnCreated  (line 443, @0x0000000002db52b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, KeyValues::GetFloat, CDOTA_BaseNPC::RemoveGesture, CDOTA_Buff::Destroy
// strings: "enemy_length"
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::OnCreated(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  vec_t x; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->enemy_length = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "enemy_length", -1, 0);
  else
    this->enemy_length = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v6 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v6, &this->CHorizontalMotionController, 0) )
  {
    x = KeyValues::GetFloat(pKV, "vecX", v7);
    this->m_vDirection.y = KeyValues::GetFloat(pKV, "vecY", v8);
    this->m_vDirection.x = x;
    this->m_vDirection.z = 0.0;
    this->m_flEndTime = 0.2;
    this->m_flCurTime = 0.0;
    v9 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v9, 1536);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::DeclareFunctions  (line 466, @0x0000000002daada0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::DeclareFunctions(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::OnDestroy  (line 473, @0x0000000002dabb60, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::OnDestroy(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::UpdateHorizontalMotion  (line 480, @0x0000000002dabd60, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTALocomotor::IsLeashedMovementPrevented, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::Destroy, CDOTA_BaseNPC::StartGesture, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::UpdateHorizontalMotion(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  __m128i x_low; // xmm3
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm0_4
  vec_t v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v17; // r12d
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm3_4
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  float v22; // [rsp+8h] [rbp-28h]
  float v23; // [rsp+Ch] [rbp-24h]
  float m_flHullRadius; // [rsp+Ch] [rbp-24h]
  Vector vNewLocation; // [rsp+10h] [rbp-20h] BYREF
  Vector v26; // 0:xmm0_8.8,8:xmm1_4.4

  x_low = LODWORD(this->m_vDirection.x);
  v6 = this->m_flCurTime + a3;
  v7 = a3 / this->m_flEndTime;
  this->m_flCurTime = v6;
  v8 = this->enemy_length * v7;
  *x_low.m128i_i32 = *x_low.m128i_i32 * v8;
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v22 = this->m_vDirection.y * v8;
  v23 = v8 * this->m_vDirection.z;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v12 = v22 + AbsOrigin->y;
  v13 = v23 + AbsOrigin->z;
  vNewLocation.x = v9 + AbsOrigin->x;
  vNewLocation.y = v12;
  vNewLocation.z = v13;
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( !CDOTALocomotor::IsLeashedMovementPrevented(v15, *&vNewLocation.x) )
  {
    v21 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsOrigin(v21, &vNewLocation);
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v17 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  m_flHullRadius = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  v18 = CDOTA_Buff::GetParent(this);
  v26 = *CBaseEntity::GetAbsOrigin(v18);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v17, v26, m_flHullRadius, v19);
  if ( this->m_flCurTime >= this->m_flEndTime )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    v20 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v20, 1602, 0.1, 0.1, 9, 0, 1.0);
  }
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::OnHorizontalMotionInterrupted  (line 504, @0x0000000002dabb00, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetOverrideAnimation  (line 511, @0x0000000002daade0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetOverrideAnimation(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetActivityTranslationModifiers  (line 517, @0x0000000002dac3d0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
// strings: "forcestaff_enemy", "forcestaff_friendly"
ModifierVariant_t __fastcall CDOTA_Modifier_Hurricane_Pike_Active_Alternate::GetActivityTranslationModifiers(
        CDOTA_Modifier_Hurricane_Pike_Active_Alternate *const this,
        const CModifierParams *const params)
{
  unsigned __int8 m_Value; // r12
  ModifierVariant_t result; // 0:rax.16

  result = 2uLL;
  if ( params->nActivity == 1508 )
  {
    if ( CDOTA_Buff::GetCaster(this) != 0
      && CDOTA_Buff::GetParent(this) != 0
      && (m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value) == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
    {
      result.m_szVal = "forcestaff_friendly";
      *&result.m_eType = 2;
    }
    else
    {
      result.m_szVal = "forcestaff_enemy";
      *&result.m_eType = 2;
    }
  }
  return result;
}


// CDOTA_Modifier_Hurricane_Pike_Range::~CDOTA_Modifier_Hurricane_Pike_Range  (line 537, @0x0000000002dbb410, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Hurricane_Pike_Range::~CDOTA_Modifier_Hurricane_Pike_Range(
        CDOTA_Modifier_Hurricane_Pike_Range *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FEC70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Hurricane_Pike_Range::~CDOTA_Modifier_Hurricane_Pike_Range  (line 537, @0x0000000002dbb430, libserver.so)  // inlines: ~CDOTA_Modifier_Hurricane_Pike_Range
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Hurricane_Pike_Range::~CDOTA_Modifier_Hurricane_Pike_Range(
        CDOTA_Modifier_Hurricane_Pike_Range *const this)
{
  this->_vptr_CDOTA_Buff = &off_46FEC70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Hurricane_Pike_Range::DeclareFunctions  (line 559, @0x0000000002daae00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Hurricane_Pike_Range::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Hurricane_Pike_Range::OnAttack(CModifierParams const&), CDOTA_Modifier_Hurricane_Pike_Range::GetAlwaysAllowAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_Hurricane_Pike_Range::DeclareFunctions(CDOTA_Modifier_Hurricane_Pike_Range *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Hurricane_Pike_Range::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_Hurricane_Pike_Range::OnAttack;
  this->m_Functions[112].__pfn = CDOTA_Modifier_Hurricane_Pike_Range::GetAlwaysAllowAttack;
  this->m_Functions[112].__delta = 0;
}


// CDOTA_Modifier_Hurricane_Pike_Range::GetAlwaysAllowAttack  (line 567, @0x0000000002dae300, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Hurricane_Pike_Range::GetAlwaysAllowAttack(
        CDOTA_Modifier_Hurricane_Pike_Range *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rsi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // rax

  if ( (CDOTA_Buff::GetParent(this)->m_iAttackCapabilities.m_Value & 2) == 0 )
    return 1uLL;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v8 = params->hunit.m_Index;
  if ( v8 + 2 > 1
    && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) != 0
    && (v10 = &v9[params->hunit.m_Index & 0x1FF]) != 0
    && v8 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && BYTE3(v12[7]._vptr_IHandleEntity) != 0
    && m_pInstance == v12 )
  {
    return 0x3F80000000000001uLL;
  }
  else
  {
    return 1uLL;
  }
}


// CDOTA_Modifier_Hurricane_Pike_Range::OnCreated  (line 583, @0x0000000002db5160, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "max_attacks"
void __fastcall CDOTA_Modifier_Hurricane_Pike_Range::OnCreated(
        CDOTA_Modifier_Hurricane_Pike_Range *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax

  this->bActive = 0;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v4 = Ptr[1]) != 0 )
  {
    v5 = (*(v4 + 16) >> 15) - (*(v4 + 48) & 1);
    if ( *(v4 + 16) == -1 )
      v6 = 0x7FFF;
    else
      v6 = *(v4 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v6 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v5 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  this->m_iNumAttacks = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->max_attacks = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_8;
LABEL_11:
    this->bonus_attack_speed = 0;
    goto LABEL_9;
  }
  this->max_attacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_attacks", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_11;
LABEL_8:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_attack_speed", -1, 0);
LABEL_9:
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->max_attacks);
}


// CDOTA_Modifier_Hurricane_Pike_Range::OnAttack  (line 600, @0x0000000002dae8b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Hurricane_Pike_Range::OnAttack(
        CDOTA_Modifier_Hurricane_Pike_Range *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rcx
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rax
  int (**vptr_CDOTA_Buff)(...); // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && (CDOTA_Buff::GetParent(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
        {
          v9 = this->m_hTarget.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = this->m_hTarget.m_Index & 0x7FFF,
                (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)]) == 0)
            || (v12 = &v11[v10 & 0x1FF]) == 0
            || v9 != v12->m_EHandle.m_Index
            || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
            || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
          {
            v13 = 0;
          }
          v14 = params->htarget.m_Index;
          if ( v14 + 2 > 1
            && (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
            && (v16 = &v15[params->htarget.m_Index & 0x1FF]) != 0
            && v14 == v16->m_EHandle.m_Index
            && (v17 = v16->m_pInstance, v16->m_pInstance != 0)
            && BYTE3(v17[7]._vptr_IHandleEntity) != 0
            && v13 == v17 )
          {
            vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
            this->bActive = 1;
            ++this->m_iNumAttacks;
            vptr_CDOTA_Buff[26](this);
            if ( this->m_iNumAttacks >= this->max_attacks )
              CDOTA_Buff::Destroy(this, 0, 0, 0);
          }
          else
          {
            this->bActive = 0;
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Hurricane_Pike_Range::GetModifierAttackSpeedBonus_Constant  (line 631, @0x0000000002dac2e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Hurricane_Pike_Range::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Hurricane_Pike_Range *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->bActive )
  {
    *v2.m128i_i32 = this->bonus_attack_speed;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


