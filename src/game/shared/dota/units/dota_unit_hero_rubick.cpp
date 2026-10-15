// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:36
class CDOTA_Unit_Hero_Rubick : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Rubick(CDOTA_Unit_Hero_Rubick &);
	CDOTA_Unit_Hero_Rubick(CDOTA_Unit_Hero_Rubick &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void UpdateOnModelChange(bool);
	virtual bool HasFlyingVision();
	virtual bool ShouldDoFlyHeightVisual();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	CDOTA_Unit_Hero_Rubick();
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Rubick();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[473] UpdateOnModelChange
	// vtable[445] HasFlyingVision
	// vtable[488] ShouldDoFlyHeightVisual
	// vtable[159] ModifyOrAppendCriteria
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:67
class C_CDOTA_Unit_Hero_Rubick_MapInstall {
	C_CDOTA_Unit_Hero_Rubick_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:151
class CDOTA_Ability_Rubick_Telekinesis : public CDOTABaseAbility {
public:

private:

	float m_flStartTime;  // +0x3a8

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
	CDOTA_Ability_Rubick_Telekinesis(CDOTA_Ability_Rubick_Telekinesis &);
	CDOTA_Ability_Rubick_Telekinesis(CDOTA_Ability_Rubick_Telekinesis &);
	CDOTA_Ability_Rubick_Telekinesis();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	void SetLandLocation(const Vector &);
	Vector GetLandLocation();
	void SetStartLocation(const Vector &);
	Vector GetStartLocation();
	void SetStartTime(float);
	float GetStartTime();
	CDOTA_BaseNPC * GetTelekinesisTarget();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Rubick_Telekinesis();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[322] GetStunDuration
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:184
class C_CDOTA_Ability_Rubick_Telekinesis_MapInstall {
	C_CDOTA_Ability_Rubick_Telekinesis_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:249
class CDOTA_Modifier_Rubick_Telekinesis : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_fStartTime;  // +0xbc4
	float m_fTargetHeight;  // +0xbc8
	float m_fCurHeight;  // +0xbcc
	int max_land_distance;  // +0xbe8
	float fall_duration;  // +0xbec
	CDOTA_Modifier_Rubick_Telekinesis();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsPurgeException();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationWeight(const CModifierParams &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Rubick_Telekinesis();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[15] IsPurgeException
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3056
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:503
class CDOTA_Ability_Rubick_TelekinesisLand : public CDOTABaseAbility {
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
	CDOTA_Ability_Rubick_TelekinesisLand(CDOTA_Ability_Rubick_TelekinesisLand &);
	CDOTA_Ability_Rubick_TelekinesisLand(CDOTA_Ability_Rubick_TelekinesisLand &);
	CDOTA_Ability_Rubick_TelekinesisLand();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Rubick_TelekinesisLand();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:520
class C_CDOTA_Ability_Rubick_TelekinesisLand_MapInstall {
	C_CDOTA_Ability_Rubick_TelekinesisLand_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:584
class CDOTA_Ability_Rubick_FadeBolt : public CDOTABaseAbility {
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
	CDOTA_Ability_Rubick_FadeBolt(CDOTA_Ability_Rubick_FadeBolt &);
	CDOTA_Ability_Rubick_FadeBolt(CDOTA_Ability_Rubick_FadeBolt &);
	CDOTA_Ability_Rubick_FadeBolt();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Rubick_FadeBolt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:628
class CDOTA_Modifier_Rubick_FadeBolt : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int damage;  // +0xbac
	int jump_damage_reduction_pct;  // +0xbb0
	float jump_delay;  // +0xbb4
	int m_iCurJumpCount;  // +0xbb8
	CDOTA_Modifier_Rubick_FadeBolt();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Rubick_FadeBolt();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[7] GetAttributes
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:771
class CDOTA_Modifier_Rubick_FadeBoltDebuff : public CDOTA_Buff {
public:

private:

	int hero_attack_damage_reduction;  // +0xba8
	int creep_attack_damage_reduction;  // +0xbac
	CDOTA_Modifier_Rubick_FadeBoltDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Rubick_FadeBoltDebuff();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:819
class CDOTA_Ability_Rubick_NullField : public CDOTABaseAbility {
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
	CDOTA_Ability_Rubick_NullField(CDOTA_Ability_Rubick_NullField &);
	CDOTA_Ability_Rubick_NullField(CDOTA_Ability_Rubick_NullField &);
	CDOTA_Ability_Rubick_NullField();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Rubick_NullField();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:832
class C_CDOTA_Ability_Rubick_NullField_MapInstall {
	C_CDOTA_Ability_Rubick_NullField_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:843
class CDOTA_Modifier_Rubick_NullField : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Rubick_NullField();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Rubick_NullField();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:885
class CDOTA_Modifier_Rubick_NullField_Effect : public CDOTA_Buff {
public:

private:

	int magic_damage_reduction_pct;  // +0xba8
	CDOTA_Modifier_Rubick_NullField_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Rubick_NullField_Effect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:940
class CDOTA_Ability_Rubick_SpellSteal : public CDOTABaseAbility {
	class NetworkVar_m_ActivityModifier {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_fStolenCastPoint {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	EHANDLE m_hStealTarget;  // +0x494
	int m_nFXIndex;  // +0x49c
	typedef CDOTA_Ability_Rubick_SpellSteal ThisClass;

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
	CDOTA_Ability_Rubick_SpellSteal(CDOTA_Ability_Rubick_SpellSteal &);
	CDOTA_Ability_Rubick_SpellSteal(CDOTA_Ability_Rubick_SpellSteal &);
	CDOTA_Ability_Rubick_SpellSteal();
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
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual bool IsReflectable();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	void SetSpellStealAbilityIndex(CDOTABaseAbility *, int, CDOTABaseAbility *);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Rubick_SpellSteal();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[208] IsReflectable
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// vtable[226] GetCastRange
	// vtable[242] GetCooldown
	// sizeof = 1184
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:976
class C_CDOTA_Ability_Rubick_SpellSteal_MapInstall {
	C_CDOTA_Ability_Rubick_SpellSteal_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:1372
class CDOTA_Modifier_Rubick_SpellSteal : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rubick_SpellSteal();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool RemoveOnDeath();
	virtual void DeclareFunctions();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);

private:

	void SetAbilitiesPrivate();
	virtual ~CDOTA_Modifier_Rubick_SpellSteal();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[54] RemoveOnDeath
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:1508
class CDOTA_Ability_Rubick_Empty1 : public CDOTABaseAbility {
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
	CDOTA_Ability_Rubick_Empty1(CDOTA_Ability_Rubick_Empty1 &);
	CDOTA_Ability_Rubick_Empty1(CDOTA_Ability_Rubick_Empty1 &);
	CDOTA_Ability_Rubick_Empty1();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Rubick_Empty1();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:1522
class CDOTA_Ability_Rubick_Empty2 : public CDOTABaseAbility {
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
	CDOTA_Ability_Rubick_Empty2(CDOTA_Ability_Rubick_Empty2 &);
	CDOTA_Ability_Rubick_Empty2(CDOTA_Ability_Rubick_Empty2 &);
	CDOTA_Ability_Rubick_Empty2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Rubick_Empty2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:1536
class CDOTA_Ability_Rubick_Hidden1 : public CDOTABaseAbility {
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
	CDOTA_Ability_Rubick_Hidden1(CDOTA_Ability_Rubick_Hidden1 &);
	CDOTA_Ability_Rubick_Hidden1(CDOTA_Ability_Rubick_Hidden1 &);
	CDOTA_Ability_Rubick_Hidden1();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Rubick_Hidden1();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:1550
class CDOTA_Ability_Rubick_Hidden2 : public CDOTABaseAbility {
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
	CDOTA_Ability_Rubick_Hidden2(CDOTA_Ability_Rubick_Hidden2 &);
	CDOTA_Ability_Rubick_Hidden2(CDOTA_Ability_Rubick_Hidden2 &);
	CDOTA_Ability_Rubick_Hidden2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Rubick_Hidden2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rubick.cpp:1564
class CDOTA_Ability_Rubick_Hidden3 : public CDOTABaseAbility {
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
	CDOTA_Ability_Rubick_Hidden3(CDOTA_Ability_Rubick_Hidden3 &);
	CDOTA_Ability_Rubick_Hidden3(CDOTA_Ability_Rubick_Hidden3 &);
	CDOTA_Ability_Rubick_Hidden3();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Rubick_Hidden3();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Rubick::~CDOTA_Unit_Hero_Rubick  (line 36, @0x0000000002d2cf20, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Rubick::~CDOTA_Unit_Hero_Rubick(CDOTA_Unit_Hero_Rubick *const this)
{
  this->_vptr_IHandleEntity = &off_4612430;
  this->_vptr_INextBotEventResponder = &off_4613410;
  this->_vptr_CObstructionObject = &off_4613740;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Rubick::~CDOTA_Unit_Hero_Rubick  (line 36, @0x0000000002d2cf60, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Rubick
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Rubick::~CDOTA_Unit_Hero_Rubick(CDOTA_Unit_Hero_Rubick *const this)
{
  this->_vptr_IHandleEntity = &off_4612430;
  this->_vptr_INextBotEventResponder = &off_4613410;
  this->_vptr_CObstructionObject = &off_4613740;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Rubick::Schema_DynamicBinding  (line 38, @0x0000000002d1cf60, libserver.so)
// globals: CDOTA_Unit_Hero_Rubick::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Rubick::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Rubick *const this)
{
  return CDOTA_Unit_Hero_Rubick::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 38, @0x0000000002d1cf90, libserver.so)
// globals: CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::DestructInstance  (line 38, @0x0000000002d1cfa0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Rubick>
void __fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::FreeInstance  (line 38, @0x0000000002d1cfc0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::CanAllocate  (line 38, @0x0000000002d1cfe0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 38, @0x0000000002d1cff0, libserver.so)
// globals: CDOTA_Unit_Hero_Rubick::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Rubick::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::AllocateInstance  (line 38, @0x0000000002d24290, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::ConstructInstance  (line 38, @0x0000000002d28740, libserver.so)  // inlines: CDOTA_Unit_Hero_Rubick, Construct<CDOTA_Unit_Hero_Rubick>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4612430;
    *(p + 236) = &off_4613410;
    *(p + 257) = &off_4613740;
  }
  return p;
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002d353f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002d358a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Rubick::GetEntityClassInternal  (line 38, @0x0000000002d4cf70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_rubick", "CDOTA_Unit_Hero_Rubick"
// globals: `guard variable for'CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass, CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass, __dso_handle, CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo, CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Rubick::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass);
    CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass._vptr_CEntityClass = off_46123B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_RubickClass != 0 )
    return &CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo,
      "CDOTA_Unit_Hero_Rubick",
      "npc_dota_hero_rubick",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo);
  }
  CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass.m_pClassInfo = &CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo;
  CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_RubickClass = &CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass;
  CDOTA_Unit_Hero_Rubick::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RubickClassInfo.m_pClass = &CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass;
  CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_RubickClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Rubick::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RubickClass;
}


// CDOTA_Unit_Hero_Rubick::YouForgotToImplementOrDeclareServerClass  (line 67, @0x0000000002cc8d30, libserver.so)
int __fastcall CDOTA_Unit_Hero_Rubick::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Rubick *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Rubick::GetServerClass  (line 67, @0x0000000002cde770, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Rubick::GetServerClass(CDOTA_Unit_Hero_Rubick *const this)
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


// CDOTA_Unit_Hero_Rubick::OnLoadState  (line 76, @0x0000000002ccb900, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "rubick_telekinesis_land", "rubick_telekinesis."
bool __fastcall CDOTA_Unit_Hero_Rubick::OnLoadState(CDOTA_Unit_Hero_Rubick *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "rubick_telekinesis", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "rubick_telekinesis.", "rubick_telekinesis_land", 1, 0);
  return 1;
}


// CDOTA_Unit_Hero_Rubick::HasFlyingVision  (line 93, @0x0000000002cd6ac0, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, HasFlyingVision, InState, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName
// strings: "night_stalker_darkness", "modifier_monkey_king_bounce_perch", "modifier_monkey_king_bounce_leap", "modifier_monkey_king_arc_to_ground"
bool __fastcall CDOTA_Unit_Hero_Rubick::HasFlyingVision(CDOTA_Unit_Hero_Rubick *const this)
{
  float v2; // xmm0_4
  CDOTA_Buff *ModifierByName; // rax

  if ( CDOTA_BaseNPC::HasScepter(this)
    && (LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
     || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
     || (v2 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
     || v2 > 1.0
     || (v2 + 0.0) < 0.25
     || (v2 + 0.0) > 0.75)
    && !this->m_bIsIllusion.m_Value
    && CDOTA_BaseNPC::FindAbilityByName(this, "night_stalker_darkness", 0) != 0 )
  {
    goto LABEL_11;
  }
  if ( CDOTA_BaseNPC::FindAbilityByName(this, "batrider_firefly", 0) != 0
    || CDOTA_BaseNPC::FindModifierByName(this, "modifier_monkey_king_bounce_perch", 0) != 0
    || CDOTA_BaseNPC::FindModifierByName(this, "modifier_monkey_king_bounce_leap", 0) != 0
    || (ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_monkey_king_arc_to_ground", 0)) != 0 )
  {
    if ( (this->m_iMoveCapabilities & 2) != 0 )
    {
LABEL_11:
      LOBYTE(ModifierByName) = 1;
      return ModifierByName;
    }
    LOBYTE(ModifierByName) = (this->m_nUnitState64.m_Value & 0x1000000) != 0;
  }
  return ModifierByName;
}


// CDOTA_Unit_Hero_Rubick::ShouldDoFlyHeightVisual  (line 109, @0x0000000002cd7140, libserver.so)  // inlines: FindModifierByName
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
// strings: "modifier_batrider_firefly"
bool __fastcall CDOTA_Unit_Hero_Rubick::ShouldDoFlyHeightVisual(CDOTA_Unit_Hero_Rubick *const this)
{
  CModifieractoryDictionary *v2; // rax
  IModifierFactory *Factory; // rax

  v2 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v2, "modifier_batrider_firefly");
  return CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, Factory, "modifier_batrider_firefly", 0) != 0;
}


// CDOTA_Unit_Hero_Rubick::UpdateOnModelChange  (line 114, @0x0000000002cc8d40, libserver.so)
void __fastcall CDOTA_Unit_Hero_Rubick::UpdateOnModelChange(CDOTA_Unit_Hero_Rubick *const this, bool bOriginalModel)
{
  ;
}


// CDOTA_Ability_Rubick_Telekinesis::~CDOTA_Ability_Rubick_Telekinesis  (line 151, @0x0000000002d2b730, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_Telekinesis::~CDOTA_Ability_Rubick_Telekinesis(
        CDOTA_Ability_Rubick_Telekinesis *const this)
{
  this->_vptr_IHandleEntity = &off_4613810;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_Telekinesis::~CDOTA_Ability_Rubick_Telekinesis  (line 151, @0x0000000002d2b750, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_Telekinesis
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_Telekinesis::~CDOTA_Ability_Rubick_Telekinesis(
        CDOTA_Ability_Rubick_Telekinesis *const this)
{
  this->_vptr_IHandleEntity = &off_4613810;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_Telekinesis::Schema_DynamicBinding  (line 153, @0x0000000002d1d000, libserver.so)
// globals: CDOTA_Ability_Rubick_Telekinesis::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Telekinesis::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Telekinesis *const this)
{
  return CDOTA_Ability_Rubick_Telekinesis::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 153, @0x0000000002d1d010, libserver.so)
// globals: CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::DestructInstance  (line 153, @0x0000000002d1d020, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_Telekinesis>
void __fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::FreeInstance  (line 153, @0x0000000002d1d040, libserver.so)
void __fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::CanAllocate  (line 153, @0x0000000002d1d060, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 153, @0x0000000002d1d070, libserver.so)
// globals: CDOTA_Ability_Rubick_Telekinesis::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Telekinesis::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::AllocateInstance  (line 153, @0x0000000002d242d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::ConstructInstance  (line 153, @0x0000000002d28d80, libserver.so)  // inlines: CDOTA_Ability_Rubick_Telekinesis, Construct<CDOTA_Ability_Rubick_Telekinesis>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4613810;
  }
  return p;
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002d33b40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002d33b60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal  (line 153, @0x0000000002d478d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Rubick_Telekinesis"
// globals: `guard variable for'CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass, CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass, __dso_handle, CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo, CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass);
    CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass._vptr_CEntityClass = off_4613790;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass);
    __cxa_atexit(
      CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_TelekinesisClass != 0 )
    return &CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass;
  if ( `guard variable for'CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo,
      "CDOTA_Ability_Rubick_Telekinesis",
      "rubick_telekinesis",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo);
  }
  CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass.m_pClassInfo = &CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo;
  CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass.m_pBaseClassInfo = CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_TelekinesisClass = &CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass;
  CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClassInfo.m_pClass = &CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass;
  CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_TelekinesisClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_Telekinesis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisClass;
}


// CDOTA_Ability_Rubick_Telekinesis::GetCustomCastError  (line 172, @0x0000000002d1d080, libserver.so)
// strings: "#dota_hud_error_telekinesis"
const char *__fastcall CDOTA_Ability_Rubick_Telekinesis::GetCustomCastError(
        CDOTA_Ability_Rubick_Telekinesis *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_telekinesis";
}


// CDOTA_Ability_Rubick_Telekinesis::YouForgotToImplementOrDeclareServerClass  (line 184, @0x0000000002cc8d50, libserver.so)
int __fastcall CDOTA_Ability_Rubick_Telekinesis::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Rubick_Telekinesis *const this)
{
  return 0;
}


// CDOTA_Ability_Rubick_Telekinesis::GetServerClass  (line 184, @0x0000000002cde970, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Rubick_Telekinesis::GetServerClass(CDOTA_Ability_Rubick_Telekinesis *const this)
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


// CDOTA_Ability_Rubick_Telekinesis::CastFilterResult  (line 192, @0x0000000002cd7190, libserver.so)  // inlines: FindModifierByName
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CDOTABaseAbility::CastFilterResult
// strings: "modifier_rubick_telekinesis"
int __fastcall CDOTA_Ability_Rubick_Telekinesis::CastFilterResult(
        CDOTA_Ability_Rubick_Telekinesis *const this,
        CDOTA_BaseNPC *pTarget)
{
  CModifieractoryDictionary *v4; // rax
  IModifierFactory *Factory; // rax

  if ( pTarget != 0
    && (v4 = ModifierFactoryDictionary(),
        Factory = CModifieractoryDictionary::FindFactory(v4, "modifier_rubick_telekinesis"),
        CDOTA_ModifierManager::FindModifierByName(
          &pTarget->m_ModifierManager,
          Factory,
          "modifier_rubick_telekinesis",
          0) != 0) )
  {
    return 23;
  }
  else
  {
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
  }
}


// CDOTA_Ability_Rubick_Telekinesis::OnSpellStart  (line 205, @0x0000000002cf6320, libserver.so)  // inlines: DOTAGameRules, FindModifierByName, GetGameTime, GetTeamNumber, InState, IsInvulnerable, SetStartTime, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues (15 total)
// strings: "modifier_rubick_telekinesis", "lift_duration", "modifier_stunned", "Hero_Rubick.Telekinesis.Cast"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Ability_Rubick_Telekinesis::OnSpellStart(CDOTA_Ability_Rubick_Telekinesis *const this)
{
  float v1; // xmm0_4
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v4; // r12
  CModifieractoryDictionary *v5; // rax
  IModifierFactory *Factory; // rax
  unsigned __int8 m_Value; // r13
  float v8; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // [rsp-8h] [rbp-48h] BYREF
  unsigned __int64 kv_16; // [rsp+10h] [rbp-30h] OVERLAPPED

  v1 = 0.0;
  kv_16 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flStartTime = v1;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
  {
    v5 = ModifierFactoryDictionary();
    Factory = CModifieractoryDictionary::FindFactory(v5, "modifier_rubick_telekinesis");
    if ( CDOTA_ModifierManager::FindModifierByName(&v4[4], Factory, "modifier_rubick_telekinesis", 0) == 0 )
    {
      if ( (m_Value = v4->m_iTeamNum.m_Value) == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
        && (v12 = CDOTABaseAbility::GetCaster(this), CDOTA_BaseNPC::HasScepter(v12))
        || (BYTE1(v4[3].m_vecVelocity.m_Value.x) & 2) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v4, this, 1) )
      {
        this->m_pTarget = v4;
        KeyValues::KeyValues(&v13, "modifier_rubick_telekinesis");
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "lift_duration", -1, 0);
        KeyValues::SetFloat(&v13, "duration", v8);
        Caster = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_rubick_telekinesis", &v13, 0);
        v10 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v4, v10, this, "modifier_stunned", &v13, 0);
        v11 = CDOTABaseAbility::GetCaster(this);
        DOTA_EmitSound(10, "Hero_Rubick.Telekinesis.Cast", v11);
        KeyValues::~KeyValues(&v13);
      }
    }
  }
}


// CDOTA_Ability_Rubick_Telekinesis::OnUpgrade  (line 226, @0x0000000002ccf020, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "rubick_telekinesis_land"
void __fastcall CDOTA_Ability_Rubick_Telekinesis::OnUpgrade(CDOTA_Ability_Rubick_Telekinesis *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "rubick_telekinesis_land", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Rubick_Telekinesis::GetStunDuration  (line 240, @0x0000000002cf6510, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "lift_duration"
float __fastcall CDOTA_Ability_Rubick_Telekinesis::GetStunDuration(CDOTA_Ability_Rubick_Telekinesis *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "lift_duration", -1, 0);
}


// CDOTA_Modifier_Rubick_Telekinesis::~CDOTA_Modifier_Rubick_Telekinesis  (line 249, @0x0000000002d282f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::~CDOTA_Modifier_Rubick_Telekinesis(
        CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  this->_vptr_CDOTA_Buff = &off_46142D0;
  this->_vptr_CHorizontalMotionController = &off_46145D8;
  this->_vptr_CVerticalMotionController = &off_4614618;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rubick_Telekinesis::~CDOTA_Modifier_Rubick_Telekinesis  (line 249, @0x0000000002d28320, libserver.so)  // inlines: ~CDOTA_Modifier_Rubick_Telekinesis
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::~CDOTA_Modifier_Rubick_Telekinesis(
        CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  this->_vptr_CDOTA_Buff = &off_46142D0;
  this->_vptr_CHorizontalMotionController = &off_46145D8;
  this->_vptr_CVerticalMotionController = &off_4614618;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rubick_Telekinesis::IsPurgable  (line 263, @0x0000000002d1d090, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_Telekinesis::IsPurgable(CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  return 0;
}


// CDOTA_Modifier_Rubick_Telekinesis::IsPurgeException  (line 264, @0x0000000002d1d0a0, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_Telekinesis::IsPurgeException(CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  return 1;
}


// CDOTA_Modifier_Rubick_Telekinesis::GetPriority  (line 265, @0x0000000002d1d0b0, libserver.so)
int __fastcall CDOTA_Modifier_Rubick_Telekinesis::GetPriority(CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  return 2;
}


// CDOTA_Modifier_Rubick_Telekinesis::IsHorizontalMotionValidToApply  (line 275, @0x0000000002d1d0c0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Rubick_Telekinesis::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Rubick_Telekinesis::IsVerticalMotionValidToApply  (line 276, @0x0000000002d1d0f0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Rubick_Telekinesis::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Rubick_Telekinesis::IsMotionController  (line 278, @0x0000000002d1d120, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_Telekinesis::IsMotionController(CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  return 1;
}


// CDOTA_Modifier_Rubick_Telekinesis::OnCreated  (line 297, @0x0000000002d00420, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>, SetLandLocation, SetStartLocation, Vector, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle (19 total)
// strings: "max_land_distance", "fall_duration", "special_bonus_unique_rubick", "particles/units/heroes/hero_rubick/rubick_telekinesis.vpcf", "Hero_Rubick.Telekinesis.Target", "rubick_telekinesis_land"
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::OnCreated(
        CDOTA_Modifier_Rubick_Telekinesis *const this,
        KeyValues *pKV)
{
  float v2; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTALocomotor *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // r12
  CDOTA_BaseNPC *v20; // rax
  const Vector *AbsOrigin; // rax
  CDOTABaseAbility *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  double v24; // [rsp+10h] [rbp-38h]
  Vector PositionOnGround; // 0:kr00_12.12

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v2;
  this->m_fCurHeight = 0.0;
  this->m_fTargetHeight = 0.0;
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->max_land_distance, "max_land_distance");
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->fall_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "fall_duration", -1, 0);
  else
    this->fall_duration = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_rubick", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->max_land_distance += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v8 = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_rubick/rubick_telekinesis.vpcf",
                      0,
                      Parent,
                      0,
                      v8);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Parent, 1, v11, 1, 0, vec3_invalid, 1);
  *&v24 = COERCE_UNSIGNED_INT((*(this->_vptr_CDOTA_Buff + 31))(this));
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, Parent, 2, v24, 0.0);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v15, &this->CHorizontalMotionController, 0)
    && (v16 = CDOTA_Buff::GetParent(this),
        v17 = (*(v16->_vptr_IHandleEntity + 376))(v16),
        CDOTALocomotor::ApplyVerticalMotionController(v17, &this->CVerticalMotionController, 0)) )
  {
    v18 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_Rubick.Telekinesis.Target", v18);
    v19 = CDOTA_Buff::GetParent(this);
    v20 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
    PositionOnGround = GetPositionOnGround(AbsOrigin, v19);
    this->m_vCurLoc.z = PositionOnGround.z;
    this->m_vStartLoc.z = PositionOnGround.z;
    this->m_vCurLoc.x = PositionOnGround.x;
    this->m_vCurLoc.y = PositionOnGround.y;
    this->m_vStartLoc.x = PositionOnGround.x;
    this->m_vStartLoc.y = PositionOnGround.y;
    v22 = CDOTA_Buff::GetAbility(this);
    v22[1]._vptr_IHandleEntity = *&this->m_vStartLoc.x;
    *&v22[1].m_pEntity = this->m_vStartLoc.z;
    HIDWORD(v22[1].m_pEntity) = LODWORD(this->m_vStartLoc.x);
    v22[1].m_hPrivateScope = *&this->m_vStartLoc.y;
    v23 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v23, "rubick_telekinesis", "rubick_telekinesis_land", 0, 1);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Rubick_Telekinesis::OnDestroy  (line 340, @0x0000000002d0e320, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FindAndRemove, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::SwapAbilities, CDOTA_Buff::GetAbility (27 total)
// strings: "particles/units/heroes/hero_rubick/rubick_telekinesis_land.vpcf", "Hero_Rubick.Telekinesis.Target", "Hero_Rubick.Telekinesis.Target.Land", "rubick_telekinesis_land", "modifier_rubick_telekinesis_stun", "modifier_stunned" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::OnDestroy(CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTALocomotor *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *Ability; // rax
  __m128i v15; // xmm3
  float v16; // ebx
  CDOTA_BaseNPC *v17; // r13
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v23; // cx
  int v24; // eax
  CDOTA_BaseNPC *v25; // rax
  unsigned int v26; // r12d
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm3_4
  __int64 v29; // r12
  int v30; // ebx
  CHandle<CBaseEntity> *v31; // rdx
  uint32 m_Index; // eax
  __int16 v33; // cx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int64 m_Value; // rax
  CDOTABaseAbility *v38; // rax
  float v39; // xmm1_4
  CDOTA_BaseNPC *v40; // rax
  CDOTABaseAbility *pAbility; // [rsp+28h] [rbp-88h]
  CHandle<CBaseEntity> src; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyUnits; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-38h]
  Vector v46; // 0:xmm0_8.8,8:xmm1_4.4

  v45 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_rubick/rubick_telekinesis_land.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  Parent = CDOTA_Buff::GetParent(this);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Caster, 0, Parent, 1, 0, vec3_invalid, 1);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, Caster);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  CDOTALocomotor::RemoveHorizontalMotionController(v8, &this->CHorizontalMotionController);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = (*(v9->_vptr_IHandleEntity + 376))(v9);
  CDOTALocomotor::RemoveVerticalMotionController(v10, &this->CVerticalMotionController);
  v11 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v11, "Hero_Rubick.Telekinesis.Target");
  v12 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Hero_Rubick.Telekinesis.Target.Land", 0.0, 0, 0);
  v13 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v13, "rubick_telekinesis", "rubick_telekinesis_land", 1, 0);
  Ability = CDOTA_Buff::GetAbility(this);
  hNearbyUnits.m_Size = 0;
  *v15.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  hNearbyUnits.m_Memory.m_pMemory = 0;
  hNearbyUnits.m_Memory.m_nAllocationCount = 0;
  hNearbyUnits.m_Memory.m_nGrowSize = 0;
  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
  v17 = CDOTA_Buff::GetParent(this);
  v18 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
  v20 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v20->m_iTeamNum.m_Value, AbsOrigin, v17, v16, &hNearbyUnits, 2, 3, 0, 0, 0);
  v21 = CDOTA_Buff::GetParent(this);
  src.m_Index = -1;
  if ( v21 != 0 )
  {
    m_pEntity = v21->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v23 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v23 & 0x7FFF;
    }
  }
  v24 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&hNearbyUnits, &src);
  if ( v24 != -1 )
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hNearbyUnits, v24);
  v25 = CDOTA_Buff::GetCaster(this);
  v26 = (*(v25->_vptr_IHandleEntity + 414))(v25);
  v27 = CDOTA_Buff::GetParent(this);
  v46 = *CBaseEntity::GetAbsOrigin(v27);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v26, v46, v16, v28);
  if ( hNearbyUnits.m_Size > 0 )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      while ( 1 )
      {
        v31 = &hNearbyUnits.m_Memory.m_pMemory[v29];
        m_Index = hNearbyUnits.m_Memory.m_pMemory[v29].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v33 = v31->m_Index;
          v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v31->m_Index) >> 9) & 0x3F];
          if ( v34 != 0 )
          {
            v35 = &v34[v33 & 0x1FF];
            if ( v35 != 0 && m_Index == v35->m_EHandle.m_Index )
            {
              m_pInstance = v35->m_pInstance;
              if ( v35->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
              {
                m_Value = m_pInstance->m_nUnitState64.m_Value;
                if ( (m_Value & 0x100) == 0 && (m_Value & 0x200) == 0 )
                  break;
              }
            }
          }
        }
        ++v30;
        ++v29;
        if ( hNearbyUnits.m_Size <= v30 )
          goto LABEL_21;
      }
      KeyValues::KeyValues(&kv, "modifier_rubick_telekinesis_stun");
      v38 = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(v38, "stun_duration", -1, 0);
      KeyValues::SetFloat(&kv, "duration", v39);
      pAbility = CDOTA_Buff::GetAbility(this);
      v40 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v40, pAbility, "modifier_stunned", &kv, 0);
      DOTA_EmitSound(10, "Hero_Rubick.Telekinesis.Stun", m_pInstance);
      ++v30;
      ++v29;
      KeyValues::~KeyValues(&kv);
    }
    while ( hNearbyUnits.m_Size > v30 );
  }
LABEL_21:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyUnits);
}


// CDOTA_Modifier_Rubick_Telekinesis::DeclareFunctions  (line 380, @0x0000000002cc8d60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rubick_Telekinesis::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Rubick_Telekinesis::GetOverrideAnimationWeight(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::DeclareFunctions(CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Rubick_Telekinesis::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[91].__delta = 0;
  this->m_Functions[91].__pfn = CDOTA_Modifier_Rubick_Telekinesis::GetOverrideAnimationWeight;
}


// CDOTA_Modifier_Rubick_Telekinesis::GetOverrideAnimation  (line 388, @0x0000000002cc8da0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Rubick_Telekinesis::GetOverrideAnimation(
        CDOTA_Modifier_Rubick_Telekinesis *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Rubick_Telekinesis::GetOverrideAnimationWeight  (line 395, @0x0000000002cd28e0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Rubick_Telekinesis::GetOverrideAnimationWeight(
        CDOTA_Modifier_Rubick_Telekinesis *const this,
        const CModifierParams *const params)
{
  float v2; // xmm1_4
  float v4; // xmm0_4
  float fall_duration; // xmm1_4
  float v7; // xmm0_4
  float fElapsed; // [rsp+0h] [rbp-1Ch]
  ModifierVariant_t result; // 0:rax.16

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  fElapsed = v2 - this->m_fStartTime;
  (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  if ( fElapsed < 0.2 )
  {
    *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.0099999998, fElapsed / 0.2)) << 32) | 1;
LABEL_5:
    result.m_szVal = 0;
    return result;
  }
  *&result.m_eType = 0x3F80000000000001LL;
  fall_duration = this->fall_duration;
  v7 = (v4 - fElapsed) - 0.1;
  if ( fall_duration <= v7 )
    goto LABEL_5;
  result.m_szVal = 0;
  *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.0099999998, v7 / fall_duration)) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Rubick_Telekinesis::UpdateHorizontalMotion  (line 414, @0x0000000002ccd150, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::UpdateHorizontalMotion(
        CDOTA_Modifier_Rubick_Telekinesis *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  float m_fCurHeight; // xmm0_4
  float y; // xmm2_4
  vec_t v6; // xmm1_4
  Vector v7; // [rsp-10h] [rbp-18h] BYREF

  m_fCurHeight = this->m_fCurHeight;
  y = this->m_vCurLoc.y;
  v7.z = m_fCurHeight + this->m_vCurLoc.z;
  v6 = (0.0 * m_fCurHeight) + this->m_vCurLoc.x;
  v7.y = y + (0.0 * m_fCurHeight);
  v7.x = v6;
  CBaseEntity::SetAbsOrigin(me, &v7);
}


// CDOTA_Modifier_Rubick_Telekinesis::UpdateVerticalMotion  (line 423, @0x0000000002ccf490, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetLandLocation, Max<float>, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CDOTA_Buff::GetAbility, VectorNormalize, CDOTAGamerules::IsPointInBadResultPosition, sin, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::UpdateVerticalMotion(
        CDOTA_Modifier_Rubick_Telekinesis *const this,
        CDOTA_BaseNPC *me,
        float a3,
        double dt)
{
  float v6; // xmm0_4
  float v7; // xmm0_4
  float fall_duration; // r15d
  float *Ability; // rax
  float *v10; // r12
  vec_t v11; // xmm2_4
  vec_t v12; // xmm0_4
  float v13; // xmm0_4
  float max_land_distance; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm10_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  vec_t v24; // xmm3_4
  vec_t v25; // xmm2_4
  vec_t v26; // xmm0_4
  vec_t v27; // xmm2_4
  bool IsPointInBadResultPosition; // r12
  float v29; // xmm0_4
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  double v35; // xmm0_8
  __m128d v36; // xmm0
  float v37; // xmm7_4
  __m128 v38; // xmm4
  __m128 v39; // xmm0
  float v40; // [rsp+Ch] [rbp-74h]
  float m_fCurHeight; // [rsp+Ch] [rbp-74h]
  float fHeightDeltab; // [rsp+10h] [rbp-70h]
  float fHeightDeltaa; // [rsp+10h] [rbp-70h]
  unsigned int fHeightDeltac; // [rsp+10h] [rbp-70h]
  float fHeightMovement; // [rsp+14h] [rbp-6Ch]
  float fHeightMovementb; // [rsp+14h] [rbp-6Ch]
  float fHeightMovementa; // [rsp+14h] [rbp-6Ch]
  float fHeightMovementc; // [rsp+14h] [rbp-6Ch]
  float fElapsed; // [rsp+18h] [rbp-68h]
  float fElapsedb; // [rsp+18h] [rbp-68h]
  float fElapseda; // [rsp+18h] [rbp-68h]
  Vector vToLandLocation; // [rsp+20h] [rbp-60h] BYREF
  Vector vTestLoc; // [rsp+30h] [rbp-50h] BYREF
  Vector vLocation; // [rsp+40h] [rbp-40h] BYREF

  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v6 = 0.0;
  fElapsed = v6 - this->m_fStartTime;
  v7 = (*(this->_vptr_CDOTA_Buff + 31))(this, fElapsed, dt);
  fall_duration = this->fall_duration;
  fHeightMovement = v7 - fElapsed;
  Ability = CDOTA_Buff::GetAbility(this);
  v10 = Ability;
  if ( fall_duration <= fHeightMovement )
  {
    m_fCurHeight = this->m_fCurHeight;
    v34 = a3 * (this->m_fTargetHeight - m_fCurHeight);
    *&fHeightDeltac = this->m_fTargetHeight - m_fCurHeight;
    fHeightMovementc = v34 * 6.0;
    v35 = sin((fElapsed * 10.0));
    x = this->m_vCurLoc.x;
    y = this->m_vCurLoc.y;
    v36.m128d_f64[0] = v35 * 15.0 + 200.0;
    v37 = _mm_movedup_pd(v36).m128d_f64[0];
    v38.m128_i32[0] = fabs(fHeightMovementc);
    v39 = _mm_cmplt_ss(_mm_and_ps(0x7FFFFFFFu, fHeightDeltac), v38);
    z = this->m_vCurLoc.z;
    this->m_fTargetHeight = v37;
    v33 = COERCE_FLOAT(_mm_andnot_ps(v39, LODWORD(fHeightMovementc)).m128_u32[0] | fHeightDeltac & v39.m128_i32[0])
        + m_fCurHeight;
    this->m_fCurHeight = v33;
  }
  else
  {
    v40 = fHeightMovement;
    this->m_fCurHeight = fmaxf((fHeightMovement / this->fall_duration) * 200.0, 0.0);
    fElapsedb = Ability[231];
    fHeightDeltab = Ability[232];
    v11 = fHeightDeltab - this->m_vStartLoc.y;
    fHeightMovementb = Ability[233];
    v12 = fHeightMovementb - this->m_vStartLoc.z;
    vToLandLocation.x = fElapsedb - this->m_vStartLoc.x;
    vToLandLocation.y = v11;
    vToLandLocation.z = v12;
    v13 = VectorNormalize(&vToLandLocation);
    max_land_distance = this->max_land_distance;
    v15 = fElapsedb;
    v16 = fHeightMovementb;
    v17 = fHeightDeltab;
    v18 = this->m_vStartLoc.x;
    if ( v13 > max_land_distance )
    {
      v20 = this->m_vStartLoc.z;
      v19 = this->m_vStartLoc.y;
      v15 = (vToLandLocation.x * max_land_distance) + v18;
      v17 = (vToLandLocation.y * max_land_distance) + v19;
      v16 = (vToLandLocation.z * max_land_distance) + v20;
    }
    else
    {
      v19 = this->m_vStartLoc.y;
      v20 = this->m_vStartLoc.z;
    }
    fHeightDeltaa = v15;
    v21 = this->m_fCurHeight;
    fHeightMovementa = v17;
    fElapseda = v16;
    v22 = (this->fall_duration - v40) / this->fall_duration;
    vTestLoc.x = (((v15 - v18) * v22) + v18) + (0.0 * v21);
    vTestLoc.y = (((v17 - v19) * v22) + v19) + (0.0 * v21);
    v23 = (v16 - v20) * v22;
    v24 = v10[232];
    v25 = (v23 + v20) + v21;
    v26 = v10[231];
    vTestLoc.z = v25;
    v27 = v10[233];
    vLocation.x = v26;
    vLocation.y = v24;
    vLocation.z = v27;
    IsPointInBadResultPosition = CDOTAGamerules::IsPointInBadResultPosition(g_pGameRules, &vLocation);
    if ( CDOTAGamerules::IsPointInBadResultPosition(g_pGameRules, &vTestLoc) && IsPointInBadResultPosition )
    {
      x = this->m_vCurLoc.x;
      y = this->m_vCurLoc.y;
      z = this->m_vCurLoc.z;
    }
    else
    {
      v29 = (this->fall_duration - v40) / this->fall_duration;
      x = ((fHeightDeltaa - this->m_vStartLoc.x) * v29) + this->m_vStartLoc.x;
      y = ((fHeightMovementa - this->m_vStartLoc.y) * v29) + this->m_vStartLoc.y;
      z = ((fElapseda - this->m_vStartLoc.z) * v29) + this->m_vStartLoc.z;
      this->m_vCurLoc.x = x;
      this->m_vCurLoc.y = y;
      this->m_vCurLoc.z = z;
    }
    v33 = this->m_fCurHeight;
  }
  vLocation.z = z + v33;
  vLocation.x = x + (0.0 * v33);
  vLocation.y = y + (0.0 * v33);
  CBaseEntity::SetAbsOrigin(me, &vLocation);
}


// CDOTA_Modifier_Rubick_Telekinesis::OnHorizontalMotionInterrupted  (line 481, @0x0000000002ccc360, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Rubick_Telekinesis::OnVerticalMotionInterrupted  (line 490, @0x0000000002ccc380, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Rubick_Telekinesis::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Rubick_Telekinesis *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Ability_Rubick_TelekinesisLand::~CDOTA_Ability_Rubick_TelekinesisLand  (line 503, @0x0000000002d2b780, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_TelekinesisLand::~CDOTA_Ability_Rubick_TelekinesisLand(
        CDOTA_Ability_Rubick_TelekinesisLand *const this)
{
  this->_vptr_IHandleEntity = &off_46146D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_TelekinesisLand::~CDOTA_Ability_Rubick_TelekinesisLand  (line 503, @0x0000000002d2b7a0, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_TelekinesisLand
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_TelekinesisLand::~CDOTA_Ability_Rubick_TelekinesisLand(
        CDOTA_Ability_Rubick_TelekinesisLand *const this)
{
  this->_vptr_IHandleEntity = &off_46146D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_TelekinesisLand::Schema_DynamicBinding  (line 505, @0x0000000002d1d130, libserver.so)
// globals: CDOTA_Ability_Rubick_TelekinesisLand::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_TelekinesisLand::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_TelekinesisLand *const this)
{
  return CDOTA_Ability_Rubick_TelekinesisLand::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 505, @0x0000000002d1d140, libserver.so)
// globals: CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::DestructInstance  (line 505, @0x0000000002d1d150, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_TelekinesisLand>
void __fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::FreeInstance  (line 505, @0x0000000002d1d170, libserver.so)
void __fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::CanAllocate  (line 505, @0x0000000002d1d190, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 505, @0x0000000002d1d1a0, libserver.so)
// globals: CDOTA_Ability_Rubick_TelekinesisLand::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_TelekinesisLand::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::AllocateInstance  (line 505, @0x0000000002d24310, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::ConstructInstance  (line 505, @0x0000000002d28db0, libserver.so)  // inlines: CDOTA_Ability_Rubick_TelekinesisLand, Construct<CDOTA_Ability_Rubick_TelekinesisLand>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46146D0;
  }
  return p;
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 505, @0x0000000002d33b90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 505, @0x0000000002d33bb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal  (line 505, @0x0000000002d4e680, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "rubick_telekinesis_land", "CDOTA_Ability_Rubick_TelekinesisLand"
// globals: `guard variable for'CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass, CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo, CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass) != 0 )
  {
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pClassInfo = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_flags = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pInputs = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_nInputCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pOutputs = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_nOutputCount = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pGameClass = 0;
    CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass._vptr_CEntityClass = off_4614650;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass);
    __cxa_atexit(
      CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_TelekinesisLandClass != 0 )
    return &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass;
  if ( `guard variable for'CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo,
      "CDOTA_Ability_Rubick_TelekinesisLand",
      "rubick_telekinesis_land",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo);
  }
  CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pClassInfo = &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo;
  CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pBaseClassInfo = CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_TelekinesisLandClass = &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass;
  CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClassInfo.m_pClass = &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass;
  CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_TelekinesisLandClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_TelekinesisLand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_TelekinesisLandClass;
}


// CDOTA_Ability_Rubick_TelekinesisLand::ProcsMagicStick  (line 517, @0x0000000002d1d1b0, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_TelekinesisLand::ProcsMagicStick(CDOTA_Ability_Rubick_TelekinesisLand *const this)
{
  return 0;
}


// CDOTA_Ability_Rubick_TelekinesisLand::YouForgotToImplementOrDeclareServerClass  (line 520, @0x0000000002cc8dc0, libserver.so)
int __fastcall CDOTA_Ability_Rubick_TelekinesisLand::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Rubick_TelekinesisLand *const this)
{
  return 0;
}


// CDOTA_Ability_Rubick_TelekinesisLand::GetServerClass  (line 520, @0x0000000002cde6f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Rubick_TelekinesisLand::GetServerClass(
        CDOTA_Ability_Rubick_TelekinesisLand *const this)
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


// CDOTA_Ability_Rubick_TelekinesisLand::OnSpellStart  (line 529, @0x0000000002d03600, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DOTAGameRules, GetGameTime, GetStartLocation, Init, LengthSqr, Ray_t, SetLandLocation, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTAGamerules::DoesRayIntersectBadResultPosition, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam (21 total)
// strings: "max_land_distance", "special_bonus_unique_rubick", "lift_duration", "fall_duration", "particles/units/heroes/hero_rubick/rubick_telekinesis_marker.vpcf"
void __fastcall CDOTA_Ability_Rubick_TelekinesisLand::OnSpellStart(CDOTA_Ability_Rubick_TelekinesisLand *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rbx
  float v4; // r15d
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  int v11; // eax
  __m128i v12; // xmm0
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  unsigned int v16; // xmm6_4
  unsigned int v17; // xmm5_4
  CDOTA_BaseNPC *v18; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  __m128i v28; // xmm1
  float v29; // [rsp+8h] [rbp-238h]
  float v30; // [rsp+Ch] [rbp-234h]
  float v31; // [rsp+10h] [rbp-230h]
  float v32; // [rsp+14h] [rbp-22Ch]
  double v33; // [rsp+18h] [rbp-228h]
  float v34; // [rsp+24h] [rbp-21Ch]
  float v35; // [rsp+28h] [rbp-218h]
  float v36; // [rsp+2Ch] [rbp-214h]
  float fDist; // [rsp+30h] [rbp-210h]
  float v38; // [rsp+34h] [rbp-20Ch]
  double v39; // [rsp+38h] [rbp-208h]
  Vector vToLandLocation; // [rsp+60h] [rbp-1E0h] BYREF
  double v41[2]; // [rsp+70h] [rbp-1D0h]
  Ray_t ray; // [rsp+80h] [rbp-1C0h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+D0h] [rbp-170h] BYREF
  unsigned __int64 v44; // [rsp+208h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v46; // 0:kr14_12.12

  v44 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "rubick_telekinesis", 0);
  if ( AbilityByName != 0 )
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v28.m128i_i32[0] = LODWORD(CursorPosition.z);
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
    v38 = *&AbilityByName[1].m_pEntity;
    v33 = *&CursorPosition.x;
    v39 = *&AbilityByName[1]._vptr_IHandleEntity;
    vToLandLocation.x = CursorPosition.x - *&v39;
    vToLandLocation.y = CursorPosition.y - *(&v39 + 1);
    vToLandLocation.z = v4 - v38;
    fDist = VectorNormalize(&vToLandLocation);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "max_land_distance", -1, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTA_BaseNPC::FindAbilityByName(v6, "special_bonus_unique_rubick", 0);
    v8 = v4 - v38;
    v9 = CursorPosition.y - *(&v39 + 1);
    v10 = CursorPosition.x - *&v39;
    if ( v7 != 0 && v7->m_iLevel.m_Value > 0 )
    {
      v11 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "value", 1, 1);
      v10 = CursorPosition.x - *&v39;
      v9 = CursorPosition.y - *(&v39 + 1);
      LevelSpecialValue += v11;
      v8 = v4 - v38;
    }
    v32 = *&AbilityByName[1].m_iszPrivateVScripts.u.m_Id;
    if ( g_pGameRules != 0 )
      v29 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v29 = 0.0;
    v34 = v8;
    v35 = v9;
    v36 = v10;
    v31 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "lift_duration", -1, 0);
    v30 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "fall_duration", -1, 0);
    *v12.m128i_i32 = LevelSpecialValue;
    v13 = v36;
    v14 = v35;
    v15 = v34;
    if ( fDist > LevelSpecialValue )
    {
      *&v16 = (vToLandLocation.x * *v12.m128i_i32) + *&v39;
      *&v17 = (vToLandLocation.y * *v12.m128i_i32) + *(&v39 + 1);
      *v12.m128i_i32 = (*v12.m128i_i32 * vToLandLocation.z) + v38;
      v33 = COERCE_DOUBLE(__PAIR64__(v17, v16));
      v13 = *&v16 - *&v39;
      v14 = *&v17 - *(&v39 + 1);
      v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
      v15 = *v12.m128i_i32 - v38;
    }
    ray.m_Delta.y = v14;
    ray.m_IsRay = 1;
    ray.m_Delta.z = v15;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 40);
    ray.m_Delta.x = v13;
    *&ray.m_Start.x = v39;
    ray.m_Start.z = v38;
    ray.m_IsSwept = (((v13 * v13) + (v14 * v14)) + (v15 * v15)) != 0.0;
    if ( !CDOTAGamerules::DoesRayIntersectBadResultPosition(g_pGameRules, &ray) )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&filter);
      v18 = CDOTABaseAbility::GetCaster(this);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v18);
      GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
      CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
      v21 = GetGlobalTeam(1);
      CRecipientFilter::AddRecipientsByTeam(&filter, v21);
      v22 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v22) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_rubick/rubick_telekinesis_marker.vpcf",
                       2,
                       0,
                       &filter,
                       v22);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v24, v22, 0, v33, v4);
      *(v41 + 4) = 0.0;
      *v41 = ((v32 - v29) + v31) + v30;
      v25 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v25, v22, 1, v41[0], *&v41[1]);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v26, v22, 2, v39, v38);
      v27 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v27, v22);
      v46 = CDOTABaseAbility::GetCursorPosition(this);
      v41[0] = *&v46.x;
      HIDWORD(AbilityByName[1].m_hPrivateScope.m_hScope) = LODWORD(v46.z);
      *&v41[1] = v46.z;
      HIDWORD(AbilityByName[1].m_pEntity) = LODWORD(v46.x);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      LODWORD(AbilityByName[1].m_hPrivateScope.m_hScope) = HIDWORD(v41[0]);
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CDOTA_Ability_Rubick_FadeBolt::~CDOTA_Ability_Rubick_FadeBolt  (line 584, @0x0000000002d2b7d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_FadeBolt::~CDOTA_Ability_Rubick_FadeBolt(
        CDOTA_Ability_Rubick_FadeBolt *const this)
{
  this->_vptr_IHandleEntity = &off_46151D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_FadeBolt::~CDOTA_Ability_Rubick_FadeBolt  (line 584, @0x0000000002d2b7f0, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_FadeBolt
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_FadeBolt::~CDOTA_Ability_Rubick_FadeBolt(
        CDOTA_Ability_Rubick_FadeBolt *const this)
{
  this->_vptr_IHandleEntity = &off_46151D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_FadeBolt::Schema_DynamicBinding  (line 586, @0x0000000002d1d1c0, libserver.so)
// globals: CDOTA_Ability_Rubick_FadeBolt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_FadeBolt::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_FadeBolt *const this)
{
  return CDOTA_Ability_Rubick_FadeBolt::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 586, @0x0000000002d1d1d0, libserver.so)
// globals: CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::DestructInstance  (line 586, @0x0000000002d1d1e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_FadeBolt>
void __fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::FreeInstance  (line 586, @0x0000000002d1d200, libserver.so)
void __fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::CanAllocate  (line 586, @0x0000000002d1d220, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 586, @0x0000000002d1d230, libserver.so)
// globals: CDOTA_Ability_Rubick_FadeBolt::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_FadeBolt::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::AllocateInstance  (line 586, @0x0000000002d24350, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::ConstructInstance  (line 586, @0x0000000002d28de0, libserver.so)  // inlines: CDOTA_Ability_Rubick_FadeBolt, Construct<CDOTA_Ability_Rubick_FadeBolt>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46151D0;
  }
  return p;
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 586, @0x0000000002d33be0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 586, @0x0000000002d33c00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal  (line 586, @0x0000000002d47a20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Rubick_FadeBolt"
// globals: `guard variable for'CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass, CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass, __dso_handle, CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo, CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass);
    CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass._vptr_CEntityClass = off_4615150;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass);
    __cxa_atexit(
      CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_FadeBoltClass != 0 )
    return &CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass;
  if ( `guard variable for'CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo,
      "CDOTA_Ability_Rubick_FadeBolt",
      "rubick_fade_bolt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo);
  }
  CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass.m_pClassInfo = &CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo;
  CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass.m_pBaseClassInfo = CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_FadeBoltClass = &CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass;
  CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClassInfo.m_pClass = &CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass;
  CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_FadeBoltClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_FadeBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_FadeBoltClass;
}


// CDOTA_Ability_Rubick_FadeBolt::OnSpellStart  (line 598, @0x0000000002cce990, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_rubick_fade_bolt", "Hero_Rubick.FadeBolt.Cast"
void __fastcall CDOTA_Ability_Rubick_FadeBolt::OnSpellStart(CDOTA_Ability_Rubick_FadeBolt *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_rubick_fade_bolt");
    KeyValues::SetPtr(&kv, "target", v3);
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_rubick_fade_bolt", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Rubick.FadeBolt.Cast", v6);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Rubick_FadeBolt::GetAbilityDamageToTargetOverInterval  (line 616, @0x0000000002cfe280, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Rubick_FadeBolt::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Rubick_FadeBolt *const this,
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


// CDOTA_Modifier_Rubick_FadeBolt::~CDOTA_Modifier_Rubick_FadeBolt  (line 628, @0x0000000002d463f0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Rubick_FadeBolt::~CDOTA_Modifier_Rubick_FadeBolt(
        CDOTA_Modifier_Rubick_FadeBolt *const this)
{
  this->_vptr_CDOTA_Buff = &off_4615C90;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Rubick_FadeBolt::~CDOTA_Modifier_Rubick_FadeBolt  (line 628, @0x0000000002d46810, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Rubick_FadeBolt, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Rubick_FadeBolt::~CDOTA_Modifier_Rubick_FadeBolt(
        CDOTA_Modifier_Rubick_FadeBolt *const this)
{
  this->_vptr_CDOTA_Buff = &off_4615C90;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rubick_FadeBolt::IsHidden  (line 633, @0x0000000002d1d240, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_FadeBolt::IsHidden(CDOTA_Modifier_Rubick_FadeBolt *const this)
{
  return 1;
}


// CDOTA_Modifier_Rubick_FadeBolt::IsPurgable  (line 634, @0x0000000002d1d250, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_FadeBolt::IsPurgable(CDOTA_Modifier_Rubick_FadeBolt *const this)
{
  return 0;
}


// CDOTA_Modifier_Rubick_FadeBolt::GetAttributes  (line 639, @0x0000000002d1d260, libserver.so)
int __fastcall CDOTA_Modifier_Rubick_FadeBolt::GetAttributes(CDOTA_Modifier_Rubick_FadeBolt *const this)
{
  return 3;
}


// CDOTA_Modifier_Rubick_FadeBolt::OnCreated  (line 657, @0x0000000002d11d00, libserver.so)  // inlines: AddToTail, AssignTo, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, DotaRetrieveAbilityValue<float>, Element, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GrowMemory, InState, IsInvulnerable, Set, ToDOTABaseNPC, operator=, operator[]
// calls: KeyValues::GetPtr, CDOTA_Buff::Destroy, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::TriggerSpellAbsorb, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt (24 total)
// strings: "jump_delay", "jump_damage_reduction_pct", "particles/units/heroes/hero_rubick/rubick_fade_bolt_head.vpcf", "attach_attack1", "attach_hitloc", "Hero_Rubick.FadeBolt.Target" (7 total)
void __fastcall CDOTA_Modifier_Rubick_FadeBolt::OnCreated(CDOTA_Modifier_Rubick_FadeBolt *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Ptr; // rax
  CDOTA_BaseNPC *v4; // r12
  unsigned __int64 m_Value; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rdi
  CDOTABaseAbility *v10; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *v16; // rax
  const Vector *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTABaseAbility *v20; // r13
  CDOTA_BaseNPC *v21; // rax
  CDOTABaseAbility *v22; // rax
  float v23; // xmm1_4
  CDOTABaseAbility *v24; // r14
  CDOTA_BaseNPC *v25; // rax
  float v26; // xmm1_4
  CEntityIdentity *m_pEntity; // rdx
  __int16 v28; // cx
  __int64 m_Size; // r12
  int v30; // eax
  CHandle<CBaseEntity> *v31; // rax
  double v32; // xmm0_8
  float flDamage; // [rsp+Ch] [rbp-64h]
  int v34; // [rsp+10h] [rbp-60h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  v4 = Ptr;
  if ( Ptr == 0
    || !Ptr->m_bIsDOTANPC
    || Ptr->m_bIsWaitingToSpawn.m_Value
    || ((m_Value = Ptr->m_nUnitState64.m_Value) & 0x100) != 0
    || (m_Value & 0x200) != 0
    || (v6 = CDOTA_Buff::GetAbility(this), CDOTA_BaseNPC::TriggerSpellAbsorb(v4, v6, 1)) )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
    v8 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v8, &this->damage, "damage");
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      this->jump_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "jump_delay", -1, 0);
    else
      this->jump_delay = 0.0;
    v10 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v10, &this->jump_damage_reduction_pct, "jump_damage_reduction_pct");
    this->m_iCurJumpCount = 1;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_rubick/rubick_fade_bolt_head.vpcf",
                 2,
                 0,
                 0,
                 0);
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v15 = CDOTA_Buff::GetCaster(this);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, Particle, 0, v15, 5, "attach_attack1", *AbsOrigin, 1);
    v17 = CBaseEntity::GetAbsOrigin(v4);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v18, Particle, 1, v4, 5, "attach_hitloc", *v17, 1);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
    flDamage = this->damage;
    v20 = CDOTA_Buff::GetAbility(this);
    v21 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v21, v4, v20, flDamage, 2, 0);
    DOTA_EmitSound(10, "Hero_Rubick.FadeBolt.Target", v4);
    KeyValues::KeyValues(&kv, "modifier_rubick_fade_bolt_debuff");
    v22 = CDOTA_Buff::GetAbility(this);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(v22, "duration", -1, 0);
    KeyValues::SetFloat(&kv, "duration", v23);
    v24 = CDOTA_Buff::GetAbility(this);
    v25 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, v25, v24, "modifier_rubick_fade_bolt_debuff", &kv, 0);
    this->m_vCurTargetLoc = *CBaseEntity::GetAbsOrigin(v4);
    if ( !CBaseAnimating::GetAttachment(v4, "attach_hitloc", &this->m_vCurTargetLoc) )
    {
      v32 = (*(v4->_vptr_IHandleEntity + 62))(v4);
      this->m_vCurTargetLoc.z = v26;
      *&this->m_vCurTargetLoc.x = v32;
    }
    v34 = -1;
    m_pEntity = v4->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v28 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v34 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v28 & 0x7FFF;
    }
    m_Size = this->m_hHitEntities.m_Size;
    v30 = this->m_hHitEntities.m_Size;
    if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v30 = this->m_hHitEntities.m_Size;
    }
    this->m_hHitEntities.m_Size = v30 + 1;
    v31 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
    if ( v31 != 0 )
      v31->m_Index = v34;
    CDOTA_Buff::StartIntervalThink(this, this->jump_delay, v26);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Rubick_FadeBolt::OnIntervalThink  (line 703, @0x0000000002d149e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, pow, CDOTA_Buff::GetAbility, ApplyDamage, DOTA_EmitSound, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (26 total)
// strings: "Hero_Rubick.FadeBolt.Target", "modifier_rubick_fade_bolt_debuff", "particles/units/heroes/hero_rubick/rubick_fade_bolt.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Rubick_FadeBolt::OnIntervalThink(CDOTA_Modifier_Rubick_FadeBolt *const this)
{
  __m128i v1; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v5; // rax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  __m128i v12; // xmm4
  float v13; // r14d
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v15; // rax
  CDOTABaseAbility *v16; // rax
  float v17; // xmm1_4
  CDOTABaseAbility *v18; // r15
  CDOTA_BaseNPC *v19; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CEntityIdentity *v24; // rax
  int v25; // edx
  __int16 v26; // cx
  __int64 m_Size; // rbx
  int v28; // eax
  CHandle<CBaseEntity> *v29; // rax
  double v30; // xmm0_8
  vec_t v31; // xmm1_4
  double damage; // [rsp+20h] [rbp-90h]
  CHandle<CBaseEntity> src[2]; // [rsp+30h] [rbp-80h] BYREF
  vec_t v34; // [rsp+38h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-38h]

  hEntities.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  hEntities.m_Memory.m_pMemory = 0;
  v37 = __readfsqword(0x28u);
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, &this->m_vCurTargetLoc, Caster, v3, &hEntities, 2, 19, 384, 1, 0);
  while ( 1 )
  {
    if ( hEntities.m_Size <= 0 )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      goto LABEL_27;
    }
    if ( hEntities.m_Memory.m_pMemory->m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntities.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[hEntities.m_Memory.m_pMemory->m_Index & 0x1FF];
        if ( v7 != 0 && hEntities.m_Memory.m_pMemory->m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            src[0].m_Index = -1;
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v11 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(src[0].m_Index) = v11 | src[0].m_Index & 0x8000;
              src[0].m_Index = (v10 << 15) | src[0].m_Index & 0x7FFF;
            }
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hHitEntities,
                   src) < 0 )
              break;
          }
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, 0);
  }
  damage = this->damage;
  *v12.m128i_i32 = (pow(1.0 - (this->jump_damage_reduction_pct / 100.0), this->m_iCurJumpCount) * damage);
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  Ability = CDOTA_Buff::GetAbility(this);
  v15 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v15, m_pInstance, Ability, v13, 2, 0);
  DOTA_EmitSound(10, "Hero_Rubick.FadeBolt.Target", m_pInstance);
  KeyValues::KeyValues(&kv, "modifier_rubick_fade_bolt_debuff");
  v16 = CDOTA_Buff::GetAbility(this);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(v16, "duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v17);
  v18 = CDOTA_Buff::GetAbility(this);
  v19 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, v18, "modifier_rubick_fade_bolt_debuff", &kv, 0);
  ParticleManager = GetParticleManager();
  LODWORD(v18) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_rubick/rubick_fade_bolt.vpcf",
                   2,
                   m_pInstance,
                   0,
                   0);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, v18, 0, *&this->m_vCurTargetLoc.x, this->m_vCurTargetLoc.z);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v22, v18, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v23, v18);
  if ( !CBaseAnimating::GetAttachment(m_pInstance, "attach_hitloc", &this->m_vCurTargetLoc) )
  {
    v30 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance);
    *&src[0].m_Index = v30;
    v34 = v31;
    this->m_vCurTargetLoc.z = v31;
    this->m_vCurTargetLoc.x = *&v30;
    LODWORD(this->m_vCurTargetLoc.y) = src[1];
  }
  src[0].m_Index = -1;
  v24 = m_pInstance->m_pEntity;
  if ( v24 != 0 )
  {
    v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
    v26 = 0x7FFF;
    if ( v24->m_EHandle.m_Index != -1 )
      v26 = v24->m_EHandle.m_Index & 0x7FFF;
    LOWORD(src[0].m_Index) = v26 | src[0].m_Index & 0x8000;
    src[0].m_Index = (v25 << 15) | src[0].m_Index & 0x7FFF;
  }
  m_Size = this->m_hHitEntities.m_Size;
  v28 = this->m_hHitEntities.m_Size;
  if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
    v28 = this->m_hHitEntities.m_Size;
  }
  this->m_hHitEntities.m_Size = v28 + 1;
  v29 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
  if ( v29 != 0 )
    v29->m_Index = src[0];
  ++this->m_iCurJumpCount;
  KeyValues::~KeyValues(&kv);
LABEL_27:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


// CDOTA_Modifier_Rubick_FadeBoltDebuff::~CDOTA_Modifier_Rubick_FadeBoltDebuff  (line 771, @0x0000000002d282a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rubick_FadeBoltDebuff::~CDOTA_Modifier_Rubick_FadeBoltDebuff(
        CDOTA_Modifier_Rubick_FadeBoltDebuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4615FB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rubick_FadeBoltDebuff::~CDOTA_Modifier_Rubick_FadeBoltDebuff  (line 771, @0x0000000002d282c0, libserver.so)  // inlines: ~CDOTA_Modifier_Rubick_FadeBoltDebuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rubick_FadeBoltDebuff::~CDOTA_Modifier_Rubick_FadeBoltDebuff(
        CDOTA_Modifier_Rubick_FadeBoltDebuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4615FB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rubick_FadeBoltDebuff::GetEffectName  (line 781, @0x0000000002d1d270, libserver.so)
// strings: "particles/units/heroes/hero_rubick/rubick_fade_bolt_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Rubick_FadeBoltDebuff::GetEffectName(
        CDOTA_Modifier_Rubick_FadeBoltDebuff *const this)
{
  return "particles/units/heroes/hero_rubick/rubick_fade_bolt_debuff.vpcf";
}


// CDOTA_Modifier_Rubick_FadeBoltDebuff::OnCreated  (line 793, @0x0000000002d09910, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "hero_attack_damage_reduction", "creep_attack_damage_reduction"
void __fastcall CDOTA_Modifier_Rubick_FadeBoltDebuff::OnCreated(
        CDOTA_Modifier_Rubick_FadeBoltDebuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->hero_attack_damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           Ability,
                                           "hero_attack_damage_reduction",
                                           -1,
                                           0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->creep_attack_damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                              v4,
                                              "creep_attack_damage_reduction",
                                              -1,
                                              0);
      return;
    }
  }
  else
  {
    this->hero_attack_damage_reduction = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->creep_attack_damage_reduction = 0;
}


// CDOTA_Modifier_Rubick_FadeBoltDebuff::DeclareFunctions  (line 801, @0x0000000002cc8dd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rubick_FadeBoltDebuff::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rubick_FadeBoltDebuff::DeclareFunctions(
        CDOTA_Modifier_Rubick_FadeBoltDebuff *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Rubick_FadeBoltDebuff::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Rubick_FadeBoltDebuff::GetModifierPreAttack_BonusDamage  (line 808, @0x0000000002ccc5e0, libserver.so)  // inlines: IsConsideredHero
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Rubick_FadeBoltDebuff::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Rubick_FadeBoltDebuff *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 3) != 0 )
    v4 = -this->hero_attack_damage_reduction;
  else
    v4 = -this->creep_attack_damage_reduction;
  *v3.m128i_i32 = v4;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Rubick_NullField::~CDOTA_Ability_Rubick_NullField  (line 819, @0x0000000002d2b820, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_NullField::~CDOTA_Ability_Rubick_NullField(
        CDOTA_Ability_Rubick_NullField *const this)
{
  this->_vptr_IHandleEntity = &off_4616310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_NullField::~CDOTA_Ability_Rubick_NullField  (line 819, @0x0000000002d2b840, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_NullField
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_NullField::~CDOTA_Ability_Rubick_NullField(
        CDOTA_Ability_Rubick_NullField *const this)
{
  this->_vptr_IHandleEntity = &off_4616310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_NullField::Schema_DynamicBinding  (line 821, @0x0000000002d1d280, libserver.so)
// globals: CDOTA_Ability_Rubick_NullField::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_NullField::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_NullField *const this)
{
  return CDOTA_Ability_Rubick_NullField::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 821, @0x0000000002d1d290, libserver.so)
// globals: CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::DestructInstance  (line 821, @0x0000000002d1d2a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_NullField>
void __fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::FreeInstance  (line 821, @0x0000000002d1d2c0, libserver.so)
void __fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::CanAllocate  (line 821, @0x0000000002d1d2e0, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 821, @0x0000000002d1d2f0, libserver.so)
// globals: CDOTA_Ability_Rubick_NullField::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_NullField::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::AllocateInstance  (line 821, @0x0000000002d24390, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::ConstructInstance  (line 821, @0x0000000002d28e10, libserver.so)  // inlines: CDOTA_Ability_Rubick_NullField, Construct<CDOTA_Ability_Rubick_NullField>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4616310;
  }
  return p;
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 821, @0x0000000002d33c30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 821, @0x0000000002d33c50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_NullField::GetEntityClassInternal  (line 821, @0x0000000002d47b70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Rubick_NullField"
// globals: `guard variable for'CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass, CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass, __dso_handle, CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo, CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_NullField::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass);
    CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass._vptr_CEntityClass = off_4616290;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass);
    __cxa_atexit(
      CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_NullFieldClass != 0 )
    return &CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass;
  if ( `guard variable for'CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo,
      "CDOTA_Ability_Rubick_NullField",
      "rubick_null_field",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo);
  }
  CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass.m_pClassInfo = &CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo;
  CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass.m_pBaseClassInfo = CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_NullFieldClass = &CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass;
  CDOTA_Ability_Rubick_NullField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClassInfo.m_pClass = &CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass;
  CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_NullFieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_NullField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_NullFieldClass;
}


// CDOTA_Ability_Rubick_NullField::GetIntrinsicModifierName  (line 825, @0x0000000002d1d300, libserver.so)
// strings: "modifier_rubick_null_field"
const char *__fastcall CDOTA_Ability_Rubick_NullField::GetIntrinsicModifierName(
        CDOTA_Ability_Rubick_NullField *const this)
{
  return "modifier_rubick_null_field";
}


// CDOTA_Ability_Rubick_NullField::YouForgotToImplementOrDeclareServerClass  (line 832, @0x0000000002cc8df0, libserver.so)
int __fastcall CDOTA_Ability_Rubick_NullField::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Rubick_NullField *const this)
{
  return 0;
}


// CDOTA_Ability_Rubick_NullField::GetServerClass  (line 832, @0x0000000002cde8f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Rubick_NullField::GetServerClass(CDOTA_Ability_Rubick_NullField *const this)
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


// CDOTA_Modifier_Rubick_NullField::~CDOTA_Modifier_Rubick_NullField  (line 843, @0x0000000002d28250, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rubick_NullField::~CDOTA_Modifier_Rubick_NullField(
        CDOTA_Modifier_Rubick_NullField *const this)
{
  this->_vptr_CDOTA_Buff = &off_4616DD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rubick_NullField::~CDOTA_Modifier_Rubick_NullField  (line 843, @0x0000000002d28270, libserver.so)  // inlines: ~CDOTA_Modifier_Rubick_NullField
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rubick_NullField::~CDOTA_Modifier_Rubick_NullField(
        CDOTA_Modifier_Rubick_NullField *const this)
{
  this->_vptr_CDOTA_Buff = &off_4616DD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rubick_NullField::IsAura  (line 851, @0x0000000002d1d310, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_NullField::IsAura(CDOTA_Modifier_Rubick_NullField *const this)
{
  return 1;
}


// CDOTA_Modifier_Rubick_NullField::GetModifierAura  (line 852, @0x0000000002d1d320, libserver.so)
// strings: "modifier_rubick_null_field_effect"
const char *__fastcall CDOTA_Modifier_Rubick_NullField::GetModifierAura(CDOTA_Modifier_Rubick_NullField *const this)
{
  return "modifier_rubick_null_field_effect";
}


// CDOTA_Modifier_Rubick_NullField::GetAuraSearchTeam  (line 854, @0x0000000002d1d330, libserver.so)
int __fastcall CDOTA_Modifier_Rubick_NullField::GetAuraSearchTeam(CDOTA_Modifier_Rubick_NullField *const this)
{
  return 1;
}


// CDOTA_Modifier_Rubick_NullField::GetAuraSearchType  (line 855, @0x0000000002d1d340, libserver.so)
int __fastcall CDOTA_Modifier_Rubick_NullField::GetAuraSearchType(CDOTA_Modifier_Rubick_NullField *const this)
{
  return 19;
}


// CDOTA_Modifier_Rubick_NullField::GetAuraRadius  (line 856, @0x0000000002d1d350, libserver.so)
int __fastcall CDOTA_Modifier_Rubick_NullField::GetAuraRadius(CDOTA_Modifier_Rubick_NullField *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Rubick_NullField::IsHidden  (line 858, @0x0000000002d1d360, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_NullField::IsHidden(CDOTA_Modifier_Rubick_NullField *const this)
{
  return 1;
}


// CDOTA_Modifier_Rubick_NullField::OnCreated  (line 869, @0x0000000002d092e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Rubick_NullField::OnCreated(CDOTA_Modifier_Rubick_NullField *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Rubick_NullField::OnRefresh  (line 876, @0x0000000002d08e00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Rubick_NullField::OnRefresh(CDOTA_Modifier_Rubick_NullField *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Rubick_NullField_Effect::~CDOTA_Modifier_Rubick_NullField_Effect  (line 885, @0x0000000002d28200, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rubick_NullField_Effect::~CDOTA_Modifier_Rubick_NullField_Effect(
        CDOTA_Modifier_Rubick_NullField_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_46170F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rubick_NullField_Effect::~CDOTA_Modifier_Rubick_NullField_Effect  (line 885, @0x0000000002d28220, libserver.so)  // inlines: ~CDOTA_Modifier_Rubick_NullField_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rubick_NullField_Effect::~CDOTA_Modifier_Rubick_NullField_Effect(
        CDOTA_Modifier_Rubick_NullField_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_46170F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rubick_NullField_Effect::OnCreated  (line 905, @0x0000000002d094c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "magic_damage_reduction_pct"
void __fastcall CDOTA_Modifier_Rubick_NullField_Effect::OnCreated(
        CDOTA_Modifier_Rubick_NullField_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->magic_damage_reduction_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "magic_damage_reduction_pct",
                                         -1,
                                         0);
  else
    this->magic_damage_reduction_pct = 0;
}


// CDOTA_Modifier_Rubick_NullField_Effect::OnRefresh  (line 912, @0x0000000002d09400, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "magic_damage_reduction_pct"
void __fastcall CDOTA_Modifier_Rubick_NullField_Effect::OnRefresh(
        CDOTA_Modifier_Rubick_NullField_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->magic_damage_reduction_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "magic_damage_reduction_pct",
                                         -1,
                                         0);
  else
    this->magic_damage_reduction_pct = 0;
}


// CDOTA_Modifier_Rubick_NullField_Effect::DeclareFunctions  (line 919, @0x0000000002cc8e00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rubick_NullField_Effect::GetModifierMagicalResistanceBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rubick_NullField_Effect::DeclareFunctions(
        CDOTA_Modifier_Rubick_NullField_Effect *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Rubick_NullField_Effect::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
}


// CDOTA_Modifier_Rubick_NullField_Effect::GetModifierMagicalResistanceBonus  (line 926, @0x0000000002cd2720, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Rubick_NullField_Effect::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Rubick_NullField_Effect *const this,
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
    *v3.m128i_i32 = this->magic_damage_reduction_pct;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_Rubick_SpellSteal::~CDOTA_Ability_Rubick_SpellSteal  (line 940, @0x0000000002d2b870, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_SpellSteal::~CDOTA_Ability_Rubick_SpellSteal(
        CDOTA_Ability_Rubick_SpellSteal *const this)
{
  this->_vptr_IHandleEntity = &off_4617450;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_SpellSteal::~CDOTA_Ability_Rubick_SpellSteal  (line 940, @0x0000000002d2b890, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_SpellSteal
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_SpellSteal::~CDOTA_Ability_Rubick_SpellSteal(
        CDOTA_Ability_Rubick_SpellSteal *const this)
{
  this->_vptr_IHandleEntity = &off_4617450;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_SpellSteal::Schema_DynamicBinding  (line 942, @0x0000000002d1d370, libserver.so)
// globals: CDOTA_Ability_Rubick_SpellSteal::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_SpellSteal::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_SpellSteal *const this)
{
  return CDOTA_Ability_Rubick_SpellSteal::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 942, @0x0000000002d1d380, libserver.so)
// globals: CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::DestructInstance  (line 942, @0x0000000002d1d390, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_SpellSteal>
void __fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::FreeInstance  (line 942, @0x0000000002d1d3b0, libserver.so)
void __fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::CanAllocate  (line 942, @0x0000000002d1d3d0, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 942, @0x0000000002d1d3e0, libserver.so)
// globals: CDOTA_Ability_Rubick_SpellSteal::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_SpellSteal::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::AllocateInstance  (line 942, @0x0000000002d243d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1184);
  memset(v1, 0, 0x4A0u);
  return v1;
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::ConstructInstance  (line 942, @0x0000000002d29a00, libserver.so)  // inlines: CDOTA_Ability_Rubick_SpellSteal, CEntityHandle, CHandle, CNetworkVarBase, Construct<CDOTA_Ability_Rubick_SpellSteal>, EnsureValidValue<float>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 292) = 0;
    *p = &off_4617450;
    *(p + 293) = -1;
    *(p + 294) = -1;
  }
  return p;
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 942, @0x0000000002d33c80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 942, @0x0000000002d33ca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal  (line 942, @0x0000000002d507a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Rubick_SpellSteal"
// globals: `guard variable for'CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass, CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo, CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass) != 0 )
  {
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pClassInfo = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_flags = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pInputs = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_nInputCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pOutputs = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_nOutputCount = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pGameClass = 0;
    CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass._vptr_CEntityClass = off_46173D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass);
    __cxa_atexit(
      CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_SpellStealClass != 0 )
    return &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass;
  if ( `guard variable for'CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo,
      "CDOTA_Ability_Rubick_SpellSteal",
      "rubick_spell_steal",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo);
  }
  CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pClassInfo = &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo;
  CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pBaseClassInfo = CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_SpellStealClass = &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass;
  CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClassInfo.m_pClass = &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass;
  CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_SpellStealClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_SpellSteal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_SpellStealClass;
}


// CDOTA_Ability_Rubick_SpellSteal::ShouldSpeakAbilityConcept  (line 949, @0x0000000002d1d3f0, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_SpellSteal::ShouldSpeakAbilityConcept(
        CDOTA_Ability_Rubick_SpellSteal *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_Rubick_SpellSteal::IsReflectable  (line 952, @0x0000000002d1d400, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_SpellSteal::IsReflectable(CDOTA_Ability_Rubick_SpellSteal *const this)
{
  return 0;
}


// CDOTA_Ability_Rubick_SpellSteal::GetCastRange  (line 963, @0x0000000002d47000, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Rubick_SpellSteal::GetCastRange(
        CDOTA_Ability_Rubick_SpellSteal *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Rubick_SpellSteal::GetCooldown  (line 964, @0x0000000002d47060, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Rubick_SpellSteal::GetCooldown(CDOTA_Ability_Rubick_SpellSteal *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cooldown_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Rubick_SpellSteal::YouForgotToImplementOrDeclareServerClass  (line 976, @0x0000000002cc8e20, libserver.so)
int __fastcall CDOTA_Ability_Rubick_SpellSteal::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Rubick_SpellSteal *const this)
{
  return 0;
}


// CDOTA_Ability_Rubick_SpellSteal::GetServerClass  (line 976, @0x0000000002cde7f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Rubick_SpellSteal::GetServerClass(CDOTA_Ability_Rubick_SpellSteal *const this)
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


// CDOTA_Ability_Rubick_SpellSteal::OnSpellStart  (line 992, @0x0000000002cfe2e0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLastUsedActiveAbility, GetSerialNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, QueueConcept, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CEntityInstance*, operator!=<CDOTABaseAbility>, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CResponseCriteriaSet::CResponseCriteriaSet, CDOTABaseAbility::GetCastExecuteCriteria, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt (20 total)
// strings: "particles/units/heroes/hero_rubick/rubick_spell_steal.vpcf", "attach_attack1", "Hero_Rubick.SpellSteal.Target", "Hero_Rubick.SpellSteal.Cast", "<NoAbilityName>", "stolenspell"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Rubick_SpellSteal::OnSpellStart(CDOTA_Ability_Rubick_SpellSteal *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rsi
  CEntityIdentity *v6; // rdx
  __int64 v7; // rcx
  CEntityIdentity *v8; // rdx
  int v9; // r13d
  CDOTA_Speech *m_pSpeech; // rdi
  vec_t y; // xmm0_4
  CBaseEntity *v12; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // cx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v16; // rdx
  __int16 v17; // cx
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // rax
  int m_nFXIndex; // r14d
  const Vector *v21; // r13
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // r13
  CDOTA_BaseNPC *v25; // rax
  int v26; // r14d
  const CBaseAnimating *v27; // r15
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CEntityIdentity *v30; // rax
  int v31; // edx
  __int16 v32; // cx
  const char *v33; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  CDOTA_BaseNPC *v38; // rax
  const char **m_Id; // rax
  const char *v40; // rdx
  const char *v41; // rax
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-E0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+50h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+B8h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
  {
    this->m_nFXIndex = -1;
    if ( LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
      && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1)
      && LOBYTE(v3[4].m_pfnMoveDone.__delta) == 0 )
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
      info.pszEffectName = "";
      info.pAbility = this;
      info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
      v12 = CDOTABaseAbility::GetCursorTarget(this);
      if ( v12 != 0 && (m_pEntity = v12->m_pEntity) != 0 )
      {
        v14 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster != 0 && (v16 = Caster->m_pEntity) != 0 )
      {
        v17 = 0x7FFF;
        if ( v16->m_EHandle.m_Index != -1 )
          v17 = v16->m_EHandle.m_Index & 0x7FFF;
        info.hTarget.m_Index = (((v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1)) << 15) | v17 & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      ParticleManager = GetParticleManager();
      this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_rubick/rubick_spell_steal.vpcf",
                           2,
                           0,
                           0,
                           0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      m_nFXIndex = this->m_nFXIndex;
      v21 = AbsOrigin;
      v22 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v22, m_nFXIndex, 0, v3, 1, 0, *v21, 1);
      v23 = CDOTABaseAbility::GetCaster(this);
      v24 = CBaseEntity::GetAbsOrigin(v23);
      v25 = CDOTABaseAbility::GetCaster(this);
      v26 = this->m_nFXIndex;
      v27 = v25;
      v28 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v28, v26, 1, v27, 5, "attach_attack1", *v24, 1);
      *(&criteria._vptr_CResponseCriteriaSet + 4) = 0;
      LODWORD(v24) = this->m_nFXIndex;
      *&criteria._vptr_CResponseCriteriaSet = info.iMoveSpeed;
      v29 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v29, v24, 2, COERCE_DOUBLE(COERCE_UNSIGNED_INT(info.iMoveSpeed)), 0.0);
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      v30 = v3->m_pEntity;
      if ( v30 != 0 )
      {
        v31 = (v30->m_EHandle.m_Index >> 15) - (v30->m_flags & 1);
        v32 = 0x7FFF;
        if ( v30->m_EHandle.m_Index != -1 )
          v32 = v30->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hStealTarget.m_Index) = v32 | this->m_hStealTarget.m_Index & 0x8000;
        this->m_hStealTarget.m_Index = (v31 << 15) | this->m_hStealTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hStealTarget.m_Index = -1;
      }
      v33 = CUtlString::Get(&v3[7].m_OnKilled.m_pConnections);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v3, v33, 0);
      if ( AbilityByName != 0 && (v35 = AbilityByName->m_pEntity) != 0 )
      {
        v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
        v37 = 0x7FFF;
        if ( v35->m_EHandle.m_Index != -1 )
          v37 = v35->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hStealAbility.m_Index) = v37 | this->m_hStealAbility.m_Index & 0x8000;
        this->m_hStealAbility.m_Index = (v36 << 15) | this->m_hStealAbility.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hStealAbility.m_Index = -1;
      }
      DOTA_EmitSound(10, "Hero_Rubick.SpellSteal.Target", v3);
      v38 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Rubick.SpellSteal.Cast", v38);
    }
  }
  else
  {
    this->m_nFXIndex = -1;
  }
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CDOTABaseAbility::GetCastExecuteCriteria(this, &criteria);
    m_Index = this->m_hStealAbility.m_Index;
    v5 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hStealAbility.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = this->m_hStealAbility.m_Index & 0x1FF;
        v5 = (8 * v7);
        v8 = &v6[v7];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        {
          m_Id = v8->m_pInstance[18].m_iszPrivateVScripts.u.m_Id;
          v40 = "<NoAbilityName>";
          if ( m_Id != 0 )
          {
            v41 = *m_Id;
            if ( v41 != 0 )
              v40 = v41;
          }
          CResponseCriteriaSet::AppendCriteria(&criteria, "stolenspell", v40, 1.0);
        }
      }
    }
    v9 = (*(this->_vptr_IHandleEntity + 299))(this, v5);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 4, 0.40000001, &criteria, v9, 1, 0, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
}


// CDOTA_Ability_Rubick_SpellSteal::OnProjectileHit  (line 1037, @0x0000000002d1b0d0, libserver.so)  // inlines: AddToHead, AddToTail, CDOTAUserMsg_AbilitySteal_t, CNetMessagePB, CUserMessagePB, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTABaseAbility*>, CopyConstruct<char const*>, Element, FStrEq, FindGameEvent<CDOTAUserMsg_AbilitySteal_t>, FindOrCreateGameEvent<CDOTAUserMsg_AbilitySteal_t>, Get, GetAbilityName, GetForModify, GetInstance, GrowMemory, GrowVector, InsertBefore, NetworkStateChanged, PostEvent<CDOTAUserMsg_AbilitySteal_t>, Purge, RemoveAll, SendUserMessage<CDOTAUserMsg_AbilitySteal_t>, Set, SetStolen, ShiftElementsRight, ToDOTABaseNPC, ToDOTABaseNPCHero, V_memmove, V_strncpy<int>, _V_strcmp, entindex, memmove, operator CBaseEntity*, operator=<bool>, operator=<float>, operator[], set_ability_id, set_ability_level, set_has_ability_id, set_has_ability_level, set_has_player_id, set_player_id, ~CDOTAUserMsg_AbilitySteal_t, ~CNetMessagePB, ~CUserMessagePB, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, CEntityInstance::GetEntityIndex, CreateUnitEvent, CUtlMemory<char const*, int>::Grow, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), memmove, _V_strncpy, DOTA_EmitSound, CBaseEntity::StopSound (45 total)
// strings: "<NoAbilityName>", "Hero_Rubick.SpellSteal.Complete", "Hero_Rubick.SpellSteal.Cast", "modifier_rubick_spell_steal", "rubick_empty1", "rubick_empty2" (13 total)
// globals: INVALID_ITEM_DEF_INDEX, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilitySteal_t>(bool)::s_hEvent
__int64 __fastcall CDOTA_Ability_Rubick_SpellSteal::OnProjectileHit(
        CDOTA_Ability_Rubick_SpellSteal *const this,
        EHANDLE hTarget,
        const Vector *const vLocation)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  const char *v8; // rbx
  CDOTA_BaseNPC *v9; // rax
  CEntityIndex v10; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  int i; // r13d
  int m_Size; // ebx
  __int64 v17; // rbx
  __m128i v18; // xmm0
  float v19; // ebx
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC_Hero *v23; // rdi
  __int64 v25; // rax
  __int64 v26; // r13
  int j; // r12d
  const char **v28; // rax
  __int64 v29; // rbx
  char *v30; // r14
  int v31; // eax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v33; // rax
  int v34; // ebx
  CDOTABaseAbility **v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v38; // r12
  __int64 v39; // r13
  __int64 v40; // rbx
  const char *v41; // r12
  CDOTA_BaseNPC *v42; // rax
  float v43; // xmm1_4
  CDOTA_BaseNPC *v44; // rbx
  CDOTA_BaseNPC *v45; // rax
  __int64 v46; // r12
  CDOTABaseAbility *AbilityByName; // r14
  CDOTA_BaseNPC *v48; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v50; // rbx
  int delta; // eax
  const char *v52; // rbx
  DOTAAbilityData_t *v53; // rax
  const char *v54; // rax
  CDOTAGameManager *v55; // rax
  __int64 v56; // r12
  int m_Value; // eax
  IGameEventSystem *v58; // rbx
  void (__fastcall *v59)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, CUtlVector<char*,CUtlMemory<char*,int> > *, __int64); // r13
  __int64 v60; // r13
  CDOTABaseAbility *v61; // r12
  const char *v62; // rbx
  CDOTA_BaseNPC *v63; // rax
  CDOTABaseAbility *v64; // rbx
  CDOTA_BaseNPC *v65; // rax
  CDOTABaseAbility *v66; // rax
  CDOTA_BaseNPC *v67; // rax
  CDOTABaseAbility *v68; // rax
  CDOTA_BaseNPC *v69; // rax
  CDOTA_BaseNPC_Hero *v70; // rdi
  CDOTA_BaseNPC *v71; // rax
  CDOTABaseAbility *v72; // rax
  CDOTA_BaseNPC *v73; // rax
  CDOTABaseAbility *v74; // rax
  CDOTA_BaseNPC *v75; // rax
  CDOTABaseAbility *v76; // rax
  CDOTA_BaseNPC *v77; // rax
  const char **p_m_pszAbilityName; // rax
  const char *v79; // rbx
  int v80; // r13d
  __int64 v81; // r14
  const char *v82; // rax
  int v83; // r14d
  const char *v84; // r12
  __int64 v85; // rbx
  const char *v86; // rax
  CDOTABaseAbility *pStealAbility; // [rsp+30h] [rbp-250h]
  int iStealAbilityIndex; // [rsp+38h] [rbp-248h]
  const char *iHiddenAbilityIndex; // [rsp+40h] [rbp-240h]
  char iHiddenAbilityIndexa; // [rsp+40h] [rbp-240h]
  int iHiddenAbilityIndexb; // [rsp+40h] [rbp-240h]
  const char *iHiddenAbilityIndexc; // [rsp+40h] [rbp-240h]
  CDOTA_BaseNPC *v93; // [rsp+48h] [rbp-238h]
  CDOTABaseAbility *pExistingAbility; // [rsp+58h] [rbp-228h] BYREF
  CUtlVector<char const*,CUtlMemory<char const*,int> > stealAbilities; // [rsp+60h] [rbp-220h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > stealAbilityLevels; // [rsp+80h] [rbp-200h] BYREF
  CUtlVector<CDOTABaseAbility*,CUtlMemory<CDOTABaseAbility*,int> > vecStolenAbilities; // [rsp+A0h] [rbp-1E0h] BYREF
  CUtlVector<char*,CUtlMemory<char*,int> > secondaryAbilityNames; // [rsp+C0h] [rbp-1C0h] BYREF
  int v99; // [rsp+D8h] [rbp-1A8h]
  int AbilityIndex; // [rsp+DCh] [rbp-1A4h]
  int v101; // [rsp+E0h] [rbp-1A0h]
  KeyValues kv; // [rsp+F0h] [rbp-190h] BYREF
  CRecipientFilter filter; // [rsp+110h] [rbp-170h] BYREF
  unsigned __int64 v104; // [rsp+248h] [rbp-38h]

  v104 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_hStealTarget);
  v93 = v6;
  if ( v6 == 0 )
    return 1;
  if ( BYTE3(v6[7]._vptr_IHandleEntity) == 0 )
    return 1;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) == 0 )
    return 1;
  pStealAbility = CEntityHandle::operator CEntityInstance *(&this->m_hStealAbility);
  if ( pStealAbility == 0 || (*(pStealAbility->_vptr_IHandleEntity + 305))(pStealAbility) == 0 )
    return 1;
  v8 = "<NoAbilityName>";
  v9 = CDOTABaseAbility::GetCaster(this);
  v10.m_Data = CEntityInstance::GetEntityIndex(v9).m_Data;
  CreateUnitEvent(v10, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  stealAbilities.m_Size = 0;
  stealAbilities.m_Memory.m_pMemory = 0;
  stealAbilities.m_Memory.m_nAllocationCount = 0;
  stealAbilities.m_Memory.m_nGrowSize = 0;
  m_pAbilityData = pStealAbility->m_pAbilityData;
  stealAbilityLevels.m_Size = 0;
  stealAbilityLevels.m_Memory.m_pMemory = 0;
  stealAbilityLevels.m_Memory.m_nAllocationCount = 0;
  stealAbilityLevels.m_Memory.m_nGrowSize = 0;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    v8 = "<NoAbilityName>";
    if ( m_pszAbilityName != 0 )
      v8 = m_pszAbilityName;
  }
  CUtlMemory<char const*,int>::Grow(&stealAbilities.m_Memory, 1);
  ++stealAbilities.m_Size;
  if ( stealAbilities.m_Memory.m_pMemory != 0 )
    *stealAbilities.m_Memory.m_pMemory = v8;
  if ( (*(pStealAbility->_vptr_IHandleEntity + 303))(pStealAbility) != 0 )
  {
    secondaryAbilityNames.m_Size = 0;
    secondaryAbilityNames.m_Memory.m_pMemory = 0;
    secondaryAbilityNames.m_Memory.m_nAllocationCount = 0;
    secondaryAbilityNames.m_Memory.m_nGrowSize = 0;
    v13 = (*(pStealAbility->_vptr_IHandleEntity + 303))(pStealAbility);
    V_SplitString(v13, ";", &secondaryAbilityNames);
    v14 = 0;
    for ( i = 0; secondaryAbilityNames.m_Size > i; ++v14 )
    {
      m_Size = stealAbilities.m_Size;
      iHiddenAbilityIndex = secondaryAbilityNames.m_Memory.m_pMemory[v14];
      if ( stealAbilities.m_Size + 1 > stealAbilities.m_Memory.m_nAllocationCount )
        CUtlMemory<char const*,int>::Grow(
          &stealAbilities.m_Memory,
          stealAbilities.m_Size + 1 - stealAbilities.m_Memory.m_nAllocationCount);
      ++stealAbilities.m_Size;
      if ( m_Size > 0 )
        memmove(stealAbilities.m_Memory.m_pMemory + 1, stealAbilities.m_Memory.m_pMemory, 8LL * m_Size);
      if ( stealAbilities.m_Memory.m_pMemory != 0 )
        *stealAbilities.m_Memory.m_pMemory = iHiddenAbilityIndex;
      ++i;
    }
    secondaryAbilityNames.m_Size = 0;
    if ( (secondaryAbilityNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&secondaryAbilityNames.m_Memory);
      if ( (secondaryAbilityNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&secondaryAbilityNames.m_Memory);
    }
  }
  if ( (*(pStealAbility->_vptr_IHandleEntity + 304))(pStealAbility) != 0 )
  {
    secondaryAbilityNames.m_Size = 0;
    secondaryAbilityNames.m_Memory.m_pMemory = 0;
    secondaryAbilityNames.m_Memory.m_nAllocationCount = 0;
    secondaryAbilityNames.m_Memory.m_nGrowSize = 0;
    v25 = (*(pStealAbility->_vptr_IHandleEntity + 304))(pStealAbility);
    V_SplitString(v25, ";", &secondaryAbilityNames);
    v26 = 0;
    for ( j = 0; secondaryAbilityNames.m_Size > j; ++v26 )
    {
      v29 = stealAbilities.m_Size;
      v30 = secondaryAbilityNames.m_Memory.m_pMemory[v26];
      v31 = stealAbilities.m_Size;
      if ( stealAbilities.m_Size == stealAbilities.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char const*,int>::Grow(&stealAbilities.m_Memory, 1);
        v31 = stealAbilities.m_Size;
      }
      stealAbilities.m_Size = v31 + 1;
      v28 = &stealAbilities.m_Memory.m_pMemory[v29];
      if ( v28 != 0 )
        *v28 = v30;
      ++j;
    }
    secondaryAbilityNames.m_Size = 0;
    if ( (secondaryAbilityNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&secondaryAbilityNames.m_Memory);
      if ( (secondaryAbilityNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&secondaryAbilityNames.m_Memory);
    }
  }
  if ( stealAbilities.m_Size == 4 )
  {
    v77 = CDOTABaseAbility::GetCaster(this);
    if ( !CDOTA_BaseNPC::HasScepter(v77) )
    {
      p_m_pszAbilityName = &pStealAbility->m_pAbilityData->m_pszAbilityName;
      if ( p_m_pszAbilityName == 0 || (v79 = *p_m_pszAbilityName, *p_m_pszAbilityName == 0) )
      {
        iHiddenAbilityIndexc = "<NoAbilityName>";
        goto LABEL_126;
      }
      if ( v79 == "shredder_chakram"
        || strcmp(*p_m_pszAbilityName, "shredder_chakram") == 0
        || v79 == "shredder_return_chakram" )
      {
        iHiddenAbilityIndexc = *p_m_pszAbilityName;
      }
      else
      {
        iHiddenAbilityIndexc = *p_m_pszAbilityName;
        if ( strcmp(*p_m_pszAbilityName, "shredder_return_chakram") != 0 )
          goto LABEL_125;
      }
      v83 = stealAbilities.m_Size - 1;
      v84 = *p_m_pszAbilityName;
      v85 = stealAbilities.m_Size - 1;
      do
      {
        v86 = stealAbilities.m_Memory.m_pMemory[v85];
        if ( v86 == "shredder_chakram_2"
          || strcmp(stealAbilities.m_Memory.m_pMemory[v85], "shredder_chakram_2") == 0
          || v86 == "shredder_return_chakram_2"
          || strcmp(stealAbilities.m_Memory.m_pMemory[v85], "shredder_return_chakram_2") == 0 )
        {
          CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::Remove(&stealAbilities, v83);
        }
        --v83;
        --v85;
      }
      while ( v83 != -1 );
      v79 = v84;
LABEL_125:
      if ( v79 == "shredder_chakram_2" )
      {
LABEL_129:
        v80 = stealAbilities.m_Size - 1;
        if ( stealAbilities.m_Size - 1 >= 0 )
        {
          v81 = v80;
          do
          {
            v82 = stealAbilities.m_Memory.m_pMemory[v81];
            if ( v82 == "shredder_chakram"
              || strcmp(stealAbilities.m_Memory.m_pMemory[v81], "shredder_chakram") == 0
              || v82 == "shredder_return_chakram"
              || strcmp(stealAbilities.m_Memory.m_pMemory[v81], "shredder_return_chakram") == 0 )
            {
              CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::Remove(&stealAbilities, v80);
            }
            --v80;
            --v81;
          }
          while ( v80 != -1 );
        }
        goto LABEL_51;
      }
LABEL_126:
      if ( strcmp(iHiddenAbilityIndexc, "shredder_chakram_2") != 0
        && iHiddenAbilityIndexc != "shredder_return_chakram_2"
        && strcmp(iHiddenAbilityIndexc, "shredder_return_chakram_2") != 0 )
      {
        goto LABEL_51;
      }
      goto LABEL_129;
    }
  }
LABEL_51:
  CDOTAUserMsg_AbilitySteal::CDOTAUserMsg_AbilitySteal(&secondaryAbilityNames);
  *&secondaryAbilityNames.m_Size = off_4608070;
  CRecipientFilter::CRecipientFilter(&filter);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, GlobalTeam);
  CRecipientFilter::MakeReliable(&filter);
  v33 = CDOTABaseAbility::GetCaster(this);
  if ( v33 != 0 && (v33->m_iUnitType & 1) != 0 )
  {
    delta = v33[1].m_pfnBlocked.__delta;
    v52 = "<NoAbilityName>";
    secondaryAbilityNames.m_Memory.m_nAllocationCount |= 1u;
    v99 = delta;
    v53 = pStealAbility->m_pAbilityData;
    if ( v53 != 0 )
    {
      v54 = v53->m_pszAbilityName;
      v52 = "<NoAbilityName>";
      if ( v54 != 0 )
        v52 = v54;
    }
    v55 = DOTAGameManager();
    AbilityIndex = CDOTAGameManager::GetAbilityIndex(v55, v52);
    v56 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilitySteal_t>(bool)::s_hEvent;
    m_Value = pStealAbility->m_iLevel.m_Value;
    secondaryAbilityNames.m_Memory.m_nAllocationCount |= 6u;
    v101 = m_Value;
    v58 = g_pGameEventSystem;
    v59 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AbilitySteal_t>(bool)::s_hEvent);
    v59(v58, 0, 0, &filter, v56, &secondaryAbilityNames, 40);
  }
  vecStolenAbilities.m_Size = 0;
  v34 = 0;
  vecStolenAbilities.m_Memory.m_pMemory = 0;
  vecStolenAbilities.m_Memory.m_nAllocationCount = 0;
  vecStolenAbilities.m_Memory.m_nGrowSize = 0;
  do
  {
    v36 = CDOTABaseAbility::GetCaster(this);
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v36, v34);
    v38 = AbilityByIndex;
    if ( AbilityByIndex != 0 && AbilityByIndex->m_bStolen.m_Value )
    {
      v39 = vecStolenAbilities.m_Size;
      if ( vecStolenAbilities.m_Size == vecStolenAbilities.m_Memory.m_nAllocationCount )
        CUtlMemory<CDOTABaseAbility *,int>::Grow(&vecStolenAbilities.m_Memory, 1);
      ++vecStolenAbilities.m_Size;
      v35 = &vecStolenAbilities.m_Memory.m_pMemory[v39];
      if ( v35 != 0 )
        *v35 = v38;
    }
    ++v34;
  }
  while ( v34 != 24 );
  if ( stealAbilities.m_Size <= 0 )
  {
    iHiddenAbilityIndexa = 1;
  }
  else
  {
    iHiddenAbilityIndexa = 1;
    v40 = 0;
    do
    {
      while ( 1 )
      {
        v41 = stealAbilities.m_Memory.m_pMemory[v40];
        v42 = CDOTABaseAbility::GetCaster(this);
        pExistingAbility = CDOTA_BaseNPC::FindAbilityByName(v42, v41, 0);
        if ( pExistingAbility == 0 )
          break;
        CUtlVectorBase<CDOTABaseAbility *,CUtlMemory<CDOTABaseAbility *,int>>::FindAndFastRemove(
          &vecStolenAbilities,
          &pExistingAbility);
        if ( stealAbilities.m_Size <= ++v40 )
          goto LABEL_66;
      }
      ++v40;
      iHiddenAbilityIndexa = 0;
    }
    while ( stealAbilities.m_Size > v40 );
  }
LABEL_66:
  KeyValues::KeyValues(&kv, "modifier_rubick_spell_steal");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v43);
  v44 = CDOTABaseAbility::GetCaster(this);
  v45 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v45, v44, this, "modifier_rubick_spell_steal", &kv, 0);
  if ( iHiddenAbilityIndexa == 0 || vecStolenAbilities.m_Size != 0 )
  {
    if ( stealAbilities.m_Size <= 0 )
    {
      iHiddenAbilityIndexb = 7;
    }
    else
    {
      iHiddenAbilityIndexb = 7;
      v46 = 0;
      iStealAbilityIndex = 4;
      do
      {
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v93, stealAbilities.m_Memory.m_pMemory[v46], 0);
        v48 = CDOTABaseAbility::GetCaster(this);
        Ability = DOTA_CreateAbility(stealAbilities.m_Memory.m_pMemory[v46], v48);
        v50 = Ability;
        if ( Ability != 0 )
        {
          if ( !Ability->m_bStolen.m_Value )
          {
            (*(Ability->_vptr_IHandleEntity + 22))(Ability, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v50->m_bStolen.m_Value = 1;
          }
          if ( v46 != 0 && (*(v50->_vptr_IHandleEntity + 306))(v50) != 0 )
          {
            CDOTABaseAbility::SetHidden(v50, 1);
            CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(this, v50, iHiddenAbilityIndexb++, AbilityByName);
          }
          else
          {
            CDOTABaseAbility::SetHidden(v50, 0);
            CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(this, v50, iStealAbilityIndex++, AbilityByName);
          }
        }
        ++v46;
      }
      while ( v46 < stealAbilities.m_Size );
      if ( iStealAbilityIndex != 4 )
      {
        if ( iStealAbilityIndex != 5 )
          goto LABEL_88;
        goto LABEL_104;
      }
    }
    v65 = CDOTABaseAbility::GetCaster(this);
    v66 = DOTA_CreateAbility("rubick_empty1", v65);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(this, v66, 4, 0);
LABEL_104:
    v67 = CDOTABaseAbility::GetCaster(this);
    v68 = DOTA_CreateAbility("rubick_empty2", v67);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(this, v68, 5, 0);
LABEL_88:
    switch ( iHiddenAbilityIndexb )
    {
      case 7:
        v71 = CDOTABaseAbility::GetCaster(this);
        v72 = DOTA_CreateAbility("rubick_hidden1", v71);
        CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(this, v72, 7, 0);
        break;
      case 8:
        break;
      case 9:
        goto LABEL_115;
      default:
        goto LABEL_91;
    }
    v73 = CDOTABaseAbility::GetCaster(this);
    v74 = DOTA_CreateAbility("rubick_hidden2", v73);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(this, v74, 8, 0);
LABEL_115:
    v75 = CDOTABaseAbility::GetCaster(this);
    v76 = DOTA_CreateAbility("rubick_hidden3", v75);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(this, v76, 9, 0);
LABEL_91:
    if ( stealAbilities.m_Size > 0 )
    {
      v60 = 0;
      do
      {
        v61 = CDOTA_BaseNPC::FindAbilityByName(v93, stealAbilities.m_Memory.m_pMemory[v60], 0);
        v62 = stealAbilities.m_Memory.m_pMemory[v60];
        v63 = CDOTABaseAbility::GetCaster(this);
        v64 = CDOTA_BaseNPC::FindAbilityByName(v63, v62, 0);
        if ( v64 != 0 && v61 != 0 && v64->m_iLevel.m_Value < v61->m_iLevel.m_Value )
        {
          do
            CDOTABaseAbility::UpgradeAbility(v64, 0);
          while ( v64->m_iLevel.m_Value < v61->m_iLevel.m_Value );
        }
        ++v60;
      }
      while ( v60 < stealAbilities.m_Size );
    }
    if ( (*(pStealAbility->_vptr_IHandleEntity + 310))(pStealAbility) != 0 )
    {
      v17 = (*(pStealAbility->_vptr_IHandleEntity + 310))(pStealAbility);
      (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      _V_strncpy(&this->m_ActivityModifier, v17, 256);
    }
    else
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      _V_strncpy(&this->m_ActivityModifier, "", 256);
    }
    *v18.m128i_i64 = (*(pStealAbility->_vptr_IHandleEntity + 232))(pStealAbility);
    v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
    if ( *v18.m128i_i32 != this->m_fStolenCastPoint.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fStolenCastPoint.m_Value = v19;
    }
    v20 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Rubick.SpellSteal.Complete", v20);
    v21 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::StopSound(v21, "Hero_Rubick.SpellSteal.Cast");
    v22 = CDOTABaseAbility::GetCaster(this);
    if ( v22 != 0 && (v22->m_iUnitType & 1) != 0 )
      v23 = v22;
    else
      v23 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v23,
      0,
      kill_eater_event_t::kKillEaterEventType_Rubick_SpellsStolen,
      1,
      INVALID_ITEM_DEF_INDEX);
    if ( (*(pStealAbility->_vptr_IHandleEntity + 214))(pStealAbility) == 1 )
    {
      v69 = CDOTABaseAbility::GetCaster(this);
      if ( v69 != 0 && (v69->m_iUnitType & 1) != 0 )
        v70 = v69;
      else
        v70 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v70,
        0,
        kill_eater_event_t::kKillEaterEventType_Rubick_UltimatesStolen,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    KeyValues::~KeyValues(&kv);
    vecStolenAbilities.m_Size = 0;
    if ( (vecStolenAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTABaseAbility *,int>::Purge(&vecStolenAbilities.m_Memory);
      if ( (vecStolenAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTABaseAbility *,int>::Purge(&vecStolenAbilities.m_Memory);
    }
    CRecipientFilter::~CRecipientFilter(&filter);
    *&secondaryAbilityNames.m_Size = &off_4607EF0;
    CDOTAUserMsg_AbilitySteal::~CDOTAUserMsg_AbilitySteal(&secondaryAbilityNames);
    stealAbilityLevels.m_Size = 0;
    if ( (stealAbilityLevels.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&stealAbilityLevels.m_Memory);
      if ( (stealAbilityLevels.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&stealAbilityLevels.m_Memory);
    }
    stealAbilities.m_Size = 0;
    if ( (stealAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char const*,int>::Purge(&stealAbilities.m_Memory);
      if ( (stealAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_34;
    }
    return 1;
  }
  KeyValues::~KeyValues(&kv);
  vecStolenAbilities.m_Size = 0;
  if ( (vecStolenAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTABaseAbility *,int>::Purge(&vecStolenAbilities.m_Memory);
    if ( (vecStolenAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTABaseAbility *,int>::Purge(&vecStolenAbilities.m_Memory);
  }
  CRecipientFilter::~CRecipientFilter(&filter);
  *&secondaryAbilityNames.m_Size = &off_4607EF0;
  CDOTAUserMsg_AbilitySteal::~CDOTAUserMsg_AbilitySteal(&secondaryAbilityNames);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&stealAbilityLevels);
  stealAbilities.m_Size = 0;
  if ( (stealAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char const*,int>::Purge(&stealAbilities.m_Memory);
    if ( (stealAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_34:
      CUtlMemory<char const*,int>::Purge(&stealAbilities.m_Memory);
  }
  return 1;
}


// CDOTA_Ability_Rubick_SpellSteal::CastFilterResult  (line 1252, @0x0000000002cd68d0, libserver.so)  // inlines: GetLastUsedActiveAbility, GetModifier_Constant_First, IsListeningToEvent, IsTempestDouble, ToDOTABaseNPCHero
// calls: CUtlString::Get, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Ability_Rubick_SpellSteal::CastFilterResult(
        CDOTA_Ability_Rubick_SpellSteal *const this,
        CDOTA_BaseNPC *pTarget)
{
  uint32 m_iUnitType; // eax
  const char *v6; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *Caster; // rax
  __int64 v9; // rdx

  if ( pTarget != 0
    && ((m_iUnitType = pTarget->m_iUnitType) & 0x800) == 0
    && (m_iUnitType & 1) != 0
    && (v6 = CUtlString::Get(&pTarget[1].m_bUpdateLayerPriorities),
        (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(pTarget, v6, 0)) != 0)
    && (*(AbilityByName->_vptr_IHandleEntity + 305))(AbilityByName) != 0
    && (CDOTABaseAbility::GetCaster(this) == 0
     || (Caster = CDOTABaseAbility::GetCaster(this), (v9 = Caster->m_ModifierManager.m_buffsForModifiers[166]) == 0xFF)
     || Caster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size <= 0
     || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
          &Caster->m_ModifierManager,
          modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
          &CModifierParams::s_Default) != 1.0) )
  {
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
  }
  else
  {
    return 23;
  }
}


// CDOTA_Ability_Rubick_SpellSteal::GetCustomCastError  (line 1275, @0x0000000002cc8e30, libserver.so)
// strings: "#dota_hud_error_cant_steal_spell"
const char *__fastcall CDOTA_Ability_Rubick_SpellSteal::GetCustomCastError(
        CDOTA_Ability_Rubick_SpellSteal *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_steal_spell";
}


// CDOTA_Ability_Rubick_SpellSteal::OnSaveState  (line 1282, @0x0000000002cd71f0, libserver.so)  // inlines: DOTAGameRules, FindModifierByName, GetGameTime
// calls: CDOTABaseAbility::OnSaveState, CDOTABaseAbility::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, KeyValues::SetFloat
// strings: "modifier_rubick_spell_steal", "spell_steal_duration"
bool __fastcall CDOTA_Ability_Rubick_SpellSteal::OnSaveState(
        CDOTA_Ability_Rubick_SpellSteal *const this,
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
  Factory = CModifieractoryDictionary::FindFactory(v5, "modifier_rubick_spell_steal");
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                     &Caster->m_ModifierManager,
                     Factory,
                     "modifier_rubick_spell_steal",
                     0);
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v8 = 0.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    KeyValues::SetFloat(pKV, "spell_steal_duration", v8);
  }
  return 1;
}


// CDOTA_Ability_Rubick_SpellSteal::OnLoadState  (line 1299, @0x0000000002ccdbd0, libserver.so)
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetFloat, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "spell_steal_duration", "modifier_rubick_spell_steal"
bool __fastcall CDOTA_Ability_Rubick_SpellSteal::OnLoadState(
        CDOTA_Ability_Rubick_SpellSteal *const this,
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
  if ( KeyValues::GetFloat(pKV, "spell_steal_duration", v4) > 0.0 )
  {
    KeyValues::KeyValues(&kv, "modifier_rubick_spell_steal");
    KeyValues::SetFloat(&kv, "duration", v5);
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, Caster, this, "modifier_rubick_spell_steal", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex  (line 1318, @0x0000000002d16060, libserver.so)  // inlines: AddAbilityToPendingDelete, AddToTail, CopyConstruct<CDOTABaseAbility*>, Element, GrowMemory, Min<float>, NetworkStateChanged, Set, SetOverrideCastPoint, SetRefCountsModifiers, operator[]
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_Buff::Destroy, CDOTABaseAbility::SetActivated, CDOTA_BaseNPC::RemoveAbilityFromIndex, CDOTA_BaseNPC::SetAbilityByIndex, CDOTABaseAbility::ToggleAbility, CUtlMemory<CDOTABaseAbility*, int>::Grow
// callers: CDOTA_Modifier_Rubick_SpellSteal::OnDestroy, CDOTA_Ability_Rubick_SpellSteal::OnProjectileHit
void __fastcall CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(
        CDOTA_Ability_Rubick_SpellSteal *const this,
        CDOTABaseAbility *pAbility,
        int iIndex,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v10; // r12
  CDOTA_Buff *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  __int64 m_Size; // rdx
  int v14; // ecx
  CDOTABaseAbility **v15; // rax
  CDOTA_BaseNPC *v16; // rax
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v18; // rax
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  float v22; // xmm0_4
  int v23; // [rsp+4h] [rbp-3Ch]
  float pRubicka; // [rsp+8h] [rbp-38h]
  CDOTA_Unit_Hero_Rubick *pRubick; // [rsp+8h] [rbp-38h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(Caster, iIndex);
  v10 = AbilityByIndex;
  if ( AbilityByIndex != 0 )
  {
    if ( AbilityByIndex->m_bToggleState.m_Value )
      CDOTABaseAbility::ToggleAbility(AbilityByIndex);
    v11 = (*(v10->_vptr_IHandleEntity + 263))(v10);
    if ( v11 != 0 )
      CDOTA_Buff::Destroy(v11, 0, 0, 0);
    (*(v10->_vptr_IHandleEntity + 308))(v10);
    CDOTABaseAbility::SetActivated(v10, 0);
    if ( v10->m_iModifierRefCount > 0 )
    {
      v12 = CDOTABaseAbility::GetCaster(this);
      if ( v12 != 0 )
      {
        m_Size = v12[1].m_SceneEvents.m_Size;
        v14 = v12[1].m_SceneEvents.m_Size;
        if ( m_Size == v12[1].m_SceneEvents.m_Memory.m_nAllocationCount )
        {
          v23 = v12[1].m_SceneEvents.m_Size;
          pRubick = v12;
          CUtlMemory<CDOTABaseAbility *,int>::Grow(&v12[1].m_SceneEvents.m_Memory, 1);
          v12 = pRubick;
          m_Size = v23;
          v14 = pRubick->m_AbilitiesPendingDelete.m_Size;
        }
        v12[1].m_SceneEvents.m_Size = v14 + 1;
        v15 = &v12[1].m_SceneEvents.m_Memory.m_pMemory[m_Size];
        if ( v15 != 0 )
          *v15 = v10;
        v16 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::RemoveAbilityFromIndex(v16, iIndex);
      }
    }
  }
  vptr_IHandleEntity = pAbility->_vptr_IHandleEntity;
  pAbility->m_bRefCountsModifiers = 1;
  vptr_IHandleEntity[307](pAbility, pSourceAbility);
  if ( ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x4000000) == 0 )
  {
    *v19.m128_u64 = (*(pAbility->_vptr_IHandleEntity + 231))(pAbility);
    v20 = v19;
    v21 = _mm_cmplt_ss(0x3DCCCCCDu, v19);
    LODWORD(v22) = _mm_andnot_ps(v21, v20).m128_u32[0] | v21.m128_i32[0] & 0x3DCCCCCD;
    if ( v22 != pAbility->m_flOverrideCastPoint.m_Value )
    {
      pRubicka = v22;
      (*(pAbility->_vptr_IHandleEntity + 22))(pAbility, 848, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pAbility->m_flOverrideCastPoint.m_Value = pRubicka;
    }
  }
  v18 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SetAbilityByIndex(v18, pAbility, iIndex);
}


// CDOTA_Modifier_Rubick_SpellSteal::~CDOTA_Modifier_Rubick_SpellSteal  (line 1372, @0x0000000002d281b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rubick_SpellSteal::~CDOTA_Modifier_Rubick_SpellSteal(
        CDOTA_Modifier_Rubick_SpellSteal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4617F10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rubick_SpellSteal::~CDOTA_Modifier_Rubick_SpellSteal  (line 1372, @0x0000000002d281d0, libserver.so)  // inlines: ~CDOTA_Modifier_Rubick_SpellSteal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rubick_SpellSteal::~CDOTA_Modifier_Rubick_SpellSteal(
        CDOTA_Modifier_Rubick_SpellSteal *const this)
{
  this->_vptr_CDOTA_Buff = &off_4617F10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rubick_SpellSteal::IsPurgable  (line 1377, @0x0000000002d1d410, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_SpellSteal::IsPurgable(CDOTA_Modifier_Rubick_SpellSteal *const this)
{
  return 0;
}


// CDOTA_Modifier_Rubick_SpellSteal::RemoveOnDeath  (line 1383, @0x0000000002d1d420, libserver.so)
bool __fastcall CDOTA_Modifier_Rubick_SpellSteal::RemoveOnDeath(CDOTA_Modifier_Rubick_SpellSteal *const this)
{
  return 1;
}


// CDOTA_Modifier_Rubick_SpellSteal::OnCreated  (line 1397, @0x0000000002cc8e40, libserver.so)
void __fastcall CDOTA_Modifier_Rubick_SpellSteal::OnCreated(
        CDOTA_Modifier_Rubick_SpellSteal *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Rubick_SpellSteal::OnRefresh  (line 1406, @0x0000000002cc8e50, libserver.so)
void __fastcall CDOTA_Modifier_Rubick_SpellSteal::OnRefresh(
        CDOTA_Modifier_Rubick_SpellSteal *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Rubick_SpellSteal::SetAbilitiesPrivate  (line 1415, @0x0000000002ce18b0, libserver.so)
void __fastcall CDOTA_Modifier_Rubick_SpellSteal::SetAbilitiesPrivate(CDOTA_Modifier_Rubick_SpellSteal *const this)
{
  ;
}


// CDOTA_Modifier_Rubick_SpellSteal::OnDestroy  (line 1433, @0x0000000002d16240, libserver.so)  // inlines: NetworkStateChanged, Set, SetStolenScepter, operator=<bool>
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, DOTA_CreateAbility, CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex
// strings: "rubick_empty1", "rubick_empty2", "rubick_hidden1", "rubick_hidden2", "rubick_hidden3"
void __fastcall CDOTA_Modifier_Rubick_SpellSteal::OnDestroy(CDOTA_Modifier_Rubick_SpellSteal *const this)
{
  CDOTA_Ability_Rubick_SpellSteal *Ability; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTABaseAbility *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rbx

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v4 = DOTA_CreateAbility("rubick_empty1", Caster);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(Ability, v4, 4, 0);
    v5 = CDOTA_Buff::GetCaster(this);
    v6 = DOTA_CreateAbility("rubick_empty2", v5);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(Ability, v6, 5, 0);
    v7 = CDOTA_Buff::GetCaster(this);
    v8 = DOTA_CreateAbility("rubick_hidden1", v7);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(Ability, v8, 7, 0);
    v9 = CDOTA_Buff::GetCaster(this);
    v10 = DOTA_CreateAbility("rubick_hidden2", v9);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(Ability, v10, 8, 0);
    v11 = CDOTA_Buff::GetCaster(this);
    v12 = DOTA_CreateAbility("rubick_hidden3", v11);
    CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex(Ability, v12, 9, 0);
  }
  v13 = CDOTA_Buff::GetCaster(this);
  v14 = v13;
  if ( v13->m_bStolenScepter.m_Value )
  {
    (*(v13->_vptr_IHandleEntity + 22))(v13, 4004, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v14->m_bStolenScepter.m_Value = 0;
  }
}


// CDOTA_Modifier_Rubick_SpellSteal::DeclareFunctions  (line 1453, @0x0000000002cc8e60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rubick_SpellSteal::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rubick_SpellSteal::DeclareFunctions(CDOTA_Modifier_Rubick_SpellSteal *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_Rubick_SpellSteal::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Rubick_SpellSteal::GetActivityTranslationModifiers  (line 1460, @0x0000000002cd5b40, libserver.so)
// calls: CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_Rubick_SpellSteal::GetActivityTranslationModifiers(
        CDOTA_Modifier_Rubick_SpellSteal *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = CDOTA_Buff::GetAbility(this);
  *&result.m_eType = 2;
  if ( result.m_szVal != 0 )
    result.m_szVal += 912;
  else
    result.m_szVal = 0;
  return result;
}


// CDOTA_Unit_Hero_Rubick::ModifyOrAppendCriteria  (line 1473, @0x0000000002ccf930, libserver.so)
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria
void __fastcall CDOTA_Unit_Hero_Rubick::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_Rubick *const this,
        CResponseCriteriaSet *const set)
{
  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
}


// CDOTA_Ability_Rubick_Empty1::~CDOTA_Ability_Rubick_Empty1  (line 1508, @0x0000000002d2b8c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_Empty1::~CDOTA_Ability_Rubick_Empty1(CDOTA_Ability_Rubick_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_4618270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_Empty1::~CDOTA_Ability_Rubick_Empty1  (line 1508, @0x0000000002d2b8e0, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_Empty1
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_Empty1::~CDOTA_Ability_Rubick_Empty1(CDOTA_Ability_Rubick_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_4618270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_Empty1::Schema_DynamicBinding  (line 1510, @0x0000000002d1d430, libserver.so)
// globals: CDOTA_Ability_Rubick_Empty1::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Empty1::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Empty1 *const this)
{
  return CDOTA_Ability_Rubick_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1510, @0x0000000002d1d440, libserver.so)
// globals: CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::DestructInstance  (line 1510, @0x0000000002d1d450, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_Empty1>
void __fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::FreeInstance  (line 1510, @0x0000000002d1d470, libserver.so)
void __fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::CanAllocate  (line 1510, @0x0000000002d1d490, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1510, @0x0000000002d1d4a0, libserver.so)
// globals: CDOTA_Ability_Rubick_Empty1::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::AllocateInstance  (line 1510, @0x0000000002d24410, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::ConstructInstance  (line 1510, @0x0000000002d28e40, libserver.so)  // inlines: CDOTA_Ability_Rubick_Empty1, Construct<CDOTA_Ability_Rubick_Empty1>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4618270;
  }
  return p;
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1510, @0x0000000002d33cd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1510, @0x0000000002d33cf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal  (line 1510, @0x0000000002d50af0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "rubick_empty1", "CDOTA_Ability_Rubick_Empty1"
// globals: `guard variable for'CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class, CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo, CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class) != 0 )
  {
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_classInputs.m_Size = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_hNetworkSerializer = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pBaseClassInfo = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pClassInfo = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_flags = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pScriptClassDesc = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pInputs = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_nInputCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pOutputs = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_nOutputCount = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pGameClass = 0;
    CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class._vptr_CEntityClass = off_46181F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class);
    __cxa_atexit(
      CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_Empty1Class != 0 )
    return &CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class;
  if ( `guard variable for'CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo,
      "CDOTA_Ability_Rubick_Empty1",
      "rubick_empty1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo);
  }
  CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pClassInfo = &CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo;
  CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pBaseClassInfo = CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_Empty1Class = &CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class;
  CDOTA_Ability_Rubick_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty1ClassInfo.m_pClass = &CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class;
  CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_Empty1Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty1Class;
}


// CDOTA_Ability_Rubick_Empty2::~CDOTA_Ability_Rubick_Empty2  (line 1522, @0x0000000002d2b910, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_Empty2::~CDOTA_Ability_Rubick_Empty2(CDOTA_Ability_Rubick_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_4618D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_Empty2::~CDOTA_Ability_Rubick_Empty2  (line 1522, @0x0000000002d2b930, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_Empty2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_Empty2::~CDOTA_Ability_Rubick_Empty2(CDOTA_Ability_Rubick_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_4618D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_Empty2::Schema_DynamicBinding  (line 1524, @0x0000000002d1d4b0, libserver.so)
// globals: CDOTA_Ability_Rubick_Empty2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Empty2::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Empty2 *const this)
{
  return CDOTA_Ability_Rubick_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1524, @0x0000000002d1d4c0, libserver.so)
// globals: CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::DestructInstance  (line 1524, @0x0000000002d1d4d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_Empty2>
void __fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::FreeInstance  (line 1524, @0x0000000002d1d4f0, libserver.so)
void __fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::CanAllocate  (line 1524, @0x0000000002d1d510, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1524, @0x0000000002d1d520, libserver.so)
// globals: CDOTA_Ability_Rubick_Empty2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::AllocateInstance  (line 1524, @0x0000000002d24450, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::ConstructInstance  (line 1524, @0x0000000002d28e70, libserver.so)  // inlines: CDOTA_Ability_Rubick_Empty2, Construct<CDOTA_Ability_Rubick_Empty2>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4618D70;
  }
  return p;
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1524, @0x0000000002d33d20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1524, @0x0000000002d33d40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal  (line 1524, @0x0000000002d50e40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "rubick_empty2", "CDOTA_Ability_Rubick_Empty2"
// globals: `guard variable for'CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class, CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo, CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class) != 0 )
  {
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_classInputs.m_Size = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_hNetworkSerializer = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pBaseClassInfo = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pClassInfo = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_flags = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pScriptClassDesc = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pInputs = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_nInputCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pOutputs = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_nOutputCount = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pGameClass = 0;
    CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class._vptr_CEntityClass = off_4618CF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class);
    __cxa_atexit(
      CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_Empty2Class != 0 )
    return &CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class;
  if ( `guard variable for'CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo,
      "CDOTA_Ability_Rubick_Empty2",
      "rubick_empty2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo);
  }
  CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pClassInfo = &CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo;
  CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pBaseClassInfo = CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_Empty2Class = &CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class;
  CDOTA_Ability_Rubick_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Empty2ClassInfo.m_pClass = &CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class;
  CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_Empty2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Empty2Class;
}


// CDOTA_Ability_Rubick_Hidden1::~CDOTA_Ability_Rubick_Hidden1  (line 1536, @0x0000000002d2b960, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_Hidden1::~CDOTA_Ability_Rubick_Hidden1(CDOTA_Ability_Rubick_Hidden1 *const this)
{
  this->_vptr_IHandleEntity = &off_4619870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_Hidden1::~CDOTA_Ability_Rubick_Hidden1  (line 1536, @0x0000000002d2b980, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_Hidden1
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_Hidden1::~CDOTA_Ability_Rubick_Hidden1(CDOTA_Ability_Rubick_Hidden1 *const this)
{
  this->_vptr_IHandleEntity = &off_4619870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_Hidden1::Schema_DynamicBinding  (line 1538, @0x0000000002d1d530, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden1::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Hidden1::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Hidden1 *const this)
{
  return CDOTA_Ability_Rubick_Hidden1::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1538, @0x0000000002d1d540, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::DestructInstance  (line 1538, @0x0000000002d1d550, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_Hidden1>
void __fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::FreeInstance  (line 1538, @0x0000000002d1d570, libserver.so)
void __fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::CanAllocate  (line 1538, @0x0000000002d1d590, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1538, @0x0000000002d1d5a0, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden1::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Hidden1::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::AllocateInstance  (line 1538, @0x0000000002d24490, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::ConstructInstance  (line 1538, @0x0000000002d28ea0, libserver.so)  // inlines: CDOTA_Ability_Rubick_Hidden1, Construct<CDOTA_Ability_Rubick_Hidden1>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4619870;
  }
  return p;
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1538, @0x0000000002d33d70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1538, @0x0000000002d33d90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal  (line 1538, @0x0000000002d47cc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "rubick_hidden1", "CDOTA_Ability_Rubick_Hidden1"
// globals: `guard variable for'CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class, CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class, __dso_handle, CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo, CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class);
    CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class._vptr_CEntityClass = off_46197F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class);
    __cxa_atexit(
      CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_Hidden1Class != 0 )
    return &CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class;
  if ( `guard variable for'CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo,
      "CDOTA_Ability_Rubick_Hidden1",
      "rubick_hidden1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo);
  }
  CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class.m_pClassInfo = &CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo;
  CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class.m_pBaseClassInfo = CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_Hidden1Class = &CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class;
  CDOTA_Ability_Rubick_Hidden1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden1ClassInfo.m_pClass = &CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class;
  CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_Hidden1Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_Hidden1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden1Class;
}


// CDOTA_Ability_Rubick_Hidden2::~CDOTA_Ability_Rubick_Hidden2  (line 1550, @0x0000000002d2b9b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_Hidden2::~CDOTA_Ability_Rubick_Hidden2(CDOTA_Ability_Rubick_Hidden2 *const this)
{
  this->_vptr_IHandleEntity = &off_461A370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_Hidden2::~CDOTA_Ability_Rubick_Hidden2  (line 1550, @0x0000000002d2b9d0, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_Hidden2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_Hidden2::~CDOTA_Ability_Rubick_Hidden2(CDOTA_Ability_Rubick_Hidden2 *const this)
{
  this->_vptr_IHandleEntity = &off_461A370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_Hidden2::Schema_DynamicBinding  (line 1552, @0x0000000002d1d5b0, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Hidden2::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Hidden2 *const this)
{
  return CDOTA_Ability_Rubick_Hidden2::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1552, @0x0000000002d1d5c0, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::DestructInstance  (line 1552, @0x0000000002d1d5d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_Hidden2>
void __fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::FreeInstance  (line 1552, @0x0000000002d1d5f0, libserver.so)
void __fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::CanAllocate  (line 1552, @0x0000000002d1d610, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1552, @0x0000000002d1d620, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Hidden2::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::AllocateInstance  (line 1552, @0x0000000002d244d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::ConstructInstance  (line 1552, @0x0000000002d28ed0, libserver.so)  // inlines: CDOTA_Ability_Rubick_Hidden2, Construct<CDOTA_Ability_Rubick_Hidden2>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_461A370;
  }
  return p;
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1552, @0x0000000002d33dc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1552, @0x0000000002d33de0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal  (line 1552, @0x0000000002d4fdb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "rubick_hidden2", "CDOTA_Ability_Rubick_Hidden2"
// globals: `guard variable for'CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class, CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo, CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class) != 0 )
  {
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_classInputs.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_hNetworkSerializer = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pBaseClassInfo = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pClassInfo = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_flags = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pScriptClassDesc = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pInputs = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_nInputCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pOutputs = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_nOutputCount = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pGameClass = 0;
    CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class._vptr_CEntityClass = off_461A2F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class);
    __cxa_atexit(
      CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_Hidden2Class != 0 )
    return &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class;
  if ( `guard variable for'CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo,
      "CDOTA_Ability_Rubick_Hidden2",
      "rubick_hidden2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo);
  }
  CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pClassInfo = &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo;
  CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pBaseClassInfo = CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_Hidden2Class = &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class;
  CDOTA_Ability_Rubick_Hidden2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden2ClassInfo.m_pClass = &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class;
  CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_Hidden2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_Hidden2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden2Class;
}


// CDOTA_Ability_Rubick_Hidden3::~CDOTA_Ability_Rubick_Hidden3  (line 1564, @0x0000000002d2ba00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rubick_Hidden3::~CDOTA_Ability_Rubick_Hidden3(CDOTA_Ability_Rubick_Hidden3 *const this)
{
  this->_vptr_IHandleEntity = &off_461AE70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rubick_Hidden3::~CDOTA_Ability_Rubick_Hidden3  (line 1564, @0x0000000002d2ba20, libserver.so)  // inlines: ~CDOTA_Ability_Rubick_Hidden3
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rubick_Hidden3::~CDOTA_Ability_Rubick_Hidden3(CDOTA_Ability_Rubick_Hidden3 *const this)
{
  this->_vptr_IHandleEntity = &off_461AE70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rubick_Hidden3::Schema_DynamicBinding  (line 1566, @0x0000000002d1d630, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden3::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Hidden3::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Hidden3 *const this)
{
  return CDOTA_Ability_Rubick_Hidden3::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1566, @0x0000000002d1d640, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::DestructInstance  (line 1566, @0x0000000002d1d650, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rubick_Hidden3>
void __fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::FreeInstance  (line 1566, @0x0000000002d1d670, libserver.so)
void __fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::CanAllocate  (line 1566, @0x0000000002d1d690, libserver.so)
bool __fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1566, @0x0000000002d1d6a0, libserver.so)
// globals: CDOTA_Ability_Rubick_Hidden3::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rubick_Hidden3::s_pSchemaBinding;
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::AllocateInstance  (line 1566, @0x0000000002d24510, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::ConstructInstance  (line 1566, @0x0000000002d28f00, libserver.so)  // inlines: CDOTA_Ability_Rubick_Hidden3, Construct<CDOTA_Ability_Rubick_Hidden3>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_461AE70;
  }
  return p;
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1566, @0x0000000002d33e10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1566, @0x0000000002d33e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal  (line 1566, @0x0000000002d50100, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "rubick_hidden3", "CDOTA_Ability_Rubick_Hidden3"
// globals: `guard variable for'CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class, CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo, CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class) != 0 )
  {
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_classInputs.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_hNetworkSerializer = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pBaseClassInfo = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pClassInfo = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_flags = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pScriptClassDesc = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pInputs = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_nInputCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pOutputs = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_nOutputCount = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pGameClass = 0;
    CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class._vptr_CEntityClass = off_461ADF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class);
    __cxa_atexit(
      CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rubick_Hidden3Class != 0 )
    return &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class;
  if ( `guard variable for'CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo,
      "CDOTA_Ability_Rubick_Hidden3",
      "rubick_hidden3",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo);
  }
  CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pClassInfo = &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo;
  CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pBaseClassInfo = CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rubick_Hidden3Class = &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class;
  CDOTA_Ability_Rubick_Hidden3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rubick_Hidden3ClassInfo.m_pClass = &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class;
  CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rubick_Hidden3Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rubick_Hidden3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rubick_Hidden3Class;
}


