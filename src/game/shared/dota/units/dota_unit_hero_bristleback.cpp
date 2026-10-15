// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:36
class CDOTA_Unit_Hero_Bristleback : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Bristleback(CDOTA_Unit_Hero_Bristleback &);
	CDOTA_Unit_Hero_Bristleback(CDOTA_Unit_Hero_Bristleback &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	CDOTA_Unit_Hero_Bristleback();
	virtual ~CDOTA_Unit_Hero_Bristleback();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:48
class C_CDOTA_Unit_Hero_Bristleback_MapInstall {
	C_CDOTA_Unit_Hero_Bristleback_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:70
class CDOTA_Ability_Bristleback_ViscousNasalGoo : public CDOTABaseAbility {
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
	CDOTA_Ability_Bristleback_ViscousNasalGoo(CDOTA_Ability_Bristleback_ViscousNasalGoo &);
	CDOTA_Ability_Bristleback_ViscousNasalGoo(CDOTA_Ability_Bristleback_ViscousNasalGoo &);
	CDOTA_Ability_Bristleback_ViscousNasalGoo();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetBehavior();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Bristleback_ViscousNasalGoo();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[251] GetBehavior
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[226] GetCastRange
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:86
class C_CDOTA_Ability_Bristleback_ViscousNasalGoo_MapInstall {
	C_CDOTA_Ability_Bristleback_ViscousNasalGoo_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:200
class CDOTA_Modifier_Bristleback_ViscousNasalGoo : public CDOTA_Buff {
public:

private:

	float armor_per_stack;  // +0xba8
	int base_move_slow;  // +0xbac
	int move_slow_per_stack;  // +0xbb0
	int stack_limit;  // +0xbb4
	int m_nFXStackIndex;  // +0xbb8
	CDOTA_Modifier_Bristleback_ViscousNasalGoo();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Bristleback_ViscousNasalGoo();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:308
class CDOTA_Ability_Bristleback_QuillSpray : public CDOTABaseAbility {
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
	CDOTA_Ability_Bristleback_QuillSpray(CDOTA_Ability_Bristleback_QuillSpray &);
	CDOTA_Ability_Bristleback_QuillSpray(CDOTA_Ability_Bristleback_QuillSpray &);
	CDOTA_Ability_Bristleback_QuillSpray();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Bristleback_QuillSpray();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:329
class C_CDOTA_Ability_Bristleback_QuillSpray_MapInstall {
	C_CDOTA_Ability_Bristleback_QuillSpray_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:377
class CDOTA_Modifier_Bristleback_QuillSpray_Thinker : public CDOTA_Buff {
public:

private:

	float m_fCurRadius;  // +0xba8
	float m_fLastThink;  // +0xbac

	int projectile_speed;  // +0xbe0
	int radius;  // +0xbe4
	CDOTA_Modifier_Bristleback_QuillSpray_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Bristleback_QuillSpray_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 3048
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:532
class CDOTA_Modifier_Bristleback_QuillSpray : public CDOTA_Buff {
public:

private:

	int m_nFXIndex;  // +0xba8
	CDOTA_Modifier_Bristleback_QuillSpray();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnRefresh(KeyValues *);
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Bristleback_QuillSpray();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[58] OnRefresh
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:593
class CDOTA_Modifier_Bristleback_QuillSprayStack : public CDOTA_Buff {
public:

	CDOTA_Modifier_Bristleback_QuillSprayStack();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Bristleback_QuillSprayStack();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[7] GetAttributes
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:629
class CDOTA_Ability_Bristleback_Bristleback : public CDOTABaseAbility {
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
	CDOTA_Ability_Bristleback_Bristleback(CDOTA_Ability_Bristleback_Bristleback &);
	CDOTA_Ability_Bristleback_Bristleback(CDOTA_Ability_Bristleback_Bristleback &);
	CDOTA_Ability_Bristleback_Bristleback();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Bristleback_Bristleback();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:643
class CDOTA_Modifier_Bristleback_Bristleback : public CDOTA_Buff {
public:

private:

	int side_damage_reduction;  // +0xba8
	int back_damage_reduction;  // +0xbac
	int side_angle;  // +0xbb0
	int back_angle;  // +0xbb4
	float quill_release_threshold;  // +0xbb8
	bool m_bRearHit;  // +0xbbc
	bool m_bSideHit;  // +0xbbd

	float m_flDamageAccumulated;  // +0xbc0
	CDOTA_Modifier_Bristleback_Bristleback();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Bristleback_Bristleback();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:821
class CDOTA_Ability_Bristleback_Warpath : public CDOTABaseAbility {
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
	CDOTA_Ability_Bristleback_Warpath(CDOTA_Ability_Bristleback_Warpath &);
	CDOTA_Ability_Bristleback_Warpath(CDOTA_Ability_Bristleback_Warpath &);
	CDOTA_Ability_Bristleback_Warpath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Bristleback_Warpath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:836
class CDOTA_Modifier_Bristleback_Warpath : public CDOTA_Buff {
public:

private:

	int base_damage;  // +0xba8
	int damage_per_stack;  // +0xbac
	int base_move_speed;  // +0xbb0
	int move_speed_per_stack;  // +0xbb4
	int max_stacks;  // +0xbb8
	float stack_duration;  // +0xbbc
	float m_flDuration;  // +0xbc0
	CDOTA_Modifier_Bristleback_Warpath();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool DestroyOnExpire();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual ~CDOTA_Modifier_Bristleback_Warpath();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[61] DestroyOnExpire
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_bristleback.cpp:1010
class CDOTA_Modifier_Bristleback_Warpath_Stack : public CDOTA_Buff {
public:

	CDOTA_Modifier_Bristleback_Warpath_Stack();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Bristleback_Warpath_Stack();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[7] GetAttributes
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Bristleback::~CDOTA_Unit_Hero_Bristleback  (line 36, @0x0000000002c99b90, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Bristleback::~CDOTA_Unit_Hero_Bristleback(CDOTA_Unit_Hero_Bristleback *const this)
{
  this->_vptr_IHandleEntity = &off_458ACB0;
  this->_vptr_INextBotEventResponder = &off_458BC90;
  this->_vptr_CObstructionObject = &off_458BFC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Bristleback::~CDOTA_Unit_Hero_Bristleback  (line 36, @0x0000000002c99bd0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Bristleback
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Bristleback::~CDOTA_Unit_Hero_Bristleback(CDOTA_Unit_Hero_Bristleback *const this)
{
  this->_vptr_IHandleEntity = &off_458ACB0;
  this->_vptr_INextBotEventResponder = &off_458BC90;
  this->_vptr_CObstructionObject = &off_458BFC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Bristleback::Schema_DynamicBinding  (line 38, @0x0000000002c86fd0, libserver.so)
// globals: CDOTA_Unit_Hero_Bristleback::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Bristleback::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Bristleback *const this)
{
  return CDOTA_Unit_Hero_Bristleback::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 38, @0x0000000002c87000, libserver.so)
// globals: CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::DestructInstance  (line 38, @0x0000000002c87010, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Bristleback>
void __fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::FreeInstance  (line 38, @0x0000000002c87030, libserver.so)
void __fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::CanAllocate  (line 38, @0x0000000002c87050, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 38, @0x0000000002c87060, libserver.so)
// globals: CDOTA_Unit_Hero_Bristleback::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Bristleback::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::AllocateInstance  (line 38, @0x0000000002c8f260, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::ConstructInstance  (line 38, @0x0000000002c93e10, libserver.so)  // inlines: CDOTA_Unit_Hero_Bristleback, Construct<CDOTA_Unit_Hero_Bristleback>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_458ACB0;
    *(p + 236) = &off_458BC90;
    *(p + 257) = &off_458BFC0;
  }
  return p;
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002ca3650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002ca3810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal  (line 38, @0x0000000002cbdec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_bristleback", "CDOTA_Unit_Hero_Bristleback"
// globals: `guard variable for'CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass, CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass, __dso_handle, CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo, CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass);
    CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass._vptr_CEntityClass = off_458AC30;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_BristlebackClass != 0 )
    return &CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo,
      "CDOTA_Unit_Hero_Bristleback",
      "npc_dota_hero_bristleback",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo);
  }
  CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass.m_pClassInfo = &CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo;
  CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_BristlebackClass = &CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass;
  CDOTA_Unit_Hero_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BristlebackClassInfo.m_pClass = &CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass;
  CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_BristlebackClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BristlebackClass;
}


// CDOTA_Unit_Hero_Bristleback::YouForgotToImplementOrDeclareServerClass  (line 48, @0x0000000002c1b8b0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Bristleback::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Bristleback *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Bristleback::GetServerClass  (line 48, @0x0000000002c35bf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Bristleback::GetServerClass(CDOTA_Unit_Hero_Bristleback *const this)
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


// CDOTA_Unit_Hero_Bristleback::Precache  (line 56, @0x0000000002c22550, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/units/heroes/hero_queenofpain/queen_scream_of_pain.vpcf"
void __fastcall CDOTA_Unit_Hero_Bristleback::Precache(
        CDOTA_Unit_Hero_Bristleback *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_queenofpain/queen_scream_of_pain.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::~CDOTA_Ability_Bristleback_ViscousNasalGoo  (line 70, @0x0000000002c97de0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::~CDOTA_Ability_Bristleback_ViscousNasalGoo(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this)
{
  this->_vptr_IHandleEntity = &off_458C090;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::~CDOTA_Ability_Bristleback_ViscousNasalGoo  (line 70, @0x0000000002c97e00, libserver.so)  // inlines: ~CDOTA_Ability_Bristleback_ViscousNasalGoo
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::~CDOTA_Ability_Bristleback_ViscousNasalGoo(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this)
{
  this->_vptr_IHandleEntity = &off_458C090;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::Schema_DynamicBinding  (line 72, @0x0000000002c87070, libserver.so)
// globals: CDOTA_Ability_Bristleback_ViscousNasalGoo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::Schema_DynamicBinding(
        const CDOTA_Ability_Bristleback_ViscousNasalGoo *const this)
{
  return CDOTA_Ability_Bristleback_ViscousNasalGoo::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 72, @0x0000000002c87080, libserver.so)
// globals: CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::DestructInstance  (line 72, @0x0000000002c87090, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bristleback_ViscousNasalGoo>
void __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::FreeInstance  (line 72, @0x0000000002c870b0, libserver.so)
void __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::CanAllocate  (line 72, @0x0000000002c870d0, libserver.so)
bool __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 72, @0x0000000002c870e0, libserver.so)
// globals: CDOTA_Ability_Bristleback_ViscousNasalGoo::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bristleback_ViscousNasalGoo::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::AllocateInstance  (line 72, @0x0000000002c8f2a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::ConstructInstance  (line 72, @0x0000000002c94610, libserver.so)  // inlines: CDOTA_Ability_Bristleback_ViscousNasalGoo, Construct<CDOTA_Ability_Bristleback_ViscousNasalGoo>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_458C090;
  }
  return p;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 72, @0x0000000002ca1850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 72, @0x0000000002ca1870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal  (line 72, @0x0000000002cb8970, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "bristleback_viscous_nasal_goo", "CDOTA_Ability_Bristleback_ViscousNasalGoo"
// globals: `guard variable for'CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass, CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass, __dso_handle, CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo, CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass);
    CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass._vptr_CEntityClass = off_458C010;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass);
    __cxa_atexit(
      CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bristleback_ViscousNasalGooClass != 0 )
    return &CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass;
  if ( `guard variable for'CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo,
      "CDOTA_Ability_Bristleback_ViscousNasalGoo",
      "bristleback_viscous_nasal_goo",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo);
  }
  CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass.m_pClassInfo = &CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo;
  CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass.m_pBaseClassInfo = CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bristleback_ViscousNasalGooClass = &CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass;
  CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClassInfo.m_pClass = &CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass;
  CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bristleback_ViscousNasalGooClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bristleback_ViscousNasalGoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_ViscousNasalGooClass;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::GetCastRange  (line 80, @0x0000000002cb7760, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
int __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::GetCastRange(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::YouForgotToImplementOrDeclareServerClass  (line 86, @0x0000000002c1b8c0, libserver.so)
int __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this)
{
  return 0;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::GetServerClass  (line 86, @0x0000000002c34ef0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::GetServerClass(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this)
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


// CDOTA_Ability_Bristleback_ViscousNasalGoo::GetBehavior  (line 95, @0x0000000002c1fa60, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::GetBehavior(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 134217732;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::OnSpellStart  (line 107, @0x0000000002c6b870, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, DOTA_EmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTABaseAbility::GetCursorTarget, __stack_chk_fail, _Unwind_Resume
// strings: "Hero_Bristleback.ViscousGoo.Cast", "goo_speed", "particles/units/heroes/hero_bristleback/bristleback_viscous_nasal_goo.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::OnSpellStart(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __m128i v3; // xmm0
  float v4; // r14d
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r12
  int i; // ebx
  CDOTA_BaseNPC *v11; // rax
  CEntityInstance *m_pInstance; // r14
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rax
  int v20; // edx
  __int16 v21; // cx
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  vec_t v27; // xmm0_4
  CDOTA_BaseNPC *v28; // rax
  CEntityIdentity *v29; // rdx
  __int16 v30; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v32; // rdx
  __int16 v33; // cx
  CDOTA_BaseNPC *v34; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+40h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+A8h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    *v3.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "radius_scepter", -1, 0);
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v5, v4, &entities, 2, 3, 400, 0, 0);
    v9 = 0;
    for ( i = 0; entities.m_Size > i; ++v9 )
    {
      v22 = &entities.m_Memory.m_pMemory[v9];
      m_Index = entities.m_Memory.m_pMemory[v9].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v24 = v22->m_Index;
        v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[v24 & 0x1FF];
          if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
          {
            m_pInstance = v26->m_pInstance;
            if ( v26->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              info.bProvidesVision = 0;
              info.hSource.m_Index = -1;
              info.hTarget.m_Index = -1;
              info.bDrawsOnMinimap = 0;
              info.colorGemColor = 0;
              info.vSourceLoc.x = vec3_origin.x;
              y = vec3_origin.y;
              info.pAttackRecord = 0;
              info.vSourceLoc.y = y;
              z = vec3_origin.z;
              info.iMoveSpeed = 0;
              info.vSourceLoc.z = z;
              info.iSourceAttachment = 1;
              info.iVisionTeamNumber = -1;
              info.iVisionRadius = 0;
              info.bDodgeable = 1;
              info.bIsAttack = 0;
              info.bVisibleToEnemies = 1;
              info.pKVExtraData = 0;
              info.bReplaceExisting = 0;
              info.flExpireTime = 0.0;
              info.flMaxImpactTime = 0.0;
              info.bServerOnly = 0;
              info.pszEffectName = "particles/units/heroes/hero_bristleback/bristleback_viscous_nasal_goo.vpcf";
              info.pAbility = this;
              info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "goo_speed", -1, 0);
              v15 = CDOTABaseAbility::GetCaster(this);
              if ( v15 != 0 && (m_pEntity = v15->m_pEntity) != 0 )
              {
                v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v18 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(info.hSource.m_Index) = v18 | info.hSource.m_Index & 0x8000;
                info.hSource.m_Index = (v17 << 15) | info.hSource.m_Index & 0x7FFF;
              }
              else
              {
                info.hSource.m_Index = -1;
              }
              v19 = m_pInstance->m_pEntity;
              if ( v19 != 0 )
              {
                v20 = (v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1);
                v21 = 0x7FFF;
                if ( v19->m_EHandle.m_Index != -1 )
                  v21 = v19->m_EHandle.m_Index & 0x7FFF;
                LOWORD(info.hTarget.m_Index) = v21 | info.hTarget.m_Index & 0x8000;
                info.hTarget.m_Index = (v20 << 15) | info.hTarget.m_Index & 0x7FFF;
              }
              else
              {
                info.hTarget.m_Index = -1;
              }
              info.iSourceAttachment = 4;
              CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
            }
          }
        }
      }
      ++i;
    }
    v11 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Bristleback.ViscousGoo.Cast", v11);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  else
  {
    info.bProvidesVision = 0;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.bDrawsOnMinimap = 0;
    info.colorGemColor = 0;
    info.vSourceLoc.x = vec3_origin.x;
    v27 = vec3_origin.y;
    info.pAttackRecord = 0;
    info.vSourceLoc.y = v27;
    info.vSourceLoc.z = vec3_origin.z;
    info.iSourceAttachment = 1;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_bristleback/bristleback_viscous_nasal_goo.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "goo_speed", -1, 0);
    v28 = CDOTABaseAbility::GetCaster(this);
    if ( v28 != 0 && (v29 = v28->m_pEntity) != 0 )
    {
      v30 = 0x7FFF;
      if ( v29->m_EHandle.m_Index != -1 )
        v30 = v29->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1)) << 15) | v30 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget != 0 && (v32 = CursorTarget->m_pEntity) != 0 )
    {
      v33 = 0x7FFF;
      if ( v32->m_EHandle.m_Index != -1 )
        v33 = v32->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1)) << 15) | v33 & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.iSourceAttachment = 4;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v34 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Bristleback.ViscousGoo.Cast", v34);
  }
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::OnProjectileHit  (line 156, @0x0000000002c53ce0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, InState, IndexToIdentity, IsConsideredHero, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, CDOTA_BaseNPC::TriggerSpellAbsorb, _Unwind_Resume
// strings: "goo_duration", "goo_duration_creep", "modifier_bristleback_viscous_nasal_goo", "Hero_Bristleback.ViscousGoo.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::OnProjectileHit(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  v4 = *hTarget;
  if ( (*hTarget + 2) > 1 )
  {
    v5 = *hTarget;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0 && (m_Value & 0x200) == 0 )
          {
            Caster = CDOTABaseAbility::GetCaster(this);
            if ( CDOTA_BaseNPC::HasScepter(Caster) || !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
            {
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "goo_duration", -1, 0);
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "goo_duration_creep", -1, 0);
              KeyValues::KeyValues(&kv, "modifier_bristleback_viscous_nasal_goo");
              KeyValues::SetFloat(&kv, "duration", v12);
              v13 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v13, this, "modifier_bristleback_viscous_nasal_goo", &kv, 0);
              DOTA_EmitSound(10, "Hero_Bristleback.ViscousGoo.Target", m_pInstance);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Bristleback_ViscousNasalGoo::GetSlowDuration  (line 191, @0x0000000002c55f10, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "goo_duration"
float __fastcall CDOTA_Ability_Bristleback_ViscousNasalGoo::GetSlowDuration(
        CDOTA_Ability_Bristleback_ViscousNasalGoo *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "goo_duration", -1, 1);
}


// CDOTA_Modifier_Bristleback_ViscousNasalGoo::~CDOTA_Modifier_Bristleback_ViscousNasalGoo  (line 200, @0x0000000002c933c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bristleback_ViscousNasalGoo::~CDOTA_Modifier_Bristleback_ViscousNasalGoo(
        CDOTA_Modifier_Bristleback_ViscousNasalGoo *const this)
{
  this->_vptr_CDOTA_Buff = &off_458CB50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bristleback_ViscousNasalGoo::~CDOTA_Modifier_Bristleback_ViscousNasalGoo  (line 200, @0x0000000002c933e0, libserver.so)  // inlines: ~CDOTA_Modifier_Bristleback_ViscousNasalGoo
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bristleback_ViscousNasalGoo::~CDOTA_Modifier_Bristleback_ViscousNasalGoo(
        CDOTA_Modifier_Bristleback_ViscousNasalGoo *const this)
{
  this->_vptr_CDOTA_Buff = &off_458CB50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bristleback_ViscousNasalGoo::IsDebuff  (line 205, @0x0000000002c870f0, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_ViscousNasalGoo::IsDebuff(
        CDOTA_Modifier_Bristleback_ViscousNasalGoo *const this)
{
  return 1;
}


// CDOTA_Modifier_Bristleback_ViscousNasalGoo::OnCreated  (line 227, @0x0000000002c73bd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "particles/units/heroes/hero_bristleback/bristleback_viscous_nasal_goo_debuff.vpcf", "armor_per_stack", "base_move_slow", "move_slow_per_stack", "stack_limit"
void __fastcall CDOTA_Modifier_Bristleback_ViscousNasalGoo::OnCreated(
        CDOTA_Modifier_Bristleback_ViscousNasalGoo *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  (*(this->_vptr_CDOTA_Buff + 28))(this, 1);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_bristleback/bristleback_viscous_nasal_goo_debuff.vpcf",
               1,
               Parent,
               0,
               0);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->armor_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "armor_per_stack", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->armor_per_stack = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
    {
LABEL_3:
      this->base_move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "base_move_slow", -1, 0);
      v8 = CDOTA_Buff::GetAbility(this);
      if ( v8 != 0 )
        goto LABEL_4;
LABEL_8:
      this->move_slow_per_stack = 0;
      v9 = CDOTA_Buff::GetAbility(this);
      if ( v9 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->base_move_slow = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_8;
LABEL_4:
  this->move_slow_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "move_slow_per_stack", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_5:
    this->stack_limit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "stack_limit", -1, 0);
    return;
  }
LABEL_9:
  this->stack_limit = 0;
}


// CDOTA_Modifier_Bristleback_ViscousNasalGoo::OnRefresh  (line 252, @0x0000000002c72a50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "special_bonus_unique_bristleback", "armor_per_stack", "move_slow_per_stack"
void __fastcall CDOTA_Modifier_Bristleback_ViscousNasalGoo::OnRefresh(
        CDOTA_Modifier_Bristleback_ViscousNasalGoo *const this,
        KeyValues *pKV)
{
  int stack_limit; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v7; // rax

  stack_limit = this->stack_limit;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_bristleback", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    stack_limit += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  if ( stack_limit > (*(this->_vptr_CDOTA_Buff + 27))(this) )
    (*(this->_vptr_CDOTA_Buff + 25))(this);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->armor_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "armor_per_stack", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
    {
LABEL_8:
      this->move_slow_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "move_slow_per_stack", -1, 0);
      return;
    }
  }
  else
  {
    this->armor_per_stack = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_8;
  }
  this->move_slow_per_stack = 0;
}


// CDOTA_Modifier_Bristleback_ViscousNasalGoo::DeclareFunctions  (line 282, @0x0000000002c1b8d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bristleback_ViscousNasalGoo::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Bristleback_ViscousNasalGoo::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bristleback_ViscousNasalGoo::DeclareFunctions(
        CDOTA_Modifier_Bristleback_ViscousNasalGoo *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Bristleback_ViscousNasalGoo::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Bristleback_ViscousNasalGoo::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Bristleback_ViscousNasalGoo::GetModifierPhysicalArmorBonus  (line 290, @0x0000000002c1b910, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bristleback_ViscousNasalGoo::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Bristleback_ViscousNasalGoo *const this,
        const CModifierParams *const params)
{
  int v2; // eax
  __int64 v3; // xmm0_8
  unsigned int v5; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  *&v5 = -this->armor_per_stack;
  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  v3 = v5;
  result.m_szVal = 0;
  *&v3 = *&v5 * v2;
  *&result.m_eType = (v3 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Bristleback_ViscousNasalGoo::GetModifierMoveSpeedBonus_Percentage  (line 297, @0x0000000002c1b960, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bristleback_ViscousNasalGoo::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Bristleback_ViscousNasalGoo *const this,
        const CModifierParams *const params)
{
  int move_slow_per_stack; // r12d
  int base_move_slow; // ebx
  __m128i v4; // xmm0
  int v5; // eax
  ModifierVariant_t result; // 0:rax.16

  move_slow_per_stack = this->move_slow_per_stack;
  base_move_slow = this->base_move_slow;
  v4 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v4.m128i_i32 = (-base_move_slow - v5 * move_slow_per_stack);
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Ability_Bristleback_QuillSpray::~CDOTA_Ability_Bristleback_QuillSpray  (line 308, @0x0000000002c97e30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bristleback_QuillSpray::~CDOTA_Ability_Bristleback_QuillSpray(
        CDOTA_Ability_Bristleback_QuillSpray *const this)
{
  this->_vptr_IHandleEntity = &off_458CEB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bristleback_QuillSpray::~CDOTA_Ability_Bristleback_QuillSpray  (line 308, @0x0000000002c97e50, libserver.so)  // inlines: ~CDOTA_Ability_Bristleback_QuillSpray
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bristleback_QuillSpray::~CDOTA_Ability_Bristleback_QuillSpray(
        CDOTA_Ability_Bristleback_QuillSpray *const this)
{
  this->_vptr_IHandleEntity = &off_458CEB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bristleback_QuillSpray::Schema_DynamicBinding  (line 310, @0x0000000002c87100, libserver.so)
// globals: CDOTA_Ability_Bristleback_QuillSpray::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bristleback_QuillSpray::Schema_DynamicBinding(
        const CDOTA_Ability_Bristleback_QuillSpray *const this)
{
  return CDOTA_Ability_Bristleback_QuillSpray::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 310, @0x0000000002c87110, libserver.so)
// globals: CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::DestructInstance  (line 310, @0x0000000002c87120, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bristleback_QuillSpray>
void __fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::FreeInstance  (line 310, @0x0000000002c87140, libserver.so)
void __fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::CanAllocate  (line 310, @0x0000000002c87160, libserver.so)
bool __fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 310, @0x0000000002c87170, libserver.so)
// globals: CDOTA_Ability_Bristleback_QuillSpray::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bristleback_QuillSpray::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::AllocateInstance  (line 310, @0x0000000002c8f2e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::ConstructInstance  (line 310, @0x0000000002c94640, libserver.so)  // inlines: CDOTA_Ability_Bristleback_QuillSpray, Construct<CDOTA_Ability_Bristleback_QuillSpray>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_458CEB0;
  }
  return p;
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 310, @0x0000000002ca18a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 310, @0x0000000002ca18c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal  (line 310, @0x0000000002cbe950, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "bristleback_quill_spray", "CDOTA_Ability_Bristleback_QuillSpray"
// globals: `guard variable for'CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass, CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo, CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass) != 0 )
  {
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pClassInfo = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_flags = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pInputs = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_nInputCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pOutputs = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_nOutputCount = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pGameClass = 0;
    CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass._vptr_CEntityClass = off_458CE30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass);
    __cxa_atexit(
      CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bristleback_QuillSprayClass != 0 )
    return &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass;
  if ( `guard variable for'CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo,
      "CDOTA_Ability_Bristleback_QuillSpray",
      "bristleback_quill_spray",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo);
  }
  CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pClassInfo = &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo;
  CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pBaseClassInfo = CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bristleback_QuillSprayClass = &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass;
  CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClassInfo.m_pClass = &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass;
  CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bristleback_QuillSprayClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bristleback_QuillSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_QuillSprayClass;
}


// CDOTA_Ability_Bristleback_QuillSpray::YouForgotToImplementOrDeclareServerClass  (line 329, @0x0000000002c1b9a0, libserver.so)
int __fastcall CDOTA_Ability_Bristleback_QuillSpray::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Bristleback_QuillSpray *const this)
{
  return 0;
}


// CDOTA_Ability_Bristleback_QuillSpray::GetServerClass  (line 329, @0x0000000002c356f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Bristleback_QuillSpray::GetServerClass(
        CDOTA_Ability_Bristleback_QuillSpray *const this)
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


// CDOTA_Ability_Bristleback_QuillSpray::OnSpellStart  (line 339, @0x0000000002c1fe10, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, KeyValues::KeyValues, Thinker_Create, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "particles/units/heroes/hero_bristleback/bristleback_quill_spray.vpcf", "Hero_Bristleback.QuillSpray.Cast", "modifier_bristleback_quillspray_thinker"
void __fastcall CDOTA_Ability_Bristleback_QuillSpray::OnSpellStart(CDOTA_Ability_Bristleback_QuillSpray *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v7; // r14
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  Vector *v12; // r13
  CDOTA_BaseNPC *v13; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1511, 0.0, 0.0, 0, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v3) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_bristleback/bristleback_quill_spray.vpcf",
                  2,
                  0,
                  0,
                  v3);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, v3, 0, v7, 1, 0, *AbsOrigin, 1);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, v3);
  v10 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Bristleback.QuillSpray.Cast", v10);
  KeyValues::KeyValues(&kv, "modifier_bristleback_quillspray_thinker");
  LODWORD(v7) = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v13, this, "modifier_bristleback_quillspray_thinker", &kv, *v12, v7, 0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Bristleback_QuillSpray::GetAbilityDamageToTargetOverInterval  (line 357, @0x0000000002c61d10, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "quill_base_damage", "quill_stack_damage", "modifier_bristleback_quill_spray"
__int64 __fastcall CDOTA_Ability_Bristleback_QuillSpray::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Bristleback_QuillSpray *const this,
        CDOTA_BaseNPC *pTarget,
        float fDuration,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // eax
  CDOTA_Ability_Bristleback_QuillSpray *v8; // rdi
  int v9; // r13d
  int v10; // r12d
  int v11; // r14d
  CDOTA_Buff *ModifierByName; // rax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "quill_base_damage", -1, 1);
    v8 = this;
    v9 = LevelSpecialValue;
    v10 = 0;
    v11 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "quill_stack_damage", -1, 1);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_bristleback_quill_spray", 0);
    if ( ModifierByName != 0 )
      v10 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) * v11;
    return ((v9 + v10) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Modifier_Bristleback_QuillSpray_Thinker::~CDOTA_Modifier_Bristleback_QuillSpray_Thinker  (line 377, @0x0000000002cb6800, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray_Thinker::~CDOTA_Modifier_Bristleback_QuillSpray_Thinker(
        CDOTA_Modifier_Bristleback_QuillSpray_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_458D970;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_entitiesHit);
  if ( (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory),
        (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Bristleback_QuillSpray_Thinker::~CDOTA_Modifier_Bristleback_QuillSpray_Thinker  (line 377, @0x0000000002cb6ea0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Bristleback_QuillSpray_Thinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray_Thinker::~CDOTA_Modifier_Bristleback_QuillSpray_Thinker(
        CDOTA_Modifier_Bristleback_QuillSpray_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_458D970;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_entitiesHit);
  if ( (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory);
    if ( (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bristleback_QuillSpray_Thinker::IsHidden  (line 385, @0x0000000002c87180, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_QuillSpray_Thinker::IsHidden(
        CDOTA_Modifier_Bristleback_QuillSpray_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Bristleback_QuillSpray_Thinker::OnCreated  (line 407, @0x0000000002c720c0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CountdownTimer::Now
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray_Thinker::OnCreated(
        CDOTA_Modifier_Bristleback_QuillSpray_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->projectile_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "projectile_speed", -1, 0);
  else
    this->projectile_speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
  else
    this->radius = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v5);
  v6 = 0.0;
  this->m_fCurRadius = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fLastThink = v6;
  v7 = CountdownTimer::Now(&this->m_ViewerTimer) + 0.2;
  if ( v7 != this->m_ViewerTimer.m_timestamp.m_Value )
  {
    v8 = v7;
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_timestamp.m_Value = v8;
  }
  if ( this->m_ViewerTimer.m_duration.m_Value != 0.2 )
  {
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_duration.m_Value = 0.2;
  }
}


// CDOTA_Modifier_Bristleback_QuillSpray_Thinker::OnIntervalThink  (line 422, @0x0000000002c7d4f0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetGameTime, GetInstance, GetTeamNumber, GrowMemory, ToDOTABaseNPC, operator CBaseEntity*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CDOTA_BaseNPC::FindModifierByName, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat (24 total)
// strings: "quill_base_damage", "quill_stack_damage", "quill_stack_duration", "max_damage", "modifier_bristleback_quill_spray", "modifier_bristleback_quill_spray_stack" (9 total)
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray_Thinker::OnIntervalThink(
        CDOTA_Modifier_Bristleback_QuillSpray_Thinker *const this)
{
  float projectile_speed; // xmm1_4
  CGameRules *v3; // rax
  float v4; // xmm0_4
  float v5; // xmm1_4
  float radius; // xmm5_4
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // rbx
  int v12; // r12d
  CHandle<CBaseEntity> *v13; // r14
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // r15
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v17; // rax
  CDOTABaseAbility *v18; // rax
  CDOTABaseAbility *v19; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v21; // r14
  int v22; // eax
  CDOTABaseAbility *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm1_4
  CDOTABaseAbility *v26; // r14
  CDOTA_BaseNPC *v27; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v29; // r14
  CDOTA_ParticleManager *v30; // rax
  const Vector *v31; // r14
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // r14
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  __int64 m_Size; // r15
  int v38; // eax
  CHandle<CBaseEntity> *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  float v41; // xmm1_4
  CDOTABaseAbility *v42; // r14
  CDOTA_BaseNPC *v43; // rax
  CDOTA_Buff *v44; // rax
  float v45; // xmm0_4
  CDOTA_BaseNPC *pEnt; // [rsp+40h] [rbp-A0h]
  bool bKillThinker; // [rsp+4Bh] [rbp-95h]
  float nFXIndexB; // [rsp+4Ch] [rbp-94h]
  int nFXIndexBa; // [rsp+4Ch] [rbp-94h]
  float flRadius; // [rsp+58h] [rbp-88h]
  float quill_base_damage; // [rsp+60h] [rbp-80h] BYREF
  float quill_stack_damage; // [rsp+64h] [rbp-7Ch] BYREF
  float quill_stack_duration; // [rsp+68h] [rbp-78h] BYREF
  float max_damage; // [rsp+6Ch] [rbp-74h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+A8h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  projectile_speed = this->projectile_speed;
  v3 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    v4 = ((*&g_pGameRules[18].m_szQuestName[20] - this->m_fLastThink) * projectile_speed) + this->m_fCurRadius;
    this->m_fCurRadius = v4;
    v5 = *&v3[18].m_szQuestName[20];
  }
  else
  {
    v45 = (0.0 - this->m_fLastThink) * projectile_speed;
    v5 = 0.0;
    v4 = v45 + this->m_fCurRadius;
    this->m_fCurRadius = v4;
  }
  radius = this->radius;
  this->m_fLastThink = v5;
  flRadius = radius;
  if ( v4 > radius )
  {
    bKillThinker = 1;
    this->m_fCurRadius = radius;
  }
  else
  {
    bKillThinker = 0;
    flRadius = this->m_fCurRadius;
  }
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v10 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 2, 19, 16, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v13 = &entities.m_Memory.m_pMemory[v11];
        if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
               &this->m_entitiesHit,
               &entities.m_Memory.m_pMemory[v11]) == -1 )
        {
          v14 = CEntityHandle::operator CEntityInstance *(v13);
          v15 = v14;
          if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            DotaRetrieveAbilityValue<float>(Ability, &quill_base_damage, "quill_base_damage");
            v17 = CDOTA_Buff::GetAbility(this);
            DotaRetrieveAbilityValue<float>(v17, &quill_stack_damage, "quill_stack_damage");
            v18 = CDOTA_Buff::GetAbility(this);
            DotaRetrieveAbilityValue<float>(v18, &quill_stack_duration, "quill_stack_duration");
            v19 = CDOTA_Buff::GetAbility(this);
            DotaRetrieveAbilityValue<float>(v19, &max_damage, "max_damage");
            nFXIndexB = quill_base_damage;
            ModifierByName = CDOTA_BaseNPC::FindModifierByName(v15, "modifier_bristleback_quill_spray", 0);
            v21 = ModifierByName;
            if ( ModifierByName != 0 )
            {
              v22 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
              nFXIndexB = fminf(max_damage, (v22 * quill_stack_damage) + nFXIndexB);
              (*(v21->_vptr_CDOTA_Buff + 25))(v21);
              (*(v21->_vptr_CDOTA_Buff + 63))(v21, 1, quill_stack_duration);
            }
            else
            {
              KeyValues::KeyValues(&kv, "modifier_bristleback_quill_spray_stack");
              KeyValues::SetFloat(&kv, "duration", v41);
              v42 = CDOTA_Buff::GetAbility(this);
              v43 = CDOTA_Buff::GetCaster(this);
              v44 = CDOTA_BaseNPC::AddNewModifier(v15, v43, v42, "modifier_bristleback_quill_spray", &kv, 0);
              if ( v44 != 0 )
                (*(v44->_vptr_CDOTA_Buff + 28))(v44, 1);
              KeyValues::~KeyValues(&kv);
            }
            v23 = CDOTA_Buff::GetAbility(this);
            v24 = CDOTA_Buff::GetCaster(this);
            ApplyDamage(v24, v15, v23, nFXIndexB, 1, 8);
            KeyValues::KeyValues(&kv, "modifier_bristleback_quill_spray_stack");
            KeyValues::SetFloat(&kv, "duration", v25);
            v26 = CDOTA_Buff::GetAbility(this);
            v27 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v15, v27, v26, "modifier_bristleback_quill_spray_stack", &kv, 0);
            ParticleManager = GetParticleManager();
            nFXIndexBa = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_bristleback/bristleback_quill_spray_impact.vpcf",
                           2,
                           v15,
                           0,
                           0);
            v29 = CBaseEntity::GetAbsOrigin(v15);
            v30 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v30, nFXIndexBa, 0, v15, 1, 0, *v29, 1);
            v31 = CBaseEntity::GetAbsOrigin(v15);
            v32 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v32, nFXIndexBa, 1, v15, 5, "attach_hitloc", *v31, 1);
            v33 = CDOTA_Buff::GetCaster(this);
            v34 = CBaseEntity::GetAbsOrigin(v33);
            pEnt = CDOTA_Buff::GetCaster(this);
            v35 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v35, nFXIndexBa, 2, pEnt, 1, 0, *v34, 1);
            v36 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v36, nFXIndexBa);
            DOTA_EmitSound(10, "Hero_Bristleback.QuillSpray.Target", v15);
            KeyValues::~KeyValues(&kv);
            v13 = &entities.m_Memory.m_pMemory[v11];
          }
          m_Size = this->m_entitiesHit.m_Size;
          v38 = this->m_entitiesHit.m_Size;
          if ( m_Size == this->m_entitiesHit.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_entitiesHit.m_Memory, 1);
            v38 = this->m_entitiesHit.m_Size;
          }
          this->m_entitiesHit.m_Size = v38 + 1;
          v39 = &this->m_entitiesHit.m_Memory.m_pMemory[m_Size];
          if ( v39 != 0 )
            break;
        }
        ++v12;
        ++v11;
        if ( entities.m_Size <= v12 )
          goto LABEL_18;
      }
      ++v12;
      ++v11;
      v39->m_Index = v13->m_Index;
    }
    while ( entities.m_Size > v12 );
  }
LABEL_18:
  if ( bKillThinker )
  {
    v40 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v40);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Bristleback_QuillSpray_Thinker::CheckState  (line 514, @0x0000000002c1b9b0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray_Thinker::CheckState(
        CDOTA_Modifier_Bristleback_QuillSpray_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800187uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFE78LL;
}


// CDOTA_Modifier_Bristleback_QuillSpray::~CDOTA_Modifier_Bristleback_QuillSpray  (line 532, @0x0000000002c93370, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray::~CDOTA_Modifier_Bristleback_QuillSpray(
        CDOTA_Modifier_Bristleback_QuillSpray *const this)
{
  this->_vptr_CDOTA_Buff = &off_458DC90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bristleback_QuillSpray::~CDOTA_Modifier_Bristleback_QuillSpray  (line 532, @0x0000000002c93390, libserver.so)  // inlines: ~CDOTA_Modifier_Bristleback_QuillSpray
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray::~CDOTA_Modifier_Bristleback_QuillSpray(
        CDOTA_Modifier_Bristleback_QuillSpray *const this)
{
  this->_vptr_CDOTA_Buff = &off_458DC90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bristleback_QuillSpray::IsDebuff  (line 537, @0x0000000002c87190, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_QuillSpray::IsDebuff(CDOTA_Modifier_Bristleback_QuillSpray *const this)
{
  return 1;
}


// CDOTA_Modifier_Bristleback_QuillSpray::IsPurgable  (line 538, @0x0000000002c871a0, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_QuillSpray::IsPurgable(CDOTA_Modifier_Bristleback_QuillSpray *const this)
{
  return 0;
}


// CDOTA_Modifier_Bristleback_QuillSpray::OnCreated  (line 552, @0x0000000002c1b9d0, libserver.so)
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray::OnCreated(
        CDOTA_Modifier_Bristleback_QuillSpray *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Bristleback_QuillSpray::OnRefresh  (line 581, @0x0000000002c1b9e0, libserver.so)
void __fastcall CDOTA_Modifier_Bristleback_QuillSpray::OnRefresh(
        CDOTA_Modifier_Bristleback_QuillSpray *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Bristleback_QuillSprayStack::~CDOTA_Modifier_Bristleback_QuillSprayStack  (line 593, @0x0000000002c93320, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bristleback_QuillSprayStack::~CDOTA_Modifier_Bristleback_QuillSprayStack(
        CDOTA_Modifier_Bristleback_QuillSprayStack *const this)
{
  this->_vptr_CDOTA_Buff = &off_458DFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bristleback_QuillSprayStack::~CDOTA_Modifier_Bristleback_QuillSprayStack  (line 593, @0x0000000002c93340, libserver.so)  // inlines: ~CDOTA_Modifier_Bristleback_QuillSprayStack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bristleback_QuillSprayStack::~CDOTA_Modifier_Bristleback_QuillSprayStack(
        CDOTA_Modifier_Bristleback_QuillSprayStack *const this)
{
  this->_vptr_CDOTA_Buff = &off_458DFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bristleback_QuillSprayStack::IsHidden  (line 598, @0x0000000002c871b0, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_QuillSprayStack::IsHidden(
        CDOTA_Modifier_Bristleback_QuillSprayStack *const this)
{
  return 1;
}


// CDOTA_Modifier_Bristleback_QuillSprayStack::IsPurgable  (line 599, @0x0000000002c871c0, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_QuillSprayStack::IsPurgable(
        CDOTA_Modifier_Bristleback_QuillSprayStack *const this)
{
  return 0;
}


// CDOTA_Modifier_Bristleback_QuillSprayStack::GetAttributes  (line 603, @0x0000000002c871d0, libserver.so)
int __fastcall CDOTA_Modifier_Bristleback_QuillSprayStack::GetAttributes(
        CDOTA_Modifier_Bristleback_QuillSprayStack *const this)
{
  return 2;
}


// CDOTA_Modifier_Bristleback_QuillSprayStack::OnDestroy  (line 611, @0x0000000002c1f4a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_bristleback_quill_spray"
void __fastcall CDOTA_Modifier_Bristleback_QuillSprayStack::OnDestroy(
        CDOTA_Modifier_Bristleback_QuillSprayStack *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_bristleback_quill_spray", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
}


// CDOTA_Ability_Bristleback_Bristleback::~CDOTA_Ability_Bristleback_Bristleback  (line 629, @0x0000000002c97e80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bristleback_Bristleback::~CDOTA_Ability_Bristleback_Bristleback(
        CDOTA_Ability_Bristleback_Bristleback *const this)
{
  this->_vptr_IHandleEntity = &off_458E310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bristleback_Bristleback::~CDOTA_Ability_Bristleback_Bristleback  (line 629, @0x0000000002c97ea0, libserver.so)  // inlines: ~CDOTA_Ability_Bristleback_Bristleback
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bristleback_Bristleback::~CDOTA_Ability_Bristleback_Bristleback(
        CDOTA_Ability_Bristleback_Bristleback *const this)
{
  this->_vptr_IHandleEntity = &off_458E310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bristleback_Bristleback::Schema_DynamicBinding  (line 631, @0x0000000002c871e0, libserver.so)
// globals: CDOTA_Ability_Bristleback_Bristleback::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bristleback_Bristleback::Schema_DynamicBinding(
        const CDOTA_Ability_Bristleback_Bristleback *const this)
{
  return CDOTA_Ability_Bristleback_Bristleback::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 631, @0x0000000002c871f0, libserver.so)
// globals: CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::DestructInstance  (line 631, @0x0000000002c87200, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bristleback_Bristleback>
void __fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::FreeInstance  (line 631, @0x0000000002c87220, libserver.so)
void __fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::CanAllocate  (line 631, @0x0000000002c87240, libserver.so)
bool __fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 631, @0x0000000002c87250, libserver.so)
// globals: CDOTA_Ability_Bristleback_Bristleback::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bristleback_Bristleback::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::AllocateInstance  (line 631, @0x0000000002c8f320, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::ConstructInstance  (line 631, @0x0000000002c94670, libserver.so)  // inlines: CDOTA_Ability_Bristleback_Bristleback, Construct<CDOTA_Ability_Bristleback_Bristleback>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_458E310;
  }
  return p;
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 631, @0x0000000002ca18f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 631, @0x0000000002ca1910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal  (line 631, @0x0000000002cb8ac0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "bristleback_bristleback", "CDOTA_Ability_Bristleback_Bristleback"
// globals: `guard variable for'CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass, CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass, __dso_handle, CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo, CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass);
    CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass._vptr_CEntityClass = off_458E290;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass);
    __cxa_atexit(
      CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bristleback_BristlebackClass != 0 )
    return &CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass;
  if ( `guard variable for'CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo,
      "CDOTA_Ability_Bristleback_Bristleback",
      "bristleback_bristleback",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo);
  }
  CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass.m_pClassInfo = &CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo;
  CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass.m_pBaseClassInfo = CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bristleback_BristlebackClass = &CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass;
  CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClassInfo.m_pClass = &CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass;
  CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bristleback_BristlebackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bristleback_Bristleback::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_BristlebackClass;
}


// CDOTA_Ability_Bristleback_Bristleback::GetIntrinsicModifierName  (line 634, @0x0000000002c87260, libserver.so)
// strings: "modifier_bristleback_bristleback"
const char *__fastcall CDOTA_Ability_Bristleback_Bristleback::GetIntrinsicModifierName(
        CDOTA_Ability_Bristleback_Bristleback *const this)
{
  return "modifier_bristleback_bristleback";
}


// CDOTA_Modifier_Bristleback_Bristleback::~CDOTA_Modifier_Bristleback_Bristleback  (line 643, @0x0000000002c932d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bristleback_Bristleback::~CDOTA_Modifier_Bristleback_Bristleback(
        CDOTA_Modifier_Bristleback_Bristleback *const this)
{
  this->_vptr_CDOTA_Buff = &off_458EDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bristleback_Bristleback::~CDOTA_Modifier_Bristleback_Bristleback  (line 643, @0x0000000002c932f0, libserver.so)  // inlines: ~CDOTA_Modifier_Bristleback_Bristleback
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bristleback_Bristleback::~CDOTA_Modifier_Bristleback_Bristleback(
        CDOTA_Modifier_Bristleback_Bristleback *const this)
{
  this->_vptr_CDOTA_Buff = &off_458EDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bristleback_Bristleback::IsHidden  (line 651, @0x0000000002c87270, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_Bristleback::IsHidden(CDOTA_Modifier_Bristleback_Bristleback *const this)
{
  return 1;
}


// CDOTA_Modifier_Bristleback_Bristleback::OnCreated  (line 674, @0x0000000002c73370, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "side_damage_reduction", "back_damage_reduction", "side_angle", "back_angle", "quill_release_threshold"
void __fastcall CDOTA_Modifier_Bristleback_Bristleback::OnCreated(
        CDOTA_Modifier_Bristleback_Bristleback *const this,
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
    this->side_damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "side_damage_reduction",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->side_damage_reduction = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->back_damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "back_damage_reduction", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->back_damage_reduction = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->side_angle = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "side_angle", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->back_angle = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->quill_release_threshold = 0.0;
    goto LABEL_7;
  }
LABEL_10:
  this->side_angle = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->back_angle = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "back_angle", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->quill_release_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "quill_release_threshold", -1, 0);
LABEL_7:
  this->m_bRearHit = 0;
  this->m_bSideHit = 0;
  this->m_flDamageAccumulated = 0.0;
}


// CDOTA_Modifier_Bristleback_Bristleback::OnRefresh  (line 689, @0x0000000002c72f60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "side_damage_reduction", "back_damage_reduction", "side_angle", "back_angle", "quill_release_threshold"
void __fastcall CDOTA_Modifier_Bristleback_Bristleback::OnRefresh(
        CDOTA_Modifier_Bristleback_Bristleback *const this,
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
    this->side_damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "side_damage_reduction",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->side_damage_reduction = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->back_damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "back_damage_reduction", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->back_damage_reduction = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->side_angle = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "side_angle", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->back_angle = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->side_angle = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->back_angle = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "back_angle", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->quill_release_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v7,
                                      "quill_release_threshold",
                                      -1,
                                      0);
    return;
  }
LABEL_11:
  this->quill_release_threshold = 0.0;
}


// CDOTA_Modifier_Bristleback_Bristleback::DeclareFunctions  (line 700, @0x0000000002c1b9f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bristleback_Bristleback::GetModifierIncomingDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Bristleback_Bristleback::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bristleback_Bristleback::DeclareFunctions(
        CDOTA_Modifier_Bristleback_Bristleback *const this)
{
  this->m_Functions[36].__pfn = CDOTA_Modifier_Bristleback_Bristleback::GetModifierIncomingDamage_Percentage;
  this->m_Functions[36].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Bristleback_Bristleback::OnTakeDamage;
}


// CDOTA_Modifier_Bristleback_Bristleback::GetModifierIncomingDamage_Percentage  (line 708, @0x0000000002c2e4d0, libserver.so)  // inlines: AttackerNPC, DEG2RAD, DotProduct, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ModifierVariant_t, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsAngles, AngleVectors, VectorNormalize, CBaseEntity::GetAbsOrigin, cosf
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bristleback_Bristleback::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Bristleback_Bristleback *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  __m128i v6; // xmm0
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // rax
  const QAngle *AbsAngles; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rax
  vec_t v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  int back_damage_reduction; // eax
  int side_damage_reduction; // eax
  float v20[2]; // [rsp-8h] [rbp-48h] BYREF
  Vector vBristleForward; // [rsp+0h] [rbp-40h] BYREF
  float v22; // [rsp+Ch] [rbp-34h]
  Vector vAttackerForward; // [rsp+10h] [rbp-30h]
  ModifierVariant_t result; // 0:rax.16

  if ( (params->nDamageflags & 0x20) == 0 )
  {
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
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && CDOTA_Buff::GetParent(this) != m_pInstance
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 4) == 0 )
          {
            Parent = CDOTA_Buff::GetParent(this);
            v6 = 0;
            if ( (Parent->m_nUnitState64.m_Value & 0x10000000) != 0 )
              goto LABEL_7;
            v10 = CDOTA_Buff::GetParent(this);
            AbsAngles = CBaseEntity::GetAbsAngles(v10);
            AngleVectors(AbsAngles, v20, 0, 0);
            vBristleForward.x = 0.0;
            VectorNormalize(v20);
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            v13 = CDOTA_Buff::GetParent(this);
            v14 = CBaseEntity::GetAbsOrigin(v13);
            v15 = v14->x - AbsOrigin->x;
            v16 = v14->y - AbsOrigin->y;
            vAttackerForward.x = 0.0;
            vBristleForward.z = v15;
            v22 = v16;
            VectorNormalize(&vBristleForward.z);
            *v6.m128i_i32 = cosf(this->back_angle * 0.017453292);
            v17 = ((vBristleForward.z * v20[0]) + (v22 * v20[1])) + (vAttackerForward.x * vBristleForward.x);
            if ( v17 > *v6.m128i_i32 )
            {
              back_damage_reduction = this->back_damage_reduction;
              this->m_bRearHit = 1;
              *v6.m128i_i32 = -back_damage_reduction;
              goto LABEL_7;
            }
            if ( v17 > cosf(this->side_angle * 0.017453292) )
            {
              side_damage_reduction = this->side_damage_reduction;
              this->m_bSideHit = 1;
              *v6.m128i_i32 = -side_damage_reduction;
              goto LABEL_7;
            }
          }
        }
      }
    }
    v6 = 0;
LABEL_7:
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
    return result;
  }
  return 1uLL;
}


// CDOTA_Modifier_Bristleback_Bristleback::OnTakeDamage  (line 752, @0x0000000002c33890, libserver.so)  // inlines: AttackerNPC, FastRSqrt, FastRSqrtFast, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_BaseNPC::FindAbilityByName
// strings: "particles/units/heroes/hero_bristleback/bristleback_back_dmg.vpcf", "attach_hitloc", "Hero_Bristleback.Bristleback", "particles/units/heroes/hero_bristleback/bristleback_side_dmg.vpcf", "bristleback_quill_spray", "particles/units/heroes/hero_bristleback/bristleback_back_lrg_dmg.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bristleback_Bristleback::OnTakeDamage(
        CDOTA_Modifier_Bristleback_Bristleback *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseAnimating *v11; // r14
  float m_flDamageAccumulated; // xmm0_4
  float v14; // xmm0_4
  bool v15; // cc
  CDOTA_BaseNPC *Parent; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // r12
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rax
  float v28; // xmm3_4
  float v29; // xmm1_4
  float v30; // xmm4_4
  CDOTA_BaseNPC *v31; // r12
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // r13
  CDOTA_BaseNPC *v35; // r15
  CDOTA_ParticleManager *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  const Vector *v38; // r13
  CDOTA_BaseNPC *v39; // r15
  CDOTA_ParticleManager *v40; // rax
  const Vector *v41; // r13
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  const Vector *v44; // rbx
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v49; // r12
  CDOTA_ParticleManager *v50; // rax
  CDOTA_BaseNPC *v51; // rax
  const Vector *v52; // r15
  CDOTA_ParticleManager *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  const Vector *v55; // r15
  CDOTA_ParticleManager *v56; // rax
  const Vector *v57; // r15
  CDOTA_ParticleManager *v58; // rax
  CDOTA_ParticleManager *v59; // rax
  unsigned int v60; // [rsp+Ch] [rbp-54h]
  const Vector *AbsOrigin; // [rsp+10h] [rbp-50h]
  const Vector *v62; // [rsp+10h] [rbp-50h]
  float v63; // [rsp+10h] [rbp-50h]
  CDOTA_BaseNPC *pEnt; // [rsp+18h] [rbp-48h]
  CDOTA_BaseNPC *pEnta; // [rsp+18h] [rbp-48h]
  const Vector *pEntb; // [rsp+18h] [rbp-48h]
  unsigned int pEnte; // [rsp+18h] [rbp-48h]
  CDOTA_BaseNPC *pEntc; // [rsp+18h] [rbp-48h]
  CDOTA_BaseNPC *pEntd; // [rsp+18h] [rbp-48h]

  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[params->hunit.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    v8 = params->hattacker.m_Index;
    if ( v8 + 2 <= 1
      || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v10 = &v9[params->hattacker.m_Index & 0x1FF]) == 0
      || v8 != v10->m_EHandle.m_Index
      || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
      || !v11->m_bIsDOTANPC )
    {
      v11 = 0;
    }
    if ( m_pInstance != 0 )
    {
      if ( m_pInstance != CDOTA_Buff::GetParent(this) || !this->m_bRearHit )
      {
        if ( m_pInstance != CDOTA_Buff::GetParent(this) )
          return 1uLL;
        goto LABEL_21;
      }
      m_flDamageAccumulated = this->m_flDamageAccumulated;
      this->m_bRearHit = 0;
      v14 = m_flDamageAccumulated + params->fDamage;
      v15 = v14 <= this->quill_release_threshold;
      this->m_flDamageAccumulated = v14;
      if ( !v15 )
      {
        this->m_flDamageAccumulated = 0.0;
        if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
        {
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "bristleback_quill_spray", 0);
          if ( AbilityByName != 0 )
            (*(AbilityByName->_vptr_IHandleEntity + 266))(AbilityByName);
        }
      }
      Parent = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/hero_bristleback/bristleback_back_dmg.vpcf",
                          2,
                          Parent,
                          0,
                          0);
      v18 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
      pEnt = CDOTA_Buff::GetParent(this);
      v19 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v19, Parent, 0, pEnt, 1, 0, *AbsOrigin, 1);
      v20 = CDOTA_Buff::GetParent(this);
      v62 = CBaseEntity::GetAbsOrigin(v20);
      pEnta = CDOTA_Buff::GetParent(this);
      v21 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v21, Parent, 1, pEnta, 5, "attach_hitloc", *v62, 1);
      pEntb = CBaseEntity::GetAbsOrigin(v11);
      v22 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v22, Parent, 2, v11, 1, 0, *pEntb, 1);
      v23 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v23, Parent);
      if ( params->fDamage > 125.0 )
      {
        v49 = CDOTA_Buff::GetParent(this);
        v50 = GetParticleManager();
        LODWORD(v49) = CDOTA_ParticleManager::CreateParticle(
                         v50,
                         "particles/units/heroes/hero_bristleback/bristleback_back_lrg_dmg.vpcf",
                         2,
                         v49,
                         0,
                         0);
        v51 = CDOTA_Buff::GetParent(this);
        v52 = CBaseEntity::GetAbsOrigin(v51);
        pEntc = CDOTA_Buff::GetParent(this);
        v53 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v53, v49, 0, pEntc, 1, 0, *v52, 1);
        v54 = CDOTA_Buff::GetParent(this);
        v55 = CBaseEntity::GetAbsOrigin(v54);
        pEntd = CDOTA_Buff::GetParent(this);
        v56 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v56, v49, 1, pEntd, 5, "attach_hitloc", *v55, 1);
        v57 = CBaseEntity::GetAbsOrigin(v11);
        v58 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v58, v49, 2, v11, 1, 0, *v57, 1);
        v59 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v59, v49);
      }
      v24 = CDOTA_Buff::GetParent(this);
      DOTA_EmitSound(10, "Hero_Bristleback.Bristleback", v24);
      if ( m_pInstance == CDOTA_Buff::GetParent(this) )
      {
LABEL_21:
        if ( this->m_bSideHit )
        {
          this->m_bSideHit = 0;
          v25 = CBaseEntity::GetAbsOrigin(v11);
          v26 = CDOTA_Buff::GetParent(this);
          v27 = CBaseEntity::GetAbsOrigin(v26);
          v28 = v27->x - v25->x;
          v29 = v27->y - v25->y;
          v30 = 1.0 / fsqrt((((v28 * v28) + 0.00000011920929) + (v29 * v29)) + 0.0);
          v63 = (0.5 * v30) * (3.0 - ((((((v28 * v28) + 0.00000011920929) + (v29 * v29)) + 0.0) * v30) * v30));
          *&v60 = v28 * v63;
          *&pEnte = v29 * v63;
          v31 = CDOTA_Buff::GetParent(this);
          v32 = GetParticleManager();
          LODWORD(v31) = CDOTA_ParticleManager::CreateParticle(
                           v32,
                           "particles/units/heroes/hero_bristleback/bristleback_side_dmg.vpcf",
                           2,
                           v31,
                           0,
                           0);
          v33 = CDOTA_Buff::GetParent(this);
          v34 = CBaseEntity::GetAbsOrigin(v33);
          v35 = CDOTA_Buff::GetParent(this);
          v36 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v36, v31, 0, v35, 1, 0, *v34, 1);
          v37 = CDOTA_Buff::GetParent(this);
          v38 = CBaseEntity::GetAbsOrigin(v37);
          v39 = CDOTA_Buff::GetParent(this);
          v40 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v40, v31, 1, v39, 5, "attach_hitloc", *v38, 1);
          v41 = CBaseEntity::GetAbsOrigin(v11);
          v42 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v42, v31, 2, v11, 1, 0, *v41, 1);
          v43 = CDOTA_Buff::GetParent(this);
          v44 = CBaseEntity::GetAbsOrigin(v43);
          v45 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v45, v31, 3, *&v44->x, v44->z);
          v46 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlForward(
            v46,
            v31,
            3,
            COERCE_DOUBLE(__PAIR64__(pEnte, v60)),
            0.0 * v63);
          v47 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v47, v31);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Bristleback_Warpath::~CDOTA_Ability_Bristleback_Warpath  (line 821, @0x0000000002c97ed0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bristleback_Warpath::~CDOTA_Ability_Bristleback_Warpath(
        CDOTA_Ability_Bristleback_Warpath *const this)
{
  this->_vptr_IHandleEntity = &off_458F130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bristleback_Warpath::~CDOTA_Ability_Bristleback_Warpath  (line 821, @0x0000000002c97ef0, libserver.so)  // inlines: ~CDOTA_Ability_Bristleback_Warpath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bristleback_Warpath::~CDOTA_Ability_Bristleback_Warpath(
        CDOTA_Ability_Bristleback_Warpath *const this)
{
  this->_vptr_IHandleEntity = &off_458F130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bristleback_Warpath::Schema_DynamicBinding  (line 823, @0x0000000002c87280, libserver.so)
// globals: CDOTA_Ability_Bristleback_Warpath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bristleback_Warpath::Schema_DynamicBinding(
        const CDOTA_Ability_Bristleback_Warpath *const this)
{
  return CDOTA_Ability_Bristleback_Warpath::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 823, @0x0000000002c87290, libserver.so)
// globals: CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::DestructInstance  (line 823, @0x0000000002c872a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bristleback_Warpath>
void __fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::FreeInstance  (line 823, @0x0000000002c872c0, libserver.so)
void __fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::CanAllocate  (line 823, @0x0000000002c872e0, libserver.so)
bool __fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 823, @0x0000000002c872f0, libserver.so)
// globals: CDOTA_Ability_Bristleback_Warpath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bristleback_Warpath::s_pSchemaBinding;
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::AllocateInstance  (line 823, @0x0000000002c8f360, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::ConstructInstance  (line 823, @0x0000000002c946a0, libserver.so)  // inlines: CDOTA_Ability_Bristleback_Warpath, Construct<CDOTA_Ability_Bristleback_Warpath>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_458F130;
  }
  return p;
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 823, @0x0000000002ca1940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 823, @0x0000000002ca1960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal  (line 823, @0x0000000002cb8c10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Bristleback_Warpath"
// globals: `guard variable for'CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass, CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass, __dso_handle, CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo, CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass);
    CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass._vptr_CEntityClass = off_458F0B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass);
    __cxa_atexit(
      CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bristleback_WarpathClass != 0 )
    return &CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass;
  if ( `guard variable for'CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo,
      "CDOTA_Ability_Bristleback_Warpath",
      "bristleback_warpath",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo);
  }
  CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass.m_pClassInfo = &CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo;
  CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass.m_pBaseClassInfo = CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bristleback_WarpathClass = &CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass;
  CDOTA_Ability_Bristleback_Warpath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClassInfo.m_pClass = &CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass;
  CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bristleback_WarpathClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bristleback_Warpath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bristleback_WarpathClass;
}


// CDOTA_Ability_Bristleback_Warpath::GetIntrinsicModifierName  (line 826, @0x0000000002c87300, libserver.so)
// strings: "modifier_bristleback_warpath"
const char *__fastcall CDOTA_Ability_Bristleback_Warpath::GetIntrinsicModifierName(
        CDOTA_Ability_Bristleback_Warpath *const this)
{
  return "modifier_bristleback_warpath";
}


// CDOTA_Modifier_Bristleback_Warpath::~CDOTA_Modifier_Bristleback_Warpath  (line 836, @0x0000000002c93280, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bristleback_Warpath::~CDOTA_Modifier_Bristleback_Warpath(
        CDOTA_Modifier_Bristleback_Warpath *const this)
{
  this->_vptr_CDOTA_Buff = &off_458FBF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bristleback_Warpath::~CDOTA_Modifier_Bristleback_Warpath  (line 836, @0x0000000002c932a0, libserver.so)  // inlines: ~CDOTA_Modifier_Bristleback_Warpath
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bristleback_Warpath::~CDOTA_Modifier_Bristleback_Warpath(
        CDOTA_Modifier_Bristleback_Warpath *const this)
{
  this->_vptr_CDOTA_Buff = &off_458FBF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bristleback_Warpath::DestroyOnExpire  (line 847, @0x0000000002c87310, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_Warpath::DestroyOnExpire(CDOTA_Modifier_Bristleback_Warpath *const this)
{
  return 0;
}


// CDOTA_Modifier_Bristleback_Warpath::OnCreated  (line 870, @0x0000000002c73a00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_per_stack", "base_move_speed", "move_speed_per_stack"
void __fastcall CDOTA_Modifier_Bristleback_Warpath::OnCreated(
        CDOTA_Modifier_Bristleback_Warpath *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->base_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "base_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->base_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_per_stack", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->damage_per_stack = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->base_move_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "base_move_speed", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->base_move_speed = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->move_speed_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "move_speed_per_stack", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_13:
    this->stack_duration = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->max_stacks = 0;
    goto LABEL_8;
  }
LABEL_12:
  this->move_speed_per_stack = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_13;
LABEL_6:
  this->stack_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "stack_duration", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->max_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "max_stacks", -1, 0);
LABEL_8:
  (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
}


// CDOTA_Modifier_Bristleback_Warpath::OnRefresh  (line 883, @0x0000000002c73680, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_per_stack", "base_move_speed", "move_speed_per_stack"
void __fastcall CDOTA_Modifier_Bristleback_Warpath::OnRefresh(
        CDOTA_Modifier_Bristleback_Warpath *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->base_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "base_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->base_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_per_stack", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->damage_per_stack = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->base_move_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "base_move_speed", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->base_move_speed = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->move_speed_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "move_speed_per_stack", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->stack_duration = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->move_speed_per_stack = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->stack_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "stack_duration", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->max_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "max_stacks", -1, 0);
    return;
  }
LABEL_13:
  this->max_stacks = 0;
}


// CDOTA_Modifier_Bristleback_Warpath::DeclareFunctions  (line 895, @0x0000000002c1ba30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bristleback_Warpath::OnAbilityExecuted(CModifierParams const&), CDOTA_Modifier_Bristleback_Warpath::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Bristleback_Warpath::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Bristleback_Warpath::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bristleback_Warpath::DeclareFunctions(CDOTA_Modifier_Bristleback_Warpath *const this)
{
  this->m_Functions[128].__pfn = CDOTA_Modifier_Bristleback_Warpath::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Bristleback_Warpath::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Bristleback_Warpath::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Bristleback_Warpath::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_Bristleback_Warpath::OnAbilityExecuted  (line 905, @0x0000000002c51990, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsAbilityAnItem, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll (18 total)
// strings: "modifier_bristleback_warpath_stack", "modifier_bristleback_warpath"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bristleback_Warpath::OnAbilityExecuted(
        CDOTA_Modifier_Bristleback_Warpath *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rbx
  CDOTA_BaseNPC *Caster; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *Parent; // rax
  bool v13; // cc
  int (**vptr_CDOTA_Buff)(...); // rax
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // r12
  CDOTA_BaseNPC *v17; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v19; // rax
  __int64 v20; // r12
  int v21; // ebx
  unsigned __int16 *v22; // rdx
  int v23; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *m_pInstance; // r13
  __int64 v28; // r15
  CDOTA_BaseNPC *v29; // rax
  CDOTA_Buff *ModifierByName; // rdi
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v32; // rax
  CDOTABaseAbility *v33; // r12
  CDOTA_BaseNPC *v34; // rbx
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_Buff *v37; // rax
  float v38; // xmm1_4
  CDOTABaseAbility *v39; // r12
  CDOTA_BaseNPC *v40; // rbx
  CDOTA_BaseNPC *v41; // rax
  int v42; // [rsp+30h] [rbp-180h]
  KeyValues kv; // [rsp+40h] [rbp-170h] BYREF
  KeyValues kv_0; // [rsp+60h] [rbp-150h] BYREF
  unsigned int v45; // [rsp+74h] [rbp-13Ch]
  _QWORD v46[39]; // [rsp+78h] [rbp-138h] BYREF

  v46[32] = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetParent(this) == 0 || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&params->ability);
    v6 = v5;
    if ( v5 != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(v5);
      if ( Caster == CDOTA_Buff::GetParent(this) && (*(v6->_vptr_IHandleEntity + 239))(v6) != 0 )
      {
        v42 = -1;
        m_pEntity = v6->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v9 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v42 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
        }
        if ( (v42 + 2) <= 1
          || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v42 >> 9) & 0x3F]) == 0
          || (v11 = &v10[v42 & 0x1FF]) == 0
          || v42 != v11->m_EHandle.m_Index
          || v11->m_pInstance == 0
          || (*(v11->m_pInstance->_vptr_IHandleEntity + 223))(v11->m_pInstance) == 0 )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
          {
            v13 = (*(this->_vptr_CDOTA_Buff + 27))(this) < this->max_stacks;
            vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
            if ( v13 )
            {
              vptr_CDOTA_Buff[25](this);
              KeyValues::KeyValues(&kv, "modifier_bristleback_warpath_stack");
              KeyValues::SetFloat(&kv, "duration", v15);
              kv_0.m_iValue = 0;
              HIDWORD(kv_0.m_pPeer) = 64;
              v45 = 0x80000000;
              *(&kv_0.CKeyValues_Data + 1) = v46;
              v16 = CDOTA_Buff::GetCaster(this);
              v17 = CDOTA_Buff::GetCaster(this);
              AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
              v19 = CDOTA_Buff::GetCaster(this);
              FindUnitsInRadius(v19->m_iTeamNum.m_Value, AbsOrigin, v16, -1.0, &kv_0, 1, 1, 0, 0, 0);
              if ( kv_0.m_iValue > 0 )
              {
                v20 = 0;
                v21 = 0;
                do
                {
                  v22 = (*(&kv_0.CKeyValues_Data + 1) + v20);
                  v23 = *(*(&kv_0.CKeyValues_Data + 1) + v20);
                  if ( (v23 + 2) > 1 )
                  {
                    v24 = *v22;
                    v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v22 >> 9) & 0x3F];
                    if ( v25 != 0 )
                    {
                      v26 = &v25[v24 & 0x1FF];
                      if ( v26 != 0 && v23 == v26->m_EHandle.m_Index )
                      {
                        m_pInstance = v26->m_pInstance;
                        if ( v26->m_pInstance != 0
                          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                          && (*(m_pInstance->_vptr_IHandleEntity + 408))(v26->m_pInstance) != 0
                          && LOBYTE(m_pInstance[71].m_pEntity) != 0 )
                        {
                          v28 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                          v29 = CDOTA_Buff::GetCaster(this);
                          if ( v28 == (*(v29->_vptr_IHandleEntity + 413))(v29) )
                          {
                            ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                                               m_pInstance,
                                               "modifier_bristleback_warpath",
                                               0);
                            if ( ModifierByName != 0 )
                            {
                              (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
                              Ability = CDOTA_Buff::GetAbility(this);
                              v32 = CDOTA_Buff::GetCaster(this);
                              CDOTA_BaseNPC::AddNewModifier(
                                m_pInstance,
                                v32,
                                Ability,
                                "modifier_bristleback_warpath_stack",
                                &kv,
                                0);
                            }
                          }
                        }
                      }
                    }
                  }
                  ++v21;
                  v20 += 4;
                }
                while ( kv_0.m_iValue > v21 );
              }
              v33 = CDOTA_Buff::GetAbility(this);
              v34 = CDOTA_Buff::GetCaster(this);
              v35 = CDOTA_Buff::GetParent(this);
              CDOTA_BaseNPC::AddNewModifier(v35, v34, v33, "modifier_bristleback_warpath_stack", &kv, 0);
              (*(this->_vptr_CDOTA_Buff + 63))(this, 1, this->stack_duration);
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&kv_0);
              if ( (v45 & 0xC0000000) == 0 )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Purge((&kv_0.CKeyValues_Data + 8));
                if ( (v45 & 0xC0000000) == 0 )
                  CUtlMemory<CHandle<CBaseEntity>,int>::Purge((&kv_0.CKeyValues_Data + 8));
              }
              KeyValues::~KeyValues(&kv);
            }
            else if ( vptr_CDOTA_Buff[27](this) == this->max_stacks )
            {
              v36 = CDOTA_Buff::GetCaster(this);
              v37 = CDOTA_BaseNPC::FindModifierByName(v36, "modifier_bristleback_warpath_stack", 0);
              if ( v37 != 0 )
              {
                CDOTA_Buff::Destroy(v37, 0, 0, 0);
                KeyValues::KeyValues(&kv_0, "modifier_bristleback_warpath_stack");
                KeyValues::SetFloat(&kv_0, "duration", v38);
                v39 = CDOTA_Buff::GetAbility(this);
                v40 = CDOTA_Buff::GetCaster(this);
                v41 = CDOTA_Buff::GetParent(this);
                CDOTA_BaseNPC::AddNewModifier(v41, v40, v39, "modifier_bristleback_warpath_stack", &kv_0, 0);
                (*(this->_vptr_CDOTA_Buff + 63))(this, 1, this->stack_duration);
                (*(this->_vptr_CDOTA_Buff + 25))(this);
                KeyValues::~KeyValues(&kv_0);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Bristleback_Warpath::GetModifierMoveSpeedBonus_Percentage  (line 966, @0x0000000002c1baa0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bristleback_Warpath::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Bristleback_Warpath *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  __int64 v4; // rsi
  int base_move_speed; // r12d
  __m128i v7; // xmm1
  ModifierVariant_t result; // 0:rax.16

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this, params) == 1 )
  {
    *v3.m128i_i32 = this->base_move_speed;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
    result.m_szVal = 0;
  }
  else
  {
    if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 1 )
    {
      base_move_speed = this->base_move_speed;
      *v7.m128i_i32 = (base_move_speed + this->move_speed_per_stack
                                       * ((*(this->_vptr_CDOTA_Buff + 27))(this, v4, 1) - 1));
      *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
    }
    else
    {
      *&result.m_eType = 1;
    }
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_Bristleback_Warpath::GetModifierPreAttack_BonusDamage  (line 984, @0x0000000002c1bb40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bristleback_Warpath::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Bristleback_Warpath *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  __int64 v4; // rsi
  int base_damage; // r12d
  __m128i v7; // xmm1
  ModifierVariant_t result; // 0:rax.16

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this, params) == 1 )
  {
    *v3.m128i_i32 = this->base_damage;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
    result.m_szVal = 0;
  }
  else
  {
    if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 1 )
    {
      base_damage = this->base_damage;
      *v7.m128i_i32 = (base_damage + this->damage_per_stack * ((*(this->_vptr_CDOTA_Buff + 27))(this, v4, 1) - 1));
      *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
    }
    else
    {
      *&result.m_eType = 1;
    }
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_Bristleback_Warpath::ModelScale  (line 1001, @0x0000000002c1bbe0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bristleback_Warpath::ModelScale(
        CDOTA_Modifier_Bristleback_Warpath *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = (5 * v3 + 1);
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Bristleback_Warpath_Stack::~CDOTA_Modifier_Bristleback_Warpath_Stack  (line 1010, @0x0000000002c93230, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bristleback_Warpath_Stack::~CDOTA_Modifier_Bristleback_Warpath_Stack(
        CDOTA_Modifier_Bristleback_Warpath_Stack *const this)
{
  this->_vptr_CDOTA_Buff = &off_458FF10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bristleback_Warpath_Stack::~CDOTA_Modifier_Bristleback_Warpath_Stack  (line 1010, @0x0000000002c93250, libserver.so)  // inlines: ~CDOTA_Modifier_Bristleback_Warpath_Stack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bristleback_Warpath_Stack::~CDOTA_Modifier_Bristleback_Warpath_Stack(
        CDOTA_Modifier_Bristleback_Warpath_Stack *const this)
{
  this->_vptr_CDOTA_Buff = &off_458FF10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bristleback_Warpath_Stack::IsHidden  (line 1015, @0x0000000002c87320, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_Warpath_Stack::IsHidden(
        CDOTA_Modifier_Bristleback_Warpath_Stack *const this)
{
  return 1;
}


// CDOTA_Modifier_Bristleback_Warpath_Stack::IsPurgable  (line 1016, @0x0000000002c87330, libserver.so)
bool __fastcall CDOTA_Modifier_Bristleback_Warpath_Stack::IsPurgable(
        CDOTA_Modifier_Bristleback_Warpath_Stack *const this)
{
  return 0;
}


// CDOTA_Modifier_Bristleback_Warpath_Stack::GetAttributes  (line 1021, @0x0000000002c87340, libserver.so)
int __fastcall CDOTA_Modifier_Bristleback_Warpath_Stack::GetAttributes(
        CDOTA_Modifier_Bristleback_Warpath_Stack *const this)
{
  return 2;
}


// CDOTA_Modifier_Bristleback_Warpath_Stack::OnCreated  (line 1029, @0x0000000002c1bc10, libserver.so)
void __fastcall CDOTA_Modifier_Bristleback_Warpath_Stack::OnCreated(
        CDOTA_Modifier_Bristleback_Warpath_Stack *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Bristleback_Warpath_Stack::OnDestroy  (line 1048, @0x0000000002c1f4e0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_bristleback_warpath"
void __fastcall CDOTA_Modifier_Bristleback_Warpath_Stack::OnDestroy(
        CDOTA_Modifier_Bristleback_Warpath_Stack *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_bristleback_warpath", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
}


