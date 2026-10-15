// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:38
class CDOTA_Unit_Hero_Batrider : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Batrider(CDOTA_Unit_Hero_Batrider &);
	CDOTA_Unit_Hero_Batrider(CDOTA_Unit_Hero_Batrider &);
	CDOTA_Unit_Hero_Batrider();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool UsedGestureBasedAttackAnimation();
	virtual bool ShouldDoFlyHeightVisual();
	virtual bool HasFlyingVision();
	virtual ~CDOTA_Unit_Hero_Batrider();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[439] UsedGestureBasedAttackAnimation
	// vtable[488] ShouldDoFlyHeightVisual
	// vtable[445] HasFlyingVision
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:53
class C_CDOTA_Unit_Hero_Batrider_MapInstall {
	C_CDOTA_Unit_Hero_Batrider_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:66
class CDOTA_Ability_Batrider_StickyNapalm : public CDOTABaseAbility {
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
	CDOTA_Ability_Batrider_StickyNapalm(CDOTA_Ability_Batrider_StickyNapalm &);
	CDOTA_Ability_Batrider_StickyNapalm(CDOTA_Ability_Batrider_StickyNapalm &);
	CDOTA_Ability_Batrider_StickyNapalm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Batrider_StickyNapalm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:88
class C_CDOTA_Ability_Batrider_StickyNapalm_MapInstall {
	C_CDOTA_Ability_Batrider_StickyNapalm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:170
class CDOTA_Modifier_Batrider_StickyNapalm : public CDOTA_Buff {
public:

private:

	int movement_speed_pct;  // +0xba8
	int turn_rate_pct;  // +0xbac
	int damage;  // +0xbb0
	int m_nFXIndex;  // +0xbb4
	int m_nFXStackIndex;  // +0xbb8
	CDOTA_Modifier_Batrider_StickyNapalm();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierTurnRate_Percentage(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Batrider_StickyNapalm();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:314
class CDOTA_Ability_Batrider_Flamebreak : public CDOTABaseAbility {
public:

private:

	int m_iProjectile;  // +0x398
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
	CDOTA_Ability_Batrider_Flamebreak(CDOTA_Ability_Batrider_Flamebreak &);
	CDOTA_Ability_Batrider_Flamebreak(CDOTA_Ability_Batrider_Flamebreak &);
	CDOTA_Ability_Batrider_Flamebreak();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Batrider_Flamebreak();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:350
class C_CDOTA_Ability_Batrider_Flamebreak_MapInstall {
	C_CDOTA_Ability_Batrider_Flamebreak_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:542
class CDOTA_Ability_Batrider_Flamebreak_Knockback : public CDOTA_Modifier_Knockback {
public:

	CDOTA_Ability_Batrider_Flamebreak_Knockback();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsStunDebuff();
	virtual ~CDOTA_Ability_Batrider_Flamebreak_Knockback();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[16] IsStunDebuff
	// sizeof = 3072
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:567
class CDOTA_Modifier_Batrider_Flamebreak_Damage : public CDOTA_Buff {
public:

private:

	int damage_per_second;  // +0xba8
	CDOTA_Modifier_Batrider_Flamebreak_Damage();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Batrider_Flamebreak_Damage();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:610
class CDOTA_Ability_Batrider_Firefly : public CDOTABaseAbility {
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
	CDOTA_Ability_Batrider_Firefly(CDOTA_Ability_Batrider_Firefly &);
	CDOTA_Ability_Batrider_Firefly(CDOTA_Ability_Batrider_Firefly &);
	CDOTA_Ability_Batrider_Firefly();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Batrider_Firefly();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:671
class CDOTA_Modifier_Batrider_Firefly : public CDOTA_Buff {
public:

private:

	bool m_bActive;  // +0xba8

	int radius;  // +0xbac
	int m_ifirefly_Active;  // +0xbb0
	int tree_radius;  // +0xbb4
	int damage_per_second;  // +0xbb8
	float tick_interval;  // +0xbbc
	int m_nFXIndex;  // +0xbc0
	int m_nFXIndexB;  // +0xbc4
	float m_fNextDamageTick;  // +0xbc8
	CDOTA_Modifier_Batrider_Firefly();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetActivityModifiers(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	void Deactivate();
	virtual ~CDOTA_Modifier_Batrider_Firefly();

	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3056
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:886
class CDOTA_Ability_Batrider_FlamingLasso : public CDOTABaseAbility {
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
	CDOTA_Ability_Batrider_FlamingLasso(CDOTA_Ability_Batrider_FlamingLasso &);
	CDOTA_Ability_Batrider_FlamingLasso(CDOTA_Ability_Batrider_FlamingLasso &);
	CDOTA_Ability_Batrider_FlamingLasso();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Batrider_FlamingLasso();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:958
class CDOTA_Modifier_Batrider_FlamingLasso : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	int drag_distance;  // +0xbb4
	int break_distance;  // +0xbb8
	int m_nFXIndex;  // +0xbbc

	CDOTA_Modifier_Batrider_FlamingLasso();
	virtual bool IsStunDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsDebuff();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Batrider_FlamingLasso();

	// vtable[16] IsStunDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[12] IsDebuff
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:1113
class CDOTA_Modifier_Batrider_FlamingLasso_Self : public CDOTA_Buff {
public:

	CDOTA_Modifier_Batrider_FlamingLasso_Self();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual bool IsDebuff();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Batrider_FlamingLasso_Self();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[12] IsDebuff
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_batrider.cpp:1146
class CDOTA_Modifier_Batrider_FlamingLasso_Damage : public CDOTA_Buff {
public:

private:

	int max_ticks;  // +0xba8
	float damage_scepter;  // +0xbac
	float duration;  // +0xbb0
	CDOTA_Modifier_Batrider_FlamingLasso_Damage();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual ~CDOTA_Modifier_Batrider_FlamingLasso_Damage();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Batrider::~CDOTA_Unit_Hero_Batrider  (line 38, @0x0000000002ba2420, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Batrider::~CDOTA_Unit_Hero_Batrider(CDOTA_Unit_Hero_Batrider *const this)
{
  this->_vptr_IHandleEntity = &off_4491BF0;
  this->_vptr_INextBotEventResponder = &off_4492BD0;
  this->_vptr_CObstructionObject = &off_4492F00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Batrider::~CDOTA_Unit_Hero_Batrider  (line 38, @0x0000000002ba2460, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Batrider
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Batrider::~CDOTA_Unit_Hero_Batrider(CDOTA_Unit_Hero_Batrider *const this)
{
  this->_vptr_IHandleEntity = &off_4491BF0;
  this->_vptr_INextBotEventResponder = &off_4492BD0;
  this->_vptr_CObstructionObject = &off_4492F00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Batrider::Schema_DynamicBinding  (line 40, @0x0000000002b8ce40, libserver.so)
// globals: CDOTA_Unit_Hero_Batrider::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Batrider::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Batrider *const this)
{
  return CDOTA_Unit_Hero_Batrider::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002b8ce70, libserver.so)
// globals: CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002b8ce80, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Batrider>
void __fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002b8cea0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002b8cec0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002b8ced0, libserver.so)
// globals: CDOTA_Unit_Hero_Batrider::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Batrider::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002b96a20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002b9c2f0, libserver.so)  // inlines: CDOTA_Unit_Hero_Batrider, Construct<CDOTA_Unit_Hero_Batrider>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4491BF0;
    *(p + 236) = &off_4492BD0;
    *(p + 257) = &off_4492F00;
  }
  return p;
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002bac070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002bac2b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Batrider::GetEntityClassInternal  (line 40, @0x0000000002bcd5b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_batrider", "CDOTA_Unit_Hero_Batrider"
// globals: `guard variable for'CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass, CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass, __dso_handle, CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo, CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Batrider::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass);
    CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass._vptr_CEntityClass = off_4491B70;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_BatriderClass != 0 )
    return &CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo,
      "CDOTA_Unit_Hero_Batrider",
      "npc_dota_hero_batrider",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo);
  }
  CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass.m_pClassInfo = &CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo;
  CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_BatriderClass = &CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass;
  CDOTA_Unit_Hero_Batrider::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BatriderClassInfo.m_pClass = &CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass;
  CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_BatriderClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Batrider::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BatriderClass;
}


// CDOTA_Unit_Hero_Batrider::UsedGestureBasedAttackAnimation  (line 44, @0x0000000002b8cee0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Batrider::UsedGestureBasedAttackAnimation(CDOTA_Unit_Hero_Batrider *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Batrider::ShouldDoFlyHeightVisual  (line 45, @0x0000000002b8cef0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Batrider::ShouldDoFlyHeightVisual(CDOTA_Unit_Hero_Batrider *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Batrider::HasFlyingVision  (line 47, @0x0000000002ba5740, libserver.so)  // inlines: HasFlyingVision, InState
bool __fastcall CDOTA_Unit_Hero_Batrider::HasFlyingVision(CDOTA_Unit_Hero_Batrider *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iMoveCapabilities & 2) == 0 )
    return (this->m_nUnitState64.m_Value & 0x1000000) != 0;
  return result;
}


// CDOTA_Unit_Hero_Batrider::YouForgotToImplementOrDeclareServerClass  (line 53, @0x0000000002b33c30, libserver.so)
int __fastcall CDOTA_Unit_Hero_Batrider::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Batrider *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Batrider::GetServerClass  (line 53, @0x0000000002b4bea0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Batrider::GetServerClass(CDOTA_Unit_Hero_Batrider *const this)
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


// CDOTA_Ability_Batrider_StickyNapalm::~CDOTA_Ability_Batrider_StickyNapalm  (line 66, @0x0000000002ba0220, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Batrider_StickyNapalm::~CDOTA_Ability_Batrider_StickyNapalm(
        CDOTA_Ability_Batrider_StickyNapalm *const this)
{
  this->_vptr_IHandleEntity = &off_4492FD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Batrider_StickyNapalm::~CDOTA_Ability_Batrider_StickyNapalm  (line 66, @0x0000000002ba0240, libserver.so)  // inlines: ~CDOTA_Ability_Batrider_StickyNapalm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Batrider_StickyNapalm::~CDOTA_Ability_Batrider_StickyNapalm(
        CDOTA_Ability_Batrider_StickyNapalm *const this)
{
  this->_vptr_IHandleEntity = &off_4492FD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Batrider_StickyNapalm::Schema_DynamicBinding  (line 68, @0x0000000002b8cf00, libserver.so)
// globals: CDOTA_Ability_Batrider_StickyNapalm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Batrider_StickyNapalm::Schema_DynamicBinding(
        const CDOTA_Ability_Batrider_StickyNapalm *const this)
{
  return CDOTA_Ability_Batrider_StickyNapalm::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 68, @0x0000000002b8cf10, libserver.so)
// globals: CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::DestructInstance  (line 68, @0x0000000002b8cf20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Batrider_StickyNapalm>
void __fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::FreeInstance  (line 68, @0x0000000002b8cf40, libserver.so)
void __fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::CanAllocate  (line 68, @0x0000000002b8cf60, libserver.so)
bool __fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 68, @0x0000000002b8cf70, libserver.so)
// globals: CDOTA_Ability_Batrider_StickyNapalm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Batrider_StickyNapalm::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::AllocateInstance  (line 68, @0x0000000002b96a60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::ConstructInstance  (line 68, @0x0000000002b9c9d0, libserver.so)  // inlines: CDOTA_Ability_Batrider_StickyNapalm, Construct<CDOTA_Ability_Batrider_StickyNapalm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4492FD0;
  }
  return p;
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002ba9940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002ba9960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal  (line 68, @0x0000000002bc4940, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "batrider_sticky_napalm", "CDOTA_Ability_Batrider_StickyNapalm"
// globals: `guard variable for'CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass, CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass, __dso_handle, CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo, CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo
CEntityClass *__cdecl CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass);
    CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass._vptr_CEntityClass = off_4492F50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass);
    __cxa_atexit(
      CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Batrider_StickyNapalmClass != 0 )
    return &CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass;
  if ( `guard variable for'CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo,
      "CDOTA_Ability_Batrider_StickyNapalm",
      "batrider_sticky_napalm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo);
  }
  CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass.m_pClassInfo = &CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo;
  CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass.m_pBaseClassInfo = CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Batrider_StickyNapalmClass = &CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass;
  CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClassInfo.m_pClass = &CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass;
  CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Batrider_StickyNapalmClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Batrider_StickyNapalm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_StickyNapalmClass;
}


// CDOTA_Ability_Batrider_StickyNapalm::YouForgotToImplementOrDeclareServerClass  (line 88, @0x0000000002b33c40, libserver.so)
int __fastcall CDOTA_Ability_Batrider_StickyNapalm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Batrider_StickyNapalm *const this)
{
  return 0;
}


// CDOTA_Ability_Batrider_StickyNapalm::GetServerClass  (line 88, @0x0000000002b4bda0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Batrider_StickyNapalm::GetServerClass(
        CDOTA_Ability_Batrider_StickyNapalm *const this)
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


// CDOTA_Ability_Batrider_StickyNapalm::OnSpellStart  (line 98, @0x0000000002b7b400, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CDOTAFogOfWarSystem::AddTempViewer, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt (26 total)
// strings: "Hero_Batrider.StickyNapalm.Cast", "particles/units/heroes/hero_batrider/batrider_stickynapalm_impact.vpcf", "lasso_attack", "modifier_batrider_sticky_napalm", "Hero_Batrider.StickyNapalm.Impact"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Batrider_StickyNapalm::OnSpellStart(CDOTA_Ability_Batrider_StickyNapalm *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // r12d
  int v4; // r14d
  CDOTA_BaseNPC *v5; // rax
  __m128i v6; // xmm2
  float v7; // r12d
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_BaseNPC *v9; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v15; // r13
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  __int64 i; // r12
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CModifieractoryDictionary *v25; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v28; // rbx
  CDOTA_BaseNPC *v29; // rbx
  float v30; // xmm1_4
  CDOTA_BaseNPC *v31; // rax
  CDOTA_Buff *v32; // rax
  float duration; // [rsp+2Ch] [rbp-94h]
  Vector vOrigin; // [rsp+30h] [rbp-90h] BYREF
  Vector vPosition; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Batrider.StickyNapalm.Cast", 0.0, 0, 0);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_stacks", -1, 0);
  *&hUnits.m_Size = CDOTABaseAbility::GetCursorPosition(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_STICKYNAPALM,
    v5->m_iTeamNum.m_Value,
    &hUnits,
    500.0,
    2.0,
    0);
  *v6.m128i_i32 = LevelSpecialValue;
  hUnits.m_Size = 0;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  v8 = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, &vPosition, v8, v7, &hUnits, 2, 3, 0, 0, 0);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_batrider/batrider_stickynapalm_impact.vpcf",
                  2,
                  0,
                  0,
                  0);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v8, 0, *&vPosition.x, vPosition.z);
  vOrigin.x = v7;
  vOrigin.y = v7;
  vOrigin.z = v7;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, v8, 1, *&vOrigin.x, v7);
  v13 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v8, 2, v15, 5, "lasso_attack", *AbsOrigin, 1);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v17, v8);
  if ( hUnits.m_Size > 0 )
  {
    for ( i = 0; i < hUnits.m_Size; ++i )
    {
      while ( 1 )
      {
        v19 = &hUnits.m_Memory.m_pMemory[i];
        m_Index = v19->m_Index;
        if ( v19->m_Index + 2 > 1 )
        {
          v21 = v19->m_Index;
          v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
          if ( v22 != 0 )
          {
            v23 = &v22[v21 & 0x1FF];
            if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
            {
              m_pInstance = v23->m_pInstance;
              if ( v23->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
LABEL_3:
        if ( ++i >= hUnits.m_Size )
          goto LABEL_14;
      }
      v25 = ModifierFactoryDictionary();
      Factory = CModifieractoryDictionary::FindFactory(v25, "modifier_batrider_sticky_napalm");
      ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                         &m_pInstance->m_ModifierManager,
                         Factory,
                         "modifier_batrider_sticky_napalm",
                         0);
      v28 = ModifierByName;
      if ( ModifierByName == 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_batrider_sticky_napalm");
        KeyValues::SetFloat(&kv, "duration", v30);
        v31 = CDOTABaseAbility::GetCaster(this);
        v32 = CDOTA_BaseNPC::AddNewModifier(m_pInstance, v31, this, "modifier_batrider_sticky_napalm", &kv, 0);
        if ( v32 != 0 )
          (*(v32->_vptr_CDOTA_Buff + 28))(v32, 1);
        KeyValues::~KeyValues(&kv);
        goto LABEL_3;
      }
      if ( (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) < v4 )
        (*(v28->_vptr_CDOTA_Buff + 25))(v28);
      (*(v28->_vptr_CDOTA_Buff + 63))(v28, 1, duration);
      (*(v28->_vptr_CDOTA_Buff + 58))(v28, 0);
    }
  }
LABEL_14:
  v29 = CDOTABaseAbility::GetCaster(this);
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  DOTA_EmitSoundLocationWithCaster(&vOrigin, "Hero_Batrider.StickyNapalm.Impact", v29);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
  if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
    if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
  }
}


// CDOTA_Ability_Batrider_StickyNapalm::GetSlowDuration  (line 162, @0x0000000002b752b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Batrider_StickyNapalm::GetSlowDuration(CDOTA_Ability_Batrider_StickyNapalm *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Batrider_StickyNapalm::~CDOTA_Modifier_Batrider_StickyNapalm  (line 170, @0x0000000002b9beb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Batrider_StickyNapalm::~CDOTA_Modifier_Batrider_StickyNapalm(
        CDOTA_Modifier_Batrider_StickyNapalm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4493A90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Batrider_StickyNapalm::~CDOTA_Modifier_Batrider_StickyNapalm  (line 170, @0x0000000002b9bed0, libserver.so)  // inlines: ~CDOTA_Modifier_Batrider_StickyNapalm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Batrider_StickyNapalm::~CDOTA_Modifier_Batrider_StickyNapalm(
        CDOTA_Modifier_Batrider_StickyNapalm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4493A90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Batrider_StickyNapalm::IsDebuff  (line 175, @0x0000000002b8cf80, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_StickyNapalm::IsDebuff(CDOTA_Modifier_Batrider_StickyNapalm *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_StickyNapalm::GetEffectName  (line 180, @0x0000000002b8cf90, libserver.so)
// strings: "particles/units/heroes/hero_batrider/batrider_stickynapalm_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Batrider_StickyNapalm::GetEffectName(
        CDOTA_Modifier_Batrider_StickyNapalm *const this)
{
  return "particles/units/heroes/hero_batrider/batrider_stickynapalm_debuff.vpcf";
}


// CDOTA_Modifier_Batrider_StickyNapalm::OnCreated  (line 201, @0x0000000002b6dda0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "turn_rate_pct"
void __fastcall CDOTA_Modifier_Batrider_StickyNapalm::OnCreated(
        CDOTA_Modifier_Batrider_StickyNapalm *const this,
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
    this->turn_rate_pct = 0;
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
  this->turn_rate_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "turn_rate_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
    return;
  }
LABEL_7:
  this->damage = 0;
}


// CDOTA_Modifier_Batrider_StickyNapalm::OnRefresh  (line 224, @0x0000000002b6dcd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "turn_rate_pct"
void __fastcall CDOTA_Modifier_Batrider_StickyNapalm::OnRefresh(
        CDOTA_Modifier_Batrider_StickyNapalm *const this,
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
    this->turn_rate_pct = 0;
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
  this->turn_rate_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "turn_rate_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
    return;
  }
LABEL_7:
  this->damage = 0;
}


// CDOTA_Modifier_Batrider_StickyNapalm::DeclareFunctions  (line 242, @0x0000000002b33c50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Batrider_StickyNapalm::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Batrider_StickyNapalm::GetModifierTurnRate_Percentage(CModifierParams const&), CDOTA_Modifier_Batrider_StickyNapalm::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_Batrider_StickyNapalm::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Batrider_StickyNapalm::DeclareFunctions(
        CDOTA_Modifier_Batrider_StickyNapalm *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Batrider_StickyNapalm::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[110].__delta = 0;
  this->m_Functions[110].__pfn = CDOTA_Modifier_Batrider_StickyNapalm::GetModifierTurnRate_Percentage;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Batrider_StickyNapalm::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Batrider_StickyNapalm::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Batrider_StickyNapalm::GetModifierMoveSpeedBonus_Percentage  (line 252, @0x0000000002b33cc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Batrider_StickyNapalm::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Batrider_StickyNapalm *const this,
        const CModifierParams *const params)
{
  int movement_speed_pct; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  movement_speed_pct = this->movement_speed_pct;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * movement_speed_pct);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Batrider_StickyNapalm::GetModifierTurnRate_Percentage  (line 259, @0x0000000002b33d00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Batrider_StickyNapalm::GetModifierTurnRate_Percentage(
        CDOTA_Modifier_Batrider_StickyNapalm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->turn_rate_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Batrider_StickyNapalm::OnTakeDamage  (line 266, @0x0000000002b499b0, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, UnitNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, __dynamic_cast, strcmp
// strings: "particles/units/heroes/hero_batrider/batrider_napalm_damage_debuff.vpcf", "batrider_sticky_napalm"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Batrider_StickyNapalm::OnTakeDamage(
        CDOTA_Modifier_Batrider_StickyNapalm *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // r14
  CDOTA_BaseNPC *Parent; // r13
  uint32 v14; // ecx
  CConcreteEntityList *v15; // rsi
  CEntityIdentity *v16; // rax
  __int64 v17; // rdx
  CEntityIdentity *v18; // rax
  int damage; // r12d
  float v20; // xmm0_4
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v25; // rax
  void *v26; // rax
  const char **v27; // rax
  const char *v28; // r12
  const char *v29; // rdi
  bool v30; // zf
  __int64 v31; // rcx
  float flDamageToApply; // [rsp+Ch] [rbp-24h]

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetCaster(this) == m_pInstance )
        {
          v9 = params->hunit.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->hunit.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  Parent = CDOTA_Buff::GetParent(this);
                  if ( Parent == v12 && (params->nDamageflags & 0x10) == 0 )
                  {
                    v14 = params->inflictor.m_Index;
                    v15 = CEntityHandle::gm_pEntityList;
                    if ( v14 + 2 <= 1 )
                      goto LABEL_21;
                    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9)
                                                                         & 0x3F];
                    if ( v16 == 0 )
                      goto LABEL_21;
                    v17 = params->inflictor.m_Index & 0x1FF;
                    v15 = (8 * v17);
                    v18 = &v16[v17];
                    if ( v18 == 0 )
                      goto LABEL_21;
                    if ( v14 != v18->m_EHandle.m_Index )
                      goto LABEL_21;
                    if ( v18->m_pInstance == 0 )
                      goto LABEL_21;
                    v26 = __dynamic_cast(
                            v18->m_pInstance,
                            &`typeinfo for'CBaseEntity,
                            &`typeinfo for'CDOTABaseAbility,
                            0);
                    if ( v26 == 0 )
                      goto LABEL_21;
                    v27 = *(v26 + 111);
                    if ( v27 == 0 )
                      goto LABEL_21;
                    v28 = *v27;
                    if ( *v27 == 0 )
                      goto LABEL_21;
                    if ( v28 != "item_radiance"
                      && strcmp(*v27, "item_radiance") != 0
                      && v28 != "item_orb_of_venom"
                      && strcmp(v28, "item_orb_of_venom") != 0
                      && v28 != "item_urn_of_shadows"
                      && strcmp(v28, "item_urn_of_shadows") != 0 )
                    {
                      v29 = "batrider_sticky_napalm";
                      v30 = v28 == "batrider_sticky_napalm";
                      if ( v28 != "batrider_sticky_napalm" )
                      {
                        v31 = 23;
                        v15 = v28;
                        do
                        {
                          if ( v31 == 0 )
                            break;
                          v30 = v15->m_Lock.gap0 == *v29;
                          v15 = (v15 + 1);
                          ++v29;
                          --v31;
                        }
                        while ( v30 );
                        if ( !v30 )
                        {
LABEL_21:
                          damage = this->damage;
                          v20 = ((*(this->_vptr_CDOTA_Buff + 27))(this, v15) * damage);
                          if ( (Parent->m_iUnitType & 1) == 0 )
                            v20 = v20 * 0.5;
                          flDamageToApply = v20;
                          Ability = CDOTA_Buff::GetAbility(this);
                          Caster = CDOTA_Buff::GetCaster(this);
                          ApplyDamage(Caster, Parent, Ability, flDamageToApply, 2, 0);
                          ParticleManager = GetParticleManager();
                          Particle = CDOTA_ParticleManager::CreateParticle(
                                       ParticleManager,
                                       "particles/units/heroes/hero_batrider/batrider_napalm_damage_debuff.vpcf",
                                       1,
                                       Parent,
                                       0,
                                       0);
                          v25 = GetParticleManager();
                          CDOTA_ParticleManager::ReleaseParticleIndex(v25, Particle);
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
  }
  return 1uLL;
}


// CDOTA_Modifier_Batrider_StickyNapalm::Tooltip  (line 303, @0x0000000002b33d20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Batrider_StickyNapalm::Tooltip(
        CDOTA_Modifier_Batrider_StickyNapalm *const this,
        const CModifierParams *const params)
{
  int damage; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  damage = this->damage;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * damage);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Batrider_Flamebreak::~CDOTA_Ability_Batrider_Flamebreak  (line 314, @0x0000000002ba0270, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Batrider_Flamebreak::~CDOTA_Ability_Batrider_Flamebreak(
        CDOTA_Ability_Batrider_Flamebreak *const this)
{
  this->_vptr_IHandleEntity = &off_4493DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Batrider_Flamebreak::~CDOTA_Ability_Batrider_Flamebreak  (line 314, @0x0000000002ba0290, libserver.so)  // inlines: ~CDOTA_Ability_Batrider_Flamebreak
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Batrider_Flamebreak::~CDOTA_Ability_Batrider_Flamebreak(
        CDOTA_Ability_Batrider_Flamebreak *const this)
{
  this->_vptr_IHandleEntity = &off_4493DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Batrider_Flamebreak::Schema_DynamicBinding  (line 316, @0x0000000002b8cfa0, libserver.so)
// globals: CDOTA_Ability_Batrider_Flamebreak::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Batrider_Flamebreak::Schema_DynamicBinding(
        const CDOTA_Ability_Batrider_Flamebreak *const this)
{
  return CDOTA_Ability_Batrider_Flamebreak::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 316, @0x0000000002b8cfb0, libserver.so)
// globals: CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::DestructInstance  (line 316, @0x0000000002b8cfc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Batrider_Flamebreak>
void __fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::FreeInstance  (line 316, @0x0000000002b8cfe0, libserver.so)
void __fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::CanAllocate  (line 316, @0x0000000002b8d000, libserver.so)
bool __fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 316, @0x0000000002b8d010, libserver.so)
// globals: CDOTA_Ability_Batrider_Flamebreak::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Batrider_Flamebreak::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::AllocateInstance  (line 316, @0x0000000002b96aa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::ConstructInstance  (line 316, @0x0000000002b9ca00, libserver.so)  // inlines: CDOTA_Ability_Batrider_Flamebreak, Construct<CDOTA_Ability_Batrider_Flamebreak>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4493DF0;
    *(p + 229) = -1;
  }
  return p;
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 316, @0x0000000002ba9990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 316, @0x0000000002ba99b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal  (line 316, @0x0000000002bc4a90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "batrider_flamebreak", "CDOTA_Ability_Batrider_Flamebreak"
// globals: `guard variable for'CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass, CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass, __dso_handle, CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo, CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo
CEntityClass *__cdecl CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass);
    CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass._vptr_CEntityClass = off_4493D70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass);
    __cxa_atexit(
      CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Batrider_FlamebreakClass != 0 )
    return &CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass;
  if ( `guard variable for'CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo,
      "CDOTA_Ability_Batrider_Flamebreak",
      "batrider_flamebreak",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo);
  }
  CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass.m_pClassInfo = &CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo;
  CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass.m_pBaseClassInfo = CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Batrider_FlamebreakClass = &CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass;
  CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClassInfo.m_pClass = &CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass;
  CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Batrider_FlamebreakClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Batrider_Flamebreak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamebreakClass;
}


// CDOTA_Ability_Batrider_Flamebreak::YouForgotToImplementOrDeclareServerClass  (line 350, @0x0000000002b33d60, libserver.so)
int __fastcall CDOTA_Ability_Batrider_Flamebreak::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Batrider_Flamebreak *const this)
{
  return 0;
}


// CDOTA_Ability_Batrider_Flamebreak::GetServerClass  (line 350, @0x0000000002b4bfa0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Batrider_Flamebreak::GetServerClass(
        CDOTA_Ability_Batrider_Flamebreak *const this)
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


// CDOTA_Ability_Batrider_Flamebreak::OnSpellStart  (line 360, @0x0000000002b66430, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, InValidate, Set, StopSoundEvent, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseAnimating::GetAttachment, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::UnitEmitSound, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StopSoundEvent (17 total)
// strings: "collision_radius", "attach_attack2", "particles/units/heroes/hero_batrider/batrider_flamebreak.vpcf", "Hero_Batrider.Flamebreak"
void __fastcall CDOTA_Ability_Batrider_Flamebreak::OnSpellStart(CDOTA_Ability_Batrider_Flamebreak *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r14
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  float v8; // xmm0_4
  vec_t z; // eax
  CDOTA_BaseNPC *v10; // rax
  vec_t v11; // xmm1_4
  vec_t y; // xmm2_4
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  int m_Value; // eax
  CSoundOpGameSystem *v18; // r13
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const QAngle *AbsAngles; // rax
  float fLength; // [rsp+Ch] [rbp-204h]
  Vector vDirection; // [rsp+10h] [rbp-200h] BYREF
  Vector vecStartPos; // [rsp+20h] [rbp-1F0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-1E0h] BYREF
  CRecipientFilter v26; // [rsp+B0h] [rbp-160h] BYREF
  unsigned __int64 v27; // [rsp+1E8h] [rbp-28h]

  v27 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "collision_radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v6 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v7 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v6;
  vDirection.x = v7;
  v8 = VectorNormalize(&vDirection);
  if ( v8 < 0.0099999998 )
  {
    v20 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v20);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
    v8 = 0.0099999998;
  }
  fLength = v8;
  z = vec3_invalid.z;
  *&vecStartPos.x = *&vec3_invalid.x;
  vecStartPos.z = z;
  v10 = CDOTABaseAbility::GetCaster(this);
  CBaseAnimating::GetAttachment(v10, "attach_attack2", &vecStartPos);
  info.bHasFrontalCone = 1;
  info.pszEffectName = "particles/units/heroes/hero_batrider/batrider_flamebreak.vpcf";
  info.hSource.m_Index = -1;
  v11 = vec3_origin.z;
  info.bCheckStartPosition = 0;
  y = vec3_origin.y;
  info.iUnitTargetTeam = 0;
  info.vAcceleration.z = v11;
  info.vAcceleration.y = y;
  info.vAcceleration.x = vec3_origin.x;
  info.vSpawnOrigin = vecStartPos;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.bProvidesVision = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pAbility = this;
  info.vVelocity.x = LevelSpecialValue * vDirection.x;
  info.vVelocity.y = vDirection.y * LevelSpecialValue;
  info.fDistance = fLength;
  info.vVelocity.z = vDirection.z * LevelSpecialValue;
  info.fStartRadius = v3;
  info.fEndRadius = v3;
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( v13 != 0 && (m_pEntity = v13->m_pEntity) != 0 )
  {
    v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v16 = 0x7FFF;
    else
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v16 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v15 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 300;
  info.iVisionTeamNumber = m_Value;
  this->m_iProjectile = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v18 = g_pSoundOpGameSystem;
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v26);
    v26._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v26);
    v26._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v26);
    CSoundOpGameSystem::StopSoundEvent(v18, &v26, this->m_SoundEventGuid);
    v26._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v26);
    this->m_SoundEventGuid.m_nGuid.m_Data = 0;
    this->m_SoundEventGuid.m_hStackHash = -1;
  }
  v19 = CDOTABaseAbility::GetCaster(this);
  this->m_SoundEventGuid = CDOTA_BaseNPC::UnitEmitSound(v19, "Hero_Batrider.Flamebreak", 0.0, 0, 0);
}


// CDOTA_Ability_Batrider_Flamebreak::OnProjectileHit  (line 409, @0x0000000002b7b8d0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, InValidate, IndexToIdentity, IsInvulnerable, IsValid, Length2D, LookupEntity, StopSoundEvent, ToDOTABaseNPC, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_ProjectileManager::GetLinearProjectileLocation, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat (24 total)
// strings: "knockback_max_distance", "special_bonus_unique_batrider_2", "particles/units/heroes/hero_batrider/batrider_flamebreak_explosion_bonus.vpcf", "modifier_flamebreak_damage", "modifier_knockback", "center_x" (10 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Batrider_Flamebreak::OnProjectileHit(
        CDOTA_Ability_Batrider_Flamebreak *const this,
        EHANDLE hTarget,
        const Vector *const vLoc)
{
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  CDOTABaseAbility *v9; // r13
  int v10; // ebx
  CDOTA_BaseNPC *v11; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  __m128i v14; // xmm5
  int v15; // ebx
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r13
  CDOTA_BaseNPC *v19; // rax
  __int64 v20; // r12
  int v21; // r13d
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v28; // xmm1_4
  CDOTA_BaseNPC *v29; // rax
  const Vector *AbsOrigin; // rax
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // rax
  CSoundOpGameSystem *v37; // r12
  float knockback_max_distance; // [rsp+38h] [rbp-1A8h]
  Vector vLocation; // [rsp+40h] [rbp-1A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+50h] [rbp-190h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v44; // [rsp+1A8h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "explosion_radius", -1, 0);
  knockback_max_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "knockback_max_distance", -1, 0);
  CDOTA_ProjectileManager::GetLinearProjectileLocation(&g_DOTAProjectileManager, this->m_iProjectile, &vLocation);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_batrider_2", 0);
  v9 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    if ( AbilityByName->m_iLevel.m_Value <= 0 )
    {
      *v7.m128i_i32 = LevelSpecialValue;
      v15 = _mm_cvtsi128_si32(v7);
    }
    else
    {
      v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + LevelSpecialValue;
      knockback_max_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "value", 1, 1)
                             + knockback_max_distance;
      v11 = CDOTABaseAbility::GetCaster(this);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_batrider/batrider_flamebreak_explosion_bonus.vpcf",
                                8,
                                v11,
                                0);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&vLocation.x, vLocation.z);
      *v14.m128i_i32 = v10;
      v15 = _mm_cvtsi128_si32(v14);
      hUnits.m_Size = v14.m128i_i32[0];
      *(&hUnits.m_Size + 1) = v14.m128i_i32[0];
      LODWORD(hUnits.m_Memory.m_pMemory) = v14.m128i_i32[0];
      v16 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(
        v16,
        AbilityParticleEffect,
        1,
        *&hUnits.m_Size,
        *&hUnits.m_Memory.m_pMemory);
      v17 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v17, AbilityParticleEffect);
    }
  }
  else
  {
    *v8.m128i_i32 = LevelSpecialValue;
    v15 = _mm_cvtsi128_si32(v8);
  }
  hUnits.m_Size = 0;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v19->m_iTeamNum.m_Value, &vLocation, v18, *&v15, &hUnits, 2, 3, 0, 0, 0);
  if ( hUnits.m_Size > 0 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      v22 = &hUnits.m_Memory.m_pMemory[v20];
      m_Index = hUnits.m_Memory.m_pMemory[v20].m_Index;
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
            if ( v26->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
              && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
              && (*(m_pInstance->_vptr_IHandleEntity + 403))(v26->m_pInstance) == 0 )
            {
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_duration", -1, 0);
              KeyValues::KeyValues(&kv, "modifier_flamebreak_damage");
              KeyValues::SetFloat(&kv, "duration", v28);
              v29 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v29, this, "modifier_flamebreak_damage", &kv, 0);
              KeyValues::~KeyValues(&kv);
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "knockback_duration", -1, 0);
              AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
              if ( (knockback_max_distance
                  - fsqrt(
                      ((AbsOrigin->x - vLocation.x) * (AbsOrigin->x - vLocation.x))
                    + ((AbsOrigin->y - vLocation.y) * (AbsOrigin->y - vLocation.y)))) >= 10.0 )
                CBaseEntity::GetAbsOrigin(m_pInstance);
              if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_knockback");
                KeyValues::SetFloat(&kv, "center_x", v31);
                KeyValues::SetFloat(&kv, "center_y", v32);
                KeyValues::SetFloat(&kv, "center_z", v33);
                KeyValues::SetFloat(&kv, "duration", v34);
                KeyValues::SetFloat(&kv, "knockback_distance", v35);
                v36 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v36, this, "modifier_flamebreak_knockback", &kv, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
      ++v21;
      ++v20;
    }
    while ( hUnits.m_Size > v21 );
  }
  v37 = g_pSoundOpGameSystem;
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&kv);
    kv.m_uValue = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&kv);
    kv.m_uValue = &off_3FCB130;
    CRecipientFilter::MakeReliable(&kv);
    CSoundOpGameSystem::StopSoundEvent(v37, &kv, this->m_SoundEventGuid);
    kv.m_uValue = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&kv);
    this->m_SoundEventGuid.m_nGuid.m_Data = 0;
    this->m_SoundEventGuid.m_hStackHash = -1;
  }
  DOTA_EmitSoundLocation(vLoc, "Hero_Batrider.Flamebreak.Impact", 1);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
  return 1;
}


// CDOTA_Ability_Batrider_Flamebreak::OnProjectileThink  (line 482, @0x0000000002b4b980, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CDOTAPASFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CDOTABaseAbility::GetCaster, CDOTAPASFilter::CDOTAPASFilter, operator delete [], operator new [], CSoundOpGameSystem::SetSoundEventParam, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Batrider_Flamebreak::OnProjectileThink(
        CDOTA_Ability_Batrider_Flamebreak *const this,
        const Vector *const vDirection)
{
  CDOTA_BaseNPC *Caster; // rax
  __m128i z_low; // xmm0
  __m128i y_low; // xmm1
  int v7; // r14d
  int v8; // r15d
  SosFieldValueMem_t *v9; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CDOTAPASFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTAPASFilter::CDOTAPASFilter(&filter, Caster);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    fieldData.m_nAllocSize = 0;
    z_low = LODWORD(vDirection->z);
    fieldData.m_pData = 0;
    y_low = LODWORD(vDirection->y);
    v7 = _mm_cvtsi128_si32(z_low);
    *&vDirection = vDirection->x;
    v8 = _mm_cvtsi128_si32(y_low);
    fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
    v9 = operator new[](0xCu);
    fieldData.m_pData = v9;
    fieldData.m_nAllocSize = 12;
    *v9 = vDirection;
    *(v9 + 1) = v8;
    *(v9 + 2) = v7;
    CSoundOpGameSystem::SetSoundEventParam(
      g_pSoundOpGameSystem,
      &filter,
      this->m_SoundEventGuid,
      "position",
      &fieldData,
      0,
      0);
    if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
      operator delete[](fieldData.m_pData);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTA_Ability_Batrider_Flamebreak::GetAbilityDamageToTargetOverInterval  (line 509, @0x0000000002b79150, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "modifier_batrider_sticky_napalm", "batrider_sticky_napalm"
__int64 __fastcall CDOTA_Ability_Batrider_Flamebreak::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Batrider_Flamebreak *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // r13d
  float v9; // [rsp-8h] [rbp-2Ch]
  float v10; // [rsp-8h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v9 = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_duration", -1, 1));
    if ( pTarget != 0
      && CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_batrider_sticky_napalm", 0) != 0
      && (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(pTarget, "batrider_sticky_napalm", 0)) != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "damage", -1, 1);
    }
    else
    {
      LevelSpecialValue = 0;
    }
    v10 = (LevelSpecialValue + CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 1)) * v9;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v10);
  }
  return result;
}


// CDOTA_Ability_Batrider_Flamebreak::GetStunDuration  (line 533, @0x0000000002b752d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Batrider_Flamebreak::GetStunDuration(CDOTA_Ability_Batrider_Flamebreak *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Ability_Batrider_Flamebreak_Knockback::~CDOTA_Ability_Batrider_Flamebreak_Knockback  (line 542, @0x0000000002b9be20, libserver.so)  // inlines: ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Ability_Batrider_Flamebreak_Knockback::~CDOTA_Ability_Batrider_Flamebreak_Knockback(
        CDOTA_Ability_Batrider_Flamebreak_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Ability_Batrider_Flamebreak_Knockback::~CDOTA_Ability_Batrider_Flamebreak_Knockback  (line 542, @0x0000000002b9be60, libserver.so)  // inlines: ~CDOTA_Ability_Batrider_Flamebreak_Knockback, ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Ability_Batrider_Flamebreak_Knockback::~CDOTA_Ability_Batrider_Flamebreak_Knockback(
        CDOTA_Ability_Batrider_Flamebreak_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Ability_Batrider_Flamebreak_Knockback::IsHidden  (line 548, @0x0000000002b8d020, libserver.so)
bool __fastcall CDOTA_Ability_Batrider_Flamebreak_Knockback::IsHidden(
        CDOTA_Ability_Batrider_Flamebreak_Knockback *const this)
{
  return 1;
}


// CDOTA_Ability_Batrider_Flamebreak_Knockback::IsStunDebuff  (line 549, @0x0000000002b8d030, libserver.so)
bool __fastcall CDOTA_Ability_Batrider_Flamebreak_Knockback::IsStunDebuff(
        CDOTA_Ability_Batrider_Flamebreak_Knockback *const this)
{
  return 0;
}


// CDOTA_Ability_Batrider_Flamebreak_Knockback::CheckState  (line 556, @0x0000000002b33d70, libserver.so)
void __fastcall CDOTA_Ability_Batrider_Flamebreak_Knockback::CheckState(
        CDOTA_Ability_Batrider_Flamebreak_Knockback *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_Batrider_Flamebreak_Damage::~CDOTA_Modifier_Batrider_Flamebreak_Damage  (line 567, @0x0000000002b9bdd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Batrider_Flamebreak_Damage::~CDOTA_Modifier_Batrider_Flamebreak_Damage(
        CDOTA_Modifier_Batrider_Flamebreak_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4494C70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Batrider_Flamebreak_Damage::~CDOTA_Modifier_Batrider_Flamebreak_Damage  (line 567, @0x0000000002b9bdf0, libserver.so)  // inlines: ~CDOTA_Modifier_Batrider_Flamebreak_Damage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Batrider_Flamebreak_Damage::~CDOTA_Modifier_Batrider_Flamebreak_Damage(
        CDOTA_Modifier_Batrider_Flamebreak_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4494C70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Batrider_Flamebreak_Damage::IsDebuff  (line 572, @0x0000000002b8d040, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_Flamebreak_Damage::IsDebuff(
        CDOTA_Modifier_Batrider_Flamebreak_Damage *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_Flamebreak_Damage::OnCreated  (line 585, @0x0000000002b6cb70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Batrider_Flamebreak_Damage::OnCreated(
        CDOTA_Modifier_Batrider_Flamebreak_Damage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_second", -1, 0);
  else
    this->damage_per_second = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
}


// CDOTA_Modifier_Batrider_Flamebreak_Damage::OnIntervalThink  (line 596, @0x0000000002b38d60, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Batrider_Flamebreak_Damage::OnIntervalThink(
        CDOTA_Modifier_Batrider_Flamebreak_Damage *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->damage_per_second;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  LODWORD(Parent) = this->damage_per_second;
  v5 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v5, Parent, 0);
}


// CDOTA_Ability_Batrider_Firefly::~CDOTA_Ability_Batrider_Firefly  (line 610, @0x0000000002ba02c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Batrider_Firefly::~CDOTA_Ability_Batrider_Firefly(
        CDOTA_Ability_Batrider_Firefly *const this)
{
  this->_vptr_IHandleEntity = &off_4494FD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Batrider_Firefly::~CDOTA_Ability_Batrider_Firefly  (line 610, @0x0000000002ba02e0, libserver.so)  // inlines: ~CDOTA_Ability_Batrider_Firefly
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Batrider_Firefly::~CDOTA_Ability_Batrider_Firefly(
        CDOTA_Ability_Batrider_Firefly *const this)
{
  this->_vptr_IHandleEntity = &off_4494FD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Batrider_Firefly::Schema_DynamicBinding  (line 612, @0x0000000002b8d050, libserver.so)
// globals: CDOTA_Ability_Batrider_Firefly::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Batrider_Firefly::Schema_DynamicBinding(
        const CDOTA_Ability_Batrider_Firefly *const this)
{
  return CDOTA_Ability_Batrider_Firefly::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 612, @0x0000000002b8d060, libserver.so)
// globals: CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::DestructInstance  (line 612, @0x0000000002b8d070, libserver.so)  // inlines: Destruct<CDOTA_Ability_Batrider_Firefly>
void __fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::FreeInstance  (line 612, @0x0000000002b8d090, libserver.so)
void __fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::CanAllocate  (line 612, @0x0000000002b8d0b0, libserver.so)
bool __fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 612, @0x0000000002b8d0c0, libserver.so)
// globals: CDOTA_Ability_Batrider_Firefly::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Batrider_Firefly::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::AllocateInstance  (line 612, @0x0000000002b96ae0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::ConstructInstance  (line 612, @0x0000000002b9ca50, libserver.so)  // inlines: CDOTA_Ability_Batrider_Firefly, Construct<CDOTA_Ability_Batrider_Firefly>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4494FD0;
  }
  return p;
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 612, @0x0000000002ba99e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 612, @0x0000000002ba9a00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal  (line 612, @0x0000000002bc4be0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Batrider_Firefly"
// globals: `guard variable for'CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass, CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass, __dso_handle, CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo, CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo
CEntityClass *__cdecl CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass);
    CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass._vptr_CEntityClass = off_4494F50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass);
    __cxa_atexit(
      CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Batrider_FireflyClass != 0 )
    return &CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass;
  if ( `guard variable for'CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo,
      "CDOTA_Ability_Batrider_Firefly",
      "batrider_firefly",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo);
  }
  CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass.m_pClassInfo = &CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo;
  CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass.m_pBaseClassInfo = CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Batrider_FireflyClass = &CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass;
  CDOTA_Ability_Batrider_Firefly::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FireflyClassInfo.m_pClass = &CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass;
  CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Batrider_FireflyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Batrider_Firefly::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FireflyClass;
}


// CDOTA_Ability_Batrider_Firefly::GetStolenActivityModifier  (line 617, @0x0000000002b8d0d0, libserver.so)
// strings: "stolen_firefly"
const char *__fastcall CDOTA_Ability_Batrider_Firefly::GetStolenActivityModifier(
        CDOTA_Ability_Batrider_Firefly *const this)
{
  return "stolen_firefly";
}


// CDOTA_Ability_Batrider_Firefly::OnSpellStart  (line 627, @0x0000000002b79260, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "special_bonus_unique_batrider_1", "modifier_batrider_firefly", "Hero_Batrider.Firefly.Cast"
void __fastcall CDOTA_Ability_Batrider_Firefly::OnSpellStart(CDOTA_Ability_Batrider_Firefly *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_batrider_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  KeyValues::KeyValues(&kv, "modifier_batrider_firefly");
  KeyValues::SetFloat(&kv, "duration", v4);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, v5, this, "modifier_batrider_firefly", &kv, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Batrider.Firefly.Cast", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Batrider_Firefly::GetAbilityDamageToTargetOverInterval  (line 647, @0x0000000002b690c0, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "modifier_batrider_sticky_napalm", "batrider_sticky_napalm"
__int64 __fastcall CDOTA_Ability_Batrider_Firefly::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Batrider_Firefly *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // r13d
  float fIntervalb; // [rsp+Ch] [rbp-24h]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    if ( pTarget != 0
      && CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_batrider_sticky_napalm", 0) != 0
      && (Caster = CDOTABaseAbility::GetCaster(this),
          (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "batrider_sticky_napalm", 0)) != 0) )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "damage", -1, 1);
    }
    else
    {
      LevelSpecialValue = 0;
    }
    fIntervalb = (LevelSpecialValue + CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 1))
               * fInterval;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_Batrider_Firefly::~CDOTA_Modifier_Batrider_Firefly  (line 671, @0x0000000002ba96d0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTA_Modifier_Batrider_Firefly::~CDOTA_Modifier_Batrider_Firefly(
        CDOTA_Modifier_Batrider_Firefly *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vFirePoolLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4495A90;
  this->m_vFirePoolLocations.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vFirePoolLocations.m_Memory,
        CUtlMemory<Vector,int>::Purge(&this->m_vFirePoolLocations.m_Memory),
        (this->m_vFirePoolLocations.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Batrider_Firefly::~CDOTA_Modifier_Batrider_Firefly  (line 671, @0x0000000002ba9740, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Batrider_Firefly, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTA_Modifier_Batrider_Firefly::~CDOTA_Modifier_Batrider_Firefly(
        CDOTA_Modifier_Batrider_Firefly *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vFirePoolLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4495A90;
  this->m_vFirePoolLocations.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vFirePoolLocations.m_Memory;
    CUtlMemory<Vector,int>::Purge(&this->m_vFirePoolLocations.m_Memory);
    if ( (this->m_vFirePoolLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Batrider_Firefly::GetAttributes  (line 676, @0x0000000002b9c270, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Batrider_Firefly::GetAttributes(CDOTA_Modifier_Batrider_Firefly *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 3;
}


// CDOTA_Modifier_Batrider_Firefly::IsPurgable  (line 687, @0x0000000002b8d0e0, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_Firefly::IsPurgable(CDOTA_Modifier_Batrider_Firefly *const this)
{
  return 0;
}


// CDOTA_Modifier_Batrider_Firefly::GetNumAvoidLocations  (line 692, @0x0000000002b8d0f0, libserver.so)
int __fastcall CDOTA_Modifier_Batrider_Firefly::GetNumAvoidLocations(CDOTA_Modifier_Batrider_Firefly *const this)
{
  return this->m_vFirePoolLocations.m_Size;
}


// CDOTA_Modifier_Batrider_Firefly::GetAvoidLocation  (line 693, @0x0000000002ba8570, libserver.so)  // inlines: operator[]
Vector __fastcall CDOTA_Modifier_Batrider_Firefly::GetAvoidLocation(
        CDOTA_Modifier_Batrider_Firefly *const this,
        int iAvoid)
{
  Vector *m_pMemory; // r8
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pMemory = this->m_vFirePoolLocations.m_Memory.m_pMemory;
  *&result.x = *&m_pMemory[iAvoid].x;
  result.z = m_pMemory[iAvoid].z;
  return result;
}


// CDOTA_Modifier_Batrider_Firefly::AvoidStrength  (line 694, @0x0000000002bad710, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Batrider_Firefly::AvoidStrength(
        CDOTA_Modifier_Batrider_Firefly *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 200.0) / 1300.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.80000001;
  if ( v6 <= 1.0 )
    return (v6 * -0.19999999) + 1.0;
  return result;
}


// CDOTA_Modifier_Batrider_Firefly::GetAvoidRadius  (line 695, @0x0000000002b8d100, libserver.so)
float __fastcall CDOTA_Modifier_Batrider_Firefly::GetAvoidRadius(
        CDOTA_Modifier_Batrider_Firefly *const this,
        int iAvoid)
{
  return this->radius + 100.0;
}


// CDOTA_Modifier_Batrider_Firefly::IsAvoidMagical  (line 696, @0x0000000002b8d120, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_Firefly::IsAvoidMagical(CDOTA_Modifier_Batrider_Firefly *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_Firefly::IsPersistentAvoidance  (line 697, @0x0000000002b8d130, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_Firefly::IsPersistentAvoidance(CDOTA_Modifier_Batrider_Firefly *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_Firefly::OnCreated  (line 724, @0x0000000002b8b180, libserver.so)  // inlines: AddToTail, AssignTo, CopyConstruct<Vector>, DOTAGameRules, DotaRetrieveAbilityValue<float>, Element, GetGameTime, GetLevelSpecialValueFor<float>, GrowMemory, Vector, operator=, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (16 total)
// strings: "tree_radius", "particles/units/heroes/hero_batrider/batrider_firefly.vpcf", "particles/units/heroes/hero_batrider/batrider_firefly_ember.vpcf", "Hero_Batrider.Firefly.Loop"
void __fastcall CDOTA_Modifier_Batrider_Firefly::OnCreated(CDOTA_Modifier_Batrider_Firefly *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  __int64 m_Size; // r12
  bool v12; // zf
  vec_t z; // xmm0_4
  int v14; // eax
  Vector *v15; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v17; // eax
  float v18; // xmm3_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v24; // r14
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // r12
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // r12
  CDOTA_BaseNPC *v31; // rax
  int m_nFXIndexB; // r13d
  const CBaseAnimating *v33; // r14
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  double v38; // [rsp+10h] [rbp-30h]

  this->m_bActive = 1;
  this->m_ifirefly_Active = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->tree_radius, "tree_radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->damage_per_second, "damage_per_second");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "tick_interval", -1, 0);
  else
    this->tick_interval = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v7);
  v8 = 0.0;
  this->m_ifirefly_Active = 1;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fNextDamageTick = v8;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  m_Size = this->m_vFirePoolLocations.m_Size;
  this->m_vLastFirePoolLoc.x = AbsOrigin->x;
  v12 = m_Size == this->m_vFirePoolLocations.m_Memory.m_nAllocationCount;
  this->m_vLastFirePoolLoc.y = AbsOrigin->y;
  z = AbsOrigin->z;
  v14 = m_Size;
  this->m_vLastFirePoolLoc.z = z;
  if ( v12 )
  {
    CUtlMemory<Vector,int>::Grow(&this->m_vFirePoolLocations.m_Memory, 1);
    v14 = this->m_vFirePoolLocations.m_Size;
  }
  this->m_vFirePoolLocations.m_Size = v14 + 1;
  v15 = &this->m_vFirePoolLocations.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
  {
    *&v15->x = *&this->m_vLastFirePoolLoc.x;
    v15->z = this->m_vLastFirePoolLoc.z;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v17 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v17, this->m_vLastFirePoolLoc, this->radius, v18);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_batrider/batrider_firefly.vpcf",
                       2,
                       0,
                       0,
                       0);
  v20 = CDOTA_Buff::GetParent(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = CDOTA_Buff::GetParent(this);
  m_nFXIndex = this->m_nFXIndex;
  v24 = v22;
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v25, m_nFXIndex, 0, v24, 1, 0, *v21, 1);
  LODWORD(v21) = this->m_nFXIndex;
  *&v38 = this->m_ifirefly_Active;
  *(&v38 + 1) = *&v38;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v26, v21, 11, v38, *&v38);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
  v27 = CDOTA_Buff::GetParent(this);
  v28 = GetParticleManager();
  this->m_nFXIndexB = CDOTA_ParticleManager::CreateParticle(
                        v28,
                        "particles/units/heroes/hero_batrider/batrider_firefly_ember.vpcf",
                        2,
                        v27,
                        0,
                        0);
  v29 = CDOTA_Buff::GetParent(this);
  v30 = CBaseEntity::GetAbsOrigin(v29);
  v31 = CDOTA_Buff::GetParent(this);
  m_nFXIndexB = this->m_nFXIndexB;
  v33 = v31;
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v34, m_nFXIndexB, 0, v33, 1, 0, *v30, 1);
  LODWORD(v30) = this->m_nFXIndexB;
  *&v38 = this->m_ifirefly_Active;
  *(&v38 + 1) = *&v38;
  v35 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v35, v30, 11, v38, *&v38);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndexB, 0, 0, -1, 0, 0);
  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    v36 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v36, 1512, 0.1, 0.1, 9, 0, 1.0);
  }
  v37 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(2, "Hero_Batrider.Firefly.Loop", v37);
}


// CDOTA_Modifier_Batrider_Firefly::OnRefresh  (line 766, @0x0000000002b7eb40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "tree_radius"
void __fastcall CDOTA_Modifier_Batrider_Firefly::OnRefresh(CDOTA_Modifier_Batrider_Firefly *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->tree_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "tree_radius", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->damage_per_second = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->tree_radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_per_second", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "tick_interval", -1, 0);
    return;
  }
LABEL_9:
  this->tick_interval = 0.0;
}


// CDOTA_Modifier_Batrider_Firefly::OnIntervalThink  (line 776, @0x0000000002b8aca0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, CopyConstruct<Vector>, DOTAGameRules, Element, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, Length2D, LookupEntity, Purge, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlFallback, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex (18 total)
// strings: "particles/units/heroes/hero_batrider/batrider_firefly_debuff.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Batrider_Firefly::OnIntervalThink(CDOTA_Modifier_Batrider_Firefly *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  int m_nFXIndex; // r12d
  const Vector *v5; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  __m128i v7; // xmm4
  float v8; // xmm1_4
  float m_fNextDamageTick; // xmm0_4
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // rax
  __int64 v14; // rbx
  bool v15; // zf
  vec_t z; // xmm0_4
  int v17; // eax
  Vector *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  unsigned int v20; // eax
  float v21; // xmm3_4
  int m_Size; // eax
  float v23; // xmm0_4
  float v24; // r12d
  const Vector *v25; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v27; // rbx
  CHandle<CBaseEntity> *v28; // r14
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v35; // rax
  __int64 v36; // r14
  CHandle<CBaseEntity> *v37; // r12
  int v38; // eax
  CHandle<CBaseEntity> *v39; // rax
  __int64 v40; // [rsp+30h] [rbp-90h]
  CDOTABaseAbility *pInflictor; // [rsp+40h] [rbp-80h]
  int i; // [rsp+48h] [rbp-78h]
  float flDamage; // [rsp+4Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hDamagedUnits; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+70h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  m_nFXIndex = this->m_nFXIndex;
  v5 = AbsOrigin;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlFallback(ParticleManager, m_nFXIndex, 0, *&v5->x, v5->z);
  v8 = 0.0;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  m_fNextDamageTick = this->m_fNextDamageTick;
  if ( v8 > m_fNextDamageTick )
  {
    m_Size = this->m_vFirePoolLocations.m_Size;
    hDamagedUnits.m_Size = 0;
    v23 = m_fNextDamageTick + this->tick_interval;
    hDamagedUnits.m_Memory.m_pMemory = 0;
    hDamagedUnits.m_Memory.m_nAllocationCount = 0;
    hDamagedUnits.m_Memory.m_nGrowSize = 0;
    this->m_fNextDamageTick = v23;
    if ( m_Size > 0 )
    {
      v40 = 0;
      i = 0;
      do
      {
        *v7.m128i_i32 = this->radius;
        hUnits.m_Size = 0;
        hUnits.m_Memory.m_pMemory = 0;
        hUnits.m_Memory.m_nAllocationCount = 0;
        hUnits.m_Memory.m_nGrowSize = 0;
        v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
        v25 = &this->m_vFirePoolLocations.m_Memory.m_pMemory[v40];
        Caster = CDOTA_Buff::GetCaster(this);
        FindUnitsInRadius(Caster->m_iTeamNum.m_Value, v25, 0, v24, &hUnits, 2, 3, 0, 0, 0);
        if ( hUnits.m_Size > 0 )
        {
          v27 = 0;
          do
          {
            while ( 1 )
            {
              v28 = &hUnits.m_Memory.m_pMemory[v27];
              if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&hDamagedUnits, v28) < 0
                && v28->m_Index + 2 > 1 )
              {
                v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F];
                if ( v29 != 0 )
                {
                  v30 = &v29[v28->m_Index & 0x1FF];
                  if ( v30 != 0 && v28->m_Index == v30->m_EHandle.m_Index )
                  {
                    m_pInstance = v30->m_pInstance;
                    if ( v30->m_pInstance != 0
                      && m_pInstance->m_bIsDOTANPC
                      && (*(m_pInstance->_vptr_IHandleEntity + 403))(v30->m_pInstance) == 0 )
                    {
                      flDamage = this->damage_per_second * this->tick_interval;
                      pInflictor = CDOTA_Buff::GetAbility(this);
                      v32 = CDOTA_Buff::GetCaster(this);
                      ApplyDamage(v32, m_pInstance, pInflictor, flDamage, 2, 0);
                      v33 = GetParticleManager();
                      Particle = CDOTA_ParticleManager::CreateParticle(
                                   v33,
                                   "particles/units/heroes/hero_batrider/batrider_firefly_debuff.vpcf",
                                   1,
                                   m_pInstance,
                                   0,
                                   0);
                      v35 = GetParticleManager();
                      CDOTA_ParticleManager::ReleaseParticleIndex(v35, Particle);
                      v36 = hDamagedUnits.m_Size;
                      v37 = &hUnits.m_Memory.m_pMemory[v27];
                      v38 = hDamagedUnits.m_Size;
                      if ( hDamagedUnits.m_Size == hDamagedUnits.m_Memory.m_nAllocationCount )
                      {
                        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hDamagedUnits.m_Memory, 1);
                        v38 = hDamagedUnits.m_Size;
                      }
                      hDamagedUnits.m_Size = v38 + 1;
                      v39 = &hDamagedUnits.m_Memory.m_pMemory[v36];
                      if ( v39 != 0 )
                        break;
                    }
                  }
                }
              }
              if ( hUnits.m_Size <= ++v27 )
                goto LABEL_29;
            }
            v39->m_Index = v37->m_Index;
            ++v27;
          }
          while ( hUnits.m_Size > v27 );
        }
LABEL_29:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
        if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
          if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
        }
        ++i;
        ++v40;
      }
      while ( this->m_vFirePoolLocations.m_Size > i );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hDamagedUnits);
  }
  if ( this->m_bActive )
  {
    v10 = CDOTA_Buff::GetParent(this);
    v11 = CBaseEntity::GetAbsOrigin(v10);
    if ( fsqrt(
           ((v11->x - this->m_vLastFirePoolLoc.x) * (v11->x - this->m_vLastFirePoolLoc.x))
         + ((v11->y - this->m_vLastFirePoolLoc.y) * (v11->y - this->m_vLastFirePoolLoc.y))) > (this->radius * 0.5) )
    {
      v12 = CDOTA_Buff::GetParent(this);
      v13 = CBaseEntity::GetAbsOrigin(v12);
      v14 = this->m_vFirePoolLocations.m_Size;
      this->m_vLastFirePoolLoc.x = v13->x;
      v15 = v14 == this->m_vFirePoolLocations.m_Memory.m_nAllocationCount;
      this->m_vLastFirePoolLoc.y = v13->y;
      z = v13->z;
      v17 = v14;
      this->m_vLastFirePoolLoc.z = z;
      if ( v15 )
      {
        CUtlMemory<Vector,int>::Grow(&this->m_vFirePoolLocations.m_Memory, 1);
        v17 = this->m_vFirePoolLocations.m_Size;
      }
      this->m_vFirePoolLocations.m_Size = v17 + 1;
      v18 = &this->m_vFirePoolLocations.m_Memory.m_pMemory[v14];
      if ( v18 != 0 )
      {
        *&v18->x = *&this->m_vLastFirePoolLoc.x;
        v18->z = this->m_vLastFirePoolLoc.z;
      }
      v19 = CDOTA_Buff::GetCaster(this);
      v20 = (*(v19->_vptr_IHandleEntity + 414))(v19);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v20, this->m_vLastFirePoolLoc, this->tree_radius, v21);
    }
  }
}


// CDOTA_Modifier_Batrider_Firefly::DeclareFunctions  (line 821, @0x0000000002b33d80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Batrider_Firefly::GetActivityModifiers(CModifierParams const&), CDOTA_Modifier_Batrider_Firefly::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Batrider_Firefly::DeclareFunctions(CDOTA_Modifier_Batrider_Firefly *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_Batrider_Firefly::GetActivityModifiers;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Batrider_Firefly::OnDeath;
}


// CDOTA_Modifier_Batrider_Firefly::GetActivityModifiers  (line 829, @0x0000000002b33dc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Batrider_Firefly::GetActivityModifiers(
        CDOTA_Modifier_Batrider_Firefly *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "firefly";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Batrider_Firefly::OnDeath  (line 836, @0x0000000002b4e030, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Modifier_Batrider_Firefly::Deactivate
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Batrider_Firefly::OnDeath(
        CDOTA_Modifier_Batrider_Firefly *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    CDOTA_Modifier_Batrider_Firefly::Deactivate(this);
  return 1uLL;
}


// CDOTA_Modifier_Batrider_Firefly::CheckState  (line 848, @0x0000000002b3c3d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Batrider_Firefly::CheckState(
        CDOTA_Modifier_Batrider_Firefly *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  if ( this->m_bActive )
  {
    m_nDisabledStateMask = buffState->m_nDisabledStateMask;
    buffState->m_nEnabledStateMask |= 0x3000000uLL;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFCFFFFFFLL;
  }
}


// CDOTA_Modifier_Batrider_Firefly::OnDestroy  (line 861, @0x0000000002b4e020, libserver.so)
// calls: CDOTA_Modifier_Batrider_Firefly::Deactivate
void __fastcall CDOTA_Modifier_Batrider_Firefly::OnDestroy(CDOTA_Modifier_Batrider_Firefly *const this)
{
  CDOTA_Modifier_Batrider_Firefly::Deactivate(this);
}


// CDOTA_Modifier_Batrider_Firefly::Deactivate  (line 868, @0x0000000002b4df70, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, GetParticleManager, CDOTA_ParticleManager::SetParticleControl
// callers: CDOTA_Modifier_Batrider_Firefly::OnDestroy, CDOTA_Modifier_Batrider_Firefly::OnDeath
// strings: "Hero_Batrider.Firefly.Loop"
void __fastcall CDOTA_Modifier_Batrider_Firefly::Deactivate(CDOTA_Modifier_Batrider_Firefly *const this)
{
  CDOTA_Modifier_Batrider_Firefly *v1; // rbx
  CDOTA_BaseNPC *Parent; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  float m_ifirefly_Active; // xmm0_4
  CDOTA_ParticleManager *v6; // rax
  double v7; // [rsp+0h] [rbp-20h]
  float v8; // [rsp+8h] [rbp-18h]

  v1 = this;
  this->m_bActive = 0;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Batrider.Firefly.Loop");
  m_nFXIndex = v1->m_nFXIndex;
  v1->m_ifirefly_Active = 0;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 11, 0.0, 0.0);
  m_ifirefly_Active = v1->m_ifirefly_Active;
  LODWORD(v1) = v1->m_nFXIndexB;
  *&v7 = m_ifirefly_Active;
  *(&v7 + 1) = m_ifirefly_Active;
  v8 = m_ifirefly_Active;
  v6 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v6, v1, 11, v7, v8);
}


// CDOTA_Ability_Batrider_FlamingLasso::~CDOTA_Ability_Batrider_FlamingLasso  (line 886, @0x0000000002ba0310, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Batrider_FlamingLasso::~CDOTA_Ability_Batrider_FlamingLasso(
        CDOTA_Ability_Batrider_FlamingLasso *const this)
{
  this->_vptr_IHandleEntity = &off_4495DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Batrider_FlamingLasso::~CDOTA_Ability_Batrider_FlamingLasso  (line 886, @0x0000000002ba0330, libserver.so)  // inlines: ~CDOTA_Ability_Batrider_FlamingLasso
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Batrider_FlamingLasso::~CDOTA_Ability_Batrider_FlamingLasso(
        CDOTA_Ability_Batrider_FlamingLasso *const this)
{
  this->_vptr_IHandleEntity = &off_4495DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Batrider_FlamingLasso::Schema_DynamicBinding  (line 888, @0x0000000002b8d140, libserver.so)
// globals: CDOTA_Ability_Batrider_FlamingLasso::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Batrider_FlamingLasso::Schema_DynamicBinding(
        const CDOTA_Ability_Batrider_FlamingLasso *const this)
{
  return CDOTA_Ability_Batrider_FlamingLasso::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 888, @0x0000000002b8d150, libserver.so)
// globals: CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::DestructInstance  (line 888, @0x0000000002b8d160, libserver.so)  // inlines: Destruct<CDOTA_Ability_Batrider_FlamingLasso>
void __fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::FreeInstance  (line 888, @0x0000000002b8d180, libserver.so)
void __fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::CanAllocate  (line 888, @0x0000000002b8d1a0, libserver.so)
bool __fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 888, @0x0000000002b8d1b0, libserver.so)
// globals: CDOTA_Ability_Batrider_FlamingLasso::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Batrider_FlamingLasso::s_pSchemaBinding;
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::AllocateInstance  (line 888, @0x0000000002b96b20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::ConstructInstance  (line 888, @0x0000000002b9ca80, libserver.so)  // inlines: CDOTA_Ability_Batrider_FlamingLasso, Construct<CDOTA_Ability_Batrider_FlamingLasso>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4495DF0;
  }
  return p;
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 888, @0x0000000002ba9a30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 888, @0x0000000002ba9a50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal  (line 888, @0x0000000002bc4d30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "batrider_flaming_lasso", "CDOTA_Ability_Batrider_FlamingLasso"
// globals: `guard variable for'CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass, CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass, __dso_handle, CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo, CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo
CEntityClass *__cdecl CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass);
    CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass._vptr_CEntityClass = off_4495D70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass);
    __cxa_atexit(
      CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Batrider_FlamingLassoClass != 0 )
    return &CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass;
  if ( `guard variable for'CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo,
      "CDOTA_Ability_Batrider_FlamingLasso",
      "batrider_flaming_lasso",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo);
  }
  CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass.m_pClassInfo = &CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo;
  CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass.m_pBaseClassInfo = CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Batrider_FlamingLassoClass = &CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass;
  CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClassInfo.m_pClass = &CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass;
  CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Batrider_FlamingLassoClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Batrider_FlamingLasso::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Batrider_FlamingLassoClass;
}


// CDOTA_Ability_Batrider_FlamingLasso::GetConceptRecipientType  (line 892, @0x0000000002b8d1c0, libserver.so)
int __fastcall CDOTA_Ability_Batrider_FlamingLasso::GetConceptRecipientType(
        CDOTA_Ability_Batrider_FlamingLasso *const this)
{
  return 4;
}


// CDOTA_Ability_Batrider_FlamingLasso::OnSpellStart  (line 902, @0x0000000002b820c0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FindAndRemove, Get, GetAbilityData, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, InState, IsInvulnerable, Purge, Set, ToDOTABaseNPC, entindex, operator CBaseEntity*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CEntityInstance::GetEntityIndex, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage (25 total)
// strings: "modifier_batrider_flaming_lasso", "modifier_batrider_flaming_lasso_self", "Hero_Batrider.FlamingLasso.Cast", "modifier_batrider_flaming_lasso_damage"
void __fastcall CDOTA_Ability_Batrider_FlamingLasso::OnSpellStart(CDOTA_Ability_Batrider_FlamingLasso *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v6; // eax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r15d
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v14; // rax
  float v15; // xmm3_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // r15
  CDOTA_BaseNPC *v19; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v21; // cx
  int v22; // eax
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // r15
  CEntityIndex v25; // eax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *pCacheNPC; // [rsp+20h] [rbp-90h]
  float duration; // [rsp+2Ch] [rbp-84h]
  float durationa; // [rsp+2Ch] [rbp-84h]
  CHandle<CBaseEntity> src; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_batrider_flaming_lasso");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    v6.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
    KeyValues::SetInt(&kv, "anchor", v6.m_Data);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, v7, this, "modifier_batrider_flaming_lasso", &kv, 0);
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v9, v8, this, "modifier_batrider_flaming_lasso_self", &kv, 0);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Batrider.FlamingLasso.Cast", 0.0, 0, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
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
      duration,
      v15);
    v16 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v16) )
    {
      v17 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v17, this, "modifier_batrider_flaming_lasso_damage", &kv, 0);
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      durationa = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "grab_radius", -1, 0);
      pCacheNPC = CDOTABaseAbility::GetCaster(this);
      v18 = CBaseEntity::GetAbsOrigin(v3);
      v19 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v19->m_iTeamNum.m_Value, v18, pCacheNPC, durationa, &entities, 2, 1, 784, 1, 0);
      m_pEntity = v3->m_pEntity;
      src.m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
      }
      v22 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&entities, &src);
      if ( v22 != -1 )
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&entities, v22);
      if ( entities.m_Size != 0 )
      {
        v23 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
        v24 = v23;
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
        {
          v25.m_Data = CEntityInstance::GetEntityIndex(v3).m_Data;
          KeyValues::SetInt(&kv, "anchor", v25.m_Data);
          v26 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v24, v26, this, "modifier_batrider_flaming_lasso", &kv, 0);
          v27 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v24, v27, this, "modifier_batrider_flaming_lasso_damage", &kv, 0);
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
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Batrider_FlamingLasso::GetStunDuration  (line 951, @0x0000000002b752f0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Batrider_FlamingLasso::GetStunDuration(CDOTA_Ability_Batrider_FlamingLasso *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Batrider_FlamingLasso::~CDOTA_Modifier_Batrider_FlamingLasso  (line 958, @0x0000000002b9bd60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso::~CDOTA_Modifier_Batrider_FlamingLasso(
        CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  this->_vptr_CDOTA_Buff = &off_44968B0;
  this->_vptr_CHorizontalMotionController = &off_4496BA0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Batrider_FlamingLasso::~CDOTA_Modifier_Batrider_FlamingLasso  (line 958, @0x0000000002b9bd90, libserver.so)  // inlines: ~CDOTA_Modifier_Batrider_FlamingLasso
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso::~CDOTA_Modifier_Batrider_FlamingLasso(
        CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  this->_vptr_CDOTA_Buff = &off_44968B0;
  this->_vptr_CHorizontalMotionController = &off_4496BA0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Batrider_FlamingLasso::IsStunDebuff  (line 967, @0x0000000002b8d1d0, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso::IsStunDebuff(CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_FlamingLasso::IsHorizontalMotionValidToApply  (line 972, @0x0000000002b8d1e0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Batrider_FlamingLasso::IsDebuff  (line 973, @0x0000000002b8d210, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso::IsDebuff(CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_FlamingLasso::IsMotionController  (line 975, @0x0000000002b8d220, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso::IsMotionController(
        CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_FlamingLasso::OnCreated  (line 1000, @0x0000000002b64210, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToDOTABaseNPC, entindex, operator=
// calls: CDOTA_Buff::GetCaster, CEntityInstance::GetEntityIndex, KeyValues::GetInt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetAbility (14 total)
// strings: "particles/units/heroes/hero_batrider/batrider_flaming_lasso.vpcf", "lasso_attack", "attach_hitloc", "Hero_Batrider.FlamingLasso.Loop", "drag_distance", "break_distance"
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso::OnCreated(
        CDOTA_Modifier_Batrider_FlamingLasso *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v5; // eax
  int Int; // eax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v11; // rax
  CDOTA_BaseNPC *m_pAnchor; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CDOTA_BaseNPC *v15; // r14
  int v16; // r13d
  CDOTA_ParticleManager *v17; // rax
  __int64 v18; // r12
  CDOTA_BaseNPC *v19; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  int v24; // r13d
  const CBaseAnimating *v25; // r14
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v30; // rax
  vec_t vecFallbackPosition; // [rsp+10h] [rbp-30h]
  Vector v32; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v33; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  v5.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
  Int = KeyValues::GetInt(pKV, "anchor", v5.m_Data);
  if ( Int <= 0x7FFE
    && (v7 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[Int >> 9]) != 0
    && (v8 = &v7[Int & 0x1FF]) != 0
    && (v8->m_EHandle.m_Index & 0x7FFF) == Int
    && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    this->m_pAnchor = m_pInstance;
  }
  else
  {
    this->m_pAnchor = 0;
    m_pInstance = CDOTA_Buff::GetCaster(this);
    this->m_pAnchor = m_pInstance;
  }
  this->vPreviousLocation = *CBaseEntity::GetAbsOrigin(m_pInstance);
  Parent = CDOTA_Buff::GetParent(this);
  v11 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v11, &this->CHorizontalMotionController, 0) )
  {
    m_pAnchor = this->m_pAnchor;
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_batrider/batrider_flaming_lasso.vpcf",
                 2,
                 m_pAnchor,
                 0,
                 0);
    v15 = this->m_pAnchor;
    this->m_nFXIndex = Particle;
    v16 = Particle;
    v17 = GetParticleManager();
    v18 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v17, v16, 0, v15, 5, "lasso_attack", vec3_invalid, 1);
    v19 = CDOTA_Buff::GetParent(this);
    m_nFXIndex = this->m_nFXIndex;
    v21 = v19;
    v22 = GetParticleManager();
    *&v32.x = v18;
    v32.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v22, m_nFXIndex, 1, v21, 5, "attach_hitloc", v32, 1);
    v23 = CDOTA_Buff::GetParent(this);
    v24 = this->m_nFXIndex;
    v25 = v23;
    v26 = GetParticleManager();
    *&v33.x = v18;
    v33.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v26, v24, 3, v25, 1, 0, v33, 1);
    v27 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v27, 1508, 0.5, 0.5, 9, 0, 1.0);
    CDOTA_BaseNPC::StartGesture(this->m_pAnchor, 1578, 0.1, 0.5, 9, 0, 1.0);
    v28 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v28, "Hero_Batrider.FlamingLasso.Loop", 0.0, 0, 0);
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &this->drag_distance, "drag_distance");
    v30 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v30, &this->break_distance, "break_distance");
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Batrider_FlamingLasso::OnDestroy  (line 1031, @0x0000000002b39660, libserver.so)  // inlines: GetAbilityData
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::FadeGesture, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage (13 total)
// strings: "Hero_Batrider.FlamingLasso.Loop", "Hero_Batrider.FlamingLasso.End", "modifier_batrider_flaming_lasso_self"
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso::OnDestroy(CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v13; // [rsp+8h] [rbp-18h]

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  v6 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v6, 1508);
  CDOTA_BaseNPC::FadeGesture(this->m_pAnchor, 1578);
  v7 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v7, "Hero_Batrider.FlamingLasso.Loop");
  v8 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Batrider.FlamingLasso.End", 0.0, 0, 0);
  CDOTA_BaseNPC::RemoveModifierByName(this->m_pAnchor, "modifier_batrider_flaming_lasso_self");
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      v13 = Ability;
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = v13->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, Caster, m_iAbilityID);
  }
}


// CDOTA_Modifier_Batrider_FlamingLasso::UpdateHorizontalMotion  (line 1055, @0x0000000002b398a0, libserver.so)  // inlines: VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, GetGroundHeight, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso::UpdateHorizontalMotion(
        CDOTA_Modifier_Batrider_FlamingLasso *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  const Vector *v9; // r13
  const Vector *v10; // rax
  vec_t v11; // xmm2_4
  vec_t v12; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float drag_distance; // xmm1_4
  __m128i x_low; // xmm4
  __m128i y_low; // xmm5
  float v17; // ebx
  float v18; // r13d
  const Vector *v19; // rax
  vec_t v20; // xmm2_4
  vec_t v21; // xmm0_4
  float fBreak; // [rsp+8h] [rbp-58h]
  float vToMove; // [rsp+Ch] [rbp-54h]
  float vToMovea; // [rsp+Ch] [rbp-54h]
  Vector vBreak; // [rsp+10h] [rbp-50h] BYREF
  Vector vToSource; // [rsp+20h] [rbp-40h] BYREF
  Vector vNewLocation; // [rsp+30h] [rbp-30h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_pAnchor);
  v7 = this->vPreviousLocation.y - AbsOrigin->y;
  v8 = this->vPreviousLocation.x - AbsOrigin->x;
  vBreak.z = 0.0;
  vBreak.y = v7;
  vBreak.x = v8;
  fBreak = VectorNormalize(&vBreak);
  v9 = CBaseEntity::GetAbsOrigin(me);
  v10 = CBaseEntity::GetAbsOrigin(this->m_pAnchor);
  v11 = v10->x - v9->x;
  v12 = v10->y - v9->y;
  vToSource.z = 0.0;
  vToSource.x = v11;
  vToSource.y = v12;
  vToMove = VectorNormalize(&vToSource);
  this->vPreviousLocation = *CBaseEntity::GetAbsOrigin(this->m_pAnchor);
  if ( fBreak <= this->break_distance
    && (Caster = CDOTA_Buff::GetCaster(this), (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0)
    && (*(this->m_pAnchor->_vptr_IHandleEntity + 408))(this->m_pAnchor) != 0 )
  {
    drag_distance = this->drag_distance;
    if ( vToMove > drag_distance )
    {
      x_low = LODWORD(vToSource.x);
      y_low = LODWORD(vToSource.y);
      *x_low.m128i_i32 = vToSource.x * (vToMove - drag_distance);
      *y_low.m128i_i32 = vToSource.y * (vToMove - drag_distance);
      v17 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
      v18 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
      vToMovea = (vToMove - drag_distance) * vToSource.z;
      v19 = CBaseEntity::GetAbsOrigin(me);
      v20 = v17 + v19->x;
      v21 = vToMovea + v19->z;
      vNewLocation.y = v18 + v19->y;
      vNewLocation.x = v20;
      vNewLocation.z = v21;
      vNewLocation.z = GetGroundHeight(&vNewLocation, me);
      CBaseEntity::SetAbsOrigin(me, &vNewLocation);
    }
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Batrider_FlamingLasso::DeclareFunctions  (line 1081, @0x0000000002b33de0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Batrider_FlamingLasso::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso::DeclareFunctions(
        CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Batrider_FlamingLasso::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Batrider_FlamingLasso::GetOverrideAnimation  (line 1088, @0x0000000002b33e00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Batrider_FlamingLasso::GetOverrideAnimation(
        CDOTA_Modifier_Batrider_FlamingLasso *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Batrider_FlamingLasso::OnHorizontalMotionInterrupted  (line 1095, @0x0000000002b377c0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Batrider_FlamingLasso *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Batrider_FlamingLasso::CheckState  (line 1104, @0x0000000002b33e20, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso::CheckState(
        CDOTA_Modifier_Batrider_FlamingLasso *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Batrider_FlamingLasso_Self::~CDOTA_Modifier_Batrider_FlamingLasso_Self  (line 1113, @0x0000000002b9bd10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Self::~CDOTA_Modifier_Batrider_FlamingLasso_Self(
        CDOTA_Modifier_Batrider_FlamingLasso_Self *const this)
{
  this->_vptr_CDOTA_Buff = &off_4496C30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Batrider_FlamingLasso_Self::~CDOTA_Modifier_Batrider_FlamingLasso_Self  (line 1113, @0x0000000002b9bd30, libserver.so)  // inlines: ~CDOTA_Modifier_Batrider_FlamingLasso_Self
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Self::~CDOTA_Modifier_Batrider_FlamingLasso_Self(
        CDOTA_Modifier_Batrider_FlamingLasso_Self *const this)
{
  this->_vptr_CDOTA_Buff = &off_4496C30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Batrider_FlamingLasso_Self::IsPurgable  (line 1118, @0x0000000002b8d230, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Self::IsPurgable(
        CDOTA_Modifier_Batrider_FlamingLasso_Self *const this)
{
  return 0;
}


// CDOTA_Modifier_Batrider_FlamingLasso_Self::IsHidden  (line 1119, @0x0000000002b8d240, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Self::IsHidden(
        CDOTA_Modifier_Batrider_FlamingLasso_Self *const this)
{
  return 0;
}


// CDOTA_Modifier_Batrider_FlamingLasso_Self::IsDebuff  (line 1120, @0x0000000002b8d250, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Self::IsDebuff(
        CDOTA_Modifier_Batrider_FlamingLasso_Self *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_FlamingLasso_Self::CheckState  (line 1129, @0x0000000002b33e30, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Self::CheckState(
        CDOTA_Modifier_Batrider_FlamingLasso_Self *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Modifier_Batrider_FlamingLasso_Damage::~CDOTA_Modifier_Batrider_FlamingLasso_Damage  (line 1146, @0x0000000002b9bcc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Damage::~CDOTA_Modifier_Batrider_FlamingLasso_Damage(
        CDOTA_Modifier_Batrider_FlamingLasso_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4496F50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Batrider_FlamingLasso_Damage::~CDOTA_Modifier_Batrider_FlamingLasso_Damage  (line 1146, @0x0000000002b9bce0, libserver.so)  // inlines: ~CDOTA_Modifier_Batrider_FlamingLasso_Damage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Damage::~CDOTA_Modifier_Batrider_FlamingLasso_Damage(
        CDOTA_Modifier_Batrider_FlamingLasso_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4496F50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Batrider_FlamingLasso_Damage::IsHidden  (line 1153, @0x0000000002b8d260, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Damage::IsHidden(
        CDOTA_Modifier_Batrider_FlamingLasso_Damage *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_FlamingLasso_Damage::IsDebuff  (line 1154, @0x0000000002b8d270, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Damage::IsDebuff(
        CDOTA_Modifier_Batrider_FlamingLasso_Damage *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_FlamingLasso_Damage::IsStunDebuff  (line 1155, @0x0000000002b8d280, libserver.so)
bool __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Damage::IsStunDebuff(
        CDOTA_Modifier_Batrider_FlamingLasso_Damage *const this)
{
  return 1;
}


// CDOTA_Modifier_Batrider_FlamingLasso_Damage::OnCreated  (line 1167, @0x0000000002b7e470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Damage::OnCreated(
        CDOTA_Modifier_Batrider_FlamingLasso_Damage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  int v7; // eax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->damage_scepter = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->duration = 0.0;
    v7 = 0;
    goto LABEL_4;
  }
  this->damage_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_scepter", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
  this->duration = LevelSpecialValue;
  v7 = (LevelSpecialValue + LevelSpecialValue);
LABEL_4:
  this->max_ticks = v7;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v5);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Batrider_FlamingLasso_Damage::OnIntervalThink  (line 1184, @0x0000000002b3c020, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage
// strings: "modifier_batrider_flaming_lasso"
void __fastcall CDOTA_Modifier_Batrider_FlamingLasso_Damage::OnIntervalThink(
        CDOTA_Modifier_Batrider_FlamingLasso_Damage *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v6; // [rsp+Ch] [rbp-24h]

  if ( this->max_ticks > 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_batrider_flaming_lasso", 0) != 0 )
    {
      --this->max_ticks;
      v6 = 0.5 * this->damage_scepter;
      Ability = CDOTA_Buff::GetAbility(this);
      v4 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, v4, Ability, v6, 2, 0);
    }
  }
}


