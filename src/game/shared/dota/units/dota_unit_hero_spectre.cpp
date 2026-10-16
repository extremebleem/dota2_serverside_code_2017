// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:35
class CDOTA_Unit_Hero_Spectre : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Spectre(CDOTA_Unit_Hero_Spectre &);
	CDOTA_Unit_Hero_Spectre(CDOTA_Unit_Hero_Spectre &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnAlive();
	virtual void OnDying();
	virtual bool HasFlyingVision();
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_Spectre();
	virtual bool ShouldDoFlyHeightVisual();
	virtual ~CDOTA_Unit_Hero_Spectre();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[445] HasFlyingVision
	// vtable[502] GetDeathEffectName
	// vtable[488] ShouldDoFlyHeightVisual
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:53
class C_CDOTA_Unit_Hero_Spectre_MapInstall {
	C_CDOTA_Unit_Hero_Spectre_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:88
class CDOTA_Modifier_Spectre_SpectralDaggerPath : public CDOTA_Buff {
	struct sShadowPathLocation {
		float m_fExpireTime;  // +0xc
		sShadowPathLocation();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int path_radius;  // +0xbd8
	int vision_radius;  // +0xbdc
	int dagger_radius;  // +0xbe0
	float buff_persistence;  // +0xbe4
	float dagger_grace_period;  // +0xbe8
	float dagger_path_duration;  // +0xbec
	CDOTA_Modifier_Spectre_SpectralDaggerPath();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	void AddShadowPathLocation(const Vector &, float);
	virtual ~CDOTA_Modifier_Spectre_SpectralDaggerPath();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3056
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:272
class CDOTA_Ability_Spectre_SpectralDagger : public CDOTABaseAbility {
public:

private:

	float dagger_path_duration;  // +0x390
	float hero_path_duration;  // +0x394
	float m_fCreateInterval;  // +0x398
	float m_fLastCreate;  // +0x39c
	bool m_bIsTrackingProjectile;  // +0x3a0

	EHANDLE m_hTrackingTarget;  // +0x3c0
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
	CDOTA_Ability_Spectre_SpectralDagger(CDOTA_Ability_Spectre_SpectralDagger &);
	CDOTA_Ability_Spectre_SpectralDagger(CDOTA_Ability_Spectre_SpectralDagger &);
	CDOTA_Ability_Spectre_SpectralDagger();
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
	virtual void OnUnStolen();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Spectre_SpectralDagger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[308] OnUnStolen
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[242] GetCooldown
	// sizeof = 968
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:302
class C_CDOTA_Ability_Spectre_SpectralDagger_MapInstall {
	C_CDOTA_Ability_Spectre_SpectralDagger_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:503
class CDOTA_Modifier_Spectre_SpectralDagger : public CDOTA_Buff {
public:

private:

	int path_radius;  // +0xba8
	float hero_path_duration;  // +0xbac
	CDOTA_Modifier_Spectre_SpectralDagger();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Spectre_SpectralDagger();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:572
class CDOTA_Modifier_Spectre_SpectralDaggerInPath : public CDOTA_Buff {
public:

private:

	int bonus_movespeed;  // +0xba8
	EHANDLE m_hTrackingTarget;  // +0xbac
	CDOTA_Modifier_Spectre_SpectralDaggerInPath();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Spectre_SpectralDaggerInPath();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:647
class CDOTA_Modifier_Spectre_SpectralDaggerPathPhased : public CDOTA_Buff {
public:

	CDOTA_Modifier_Spectre_SpectralDaggerPathPhased();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Spectre_SpectralDaggerPathPhased();

	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:685
class CDOTA_Ability_Spectre_Desolate : public CDOTABaseAbility {
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
	CDOTA_Ability_Spectre_Desolate(CDOTA_Ability_Spectre_Desolate &);
	CDOTA_Ability_Spectre_Desolate(CDOTA_Ability_Spectre_Desolate &);
	CDOTA_Ability_Spectre_Desolate();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Spectre_Desolate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:698
class C_CDOTA_Ability_Spectre_Desolate_MapInstall {
	C_CDOTA_Ability_Spectre_Desolate_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:739
class CDOTA_Modifier_Spectre_Desolate : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	int radius;  // +0xbac
	CDOTA_Modifier_Spectre_Desolate();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_Spectre_Desolate();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:830
class CDOTA_Ability_Spectre_Dispersion : public CDOTABaseAbility {
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
	CDOTA_Ability_Spectre_Dispersion(CDOTA_Ability_Spectre_Dispersion &);
	CDOTA_Ability_Spectre_Dispersion(CDOTA_Ability_Spectre_Dispersion &);
	CDOTA_Ability_Spectre_Dispersion();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Spectre_Dispersion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:844
class C_CDOTA_Ability_Spectre_Dispersion_MapInstall {
	C_CDOTA_Ability_Spectre_Dispersion_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:854
class CDOTA_Modifier_Spectre_Dispersion : public CDOTA_Buff {
public:

private:

	int damage_reflection_pct;  // +0xba8
	int min_radius;  // +0xbac
	int max_radius;  // +0xbb0
	CDOTA_Modifier_Spectre_Dispersion();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Spectre_Dispersion();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:964
class CDOTA_Ability_Spectre_Haunt : public CDOTABaseAbility {
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
	CDOTA_Ability_Spectre_Haunt(CDOTA_Ability_Spectre_Haunt &);
	CDOTA_Ability_Spectre_Haunt(CDOTA_Ability_Spectre_Haunt &);
	CDOTA_Ability_Spectre_Haunt();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Spectre_Haunt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:1060
class CDOTA_Modifier_Spectre_Haunt : public CDOTA_Buff {
public:

private:

	float m_fStartAttackTime;  // +0xba8
	EHANDLE hTarget;  // +0xbac
	CDOTA_Modifier_Spectre_Haunt();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual int GetPriority();
	ModifierVariant_t GetModifierMoveSpeedOverride(const CModifierParams &);
	virtual ~CDOTA_Modifier_Spectre_Haunt();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[6] GetPriority
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_spectre.cpp:1183
class CDOTA_Ability_Spectre_Reality : public CDOTABaseAbility {
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
	CDOTA_Ability_Spectre_Reality(CDOTA_Ability_Spectre_Reality &);
	CDOTA_Ability_Spectre_Reality(CDOTA_Ability_Spectre_Reality &);
	CDOTA_Ability_Spectre_Reality();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual ~CDOTA_Ability_Spectre_Reality();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// sizeof = 912
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Spectre::~CDOTA_Unit_Hero_Spectre  (line 35, @0x0000000002c072d0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Spectre::~CDOTA_Unit_Hero_Spectre(CDOTA_Unit_Hero_Spectre *const this)
{
  this->_vptr_IHandleEntity = &off_455FC30;
  this->_vptr_INextBotEventResponder = &off_4560C10;
  this->_vptr_CObstructionObject = &off_4560F40;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Spectre::~CDOTA_Unit_Hero_Spectre  (line 35, @0x0000000002c07310, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Spectre
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Spectre::~CDOTA_Unit_Hero_Spectre(CDOTA_Unit_Hero_Spectre *const this)
{
  this->_vptr_IHandleEntity = &off_455FC30;
  this->_vptr_INextBotEventResponder = &off_4560C10;
  this->_vptr_CObstructionObject = &off_4560F40;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Spectre::Schema_DynamicBinding  (line 37, @0x0000000002bffd70, libserver.so)
// globals: CDOTA_Unit_Hero_Spectre::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Spectre::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Spectre *const this)
{
  return CDOTA_Unit_Hero_Spectre::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002bffda0, libserver.so)
// globals: CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002bffdb0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Spectre>
void __fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002bffdd0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002bffdf0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002bffe00, libserver.so)
// globals: CDOTA_Unit_Hero_Spectre::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Spectre::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002c028f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002c04690, libserver.so)  // inlines: CDOTA_Unit_Hero_Spectre, Construct<CDOTA_Unit_Hero_Spectre>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_455FC30;
    *(p + 236) = &off_4560C10;
    *(p + 257) = &off_4560F40;
  }
  return p;
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002c0b4a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002c0b6d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Spectre::GetEntityClassInternal  (line 37, @0x0000000002c16c20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_spectre", "CDOTA_Unit_Hero_Spectre"
// globals: `guard variable for'CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass, CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass, __dso_handle, CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo, CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Spectre::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass);
    CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass._vptr_CEntityClass = off_455FBB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SpectreClass != 0 )
    return &CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo,
      "CDOTA_Unit_Hero_Spectre",
      "npc_dota_hero_spectre",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo);
  }
  CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass.m_pClassInfo = &CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo;
  CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SpectreClass = &CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass;
  CDOTA_Unit_Hero_Spectre::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpectreClassInfo.m_pClass = &CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass;
  CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SpectreClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Spectre::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpectreClass;
}


// CDOTA_Unit_Hero_Spectre::HasFlyingVision  (line 43, @0x0000000002bffe10, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Spectre::HasFlyingVision(CDOTA_Unit_Hero_Spectre *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Spectre::GetDeathEffectName  (line 44, @0x0000000002bffe20, libserver.so)
// strings: "particles/units/heroes/hero_spectre/spectre_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Spectre::GetDeathEffectName(CDOTA_Unit_Hero_Spectre *const this)
{
  return "particles/units/heroes/hero_spectre/spectre_death.vpcf";
}


// CDOTA_Unit_Hero_Spectre::ShouldDoFlyHeightVisual  (line 50, @0x0000000002bffe30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Spectre::ShouldDoFlyHeightVisual(CDOTA_Unit_Hero_Spectre *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Spectre::YouForgotToImplementOrDeclareServerClass  (line 53, @0x0000000002bd3aa0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Spectre::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Spectre *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Spectre::GetServerClass  (line 53, @0x0000000002bdc5b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Spectre::GetServerClass(CDOTA_Unit_Hero_Spectre *const this)
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


// CDOTA_Unit_Hero_Spectre::OnAlive  (line 62, @0x0000000002bd8fd0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_Unit_Hero_Spectre::OnAlive(CDOTA_Unit_Hero_Spectre *const this)
{
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CDOTA_Unit_Hero_Spectre::OnDying  (line 71, @0x0000000002bd4bc0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Spectre::OnDying(CDOTA_Unit_Hero_Spectre *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Modifier_Spectre_SpectralDaggerPath::~CDOTA_Modifier_Spectre_SpectralDaggerPath  (line 88, @0x0000000002c1a1f0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation, int>::Purge
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPath::~CDOTA_Modifier_Spectre_SpectralDaggerPath(
        CDOTA_Modifier_Spectre_SpectralDaggerPath *const this)
{
  bool v2; // zf

  this->_vptr_CDOTA_Buff = &off_4560FD0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hUnitsInPath);
  if ( (this->m_hUnitsInPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hUnitsInPath.m_Memory);
    if ( (this->m_hUnitsInPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hUnitsInPath.m_Memory);
  }
  v2 = (this->m_vShadowPathLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vShadowPathLocations.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation,int>::Purge(&this->m_vShadowPathLocations.m_Memory),
        (this->m_vShadowPathLocations.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation,int>::Purge(&this->m_vShadowPathLocations.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Spectre_SpectralDaggerPath::~CDOTA_Modifier_Spectre_SpectralDaggerPath  (line 88, @0x0000000002c1a2a0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Spectre_SpectralDaggerPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation, int>::Purge
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPath::~CDOTA_Modifier_Spectre_SpectralDaggerPath(
        CDOTA_Modifier_Spectre_SpectralDaggerPath *const this)
{
  bool v2; // zf

  this->_vptr_CDOTA_Buff = &off_4560FD0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hUnitsInPath);
  if ( (this->m_hUnitsInPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hUnitsInPath.m_Memory);
    if ( (this->m_hUnitsInPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hUnitsInPath.m_Memory);
  }
  v2 = (this->m_vShadowPathLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vShadowPathLocations.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation,int>::Purge(&this->m_vShadowPathLocations.m_Memory);
    if ( (this->m_vShadowPathLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation,int>::Purge(&this->m_vShadowPathLocations.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Spectre_SpectralDaggerPath::IsHidden  (line 93, @0x0000000002bffe40, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPath::IsHidden(
        CDOTA_Modifier_Spectre_SpectralDaggerPath *const this)
{
  return 1;
}


// CDOTA_Modifier_Spectre_SpectralDaggerPath::IsPurgable  (line 94, @0x0000000002bffe50, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPath::IsPurgable(
        CDOTA_Modifier_Spectre_SpectralDaggerPath *const this)
{
  return 0;
}


// CDOTA_Modifier_Spectre_SpectralDaggerPath::AddShadowPathLocation  (line 125, @0x0000000002bfc860, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation>, DOTAGameRules, Element, GetGameTime, GetTeamNumber, GrowMemory, operator=, operator[]
// calls: CDOTA_Buff::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation, int>::Grow
// callers: CDOTA_Ability_Spectre_SpectralDagger::OnProjectileThink, CDOTA_Modifier_Spectre_SpectralDagger::OnIntervalThink
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPath::AddShadowPathLocation(
        CDOTA_Modifier_Spectre_SpectralDaggerPath *const this,
        const CFieldPath *vLocation,
        float a3,
        float duration)
{
  float v5; // xmm0_4
  vec_t v8; // xmm4_4
  vec_t v9; // xmm3_4
  vec_t v10; // xmm2_4
  int m_Size; // r13d
  float v12; // xmm0_4
  int v13; // eax
  CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation *v14; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v16; // [rsp-8h] [rbp-3Ch]
  vec_t v17; // [rsp-4h] [rbp-38h]
  vec_t durationa; // [rsp+0h] [rbp-34h]
  float v19; // [rsp+4h] [rbp-30h]
  vec_t v20; // [rsp+4h] [rbp-30h]
  float vision_radius; // [rsp+8h] [rbp-2Ch]
  float v22; // [rsp+8h] [rbp-2Ch]

  v5 = 0.0;
  v8 = *&vLocation->u.m_pPaths;
  v9 = *&vLocation->u.m_FixedPaths[2].m_nValue;
  v10 = *&vLocation->u.m_FixedPaths[4].m_nValue;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  m_Size = this->m_vShadowPathLocations.m_Size;
  v12 = v5 + a3;
  v13 = m_Size;
  if ( m_Size == this->m_vShadowPathLocations.m_Memory.m_nAllocationCount )
  {
    v16 = a3;
    v17 = *&vLocation->u.m_FixedPaths[4].m_nValue;
    durationa = *&vLocation->u.m_FixedPaths[2].m_nValue;
    v20 = *&vLocation->u.m_pPaths;
    v22 = v12;
    CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation,int>::Grow(
      &this->m_vShadowPathLocations.m_Memory,
      1);
    v13 = this->m_vShadowPathLocations.m_Size;
    a3 = v16;
    v10 = v17;
    v9 = durationa;
    v8 = v20;
    v12 = v22;
  }
  this->m_vShadowPathLocations.m_Size = v13 + 1;
  v14 = &this->m_vShadowPathLocations.m_Memory.m_pMemory[m_Size];
  if ( v14 != 0 )
  {
    v14->m_vLoc.x = v8;
    v14->m_vLoc.y = v9;
    v14->m_vLoc.z = v10;
    v14->m_fExpireTime = v12;
  }
  v19 = a3;
  vision_radius = this->vision_radius;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_SPECTRALDAGGER,
    Caster->m_iTeamNum.m_Value,
    vLocation,
    vision_radius,
    v19,
    1);
}


// CDOTA_Modifier_Spectre_SpectralDaggerPath::OnCreated  (line 140, @0x0000000002bf3840, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "dagger_radius", "path_radius", "buff_persistence", "dagger_grace_period", "dagger_path_duration"
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPath::OnCreated(
        CDOTA_Modifier_Spectre_SpectralDaggerPath *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  float v9; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->dagger_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "dagger_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->dagger_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->vision_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "vision_radius", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->vision_radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->path_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "path_radius", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->path_radius = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->buff_persistence = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "buff_persistence", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_13:
    this->dagger_grace_period = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->dagger_path_duration = 0.0;
    goto LABEL_8;
  }
LABEL_12:
  this->buff_persistence = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_13;
LABEL_6:
  this->dagger_grace_period = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "dagger_grace_period", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->dagger_path_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "dagger_path_duration", -1, 0);
LABEL_8:
  CDOTA_Buff::StartIntervalThink(this, 0.25, v9);
}


// CDOTA_Modifier_Spectre_SpectralDaggerPath::OnRefresh  (line 156, @0x0000000002bf3680, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "dagger_radius", "path_radius", "buff_persistence", "dagger_grace_period", "dagger_path_duration"
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPath::OnRefresh(
        CDOTA_Modifier_Spectre_SpectralDaggerPath *const this,
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
    this->dagger_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "dagger_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->dagger_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->vision_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "vision_radius", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->vision_radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->path_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "path_radius", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->path_radius = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->buff_persistence = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "buff_persistence", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->dagger_grace_period = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->buff_persistence = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->dagger_grace_period = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "dagger_grace_period", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->dagger_path_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "dagger_path_duration", -1, 0);
    return;
  }
LABEL_13:
  this->dagger_path_duration = 0.0;
}


// CDOTA_Modifier_Spectre_SpectralDaggerPath::OnIntervalThink  (line 168, @0x0000000002bf5460, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Remove, Set, ShiftElementsLeft, ToDOTABaseNPC, V_memmove, memmove, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::SetCount, memmove, CDOTA_Buff::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindModifierByName, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll (18 total)
// strings: "modifier_spectre_spectral_dagger_in_path", "modifier_spectre_spectral_dagger_path_phased"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPath::OnIntervalThink(
        CDOTA_Modifier_Spectre_SpectralDaggerPath *const this)
{
  __m128i v1; // xmm2
  int m_Size; // ebx
  unsigned __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  float v7; // xmm1_4
  CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation *m_pMemory; // rcx
  unsigned __int64 v9; // rbx
  float v10; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation *v12; // rbx
  CDOTA_BaseNPC *v13; // rax
  __int64 v14; // r12
  int v15; // ebx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int8 m_Value; // r15
  CEntityIdentity *m_pEntity; // r15
  __int16 v24; // cx
  int v25; // eax
  __int16 v26; // cx
  int v27; // eax
  CDOTABaseAbility *v28; // r13
  CDOTA_BaseNPC *v29; // r15
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_Buff *ModifierByName; // rax
  __int64 v33; // r12
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rbx
  CDOTA_Buff *v36; // rdi
  CEntityIdentity *v37; // rdx
  int v38; // eax
  __int16 v39; // cx
  CDOTA_Buff *v40; // rax
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v42; // rax
  CDOTA_Buff *v43; // rax
  CDOTA_Buff *v44; // r15
  CDOTA_BaseNPC *v45; // r15
  CEntityIdentity *v46; // rdx
  int v47; // eax
  __int16 v48; // cx
  __int64 v49; // r13
  int v50; // eax
  CHandle<CBaseEntity> *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  CDOTA_Buff *v53; // r15
  CDOTABaseAbility *pAbility; // [rsp+20h] [rbp-E0h]
  int i; // [rsp+3Ch] [rbp-C4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hUnitsInPath; // [rsp+50h] [rbp-B0h]
  CHandle<CBaseEntity> v57[4]; // [rsp+60h] [rbp-A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnitsNoLongerInPath; // [rsp+70h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+90h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+C8h] [rbp-38h]

  hUnitsNoLongerInPath.m_Memory.m_nAllocationCount = 0;
  v61 = __readfsqword(0x28u);
  hUnitsNoLongerInPath.m_Size = 0;
  hUnitsNoLongerInPath.m_Memory.m_nGrowSize = 0;
  hUnitsNoLongerInPath.m_Memory.m_pMemory = 0;
  p_m_hUnitsInPath = &this->m_hUnitsInPath;
  if ( &this->m_hUnitsInPath != &hUnitsNoLongerInPath )
  {
    m_Size = this->m_hUnitsInPath.m_Size;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::SetCount(&hUnitsNoLongerInPath, m_Size);
    if ( m_Size > 0 )
    {
      v4 = 0;
      do
      {
        hUnitsNoLongerInPath.m_Memory.m_pMemory[v4 / 4].m_Index = this->m_hUnitsInPath.m_Memory.m_pMemory[v4 / 4].m_Index;
        v4 += 4LL;
      }
      while ( v4 != 4LL * (m_Size - 1) + 4 );
    }
  }
  v5 = this->m_vShadowPathLocations.m_Size;
  if ( v5 > 0 )
  {
    i = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = 0.0;
        m_pMemory = this->m_vShadowPathLocations.m_Memory.m_pMemory;
        v9 = i;
        if ( g_pGameRules != 0 )
          v7 = *&g_pGameRules[18].m_szQuestName[20];
        if ( v7 <= m_pMemory[v9].m_fExpireTime )
          break;
        v6 = v5 - i - 1;
        if ( v6 > 0 )
          memmove(&m_pMemory[v9], &m_pMemory[v9 + 1], 16LL * v6);
        v5 = this->m_vShadowPathLocations.m_Size - 1;
        this->m_vShadowPathLocations.m_Size = v5;
        if ( i >= v5 )
          goto LABEL_39;
      }
      *v1.m128i_i32 = this->path_radius;
      hUnits.m_Size = 0;
      hUnits.m_Memory.m_pMemory = 0;
      hUnits.m_Memory.m_nAllocationCount = 0;
      hUnits.m_Memory.m_nGrowSize = 0;
      v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
      Caster = CDOTA_Buff::GetCaster(this);
      v12 = &this->m_vShadowPathLocations.m_Memory.m_pMemory[v9];
      v13 = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(v13->m_iTeamNum.m_Value, &v12->m_vLoc, Caster, v10, &hUnits, 3, 3, 16, 0, 0);
      if ( hUnits.m_Size > 0 )
        break;
LABEL_37:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
      if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
        if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
      }
      v5 = this->m_vShadowPathLocations.m_Size;
      if ( ++i >= v5 )
        goto LABEL_39;
    }
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v16 = &hUnits.m_Memory.m_pMemory[v14];
      m_Index = hUnits.m_Memory.m_pMemory[v14].m_Index;
      if ( m_Index + 2 <= 1 )
        goto LABEL_15;
      v18 = v16->m_Index;
      v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
      if ( v19 == 0 )
        goto LABEL_15;
      v20 = &v19[v18 & 0x1FF];
      if ( v20 == 0 )
        goto LABEL_15;
      if ( m_Index != v20->m_EHandle.m_Index )
        goto LABEL_15;
      m_pInstance = v20->m_pInstance;
      if ( v20->m_pInstance == 0 )
        goto LABEL_15;
      if ( !m_pInstance->m_bIsDOTANPC )
        goto LABEL_15;
      if ( CDOTA_Buff::GetCaster(this) != m_pInstance )
      {
        m_Value = m_pInstance->m_iTeamNum.m_Value;
        if ( m_Value == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
          goto LABEL_15;
      }
      v57[0].m_Index = -1;
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v24 = 0x7FFF;
        v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v57[0].m_Index) = v24 | v57[0].m_Index & 0x8000;
        v57[0].m_Index = (v25 << 15) | v57[0].m_Index & 0x7FFF;
      }
      if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(p_m_hUnitsInPath, v57) < 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_spectre_spectral_dagger_in_path");
        Ability = CDOTA_Buff::GetAbility(this);
        v42 = CDOTA_Buff::GetCaster(this);
        v43 = CDOTA_BaseNPC::AddNewModifier(
                m_pInstance,
                v42,
                Ability,
                "modifier_spectre_spectral_dagger_in_path",
                &kv,
                0);
        v44 = v43;
        if ( v43 != 0 )
        {
          (*(v43->_vptr_CDOTA_Buff + 63))(v43, 1, -1.0);
          if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
            (*(v44->_vptr_CDOTA_Buff + 63))(v44, 1, this->dagger_path_duration);
        }
        v45 = CDOTA_Buff::GetCaster(this);
        if ( v45 == m_pInstance )
        {
          pAbility = CDOTA_Buff::GetAbility(this);
          v52 = CDOTA_Buff::GetCaster(this);
          v53 = CDOTA_BaseNPC::AddNewModifier(
                  v45,
                  v52,
                  pAbility,
                  "modifier_spectre_spectral_dagger_path_phased",
                  &kv,
                  0);
          if ( v53 != 0 && CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
            (*(v53->_vptr_CDOTA_Buff + 63))(v53, 1, this->dagger_path_duration);
        }
        v57[0].m_Index = -1;
        v46 = m_pInstance->m_pEntity;
        if ( v46 != 0 )
        {
          v47 = (v46->m_EHandle.m_Index >> 15) - (v46->m_flags & 1);
          v48 = 0x7FFF;
          if ( v46->m_EHandle.m_Index != -1 )
            v48 = v46->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v57[0].m_Index) = v48 | v57[0].m_Index & 0x8000;
          v57[0].m_Index = (v47 << 15) | v57[0].m_Index & 0x7FFF;
        }
        v49 = this->m_hUnitsInPath.m_Size;
        v50 = this->m_hUnitsInPath.m_Size;
        if ( v49 == this->m_hUnitsInPath.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hUnitsInPath.m_Memory, 1);
          v50 = this->m_hUnitsInPath.m_Size;
        }
        this->m_hUnitsInPath.m_Size = v50 + 1;
        v51 = &this->m_hUnitsInPath.m_Memory.m_pMemory[v49];
        if ( v51 != 0 )
          v51->m_Index = v57[0];
        goto LABEL_36;
      }
      v57[0].m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v26 = 0x7FFF;
        v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v57[0].m_Index) = v26 | v57[0].m_Index & 0x8000;
        v57[0].m_Index = (v27 << 15) | v57[0].m_Index & 0x7FFF;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(
        &hUnitsNoLongerInPath,
        v57);
      if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
      {
        KeyValues::KeyValues(&kv, "modifier_spectre_spectral_dagger_in_path");
        v28 = CDOTA_Buff::GetAbility(this);
        v29 = CDOTA_Buff::GetCaster(this);
        v30 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v30, v29, v28, "modifier_spectre_spectral_dagger_in_path", &kv, 0);
        v31 = CDOTA_Buff::GetCaster(this);
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(v31, "modifier_spectre_spectral_dagger_path_phased", 0);
        if ( ModifierByName != 0 )
          (*(ModifierByName->_vptr_CDOTA_Buff + 63))(ModifierByName, 1, -1.0);
LABEL_36:
        ++v15;
        ++v14;
        KeyValues::~KeyValues(&kv);
        if ( hUnits.m_Size <= v15 )
          goto LABEL_37;
      }
      else
      {
LABEL_15:
        ++v15;
        ++v14;
        if ( hUnits.m_Size <= v15 )
          goto LABEL_37;
      }
    }
  }
LABEL_39:
  if ( hUnitsNoLongerInPath.m_Size > 0 )
  {
    v33 = 0;
    do
    {
      v34 = CEntityHandle::operator CEntityInstance *(&hUnitsNoLongerInPath.m_Memory.m_pMemory[v33]);
      v35 = v34;
      if ( v34 != 0 && v34->m_bIsDOTANPC )
      {
        v36 = CDOTA_BaseNPC::FindModifierByName(v34, "modifier_spectre_spectral_dagger_in_path", 0);
        if ( v36 != 0 )
          (*(v36->_vptr_CDOTA_Buff + 63))(v36, 1, this->buff_persistence);
        if ( CDOTA_Buff::GetCaster(this) == v35 )
        {
          v40 = CDOTA_BaseNPC::FindModifierByName(v35, "modifier_spectre_spectral_dagger_path_phased", 0);
          if ( v40 != 0 )
            (*(v40->_vptr_CDOTA_Buff + 63))(v40, 1, this->dagger_grace_period);
        }
        hUnits.m_Size = -1;
        v37 = v35->m_pEntity;
        if ( v37 != 0 )
        {
          v38 = (v37->m_EHandle.m_Index >> 15) - (v37->m_flags & 1);
          v39 = 0x7FFF;
          if ( v37->m_EHandle.m_Index != -1 )
            v39 = v37->m_EHandle.m_Index & 0x7FFF;
          LOWORD(hUnits.m_Size) = v39 | hUnits.m_Size & 0x8000;
          hUnits.m_Size = (v38 << 15) | hUnits.m_Size & 0x7FFF;
        }
      }
      else
      {
        hUnits.m_Size = -1;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(
        p_m_hUnitsInPath,
        &hUnits);
      ++v33;
    }
    while ( hUnitsNoLongerInPath.m_Size > v33 );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnitsNoLongerInPath);
}


// CDOTA_Ability_Spectre_SpectralDagger::~CDOTA_Ability_Spectre_SpectralDagger  (line 272, @0x0000000002c199c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::~CDOTA_Ability_Spectre_SpectralDagger(
        CDOTA_Ability_Spectre_SpectralDagger *const this)
{
  this->_vptr_IHandleEntity = &off_4561330;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTrackingProjectileHits);
  if ( (this->m_hTrackingProjectileHits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTrackingProjectileHits.m_Memory),
        (this->m_hTrackingProjectileHits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTrackingProjectileHits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Spectre_SpectralDagger::~CDOTA_Ability_Spectre_SpectralDagger  (line 272, @0x0000000002c19cc0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Spectre_SpectralDagger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::~CDOTA_Ability_Spectre_SpectralDagger(
        CDOTA_Ability_Spectre_SpectralDagger *const this)
{
  this->_vptr_IHandleEntity = &off_4561330;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTrackingProjectileHits);
  if ( (this->m_hTrackingProjectileHits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTrackingProjectileHits.m_Memory);
    if ( (this->m_hTrackingProjectileHits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTrackingProjectileHits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Spectre_SpectralDagger::Schema_DynamicBinding  (line 274, @0x0000000002bffe60, libserver.so)
// globals: CDOTA_Ability_Spectre_SpectralDagger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_SpectralDagger::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_SpectralDagger *const this)
{
  return CDOTA_Ability_Spectre_SpectralDagger::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 274, @0x0000000002bffe70, libserver.so)
// globals: CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::DestructInstance  (line 274, @0x0000000002bffe80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Spectre_SpectralDagger>
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::FreeInstance  (line 274, @0x0000000002bffea0, libserver.so)
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::CanAllocate  (line 274, @0x0000000002bffec0, libserver.so)
bool __fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 274, @0x0000000002bffed0, libserver.so)
// globals: CDOTA_Ability_Spectre_SpectralDagger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_SpectralDagger::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::AllocateInstance  (line 274, @0x0000000002c02930, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::ConstructInstance  (line 274, @0x0000000002c0a2b0, libserver.so)  // inlines: CDOTA_Ability_Spectre_SpectralDagger, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Spectre_SpectralDagger>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 234) = 0;
    *p = &off_4561330;
    *(p + 118) = 0;
    *(p + 238) = 0;
    *(p + 239) = 0;
    *(p + 240) = -1;
  }
  return p;
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 274, @0x0000000002c0aff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 274, @0x0000000002c0b010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal  (line 274, @0x0000000002c16d70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "spectre_spectral_dagger", "CDOTA_Ability_Spectre_SpectralDagger"
// globals: `guard variable for'CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass, CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass, __dso_handle, CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo, CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass);
    CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass._vptr_CEntityClass = off_45612B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass);
    __cxa_atexit(
      CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Spectre_SpectralDaggerClass != 0 )
    return &CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass;
  if ( `guard variable for'CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo,
      "CDOTA_Ability_Spectre_SpectralDagger",
      "spectre_spectral_dagger",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo);
  }
  CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass.m_pClassInfo = &CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo;
  CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass.m_pBaseClassInfo = CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Spectre_SpectralDaggerClass = &CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass;
  CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClassInfo.m_pClass = &CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass;
  CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Spectre_SpectralDaggerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Spectre_SpectralDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_SpectralDaggerClass;
}


// CDOTA_Ability_Spectre_SpectralDagger::GetIntrinsicModifierName  (line 284, @0x0000000002bffee0, libserver.so)
// strings: "modifier_spectre_spectral_dagger_path"
const char *__fastcall CDOTA_Ability_Spectre_SpectralDagger::GetIntrinsicModifierName(
        CDOTA_Ability_Spectre_SpectralDagger *const this)
{
  return "modifier_spectre_spectral_dagger_path";
}


// CDOTA_Ability_Spectre_SpectralDagger::YouForgotToImplementOrDeclareServerClass  (line 302, @0x0000000002bd3ab0, libserver.so)
int __fastcall CDOTA_Ability_Spectre_SpectralDagger::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Spectre_SpectralDagger *const this)
{
  return 0;
}


// CDOTA_Ability_Spectre_SpectralDagger::GetServerClass  (line 302, @0x0000000002bdc930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Spectre_SpectralDagger::GetServerClass(
        CDOTA_Ability_Spectre_SpectralDagger *const this)
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


// CDOTA_Ability_Spectre_SpectralDagger::GetCooldown  (line 312, @0x0000000002be9710, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_spectre"
float __fastcall CDOTA_Ability_Spectre_SpectralDagger::GetCooldown(
        CDOTA_Ability_Spectre_SpectralDagger *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_spectre", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Spectre_SpectralDagger::OnSpellStart  (line 327, @0x0000000002bf4930, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Color, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GrowMemory, NormalizeInPlace, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorMultiply, VectorSubtract, operator*, operator-, operator=, operator[], sLinearProjectileCreateInfo, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_ProjectileManager::CreateTrackingProjectile, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, CUtlMemory<CHandle<CBaseEntity>, int>::Grow (15 total)
// strings: "dagger_path_duration", "hero_path_duration", "path_radius", "Hero_Spectre.DaggerCast", "particles/units/heroes/hero_spectre/spectre_spectral_dagger_tracking.vpcf", "dagger_radius" (7 total)
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::OnSpellStart(CDOTA_Ability_Spectre_SpectralDagger *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // eax
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v5; // r12
  CDOTA_BaseNPC *Caster; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v9; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // cx
  CEntityIdentity *v12; // rax
  __int16 v13; // cx
  CEntityIdentity *v14; // rax
  __int16 v15; // cx
  __int64 m_Size; // r13
  int v17; // eax
  CHandle<CBaseEntity> *v18; // rax
  CEntityIdentity *v19; // rax
  int v20; // edx
  __int16 v21; // cx
  CDOTA_BaseNPC *v22; // rax
  int v23; // r13d
  CDOTA_BaseNPC *v24; // rax
  const Vector *AbsOrigin; // r12
  vec_t v26; // xmm0_4
  vec_t v27; // xmm1_4
  vec_t v28; // xmm1_4
  vec_t v29; // xmm0_4
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // rax
  vec_t v32; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v34; // rax
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  CDOTA_BaseNPC *v38; // rax
  const QAngle *AbsAngles; // rax
  float v40; // [rsp+Ch] [rbp-124h]
  Vector vDirection; // [rsp+10h] [rbp-120h] BYREF
  sLinearProjectileCreateInfo info_0; // [rsp+20h] [rbp-110h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+A0h] [rbp-90h] BYREF
  unsigned __int64 v44; // [rsp+108h] [rbp-28h]

  v44 = __readfsqword(0x28u);
  this->dagger_path_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "dagger_path_duration", -1, 0);
  this->hero_path_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hero_path_duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "path_radius", -1, 0);
  this->m_fLastCreate = 0.0;
  v40 = LevelSpecialValue;
  this->m_fCreateInterval = v3 / LevelSpecialValue;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v5 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Spectre.DaggerCast", 0.0, 0, 0);
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.pAttackRecord = 0;
    info.iSourceAttachment = 1;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.bProvidesVision = 0;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.iVisionTeamNumber = -1;
    info.vSourceLoc.z = z;
    info.iVisionRadius = 0;
    info.bDrawsOnMinimap = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_spectre/spectre_spectral_dagger_tracking.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = LevelSpecialValue;
    v9 = CDOTABaseAbility::GetCaster(this);
    if ( v9 != 0 && (m_pEntity = v9->m_pEntity) != 0 )
    {
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    v12 = v5->m_pEntity;
    if ( v12 != 0 )
    {
      v13 = 0x7FFF;
      if ( v12->m_EHandle.m_Index != -1 )
        v13 = v12->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1)) << 15) | v13 & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.bDodgeable = 0;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    this->m_bIsTrackingProjectile = 1;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTrackingProjectileHits);
    LODWORD(info_0.pszEffectName) = -1;
    v14 = v5->m_pEntity;
    if ( v14 != 0 )
    {
      v15 = 0x7FFF;
      if ( v14->m_EHandle.m_Index != -1 )
        v15 = v14->m_EHandle.m_Index & 0x7FFF;
      LODWORD(info_0.pszEffectName) = (((v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    m_Size = this->m_hTrackingProjectileHits.m_Size;
    v17 = this->m_hTrackingProjectileHits.m_Size;
    if ( m_Size == this->m_hTrackingProjectileHits.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTrackingProjectileHits.m_Memory, 1);
      v17 = this->m_hTrackingProjectileHits.m_Size;
    }
    this->m_hTrackingProjectileHits.m_Size = v17 + 1;
    v18 = &this->m_hTrackingProjectileHits.m_Memory.m_pMemory[m_Size];
    if ( v18 != 0 )
      v18->m_Index = info_0.pszEffectName;
    v19 = v5->m_pEntity;
    if ( v19 != 0 )
    {
      v20 = (v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1);
      v21 = 0x7FFF;
      if ( v19->m_EHandle.m_Index != -1 )
        v21 = v19->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTrackingTarget.m_Index) = v21 | this->m_hTrackingTarget.m_Index & 0x8000;
      this->m_hTrackingTarget.m_Index = (v20 << 15) | this->m_hTrackingTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTrackingTarget.m_Index = -1;
    }
  }
  else
  {
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v22, "Hero_Spectre.DaggerCast", 0.0, 0, 0);
    v23 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dagger_radius", -1, 0);
    v24 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v24);
    *&info_0.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
    v26 = *(&info_0.pszEffectName + 1) - AbsOrigin->y;
    v27 = *&info_0.pszEffectName - AbsOrigin->x;
    vDirection.z = 0.0;
    vDirection.y = v26;
    vDirection.x = v27;
    if ( VectorNormalize(&vDirection) < 0.0099999998 )
    {
      v38 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v38);
      AngleVectors(AbsAngles, &vDirection, 0, 0);
    }
    info_0.pszEffectName = "particles/units/heroes/hero_spectre/spectre_spectral_dagger.vpcf";
    info_0.hSource.m_Index = -1;
    info_0.fDistance = 0.0;
    info_0.bHasFrontalCone = 1;
    v28 = vec3_origin.y;
    info_0.fStartRadius = 0.0;
    v29 = vec3_origin.z;
    info_0.vSpawnOrigin.x = vec3_origin.x;
    info_0.vSpawnOrigin.y = v28;
    info_0.vSpawnOrigin.z = v29;
    info_0.vVelocity.x = vec3_origin.x;
    info_0.vVelocity.y = v28;
    info_0.vVelocity.z = v29;
    info_0.vAcceleration.x = vec3_origin.x;
    info_0.vAcceleration.y = v28;
    info_0.vAcceleration.z = v29;
    info_0.fEndRadius = 0.0;
    info_0.bCheckStartPosition = 0;
    info_0.iUnitTargetTeam = 0;
    info_0.iUnitTargetType = 0;
    info_0.iUnitTargetFlags = 0;
    info_0.bProvidesVision = 0;
    info_0.iVisionTeamNumber = -1;
    info_0.iVisionRadius = -1;
    info_0.bDrawsOnMinimap = 0;
    info_0.bVisibleToEnemies = 1;
    info_0.bIgnoreSource = 0;
    info_0.pKVExtraData = 0;
    info_0.fExpireTime = 0.0;
    info_0.fMaxSpeed = 0.0;
    info_0.bStickyFoWReveal = 1;
    info_0.pAbility = this;
    v30 = CDOTABaseAbility::GetCaster(this);
    v31 = CBaseEntity::GetAbsOrigin(v30);
    info_0.vSpawnOrigin.x = v31->x;
    info_0.vSpawnOrigin.y = v31->y;
    v32 = v31->z;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    info_0.vVelocity.y = vDirection.y * v40;
    info_0.vSpawnOrigin.z = v32;
    info_0.vVelocity.z = vDirection.z * v40;
    info_0.vVelocity.x = v40 * vDirection.x;
    info_0.fDistance = vptr_IHandleEntity[229](this, &vec3_origin, 0);
    info_0.fStartRadius = v23;
    info_0.fEndRadius = v23;
    v34 = CDOTABaseAbility::GetCaster(this);
    if ( v34 != 0 && (v35 = v34->m_pEntity) != 0 )
    {
      v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
      v37 = 0x7FFF;
      if ( v35->m_EHandle.m_Index != -1 )
        v37 = v35->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info_0.hSource.m_Index) = v37 | info_0.hSource.m_Index & 0x8000;
      info_0.hSource.m_Index = (v36 << 15) | info_0.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info_0.hSource.m_Index = -1;
    }
    info_0.iUnitTargetTeam = 2;
    info_0.iUnitTargetType = 3;
    info_0.iUnitTargetFlags = 16;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info_0);
    this->m_bIsTrackingProjectile = 0;
  }
}


// CDOTA_Ability_Spectre_SpectralDagger::OnProjectileHit  (line 405, @0x0000000002be8710, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::UnitEmitSound, _Unwind_Resume, KeyValues::SetPtr
// strings: "modifier_spectre_spectral_dagger", "Hero_Spectre.DaggerImpact", "modifier_spectre_spectral_dagger_in_path"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Spectre_SpectralDagger::OnProjectileHit(
        CDOTA_Ability_Spectre_SpectralDagger *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rdx
  CDOTA_BaseNPC *v16; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
          {
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
            Caster = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(Caster, m_pInstance, this, LevelSpecialValue, 2, 0);
          }
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_spectre_spectral_dagger");
            KeyValues::SetFloat(&kv, "duration", v10);
            v11 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v11, this, "modifier_spectre_spectral_dagger", &kv, 0);
            m_Index = this->m_hTrackingTarget.m_Index;
            if ( m_Index + 2 > 1 )
            {
              v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTrackingTarget.m_Index) >> 9)
                                                                   & 0x3F];
              if ( v13 != 0 )
              {
                v14 = &v13[this->m_hTrackingTarget.m_Index & 0x1FF];
                if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
                {
                  v15 = v14->m_pInstance;
                  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 && this->m_bIsTrackingProjectile )
                  {
                    KeyValues::SetPtr(&kv, "target", v15);
                    v16 = CDOTABaseAbility::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(
                      m_pInstance,
                      v16,
                      this,
                      "modifier_spectre_spectral_dagger_in_path",
                      &kv,
                      0);
                  }
                }
              }
            }
            KeyValues::~KeyValues(&kv);
          }
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Spectre.DaggerImpact", 0.0, 0, 0);
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Spectre_SpectralDagger::OnProjectileThink  (line 441, @0x0000000002bfc980, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_Spectre_SpectralDaggerPath::AddShadowPathLocation, CDOTABaseAbility::GetLevelSpecialValueFor<int>, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_BaseNPC::TriggerSpellAbsorb, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, _Unwind_Resume
// strings: "modifier_spectre_spectral_dagger_path", "dagger_radius"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::OnProjectileThink(
        CDOTA_Ability_Spectre_SpectralDagger *const this,
        const Vector *const vLocation)
{
  float v3; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Modifier_Spectre_SpectralDaggerPath *ModifierByName; // rax
  float v6; // xmm1_4
  __m128i v7; // xmm2
  float v8; // r12d
  CDOTA_BaseNPC *v9; // rbx
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // rbx
  int i; // r12d
  CHandle<CBaseEntity> *v13; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r14
  void (__fastcall *v18)(CDOTA_Ability_Spectre_SpectralDagger *const, uint32 *, const Vector *const); // rax
  __int64 m_Size; // r14
  CHandle<CBaseEntity> *v20; // r15
  int v21; // eax
  CHandle<CBaseEntity> *v22; // rax
  uint32 v24[4]; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-50h] BYREF

  if ( g_pGameRules != 0 )
  {
    v3 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (v3 - this->m_fLastCreate) <= this->m_fCreateInterval )
      goto LABEL_3;
  }
  else
  {
    v3 = 0.0;
    if ( (0.0 - this->m_fLastCreate) <= this->m_fCreateInterval )
      goto LABEL_3;
  }
  this->m_fLastCreate = v3;
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_spectre_spectral_dagger_path", 0);
  if ( ModifierByName != 0 )
  {
    CDOTA_Modifier_Spectre_SpectralDaggerPath::AddShadowPathLocation(
      ModifierByName,
      vLocation,
      this->dagger_path_duration,
      v6);
    if ( !this->m_bIsTrackingProjectile )
      return;
    goto LABEL_8;
  }
LABEL_3:
  if ( !this->m_bIsTrackingProjectile )
    return;
LABEL_8:
  hEntities.m_Size = 0;
  *v7.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dagger_radius", -1, 0);
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, vLocation, v9, v8, &hEntities, 2, 3, 16, 0, 0);
  v11 = 0;
  for ( i = 0; hEntities.m_Size > i; v22->m_Index = v20->m_Index )
  {
    while ( 1 )
    {
      v13 = &hEntities.m_Memory.m_pMemory[v11];
      m_Index = hEntities.m_Memory.m_pMemory[v11].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[v13->m_Index & 0x1FF];
          if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
          {
            m_pInstance = v16->m_pInstance;
            if ( v16->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hTrackingProjectileHits,
                   v13) < 0
              && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
              && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
              && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 0) )
            {
              v18 = *(this->_vptr_IHandleEntity + 289);
              v24[0] = hEntities.m_Memory.m_pMemory[v11].m_Index;
              v18(this, v24, vLocation);
              m_Size = this->m_hTrackingProjectileHits.m_Size;
              v20 = &hEntities.m_Memory.m_pMemory[v11];
              v21 = this->m_hTrackingProjectileHits.m_Size;
              if ( m_Size == this->m_hTrackingProjectileHits.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTrackingProjectileHits.m_Memory, 1);
                v21 = this->m_hTrackingProjectileHits.m_Size;
              }
              this->m_hTrackingProjectileHits.m_Size = v21 + 1;
              v22 = &this->m_hTrackingProjectileHits.m_Memory.m_pMemory[m_Size];
              if ( v22 != 0 )
                break;
            }
          }
        }
      }
      ++i;
      ++v11;
      if ( hEntities.m_Size <= i )
        goto LABEL_25;
    }
    ++i;
    ++v11;
  }
LABEL_25:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Spectre_SpectralDagger::OnUnStolen  (line 480, @0x0000000002bd4f30, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_spectre_spectral_dagger_path_phased"
void __fastcall CDOTA_Ability_Spectre_SpectralDagger::OnUnStolen(CDOTA_Ability_Spectre_SpectralDagger *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_spectre_spectral_dagger_path_phased");
}


// CDOTA_Ability_Spectre_SpectralDagger::GetAbilityDamageToTargetOverInterval  (line 491, @0x0000000002be9780, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Spectre_SpectralDagger::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Spectre_SpectralDagger *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Spectre_SpectralDagger::~CDOTA_Modifier_Spectre_SpectralDagger  (line 503, @0x0000000002c033b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Spectre_SpectralDagger::~CDOTA_Modifier_Spectre_SpectralDagger(
        CDOTA_Modifier_Spectre_SpectralDagger *const this)
{
  this->_vptr_CDOTA_Buff = &off_4561DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Spectre_SpectralDagger::~CDOTA_Modifier_Spectre_SpectralDagger  (line 503, @0x0000000002c033d0, libserver.so)  // inlines: ~CDOTA_Modifier_Spectre_SpectralDagger
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Spectre_SpectralDagger::~CDOTA_Modifier_Spectre_SpectralDagger(
        CDOTA_Modifier_Spectre_SpectralDagger *const this)
{
  this->_vptr_CDOTA_Buff = &off_4561DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Spectre_SpectralDagger::IsPurgable  (line 510, @0x0000000002bffef0, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_SpectralDagger::IsPurgable(CDOTA_Modifier_Spectre_SpectralDagger *const this)
{
  return 0;
}


// CDOTA_Modifier_Spectre_SpectralDagger::OnCreated  (line 525, @0x0000000002bf3510, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Buff::StartIntervalThink
// strings: "path_radius", "hero_path_duration", "particles/units/heroes/hero_spectre/spectre_shadow_path_owner.vpcf"
void __fastcall CDOTA_Modifier_Spectre_SpectralDagger::OnCreated(
        CDOTA_Modifier_Spectre_SpectralDagger *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *v8; // rax
  float v9; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->path_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->hero_path_duration = 0.0;
    goto LABEL_4;
  }
  this->path_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "path_radius", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->hero_path_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "hero_path_duration", -1, 0);
LABEL_4:
  this->m_vLastPosition = vec3_origin;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_spectre/spectre_shadow_path_owner.vpcf",
               2,
               0,
               0,
               0);
  Parent = CDOTA_Buff::GetParent(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, Particle, 0, Parent, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, 0.1, v9);
}


// CDOTA_Modifier_Spectre_SpectralDagger::OnIntervalThink  (line 543, @0x0000000002bfcc90, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, operator==
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_Spectre_SpectralDaggerPath::AddShadowPathLocation
// strings: "modifier_spectre_spectral_dagger_path"
void __fastcall CDOTA_Modifier_Spectre_SpectralDagger::OnIntervalThink(
        CDOTA_Modifier_Spectre_SpectralDagger *const this)
{
  CDOTA_BaseNPC *v2; // rax
  const Vector *v3; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Modifier_Spectre_SpectralDaggerPath *ModifierByName; // r12
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // rax
  float v9; // xmm1_4
  float hero_path_duration; // [rsp+Ch] [rbp-14h]

  if ( vec3_origin.x == this->m_vLastPosition.x
    && vec3_origin.y == this->m_vLastPosition.y
    && vec3_origin.z == this->m_vLastPosition.z
    || (v2 = CDOTA_Buff::GetParent(this),
        v3 = CBaseEntity::GetAbsOrigin(v2),
        fsqrt(
          ((v3->x - this->m_vLastPosition.x) * (v3->x - this->m_vLastPosition.x))
        + ((v3->y - this->m_vLastPosition.y) * (v3->y - this->m_vLastPosition.y))) > this->path_radius) )
  {
    Parent = CDOTA_Buff::GetParent(this);
    this->m_vLastPosition = *CBaseEntity::GetAbsOrigin(Parent);
    Caster = CDOTA_Buff::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_spectre_spectral_dagger_path", 0);
    if ( ModifierByName != 0 )
    {
      hero_path_duration = this->hero_path_duration;
      v7 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
      CDOTA_Modifier_Spectre_SpectralDaggerPath::AddShadowPathLocation(
        ModifierByName,
        AbsOrigin,
        hero_path_duration,
        v9);
    }
  }
}


// CDOTA_Modifier_Spectre_SpectralDagger::CheckState  (line 561, @0x0000000002bd3ac0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Spectre_SpectralDagger::CheckState(
        CDOTA_Modifier_Spectre_SpectralDagger *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400uLL;
  buffState->m_nDisabledStateMask &= ~0x400uLL;
}


// CDOTA_Modifier_Spectre_SpectralDaggerInPath::~CDOTA_Modifier_Spectre_SpectralDaggerInPath  (line 572, @0x0000000002c03360, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerInPath::~CDOTA_Modifier_Spectre_SpectralDaggerInPath(
        CDOTA_Modifier_Spectre_SpectralDaggerInPath *const this)
{
  this->_vptr_CDOTA_Buff = &off_4562110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Spectre_SpectralDaggerInPath::~CDOTA_Modifier_Spectre_SpectralDaggerInPath  (line 572, @0x0000000002c03380, libserver.so)  // inlines: ~CDOTA_Modifier_Spectre_SpectralDaggerInPath
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerInPath::~CDOTA_Modifier_Spectre_SpectralDaggerInPath(
        CDOTA_Modifier_Spectre_SpectralDaggerInPath *const this)
{
  this->_vptr_CDOTA_Buff = &off_4562110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Spectre_SpectralDaggerInPath::IsPurgable  (line 579, @0x0000000002bfff00, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_SpectralDaggerInPath::IsPurgable(
        CDOTA_Modifier_Spectre_SpectralDaggerInPath *const this)
{
  return 0;
}


// CDOTA_Modifier_Spectre_SpectralDaggerInPath::OnCreated  (line 597, @0x0000000002beb520, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetPtr
// strings: "bonus_movespeed"
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerInPath::OnCreated(
        CDOTA_Modifier_Spectre_SpectralDaggerInPath *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  _QWORD *Ptr; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed", -1, 0);
  else
    this->bonus_movespeed = 0;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v6 = Ptr[1]) != 0 )
  {
    v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
    if ( *(v6 + 16) == -1 )
      v8 = 0x7FFF;
    else
      v8 = *(v6 + 16) & 0x7FFF;
    LOWORD(this->m_hTrackingTarget.m_Index) = v8 | this->m_hTrackingTarget.m_Index & 0x8000;
    this->m_hTrackingTarget.m_Index = (v7 << 15) | this->m_hTrackingTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTrackingTarget.m_Index = -1;
  }
}


// CDOTA_Modifier_Spectre_SpectralDaggerInPath::OnRefresh  (line 605, @0x0000000002beae00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed"
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerInPath::OnRefresh(
        CDOTA_Modifier_Spectre_SpectralDaggerInPath *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed", -1, 0);
  else
    this->bonus_movespeed = 0;
}


// CDOTA_Modifier_Spectre_SpectralDaggerInPath::DeclareFunctions  (line 612, @0x0000000002bd3ae0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Spectre_SpectralDaggerInPath::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerInPath::DeclareFunctions(
        CDOTA_Modifier_Spectre_SpectralDaggerInPath *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Spectre_SpectralDaggerInPath::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Spectre_SpectralDaggerInPath::GetModifierMoveSpeedBonus_Percentage  (line 619, @0x0000000002bd6910, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Spectre_SpectralDaggerInPath::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Spectre_SpectralDaggerInPath *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r12
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == CDOTA_Buff::GetCaster(this) )
  {
    *v4.m128i_i32 = this->bonus_movespeed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  else if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
  {
    return 1uLL;
  }
  else
  {
    result.m_szVal = 0;
    *v5.m128i_i32 = -this->bonus_movespeed;
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Spectre_SpectralDaggerInPath::CheckState  (line 632, @0x0000000002bd9e30, libserver.so)  // inlines: Enable, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerInPath::CheckState(
        CDOTA_Modifier_Spectre_SpectralDaggerInPath *const this,
        CDOTABuffState *const buffState)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = this->m_hTrackingTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTrackingTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v5 = &v3[this->m_hTrackingTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          buffState->m_nEnabledStateMask |= 0x400uLL;
          buffState->m_nDisabledStateMask &= ~0x400uLL;
        }
      }
    }
  }
}


// CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::~CDOTA_Modifier_Spectre_SpectralDaggerPathPhased  (line 647, @0x0000000002c03310, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::~CDOTA_Modifier_Spectre_SpectralDaggerPathPhased(
        CDOTA_Modifier_Spectre_SpectralDaggerPathPhased *const this)
{
  this->_vptr_CDOTA_Buff = &off_4562430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::~CDOTA_Modifier_Spectre_SpectralDaggerPathPhased  (line 647, @0x0000000002c03330, libserver.so)  // inlines: ~CDOTA_Modifier_Spectre_SpectralDaggerPathPhased
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::~CDOTA_Modifier_Spectre_SpectralDaggerPathPhased(
        CDOTA_Modifier_Spectre_SpectralDaggerPathPhased *const this)
{
  this->_vptr_CDOTA_Buff = &off_4562430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::IsHidden  (line 653, @0x0000000002bfff10, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::IsHidden(
        CDOTA_Modifier_Spectre_SpectralDaggerPathPhased *const this)
{
  return 1;
}


// CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::IsPurgable  (line 654, @0x0000000002bfff20, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::IsPurgable(
        CDOTA_Modifier_Spectre_SpectralDaggerPathPhased *const this)
{
  return 0;
}


// CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::CheckState  (line 663, @0x0000000002bd3b00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::CheckState(
        CDOTA_Modifier_Spectre_SpectralDaggerPathPhased *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x202000000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFDFDFFFFFFLL;
}


// CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::OnDestroy  (line 672, @0x0000000002bd4d00, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
void __fastcall CDOTA_Modifier_Spectre_SpectralDaggerPathPhased::OnDestroy(
        CDOTA_Modifier_Spectre_SpectralDaggerPathPhased *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v4 = CDOTA_Buff::GetParent(this);
  FindClearSpaceForUnit(v4, *AbsOrigin, 0);
}


// CDOTA_Ability_Spectre_Desolate::~CDOTA_Ability_Spectre_Desolate  (line 685, @0x0000000002c05990, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Spectre_Desolate::~CDOTA_Ability_Spectre_Desolate(
        CDOTA_Ability_Spectre_Desolate *const this)
{
  this->_vptr_IHandleEntity = &off_4562790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Spectre_Desolate::~CDOTA_Ability_Spectre_Desolate  (line 685, @0x0000000002c059b0, libserver.so)  // inlines: ~CDOTA_Ability_Spectre_Desolate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Spectre_Desolate::~CDOTA_Ability_Spectre_Desolate(
        CDOTA_Ability_Spectre_Desolate *const this)
{
  this->_vptr_IHandleEntity = &off_4562790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Spectre_Desolate::Schema_DynamicBinding  (line 687, @0x0000000002bfff30, libserver.so)
// globals: CDOTA_Ability_Spectre_Desolate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_Desolate::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_Desolate *const this)
{
  return CDOTA_Ability_Spectre_Desolate::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 687, @0x0000000002bfff40, libserver.so)
// globals: CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::DestructInstance  (line 687, @0x0000000002bfff50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Spectre_Desolate>
void __fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::FreeInstance  (line 687, @0x0000000002bfff70, libserver.so)
void __fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::CanAllocate  (line 687, @0x0000000002bfff90, libserver.so)
bool __fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 687, @0x0000000002bfffa0, libserver.so)
// globals: CDOTA_Ability_Spectre_Desolate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_Desolate::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::AllocateInstance  (line 687, @0x0000000002c02970, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::ConstructInstance  (line 687, @0x0000000002c04d90, libserver.so)  // inlines: CDOTA_Ability_Spectre_Desolate, Construct<CDOTA_Ability_Spectre_Desolate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4562790;
  }
  return p;
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 687, @0x0000000002c0b040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 687, @0x0000000002c0b060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal  (line 687, @0x0000000002c16ec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Spectre_Desolate"
// globals: `guard variable for'CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass, CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass, __dso_handle, CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo, CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo
CEntityClass *__cdecl CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass);
    CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass._vptr_CEntityClass = off_4562710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass);
    __cxa_atexit(
      CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Spectre_DesolateClass != 0 )
    return &CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass;
  if ( `guard variable for'CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo,
      "CDOTA_Ability_Spectre_Desolate",
      "spectre_desolate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo);
  }
  CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass.m_pClassInfo = &CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo;
  CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass.m_pBaseClassInfo = CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Spectre_DesolateClass = &CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass;
  CDOTA_Ability_Spectre_Desolate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DesolateClassInfo.m_pClass = &CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass;
  CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Spectre_DesolateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Spectre_Desolate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DesolateClass;
}


// CDOTA_Ability_Spectre_Desolate::GetIntrinsicModifierName  (line 691, @0x0000000002bfffb0, libserver.so)
// strings: "modifier_spectre_desolate"
const char *__fastcall CDOTA_Ability_Spectre_Desolate::GetIntrinsicModifierName(
        CDOTA_Ability_Spectre_Desolate *const this)
{
  return "modifier_spectre_desolate";
}


// CDOTA_Ability_Spectre_Desolate::GetAOERadius  (line 693, @0x0000000002c1a460, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Spectre_Desolate::GetAOERadius(CDOTA_Ability_Spectre_Desolate *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Spectre_Desolate::YouForgotToImplementOrDeclareServerClass  (line 698, @0x0000000002bd3b30, libserver.so)
int __fastcall CDOTA_Ability_Spectre_Desolate::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Spectre_Desolate *const this)
{
  return 0;
}


// CDOTA_Ability_Spectre_Desolate::GetServerClass  (line 698, @0x0000000002bdc770, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Spectre_Desolate::GetServerClass(CDOTA_Ability_Spectre_Desolate *const this)
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


// CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval  (line 708, @0x0000000002beab50, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// globals: `guard variable for'CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Spectre_Desolate *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  int LevelSpecialValue; // r13d
  CDOTA_Bot *m_pBot; // rdi
  CDOTA_BaseNPC *Caster; // rax
  float fNumAttacksa; // [rsp+Ch] [rbp-24h]
  float fNumAttacksb; // [rsp+Ch] [rbp-24h]

  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 1);
  if ( `guard variable for'CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
  {
    CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
    CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    __cxa_atexit(
      CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
      &CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      &_dso_handle);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
  m_pBot = pTarget->m_pBot;
  if ( m_pBot != 0 )
  {
    CDOTA_Bot::GetNearbyCreeps(
      m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      LevelSpecialValue);
    CDOTA_Bot::GetNearbyHeroes(
      pTarget->m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      LevelSpecialValue);
  }
  if ( CDOTA_Ability_Spectre_Desolate::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size > 1 )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  fNumAttacksa = CDOTA_BaseNPC::GetAttacksPerSecond(Caster) * fInterval;
  fNumAttacksb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_damage", -1, 0) * fNumAttacksa;
  return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fNumAttacksb);
}


// CDOTA_Modifier_Spectre_Desolate::~CDOTA_Modifier_Spectre_Desolate  (line 739, @0x0000000002c032c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Spectre_Desolate::~CDOTA_Modifier_Spectre_Desolate(
        CDOTA_Modifier_Spectre_Desolate *const this)
{
  this->_vptr_CDOTA_Buff = &off_4563250;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Spectre_Desolate::~CDOTA_Modifier_Spectre_Desolate  (line 739, @0x0000000002c032e0, libserver.so)  // inlines: ~CDOTA_Modifier_Spectre_Desolate
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Spectre_Desolate::~CDOTA_Modifier_Spectre_Desolate(
        CDOTA_Modifier_Spectre_Desolate *const this)
{
  this->_vptr_CDOTA_Buff = &off_4563250;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Spectre_Desolate::IsHidden  (line 744, @0x0000000002bfffc0, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_Desolate::IsHidden(CDOTA_Modifier_Spectre_Desolate *const this)
{
  return 1;
}


// CDOTA_Modifier_Spectre_Desolate::OnCreated  (line 762, @0x0000000002beb600, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Spectre_Desolate::OnCreated(CDOTA_Modifier_Spectre_Desolate *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->radius = 0;
}


// CDOTA_Modifier_Spectre_Desolate::OnRefresh  (line 770, @0x0000000002beb9f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Spectre_Desolate::OnRefresh(CDOTA_Modifier_Spectre_Desolate *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->radius = 0;
}


// CDOTA_Modifier_Spectre_Desolate::DeclareFunctions  (line 778, @0x0000000002bd3b40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Spectre_Desolate::OnAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_Spectre_Desolate::DeclareFunctions(CDOTA_Modifier_Spectre_Desolate *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Spectre_Desolate::OnAttack;
  this->m_Functions[120].__delta = 0;
}


// CDOTA_Modifier_Spectre_Desolate::OnAttack  (line 785, @0x0000000002be5300, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CBaseAnimating::GetAttachment, CBaseEntity::GetAbsAngles, AngleVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle (17 total)
// strings: "attach_hitloc", "particles/units/heroes/hero_spectre/spectre_desolate.vpcf", "Hero_Spectre.Desolate"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Spectre_Desolate::OnAttack(
        CDOTA_Modifier_Spectre_Desolate *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  __m128i v9; // xmm6
  uint32 v10; // edx
  unsigned __int64 v11; // rax
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rax
  CEntityInstance *v14; // rbx
  int m_Id; // eax
  float v16; // r14d
  const Vector *AbsOrigin; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  float flDamage; // [rsp+1Ch] [rbp-94h]
  Vector vecPosition; // [rsp+20h] [rbp-90h] BYREF
  QAngle angles; // [rsp+30h] [rbp-80h] BYREF
  Vector vecFwd; // [rsp+40h] [rbp-70h] BYREF
  Vector vecRight; // [rsp+50h] [rbp-60h] BYREF
  Vector vecUp; // [rsp+60h] [rbp-50h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+70h] [rbp-40h] BYREF

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
          && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
        {
          v10 = params->htarget.m_Index;
          if ( v10 + 2 > 1 )
          {
            v11 = params->htarget.m_Index & 0x7FFF;
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v11 >> 9)];
            if ( v12 != 0 )
            {
              v13 = &v12[v11 & 0x1FF];
              if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
              {
                v14 = v13->m_pInstance;
                if ( v13->m_pInstance != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
                {
                  m_Id = v14[43].m_iszPrivateVScripts.u.m_Id;
                  if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 && (BYTE1(v14[58]._vptr_IHandleEntity) & 2) == 0 )
                  {
                    hUnits.m_Size = 0;
                    *v9.m128i_i32 = this->radius;
                    hUnits.m_Memory.m_pMemory = 0;
                    hUnits.m_Memory.m_nAllocationCount = 0;
                    hUnits.m_Memory.m_nGrowSize = 0;
                    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
                    AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
                    FindUnitsInRadius(HIBYTE(v14[7].m_CScriptComponent), AbsOrigin, v14, v16, &hUnits, 1, 3, 0, 0, 0);
                    if ( hUnits.m_Size == 1 )
                    {
                      flDamage = this->bonus_damage;
                      Ability = CDOTA_Buff::GetAbility(this);
                      Caster = CDOTA_Buff::GetCaster(this);
                      ApplyDamage(Caster, v14, Ability, flDamage, 4, 0);
                      CBaseAnimating::GetAttachment(v14, "attach_hitloc", &vecPosition, &angles);
                      v20 = CDOTA_Buff::GetCaster(this);
                      angles = *CBaseEntity::GetAbsAngles(v20);
                      AngleVectors(&angles, &vecFwd, &vecRight, &vecUp);
                      v21 = CDOTA_Buff::GetCaster(this);
                      ParticleManager = GetParticleManager();
                      LODWORD(v21) = CDOTA_ParticleManager::CreateParticle(
                                       ParticleManager,
                                       "particles/units/heroes/hero_spectre/spectre_desolate.vpcf",
                                       0,
                                       v21,
                                       0,
                                       0);
                      v23 = GetParticleManager();
                      CDOTA_ParticleManager::SetParticleControl(v23, v21, 0, *&vecPosition.x, vecPosition.z);
                      v24 = GetParticleManager();
                      CDOTA_ParticleManager::SetParticleControlOrientation(
                        v24,
                        v21,
                        0,
                        *&vecFwd.x,
                        vecFwd.z,
                        *&vecRight.x,
                        vecRight.z,
                        *&vecUp.x,
                        vecUp.z);
                      v25 = GetParticleManager();
                      CDOTA_ParticleManager::ReleaseParticleIndex(v25, v21);
                      CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_Spectre.Desolate", 0.0, 0, 0);
                    }
                    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
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


// CDOTA_Ability_Spectre_Dispersion::~CDOTA_Ability_Spectre_Dispersion  (line 830, @0x0000000002c059e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Spectre_Dispersion::~CDOTA_Ability_Spectre_Dispersion(
        CDOTA_Ability_Spectre_Dispersion *const this)
{
  this->_vptr_IHandleEntity = &off_45635B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Spectre_Dispersion::~CDOTA_Ability_Spectre_Dispersion  (line 830, @0x0000000002c05a00, libserver.so)  // inlines: ~CDOTA_Ability_Spectre_Dispersion
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Spectre_Dispersion::~CDOTA_Ability_Spectre_Dispersion(
        CDOTA_Ability_Spectre_Dispersion *const this)
{
  this->_vptr_IHandleEntity = &off_45635B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Spectre_Dispersion::Schema_DynamicBinding  (line 832, @0x0000000002bfffd0, libserver.so)
// globals: CDOTA_Ability_Spectre_Dispersion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_Dispersion::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_Dispersion *const this)
{
  return CDOTA_Ability_Spectre_Dispersion::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 832, @0x0000000002bfffe0, libserver.so)
// globals: CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::DestructInstance  (line 832, @0x0000000002bffff0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Spectre_Dispersion>
void __fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::FreeInstance  (line 832, @0x0000000002c00010, libserver.so)
void __fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::CanAllocate  (line 832, @0x0000000002c00030, libserver.so)
bool __fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 832, @0x0000000002c00040, libserver.so)
// globals: CDOTA_Ability_Spectre_Dispersion::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_Dispersion::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::AllocateInstance  (line 832, @0x0000000002c029b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::ConstructInstance  (line 832, @0x0000000002c04dc0, libserver.so)  // inlines: CDOTA_Ability_Spectre_Dispersion, Construct<CDOTA_Ability_Spectre_Dispersion>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45635B0;
  }
  return p;
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 832, @0x0000000002c0b090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 832, @0x0000000002c0b0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal  (line 832, @0x0000000002c17010, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Spectre_Dispersion"
// globals: `guard variable for'CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass, CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass, __dso_handle, CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo, CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass);
    CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass._vptr_CEntityClass = off_4563530;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass);
    __cxa_atexit(
      CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Spectre_DispersionClass != 0 )
    return &CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass;
  if ( `guard variable for'CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo,
      "CDOTA_Ability_Spectre_Dispersion",
      "spectre_dispersion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo);
  }
  CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass.m_pClassInfo = &CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo;
  CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass.m_pBaseClassInfo = CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Spectre_DispersionClass = &CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass;
  CDOTA_Ability_Spectre_Dispersion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_DispersionClassInfo.m_pClass = &CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass;
  CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Spectre_DispersionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Spectre_Dispersion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_DispersionClass;
}


// CDOTA_Ability_Spectre_Dispersion::GetIntrinsicModifierName  (line 836, @0x0000000002c00050, libserver.so)
// strings: "modifier_spectre_dispersion"
const char *__fastcall CDOTA_Ability_Spectre_Dispersion::GetIntrinsicModifierName(
        CDOTA_Ability_Spectre_Dispersion *const this)
{
  return "modifier_spectre_dispersion";
}


// CDOTA_Ability_Spectre_Dispersion::YouForgotToImplementOrDeclareServerClass  (line 844, @0x0000000002bd3b60, libserver.so)
int __fastcall CDOTA_Ability_Spectre_Dispersion::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Spectre_Dispersion *const this)
{
  return 0;
}


// CDOTA_Ability_Spectre_Dispersion::GetServerClass  (line 844, @0x0000000002bdcaf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Spectre_Dispersion::GetServerClass(CDOTA_Ability_Spectre_Dispersion *const this)
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


// CDOTA_Modifier_Spectre_Dispersion::~CDOTA_Modifier_Spectre_Dispersion  (line 854, @0x0000000002c03270, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Spectre_Dispersion::~CDOTA_Modifier_Spectre_Dispersion(
        CDOTA_Modifier_Spectre_Dispersion *const this)
{
  this->_vptr_CDOTA_Buff = &off_4564070;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Spectre_Dispersion::~CDOTA_Modifier_Spectre_Dispersion  (line 854, @0x0000000002c03290, libserver.so)  // inlines: ~CDOTA_Modifier_Spectre_Dispersion
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Spectre_Dispersion::~CDOTA_Modifier_Spectre_Dispersion(
        CDOTA_Modifier_Spectre_Dispersion *const this)
{
  this->_vptr_CDOTA_Buff = &off_4564070;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Spectre_Dispersion::IsHidden  (line 862, @0x0000000002c00060, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_Dispersion::IsHidden(CDOTA_Modifier_Spectre_Dispersion *const this)
{
  return 1;
}


// CDOTA_Modifier_Spectre_Dispersion::OnCreated  (line 878, @0x0000000002bebdc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_reflection_pct", "min_radius", "max_radius"
void __fastcall CDOTA_Modifier_Spectre_Dispersion::OnCreated(
        CDOTA_Modifier_Spectre_Dispersion *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_reflection_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "damage_reflection_pct",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->min_radius = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_reflection_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->min_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "min_radius", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->max_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "max_radius", -1, 0);
    return;
  }
LABEL_7:
  this->max_radius = 0;
}


// CDOTA_Modifier_Spectre_Dispersion::OnRefresh  (line 887, @0x0000000002bebc20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_reflection_pct", "min_radius", "max_radius"
void __fastcall CDOTA_Modifier_Spectre_Dispersion::OnRefresh(
        CDOTA_Modifier_Spectre_Dispersion *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_reflection_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "damage_reflection_pct",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->min_radius = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_reflection_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->min_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "min_radius", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->max_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "max_radius", -1, 0);
    return;
  }
LABEL_7:
  this->max_radius = 0;
}


// CDOTA_Modifier_Spectre_Dispersion::DeclareFunctions  (line 896, @0x0000000002bd3b70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Spectre_Dispersion::GetModifierIncomingDamage_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Spectre_Dispersion::DeclareFunctions(CDOTA_Modifier_Spectre_Dispersion *const this)
{
  this->m_Functions[36].__pfn = CDOTA_Modifier_Spectre_Dispersion::GetModifierIncomingDamage_Percentage;
  this->m_Functions[36].__delta = 0;
}


// CDOTA_Modifier_Spectre_Dispersion::GetModifierIncomingDamage_Percentage  (line 903, @0x0000000002be5630, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, RemapValClamped, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlVector
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTAFogOfWarSystem::IsLocationVisible, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager (21 total)
// strings: "particles/units/heroes/hero_spectre/spectre_dispersion.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Spectre_Dispersion::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Spectre_Dispersion *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm6
  float damage_reflection_pct; // xmm7_4
  float v6; // r12d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v10; // rax
  __m128i v11; // xmm5
  float v12; // r12d
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rbx
  CDOTA_BaseNPC *v15; // rax
  int OpposingTeamNumber; // eax
  __int64 v17; // r12
  int v18; // ebx
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // r15
  const Vector *v27; // rax
  float max_radius; // xmm2_4
  float min_radius; // xmm1_4
  float v30; // xmm0_4
  __m128 v31; // xmm0
  int nDamageType; // r15d
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // rax
  const Vector *v36; // r15
  CDOTA_BaseNPC *v37; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v39; // r15
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // r14
  CDOTA_BaseNPC *v43; // r15
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  int v47; // eax
  CTeam *GlobalTeam; // rax
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  float fDamageReflection; // [rsp+30h] [rbp-1A0h]
  float fDamage; // [rsp+34h] [rbp-19Ch]
  CDOTABaseAbility *nFXIndex; // [rsp+38h] [rbp-198h]
  int nFXIndexa; // [rsp+38h] [rbp-198h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+40h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v60; // [rsp+198h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v60 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
  {
    *&result.m_eType = 1;
  }
  else
  {
    if ( (params->nDamageflags & 0x10) == 0 )
    {
      hUnits.m_Size = 0;
      damage_reflection_pct = this->damage_reflection_pct;
      hUnits.m_Memory.m_pMemory = 0;
      *v4.m128i_i32 = this->max_radius;
      hUnits.m_Memory.m_nAllocationCount = 0;
      hUnits.m_Memory.m_nGrowSize = 0;
      v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      fDamageReflection = (damage_reflection_pct * params->fOriginalDamage) / 100.0;
      Caster = CDOTA_Buff::GetCaster(this);
      v8 = CDOTA_Buff::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
      v10 = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Caster, v6, &hUnits, 2, 3, 0, 0, 0);
      *v11.m128i_i32 = this->max_radius;
      v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
      v13 = CDOTA_Buff::GetCaster(this);
      v14 = CBaseEntity::GetAbsOrigin(v13);
      v15 = CDOTA_Buff::GetCaster(this);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v15);
      LOBYTE(v14) = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, OpposingTeamNumber, v14, v12);
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&filter);
      if ( v14 == 0 )
      {
        v46 = CDOTA_Buff::GetCaster(this);
        v47 = CDOTA_BaseNPC::GetOpposingTeamNumber(v46);
        GlobalTeam = GetGlobalTeam(v47);
        CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
      }
      if ( hUnits.m_Size > 0 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          while ( 1 )
          {
            v19 = &hUnits.m_Memory.m_pMemory[v17];
            m_Index = hUnits.m_Memory.m_pMemory[v17].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v21 = v19->m_Index;
              v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
              if ( v22 != 0 )
              {
                v23 = &v22[v21 & 0x1FF];
                if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
                {
                  m_pInstance = v23->m_pInstance;
                  if ( v23->m_pInstance != 0
                    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 )
                  {
                    v25 = CDOTA_Buff::GetCaster(this);
                    v26 = CBaseEntity::GetAbsOrigin(v25);
                    v27 = CBaseEntity::GetAbsOrigin(m_pInstance);
                    max_radius = this->max_radius;
                    min_radius = this->min_radius;
                    v30 = fsqrt(((v27->x - v26->x) * (v27->x - v26->x)) + ((v27->y - v26->y) * (v27->y - v26->y)));
                    if ( max_radius == min_radius )
                    {
                      v31.m128_f32[0] = v30 - max_radius;
                      LODWORD(fDamage) = _mm_andnot_ps(_mm_cmple_ss(0LL, v31), LODWORD(fDamageReflection)).m128_u32[0];
                    }
                    else
                    {
                      v49 = v30 - min_radius;
                      v50 = max_radius - min_radius;
                      v51 = 0.0;
                      v52 = v49 / v50;
                      if ( v52 >= 0.0 )
                        v51 = fminf(1.0, v52);
                      fDamage = (v51 * (0.0 - fDamageReflection)) + fDamageReflection;
                    }
                    nDamageType = params->nDamageType;
                    nFXIndex = CDOTA_Buff::GetAbility(this);
                    v33 = CDOTA_Buff::GetCaster(this);
                    ApplyDamage(v33, m_pInstance, nFXIndex, fDamage, nDamageType, 48);
                    if ( SLOBYTE(CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value) >= 0
                      && SLOBYTE(m_pInstance[58]._vptr_IHandleEntity) >= 0 )
                    {
                      v34 = CDOTA_Buff::GetCaster(this);
                      v35 = CBaseEntity::GetAbsOrigin(v34);
                      if ( CDOTAFogOfWarSystem::IsLocationVisible(
                             &g_DOTAFogOfWarSystem,
                             HIBYTE(m_pInstance[7].m_CScriptComponent),
                             v35,
                             1.0) )
                      {
                        v36 = CBaseEntity::GetAbsOrigin(m_pInstance);
                        v37 = CDOTA_Buff::GetCaster(this);
                        if ( CDOTAFogOfWarSystem::IsLocationVisible(
                               &g_DOTAFogOfWarSystem,
                               v37->m_iTeamNum.m_Value,
                               v36,
                               1.0) )
                        {
                          break;
                        }
                      }
                    }
                  }
                }
              }
            }
            ++v18;
            ++v17;
            if ( hUnits.m_Size <= v18 )
              goto LABEL_26;
          }
          ParticleManager = GetParticleManager();
          nFXIndexa = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_spectre/spectre_dispersion.vpcf",
                        2,
                        0,
                        &filter,
                        0);
          v39 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v40 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v40, nFXIndexa, 0, m_pInstance, 5, "attach_hitloc", *v39, 1);
          v41 = CDOTA_Buff::GetCaster(this);
          v42 = CBaseEntity::GetAbsOrigin(v41);
          v43 = CDOTA_Buff::GetCaster(this);
          v44 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v44, nFXIndexa, 1, v43, 5, "attach_hitloc", *v42, 1);
          v45 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v45, nFXIndexa);
          ++v18;
          ++v17;
        }
        while ( hUnits.m_Size > v18 );
      }
LABEL_26:
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&filter);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
    }
    *v4.m128i_i32 = -this->damage_reflection_pct;
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Spectre_Haunt::~CDOTA_Ability_Spectre_Haunt  (line 964, @0x0000000002c05a30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Spectre_Haunt::~CDOTA_Ability_Spectre_Haunt(CDOTA_Ability_Spectre_Haunt *const this)
{
  this->_vptr_IHandleEntity = &off_45643D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Spectre_Haunt::~CDOTA_Ability_Spectre_Haunt  (line 964, @0x0000000002c05a50, libserver.so)  // inlines: ~CDOTA_Ability_Spectre_Haunt
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Spectre_Haunt::~CDOTA_Ability_Spectre_Haunt(CDOTA_Ability_Spectre_Haunt *const this)
{
  this->_vptr_IHandleEntity = &off_45643D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Spectre_Haunt::Schema_DynamicBinding  (line 966, @0x0000000002c00070, libserver.so)
// globals: CDOTA_Ability_Spectre_Haunt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_Haunt::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_Haunt *const this)
{
  return CDOTA_Ability_Spectre_Haunt::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 966, @0x0000000002c00080, libserver.so)
// globals: CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::DestructInstance  (line 966, @0x0000000002c00090, libserver.so)  // inlines: Destruct<CDOTA_Ability_Spectre_Haunt>
void __fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::FreeInstance  (line 966, @0x0000000002c000b0, libserver.so)
void __fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::CanAllocate  (line 966, @0x0000000002c000d0, libserver.so)
bool __fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 966, @0x0000000002c000e0, libserver.so)
// globals: CDOTA_Ability_Spectre_Haunt::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_Haunt::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::AllocateInstance  (line 966, @0x0000000002c029f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::ConstructInstance  (line 966, @0x0000000002c04df0, libserver.so)  // inlines: CDOTA_Ability_Spectre_Haunt, Construct<CDOTA_Ability_Spectre_Haunt>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45643D0;
  }
  return p;
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 966, @0x0000000002c0b0e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 966, @0x0000000002c0b100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal  (line 966, @0x0000000002c17160, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Spectre_Haunt"
// globals: `guard variable for'CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass, CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass, __dso_handle, CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo, CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo
CEntityClass *__cdecl CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass);
    CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass._vptr_CEntityClass = off_4564350;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass);
    __cxa_atexit(
      CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Spectre_HauntClass != 0 )
    return &CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass;
  if ( `guard variable for'CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo,
      "CDOTA_Ability_Spectre_Haunt",
      "spectre_haunt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo);
  }
  CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass.m_pClassInfo = &CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo;
  CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass.m_pBaseClassInfo = CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Spectre_HauntClass = &CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass;
  CDOTA_Ability_Spectre_Haunt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_HauntClassInfo.m_pClass = &CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass;
  CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Spectre_HauntClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Spectre_Haunt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_HauntClass;
}


// CDOTA_Ability_Spectre_Haunt::GetAssociatedSecondaryAbilities  (line 972, @0x0000000002c000f0, libserver.so)
// strings: "spectre_reality"
const char *__fastcall CDOTA_Ability_Spectre_Haunt::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Spectre_Haunt *const this)
{
  return "spectre_reality";
}


// CDOTA_Ability_Spectre_Haunt::OnUpgrade  (line 979, @0x0000000002bd4d90, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "spectre_reality"
void __fastcall CDOTA_Ability_Spectre_Haunt::OnUpgrade(CDOTA_Ability_Spectre_Haunt *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "spectre_reality", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Spectre_Haunt::OnSpellStart  (line 993, @0x0000000002bf1db0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, SetCanFollowUnseenUnits, SetIdleAcquire, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, DOTA_CreateIllusions, FindClearSpaceForUnitAroundEntity, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::ResetPlayerControls (21 total)
// strings: "illusion_damage_incoming", "illusion_damage_outgoing", "haunt_illusion", "modifier_spectre_haunt", "Hero_Spectre.Haunt", "Hero_Spectre.HauntCast"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Spectre_Haunt::OnSpellStart(CDOTA_Ability_Spectre_Haunt *const this)
{
  __int64 v2; // r14
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // r12
  char m_CScriptComponent_high; // bl
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // rbx
  CHandle<CDOTA_BaseNPC_Hero> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CBaseEntity *m_pInstance; // r12
  unsigned __int8 m_Value; // r14
  CHandle<CBaseEntity> *v16; // rax
  uint32 v17; // ecx
  __int16 v18; // dx
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax
  CDOTA_BaseNPC *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v26; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v28; // rax
  float v29; // xmm3_4
  int value; // [rsp+24h] [rbp-8Ch]
  int illusion_damage_incoming; // [rsp+28h] [rbp-88h]
  int duration; // [rsp+38h] [rbp-78h]
  int nIllusionCount; // [rsp+3Ch] [rbp-74h]
  int nIllusionCounta; // [rsp+3Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hIllusions; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  illusion_damage_incoming = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_damage_incoming", -1, 0);
  value = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_damage_outgoing", -1, 0);
  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
  {
    nIllusionCount = 0;
  }
  else
  {
    v2 = 0;
    nIllusionCount = 0;
    do
    {
      while ( 1 )
      {
        v3 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v2]);
        v4 = v3;
        if ( v3 != 0 && (v3[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && (*(v3->_vptr_IHandleEntity + 408))(v3) != 0 )
        {
          m_CScriptComponent_high = HIBYTE(v4[7].m_CScriptComponent);
          if ( m_CScriptComponent_high != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
            && LOBYTE(v4[71].m_pEntity) == 0 )
          {
            break;
          }
        }
        if ( g_HeroList.m_hHeroList.m_Size <= ++v2 )
          goto LABEL_10;
      }
      nIllusionCount += (*(v4->_vptr_IHandleEntity + 436))(v4) == 0;
      ++v2;
    }
    while ( g_HeroList.m_hHeroList.m_Size > v2 );
  }
LABEL_10:
  KeyValues::KeyValues(&kv, "haunt_illusion");
  KeyValues::SetFloat(&kv, "duration", v6);
  KeyValues::SetInt(&kv, "incoming_damage", illusion_damage_incoming);
  KeyValues::SetInt(&kv, "outgoing_damage", value);
  hIllusions.m_Size = 0;
  hIllusions.m_Memory.m_pMemory = 0;
  hIllusions.m_Memory.m_nAllocationCount = 0;
  hIllusions.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_CreateIllusions(Caster, nIllusionCount, 0, 0, &kv, &hIllusions, 0, 0, 0);
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v8 = 0;
    nIllusionCounta = 0;
    do
    {
      while ( 1 )
      {
        v9 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 == 0 )
            goto LABEL_12;
          v13 = &v12[v11 & 0x1FF];
          if ( v13 == 0 )
            goto LABEL_12;
          if ( m_Index != v13->m_EHandle.m_Index )
            goto LABEL_12;
          m_pInstance = v13->m_pInstance;
          if ( v13->m_pInstance == 0 )
            goto LABEL_12;
          if ( (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) == 0 )
            goto LABEL_12;
          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v13->m_pInstance) == 0 )
            goto LABEL_12;
          m_Value = m_pInstance->m_iTeamNum.m_Value;
          if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
            || LOBYTE(m_pInstance[4].m_pfnMoveDone.__delta) != 0
            || (*(m_pInstance->_vptr_IHandleEntity + 436))(m_pInstance) != 0 )
          {
            goto LABEL_12;
          }
          duration = nIllusionCounta + 1;
          v16 = &hIllusions.m_Memory.m_pMemory[nIllusionCounta];
          v17 = v16->m_Index;
          if ( v16->m_Index + 2 > 1 )
          {
            v18 = v16->m_Index;
            v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = &v19[v18 & 0x1FF];
              if ( v20 != 0 )
                break;
            }
          }
          ++nIllusionCounta;
        }
LABEL_12:
        if ( g_HeroList.m_hHeroList.m_Size <= ++v8 )
          goto LABEL_30;
      }
      ++nIllusionCounta;
      if ( v17 != v20->m_EHandle.m_Index )
        goto LABEL_12;
      v21 = v20->m_pInstance;
      if ( v20->m_pInstance == 0 || !v21->m_bIsDOTANPC )
        goto LABEL_12;
      FindClearSpaceForUnitAroundEntity(m_pInstance, v20->m_pInstance);
      KeyValues::SetPtr(&kv, "target", m_pInstance);
      v22 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v21, v22, this, "modifier_spectre_haunt", &kv, 0);
      CDOTA_BaseNPC::ResetPlayerControls(v21);
      CBaseEntity::EmitSound(v21, "Hero_Spectre.Haunt", 0.0, 0);
      v21->m_bIdleAcquire = 0;
      v21->m_bCanFollowUnseenUnits = 1;
      nIllusionCounta = duration;
      ++v8;
    }
    while ( g_HeroList.m_hHeroList.m_Size > v8 );
  }
LABEL_30:
  v23 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_Spectre.HauntCast", 0.0, 0, 0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v26 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v26);
  v28 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v28,
    0,
    m_iAbilityID,
    1,
    0,
    *&AbsOrigin->x,
    AbsOrigin->z,
    -1.0,
    v29);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hIllusions);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Spectre_Haunt::~CDOTA_Modifier_Spectre_Haunt  (line 1060, @0x0000000002c03220, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Spectre_Haunt::~CDOTA_Modifier_Spectre_Haunt(CDOTA_Modifier_Spectre_Haunt *const this)
{
  this->_vptr_CDOTA_Buff = &off_4564E90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Spectre_Haunt::~CDOTA_Modifier_Spectre_Haunt  (line 1060, @0x0000000002c03240, libserver.so)  // inlines: ~CDOTA_Modifier_Spectre_Haunt
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Spectre_Haunt::~CDOTA_Modifier_Spectre_Haunt(CDOTA_Modifier_Spectre_Haunt *const this)
{
  this->_vptr_CDOTA_Buff = &off_4564E90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Spectre_Haunt::IsHidden  (line 1066, @0x0000000002c00100, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_Haunt::IsHidden(CDOTA_Modifier_Spectre_Haunt *const this)
{
  return 1;
}


// CDOTA_Modifier_Spectre_Haunt::IsPurgable  (line 1067, @0x0000000002c00110, libserver.so)
bool __fastcall CDOTA_Modifier_Spectre_Haunt::IsPurgable(CDOTA_Modifier_Spectre_Haunt *const this)
{
  return 0;
}


// CDOTA_Modifier_Spectre_Haunt::GetPriority  (line 1075, @0x0000000002c00120, libserver.so)
int __fastcall CDOTA_Modifier_Spectre_Haunt::GetPriority(CDOTA_Modifier_Spectre_Haunt *const this)
{
  return 2;
}


// CDOTA_Modifier_Spectre_Haunt::CheckState  (line 1090, @0x0000000002bd6aa0, libserver.so)  // inlines: Enable
// calls: CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_Spectre_Haunt::CheckState(
        CDOTA_Modifier_Spectre_Haunt *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x202000000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFDFDFFFFFFLL;
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x80000000) != 0 )
  {
    buffState->m_nEnabledStateMask |= 0x20uLL;
    buffState->m_nDisabledStateMask &= ~0x20uLL;
  }
}


// CDOTA_Modifier_Spectre_Haunt::OnCreated  (line 1104, @0x0000000002bf3160, libserver.so)  // inlines: DOTAGameRules, DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetPtr, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Spectre_Haunt::OnCreated(CDOTA_Modifier_Spectre_Haunt *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm0_4
  _BYTE *Ptr; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // cx
  float v10; // xmm1_4
  float Float; // xmm0_4
  float v12; // xmm1_4
  float attack_delay; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "attack_delay", -1, 0);
  attack_delay = LevelSpecialValue;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && Ptr[339] != 0 && (v7 = *(Ptr + 1)) != 0 )
  {
    v8 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
    v9 = 0x7FFF;
    if ( *(v7 + 16) != -1 )
      v9 = *(v7 + 16) & 0x7FFF;
    LOWORD(this->hTarget.m_Index) = v9 | this->hTarget.m_Index & 0x8000;
    this->hTarget.m_Index = (v8 << 15) | this->hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->hTarget.m_Index = -1;
  }
  v10 = 0.0;
  if ( g_pGameRules != 0 )
    v10 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartAttackTime = attack_delay + v10;
  Float = KeyValues::GetFloat(pKV, "speed", v10);
  this->m_IdealSpeed.m_eType = ModifierVariant_t::VariantType_t::Variant_Float;
  this->m_IdealSpeed.m_szVal = 0;
  this->m_IdealSpeed.m_flVal = Float + 105.0;
  CDOTA_Buff::StartIntervalThink(this, 0.30000001, v12);
}


// CDOTA_Modifier_Spectre_Haunt::OnIntervalThink  (line 1119, @0x0000000002bfb2e0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GrowMemory, InState, IndexToIdentity, IsAttackImmune, IsInvulnerable, IsValid, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::IsInvisibleTo, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, CUtlMemory<CEntityIndex, int>::Purge, CDOTA_BaseNPC::ForceKill, CUtlMemory<CEntityIndex, int>::Grow, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Spectre_Haunt::OnIntervalThink(CDOTA_Modifier_Spectre_Haunt *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  float v6; // xmm0_4
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *v8; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CEntityIndex v11; // r14d
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  vec_t v14; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  CEntityIndex v16; // r14d
  CUnitOrders newOrders; // [rsp+0h] [rbp-60h] BYREF

  m_Index = this->hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0 )
          {
            v6 = 0.0;
            if ( g_pGameRules != 0 )
              v6 = *&g_pGameRules[18].m_szQuestName[20];
            if ( this->m_fStartAttackTime > v6
              || ((m_Value = m_pInstance->m_nUnitState64.m_Value) & 4) != 0
              || m_pInstance->m_bIsWaitingToSpawn.m_Value
              || (m_Value & 0x100) != 0
              || (v8 = CDOTA_Buff::GetParent(this), CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v8))
              || (v13 = CDOTA_Buff::GetParent(this), !CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(v13, m_pInstance)) )
            {
              newOrders.m_bQueue = 0;
              newOrders.m_nUnits.m_Size = 0;
              memset(&newOrders.m_nUnits.m_Memory, 0, 28);
              newOrders.m_nOrderSequenceNumber = 0;
              newOrders.m_vPosition.x = vec3_origin.x;
              y = vec3_origin.y;
              newOrders.m_nIssuerPlayerIndex = -1;
              newOrders.m_vPosition.y = y;
              newOrders.m_vPosition.z = vec3_origin.z;
              Parent = CDOTA_Buff::GetParent(this);
              v11.m_Data = CEntityInstance::GetEntityIndex(Parent).m_Data;
              CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
              newOrders.m_nUnits.m_Size = 1;
              if ( newOrders.m_nUnits.m_Memory.m_pMemory != 0 )
                newOrders.m_nUnits.m_Memory.m_pMemory->m_Data = v11.m_Data;
              newOrders.m_nOrderType = 2;
              newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
              DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
              newOrders.m_nUnits.m_Size = 0;
              if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
                if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  goto LABEL_20;
              }
            }
            else
            {
              newOrders.m_bQueue = 0;
              newOrders.m_nUnits.m_Size = 0;
              memset(&newOrders.m_nUnits.m_Memory, 0, 28);
              newOrders.m_nOrderSequenceNumber = 0;
              newOrders.m_vPosition.x = vec3_origin.x;
              v14 = vec3_origin.y;
              newOrders.m_nIssuerPlayerIndex = -1;
              newOrders.m_vPosition.y = v14;
              newOrders.m_vPosition.z = vec3_origin.z;
              v15 = CDOTA_Buff::GetParent(this);
              v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
              CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
              newOrders.m_nUnits.m_Size = 1;
              if ( newOrders.m_nUnits.m_Memory.m_pMemory != 0 )
                newOrders.m_nUnits.m_Memory.m_pMemory->m_Data = v16.m_Data;
              newOrders.m_nOrderType = 4;
              newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
              DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
              newOrders.m_nUnits.m_Size = 0;
              if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
                if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_20:
                  CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
              }
            }
          }
          else
          {
            v12 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::ForceKill(v12, 0);
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Spectre_Haunt::DeclareFunctions  (line 1164, @0x0000000002bd3b90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Spectre_Haunt::GetModifierMoveSpeedOverride(CModifierParams const&)
void __fastcall CDOTA_Modifier_Spectre_Haunt::DeclareFunctions(CDOTA_Modifier_Spectre_Haunt *const this)
{
  this->m_Functions[12].__pfn = CDOTA_Modifier_Spectre_Haunt::GetModifierMoveSpeedOverride;
  this->m_Functions[12].__delta = 0;
}


// CDOTA_Modifier_Spectre_Haunt::GetModifierMoveSpeedOverride  (line 1172, @0x0000000002bd3bb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Spectre_Haunt::GetModifierMoveSpeedOverride(
        CDOTA_Modifier_Spectre_Haunt *const this,
        const CModifierParams *const params)
{
  return 0x43C8000000000001uLL;
}


// CDOTA_Ability_Spectre_Reality::~CDOTA_Ability_Spectre_Reality  (line 1183, @0x0000000002c05a80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Spectre_Reality::~CDOTA_Ability_Spectre_Reality(
        CDOTA_Ability_Spectre_Reality *const this)
{
  this->_vptr_IHandleEntity = &off_45651F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Spectre_Reality::~CDOTA_Ability_Spectre_Reality  (line 1183, @0x0000000002c05aa0, libserver.so)  // inlines: ~CDOTA_Ability_Spectre_Reality
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Spectre_Reality::~CDOTA_Ability_Spectre_Reality(
        CDOTA_Ability_Spectre_Reality *const this)
{
  this->_vptr_IHandleEntity = &off_45651F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Spectre_Reality::Schema_DynamicBinding  (line 1185, @0x0000000002c00130, libserver.so)
// globals: CDOTA_Ability_Spectre_Reality::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_Reality::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_Reality *const this)
{
  return CDOTA_Ability_Spectre_Reality::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1185, @0x0000000002c00140, libserver.so)
// globals: CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::DestructInstance  (line 1185, @0x0000000002c00150, libserver.so)  // inlines: Destruct<CDOTA_Ability_Spectre_Reality>
void __fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::FreeInstance  (line 1185, @0x0000000002c00170, libserver.so)
void __fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::CanAllocate  (line 1185, @0x0000000002c00190, libserver.so)
bool __fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1185, @0x0000000002c001a0, libserver.so)
// globals: CDOTA_Ability_Spectre_Reality::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Spectre_Reality::s_pSchemaBinding;
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::AllocateInstance  (line 1185, @0x0000000002c02a30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::ConstructInstance  (line 1185, @0x0000000002c04e20, libserver.so)  // inlines: CDOTA_Ability_Spectre_Reality, Construct<CDOTA_Ability_Spectre_Reality>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45651F0;
  }
  return p;
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1185, @0x0000000002c0b130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1185, @0x0000000002c0b150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Spectre_Reality::GetEntityClassInternal  (line 1185, @0x0000000002c172b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "spectre_reality", "CDOTA_Ability_Spectre_Reality"
// globals: `guard variable for'CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass, CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass, __dso_handle, CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo, CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo
CEntityClass *__cdecl CDOTA_Ability_Spectre_Reality::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass);
    CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass._vptr_CEntityClass = off_4565170;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass);
    __cxa_atexit(
      CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Spectre_RealityClass != 0 )
    return &CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass;
  if ( `guard variable for'CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo,
      "CDOTA_Ability_Spectre_Reality",
      "spectre_reality",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo);
  }
  CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass.m_pClassInfo = &CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo;
  CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass.m_pBaseClassInfo = CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Spectre_RealityClass = &CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass;
  CDOTA_Ability_Spectre_Reality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Spectre_RealityClassInfo.m_pClass = &CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass;
  CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Spectre_RealityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Spectre_Reality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Spectre_RealityClass;
}


// CDOTA_Ability_Spectre_Reality::ProcsMagicStick  (line 1191, @0x0000000002c001b0, libserver.so)
bool __fastcall CDOTA_Ability_Spectre_Reality::ProcsMagicStick(CDOTA_Ability_Spectre_Reality *const this)
{
  return 0;
}


// CDOTA_Ability_Spectre_Reality::GetAssociatedPrimaryAbilities  (line 1193, @0x0000000002c001c0, libserver.so)
const char *__fastcall CDOTA_Ability_Spectre_Reality::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Spectre_Reality *const this)
{
  return "spectre_haunt";
}


// CDOTA_Ability_Spectre_Reality::OnUpgrade  (line 1200, @0x0000000002bd4de0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_Spectre_Reality::OnUpgrade(CDOTA_Ability_Spectre_Reality *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "spectre_haunt", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Spectre_Reality::OnSpellStart  (line 1214, @0x0000000002bf9c30, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, Length2D, LookupEntity, Purge, RemoveAll, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, FindClearSpaceForUnit, CDOTA_BaseNPC::UnitEmitSound, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (15 total)
// strings: "modifier_spectre_haunt", "Hero_Spectre.Reality", "realityreplace"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Spectre_Reality::OnSpellStart(CDOTA_Ability_Spectre_Reality *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v2; // r13
  int v3; // r12d
  CDOTA_BaseNPC *v4; // r15
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // rbx
  __int64 m_Size; // r14
  int v12; // eax
  CDOTA_BaseNPC **v13; // rax
  const Vector *AbsOrigin; // r14
  float v15; // xmm0_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  float fBestDist; // [rsp+38h] [rbp-D8h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnit; // [rsp+60h] [rbp-B0h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > hHaunts; // [rsp+80h] [rbp-90h] BYREF
  CResponseCriteriaSet criteria; // [rsp+A0h] [rbp-70h] BYREF
  Vector vOldLocation; // 0:^40.12
  Vector vNewLocation; // 0:^50.12

  hUnit.m_Size = 0;
  hUnit.m_Memory.m_pMemory = 0;
  hUnit.m_Memory.m_nAllocationCount = 0;
  hUnit.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vec3_origin, 0, -1.0, &hUnit, 1, 1, 64, 0, 0);
  hHaunts.m_Size = 0;
  hHaunts.m_Memory.m_pMemory = 0;
  hHaunts.m_Memory.m_nAllocationCount = 0;
  hHaunts.m_Memory.m_nGrowSize = 0;
  if ( hUnit.m_Size <= 0 )
  {
    hHaunts.m_Size = 0;
LABEL_28:
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&hHaunts.m_Memory);
    if ( (hHaunts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&hHaunts.m_Memory);
    goto LABEL_26;
  }
  v2 = 0;
  v3 = 0;
  fBestDist = 0.0;
  v4 = 0;
  do
  {
    v5 = &hUnit.m_Memory.m_pMemory[v2];
    m_Index = hUnit.m_Memory.m_pMemory[v2].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (*(m_pInstance->_vptr_IHandleEntity + 408))(v9->m_pInstance) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) != 0
            && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_spectre_haunt", 0) != 0 )
          {
            m_Size = hHaunts.m_Size;
            v12 = hHaunts.m_Size;
            if ( hHaunts.m_Size == hHaunts.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&hHaunts.m_Memory, 1);
              v12 = hHaunts.m_Size;
            }
            hHaunts.m_Size = v12 + 1;
            v13 = &hHaunts.m_Memory.m_pMemory[m_Size];
            if ( v13 != 0 )
              *v13 = m_pInstance;
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            *&criteria._vptr_CResponseCriteriaSet = CDOTABaseAbility::GetCursorPosition(this);
            v15 = fsqrt(
                    ((*&criteria._vptr_CResponseCriteriaSet - AbsOrigin->x)
                   * (*&criteria._vptr_CResponseCriteriaSet - AbsOrigin->x))
                  + ((*(&criteria._vptr_CResponseCriteriaSet + 1) - AbsOrigin->y)
                   * (*(&criteria._vptr_CResponseCriteriaSet + 1) - AbsOrigin->y)));
            if ( v4 == 0 || fBestDist > v15 )
            {
              fBestDist = v15;
              v4 = m_pInstance;
            }
          }
        }
      }
    }
    ++v3;
    ++v2;
  }
  while ( hUnit.m_Size > v3 );
  if ( v4 != 0 )
  {
    v16 = CDOTABaseAbility::GetCaster(this);
    vOldLocation = *CBaseEntity::GetAbsOrigin(v16);
    vNewLocation = *CBaseEntity::GetAbsOrigin(v4);
    v17 = CDOTABaseAbility::GetCaster(this);
    FindClearSpaceForUnit(v17, vNewLocation, 1);
    FindClearSpaceForUnit(v4, vOldLocation, 1);
    v18 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v18, "Hero_Spectre.Reality", 0.0, 0, 0);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "realityreplace", "1", 1.0);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
  hHaunts.m_Size = 0;
  if ( (hHaunts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    goto LABEL_28;
LABEL_26:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnit);
}


