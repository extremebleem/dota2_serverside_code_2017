// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:38
class CDOTA_Unit_Hero_Nyx_Assassin : public CDOTA_BaseNPC_Hero {
public:

private:

	bool m_bHadScepter;  // +0x16ec
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
	CDOTA_Unit_Hero_Nyx_Assassin(CDOTA_Unit_Hero_Nyx_Assassin &);
	CDOTA_Unit_Hero_Nyx_Assassin(CDOTA_Unit_Hero_Nyx_Assassin &);
	CDOTA_Unit_Hero_Nyx_Assassin();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnLoadState(KeyValues *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual ~CDOTA_Unit_Hero_Nyx_Assassin();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[467] OnLoadState
	// vtable[8] Spawn
	// vtable[479] OnItemEquipped
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:60
class C_CDOTA_Unit_Hero_Nyx_Assassin_MapInstall {
	C_CDOTA_Unit_Hero_Nyx_Assassin_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:168
class CDOTA_Ability_Nyx_Assassin_Impale : public CDOTABaseAbility {
public:

private:

	int width;  // +0x390
	float duration;  // +0x394
	int length;  // +0x398
	int speed;  // +0x39c
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
	CDOTA_Ability_Nyx_Assassin_Impale(CDOTA_Ability_Nyx_Assassin_Impale &);
	CDOTA_Ability_Nyx_Assassin_Impale(CDOTA_Ability_Nyx_Assassin_Impale &);
	CDOTA_Ability_Nyx_Assassin_Impale();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnUpgrade();
	virtual bool RequiresFacing();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual float GetCooldown(int);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Nyx_Assassin_Impale();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[302] RequiresFacing
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[242] GetCooldown
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:194
class C_CDOTA_Ability_Nyx_Assassin_Impale_MapInstall {
	C_CDOTA_Ability_Nyx_Assassin_Impale_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:289
class CDOTA_Modifier_Nyx_Assassin_Impale : public CDOTA_Buff, public CVerticalMotionController {
public:

private:

	float m_flStartZ;  // +0xbb4
	float m_flCurTime;  // +0xbb8
	bool m_bDamageApplied;  // +0xbbc
	CDOTA_Modifier_Nyx_Assassin_Impale();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual bool IsStunDebuff();
	virtual int GetAttributes();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsVerticalMotionValidToApply();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	void TryToApplyDamage();
	virtual ~CDOTA_Modifier_Nyx_Assassin_Impale();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[16] IsStunDebuff
	// vtable[7] GetAttributes
	// vtable[89] UpdateVerticalMotion
	// vtable[90] OnVerticalMotionInterrupted
	// vtable[91] IsVerticalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:429
class CDOTA_Ability_Nyx_Assassin_ManaBurn : public CDOTABaseAbility {
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
	CDOTA_Ability_Nyx_Assassin_ManaBurn(CDOTA_Ability_Nyx_Assassin_ManaBurn &);
	CDOTA_Ability_Nyx_Assassin_ManaBurn(CDOTA_Ability_Nyx_Assassin_ManaBurn &);
	CDOTA_Ability_Nyx_Assassin_ManaBurn();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool RequiresFacing();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Nyx_Assassin_ManaBurn();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[302] RequiresFacing
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:442
class C_CDOTA_Ability_Nyx_Assassin_ManaBurn_MapInstall {
	C_CDOTA_Ability_Nyx_Assassin_ManaBurn_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:503
class CDOTA_Ability_Nyx_Assassin_Burrow : public CDOTABaseAbility {
public:

private:

	int m_nSpellStartFXIndex;  // +0x390
	int m_nPhaseStartFXIndex;  // +0x394
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
	CDOTA_Ability_Nyx_Assassin_Burrow(CDOTA_Ability_Nyx_Assassin_Burrow &);
	CDOTA_Ability_Nyx_Assassin_Burrow(CDOTA_Ability_Nyx_Assassin_Burrow &);
	CDOTA_Ability_Nyx_Assassin_Burrow();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual float GetCastPoint();
	virtual const char * GetAssociatedSecondaryAbilities();
	int GetSpellStartFXIndex();
	virtual void OnUnStolen();
	virtual ~CDOTA_Ability_Nyx_Assassin_Burrow();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[231] GetCastPoint
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[308] OnUnStolen
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:530
class C_CDOTA_Ability_Nyx_Assassin_Burrow_MapInstall {
	C_CDOTA_Ability_Nyx_Assassin_Burrow_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:620
class CDOTA_Modifier_Nyx_Assassin_Burrow : public CDOTA_Modifier_Invisible {
public:

private:

	float health_regen_rate;  // +0xbb4
	float mana_regen_rate;  // +0xbb8
	int damage_reduction;  // +0xbbc
	CDOTA_Modifier_Nyx_Assassin_Burrow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ModifierVariant_t OnBreakInvisibility(const CModifierParams &);
	ModifierVariant_t GetModifierPersistentInvisibility(const CModifierParams &);
	ModifierVariant_t GetModifierHealthRegenPercentage(const CModifierParams &);
	ModifierVariant_t GetModifierTotalManaRegenPercentage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Nyx_Assassin_Burrow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[90] OnAbilityExecuted
	// vtable[91] OnAttack
	// vtable[92] OnBreakInvisibility
	// vtable[5] CheckState
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:803
class CDOTA_Ability_Nyx_Assassin_Unburrow : public CDOTABaseAbility {
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
	CDOTA_Ability_Nyx_Assassin_Unburrow(CDOTA_Ability_Nyx_Assassin_Unburrow &);
	CDOTA_Ability_Nyx_Assassin_Unburrow(CDOTA_Ability_Nyx_Assassin_Unburrow &);
	CDOTA_Ability_Nyx_Assassin_Unburrow();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Nyx_Assassin_Unburrow();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:859
class CDOTA_Ability_Nyx_Assassin_SpikedCarapace : public CDOTABaseAbility {
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
	CDOTA_Ability_Nyx_Assassin_SpikedCarapace(CDOTA_Ability_Nyx_Assassin_SpikedCarapace &);
	CDOTA_Ability_Nyx_Assassin_SpikedCarapace(CDOTA_Ability_Nyx_Assassin_SpikedCarapace &);
	CDOTA_Ability_Nyx_Assassin_SpikedCarapace();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Nyx_Assassin_SpikedCarapace();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:889
class CDOTA_Modifier_Nyx_Assassin_SpikedCarapace : public CDOTA_Buff {
public:

private:

	float stun_duration;  // +0xba8

	CDOTA_Modifier_Nyx_Assassin_SpikedCarapace();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierAvoidDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual int StatusEffectPriority();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Nyx_Assassin_SpikedCarapace();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[71] StatusEffectPriority
	// vtable[14] IsPurgable
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:1015
class CDOTA_Ability_Nyx_Assassin_Vendetta : public CDOTABaseAbility {
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
	CDOTA_Ability_Nyx_Assassin_Vendetta(CDOTA_Ability_Nyx_Assassin_Vendetta &);
	CDOTA_Ability_Nyx_Assassin_Vendetta(CDOTA_Ability_Nyx_Assassin_Vendetta &);
	CDOTA_Ability_Nyx_Assassin_Vendetta();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Nyx_Assassin_Vendetta();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_nyx_assassin.cpp:1112
class CDOTA_Modifier_Nyx_Assassin_Vendetta : public CDOTA_Modifier_Invisible {
public:

private:

	int bonus_damage;  // +0xbb4
	int movement_speed;  // +0xbb8
	CDOTA_Modifier_Nyx_Assassin_Vendetta();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Nyx_Assassin_Vendetta();

	// vtable[90] OnAbilityExecuted
	// vtable[91] OnAttack
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[11] IsHidden
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Nyx_Assassin::~CDOTA_Unit_Hero_Nyx_Assassin  (line 38, @0x0000000002c9a450, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Nyx_Assassin::~CDOTA_Unit_Hero_Nyx_Assassin(CDOTA_Unit_Hero_Nyx_Assassin *const this)
{
  this->_vptr_IHandleEntity = &off_45EFFB0;
  this->_vptr_INextBotEventResponder = &off_45F0F90;
  this->_vptr_CObstructionObject = &off_45F12C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Nyx_Assassin::~CDOTA_Unit_Hero_Nyx_Assassin  (line 38, @0x0000000002c9a490, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Nyx_Assassin
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Nyx_Assassin::~CDOTA_Unit_Hero_Nyx_Assassin(CDOTA_Unit_Hero_Nyx_Assassin *const this)
{
  this->_vptr_IHandleEntity = &off_45EFFB0;
  this->_vptr_INextBotEventResponder = &off_45F0F90;
  this->_vptr_CObstructionObject = &off_45F12C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Nyx_Assassin::Schema_DynamicBinding  (line 40, @0x0000000002c8b8d0, libserver.so)
// globals: CDOTA_Unit_Hero_Nyx_Assassin::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Nyx_Assassin::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Nyx_Assassin *const this)
{
  return CDOTA_Unit_Hero_Nyx_Assassin::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002c8b900, libserver.so)
// globals: CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002c8b910, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Nyx_Assassin>
void __fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002c8b930, libserver.so)
void __fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002c8b950, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002c8b960, libserver.so)
// globals: CDOTA_Unit_Hero_Nyx_Assassin::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Nyx_Assassin::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002c908e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002c941e0, libserver.so)  // inlines: CDOTA_Unit_Hero_Nyx_Assassin, Construct<CDOTA_Unit_Hero_Nyx_Assassin>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45EFFB0;
    *(p + 236) = &off_45F0F90;
    *(p + 257) = &off_45F12C0;
  }
  return p;
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002ca3510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002ca39c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal  (line 40, @0x0000000002cbc9c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_nyx_assassin", "CDOTA_Unit_Hero_Nyx_Assassin"
// globals: `guard variable for'CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass, CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass, __dso_handle, CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo, CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass);
    CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass._vptr_CEntityClass = off_45EFF30;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Nyx_AssassinClass != 0 )
    return &CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo,
      "CDOTA_Unit_Hero_Nyx_Assassin",
      "npc_dota_hero_nyx_assassin",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo);
  }
  CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass.m_pClassInfo = &CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo;
  CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Nyx_AssassinClass = &CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass;
  CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClassInfo.m_pClass = &CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass;
  CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Nyx_AssassinClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Nyx_Assassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Nyx_AssassinClass;
}


// CDOTA_Unit_Hero_Nyx_Assassin::YouForgotToImplementOrDeclareServerClass  (line 60, @0x0000000002c1e0a0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Nyx_Assassin::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Nyx_Assassin *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Nyx_Assassin::GetServerClass  (line 60, @0x0000000002c359b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Nyx_Assassin::GetServerClass(CDOTA_Unit_Hero_Nyx_Assassin *const this)
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


// CDOTA_Unit_Hero_Nyx_Assassin::OnLoadState  (line 69, @0x0000000002c1fdb0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "nyx_assassin_unburrow"
bool __fastcall CDOTA_Unit_Hero_Nyx_Assassin::OnLoadState(CDOTA_Unit_Hero_Nyx_Assassin *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "nyx_assassin_burrow", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "nyx_assassin_burrow", "nyx_assassin_unburrow", 1, 0);
  return 1;
}


// CDOTA_Unit_Hero_Nyx_Assassin::Spawn  (line 87, @0x0000000002c1e7d0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Nyx_Assassin::Spawn(
        CDOTA_Unit_Hero_Nyx_Assassin *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Hero_Nyx_Assassin::OnItemEquipped  (line 95, @0x0000000002c2bae0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "item_ultimate_scepter", "nyx_assassin_unburrow"
void __fastcall CDOTA_Unit_Hero_Nyx_Assassin::OnItemEquipped(
        CDOTA_Unit_Hero_Nyx_Assassin *const this,
        CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int m_Value; // r13d
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // rbx
  CDOTABaseAbility *v9; // rax

  CDOTA_BaseNPC::OnItemEquipped(this, pItem);
  if ( pItem != 0 && !this->m_bHadScepter )
  {
    m_pAbilityData = pItem->m_pAbilityData;
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pAbilityData->m_pszAbilityName != 0
        && (m_pszAbilityName == "item_ultimate_scepter" || strcmp(m_pszAbilityName, "item_ultimate_scepter") == 0) )
      {
        m_Value = pItem->m_iPlayerOwnerID.m_Value;
        if ( (*(this->_vptr_IHandleEntity + 414))(this) == m_Value )
        {
          if ( pItem->m_bDroppable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 928, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bDroppable.m_Value = 0;
          }
          if ( pItem->m_bSellable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bSellable.m_Value = 0;
          }
          CDOTA_Item::ExpireSellback(pItem);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "nyx_assassin_burrow", 0);
          v8 = AbilityByName;
          if ( AbilityByName != 0 )
          {
            CDOTABaseAbility::SetHidden(AbilityByName, 0);
            CDOTABaseAbility::UpgradeAbility(v8, 0);
          }
          v9 = CDOTA_BaseNPC::FindAbilityByName(this, "nyx_assassin_unburrow", 0);
          if ( v9 != 0 )
            CDOTABaseAbility::UpgradeAbility(v9, 0);
          this->m_bHadScepter = 1;
        }
      }
    }
  }
}


// CDOTA_Ability_Nyx_Assassin_Impale::~CDOTA_Ability_Nyx_Assassin_Impale  (line 168, @0x0000000002c99210, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nyx_Assassin_Impale::~CDOTA_Ability_Nyx_Assassin_Impale(
        CDOTA_Ability_Nyx_Assassin_Impale *const this)
{
  this->_vptr_IHandleEntity = &off_45F1390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nyx_Assassin_Impale::~CDOTA_Ability_Nyx_Assassin_Impale  (line 168, @0x0000000002c99230, libserver.so)  // inlines: ~CDOTA_Ability_Nyx_Assassin_Impale
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_Impale::~CDOTA_Ability_Nyx_Assassin_Impale(
        CDOTA_Ability_Nyx_Assassin_Impale *const this)
{
  this->_vptr_IHandleEntity = &off_45F1390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_Impale::Schema_DynamicBinding  (line 170, @0x0000000002c8b970, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Impale::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_Impale::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_Impale *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Impale::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 170, @0x0000000002c8b980, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::DestructInstance  (line 170, @0x0000000002c8b990, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nyx_Assassin_Impale>
void __fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::FreeInstance  (line 170, @0x0000000002c8b9b0, libserver.so)
void __fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::CanAllocate  (line 170, @0x0000000002c8b9d0, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 170, @0x0000000002c8b9e0, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Impale::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Impale::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::AllocateInstance  (line 170, @0x0000000002c90920, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::ConstructInstance  (line 170, @0x0000000002c952d0, libserver.so)  // inlines: CDOTA_Ability_Nyx_Assassin_Impale, Construct<CDOTA_Ability_Nyx_Assassin_Impale>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F1390;
  }
  return p;
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 170, @0x0000000002ca2f70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 170, @0x0000000002ca2f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal  (line 170, @0x0000000002cbbca0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Nyx_Assassin_Impale"
// globals: `guard variable for'CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass, CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass, __dso_handle, CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo, CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass);
    CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass._vptr_CEntityClass = off_45F1310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass);
    __cxa_atexit(
      CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nyx_Assassin_ImpaleClass != 0 )
    return &CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass;
  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo,
      "CDOTA_Ability_Nyx_Assassin_Impale",
      "nyx_assassin_impale",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo);
  }
  CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass.m_pClassInfo = &CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo;
  CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass.m_pBaseClassInfo = CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nyx_Assassin_ImpaleClass = &CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass;
  CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClassInfo.m_pClass = &CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass;
  CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nyx_Assassin_ImpaleClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nyx_Assassin_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ImpaleClass;
}


// CDOTA_Ability_Nyx_Assassin_Impale::RequiresFacing  (line 175, @0x0000000002c95840, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_nyx_assassin_burrow"
bool __fastcall CDOTA_Ability_Nyx_Assassin_Impale::RequiresFacing(CDOTA_Ability_Nyx_Assassin_Impale *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) == 0;
}


// CDOTA_Ability_Nyx_Assassin_Impale::GetCooldown  (line 179, @0x0000000002cb7690, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCooldown
// strings: "modifier_nyx_assassin_burrow", "cooldown_upgrade"
float __fastcall CDOTA_Ability_Nyx_Assassin_Impale::GetCooldown(
        CDOTA_Ability_Nyx_Assassin_Impale *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) != 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_upgrade", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Nyx_Assassin_Impale::GetCastRange  (line 180, @0x0000000002c996c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCastRange
// strings: "modifier_nyx_assassin_burrow"
int __fastcall CDOTA_Ability_Nyx_Assassin_Impale::GetCastRange(
        CDOTA_Ability_Nyx_Assassin_Impale *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) != 0 )
    return (CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0) * 1.75);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Nyx_Assassin_Impale::YouForgotToImplementOrDeclareServerClass  (line 194, @0x0000000002c1e0b0, libserver.so)
int __fastcall CDOTA_Ability_Nyx_Assassin_Impale::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nyx_Assassin_Impale *const this)
{
  return 0;
}


// CDOTA_Ability_Nyx_Assassin_Impale::GetServerClass  (line 194, @0x0000000002c355b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nyx_Assassin_Impale::GetServerClass(
        CDOTA_Ability_Nyx_Assassin_Impale *const this)
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


// CDOTA_Ability_Nyx_Assassin_Impale::OnUpgrade  (line 203, @0x0000000002c6a290, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_Nyx_Assassin_Impale::OnUpgrade(CDOTA_Ability_Nyx_Assassin_Impale *const this)
{
  this->width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "width", -1, 0);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  this->length = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "length", -1, 0);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Nyx_Assassin_Impale::OnSpellStart  (line 214, @0x0000000002c2c140, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsAngles, AngleVectors, CDOTABaseAbility::GetCursorPosition
// strings: "particles/units/heroes/hero_nyx_assassin/nyx_assassin_impale.vpcf", "Hero_NyxAssassin.Impale"
void __fastcall CDOTA_Ability_Nyx_Assassin_Impale::OnSpellStart(CDOTA_Ability_Nyx_Assassin_Impale *const this)
{
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  float x; // r12d
  float v5; // r14d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v7; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // rax
  vec_t v14; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  float speed; // xmm0_4
  CDOTA_BaseNPC *v17; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  const QAngle *AbsAngles; // rax
  Vector vDirection; // [rsp+10h] [rbp-B0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-A0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(AbsOrigin->y)));
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    x = CursorPosition.x;
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(CursorPosition.y)));
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v7 = CBaseEntity::GetAbsOrigin(Caster);
  v8 = x - v7->x;
  v9 = v5 - v7->y;
  vDirection.z = 0.0;
  vDirection.x = v8;
  vDirection.y = v9;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v22 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v22);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.pszEffectName = "particles/units/heroes/hero_nyx_assassin/nyx_assassin_impale.vpcf";
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  y = vec3_origin.y;
  info.fEndRadius = 0.0;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vAcceleration.z = z;
  info.bCheckStartPosition = 0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.bProvidesVision = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.bStickyFoWReveal = 1;
  info.pAbility = this;
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  info.vSpawnOrigin.x = v13->x;
  info.vSpawnOrigin.y = v13->y;
  v14 = v13->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vSpawnOrigin.z = v14;
  speed = this->speed;
  info.vVelocity.y = vDirection.y * speed;
  info.vVelocity.z = vDirection.z * speed;
  info.vVelocity.x = speed * vDirection.x;
  info.fDistance = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  info.fStartRadius = this->width;
  info.fEndRadius = info.fStartRadius;
  v17 = CDOTABaseAbility::GetCaster(this);
  if ( v17 != 0 && (m_pEntity = v17->m_pEntity) != 0 )
  {
    v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v20 = 0x7FFF;
    else
      v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v20 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v19 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  info.bHasFrontalCone = 0;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v21 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v21, "Hero_NyxAssassin.Impale", 0.0, 0, 0);
}


// CDOTA_Ability_Nyx_Assassin_Impale::OnProjectileHit  (line 248, @0x0000000002c2f0d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues (13 total)
// strings: "modifier_nyx_assassin_impale", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_impale_hit.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Nyx_Assassin_Impale::OnProjectileHit(
        CDOTA_Ability_Nyx_Assassin_Impale *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v13; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v16; // rax
  const Vector *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-28h]

  v21 = __readfsqword(0x28u);
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
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_nyx_assassin_impale");
            KeyValues::SetFloat(&kv, "duration", v11);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_nyx_assassin_impale", &kv, 0);
            v13 = CDOTABaseAbility::GetCaster(this);
            ParticleManager = GetParticleManager();
            LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_nyx_assassin/nyx_assassin_impale_hit.vpcf",
                             2,
                             0,
                             0,
                             v13);
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            v16 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v16, v13, 0, *&AbsOrigin->x, AbsOrigin->z);
            v17 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v18 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v18, v13, 2, m_pInstance, 5, "attach_hitloc", *v17, 1);
            v19 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v19, v13);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Nyx_Assassin_Impale::GetAbilityDamageToTargetOverInterval  (line 270, @0x0000000002c25a10, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Nyx_Assassin_Impale::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Nyx_Assassin_Impale *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fInterval);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Nyx_Assassin_Impale::GetStunDuration  (line 280, @0x0000000002c56920, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Nyx_Assassin_Impale::GetStunDuration(CDOTA_Ability_Nyx_Assassin_Impale *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Nyx_Assassin_Impale::~CDOTA_Modifier_Nyx_Assassin_Impale  (line 289, @0x0000000002c912c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::~CDOTA_Modifier_Nyx_Assassin_Impale(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  this->_vptr_CDOTA_Buff = &off_45F1E50;
  this->_vptr_CVerticalMotionController = &off_45F2140;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nyx_Assassin_Impale::~CDOTA_Modifier_Nyx_Assassin_Impale  (line 289, @0x0000000002c912f0, libserver.so)  // inlines: ~CDOTA_Modifier_Nyx_Assassin_Impale
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::~CDOTA_Modifier_Nyx_Assassin_Impale(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  this->_vptr_CDOTA_Buff = &off_45F1E50;
  this->_vptr_CVerticalMotionController = &off_45F2140;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nyx_Assassin_Impale::IsStunDebuff  (line 303, @0x0000000002c8b9f0, libserver.so)
bool __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::IsStunDebuff(CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  return 1;
}


// CDOTA_Modifier_Nyx_Assassin_Impale::GetAttributes  (line 305, @0x0000000002c93d00, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::GetAttributes(CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Nyx_Assassin_Impale::IsVerticalMotionValidToApply  (line 309, @0x0000000002c8ba00, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Nyx_Assassin_Impale::GetEffectName  (line 314, @0x0000000002c8ba30, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Nyx_Assassin_Impale::GetEffectName(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_Nyx_Assassin_Impale::GetEffectAttachType  (line 315, @0x0000000002c8ba40, libserver.so)
int __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::GetEffectAttachType(CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  return 7;
}


// CDOTA_Modifier_Nyx_Assassin_Impale::DeclareFunctions  (line 332, @0x0000000002c1e0c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nyx_Assassin_Impale::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::DeclareFunctions(CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Nyx_Assassin_Impale::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Nyx_Assassin_Impale::GetOverrideAnimation  (line 339, @0x0000000002c1e0e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::GetOverrideAnimation(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Impale::CheckState  (line 346, @0x0000000002c1e100, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::CheckState(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Impale::OnCreated  (line 355, @0x0000000002c26080, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound
// strings: "Hero_NyxAssassin.Target"
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::OnCreated(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax

  this->m_flCurTime = 0.0;
  this->m_bDamageApplied = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  this->m_flStartZ = GetGroundHeight(AbsOrigin, Parent);
  v6 = CDOTA_Buff::GetParent(this);
  v7 = (*(v6->_vptr_IHandleEntity + 376))(v6);
  if ( CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0) )
  {
    v8 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v8, 1508, 0.2, 0.2, 0, 0, 1.0);
    v9 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_NyxAssassin.Target", v9);
  }
  else if ( !this->m_bDamageApplied )
  {
    CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage(this);
  }
}


// CDOTA_Modifier_Nyx_Assassin_Impale::UpdateVerticalMotion  (line 377, @0x0000000002c26210, libserver.so)  // inlines: TryToApplyDamage
// calls: CVerticalMotionController::UpdateSimpleAirTime, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, DOTA_EmitSound, CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage
// strings: "Hero_NyxAssassin.TargetLand"
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::UpdateVerticalMotion(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt,
        double a5,
        double a6,
        float a7)
{
  CVerticalMotionController *v8; // rdi
  float v9; // xmm1_4
  float v10; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v12; // rax

  v8 = &this->CVerticalMotionController;
  v9 = *&v8[1]._vptr_CVerticalMotionController + a3;
  v10 = *(&v8->m_nPriority + 1);
  *&v8[1]._vptr_CVerticalMotionController = v9;
  if ( CVerticalMotionController::UpdateSimpleAirTime(v8, me, v10, v9, 0.51999998, 350.0, a7) != 0 )
  {
    if ( !this->m_bDamageApplied )
      CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
    v12 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_NyxAssassin.TargetLand", v12);
  }
}


// CDOTA_Modifier_Nyx_Assassin_Impale::OnVerticalMotionInterrupted  (line 394, @0x0000000002c26160, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
}


// CDOTA_Modifier_Nyx_Assassin_Impale::OnDestroy  (line 404, @0x0000000002c261b0, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage, CDOTA_Buff::GetParent, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::OnDestroy(CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage(this);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveVerticalMotionController(v3, &this->CVerticalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v4, 1508);
}


// CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage  (line 416, @0x0000000002c26010, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
// callers: CDOTA_Modifier_Nyx_Assassin_Impale::OnCreated, CDOTA_Modifier_Nyx_Assassin_Impale::OnVerticalMotionInterrupted, CDOTA_Modifier_Nyx_Assassin_Impale::OnDestroy, CDOTA_Modifier_Nyx_Assassin_Impale::UpdateVerticalMotion, CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage(CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r14d
  CDOTABaseAbility *v4; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax

  this->m_bDamageApplied = 1;
  Ability = CDOTA_Buff::GetAbility(this);
  v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v4 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v4, v3, 2, 0);
}


// CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage  (line 416, @0x0000000002c4b6f0, libserver.so)
// calls: CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage
void __fastcall CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage(CDOTA_Modifier_Nyx_Assassin_Impale *const this)
{
  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Nyx_Assassin_Impale::TryToApplyDamage(this);
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::~CDOTA_Ability_Nyx_Assassin_ManaBurn  (line 429, @0x0000000002c99260, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::~CDOTA_Ability_Nyx_Assassin_ManaBurn(
        CDOTA_Ability_Nyx_Assassin_ManaBurn *const this)
{
  this->_vptr_IHandleEntity = &off_45F2210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::~CDOTA_Ability_Nyx_Assassin_ManaBurn  (line 429, @0x0000000002c99280, libserver.so)  // inlines: ~CDOTA_Ability_Nyx_Assassin_ManaBurn
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::~CDOTA_Ability_Nyx_Assassin_ManaBurn(
        CDOTA_Ability_Nyx_Assassin_ManaBurn *const this)
{
  this->_vptr_IHandleEntity = &off_45F2210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::Schema_DynamicBinding  (line 431, @0x0000000002c8ba50, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_ManaBurn::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_ManaBurn *const this)
{
  return CDOTA_Ability_Nyx_Assassin_ManaBurn::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 431, @0x0000000002c8ba60, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::DestructInstance  (line 431, @0x0000000002c8ba70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nyx_Assassin_ManaBurn>
void __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::FreeInstance  (line 431, @0x0000000002c8ba90, libserver.so)
void __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::CanAllocate  (line 431, @0x0000000002c8bab0, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 431, @0x0000000002c8bac0, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_ManaBurn::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_ManaBurn::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::AllocateInstance  (line 431, @0x0000000002c90960, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::ConstructInstance  (line 431, @0x0000000002c95300, libserver.so)  // inlines: CDOTA_Ability_Nyx_Assassin_ManaBurn, Construct<CDOTA_Ability_Nyx_Assassin_ManaBurn>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F2210;
  }
  return p;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 431, @0x0000000002ca2fc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 431, @0x0000000002ca2fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal  (line 431, @0x0000000002cbbdf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "nyx_assassin_mana_burn", "CDOTA_Ability_Nyx_Assassin_ManaBurn"
// globals: `guard variable for'CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass, CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass, __dso_handle, CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo, CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass);
    CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass._vptr_CEntityClass = off_45F2190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass);
    __cxa_atexit(
      CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass != 0 )
    return &CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass;
  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo,
      "CDOTA_Ability_Nyx_Assassin_ManaBurn",
      "nyx_assassin_mana_burn",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo);
  }
  CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass.m_pClassInfo = &CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo;
  CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass.m_pBaseClassInfo = CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass = &CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass;
  CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClassInfo.m_pClass = &CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass;
  CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nyx_Assassin_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_ManaBurnClass;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::RequiresFacing  (line 436, @0x0000000002c95870, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_nyx_assassin_burrow"
bool __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::RequiresFacing(CDOTA_Ability_Nyx_Assassin_ManaBurn *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) == 0;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::GetCastRange  (line 437, @0x0000000002c99720, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCastRange
// strings: "modifier_nyx_assassin_burrow"
int __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::GetCastRange(
        CDOTA_Ability_Nyx_Assassin_ManaBurn *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) != 0 )
    return (CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0) * 1.75);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::YouForgotToImplementOrDeclareServerClass  (line 442, @0x0000000002c1e110, libserver.so)
int __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nyx_Assassin_ManaBurn *const this)
{
  return 0;
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::GetServerClass  (line 442, @0x0000000002c35db0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::GetServerClass(
        CDOTA_Ability_Nyx_Assassin_ManaBurn *const this)
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


// CDOTA_Ability_Nyx_Assassin_ManaBurn::OnSpellStart  (line 451, @0x0000000002c55880, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetMana, GetParent, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, ApplyDamage, CDOTA_BaseNPC::ReduceMana, CDOTA_CombatLog::AddManaDamageEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CGameSceneNode::GetOwnerEntity, CDOTA_ParticleManager::SetParticleControlEnt (16 total)
// strings: "float_multiplier", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_mana_burn.vpcf", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_mana_burn_start.vpcf", "attach_mouth", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_mana_burn_msg.vpcf", "Hero_NyxAssassin.ManaBurn.Cast" (7 total)
void __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::OnSpellStart(CDOTA_Ability_Nyx_Assassin_ManaBurn *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm0_4
  float m_Value; // xmm1_4
  int v6; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v8; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v11; // rax
  int v12; // esi
  CBaseEntity *OwnerEntity; // r13
  CGameSceneNode *m_pParent; // rdi
  CDOTA_ParticleManager *v15; // rax
  int v16; // r13d
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  double v20; // xmm0_8
  double v21; // r14
  CDOTA_ParticleManager *v22; // rax
  int v23; // r13d
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  float float_multiplier; // [rsp+Ch] [rbp-34h]
  float float_multipliera; // [rsp+Ch] [rbp-34h]
  double v30; // [rsp+10h] [rbp-30h]

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    float_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "float_multiplier", -1, 0);
    v4 = (*(v3->_vptr_IHandleEntity + 498))(v3);
    m_Value = v3->m_flMana.m_Value;
    if ( m_Value > (v4 * float_multiplier) )
      v6 = ((*(v3->_vptr_IHandleEntity + 498))(v3) * float_multiplier);
    else
      v6 = m_Value;
    float_multipliera = v6;
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, v3, this, v6, 2, 0);
    CDOTA_BaseNPC::ReduceMana(v3, v6, v8);
    CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, this, v3, v6);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_nyx_assassin/nyx_assassin_mana_burn.vpcf",
                 1,
                 v3,
                 0,
                 0);
    v11 = GetParticleManager();
    v12 = Particle;
    OwnerEntity = 0;
    CDOTA_ParticleManager::ReleaseParticleIndex(v11, v12);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    v15 = GetParticleManager();
    v16 = CDOTA_ParticleManager::CreateParticle(
            v15,
            "particles/units/heroes/hero_nyx_assassin/nyx_assassin_mana_burn_start.vpcf",
            2,
            OwnerEntity,
            0,
            0);
    v17 = CDOTABaseAbility::GetCaster(this);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v18, v16, 0, v17, 5, "attach_mouth", vec3_invalid, 1);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v19, v16);
    v20 = log10(float_multipliera);
    v21 = floor(v20);
    v22 = GetParticleManager();
    LODWORD(v30) = 1065353216;
    v23 = CDOTA_ParticleManager::CreateParticle(
            v22,
            "particles/units/heroes/hero_nyx_assassin/nyx_assassin_mana_burn_msg.vpcf",
            7,
            v3,
            0,
            0);
    *(&v30 + 1) = float_multipliera;
    v24 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v24, v23, 1, v30, -1.0);
    LODWORD(v30) = 1065353216;
    *(&v30 + 1) = ((v21 + 1.0) + 1);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v25, v23, 2, v30, 0.0);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v26, v23);
    v27 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_NyxAssassin.ManaBurn.Cast", v27);
    DOTA_EmitSound(10, "Hero_NyxAssassin.ManaBurn.Target", v3);
  }
}


// CDOTA_Ability_Nyx_Assassin_ManaBurn::GetAbilityDamageToTargetOverInterval  (line 486, @0x0000000002c56940, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "float_multiplier"
__int64 __fastcall CDOTA_Ability_Nyx_Assassin_ManaBurn::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Nyx_Assassin_ManaBurn *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float LevelSpecialValue; // [rsp-1Ch] [rbp-1Ch]
  float v7; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL && pTarget != 0 && (pTarget->m_iUnitType & 1) != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "float_multiplier", -1, 0);
    v7 = LevelSpecialValue * (*(pTarget->_vptr_IHandleEntity + 498))(pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v7);
  }
  return result;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::~CDOTA_Ability_Nyx_Assassin_Burrow  (line 503, @0x0000000002c992b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::~CDOTA_Ability_Nyx_Assassin_Burrow(
        CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  this->_vptr_IHandleEntity = &off_45F2D10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::~CDOTA_Ability_Nyx_Assassin_Burrow  (line 503, @0x0000000002c992d0, libserver.so)  // inlines: ~CDOTA_Ability_Nyx_Assassin_Burrow
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::~CDOTA_Ability_Nyx_Assassin_Burrow(
        CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  this->_vptr_IHandleEntity = &off_45F2D10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::Schema_DynamicBinding  (line 505, @0x0000000002c8bad0, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Burrow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_Burrow::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Burrow::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 505, @0x0000000002c8bae0, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::DestructInstance  (line 505, @0x0000000002c8baf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nyx_Assassin_Burrow>
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::FreeInstance  (line 505, @0x0000000002c8bb10, libserver.so)
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::CanAllocate  (line 505, @0x0000000002c8bb30, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 505, @0x0000000002c8bb40, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Burrow::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Burrow::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::AllocateInstance  (line 505, @0x0000000002c909a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::ConstructInstance  (line 505, @0x0000000002c95330, libserver.so)  // inlines: CDOTA_Ability_Nyx_Assassin_Burrow, Construct<CDOTA_Ability_Nyx_Assassin_Burrow>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F2D10;
  }
  return p;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 505, @0x0000000002ca3010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 505, @0x0000000002ca3030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal  (line 505, @0x0000000002cbbf40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Nyx_Assassin_Burrow"
// globals: `guard variable for'CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass, CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass, __dso_handle, CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo, CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass);
    CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass._vptr_CEntityClass = off_45F2C90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass);
    __cxa_atexit(
      CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nyx_Assassin_BurrowClass != 0 )
    return &CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass;
  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo,
      "CDOTA_Ability_Nyx_Assassin_Burrow",
      "nyx_assassin_burrow",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo);
  }
  CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass.m_pClassInfo = &CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo;
  CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass.m_pBaseClassInfo = CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nyx_Assassin_BurrowClass = &CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass;
  CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClassInfo.m_pClass = &CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass;
  CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nyx_Assassin_BurrowClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nyx_Assassin_Burrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_BurrowClass;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::Spawn  (line 509, @0x0000000002c99930, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTABaseAbility::SetHidden
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::Spawn(
        CDOTA_Ability_Nyx_Assassin_Burrow *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTABaseAbility::SetHidden(this, 1);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::ProcsMagicStick  (line 518, @0x0000000002c8bb50, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::ProcsMagicStick(CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  return 0;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::GetCastPoint  (line 519, @0x0000000002c99780, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCastPoint
// strings: "modifier_nyx_assassin_burrow"
float __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::GetCastPoint(CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) != 0 )
    return 0.0;
  else
    return CDOTABaseAbility::GetCastPoint(this);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::GetAssociatedSecondaryAbilities  (line 520, @0x0000000002c8bb60, libserver.so)
// strings: "nyx_assassin_unburrow"
const char *__fastcall CDOTA_Ability_Nyx_Assassin_Burrow::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  return "nyx_assassin_unburrow";
}


// CDOTA_Ability_Nyx_Assassin_Burrow::YouForgotToImplementOrDeclareServerClass  (line 530, @0x0000000002c1e120, libserver.so)
int __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  return 0;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::GetServerClass  (line 530, @0x0000000002c34ab0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nyx_Assassin_Burrow::GetServerClass(
        CDOTA_Ability_Nyx_Assassin_Burrow *const this)
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


// CDOTA_Ability_Nyx_Assassin_Burrow::OnAbilityPhaseStart  (line 539, @0x0000000002c25350, libserver.so)  // inlines: GetMapDataForSpawnGroup, GetParent, GetSpawnGroupHandle
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, DOTA_EmitSound, CBaseEntity::GetAbsAngles, AngleVectors, CGameSceneNode::GetOwnerEntity, CWorldGameSystem::GetWorldInfoForSpawnGroup, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlForward
// strings: "modifier_nyx_assassin_burrow", "Hero_NyxAssassin.Burrow.In", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow_water.vpcf", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow.vpcf"
bool __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::OnAbilityPhaseStart(CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  __int64 m_mapDataHandle; // r13
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  void (__fastcall *v12)(IDotaMapUtils *, __int64, float, float); // r14
  CGameSceneNode *v13; // rdi
  CBaseEntity *v14; // rax
  vec_t y; // xmm1_4
  CGameSceneNode *v16; // rdi
  CBaseEntity *v17; // rax
  const Vector *AbsOrigin; // rax
  float v19; // xmm0_4
  CGameSceneNode *v20; // rdi
  CBaseEntity *v21; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v23; // rsi
  CGameSceneNode *v24; // rdi
  CBaseEntity *v25; // rax
  const Vector *v26; // rax
  int m_nPhaseStartFXIndex; // r13d
  const Vector *v28; // r12
  CDOTA_ParticleManager *v29; // rax
  int v30; // ebx
  CDOTA_ParticleManager *v31; // rax
  float flWaterHeight; // [rsp+Ch] [rbp-44h]
  float flWaterHeighta; // [rsp+Ch] [rbp-44h]
  float flWaterHeightb; // [rsp+Ch] [rbp-44h]
  Vector vecFwd; // [rsp+10h] [rbp-40h] BYREF
  QAngle angles; // [rsp+20h] [rbp-30h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) == 0 )
  {
    v4 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_NyxAssassin.Burrow.In", v4);
    v5 = CDOTABaseAbility::GetCaster(this);
    angles = *CBaseEntity::GetAbsAngles(v5);
    AngleVectors(&angles, &vecFwd, 0, 0);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    OwnerEntity = 0;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    m_pEntity = OwnerEntity->m_pEntity;
    if ( m_pEntity != 0 )
      m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    m_mapDataHandle = -1;
    WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, m_hSpawnGroup);
    if ( WorldInfoForSpawnGroup != 0 )
      m_mapDataHandle = WorldInfoForSpawnGroup->m_mapDataHandle;
    v12 = *(*g_pDotaMapUtils + 136LL);
    v13 = this->m_pGameSceneNode->m_pParent;
    v14 = 0;
    if ( v13 != 0 )
      v14 = CGameSceneNode::GetOwnerEntity(v13);
    y = CBaseEntity::GetAbsOrigin(v14)->y;
    v16 = this->m_pGameSceneNode->m_pParent;
    v17 = 0;
    if ( v16 != 0 )
    {
      flWaterHeight = y;
      v17 = CGameSceneNode::GetOwnerEntity(v16);
      y = flWaterHeight;
    }
    flWaterHeighta = y;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
    v12(g_pDotaMapUtils, m_mapDataHandle, AbsOrigin->x, flWaterHeighta);
    v20 = this->m_pGameSceneNode->m_pParent;
    v21 = 0;
    if ( v20 != 0 )
    {
      flWaterHeightb = v19;
      v21 = CGameSceneNode::GetOwnerEntity(v20);
      v19 = flWaterHeightb;
    }
    if ( (v19 - 12.0) <= CBaseEntity::GetAbsOrigin(v21)->z )
    {
      ParticleManager = GetParticleManager();
      v23 = "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow.vpcf";
    }
    else
    {
      ParticleManager = GetParticleManager();
      v23 = "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow_water.vpcf";
    }
    this->m_nPhaseStartFXIndex = CDOTA_ParticleManager::CreateParticle(ParticleManager, v23, 2, 0, 0, 0);
    v24 = this->m_pGameSceneNode->m_pParent;
    v25 = 0;
    if ( v24 != 0 )
      v25 = CGameSceneNode::GetOwnerEntity(v24);
    v26 = CBaseEntity::GetAbsOrigin(v25);
    m_nPhaseStartFXIndex = this->m_nPhaseStartFXIndex;
    v28 = v26;
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v29, m_nPhaseStartFXIndex, 0, *&v28->x, v28->z);
    v30 = this->m_nPhaseStartFXIndex;
    v31 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlForward(v31, v30, 0, *&vecFwd.x, vecFwd.z);
  }
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_Burrow::OnSpellStart  (line 573, @0x0000000002c2bd30, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::SwapAbilities, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam (20 total)
// strings: "modifier_nyx_assassin_burrow", "nyx_assassin_unburrow", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow_inground.vpcf"
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::OnSpellStart(CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // r14
  int m_nSpellStartFXIndex; // ebx
  CDOTA_ParticleManager *v15; // rax
  KeyValues kv; // [rsp+0h] [rbp-180h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+20h] [rbp-160h] BYREF
  unsigned __int64 v18; // [rsp+158h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_nyx_assassin_burrow");
    v3 = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, v3, this, "modifier_nyx_assassin_burrow", &kv, 0);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v5, "nyx_assassin_burrow", "nyx_assassin_unburrow", 0, 1);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    v6 = CDOTABaseAbility::GetCaster(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v6);
    GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
    CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
    v9 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filter, v9);
    v10 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    this->m_nSpellStartFXIndex = CDOTA_ParticleManager::CreateParticle(
                                   ParticleManager,
                                   "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow_inground.vpcf",
                                   1,
                                   v10,
                                   &filter,
                                   0);
    v12 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
    m_nSpellStartFXIndex = this->m_nSpellStartFXIndex;
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v15, m_nSpellStartFXIndex, 0, *&AbsOrigin->x, AbsOrigin->z);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Nyx_Assassin_Burrow::OnAbilityPhaseInterrupted  (line 595, @0x0000000002c20420, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::StopSound, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
// strings: "Hero_NyxAssassin.Burrow.In"
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  CDOTA_Ability_Nyx_Assassin_Burrow *v1; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax

  v1 = this;
  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_NyxAssassin.Burrow.In");
  LODWORD(v1) = v1->m_nPhaseStartFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v1, 0);
}


// CDOTA_Ability_Nyx_Assassin_Burrow::OnUnStolen  (line 603, @0x0000000002c217a0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_nyx_assassin_burrow"
void __fastcall CDOTA_Ability_Nyx_Assassin_Burrow::OnUnStolen(CDOTA_Ability_Nyx_Assassin_Burrow *const this)
{
  int m_nSpellStartFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    m_nSpellStartFXIndex = this->m_nSpellStartFXIndex;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nSpellStartFXIndex, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_nyx_assassin_burrow");
  }
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::~CDOTA_Modifier_Nyx_Assassin_Burrow  (line 620, @0x0000000002c91270, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::~CDOTA_Modifier_Nyx_Assassin_Burrow(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::~CDOTA_Modifier_Nyx_Assassin_Burrow  (line 620, @0x0000000002c91290, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Nyx_Assassin_Burrow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::~CDOTA_Modifier_Nyx_Assassin_Burrow(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::OnCreated  (line 654, @0x0000000002c71fd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_Invisible::OnCreated
// strings: "health_regen_rate", "mana_regen_rate"
void __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::OnCreated(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->health_regen_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "health_regen_rate", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->mana_regen_rate = 0.0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->health_regen_rate = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->mana_regen_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "mana_regen_rate", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_4:
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_reduction", -1, 0);
    CDOTA_Modifier_Invisible::OnCreated(this, pKV);
    return;
  }
LABEL_7:
  this->damage_reduction = 0;
  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::DeclareFunctions  (line 665, @0x0000000002c1e130, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierPersistentInvisibility(CModifierParams const&), CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierHealthRegenPercentage(CModifierParams const&), CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierTotalManaRegenPercentage(CModifierParams const&), CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierIncomingDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_Nyx_Assassin_Burrow::ModelScale(CModifierParams const&), CDOTA_Modifier_Nyx_Assassin_Burrow::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::DeclareFunctions(CDOTA_Modifier_Nyx_Assassin_Burrow *const this)
{
  this->m_Functions[10].__pfn = CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierPersistentInvisibility;
  this->m_Functions[10].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[57].__pfn = CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierHealthRegenPercentage;
  this->m_Functions[55].__pfn = CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierTotalManaRegenPercentage;
  this->m_Functions[36].__pfn = CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierIncomingDamage_Percentage;
  this->m_Functions[152].__pfn = CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierModelChange;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Nyx_Assassin_Burrow::ModelScale;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 713);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[57].__delta = 0;
  this->m_Functions[55].__delta = 0;
  this->m_Functions[36].__delta = 0;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Nyx_Assassin_Burrow::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierModelChange  (line 695, @0x0000000002c1e220, libserver.so)
// strings: "models/heroes/nerubian_assassin/mound.vmdl"
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierModelChange(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "models/heroes/nerubian_assassin/mound.vmdl";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierIncomingDamage_Percentage  (line 702, @0x0000000002c25ee0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( (params->nDamageflags & 0x20) == 0 )
  {
    *v2.m128i_i32 = -this->damage_reduction;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::CheckState  (line 716, @0x0000000002c258d0, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::CheckState(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 3uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFFCLL;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::ModelScale  (line 726, @0x0000000002c1e240, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::ModelScale(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  return 0x4120000000000001uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierHealthRegenPercentage  (line 733, @0x0000000002c1e260, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierHealthRegenPercentage(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->health_regen_rate) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierTotalManaRegenPercentage  (line 740, @0x0000000002c1e280, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierTotalManaRegenPercentage(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->mana_regen_rate) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::OnAttack  (line 748, @0x0000000002c1e2a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::OnAttack(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::OnAbilityExecuted  (line 756, @0x0000000002c1e2b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::OnAbilityExecuted(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierPersistentInvisibility  (line 764, @0x0000000002c1e2c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::GetModifierPersistentInvisibility(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::OnBreakInvisibility  (line 771, @0x0000000002c1e2e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::OnBreakInvisibility(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Burrow::OnDeath  (line 779, @0x0000000002c2d950, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::FindAbilityByName, __dynamic_cast, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
// strings: "nyx_assassin_unburrow"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Ability_Nyx_Assassin_Burrow
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Burrow::OnDeath(
        CDOTA_Modifier_Nyx_Assassin_Burrow *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *AbilityByName; // rax
  _DWORD *v11; // rax
  int v12; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

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
  {
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(Caster, "nyx_assassin_burrow", "nyx_assassin_unburrow", 1, 0);
    v9 = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v9, "nyx_assassin_burrow", 0);
    if ( AbilityByName != 0 )
    {
      v11 = __dynamic_cast(
              AbilityByName,
              &`typeinfo for'CDOTABaseAbility,
              &`typeinfo for'CDOTA_Ability_Nyx_Assassin_Burrow,
              0);
      if ( v11 != 0 )
      {
        v12 = v11[228];
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v12, 0);
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::~CDOTA_Ability_Nyx_Assassin_Unburrow  (line 803, @0x0000000002c99300, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::~CDOTA_Ability_Nyx_Assassin_Unburrow(
        CDOTA_Ability_Nyx_Assassin_Unburrow *const this)
{
  this->_vptr_IHandleEntity = &off_45F3B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::~CDOTA_Ability_Nyx_Assassin_Unburrow  (line 803, @0x0000000002c99320, libserver.so)  // inlines: ~CDOTA_Ability_Nyx_Assassin_Unburrow
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::~CDOTA_Ability_Nyx_Assassin_Unburrow(
        CDOTA_Ability_Nyx_Assassin_Unburrow *const this)
{
  this->_vptr_IHandleEntity = &off_45F3B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::Schema_DynamicBinding  (line 805, @0x0000000002c8bb70, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Unburrow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_Unburrow *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Unburrow::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 805, @0x0000000002c8bb80, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::DestructInstance  (line 805, @0x0000000002c8bb90, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nyx_Assassin_Unburrow>
void __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::FreeInstance  (line 805, @0x0000000002c8bbb0, libserver.so)
void __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::CanAllocate  (line 805, @0x0000000002c8bbd0, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 805, @0x0000000002c8bbe0, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Unburrow::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Unburrow::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::AllocateInstance  (line 805, @0x0000000002c909e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::ConstructInstance  (line 805, @0x0000000002c95360, libserver.so)  // inlines: CDOTA_Ability_Nyx_Assassin_Unburrow, Construct<CDOTA_Ability_Nyx_Assassin_Unburrow>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F3B50;
  }
  return p;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 805, @0x0000000002ca3060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 805, @0x0000000002ca3080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal  (line 805, @0x0000000002cbc090, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "nyx_assassin_unburrow", "CDOTA_Ability_Nyx_Assassin_Unburrow"
// globals: `guard variable for'CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass, CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass, __dso_handle, CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo, CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass);
    CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass._vptr_CEntityClass = off_45F3AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass);
    __cxa_atexit(
      CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nyx_Assassin_UnburrowClass != 0 )
    return &CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass;
  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo,
      "CDOTA_Ability_Nyx_Assassin_Unburrow",
      "nyx_assassin_unburrow",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo);
  }
  CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass.m_pClassInfo = &CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo;
  CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass.m_pBaseClassInfo = CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nyx_Assassin_UnburrowClass = &CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass;
  CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClassInfo.m_pClass = &CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass;
  CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nyx_Assassin_UnburrowClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nyx_Assassin_Unburrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_UnburrowClass;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::ProcsMagicStick  (line 809, @0x0000000002c8bbf0, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::ProcsMagicStick(CDOTA_Ability_Nyx_Assassin_Unburrow *const this)
{
  return 0;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::GetAssociatedPrimaryAbilities  (line 811, @0x0000000002c8bc00, libserver.so)
const char *__fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Nyx_Assassin_Unburrow *const this)
{
  return "nyx_assassin_burrow";
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::IsHiddenWhenStolen  (line 812, @0x0000000002c8bc10, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::IsHiddenWhenStolen(
        CDOTA_Ability_Nyx_Assassin_Unburrow *const this)
{
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_Unburrow::OnSpellStart  (line 819, @0x0000000002c255b0, libserver.so)  // inlines: GetMapDataForSpawnGroup, GetParent, GetSpawnGroupHandle
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, __dynamic_cast, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::StartGesture, CGameSceneNode::GetOwnerEntity, CWorldGameSystem::GetWorldInfoForSpawnGroup, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (15 total)
// strings: "modifier_nyx_assassin_burrow", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow_exit_water.vpcf", "Hero_NyxAssassin.Burrow.Out.River", "nyx_assassin_unburrow", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow_exit.vpcf", "Hero_NyxAssassin.Burrow.Out"
// globals: `typeinfo for'CDOTA_Ability_Nyx_Assassin_Burrow
void __fastcall CDOTA_Ability_Nyx_Assassin_Unburrow::OnSpellStart(CDOTA_Ability_Nyx_Assassin_Unburrow *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  _DWORD *v4; // rax
  int v5; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  __int64 m_mapDataHandle; // r13
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  void (__fastcall *v15)(IDotaMapUtils *, __int64, float, float); // r14
  CGameSceneNode *v16; // rdi
  CBaseEntity *v17; // rax
  vec_t y; // xmm1_4
  CGameSceneNode *v19; // rdi
  CBaseEntity *v20; // rax
  const Vector *AbsOrigin; // rax
  float v22; // xmm0_4
  CGameSceneNode *v23; // rdi
  CBaseEntity *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  int v26; // r12d
  CGameSceneNode *v27; // rdi
  CBaseEntity *v28; // rax
  const Vector *v29; // r13
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  int Particle; // r12d
  CGameSceneNode *v36; // rdi
  CBaseEntity *v37; // rax
  const Vector *v38; // r13
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  float flWaterHeight; // [rsp+Ch] [rbp-24h]
  float flWaterHeighta; // [rsp+Ch] [rbp-24h]
  float flWaterHeightb; // [rsp+Ch] [rbp-24h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "nyx_assassin_burrow", 0);
  if ( AbilityByName != 0 )
    v4 = __dynamic_cast(
           AbilityByName,
           &`typeinfo for'CDOTABaseAbility,
           &`typeinfo for'CDOTA_Ability_Nyx_Assassin_Burrow,
           0);
  else
    v4 = 0;
  v5 = v4[228];
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v5, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v7, "modifier_nyx_assassin_burrow");
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v8, 1702, 0.1, 0.1, 9, 0, 1.0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  OwnerEntity = 0;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  m_pEntity = OwnerEntity->m_pEntity;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  else
    m_hSpawnGroup = 0;
  m_mapDataHandle = -1;
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, m_hSpawnGroup);
  if ( WorldInfoForSpawnGroup != 0 )
    m_mapDataHandle = WorldInfoForSpawnGroup->m_mapDataHandle;
  v15 = *(*g_pDotaMapUtils + 136LL);
  v16 = this->m_pGameSceneNode->m_pParent;
  v17 = 0;
  if ( v16 != 0 )
    v17 = CGameSceneNode::GetOwnerEntity(v16);
  y = CBaseEntity::GetAbsOrigin(v17)->y;
  v19 = this->m_pGameSceneNode->m_pParent;
  v20 = 0;
  if ( v19 != 0 )
  {
    flWaterHeight = y;
    v20 = CGameSceneNode::GetOwnerEntity(v19);
    y = flWaterHeight;
  }
  flWaterHeighta = y;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
  v15(g_pDotaMapUtils, m_mapDataHandle, AbsOrigin->x, flWaterHeighta);
  v23 = this->m_pGameSceneNode->m_pParent;
  v24 = 0;
  if ( v23 != 0 )
  {
    flWaterHeightb = v22;
    v24 = CGameSceneNode::GetOwnerEntity(v23);
    v22 = flWaterHeightb;
  }
  if ( (v22 - 12.0) <= CBaseEntity::GetAbsOrigin(v24)->z )
  {
    v34 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v34,
                 "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow_exit.vpcf",
                 2,
                 0,
                 0,
                 0);
    v36 = this->m_pGameSceneNode->m_pParent;
    v37 = 0;
    if ( v36 != 0 )
      v37 = CGameSceneNode::GetOwnerEntity(v36);
    v38 = CBaseEntity::GetAbsOrigin(v37);
    v39 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v39, Particle, 0, *&v38->x, v38->z);
    v40 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v40, Particle);
    v41 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_NyxAssassin.Burrow.Out", v41);
  }
  else
  {
    v25 = GetParticleManager();
    v26 = CDOTA_ParticleManager::CreateParticle(
            v25,
            "particles/units/heroes/hero_nyx_assassin/nyx_assassin_burrow_exit_water.vpcf",
            2,
            0,
            0,
            0);
    v27 = this->m_pGameSceneNode->m_pParent;
    v28 = 0;
    if ( v27 != 0 )
      v28 = CGameSceneNode::GetOwnerEntity(v27);
    v29 = CBaseEntity::GetAbsOrigin(v28);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v30, v26, 0, *&v29->x, v29->z);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v31, v26);
    v32 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_NyxAssassin.Burrow.Out.River", v32);
  }
  v33 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v33, "nyx_assassin_burrow", "nyx_assassin_unburrow", 1, 0);
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::~CDOTA_Ability_Nyx_Assassin_SpikedCarapace  (line 859, @0x0000000002c99350, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::~CDOTA_Ability_Nyx_Assassin_SpikedCarapace(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace *const this)
{
  this->_vptr_IHandleEntity = &off_45F4650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::~CDOTA_Ability_Nyx_Assassin_SpikedCarapace  (line 859, @0x0000000002c99370, libserver.so)  // inlines: ~CDOTA_Ability_Nyx_Assassin_SpikedCarapace
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::~CDOTA_Ability_Nyx_Assassin_SpikedCarapace(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace *const this)
{
  this->_vptr_IHandleEntity = &off_45F4650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::Schema_DynamicBinding  (line 861, @0x0000000002c8bc20, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_SpikedCarapace::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_SpikedCarapace *const this)
{
  return CDOTA_Ability_Nyx_Assassin_SpikedCarapace::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 861, @0x0000000002c8bc30, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::DestructInstance  (line 861, @0x0000000002c8bc40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nyx_Assassin_SpikedCarapace>
void __fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::FreeInstance  (line 861, @0x0000000002c8bc60, libserver.so)
void __fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::CanAllocate  (line 861, @0x0000000002c8bc80, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 861, @0x0000000002c8bc90, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_SpikedCarapace::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_SpikedCarapace::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::AllocateInstance  (line 861, @0x0000000002c90a20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::ConstructInstance  (line 861, @0x0000000002c95390, libserver.so)  // inlines: CDOTA_Ability_Nyx_Assassin_SpikedCarapace, Construct<CDOTA_Ability_Nyx_Assassin_SpikedCarapace>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F4650;
  }
  return p;
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 861, @0x0000000002ca30b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 861, @0x0000000002ca30d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal  (line 861, @0x0000000002cc3580, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "nyx_assassin_spiked_carapace", "CDOTA_Ability_Nyx_Assassin_SpikedCarapace"
// globals: `guard variable for'CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass, CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo, CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass) != 0 )
  {
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pClassInfo = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_flags = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pInputs = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_nInputCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pOutputs = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_nOutputCount = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pGameClass = 0;
    CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass._vptr_CEntityClass = off_45F45D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass);
    __cxa_atexit(
      CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass != 0 )
    return &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass;
  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo,
      "CDOTA_Ability_Nyx_Assassin_SpikedCarapace",
      "nyx_assassin_spiked_carapace",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo);
  }
  CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pClassInfo = &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo;
  CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pBaseClassInfo = CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass = &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass;
  CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClassInfo.m_pClass = &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass;
  CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_SpikedCarapaceClass;
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetIntrinsicModifierName  (line 863, @0x0000000002c8bca0, libserver.so)
// strings: "modifier_item_blade_mail"
const char *__fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::GetIntrinsicModifierName(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace *const this)
{
  return "modifier_item_blade_mail";
}


// CDOTA_Ability_Nyx_Assassin_SpikedCarapace::OnSpellStart  (line 868, @0x0000000002c55b70, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "reflect_duration", "modifier_nyx_assassin_spiked_carapace"
void __fastcall CDOTA_Ability_Nyx_Assassin_SpikedCarapace::OnSpellStart(
        CDOTA_Ability_Nyx_Assassin_SpikedCarapace *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "reflect_duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_nyx_assassin_spiked_carapace");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_nyx_assassin_spiked_carapace", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::~CDOTA_Modifier_Nyx_Assassin_SpikedCarapace  (line 889, @0x0000000002cb68e0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::~CDOTA_Modifier_Nyx_Assassin_SpikedCarapace(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this)
{
  this->_vptr_CDOTA_Buff = &off_45F5110;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hProcessedEnemies);
  if ( (this->m_hProcessedEnemies.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hProcessedEnemies.m_Memory),
        (this->m_hProcessedEnemies.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hProcessedEnemies.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::~CDOTA_Modifier_Nyx_Assassin_SpikedCarapace  (line 889, @0x0000000002cb6f10, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Nyx_Assassin_SpikedCarapace, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::~CDOTA_Modifier_Nyx_Assassin_SpikedCarapace(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this)
{
  this->_vptr_CDOTA_Buff = &off_45F5110;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hProcessedEnemies);
  if ( (this->m_hProcessedEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hProcessedEnemies.m_Memory);
    if ( (this->m_hProcessedEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hProcessedEnemies.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::GetEffectName  (line 901, @0x0000000002c8bcb0, libserver.so)
// strings: "particles/units/heroes/hero_nyx_assassin/nyx_assassin_spiked_carapace.vpcf"
const char *__fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::GetEffectName(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this)
{
  return "particles/units/heroes/hero_nyx_assassin/nyx_assassin_spiked_carapace.vpcf";
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::GetEffectAttachType  (line 902, @0x0000000002c8bcc0, libserver.so)
int __fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::GetEffectAttachType(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this)
{
  return 1;
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::StatusEffectPriority  (line 903, @0x0000000002c8bcd0, libserver.so)
int __fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::StatusEffectPriority(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this)
{
  return 30;
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::IsPurgable  (line 904, @0x0000000002c8bce0, libserver.so)
bool __fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::IsPurgable(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this)
{
  return 0;
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::OnCreated  (line 918, @0x0000000002c7b3b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetParent, DOTA_EmitSound, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, DotaRetrieveAbilityValue<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (22 total)
// strings: "Hero_NyxAssassin.SpikedCarapace", "modifier_nyx_assassin_burrow", "burrow_aoe", "modifier_stunned", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_spiked_carapace_hit.vpcf", "Hero_NyxAssassin.SpikedCarapace.Stun"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::OnCreated(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v6; // rax
  __m128i v7; // xmm2
  float v8; // r14d
  CDOTA_BaseNPC *v9; // r13
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // r12
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float v20; // xmm1_4
  CDOTABaseAbility *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v25; // rax
  float stun_duration; // xmm0_4
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CEntityIdentity *m_pEntity; // rax
  int v30; // edx
  __int16 v31; // cx
  __int64 m_Size; // r13
  int v33; // eax
  CHandle<CBaseEntity> *v34; // rax
  int burrow_aoe; // [rsp+3Ch] [rbp-84h] BYREF
  double v36; // [rsp+40h] [rbp-80h]
  float v37; // [rsp+48h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &this->stun_duration, "stun_duration");
  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_NyxAssassin.SpikedCarapace", Parent);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) != 0 )
  {
    v6 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v6, &burrow_aoe, "burrow_aoe");
    *v7.m128i_i32 = burrow_aoe;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    v9 = CDOTA_Buff::GetCaster(this);
    v10 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    v12 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v12->m_iTeamNum.m_Value, AbsOrigin, v9, v8, &entities, 2, 3, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v13 = 0;
      do
      {
        while ( 1 )
        {
          v14 = &entities.m_Memory.m_pMemory[v13];
          m_Index = v14->m_Index;
          if ( v14->m_Index + 2 > 1 )
          {
            v16 = v14->m_Index;
            v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
            if ( v17 != 0 )
            {
              v18 = &v17[v16 & 0x1FF];
              if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
              {
                m_pInstance = v18->m_pInstance;
                if ( v18->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  break;
              }
            }
          }
          if ( entities.m_Size <= ++v13 )
            goto LABEL_20;
        }
        KeyValues::KeyValues(&kv, "modifier_stunned");
        KeyValues::SetFloat(&kv, "duration", v20);
        v21 = CDOTA_Buff::GetAbility(this);
        v22 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v22, v21, "modifier_stunned", &kv, 0);
        v23 = CDOTA_Buff::GetCaster(this);
        ParticleManager = GetParticleManager();
        LODWORD(v23) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_nyx_assassin/nyx_assassin_spiked_carapace_hit.vpcf",
                         1,
                         v23,
                         0,
                         0);
        v25 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v25, v23, 1, m_pInstance, 1, 0, vec3_invalid, 1);
        stun_duration = this->stun_duration;
        v37 = 0.0;
        *&v36 = LODWORD(stun_duration);
        v27 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v27, v23, 2, v36, v37);
        v28 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v28, v23);
        DOTA_EmitSound(10, "Hero_NyxAssassin.SpikedCarapace.Stun", m_pInstance);
        LODWORD(v36) = -1;
        m_pEntity = m_pInstance->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v30 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v31 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v31 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v36) = v31 | LOWORD(v36) & 0x8000;
          LODWORD(v36) = (v30 << 15) | LOWORD(v36) & 0x7FFF;
        }
        m_Size = this->m_hProcessedEnemies.m_Size;
        v33 = this->m_hProcessedEnemies.m_Size;
        if ( m_Size == this->m_hProcessedEnemies.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hProcessedEnemies.m_Memory, 1);
          v33 = this->m_hProcessedEnemies.m_Size;
        }
        this->m_hProcessedEnemies.m_Size = v33 + 1;
        v34 = &this->m_hProcessedEnemies.m_Memory.m_pMemory[m_Size];
        if ( v34 != 0 )
          v34->m_Index = LODWORD(v36);
        KeyValues::~KeyValues(&kv);
        ++v13;
      }
      while ( entities.m_Size > v13 );
    }
LABEL_20:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::DeclareFunctions  (line 956, @0x0000000002c1e2f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::GetModifierAvoidDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::DeclareFunctions(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this)
{
  this->m_Functions[42].__pfn = CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::GetModifierAvoidDamage;
  this->m_Functions[42].__delta = 0;
}


// CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::GetModifierAvoidDamage  (line 963, @0x0000000002c7c290, libserver.so)  // inlines: AddToTail, AttackerNPC, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsOwnedByAnyPlayer, IsValid, LookupEntity, Set, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, ApplyDamage, GetParticleManager (20 total)
// strings: "modifier_stunned", "special_bonus_unique_nyx", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_spiked_carapace_hit.vpcf", "Hero_NyxAssassin.SpikedCarapace.Stun"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_SpikedCarapace::GetModifierAvoidDamage(
        CDOTA_Modifier_Nyx_Assassin_SpikedCarapace *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_iUnitType; // eax
  unsigned __int8 m_Value; // r14
  CEntityIdentity *m_pEntity; // r14
  __int16 v12; // cx
  unsigned __int64 v13; // rax
  float v14; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v19; // xmm0_4
  CDOTABaseAbility *v20; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v22; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  float stun_duration; // xmm0_4
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  __int16 v28; // cx
  int v29; // eax
  __int64 m_Size; // r12
  int v31; // eax
  CHandle<CBaseEntity> *v32; // rax
  float flDamage; // [rsp+Ch] [rbp-64h]
  CHandle<CBaseEntity> src[2]; // [rsp+10h] [rbp-60h] BYREF
  float v35; // [rsp+18h] [rbp-58h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v37 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_5;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    goto LABEL_5;
  if ( !m_pInstance->m_bIsDOTANPC )
    goto LABEL_5;
  m_iUnitType = m_pInstance->m_iUnitType;
  if ( (m_iUnitType & 0x10) != 0
    || (m_iUnitType & 0x193) == 0
    || m_pInstance->m_iIsControllableByPlayer64.m_Value == 0 && (m_iUnitType & 1) == 0 )
  {
    goto LABEL_5;
  }
  if ( (params->nDamageflags & 0x30) != 0 )
    goto LABEL_5;
  m_Value = m_pInstance->m_iTeamNum.m_Value;
  if ( m_Value == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
    goto LABEL_5;
  src[0].m_Index = -1;
  m_pEntity = m_pInstance->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v12 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    src[0].m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_hProcessedEnemies, src) == -1 )
  {
    v13 = m_pInstance->m_nUnitState64.m_Value;
    if ( (v13 & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (v13 & 0x100) == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v14);
      Ability = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, Ability, "modifier_stunned", &kv, 0);
      v17 = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v17, "special_bonus_unique_nyx", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        v19 = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) / 100) + 1.0;
      else
        v19 = 1.0;
      flDamage = v19 * params->fDamage;
      v20 = CDOTA_Buff::GetAbility(this);
      Parent = CDOTA_Buff::GetParent(this);
      ApplyDamage(Parent, m_pInstance, v20, flDamage, 4, 16);
      v22 = CDOTA_Buff::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v22) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_nyx_assassin/nyx_assassin_spiked_carapace_hit.vpcf",
                       1,
                       v22,
                       0,
                       0);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v24, v22, 1, m_pInstance, 1, 0, vec3_invalid, 1);
      stun_duration = this->stun_duration;
      v35 = 0.0;
      *&src[0].m_Index = LODWORD(stun_duration);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v26, v22, 2, *&src[0].m_Index, v35);
      v27 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v27, v22);
      DOTA_EmitSound(10, "Hero_NyxAssassin.SpikedCarapace.Stun", m_pInstance);
      KeyValues::~KeyValues(&kv);
      m_pEntity = m_pInstance->m_pEntity;
    }
    src[0].m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v28 = 0x7FFF;
      v29 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(src[0].m_Index) = v28 | src[0].m_Index & 0x8000;
      src[0].m_Index = (v29 << 15) | src[0].m_Index & 0x7FFF;
    }
    m_Size = this->m_hProcessedEnemies.m_Size;
    v31 = this->m_hProcessedEnemies.m_Size;
    if ( m_Size == this->m_hProcessedEnemies.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hProcessedEnemies.m_Memory, 1);
      v31 = this->m_hProcessedEnemies.m_Size;
    }
    this->m_hProcessedEnemies.m_Size = v31 + 1;
    v32 = &this->m_hProcessedEnemies.m_Memory.m_pMemory[m_Size];
    if ( v32 != 0 )
      v32->m_Index = src[0];
    *&result.m_eType = 0x3F80000000000001LL;
  }
  else
  {
LABEL_5:
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::~CDOTA_Ability_Nyx_Assassin_Vendetta  (line 1015, @0x0000000002c993a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::~CDOTA_Ability_Nyx_Assassin_Vendetta(
        CDOTA_Ability_Nyx_Assassin_Vendetta *const this)
{
  this->_vptr_IHandleEntity = &off_45F5470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::~CDOTA_Ability_Nyx_Assassin_Vendetta  (line 1015, @0x0000000002c993c0, libserver.so)  // inlines: ~CDOTA_Ability_Nyx_Assassin_Vendetta
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::~CDOTA_Ability_Nyx_Assassin_Vendetta(
        CDOTA_Ability_Nyx_Assassin_Vendetta *const this)
{
  this->_vptr_IHandleEntity = &off_45F5470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::Schema_DynamicBinding  (line 1017, @0x0000000002c8bcf0, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Vendetta::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_Vendetta *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Vendetta::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1017, @0x0000000002c8bd00, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::DestructInstance  (line 1017, @0x0000000002c8bd10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nyx_Assassin_Vendetta>
void __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::FreeInstance  (line 1017, @0x0000000002c8bd30, libserver.so)
void __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::CanAllocate  (line 1017, @0x0000000002c8bd50, libserver.so)
bool __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1017, @0x0000000002c8bd60, libserver.so)
// globals: CDOTA_Ability_Nyx_Assassin_Vendetta::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nyx_Assassin_Vendetta::s_pSchemaBinding;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::AllocateInstance  (line 1017, @0x0000000002c90a60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::ConstructInstance  (line 1017, @0x0000000002c953c0, libserver.so)  // inlines: CDOTA_Ability_Nyx_Assassin_Vendetta, Construct<CDOTA_Ability_Nyx_Assassin_Vendetta>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F5470;
  }
  return p;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1017, @0x0000000002ca3100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1017, @0x0000000002ca3120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal  (line 1017, @0x0000000002cc0a70, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "nyx_assassin_vendetta", "CDOTA_Ability_Nyx_Assassin_Vendetta"
// globals: `guard variable for'CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass, CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo, CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass) != 0 )
  {
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pClassInfo = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_flags = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pInputs = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_nInputCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pOutputs = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_nOutputCount = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pGameClass = 0;
    CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass._vptr_CEntityClass = off_45F53F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass);
    __cxa_atexit(
      CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nyx_Assassin_VendettaClass != 0 )
    return &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass;
  if ( `guard variable for'CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo,
      "CDOTA_Ability_Nyx_Assassin_Vendetta",
      "nyx_assassin_vendetta",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo);
  }
  CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pClassInfo = &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo;
  CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pBaseClassInfo = CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nyx_Assassin_VendettaClass = &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass;
  CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClassInfo.m_pClass = &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass;
  CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nyx_Assassin_VendettaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nyx_Assassin_Vendetta::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nyx_Assassin_VendettaClass;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::OnSpellStart  (line 1032, @0x0000000002c569e0, libserver.so)  // inlines: GetParent
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::FindAbilityByName, __dynamic_cast, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::SwapAbilities, CDOTABody::StartAnimation, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat (22 total)
// strings: "modifier_nyx_assassin_burrow", "nyx_assassin_unburrow", "modifier_nyx_assassin_vendetta", "fadetime", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_vendetta_start.vpcf", "Hero_NyxAssassin.Vendetta"
// globals: `typeinfo for'CDOTA_Ability_Nyx_Assassin_Burrow
void __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::OnSpellStart(CDOTA_Ability_Nyx_Assassin_Vendetta *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTABaseAbility *AbilityByName; // rax
  _DWORD *v5; // rax
  int v6; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTABody *v11; // rax
  float v12; // xmm1_4
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  int Particle; // r13d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-28h]

  v25 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nyx_assassin_burrow", 0) != 0 )
    {
      v3 = CDOTABaseAbility::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v3, "nyx_assassin_burrow", 0);
      if ( AbilityByName != 0 )
      {
        v5 = __dynamic_cast(
               AbilityByName,
               &`typeinfo for'CDOTABaseAbility,
               &`typeinfo for'CDOTA_Ability_Nyx_Assassin_Burrow,
               0);
        if ( v5 != 0 )
        {
          v6 = v5[228];
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v6, 0);
        }
      }
      v8 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v8, "modifier_nyx_assassin_burrow");
      v9 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v9, "nyx_assassin_burrow", "nyx_assassin_unburrow", 1, 0);
      v10 = CDOTABaseAbility::GetCaster(this);
      v11 = (*(v10->_vptr_IHandleEntity + 377))(v10);
      CDOTABody::StartAnimation(v11, 0x5DCu, 0, 1.0);
    }
  }
  KeyValues::KeyValues(&kv, "modifier_nyx_assassin_vendetta");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fade_time", -1, 0);
  KeyValues::SetFloat(&kv, "fadetime", v12);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v13);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v15, v14, this, "modifier_nyx_assassin_vendetta", &kv, 0);
  v16 = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               v16,
               "particles/units/heroes/hero_nyx_assassin/nyx_assassin_vendetta_start.vpcf",
               2,
               0,
               0,
               0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v22, Particle);
  v23 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_NyxAssassin.Vendetta", v23);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::OnSaveState  (line 1065, @0x0000000002c23c10, libserver.so)  // inlines: DOTAGameRules, FindModifierByName, GetGameTime
// calls: CDOTABaseAbility::OnSaveState, CDOTABaseAbility::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, KeyValues::SetFloat
// strings: "modifier_nyx_assassin_vendetta", "modifier_nyx_assassin_vendetta_duration"
bool __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::OnSaveState(
        CDOTA_Ability_Nyx_Assassin_Vendetta *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rbx
  CModifieractoryDictionary *v5; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v8; // xmm1_4

  CDOTABaseAbility::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v5, "modifier_nyx_assassin_vendetta");
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                     &Caster->m_ModifierManager,
                     Factory,
                     "modifier_nyx_assassin_vendetta",
                     0);
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v8 = 0.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    KeyValues::SetFloat(pKV, "modifier_nyx_assassin_vendetta_duration", v8);
  }
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::OnLoadState  (line 1082, @0x0000000002c21100, libserver.so)
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetFloat, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_nyx_assassin_vendetta_duration", "modifier_nyx_assassin_vendetta"
bool __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::OnLoadState(
        CDOTA_Ability_Nyx_Assassin_Vendetta *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CDOTABaseAbility::OnLoadState(this, pKV);
  if ( KeyValues::GetFloat(pKV, "modifier_nyx_assassin_vendetta_duration", v4) > 0.0 )
  {
    KeyValues::KeyValues(&kv, "modifier_nyx_assassin_vendetta");
    KeyValues::SetFloat(&kv, "duration", v5);
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, Caster, this, "modifier_nyx_assassin_vendetta", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Ability_Nyx_Assassin_Vendetta::GetAbilityDamageToTargetOverInterval  (line 1101, @0x0000000002c64b00, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Nyx_Assassin_Vendetta::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Nyx_Assassin_Vendetta *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::~CDOTA_Modifier_Nyx_Assassin_Vendetta  (line 1112, @0x0000000002c91220, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::~CDOTA_Modifier_Nyx_Assassin_Vendetta(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::~CDOTA_Modifier_Nyx_Assassin_Vendetta  (line 1112, @0x0000000002c91240, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Nyx_Assassin_Vendetta
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::~CDOTA_Modifier_Nyx_Assassin_Vendetta(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::GetEffectName  (line 1128, @0x0000000002c8bd70, libserver.so)
// strings: "particles/units/heroes/hero_nyx_assassin/nyx_assassin_vendetta_speed.vpcf"
const char *__fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::GetEffectName(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this)
{
  return "particles/units/heroes/hero_nyx_assassin/nyx_assassin_vendetta_speed.vpcf";
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::IsHidden  (line 1130, @0x0000000002c8bd80, libserver.so)
bool __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::IsHidden(CDOTA_Modifier_Nyx_Assassin_Vendetta *const this)
{
  return 0;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::CheckState  (line 1142, @0x0000000002c25900, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::CheckState(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this,
        CDOTABuffState *const buffState)
{
  char v4; // al
  uint64 m_nEnabledStateMask; // rdx
  bool v6; // zf
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  v4 = (*(this->_vptr_CDOTA_Buff + 93))(this);
  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  v6 = v4 == 0;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  if ( !v6 )
  {
    m_nDisabledStateMask &= ~0x2000000uLL;
    m_nEnabledStateMask |= 0x2000000uLL;
  }
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x10000;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFEFFFFLL;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::DeclareFunctions  (line 1156, @0x0000000002c1e310, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nyx_Assassin_Vendetta::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Nyx_Assassin_Vendetta::OnAttacked(CModifierParams const&), CDOTA_Modifier_Nyx_Assassin_Vendetta::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::DeclareFunctions(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Nyx_Assassin_Vendetta::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Nyx_Assassin_Vendetta::OnAttacked;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[130].__pfn = (&stru_10 + 721);
  this->m_Functions[130].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 713);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Nyx_Assassin_Vendetta::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::OnCreated  (line 1170, @0x0000000002c71a00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Modifier_Invisible::OnCreated, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::OnCreated(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movement_speed", -1, 0);
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
  this->movement_speed = 0;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::GetModifierMoveSpeedBonus_Percentage  (line 1180, @0x0000000002c1e3c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::OnAttack  (line 1187, @0x0000000002c1e3e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::OnAttack(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::GetActivityTranslationModifiers  (line 1195, @0x0000000002c1e3f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::GetActivityTranslationModifiers(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "vendetta";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::OnAttacked  (line 1202, @0x0000000002c327b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex, log10, floor (14 total)
// strings: "particles/units/heroes/hero_nyx_assassin/nyx_assassin_vendetta.vpcf", "attach_hitloc", "particles/units/heroes/hero_nyx_assassin/nyx_assassin_vendetta_msg.vpcf", "Hero_NyxAssassin.Vendetta.Crit"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::OnAttacked(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CConcreteEntityList *v10; // rsi
  CEntityIdentity *v11; // rax
  __int64 v12; // rdx
  CEntityIdentity *v13; // rax
  CEntityInstance *v14; // r12
  int m_Id; // eax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_ParticleManager *v20; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  double v24; // xmm0_8
  double v25; // r13
  CDOTA_ParticleManager *v26; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  float flDamage; // [rsp+Ch] [rbp-34h]
  double v33; // [rsp+10h] [rbp-30h]

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->htarget.m_Index;
          v10 = CEntityHandle::gm_pEntityList;
          if ( v9 + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = params->htarget.m_Index & 0x1FF;
              v10 = (8 * v12);
              v13 = &v11[v12];
              if ( v13 != 0 && v9 == v13->m_EHandle.m_Index )
              {
                v14 = v13->m_pInstance;
                if ( v13->m_pInstance != 0
                  && BYTE3(v14[7]._vptr_IHandleEntity) != 0
                  && LOBYTE(v14[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(v14[58]._vptr_IHandleEntity) & 1) == 0 )
                {
                  m_Id = v14[43].m_iszPrivateVScripts.u.m_Id;
                  if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 )
                  {
                    flDamage = this->bonus_damage;
                    Ability = CDOTA_Buff::GetAbility(this);
                    Parent = CDOTA_Buff::GetParent(this);
                    ApplyDamage(Parent, v14, Ability, flDamage, 1, 8);
                    ParticleManager = GetParticleManager();
                    LODWORD(Ability) = CDOTA_ParticleManager::CreateParticle(
                                         ParticleManager,
                                         "particles/units/heroes/hero_nyx_assassin/nyx_assassin_vendetta.vpcf",
                                         2,
                                         0,
                                         0,
                                         0);
                    Caster = CDOTA_Buff::GetCaster(this);
                    v20 = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControlEnt(v20, Ability, 0, Caster, 1, 0, vec3_invalid, 1);
                    AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
                    v22 = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControlEnt(
                      v22,
                      Ability,
                      1,
                      v14,
                      5,
                      "attach_hitloc",
                      *AbsOrigin,
                      1);
                    v23 = GetParticleManager();
                    CDOTA_ParticleManager::ReleaseParticleIndex(v23, Ability);
                    v24 = log10(this->bonus_damage);
                    v25 = floor(v24);
                    v26 = GetParticleManager();
                    LODWORD(v33) = 0;
                    Particle = CDOTA_ParticleManager::CreateParticle(
                                 v26,
                                 "particles/units/heroes/hero_nyx_assassin/nyx_assassin_vendetta_msg.vpcf",
                                 7,
                                 v14,
                                 0,
                                 0);
                    *(&v33 + 1) = this->bonus_damage;
                    v28 = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControl(v28, Particle, 1, v33, 3.0);
                    LODWORD(v33) = 1065353216;
                    *(&v33 + 1) = ((v25 + 1.0) + 1);
                    v29 = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControl(v29, Particle, 2, v33, 0.0);
                    v30 = GetParticleManager();
                    CDOTA_ParticleManager::ReleaseParticleIndex(v30, Particle);
                    v31 = CDOTA_Buff::GetCaster(this);
                    DOTA_EmitSound(10, "Hero_NyxAssassin.Vendetta.Crit", v31);
                  }
                }
              }
            }
          }
          if ( (*(this->_vptr_CDOTA_Buff + 93))(this, v10) != 0 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Nyx_Assassin_Vendetta::OnAbilityExecuted  (line 1235, @0x0000000002c37260, libserver.so)  // inlines: FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, _V_strcmp, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, CDOTA_Buff::Destroy
// strings: "nyx_assassin_spiked_carapace"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Nyx_Assassin_Vendetta::OnAbilityExecuted(
        CDOTA_Modifier_Nyx_Assassin_Vendetta *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *v9; // rbx
  const char **m_Id; // rax
  const char *v11; // rsi

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance
    && (*(this->_vptr_CDOTA_Buff + 93))(this) != 0
    && !params->bIgnoreInvis )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&params->ability);
    if ( CDOTA_Buff::GetAbility(this) == 0
      || v9 == 0
      || (m_Id = v9[18].m_iszPrivateVScripts.u.m_Id) == 0
      || (v11 = *m_Id, *m_Id == 0)
      || v11 != "nyx_assassin_spiked_carapace" && strcmp(v11, "nyx_assassin_spiked_carapace") != 0 )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
  }
  return 1uLL;
}


