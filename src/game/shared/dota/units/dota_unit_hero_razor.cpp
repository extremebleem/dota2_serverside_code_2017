// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:38
class CDOTA_Unit_Hero_Razor : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Razor(CDOTA_Unit_Hero_Razor &);
	CDOTA_Unit_Hero_Razor(CDOTA_Unit_Hero_Razor &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Razor();
	virtual ~CDOTA_Unit_Hero_Razor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:56
class C_CDOTA_Unit_Hero_Razor_MapInstall {
	C_CDOTA_Unit_Hero_Razor_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:112
class CDOTA_Ability_Razor_PlasmaField : public CDOTABaseAbility {
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
	CDOTA_Ability_Razor_PlasmaField(CDOTA_Ability_Razor_PlasmaField &);
	CDOTA_Ability_Razor_PlasmaField(CDOTA_Ability_Razor_PlasmaField &);
	CDOTA_Ability_Razor_PlasmaField();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Razor_PlasmaField();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:126
class C_CDOTA_Ability_Razor_PlasmaField_MapInstall {
	C_CDOTA_Ability_Razor_PlasmaField_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:167
class CDOTA_Modifier_Razor_PlasmaField_Thinker : public CDOTA_Buff {
public:

private:

	float m_fLastRadius;  // +0xba8
	float m_fCurRadius;  // +0xbac
	float m_fLastThink;  // +0xbb0
	bool m_bContracting;  // +0xbb4

	int m_nFXIndex;  // +0xbd0

	int speed;  // +0xbf0
	int radius;  // +0xbf4
	int damage_min;  // +0xbf8
	int damage_max;  // +0xbfc
	CDOTA_Modifier_Razor_PlasmaField_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Razor_PlasmaField_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// sizeof = 3072
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:317
class CDOTA_Ability_Razor_StaticLink : public CDOTABaseAbility {
public:

private:

	int m_iLinkIndex;  // +0x390

	int vision_radius;  // +0x3b0
	float vision_duration;  // +0x3b4
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
	CDOTA_Ability_Razor_StaticLink(CDOTA_Ability_Razor_StaticLink &);
	CDOTA_Ability_Razor_StaticLink(CDOTA_Ability_Razor_StaticLink &);
	CDOTA_Ability_Razor_StaticLink();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Razor_StaticLink();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:365
class CDOTA_Modifier_Razor_StaticLink : public CDOTA_Buff {
public:

private:

	float flSmoothness;  // +0xba8
	float drain_duration;  // +0xbac
	int drain_rate;  // +0xbb0
	int drain_range;  // +0xbb4
	int drain_range_buffer;  // +0xbb8
	EHANDLE m_hTarget;  // +0xbbc
	int m_iTotalDrainAmount;  // +0xbc0
	int m_iLinkIndex;  // +0xbc4
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	CDOTA_Modifier_Razor_StaticLink();
	virtual ~CDOTA_Modifier_Razor_StaticLink();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:539
class CDOTA_Modifier_Razor_StaticLink_Buff : public CDOTA_Buff {
public:

private:

	int m_nFXIndex;  // +0xba8
	CDOTA_Modifier_Razor_StaticLink_Buff();
	virtual void OnCreated(KeyValues *);
	virtual void OnStackCountChanged(int);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Razor_StaticLink_Buff();

	// vtable[57] OnCreated
	// vtable[29] OnStackCountChanged
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:599
class CDOTA_Modifier_Razor_StaticLink_Debuff : public CDOTA_Buff {
public:

private:

	int m_nFXIndex;  // +0xba8
	CDOTA_Modifier_Razor_StaticLink_Debuff();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnStackCountChanged(int);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Razor_StaticLink_Debuff();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[29] OnStackCountChanged
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:661
class CDOTA_Modifier_Razor_Link_Vision : public CDOTA_Buff {
public:

	CDOTA_Modifier_Razor_Link_Vision();

private:

	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Razor_Link_Vision();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:688
class CDOTA_Ability_Razor_UnstableCurrent : public CDOTABaseAbility {
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
	CDOTA_Ability_Razor_UnstableCurrent(CDOTA_Ability_Razor_UnstableCurrent &);
	CDOTA_Ability_Razor_UnstableCurrent(CDOTA_Ability_Razor_UnstableCurrent &);
	CDOTA_Ability_Razor_UnstableCurrent();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Razor_UnstableCurrent();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:702
class CDOTA_Modifier_Razor_UnstableCurrent : public CDOTA_Buff {
public:

private:

	int movement_speed_pct;  // +0xba8
	float slow_duration;  // +0xbac
	float pause_duration;  // +0xbb0
	CDOTA_Modifier_Razor_UnstableCurrent();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Razor_UnstableCurrent();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:828
class CDOTA_Modifier_Razor_UnstableCurrent_Slow : public CDOTA_Buff {
public:

private:

	int slow_amount;  // +0xba8
	CDOTA_Modifier_Razor_UnstableCurrent_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Razor_UnstableCurrent_Slow();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:889
class CDOTA_Ability_Razor_EyeOfTheStorm : public CDOTABaseAbility {
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
	CDOTA_Ability_Razor_EyeOfTheStorm(CDOTA_Ability_Razor_EyeOfTheStorm &);
	CDOTA_Ability_Razor_EyeOfTheStorm(CDOTA_Ability_Razor_EyeOfTheStorm &);
	CDOTA_Ability_Razor_EyeOfTheStorm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Razor_EyeOfTheStorm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:902
class C_CDOTA_Ability_Razor_EyeOfTheStorm_MapInstall {
	C_CDOTA_Ability_Razor_EyeOfTheStorm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:932
class CDOTA_Modifier_Razor_EyeOfTheStorm : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int armor_reduction;  // +0xbac
	int damage;  // +0xbb0
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual const char * GetEffectName();
	CDOTA_Modifier_Razor_EyeOfTheStorm();
	virtual ~CDOTA_Modifier_Razor_EyeOfTheStorm();

	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_razor.cpp:1158
class CDOTA_Modifier_Razor_EyeOfTheStorm_Armor : public CDOTA_Buff {
public:

	CDOTA_Modifier_Razor_EyeOfTheStorm_Armor();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Razor_EyeOfTheStorm_Armor();

	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Razor::~CDOTA_Unit_Hero_Razor  (line 38, @0x0000000002a18e30, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Razor::~CDOTA_Unit_Hero_Razor(CDOTA_Unit_Hero_Razor *const this)
{
  this->_vptr_IHandleEntity = &off_437FED0;
  this->_vptr_INextBotEventResponder = &off_4380EB0;
  this->_vptr_CObstructionObject = &off_43811E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Razor::~CDOTA_Unit_Hero_Razor  (line 38, @0x0000000002a18e70, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Razor
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Razor::~CDOTA_Unit_Hero_Razor(CDOTA_Unit_Hero_Razor *const this)
{
  this->_vptr_IHandleEntity = &off_437FED0;
  this->_vptr_INextBotEventResponder = &off_4380EB0;
  this->_vptr_CObstructionObject = &off_43811E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Razor::Schema_DynamicBinding  (line 40, @0x0000000002a0bda0, libserver.so)
// globals: CDOTA_Unit_Hero_Razor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Razor::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Razor *const this)
{
  return CDOTA_Unit_Hero_Razor::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002a0bdd0, libserver.so)
// globals: CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002a0bde0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Razor>
void __fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002a0be00, libserver.so)
void __fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002a0be20, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002a0be30, libserver.so)
// globals: CDOTA_Unit_Hero_Razor::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Razor::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002a10580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002a137c0, libserver.so)  // inlines: CDOTA_Unit_Hero_Razor, Construct<CDOTA_Unit_Hero_Razor>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_437FED0;
    *(p + 236) = &off_4380EB0;
    *(p + 257) = &off_43811E0;
  }
  return p;
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002a205d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002a20af0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Razor::GetEntityClassInternal  (line 40, @0x0000000002a3b270, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_razor", "CDOTA_Unit_Hero_Razor"
// globals: `guard variable for'CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass, CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass, __dso_handle, CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo, CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Razor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass);
    CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass._vptr_CEntityClass = off_437FE50;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_RazorClass != 0 )
    return &CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo,
      "CDOTA_Unit_Hero_Razor",
      "npc_dota_hero_razor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo);
  }
  CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass.m_pClassInfo = &CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo;
  CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_RazorClass = &CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass;
  CDOTA_Unit_Hero_Razor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RazorClassInfo.m_pClass = &CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass;
  CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_RazorClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Razor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RazorClass;
}


// CDOTA_Unit_Hero_Razor::YouForgotToImplementOrDeclareServerClass  (line 56, @0x00000000029b6200, libserver.so)
int __fastcall CDOTA_Unit_Hero_Razor::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Razor *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Razor::GetServerClass  (line 56, @0x00000000029c9ab0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Razor::GetServerClass(CDOTA_Unit_Hero_Razor *const this)
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


// CDOTA_Ability_Razor_PlasmaField::~CDOTA_Ability_Razor_PlasmaField  (line 112, @0x0000000002a17f00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Razor_PlasmaField::~CDOTA_Ability_Razor_PlasmaField(
        CDOTA_Ability_Razor_PlasmaField *const this)
{
  this->_vptr_IHandleEntity = &off_43812B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Razor_PlasmaField::~CDOTA_Ability_Razor_PlasmaField  (line 112, @0x0000000002a17f20, libserver.so)  // inlines: ~CDOTA_Ability_Razor_PlasmaField
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Razor_PlasmaField::~CDOTA_Ability_Razor_PlasmaField(
        CDOTA_Ability_Razor_PlasmaField *const this)
{
  this->_vptr_IHandleEntity = &off_43812B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Razor_PlasmaField::Schema_DynamicBinding  (line 114, @0x0000000002a0be40, libserver.so)
// globals: CDOTA_Ability_Razor_PlasmaField::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Razor_PlasmaField::Schema_DynamicBinding(
        const CDOTA_Ability_Razor_PlasmaField *const this)
{
  return CDOTA_Ability_Razor_PlasmaField::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 114, @0x0000000002a0be50, libserver.so)
// globals: CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::DestructInstance  (line 114, @0x0000000002a0be60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Razor_PlasmaField>
void __fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::FreeInstance  (line 114, @0x0000000002a0be80, libserver.so)
void __fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::CanAllocate  (line 114, @0x0000000002a0bea0, libserver.so)
bool __fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 114, @0x0000000002a0beb0, libserver.so)
// globals: CDOTA_Ability_Razor_PlasmaField::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Razor_PlasmaField::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::AllocateInstance  (line 114, @0x0000000002a105c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::ConstructInstance  (line 114, @0x0000000002a148b0, libserver.so)  // inlines: CDOTA_Ability_Razor_PlasmaField, Construct<CDOTA_Ability_Razor_PlasmaField>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43812B0;
  }
  return p;
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 114, @0x0000000002a20350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 114, @0x0000000002a20370, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal  (line 114, @0x0000000002a3a7f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "razor_plasma_field", "CDOTA_Ability_Razor_PlasmaField"
// globals: `guard variable for'CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass, CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass, __dso_handle, CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo, CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass);
    CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass._vptr_CEntityClass = off_4381230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass);
    __cxa_atexit(
      CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Razor_PlasmaFieldClass != 0 )
    return &CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass;
  if ( `guard variable for'CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo,
      "CDOTA_Ability_Razor_PlasmaField",
      "razor_plasma_field",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo);
  }
  CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass.m_pClassInfo = &CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo;
  CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass.m_pBaseClassInfo = CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Razor_PlasmaFieldClass = &CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass;
  CDOTA_Ability_Razor_PlasmaField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClassInfo.m_pClass = &CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass;
  CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Razor_PlasmaFieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Razor_PlasmaField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_PlasmaFieldClass;
}


// CDOTA_Ability_Razor_PlasmaField::GetAOERadius  (line 118, @0x0000000002a33d30, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Razor_PlasmaField::GetAOERadius(CDOTA_Ability_Razor_PlasmaField *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Razor_PlasmaField::GetConceptRecipientType  (line 121, @0x0000000002a0bec0, libserver.so)
int __fastcall CDOTA_Ability_Razor_PlasmaField::GetConceptRecipientType(CDOTA_Ability_Razor_PlasmaField *const this)
{
  return 4;
}


// CDOTA_Ability_Razor_PlasmaField::YouForgotToImplementOrDeclareServerClass  (line 126, @0x00000000029b6210, libserver.so)
int __fastcall CDOTA_Ability_Razor_PlasmaField::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Razor_PlasmaField *const this)
{
  return 0;
}


// CDOTA_Ability_Razor_PlasmaField::GetServerClass  (line 126, @0x00000000029c9eb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Razor_PlasmaField::GetServerClass(CDOTA_Ability_Razor_PlasmaField *const this)
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


// CDOTA_Ability_Razor_PlasmaField::OnSpellStart  (line 135, @0x00000000029c0340, libserver.so)  // inlines: GetTeamNumber, NetworkStateChanged, Set, SetPhantomState, operator=<bool>
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "npc_dota_plasma_field", "modifier_razor_plasma_field_thinker"
void __fastcall CDOTA_Ability_Razor_PlasmaField::OnSpellStart(CDOTA_Ability_Razor_PlasmaField *const this)
{
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  UnitByName = DOTA_CreateUnitByName("npc_dota_plasma_field", AbsOrigin, 0, v4, Caster, m_Value);
  v8 = UnitByName;
  if ( !UnitByName->m_bIsPhantom.m_Value )
  {
    (*(UnitByName->_vptr_IHandleEntity + 22))(UnitByName, 2164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8->m_bIsPhantom.m_Value = 1;
  }
  KeyValues::KeyValues(&kv, "modifier_razor_plasma_field_thinker");
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v8, v9, this, "modifier_razor_plasma_field_thinker", &kv, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v10, 1516, 0.1, 0.1, 9, 0, 1.0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Razor_PlasmaField::GetAbilityDamageToTargetOverInterval  (line 150, @0x00000000029e70c0, libserver.so)  // inlines: RemapValClamped
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_min", "damage_max"
__int64 __fastcall CDOTA_Ability_Razor_PlasmaField::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Razor_PlasmaField *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_Razor_PlasmaField *v6; // rbx
  int LevelSpecialValue; // r13d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = this;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_min", -1, 1);
    LODWORD(v6) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_max", -1, 1);
    return (((((v6 - LevelSpecialValue) * 0.69999999) + LevelSpecialValue)
           + (((v6 - LevelSpecialValue) * 0.69999999) + LevelSpecialValue))
          * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Razor_PlasmaField_Thinker::~CDOTA_Modifier_Razor_PlasmaField_Thinker  (line 167, @0x0000000002a330a0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Razor_PlasmaField_Thinker::~CDOTA_Modifier_Razor_PlasmaField_Thinker(
        CDOTA_Modifier_Razor_PlasmaField_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4381D70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_EntitiesHit);
  if ( (this->m_EntitiesHit.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_EntitiesHit.m_Memory),
        (this->m_EntitiesHit.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_EntitiesHit.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Razor_PlasmaField_Thinker::~CDOTA_Modifier_Razor_PlasmaField_Thinker  (line 167, @0x0000000002a33650, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Razor_PlasmaField_Thinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Razor_PlasmaField_Thinker::~CDOTA_Modifier_Razor_PlasmaField_Thinker(
        CDOTA_Modifier_Razor_PlasmaField_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4381D70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_EntitiesHit);
  if ( (this->m_EntitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_EntitiesHit.m_Memory);
    if ( (this->m_EntitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_EntitiesHit.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_PlasmaField_Thinker::IsHidden  (line 176, @0x0000000002a0bed0, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_PlasmaField_Thinker::IsHidden(
        CDOTA_Modifier_Razor_PlasmaField_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Razor_PlasmaField_Thinker::OnCreated  (line 202, @0x00000000029e19f0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, NetworkStateChanged, Set, Start, Vector, operator=<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CountdownTimer::Now, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties (13 total)
// strings: "damage_min", "damage_max", "particles/units/heroes/hero_razor/razor_plasmafield.vpcf"
void __fastcall CDOTA_Modifier_Razor_PlasmaField_Thinker::OnCreated(
        CDOTA_Modifier_Razor_PlasmaField_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v15; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  float v21; // [rsp+Ch] [rbp-34h]
  double vecFXData; // [rsp+10h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->speed, "speed");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->radius, "radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->damage_min, "damage_min");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->damage_max, "damage_max");
  v8 = 0.0;
  this->m_fLastRadius = 0.0;
  this->m_fCurRadius = 0.0;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fLastThink = v8;
  this->m_bContracting = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v7);
  v9 = CountdownTimer::Now(&this->m_ViewerTimer) + 0.2;
  if ( v9 != this->m_ViewerTimer.m_timestamp.m_Value )
  {
    v21 = v9;
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_timestamp.m_Value = v21;
  }
  if ( this->m_ViewerTimer.m_duration.m_Value != 0.2 )
  {
    (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(&this->m_ViewerTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ViewerTimer.m_duration.m_Value = 0.2;
  }
  *&vecFXData = this->speed;
  *(&vecFXData + 1) = (this->radius + 100);
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::GetAbsOrigin(Parent);
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_razor/razor_plasmafield.vpcf",
                       2,
                       0,
                       0,
                       Caster);
  v13 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTA_Buff::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v17 = v15;
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, m_nFXIndex, 0, v17, 1, 0, *AbsOrigin, 1);
  LODWORD(AbsOrigin) = this->m_nFXIndex;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v19, AbsOrigin, 1, vecFXData, 1.0);
  LODWORD(AbsOrigin) = this->m_nFXIndex;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v20, AbsOrigin, 0, -1, 0.0);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Razor_PlasmaField_Thinker::OnIntervalThink  (line 233, @0x00000000029ffa10, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Purge, RemapValClamped, Reset, Set, ToDOTABaseNPC, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=<float>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CountdownTimer::Now, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CBaseEntity::SetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::SetParticleControlFallback, CDOTA_ParticleManager::SetParticleFoWProperties, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage (24 total)
// strings: "Ability.PlasmaFieldImpact", "particles/units/heroes/hero_razor/razor_base_attack_impact.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Razor_PlasmaField_Thinker::OnIntervalThink(
        CDOTA_Modifier_Razor_PlasmaField_Thinker *const this)
{
  CountdownTimer *p_m_ViewerTimer; // rbx
  __m128 m_fCurRadius_low; // xmm1
  float speed; // xmm2_4
  CGameRules *v5; // rax
  float v6; // xmm0_4
  bool m_bContracting; // dl
  float v8; // xmm0_4
  double v9; // xmm2_8
  double v10; // xmm3_8
  __m128 v11; // xmm1
  __m128d v12; // xmm0
  double v13; // xmm7_8
  float v14; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // rbx
  CDOTA_BaseNPC *v17; // rax
  __m128i v18; // xmm5
  float v19; // r14d
  CDOTA_BaseNPC *v20; // r12
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // rbx
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v27; // rax
  __int64 v28; // r12
  int v29; // ebx
  CHandle<CBaseEntity> *v30; // r15
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // r15
  const Vector *v35; // rax
  __m128 v36; // xmm2
  float radius; // xmm1_4
  float damage_max; // xmm0_4
  __m128 v39; // xmm6
  __m128 v40; // xmm7
  float v41; // xmm0_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // r15
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v49; // cx
  __int64 m_Size; // r15
  int v51; // eax
  CHandle<CBaseEntity> *v52; // rax
  int v53; // eax
  float v54; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v57; // rax
  float v58; // xmm1_4
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *v60; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v62; // xmm3_4
  float v63; // xmm1_4
  float flDamage; // [rsp+30h] [rbp-70h]
  float flTestRadius; // [rsp+34h] [rbp-6Ch]
  CDOTA_BaseNPC *pEntityForAttach; // [rsp+38h] [rbp-68h]
  float pEntityForAttacha; // [rsp+38h] [rbp-68h]
  int vecFXData; // [rsp+40h] [rbp-60h]
  double vecFXDataa; // [rsp+40h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-50h] BYREF

  p_m_ViewerTimer = &this->m_ViewerTimer;
  if ( CountdownTimer::Now(&this->m_ViewerTimer) >= this->m_ViewerTimer.m_timestamp.m_Value )
  {
    v54 = CountdownTimer::Now(p_m_ViewerTimer) + this->m_ViewerTimer.m_duration.m_Value;
    if ( v54 != this->m_ViewerTimer.m_timestamp.m_Value )
    {
      pEntityForAttacha = v54;
      (*(this->m_ViewerTimer._vptr_CountdownTimer + 2))(p_m_ViewerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ViewerTimer.m_timestamp.m_Value = pEntityForAttacha;
    }
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v57 = CDOTA_Buff::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_PLASMAFIELD,
      v57->m_iTeamNum.m_Value,
      AbsOrigin,
      800.0,
      2.0,
      0);
  }
  m_fCurRadius_low = LODWORD(this->m_fCurRadius);
  speed = this->speed;
  LODWORD(this->m_fLastRadius) = m_fCurRadius_low.m128_i32[0];
  v5 = g_pGameRules;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v6 = 0.0;
  m_bContracting = this->m_bContracting;
  v8 = (v6 - this->m_fLastThink) * speed;
  v9 = 1.0;
  v10 = v8;
  if ( m_bContracting )
    v9 = -1.0;
  v11 = _mm_unpacklo_ps(m_fCurRadius_low, m_fCurRadius_low);
  v12 = _mm_cvtps_pd(v11);
  v12.m128d_f64[0] = v12.m128d_f64[0] + v9 * v10;
  v13 = _mm_movedup_pd(v12).m128d_f64[0];
  v14 = 0.0;
  flTestRadius = v13;
  this->m_fCurRadius = flTestRadius;
  if ( v5 != 0 )
    v14 = *&v5[18].m_szQuestName[20];
  this->m_fLastThink = v14;
  if ( flTestRadius < 0.0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    UTIL_Remove(Parent);
  }
  else
  {
    if ( m_bContracting )
      flTestRadius = v11.m128_f32[0];
    v15 = CDOTA_Buff::GetCaster(this);
    v16 = CBaseEntity::GetAbsOrigin(v15);
    v17 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsOrigin(v17, v16);
    v18 = LODWORD(flTestRadius);
    entities.m_Size = 0;
    *v18.m128i_i32 = flTestRadius + 100.0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
    v20 = CDOTA_Buff::GetCaster(this);
    v21 = CDOTA_Buff::GetCaster(this);
    v22 = CBaseEntity::GetAbsOrigin(v21);
    v23 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v23->m_iTeamNum.m_Value, v22, v20, v19, &entities, 2, 19, 0, 0, 0);
    v24 = CDOTA_Buff::GetCaster(this);
    v25 = CBaseEntity::GetAbsOrigin(v24);
    LODWORD(v20) = this->m_nFXIndex;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlFallback(ParticleManager, v20, 0, *&v25->x, v25->z);
    *&v20 = this->m_fCurRadius;
    LODWORD(v25) = this->m_nFXIndex;
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleFoWProperties(v27, v25, 0, -1, *&v20);
    if ( entities.m_Size > 0 )
    {
      v28 = 0;
      v29 = 0;
      do
      {
        while ( 1 )
        {
          v30 = &entities.m_Memory.m_pMemory[v28];
          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                 &this->m_EntitiesHit,
                 &entities.m_Memory.m_pMemory[v28]) == -1
            && v30->m_Index + 2 > 1 )
          {
            v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v30->m_Index) >> 9) & 0x3F];
            if ( v31 != 0 )
            {
              v32 = &v31[v30->m_Index & 0x1FF];
              if ( v32 != 0 && v30->m_Index == v32->m_EHandle.m_Index )
              {
                pEntityForAttach = v32->m_pInstance;
                if ( v32->m_pInstance != 0 && BYTE3(v32->m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  v33 = CDOTA_Buff::GetCaster(this);
                  v34 = CBaseEntity::GetAbsOrigin(v33);
                  v35 = CBaseEntity::GetAbsOrigin(pEntityForAttach);
                  if ( flTestRadius <= fsqrt(
                                         ((v35->x - v34->x) * (v35->x - v34->x))
                                       + ((v35->y - v34->y) * (v35->y - v34->y))) )
                  {
                    radius = this->radius;
                    damage_max = this->damage_max;
                    v36.m128_f32[0] = this->damage_min;
                    if ( radius == 0.0 )
                    {
                      v39.m128_f32[0] = flTestRadius - 0.0;
                      v40 = _mm_cmple_ss(0, v39);
                      LODWORD(v41) = _mm_andnot_ps(v40, v36).m128_u32[0] | LODWORD(damage_max) & v40.m128_i32[0];
                    }
                    else
                    {
                      v62 = flTestRadius / radius;
                      v63 = 0.0;
                      if ( v62 >= 0.0 )
                        v63 = fminf(1.0, v62);
                      v41 = ((damage_max - v36.m128_f32[0]) * v63) + v36.m128_f32[0];
                    }
                    flDamage = (v41 * 0.5);
                    Ability = CDOTA_Buff::GetAbility(this);
                    v43 = CDOTA_Buff::GetCaster(this);
                    ApplyDamage(v43, pEntityForAttach, Ability, flDamage, 2, 0);
                    CDOTA_BaseNPC::UnitEmitSound(pEntityForAttach, "Ability.PlasmaFieldImpact", 0.0, 0, 0);
                    v44 = CDOTA_Buff::GetCaster(this);
                    v45 = GetParticleManager();
                    LODWORD(v44) = CDOTA_ParticleManager::CreateParticle(
                                     v45,
                                     "particles/units/heroes/hero_razor/razor_base_attack_impact.vpcf",
                                     1,
                                     pEntityForAttach,
                                     0,
                                     v44);
                    v46 = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControlEnt(v46, v44, 1, pEntityForAttach, 1, 0, vec3_invalid, 1);
                    v47 = GetParticleManager();
                    CDOTA_ParticleManager::ReleaseParticleIndex(v47, v44);
                    vecFXData = -1;
                    m_pEntity = pEntityForAttach->m_pEntity;
                    if ( m_pEntity != 0 )
                    {
                      v49 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v49 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      vecFXData = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                | v49 & 0x7FFF;
                    }
                    m_Size = this->m_EntitiesHit.m_Size;
                    v51 = this->m_EntitiesHit.m_Size;
                    if ( m_Size == this->m_EntitiesHit.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_EntitiesHit.m_Memory, 1);
                      v51 = this->m_EntitiesHit.m_Size;
                    }
                    this->m_EntitiesHit.m_Size = v51 + 1;
                    v52 = &this->m_EntitiesHit.m_Memory.m_pMemory[m_Size];
                    if ( v52 != 0 )
                      break;
                  }
                }
              }
            }
          }
          ++v29;
          ++v28;
          if ( entities.m_Size <= v29 )
            goto LABEL_32;
        }
        ++v29;
        ++v28;
        v52->m_Index = vecFXData;
      }
      while ( entities.m_Size > v29 );
    }
LABEL_32:
    if ( !this->m_bContracting )
    {
      v53 = this->radius + 100;
      if ( this->m_fCurRadius >= v53 )
      {
        v58 = this->speed;
        this->m_bContracting = 1;
        *(&vecFXDataa + 1) = v53;
        m_nFXIndex = this->m_nFXIndex;
        *&vecFXDataa = v58;
        v60 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v60, m_nFXIndex, 1, vecFXDataa, -1.0);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_EntitiesHit);
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
}


// CDOTA_Modifier_Razor_PlasmaField_Thinker::CheckState  (line 302, @0x00000000029b6220, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Razor_PlasmaField_Thinker::CheckState(
        CDOTA_Modifier_Razor_PlasmaField_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x804100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FBEFFLL;
}


// CDOTA_Ability_Razor_StaticLink::~CDOTA_Ability_Razor_StaticLink  (line 317, @0x0000000002a17f50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Razor_StaticLink::~CDOTA_Ability_Razor_StaticLink(
        CDOTA_Ability_Razor_StaticLink *const this)
{
  this->_vptr_IHandleEntity = &off_43820D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Razor_StaticLink::~CDOTA_Ability_Razor_StaticLink  (line 317, @0x0000000002a17f70, libserver.so)  // inlines: ~CDOTA_Ability_Razor_StaticLink
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Razor_StaticLink::~CDOTA_Ability_Razor_StaticLink(
        CDOTA_Ability_Razor_StaticLink *const this)
{
  this->_vptr_IHandleEntity = &off_43820D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Razor_StaticLink::Schema_DynamicBinding  (line 319, @0x0000000002a0bee0, libserver.so)
// globals: CDOTA_Ability_Razor_StaticLink::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Razor_StaticLink::Schema_DynamicBinding(
        const CDOTA_Ability_Razor_StaticLink *const this)
{
  return CDOTA_Ability_Razor_StaticLink::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 319, @0x0000000002a0bef0, libserver.so)
// globals: CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::DestructInstance  (line 319, @0x0000000002a0bf00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Razor_StaticLink>
void __fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::FreeInstance  (line 319, @0x0000000002a0bf20, libserver.so)
void __fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::CanAllocate  (line 319, @0x0000000002a0bf40, libserver.so)
bool __fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 319, @0x0000000002a0bf50, libserver.so)
// globals: CDOTA_Ability_Razor_StaticLink::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Razor_StaticLink::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::AllocateInstance  (line 319, @0x0000000002a10600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::ConstructInstance  (line 319, @0x0000000002a1e040, libserver.so)  // inlines: CDOTA_Ability_Razor_StaticLink, Construct<CDOTA_Ability_Razor_StaticLink>
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43820D0;
    CountdownTimer::CountdownTimer((p + 920));
  }
  return p;
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 319, @0x0000000002a203a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 319, @0x0000000002a203c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal  (line 319, @0x0000000002a3a940, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Razor_StaticLink"
// globals: `guard variable for'CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass, CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass, __dso_handle, CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo, CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo
CEntityClass *__cdecl CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass);
    CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass._vptr_CEntityClass = off_4382050;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass);
    __cxa_atexit(
      CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Razor_StaticLinkClass != 0 )
    return &CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass;
  if ( `guard variable for'CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo,
      "CDOTA_Ability_Razor_StaticLink",
      "razor_static_link",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo);
  }
  CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass.m_pClassInfo = &CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo;
  CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass.m_pBaseClassInfo = CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Razor_StaticLinkClass = &CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass;
  CDOTA_Ability_Razor_StaticLink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClassInfo.m_pClass = &CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass;
  CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Razor_StaticLinkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Razor_StaticLink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_StaticLinkClass;
}


// CDOTA_Ability_Razor_StaticLink::OnSpellStart  (line 339, @0x00000000029de330, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetPtr, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues (15 total)
// strings: "drain_length", "modifier_razor_static_link"
void __fastcall CDOTA_Ability_Razor_StaticLink::OnSpellStart(CDOTA_Ability_Razor_StaticLink *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *CursorTarget; // rax
  const CBaseEntity *v4; // r12
  __m128i v5; // xmm0
  float v6; // r15d
  CBaseEntity *v7; // rax
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // r14
  CDOTA_BaseNPC *v10; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v14; // rax
  float v15; // xmm3_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1516, 0.1, 0.1, 9, 0, 1.0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    *v5.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "drain_length", -1, 0);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    KeyValues::KeyValues(&kv, "modifier_razor_static_link");
    v7 = CDOTABaseAbility::GetCursorTarget(this);
    KeyValues::SetPtr(&kv, "target", v7);
    KeyValues::SetFloat(&kv, "duration", v8);
    v9 = CDOTABaseAbility::GetCaster(this);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v10, v9, this, "modifier_razor_static_link", &kv, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v14,
      0,
      m_iAbilityID,
      0,
      0,
      *&AbsOrigin->x,
      AbsOrigin->z,
      v6,
      v15);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Razor_StaticLink::~CDOTA_Modifier_Razor_StaticLink  (line 365, @0x0000000002a10de0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Razor_StaticLink::~CDOTA_Modifier_Razor_StaticLink(
        CDOTA_Modifier_Razor_StaticLink *const this)
{
  this->_vptr_CDOTA_Buff = &off_4382B90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Razor_StaticLink::~CDOTA_Modifier_Razor_StaticLink  (line 365, @0x0000000002a10e00, libserver.so)  // inlines: ~CDOTA_Modifier_Razor_StaticLink
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Razor_StaticLink::~CDOTA_Modifier_Razor_StaticLink(
        CDOTA_Modifier_Razor_StaticLink *const this)
{
  this->_vptr_CDOTA_Buff = &off_4382B90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_StaticLink::IsHidden  (line 375, @0x0000000002a0bf60, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_StaticLink::IsHidden(CDOTA_Modifier_Razor_StaticLink *const this)
{
  return 1;
}


// CDOTA_Modifier_Razor_StaticLink::IsPurgable  (line 376, @0x0000000002a0bf70, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_StaticLink::IsPurgable(CDOTA_Modifier_Razor_StaticLink *const this)
{
  return 0;
}


// CDOTA_Modifier_Razor_StaticLink::GetAttributes  (line 378, @0x0000000002a0bf80, libserver.so)
int __fastcall CDOTA_Modifier_Razor_StaticLink::GetAttributes(CDOTA_Modifier_Razor_StaticLink *const this)
{
  return 2;
}


// CDOTA_Modifier_Razor_StaticLink::OnCreated  (line 408, @0x00000000029e7850, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_BaseNPC::StartGesture, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (20 total)
// strings: "drain_duration", "drain_rate", "drain_range_buffer", "special_bonus_unique_razor", "modifier_razor_static_link_", "modifier_razor_static_link_buff" (11 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Razor_StaticLink::OnCreated(CDOTA_Modifier_Razor_StaticLink *const this, KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v12; // rax
  int v13; // eax
  float flSmoothness; // xmm0_4
  float v15; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v17; // rdx
  CDOTA_BaseNPC *v18; // r13
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm1_4
  CDOTABaseAbility *v22; // r15
  CDOTA_BaseNPC *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  CDOTABaseAbility *v25; // r14
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v28; // r15
  CDOTA_BaseNPC *v29; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v31; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  float v36; // xmm1_4
  CDOTABaseAbility *v37; // r13
  CDOTA_BaseNPC *v38; // rax
  const CBaseAnimating *pEnt; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+28h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v4 = Ptr[1]) != 0 )
  {
    v5 = (*(v4 + 16) >> 15) - (*(v4 + 48) & 1);
    v6 = 0x7FFF;
    if ( *(v4 + 16) != -1 )
      v6 = *(v4 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v6 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v5 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  this->flSmoothness = 0.25;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->drain_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "drain_duration", -1, 0);
  else
    this->drain_duration = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->drain_rate, "drain_rate");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->drain_range_buffer, "drain_range_buffer");
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_razor", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->drain_rate += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v12 = CDOTA_Buff::GetAbility(this);
  v13 = (*(v12->_vptr_IHandleEntity + 229))(v12, &vec3_origin, 0);
  flSmoothness = this->flSmoothness;
  this->m_iTotalDrainAmount = 0;
  this->drain_range = this->drain_range_buffer + v13;
  CDOTA_Buff::StartIntervalThink(this, flSmoothness, v15);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0 )
  {
    v18 = 0;
    v19 = &v17[this->m_hTarget.m_Index & 0x1FF];
    if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
    {
      m_pInstance = v19->m_pInstance;
      if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
      {
        v28 = CDOTA_Buff::GetCaster(this);
        v29 = CDOTA_Buff::GetCaster(this);
        ParticleManager = GetParticleManager();
        this->m_iLinkIndex = CDOTA_ParticleManager::CreateParticle(
                               ParticleManager,
                               "particles/units/heroes/hero_razor/razor_static_link.vpcf",
                               2,
                               v29,
                               0,
                               v28);
        v31 = CDOTA_Buff::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v31);
        v33 = CDOTA_Buff::GetCaster(this);
        LODWORD(v28) = this->m_iLinkIndex;
        pEnt = v33;
        v34 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v34, v28, 0, pEnt, 5, "attach_static", *AbsOrigin, 1);
        LODWORD(AbsOrigin) = this->m_iLinkIndex;
        v35 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(
          v35,
          AbsOrigin,
          1,
          m_pInstance,
          5,
          "attach_hitloc",
          vec3_invalid,
          1);
        CDOTA_Buff::AddParticle(this, this->m_iLinkIndex, 0, 0, -1, 0, 0);
        KeyValues::KeyValues(&kv, "modifier_razor_link_vision");
        KeyValues::SetFloat(&kv, "duration", v36);
        v37 = CDOTA_Buff::GetAbility(this);
        v38 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v38, v37, "modifier_razor_link_vision", &kv, 0);
        v18 = m_pInstance;
        KeyValues::~KeyValues(&kv);
      }
    }
  }
  else
  {
    v18 = 0;
  }
  v20 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v20, 1517, 0.5, 0.5, 9, 0, 1.0);
  KeyValues::KeyValues(&kv, "modifier_razor_static_link_");
  KeyValues::SetFloat(&kv, "duration", v21);
  v22 = CDOTA_Buff::GetAbility(this);
  v23 = CDOTA_Buff::GetCaster(this);
  v24 = CDOTA_Buff::GetCaster(this);
  this->pBuffPositive = CDOTA_BaseNPC::AddNewModifier(v24, v23, v22, "modifier_razor_static_link_buff", &kv, 0);
  v25 = CDOTA_Buff::GetAbility(this);
  v26 = CDOTA_Buff::GetCaster(this);
  this->pBuffNegative = CDOTA_BaseNPC::AddNewModifier(v18, v26, v25, "modifier_razor_static_link_debuff", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Razor_StaticLink::OnRefresh  (line 465, @0x00000000029fa0b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "drain_duration", "drain_rate", "drain_range_buffer", "special_bonus_unique_razor"
void __fastcall CDOTA_Modifier_Razor_StaticLink::OnRefresh(CDOTA_Modifier_Razor_StaticLink *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->drain_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "drain_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_10:
    this->drain_rate = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_11:
    this->drain_range_buffer = 0;
    goto LABEL_5;
  }
  this->drain_duration = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_10;
LABEL_3:
  this->drain_rate = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "drain_rate", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_11;
LABEL_4:
  this->drain_range_buffer = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "drain_range_buffer", -1, 0);
LABEL_5:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_razor", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->drain_rate += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v8 = CDOTA_Buff::GetAbility(this);
  this->drain_range = this->drain_range_buffer + (*(v8->_vptr_IHandleEntity + 229))(v8, &vec3_origin, 0);
}


// CDOTA_Modifier_Razor_StaticLink::OnIntervalThink  (line 482, @0x00000000029c4fc0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Razor_StaticLink::OnIntervalThink(CDOTA_Modifier_Razor_StaticLink *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v8; // rax
  CDOTA_Buff *pBuffPositive; // rdi
  int v10; // esi
  unsigned int v11; // r12d

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC
    && (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0
    && (Parent = CDOTA_Buff::GetParent(this),
        AbsOrigin = CBaseEntity::GetAbsOrigin(Parent),
        v8 = CBaseEntity::GetAbsOrigin(m_pInstance),
        fsqrt(((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x)) + ((v8->y - AbsOrigin->y) * (v8->y - AbsOrigin->y))) <= this->drain_range) )
  {
    pBuffPositive = this->pBuffPositive;
    v10 = this->drain_rate + this->m_iTotalDrainAmount;
    this->m_iTotalDrainAmount = v10;
    v11 = (v10 * this->flSmoothness);
    (*(pBuffPositive->_vptr_CDOTA_Buff + 63))(pBuffPositive, 1, this->drain_duration);
    (*(this->pBuffNegative->_vptr_CDOTA_Buff + 63))(this->pBuffNegative, 1, this->drain_duration);
    (*(this->pBuffPositive->_vptr_CDOTA_Buff + 28))(this->pBuffPositive, v11);
    (*(this->pBuffNegative->_vptr_CDOTA_Buff + 28))(this->pBuffNegative, v11);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Razor_StaticLink::OnDestroy  (line 512, @0x00000000029c4d40, libserver.so)  // inlines: Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_razor_link_vision"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Razor_StaticLink::OnDestroy(CDOTA_Modifier_Razor_StaticLink *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *v11; // [rsp+8h] [rbp-18h]

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_razor_link_vision");
      }
    }
  }
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1517);
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      v11 = Ability;
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = v11->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, Caster, m_iAbilityID);
  }
}


// CDOTA_Modifier_Razor_StaticLink_Buff::~CDOTA_Modifier_Razor_StaticLink_Buff  (line 539, @0x0000000002a10d90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Razor_StaticLink_Buff::~CDOTA_Modifier_Razor_StaticLink_Buff(
        CDOTA_Modifier_Razor_StaticLink_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4382EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Razor_StaticLink_Buff::~CDOTA_Modifier_Razor_StaticLink_Buff  (line 539, @0x0000000002a10db0, libserver.so)  // inlines: ~CDOTA_Modifier_Razor_StaticLink_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Razor_StaticLink_Buff::~CDOTA_Modifier_Razor_StaticLink_Buff(
        CDOTA_Modifier_Razor_StaticLink_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4382EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_StaticLink_Buff::IsPurgable  (line 547, @0x0000000002a0bf90, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_StaticLink_Buff::IsPurgable(CDOTA_Modifier_Razor_StaticLink_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Razor_StaticLink_Buff::GetAttributes  (line 551, @0x0000000002a0bfa0, libserver.so)
int __fastcall CDOTA_Modifier_Razor_StaticLink_Buff::GetAttributes(CDOTA_Modifier_Razor_StaticLink_Buff *const this)
{
  return 2;
}


// CDOTA_Modifier_Razor_StaticLink_Buff::OnCreated  (line 561, @0x00000000029b8e80, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_razor/razor_static_link_buff.vpcf"
void __fastcall CDOTA_Modifier_Razor_StaticLink_Buff::OnCreated(
        CDOTA_Modifier_Razor_StaticLink_Buff *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CDOTA_ParticleManager *v6; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_razor/razor_static_link_buff.vpcf",
               1,
               Parent,
               0,
               0);
  this->m_nFXIndex = Particle;
  LODWORD(Parent) = Particle;
  v6 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v6, Parent, 1, 0.007812501848093234, 1.0);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Razor_StaticLink_Buff::OnStackCountChanged  (line 572, @0x00000000029b7480, libserver.so)  // inlines: Vector
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControl
void __fastcall CDOTA_Modifier_Razor_StaticLink_Buff::OnStackCountChanged(
        CDOTA_Modifier_Razor_StaticLink_Buff *const this,
        int iOldCount)
{
  CDOTA_Modifier_Razor_StaticLink_Buff *v2; // rbx
  int v3; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  double v5; // [rsp+0h] [rbp-20h]
  float v6; // [rsp+8h] [rbp-18h]

  v2 = this;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, iOldCount);
  LODWORD(v2) = v2->m_nFXIndex;
  *&v5 = v3;
  *(&v5 + 1) = v3;
  v6 = v3;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v2, 1, v5, v6);
}


// CDOTA_Modifier_Razor_StaticLink_Buff::DeclareFunctions  (line 582, @0x00000000029b6240, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Razor_StaticLink_Buff::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Razor_StaticLink_Buff::DeclareFunctions(
        CDOTA_Modifier_Razor_StaticLink_Buff *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Razor_StaticLink_Buff::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Razor_StaticLink_Buff::GetModifierPreAttack_BonusDamage  (line 589, @0x00000000029b6260, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_StaticLink_Buff::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Razor_StaticLink_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::~CDOTA_Modifier_Razor_StaticLink_Debuff  (line 599, @0x0000000002a10d40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::~CDOTA_Modifier_Razor_StaticLink_Debuff(
        CDOTA_Modifier_Razor_StaticLink_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_43831D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::~CDOTA_Modifier_Razor_StaticLink_Debuff  (line 599, @0x0000000002a10d60, libserver.so)  // inlines: ~CDOTA_Modifier_Razor_StaticLink_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::~CDOTA_Modifier_Razor_StaticLink_Debuff(
        CDOTA_Modifier_Razor_StaticLink_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_43831D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::IsDebuff  (line 604, @0x0000000002a0bfb0, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::IsDebuff(CDOTA_Modifier_Razor_StaticLink_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::IsPurgable  (line 609, @0x0000000002a0bfc0, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::IsPurgable(CDOTA_Modifier_Razor_StaticLink_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::GetAttributes  (line 613, @0x0000000002a0bfd0, libserver.so)
int __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::GetAttributes(
        CDOTA_Modifier_Razor_StaticLink_Debuff *const this)
{
  return 2;
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::OnCreated  (line 623, @0x00000000029b8f30, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_razor/razor_static_link_debuff.vpcf"
void __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::OnCreated(
        CDOTA_Modifier_Razor_StaticLink_Debuff *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CDOTA_ParticleManager *v6; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_razor/razor_static_link_debuff.vpcf",
               1,
               Parent,
               0,
               0);
  this->m_nFXIndex = Particle;
  LODWORD(Parent) = Particle;
  v6 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v6, Parent, 1, 0.007812501848093234, 1.0);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::OnStackCountChanged  (line 634, @0x00000000029b74e0, libserver.so)  // inlines: Vector
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControl
void __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::OnStackCountChanged(
        CDOTA_Modifier_Razor_StaticLink_Debuff *const this,
        int iOldCount)
{
  CDOTA_Modifier_Razor_StaticLink_Debuff *v2; // rbx
  int v3; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  double v5; // [rsp+0h] [rbp-20h]
  float v6; // [rsp+8h] [rbp-18h]

  v2 = this;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, iOldCount);
  LODWORD(v2) = v2->m_nFXIndex;
  *&v5 = v3;
  *(&v5 + 1) = v3;
  v6 = v3;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v2, 1, v5, v6);
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::DeclareFunctions  (line 644, @0x00000000029b6290, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Razor_StaticLink_Debuff::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::DeclareFunctions(
        CDOTA_Modifier_Razor_StaticLink_Debuff *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Razor_StaticLink_Debuff::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Razor_StaticLink_Debuff::GetModifierPreAttack_BonusDamage  (line 651, @0x00000000029b62b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_StaticLink_Debuff::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Razor_StaticLink_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = -v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Razor_Link_Vision::~CDOTA_Modifier_Razor_Link_Vision  (line 661, @0x0000000002a10cf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Razor_Link_Vision::~CDOTA_Modifier_Razor_Link_Vision(
        CDOTA_Modifier_Razor_Link_Vision *const this)
{
  this->_vptr_CDOTA_Buff = &off_43834F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Razor_Link_Vision::~CDOTA_Modifier_Razor_Link_Vision  (line 661, @0x0000000002a10d10, libserver.so)  // inlines: ~CDOTA_Modifier_Razor_Link_Vision
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Razor_Link_Vision::~CDOTA_Modifier_Razor_Link_Vision(
        CDOTA_Modifier_Razor_Link_Vision *const this)
{
  this->_vptr_CDOTA_Buff = &off_43834F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_Link_Vision::IsDebuff  (line 665, @0x0000000002a0bfe0, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_Link_Vision::IsDebuff(CDOTA_Modifier_Razor_Link_Vision *const this)
{
  return 1;
}


// CDOTA_Modifier_Razor_Link_Vision::IsHidden  (line 666, @0x0000000002a0bff0, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_Link_Vision::IsHidden(CDOTA_Modifier_Razor_Link_Vision *const this)
{
  return 1;
}


// CDOTA_Modifier_Razor_Link_Vision::IsPurgable  (line 667, @0x0000000002a0c000, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_Link_Vision::IsPurgable(CDOTA_Modifier_Razor_Link_Vision *const this)
{
  return 0;
}


// CDOTA_Modifier_Razor_Link_Vision::CheckState  (line 675, @0x00000000029b62e0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Razor_Link_Vision::CheckState(
        CDOTA_Modifier_Razor_Link_Vision *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400uLL;
  buffState->m_nDisabledStateMask &= ~0x400uLL;
}


// CDOTA_Ability_Razor_UnstableCurrent::~CDOTA_Ability_Razor_UnstableCurrent  (line 688, @0x0000000002a17fa0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Razor_UnstableCurrent::~CDOTA_Ability_Razor_UnstableCurrent(
        CDOTA_Ability_Razor_UnstableCurrent *const this)
{
  this->_vptr_IHandleEntity = &off_4383850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Razor_UnstableCurrent::~CDOTA_Ability_Razor_UnstableCurrent  (line 688, @0x0000000002a17fc0, libserver.so)  // inlines: ~CDOTA_Ability_Razor_UnstableCurrent
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Razor_UnstableCurrent::~CDOTA_Ability_Razor_UnstableCurrent(
        CDOTA_Ability_Razor_UnstableCurrent *const this)
{
  this->_vptr_IHandleEntity = &off_4383850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Razor_UnstableCurrent::Schema_DynamicBinding  (line 690, @0x0000000002a0c010, libserver.so)
// globals: CDOTA_Ability_Razor_UnstableCurrent::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Razor_UnstableCurrent::Schema_DynamicBinding(
        const CDOTA_Ability_Razor_UnstableCurrent *const this)
{
  return CDOTA_Ability_Razor_UnstableCurrent::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 690, @0x0000000002a0c020, libserver.so)
// globals: CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::DestructInstance  (line 690, @0x0000000002a0c030, libserver.so)  // inlines: Destruct<CDOTA_Ability_Razor_UnstableCurrent>
void __fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::FreeInstance  (line 690, @0x0000000002a0c050, libserver.so)
void __fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::CanAllocate  (line 690, @0x0000000002a0c070, libserver.so)
bool __fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 690, @0x0000000002a0c080, libserver.so)
// globals: CDOTA_Ability_Razor_UnstableCurrent::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Razor_UnstableCurrent::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::AllocateInstance  (line 690, @0x0000000002a10640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::ConstructInstance  (line 690, @0x0000000002a148e0, libserver.so)  // inlines: CDOTA_Ability_Razor_UnstableCurrent, Construct<CDOTA_Ability_Razor_UnstableCurrent>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4383850;
  }
  return p;
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 690, @0x0000000002a203f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 690, @0x0000000002a20410, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal  (line 690, @0x0000000002a3aa90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "razor_unstable_current", "CDOTA_Ability_Razor_UnstableCurrent"
// globals: `guard variable for'CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass, CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass, __dso_handle, CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo, CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo
CEntityClass *__cdecl CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass);
    CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass._vptr_CEntityClass = off_43837D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass);
    __cxa_atexit(
      CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Razor_UnstableCurrentClass != 0 )
    return &CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass;
  if ( `guard variable for'CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo,
      "CDOTA_Ability_Razor_UnstableCurrent",
      "razor_unstable_current",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo);
  }
  CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass.m_pClassInfo = &CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo;
  CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass.m_pBaseClassInfo = CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Razor_UnstableCurrentClass = &CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass;
  CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClassInfo.m_pClass = &CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass;
  CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Razor_UnstableCurrentClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Razor_UnstableCurrent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_UnstableCurrentClass;
}


// CDOTA_Ability_Razor_UnstableCurrent::GetIntrinsicModifierName  (line 693, @0x0000000002a0c090, libserver.so)
// strings: "modifier_razor_unstable_current"
const char *__fastcall CDOTA_Ability_Razor_UnstableCurrent::GetIntrinsicModifierName(
        CDOTA_Ability_Razor_UnstableCurrent *const this)
{
  return "modifier_razor_unstable_current";
}


// CDOTA_Modifier_Razor_UnstableCurrent::~CDOTA_Modifier_Razor_UnstableCurrent  (line 702, @0x0000000002a10ca0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent::~CDOTA_Modifier_Razor_UnstableCurrent(
        CDOTA_Modifier_Razor_UnstableCurrent *const this)
{
  this->_vptr_CDOTA_Buff = &off_4384310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Razor_UnstableCurrent::~CDOTA_Modifier_Razor_UnstableCurrent  (line 702, @0x0000000002a10cc0, libserver.so)  // inlines: ~CDOTA_Modifier_Razor_UnstableCurrent
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent::~CDOTA_Modifier_Razor_UnstableCurrent(
        CDOTA_Modifier_Razor_UnstableCurrent *const this)
{
  this->_vptr_CDOTA_Buff = &off_4384310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_UnstableCurrent::IsHidden  (line 709, @0x0000000002a0c0a0, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_UnstableCurrent::IsHidden(CDOTA_Modifier_Razor_UnstableCurrent *const this)
{
  return 1;
}


// CDOTA_Modifier_Razor_UnstableCurrent::OnCreated  (line 726, @0x00000000029f86a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "pause_duration"
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent::OnCreated(
        CDOTA_Modifier_Razor_UnstableCurrent *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->slow_duration = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->movement_speed_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "slow_duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->pause_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "pause_duration", -1, 0);
    return;
  }
LABEL_7:
  this->pause_duration = 0.0;
}


// CDOTA_Modifier_Razor_UnstableCurrent::OnRefresh  (line 735, @0x00000000029f85d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "pause_duration"
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent::OnRefresh(
        CDOTA_Modifier_Razor_UnstableCurrent *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->slow_duration = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->movement_speed_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "slow_duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->pause_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "pause_duration", -1, 0);
    return;
  }
LABEL_7:
  this->pause_duration = 0.0;
}


// CDOTA_Modifier_Razor_UnstableCurrent::DeclareFunctions  (line 744, @0x00000000029b6300, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Razor_UnstableCurrent::OnAbilityExecuted(CModifierParams const&), CDOTA_Modifier_Razor_UnstableCurrent::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent::DeclareFunctions(
        CDOTA_Modifier_Razor_UnstableCurrent *const this)
{
  this->m_Functions[128].__pfn = CDOTA_Modifier_Razor_UnstableCurrent::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Razor_UnstableCurrent::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Razor_UnstableCurrent::OnAbilityExecuted  (line 752, @0x00000000029cabe0, libserver.so)  // inlines: Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, UnitNPC, _V_strcmp, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*, operator bool
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, Purge, CEntityHandle::operator CEntityInstance*, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues (17 total)
// strings: "Hero_razor.UnstableCurrent", "particles/units/heroes/hero_tusk/tusk_snowball.vpcf", "spirit_breaker_charge_of_darkness", "particles/units/heroes/hero_razor/razor_unstable_current.vpcf", "attach_hitloc", "modifier_rooted" (9 total)
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_UnstableCurrent::OnAbilityExecuted(
        CDOTA_Modifier_Razor_UnstableCurrent *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  uint32 v12; // esi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // r13
  CDOTABaseAbility *Ability; // rax
  int v17; // r15d
  CDOTABaseAbility *v18; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v20; // rax
  CEntityInstance *v21; // rax
  const char **m_Id; // rax
  const char *v23; // rax
  const char *v24; // r14
  CDOTA_BaseNPC *v25; // r14
  CDOTA_BaseNPC *v26; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v28; // r14
  CDOTA_ParticleManager *v29; // rax
  __int64 v30; // r12
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  float v33; // xmm1_4
  CDOTABaseAbility *v34; // r14
  CDOTA_BaseNPC *v35; // rax
  float v36; // xmm1_4
  CDOTABaseAbility *v37; // r15
  CDOTA_BaseNPC *v38; // rax
  const char **v39; // rax
  const char *v40; // rsi
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-54h]
  KeyValues kv2; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16
  Vector v45; // 0:xmm0_8.8,8:xmm1_4.4

  v43 = __readfsqword(0x28u);
  if ( params->ability.m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->ability.m_Index & 0x1FF]) == 0
    || params->ability.m_Index != v5->m_EHandle.m_Index
    || (v39 = v5->m_pInstance[18].m_iszPrivateVScripts.u.m_Id) == 0
    || (v40 = *v39, *v39 == 0)
    || (*&result.m_eType = 1, strcmp(v40, "item_tpscroll") != 0) )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_9;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v7 == 0 )
      goto LABEL_9;
    v8 = &v7[params->htarget.m_Index & 0x1FF];
    if ( v8 == 0 )
      goto LABEL_9;
    if ( m_Index != v8->m_EHandle.m_Index )
      goto LABEL_9;
    m_pInstance = v8->m_pInstance;
    if ( v8->m_pInstance == 0 )
      goto LABEL_9;
    if ( !m_pInstance->m_bIsDOTANPC )
      goto LABEL_9;
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent != m_pInstance )
      goto LABEL_9;
    v12 = params->hunit.m_Index;
    if ( v12 + 2 <= 1 )
      goto LABEL_9;
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v13 == 0 )
      goto LABEL_9;
    v14 = &v13[params->hunit.m_Index & 0x1FF];
    if ( v14 == 0 )
      goto LABEL_9;
    if ( v12 != v14->m_EHandle.m_Index )
      goto LABEL_9;
    v15 = v14->m_pInstance;
    if ( v14->m_pInstance == 0
      || BYTE3(v15[7]._vptr_IHandleEntity) == 0
      || LOBYTE(v15[71]._vptr_IHandleEntity) != 0
      || (BYTE1(v15[58]._vptr_IHandleEntity) & 1) != 0
      || HIBYTE(v15[7].m_CScriptComponent) == Parent->m_iTeamNum.m_Value
      || CDOTA_Buff::GetCaster(this) != 0 && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    {
      goto LABEL_9;
    }
    if ( (BYTE1(v15[58]._vptr_IHandleEntity) & 2) != 0 )
      goto LABEL_9;
    Ability = CDOTA_Buff::GetAbility(this);
    v17 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
    v18 = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, v15, v18, v17, 2, 0);
    CDOTA_BaseNPC::UnitEmitSound(v15, "Hero_razor.UnstableCurrent", 0.0, 0, 0);
    v20 = CDOTA_Buff::GetAbility(this);
    Purge(v15, v20, 2);
    v21 = CEntityHandle::operator CEntityInstance *(&params->ability);
    if ( v21 == 0 )
    {
LABEL_32:
      v25 = CDOTA_Buff::GetCaster(this);
      v26 = CDOTA_Buff::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v26) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_razor/razor_unstable_current.vpcf",
                       2,
                       v26,
                       0,
                       v25);
      v28 = CDOTA_Buff::GetCaster(this);
      v29 = GetParticleManager();
      v30 = *&vec3_invalid.x;
      vecFallbackPosition = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v29, v26, 0, v28, 5, "attach_hitloc", vec3_invalid, 1);
      v31 = GetParticleManager();
      *&v45.x = v30;
      v45.z = vecFallbackPosition;
      CDOTA_ParticleManager::SetParticleControlEnt(v31, v26, 1, v15, 5, "attach_hitloc", v45, 1);
      v32 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v32, v26);
LABEL_9:
      *&result.m_eType = 1;
      goto LABEL_10;
    }
    m_Id = v21[18].m_iszPrivateVScripts.u.m_Id;
    if ( m_Id != 0 && (v23 = *m_Id) != 0 )
    {
      v24 = v23;
      if ( strcmp(v23, "particles/units/heroes/hero_tusk/tusk_snowball.vpcf") == 0 )
        goto LABEL_30;
    }
    else
    {
      v24 = "<NoAbilityName>";
    }
    KeyValues::KeyValues(&kv2, "modifier_razor_unstablecurrent_slow");
    KeyValues::SetFloat(&kv2, "duration", v36);
    v37 = CDOTA_Buff::GetAbility(this);
    v38 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v15, v38, v37, "modifier_razor_unstablecurrent_slow", &kv2, 0);
    KeyValues::~KeyValues(&kv2);
LABEL_30:
    if ( strcmp(v24, "spirit_breaker_charge_of_darkness") != 0 )
    {
      KeyValues::KeyValues(&kv2, "modifier_rooted");
      KeyValues::SetFloat(&kv2, "duration", v33);
      v34 = CDOTA_Buff::GetAbility(this);
      v35 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v15, v35, v34, "modifier_rooted", &kv2, 0);
      KeyValues::~KeyValues(&kv2);
    }
    goto LABEL_32;
  }
LABEL_10:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Razor_UnstableCurrent::GetModifierMoveSpeedBonus_Percentage  (line 812, @0x00000000029bc230, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_UnstableCurrent::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Razor_UnstableCurrent *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->movement_speed_pct;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Razor_UnstableCurrent_Slow::~CDOTA_Modifier_Razor_UnstableCurrent_Slow  (line 828, @0x0000000002a10c50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent_Slow::~CDOTA_Modifier_Razor_UnstableCurrent_Slow(
        CDOTA_Modifier_Razor_UnstableCurrent_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4384630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Razor_UnstableCurrent_Slow::~CDOTA_Modifier_Razor_UnstableCurrent_Slow  (line 828, @0x0000000002a10c70, libserver.so)  // inlines: ~CDOTA_Modifier_Razor_UnstableCurrent_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent_Slow::~CDOTA_Modifier_Razor_UnstableCurrent_Slow(
        CDOTA_Modifier_Razor_UnstableCurrent_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4384630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_UnstableCurrent_Slow::OnCreated  (line 849, @0x00000000029f72e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_amount"
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent_Slow::OnCreated(
        CDOTA_Modifier_Razor_UnstableCurrent_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_amount", -1, 0);
  else
    this->slow_amount = 0;
}


// CDOTA_Modifier_Razor_UnstableCurrent_Slow::OnRefresh  (line 856, @0x00000000029f7400, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_amount"
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent_Slow::OnRefresh(
        CDOTA_Modifier_Razor_UnstableCurrent_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_amount", -1, 0);
  else
    this->slow_amount = 0;
}


// CDOTA_Modifier_Razor_UnstableCurrent_Slow::DeclareFunctions  (line 863, @0x00000000029b6340, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Razor_UnstableCurrent_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Razor_UnstableCurrent_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Razor_UnstableCurrent_Slow::DeclareFunctions(
        CDOTA_Modifier_Razor_UnstableCurrent_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Razor_UnstableCurrent_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Razor_UnstableCurrent_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Razor_UnstableCurrent_Slow::GetModifierMoveSpeedBonus_Percentage  (line 871, @0x00000000029b6380, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_UnstableCurrent_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Razor_UnstableCurrent_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_amount;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Razor_UnstableCurrent_Slow::GetModifierAttackSpeedBonus_Constant  (line 878, @0x00000000029b63a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_UnstableCurrent_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Razor_UnstableCurrent_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_amount;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::~CDOTA_Ability_Razor_EyeOfTheStorm  (line 889, @0x0000000002a17ff0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::~CDOTA_Ability_Razor_EyeOfTheStorm(
        CDOTA_Ability_Razor_EyeOfTheStorm *const this)
{
  this->_vptr_IHandleEntity = &off_4384990;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Razor_EyeOfTheStorm::~CDOTA_Ability_Razor_EyeOfTheStorm  (line 889, @0x0000000002a18010, libserver.so)  // inlines: ~CDOTA_Ability_Razor_EyeOfTheStorm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::~CDOTA_Ability_Razor_EyeOfTheStorm(
        CDOTA_Ability_Razor_EyeOfTheStorm *const this)
{
  this->_vptr_IHandleEntity = &off_4384990;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Razor_EyeOfTheStorm::Schema_DynamicBinding  (line 891, @0x0000000002a0c0b0, libserver.so)
// globals: CDOTA_Ability_Razor_EyeOfTheStorm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Razor_EyeOfTheStorm::Schema_DynamicBinding(
        const CDOTA_Ability_Razor_EyeOfTheStorm *const this)
{
  return CDOTA_Ability_Razor_EyeOfTheStorm::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 891, @0x0000000002a0c0c0, libserver.so)
// globals: CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::DestructInstance  (line 891, @0x0000000002a0c0d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Razor_EyeOfTheStorm>
void __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::FreeInstance  (line 891, @0x0000000002a0c0f0, libserver.so)
void __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::CanAllocate  (line 891, @0x0000000002a0c110, libserver.so)
bool __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 891, @0x0000000002a0c120, libserver.so)
// globals: CDOTA_Ability_Razor_EyeOfTheStorm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Razor_EyeOfTheStorm::s_pSchemaBinding;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::AllocateInstance  (line 891, @0x0000000002a10680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::ConstructInstance  (line 891, @0x0000000002a14910, libserver.so)  // inlines: CDOTA_Ability_Razor_EyeOfTheStorm, Construct<CDOTA_Ability_Razor_EyeOfTheStorm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4384990;
  }
  return p;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 891, @0x0000000002a20440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 891, @0x0000000002a20460, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal  (line 891, @0x0000000002a3abe0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "razor_eye_of_the_storm", "CDOTA_Ability_Razor_EyeOfTheStorm"
// globals: `guard variable for'CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass, CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass, __dso_handle, CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo, CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo
CEntityClass *__cdecl CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass);
    CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass._vptr_CEntityClass = off_4384910;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass);
    __cxa_atexit(
      CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Razor_EyeOfTheStormClass != 0 )
    return &CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass;
  if ( `guard variable for'CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo,
      "CDOTA_Ability_Razor_EyeOfTheStorm",
      "razor_eye_of_the_storm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo);
  }
  CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass.m_pClassInfo = &CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo;
  CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass.m_pBaseClassInfo = CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Razor_EyeOfTheStormClass = &CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass;
  CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClassInfo.m_pClass = &CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass;
  CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Razor_EyeOfTheStormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Razor_EyeOfTheStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Razor_EyeOfTheStormClass;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::YouForgotToImplementOrDeclareServerClass  (line 902, @0x00000000029b63c0, libserver.so)
int __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Razor_EyeOfTheStorm *const this)
{
  return 0;
}


// CDOTA_Ability_Razor_EyeOfTheStorm::GetServerClass  (line 902, @0x00000000029c9170, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Razor_EyeOfTheStorm::GetServerClass(
        CDOTA_Ability_Razor_EyeOfTheStorm *const this)
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


// CDOTA_Ability_Razor_EyeOfTheStorm::OnSpellStart  (line 911, @0x00000000029de4f0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_razor_eye_of_the_storm", "Hero_Razor.Storm.Cast"
void __fastcall CDOTA_Ability_Razor_EyeOfTheStorm::OnSpellStart(CDOTA_Ability_Razor_EyeOfTheStorm *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_razor_eye_of_the_storm");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_razor_eye_of_the_storm", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v5, 1519, 0.1, 0.1, 9, 0, 1.0);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Razor.Storm.Cast", v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::~CDOTA_Modifier_Razor_EyeOfTheStorm  (line 932, @0x0000000002a10c00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::~CDOTA_Modifier_Razor_EyeOfTheStorm(
        CDOTA_Modifier_Razor_EyeOfTheStorm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4385450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::~CDOTA_Modifier_Razor_EyeOfTheStorm  (line 932, @0x0000000002a10c20, libserver.so)  // inlines: ~CDOTA_Modifier_Razor_EyeOfTheStorm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::~CDOTA_Modifier_Razor_EyeOfTheStorm(
        CDOTA_Modifier_Razor_EyeOfTheStorm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4385450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::GetAttributes  (line 937, @0x0000000002a131e0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::GetAttributes(CDOTA_Modifier_Razor_EyeOfTheStorm *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 3;
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::GetEffectName  (line 948, @0x0000000002a0c130, libserver.so)
// strings: "particles/units/heroes/hero_razor/razor_rain_storm.vpcf"
const char *__fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::GetEffectName(
        CDOTA_Modifier_Razor_EyeOfTheStorm *const this)
{
  return "particles/units/heroes/hero_razor/razor_rain_storm.vpcf";
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::OnCreated  (line 968, @0x00000000029fa460, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::StartIntervalThink
// strings: "strike_interval", "strike_interval_scepter"
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::OnCreated(
        CDOTA_Modifier_Razor_EyeOfTheStorm *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  bool HasScepter; // al
  float v10; // xmm1_4
  float v11; // xmm0_4
  CDOTABaseAbility *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm1_4
  float strike_interval; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
  else
    this->damage = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( v6 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "strike_interval", -1, 0);
  strike_interval = LevelSpecialValue;
  Parent = CDOTA_Buff::GetParent(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Parent);
  v11 = strike_interval;
  if ( HasScepter && (v12 = CDOTA_Buff::GetAbility(this), v11 = 0.0, v12 != 0) )
  {
    v13 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v12, "strike_interval_scepter", -1, 0);
    CDOTA_Buff::StartIntervalThink(this, v13, v14);
  }
  else
  {
    CDOTA_Buff::StartIntervalThink(this, v11, v10);
  }
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::OnRefresh  (line 1004, @0x00000000029fa310, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::StartIntervalThink
// strings: "strike_interval", "strike_interval_scepter"
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::OnRefresh(
        CDOTA_Modifier_Razor_EyeOfTheStorm *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  bool HasScepter; // al
  float v10; // xmm1_4
  float v11; // xmm0_4
  CDOTABaseAbility *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm1_4
  float strike_interval; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
  else
    this->damage = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( v6 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "strike_interval", -1, 0);
  strike_interval = LevelSpecialValue;
  Parent = CDOTA_Buff::GetParent(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Parent);
  v11 = strike_interval;
  if ( HasScepter && (v12 = CDOTA_Buff::GetAbility(this), v11 = 0.0, v12 != 0) )
  {
    v13 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v12, "strike_interval_scepter", -1, 0);
    CDOTA_Buff::StartIntervalThink(this, v13, v14);
  }
  else
  {
    CDOTA_Buff::StartIntervalThink(this, v11, v10);
  }
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::OnDestroy  (line 1027, @0x00000000029b9d70, libserver.so)  // inlines: GetAbilityData
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::OnDestroy(CDOTA_Modifier_Razor_EyeOfTheStorm *const this)
{
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v6; // [rsp+8h] [rbp-18h]

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      v6 = Ability;
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = v6->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, Caster, m_iAbilityID);
  }
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::DeclareFunctions  (line 1045, @0x00000000029b63d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Razor_EyeOfTheStorm::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::DeclareFunctions(CDOTA_Modifier_Razor_EyeOfTheStorm *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Razor_EyeOfTheStorm::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::OnDeath  (line 1052, @0x00000000029c2bf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_razor_eye_of_the_storm"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::OnDeath(
        CDOTA_Modifier_Razor_EyeOfTheStorm *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  if ( !m_pInstance->m_bIsDOTANPC )
    return 1uLL;
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == 0 || (Parent->m_iUnitType & 1) == 0 )
    return 1uLL;
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_razor_eye_of_the_storm");
  return 1uLL;
}


// CDOTA_Modifier_Razor_EyeOfTheStorm::OnIntervalThink  (line 1070, @0x00000000029da3e0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::IsInvisibleTo, CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle (24 total)
// strings: "particles/units/heroes/hero_razor/razor_storm_lightning_strike.vpcf", "attach_hitloc", "Hero_razor.lightning", "modifier_razor_eye_of_the_storm_armor"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm::OnIntervalThink(CDOTA_Modifier_Razor_EyeOfTheStorm *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int v3; // r13d
  CDOTA_BaseNPC *v4; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r13
  int Health; // r14d
  CHandle<CBaseEntity> *v10; // rax
  uint32 m_Index; // edx
  __int16 v12; // cx
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v18; // cx
  CEntityInstance *v19; // rax
  __m128i v20; // xmm3
  CEntityInstance *v21; // r13
  float v22; // r14d
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v32; // xmm1_4
  CDOTABaseAbility *v33; // r15
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  __int64 v36; // r13
  int v37; // r14d
  CHandle<CBaseEntity> *v38; // rax
  uint32 v39; // edx
  __int16 v40; // cx
  CEntityIdentity *v41; // rax
  CEntityIdentity *v42; // rax
  CDOTA_BaseNPC *v43; // r15
  CDOTA_BaseNPC *v44; // rax
  uint32 m_iUnitType; // eax
  CEntityIdentity *v46; // rax
  __int16 v47; // cx
  float flRadius; // [rsp+1Ch] [rbp-94h]
  EHANDLE hBestEntity; // [rsp+20h] [rbp-90h] BYREF
  double v50; // [rsp+30h] [rbp-80h]
  float v51; // [rsp+38h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-38h]

  entities.m_Size = 0;
  v54 = __readfsqword(0x28u);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v3 = !CDOTA_BaseNPC::HasScepter(Parent) ? 3 : 7;
  flRadius = this->radius;
  v4 = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, v4, flRadius, &entities, 2, v3, 400, 0, 0);
  hBestEntity.m_Index = -1;
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    Health = -1;
    while ( 1 )
    {
      v10 = &entities.m_Memory.m_pMemory[v8];
      m_Index = v10->m_Index;
      if ( v10->m_Index + 2 <= 1 )
        goto LABEL_3;
      v12 = v10->m_Index;
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
      if ( v13 == 0 )
        goto LABEL_3;
      v14 = &v13[v12 & 0x1FF];
      if ( v14 == 0 )
        goto LABEL_3;
      if ( m_Index != v14->m_EHandle.m_Index )
        goto LABEL_3;
      m_pInstance = v14->m_pInstance;
      if ( v14->m_pInstance == 0 )
        goto LABEL_3;
      if ( !m_pInstance->m_bIsDOTANPC )
        goto LABEL_3;
      Caster = CDOTA_Buff::GetCaster(this);
      if ( CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, Caster)
        || (m_pInstance->m_iUnitType & 0x810) != 0
        || (*(m_pInstance->_vptr_IHandleEntity + 405))(m_pInstance) != 0
        || Health != -1 && CBaseEntity::GetHealth(m_pInstance) >= Health )
      {
        goto LABEL_3;
      }
      Health = CBaseEntity::GetHealth(m_pInstance);
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hBestEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v18 & 0x7FFF;
        if ( entities.m_Size <= ++v8 )
        {
LABEL_19:
          if ( Health != -1 )
            goto LABEL_20;
          break;
        }
      }
      else
      {
        hBestEntity.m_Index = -1;
LABEL_3:
        if ( entities.m_Size <= ++v8 )
          goto LABEL_19;
      }
    }
  }
  v35 = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::HasScepter(v35) && entities.m_Size > 0 )
  {
    v36 = 0;
    v37 = -1;
    do
    {
      v38 = &entities.m_Memory.m_pMemory[v36];
      v39 = v38->m_Index;
      if ( v38->m_Index + 2 > 1 )
      {
        v40 = v38->m_Index;
        v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v38->m_Index) >> 9) & 0x3F];
        if ( v41 != 0 )
        {
          v42 = &v41[v40 & 0x1FF];
          if ( v42 != 0 && v39 == v42->m_EHandle.m_Index )
          {
            v43 = v42->m_pInstance;
            if ( v42->m_pInstance != 0 && v43->m_bIsDOTANPC )
            {
              v44 = CDOTA_Buff::GetCaster(this);
              if ( !CDOTA_BaseNPC::IsInvisibleTo(v43, v44) )
              {
                m_iUnitType = v43->m_iUnitType;
                if ( ((m_iUnitType & 4) != 0 || (m_iUnitType & 0x60) != 0)
                  && (v37 == -1 || CBaseEntity::GetHealth(v43) < v37) )
                {
                  v37 = CBaseEntity::GetHealth(v43);
                  v46 = v43->m_pEntity;
                  if ( v46 != 0 )
                  {
                    v47 = 0x7FFF;
                    if ( v46->m_EHandle.m_Index != -1 )
                      v47 = v46->m_EHandle.m_Index & 0x7FFF;
                    hBestEntity.m_Index = (((v46->m_EHandle.m_Index >> 15) - (v46->m_flags & 1)) << 15) | v47 & 0x7FFF;
                  }
                  else
                  {
                    hBestEntity.m_Index = -1;
                  }
                }
              }
            }
          }
        }
      }
      ++v36;
    }
    while ( entities.m_Size > v36 );
  }
LABEL_20:
  v19 = CEntityHandle::operator CEntityInstance *(&hBestEntity);
  v21 = v19;
  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
  {
    *v20.m128i_i32 = this->damage;
    v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
    Ability = CDOTA_Buff::GetAbility(this);
    v24 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v24, v21, Ability, v22, 1, 8);
    v25 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v25) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_razor/razor_storm_lightning_strike.vpcf",
                     1,
                     v25,
                     0,
                     0);
    v50 = 0.0;
    v51 = 512.0;
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOffset(v27, v25, 0, v50, v51);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v28, v25, 1, v21, 5, "attach_hitloc", vec3_invalid, 1);
    v29 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v29, v25);
    v30 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_razor.lightning", 0.0, 0, 0);
    if ( (v21[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
    {
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(v21, "modifier_razor_eye_of_the_storm_armor", 0);
      if ( ModifierByName != 0 )
        (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
      KeyValues::KeyValues(&kv, "modifier_razor_eye_of_the_storm_armor");
      (*(this->_vptr_CDOTA_Buff + 30))(this);
      v32 = 0.0;
      if ( g_pGameRules != 0 )
        v32 = *&g_pGameRules[18].m_szQuestName[20];
      KeyValues::SetFloat(&kv, "duration", v32);
      v33 = CDOTA_Buff::GetAbility(this);
      v34 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v21, v34, v33, "modifier_razor_eye_of_the_storm_armor", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::~CDOTA_Modifier_Razor_EyeOfTheStorm_Armor  (line 1158, @0x0000000002a10bb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::~CDOTA_Modifier_Razor_EyeOfTheStorm_Armor(
        CDOTA_Modifier_Razor_EyeOfTheStorm_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_4385770;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::~CDOTA_Modifier_Razor_EyeOfTheStorm_Armor  (line 1158, @0x0000000002a10bd0, libserver.so)  // inlines: ~CDOTA_Modifier_Razor_EyeOfTheStorm_Armor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::~CDOTA_Modifier_Razor_EyeOfTheStorm_Armor(
        CDOTA_Modifier_Razor_EyeOfTheStorm_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_4385770;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::IsPurgable  (line 1167, @0x0000000002a0c140, libserver.so)
bool __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::IsPurgable(
        CDOTA_Modifier_Razor_EyeOfTheStorm_Armor *const this)
{
  return 0;
}


// CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::DeclareFunctions  (line 1176, @0x00000000029b63f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::DeclareFunctions(
        CDOTA_Modifier_Razor_EyeOfTheStorm_Armor *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::OnDeath;
}


// CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::GetModifierPhysicalArmorBonus  (line 1184, @0x00000000029b6430, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Razor_EyeOfTheStorm_Armor *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = -v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::OnDeath  (line 1191, @0x00000000029c27a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Razor_EyeOfTheStorm_Armor::OnDeath(
        CDOTA_Modifier_Razor_EyeOfTheStorm_Armor *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetCaster(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


